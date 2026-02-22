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

typedef unsigned int  uid_t  ;

typedef unsigned int  gid_t  ;

typedef unsigned short int  mode_t  ;

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

typedef int  key_t  ;

typedef int  pid_t  ;

typedef long  time_t  ;

typedef unsigned long  int  size_t  ;

typedef long  ssize_t  ;

typedef unsigned long  int msgqnum_t;

typedef unsigned long  int msglen_t;

typedef union semun  semun_t  ;

typedef unsigned short int shmatt_t;

/// previous struct definition ///
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

#pragma pack(4)
struct ipc_perm
{
    unsigned int  uid  ;
    unsigned int  gid  ;
    unsigned int  cuid  ;
    unsigned int  cgid  ;
    unsigned short int  mode  ;
    unsigned short int _seq;
    int  _key  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __msqid_ds_new
{
    struct ipc_perm  msg_perm  ;
    int  msg_first  ;
    int  msg_last  ;
    unsigned long  int  msg_cbytes  ;
    unsigned long  int  msg_qnum  ;
    unsigned long  int  msg_qbytes  ;
    int  msg_lspid  ;
    int  msg_lrpid  ;
    long  msg_stime  ;
    int  msg_pad1  ;
    long  msg_rtime  ;
    int  msg_pad2  ;
    long  msg_ctime  ;
    int  msg_pad3  ;
    int  msg_pad4[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct msg
{
    struct msg*  msg_next  ;
    long msg_type;
    unsigned short int msg_ts;
    short msg_spot;
    struct label* label;
};
#pragma pack(pop)
#pragma pack(4)
struct mymsg
{
    long mtype;
    char mtext[1];
};
#pragma pack(pop)
#pragma pack(4)
struct msginfo
{
    int msgmax;
    int msgmni;
    int msgmnb;
    int msgtql;
    int msgssz;
    int msgseg;
};
#pragma pack(pop)
#pragma pack(4)
struct __semid_ds_new
{
    struct ipc_perm  sem_perm  ;
    int  sem_base  ;
    unsigned short int sem_nsems;
    long  sem_otime  ;
    int  sem_pad1  ;
    long  sem_ctime  ;
    int  sem_pad2  ;
    int  sem_pad3[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct sem
{
    unsigned short int semval;
    int  sempid  ;
    unsigned short int semncnt;
    unsigned short int semzcnt;
};
#pragma pack(pop)
#pragma pack(4)
struct sembuf
{
    unsigned short int sem_num;
    short sem_op;
    short sem_flg;
};
#pragma pack(pop)
#pragma pack(4)
union semun
{
int val;
struct __semid_ds_new*  buf  ;
unsigned short int* array;
};
#pragma pack(pop)
#pragma pack(4)
struct __shmid_ds_new
{
    struct ipc_perm  shm_perm  ;
    unsigned long  int  shm_segsz  ;
    int  shm_lpid  ;
    int  shm_cpid  ;
    unsigned short int  shm_nattch  ;
    long  shm_atime  ;
    long  shm_dtime  ;
    long  shm_ctime  ;
    void* shm_internal;
};
#pragma pack(pop)
/// variable definition ///
// source head

// header function
char* strdup(const char* );
int vsnprintf(char* , unsigned long  int , const char* , __builtin_va_list    );
int snprintf(char* , unsigned long  int , const char* , ...);
int  ftok(const char* , int );
int msgsys(int , ...);
int msgctl(int , int , struct __msqid_ds_new*    ) __asm("_" "msgctl" );
int msgget(int    , int );
long  msgrcv(int , void* , unsigned long  int    , long , int ) __asm("_" "msgrcv"  );
int msgsnd(int , const void* , unsigned long  int    , int ) __asm("_" "msgsnd"  );
int semsys(int , ...);
int semctl(int , int , int , ...) __asm("_" "semctl" );
int semget(int    , int , int );
int semop(int , struct sembuf*    , unsigned long  int    );
int shmsys(int , ...);
void* shmat(int , const void* , int );
int shmctl(int , int , struct __shmid_ds_new*    ) __asm("_" "shmctl" );
int shmdt(const void* );
int shmget(int    , unsigned long  int    , int );
int test_headers_ipc();
// uniq global variable
// inline function

// body function
int test_headers_ipc()
{
        return 0;
}

