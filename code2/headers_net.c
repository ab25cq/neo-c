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

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

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

typedef long  intptr_t  ;

typedef unsigned long  int uintptr_t;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  long u_int64_t;

typedef long long  register_t  ;

typedef unsigned long  long  user_addr_t  ;

typedef unsigned long  long  user_size_t  ;

typedef long long  user_ssize_t  ;

typedef long long  user_long_t  ;

typedef unsigned long  long  user_ulong_t  ;

typedef long long  user_time_t  ;

typedef long long  user_off_t  ;

typedef unsigned long  long  syscall_arg_t  ;

typedef unsigned int  in_addr_t  ;

typedef unsigned short int  in_port_t  ;

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

typedef unsigned long  int  clock_t  ;

typedef unsigned long  int  size_t  ;

typedef long  ssize_t  ;

typedef long  time_t  ;

typedef unsigned int  useconds_t  ;

typedef int  suseconds_t  ;

typedef unsigned long  int  rsize_t  ;

typedef int errno_t;

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

typedef unsigned char  sa_family_t  ;

typedef unsigned int  socklen_t  ;

typedef unsigned int  sae_associd_t  ;

typedef unsigned int  sae_connid_t  ;

typedef struct sa_endpoints  sa_endpoints_t  ;

typedef struct in6_addr  in6_addr_t  ;

typedef int __darwin_nl_item;

typedef int __darwin_wctrans_t;

typedef unsigned int  __darwin_wctype_t  ;

typedef struct ether_header  ether_header_t  ;

typedef struct ether_addr  ether_addr_t  ;

typedef unsigned int  tcp_seq  ;

typedef unsigned int  tcp_cc  ;

typedef enum anonymous_typeY7 clockid_t;

typedef unsigned short int  n_short  ;

typedef unsigned int  n_long  ;

typedef unsigned int  n_time  ;

/// previous struct definition ///
struct cmsghdr;

struct sockaddr;

struct ifnet_interface_advisory;

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

struct iovec
{
    void* iov_base;
    unsigned long  int  iov_len  ;
};

struct sa_endpoints
{
    unsigned int sae_srcif;
    const struct sockaddr* sae_srcaddr;
    unsigned int  sae_srcaddrlen  ;
    const struct sockaddr* sae_dstaddr;
    unsigned int  sae_dstaddrlen  ;
};

struct linger
{
    int l_onoff;
    int l_linger;
};

struct so_np_extensions
{
    unsigned int  npx_flags  ;
    unsigned int  npx_mask  ;
};

struct sockaddr
{
    unsigned char  sa_len  ;
    unsigned char  sa_family  ;
    char sa_data[14];
};

struct __sockaddr_header
{
    unsigned char  sa_len  ;
    unsigned char  sa_family  ;
};

struct sockproto
{
    unsigned short int  sp_family  ;
    unsigned short int  sp_protocol  ;
};

struct sockaddr_storage
{
    unsigned char  ss_len  ;
    unsigned char  ss_family  ;
    char __ss_pad1[((sizeof(long long int ))-sizeof(unsigned char )-sizeof(unsigned char ))];
    long long int  __ss_align  ;
    char __ss_pad2[(128-sizeof(unsigned char )-sizeof(unsigned char )-((sizeof(long long int ))-sizeof(unsigned char )-sizeof(unsigned char ))-(sizeof(long long int )))];
};

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

struct cmsghdr
{
    unsigned int  cmsg_len  ;
    int cmsg_level;
    int cmsg_type;
};

struct sf_hdtr
{
    struct iovec*  headers  ;
    int hdr_cnt;
    struct iovec*  trailers  ;
    int trl_cnt;
};

struct in_addr
{
    unsigned int  s_addr  ;
};

struct sockaddr_in
{
    unsigned char  sin_len  ;
    unsigned char  sin_family  ;
    unsigned short int  sin_port  ;
    struct in_addr  sin_addr  ;
    char sin_zero[8];
};

struct ip_opts
{
    struct in_addr  ip_dst  ;
    char ip_opts[40];
};

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

#pragma pack(4)
struct ip_mreq_source
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_sourceaddr  ;
    struct in_addr  imr_interface  ;
};
#pragma pack(pop)
#pragma pack(4)
struct group_req
{
    unsigned int  gr_interface  ;
    struct sockaddr_storage  gr_group  ;
};
#pragma pack(pop)
#pragma pack(4)
struct group_source_req
{
    unsigned int  gsr_interface  ;
    struct sockaddr_storage  gsr_group  ;
    struct sockaddr_storage  gsr_source  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __msfilterreq
{
    unsigned int  msfr_ifindex  ;
    unsigned int  msfr_fmode  ;
    unsigned int  msfr_nsrcs  ;
    unsigned int  __msfr_align  ;
    struct sockaddr_storage  msfr_group  ;
    struct sockaddr_storage*  msfr_srcs  ;
};
#pragma pack(pop)
#pragma pack(4)
struct in_pktinfo
{
    unsigned int ipi_ifindex;
    struct in_addr  ipi_spec_dst  ;
    struct in_addr  ipi_addr  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ6
{
unsigned char  __u6_addr8[16]  ;
unsigned short int  __u6_addr16[8]  ;
unsigned int  __u6_addr32[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ7
{
unsigned char  __u6_addr8[16]  ;
unsigned short int  __u6_addr16[8]  ;
unsigned int  __u6_addr32[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct in6_addr
{
    union {
        unsigned char  __u6_addr8[16]  ;
        unsigned short int  __u6_addr16[8]  ;
        unsigned int  __u6_addr32[4]  ;
    } __u6_addr;
};
#pragma pack(pop)
#pragma pack(4)
struct sockaddr_in6
{
    unsigned char  sin6_len  ;
    unsigned char  sin6_family  ;
    unsigned short int  sin6_port  ;
    unsigned int  sin6_flowinfo  ;
    struct in6_addr  sin6_addr  ;
    unsigned int  sin6_scope_id  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ipv6_mreq
{
    struct in6_addr  ipv6mr_multiaddr  ;
    unsigned int ipv6mr_interface;
};
#pragma pack(pop)
#pragma pack(4)
struct in6_pktinfo
{
    struct in6_addr  ipi6_addr  ;
    unsigned int ipi6_ifindex;
};
#pragma pack(pop)
#pragma pack(4)
struct ip6_mtuinfo
{
    struct sockaddr_in6  ip6m_addr  ;
    unsigned int  ip6m_mtu  ;
};
#pragma pack(pop)
#pragma pack(4)
struct hostent
{
    char* h_name;
    char** h_aliases;
    int h_addrtype;
    int h_length;
    char** h_addr_list;
};
#pragma pack(pop)
#pragma pack(4)
struct netent
{
    char* n_name;
    char** n_aliases;
    int n_addrtype;
    unsigned int  n_net  ;
};
#pragma pack(pop)
#pragma pack(4)
struct servent
{
    char* s_name;
    char** s_aliases;
    int s_port;
    char* s_proto;
};
#pragma pack(pop)
#pragma pack(4)
struct protoent
{
    char* p_name;
    char** p_aliases;
    int p_proto;
};
#pragma pack(pop)
#pragma pack(4)
struct addrinfo
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    unsigned int  ai_addrlen  ;
    char* ai_canonname;
    struct sockaddr*  ai_addr  ;
    struct addrinfo*  ai_next  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rpcent
{
    char* r_name;
    char** r_aliases;
    int r_number;
};
#pragma pack(pop)
#pragma pack(4)
struct ether_header
{
    unsigned char  ether_dhost[6]  ;
    unsigned char  ether_shost[6]  ;
    unsigned short int  ether_type  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ether_addr
{
    unsigned char  octet[6]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct igmp
{
    unsigned char  igmp_type  ;
    unsigned char  igmp_code  ;
    unsigned short int  igmp_cksum  ;
    struct in_addr  igmp_group  ;
};
#pragma pack(pop)
#pragma pack(4)
struct igmpv3
{
    unsigned char  igmp_type  ;
    unsigned char  igmp_code  ;
    unsigned short int  igmp_cksum  ;
    struct in_addr  igmp_group  ;
    unsigned char  igmp_misc  ;
    unsigned char  igmp_qqi  ;
    unsigned short int  igmp_numsrc  ;
};
#pragma pack(pop)
#pragma pack(4)
struct igmp_grouprec
{
    unsigned char  ig_type  ;
    unsigned char  ig_datalen  ;
    unsigned short int  ig_numsrc  ;
    struct in_addr  ig_group  ;
};
#pragma pack(pop)
#pragma pack(4)
struct igmp_report
{
    unsigned char  ir_type  ;
    unsigned char  ir_rsv1  ;
    unsigned short int  ir_cksum  ;
    unsigned short int  ir_rsv2  ;
    unsigned short int  ir_numgrps  ;
};
#pragma pack(pop)
#pragma pack(4)
struct tcphdr
{
    unsigned short int th_sport;
    unsigned short int th_dport;
    unsigned int  th_seq  ;
    unsigned int  th_ack  ;
    unsigned int th_x2:4;
    unsigned int th_off:4;
    unsigned char th_flags;
    unsigned short int th_win;
    unsigned short int th_sum;
    unsigned short int th_urp;
};
#pragma pack(pop)
#pragma pack(4)
struct tcp_connection_info
{
    unsigned char  tcpi_state  ;
    unsigned char  tcpi_snd_wscale  ;
    unsigned char  tcpi_rcv_wscale  ;
    unsigned char  __pad1  ;
    unsigned int  tcpi_options  ;
    unsigned int  tcpi_flags  ;
    unsigned int  tcpi_rto  ;
    unsigned int  tcpi_maxseg  ;
    unsigned int  tcpi_snd_ssthresh  ;
    unsigned int  tcpi_snd_cwnd  ;
    unsigned int  tcpi_snd_wnd  ;
    unsigned int  tcpi_snd_sbbytes  ;
    unsigned int  tcpi_rcv_wnd  ;
    unsigned int  tcpi_rttcur  ;
    unsigned int  tcpi_srtt  ;
    unsigned int  tcpi_rttvar  ;
    unsigned int  tcpi_tfo_cookie_req:1  ;
    unsigned int  tcpi_tfo_cookie_rcv:1  ;
    unsigned int  tcpi_tfo_syn_loss:1  ;
    unsigned int  tcpi_tfo_syn_data_sent:1  ;
    unsigned int  tcpi_tfo_syn_data_acked:1  ;
    unsigned int  tcpi_tfo_syn_data_rcv:1  ;
    unsigned int  tcpi_tfo_cookie_req_rcv:1  ;
    unsigned int  tcpi_tfo_cookie_sent:1  ;
    unsigned int  tcpi_tfo_cookie_invalid:1  ;
    unsigned int  tcpi_tfo_cookie_wrong:1  ;
    unsigned int  tcpi_tfo_no_cookie_rcv:1  ;
    unsigned int  tcpi_tfo_heuristics_disable:1  ;
    unsigned int  tcpi_tfo_send_blackhole:1  ;
    unsigned int  tcpi_tfo_recv_blackhole:1  ;
    unsigned int  tcpi_tfo_onebyte_proxy:1  ;
    unsigned int  __pad2:17  ;
    unsigned long  long  tcpi_txpackets  __attribute__((aligned(8)));
    unsigned long  long  tcpi_txbytes  __attribute__((aligned(8)));
    unsigned long  long  tcpi_txretransmitbytes  __attribute__((aligned(8)));
    unsigned long  long  tcpi_rxpackets  __attribute__((aligned(8)));
    unsigned long  long  tcpi_rxbytes  __attribute__((aligned(8)));
    unsigned long  long  tcpi_rxoutoforderbytes  __attribute__((aligned(8)));
    unsigned long  long  tcpi_txretransmitpackets  __attribute__((aligned(8)));
};
#pragma pack(pop)
#pragma pack(4)
struct sockaddr_un
{
    unsigned char sun_len;
    unsigned char  sun_family  ;
    char sun_path[104];
};
#pragma pack(pop)
#pragma pack(4)
struct ifaddrs
{
    struct ifaddrs*  ifa_next  ;
    char* ifa_name;
    unsigned int ifa_flags;
    struct sockaddr*  ifa_addr  ;
    struct sockaddr*  ifa_netmask  ;
    struct sockaddr*  ifa_dstaddr  ;
    void* ifa_data;
};
#pragma pack(pop)
#pragma pack(4)
struct ifmaddrs
{
    struct ifmaddrs*  ifma_next  ;
    struct sockaddr*  ifma_name  ;
    struct sockaddr*  ifma_addr  ;
    struct sockaddr*  ifma_lladdr  ;
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
enum  anonymous_typeY7 { _CLOCK_REALTIME=(0),
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
union anonymous_typeZ8
{
void* ifk_ptr;
int ifk_value;
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
union anonymous_typeZ10
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
union anonymous_typeZ12
{
char*  ifcu_buf  ;
struct ifreq*  ifcu_req  ;
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
struct ip
{
    unsigned int  ip_hl:4  ;
    unsigned int  ip_v:4  ;
    unsigned char  ip_tos  ;
    unsigned short int  ip_len  ;
    unsigned short int  ip_id  ;
    unsigned short int  ip_off  ;
    unsigned char  ip_ttl  ;
    unsigned char  ip_p  ;
    unsigned short int  ip_sum  ;
    struct in_addr  ip_src  ;
    struct in_addr  ip_dst  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ipt_ta
{
    struct in_addr  ipt_addr  ;
    unsigned int  ipt_time  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ip_timestamp
{
    unsigned char  ipt_code  ;
    unsigned char  ipt_len  ;
    unsigned char  ipt_ptr  ;
    unsigned int  ipt_flg:4  ;
    unsigned int  ipt_oflw:4  ;
    union ipt_timestamp {
        unsigned int  ipt_time[1]  ;
        struct ipt_ta ipt_ta;
    } ipt_timestamp;
};
#pragma pack(pop)
#pragma pack(4)
struct icmp_ra_addr
{
    unsigned int  ira_addr  ;
    unsigned int  ira_preference  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX15
{
    unsigned short int  icd_id  ;
    unsigned short int  icd_seq  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX16
{
    unsigned short int  ipm_void  ;
    unsigned short int  ipm_nextmtu  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX17
{
    unsigned char  irt_num_addrs  ;
    unsigned char  irt_wpa  ;
    unsigned short int  irt_lifetime  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ14
{
unsigned char  ih_pptr  ;
struct in_addr  ih_gwaddr  ;
    struct {
        unsigned short int  icd_id  ;
        unsigned short int  icd_seq  ;
    } ih_idseq;
int ih_void;
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
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX19
{
    unsigned short int  icd_id  ;
    unsigned short int  icd_seq  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX20
{
    unsigned short int  ipm_void  ;
    unsigned short int  ipm_nextmtu  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX21
{
    unsigned char  irt_num_addrs  ;
    unsigned char  irt_wpa  ;
    unsigned short int  irt_lifetime  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ18
{
unsigned char  ih_pptr  ;
struct in_addr  ih_gwaddr  ;
    struct {
        unsigned short int  icd_id  ;
        unsigned short int  icd_seq  ;
    } ih_idseq;
int ih_void;
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
#pragma pack(pop)
#pragma pack(4)
struct id_ts
{
    unsigned int  its_otime  ;
    unsigned int  its_rtime  ;
    unsigned int  its_ttime  ;
};
#pragma pack(pop)
#pragma pack(4)
struct id_ip
{
    struct ip  idi_ip  ;
};
#pragma pack(pop)
#pragma pack(4)
struct icmp
{
    unsigned char  icmp_type  ;
    unsigned char  icmp_code  ;
    unsigned short int  icmp_cksum  ;
    union {
        unsigned char  ih_pptr  ;
        struct in_addr  ih_gwaddr  ;
        struct {
            unsigned short int  icd_id  ;
            unsigned short int  icd_seq  ;
        } ih_idseq;
        int ih_void;
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
        struct id_ts id_ts;
        struct id_ip id_ip;
        struct icmp_ra_addr  id_radv  ;
        unsigned int  id_mask  ;
        char id_data[1];
    } icmp_dun;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX25
{
    unsigned int  ip6_un1_flow  ;
    unsigned short int  ip6_un1_plen  ;
    unsigned char  ip6_un1_nxt  ;
    unsigned char  ip6_un1_hlim  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ24
{
    struct {
        unsigned int  ip6_un1_flow  ;
        unsigned short int  ip6_un1_plen  ;
        unsigned char  ip6_un1_nxt  ;
        unsigned char  ip6_un1_hlim  ;
    } ip6_un1;
unsigned char  ip6_un2_vfc  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX27
{
    unsigned int  ip6_un1_flow  ;
    unsigned short int  ip6_un1_plen  ;
    unsigned char  ip6_un1_nxt  ;
    unsigned char  ip6_un1_hlim  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ26
{
    struct {
        unsigned int  ip6_un1_flow  ;
        unsigned short int  ip6_un1_plen  ;
        unsigned char  ip6_un1_nxt  ;
        unsigned char  ip6_un1_hlim  ;
    } ip6_un1;
unsigned char  ip6_un2_vfc  ;
};
#pragma pack(pop)
#pragma pack(4)
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
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ip6_ext
{
    unsigned char  ip6e_nxt  ;
    unsigned char  ip6e_len  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ip6_hbh
{
    unsigned char  ip6h_nxt  ;
    unsigned char  ip6h_len  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ip6_dest
{
    unsigned char  ip6d_nxt  ;
    unsigned char  ip6d_len  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ip6_opt
{
    unsigned char  ip6o_type  ;
    unsigned char  ip6o_len  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ip6_opt_jumbo
{
    unsigned char  ip6oj_type  ;
    unsigned char  ip6oj_len  ;
    unsigned char  ip6oj_jumbo_len[4]  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ip6_opt_nsap
{
    unsigned char  ip6on_type  ;
    unsigned char  ip6on_len  ;
    unsigned char  ip6on_src_nsap_len  ;
    unsigned char  ip6on_dst_nsap_len  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ip6_opt_tunnel
{
    unsigned char  ip6ot_type  ;
    unsigned char  ip6ot_len  ;
    unsigned char  ip6ot_encap_limit  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ip6_opt_router
{
    unsigned char  ip6or_type  ;
    unsigned char  ip6or_len  ;
    unsigned char  ip6or_value[2]  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ip6_rthdr
{
    unsigned char  ip6r_nxt  ;
    unsigned char  ip6r_len  ;
    unsigned char  ip6r_type  ;
    unsigned char  ip6r_segleft  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ip6_rthdr0
{
    unsigned char  ip6r0_nxt  ;
    unsigned char  ip6r0_len  ;
    unsigned char  ip6r0_type  ;
    unsigned char  ip6r0_segleft  ;
    unsigned int  ip6r0_reserved  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ip6_frag
{
    unsigned char  ip6f_nxt  ;
    unsigned char  ip6f_reserved  ;
    unsigned short int  ip6f_offlg  ;
    unsigned int  ip6f_ident  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ28
{
unsigned int  icmp6_un_data32[1]  ;
unsigned short int  icmp6_un_data16[2]  ;
unsigned char  icmp6_un_data8[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ29
{
unsigned int  icmp6_un_data32[1]  ;
unsigned short int  icmp6_un_data16[2]  ;
unsigned char  icmp6_un_data8[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
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
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct mld_hdr
{
    struct icmp6_hdr  mld_icmp6_hdr  ;
    struct in6_addr  mld_addr  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_router_solicit
{
    struct icmp6_hdr  nd_rs_hdr  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_router_advert
{
    struct icmp6_hdr  nd_ra_hdr  ;
    unsigned int  nd_ra_reachable  ;
    unsigned int  nd_ra_retransmit  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_neighbor_solicit
{
    struct icmp6_hdr  nd_ns_hdr  ;
    struct in6_addr  nd_ns_target  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_neighbor_advert
{
    struct icmp6_hdr  nd_na_hdr  ;
    struct in6_addr  nd_na_target  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_redirect
{
    struct icmp6_hdr  nd_rd_hdr  ;
    struct in6_addr  nd_rd_target  ;
    struct in6_addr  nd_rd_dst  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_opt_hdr
{
    unsigned char  nd_opt_type  ;
    unsigned char  nd_opt_len  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
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
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_opt_nonce
{
    unsigned char  nd_opt_nonce_type  ;
    unsigned char  nd_opt_nonce_len  ;
    unsigned char  nd_opt_nonce[((1*8)-2)]  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_opt_rd_hdr
{
    unsigned char  nd_opt_rh_type  ;
    unsigned char  nd_opt_rh_len  ;
    unsigned short int  nd_opt_rh_reserved1  ;
    unsigned int  nd_opt_rh_reserved2  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_opt_mtu
{
    unsigned char  nd_opt_mtu_type  ;
    unsigned char  nd_opt_mtu_len  ;
    unsigned short int  nd_opt_mtu_reserved  ;
    unsigned int  nd_opt_mtu_mtu  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_opt_route_info
{
    unsigned char  nd_opt_rti_type  ;
    unsigned char  nd_opt_rti_len  ;
    unsigned char  nd_opt_rti_prefixlen  ;
    unsigned char  nd_opt_rti_flags  ;
    unsigned int  nd_opt_rti_lifetime  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_opt_rdnss
{
    unsigned char  nd_opt_rdnss_type  ;
    unsigned char  nd_opt_rdnss_len  ;
    unsigned short int  nd_opt_rdnss_reserved  ;
    unsigned int  nd_opt_rdnss_lifetime  ;
    struct in6_addr  nd_opt_rdnss_addr[1]  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_opt_dnssl
{
    unsigned char  nd_opt_dnssl_type  ;
    unsigned char  nd_opt_dnssl_len  ;
    unsigned short int  nd_opt_dnssl_reserved  ;
    unsigned int  nd_opt_dnssl_lifetime  ;
    unsigned char  nd_opt_dnssl_domains[8]  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_opt_dnr
{
    unsigned char  nd_opt_dnr_type  ;
    unsigned char  nd_opt_dnr_len  ;
    unsigned char  nd_opt_dnr_svc_priority[2]  ;
    unsigned char  nd_opt_dnr_lifetime[4]  ;
    unsigned char  nd_opt_dnr_adn_len[2]  ;
    unsigned char  nd_opt_dnr_continuation[1]  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_opt_pref64
{
    unsigned char  nd_opt_pref64_type  ;
    unsigned char  nd_opt_pref64_len  ;
    unsigned short int  nd_opt_pref64_scaled_lifetime_plc  ;
    unsigned int  nd_opt_pref64_prefix[3]  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nd_opt_pvd
{
    unsigned char  nd_opt_pvd_type  ;
    unsigned char  nd_opt_pvd_len  ;
    unsigned char  nd_opt_flags_delay[2]  ;
    unsigned short int  nd_opt_pvd_seq  ;
    unsigned char  nd_opt_pvd_id[1]  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct icmp6_namelookup
{
    struct icmp6_hdr  icmp6_nl_hdr  ;
    unsigned char  icmp6_nl_nonce[8]  ;
    int  icmp6_nl_ttl  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct icmp6_nodeinfo
{
    struct icmp6_hdr  icmp6_ni_hdr  ;
    unsigned char  icmp6_ni_nonce[8]  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct ni_reply_fqdn
{
    unsigned int  ni_fqdn_ttl  ;
    unsigned char  ni_fqdn_namelen  ;
    unsigned char  ni_fqdn_name[3]  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct icmp6_router_renum
{
    struct icmp6_hdr  rr_hdr  ;
    unsigned char  rr_segnum  ;
    unsigned char  rr_flags  ;
    unsigned short int  rr_maxdelay  ;
    unsigned int  rr_reserved  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
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
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
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
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct rr_result
{
    unsigned short int  rrr_flags  ;
    unsigned char  rrr_ordinal  ;
    unsigned char  rrr_matchedlen  ;
    unsigned int  rrr_ifid  ;
    struct in6_addr  rrr_prefix  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct icmp6_filter
{
    unsigned int  icmp6_filt[8]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct icmp6errstat
{
    unsigned long  long  icp6errs_dst_unreach_noroute  ;
    unsigned long  long  icp6errs_dst_unreach_admin  ;
    unsigned long  long  icp6errs_dst_unreach_beyondscope  ;
    unsigned long  long  icp6errs_dst_unreach_addr  ;
    unsigned long  long  icp6errs_dst_unreach_noport  ;
    unsigned long  long  icp6errs_packet_too_big  ;
    unsigned long  long  icp6errs_time_exceed_transit  ;
    unsigned long  long  icp6errs_time_exceed_reassembly  ;
    unsigned long  long  icp6errs_paramprob_header  ;
    unsigned long  long  icp6errs_paramprob_nextheader  ;
    unsigned long  long  icp6errs_paramprob_option  ;
    unsigned long  long  icp6errs_redirect  ;
    unsigned long  long  icp6errs_unknown  ;
};
#pragma pack(pop)
#pragma pack(4)
struct icmp6stat
{
    unsigned long  long  icp6s_error  ;
    unsigned long  long  icp6s_canterror  ;
    unsigned long  long  icp6s_toofreq  ;
    unsigned long  long  icp6s_outhist[256]  ;
    unsigned long  long  icp6s_badcode  ;
    unsigned long  long  icp6s_tooshort  ;
    unsigned long  long  icp6s_checksum  ;
    unsigned long  long  icp6s_badlen  ;
    unsigned long  long  icp6s_reflect  ;
    unsigned long  long  icp6s_inhist[256]  ;
    unsigned long  long  icp6s_nd_toomanyopt  ;
    struct icmp6errstat  icp6s_outerrhist  ;
    unsigned long  long  icp6s_pmtuchg  ;
    unsigned long  long  icp6s_nd_badopt  ;
    unsigned long  long  icp6s_badns  ;
    unsigned long  long  icp6s_badna  ;
    unsigned long  long  icp6s_badrs  ;
    unsigned long  long  icp6s_badra  ;
    unsigned long  long  icp6s_badredirect  ;
    unsigned long  long  icp6s_rfc6980_drop  ;
    unsigned long  long  icp6s_badpkttoobig  ;
};
#pragma pack(pop)
#pragma pack(4)
struct udphdr
{
    unsigned short int  uh_sport  ;
    unsigned short int  uh_dport  ;
    unsigned short int  uh_ulen  ;
    unsigned short int  uh_sum  ;
};
#pragma pack(pop)
#pragma pack(4)
struct arphdr
{
    unsigned short int  ar_hrd  ;
    unsigned short int  ar_pro  ;
    unsigned char  ar_hln  ;
    unsigned char  ar_pln  ;
    unsigned short int  ar_op  ;
};
#pragma pack(pop)
#pragma pack(4)
struct arpreq
{
    struct sockaddr  arp_pa  ;
    struct sockaddr  arp_ha  ;
    int arp_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct arpstat
{
    unsigned int  txrequests  ;
    unsigned int  txreplies  ;
    unsigned int  txannounces  ;
    unsigned int  rxrequests  ;
    unsigned int  rxreplies  ;
    unsigned int  received  ;
    unsigned int  txconflicts  ;
    unsigned int  invalidreqs  ;
    unsigned int  reqnobufs  ;
    unsigned int  dropped  ;
    unsigned int  purged  ;
    unsigned int  timeouts  ;
    unsigned int  dupips  ;
    unsigned int  inuse  ;
    unsigned int  txurequests  ;
    unsigned int  held  ;
};
#pragma pack(pop)
/// variable definition ///
extern const struct in6_addr  in6addr_any  ;
extern const struct in6_addr  in6addr_loopback  ;
extern const struct in6_addr  in6addr_nodelocal_allnodes  ;
extern const struct in6_addr  in6addr_linklocal_allnodes  ;
extern const struct in6_addr  in6addr_linklocal_allrouters  ;
extern const struct in6_addr  in6addr_linklocal_allv2routers  ;
extern int h_errno;
extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
// source head

// header function
char* strdup(const char* );
int vsnprintf(char* , unsigned long  int , const char* , __builtin_va_list    );
int snprintf(char* , unsigned long  int , const char* , ...);
int __darwin_check_fd_set_overflow(int , const void* , int );
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
int setipv4sourcefilter(int , struct in_addr    , struct in_addr    , unsigned int    , unsigned int    , struct in_addr*    );
int getipv4sourcefilter(int , struct in_addr    , struct in_addr    , unsigned int*    , unsigned int*    , struct in_addr*    );
int setsourcefilter(int , unsigned int    , struct sockaddr*    , unsigned int    , unsigned int    , unsigned int    , struct sockaddr_storage*    );
int getsourcefilter(int , unsigned int    , struct sockaddr*    , unsigned int    , unsigned int*    , unsigned int*    , struct sockaddr_storage*    );
int inet6_option_space(int );
int inet6_option_init(void* , struct cmsghdr**    , int );
int inet6_option_append(struct cmsghdr*    , const unsigned char*    , int , int );
unsigned char*  inet6_option_alloc(struct cmsghdr*    , int , int , int );
int inet6_option_next(const struct cmsghdr*    , unsigned char**    );
int inet6_option_find(const struct cmsghdr*    , unsigned char**    , int );
unsigned long  int  inet6_rthdr_space(int , int );
struct cmsghdr*  inet6_rthdr_init(void* , int );
int inet6_rthdr_add(struct cmsghdr*    , const struct in6_addr*    , unsigned int );
int inet6_rthdr_lasthop(struct cmsghdr*    , unsigned int );
int inet6_rthdr_segments(const struct cmsghdr*    );
struct in6_addr*  inet6_rthdr_getaddr(struct cmsghdr*    , int );
int inet6_rthdr_getflags(const struct cmsghdr*    , int );
int inet6_opt_init(void* , unsigned int    );
int inet6_opt_append(void* , unsigned int    , int , unsigned char    , unsigned int    , unsigned char    , void** );
int inet6_opt_finish(void* , unsigned int    , int );
int inet6_opt_set_val(void* , int , void* , unsigned int    );
int inet6_opt_next(void* , unsigned int    , int , unsigned char*    , unsigned int*    , void** );
int inet6_opt_find(void* , unsigned int    , int , unsigned char    , unsigned int*    , void** );
int inet6_opt_get_val(void* , int , void* , unsigned int    );
unsigned int  inet6_rth_space(int , int );
void* inet6_rth_init(void* , unsigned int    , int , int );
int inet6_rth_add(void* , const struct in6_addr*    );
int inet6_rth_reverse(const void* , void* );
int inet6_rth_segments(const void* );
struct in6_addr*  inet6_rth_getaddr(const void* , int );
int bindresvport(int , struct sockaddr_in*    );
int bindresvport_sa(int , struct sockaddr*    );
unsigned int  inet_addr(const char* );
char* inet_ntoa(struct in_addr    );
const char* inet_ntop(int , const void* , char* , unsigned int  __size  );
int inet_pton(int , const char* , void* );
int ascii2addr(int , const char* , void* );
char* addr2ascii(int , const void* , int __size, char* );
int inet_aton(const char* , struct in_addr*    );
unsigned int  inet_lnaof(struct in_addr    );
struct in_addr  inet_makeaddr(unsigned int    , unsigned int    );
unsigned int  inet_netof(struct in_addr    );
unsigned int  inet_network(const char* );
char* inet_net_ntop(int , const void* , int , char* , unsigned long  int  __size  );
int inet_net_pton(int , const char* , void* , unsigned long  int  __size  );
char* inet_neta(unsigned int    , char* , unsigned long  int  __size  );
unsigned int inet_nsap_addr(const char* , unsigned char* , int __maxlen);
char* inet_nsap_ntoa(int __binlen, const unsigned char* , char* );
void endhostent();
void endnetent();
void endprotoent();
void endservent();
void freeaddrinfo(struct addrinfo*    );
const char* gai_strerror(int );
int getaddrinfo(const char* restrict , const char* restrict , const struct addrinfo* restrict    , struct addrinfo** restrict    );
struct hostent*  gethostbyaddr(const void* , unsigned int    , int );
struct hostent*  gethostbyname(const char* );
struct hostent*  gethostent();
int getnameinfo(const struct sockaddr* restrict    , unsigned int    , char* restrict , unsigned int    , char* restrict , unsigned int    , int );
struct netent*  getnetbyaddr(unsigned int    , int );
struct netent*  getnetbyname(const char* );
struct netent*  getnetent();
struct protoent*  getprotobyname(const char* );
struct protoent*  getprotobynumber(int );
struct protoent*  getprotoent();
struct servent*  getservbyname(const char* , const char* );
struct servent*  getservbyport(int , const char* );
struct servent*  getservent();
void sethostent(int );
void setnetent(int );
void setprotoent(int );
void setservent(int );
void freehostent(struct hostent*    );
struct hostent*  gethostbyname2(const char* , int );
struct hostent*  getipnodebyaddr(const void* , unsigned long  int    , int , int* );
struct hostent*  getipnodebyname(const char* , int , int , int* );
struct rpcent*  getrpcbyname(const char* name);
struct rpcent*  getrpcbynumber(int number);
struct rpcent*  getrpcent();
void setrpcent(int stayopen);
void endrpcent();
void herror(const char* );
const char* hstrerror(int );
int innetgr(const char* , const char* , const char* , const char* );
int getnetgrent(char** , char** , char** );
void endnetgrent();
void setnetgrent(const char* );
int ether_hostton(const char* , struct ether_addr*    );
int ether_line(const char* , struct ether_addr*    , char* );
char* ether_ntoa(const struct ether_addr*    );
struct ether_addr*  ether_aton(const char* );
int ether_ntohost(char* , const struct ether_addr*    );
int getifaddrs(struct ifaddrs**    );
void freeifaddrs(struct ifaddrs*    );
int getifmaddrs(struct ifmaddrs**    );
void freeifmaddrs(struct ifmaddrs*    );
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
int clock_getres(enum anonymous_typeY7  __clock_id  , struct timespec*  __res  );
int clock_gettime(enum anonymous_typeY7  __clock_id  , struct timespec*  __tp  );
unsigned long long int  clock_gettime_nsec_np(enum anonymous_typeY7  __clock_id  );
int clock_settime(enum anonymous_typeY7  __clock_id  , const struct timespec*  __tp  );
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
unsigned int if_nametoindex(const char* );
char* if_indextoname(unsigned int , char* );
struct if_nameindex*  if_nameindex();
void if_freenameindex(struct if_nameindex*    );
int test_headers_net();
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
int test_headers_net()
{
        return 0;
}

