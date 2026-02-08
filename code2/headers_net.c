/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef __builtin_va_list __gnuc_va_list;

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

typedef unsigned char  uint8_t  ;

typedef unsigned short int  uint16_t  ;

typedef unsigned int  uint32_t  ;

typedef unsigned long  int  uint64_t  ;

typedef unsigned long  long    ;

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

typedef unsigned int  gid_t  ;

typedef unsigned int  mode_t  ;

typedef unsigned long  int  nlink_t  ;

typedef unsigned int  uid_t  ;

typedef long  int  off_t  ;

typedef long  int  off64_t  ;

typedef int  pid_t  ;

typedef unsigned int  id_t  ;

typedef long  int  ssize_t  ;

typedef int  daddr_t  ;

typedef char*  caddr_t  ;

typedef int  key_t  ;

typedef long  int  clock_t  ;

typedef int  clockid_t  ;

typedef long  int  time_t  ;

typedef void*  timer_t  ;

typedef unsigned int  useconds_t  ;

typedef long  int  suseconds_t  ;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef char  int8_t  ;

typedef short int  int16_t  ;

typedef int  int32_t  ;

typedef long  int  int64_t  ;

typedef unsigned char  u_int8_t  ;

typedef unsigned short int  u_int16_t  ;

typedef unsigned int  u_int32_t  ;

typedef unsigned long  int  u_int64_t  ;

typedef int __attribute__ ((__mode__ (__word__))) register_t __attribute__ ((__mode__ (__word__)));

typedef struct anonymous_typeX1 __sigset_t;

typedef struct anonymous_typeX1  sigset_t  ;

typedef long  int __fd_mask;

typedef struct anonymous_typeX2 fd_set;

typedef long  int  fd_mask  ;

typedef long  int  blksize_t  ;

typedef long  int  blkcnt_t  ;

typedef unsigned long  int  fsblkcnt_t  ;

typedef unsigned long  int  fsfilcnt_t  ;

typedef long  int  blkcnt64_t  ;

typedef unsigned long  int  fsblkcnt64_t  ;

typedef unsigned long  int  fsfilcnt64_t  ;

typedef union anonymous_typeZ3 __atomic_wide_counter;

typedef struct __pthread_internal_list  __pthread_list_t  ;

typedef struct __pthread_internal_slist  __pthread_slist_t  ;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX5 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ6 pthread_mutexattr_t;

typedef union anonymous_typeZ7 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union pthread_attr_t  pthread_attr_t  ;

typedef union anonymous_typeZ8 pthread_mutex_t;

typedef union anonymous_typeZ9 pthread_cond_t;

typedef union anonymous_typeZ10 pthread_rwlock_t;

typedef union anonymous_typeZ11 pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union anonymous_typeZ12 pthread_barrier_t;

typedef union anonymous_typeZ13 pthread_barrierattr_t;

typedef unsigned int  socklen_t  ;

typedef unsigned short int sa_family_t;

typedef struct anonymous_typeX14 __kernel_fd_set;

typedef void (*__kernel_sighandler_t)(int);

typedef int __kernel_key_t;

typedef int __kernel_mqd_t;

typedef unsigned short int __kernel_old_uid_t;

typedef unsigned short int __kernel_old_gid_t;

typedef unsigned long  int __kernel_old_dev_t;

typedef long __kernel_long_t;

typedef unsigned long  int __kernel_ulong_t;

typedef unsigned long  int  __kernel_ino_t  ;

typedef unsigned int __kernel_mode_t;

typedef int __kernel_pid_t;

typedef int __kernel_ipc_pid_t;

typedef unsigned int __kernel_uid_t;

typedef unsigned int __kernel_gid_t;

typedef long  __kernel_suseconds_t  ;

typedef int __kernel_daddr_t;

typedef unsigned int __kernel_uid32_t;

typedef unsigned int __kernel_gid32_t;

typedef unsigned long  int  __kernel_size_t  ;

typedef long  __kernel_ssize_t  ;

typedef long  __kernel_ptrdiff_t  ;

typedef struct anonymous_typeX15 __kernel_fsid_t;

typedef long  __kernel_off_t  ;

typedef long long __kernel_loff_t;

typedef long  __kernel_old_time_t  ;

typedef long  __kernel_time_t  ;

typedef long long __kernel_time64_t;

typedef long  __kernel_clock_t  ;

typedef int __kernel_timer_t;

typedef int __kernel_clockid_t;

typedef char* __kernel_caddr_t;

typedef unsigned short int __kernel_uid16_t;

typedef unsigned short int __kernel_gid16_t;

typedef struct sockaddr* __restrict  __SOCKADDR_ARG  ;

typedef const struct sockaddr* __restrict  __CONST_SOCKADDR_ARG  ;

typedef unsigned int  in_addr_t  ;

typedef unsigned short int  in_port_t  ;

typedef union sigval  __sigval_t  ;

typedef struct sigevent  sigevent_t  ;

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

typedef char __s8;

typedef unsigned char __u8;

typedef short __s16;

typedef unsigned short int __u16;

typedef int __s32;

typedef unsigned int __u32;

typedef long long __s64;

typedef unsigned long  long __u64;

typedef unsigned short int  __le16  ;

typedef unsigned short int  __be16  ;

typedef unsigned int  __le32  ;

typedef unsigned int  __be32  ;

typedef unsigned long  long  __le64  ;

typedef unsigned long  long  __be64  ;

typedef unsigned short int  __sum16  ;

typedef unsigned int  __wsum  ;

typedef unsigned int __poll_t;

typedef unsigned int  tcp_seq  ;

typedef long ptrdiff_t;

typedef struct anonymous_typeX28 max_align_t;

typedef struct __locale_struct*  __locale_t  ;

typedef struct __locale_struct*  locale_t  ;

typedef int wchar_t;

typedef struct anonymous_typeX63 imaxdiv_t;

/// previous struct definition ///
struct cmsghdr;

/// struct definition ///
struct __fsid_t
{
    int __val[2];
};

struct iovec
{
    void* iov_base;
    unsigned long  iov_len  ;
};

struct anonymous_typeX1
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

struct timeval
{
    long  int  tv_sec  ;
    long  int  tv_usec  ;
};

struct timespec
{
    long  int  tv_sec  ;
    long  int  tv_nsec  ;
};

struct anonymous_typeX2
{
    long  int  fds_bits[1024/(8*(int)sizeof(long  int ))]  ;
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
struct __pthread_mutex_s  __data  ;
char __size[40];
long  int __align;
};

union anonymous_typeZ9
{
struct __pthread_cond_s  __data  ;
char __size[48];
long long int __align;
};

union anonymous_typeZ10
{
struct __pthread_rwlock_arch_t  __data  ;
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

enum  __socket_type { SOCK_STREAM=(1),
SOCK_DGRAM=(2),
SOCK_RAW=(3),
SOCK_RDM=(4),
SOCK_SEQPACKET=(5),
SOCK_DCCP=(6),
SOCK_PACKET=(10),
SOCK_CLOEXEC=(02000000),
SOCK_NONBLOCK=(00004000)
};

struct sockaddr
{
    unsigned short int  sa_family  ;
    char sa_data[14];
} __attribute__ ((__may_alias__)) ;

struct sockaddr_storage
{
    unsigned short int  ss_family  ;
    char __ss_padding[(128-(sizeof(unsigned short int))-sizeof(unsigned long  int))];
    unsigned long  int __ss_align;
} __attribute__ ((__may_alias__)) ;

enum { MSG_OOB=(0x01),
MSG_PEEK=(0x02),
MSG_DONTROUTE=(0x04),
MSG_TRYHARD=((0x04)),
MSG_CTRUNC=(0x08),
MSG_PROXY=(0x10),
MSG_TRUNC=(0x20),
MSG_DONTWAIT=(0x40),
MSG_EOR=(0x80),
MSG_WAITALL=(0x100),
MSG_FIN=(0x200),
MSG_SYN=(0x400),
MSG_CONFIRM=(0x800),
MSG_RST=(0x1000),
MSG_ERRQUEUE=(0x2000),
MSG_NOSIGNAL=(0x4000),
MSG_MORE=(0x8000),
MSG_WAITFORONE=(0x10000),
MSG_BATCH=(0x40000),
MSG_SOCK_DEVMEM=(0x2000000),
MSG_ZEROCOPY=(0x4000000),
MSG_FASTOPEN=(0x20000000),
MSG_CMSG_CLOEXEC=(0x40000000)
};

struct msghdr
{
    void* msg_name;
    unsigned int  msg_namelen  ;
    struct iovec*  msg_iov  ;
    unsigned long  msg_iovlen  ;
    void* msg_control;
    unsigned long  msg_controllen  ;
    int msg_flags;
};

struct cmsghdr
{
    unsigned long  cmsg_len  ;
    int cmsg_level;
    int cmsg_type;
    unsigned char __cmsg_data[];
};

enum { SCM_RIGHTS=(0x01),
SCM_CREDENTIALS=(0x02),
SCM_SECURITY=(0x03),
SCM_PIDFD=(0x04)
};

struct ucred
{
    int  pid  ;
    unsigned int  uid  ;
    unsigned int  gid  ;
};

struct anonymous_typeX14
{
    unsigned long  int fds_bits[1024/(8*sizeof(long))];
};

struct anonymous_typeX15
{
    int val[2];
};

struct linger
{
    int l_onoff;
    int l_linger;
};

struct osockaddr
{
    unsigned short int sa_family;
    unsigned char sa_data[14];
};

enum { SHUT_RD=(0),
SHUT_WR 
,SHUT_RDWR 
};

struct mmsghdr
{
    struct msghdr  msg_hdr  ;
    unsigned int msg_len;
};

struct in_addr
{
    unsigned int  s_addr  ;
};

struct ip_opts
{
    struct in_addr  ip_dst  ;
    char ip_opts[40];
};

struct in_pktinfo
{
    int ipi_ifindex;
    struct in_addr  ipi_spec_dst  ;
    struct in_addr  ipi_addr  ;
};

enum { IPPROTO_IP=(0),
IPPROTO_ICMP=(1),
IPPROTO_IGMP=(2),
IPPROTO_IPIP=(4),
IPPROTO_TCP=(6),
IPPROTO_EGP=(8),
IPPROTO_PUP=(12),
IPPROTO_UDP=(17),
IPPROTO_IDP=(22),
IPPROTO_TP=(29),
IPPROTO_DCCP=(33),
IPPROTO_IPV6=(41),
IPPROTO_RSVP=(46),
IPPROTO_GRE=(47),
IPPROTO_ESP=(50),
IPPROTO_AH=(51),
IPPROTO_MTP=(92),
IPPROTO_BEETPH=(94),
IPPROTO_ENCAP=(98),
IPPROTO_PIM=(103),
IPPROTO_COMP=(108),
IPPROTO_L2TP=(115),
IPPROTO_SCTP=(132),
IPPROTO_UDPLITE=(136),
IPPROTO_MPLS=(137),
IPPROTO_ETHERNET=(143),
IPPROTO_RAW=(255),
IPPROTO_SMC=(256),
IPPROTO_MPTCP=(262),
IPPROTO_MAX 
};

enum { IPPROTO_HOPOPTS=(0),
IPPROTO_ROUTING=(43),
IPPROTO_FRAGMENT=(44),
IPPROTO_ICMPV6=(58),
IPPROTO_NONE=(59),
IPPROTO_DSTOPTS=(60),
IPPROTO_MH=(135)
};

enum { IPPORT_ECHO=(7),
IPPORT_DISCARD=(9),
IPPORT_SYSTAT=(11),
IPPORT_DAYTIME=(13),
IPPORT_NETSTAT=(15),
IPPORT_FTP=(21),
IPPORT_TELNET=(23),
IPPORT_SMTP=(25),
IPPORT_TIMESERVER=(37),
IPPORT_NAMESERVER=(42),
IPPORT_WHOIS=(43),
IPPORT_MTP=(57),
IPPORT_TFTP=(69),
IPPORT_RJE=(77),
IPPORT_FINGER=(79),
IPPORT_TTYLINK=(87),
IPPORT_SUPDUP=(95),
IPPORT_EXECSERVER=(512),
IPPORT_LOGINSERVER=(513),
IPPORT_CMDSERVER=(514),
IPPORT_EFSSERVER=(520),
IPPORT_BIFFUDP=(512),
IPPORT_WHOSERVER=(513),
IPPORT_ROUTESERVER=(520),
IPPORT_RESERVED=(1024),
IPPORT_USERRESERVED=(5000)
};

union anonymous_typeZ16
{
unsigned char  __u6_addr8[16]  ;
unsigned short int  __u6_addr16[8]  ;
unsigned int  __u6_addr32[4]  ;
};

union anonymous_typeZ17
{
unsigned char  __u6_addr8[16]  ;
unsigned short int  __u6_addr16[8]  ;
unsigned int  __u6_addr32[4]  ;
};

struct in6_addr
{
    union {
        unsigned char  __u6_addr8[16]  ;
        unsigned short int  __u6_addr16[8]  ;
        unsigned int  __u6_addr32[4]  ;
    } __in6_u;
};

struct sockaddr_in
{
    unsigned short int  sin_family  ;
    unsigned short int  sin_port  ;
    struct in_addr  sin_addr  ;
    unsigned char sin_zero[sizeof(struct sockaddr )-(sizeof(unsigned short int))-sizeof(unsigned short int )-sizeof(struct in_addr )];
} __attribute__ ((__may_alias__)) ;

struct sockaddr_in6
{
    unsigned short int  sin6_family  ;
    unsigned short int  sin6_port  ;
    unsigned int  sin6_flowinfo  ;
    struct in6_addr  sin6_addr  ;
    unsigned int  sin6_scope_id  ;
} __attribute__ ((__may_alias__)) ;

struct ip_mreq
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_interface  ;
};

struct ip_mreqn
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_address  ;
    int imr_ifindex;
};

struct ip_mreq_source
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_interface  ;
    struct in_addr  imr_sourceaddr  ;
};

struct ipv6_mreq
{
    struct in6_addr  ipv6mr_multiaddr  ;
    unsigned int ipv6mr_interface;
};

struct group_req
{
    unsigned int  gr_interface  ;
    struct sockaddr_storage  gr_group  ;
};

struct group_source_req
{
    unsigned int  gsr_interface  ;
    struct sockaddr_storage  gsr_group  ;
    struct sockaddr_storage  gsr_source  ;
};

struct ip_msfilter
{
    struct in_addr  imsf_multiaddr  ;
    struct in_addr  imsf_interface  ;
    unsigned int  imsf_fmode  ;
    unsigned int  imsf_numsrc  ;
    struct in_addr  imsf_slist[1]  ;
};

struct group_filter
{
    unsigned int  gf_interface  ;
    struct sockaddr_storage  gf_group  ;
    unsigned int  gf_fmode  ;
    unsigned int  gf_numsrc  ;
    struct sockaddr_storage  gf_slist[1]  ;
};

struct in6_pktinfo
{
    struct in6_addr  ipi6_addr  ;
    unsigned int ipi6_ifindex;
};

struct ip6_mtuinfo
{
    struct sockaddr_in6  ip6m_addr  ;
    unsigned int  ip6m_mtu  ;
};

struct rpcent
{
    char* r_name;
    char** r_aliases;
    int r_number;
};

union sigval
{
int sival_int;
void* sival_ptr;
};

struct anonymous_typeX19
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ18
{
int _pad[((64/sizeof(int))-4)];
int  _tid  ;
    struct {
        void (*_function)(union sigval );
        union pthread_attr_t*  _attribute  ;
    } _sigev_thread;
};

struct anonymous_typeX21
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ20
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

struct netent
{
    char* n_name;
    char** n_aliases;
    int n_addrtype;
    unsigned int  n_net  ;
};

struct hostent
{
    char* h_name;
    char** h_aliases;
    int h_addrtype;
    int h_length;
    char** h_addr_list;
};

struct servent
{
    char* s_name;
    char** s_aliases;
    int s_port;
    char* s_proto;
};

struct protoent
{
    char* p_name;
    char** p_aliases;
    int p_proto;
};

struct addrinfo
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    unsigned int  ai_addrlen  ;
    struct sockaddr*  ai_addr  ;
    char* ai_canonname;
    struct addrinfo*  ai_next  ;
};

struct gaicb
{
    const char* ar_name;
    const char* ar_service;
    const struct addrinfo*  ar_request  ;
    struct addrinfo*  ar_result  ;
    int __return;
    int __glibc_reserved[5];
};

struct ethhdr
{
    unsigned char h_dest[6];
    unsigned char h_source[6];
    unsigned short int  h_proto  ;
} __attribute__((packed));

struct ether_addr
{
    unsigned char  ether_addr_octet[6]  ;
} __attribute__ ((__packed__));

struct ether_header
{
    unsigned char  ether_dhost[6]  ;
    unsigned char  ether_shost[6]  ;
    unsigned short int  ether_type  ;
} __attribute__ ((__packed__));

struct arphdr
{
    unsigned short int ar_hrd;
    unsigned short int ar_pro;
    unsigned char ar_hln;
    unsigned char ar_pln;
    unsigned short int ar_op;
};

struct arpreq
{
    struct sockaddr  arp_pa  ;
    struct sockaddr  arp_ha  ;
    int arp_flags;
    struct sockaddr  arp_netmask  ;
    char arp_dev[16];
};

struct arpreq_old
{
    struct sockaddr  arp_pa  ;
    struct sockaddr  arp_ha  ;
    int arp_flags;
    struct sockaddr  arp_netmask  ;
};

struct arpd_request
{
    unsigned short int req;
    unsigned int  ip  ;
    unsigned long  int dev;
    unsigned long  int stamp;
    unsigned long  int updated;
    unsigned char ha[7];
};

struct ether_arp
{
    struct arphdr  ea_hdr  ;
    unsigned char  arp_sha[6]  ;
    unsigned char  arp_spa[4]  ;
    unsigned char  arp_tha[6]  ;
    unsigned char  arp_tpa[4]  ;
};

struct igmp
{
    unsigned char  igmp_type  ;
    unsigned char  igmp_code  ;
    unsigned short int  igmp_cksum  ;
    struct in_addr  igmp_group  ;
};

struct anonymous_typeX23
{
    unsigned short int  th_sport  ;
    unsigned short int  th_dport  ;
    unsigned int  th_seq  ;
    unsigned int  th_ack  ;
    unsigned char  th_x2:4  ;
    unsigned char  th_off:4  ;
    unsigned char  th_flags  ;
    unsigned short int  th_win  ;
    unsigned short int  th_sum  ;
    unsigned short int  th_urp  ;
};

struct anonymous_typeX24
{
    unsigned short int  source  ;
    unsigned short int  dest  ;
    unsigned int  seq  ;
    unsigned int  ack_seq  ;
    unsigned short int  res1:4  ;
    unsigned short int  doff:4  ;
    unsigned short int  fin:1  ;
    unsigned short int  syn:1  ;
    unsigned short int  rst:1  ;
    unsigned short int  psh:1  ;
    unsigned short int  ack:1  ;
    unsigned short int  urg:1  ;
    unsigned short int  res2:2  ;
    unsigned short int  window  ;
    unsigned short int  check  ;
    unsigned short int  urg_ptr  ;
};

union anonymous_typeZ22
{
    struct {
        unsigned short int  th_sport  ;
        unsigned short int  th_dport  ;
        unsigned int  th_seq  ;
        unsigned int  th_ack  ;
        unsigned char  th_x2:4  ;
        unsigned char  th_off:4  ;
        unsigned char  th_flags  ;
        unsigned short int  th_win  ;
        unsigned short int  th_sum  ;
        unsigned short int  th_urp  ;
    };
    struct {
        unsigned short int  source  ;
        unsigned short int  dest  ;
        unsigned int  seq  ;
        unsigned int  ack_seq  ;
        unsigned short int  res1:4  ;
        unsigned short int  doff:4  ;
        unsigned short int  fin:1  ;
        unsigned short int  syn:1  ;
        unsigned short int  rst:1  ;
        unsigned short int  psh:1  ;
        unsigned short int  ack:1  ;
        unsigned short int  urg:1  ;
        unsigned short int  res2:2  ;
        unsigned short int  window  ;
        unsigned short int  check  ;
        unsigned short int  urg_ptr  ;
    };
};

struct anonymous_typeX26
{
    unsigned short int  th_sport  ;
    unsigned short int  th_dport  ;
    unsigned int  th_seq  ;
    unsigned int  th_ack  ;
    unsigned char  th_x2:4  ;
    unsigned char  th_off:4  ;
    unsigned char  th_flags  ;
    unsigned short int  th_win  ;
    unsigned short int  th_sum  ;
    unsigned short int  th_urp  ;
};

struct anonymous_typeX27
{
    unsigned short int  source  ;
    unsigned short int  dest  ;
    unsigned int  seq  ;
    unsigned int  ack_seq  ;
    unsigned short int  res1:4  ;
    unsigned short int  doff:4  ;
    unsigned short int  fin:1  ;
    unsigned short int  syn:1  ;
    unsigned short int  rst:1  ;
    unsigned short int  psh:1  ;
    unsigned short int  ack:1  ;
    unsigned short int  urg:1  ;
    unsigned short int  res2:2  ;
    unsigned short int  window  ;
    unsigned short int  check  ;
    unsigned short int  urg_ptr  ;
};

union anonymous_typeZ25
{
    struct {
        unsigned short int  th_sport  ;
        unsigned short int  th_dport  ;
        unsigned int  th_seq  ;
        unsigned int  th_ack  ;
        unsigned char  th_x2:4  ;
        unsigned char  th_off:4  ;
        unsigned char  th_flags  ;
        unsigned short int  th_win  ;
        unsigned short int  th_sum  ;
        unsigned short int  th_urp  ;
    };
    struct {
        unsigned short int  source  ;
        unsigned short int  dest  ;
        unsigned int  seq  ;
        unsigned int  ack_seq  ;
        unsigned short int  res1:4  ;
        unsigned short int  doff:4  ;
        unsigned short int  fin:1  ;
        unsigned short int  syn:1  ;
        unsigned short int  rst:1  ;
        unsigned short int  psh:1  ;
        unsigned short int  ack:1  ;
        unsigned short int  urg:1  ;
        unsigned short int  res2:2  ;
        unsigned short int  window  ;
        unsigned short int  check  ;
        unsigned short int  urg_ptr  ;
    };
};

struct tcphdr
{
    union {
        struct {
            unsigned short int  th_sport  ;
            unsigned short int  th_dport  ;
            unsigned int  th_seq  ;
            unsigned int  th_ack  ;
            unsigned char  th_x2:4  ;
            unsigned char  th_off:4  ;
            unsigned char  th_flags  ;
            unsigned short int  th_win  ;
            unsigned short int  th_sum  ;
            unsigned short int  th_urp  ;
        };
        struct {
            unsigned short int  source  ;
            unsigned short int  dest  ;
            unsigned int  seq  ;
            unsigned int  ack_seq  ;
            unsigned short int  res1:4  ;
            unsigned short int  doff:4  ;
            unsigned short int  fin:1  ;
            unsigned short int  syn:1  ;
            unsigned short int  rst:1  ;
            unsigned short int  psh:1  ;
            unsigned short int  ack:1  ;
            unsigned short int  urg:1  ;
            unsigned short int  res2:2  ;
            unsigned short int  window  ;
            unsigned short int  check  ;
            unsigned short int  urg_ptr  ;
        };
    };
};

enum { TCP_ESTABLISHED=(1),
TCP_SYN_SENT 
,TCP_SYN_RECV 
,TCP_FIN_WAIT1 
,TCP_FIN_WAIT2 
,TCP_TIME_WAIT 
,TCP_CLOSE 
,TCP_CLOSE_WAIT 
,TCP_LAST_ACK 
,TCP_LISTEN 
,TCP_CLOSING 
};

enum  tcp_ca_state { TCP_CA_Open=(0),
TCP_CA_Disorder=(1),
TCP_CA_CWR=(2),
TCP_CA_Recovery=(3),
TCP_CA_Loss=(4)
};

struct tcp_info
{
    unsigned char  tcpi_state  ;
    unsigned char  tcpi_ca_state  ;
    unsigned char  tcpi_retransmits  ;
    unsigned char  tcpi_probes  ;
    unsigned char  tcpi_backoff  ;
    unsigned char  tcpi_options  ;
    unsigned char  tcpi_snd_wscale:4  ;
    unsigned char  tcpi_rcv_wscale:4  ;
    unsigned int  tcpi_rto  ;
    unsigned int  tcpi_ato  ;
    unsigned int  tcpi_snd_mss  ;
    unsigned int  tcpi_rcv_mss  ;
    unsigned int  tcpi_unacked  ;
    unsigned int  tcpi_sacked  ;
    unsigned int  tcpi_lost  ;
    unsigned int  tcpi_retrans  ;
    unsigned int  tcpi_fackets  ;
    unsigned int  tcpi_last_data_sent  ;
    unsigned int  tcpi_last_ack_sent  ;
    unsigned int  tcpi_last_data_recv  ;
    unsigned int  tcpi_last_ack_recv  ;
    unsigned int  tcpi_pmtu  ;
    unsigned int  tcpi_rcv_ssthresh  ;
    unsigned int  tcpi_rtt  ;
    unsigned int  tcpi_rttvar  ;
    unsigned int  tcpi_snd_ssthresh  ;
    unsigned int  tcpi_snd_cwnd  ;
    unsigned int  tcpi_advmss  ;
    unsigned int  tcpi_reordering  ;
    unsigned int  tcpi_rcv_rtt  ;
    unsigned int  tcpi_rcv_space  ;
    unsigned int  tcpi_total_retrans  ;
};

struct tcp_md5sig
{
    struct sockaddr_storage  tcpm_addr  ;
    unsigned char  tcpm_flags  ;
    unsigned char  tcpm_prefixlen  ;
    unsigned short int  tcpm_keylen  ;
    int tcpm_ifindex;
    unsigned char  tcpm_key[80]  ;
};

struct tcp_repair_opt
{
    unsigned int  opt_code  ;
    unsigned int  opt_val  ;
};

enum { TCP_NO_QUEUE 
,TCP_RECV_QUEUE 
,TCP_SEND_QUEUE 
,TCP_QUEUES_NR 
};

struct tcp_cookie_transactions
{
    unsigned short int  tcpct_flags  ;
    unsigned char  __tcpct_pad1  ;
    unsigned char  tcpct_cookie_desired  ;
    unsigned short int  tcpct_s_data_desired  ;
    unsigned short int  tcpct_used  ;
    unsigned char  tcpct_value[536U]  ;
};

struct tcp_repair_window
{
    unsigned int  snd_wl1  ;
    unsigned int  snd_wnd  ;
    unsigned int  max_window  ;
    unsigned int  rcv_wnd  ;
    unsigned int  rcv_wup  ;
};

struct tcp_zerocopy_receive
{
    unsigned long  int  address  ;
    unsigned int  length  ;
    unsigned int  recv_skip_hint  ;
};

struct sockaddr_un
{
    unsigned short int  sun_family  ;
    char sun_path[108];
} __attribute__ ((__may_alias__)) ;

struct anonymous_typeX28
{
    long long __attribute__((__aligned__(__alignof__(long long)))) __clang_max_align_nonce1 __attribute__((__aligned__(__alignof__(long long))));
    long  double __attribute__((__aligned__(__alignof__(long double)))) __clang_max_align_nonce2 __attribute__((__aligned__(__alignof__(long double))));
};

struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};

union anonymous_typeZ29
{
struct sockaddr*  ifu_broadaddr  ;
struct sockaddr*  ifu_dstaddr  ;
};

union anonymous_typeZ30
{
struct sockaddr*  ifu_broadaddr  ;
struct sockaddr*  ifu_dstaddr  ;
};

struct ifaddrs
{
    struct ifaddrs*  ifa_next  ;
    char* ifa_name;
    unsigned int ifa_flags;
    struct sockaddr*  ifa_addr  ;
    struct sockaddr*  ifa_netmask  ;
    union {
        struct sockaddr*  ifu_broadaddr  ;
        struct sockaddr*  ifu_dstaddr  ;
    } ifa_ifu;
    void* ifa_data;
};

struct if_nameindex
{
    unsigned int if_index;
    char* if_name;
};

enum { IFF_UP=(0x1),
IFF_BROADCAST=(0x2),
IFF_DEBUG=(0x4),
IFF_LOOPBACK=(0x8),
IFF_POINTOPOINT=(0x10),
IFF_NOTRAILERS=(0x20),
IFF_RUNNING=(0x40),
IFF_NOARP=(0x80),
IFF_PROMISC=(0x100),
IFF_ALLMULTI=(0x200),
IFF_MASTER=(0x400),
IFF_SLAVE=(0x800),
IFF_MULTICAST=(0x1000),
IFF_PORTSEL=(0x2000),
IFF_AUTOMEDIA=(0x4000),
IFF_DYNAMIC=(0x8000)
};

union anonymous_typeZ31
{
struct sockaddr  ifu_broadaddr  ;
struct sockaddr  ifu_dstaddr  ;
};

union anonymous_typeZ32
{
struct sockaddr  ifu_broadaddr  ;
struct sockaddr  ifu_dstaddr  ;
};

struct ifaddr
{
    struct sockaddr  ifa_addr  ;
    union {
        struct sockaddr  ifu_broadaddr  ;
        struct sockaddr  ifu_dstaddr  ;
    } ifa_ifu;
    struct iface* ifa_ifp;
    struct ifaddr*  ifa_next  ;
};

struct ifmap
{
    unsigned long  int mem_start;
    unsigned long  int mem_end;
    unsigned short int base_addr;
    unsigned char irq;
    unsigned char dma;
    unsigned char port;
};

union anonymous_typeZ33
{
char ifrn_name[16];
};

union anonymous_typeZ34
{
char ifrn_name[16];
};

union anonymous_typeZ35
{
struct sockaddr  ifru_addr  ;
struct sockaddr  ifru_dstaddr  ;
struct sockaddr  ifru_broadaddr  ;
struct sockaddr  ifru_netmask  ;
struct sockaddr  ifru_hwaddr  ;
short int ifru_flags;
int ifru_ivalue;
int ifru_mtu;
struct ifmap  ifru_map  ;
char ifru_slave[16];
char ifru_newname[16];
char*  ifru_data  ;
};

union anonymous_typeZ36
{
struct sockaddr  ifru_addr  ;
struct sockaddr  ifru_dstaddr  ;
struct sockaddr  ifru_broadaddr  ;
struct sockaddr  ifru_netmask  ;
struct sockaddr  ifru_hwaddr  ;
short int ifru_flags;
int ifru_ivalue;
int ifru_mtu;
struct ifmap  ifru_map  ;
char ifru_slave[16];
char ifru_newname[16];
char*  ifru_data  ;
};

struct ifreq
{
    union {
        char ifrn_name[16];
    } ifr_ifrn;
    union {
        struct sockaddr  ifru_addr  ;
        struct sockaddr  ifru_dstaddr  ;
        struct sockaddr  ifru_broadaddr  ;
        struct sockaddr  ifru_netmask  ;
        struct sockaddr  ifru_hwaddr  ;
        short int ifru_flags;
        int ifru_ivalue;
        int ifru_mtu;
        struct ifmap  ifru_map  ;
        char ifru_slave[16];
        char ifru_newname[16];
        char*  ifru_data  ;
    } ifr_ifru;
};

union anonymous_typeZ37
{
char*  ifcu_buf  ;
struct ifreq*  ifcu_req  ;
};

union anonymous_typeZ38
{
char*  ifcu_buf  ;
struct ifreq*  ifcu_req  ;
};

struct ifconf
{
    int ifc_len;
    union {
        char*  ifcu_buf  ;
        struct ifreq*  ifcu_req  ;
    } ifc_ifcu;
};

struct sockaddr_ll
{
    unsigned short int sll_family;
    unsigned short int sll_protocol;
    int sll_ifindex;
    unsigned short int sll_hatype;
    unsigned char sll_pkttype;
    unsigned char sll_halen;
    unsigned char sll_addr[8];
};

struct packet_mreq
{
    int mr_ifindex;
    unsigned short int mr_type;
    unsigned short int mr_alen;
    unsigned char mr_address[8];
};

struct sockaddr_pkt
{
    unsigned short int spkt_family;
    unsigned char spkt_device[14];
    unsigned short int  spkt_protocol  ;
};

struct tpacket_stats
{
    unsigned int tp_packets;
    unsigned int tp_drops;
};

struct tpacket_stats_v3
{
    unsigned int tp_packets;
    unsigned int tp_drops;
    unsigned int tp_freeze_q_cnt;
};

struct tpacket_rollover_stats
{
    unsigned long  long  tp_all  __attribute__((aligned(8)))	;
    unsigned long  long  tp_huge  __attribute__((aligned(8)))	;
    unsigned long  long  tp_failed  __attribute__((aligned(8)))	;
};

union tpacket_stats_u
{
struct tpacket_stats  stats1  ;
struct tpacket_stats_v3  stats3  ;
};

struct tpacket_auxdata
{
    unsigned int  tp_status  ;
    unsigned int  tp_len  ;
    unsigned int  tp_snaplen  ;
    unsigned short int  tp_mac  ;
    unsigned short int  tp_net  ;
    unsigned short int  tp_vlan_tci  ;
    unsigned short int  tp_vlan_tpid  ;
};

struct tpacket_hdr
{
    unsigned long  int tp_status;
    unsigned int tp_len;
    unsigned int tp_snaplen;
    unsigned short int tp_mac;
    unsigned short int tp_net;
    unsigned int tp_sec;
    unsigned int tp_usec;
};

struct tpacket2_hdr
{
    unsigned int  tp_status  ;
    unsigned int  tp_len  ;
    unsigned int  tp_snaplen  ;
    unsigned short int  tp_mac  ;
    unsigned short int  tp_net  ;
    unsigned int  tp_sec  ;
    unsigned int  tp_nsec  ;
    unsigned short int  tp_vlan_tci  ;
    unsigned short int  tp_vlan_tpid  ;
    unsigned char  tp_padding[4]  ;
};

struct tpacket_hdr_variant1
{
    unsigned int  tp_rxhash  ;
    unsigned int  tp_vlan_tci  ;
    unsigned short int  tp_vlan_tpid  ;
    unsigned short int  tp_padding  ;
};

union anonymous_typeZ39
{
struct tpacket_hdr_variant1  hv1  ;
};

union anonymous_typeZ40
{
struct tpacket_hdr_variant1  hv1  ;
};

struct tpacket3_hdr
{
    unsigned int  tp_next_offset  ;
    unsigned int  tp_sec  ;
    unsigned int  tp_nsec  ;
    unsigned int  tp_snaplen  ;
    unsigned int  tp_len  ;
    unsigned int  tp_status  ;
    unsigned short int  tp_mac  ;
    unsigned short int  tp_net  ;
    union {
        struct tpacket_hdr_variant1  hv1  ;
    };
    unsigned char  tp_padding[8]  ;
};

union anonymous_typeZ41
{
unsigned int ts_usec;
unsigned int ts_nsec;
};

union anonymous_typeZ42
{
unsigned int ts_usec;
unsigned int ts_nsec;
};

struct tpacket_bd_ts
{
    unsigned int ts_sec;
    union {
        unsigned int ts_usec;
        unsigned int ts_nsec;
    };
};

struct tpacket_hdr_v1
{
    unsigned int  block_status  ;
    unsigned int  num_pkts  ;
    unsigned int  offset_to_first_pkt  ;
    unsigned int  blk_len  ;
    unsigned long  long  seq_num  __attribute__((aligned(8)))	;
    struct tpacket_bd_ts  ts_first_pkt  ;
    struct tpacket_bd_ts  ts_last_pkt  ;
};

union tpacket_bd_header_u
{
struct tpacket_hdr_v1  bh1  ;
};

struct tpacket_block_desc
{
    unsigned int  version  ;
    unsigned int  offset_to_priv  ;
    union tpacket_bd_header_u  hdr  ;
};

enum  tpacket_versions { TPACKET_V1 
,TPACKET_V2 
,TPACKET_V3 
};

struct tpacket_req
{
    unsigned int tp_block_size;
    unsigned int tp_block_nr;
    unsigned int tp_frame_size;
    unsigned int tp_frame_nr;
};

struct tpacket_req3
{
    unsigned int tp_block_size;
    unsigned int tp_block_nr;
    unsigned int tp_frame_size;
    unsigned int tp_frame_nr;
    unsigned int tp_retire_blk_tov;
    unsigned int tp_sizeof_priv;
    unsigned int tp_feature_req_word;
};

union tpacket_req_u
{
struct tpacket_req  req  ;
struct tpacket_req3  req3  ;
};

struct fanout_args
{
    unsigned short int  id  ;
    unsigned short int  type_flags  ;
    unsigned int  max_num_members  ;
};

struct anonymous_typeX44
{
    unsigned short int  id  ;
    unsigned short int  sequence  ;
};

struct anonymous_typeX45
{
    unsigned short int  __glibc_reserved  ;
    unsigned short int  mtu  ;
};

union anonymous_typeZ43
{
    struct {
        unsigned short int  id  ;
        unsigned short int  sequence  ;
    } echo;
unsigned int  gateway  ;
    struct {
        unsigned short int  __glibc_reserved  ;
        unsigned short int  mtu  ;
    } frag;
};

struct anonymous_typeX47
{
    unsigned short int  id  ;
    unsigned short int  sequence  ;
};

struct anonymous_typeX48
{
    unsigned short int  __glibc_reserved  ;
    unsigned short int  mtu  ;
};

union anonymous_typeZ46
{
    struct {
        unsigned short int  id  ;
        unsigned short int  sequence  ;
    } echo;
unsigned int  gateway  ;
    struct {
        unsigned short int  __glibc_reserved  ;
        unsigned short int  mtu  ;
    } frag;
};

struct icmphdr
{
    unsigned char  type  ;
    unsigned char  code  ;
    unsigned short int  checksum  ;
    union {
        struct {
            unsigned short int  id  ;
            unsigned short int  sequence  ;
        } echo;
        unsigned int  gateway  ;
        struct {
            unsigned short int  __glibc_reserved  ;
            unsigned short int  mtu  ;
        } frag;
    } un;
};

struct timestamp
{
    unsigned char  len  ;
    unsigned char  ptr  ;
    unsigned int flags:4;
    unsigned int overflow:4;
    unsigned int  data[9]  ;
};

struct iphdr
{
    unsigned int ihl:4;
    unsigned int version:4;
    unsigned char  tos  ;
    unsigned short int  tot_len  ;
    unsigned short int  id  ;
    unsigned short int  frag_off  ;
    unsigned char  ttl  ;
    unsigned char  protocol  ;
    unsigned short int  check  ;
    unsigned int  saddr  ;
    unsigned int  daddr  ;
};

struct ip
{
    unsigned int ip_hl:4;
    unsigned int ip_v:4;
    unsigned char  ip_tos  ;
    unsigned short int ip_len;
    unsigned short int ip_id;
    unsigned short int ip_off;
    unsigned char  ip_ttl  ;
    unsigned char  ip_p  ;
    unsigned short int ip_sum;
    struct in_addr  ip_src  ;
    struct in_addr  ip_dst  ;
};

struct ip_timestamp
{
    unsigned char  ipt_code  ;
    unsigned char  ipt_len  ;
    unsigned char  ipt_ptr  ;
    unsigned int ipt_flg:4;
    unsigned int ipt_oflw:4;
    unsigned int  data[9]  ;
};

struct icmp_ra_addr
{
    unsigned int  ira_addr  ;
    unsigned int  ira_preference  ;
};

struct anonymous_typeX50
{
    unsigned short int  icd_id  ;
    unsigned short int  icd_seq  ;
};

struct anonymous_typeX51
{
    unsigned short int  ipm_void  ;
    unsigned short int  ipm_nextmtu  ;
};

struct anonymous_typeX52
{
    unsigned char  irt_num_addrs  ;
    unsigned char  irt_wpa  ;
    unsigned short int  irt_lifetime  ;
};

union anonymous_typeZ49
{
unsigned char ih_pptr;
struct in_addr  ih_gwaddr  ;
    struct {
        unsigned short int  icd_id  ;
        unsigned short int  icd_seq  ;
    } ih_idseq;
unsigned int  ih_void  ;
    struct {
        unsigned short int  ipm_void  ;
        unsigned short int  ipm_nextmtu  ;
    } ih_pmtu;
    struct {
        unsigned char  irt_num_addrs  ;
        unsigned char  irt_wpa  ;
        unsigned short int  irt_lifetime  ;
    } ih_rtradv;
};

struct anonymous_typeX54
{
    unsigned short int  icd_id  ;
    unsigned short int  icd_seq  ;
};

struct anonymous_typeX55
{
    unsigned short int  ipm_void  ;
    unsigned short int  ipm_nextmtu  ;
};

struct anonymous_typeX56
{
    unsigned char  irt_num_addrs  ;
    unsigned char  irt_wpa  ;
    unsigned short int  irt_lifetime  ;
};

union anonymous_typeZ53
{
unsigned char ih_pptr;
struct in_addr  ih_gwaddr  ;
    struct {
        unsigned short int  icd_id  ;
        unsigned short int  icd_seq  ;
    } ih_idseq;
unsigned int  ih_void  ;
    struct {
        unsigned short int  ipm_void  ;
        unsigned short int  ipm_nextmtu  ;
    } ih_pmtu;
    struct {
        unsigned char  irt_num_addrs  ;
        unsigned char  irt_wpa  ;
        unsigned short int  irt_lifetime  ;
    } ih_rtradv;
};

struct anonymous_typeX58
{
    unsigned int  its_otime  ;
    unsigned int  its_rtime  ;
    unsigned int  its_ttime  ;
};

struct anonymous_typeX59
{
    struct ip  idi_ip  ;
};

union anonymous_typeZ57
{
    struct {
        unsigned int  its_otime  ;
        unsigned int  its_rtime  ;
        unsigned int  its_ttime  ;
    } id_ts;
    struct {
        struct ip  idi_ip  ;
    } id_ip;
struct icmp_ra_addr  id_radv  ;
unsigned int  id_mask  ;
unsigned char  id_data[1]  ;
};

struct anonymous_typeX61
{
    unsigned int  its_otime  ;
    unsigned int  its_rtime  ;
    unsigned int  its_ttime  ;
};

struct anonymous_typeX62
{
    struct ip  idi_ip  ;
};

union anonymous_typeZ60
{
    struct {
        unsigned int  its_otime  ;
        unsigned int  its_rtime  ;
        unsigned int  its_ttime  ;
    } id_ts;
    struct {
        struct ip  idi_ip  ;
    } id_ip;
struct icmp_ra_addr  id_radv  ;
unsigned int  id_mask  ;
unsigned char  id_data[1]  ;
};

struct icmp
{
    unsigned char  icmp_type  ;
    unsigned char  icmp_code  ;
    unsigned short int  icmp_cksum  ;
    union {
        unsigned char ih_pptr;
        struct in_addr  ih_gwaddr  ;
        struct {
            unsigned short int  icd_id  ;
            unsigned short int  icd_seq  ;
        } ih_idseq;
        unsigned int  ih_void  ;
        struct {
            unsigned short int  ipm_void  ;
            unsigned short int  ipm_nextmtu  ;
        } ih_pmtu;
        struct {
            unsigned char  irt_num_addrs  ;
            unsigned char  irt_wpa  ;
            unsigned short int  irt_lifetime  ;
        } ih_rtradv;
    } icmp_hun;
    union {
        struct {
            unsigned int  its_otime  ;
            unsigned int  its_rtime  ;
            unsigned int  its_ttime  ;
        } id_ts;
        struct {
            struct ip  idi_ip  ;
        } id_ip;
        struct icmp_ra_addr  id_radv  ;
        unsigned int  id_mask  ;
        unsigned char  id_data[1]  ;
    } icmp_dun;
};

struct anonymous_typeX63
{
    long  int quot;
    long  int rem;
};

struct anonymous_typeX65
{
    unsigned int  ip6_un1_flow  ;
    unsigned short int  ip6_un1_plen  ;
    unsigned char  ip6_un1_nxt  ;
    unsigned char  ip6_un1_hlim  ;
};

union anonymous_typeZ64
{
    struct {
        unsigned int  ip6_un1_flow  ;
        unsigned short int  ip6_un1_plen  ;
        unsigned char  ip6_un1_nxt  ;
        unsigned char  ip6_un1_hlim  ;
    } ip6_un1;
unsigned char  ip6_un2_vfc  ;
};

struct anonymous_typeX67
{
    unsigned int  ip6_un1_flow  ;
    unsigned short int  ip6_un1_plen  ;
    unsigned char  ip6_un1_nxt  ;
    unsigned char  ip6_un1_hlim  ;
};

union anonymous_typeZ66
{
    struct {
        unsigned int  ip6_un1_flow  ;
        unsigned short int  ip6_un1_plen  ;
        unsigned char  ip6_un1_nxt  ;
        unsigned char  ip6_un1_hlim  ;
    } ip6_un1;
unsigned char  ip6_un2_vfc  ;
};

struct ip6_hdr
{
    union {
        struct {
            unsigned int  ip6_un1_flow  ;
            unsigned short int  ip6_un1_plen  ;
            unsigned char  ip6_un1_nxt  ;
            unsigned char  ip6_un1_hlim  ;
        } ip6_un1;
        unsigned char  ip6_un2_vfc  ;
    } ip6_ctlun;
    struct in6_addr  ip6_src  ;
    struct in6_addr  ip6_dst  ;
};

struct ip6_ext
{
    unsigned char  ip6e_nxt  ;
    unsigned char  ip6e_len  ;
};

struct ip6_hbh
{
    unsigned char  ip6h_nxt  ;
    unsigned char  ip6h_len  ;
};

struct ip6_dest
{
    unsigned char  ip6d_nxt  ;
    unsigned char  ip6d_len  ;
};

struct ip6_rthdr
{
    unsigned char  ip6r_nxt  ;
    unsigned char  ip6r_len  ;
    unsigned char  ip6r_type  ;
    unsigned char  ip6r_segleft  ;
};

struct ip6_rthdr0
{
    unsigned char  ip6r0_nxt  ;
    unsigned char  ip6r0_len  ;
    unsigned char  ip6r0_type  ;
    unsigned char  ip6r0_segleft  ;
    unsigned char  ip6r0_reserved  ;
    unsigned char  ip6r0_slmap[3]  ;
    struct in6_addr  ip6r0_addr[0]  ;
};

struct ip6_frag
{
    unsigned char  ip6f_nxt  ;
    unsigned char  ip6f_reserved  ;
    unsigned short int  ip6f_offlg  ;
    unsigned int  ip6f_ident  ;
};

struct ip6_opt
{
    unsigned char  ip6o_type  ;
    unsigned char  ip6o_len  ;
};

struct ip6_opt_jumbo
{
    unsigned char  ip6oj_type  ;
    unsigned char  ip6oj_len  ;
    unsigned char  ip6oj_jumbo_len[4]  ;
};

struct ip6_opt_nsap
{
    unsigned char  ip6on_type  ;
    unsigned char  ip6on_len  ;
    unsigned char  ip6on_src_nsap_len  ;
    unsigned char  ip6on_dst_nsap_len  ;
};

struct ip6_opt_tunnel
{
    unsigned char  ip6ot_type  ;
    unsigned char  ip6ot_len  ;
    unsigned char  ip6ot_encap_limit  ;
};

struct ip6_opt_router
{
    unsigned char  ip6or_type  ;
    unsigned char  ip6or_len  ;
    unsigned char  ip6or_value[2]  ;
};

struct icmp6_filter
{
    unsigned int  icmp6_filt[8]  ;
};

union anonymous_typeZ68
{
unsigned int  icmp6_un_data32[1]  ;
unsigned short int  icmp6_un_data16[2]  ;
unsigned char  icmp6_un_data8[4]  ;
};

union anonymous_typeZ69
{
unsigned int  icmp6_un_data32[1]  ;
unsigned short int  icmp6_un_data16[2]  ;
unsigned char  icmp6_un_data8[4]  ;
};

struct icmp6_hdr
{
    unsigned char  icmp6_type  ;
    unsigned char  icmp6_code  ;
    unsigned short int  icmp6_cksum  ;
    union {
        unsigned int  icmp6_un_data32[1]  ;
        unsigned short int  icmp6_un_data16[2]  ;
        unsigned char  icmp6_un_data8[4]  ;
    } icmp6_dataun;
};

struct nd_router_solicit
{
    struct icmp6_hdr  nd_rs_hdr  ;
};

struct nd_router_advert
{
    struct icmp6_hdr  nd_ra_hdr  ;
    unsigned int  nd_ra_reachable  ;
    unsigned int  nd_ra_retransmit  ;
};

struct nd_neighbor_solicit
{
    struct icmp6_hdr  nd_ns_hdr  ;
    struct in6_addr  nd_ns_target  ;
};

struct nd_neighbor_advert
{
    struct icmp6_hdr  nd_na_hdr  ;
    struct in6_addr  nd_na_target  ;
};

struct nd_redirect
{
    struct icmp6_hdr  nd_rd_hdr  ;
    struct in6_addr  nd_rd_target  ;
    struct in6_addr  nd_rd_dst  ;
};

struct nd_opt_hdr
{
    unsigned char  nd_opt_type  ;
    unsigned char  nd_opt_len  ;
};

struct nd_opt_prefix_info
{
    unsigned char  nd_opt_pi_type  ;
    unsigned char  nd_opt_pi_len  ;
    unsigned char  nd_opt_pi_prefix_len  ;
    unsigned char  nd_opt_pi_flags_reserved  ;
    unsigned int  nd_opt_pi_valid_time  ;
    unsigned int  nd_opt_pi_preferred_time  ;
    unsigned int  nd_opt_pi_reserved2  ;
    struct in6_addr  nd_opt_pi_prefix  ;
};

struct nd_opt_rd_hdr
{
    unsigned char  nd_opt_rh_type  ;
    unsigned char  nd_opt_rh_len  ;
    unsigned short int  nd_opt_rh_reserved1  ;
    unsigned int  nd_opt_rh_reserved2  ;
};

struct nd_opt_mtu
{
    unsigned char  nd_opt_mtu_type  ;
    unsigned char  nd_opt_mtu_len  ;
    unsigned short int  nd_opt_mtu_reserved  ;
    unsigned int  nd_opt_mtu_mtu  ;
};

struct mld_hdr
{
    struct icmp6_hdr  mld_icmp6_hdr  ;
    struct in6_addr  mld_addr  ;
};

struct icmp6_router_renum
{
    struct icmp6_hdr  rr_hdr  ;
    unsigned char  rr_segnum  ;
    unsigned char  rr_flags  ;
    unsigned short int  rr_maxdelay  ;
    unsigned int  rr_reserved  ;
};

struct rr_pco_match
{
    unsigned char  rpm_code  ;
    unsigned char  rpm_len  ;
    unsigned char  rpm_ordinal  ;
    unsigned char  rpm_matchlen  ;
    unsigned char  rpm_minlen  ;
    unsigned char  rpm_maxlen  ;
    unsigned short int  rpm_reserved  ;
    struct in6_addr  rpm_prefix  ;
};

struct rr_pco_use
{
    unsigned char  rpu_uselen  ;
    unsigned char  rpu_keeplen  ;
    unsigned char  rpu_ramask  ;
    unsigned char  rpu_raflags  ;
    unsigned int  rpu_vltime  ;
    unsigned int  rpu_pltime  ;
    unsigned int  rpu_flags  ;
    struct in6_addr  rpu_prefix  ;
};

struct rr_result
{
    unsigned short int  rrr_flags  ;
    unsigned char  rrr_ordinal  ;
    unsigned char  rrr_matchedlen  ;
    unsigned int  rrr_ifid  ;
    struct in6_addr  rrr_prefix  ;
};

struct nd_opt_adv_interval
{
    unsigned char  nd_opt_adv_interval_type  ;
    unsigned char  nd_opt_adv_interval_len  ;
    unsigned short int  nd_opt_adv_interval_reserved  ;
    unsigned int  nd_opt_adv_interval_ival  ;
};

struct nd_opt_home_agent_info
{
    unsigned char  nd_opt_home_agent_info_type  ;
    unsigned char  nd_opt_home_agent_info_len  ;
    unsigned short int  nd_opt_home_agent_info_reserved  ;
    unsigned short int  nd_opt_home_agent_info_preference  ;
    unsigned short int  nd_opt_home_agent_info_lifetime  ;
};

struct anonymous_typeX71
{
    unsigned short int  uh_sport  ;
    unsigned short int  uh_dport  ;
    unsigned short int  uh_ulen  ;
    unsigned short int  uh_sum  ;
};

struct anonymous_typeX72
{
    unsigned short int  source  ;
    unsigned short int  dest  ;
    unsigned short int  len  ;
    unsigned short int  check  ;
};

union anonymous_typeZ70
{
    struct {
        unsigned short int  uh_sport  ;
        unsigned short int  uh_dport  ;
        unsigned short int  uh_ulen  ;
        unsigned short int  uh_sum  ;
    };
    struct {
        unsigned short int  source  ;
        unsigned short int  dest  ;
        unsigned short int  len  ;
        unsigned short int  check  ;
    };
};

struct anonymous_typeX74
{
    unsigned short int  uh_sport  ;
    unsigned short int  uh_dport  ;
    unsigned short int  uh_ulen  ;
    unsigned short int  uh_sum  ;
};

struct anonymous_typeX75
{
    unsigned short int  source  ;
    unsigned short int  dest  ;
    unsigned short int  len  ;
    unsigned short int  check  ;
};

union anonymous_typeZ73
{
    struct {
        unsigned short int  uh_sport  ;
        unsigned short int  uh_dport  ;
        unsigned short int  uh_ulen  ;
        unsigned short int  uh_sum  ;
    };
    struct {
        unsigned short int  source  ;
        unsigned short int  dest  ;
        unsigned short int  len  ;
        unsigned short int  check  ;
    };
};

struct udphdr
{
    union {
        struct {
            unsigned short int  uh_sport  ;
            unsigned short int  uh_dport  ;
            unsigned short int  uh_ulen  ;
            unsigned short int  uh_sum  ;
        };
        struct {
            unsigned short int  source  ;
            unsigned short int  dest  ;
            unsigned short int  len  ;
            unsigned short int  check  ;
        };
    };
};

/// variable definition ///
extern const struct in6_addr  in6addr_any  ;
extern const struct in6_addr  in6addr_loopback  ;
// source head

// header function
int vsnprintf(char* , unsigned long  int , const char* , __builtin_va_list );
int snprintf(char* , unsigned long  int , const char* , ...);
int select(int __nfds, struct anonymous_typeX2* __restrict  __readfds  , struct anonymous_typeX2* __restrict  __writefds  , struct anonymous_typeX2* __restrict  __exceptfds  , struct timeval* __restrict  __timeout  );
int pselect(int __nfds, struct anonymous_typeX2* __restrict  __readfds  , struct anonymous_typeX2* __restrict  __writefds  , struct anonymous_typeX2* __restrict  __exceptfds  , const struct timespec* __restrict  __timeout  , const struct anonymous_typeX1* __restrict  __sigmask  );
struct cmsghdr*  __cmsg_nxthdr(struct msghdr*  __mhdr  , struct cmsghdr*  __cmsg  );
int socket(int __domain, int __type, int __protocol);
int socketpair(int __domain, int __type, int __protocol, int __fds[2]);
int bind(int __fd, const struct sockaddr* __restrict  __addr  , unsigned int  __len  );
int getsockname(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __len  );
int connect(int __fd, const struct sockaddr* __restrict  __addr  , unsigned int  __len  );
int getpeername(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __len  );
long  int  send(int __fd, const void* __buf, unsigned long  __n  , int __flags);
long  int  recv(int __fd, void* __buf, unsigned long  __n  , int __flags);
long  int  sendto(int __fd, const void* __buf, unsigned long  __n  , int __flags, const struct sockaddr* __restrict  __addr  , unsigned int  __addr_len  );
long  int  recvfrom(int __fd, void* __restrict __buf, unsigned long  __n  , int __flags, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __addr_len  );
long  int  sendmsg(int __fd, const struct msghdr*  __message  , int __flags);
int sendmmsg(int __fd, struct mmsghdr*  __vmessages  , unsigned int __vlen, int __flags);
long  int  recvmsg(int __fd, struct msghdr*  __message  , int __flags);
int recvmmsg(int __fd, struct mmsghdr*  __vmessages  , unsigned int __vlen, int __flags, struct timespec*  __tmo  );
int getsockopt(int __fd, int __level, int __optname, void* __restrict __optval, unsigned int* __restrict  __optlen  );
int setsockopt(int __fd, int __level, int __optname, const void* __optval, unsigned int  __optlen  );
int listen(int __fd, int __n);
int accept(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __addr_len  );
int accept4(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __addr_len  , int __flags);
int shutdown(int __fd, int __how);
int sockatmark(int __fd);
int isfdtype(int __fd, int __fdtype);
unsigned int  ntohl(unsigned int  __netlong  ) __attribute__ ((__const__));
unsigned short int  ntohs(unsigned short int  __netshort  ) __attribute__ ((__const__));
unsigned int  htonl(unsigned int  __hostlong  ) __attribute__ ((__const__));
unsigned short int  htons(unsigned short int  __hostshort  ) __attribute__ ((__const__));
int bindresvport(int __sockfd, struct sockaddr_in*  __sock_in  );
int bindresvport6(int __sockfd, struct sockaddr_in6*  __sock_in  );
int inet6_option_space(int __nbytes) __attribute__ ((__deprecated__));
int inet6_option_init(void* __bp, struct cmsghdr**  __cmsgp  , int __type) __attribute__ ((__deprecated__));
int inet6_option_append(struct cmsghdr*  __cmsg  , const unsigned char*  __typep  , int __multx, int __plusy) __attribute__ ((__deprecated__));
unsigned char*  inet6_option_alloc(struct cmsghdr*  __cmsg  , int __datalen, int __multx, int __plusy) __attribute__ ((__deprecated__));
int inet6_option_next(const struct cmsghdr*  __cmsg  , unsigned char**  __tptrp  ) __attribute__ ((__deprecated__));
int inet6_option_find(const struct cmsghdr*  __cmsg  , unsigned char**  __tptrp  , int __type) __attribute__ ((__deprecated__));
int inet6_opt_init(void* __extbuf, unsigned int  __extlen  );
int inet6_opt_append(void* __extbuf, unsigned int  __extlen  , int __offset, unsigned char  __type  , unsigned int  __len  , unsigned char  __align  , void** __databufp);
int inet6_opt_finish(void* __extbuf, unsigned int  __extlen  , int __offset);
int inet6_opt_set_val(void* __databuf, int __offset, void* __val, unsigned int  __vallen  );
int inet6_opt_next(void* __extbuf, unsigned int  __extlen  , int __offset, unsigned char*  __typep  , unsigned int*  __lenp  , void** __databufp);
int inet6_opt_find(void* __extbuf, unsigned int  __extlen  , int __offset, unsigned char  __type  , unsigned int*  __lenp  , void** __databufp);
int inet6_opt_get_val(void* __databuf, int __offset, void* __val, unsigned int  __vallen  );
unsigned int  inet6_rth_space(int __type, int __segments);
void* inet6_rth_init(void* __bp, unsigned int  __bp_len  , int __type, int __segments);
int inet6_rth_add(void* __bp, const struct in6_addr*  __addr  );
int inet6_rth_reverse(const void* __in, void* __out);
int inet6_rth_segments(const void* __bp);
struct in6_addr*  inet6_rth_getaddr(const void* __bp, int __index);
int getipv4sourcefilter(int __s, struct in_addr  __interface_addr  , struct in_addr  __group  , unsigned int*  __fmode  , unsigned int*  __numsrc  , struct in_addr*  __slist  );
int setipv4sourcefilter(int __s, struct in_addr  __interface_addr  , struct in_addr  __group  , unsigned int  __fmode  , unsigned int  __numsrc  , const struct in_addr*  __slist  );
int getsourcefilter(int __s, unsigned int  __interface_addr  , const struct sockaddr*  __group  , unsigned int  __grouplen  , unsigned int*  __fmode  , unsigned int*  __numsrc  , struct sockaddr_storage*  __slist  );
int setsourcefilter(int __s, unsigned int  __interface_addr  , const struct sockaddr*  __group  , unsigned int  __grouplen  , unsigned int  __fmode  , unsigned int  __numsrc  , const struct sockaddr_storage*  __slist  );
unsigned int  inet_addr(const char* __cp);
unsigned int  inet_lnaof(struct in_addr  __in  );
struct in_addr  inet_makeaddr(unsigned int  __net  , unsigned int  __host  );
unsigned int  inet_netof(struct in_addr  __in  );
unsigned int  inet_network(const char* __cp);
char* inet_ntoa(struct in_addr  __in  );
int inet_pton(int __af, const char* __restrict __cp, void* __restrict __buf);
const char* inet_ntop(int __af, const void* __restrict __cp, char* __restrict __buf, unsigned int  __len  );
int inet_aton(const char* __cp, struct in_addr*  __inp  );
char* inet_neta(unsigned int  __net  , char* __buf, unsigned long  __len  ) __attribute__ ((__deprecated__));
char* inet_net_ntop(int __af, const void* __cp, int __bits, char* __buf, unsigned long  __len  );
int inet_net_pton(int __af, const char* __cp, void* __buf, unsigned long  __len  );
unsigned int inet_nsap_addr(const char* __cp, unsigned char* __buf, int __len);
char* inet_nsap_ntoa(int __len, const unsigned char* __cp, char* __buf);
void setrpcent(int __stayopen);
void endrpcent();
struct rpcent*  getrpcbyname(const char* __name);
struct rpcent*  getrpcbynumber(int __number);
struct rpcent*  getrpcent();
int getrpcbyname_r(const char* __name, struct rpcent*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct rpcent**  __result  );
int getrpcbynumber_r(int __number, struct rpcent*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct rpcent**  __result  );
int getrpcent_r(struct rpcent*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct rpcent**  __result  );
int* __h_errno_location() __attribute__ ((__const__));
void herror(const char* __str);
const char* hstrerror(int __err_num);
void sethostent(int __stay_open);
void endhostent();
struct hostent*  gethostent();
struct hostent*  gethostbyaddr(const void* __addr, unsigned int  __len  , int __type);
struct hostent*  gethostbyname(const char* __name);
struct hostent*  gethostbyname2(const char* __name, int __af);
int gethostent_r(struct hostent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct hostent** __restrict  __result  , int* __restrict __h_errnop);
int gethostbyaddr_r(const void* __restrict __addr, unsigned int  __len  , int __type, struct hostent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct hostent** __restrict  __result  , int* __restrict __h_errnop);
int gethostbyname_r(const char* __restrict __name, struct hostent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct hostent** __restrict  __result  , int* __restrict __h_errnop);
int gethostbyname2_r(const char* __restrict __name, int __af, struct hostent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct hostent** __restrict  __result  , int* __restrict __h_errnop);
void setnetent(int __stay_open);
void endnetent();
struct netent*  getnetent();
struct netent*  getnetbyaddr(unsigned int  __net  , int __type);
struct netent*  getnetbyname(const char* __name);
int getnetent_r(struct netent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct netent** __restrict  __result  , int* __restrict __h_errnop);
int getnetbyaddr_r(unsigned int  __net  , int __type, struct netent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct netent** __restrict  __result  , int* __restrict __h_errnop);
int getnetbyname_r(const char* __restrict __name, struct netent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct netent** __restrict  __result  , int* __restrict __h_errnop);
void setservent(int __stay_open);
void endservent();
struct servent*  getservent();
struct servent*  getservbyname(const char* __name, const char* __proto);
struct servent*  getservbyport(int __port, const char* __proto);
int getservent_r(struct servent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct servent** __restrict  __result  );
int getservbyname_r(const char* __restrict __name, const char* __restrict __proto, struct servent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct servent** __restrict  __result  );
int getservbyport_r(int __port, const char* __restrict __proto, struct servent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct servent** __restrict  __result  );
void setprotoent(int __stay_open);
void endprotoent();
struct protoent*  getprotoent();
struct protoent*  getprotobyname(const char* __name);
struct protoent*  getprotobynumber(int __proto);
int getprotoent_r(struct protoent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct protoent** __restrict  __result  );
int getprotobyname_r(const char* __restrict __name, struct protoent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct protoent** __restrict  __result  );
int getprotobynumber_r(int __proto, struct protoent* __restrict  __result_buf  , char* __restrict __buf, unsigned long  __buflen  , struct protoent** __restrict  __result  );
int setnetgrent(const char* __netgroup);
void endnetgrent();
int getnetgrent(char** __restrict __hostp, char** __restrict __userp, char** __restrict __domainp);
int innetgr(const char* __netgroup, const char* __host, const char* , const char* __domain);
int getnetgrent_r(char** __restrict __hostp, char** __restrict __userp, char** __restrict __domainp, char* __restrict __buffer, unsigned long  __buflen  );
int rcmd(char** __restrict __ahost, unsigned short int __rport, const char* __restrict __locuser, const char* __restrict __remuser, const char* __restrict __cmd, int* __restrict __fd2p);
int rcmd_af(char** __restrict __ahost, unsigned short int __rport, const char* __restrict __locuser, const char* __restrict __remuser, const char* __restrict __cmd, int* __restrict __fd2p, unsigned short int  __af  );
int rexec(char** __restrict __ahost, int __rport, const char* __restrict __name, const char* __restrict __pass, const char* __restrict __cmd, int* __restrict __fd2p);
int rexec_af(char** __restrict __ahost, int __rport, const char* __restrict __name, const char* __restrict __pass, const char* __restrict __cmd, int* __restrict __fd2p, unsigned short int  __af  );
int ruserok(const char* __rhost, int __suser, const char* __remuser, const char* __locuser);
int ruserok_af(const char* __rhost, int __suser, const char* __remuser, const char* __locuser, unsigned short int  __af  );
int iruserok(unsigned int  __raddr  , int __suser, const char* __remuser, const char* __locuser);
int iruserok_af(const void* __raddr, int __suser, const char* __remuser, const char* __locuser, unsigned short int  __af  );
int rresvport(int* __alport);
int rresvport_af(int* __alport, unsigned short int  __af  );
int getaddrinfo(const char* __restrict __name, const char* __restrict __service, const struct addrinfo* __restrict  __req  , struct addrinfo** __restrict  __pai  );
void freeaddrinfo(struct addrinfo*  __ai  );
const char* gai_strerror(int __ecode);
int getnameinfo(const struct sockaddr* __restrict  __sa  , unsigned int  __salen  , char* __restrict __host, unsigned int  __hostlen  , char* __restrict __serv, unsigned int  __servlen  , int __flags);
int getaddrinfo_a(int __mode, struct gaicb*  __list[]  , int __ent, struct sigevent* __restrict  __sig  );
int gai_suspend(const struct gaicb* const  __list[]  , int __ent, const struct timespec*  __timeout  );
int gai_error(struct gaicb*  __req  );
int gai_cancel(struct gaicb*  __gaicbp  );
char* ether_ntoa(const struct ether_addr*  __addr  );
char* ether_ntoa_r(const struct ether_addr*  __addr  , char* __buf);
struct ether_addr*  ether_aton(const char* __asc);
struct ether_addr*  ether_aton_r(const char* __asc, struct ether_addr*  __addr  );
int ether_ntohost(char* __hostname, const struct ether_addr*  __addr  );
int ether_hostton(const char* __hostname, struct ether_addr*  __addr  );
int ether_line(const char* __line, struct ether_addr*  __addr  , char* __hostname);
void* memcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* memmove(void* __dest, const void* __src, unsigned long  __n  );
void* memccpy(void* __restrict __dest, const void* __restrict __src, int __c, unsigned long  __n  );
void* memset(void* __s, int __c, unsigned long  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* memchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* rawmemchr(const void* __s, int __c) __attribute__ ((__pure__)) ;
void* memrchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) 
      ;
char* strcpy(char* __restrict __dest, const char* __restrict __src);
char* strncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* strcat(char* __restrict __dest, const char* __restrict __src);
char* strncat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcoll(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
unsigned long  strxfrm(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
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
char* strtok(char* __restrict __s, const char* __restrict __delim);
char* __strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
void* memmem(const void* __haystack, unsigned long  __haystacklen  , const void* __needle, unsigned long  __needlelen  ) __attribute__ ((__pure__)) 
    
    ;
void* __mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
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
char* strsep(char** __restrict __stringp, const char* __restrict __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __restrict __dest, const char* __restrict __src);
char* stpcpy(char* __restrict __dest, const char* __restrict __src);
char* __stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strverscmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  __n  );
char* basename(const char* __filename);
int getifaddrs(struct ifaddrs**  __ifap  );
void freeifaddrs(struct ifaddrs*  __ifa  );
unsigned int if_nametoindex(const char* __ifname);
char* if_indextoname(unsigned int __ifindex, char __ifname[16]);
struct if_nameindex*  if_nameindex();
void if_freenameindex(struct if_nameindex*  __ptr  );
long  int  imaxabs(long  int  __n  ) __attribute__ ((__const__));
unsigned long  int  uimaxabs(long  int  __n  ) __attribute__ ((__const__));
struct anonymous_typeX63  imaxdiv(long  int  __numer  , long  int  __denom  ) __attribute__ ((__const__));
long  int  strtoimax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int  strtoumax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long  int  wcstoimax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int  wcstoumax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long  int  __isoc23_strtoimax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int  __isoc23_strtoumax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long  int  __isoc23_wcstoimax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int  __isoc23_wcstoumax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
int test_headers_net();
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
static inline unsigned int  __arch_swab32(unsigned int  val  )
{
     __asm  (
        "bswapl %0"
        :        "=r"
(val)        :        "0"
(val)    );
    return val;
}
static inline unsigned long  long  __arch_swab64(unsigned long  long  val  )
{
     __asm  (
        "bswapq %0"
        :        "=r"
(val)        :        "0"
(val)    );
    return val;
}
static inline unsigned short int  __fswab16(unsigned short int  val  )
{
    return ((unsigned short int )((((unsigned short int )(val)&(unsigned short int )0x00ffU)<<8)|(((unsigned short int )(val)&(unsigned short int )0xff00U)>>8)));
}
static inline unsigned int  __fswab32(unsigned int  val  )
{
    return __arch_swab32(val);
}
static inline unsigned long  long  __fswab64(unsigned long  long  val  )
{
    return __arch_swab64(val);
}
static inline unsigned int  __fswahw32(unsigned int  val  )
{
    return ((unsigned int )((((unsigned int )(val)&(unsigned int )0x0000ffffUL)<<16)|(((unsigned int )(val)&(unsigned int )0xffff0000UL)>>16)));
}
static inline unsigned int  __fswahb32(unsigned int  val  )
{
    return ((unsigned int )((((unsigned int )(val)&(unsigned int )0x00ff00ffUL)<<8)|(((unsigned int )(val)&(unsigned int )0xff00ff00UL)>>8)));
}
static inline unsigned long  int  __attribute__((__always_inline__))  __swab(const unsigned long  int y)
{
    return (unsigned long  long )(((__builtin_constant_p(y))?(((unsigned long  long )((((unsigned long  long )(y)&(unsigned long  long )0x00000000000000ffULL)<<56)|(((unsigned long  long )(y)&(unsigned long  long )0x000000000000ff00ULL)<<40)|(((unsigned long  long )(y)&(unsigned long  long )0x0000000000ff0000ULL)<<24)|(((unsigned long  long )(y)&(unsigned long  long )0x00000000ff000000ULL)<<8)|(((unsigned long  long )(y)&(unsigned long  long )0x000000ff00000000ULL)>>8)|(((unsigned long  long )(y)&(unsigned long  long )0x0000ff0000000000ULL)>>24)|(((unsigned long  long )(y)&(unsigned long  long )0x00ff000000000000ULL)>>40)|(((unsigned long  long )(y)&(unsigned long  long )0xff00000000000000ULL)>>56)))):(__fswab64(y))));
}
static inline unsigned short int  __attribute__((__always_inline__))  __swab16p(const unsigned short int*  p  )
{
    return (unsigned short int )(((__builtin_constant_p(*p))?(((unsigned short int )((((unsigned short int )(*p)&(unsigned short int )0x00ffU)<<8)|(((unsigned short int )(*p)&(unsigned short int )0xff00U)>>8)))):(__fswab16(*p))));
}
static inline unsigned int  __attribute__((__always_inline__))  __swab32p(const unsigned int*  p  )
{
    return (unsigned int )(((__builtin_constant_p(*p))?(((unsigned int )((((unsigned int )(*p)&(unsigned int )0x000000ffUL)<<24)|(((unsigned int )(*p)&(unsigned int )0x0000ff00UL)<<8)|(((unsigned int )(*p)&(unsigned int )0x00ff0000UL)>>8)|(((unsigned int )(*p)&(unsigned int )0xff000000UL)>>24)))):(__fswab32(*p))));
}
static inline unsigned long  long  __attribute__((__always_inline__))  __swab64p(const unsigned long  long*  p  )
{
    return (unsigned long  long )(((__builtin_constant_p(*p))?(((unsigned long  long )((((unsigned long  long )(*p)&(unsigned long  long )0x00000000000000ffULL)<<56)|(((unsigned long  long )(*p)&(unsigned long  long )0x000000000000ff00ULL)<<40)|(((unsigned long  long )(*p)&(unsigned long  long )0x0000000000ff0000ULL)<<24)|(((unsigned long  long )(*p)&(unsigned long  long )0x00000000ff000000ULL)<<8)|(((unsigned long  long )(*p)&(unsigned long  long )0x000000ff00000000ULL)>>8)|(((unsigned long  long )(*p)&(unsigned long  long )0x0000ff0000000000ULL)>>24)|(((unsigned long  long )(*p)&(unsigned long  long )0x00ff000000000000ULL)>>40)|(((unsigned long  long )(*p)&(unsigned long  long )0xff00000000000000ULL)>>56)))):(__fswab64(*p))));
}
static inline unsigned int  __swahw32p(const unsigned int*  p  )
{
    return (((__builtin_constant_p((unsigned int )(*p)))?(((unsigned int )((((unsigned int )(*p)&(unsigned int )0x0000ffffUL)<<16)|(((unsigned int )(*p)&(unsigned int )0xffff0000UL)>>16)))):(__fswahw32(*p))));
}
static inline unsigned int  __swahb32p(const unsigned int*  p  )
{
    return (((__builtin_constant_p((unsigned int )(*p)))?(((unsigned int )((((unsigned int )(*p)&(unsigned int )0x00ff00ffUL)<<8)|(((unsigned int )(*p)&(unsigned int )0xff00ff00UL)>>8)))):(__fswahb32(*p))));
}
static inline void __swab16s(unsigned short int*  p  )
{
    *p=__swab16p(p);
}
static inline void  __attribute__((__always_inline__))  __swab32s(unsigned int*  p  )
{
    *p=__swab32p(p);
}
static inline void  __attribute__((__always_inline__))  __swab64s(unsigned long  long*  p  )
{
    *p=__swab64p(p);
}
static inline void __swahw32s(unsigned int*  p  )
{
    *p=__swahw32p(p);
}
static inline void __swahb32s(unsigned int*  p  )
{
    *p=__swahb32p(p);
}
static inline unsigned long  long  __attribute__((__always_inline__))  __cpu_to_le64p(const unsigned long  long*  p  )
{
    return (unsigned long  long )*p;
}
static inline unsigned long  long  __attribute__((__always_inline__))  __le64_to_cpup(const unsigned long  long*  p  )
{
    return (unsigned long  long )*p;
}
static inline unsigned int  __attribute__((__always_inline__))  __cpu_to_le32p(const unsigned int*  p  )
{
    return (unsigned int )*p;
}
static inline unsigned int  __attribute__((__always_inline__))  __le32_to_cpup(const unsigned int*  p  )
{
    return (unsigned int )*p;
}
static inline unsigned short int  __attribute__((__always_inline__))  __cpu_to_le16p(const unsigned short int*  p  )
{
    return (unsigned short int )*p;
}
static inline unsigned short int  __attribute__((__always_inline__))  __le16_to_cpup(const unsigned short int*  p  )
{
    return (unsigned short int )*p;
}
static inline unsigned long  long  __attribute__((__always_inline__))  __cpu_to_be64p(const unsigned long  long*  p  )
{
    return (unsigned long  long )__swab64p(p);
}
static inline unsigned long  long  __attribute__((__always_inline__))  __be64_to_cpup(const unsigned long  long*  p  )
{
    return __swab64p((unsigned long  long* )p);
}
static inline unsigned int  __attribute__((__always_inline__))  __cpu_to_be32p(const unsigned int*  p  )
{
    return (unsigned int )__swab32p(p);
}
static inline unsigned int  __attribute__((__always_inline__))  __be32_to_cpup(const unsigned int*  p  )
{
    return __swab32p((unsigned int* )p);
}
static inline unsigned short int  __attribute__((__always_inline__))  __cpu_to_be16p(const unsigned short int*  p  )
{
    return (unsigned short int )__swab16p(p);
}
static inline unsigned short int  __attribute__((__always_inline__))  __be16_to_cpup(const unsigned short int*  p  )
{
    return __swab16p((unsigned short int* )p);
}

// body function
int test_headers_net()
{
    return 0;
}

