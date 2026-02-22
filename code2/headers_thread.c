/// c_include definition ///
/// typedef definition ///
typedef __builtin_va_list __gnuc_va_list;

typedef unsigned char __u_char;

typedef unsigned short int __u_short;

typedef unsigned int __u_int;

typedef unsigned long  int __u_long;

typedef unsigned short int __uint16_t;

typedef long long int __int64_t;

typedef unsigned long long int __uint64_t;

typedef long long int __quad_t;

typedef unsigned long long int __u_quad_t;

typedef unsigned long  int __ino_t;

typedef unsigned long long int  __ino64_t  ;

typedef long long int  __off64_t  ;

typedef long long int  __loff_t  ;

typedef struct __fsid_t  __fsid_t  ;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int    ;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long long int    ;

typedef unsigned long long int    ;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

typedef union anonymous_typeZ1 __mbstate_t;

typedef union anonymous_typeZ1  __darwin_mbstate_t  ;

typedef long __darwin_ptrdiff_t;

typedef unsigned long  int __darwin_size_t;

typedef __builtin_va_list __darwin_va_list;

typedef int __darwin_wchar_t;

typedef int  __darwin_rune_t  ;

typedef unsigned int __darwin_wint_t;

typedef unsigned long  int __darwin_clock_t;

typedef unsigned int  __darwin_socklen_t  ;

typedef long __darwin_ssize_t;

typedef long __darwin_time_t;

typedef long long int  __darwin_blkcnt_t  ;

typedef int  __darwin_blksize_t  ;

typedef int  __darwin_dev_t  ;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int  __darwin_gid_t  ;

typedef unsigned int  __darwin_id_t  ;

typedef unsigned long long int  __darwin_ino64_t  ;

typedef unsigned long long int  __darwin_ino_t  ;

typedef unsigned int  __darwin_mach_port_name_t  ;

typedef unsigned int  __darwin_mach_port_t  ;

typedef unsigned short int  __darwin_mode_t  ;

typedef long long int  __darwin_off_t  ;

typedef int  __darwin_pid_t  ;

typedef unsigned int  __darwin_sigset_t  ;

typedef int  __darwin_suseconds_t  ;

typedef unsigned int  __darwin_uid_t  ;

typedef unsigned int  __darwin_useconds_t  ;

typedef struct _opaque_pthread_attr_t  __darwin_pthread_attr_t  ;

typedef struct _opaque_pthread_cond_t  __darwin_pthread_cond_t  ;

typedef struct _opaque_pthread_condattr_t  __darwin_pthread_condattr_t  ;

typedef unsigned long  int __darwin_pthread_key_t;

typedef struct _opaque_pthread_mutex_t  __darwin_pthread_mutex_t  ;

typedef struct _opaque_pthread_mutexattr_t  __darwin_pthread_mutexattr_t  ;

typedef struct _opaque_pthread_once_t  __darwin_pthread_once_t  ;

typedef struct _opaque_pthread_rwlock_t  __darwin_pthread_rwlock_t  ;

typedef struct _opaque_pthread_rwlockattr_t  __darwin_pthread_rwlockattr_t  ;

typedef struct _opaque_pthread_t*  __darwin_pthread_t  ;

typedef int __darwin_nl_item;

typedef int __darwin_wctrans_t;

typedef unsigned int  __darwin_wctype_t  ;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  long u_int64_t;

typedef long long  register_t  ;

typedef long  intptr_t  ;

typedef unsigned long  int uintptr_t;

typedef unsigned long  long  user_addr_t  ;

typedef unsigned long  long  user_size_t  ;

typedef long long  user_ssize_t  ;

typedef long long  user_long_t  ;

typedef unsigned long  long  user_ulong_t  ;

typedef long long  user_time_t  ;

typedef long long  user_off_t  ;

typedef unsigned long  long  syscall_arg_t  ;

typedef unsigned long  int  clock_t  ;

typedef unsigned long  int  size_t  ;

typedef long  time_t  ;

typedef enum anonymous_typeY1 clockid_t;

typedef struct _opaque_pthread_attr_t  pthread_attr_t  ;

typedef struct _opaque_pthread_cond_t  pthread_cond_t  ;

typedef struct _opaque_pthread_condattr_t  pthread_condattr_t  ;

typedef unsigned long  int  pthread_key_t  ;

typedef struct _opaque_pthread_mutex_t  pthread_mutex_t  ;

typedef struct _opaque_pthread_mutexattr_t  pthread_mutexattr_t  ;

typedef struct _opaque_pthread_once_t  pthread_once_t  ;

typedef struct _opaque_pthread_rwlock_t  pthread_rwlock_t  ;

typedef struct _opaque_pthread_rwlockattr_t  pthread_rwlockattr_t  ;

typedef struct _opaque_pthread_t*  pthread_t  ;

typedef unsigned int qos_class_t;

typedef struct pthread_override_s* pthread_override_t;

typedef unsigned int  mach_port_t  ;

typedef unsigned int  sigset_t  ;

typedef int (*pthread_jit_write_callback_t)(void*);

typedef unsigned char u_char;

typedef unsigned short int u_short;

typedef unsigned int u_int;

typedef unsigned long  int u_long;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef unsigned long  long  u_quad_t  ;

typedef long long  quad_t  ;

typedef long long*  qaddr_t  ;

typedef char* caddr_t;

typedef int  daddr_t  ;

typedef int  dev_t  ;

typedef unsigned int  fixpt_t  ;

typedef long long int  blkcnt_t  ;

typedef int  blksize_t  ;

typedef unsigned int  gid_t  ;

typedef unsigned int  in_addr_t  ;

typedef unsigned short int  in_port_t  ;

typedef unsigned long long int  ino_t  ;

typedef unsigned long long int  ino64_t  ;

typedef int  key_t  ;

typedef unsigned short int  mode_t  ;

typedef unsigned short int  nlink_t  ;

typedef unsigned int  id_t  ;

typedef int  pid_t  ;

typedef long long int  off_t  ;

typedef int  segsz_t  ;

typedef int  swblk_t  ;

typedef unsigned int  uid_t  ;

typedef long  ssize_t  ;

typedef unsigned int  useconds_t  ;

typedef int  suseconds_t  ;

typedef unsigned long  int  rsize_t  ;

typedef int errno_t;

typedef struct fd_set  fd_set  ;

typedef int  fd_mask  ;

typedef unsigned int  fsblkcnt_t  ;

typedef unsigned int  fsfilcnt_t  ;

typedef struct fsignatures  fsignatures_t  ;

typedef struct fsupplement  fsupplement_t  ;

typedef struct fchecklv  fchecklv_t  ;

typedef struct fgetsigsinfo  fgetsigsinfo_t  ;

typedef struct fstore  fstore_t  ;

typedef struct fpunchhole  fpunchhole_t  ;

typedef struct ftrimactivefile  ftrimactivefile_t  ;

typedef struct fspecread  fspecread_t  ;

typedef struct fattributiontag  fattributiontag_t  ;

typedef struct _filesec*  filesec_t  ;

typedef enum anonymous_typeY5 filesec_property_t;

typedef int sem_t;

/// previous struct definition ///
struct _filesec;

/// struct definition ///
struct __fsid_t
{
    int __val[2];
};

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
    struct __darwin_pthread_handler_rec*  __next  ;
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
    struct __darwin_pthread_handler_rec*  __cleanup_stack  ;
    char __opaque[8176];
};

struct sched_param
{
    int sched_priority;
    char __opaque[4];
};

struct timespec
{
    long  tv_sec  ;
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

enum  anonymous_typeY1 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

enum { QOS_CLASS_USER_INTERACTIVE=(0x21),
QOS_CLASS_USER_INITIATED=(0x19),
QOS_CLASS_DEFAULT=(0x15),
QOS_CLASS_UTILITY=(0x11),
QOS_CLASS_BACKGROUND=(0x09),
QOS_CLASS_UNSPECIFIED=(0x00)
};

union anonymous_typeZ2
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};

union anonymous_typeZ3
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};

union anonymous_typeZ4
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};

union anonymous_typeZ5
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};

struct fd_set
{
    int  fds_bits[((((((1024)%(32))==0))?(((1024)/(32))):((((1024)/(32))+1))))]  ;
};

struct flock
{
    long long int  l_start  ;
    long long int  l_len  ;
    int  l_pid  ;
    short l_type;
    short l_whence;
};

struct flocktimeout
{
    struct flock  fl  ;
    struct timespec  timeout  ;
};

struct radvisory
{
    long long int  ra_offset  ;
    int ra_count;
};

struct fsignatures
{
    long long int  fs_file_start  ;
    void* fs_blob_start;
    unsigned long  int  fs_blob_size  ;
    unsigned long  int  fs_fsignatures_size  ;
    char fs_cdhash[20];
    int fs_hash_type;
};

struct fsupplement
{
    long long int  fs_file_start  ;
    long long int  fs_blob_start  ;
    unsigned long  int  fs_blob_size  ;
    int fs_orig_fd;
};

struct fchecklv
{
    long long int  lv_file_start  ;
    unsigned long  int  lv_error_message_size  ;
    void* lv_error_message;
};

struct fgetsigsinfo
{
    long long int  fg_file_start  ;
    int fg_info_request;
    int fg_sig_is_platform;
};

struct fstore
{
    unsigned int fst_flags;
    int fst_posmode;
    long long int  fst_offset  ;
    long long int  fst_length  ;
    long long int  fst_bytesalloc  ;
};

struct fpunchhole
{
    unsigned int fp_flags;
    unsigned int reserved;
    long long int  fp_offset  ;
    long long int  fp_length  ;
};

struct ftrimactivefile
{
    long long int  fta_offset  ;
    long long int  fta_length  ;
};

struct fspecread
{
    unsigned int fsr_flags;
    unsigned int reserved;
    long long int  fsr_offset  ;
    long long int  fsr_length  ;
};

struct fattributiontag
{
    unsigned int ft_flags;
    unsigned long  long ft_hash;
    char ft_attribution_name[255];
};

#pragma pack(4)
struct log2phys
{
    unsigned int l2p_flags;
    long long int  l2p_contigbytes  ;
    long long int  l2p_devoffset  ;
};
#pragma pack(pop)
enum  anonymous_typeY5 { FILESEC_OWNER=(1),
FILESEC_GROUP=(2),
FILESEC_UUID=(3),
FILESEC_MODE=(4),
FILESEC_ACL=(5),
FILESEC_GRPUUID=(6),
FILESEC_ACL_RAW=(100),
FILESEC_ACL_ALLOCSIZE=(101)
};

/// variable definition ///
extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
// source head

// header function
char* strdup(const char* );
int vsnprintf(char* , unsigned long  int , const char* , __builtin_va_list    );
int snprintf(char* , unsigned long  int , const char* , ...);
int sched_yield();
int sched_get_priority_min(int );
int sched_get_priority_max(int );
char* asctime(const struct tm*    );
unsigned long  int  clock() ;
char* ctime(const long*    );
double difftime(long    , long    );
struct tm*  getdate(const char* );
struct tm*  gmtime(const long*    );
struct tm*  localtime(const long*    );
long  mktime(struct tm*    ) ;
unsigned long  int  strftime(char* restrict , unsigned long  int  __maxsize  , const char* restrict , const struct tm* restrict    ) ;
char* strptime(const char* restrict , const char* restrict , struct tm* restrict    ) ;
long  time(long*    );
void tzset();
char* asctime_r(const struct tm* restrict    , char* restrict );
char* ctime_r(const long*    , char* );
struct tm*  gmtime_r(const long* restrict    , struct tm* restrict    );
struct tm*  localtime_r(const long* restrict    , struct tm* restrict    );
long  posix2time(long    );
void tzsetwall();
long  time2posix(long    );
long  timelocal(struct tm* const    );
long  timegm(struct tm* const    );
int nanosleep(const struct timespec*  __rqtp  , struct timespec*  __rmtp  ) ;
int clock_getres(enum anonymous_typeY1  __clock_id  , struct timespec*  __res  );
int clock_gettime(enum anonymous_typeY1  __clock_id  , struct timespec*  __tp  );
unsigned long long int  clock_gettime_nsec_np(enum anonymous_typeY1  __clock_id  );
int clock_settime(enum anonymous_typeY1  __clock_id  , const struct timespec*  __tp  );
int timespec_get(struct timespec*  ts  , int base);
unsigned int  qos_class_self();
unsigned int  qos_class_main();
int pthread_attr_set_qos_class_np(struct _opaque_pthread_attr_t*  __attr  , unsigned int  __qos_class  , int __relative_priority);
int pthread_attr_get_qos_class_np(struct _opaque_pthread_attr_t* restrict  __attr  , unsigned int* restrict  __qos_class  , int* restrict __relative_priority);
int pthread_set_qos_class_self_np(unsigned int  __qos_class  , int __relative_priority);
int pthread_get_qos_class_np(struct _opaque_pthread_t*  __pthread  , unsigned int* restrict  __qos_class  , int* restrict __relative_priority);
struct pthread_override_s*  pthread_override_qos_class_start_np(struct _opaque_pthread_t*  __pthread  , unsigned int  __qos_class  , int __relative_priority);
int pthread_override_qos_class_end_np(struct pthread_override_s*  __override  );
int pthread_atfork(void (*anonymous_lambda_var_nameZ1)(), void (*anonymous_lambda_var_nameZ2)(), void (*anonymous_lambda_var_nameZ3)());
int pthread_attr_destroy(struct _opaque_pthread_attr_t*    );
int pthread_attr_getdetachstate(const struct _opaque_pthread_attr_t*    , int* );
int pthread_attr_getguardsize(const struct _opaque_pthread_attr_t* restrict    , unsigned long  int* restrict    );
int pthread_attr_getinheritsched(const struct _opaque_pthread_attr_t* restrict    , int* restrict );
int pthread_attr_getschedparam(const struct _opaque_pthread_attr_t* restrict    , struct sched_param* restrict    );
int pthread_attr_getschedpolicy(const struct _opaque_pthread_attr_t* restrict    , int* restrict );
int pthread_attr_getscope(const struct _opaque_pthread_attr_t* restrict    , int* restrict );
int pthread_attr_getstack(const struct _opaque_pthread_attr_t* restrict    , void** restrict , unsigned long  int* restrict    );
int pthread_attr_getstackaddr(const struct _opaque_pthread_attr_t* restrict    , void** restrict );
int pthread_attr_getstacksize(const struct _opaque_pthread_attr_t* restrict    , unsigned long  int* restrict    );
int pthread_attr_init(struct _opaque_pthread_attr_t*    );
int pthread_attr_setdetachstate(struct _opaque_pthread_attr_t*    , int );
int pthread_attr_setguardsize(struct _opaque_pthread_attr_t*    , unsigned long  int    );
int pthread_attr_setinheritsched(struct _opaque_pthread_attr_t*    , int );
int pthread_attr_setschedparam(struct _opaque_pthread_attr_t* restrict    , const struct sched_param* restrict    );
int pthread_attr_setschedpolicy(struct _opaque_pthread_attr_t*    , int );
int pthread_attr_setscope(struct _opaque_pthread_attr_t*    , int );
int pthread_attr_setstack(struct _opaque_pthread_attr_t*    , void* , unsigned long  int    );
int pthread_attr_setstackaddr(struct _opaque_pthread_attr_t*    , void* );
int pthread_attr_setstacksize(struct _opaque_pthread_attr_t*    , unsigned long  int    );
int pthread_cancel(struct _opaque_pthread_t*    ) ;
int pthread_cond_broadcast(struct _opaque_pthread_cond_t*    );
int pthread_cond_destroy(struct _opaque_pthread_cond_t*    );
int pthread_cond_init(struct _opaque_pthread_cond_t* restrict    , const struct _opaque_pthread_condattr_t* restrict    ) ;
int pthread_cond_signal(struct _opaque_pthread_cond_t*    );
int pthread_cond_timedwait(struct _opaque_pthread_cond_t* restrict    , struct _opaque_pthread_mutex_t* restrict    , const struct timespec* restrict    ) ;
int pthread_cond_wait(struct _opaque_pthread_cond_t* restrict    , struct _opaque_pthread_mutex_t* restrict    ) ;
int pthread_condattr_destroy(struct _opaque_pthread_condattr_t*    );
int pthread_condattr_init(struct _opaque_pthread_condattr_t*    );
int pthread_condattr_getpshared(const struct _opaque_pthread_condattr_t* restrict    , int* restrict );
int pthread_condattr_setpshared(struct _opaque_pthread_condattr_t*    , int );
int pthread_create(struct _opaque_pthread_t** restrict    , const struct _opaque_pthread_attr_t* restrict    , void* (*anonymous_lambda_var_nameZ4)(void*), void* restrict );
int pthread_detach(struct _opaque_pthread_t*    );
int pthread_equal(struct _opaque_pthread_t*    , struct _opaque_pthread_t*    );
void pthread_exit(void* ) __attribute__((__noreturn__));
int pthread_getconcurrency();
int pthread_getschedparam(struct _opaque_pthread_t*    , int* restrict , struct sched_param* restrict    );
void* pthread_getspecific(unsigned long  int    );
int pthread_join(struct _opaque_pthread_t*    , void** ) ;
int pthread_key_create(unsigned long  int*    , void (*anonymous_lambda_var_nameZ5)(void*));
int pthread_key_delete(unsigned long  int    );
int pthread_mutex_destroy(struct _opaque_pthread_mutex_t*    );
int pthread_mutex_getprioceiling(const struct _opaque_pthread_mutex_t* restrict    , int* restrict );
int pthread_mutex_init(struct _opaque_pthread_mutex_t* restrict    , const struct _opaque_pthread_mutexattr_t* restrict    );
int pthread_mutex_lock(struct _opaque_pthread_mutex_t*    );
int pthread_mutex_setprioceiling(struct _opaque_pthread_mutex_t* restrict    , int , int* restrict );
int pthread_mutex_trylock(struct _opaque_pthread_mutex_t*    );
int pthread_mutex_unlock(struct _opaque_pthread_mutex_t*    );
int pthread_mutexattr_destroy(struct _opaque_pthread_mutexattr_t*    ) ;
int pthread_mutexattr_getprioceiling(const struct _opaque_pthread_mutexattr_t* restrict    , int* restrict );
int pthread_mutexattr_getprotocol(const struct _opaque_pthread_mutexattr_t* restrict    , int* restrict );
int pthread_mutexattr_getpshared(const struct _opaque_pthread_mutexattr_t* restrict    , int* restrict );
int pthread_mutexattr_gettype(const struct _opaque_pthread_mutexattr_t* restrict    , int* restrict );
int pthread_mutexattr_getpolicy_np(const struct _opaque_pthread_mutexattr_t* restrict    , int* restrict );
int pthread_mutexattr_init(struct _opaque_pthread_mutexattr_t*    );
int pthread_mutexattr_setprioceiling(struct _opaque_pthread_mutexattr_t*    , int );
int pthread_mutexattr_setprotocol(struct _opaque_pthread_mutexattr_t*    , int );
int pthread_mutexattr_setpshared(struct _opaque_pthread_mutexattr_t*    , int );
int pthread_mutexattr_settype(struct _opaque_pthread_mutexattr_t*    , int );
int pthread_mutexattr_setpolicy_np(struct _opaque_pthread_mutexattr_t*    , int );
int pthread_once(struct _opaque_pthread_once_t*    , void (*anonymous_lambda_var_nameZ6)());
int pthread_rwlock_destroy(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlock_init(struct _opaque_pthread_rwlock_t* restrict    , const struct _opaque_pthread_rwlockattr_t* restrict    ) ;
int pthread_rwlock_rdlock(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlock_tryrdlock(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlock_trywrlock(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlock_wrlock(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlock_unlock(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlockattr_destroy(struct _opaque_pthread_rwlockattr_t*    );
int pthread_rwlockattr_getpshared(const struct _opaque_pthread_rwlockattr_t* restrict    , int* restrict );
int pthread_rwlockattr_init(struct _opaque_pthread_rwlockattr_t*    );
int pthread_rwlockattr_setpshared(struct _opaque_pthread_rwlockattr_t*    , int );
struct _opaque_pthread_t*  pthread_self();
int pthread_setcancelstate(int , int* ) ;
int pthread_setcanceltype(int , int* ) ;
int pthread_setconcurrency(int );
int pthread_setschedparam(struct _opaque_pthread_t*    , int , const struct sched_param*    );
int pthread_setspecific(unsigned long  int    , const void* );
void pthread_testcancel() ;
int pthread_is_threaded_np();
int pthread_threadid_np(struct _opaque_pthread_t*    , unsigned long long int*    );
int pthread_getname_np(struct _opaque_pthread_t*    , char* , unsigned long  int    );
int pthread_setname_np(const char* );
int pthread_main_np();
unsigned int  pthread_mach_thread_np(struct _opaque_pthread_t*    );
unsigned long  int  pthread_get_stacksize_np(struct _opaque_pthread_t*    );
void* pthread_get_stackaddr_np(struct _opaque_pthread_t*    );
int pthread_cond_signal_thread_np(struct _opaque_pthread_cond_t*    , struct _opaque_pthread_t*    );
int pthread_cond_timedwait_relative_np(struct _opaque_pthread_cond_t*    , struct _opaque_pthread_mutex_t*    , const struct timespec*    );
int pthread_create_suspended_np(struct _opaque_pthread_t**    , const struct _opaque_pthread_attr_t*    , void* (*anonymous_lambda_var_nameZ7)(void*), void* );
int pthread_kill(struct _opaque_pthread_t*    , int );
struct _opaque_pthread_t*  pthread_from_mach_thread_np(unsigned int    );
int pthread_sigmask(int , const unsigned int*    , unsigned int*    ) ;
void pthread_yield_np();
void pthread_jit_write_protect_np(int enabled);
int pthread_jit_write_protect_supported_np();
int pthread_jit_write_with_callback_np(int (*callback)(void*)  , void* ctx);
void pthread_jit_write_freeze_callbacks_np();
int pthread_cpu_number_np(unsigned long  int*  cpu_number_out  );
int __darwin_check_fd_set_overflow(int , const void* , int );
int open(const char* , int , ...) ;
int openat(int , const char* , int , ...)  ;
int creat(const char* , unsigned short int    ) ;
int fcntl(int , int , ...) ;
int openx_np(const char* , int , struct _filesec*    );
int open_dprotected_np(const char* , int , int , int , ...);
int openat_dprotected_np(int , const char* , int , int , int , ...);
int openat_authenticated_np(int , const char* , int , int );
int flock(int , int );
struct _filesec*  filesec_init();
struct _filesec*  filesec_dup(struct _filesec*    );
void filesec_free(struct _filesec*    );
int filesec_get_property(struct _filesec*    , enum anonymous_typeY5    , void* );
int filesec_query_property(struct _filesec*    , enum anonymous_typeY5    , int* );
int filesec_set_property(struct _filesec*    , enum anonymous_typeY5    , const void* );
int filesec_unset_property(struct _filesec*    , enum anonymous_typeY5    );
int sem_close(int*    );
int sem_destroy(int*    ) __attribute__((__deprecated__));
int sem_getvalue(int* restrict    , int* restrict ) __attribute__((__deprecated__));
int sem_init(int*    , int , unsigned int ) __attribute__((__deprecated__));
int*  sem_open(const char* , int , ...);
int sem_post(int*    );
int sem_trywait(int*    );
int sem_unlink(const char* );
int sem_wait(int*    ) ;
int test_headers_thread();
// uniq global variable
// inline function
static inline unsigned short int  _OSSwapInt16(unsigned short int  _data  )
{
        return (unsigned short int )(_data<<8|_data>>8);
}
static inline unsigned int  _OSSwapInt32(unsigned int  _data  )
{
    _data=(((_data^(_data>>16|(_data<<16)))&0xFF00FFFF)>>8)^(_data>>8|_data<<24);
        return _data;
}
static inline unsigned long long int  _OSSwapInt64(unsigned long long int  _data  )
{
    union anonymous_typeZ5 _u;
    _u._ul[0]=(unsigned int )(_data>>32);
    _u._ul[1]=(unsigned int )(_data&0xffffffff);
    _u._ul[0]=_OSSwapInt32(_u._ul[0]);
    _u._ul[1]=_OSSwapInt32(_u._ul[1]);
        return _u._ull;
}
inline int  __attribute__((__always_inline__))  __darwin_check_fd_set(int _a, const void* _b)
{
    if((unsigned long  int )&__darwin_check_fd_set_overflow!=(unsigned long  int )0) {
                return __darwin_check_fd_set_overflow(_a,_b,1);
    }
    else {
                return 1;
    }
}
inline int  __attribute__((__always_inline__))  __darwin_fd_isset(int _fd, const struct fd_set*  _p  )
{
    if(__darwin_check_fd_set(_fd,(const void*)_p)) {
                return _p->fds_bits[(unsigned long  int)_fd/32]&((int )(((unsigned long  int)1)<<((unsigned long  int)_fd%32)));
    }
        return 0;
}
inline void  __attribute__((__always_inline__))  __darwin_fd_set(int _fd, struct fd_set* const  _p  )
{
    if(__darwin_check_fd_set(_fd,(const void*)_p)) {
        (_p->fds_bits[(unsigned long  int)_fd/32]|=((int )(((unsigned long  int)1)<<((unsigned long  int)_fd%32))));
    }
}
inline void  __attribute__((__always_inline__))  __darwin_fd_clr(int _fd, struct fd_set* const  _p  )
{
    if(__darwin_check_fd_set(_fd,(const void*)_p)) {
        (_p->fds_bits[(unsigned long  int)_fd/32]&=~((int )(((unsigned long  int)1)<<((unsigned long  int)_fd%32))));
    }
}

// body function
int test_headers_thread()
{
        return 0;
}

