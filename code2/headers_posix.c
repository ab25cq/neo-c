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

typedef unsigned long long int  ino_t  ;

typedef struct anonymous_typeX2 DIR;

typedef int errno_t;

typedef unsigned long  int  size_t  ;

typedef unsigned short int  mode_t  ;

typedef long long int  off_t  ;

typedef int  pid_t  ;

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

typedef enum anonymous_typeY2 filesec_property_t;

typedef unsigned int  gid_t  ;

typedef unsigned int nfds_t;

typedef unsigned int  uid_t  ;

typedef int  wchar_t  ;

typedef long long int  regoff_t  ;

typedef struct anonymous_typeX3 regex_t;

typedef struct anonymous_typeX4 regmatch_t;

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

typedef unsigned int  in_addr_t  ;

typedef unsigned short int  in_port_t  ;

typedef unsigned long long int  ino64_t  ;

typedef int  key_t  ;

typedef unsigned short int  nlink_t  ;

typedef unsigned int  id_t  ;

typedef int  segsz_t  ;

typedef int  swblk_t  ;

typedef unsigned long  int  clock_t  ;

typedef long  ssize_t  ;

typedef long  time_t  ;

typedef unsigned int  useconds_t  ;

typedef int  suseconds_t  ;

typedef unsigned long  int  rsize_t  ;

typedef struct fd_set  fd_set  ;

typedef int  fd_mask  ;

typedef struct _opaque_pthread_attr_t  pthread_attr_t  ;

typedef struct _opaque_pthread_cond_t  pthread_cond_t  ;

typedef struct _opaque_pthread_condattr_t  pthread_condattr_t  ;

typedef struct _opaque_pthread_mutex_t  pthread_mutex_t  ;

typedef struct _opaque_pthread_mutexattr_t  pthread_mutexattr_t  ;

typedef struct _opaque_pthread_once_t  pthread_once_t  ;

typedef struct _opaque_pthread_rwlock_t  pthread_rwlock_t  ;

typedef struct _opaque_pthread_rwlockattr_t  pthread_rwlockattr_t  ;

typedef struct _opaque_pthread_t*  pthread_t  ;

typedef unsigned long  int  pthread_key_t  ;

typedef unsigned int  fsblkcnt_t  ;

typedef unsigned int  fsfilcnt_t  ;

typedef unsigned long  long uint64_t;

typedef unsigned int uint32_t;

typedef struct ucred*  kauth_cred_t  ;

typedef struct posix_cred*  posix_cred_t  ;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef char  int_least8_t  ;

typedef short  int_least16_t  ;

typedef int  int_least32_t  ;

typedef long long  int_least64_t  ;

typedef unsigned char  uint_least8_t  ;

typedef unsigned short int  uint_least16_t  ;

typedef unsigned int  uint_least32_t  ;

typedef unsigned long  long  uint_least64_t  ;

typedef char  int_fast8_t  ;

typedef short  int_fast16_t  ;

typedef int  int_fast32_t  ;

typedef long long  int_fast64_t  ;

typedef unsigned char  uint_fast8_t  ;

typedef unsigned short int  uint_fast16_t  ;

typedef unsigned int  uint_fast32_t  ;

typedef unsigned long  long  uint_fast64_t  ;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef enum anonymous_typeY8 clockid_t;

typedef unsigned char  sa_family_t  ;

typedef unsigned int  socklen_t  ;

typedef unsigned int  sae_associd_t  ;

typedef unsigned int  sae_connid_t  ;

typedef struct sa_endpoints  sa_endpoints_t  ;

typedef unsigned long long int  rlim_t  ;

typedef void* rusage_info_t;

typedef struct rusage_info_v6  rusage_info_current  ;

typedef unsigned int  sigset_t  ;

typedef enum anonymous_typeY14 idtype_t;

typedef int sig_atomic_t;

typedef struct __darwin_mcontext64*  mcontext_t  ;

typedef struct __darwin_sigaltstack  stack_t  ;

typedef struct __darwin_ucontext  ucontext_t  ;

typedef struct __siginfo  siginfo_t  ;

typedef void (*sig_t)(int);

typedef unsigned long  int tcflag_t;

typedef unsigned char cc_t;

typedef unsigned long  int speed_t;

/// previous struct definition ///
struct _telldir;

struct _filesec;

struct ucred;

struct posix_cred;

struct ifnet_interface_advisory;

struct fssearchblock;

struct searchstate;

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
struct dirent
{
    unsigned long long int  d_ino  ;
    unsigned long long int  d_seekoff  ;
    unsigned short int  d_reclen  ;
    unsigned short int  d_namlen  ;
    unsigned char  d_type  ;
    char d_name[1024];
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX2
{
    int __dd_fd;
    long __dd_loc;
    long __dd_size;
    char* __dd_buf;
    int __dd_len;
    long __dd_seek;
    long __attribute__((__unused__))  __padding __attribute__((__unused__)) ;
    int __dd_flags;
    struct _opaque_pthread_mutex_t  __dd_lock  ;
    struct _telldir*  __dd_td  ;
};
#pragma pack(pop)
#pragma pack(4)
struct flock
{
    long long int  l_start  ;
    long long int  l_len  ;
    int  l_pid  ;
    short l_type;
    short l_whence;
};
#pragma pack(pop)
#pragma pack(4)
struct timespec
{
    long  tv_sec  ;
    long tv_nsec;
};
#pragma pack(pop)
#pragma pack(4)
struct flocktimeout
{
    struct flock  fl  ;
    struct timespec  timeout  ;
};
#pragma pack(pop)
#pragma pack(4)
struct radvisory
{
    long long int  ra_offset  ;
    int ra_count;
};
#pragma pack(pop)
#pragma pack(4)
struct fsignatures
{
    long long int  fs_file_start  ;
    void* fs_blob_start;
    unsigned long  int  fs_blob_size  ;
    unsigned long  int  fs_fsignatures_size  ;
    char fs_cdhash[20];
    int fs_hash_type;
};
#pragma pack(pop)
#pragma pack(4)
struct fsupplement
{
    long long int  fs_file_start  ;
    long long int  fs_blob_start  ;
    unsigned long  int  fs_blob_size  ;
    int fs_orig_fd;
};
#pragma pack(pop)
#pragma pack(4)
struct fchecklv
{
    long long int  lv_file_start  ;
    unsigned long  int  lv_error_message_size  ;
    void* lv_error_message;
};
#pragma pack(pop)
#pragma pack(4)
struct fgetsigsinfo
{
    long long int  fg_file_start  ;
    int fg_info_request;
    int fg_sig_is_platform;
};
#pragma pack(pop)
#pragma pack(4)
struct fstore
{
    unsigned int fst_flags;
    int fst_posmode;
    long long int  fst_offset  ;
    long long int  fst_length  ;
    long long int  fst_bytesalloc  ;
};
#pragma pack(pop)
#pragma pack(4)
struct fpunchhole
{
    unsigned int fp_flags;
    unsigned int reserved;
    long long int  fp_offset  ;
    long long int  fp_length  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ftrimactivefile
{
    long long int  fta_offset  ;
    long long int  fta_length  ;
};
#pragma pack(pop)
#pragma pack(4)
struct fspecread
{
    unsigned int fsr_flags;
    unsigned int reserved;
    long long int  fsr_offset  ;
    long long int  fsr_length  ;
};
#pragma pack(pop)
#pragma pack(4)
struct fattributiontag
{
    unsigned int ft_flags;
    unsigned long  long ft_hash;
    char ft_attribution_name[255];
};
#pragma pack(pop)
#pragma pack(4)
struct log2phys
{
    unsigned int l2p_flags;
    long long int  l2p_contigbytes  ;
    long long int  l2p_devoffset  ;
};
#pragma pack(pop)
enum  anonymous_typeY2 { FILESEC_OWNER=(1),
FILESEC_GROUP=(2),
FILESEC_UUID=(3),
FILESEC_MODE=(4),
FILESEC_ACL=(5),
FILESEC_GRPUUID=(6),
FILESEC_ACL_RAW=(100),
FILESEC_ACL_ALLOCSIZE=(101)
};

#pragma pack(4)
struct group
{
    char* gr_name;
    char* gr_passwd;
    unsigned int  gr_gid  ;
    char** gr_mem;
};
#pragma pack(pop)
typedef unsigned char  uuid_t[16]  ;

typedef char  uuid_string_t[37]  ;

#pragma pack(4)
struct pollfd
{
    int fd;
    short events;
    short revents;
};
#pragma pack(pop)
#pragma pack(4)
struct passwd
{
    char* pw_name;
    char* pw_passwd;
    unsigned int  pw_uid  ;
    unsigned int  pw_gid  ;
    long  pw_change  ;
    char* pw_class;
    char* pw_gecos;
    char* pw_dir;
    char* pw_shell;
    long  pw_expire  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX3
{
    int re_magic;
    unsigned long  int  re_nsub  ;
    const char* re_endp;
    struct re_guts* re_g;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX4
{
    long long int  rm_so  ;
    long long int  rm_eo  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ5
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ6
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ7
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ8
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct fd_set
{
    int  fds_bits[((((((1024)%(32))==0))?(((1024)/(32))):((((1024)/(32))+1))))]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct accessx_descriptor
{
    unsigned int ad_name_offset;
    int ad_flags;
    int ad_pad[2];
};
#pragma pack(pop)
#pragma pack(4)
struct winsize
{
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
};
#pragma pack(pop)
#pragma pack(4)
struct ttysize
{
    unsigned short int ts_lines;
    unsigned short int ts_cols;
    unsigned short int ts_xxx;
    unsigned short int ts_yyy;
};
#pragma pack(pop)
#pragma pack(4)
struct timeval
{
    long  tv_sec  ;
    int  tv_usec  ;
};
#pragma pack(pop)
#pragma pack(4)
struct timeval64
{
    long long int  tv_sec  ;
    long long int  tv_usec  ;
};
#pragma pack(pop)
#pragma pack(4)
struct itimerval
{
    struct timeval  it_interval  ;
    struct timeval  it_value  ;
};
#pragma pack(pop)
#pragma pack(4)
struct timezone
{
    int tz_minuteswest;
    int tz_dsttime;
};
#pragma pack(pop)
#pragma pack(4)
struct clockinfo
{
    int hz;
    int tick;
    int tickadj;
    int stathz;
    int profhz;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
enum  anonymous_typeY8 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

#pragma pack(4)
struct net_event_data
{
    unsigned int  if_family  ;
    unsigned int  if_unit  ;
    char if_name[16];
};
#pragma pack(pop)
#pragma pack(4)
struct timeval32
{
    int  tv_sec  ;
    int  tv_usec  ;
};
#pragma pack(pop)
#pragma pack(4)
struct if_data
{
    unsigned char  ifi_type  ;
    unsigned char  ifi_typelen  ;
    unsigned char  ifi_physical  ;
    unsigned char  ifi_addrlen  ;
    unsigned char  ifi_hdrlen  ;
    unsigned char  ifi_recvquota  ;
    unsigned char  ifi_xmitquota  ;
    unsigned char  ifi_unused1  ;
    unsigned int  ifi_mtu  ;
    unsigned int  ifi_metric  ;
    unsigned int  ifi_baudrate  ;
    unsigned int  ifi_ipackets  ;
    unsigned int  ifi_ierrors  ;
    unsigned int  ifi_opackets  ;
    unsigned int  ifi_oerrors  ;
    unsigned int  ifi_collisions  ;
    unsigned int  ifi_ibytes  ;
    unsigned int  ifi_obytes  ;
    unsigned int  ifi_imcasts  ;
    unsigned int  ifi_omcasts  ;
    unsigned int  ifi_iqdrops  ;
    unsigned int  ifi_noproto  ;
    unsigned int  ifi_recvtiming  ;
    unsigned int  ifi_xmittiming  ;
    struct timeval32  ifi_lastchange  ;
    unsigned int  ifi_unused2  ;
    unsigned int  ifi_hwassist  ;
    unsigned int  ifi_reserved1  ;
    unsigned int  ifi_reserved2  ;
};
#pragma pack(pop)
#pragma pack(4)
struct if_data64
{
    unsigned char  ifi_type  ;
    unsigned char  ifi_typelen  ;
    unsigned char  ifi_physical  ;
    unsigned char  ifi_addrlen  ;
    unsigned char  ifi_hdrlen  ;
    unsigned char  ifi_recvquota  ;
    unsigned char  ifi_xmitquota  ;
    unsigned char  ifi_unused1  ;
    unsigned int  ifi_mtu  ;
    unsigned int  ifi_metric  ;
    unsigned long  long  ifi_baudrate  ;
    unsigned long  long  ifi_ipackets  ;
    unsigned long  long  ifi_ierrors  ;
    unsigned long  long  ifi_opackets  ;
    unsigned long  long  ifi_oerrors  ;
    unsigned long  long  ifi_collisions  ;
    unsigned long  long  ifi_ibytes  ;
    unsigned long  long  ifi_obytes  ;
    unsigned long  long  ifi_imcasts  ;
    unsigned long  long  ifi_omcasts  ;
    unsigned long  long  ifi_iqdrops  ;
    unsigned long  long  ifi_noproto  ;
    unsigned int  ifi_recvtiming  ;
    unsigned int  ifi_xmittiming  ;
    struct timeval32  ifi_lastchange  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifqueue
{
    void* ifq_head;
    void* ifq_tail;
    int ifq_len;
    int ifq_maxlen;
    int ifq_drops;
};
#pragma pack(pop)
#pragma pack(4)
struct iovec
{
    void* iov_base;
    unsigned long  int  iov_len  ;
};
#pragma pack(pop)
#pragma pack(4)
struct sa_endpoints
{
    unsigned int sae_srcif;
    const struct sockaddr* sae_srcaddr;
    unsigned int  sae_srcaddrlen  ;
    const struct sockaddr* sae_dstaddr;
    unsigned int  sae_dstaddrlen  ;
};
#pragma pack(pop)
#pragma pack(4)
struct linger
{
    int l_onoff;
    int l_linger;
};
#pragma pack(pop)
#pragma pack(4)
struct so_np_extensions
{
    unsigned int  npx_flags  ;
    unsigned int  npx_mask  ;
};
#pragma pack(pop)
#pragma pack(4)
struct sockaddr
{
    unsigned char  sa_len  ;
    unsigned char  sa_family  ;
    char sa_data[14];
};
#pragma pack(pop)
#pragma pack(4)
struct __sockaddr_header
{
    unsigned char  sa_len  ;
    unsigned char  sa_family  ;
};
#pragma pack(pop)
#pragma pack(4)
struct sockproto
{
    unsigned short int  sp_family  ;
    unsigned short int  sp_protocol  ;
};
#pragma pack(pop)
#pragma pack(4)
struct sockaddr_storage
{
    unsigned char  ss_len  ;
    unsigned char  ss_family  ;
    char __ss_pad1[((sizeof(long long int ))-sizeof(unsigned char )-sizeof(unsigned char ))];
    long long int  __ss_align  ;
    char __ss_pad2[(128-sizeof(unsigned char )-sizeof(unsigned char )-((sizeof(long long int ))-sizeof(unsigned char )-sizeof(unsigned char ))-(sizeof(long long int )))];
};
#pragma pack(pop)
#pragma pack(4)
struct msghdr
{
    void* msg_name;
    unsigned int  msg_namelen  ;
    struct iovec*  msg_iov  ;
    int msg_iovlen;
    void* msg_control;
    unsigned int  msg_controllen  ;
    int msg_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct cmsghdr
{
    unsigned int  cmsg_len  ;
    int cmsg_level;
    int cmsg_type;
};
#pragma pack(pop)
#pragma pack(4)
struct sf_hdtr
{
    struct iovec*  headers  ;
    int hdr_cnt;
    struct iovec*  trailers  ;
    int trl_cnt;
};
#pragma pack(pop)
#pragma pack(4)
struct if_clonereq
{
    int ifcr_total;
    int ifcr_count;
    char* ifcr_buffer;
};
#pragma pack(pop)
#pragma pack(4)
struct if_msghdr
{
    unsigned short int ifm_msglen;
    unsigned char ifm_version;
    unsigned char ifm_type;
    int ifm_addrs;
    int ifm_flags;
    unsigned short int ifm_index;
    struct if_data  ifm_data  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifa_msghdr
{
    unsigned short int ifam_msglen;
    unsigned char ifam_version;
    unsigned char ifam_type;
    int ifam_addrs;
    int ifam_flags;
    unsigned short int ifam_index;
    int ifam_metric;
};
#pragma pack(pop)
#pragma pack(4)
struct ifma_msghdr
{
    unsigned short int ifmam_msglen;
    unsigned char ifmam_version;
    unsigned char ifmam_type;
    int ifmam_addrs;
    int ifmam_flags;
    unsigned short int ifmam_index;
};
#pragma pack(pop)
#pragma pack(4)
struct if_msghdr2
{
    unsigned short int  ifm_msglen  ;
    unsigned char  ifm_version  ;
    unsigned char  ifm_type  ;
    int ifm_addrs;
    int ifm_flags;
    unsigned short int  ifm_index  ;
    int ifm_snd_len;
    int ifm_snd_maxlen;
    int ifm_snd_drops;
    int ifm_timer;
    struct if_data64  ifm_data  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifma_msghdr2
{
    unsigned short int  ifmam_msglen  ;
    unsigned char  ifmam_version  ;
    unsigned char  ifmam_type  ;
    int ifmam_addrs;
    int ifmam_flags;
    unsigned short int  ifmam_index  ;
    int  ifmam_refcount  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifdevmtu
{
    int ifdm_current;
    int ifdm_min;
    int ifdm_max;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ9
{
void* ifk_ptr;
int ifk_value;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ10
{
void* ifk_ptr;
int ifk_value;
};
#pragma pack(pop)
#pragma pack(4)
struct ifkpi
{
    unsigned int ifk_module_id;
    unsigned int ifk_type;
    union {
        void* ifk_ptr;
        int ifk_value;
    } ifk_data;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ11
{
struct sockaddr  ifru_addr  ;
struct sockaddr  ifru_dstaddr  ;
struct sockaddr  ifru_broadaddr  ;
short ifru_flags;
int ifru_metric;
int ifru_mtu;
int ifru_phys;
int ifru_media;
int ifru_intval;
char*  ifru_data  ;
struct ifdevmtu  ifru_devmtu  ;
struct ifkpi  ifru_kpi  ;
unsigned int  ifru_wake_flags  ;
unsigned int  ifru_route_refcnt  ;
int ifru_cap[2];
unsigned int  ifru_functional_type  ;
unsigned int  ifru_peer_egress_functional_type  ;
unsigned char  ifru_is_directlink  ;
unsigned char  ifru_is_vpn  ;
unsigned char  ifru_is_companionlink  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ12
{
struct sockaddr  ifru_addr  ;
struct sockaddr  ifru_dstaddr  ;
struct sockaddr  ifru_broadaddr  ;
short ifru_flags;
int ifru_metric;
int ifru_mtu;
int ifru_phys;
int ifru_media;
int ifru_intval;
char*  ifru_data  ;
struct ifdevmtu  ifru_devmtu  ;
struct ifkpi  ifru_kpi  ;
unsigned int  ifru_wake_flags  ;
unsigned int  ifru_route_refcnt  ;
int ifru_cap[2];
unsigned int  ifru_functional_type  ;
unsigned int  ifru_peer_egress_functional_type  ;
unsigned char  ifru_is_directlink  ;
unsigned char  ifru_is_vpn  ;
unsigned char  ifru_is_companionlink  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifreq
{
    char ifr_name[16];
    union {
        struct sockaddr  ifru_addr  ;
        struct sockaddr  ifru_dstaddr  ;
        struct sockaddr  ifru_broadaddr  ;
        short ifru_flags;
        int ifru_metric;
        int ifru_mtu;
        int ifru_phys;
        int ifru_media;
        int ifru_intval;
        char*  ifru_data  ;
        struct ifdevmtu  ifru_devmtu  ;
        struct ifkpi  ifru_kpi  ;
        unsigned int  ifru_wake_flags  ;
        unsigned int  ifru_route_refcnt  ;
        int ifru_cap[2];
        unsigned int  ifru_functional_type  ;
        unsigned int  ifru_peer_egress_functional_type  ;
        unsigned char  ifru_is_directlink  ;
        unsigned char  ifru_is_vpn  ;
        unsigned char  ifru_is_companionlink  ;
    } ifr_ifru;
};
#pragma pack(pop)
#pragma pack(4)
struct ifaliasreq
{
    char ifra_name[16];
    struct sockaddr  ifra_addr  ;
    struct sockaddr  ifra_broadaddr  ;
    struct sockaddr  ifra_mask  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rslvmulti_req
{
    struct sockaddr*  sa  ;
    struct sockaddr**  llsa  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifmediareq
{
    char ifm_name[16];
    int ifm_current;
    int ifm_mask;
    int ifm_status;
    int ifm_active;
    int ifm_count;
    int* ifm_ulist;
};
#pragma pack(pop)
#pragma pack(4)
struct ifdrv
{
    char ifd_name[16];
    unsigned long  int ifd_cmd;
    unsigned long  int  ifd_len  ;
    void* ifd_data;
};
#pragma pack(pop)
#pragma pack(4)
struct ifstat
{
    char ifs_name[16];
    char ascii[800+1];
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ13
{
char*  ifcu_buf  ;
struct ifreq*  ifcu_req  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ14
{
char*  ifcu_buf  ;
struct ifreq*  ifcu_req  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifconf
{
    int ifc_len;
    union {
        char*  ifcu_buf  ;
        struct ifreq*  ifcu_req  ;
    } ifc_ifcu;
};
#pragma pack(pop)
#pragma pack(4)
struct kev_dl_proto_data
{
    struct net_event_data  link_data  ;
    unsigned int  proto_family  ;
    unsigned int  proto_remaining_count  ;
};
#pragma pack(pop)
#pragma pack(4)
struct if_nameindex
{
    unsigned int if_index;
    char* if_name;
};
#pragma pack(pop)
#pragma pack(4)
struct rusage
{
    struct timeval  ru_utime  ;
    struct timeval  ru_stime  ;
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
#pragma pack(pop)
#pragma pack(4)
struct rusage_info_v0
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rusage_info_v1
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rusage_info_v2
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rusage_info_v3
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rusage_info_v4
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
    unsigned long  long  ri_logical_writes  ;
    unsigned long  long  ri_lifetime_max_phys_footprint  ;
    unsigned long  long  ri_instructions  ;
    unsigned long  long  ri_cycles  ;
    unsigned long  long  ri_billed_energy  ;
    unsigned long  long  ri_serviced_energy  ;
    unsigned long  long  ri_interval_max_phys_footprint  ;
    unsigned long  long  ri_runnable_time  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rusage_info_v5
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
    unsigned long  long  ri_logical_writes  ;
    unsigned long  long  ri_lifetime_max_phys_footprint  ;
    unsigned long  long  ri_instructions  ;
    unsigned long  long  ri_cycles  ;
    unsigned long  long  ri_billed_energy  ;
    unsigned long  long  ri_serviced_energy  ;
    unsigned long  long  ri_interval_max_phys_footprint  ;
    unsigned long  long  ri_runnable_time  ;
    unsigned long  long  ri_flags  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rusage_info_v6
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
    unsigned long  long  ri_logical_writes  ;
    unsigned long  long  ri_lifetime_max_phys_footprint  ;
    unsigned long  long  ri_instructions  ;
    unsigned long  long  ri_cycles  ;
    unsigned long  long  ri_billed_energy  ;
    unsigned long  long  ri_serviced_energy  ;
    unsigned long  long  ri_interval_max_phys_footprint  ;
    unsigned long  long  ri_runnable_time  ;
    unsigned long  long  ri_flags  ;
    unsigned long  long  ri_user_ptime  ;
    unsigned long  long  ri_system_ptime  ;
    unsigned long  long  ri_pinstructions  ;
    unsigned long  long  ri_pcycles  ;
    unsigned long  long  ri_energy_nj  ;
    unsigned long  long  ri_penergy_nj  ;
    unsigned long  long  ri_secure_time_in_system  ;
    unsigned long  long  ri_secure_ptime_in_system  ;
    unsigned long  long  ri_neural_footprint  ;
    unsigned long  long  ri_lifetime_max_neural_footprint  ;
    unsigned long  long  ri_interval_max_neural_footprint  ;
    unsigned long  long  ri_reserved[9]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rlimit
{
    unsigned long long int  rlim_cur  ;
    unsigned long long int  rlim_max  ;
};
#pragma pack(pop)
#pragma pack(4)
struct proc_rlimit_control_wakeupmon
{
    unsigned int  wm_flags  ;
    int  wm_rate  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ostat
{
    unsigned short int  st_dev  ;
    unsigned long long int  st_ino  ;
    unsigned short int  st_mode  ;
    unsigned short int  st_nlink  ;
    unsigned short int  st_uid  ;
    unsigned short int  st_gid  ;
    unsigned short int  st_rdev  ;
    int  st_size  ;
    struct timespec  st_atimespec  ;
    struct timespec  st_mtimespec  ;
    struct timespec  st_ctimespec  ;
    int  st_blksize  ;
    int  st_blocks  ;
    unsigned int  st_flags  ;
    unsigned int  st_gen  ;
};
#pragma pack(pop)
#pragma pack(4)
struct stat
{
    int  st_dev  ;
    unsigned short int  st_mode  ;
    unsigned short int  st_nlink  ;
    unsigned long long int  st_ino  ;
    unsigned int  st_uid  ;
    unsigned int  st_gid  ;
    int  st_rdev  ;
    struct timespec  st_atimespec  ;
    struct timespec  st_mtimespec  ;
    struct timespec  st_ctimespec  ;
    struct timespec  st_birthtimespec  ;
    long long int  st_size  ;
    long long int  st_blocks  ;
    int  st_blksize  ;
    unsigned int  st_flags  ;
    unsigned int  st_gen  ;
    int  st_lspare  ;
    long long int  st_qspare[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct statvfs
{
    unsigned long  int f_bsize;
    unsigned long  int f_frsize;
    unsigned int  f_blocks  ;
    unsigned int  f_bfree  ;
    unsigned int  f_bavail  ;
    unsigned int  f_files  ;
    unsigned int  f_ffree  ;
    unsigned int  f_favail  ;
    unsigned long  int f_fsid;
    unsigned long  int f_flag;
    unsigned long  int f_namemax;
};
#pragma pack(pop)
#pragma pack(4)
struct tms
{
    unsigned long  int  tms_utime  ;
    unsigned long  int  tms_stime  ;
    unsigned long  int  tms_cutime  ;
    unsigned long  int  tms_cstime  ;
};
#pragma pack(pop)
enum  uio_rw { UIO_READ 
,UIO_WRITE 
};

#pragma pack(4)
struct utsname
{
    char sysname[256];
    char nodename[256];
    char release[256];
    char version[256];
    char machine[256];
};
#pragma pack(pop)
enum  anonymous_typeY14 { P_ALL 
,P_PID 
,P_PGID 
};

#pragma pack(4)
struct __darwin_arm_exception_state
{
    unsigned int  __exception  ;
    unsigned int  __fsr  ;
    unsigned int  __far  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_exception_state64
{
    unsigned long long int  __far  ;
    unsigned int  __esr  ;
    unsigned int  __exception  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_exception_state64_v2
{
    unsigned long long int  __far  ;
    unsigned long long int  __esr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_thread_state
{
    unsigned int  __r[13]  ;
    unsigned int  __sp  ;
    unsigned int  __lr  ;
    unsigned int  __pc  ;
    unsigned int  __cpsr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_thread_state64
{
    unsigned long long int  __x[29]  ;
    unsigned long long int  __fp  ;
    unsigned long long int  __lr  ;
    unsigned long long int  __sp  ;
    unsigned long long int  __pc  ;
    unsigned int  __cpsr  ;
    unsigned int  __pad  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_vfp_state
{
    unsigned int  __r[64]  ;
    unsigned int  __fpscr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_neon_state64
{
    __uint128_t __v[32];
    unsigned int  __fpsr  ;
    unsigned int  __fpcr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_neon_state
{
    __uint128_t __v[16];
    unsigned int  __fpsr  ;
    unsigned int  __fpcr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __arm_pagein_state
{
    int __pagein_error;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_sme_state
{
    unsigned long long int  __svcr  ;
    unsigned long long int  __tpidr2_el0  ;
    unsigned short int  __svl_b  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_sve_z_state
{
    char __z[16][256];
} __attribute__((aligned(4)));
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_sve_p_state
{
    char __p[16][256/8];
} __attribute__((aligned(4)));
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_sme_za_state
{
    char __za[4096];
} __attribute__((aligned(4)));
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_sme2_state
{
    char __zt0[64];
} __attribute__((aligned(4)));
#pragma pack(pop)
#pragma pack(4)
struct __arm_legacy_debug_state
{
    unsigned int  __bvr[16]  ;
    unsigned int  __bcr[16]  ;
    unsigned int  __wvr[16]  ;
    unsigned int  __wcr[16]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_debug_state32
{
    unsigned int  __bvr[16]  ;
    unsigned int  __bcr[16]  ;
    unsigned int  __wvr[16]  ;
    unsigned int  __wcr[16]  ;
    unsigned long long int  __mdscr_el1  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_debug_state64
{
    unsigned long long int  __bvr[16]  ;
    unsigned long long int  __bcr[16]  ;
    unsigned long long int  __wvr[16]  ;
    unsigned long long int  __wcr[16]  ;
    unsigned long long int  __mdscr_el1  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_cpmu_state64
{
    unsigned long long int  __ctrs[16]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_mcontext32
{
    struct __darwin_arm_exception_state  __es  ;
    struct __darwin_arm_thread_state  __ss  ;
    struct __darwin_arm_vfp_state  __fs  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_mcontext64
{
    struct __darwin_arm_exception_state64  __es  ;
    struct __darwin_arm_thread_state64  __ss  ;
    struct __darwin_arm_neon_state64  __ns  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_sigaltstack
{
    void* ss_sp;
    unsigned long  int  ss_size  ;
    int ss_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int  uc_sigmask  ;
    struct __darwin_sigaltstack  uc_stack  ;
    struct __darwin_ucontext*  uc_link  ;
    unsigned long  int  uc_mcsize  ;
    struct __darwin_mcontext64*  uc_mcontext  ;
};
#pragma pack(pop)
#pragma pack(4)
union sigval
{
int sival_int;
void* sival_ptr;
};
#pragma pack(pop)
#pragma pack(4)
struct sigevent
{
    int sigev_notify;
    int sigev_signo;
    union sigval  sigev_value  ;
    void (*sigev_notify_function)(union sigval );
    struct _opaque_pthread_attr_t*  sigev_notify_attributes  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __siginfo
{
    int si_signo;
    int si_errno;
    int si_code;
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    void* si_addr;
    union sigval  si_value  ;
    long si_band;
    unsigned long  int __pad[7];
};
#pragma pack(pop)
#pragma pack(4)
union __sigaction_u
{
void (*__sa_handler)(int);
void (*__sa_sigaction)(int,struct __siginfo* ,void*);
};
#pragma pack(pop)
#pragma pack(4)
struct __sigaction
{
    union __sigaction_u  __sigaction_u  ;
    void (*sa_tramp)(void*,int,int,struct __siginfo* ,void*);
    unsigned int  sa_mask  ;
    int sa_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct sigaction
{
    union __sigaction_u  __sigaction_u  ;
    unsigned int  sa_mask  ;
    int sa_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct sigvec
{
    void (*sv_handler)(int);
    int sv_mask;
    int sv_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct sigstack
{
    char* ss_sp;
    int ss_onstack;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX15
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX16
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
struct termios
{
    unsigned long  int  c_iflag  ;
    unsigned long  int  c_oflag  ;
    unsigned long  int  c_cflag  ;
    unsigned long  int  c_lflag  ;
    unsigned char  c_cc[20]  ;
    unsigned long  int  c_ispeed  ;
    unsigned long  int  c_ospeed  ;
};
#pragma pack(pop)
/// variable definition ///
extern int*  __error(void);
static const unsigned char  UUID_NULL[16]  __attribute__ ((unused)) ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern char* suboptarg;
extern int optreset;
extern const char* const sys_signame[32];
extern const char* const sys_siglist[32];
// source head

// header function
char* strdup(const char* );
int vsnprintf(char* , unsigned long  int , const char* , __builtin_va_list    );
int snprintf(char* , unsigned long  int , const char* , ...);
int closedir(struct anonymous_typeX2*    ) __asm("_" "closedir" );
struct anonymous_typeX2*  opendir(const char* ) __asm("_" "opendir"  );
struct dirent*  readdir(struct anonymous_typeX2*    ) __asm("_" "readdir" );
int readdir_r(struct anonymous_typeX2*    , struct dirent*    , struct dirent**    ) __asm("_" "readdir_r" );
void rewinddir(struct anonymous_typeX2*    ) __asm("_" "rewinddir"  );
void seekdir(struct anonymous_typeX2*    , long ) __asm("_" "seekdir"  );
long telldir(struct anonymous_typeX2*    ) __asm("_" "telldir"  );
struct anonymous_typeX2*  fdopendir(int ) __asm("_" "fdopendir"  );
int alphasort(const struct dirent**    , const struct dirent**    ) __asm("_" "alphasort" );
int dirfd(struct anonymous_typeX2*  dirp  );
int scandir(const char* , struct dirent***    , int (*anonymous_lambda_var_nameZ1)(const struct dirent* ), int (*anonymous_lambda_var_nameZ2)(const struct dirent** ,const struct dirent** )) __asm("_" "scandir" );
int getdirentries(int , char* , int __nbytes, long* ) __asm("_getdirentries_is_not_available_when_64_bit_inodes_are_in_effect")
#line 177 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dirent.h"
;
struct anonymous_typeX2*  __opendir2(const char* , int ) __asm("_" "__opendir2"  );
int open(const char* , int , ...) __asm("_" "open"  );
int openat(int , const char* , int , ...) __asm("_" "openat" ) ;
int creat(const char* , unsigned short int    ) __asm("_" "creat"  );
int fcntl(int , int , ...) __asm("_" "fcntl"  );
int openx_np(const char* , int , struct _filesec*    );
int open_dprotected_np(const char* , int , int , int , ...);
int openat_dprotected_np(int , const char* , int , int , int , ...);
int openat_authenticated_np(int , const char* , int , int );
int flock(int , int );
struct _filesec*  filesec_init();
struct _filesec*  filesec_dup(struct _filesec*    );
void filesec_free(struct _filesec*    );
int filesec_get_property(struct _filesec*    , enum anonymous_typeY2    , void* );
int filesec_query_property(struct _filesec*    , enum anonymous_typeY2    , int* );
int filesec_set_property(struct _filesec*    , enum anonymous_typeY2    , const void* );
int filesec_unset_property(struct _filesec*    , enum anonymous_typeY2    );
struct group*  getgrgid(unsigned int    );
struct group*  getgrnam(const char* );
int getgrgid_r(unsigned int    , struct group*    , char* , unsigned long  int    , struct group**    );
int getgrnam_r(const char* , struct group*    , char* , unsigned long  int    , struct group**    );
struct group*  getgrent();
void setgrent();
void endgrent();
void uuid_clear(unsigned char  uu[16]  );
int uuid_compare(const unsigned char  uu1[16]  , const unsigned char  uu2[16]  );
void uuid_copy(unsigned char  dst[16]  , const unsigned char  src[16]  );
void uuid_generate(unsigned char  out[16]  );
void uuid_generate_random(unsigned char  out[16]  );
void uuid_generate_time(unsigned char  out[16]  );
int uuid_is_null(const unsigned char  uu[16]  );
int uuid_parse(const char  in[37]  , unsigned char  uu[16]  );
void uuid_unparse(const unsigned char  uu[16]  , char  out[37]  );
void uuid_unparse_lower(const unsigned char  uu[16]  , char  out[37]  );
void uuid_unparse_upper(const unsigned char  uu[16]  , char  out[37]  );
char* group_from_gid(unsigned int    , int );
struct group*  getgruuid(unsigned char  [16]  );
int getgruuid_r(unsigned char  [16]  , struct group*    , char* , unsigned long  int    , struct group**    );
void setgrfile(const char* );
int setgroupent(int );
int poll(struct pollfd*    , unsigned int    , int ) __asm("_" "poll"  );
struct passwd*  getpwuid(unsigned int    );
struct passwd*  getpwnam(const char* );
int getpwuid_r(unsigned int    , struct passwd*    , char* , unsigned long  int    , struct passwd**    );
int getpwnam_r(const char* , struct passwd*    , char* , unsigned long  int    , struct passwd**    );
struct passwd*  getpwent();
void setpwent();
void endpwent();
int setpassent(int );
char* user_from_uid(unsigned int    , int );
struct passwd*  getpwuuid(unsigned char  [16]  );
int getpwuuid_r(unsigned char  [16]  , struct passwd*    , char* , unsigned long  int    , struct passwd**    );
int regcomp(struct anonymous_typeX3* restrict    , const char* restrict , int ) __asm("_" "regcomp" );
unsigned long  int  regerror(int , const struct anonymous_typeX3* restrict    , char* restrict , unsigned long  int  __errbuf_size  );
int regexec(const struct anonymous_typeX3* restrict    , const char* restrict , unsigned long  int  __nmatch  , struct anonymous_typeX4  __pmatch[]  , int );
void regfree(struct anonymous_typeX3*    );
int regncomp(struct anonymous_typeX3* restrict    , const char* restrict , unsigned long  int  __len  , int );
int regnexec(const struct anonymous_typeX3* restrict    , const char* restrict , unsigned long  int  __len  , unsigned long  int  __nmatch  , struct anonymous_typeX4  __pmatch[]  , int );
int regwcomp(struct anonymous_typeX3* restrict    , const int* restrict    , int );
int regwexec(const struct anonymous_typeX3* restrict    , const int* restrict    , unsigned long  int  __nmatch  , struct anonymous_typeX4  __pmatch[]  , int );
int regwncomp(struct anonymous_typeX3* restrict    , const int* restrict    , unsigned long  int  __len  , int );
int regwnexec(const struct anonymous_typeX3* restrict    , const int* restrict    , unsigned long  int  __len  , unsigned long  int  __nmatch  , struct anonymous_typeX4  __pmatch[]  , int );
int __darwin_check_fd_set_overflow(int , const void* , int );
int getattrlistbulk(int , void* , void* , unsigned long  int    , unsigned long  long    );
int getattrlistat(int , const char* , void* , void* , unsigned long  int    , unsigned long  int );
int setattrlistat(int , const char* , void* , void* , unsigned long  int    , unsigned int    );
long  freadlink(int , char* restrict , unsigned long  int    );
int faccessat(int , const char* , int , int );
int fchownat(int , const char* , unsigned int    , unsigned int    , int );
int linkat(int , const char* , int , const char* , int );
long  readlinkat(int , const char* , char* , unsigned long  int    );
int symlinkat(const char* , int , const char* );
int unlinkat(int , const char* , int );
char* asctime(const struct tm*    );
unsigned long  int  clock() __asm("_" "clock" );
char* ctime(const long*    );
double difftime(long    , long    );
struct tm*  getdate(const char* );
struct tm*  gmtime(const long*    );
struct tm*  localtime(const long*    );
long  mktime(struct tm*    ) __asm("_" "mktime" );
unsigned long  int  strftime(char* restrict , unsigned long  int  __maxsize  , const char* restrict , const struct tm* restrict    ) __asm("_" "strftime" );
char* strptime(const char* restrict , const char* restrict , struct tm* restrict    ) __asm("_" "strptime" );
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
int nanosleep(const struct timespec*  __rqtp  , struct timespec*  __rmtp  ) __asm("_" "nanosleep"  );
int clock_getres(enum anonymous_typeY8  __clock_id  , struct timespec*  __res  );
int clock_gettime(enum anonymous_typeY8  __clock_id  , struct timespec*  __tp  );
unsigned long long int  clock_gettime_nsec_np(enum anonymous_typeY8  __clock_id  );
int clock_settime(enum anonymous_typeY8  __clock_id  , const struct timespec*  __tp  );
int timespec_get(struct timespec*  ts  , int base);
int adjtime(const struct timeval*    , struct timeval*    );
int futimes(int , const struct timeval*    );
int lutimes(const char* , const struct timeval*    );
int settimeofday(const struct timeval*    , const struct timezone*    );
int getitimer(int , struct itimerval*    );
int gettimeofday(struct timeval* restrict    , void* restrict );
int select(int , struct fd_set* restrict    , struct fd_set* restrict    , struct fd_set* restrict    , struct timeval* restrict    ) __asm("_" "select" "$DARWIN_EXTSN" )
#line 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_select.h"
;
int setitimer(int , const struct itimerval* restrict    , struct itimerval* restrict    );
int utimes(const char* , const struct timeval*    );
int accept(int , struct sockaddr* restrict    , unsigned int* restrict    ) __asm("_" "accept"  );
int bind(int , const struct sockaddr*    , unsigned int    ) __asm("_" "bind" );
int connect(int , const struct sockaddr*    , unsigned int    ) __asm("_" "connect"  );
int getpeername(int , struct sockaddr* restrict    , unsigned int* restrict    ) __asm("_" "getpeername" );
int getsockname(int , struct sockaddr* restrict    , unsigned int* restrict    ) __asm("_" "getsockname" );
int getsockopt(int , int , int , void* restrict , unsigned int* restrict    );
int listen(int , int ) __asm("_" "listen" );
long  recv(int , void* , unsigned long  int    , int ) __asm("_" "recv"  );
long  recvfrom(int , void* , unsigned long  int    , int , struct sockaddr* restrict    , unsigned int* restrict    ) __asm("_" "recvfrom"  );
long  recvmsg(int , struct msghdr*    , int ) __asm("_" "recvmsg"  );
long  send(int , const void* , unsigned long  int    , int ) __asm("_" "send"  );
long  sendmsg(int , const struct msghdr*    , int ) __asm("_" "sendmsg"  );
long  sendto(int , const void* , unsigned long  int    , int , const struct sockaddr*    , unsigned int    ) __asm("_" "sendto"  );
int setsockopt(int , int , int , const void* , unsigned int    );
int shutdown(int , int );
int sockatmark(int );
int socket(int , int , int );
int socketpair(int , int , int , int* ) __asm("_" "socketpair" );
void pfctlinput(int , struct sockaddr*    );
int connectx(int , const struct sa_endpoints*    , unsigned int    , unsigned int , const struct iovec*    , unsigned int , unsigned long  int*    , unsigned int*    );
int disconnectx(int , unsigned int    , unsigned int    );
unsigned int if_nametoindex(const char* );
char* if_indextoname(unsigned int , char* );
struct if_nameindex*  if_nameindex();
void if_freenameindex(struct if_nameindex*    );
int ioctl(int , unsigned long  int , ...);
int mlockall(int );
int munlockall();
int mlock(const void* , unsigned long  int    );
void* mmap(void* , unsigned long  int    , int , int , int , long long int    ) __asm("_" "mmap" );
int mprotect(void* , unsigned long  int    , int ) __asm("_" "mprotect" );
int msync(void* , unsigned long  int    , int ) __asm("_" "msync"  );
int munlock(const void* , unsigned long  int    );
int munmap(void* , unsigned long  int    ) __asm("_" "munmap" );
int shm_open(const char* , int , ...);
int shm_unlink(const char* );
int posix_madvise(void* , unsigned long  int    , int );
int madvise(void* , unsigned long  int    , int );
int mincore(const void* , unsigned long  int    , char* );
int minherit(void* , unsigned long  int    , int );
int getpriority(int , unsigned int    );
int getiopolicy_np(int , int );
int getrlimit(int , struct rlimit*    ) __asm("_" "getrlimit" );
int getrusage(int , struct rusage*    );
int setpriority(int , unsigned int    , int );
int setiopolicy_np(int , int , int );
int setrlimit(int , const struct rlimit*    ) __asm("_" "setrlimit" );
int pselect(int , struct fd_set* restrict    , struct fd_set* restrict    , struct fd_set* restrict    , const struct timespec* restrict    , const unsigned int* restrict    ) __asm("_" "pselect" "$DARWIN_EXTSN" )
#line 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
;
int chmod(const char* , unsigned short int    ) __asm("_" "chmod" );
int fchmod(int , unsigned short int    ) __asm("_" "fchmod" );
int fstat(int , struct stat*    ) __asm("_" "fstat" );
int lstat(const char* , struct stat*    ) __asm("_" "lstat" );
int mkdir(const char* , unsigned short int    );
int mkfifo(const char* , unsigned short int    );
int stat(const char* , struct stat*    ) __asm("_" "stat" );
unsigned short int  umask(unsigned short int    );
int fchmodat(int , const char* , unsigned short int    , int );
int fstatat(int , const char* , struct stat*    , int ) __asm("_" "fstatat" ) ;
int mkdirat(int , const char* , unsigned short int    );
int mkfifoat(int , const char* , unsigned short int    );
int mknodat(int , const char* , unsigned short int    , int    );
int futimens(int __fd, const struct timespec  __times[2]  );
int utimensat(int __fd, const char* __path, const struct timespec  __times[2]  , int __flag);
int chflags(const char* , unsigned int    );
int chmodx_np(const char* , struct _filesec*    );
int fchflags(int , unsigned int    );
int fchmodx_np(int , struct _filesec*    );
int fstatx_np(int , struct stat*    , struct _filesec*    ) __asm("_" "fstatx_np" );
int lchflags(const char* , unsigned int    );
int lchmod(const char* , unsigned short int    );
int lstatx_np(const char* , struct stat*    , struct _filesec*    ) __asm("_" "lstatx_np" );
int mkdirx_np(const char* , struct _filesec*    );
int mkfifox_np(const char* , struct _filesec*    );
int statx_np(const char* , struct stat*    , struct _filesec*    ) __asm("_" "statx_np" );
int umaskx_np(struct _filesec*    );
int fstatvfs(int , struct statvfs*    );
int statvfs(const char* restrict , struct statvfs* restrict    );
unsigned long  int  times(struct tms*    );
long  readv(int , const struct iovec*    , int ) __asm("_" "readv"  );
long  writev(int , const struct iovec*    , int ) __asm("_" "writev"  );
long  preadv(int , const struct iovec*    , int , long long int    ) __asm("_" "preadv" ) ;
long  pwritev(int , const struct iovec*    , int , long long int    ) __asm("_" "pwritev" ) ;
int uname(struct utsname*    );
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int  wait(int* ) __asm("_" "wait"  );
int  waitpid(int    , int* , int ) __asm("_" "waitpid"  );
int waitid(enum anonymous_typeY14    , unsigned int    , struct __siginfo*    , int ) __asm("_" "waitid"  );
int  wait3(int* , int , struct rusage*    );
int  wait4(int    , int* , int , struct rusage*    );
unsigned long  int  cfgetispeed(const struct termios*    );
unsigned long  int  cfgetospeed(const struct termios*    );
int cfsetispeed(struct termios*    , unsigned long  int    );
int cfsetospeed(struct termios*    , unsigned long  int    );
int tcgetattr(int , struct termios*    );
int tcsetattr(int , int , const struct termios*    );
int tcdrain(int ) __asm("_" "tcdrain"  );
int tcflow(int , int );
int tcflush(int , int );
int tcsendbreak(int , int );
void cfmakeraw(struct termios*    );
int cfsetspeed(struct termios*    , unsigned long  int    );
int  tcgetsid(int );
void _exit(int ) __attribute__((__noreturn__));
int access(const char* , int );
unsigned int alarm(unsigned int );
int chdir(const char* );
int chown(const char* , unsigned int    , unsigned int    );
int close(int ) __asm("_" "close"  );
int dup(int );
int dup2(int , int );
int execl(const char* __path, const char* __arg0, ...);
int execle(const char* __path, const char* __arg0, ...);
int execlp(const char* __file, const char* __arg0, ...);
int execv(const char* __path, char** const __argv);
int execve(const char* __file, char** const __argv, char** const __envp);
int execvp(const char* __file, char** const __argv);
int  fork();
long fpathconf(int , int );
char* getcwd(char* , unsigned long  int  __size  );
unsigned int  getegid();
unsigned int  geteuid();
unsigned int  getgid();
int getgroups(int __gidsetsize, unsigned int  []  ) __asm("_" "getgroups" "$DARWIN_EXTSN");
char* getlogin();
int  getpgrp();
int  getpid();
int  getppid();
unsigned int  getuid();
int isatty(int );
int link(const char* , const char* );
long long int  lseek(int , long long int    , int );
long pathconf(const char* , int );
int pause() __asm("_" "pause"  );
int pipe(int [2]);
long  read(int , void* , unsigned long  int  __nbyte  ) __asm("_" "read"  );
int rmdir(const char* );
int setgid(unsigned int    );
int setpgid(int    , int    );
int  setsid();
int setuid(unsigned int    );
unsigned int sleep(unsigned int ) __asm("_" "sleep"  );
long sysconf(int );
int  tcgetpgrp(int );
int tcsetpgrp(int , int    );
char* ttyname(int );
int ttyname_r(int , char* , unsigned long  int  __len  ) __asm("_" "ttyname_r" );
int unlink(const char* );
long  write(int __fd, const void* __buf, unsigned long  int  __nbyte  ) __asm("_" "write"  );
unsigned long  int  confstr(int , char* , unsigned long  int  __len  ) __asm("_" "confstr" );
int getopt(int __argc, char* const [], const char* ) __asm("_" "getopt" );
char* crypt(const char* , const char* );
void encrypt(char* , int ) __asm("_" "encrypt" );
int fchdir(int );
long gethostid();
int  getpgid(int    );
int  getsid(int    );
int lchown(const char* , unsigned int    , unsigned int    ) __asm("_" "lchown" );
int lockf(int , int , long long int    ) __asm("_" "lockf"  );
int nice(int ) __asm("_" "nice" );
long  pread(int __fd, void* __buf, unsigned long  int  __nbyte  , long long int  __offset  ) __asm("_" "pread"  );
long  pwrite(int __fd, const void* __buf, unsigned long  int  __nbyte  , long long int  __offset  ) __asm("_" "pwrite"  );
int  setpgrp() __asm("_" "setpgrp" );
int setregid(unsigned int    , unsigned int    ) __asm("_" "setregid" );
int setreuid(unsigned int    , unsigned int    ) __asm("_" "setreuid" );
void swab(const void* restrict , void* restrict , long  __nbytes  );
void sync();
int truncate(const char* , long long int    );
unsigned int  ualarm(unsigned int    , unsigned int    );
int usleep(unsigned int    ) __asm("_" "usleep"  );
int  vfork();
int fsync(int ) __asm("_" "fsync"  );
int ftruncate(int , long long int    );
int getlogin_r(char* , unsigned long  int  __namelen  );
int fchown(int , unsigned int    , unsigned int    );
int gethostname(char* , unsigned long  int  __namelen  );
long  readlink(const char* restrict , char* restrict , unsigned long  int  __bufsize  );
int setegid(unsigned int    );
int seteuid(unsigned int    );
int symlink(const char* , const char* );
void _Exit(int ) __attribute__((__noreturn__));
int accessx_np(const struct accessx_descriptor*    , unsigned long  int  __sz  , int* , unsigned int    );
int acct(const char* );
int add_profil(char* , unsigned long  int  __bufsiz  , unsigned long  int , unsigned int );
void endusershell();
int execvP(const char* __file, const char* __searchpath, char** const __argv);
char* fflagstostr(unsigned long  int );
int getdomainname(char* , int __namelen);
int getgrouplist(const char* , int , int* , int* __ngroups);
int gethostuuid(unsigned char  [16]  , const struct timespec*    );
unsigned short int  getmode(const void* , unsigned short int    );
int getpeereid(int , unsigned int*    , unsigned int*    );
int getsgroups_np(int* , unsigned char  [16]  );
char* getusershell();
int getwgroups_np(int* , unsigned char  [16]  );
int initgroups(const char* , int );
int issetugid();
char* mkdtemp(char* );
int mknod(const char* , unsigned short int    , int    );
int mkpath_np(const char* path, unsigned short int  omode  );
int mkpathat_np(int dfd, const char* path, unsigned short int  omode  );
int mkstemp(char* );
int mkstemps(char* , int );
char* mktemp(char* );
int mkostemp(char* path, int oflags);
int mkostemps(char* path, int slen, int oflags);
int mkstemp_dprotected_np(char* path, int dpclass, int dpflags);
char* mkdtempat_np(int dfd, char* path);
int mkstempsat_np(int dfd, char* path, int slen);
int mkostempsat_np(int dfd, char* path, int slen, int oflags);
int nfssvc(int , void* );
int profil(char* , unsigned long  int  __bufsiz  , unsigned long  int , unsigned int );
__attribute__((__deprecated__))
 int pthread_setugid_np(unsigned int    , unsigned int    );
int pthread_getugid_np(unsigned int*    , unsigned int*    );
int reboot(int );
int revoke(const char* );
__attribute__((__deprecated__))  int rcmd(char** , int , const char* , const char* , const char* , int* );
__attribute__((__deprecated__))  int rcmd_af(char** , int , const char* , const char* , const char* , int* , int );
__attribute__((__deprecated__))  int rresvport(int* );
__attribute__((__deprecated__))  int rresvport_af(int* , int );
__attribute__((__deprecated__))  int iruserok(unsigned long  int , int , const char* , const char* );
__attribute__((__deprecated__))  int iruserok_sa(const void* , int , int , const char* , const char* );
__attribute__((__deprecated__))  int ruserok(const char* , int , const char* , const char* );
int setdomainname(const char* , int __namelen);
int setgroups(int , const unsigned int*    );
void sethostid(long );
int sethostname(const char* , int __namelen);
void setkey(const char* ) __asm("_" "setkey" );
int setlogin(const char* );
void* setmode(const char* ) __asm("_" "setmode" );
int setrgid(unsigned int    );
int setruid(unsigned int    );
int setsgroups_np(int , const unsigned char  [16]  );
void setusershell();
int setwgroups_np(int , const unsigned char  [16]  );
int strtofflags(char** , unsigned long  int* , unsigned long  int* );
int swapon(const char* );
int ttyslot();
int undelete(const char* );
int unwhiteout(const char* );
void* valloc(unsigned long  int  __size  );
int syscall(int , ...);
int getsubopt(char** , char** const , char** );
int fgetattrlist(int , void* , void* , unsigned long  int  __attrBufSize  , unsigned int );
int fsetattrlist(int , void* , void* , unsigned long  int  __attrBufSize  , unsigned int );
int getattrlist(const char* , void* , void* , unsigned long  int  __attrBufSize  , unsigned int ) __asm("_" "getattrlist" );
int setattrlist(const char* , void* , void* , unsigned long  int  __attrBufSize  , unsigned int ) __asm("_" "setattrlist" );
int exchangedata(const char* , const char* , unsigned int );
int getdirentriesattr(int , void* , void* , unsigned long  int  __attrBufSize  , unsigned int* , unsigned int* , unsigned int* , unsigned int );
int searchfs(const char* , struct fssearchblock*    , unsigned long  int* , unsigned int , unsigned int , struct searchstate*    );
int fsctl(const char* , unsigned long  int , void* , unsigned int );
int ffsctl(int , unsigned long  int , void* , unsigned int );
int fsync_volume_np(int , int );
int sync_volume_np(const char* , int );
int raise(int );
void (*bsd_signal(int _function_pointer_result_var_name_a3, void (*_function_pointer_result_var_name_a4)(int)))(int);
int kill(int    , int ) __asm("_" "kill" );
int killpg(int    , int ) __asm("_" "killpg" );
int pthread_kill(struct _opaque_pthread_t*    , int );
int pthread_sigmask(int , const unsigned int*    , unsigned int*    ) __asm("_" "pthread_sigmask" );
int sigaction(int , const struct sigaction* restrict    , struct sigaction* restrict    );
int sigaddset(unsigned int*    , int );
int sigaltstack(const struct __darwin_sigaltstack* restrict    , struct __darwin_sigaltstack* restrict    ) __asm("_" "sigaltstack" )  ;
int sigdelset(unsigned int*    , int );
int sigemptyset(unsigned int*    );
int sigfillset(unsigned int*    );
int sighold(int );
int sigignore(int );
int siginterrupt(int , int );
int sigismember(const unsigned int*    , int );
int sigpause(int ) __asm("_" "sigpause"  );
int sigpending(unsigned int*    );
int sigprocmask(int , const unsigned int* restrict    , unsigned int* restrict    );
int sigrelse(int );
void (*sigset(int _function_pointer_result_var_name_a5, void (*_function_pointer_result_var_name_a6)(int)))(int);
int sigsuspend(const unsigned int*    ) __asm("_" "sigsuspend"  );
int sigwait(const unsigned int* restrict    , int* restrict ) __asm("_" "sigwait"  );
void psignal(int , const char* );
int sigblock(int );
int sigsetmask(int );
int sigvec(int , struct sigvec*    , struct sigvec*    );
int test_headers_posix();
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
    union anonymous_typeZ8 _u;
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
inline int  __attribute__((__always_inline__))  __sigbits(int __signo)
{
        return ((__signo>32)?(0):((1<<(__signo-1))));
}

// body function
int test_headers_posix()
{
        return 0;
}

