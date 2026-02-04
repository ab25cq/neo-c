/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef int wchar_t;

typedef __builtin_va_list __gnuc_va_list;

typedef char __s8;

typedef unsigned char __u8;

typedef short __s16;

typedef unsigned short int __u16;

typedef int __s32;

typedef unsigned int __u32;

typedef long long __s64;

typedef unsigned long  long __u64;

typedef struct anonymous_typeX1 __kernel_fd_set;

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

typedef struct anonymous_typeX2 __kernel_fsid_t;

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

typedef unsigned short int  __le16  ;

typedef unsigned short int  __be16  ;

typedef unsigned int  __le32  ;

typedef unsigned int  __be32  ;

typedef unsigned long  long  __le64  ;

typedef unsigned long  long  __be64  ;

typedef unsigned short int  __sum16  ;

typedef unsigned int  __wsum  ;

typedef unsigned int __poll_t;

typedef unsigned short int __kernel_sa_family_t;

typedef unsigned long  long    ;

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

typedef struct anonymous_typeX494 __sigset_t;

typedef struct anonymous_typeX494  sigset_t  ;

typedef long  int __fd_mask;

typedef struct anonymous_typeX495 fd_set;

typedef long  int  fd_mask  ;

typedef long  int  blksize_t  ;

typedef long  int  blkcnt_t  ;

typedef unsigned long  int  fsblkcnt_t  ;

typedef unsigned long  int  fsfilcnt_t  ;

typedef long  int  blkcnt64_t  ;

typedef unsigned long  int  fsblkcnt64_t  ;

typedef unsigned long  int  fsfilcnt64_t  ;

typedef union anonymous_typeZ496 __atomic_wide_counter;

typedef struct __pthread_internal_list  __pthread_list_t  ;

typedef struct __pthread_internal_slist  __pthread_slist_t  ;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX498 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ499 pthread_mutexattr_t;

typedef union anonymous_typeZ500 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union pthread_attr_t  pthread_attr_t  ;

typedef union anonymous_typeZ501 pthread_mutex_t;

typedef union anonymous_typeZ502 pthread_cond_t;

typedef union anonymous_typeZ503 pthread_rwlock_t;

typedef union anonymous_typeZ504 pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union anonymous_typeZ505 pthread_barrier_t;

typedef union anonymous_typeZ506 pthread_barrierattr_t;

typedef unsigned int  socklen_t  ;

typedef unsigned short int sa_family_t;

typedef struct sockaddr* __restrict  __SOCKADDR_ARG  ;

typedef const struct sockaddr* __restrict  __CONST_SOCKADDR_ARG  ;

typedef struct anonymous_typeX507 sync_serial_settings;

typedef struct anonymous_typeX508 te1_settings;

typedef struct anonymous_typeX509 raw_hdlc_proto;

typedef struct anonymous_typeX510 fr_proto;

typedef struct anonymous_typeX511 fr_proto_pvc;

typedef struct anonymous_typeX512 fr_proto_pvc_info;

typedef struct anonymous_typeX513 cisco_proto;

typedef struct anonymous_typeX514 x25_hdlc_proto;

/// previous struct definition ///
/// struct definition ///
struct __fsid_t
{
    int __val[2];
};

struct anonymous_typeX1
{
    unsigned long  int fds_bits[1024/(8*sizeof(long))];
};

struct anonymous_typeX2
{
    int val[2];
};

struct sysinfo
{
    long  uptime  ;
    unsigned long  int  loads[3]  ;
    unsigned long  int  totalram  ;
    unsigned long  int  freeram  ;
    unsigned long  int  sharedram  ;
    unsigned long  int  bufferram  ;
    unsigned long  int  totalswap  ;
    unsigned long  int  freeswap  ;
    unsigned short int  procs  ;
    unsigned short int  pad  ;
    unsigned long  int  totalhigh  ;
    unsigned long  int  freehigh  ;
    unsigned int  mem_unit  ;
    char _f[20-2*sizeof(unsigned long  int )-sizeof(unsigned int )];
};

struct statx_timestamp
{
    long long  tv_sec  ;
    unsigned int  tv_nsec  ;
    int  __reserved  ;
};

struct statx
{
    unsigned int  stx_mask  ;
    unsigned int  stx_blksize  ;
    unsigned long  long  stx_attributes  ;
    unsigned int  stx_nlink  ;
    unsigned int  stx_uid  ;
    unsigned int  stx_gid  ;
    unsigned short int  stx_mode  ;
    unsigned short int  __spare0[1]  ;
    unsigned long  long  stx_ino  ;
    unsigned long  long  stx_size  ;
    unsigned long  long  stx_blocks  ;
    unsigned long  long  stx_attributes_mask  ;
    struct statx_timestamp  stx_atime  ;
    struct statx_timestamp  stx_btime  ;
    struct statx_timestamp  stx_ctime  ;
    struct statx_timestamp  stx_mtime  ;
    unsigned int  stx_rdev_major  ;
    unsigned int  stx_rdev_minor  ;
    unsigned int  stx_dev_major  ;
    unsigned int  stx_dev_minor  ;
    unsigned long  long  stx_mnt_id  ;
    unsigned int  stx_dio_mem_align  ;
    unsigned int  stx_dio_offset_align  ;
    unsigned long  long  stx_subvol  ;
    unsigned int  stx_atomic_write_unit_min  ;
    unsigned int  stx_atomic_write_unit_max  ;
    unsigned int  stx_atomic_write_segments_max  ;
    unsigned int  stx_dio_read_offset_align  ;
    unsigned int  stx_atomic_write_unit_max_opt  ;
    unsigned int  __spare2[1]  ;
    unsigned long  long  __spare3[8]  ;
};

struct f_owner_ex
{
    int type;
    int  pid  ;
};

struct flock
{
    short l_type;
    short l_whence;
    long  l_start  ;
    long  l_len  ;
    int  l_pid  ;
};

struct flock64
{
    short l_type;
    short l_whence;
    long long  l_start  ;
    long long  l_len  ;
    int  l_pid  ;
};

struct open_how
{
    unsigned long  long  flags  ;
    unsigned long  long  mode  ;
    unsigned long  long  resolve  ;
};

struct iovec
{
    void* iov_base;
    unsigned long  int  iov_len  ;
};

struct dmabuf_cmsg
{
    unsigned long  long  frag_offset  ;
    unsigned int  frag_size  ;
    unsigned int  frag_token  ;
    unsigned int  dmabuf_id  ;
    unsigned int  flags  ;
};

struct dmabuf_token
{
    unsigned int  token_start  ;
    unsigned int  token_count  ;
};

struct __kernel_timespec
{
    long long  tv_sec  ;
    long long tv_nsec;
};

struct __kernel_itimerspec
{
    struct __kernel_timespec  it_interval  ;
    struct __kernel_timespec  it_value  ;
};

struct __kernel_old_timeval
{
    long  tv_sec  ;
    long  tv_usec  ;
};

struct __kernel_old_timespec
{
    long  tv_sec  ;
    long tv_nsec;
};

struct __kernel_old_itimerval
{
    struct __kernel_old_timeval  it_interval  ;
    struct __kernel_old_timeval  it_value  ;
};

struct __kernel_sock_timeval
{
    long long  tv_sec  ;
    long long  tv_usec  ;
};

struct timespec
{
    long  tv_sec  ;
    long tv_nsec;
};

struct timeval
{
    long  tv_sec  ;
    long  tv_usec  ;
};

struct itimerspec
{
    struct timespec  it_interval  ;
    struct timespec  it_value  ;
};

struct itimerval
{
    struct timeval  it_interval  ;
    struct timeval  it_value  ;
};

struct timezone
{
    int tz_minuteswest;
    int tz_dsttime;
};

struct anonymous_typeX4
{
    unsigned short int  ss_family  ;
    char __data[128-sizeof(unsigned short int)];
};

union anonymous_typeZ3
{
    struct {
        unsigned short int  ss_family  ;
        char __data[128-sizeof(unsigned short int)];
    };
void* __align;
};

struct anonymous_typeX6
{
    unsigned short int  ss_family  ;
    char __data[128-sizeof(unsigned short int)];
};

union anonymous_typeZ5
{
    struct {
        unsigned short int  ss_family  ;
        char __data[128-sizeof(unsigned short int)];
    };
void* __align;
};

struct __kernel_sockaddr_storage
{
    union {
        struct {
            unsigned short int  ss_family  ;
            char __data[128-sizeof(unsigned short int)];
        };
        void* __align;
    };
};

struct sockaddr_nl
{
    unsigned short int  nl_family  ;
    unsigned short int nl_pad;
    unsigned int  nl_pid  ;
    unsigned int  nl_groups  ;
};

struct nlmsghdr
{
    unsigned int  nlmsg_len  ;
    unsigned short int  nlmsg_type  ;
    unsigned short int  nlmsg_flags  ;
    unsigned int  nlmsg_seq  ;
    unsigned int  nlmsg_pid  ;
};

struct nlmsgerr
{
    int error;
    struct nlmsghdr  msg  ;
};

enum  nlmsgerr_attrs { NLMSGERR_ATTR_UNUSED 
,NLMSGERR_ATTR_MSG 
,NLMSGERR_ATTR_OFFS 
,NLMSGERR_ATTR_COOKIE 
,NLMSGERR_ATTR_POLICY 
,NLMSGERR_ATTR_MISS_TYPE 
,NLMSGERR_ATTR_MISS_NEST 
,__NLMSGERR_ATTR_MAX 
,NLMSGERR_ATTR_MAX=((7)-1)
};

struct nl_pktinfo
{
    unsigned int  group  ;
};

struct nl_mmap_req
{
    unsigned int nm_block_size;
    unsigned int nm_block_nr;
    unsigned int nm_frame_size;
    unsigned int nm_frame_nr;
};

struct nl_mmap_hdr
{
    unsigned int nm_status;
    unsigned int nm_len;
    unsigned int  nm_group  ;
    unsigned int  nm_pid  ;
    unsigned int  nm_uid  ;
    unsigned int  nm_gid  ;
};

enum  nl_mmap_status { NL_MMAP_STATUS_UNUSED 
,NL_MMAP_STATUS_RESERVED 
,NL_MMAP_STATUS_VALID 
,NL_MMAP_STATUS_COPY 
,NL_MMAP_STATUS_SKIP 
};

enum { NETLINK_UNCONNECTED=(0),
NETLINK_CONNECTED 
};

struct nlattr
{
    unsigned short int  nla_len  ;
    unsigned short int  nla_type  ;
};

struct nla_bitfield32
{
    unsigned int  value  ;
    unsigned int  selector  ;
};

enum  netlink_attribute_type { NL_ATTR_TYPE_INVALID 
,NL_ATTR_TYPE_FLAG 
,NL_ATTR_TYPE_U8 
,NL_ATTR_TYPE_U16 
,NL_ATTR_TYPE_U32 
,NL_ATTR_TYPE_U64 
,NL_ATTR_TYPE_S8 
,NL_ATTR_TYPE_S16 
,NL_ATTR_TYPE_S32 
,NL_ATTR_TYPE_S64 
,NL_ATTR_TYPE_BINARY 
,NL_ATTR_TYPE_STRING 
,NL_ATTR_TYPE_NUL_STRING 
,NL_ATTR_TYPE_NESTED 
,NL_ATTR_TYPE_NESTED_ARRAY 
,NL_ATTR_TYPE_BITFIELD32 
,NL_ATTR_TYPE_SINT 
,NL_ATTR_TYPE_UINT 
};

enum  netlink_policy_type_attr { NL_POLICY_TYPE_ATTR_UNSPEC 
,NL_POLICY_TYPE_ATTR_TYPE 
,NL_POLICY_TYPE_ATTR_MIN_VALUE_S 
,NL_POLICY_TYPE_ATTR_MAX_VALUE_S 
,NL_POLICY_TYPE_ATTR_MIN_VALUE_U 
,NL_POLICY_TYPE_ATTR_MAX_VALUE_U 
,NL_POLICY_TYPE_ATTR_MIN_LENGTH 
,NL_POLICY_TYPE_ATTR_MAX_LENGTH 
,NL_POLICY_TYPE_ATTR_POLICY_IDX 
,NL_POLICY_TYPE_ATTR_POLICY_MAXTYPE 
,NL_POLICY_TYPE_ATTR_BITFIELD32_MASK 
,NL_POLICY_TYPE_ATTR_PAD 
,NL_POLICY_TYPE_ATTR_MASK 
,__NL_POLICY_TYPE_ATTR_MAX 
,NL_POLICY_TYPE_ATTR_MAX=((13)-1)
};

struct rtnl_link_stats
{
    unsigned int  rx_packets  ;
    unsigned int  tx_packets  ;
    unsigned int  rx_bytes  ;
    unsigned int  tx_bytes  ;
    unsigned int  rx_errors  ;
    unsigned int  tx_errors  ;
    unsigned int  rx_dropped  ;
    unsigned int  tx_dropped  ;
    unsigned int  multicast  ;
    unsigned int  collisions  ;
    unsigned int  rx_length_errors  ;
    unsigned int  rx_over_errors  ;
    unsigned int  rx_crc_errors  ;
    unsigned int  rx_frame_errors  ;
    unsigned int  rx_fifo_errors  ;
    unsigned int  rx_missed_errors  ;
    unsigned int  tx_aborted_errors  ;
    unsigned int  tx_carrier_errors  ;
    unsigned int  tx_fifo_errors  ;
    unsigned int  tx_heartbeat_errors  ;
    unsigned int  tx_window_errors  ;
    unsigned int  rx_compressed  ;
    unsigned int  tx_compressed  ;
    unsigned int  rx_nohandler  ;
};

struct rtnl_link_stats64
{
    unsigned long  long  rx_packets  ;
    unsigned long  long  tx_packets  ;
    unsigned long  long  rx_bytes  ;
    unsigned long  long  tx_bytes  ;
    unsigned long  long  rx_errors  ;
    unsigned long  long  tx_errors  ;
    unsigned long  long  rx_dropped  ;
    unsigned long  long  tx_dropped  ;
    unsigned long  long  multicast  ;
    unsigned long  long  collisions  ;
    unsigned long  long  rx_length_errors  ;
    unsigned long  long  rx_over_errors  ;
    unsigned long  long  rx_crc_errors  ;
    unsigned long  long  rx_frame_errors  ;
    unsigned long  long  rx_fifo_errors  ;
    unsigned long  long  rx_missed_errors  ;
    unsigned long  long  tx_aborted_errors  ;
    unsigned long  long  tx_carrier_errors  ;
    unsigned long  long  tx_fifo_errors  ;
    unsigned long  long  tx_heartbeat_errors  ;
    unsigned long  long  tx_window_errors  ;
    unsigned long  long  rx_compressed  ;
    unsigned long  long  tx_compressed  ;
    unsigned long  long  rx_nohandler  ;
    unsigned long  long  rx_otherhost_dropped  ;
};

struct rtnl_hw_stats64
{
    unsigned long  long  rx_packets  ;
    unsigned long  long  tx_packets  ;
    unsigned long  long  rx_bytes  ;
    unsigned long  long  tx_bytes  ;
    unsigned long  long  rx_errors  ;
    unsigned long  long  tx_errors  ;
    unsigned long  long  rx_dropped  ;
    unsigned long  long  tx_dropped  ;
    unsigned long  long  multicast  ;
};

struct rtnl_link_ifmap
{
    unsigned long  long  mem_start  ;
    unsigned long  long  mem_end  ;
    unsigned long  long  base_addr  ;
    unsigned short int  irq  ;
    unsigned char  dma  ;
    unsigned char  port  ;
};

enum { IFLA_UNSPEC 
,IFLA_ADDRESS 
,IFLA_BROADCAST 
,IFLA_IFNAME 
,IFLA_MTU 
,IFLA_LINK 
,IFLA_QDISC 
,IFLA_STATS 
,IFLA_COST 
,IFLA_PRIORITY 
,IFLA_MASTER 
,IFLA_WIRELESS 
,IFLA_PROTINFO 
,IFLA_TXQLEN 
,IFLA_MAP 
,IFLA_WEIGHT 
,IFLA_OPERSTATE 
,IFLA_LINKMODE 
,IFLA_LINKINFO 
,IFLA_NET_NS_PID 
,IFLA_IFALIAS 
,IFLA_NUM_VF 
,IFLA_VFINFO_LIST 
,IFLA_STATS64 
,IFLA_VF_PORTS 
,IFLA_PORT_SELF 
,IFLA_AF_SPEC 
,IFLA_GROUP 
,IFLA_NET_NS_FD 
,IFLA_EXT_MASK 
,IFLA_PROMISCUITY 
,IFLA_NUM_TX_QUEUES 
,IFLA_NUM_RX_QUEUES 
,IFLA_CARRIER 
,IFLA_PHYS_PORT_ID 
,IFLA_CARRIER_CHANGES 
,IFLA_PHYS_SWITCH_ID 
,IFLA_LINK_NETNSID 
,IFLA_PHYS_PORT_NAME 
,IFLA_PROTO_DOWN 
,IFLA_GSO_MAX_SEGS 
,IFLA_GSO_MAX_SIZE 
,IFLA_PAD 
,IFLA_XDP 
,IFLA_EVENT 
,IFLA_NEW_NETNSID 
,IFLA_IF_NETNSID 
,IFLA_TARGET_NETNSID=((46)),
IFLA_CARRIER_UP_COUNT 
,IFLA_CARRIER_DOWN_COUNT 
,IFLA_NEW_IFINDEX 
,IFLA_MIN_MTU 
,IFLA_MAX_MTU 
,IFLA_PROP_LIST 
,IFLA_ALT_IFNAME 
,IFLA_PERM_ADDRESS 
,IFLA_PROTO_DOWN_REASON 
,IFLA_PARENT_DEV_NAME 
,IFLA_PARENT_DEV_BUS_NAME 
,IFLA_GRO_MAX_SIZE 
,IFLA_TSO_MAX_SIZE 
,IFLA_TSO_MAX_SEGS 
,IFLA_ALLMULTI 
,IFLA_DEVLINK_PORT 
,IFLA_GSO_IPV4_MAX_SIZE 
,IFLA_GRO_IPV4_MAX_SIZE 
,IFLA_DPLL_PIN 
,IFLA_MAX_PACING_OFFLOAD_HORIZON 
,IFLA_NETNS_IMMUTABLE 
,__IFLA_MAX 
};

enum { IFLA_PROTO_DOWN_REASON_UNSPEC 
,IFLA_PROTO_DOWN_REASON_MASK 
,IFLA_PROTO_DOWN_REASON_VALUE 
,__IFLA_PROTO_DOWN_REASON_CNT 
,IFLA_PROTO_DOWN_REASON_MAX=((3)-1)
};

enum { IFLA_INET_UNSPEC 
,IFLA_INET_CONF 
,__IFLA_INET_MAX 
};

enum { IFLA_INET6_UNSPEC 
,IFLA_INET6_FLAGS 
,IFLA_INET6_CONF 
,IFLA_INET6_STATS 
,IFLA_INET6_MCAST 
,IFLA_INET6_CACHEINFO 
,IFLA_INET6_ICMP6STATS 
,IFLA_INET6_TOKEN 
,IFLA_INET6_ADDR_GEN_MODE 
,IFLA_INET6_RA_MTU 
,__IFLA_INET6_MAX 
};

enum  in6_addr_gen_mode { IN6_ADDR_GEN_MODE_EUI64 
,IN6_ADDR_GEN_MODE_NONE 
,IN6_ADDR_GEN_MODE_STABLE_PRIVACY 
,IN6_ADDR_GEN_MODE_RANDOM 
};

enum { IFLA_BR_UNSPEC 
,IFLA_BR_FORWARD_DELAY 
,IFLA_BR_HELLO_TIME 
,IFLA_BR_MAX_AGE 
,IFLA_BR_AGEING_TIME 
,IFLA_BR_STP_STATE 
,IFLA_BR_PRIORITY 
,IFLA_BR_VLAN_FILTERING 
,IFLA_BR_VLAN_PROTOCOL 
,IFLA_BR_GROUP_FWD_MASK 
,IFLA_BR_ROOT_ID 
,IFLA_BR_BRIDGE_ID 
,IFLA_BR_ROOT_PORT 
,IFLA_BR_ROOT_PATH_COST 
,IFLA_BR_TOPOLOGY_CHANGE 
,IFLA_BR_TOPOLOGY_CHANGE_DETECTED 
,IFLA_BR_HELLO_TIMER 
,IFLA_BR_TCN_TIMER 
,IFLA_BR_TOPOLOGY_CHANGE_TIMER 
,IFLA_BR_GC_TIMER 
,IFLA_BR_GROUP_ADDR 
,IFLA_BR_FDB_FLUSH 
,IFLA_BR_MCAST_ROUTER 
,IFLA_BR_MCAST_SNOOPING 
,IFLA_BR_MCAST_QUERY_USE_IFADDR 
,IFLA_BR_MCAST_QUERIER 
,IFLA_BR_MCAST_HASH_ELASTICITY 
,IFLA_BR_MCAST_HASH_MAX 
,IFLA_BR_MCAST_LAST_MEMBER_CNT 
,IFLA_BR_MCAST_STARTUP_QUERY_CNT 
,IFLA_BR_MCAST_LAST_MEMBER_INTVL 
,IFLA_BR_MCAST_MEMBERSHIP_INTVL 
,IFLA_BR_MCAST_QUERIER_INTVL 
,IFLA_BR_MCAST_QUERY_INTVL 
,IFLA_BR_MCAST_QUERY_RESPONSE_INTVL 
,IFLA_BR_MCAST_STARTUP_QUERY_INTVL 
,IFLA_BR_NF_CALL_IPTABLES 
,IFLA_BR_NF_CALL_IP6TABLES 
,IFLA_BR_NF_CALL_ARPTABLES 
,IFLA_BR_VLAN_DEFAULT_PVID 
,IFLA_BR_PAD 
,IFLA_BR_VLAN_STATS_ENABLED 
,IFLA_BR_MCAST_STATS_ENABLED 
,IFLA_BR_MCAST_IGMP_VERSION 
,IFLA_BR_MCAST_MLD_VERSION 
,IFLA_BR_VLAN_STATS_PER_PORT 
,IFLA_BR_MULTI_BOOLOPT 
,IFLA_BR_MCAST_QUERIER_STATE 
,IFLA_BR_FDB_N_LEARNED 
,IFLA_BR_FDB_MAX_LEARNED 
,__IFLA_BR_MAX 
};

struct ifla_bridge_id
{
    unsigned char  prio[2]  ;
    unsigned char  addr[6]  ;
};

enum { BRIDGE_MODE_UNSPEC 
,BRIDGE_MODE_HAIRPIN 
};

enum { IFLA_BRPORT_UNSPEC 
,IFLA_BRPORT_STATE 
,IFLA_BRPORT_PRIORITY 
,IFLA_BRPORT_COST 
,IFLA_BRPORT_MODE 
,IFLA_BRPORT_GUARD 
,IFLA_BRPORT_PROTECT 
,IFLA_BRPORT_FAST_LEAVE 
,IFLA_BRPORT_LEARNING 
,IFLA_BRPORT_UNICAST_FLOOD 
,IFLA_BRPORT_PROXYARP 
,IFLA_BRPORT_LEARNING_SYNC 
,IFLA_BRPORT_PROXYARP_WIFI 
,IFLA_BRPORT_ROOT_ID 
,IFLA_BRPORT_BRIDGE_ID 
,IFLA_BRPORT_DESIGNATED_PORT 
,IFLA_BRPORT_DESIGNATED_COST 
,IFLA_BRPORT_ID 
,IFLA_BRPORT_NO 
,IFLA_BRPORT_TOPOLOGY_CHANGE_ACK 
,IFLA_BRPORT_CONFIG_PENDING 
,IFLA_BRPORT_MESSAGE_AGE_TIMER 
,IFLA_BRPORT_FORWARD_DELAY_TIMER 
,IFLA_BRPORT_HOLD_TIMER 
,IFLA_BRPORT_FLUSH 
,IFLA_BRPORT_MULTICAST_ROUTER 
,IFLA_BRPORT_PAD 
,IFLA_BRPORT_MCAST_FLOOD 
,IFLA_BRPORT_MCAST_TO_UCAST 
,IFLA_BRPORT_VLAN_TUNNEL 
,IFLA_BRPORT_BCAST_FLOOD 
,IFLA_BRPORT_GROUP_FWD_MASK 
,IFLA_BRPORT_NEIGH_SUPPRESS 
,IFLA_BRPORT_ISOLATED 
,IFLA_BRPORT_BACKUP_PORT 
,IFLA_BRPORT_MRP_RING_OPEN 
,IFLA_BRPORT_MRP_IN_OPEN 
,IFLA_BRPORT_MCAST_EHT_HOSTS_LIMIT 
,IFLA_BRPORT_MCAST_EHT_HOSTS_CNT 
,IFLA_BRPORT_LOCKED 
,IFLA_BRPORT_MAB 
,IFLA_BRPORT_MCAST_N_GROUPS 
,IFLA_BRPORT_MCAST_MAX_GROUPS 
,IFLA_BRPORT_NEIGH_VLAN_SUPPRESS 
,IFLA_BRPORT_BACKUP_NHID 
,__IFLA_BRPORT_MAX 
};

struct ifla_cacheinfo
{
    unsigned int  max_reasm_len  ;
    unsigned int  tstamp  ;
    unsigned int  reachable_time  ;
    unsigned int  retrans_time  ;
};

enum { IFLA_INFO_UNSPEC 
,IFLA_INFO_KIND 
,IFLA_INFO_DATA 
,IFLA_INFO_XSTATS 
,IFLA_INFO_SLAVE_KIND 
,IFLA_INFO_SLAVE_DATA 
,__IFLA_INFO_MAX 
};

enum { IFLA_VLAN_UNSPEC 
,IFLA_VLAN_ID 
,IFLA_VLAN_FLAGS 
,IFLA_VLAN_EGRESS_QOS 
,IFLA_VLAN_INGRESS_QOS 
,IFLA_VLAN_PROTOCOL 
,__IFLA_VLAN_MAX 
};

struct ifla_vlan_flags
{
    unsigned int  flags  ;
    unsigned int  mask  ;
};

enum { IFLA_VLAN_QOS_UNSPEC 
,IFLA_VLAN_QOS_MAPPING 
,__IFLA_VLAN_QOS_MAX 
};

struct ifla_vlan_qos_mapping
{
    unsigned int  from  ;
    unsigned int  to  ;
};

enum { IFLA_MACVLAN_UNSPEC 
,IFLA_MACVLAN_MODE 
,IFLA_MACVLAN_FLAGS 
,IFLA_MACVLAN_MACADDR_MODE 
,IFLA_MACVLAN_MACADDR 
,IFLA_MACVLAN_MACADDR_DATA 
,IFLA_MACVLAN_MACADDR_COUNT 
,IFLA_MACVLAN_BC_QUEUE_LEN 
,IFLA_MACVLAN_BC_QUEUE_LEN_USED 
,IFLA_MACVLAN_BC_CUTOFF 
,__IFLA_MACVLAN_MAX 
};

enum  macvlan_mode { MACVLAN_MODE_PRIVATE=(1),
MACVLAN_MODE_VEPA=(2),
MACVLAN_MODE_BRIDGE=(4),
MACVLAN_MODE_PASSTHRU=(8),
MACVLAN_MODE_SOURCE=(16)
};

enum  macvlan_macaddr_mode { MACVLAN_MACADDR_ADD 
,MACVLAN_MACADDR_DEL 
,MACVLAN_MACADDR_FLUSH 
,MACVLAN_MACADDR_SET 
};

enum { IFLA_VRF_UNSPEC 
,IFLA_VRF_TABLE 
,__IFLA_VRF_MAX 
};

enum { IFLA_VRF_PORT_UNSPEC 
,IFLA_VRF_PORT_TABLE 
,__IFLA_VRF_PORT_MAX 
};

enum { IFLA_MACSEC_UNSPEC 
,IFLA_MACSEC_SCI 
,IFLA_MACSEC_PORT 
,IFLA_MACSEC_ICV_LEN 
,IFLA_MACSEC_CIPHER_SUITE 
,IFLA_MACSEC_WINDOW 
,IFLA_MACSEC_ENCODING_SA 
,IFLA_MACSEC_ENCRYPT 
,IFLA_MACSEC_PROTECT 
,IFLA_MACSEC_INC_SCI 
,IFLA_MACSEC_ES 
,IFLA_MACSEC_SCB 
,IFLA_MACSEC_REPLAY_PROTECT 
,IFLA_MACSEC_VALIDATION 
,IFLA_MACSEC_PAD 
,IFLA_MACSEC_OFFLOAD 
,__IFLA_MACSEC_MAX 
};

enum { IFLA_XFRM_UNSPEC 
,IFLA_XFRM_LINK 
,IFLA_XFRM_IF_ID 
,IFLA_XFRM_COLLECT_METADATA 
,__IFLA_XFRM_MAX 
};

enum  macsec_validation_type { MACSEC_VALIDATE_DISABLED=(0),
MACSEC_VALIDATE_CHECK=(1),
MACSEC_VALIDATE_STRICT=(2),
__MACSEC_VALIDATE_END 
,MACSEC_VALIDATE_MAX=((2+1)-1)
};

enum  macsec_offload { MACSEC_OFFLOAD_OFF=(0),
MACSEC_OFFLOAD_PHY=(1),
MACSEC_OFFLOAD_MAC=(2),
__MACSEC_OFFLOAD_END 
,MACSEC_OFFLOAD_MAX=((2+1)-1)
};

enum { IFLA_IPVLAN_UNSPEC 
,IFLA_IPVLAN_MODE 
,IFLA_IPVLAN_FLAGS 
,__IFLA_IPVLAN_MAX 
};

enum  ipvlan_mode { IPVLAN_MODE_L2=(0),
IPVLAN_MODE_L3 
,IPVLAN_MODE_L3S 
,IPVLAN_MODE_MAX 
};

struct tunnel_msg
{
    unsigned char  family  ;
    unsigned char  flags  ;
    unsigned short int  reserved2  ;
    unsigned int  ifindex  ;
};

enum  netkit_action { NETKIT_NEXT=(-1),
NETKIT_PASS=(0),
NETKIT_DROP=(2),
NETKIT_REDIRECT=(7)
};

enum  netkit_mode { NETKIT_L2 
,NETKIT_L3 
};

enum  netkit_scrub { NETKIT_SCRUB_NONE 
,NETKIT_SCRUB_DEFAULT 
};

enum { IFLA_NETKIT_UNSPEC 
,IFLA_NETKIT_PEER_INFO 
,IFLA_NETKIT_PRIMARY 
,IFLA_NETKIT_POLICY 
,IFLA_NETKIT_PEER_POLICY 
,IFLA_NETKIT_MODE 
,IFLA_NETKIT_SCRUB 
,IFLA_NETKIT_PEER_SCRUB 
,IFLA_NETKIT_HEADROOM 
,IFLA_NETKIT_TAILROOM 
,__IFLA_NETKIT_MAX 
};

enum { VNIFILTER_ENTRY_STATS_UNSPEC 
,VNIFILTER_ENTRY_STATS_RX_BYTES 
,VNIFILTER_ENTRY_STATS_RX_PKTS 
,VNIFILTER_ENTRY_STATS_RX_DROPS 
,VNIFILTER_ENTRY_STATS_RX_ERRORS 
,VNIFILTER_ENTRY_STATS_TX_BYTES 
,VNIFILTER_ENTRY_STATS_TX_PKTS 
,VNIFILTER_ENTRY_STATS_TX_DROPS 
,VNIFILTER_ENTRY_STATS_TX_ERRORS 
,VNIFILTER_ENTRY_STATS_PAD 
,__VNIFILTER_ENTRY_STATS_MAX 
};

enum { VXLAN_VNIFILTER_ENTRY_UNSPEC 
,VXLAN_VNIFILTER_ENTRY_START 
,VXLAN_VNIFILTER_ENTRY_END 
,VXLAN_VNIFILTER_ENTRY_GROUP 
,VXLAN_VNIFILTER_ENTRY_GROUP6 
,VXLAN_VNIFILTER_ENTRY_STATS 
,__VXLAN_VNIFILTER_ENTRY_MAX 
};

enum { VXLAN_VNIFILTER_UNSPEC 
,VXLAN_VNIFILTER_ENTRY 
,__VXLAN_VNIFILTER_MAX 
};

enum { IFLA_VXLAN_UNSPEC 
,IFLA_VXLAN_ID 
,IFLA_VXLAN_GROUP 
,IFLA_VXLAN_LINK 
,IFLA_VXLAN_LOCAL 
,IFLA_VXLAN_TTL 
,IFLA_VXLAN_TOS 
,IFLA_VXLAN_LEARNING 
,IFLA_VXLAN_AGEING 
,IFLA_VXLAN_LIMIT 
,IFLA_VXLAN_PORT_RANGE 
,IFLA_VXLAN_PROXY 
,IFLA_VXLAN_RSC 
,IFLA_VXLAN_L2MISS 
,IFLA_VXLAN_L3MISS 
,IFLA_VXLAN_PORT 
,IFLA_VXLAN_GROUP6 
,IFLA_VXLAN_LOCAL6 
,IFLA_VXLAN_UDP_CSUM 
,IFLA_VXLAN_UDP_ZERO_CSUM6_TX 
,IFLA_VXLAN_UDP_ZERO_CSUM6_RX 
,IFLA_VXLAN_REMCSUM_TX 
,IFLA_VXLAN_REMCSUM_RX 
,IFLA_VXLAN_GBP 
,IFLA_VXLAN_REMCSUM_NOPARTIAL 
,IFLA_VXLAN_COLLECT_METADATA 
,IFLA_VXLAN_LABEL 
,IFLA_VXLAN_GPE 
,IFLA_VXLAN_TTL_INHERIT 
,IFLA_VXLAN_DF 
,IFLA_VXLAN_VNIFILTER 
,IFLA_VXLAN_LOCALBYPASS 
,IFLA_VXLAN_LABEL_POLICY 
,IFLA_VXLAN_RESERVED_BITS 
,IFLA_VXLAN_MC_ROUTE 
,__IFLA_VXLAN_MAX 
};

struct ifla_vxlan_port_range
{
    unsigned short int  low  ;
    unsigned short int  high  ;
};

enum  ifla_vxlan_df { VXLAN_DF_UNSET=(0),
VXLAN_DF_SET 
,VXLAN_DF_INHERIT 
,__VXLAN_DF_END 
,VXLAN_DF_MAX=((0+3)-1)
};

enum  ifla_vxlan_label_policy { VXLAN_LABEL_FIXED=(0),
VXLAN_LABEL_INHERIT=(1),
__VXLAN_LABEL_END 
,VXLAN_LABEL_MAX=((1+1)-1)
};

enum { IFLA_GENEVE_UNSPEC 
,IFLA_GENEVE_ID 
,IFLA_GENEVE_REMOTE 
,IFLA_GENEVE_TTL 
,IFLA_GENEVE_TOS 
,IFLA_GENEVE_PORT 
,IFLA_GENEVE_COLLECT_METADATA 
,IFLA_GENEVE_REMOTE6 
,IFLA_GENEVE_UDP_CSUM 
,IFLA_GENEVE_UDP_ZERO_CSUM6_TX 
,IFLA_GENEVE_UDP_ZERO_CSUM6_RX 
,IFLA_GENEVE_LABEL 
,IFLA_GENEVE_TTL_INHERIT 
,IFLA_GENEVE_DF 
,IFLA_GENEVE_INNER_PROTO_INHERIT 
,IFLA_GENEVE_PORT_RANGE 
,__IFLA_GENEVE_MAX 
};

enum  ifla_geneve_df { GENEVE_DF_UNSET=(0),
GENEVE_DF_SET 
,GENEVE_DF_INHERIT 
,__GENEVE_DF_END 
,GENEVE_DF_MAX=((0+3)-1)
};

struct ifla_geneve_port_range
{
    unsigned short int  low  ;
    unsigned short int  high  ;
};

enum { IFLA_BAREUDP_UNSPEC 
,IFLA_BAREUDP_PORT 
,IFLA_BAREUDP_ETHERTYPE 
,IFLA_BAREUDP_SRCPORT_MIN 
,IFLA_BAREUDP_MULTIPROTO_MODE 
,__IFLA_BAREUDP_MAX 
};

enum { IFLA_PPP_UNSPEC 
,IFLA_PPP_DEV_FD 
,__IFLA_PPP_MAX 
};

enum  ifla_gtp_role { GTP_ROLE_GGSN=(0),
GTP_ROLE_SGSN 
};

enum { IFLA_GTP_UNSPEC 
,IFLA_GTP_FD0 
,IFLA_GTP_FD1 
,IFLA_GTP_PDP_HASHSIZE 
,IFLA_GTP_ROLE 
,IFLA_GTP_CREATE_SOCKETS 
,IFLA_GTP_RESTART_COUNT 
,IFLA_GTP_LOCAL 
,IFLA_GTP_LOCAL6 
,__IFLA_GTP_MAX 
};

enum { IFLA_BOND_UNSPEC 
,IFLA_BOND_MODE 
,IFLA_BOND_ACTIVE_SLAVE 
,IFLA_BOND_MIIMON 
,IFLA_BOND_UPDELAY 
,IFLA_BOND_DOWNDELAY 
,IFLA_BOND_USE_CARRIER 
,IFLA_BOND_ARP_INTERVAL 
,IFLA_BOND_ARP_IP_TARGET 
,IFLA_BOND_ARP_VALIDATE 
,IFLA_BOND_ARP_ALL_TARGETS 
,IFLA_BOND_PRIMARY 
,IFLA_BOND_PRIMARY_RESELECT 
,IFLA_BOND_FAIL_OVER_MAC 
,IFLA_BOND_XMIT_HASH_POLICY 
,IFLA_BOND_RESEND_IGMP 
,IFLA_BOND_NUM_PEER_NOTIF 
,IFLA_BOND_ALL_SLAVES_ACTIVE 
,IFLA_BOND_MIN_LINKS 
,IFLA_BOND_LP_INTERVAL 
,IFLA_BOND_PACKETS_PER_SLAVE 
,IFLA_BOND_AD_LACP_RATE 
,IFLA_BOND_AD_SELECT 
,IFLA_BOND_AD_INFO 
,IFLA_BOND_AD_ACTOR_SYS_PRIO 
,IFLA_BOND_AD_USER_PORT_KEY 
,IFLA_BOND_AD_ACTOR_SYSTEM 
,IFLA_BOND_TLB_DYNAMIC_LB 
,IFLA_BOND_PEER_NOTIF_DELAY 
,IFLA_BOND_AD_LACP_ACTIVE 
,IFLA_BOND_MISSED_MAX 
,IFLA_BOND_NS_IP6_TARGET 
,IFLA_BOND_COUPLED_CONTROL 
,IFLA_BOND_BROADCAST_NEIGH 
,__IFLA_BOND_MAX 
};

enum { IFLA_BOND_AD_INFO_UNSPEC 
,IFLA_BOND_AD_INFO_AGGREGATOR 
,IFLA_BOND_AD_INFO_NUM_PORTS 
,IFLA_BOND_AD_INFO_ACTOR_KEY 
,IFLA_BOND_AD_INFO_PARTNER_KEY 
,IFLA_BOND_AD_INFO_PARTNER_MAC 
,__IFLA_BOND_AD_INFO_MAX 
};

enum { IFLA_BOND_SLAVE_UNSPEC 
,IFLA_BOND_SLAVE_STATE 
,IFLA_BOND_SLAVE_MII_STATUS 
,IFLA_BOND_SLAVE_LINK_FAILURE_COUNT 
,IFLA_BOND_SLAVE_PERM_HWADDR 
,IFLA_BOND_SLAVE_QUEUE_ID 
,IFLA_BOND_SLAVE_AD_AGGREGATOR_ID 
,IFLA_BOND_SLAVE_AD_ACTOR_OPER_PORT_STATE 
,IFLA_BOND_SLAVE_AD_PARTNER_OPER_PORT_STATE 
,IFLA_BOND_SLAVE_PRIO 
,__IFLA_BOND_SLAVE_MAX 
};

enum { IFLA_VF_INFO_UNSPEC 
,IFLA_VF_INFO 
,__IFLA_VF_INFO_MAX 
};

enum { IFLA_VF_UNSPEC 
,IFLA_VF_MAC 
,IFLA_VF_VLAN 
,IFLA_VF_TX_RATE 
,IFLA_VF_SPOOFCHK 
,IFLA_VF_LINK_STATE 
,IFLA_VF_RATE 
,IFLA_VF_RSS_QUERY_EN 
,IFLA_VF_STATS 
,IFLA_VF_TRUST 
,IFLA_VF_IB_NODE_GUID 
,IFLA_VF_IB_PORT_GUID 
,IFLA_VF_VLAN_LIST 
,IFLA_VF_BROADCAST 
,__IFLA_VF_MAX 
};

struct ifla_vf_mac
{
    unsigned int  vf  ;
    unsigned char  mac[32]  ;
};

struct ifla_vf_broadcast
{
    unsigned char  broadcast[32]  ;
};

struct ifla_vf_vlan
{
    unsigned int  vf  ;
    unsigned int  vlan  ;
    unsigned int  qos  ;
};

enum { IFLA_VF_VLAN_INFO_UNSPEC 
,IFLA_VF_VLAN_INFO 
,__IFLA_VF_VLAN_INFO_MAX 
};

struct ifla_vf_vlan_info
{
    unsigned int  vf  ;
    unsigned int  vlan  ;
    unsigned int  qos  ;
    unsigned short int  vlan_proto  ;
};

struct ifla_vf_tx_rate
{
    unsigned int  vf  ;
    unsigned int  rate  ;
};

struct ifla_vf_rate
{
    unsigned int  vf  ;
    unsigned int  min_tx_rate  ;
    unsigned int  max_tx_rate  ;
};

struct ifla_vf_spoofchk
{
    unsigned int  vf  ;
    unsigned int  setting  ;
};

struct ifla_vf_guid
{
    unsigned int  vf  ;
    unsigned long  long  guid  ;
};

enum { IFLA_VF_LINK_STATE_AUTO 
,IFLA_VF_LINK_STATE_ENABLE 
,IFLA_VF_LINK_STATE_DISABLE 
,__IFLA_VF_LINK_STATE_MAX 
};

struct ifla_vf_link_state
{
    unsigned int  vf  ;
    unsigned int  link_state  ;
};

struct ifla_vf_rss_query_en
{
    unsigned int  vf  ;
    unsigned int  setting  ;
};

enum { IFLA_VF_STATS_RX_PACKETS 
,IFLA_VF_STATS_TX_PACKETS 
,IFLA_VF_STATS_RX_BYTES 
,IFLA_VF_STATS_TX_BYTES 
,IFLA_VF_STATS_BROADCAST 
,IFLA_VF_STATS_MULTICAST 
,IFLA_VF_STATS_PAD 
,IFLA_VF_STATS_RX_DROPPED 
,IFLA_VF_STATS_TX_DROPPED 
,__IFLA_VF_STATS_MAX 
};

struct ifla_vf_trust
{
    unsigned int  vf  ;
    unsigned int  setting  ;
};

enum { IFLA_VF_PORT_UNSPEC 
,IFLA_VF_PORT 
,__IFLA_VF_PORT_MAX 
};

enum { IFLA_PORT_UNSPEC 
,IFLA_PORT_VF 
,IFLA_PORT_PROFILE 
,IFLA_PORT_VSI_TYPE 
,IFLA_PORT_INSTANCE_UUID 
,IFLA_PORT_HOST_UUID 
,IFLA_PORT_REQUEST 
,IFLA_PORT_RESPONSE 
,__IFLA_PORT_MAX 
};

enum { PORT_REQUEST_PREASSOCIATE=(0),
PORT_REQUEST_PREASSOCIATE_RR 
,PORT_REQUEST_ASSOCIATE 
,PORT_REQUEST_DISASSOCIATE 
};

enum { PORT_VDP_RESPONSE_SUCCESS=(0),
PORT_VDP_RESPONSE_INVALID_FORMAT 
,PORT_VDP_RESPONSE_INSUFFICIENT_RESOURCES 
,PORT_VDP_RESPONSE_UNUSED_VTID 
,PORT_VDP_RESPONSE_VTID_VIOLATION 
,PORT_VDP_RESPONSE_VTID_VERSION_VIOALTION 
,PORT_VDP_RESPONSE_OUT_OF_SYNC 
,PORT_PROFILE_RESPONSE_SUCCESS=(0x100),
PORT_PROFILE_RESPONSE_INPROGRESS 
,PORT_PROFILE_RESPONSE_INVALID 
,PORT_PROFILE_RESPONSE_BADSTATE 
,PORT_PROFILE_RESPONSE_INSUFFICIENT_RESOURCES 
,PORT_PROFILE_RESPONSE_ERROR 
};

struct ifla_port_vsi
{
    unsigned char  vsi_mgr_id  ;
    unsigned char  vsi_type_id[3]  ;
    unsigned char  vsi_type_version  ;
    unsigned char  pad[3]  ;
};

enum { IFLA_IPOIB_UNSPEC 
,IFLA_IPOIB_PKEY 
,IFLA_IPOIB_MODE 
,IFLA_IPOIB_UMCAST 
,__IFLA_IPOIB_MAX 
};

enum { IPOIB_MODE_DATAGRAM=(0),
IPOIB_MODE_CONNECTED=(1)
};

enum { HSR_PROTOCOL_HSR 
,HSR_PROTOCOL_PRP 
,HSR_PROTOCOL_MAX 
};

enum { IFLA_HSR_UNSPEC 
,IFLA_HSR_SLAVE1 
,IFLA_HSR_SLAVE2 
,IFLA_HSR_MULTICAST_SPEC 
,IFLA_HSR_SUPERVISION_ADDR 
,IFLA_HSR_SEQ_NR 
,IFLA_HSR_VERSION 
,IFLA_HSR_PROTOCOL 
,IFLA_HSR_INTERLINK 
,__IFLA_HSR_MAX 
};

struct if_stats_msg
{
    unsigned char  family  ;
    unsigned char  pad1  ;
    unsigned short int  pad2  ;
    unsigned int  ifindex  ;
    unsigned int  filter_mask  ;
};

enum { IFLA_STATS_UNSPEC 
,IFLA_STATS_LINK_64 
,IFLA_STATS_LINK_XSTATS 
,IFLA_STATS_LINK_XSTATS_SLAVE 
,IFLA_STATS_LINK_OFFLOAD_XSTATS 
,IFLA_STATS_AF_SPEC 
,__IFLA_STATS_MAX 
};

enum { IFLA_STATS_GETSET_UNSPEC 
,IFLA_STATS_GET_FILTERS 
,IFLA_STATS_SET_OFFLOAD_XSTATS_L3_STATS 
,__IFLA_STATS_GETSET_MAX 
};

enum { LINK_XSTATS_TYPE_UNSPEC 
,LINK_XSTATS_TYPE_BRIDGE 
,LINK_XSTATS_TYPE_BOND 
,__LINK_XSTATS_TYPE_MAX 
};

enum { IFLA_OFFLOAD_XSTATS_UNSPEC 
,IFLA_OFFLOAD_XSTATS_CPU_HIT 
,IFLA_OFFLOAD_XSTATS_HW_S_INFO 
,IFLA_OFFLOAD_XSTATS_L3_STATS 
,__IFLA_OFFLOAD_XSTATS_MAX 
};

enum { IFLA_OFFLOAD_XSTATS_HW_S_INFO_UNSPEC 
,IFLA_OFFLOAD_XSTATS_HW_S_INFO_REQUEST 
,IFLA_OFFLOAD_XSTATS_HW_S_INFO_USED 
,__IFLA_OFFLOAD_XSTATS_HW_S_INFO_MAX 
};

enum { XDP_ATTACHED_NONE=(0),
XDP_ATTACHED_DRV 
,XDP_ATTACHED_SKB 
,XDP_ATTACHED_HW 
,XDP_ATTACHED_MULTI 
};

enum { IFLA_XDP_UNSPEC 
,IFLA_XDP_FD 
,IFLA_XDP_ATTACHED 
,IFLA_XDP_FLAGS 
,IFLA_XDP_PROG_ID 
,IFLA_XDP_DRV_PROG_ID 
,IFLA_XDP_SKB_PROG_ID 
,IFLA_XDP_HW_PROG_ID 
,IFLA_XDP_EXPECTED_FD 
,__IFLA_XDP_MAX 
};

enum { IFLA_EVENT_NONE 
,IFLA_EVENT_REBOOT 
,IFLA_EVENT_FEATURES 
,IFLA_EVENT_BONDING_FAILOVER 
,IFLA_EVENT_NOTIFY_PEERS 
,IFLA_EVENT_IGMP_RESEND 
,IFLA_EVENT_BONDING_OPTIONS 
};

enum { IFLA_TUN_UNSPEC 
,IFLA_TUN_OWNER 
,IFLA_TUN_GROUP 
,IFLA_TUN_TYPE 
,IFLA_TUN_PI 
,IFLA_TUN_VNET_HDR 
,IFLA_TUN_PERSIST 
,IFLA_TUN_MULTI_QUEUE 
,IFLA_TUN_NUM_QUEUES 
,IFLA_TUN_NUM_DISABLED_QUEUES 
,__IFLA_TUN_MAX 
};

enum { IFLA_RMNET_UNSPEC 
,IFLA_RMNET_MUX_ID 
,IFLA_RMNET_FLAGS 
,__IFLA_RMNET_MAX 
};

struct ifla_rmnet_flags
{
    unsigned int  flags  ;
    unsigned int  mask  ;
};

enum { IFLA_MCTP_UNSPEC 
,IFLA_MCTP_NET 
,IFLA_MCTP_PHYS_BINDING 
,__IFLA_MCTP_MAX 
};

enum { IFLA_DSA_UNSPEC 
,IFLA_DSA_CONDUIT 
,IFLA_DSA_MASTER=((1)),
__IFLA_DSA_MAX 
};

enum  ovpn_mode { OVPN_MODE_P2P 
,OVPN_MODE_MP 
};

enum { IFLA_OVPN_UNSPEC 
,IFLA_OVPN_MODE 
,__IFLA_OVPN_MAX 
};

struct ifaddrmsg
{
    unsigned char  ifa_family  ;
    unsigned char  ifa_prefixlen  ;
    unsigned char  ifa_flags  ;
    unsigned char  ifa_scope  ;
    unsigned int  ifa_index  ;
};

enum { IFA_UNSPEC 
,IFA_ADDRESS 
,IFA_LOCAL 
,IFA_LABEL 
,IFA_BROADCAST 
,IFA_ANYCAST 
,IFA_CACHEINFO 
,IFA_MULTICAST 
,IFA_FLAGS 
,IFA_RT_PRIORITY 
,IFA_TARGET_NETNSID 
,IFA_PROTO 
,__IFA_MAX 
};

struct ifa_cacheinfo
{
    unsigned int  ifa_prefered  ;
    unsigned int  ifa_valid  ;
    unsigned int  cstamp  ;
    unsigned int  tstamp  ;
};

struct ndmsg
{
    unsigned char  ndm_family  ;
    unsigned char  ndm_pad1  ;
    unsigned short int  ndm_pad2  ;
    int  ndm_ifindex  ;
    unsigned short int  ndm_state  ;
    unsigned char  ndm_flags  ;
    unsigned char  ndm_type  ;
};

enum { NDA_UNSPEC 
,NDA_DST 
,NDA_LLADDR 
,NDA_CACHEINFO 
,NDA_PROBES 
,NDA_VLAN 
,NDA_PORT 
,NDA_VNI 
,NDA_IFINDEX 
,NDA_MASTER 
,NDA_LINK_NETNSID 
,NDA_SRC_VNI 
,NDA_PROTOCOL 
,NDA_NH_ID 
,NDA_FDB_EXT_ATTRS 
,NDA_FLAGS_EXT 
,NDA_NDM_STATE_MASK 
,NDA_NDM_FLAGS_MASK 
,__NDA_MAX 
};

struct nda_cacheinfo
{
    unsigned int  ndm_confirmed  ;
    unsigned int  ndm_used  ;
    unsigned int  ndm_updated  ;
    unsigned int  ndm_refcnt  ;
};

struct ndt_stats
{
    unsigned long  long  ndts_allocs  ;
    unsigned long  long  ndts_destroys  ;
    unsigned long  long  ndts_hash_grows  ;
    unsigned long  long  ndts_res_failed  ;
    unsigned long  long  ndts_lookups  ;
    unsigned long  long  ndts_hits  ;
    unsigned long  long  ndts_rcv_probes_mcast  ;
    unsigned long  long  ndts_rcv_probes_ucast  ;
    unsigned long  long  ndts_periodic_gc_runs  ;
    unsigned long  long  ndts_forced_gc_runs  ;
    unsigned long  long  ndts_table_fulls  ;
};

enum { NDTPA_UNSPEC 
,NDTPA_IFINDEX 
,NDTPA_REFCNT 
,NDTPA_REACHABLE_TIME 
,NDTPA_BASE_REACHABLE_TIME 
,NDTPA_RETRANS_TIME 
,NDTPA_GC_STALETIME 
,NDTPA_DELAY_PROBE_TIME 
,NDTPA_QUEUE_LEN 
,NDTPA_APP_PROBES 
,NDTPA_UCAST_PROBES 
,NDTPA_MCAST_PROBES 
,NDTPA_ANYCAST_DELAY 
,NDTPA_PROXY_DELAY 
,NDTPA_PROXY_QLEN 
,NDTPA_LOCKTIME 
,NDTPA_QUEUE_LENBYTES 
,NDTPA_MCAST_REPROBES 
,NDTPA_PAD 
,NDTPA_INTERVAL_PROBE_TIME_MS 
,__NDTPA_MAX 
};

struct ndtmsg
{
    unsigned char  ndtm_family  ;
    unsigned char  ndtm_pad1  ;
    unsigned short int  ndtm_pad2  ;
};

struct ndt_config
{
    unsigned short int  ndtc_key_len  ;
    unsigned short int  ndtc_entry_size  ;
    unsigned int  ndtc_entries  ;
    unsigned int  ndtc_last_flush  ;
    unsigned int  ndtc_last_rand  ;
    unsigned int  ndtc_hash_rnd  ;
    unsigned int  ndtc_hash_mask  ;
    unsigned int  ndtc_hash_chain_gc  ;
    unsigned int  ndtc_proxy_qlen  ;
};

enum { NDTA_UNSPEC 
,NDTA_NAME 
,NDTA_THRESH1 
,NDTA_THRESH2 
,NDTA_THRESH3 
,NDTA_CONFIG 
,NDTA_PARMS 
,NDTA_STATS 
,NDTA_GC_INTERVAL 
,NDTA_PAD 
,__NDTA_MAX 
};

enum { FDB_NOTIFY_BIT=((1<<0)),
FDB_NOTIFY_INACTIVE_BIT=((1<<1))
};

enum { NFEA_UNSPEC 
,NFEA_ACTIVITY_NOTIFY 
,NFEA_DONT_REFRESH 
,__NFEA_MAX 
};

enum { RTM_BASE=(16),
RTM_NEWLINK=(16),
RTM_DELLINK 
,RTM_GETLINK 
,RTM_SETLINK 
,RTM_NEWADDR=(20),
RTM_DELADDR 
,RTM_GETADDR 
,RTM_NEWROUTE=(24),
RTM_DELROUTE 
,RTM_GETROUTE 
,RTM_NEWNEIGH=(28),
RTM_DELNEIGH 
,RTM_GETNEIGH 
,RTM_NEWRULE=(32),
RTM_DELRULE 
,RTM_GETRULE 
,RTM_NEWQDISC=(36),
RTM_DELQDISC 
,RTM_GETQDISC 
,RTM_NEWTCLASS=(40),
RTM_DELTCLASS 
,RTM_GETTCLASS 
,RTM_NEWTFILTER=(44),
RTM_DELTFILTER 
,RTM_GETTFILTER 
,RTM_NEWACTION=(48),
RTM_DELACTION 
,RTM_GETACTION 
,RTM_NEWPREFIX=(52),
RTM_NEWMULTICAST=(56),
RTM_DELMULTICAST 
,RTM_GETMULTICAST 
,RTM_NEWANYCAST=(60),
RTM_DELANYCAST 
,RTM_GETANYCAST 
,RTM_NEWNEIGHTBL=(64),
RTM_GETNEIGHTBL=(66),
RTM_SETNEIGHTBL 
,RTM_NEWNDUSEROPT=(68),
RTM_NEWADDRLABEL=(72),
RTM_DELADDRLABEL 
,RTM_GETADDRLABEL 
,RTM_GETDCB=(78),
RTM_SETDCB 
,RTM_NEWNETCONF=(80),
RTM_DELNETCONF 
,RTM_GETNETCONF=(82),
RTM_NEWMDB=(84),
RTM_DELMDB=(85),
RTM_GETMDB=(86),
RTM_NEWNSID=(88),
RTM_DELNSID=(89),
RTM_GETNSID=(90),
RTM_NEWSTATS=(92),
RTM_GETSTATS=(94),
RTM_SETSTATS 
,RTM_NEWCACHEREPORT=(96),
RTM_NEWCHAIN=(100),
RTM_DELCHAIN 
,RTM_GETCHAIN 
,RTM_NEWNEXTHOP=(104),
RTM_DELNEXTHOP 
,RTM_GETNEXTHOP 
,RTM_NEWLINKPROP=(108),
RTM_DELLINKPROP 
,RTM_GETLINKPROP 
,RTM_NEWVLAN=(112),
RTM_DELVLAN 
,RTM_GETVLAN 
,RTM_NEWNEXTHOPBUCKET=(116),
RTM_DELNEXTHOPBUCKET 
,RTM_GETNEXTHOPBUCKET 
,RTM_NEWTUNNEL=(120),
RTM_DELTUNNEL 
,RTM_GETTUNNEL 
,__RTM_MAX 
};

struct rtattr
{
    unsigned short int rta_len;
    unsigned short int rta_type;
};

struct rtmsg
{
    unsigned char rtm_family;
    unsigned char rtm_dst_len;
    unsigned char rtm_src_len;
    unsigned char rtm_tos;
    unsigned char rtm_table;
    unsigned char rtm_protocol;
    unsigned char rtm_scope;
    unsigned char rtm_type;
    unsigned int rtm_flags;
};

enum { RTN_UNSPEC 
,RTN_UNICAST 
,RTN_LOCAL 
,RTN_BROADCAST 
,RTN_ANYCAST 
,RTN_MULTICAST 
,RTN_BLACKHOLE 
,RTN_UNREACHABLE 
,RTN_PROHIBIT 
,RTN_THROW 
,RTN_NAT 
,RTN_XRESOLVE 
,__RTN_MAX 
};

enum  rt_scope_t { RT_SCOPE_UNIVERSE=(0),
RT_SCOPE_SITE=(200),
RT_SCOPE_LINK=(253),
RT_SCOPE_HOST=(254),
RT_SCOPE_NOWHERE=(255)
};

enum  rt_class_t { RT_TABLE_UNSPEC=(0),
RT_TABLE_COMPAT=(252),
RT_TABLE_DEFAULT=(253),
RT_TABLE_MAIN=(254),
RT_TABLE_LOCAL=(255),
RT_TABLE_MAX=(0xFFFFFFFF)
};

enum  rtattr_type_t { RTA_UNSPEC 
,RTA_DST 
,RTA_SRC 
,RTA_IIF 
,RTA_OIF 
,RTA_GATEWAY 
,RTA_PRIORITY 
,RTA_PREFSRC 
,RTA_METRICS 
,RTA_MULTIPATH 
,RTA_PROTOINFO 
,RTA_FLOW 
,RTA_CACHEINFO 
,RTA_SESSION 
,RTA_MP_ALGO 
,RTA_TABLE 
,RTA_MARK 
,RTA_MFC_STATS 
,RTA_VIA 
,RTA_NEWDST 
,RTA_PREF 
,RTA_ENCAP_TYPE 
,RTA_ENCAP 
,RTA_EXPIRES 
,RTA_PAD 
,RTA_UID 
,RTA_TTL_PROPAGATE 
,RTA_IP_PROTO 
,RTA_SPORT 
,RTA_DPORT 
,RTA_NH_ID 
,RTA_FLOWLABEL 
,__RTA_MAX 
};

struct rtnexthop
{
    unsigned short int rtnh_len;
    unsigned char rtnh_flags;
    unsigned char rtnh_hops;
    int rtnh_ifindex;
};

struct rtvia
{
    unsigned short int  rtvia_family  ;
    unsigned char  rtvia_addr[]  ;
};

struct rta_cacheinfo
{
    unsigned int  rta_clntref  ;
    unsigned int  rta_lastuse  ;
    int  rta_expires  ;
    unsigned int  rta_error  ;
    unsigned int  rta_used  ;
    unsigned int  rta_id  ;
    unsigned int  rta_ts  ;
    unsigned int  rta_tsage  ;
};

enum { RTAX_UNSPEC 
,RTAX_LOCK 
,RTAX_MTU 
,RTAX_WINDOW 
,RTAX_RTT 
,RTAX_RTTVAR 
,RTAX_SSTHRESH 
,RTAX_CWND 
,RTAX_ADVMSS 
,RTAX_REORDERING 
,RTAX_HOPLIMIT 
,RTAX_INITCWND 
,RTAX_FEATURES 
,RTAX_RTO_MIN 
,RTAX_INITRWND 
,RTAX_QUICKACK 
,RTAX_CC_ALGO 
,RTAX_FASTOPEN_NO_COOKIE 
,__RTAX_MAX 
};

struct anonymous_typeX8
{
    unsigned short int  sport  ;
    unsigned short int  dport  ;
};

struct anonymous_typeX9
{
    unsigned char  type  ;
    unsigned char  code  ;
    unsigned short int  ident  ;
};

union anonymous_typeZ7
{
    struct {
        unsigned short int  sport  ;
        unsigned short int  dport  ;
    } ports;
    struct {
        unsigned char  type  ;
        unsigned char  code  ;
        unsigned short int  ident  ;
    } icmpt;
unsigned int  spi  ;
};

struct anonymous_typeX11
{
    unsigned short int  sport  ;
    unsigned short int  dport  ;
};

struct anonymous_typeX12
{
    unsigned char  type  ;
    unsigned char  code  ;
    unsigned short int  ident  ;
};

union anonymous_typeZ10
{
    struct {
        unsigned short int  sport  ;
        unsigned short int  dport  ;
    } ports;
    struct {
        unsigned char  type  ;
        unsigned char  code  ;
        unsigned short int  ident  ;
    } icmpt;
unsigned int  spi  ;
};

struct rta_session
{
    unsigned char  proto  ;
    unsigned char  pad1  ;
    unsigned short int  pad2  ;
    union {
        struct {
            unsigned short int  sport  ;
            unsigned short int  dport  ;
        } ports;
        struct {
            unsigned char  type  ;
            unsigned char  code  ;
            unsigned short int  ident  ;
        } icmpt;
        unsigned int  spi  ;
    } u;
};

struct rta_mfc_stats
{
    unsigned long  long  mfcs_packets  ;
    unsigned long  long  mfcs_bytes  ;
    unsigned long  long  mfcs_wrong_if  ;
};

struct rtgenmsg
{
    unsigned char rtgen_family;
};

struct ifinfomsg
{
    unsigned char ifi_family;
    unsigned char __ifi_pad;
    unsigned short int ifi_type;
    int ifi_index;
    unsigned int ifi_flags;
    unsigned int ifi_change;
};

struct prefixmsg
{
    unsigned char prefix_family;
    unsigned char prefix_pad1;
    unsigned short int prefix_pad2;
    int prefix_ifindex;
    unsigned char prefix_type;
    unsigned char prefix_len;
    unsigned char prefix_flags;
    unsigned char prefix_pad3;
};

enum { PREFIX_UNSPEC 
,PREFIX_ADDRESS 
,PREFIX_CACHEINFO 
,__PREFIX_MAX 
};

struct prefix_cacheinfo
{
    unsigned int  preferred_time  ;
    unsigned int  valid_time  ;
};

struct tcmsg
{
    unsigned char tcm_family;
    unsigned char tcm__pad1;
    unsigned short int tcm__pad2;
    int tcm_ifindex;
    unsigned int  tcm_handle  ;
    unsigned int  tcm_parent  ;
    unsigned int  tcm_info  ;
};

enum { TCA_UNSPEC 
,TCA_KIND 
,TCA_OPTIONS 
,TCA_STATS 
,TCA_XSTATS 
,TCA_RATE 
,TCA_FCNT 
,TCA_STATS2 
,TCA_STAB 
,TCA_PAD 
,TCA_DUMP_INVISIBLE 
,TCA_CHAIN 
,TCA_HW_OFFLOAD 
,TCA_INGRESS_BLOCK 
,TCA_EGRESS_BLOCK 
,TCA_DUMP_FLAGS 
,TCA_EXT_WARN_MSG 
,__TCA_MAX 
};

struct nduseroptmsg
{
    unsigned char nduseropt_family;
    unsigned char nduseropt_pad1;
    unsigned short int nduseropt_opts_len;
    int nduseropt_ifindex;
    unsigned char  nduseropt_icmp_type  ;
    unsigned char  nduseropt_icmp_code  ;
    unsigned short int nduseropt_pad2;
    unsigned int nduseropt_pad3;
};

enum { NDUSEROPT_UNSPEC 
,NDUSEROPT_SRCADDR 
,__NDUSEROPT_MAX 
};

enum  rtnetlink_groups { RTNLGRP_NONE 
,RTNLGRP_LINK 
,RTNLGRP_NOTIFY 
,RTNLGRP_NEIGH 
,RTNLGRP_TC 
,RTNLGRP_IPV4_IFADDR 
,RTNLGRP_IPV4_MROUTE 
,RTNLGRP_IPV4_ROUTE 
,RTNLGRP_IPV4_RULE 
,RTNLGRP_IPV6_IFADDR 
,RTNLGRP_IPV6_MROUTE 
,RTNLGRP_IPV6_ROUTE 
,RTNLGRP_IPV6_IFINFO 
,RTNLGRP_DECnet_IFADDR 
,RTNLGRP_NOP2 
,RTNLGRP_DECnet_ROUTE 
,RTNLGRP_DECnet_RULE 
,RTNLGRP_NOP4 
,RTNLGRP_IPV6_PREFIX 
,RTNLGRP_IPV6_RULE 
,RTNLGRP_ND_USEROPT 
,RTNLGRP_PHONET_IFADDR 
,RTNLGRP_PHONET_ROUTE 
,RTNLGRP_DCB 
,RTNLGRP_IPV4_NETCONF 
,RTNLGRP_IPV6_NETCONF 
,RTNLGRP_MDB 
,RTNLGRP_MPLS_ROUTE 
,RTNLGRP_NSID 
,RTNLGRP_MPLS_NETCONF 
,RTNLGRP_IPV4_MROUTE_R 
,RTNLGRP_IPV6_MROUTE_R 
,RTNLGRP_NEXTHOP 
,RTNLGRP_BRVLAN 
,RTNLGRP_MCTP_IFADDR 
,RTNLGRP_TUNNEL 
,RTNLGRP_STATS 
,RTNLGRP_IPV4_MCADDR 
,RTNLGRP_IPV6_MCADDR 
,RTNLGRP_IPV6_ACADDR 
,__RTNLGRP_MAX 
};

struct tcamsg
{
    unsigned char tca_family;
    unsigned char tca__pad1;
    unsigned short int tca__pad2;
};

enum { TCA_ROOT_UNSPEC 
,TCA_ROOT_TAB 
,TCA_ROOT_FLAGS 
,TCA_ROOT_COUNT 
,TCA_ROOT_TIME_DELTA 
,TCA_ROOT_EXT_WARN_MSG 
,__TCA_ROOT_MAX 
};

struct genlmsghdr
{
    unsigned char  cmd  ;
    unsigned char  version  ;
    unsigned short int  reserved  ;
};

enum { CTRL_CMD_UNSPEC 
,CTRL_CMD_NEWFAMILY 
,CTRL_CMD_DELFAMILY 
,CTRL_CMD_GETFAMILY 
,CTRL_CMD_NEWOPS 
,CTRL_CMD_DELOPS 
,CTRL_CMD_GETOPS 
,CTRL_CMD_NEWMCAST_GRP 
,CTRL_CMD_DELMCAST_GRP 
,CTRL_CMD_GETMCAST_GRP 
,CTRL_CMD_GETPOLICY 
,__CTRL_CMD_MAX 
};

enum { CTRL_ATTR_UNSPEC 
,CTRL_ATTR_FAMILY_ID 
,CTRL_ATTR_FAMILY_NAME 
,CTRL_ATTR_VERSION 
,CTRL_ATTR_HDRSIZE 
,CTRL_ATTR_MAXATTR 
,CTRL_ATTR_OPS 
,CTRL_ATTR_MCAST_GROUPS 
,CTRL_ATTR_POLICY 
,CTRL_ATTR_OP_POLICY 
,CTRL_ATTR_OP 
,__CTRL_ATTR_MAX 
};

enum { CTRL_ATTR_OP_UNSPEC 
,CTRL_ATTR_OP_ID 
,CTRL_ATTR_OP_FLAGS 
,__CTRL_ATTR_OP_MAX 
};

enum { CTRL_ATTR_MCAST_GRP_UNSPEC 
,CTRL_ATTR_MCAST_GRP_NAME 
,CTRL_ATTR_MCAST_GRP_ID 
,__CTRL_ATTR_MCAST_GRP_MAX 
};

enum { CTRL_ATTR_POLICY_UNSPEC 
,CTRL_ATTR_POLICY_DO 
,CTRL_ATTR_POLICY_DUMP 
,__CTRL_ATTR_POLICY_DUMP_MAX 
,CTRL_ATTR_POLICY_DUMP_MAX=((3)-1)
};

struct nfattr
{
    unsigned short int  nfa_len  ;
    unsigned short int  nfa_type  ;
};

enum  nfnetlink_groups { NFNLGRP_NONE 
,NFNLGRP_CONNTRACK_NEW 
,NFNLGRP_CONNTRACK_UPDATE 
,NFNLGRP_CONNTRACK_DESTROY 
,NFNLGRP_CONNTRACK_EXP_NEW 
,NFNLGRP_CONNTRACK_EXP_UPDATE 
,NFNLGRP_CONNTRACK_EXP_DESTROY 
,NFNLGRP_NFTABLES 
,NFNLGRP_ACCT_QUOTA 
,NFNLGRP_NFTRACE 
,__NFNLGRP_MAX 
};

struct nfgenmsg
{
    unsigned char  nfgen_family  ;
    unsigned char  version  ;
    unsigned short int  res_id  ;
};

enum  nfnl_batch_attributes { NFNL_BATCH_UNSPEC 
,NFNL_BATCH_GENID 
,__NFNL_BATCH_MAX 
};

enum  bpf_cond_pseudo_jmp { BPF_MAY_GOTO=(0)
};

enum { BPF_REG_0=(0),
BPF_REG_1 
,BPF_REG_2 
,BPF_REG_3 
,BPF_REG_4 
,BPF_REG_5 
,BPF_REG_6 
,BPF_REG_7 
,BPF_REG_8 
,BPF_REG_9 
,BPF_REG_10 
,__MAX_BPF_REG 
};

struct bpf_insn
{
    unsigned char  code  ;
    unsigned char  dst_reg:4  ;
    unsigned char  src_reg:4  ;
    short  off  ;
    int  imm  ;
};

struct bpf_lpm_trie_key
{
    unsigned int  prefixlen  ;
    unsigned char  data[0]  ;
};

struct bpf_lpm_trie_key_hdr
{
    unsigned int  prefixlen  ;
};

union anonymous_typeZ13
{
struct bpf_lpm_trie_key_hdr  hdr  ;
unsigned int  prefixlen  ;
};

union anonymous_typeZ14
{
struct bpf_lpm_trie_key_hdr  hdr  ;
unsigned int  prefixlen  ;
};

struct bpf_lpm_trie_key_u8
{
    union {
        struct bpf_lpm_trie_key_hdr  hdr  ;
        unsigned int  prefixlen  ;
    };
    unsigned char  data[]  ;
};

struct bpf_cgroup_storage_key
{
    unsigned long  long  cgroup_inode_id  ;
    unsigned int  attach_type  ;
};

enum  bpf_cgroup_iter_order { BPF_CGROUP_ITER_ORDER_UNSPEC=(0),
BPF_CGROUP_ITER_SELF_ONLY 
,BPF_CGROUP_ITER_DESCENDANTS_PRE 
,BPF_CGROUP_ITER_DESCENDANTS_POST 
,BPF_CGROUP_ITER_ANCESTORS_UP 
};

struct anonymous_typeX15
{
    unsigned int  map_fd  ;
};

struct anonymous_typeX16
{
    enum bpf_cgroup_iter_order order;
    unsigned int  cgroup_fd  ;
    unsigned long  long  cgroup_id  ;
};

struct anonymous_typeX17
{
    unsigned int  tid  ;
    unsigned int  pid  ;
    unsigned int  pid_fd  ;
};

union bpf_iter_link_info
{
    struct {
        unsigned int  map_fd  ;
    } map;
    struct {
        enum bpf_cgroup_iter_order order;
        unsigned int  cgroup_fd  ;
        unsigned long  long  cgroup_id  ;
    } cgroup;
    struct {
        unsigned int  tid  ;
        unsigned int  pid  ;
        unsigned int  pid_fd  ;
    } task;
};

enum  bpf_cmd { BPF_MAP_CREATE 
,BPF_MAP_LOOKUP_ELEM 
,BPF_MAP_UPDATE_ELEM 
,BPF_MAP_DELETE_ELEM 
,BPF_MAP_GET_NEXT_KEY 
,BPF_PROG_LOAD 
,BPF_OBJ_PIN 
,BPF_OBJ_GET 
,BPF_PROG_ATTACH 
,BPF_PROG_DETACH 
,BPF_PROG_TEST_RUN 
,BPF_PROG_RUN=((10)),
BPF_PROG_GET_NEXT_ID 
,BPF_MAP_GET_NEXT_ID 
,BPF_PROG_GET_FD_BY_ID 
,BPF_MAP_GET_FD_BY_ID 
,BPF_OBJ_GET_INFO_BY_FD 
,BPF_PROG_QUERY 
,BPF_RAW_TRACEPOINT_OPEN 
,BPF_BTF_LOAD 
,BPF_BTF_GET_FD_BY_ID 
,BPF_TASK_FD_QUERY 
,BPF_MAP_LOOKUP_AND_DELETE_ELEM 
,BPF_MAP_FREEZE 
,BPF_BTF_GET_NEXT_ID 
,BPF_MAP_LOOKUP_BATCH 
,BPF_MAP_LOOKUP_AND_DELETE_BATCH 
,BPF_MAP_UPDATE_BATCH 
,BPF_MAP_DELETE_BATCH 
,BPF_LINK_CREATE 
,BPF_LINK_UPDATE 
,BPF_LINK_GET_FD_BY_ID 
,BPF_LINK_GET_NEXT_ID 
,BPF_ENABLE_STATS 
,BPF_ITER_CREATE 
,BPF_LINK_DETACH 
,BPF_PROG_BIND_MAP 
,BPF_TOKEN_CREATE 
,BPF_PROG_STREAM_READ_BY_FD 
,__MAX_BPF_CMD 
};

enum  bpf_map_type { BPF_MAP_TYPE_UNSPEC 
,BPF_MAP_TYPE_HASH 
,BPF_MAP_TYPE_ARRAY 
,BPF_MAP_TYPE_PROG_ARRAY 
,BPF_MAP_TYPE_PERF_EVENT_ARRAY 
,BPF_MAP_TYPE_PERCPU_HASH 
,BPF_MAP_TYPE_PERCPU_ARRAY 
,BPF_MAP_TYPE_STACK_TRACE 
,BPF_MAP_TYPE_CGROUP_ARRAY 
,BPF_MAP_TYPE_LRU_HASH 
,BPF_MAP_TYPE_LRU_PERCPU_HASH 
,BPF_MAP_TYPE_LPM_TRIE 
,BPF_MAP_TYPE_ARRAY_OF_MAPS 
,BPF_MAP_TYPE_HASH_OF_MAPS 
,BPF_MAP_TYPE_DEVMAP 
,BPF_MAP_TYPE_SOCKMAP 
,BPF_MAP_TYPE_CPUMAP 
,BPF_MAP_TYPE_XSKMAP 
,BPF_MAP_TYPE_SOCKHASH 
,BPF_MAP_TYPE_CGROUP_STORAGE_DEPRECATED 
,BPF_MAP_TYPE_CGROUP_STORAGE=((19)),
BPF_MAP_TYPE_REUSEPORT_SOCKARRAY 
,BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE_DEPRECATED 
,BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE=(((19)+2)),
BPF_MAP_TYPE_QUEUE 
,BPF_MAP_TYPE_STACK 
,BPF_MAP_TYPE_SK_STORAGE 
,BPF_MAP_TYPE_DEVMAP_HASH 
,BPF_MAP_TYPE_STRUCT_OPS 
,BPF_MAP_TYPE_RINGBUF 
,BPF_MAP_TYPE_INODE_STORAGE 
,BPF_MAP_TYPE_TASK_STORAGE 
,BPF_MAP_TYPE_BLOOM_FILTER 
,BPF_MAP_TYPE_USER_RINGBUF 
,BPF_MAP_TYPE_CGRP_STORAGE 
,BPF_MAP_TYPE_ARENA 
,__MAX_BPF_MAP_TYPE 
};

enum  bpf_prog_type { BPF_PROG_TYPE_UNSPEC 
,BPF_PROG_TYPE_SOCKET_FILTER 
,BPF_PROG_TYPE_KPROBE 
,BPF_PROG_TYPE_SCHED_CLS 
,BPF_PROG_TYPE_SCHED_ACT 
,BPF_PROG_TYPE_TRACEPOINT 
,BPF_PROG_TYPE_XDP 
,BPF_PROG_TYPE_PERF_EVENT 
,BPF_PROG_TYPE_CGROUP_SKB 
,BPF_PROG_TYPE_CGROUP_SOCK 
,BPF_PROG_TYPE_LWT_IN 
,BPF_PROG_TYPE_LWT_OUT 
,BPF_PROG_TYPE_LWT_XMIT 
,BPF_PROG_TYPE_SOCK_OPS 
,BPF_PROG_TYPE_SK_SKB 
,BPF_PROG_TYPE_CGROUP_DEVICE 
,BPF_PROG_TYPE_SK_MSG 
,BPF_PROG_TYPE_RAW_TRACEPOINT 
,BPF_PROG_TYPE_CGROUP_SOCK_ADDR 
,BPF_PROG_TYPE_LWT_SEG6LOCAL 
,BPF_PROG_TYPE_LIRC_MODE2 
,BPF_PROG_TYPE_SK_REUSEPORT 
,BPF_PROG_TYPE_FLOW_DISSECTOR 
,BPF_PROG_TYPE_CGROUP_SYSCTL 
,BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE 
,BPF_PROG_TYPE_CGROUP_SOCKOPT 
,BPF_PROG_TYPE_TRACING 
,BPF_PROG_TYPE_STRUCT_OPS 
,BPF_PROG_TYPE_EXT 
,BPF_PROG_TYPE_LSM 
,BPF_PROG_TYPE_SK_LOOKUP 
,BPF_PROG_TYPE_SYSCALL 
,BPF_PROG_TYPE_NETFILTER 
,__MAX_BPF_PROG_TYPE 
};

enum  bpf_attach_type { BPF_CGROUP_INET_INGRESS 
,BPF_CGROUP_INET_EGRESS 
,BPF_CGROUP_INET_SOCK_CREATE 
,BPF_CGROUP_SOCK_OPS 
,BPF_SK_SKB_STREAM_PARSER 
,BPF_SK_SKB_STREAM_VERDICT 
,BPF_CGROUP_DEVICE 
,BPF_SK_MSG_VERDICT 
,BPF_CGROUP_INET4_BIND 
,BPF_CGROUP_INET6_BIND 
,BPF_CGROUP_INET4_CONNECT 
,BPF_CGROUP_INET6_CONNECT 
,BPF_CGROUP_INET4_POST_BIND 
,BPF_CGROUP_INET6_POST_BIND 
,BPF_CGROUP_UDP4_SENDMSG 
,BPF_CGROUP_UDP6_SENDMSG 
,BPF_LIRC_MODE2 
,BPF_FLOW_DISSECTOR 
,BPF_CGROUP_SYSCTL 
,BPF_CGROUP_UDP4_RECVMSG 
,BPF_CGROUP_UDP6_RECVMSG 
,BPF_CGROUP_GETSOCKOPT 
,BPF_CGROUP_SETSOCKOPT 
,BPF_TRACE_RAW_TP 
,BPF_TRACE_FENTRY 
,BPF_TRACE_FEXIT 
,BPF_MODIFY_RETURN 
,BPF_LSM_MAC 
,BPF_TRACE_ITER 
,BPF_CGROUP_INET4_GETPEERNAME 
,BPF_CGROUP_INET6_GETPEERNAME 
,BPF_CGROUP_INET4_GETSOCKNAME 
,BPF_CGROUP_INET6_GETSOCKNAME 
,BPF_XDP_DEVMAP 
,BPF_CGROUP_INET_SOCK_RELEASE 
,BPF_XDP_CPUMAP 
,BPF_SK_LOOKUP 
,BPF_XDP 
,BPF_SK_SKB_VERDICT 
,BPF_SK_REUSEPORT_SELECT 
,BPF_SK_REUSEPORT_SELECT_OR_MIGRATE 
,BPF_PERF_EVENT 
,BPF_TRACE_KPROBE_MULTI 
,BPF_LSM_CGROUP 
,BPF_STRUCT_OPS 
,BPF_NETFILTER 
,BPF_TCX_INGRESS 
,BPF_TCX_EGRESS 
,BPF_TRACE_UPROBE_MULTI 
,BPF_CGROUP_UNIX_CONNECT 
,BPF_CGROUP_UNIX_SENDMSG 
,BPF_CGROUP_UNIX_RECVMSG 
,BPF_CGROUP_UNIX_GETPEERNAME 
,BPF_CGROUP_UNIX_GETSOCKNAME 
,BPF_NETKIT_PRIMARY 
,BPF_NETKIT_PEER 
,BPF_TRACE_KPROBE_SESSION 
,BPF_TRACE_UPROBE_SESSION 
,__MAX_BPF_ATTACH_TYPE 
};

enum  bpf_link_type { BPF_LINK_TYPE_UNSPEC=(0),
BPF_LINK_TYPE_RAW_TRACEPOINT=(1),
BPF_LINK_TYPE_TRACING=(2),
BPF_LINK_TYPE_CGROUP=(3),
BPF_LINK_TYPE_ITER=(4),
BPF_LINK_TYPE_NETNS=(5),
BPF_LINK_TYPE_XDP=(6),
BPF_LINK_TYPE_PERF_EVENT=(7),
BPF_LINK_TYPE_KPROBE_MULTI=(8),
BPF_LINK_TYPE_STRUCT_OPS=(9),
BPF_LINK_TYPE_NETFILTER=(10),
BPF_LINK_TYPE_TCX=(11),
BPF_LINK_TYPE_UPROBE_MULTI=(12),
BPF_LINK_TYPE_NETKIT=(13),
BPF_LINK_TYPE_SOCKMAP=(14),
__MAX_BPF_LINK_TYPE 
};

enum  bpf_perf_event_type { BPF_PERF_EVENT_UNSPEC=(0),
BPF_PERF_EVENT_UPROBE=(1),
BPF_PERF_EVENT_URETPROBE=(2),
BPF_PERF_EVENT_KPROBE=(3),
BPF_PERF_EVENT_KRETPROBE=(4),
BPF_PERF_EVENT_TRACEPOINT=(5),
BPF_PERF_EVENT_EVENT=(6)
};

enum { BPF_F_KPROBE_MULTI_RETURN=((1U<<0))
};

enum { BPF_F_UPROBE_MULTI_RETURN=((1U<<0))
};

enum  bpf_addr_space_cast { BPF_ADDR_SPACE_CAST=(1)
};

enum { BPF_ANY=(0),
BPF_NOEXIST=(1),
BPF_EXIST=(2),
BPF_F_LOCK=(4)
};

enum { BPF_F_NO_PREALLOC=((1U<<0)),
BPF_F_NO_COMMON_LRU=((1U<<1)),
BPF_F_NUMA_NODE=((1U<<2)),
BPF_F_RDONLY=((1U<<3)),
BPF_F_WRONLY=((1U<<4)),
BPF_F_STACK_BUILD_ID=((1U<<5)),
BPF_F_ZERO_SEED=((1U<<6)),
BPF_F_RDONLY_PROG=((1U<<7)),
BPF_F_WRONLY_PROG=((1U<<8)),
BPF_F_CLONE=((1U<<9)),
BPF_F_MMAPABLE=((1U<<10)),
BPF_F_PRESERVE_ELEMS=((1U<<11)),
BPF_F_INNER_MAP=((1U<<12)),
BPF_F_LINK=((1U<<13)),
BPF_F_PATH_FD=((1U<<14)),
BPF_F_VTYPE_BTF_OBJ_FD=((1U<<15)),
BPF_F_TOKEN_FD=((1U<<16)),
BPF_F_SEGV_ON_FAULT=((1U<<17)),
BPF_F_NO_USER_CONV=((1U<<18))
};

enum  bpf_stats_type { BPF_STATS_RUN_TIME=(0)
};

enum  bpf_stack_build_id_status { BPF_STACK_BUILD_ID_EMPTY=(0),
BPF_STACK_BUILD_ID_VALID=(1),
BPF_STACK_BUILD_ID_IP=(2)
};

union anonymous_typeZ18
{
unsigned long  long  offset  ;
unsigned long  long  ip  ;
};

union anonymous_typeZ19
{
unsigned long  long  offset  ;
unsigned long  long  ip  ;
};

struct bpf_stack_build_id
{
    int  status  ;
    unsigned char build_id[20];
    union {
        unsigned long  long  offset  ;
        unsigned long  long  ip  ;
    };
};

enum { BPF_STREAM_STDOUT=(1),
BPF_STREAM_STDERR=(2)
};

struct anonymous_typeX20
{
    unsigned int  map_type  ;
    unsigned int  key_size  ;
    unsigned int  value_size  ;
    unsigned int  max_entries  ;
    unsigned int  map_flags  ;
    unsigned int  inner_map_fd  ;
    unsigned int  numa_node  ;
    char map_name[16U];
    unsigned int  map_ifindex  ;
    unsigned int  btf_fd  ;
    unsigned int  btf_key_type_id  ;
    unsigned int  btf_value_type_id  ;
    unsigned int  btf_vmlinux_value_type_id  ;
    unsigned long  long  map_extra  ;
    int  value_type_btf_obj_fd  ;
    int  map_token_fd  ;
};

union anonymous_typeZ22
{
unsigned long  long  value  __attribute__((aligned(8))) ;
unsigned long  long  next_key  __attribute__((aligned(8))) ;
};

union anonymous_typeZ23
{
unsigned long  long  value  __attribute__((aligned(8))) ;
unsigned long  long  next_key  __attribute__((aligned(8))) ;
};

struct anonymous_typeX21
{
    unsigned int  map_fd  ;
    unsigned long  long  key  __attribute__((aligned(8)))	;
    union {
        unsigned long  long  value  __attribute__((aligned(8))) ;
        unsigned long  long  next_key  __attribute__((aligned(8))) ;
    };
    unsigned long  long  flags  ;
};

struct anonymous_typeX24
{
    unsigned long  long  in_batch  __attribute__((aligned(8)))	;
    unsigned long  long  out_batch  __attribute__((aligned(8)))	;
    unsigned long  long  keys  __attribute__((aligned(8)))	;
    unsigned long  long  values  __attribute__((aligned(8)))	;
    unsigned int  count  ;
    unsigned int  map_fd  ;
    unsigned long  long  elem_flags  ;
    unsigned long  long  flags  ;
};

union anonymous_typeZ26
{
unsigned int  attach_prog_fd  ;
unsigned int  attach_btf_obj_fd  ;
};

union anonymous_typeZ27
{
unsigned int  attach_prog_fd  ;
unsigned int  attach_btf_obj_fd  ;
};

struct anonymous_typeX25
{
    unsigned int  prog_type  ;
    unsigned int  insn_cnt  ;
    unsigned long  long  insns  __attribute__((aligned(8)))	;
    unsigned long  long  license  __attribute__((aligned(8)))	;
    unsigned int  log_level  ;
    unsigned int  log_size  ;
    unsigned long  long  log_buf  __attribute__((aligned(8)))	;
    unsigned int  kern_version  ;
    unsigned int  prog_flags  ;
    char prog_name[16U];
    unsigned int  prog_ifindex  ;
    unsigned int  expected_attach_type  ;
    unsigned int  prog_btf_fd  ;
    unsigned int  func_info_rec_size  ;
    unsigned long  long  func_info  __attribute__((aligned(8)))	;
    unsigned int  func_info_cnt  ;
    unsigned int  line_info_rec_size  ;
    unsigned long  long  line_info  __attribute__((aligned(8)))	;
    unsigned int  line_info_cnt  ;
    unsigned int  attach_btf_id  ;
    union {
        unsigned int  attach_prog_fd  ;
        unsigned int  attach_btf_obj_fd  ;
    };
    unsigned int  core_relo_cnt  ;
    unsigned long  long  fd_array  __attribute__((aligned(8)))	;
    unsigned long  long  core_relos  __attribute__((aligned(8)))	;
    unsigned int  core_relo_rec_size  ;
    unsigned int  log_true_size  ;
    int  prog_token_fd  ;
    unsigned int  fd_array_cnt  ;
};

struct anonymous_typeX28
{
    unsigned long  long  pathname  __attribute__((aligned(8)))	;
    unsigned int  bpf_fd  ;
    unsigned int  file_flags  ;
    int  path_fd  ;
};

union anonymous_typeZ30
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ31
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ32
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ33
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX29
{
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_bpf_fd  ;
    unsigned int  attach_type  ;
    unsigned int  attach_flags  ;
    unsigned int  replace_bpf_fd  ;
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX34
{
    unsigned int  prog_fd  ;
    unsigned int  retval  ;
    unsigned int  data_size_in  ;
    unsigned int  data_size_out  ;
    unsigned long  long  data_in  __attribute__((aligned(8)))	;
    unsigned long  long  data_out  __attribute__((aligned(8)))	;
    unsigned int  repeat  ;
    unsigned int  duration  ;
    unsigned int  ctx_size_in  ;
    unsigned int  ctx_size_out  ;
    unsigned long  long  ctx_in  __attribute__((aligned(8)))	;
    unsigned long  long  ctx_out  __attribute__((aligned(8)))	;
    unsigned int  flags  ;
    unsigned int  cpu  ;
    unsigned int  batch_size  ;
};

union anonymous_typeZ36
{
unsigned int  start_id  ;
unsigned int  prog_id  ;
unsigned int  map_id  ;
unsigned int  btf_id  ;
unsigned int  link_id  ;
};

union anonymous_typeZ37
{
unsigned int  start_id  ;
unsigned int  prog_id  ;
unsigned int  map_id  ;
unsigned int  btf_id  ;
unsigned int  link_id  ;
};

struct anonymous_typeX35
{
    union {
        unsigned int  start_id  ;
        unsigned int  prog_id  ;
        unsigned int  map_id  ;
        unsigned int  btf_id  ;
        unsigned int  link_id  ;
    };
    unsigned int  next_id  ;
    unsigned int  open_flags  ;
    int  fd_by_id_token_fd  ;
};

struct anonymous_typeX38
{
    unsigned int  bpf_fd  ;
    unsigned int  info_len  ;
    unsigned long  long  info  __attribute__((aligned(8)))	;
};

union anonymous_typeZ40
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ41
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ42
{
unsigned int  prog_cnt  ;
unsigned int  count  ;
};

union anonymous_typeZ43
{
unsigned int  prog_cnt  ;
unsigned int  count  ;
};

struct anonymous_typeX39
{
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_type  ;
    unsigned int  query_flags  ;
    unsigned int  attach_flags  ;
    unsigned long  long  prog_ids  __attribute__((aligned(8)))	;
    union {
        unsigned int  prog_cnt  ;
        unsigned int  count  ;
    };
    unsigned int  :32  ;
    unsigned long  long  prog_attach_flags  __attribute__((aligned(8)))	;
    unsigned long  long  link_ids  __attribute__((aligned(8)))	;
    unsigned long  long  link_attach_flags  __attribute__((aligned(8)))	;
    unsigned long  long  revision  ;
};

struct anonymous_typeX44
{
    unsigned long  long  name  ;
    unsigned int  prog_fd  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  __attribute__((aligned(8)))	;
};

struct anonymous_typeX45
{
    unsigned long  long  btf  __attribute__((aligned(8)))	;
    unsigned long  long  btf_log_buf  __attribute__((aligned(8)))	;
    unsigned int  btf_size  ;
    unsigned int  btf_log_size  ;
    unsigned int  btf_log_level  ;
    unsigned int  btf_log_true_size  ;
    unsigned int  btf_flags  ;
    int  btf_token_fd  ;
};

struct anonymous_typeX46
{
    unsigned int  pid  ;
    unsigned int  fd  ;
    unsigned int  flags  ;
    unsigned int  buf_len  ;
    unsigned long  long  buf  __attribute__((aligned(8)))	;
    unsigned int  prog_id  ;
    unsigned int  fd_type  ;
    unsigned long  long  probe_offset  ;
    unsigned long  long  probe_addr  ;
};

union anonymous_typeZ48
{
unsigned int  prog_fd  ;
unsigned int  map_fd  ;
};

union anonymous_typeZ49
{
unsigned int  prog_fd  ;
unsigned int  map_fd  ;
};

union anonymous_typeZ50
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ51
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

struct anonymous_typeX53
{
    unsigned long  long  iter_info  __attribute__((aligned(8)))	;
    unsigned int  iter_info_len  ;
};

struct anonymous_typeX54
{
    unsigned long  long  bpf_cookie  ;
};

struct anonymous_typeX55
{
    unsigned int  flags  ;
    unsigned int  cnt  ;
    unsigned long  long  syms  __attribute__((aligned(8)))	;
    unsigned long  long  addrs  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
};

struct anonymous_typeX56
{
    unsigned int  target_btf_id  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX57
{
    unsigned int  pf  ;
    unsigned int  hooknum  ;
    int  priority  ;
    unsigned int  flags  ;
};

union anonymous_typeZ59
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ60
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX58
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX61
{
    unsigned long  long  path  __attribute__((aligned(8)))	;
    unsigned long  long  offsets  __attribute__((aligned(8)))	;
    unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
    unsigned int  cnt  ;
    unsigned int  flags  ;
    unsigned int  pid  ;
};

union anonymous_typeZ63
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ64
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX62
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ66
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ67
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX65
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ52
{
unsigned int  target_btf_id  ;
    struct {
        unsigned long  long  iter_info  __attribute__((aligned(8)))	;
        unsigned int  iter_info_len  ;
    };
    struct {
        unsigned long  long  bpf_cookie  ;
    } perf_event;
    struct {
        unsigned int  flags  ;
        unsigned int  cnt  ;
        unsigned long  long  syms  __attribute__((aligned(8)))	;
        unsigned long  long  addrs  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
    } kprobe_multi;
    struct {
        unsigned int  target_btf_id  ;
        unsigned long  long  cookie  ;
    } tracing;
    struct {
        unsigned int  pf  ;
        unsigned int  hooknum  ;
        int  priority  ;
        unsigned int  flags  ;
    } netfilter;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } tcx;
    struct {
        unsigned long  long  path  __attribute__((aligned(8)))	;
        unsigned long  long  offsets  __attribute__((aligned(8)))	;
        unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
        unsigned int  cnt  ;
        unsigned int  flags  ;
        unsigned int  pid  ;
    } uprobe_multi;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } netkit;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } cgroup;
};

struct anonymous_typeX69
{
    unsigned long  long  iter_info  __attribute__((aligned(8)))	;
    unsigned int  iter_info_len  ;
};

struct anonymous_typeX70
{
    unsigned long  long  bpf_cookie  ;
};

struct anonymous_typeX71
{
    unsigned int  flags  ;
    unsigned int  cnt  ;
    unsigned long  long  syms  __attribute__((aligned(8)))	;
    unsigned long  long  addrs  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
};

struct anonymous_typeX72
{
    unsigned int  target_btf_id  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX73
{
    unsigned int  pf  ;
    unsigned int  hooknum  ;
    int  priority  ;
    unsigned int  flags  ;
};

union anonymous_typeZ75
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ76
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX74
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX77
{
    unsigned long  long  path  __attribute__((aligned(8)))	;
    unsigned long  long  offsets  __attribute__((aligned(8)))	;
    unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
    unsigned int  cnt  ;
    unsigned int  flags  ;
    unsigned int  pid  ;
};

union anonymous_typeZ79
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ80
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX78
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ82
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ83
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX81
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ68
{
unsigned int  target_btf_id  ;
    struct {
        unsigned long  long  iter_info  __attribute__((aligned(8)))	;
        unsigned int  iter_info_len  ;
    };
    struct {
        unsigned long  long  bpf_cookie  ;
    } perf_event;
    struct {
        unsigned int  flags  ;
        unsigned int  cnt  ;
        unsigned long  long  syms  __attribute__((aligned(8)))	;
        unsigned long  long  addrs  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
    } kprobe_multi;
    struct {
        unsigned int  target_btf_id  ;
        unsigned long  long  cookie  ;
    } tracing;
    struct {
        unsigned int  pf  ;
        unsigned int  hooknum  ;
        int  priority  ;
        unsigned int  flags  ;
    } netfilter;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } tcx;
    struct {
        unsigned long  long  path  __attribute__((aligned(8)))	;
        unsigned long  long  offsets  __attribute__((aligned(8)))	;
        unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
        unsigned int  cnt  ;
        unsigned int  flags  ;
        unsigned int  pid  ;
    } uprobe_multi;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } netkit;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } cgroup;
};

struct anonymous_typeX47
{
    union {
        unsigned int  prog_fd  ;
        unsigned int  map_fd  ;
    };
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_type  ;
    unsigned int  flags  ;
    union {
        unsigned int  target_btf_id  ;
        struct {
            unsigned long  long  iter_info  __attribute__((aligned(8)))	;
            unsigned int  iter_info_len  ;
        };
        struct {
            unsigned long  long  bpf_cookie  ;
        } perf_event;
        struct {
            unsigned int  flags  ;
            unsigned int  cnt  ;
            unsigned long  long  syms  __attribute__((aligned(8)))	;
            unsigned long  long  addrs  __attribute__((aligned(8)))	;
            unsigned long  long  cookies  __attribute__((aligned(8)))	;
        } kprobe_multi;
        struct {
            unsigned int  target_btf_id  ;
            unsigned long  long  cookie  ;
        } tracing;
        struct {
            unsigned int  pf  ;
            unsigned int  hooknum  ;
            int  priority  ;
            unsigned int  flags  ;
        } netfilter;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } tcx;
        struct {
            unsigned long  long  path  __attribute__((aligned(8)))	;
            unsigned long  long  offsets  __attribute__((aligned(8)))	;
            unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
            unsigned long  long  cookies  __attribute__((aligned(8)))	;
            unsigned int  cnt  ;
            unsigned int  flags  ;
            unsigned int  pid  ;
        } uprobe_multi;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } netkit;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } cgroup;
    };
};

union anonymous_typeZ85
{
unsigned int  new_prog_fd  ;
unsigned int  new_map_fd  ;
};

union anonymous_typeZ86
{
unsigned int  new_prog_fd  ;
unsigned int  new_map_fd  ;
};

union anonymous_typeZ87
{
unsigned int  old_prog_fd  ;
unsigned int  old_map_fd  ;
};

union anonymous_typeZ88
{
unsigned int  old_prog_fd  ;
unsigned int  old_map_fd  ;
};

struct anonymous_typeX84
{
    unsigned int  link_fd  ;
    union {
        unsigned int  new_prog_fd  ;
        unsigned int  new_map_fd  ;
    };
    unsigned int  flags  ;
    union {
        unsigned int  old_prog_fd  ;
        unsigned int  old_map_fd  ;
    };
};

struct anonymous_typeX89
{
    unsigned int  link_fd  ;
};

struct anonymous_typeX90
{
    unsigned int  type  ;
};

struct anonymous_typeX91
{
    unsigned int  link_fd  ;
    unsigned int  flags  ;
};

struct anonymous_typeX92
{
    unsigned int  prog_fd  ;
    unsigned int  map_fd  ;
    unsigned int  flags  ;
};

struct anonymous_typeX93
{
    unsigned int  flags  ;
    unsigned int  bpffs_fd  ;
};

struct anonymous_typeX94
{
    unsigned long  long  stream_buf  __attribute__((aligned(8)))	;
    unsigned int  stream_buf_len  ;
    unsigned int  stream_id  ;
    unsigned int  prog_fd  ;
};

union bpf_attr
{
    struct {
        unsigned int  map_type  ;
        unsigned int  key_size  ;
        unsigned int  value_size  ;
        unsigned int  max_entries  ;
        unsigned int  map_flags  ;
        unsigned int  inner_map_fd  ;
        unsigned int  numa_node  ;
        char map_name[16U];
        unsigned int  map_ifindex  ;
        unsigned int  btf_fd  ;
        unsigned int  btf_key_type_id  ;
        unsigned int  btf_value_type_id  ;
        unsigned int  btf_vmlinux_value_type_id  ;
        unsigned long  long  map_extra  ;
        int  value_type_btf_obj_fd  ;
        int  map_token_fd  ;
    };
    struct {
        unsigned int  map_fd  ;
        unsigned long  long  key  __attribute__((aligned(8)))	;
        union {
            unsigned long  long  value  __attribute__((aligned(8))) ;
            unsigned long  long  next_key  __attribute__((aligned(8))) ;
        };
        unsigned long  long  flags  ;
    };
    struct {
        unsigned long  long  in_batch  __attribute__((aligned(8)))	;
        unsigned long  long  out_batch  __attribute__((aligned(8)))	;
        unsigned long  long  keys  __attribute__((aligned(8)))	;
        unsigned long  long  values  __attribute__((aligned(8)))	;
        unsigned int  count  ;
        unsigned int  map_fd  ;
        unsigned long  long  elem_flags  ;
        unsigned long  long  flags  ;
    } batch;
    struct {
        unsigned int  prog_type  ;
        unsigned int  insn_cnt  ;
        unsigned long  long  insns  __attribute__((aligned(8)))	;
        unsigned long  long  license  __attribute__((aligned(8)))	;
        unsigned int  log_level  ;
        unsigned int  log_size  ;
        unsigned long  long  log_buf  __attribute__((aligned(8)))	;
        unsigned int  kern_version  ;
        unsigned int  prog_flags  ;
        char prog_name[16U];
        unsigned int  prog_ifindex  ;
        unsigned int  expected_attach_type  ;
        unsigned int  prog_btf_fd  ;
        unsigned int  func_info_rec_size  ;
        unsigned long  long  func_info  __attribute__((aligned(8)))	;
        unsigned int  func_info_cnt  ;
        unsigned int  line_info_rec_size  ;
        unsigned long  long  line_info  __attribute__((aligned(8)))	;
        unsigned int  line_info_cnt  ;
        unsigned int  attach_btf_id  ;
        union {
            unsigned int  attach_prog_fd  ;
            unsigned int  attach_btf_obj_fd  ;
        };
        unsigned int  core_relo_cnt  ;
        unsigned long  long  fd_array  __attribute__((aligned(8)))	;
        unsigned long  long  core_relos  __attribute__((aligned(8)))	;
        unsigned int  core_relo_rec_size  ;
        unsigned int  log_true_size  ;
        int  prog_token_fd  ;
        unsigned int  fd_array_cnt  ;
    };
    struct {
        unsigned long  long  pathname  __attribute__((aligned(8)))	;
        unsigned int  bpf_fd  ;
        unsigned int  file_flags  ;
        int  path_fd  ;
    };
    struct {
        union {
            unsigned int  target_fd  ;
            unsigned int  target_ifindex  ;
        };
        unsigned int  attach_bpf_fd  ;
        unsigned int  attach_type  ;
        unsigned int  attach_flags  ;
        unsigned int  replace_bpf_fd  ;
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    };
    struct {
        unsigned int  prog_fd  ;
        unsigned int  retval  ;
        unsigned int  data_size_in  ;
        unsigned int  data_size_out  ;
        unsigned long  long  data_in  __attribute__((aligned(8)))	;
        unsigned long  long  data_out  __attribute__((aligned(8)))	;
        unsigned int  repeat  ;
        unsigned int  duration  ;
        unsigned int  ctx_size_in  ;
        unsigned int  ctx_size_out  ;
        unsigned long  long  ctx_in  __attribute__((aligned(8)))	;
        unsigned long  long  ctx_out  __attribute__((aligned(8)))	;
        unsigned int  flags  ;
        unsigned int  cpu  ;
        unsigned int  batch_size  ;
    } test;
    struct {
        union {
            unsigned int  start_id  ;
            unsigned int  prog_id  ;
            unsigned int  map_id  ;
            unsigned int  btf_id  ;
            unsigned int  link_id  ;
        };
        unsigned int  next_id  ;
        unsigned int  open_flags  ;
        int  fd_by_id_token_fd  ;
    };
    struct {
        unsigned int  bpf_fd  ;
        unsigned int  info_len  ;
        unsigned long  long  info  __attribute__((aligned(8)))	;
    } info;
    struct {
        union {
            unsigned int  target_fd  ;
            unsigned int  target_ifindex  ;
        };
        unsigned int  attach_type  ;
        unsigned int  query_flags  ;
        unsigned int  attach_flags  ;
        unsigned long  long  prog_ids  __attribute__((aligned(8)))	;
        union {
            unsigned int  prog_cnt  ;
            unsigned int  count  ;
        };
        unsigned int  :32  ;
        unsigned long  long  prog_attach_flags  __attribute__((aligned(8)))	;
        unsigned long  long  link_ids  __attribute__((aligned(8)))	;
        unsigned long  long  link_attach_flags  __attribute__((aligned(8)))	;
        unsigned long  long  revision  ;
    } query;
    struct {
        unsigned long  long  name  ;
        unsigned int  prog_fd  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  __attribute__((aligned(8)))	;
    } raw_tracepoint;
    struct {
        unsigned long  long  btf  __attribute__((aligned(8)))	;
        unsigned long  long  btf_log_buf  __attribute__((aligned(8)))	;
        unsigned int  btf_size  ;
        unsigned int  btf_log_size  ;
        unsigned int  btf_log_level  ;
        unsigned int  btf_log_true_size  ;
        unsigned int  btf_flags  ;
        int  btf_token_fd  ;
    };
    struct {
        unsigned int  pid  ;
        unsigned int  fd  ;
        unsigned int  flags  ;
        unsigned int  buf_len  ;
        unsigned long  long  buf  __attribute__((aligned(8)))	;
        unsigned int  prog_id  ;
        unsigned int  fd_type  ;
        unsigned long  long  probe_offset  ;
        unsigned long  long  probe_addr  ;
    } task_fd_query;
    struct {
        union {
            unsigned int  prog_fd  ;
            unsigned int  map_fd  ;
        };
        union {
            unsigned int  target_fd  ;
            unsigned int  target_ifindex  ;
        };
        unsigned int  attach_type  ;
        unsigned int  flags  ;
        union {
            unsigned int  target_btf_id  ;
            struct {
                unsigned long  long  iter_info  __attribute__((aligned(8)))	;
                unsigned int  iter_info_len  ;
            };
            struct {
                unsigned long  long  bpf_cookie  ;
            } perf_event;
            struct {
                unsigned int  flags  ;
                unsigned int  cnt  ;
                unsigned long  long  syms  __attribute__((aligned(8)))	;
                unsigned long  long  addrs  __attribute__((aligned(8)))	;
                unsigned long  long  cookies  __attribute__((aligned(8)))	;
            } kprobe_multi;
            struct {
                unsigned int  target_btf_id  ;
                unsigned long  long  cookie  ;
            } tracing;
            struct {
                unsigned int  pf  ;
                unsigned int  hooknum  ;
                int  priority  ;
                unsigned int  flags  ;
            } netfilter;
            struct {
                union {
                    unsigned int  relative_fd  ;
                    unsigned int  relative_id  ;
                };
                unsigned long  long  expected_revision  ;
            } tcx;
            struct {
                unsigned long  long  path  __attribute__((aligned(8)))	;
                unsigned long  long  offsets  __attribute__((aligned(8)))	;
                unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
                unsigned long  long  cookies  __attribute__((aligned(8)))	;
                unsigned int  cnt  ;
                unsigned int  flags  ;
                unsigned int  pid  ;
            } uprobe_multi;
            struct {
                union {
                    unsigned int  relative_fd  ;
                    unsigned int  relative_id  ;
                };
                unsigned long  long  expected_revision  ;
            } netkit;
            struct {
                union {
                    unsigned int  relative_fd  ;
                    unsigned int  relative_id  ;
                };
                unsigned long  long  expected_revision  ;
            } cgroup;
        };
    } link_create;
    struct {
        unsigned int  link_fd  ;
        union {
            unsigned int  new_prog_fd  ;
            unsigned int  new_map_fd  ;
        };
        unsigned int  flags  ;
        union {
            unsigned int  old_prog_fd  ;
            unsigned int  old_map_fd  ;
        };
    } link_update;
    struct {
        unsigned int  link_fd  ;
    } link_detach;
    struct {
        unsigned int  type  ;
    } enable_stats;
    struct {
        unsigned int  link_fd  ;
        unsigned int  flags  ;
    } iter_create;
    struct {
        unsigned int  prog_fd  ;
        unsigned int  map_fd  ;
        unsigned int  flags  ;
    } prog_bind_map;
    struct {
        unsigned int  flags  ;
        unsigned int  bpffs_fd  ;
    } token_create;
    struct {
        unsigned long  long  stream_buf  __attribute__((aligned(8)))	;
        unsigned int  stream_buf_len  ;
        unsigned int  stream_id  ;
        unsigned int  prog_fd  ;
    } prog_stream_read;
} __attribute__((aligned(8)));

struct anonymous_typeX95
{
    unsigned int  map_type  ;
    unsigned int  key_size  ;
    unsigned int  value_size  ;
    unsigned int  max_entries  ;
    unsigned int  map_flags  ;
    unsigned int  inner_map_fd  ;
    unsigned int  numa_node  ;
    char map_name[16U];
    unsigned int  map_ifindex  ;
    unsigned int  btf_fd  ;
    unsigned int  btf_key_type_id  ;
    unsigned int  btf_value_type_id  ;
    unsigned int  btf_vmlinux_value_type_id  ;
    unsigned long  long  map_extra  ;
    int  value_type_btf_obj_fd  ;
    int  map_token_fd  ;
};

union anonymous_typeZ97
{
unsigned long  long  value  __attribute__((aligned(8))) ;
unsigned long  long  next_key  __attribute__((aligned(8))) ;
};

union anonymous_typeZ98
{
unsigned long  long  value  __attribute__((aligned(8))) ;
unsigned long  long  next_key  __attribute__((aligned(8))) ;
};

struct anonymous_typeX96
{
    unsigned int  map_fd  ;
    unsigned long  long  key  __attribute__((aligned(8)))	;
    union {
        unsigned long  long  value  __attribute__((aligned(8))) ;
        unsigned long  long  next_key  __attribute__((aligned(8))) ;
    };
    unsigned long  long  flags  ;
};

struct anonymous_typeX99
{
    unsigned long  long  in_batch  __attribute__((aligned(8)))	;
    unsigned long  long  out_batch  __attribute__((aligned(8)))	;
    unsigned long  long  keys  __attribute__((aligned(8)))	;
    unsigned long  long  values  __attribute__((aligned(8)))	;
    unsigned int  count  ;
    unsigned int  map_fd  ;
    unsigned long  long  elem_flags  ;
    unsigned long  long  flags  ;
};

union anonymous_typeZ101
{
unsigned int  attach_prog_fd  ;
unsigned int  attach_btf_obj_fd  ;
};

union anonymous_typeZ102
{
unsigned int  attach_prog_fd  ;
unsigned int  attach_btf_obj_fd  ;
};

struct anonymous_typeX100
{
    unsigned int  prog_type  ;
    unsigned int  insn_cnt  ;
    unsigned long  long  insns  __attribute__((aligned(8)))	;
    unsigned long  long  license  __attribute__((aligned(8)))	;
    unsigned int  log_level  ;
    unsigned int  log_size  ;
    unsigned long  long  log_buf  __attribute__((aligned(8)))	;
    unsigned int  kern_version  ;
    unsigned int  prog_flags  ;
    char prog_name[16U];
    unsigned int  prog_ifindex  ;
    unsigned int  expected_attach_type  ;
    unsigned int  prog_btf_fd  ;
    unsigned int  func_info_rec_size  ;
    unsigned long  long  func_info  __attribute__((aligned(8)))	;
    unsigned int  func_info_cnt  ;
    unsigned int  line_info_rec_size  ;
    unsigned long  long  line_info  __attribute__((aligned(8)))	;
    unsigned int  line_info_cnt  ;
    unsigned int  attach_btf_id  ;
    union {
        unsigned int  attach_prog_fd  ;
        unsigned int  attach_btf_obj_fd  ;
    };
    unsigned int  core_relo_cnt  ;
    unsigned long  long  fd_array  __attribute__((aligned(8)))	;
    unsigned long  long  core_relos  __attribute__((aligned(8)))	;
    unsigned int  core_relo_rec_size  ;
    unsigned int  log_true_size  ;
    int  prog_token_fd  ;
    unsigned int  fd_array_cnt  ;
};

struct anonymous_typeX103
{
    unsigned long  long  pathname  __attribute__((aligned(8)))	;
    unsigned int  bpf_fd  ;
    unsigned int  file_flags  ;
    int  path_fd  ;
};

union anonymous_typeZ105
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ106
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ107
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ108
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX104
{
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_bpf_fd  ;
    unsigned int  attach_type  ;
    unsigned int  attach_flags  ;
    unsigned int  replace_bpf_fd  ;
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX109
{
    unsigned int  prog_fd  ;
    unsigned int  retval  ;
    unsigned int  data_size_in  ;
    unsigned int  data_size_out  ;
    unsigned long  long  data_in  __attribute__((aligned(8)))	;
    unsigned long  long  data_out  __attribute__((aligned(8)))	;
    unsigned int  repeat  ;
    unsigned int  duration  ;
    unsigned int  ctx_size_in  ;
    unsigned int  ctx_size_out  ;
    unsigned long  long  ctx_in  __attribute__((aligned(8)))	;
    unsigned long  long  ctx_out  __attribute__((aligned(8)))	;
    unsigned int  flags  ;
    unsigned int  cpu  ;
    unsigned int  batch_size  ;
};

union anonymous_typeZ111
{
unsigned int  start_id  ;
unsigned int  prog_id  ;
unsigned int  map_id  ;
unsigned int  btf_id  ;
unsigned int  link_id  ;
};

union anonymous_typeZ112
{
unsigned int  start_id  ;
unsigned int  prog_id  ;
unsigned int  map_id  ;
unsigned int  btf_id  ;
unsigned int  link_id  ;
};

struct anonymous_typeX110
{
    union {
        unsigned int  start_id  ;
        unsigned int  prog_id  ;
        unsigned int  map_id  ;
        unsigned int  btf_id  ;
        unsigned int  link_id  ;
    };
    unsigned int  next_id  ;
    unsigned int  open_flags  ;
    int  fd_by_id_token_fd  ;
};

struct anonymous_typeX113
{
    unsigned int  bpf_fd  ;
    unsigned int  info_len  ;
    unsigned long  long  info  __attribute__((aligned(8)))	;
};

union anonymous_typeZ115
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ116
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ117
{
unsigned int  prog_cnt  ;
unsigned int  count  ;
};

union anonymous_typeZ118
{
unsigned int  prog_cnt  ;
unsigned int  count  ;
};

struct anonymous_typeX114
{
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_type  ;
    unsigned int  query_flags  ;
    unsigned int  attach_flags  ;
    unsigned long  long  prog_ids  __attribute__((aligned(8)))	;
    union {
        unsigned int  prog_cnt  ;
        unsigned int  count  ;
    };
    unsigned int  :32  ;
    unsigned long  long  prog_attach_flags  __attribute__((aligned(8)))	;
    unsigned long  long  link_ids  __attribute__((aligned(8)))	;
    unsigned long  long  link_attach_flags  __attribute__((aligned(8)))	;
    unsigned long  long  revision  ;
};

struct anonymous_typeX119
{
    unsigned long  long  name  ;
    unsigned int  prog_fd  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  __attribute__((aligned(8)))	;
};

struct anonymous_typeX120
{
    unsigned long  long  btf  __attribute__((aligned(8)))	;
    unsigned long  long  btf_log_buf  __attribute__((aligned(8)))	;
    unsigned int  btf_size  ;
    unsigned int  btf_log_size  ;
    unsigned int  btf_log_level  ;
    unsigned int  btf_log_true_size  ;
    unsigned int  btf_flags  ;
    int  btf_token_fd  ;
};

struct anonymous_typeX121
{
    unsigned int  pid  ;
    unsigned int  fd  ;
    unsigned int  flags  ;
    unsigned int  buf_len  ;
    unsigned long  long  buf  __attribute__((aligned(8)))	;
    unsigned int  prog_id  ;
    unsigned int  fd_type  ;
    unsigned long  long  probe_offset  ;
    unsigned long  long  probe_addr  ;
};

union anonymous_typeZ123
{
unsigned int  prog_fd  ;
unsigned int  map_fd  ;
};

union anonymous_typeZ124
{
unsigned int  prog_fd  ;
unsigned int  map_fd  ;
};

union anonymous_typeZ125
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ126
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

struct anonymous_typeX128
{
    unsigned long  long  iter_info  __attribute__((aligned(8)))	;
    unsigned int  iter_info_len  ;
};

struct anonymous_typeX129
{
    unsigned long  long  bpf_cookie  ;
};

struct anonymous_typeX130
{
    unsigned int  flags  ;
    unsigned int  cnt  ;
    unsigned long  long  syms  __attribute__((aligned(8)))	;
    unsigned long  long  addrs  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
};

struct anonymous_typeX131
{
    unsigned int  target_btf_id  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX132
{
    unsigned int  pf  ;
    unsigned int  hooknum  ;
    int  priority  ;
    unsigned int  flags  ;
};

union anonymous_typeZ134
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ135
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX133
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX136
{
    unsigned long  long  path  __attribute__((aligned(8)))	;
    unsigned long  long  offsets  __attribute__((aligned(8)))	;
    unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
    unsigned int  cnt  ;
    unsigned int  flags  ;
    unsigned int  pid  ;
};

union anonymous_typeZ138
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ139
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX137
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ141
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ142
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX140
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ127
{
unsigned int  target_btf_id  ;
    struct {
        unsigned long  long  iter_info  __attribute__((aligned(8)))	;
        unsigned int  iter_info_len  ;
    };
    struct {
        unsigned long  long  bpf_cookie  ;
    } perf_event;
    struct {
        unsigned int  flags  ;
        unsigned int  cnt  ;
        unsigned long  long  syms  __attribute__((aligned(8)))	;
        unsigned long  long  addrs  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
    } kprobe_multi;
    struct {
        unsigned int  target_btf_id  ;
        unsigned long  long  cookie  ;
    } tracing;
    struct {
        unsigned int  pf  ;
        unsigned int  hooknum  ;
        int  priority  ;
        unsigned int  flags  ;
    } netfilter;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } tcx;
    struct {
        unsigned long  long  path  __attribute__((aligned(8)))	;
        unsigned long  long  offsets  __attribute__((aligned(8)))	;
        unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
        unsigned int  cnt  ;
        unsigned int  flags  ;
        unsigned int  pid  ;
    } uprobe_multi;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } netkit;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } cgroup;
};

struct anonymous_typeX144
{
    unsigned long  long  iter_info  __attribute__((aligned(8)))	;
    unsigned int  iter_info_len  ;
};

struct anonymous_typeX145
{
    unsigned long  long  bpf_cookie  ;
};

struct anonymous_typeX146
{
    unsigned int  flags  ;
    unsigned int  cnt  ;
    unsigned long  long  syms  __attribute__((aligned(8)))	;
    unsigned long  long  addrs  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
};

struct anonymous_typeX147
{
    unsigned int  target_btf_id  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX148
{
    unsigned int  pf  ;
    unsigned int  hooknum  ;
    int  priority  ;
    unsigned int  flags  ;
};

union anonymous_typeZ150
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ151
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX149
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX152
{
    unsigned long  long  path  __attribute__((aligned(8)))	;
    unsigned long  long  offsets  __attribute__((aligned(8)))	;
    unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
    unsigned int  cnt  ;
    unsigned int  flags  ;
    unsigned int  pid  ;
};

union anonymous_typeZ154
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ155
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX153
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ157
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ158
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX156
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ143
{
unsigned int  target_btf_id  ;
    struct {
        unsigned long  long  iter_info  __attribute__((aligned(8)))	;
        unsigned int  iter_info_len  ;
    };
    struct {
        unsigned long  long  bpf_cookie  ;
    } perf_event;
    struct {
        unsigned int  flags  ;
        unsigned int  cnt  ;
        unsigned long  long  syms  __attribute__((aligned(8)))	;
        unsigned long  long  addrs  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
    } kprobe_multi;
    struct {
        unsigned int  target_btf_id  ;
        unsigned long  long  cookie  ;
    } tracing;
    struct {
        unsigned int  pf  ;
        unsigned int  hooknum  ;
        int  priority  ;
        unsigned int  flags  ;
    } netfilter;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } tcx;
    struct {
        unsigned long  long  path  __attribute__((aligned(8)))	;
        unsigned long  long  offsets  __attribute__((aligned(8)))	;
        unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
        unsigned int  cnt  ;
        unsigned int  flags  ;
        unsigned int  pid  ;
    } uprobe_multi;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } netkit;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } cgroup;
};

struct anonymous_typeX122
{
    union {
        unsigned int  prog_fd  ;
        unsigned int  map_fd  ;
    };
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_type  ;
    unsigned int  flags  ;
    union {
        unsigned int  target_btf_id  ;
        struct {
            unsigned long  long  iter_info  __attribute__((aligned(8)))	;
            unsigned int  iter_info_len  ;
        };
        struct {
            unsigned long  long  bpf_cookie  ;
        } perf_event;
        struct {
            unsigned int  flags  ;
            unsigned int  cnt  ;
            unsigned long  long  syms  __attribute__((aligned(8)))	;
            unsigned long  long  addrs  __attribute__((aligned(8)))	;
            unsigned long  long  cookies  __attribute__((aligned(8)))	;
        } kprobe_multi;
        struct {
            unsigned int  target_btf_id  ;
            unsigned long  long  cookie  ;
        } tracing;
        struct {
            unsigned int  pf  ;
            unsigned int  hooknum  ;
            int  priority  ;
            unsigned int  flags  ;
        } netfilter;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } tcx;
        struct {
            unsigned long  long  path  __attribute__((aligned(8)))	;
            unsigned long  long  offsets  __attribute__((aligned(8)))	;
            unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
            unsigned long  long  cookies  __attribute__((aligned(8)))	;
            unsigned int  cnt  ;
            unsigned int  flags  ;
            unsigned int  pid  ;
        } uprobe_multi;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } netkit;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } cgroup;
    };
};

union anonymous_typeZ160
{
unsigned int  new_prog_fd  ;
unsigned int  new_map_fd  ;
};

union anonymous_typeZ161
{
unsigned int  new_prog_fd  ;
unsigned int  new_map_fd  ;
};

union anonymous_typeZ162
{
unsigned int  old_prog_fd  ;
unsigned int  old_map_fd  ;
};

union anonymous_typeZ163
{
unsigned int  old_prog_fd  ;
unsigned int  old_map_fd  ;
};

struct anonymous_typeX159
{
    unsigned int  link_fd  ;
    union {
        unsigned int  new_prog_fd  ;
        unsigned int  new_map_fd  ;
    };
    unsigned int  flags  ;
    union {
        unsigned int  old_prog_fd  ;
        unsigned int  old_map_fd  ;
    };
};

struct anonymous_typeX164
{
    unsigned int  link_fd  ;
};

struct anonymous_typeX165
{
    unsigned int  type  ;
};

struct anonymous_typeX166
{
    unsigned int  link_fd  ;
    unsigned int  flags  ;
};

struct anonymous_typeX167
{
    unsigned int  prog_fd  ;
    unsigned int  map_fd  ;
    unsigned int  flags  ;
};

struct anonymous_typeX168
{
    unsigned int  flags  ;
    unsigned int  bpffs_fd  ;
};

struct anonymous_typeX169
{
    unsigned long  long  stream_buf  __attribute__((aligned(8)))	;
    unsigned int  stream_buf_len  ;
    unsigned int  stream_id  ;
    unsigned int  prog_fd  ;
};

struct anonymous_typeX170
{
    unsigned int  map_type  ;
    unsigned int  key_size  ;
    unsigned int  value_size  ;
    unsigned int  max_entries  ;
    unsigned int  map_flags  ;
    unsigned int  inner_map_fd  ;
    unsigned int  numa_node  ;
    char map_name[16U];
    unsigned int  map_ifindex  ;
    unsigned int  btf_fd  ;
    unsigned int  btf_key_type_id  ;
    unsigned int  btf_value_type_id  ;
    unsigned int  btf_vmlinux_value_type_id  ;
    unsigned long  long  map_extra  ;
    int  value_type_btf_obj_fd  ;
    int  map_token_fd  ;
};

union anonymous_typeZ172
{
unsigned long  long  value  __attribute__((aligned(8))) ;
unsigned long  long  next_key  __attribute__((aligned(8))) ;
};

union anonymous_typeZ173
{
unsigned long  long  value  __attribute__((aligned(8))) ;
unsigned long  long  next_key  __attribute__((aligned(8))) ;
};

struct anonymous_typeX171
{
    unsigned int  map_fd  ;
    unsigned long  long  key  __attribute__((aligned(8)))	;
    union {
        unsigned long  long  value  __attribute__((aligned(8))) ;
        unsigned long  long  next_key  __attribute__((aligned(8))) ;
    };
    unsigned long  long  flags  ;
};

struct anonymous_typeX174
{
    unsigned long  long  in_batch  __attribute__((aligned(8)))	;
    unsigned long  long  out_batch  __attribute__((aligned(8)))	;
    unsigned long  long  keys  __attribute__((aligned(8)))	;
    unsigned long  long  values  __attribute__((aligned(8)))	;
    unsigned int  count  ;
    unsigned int  map_fd  ;
    unsigned long  long  elem_flags  ;
    unsigned long  long  flags  ;
};

union anonymous_typeZ176
{
unsigned int  attach_prog_fd  ;
unsigned int  attach_btf_obj_fd  ;
};

union anonymous_typeZ177
{
unsigned int  attach_prog_fd  ;
unsigned int  attach_btf_obj_fd  ;
};

struct anonymous_typeX175
{
    unsigned int  prog_type  ;
    unsigned int  insn_cnt  ;
    unsigned long  long  insns  __attribute__((aligned(8)))	;
    unsigned long  long  license  __attribute__((aligned(8)))	;
    unsigned int  log_level  ;
    unsigned int  log_size  ;
    unsigned long  long  log_buf  __attribute__((aligned(8)))	;
    unsigned int  kern_version  ;
    unsigned int  prog_flags  ;
    char prog_name[16U];
    unsigned int  prog_ifindex  ;
    unsigned int  expected_attach_type  ;
    unsigned int  prog_btf_fd  ;
    unsigned int  func_info_rec_size  ;
    unsigned long  long  func_info  __attribute__((aligned(8)))	;
    unsigned int  func_info_cnt  ;
    unsigned int  line_info_rec_size  ;
    unsigned long  long  line_info  __attribute__((aligned(8)))	;
    unsigned int  line_info_cnt  ;
    unsigned int  attach_btf_id  ;
    union {
        unsigned int  attach_prog_fd  ;
        unsigned int  attach_btf_obj_fd  ;
    };
    unsigned int  core_relo_cnt  ;
    unsigned long  long  fd_array  __attribute__((aligned(8)))	;
    unsigned long  long  core_relos  __attribute__((aligned(8)))	;
    unsigned int  core_relo_rec_size  ;
    unsigned int  log_true_size  ;
    int  prog_token_fd  ;
    unsigned int  fd_array_cnt  ;
};

struct anonymous_typeX178
{
    unsigned long  long  pathname  __attribute__((aligned(8)))	;
    unsigned int  bpf_fd  ;
    unsigned int  file_flags  ;
    int  path_fd  ;
};

union anonymous_typeZ180
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ181
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ182
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ183
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX179
{
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_bpf_fd  ;
    unsigned int  attach_type  ;
    unsigned int  attach_flags  ;
    unsigned int  replace_bpf_fd  ;
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX184
{
    unsigned int  prog_fd  ;
    unsigned int  retval  ;
    unsigned int  data_size_in  ;
    unsigned int  data_size_out  ;
    unsigned long  long  data_in  __attribute__((aligned(8)))	;
    unsigned long  long  data_out  __attribute__((aligned(8)))	;
    unsigned int  repeat  ;
    unsigned int  duration  ;
    unsigned int  ctx_size_in  ;
    unsigned int  ctx_size_out  ;
    unsigned long  long  ctx_in  __attribute__((aligned(8)))	;
    unsigned long  long  ctx_out  __attribute__((aligned(8)))	;
    unsigned int  flags  ;
    unsigned int  cpu  ;
    unsigned int  batch_size  ;
};

union anonymous_typeZ186
{
unsigned int  start_id  ;
unsigned int  prog_id  ;
unsigned int  map_id  ;
unsigned int  btf_id  ;
unsigned int  link_id  ;
};

union anonymous_typeZ187
{
unsigned int  start_id  ;
unsigned int  prog_id  ;
unsigned int  map_id  ;
unsigned int  btf_id  ;
unsigned int  link_id  ;
};

struct anonymous_typeX185
{
    union {
        unsigned int  start_id  ;
        unsigned int  prog_id  ;
        unsigned int  map_id  ;
        unsigned int  btf_id  ;
        unsigned int  link_id  ;
    };
    unsigned int  next_id  ;
    unsigned int  open_flags  ;
    int  fd_by_id_token_fd  ;
};

struct anonymous_typeX188
{
    unsigned int  bpf_fd  ;
    unsigned int  info_len  ;
    unsigned long  long  info  __attribute__((aligned(8)))	;
};

union anonymous_typeZ190
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ191
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ192
{
unsigned int  prog_cnt  ;
unsigned int  count  ;
};

union anonymous_typeZ193
{
unsigned int  prog_cnt  ;
unsigned int  count  ;
};

struct anonymous_typeX189
{
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_type  ;
    unsigned int  query_flags  ;
    unsigned int  attach_flags  ;
    unsigned long  long  prog_ids  __attribute__((aligned(8)))	;
    union {
        unsigned int  prog_cnt  ;
        unsigned int  count  ;
    };
    unsigned int  :32  ;
    unsigned long  long  prog_attach_flags  __attribute__((aligned(8)))	;
    unsigned long  long  link_ids  __attribute__((aligned(8)))	;
    unsigned long  long  link_attach_flags  __attribute__((aligned(8)))	;
    unsigned long  long  revision  ;
};

struct anonymous_typeX194
{
    unsigned long  long  name  ;
    unsigned int  prog_fd  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  __attribute__((aligned(8)))	;
};

struct anonymous_typeX195
{
    unsigned long  long  btf  __attribute__((aligned(8)))	;
    unsigned long  long  btf_log_buf  __attribute__((aligned(8)))	;
    unsigned int  btf_size  ;
    unsigned int  btf_log_size  ;
    unsigned int  btf_log_level  ;
    unsigned int  btf_log_true_size  ;
    unsigned int  btf_flags  ;
    int  btf_token_fd  ;
};

struct anonymous_typeX196
{
    unsigned int  pid  ;
    unsigned int  fd  ;
    unsigned int  flags  ;
    unsigned int  buf_len  ;
    unsigned long  long  buf  __attribute__((aligned(8)))	;
    unsigned int  prog_id  ;
    unsigned int  fd_type  ;
    unsigned long  long  probe_offset  ;
    unsigned long  long  probe_addr  ;
};

union anonymous_typeZ198
{
unsigned int  prog_fd  ;
unsigned int  map_fd  ;
};

union anonymous_typeZ199
{
unsigned int  prog_fd  ;
unsigned int  map_fd  ;
};

union anonymous_typeZ200
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ201
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

struct anonymous_typeX203
{
    unsigned long  long  iter_info  __attribute__((aligned(8)))	;
    unsigned int  iter_info_len  ;
};

struct anonymous_typeX204
{
    unsigned long  long  bpf_cookie  ;
};

struct anonymous_typeX205
{
    unsigned int  flags  ;
    unsigned int  cnt  ;
    unsigned long  long  syms  __attribute__((aligned(8)))	;
    unsigned long  long  addrs  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
};

struct anonymous_typeX206
{
    unsigned int  target_btf_id  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX207
{
    unsigned int  pf  ;
    unsigned int  hooknum  ;
    int  priority  ;
    unsigned int  flags  ;
};

union anonymous_typeZ209
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ210
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX208
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX211
{
    unsigned long  long  path  __attribute__((aligned(8)))	;
    unsigned long  long  offsets  __attribute__((aligned(8)))	;
    unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
    unsigned int  cnt  ;
    unsigned int  flags  ;
    unsigned int  pid  ;
};

union anonymous_typeZ213
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ214
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX212
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ216
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ217
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX215
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ202
{
unsigned int  target_btf_id  ;
    struct {
        unsigned long  long  iter_info  __attribute__((aligned(8)))	;
        unsigned int  iter_info_len  ;
    };
    struct {
        unsigned long  long  bpf_cookie  ;
    } perf_event;
    struct {
        unsigned int  flags  ;
        unsigned int  cnt  ;
        unsigned long  long  syms  __attribute__((aligned(8)))	;
        unsigned long  long  addrs  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
    } kprobe_multi;
    struct {
        unsigned int  target_btf_id  ;
        unsigned long  long  cookie  ;
    } tracing;
    struct {
        unsigned int  pf  ;
        unsigned int  hooknum  ;
        int  priority  ;
        unsigned int  flags  ;
    } netfilter;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } tcx;
    struct {
        unsigned long  long  path  __attribute__((aligned(8)))	;
        unsigned long  long  offsets  __attribute__((aligned(8)))	;
        unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
        unsigned int  cnt  ;
        unsigned int  flags  ;
        unsigned int  pid  ;
    } uprobe_multi;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } netkit;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } cgroup;
};

struct anonymous_typeX219
{
    unsigned long  long  iter_info  __attribute__((aligned(8)))	;
    unsigned int  iter_info_len  ;
};

struct anonymous_typeX220
{
    unsigned long  long  bpf_cookie  ;
};

struct anonymous_typeX221
{
    unsigned int  flags  ;
    unsigned int  cnt  ;
    unsigned long  long  syms  __attribute__((aligned(8)))	;
    unsigned long  long  addrs  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
};

struct anonymous_typeX222
{
    unsigned int  target_btf_id  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX223
{
    unsigned int  pf  ;
    unsigned int  hooknum  ;
    int  priority  ;
    unsigned int  flags  ;
};

union anonymous_typeZ225
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ226
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX224
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX227
{
    unsigned long  long  path  __attribute__((aligned(8)))	;
    unsigned long  long  offsets  __attribute__((aligned(8)))	;
    unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
    unsigned int  cnt  ;
    unsigned int  flags  ;
    unsigned int  pid  ;
};

union anonymous_typeZ229
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ230
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX228
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ232
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ233
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX231
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ218
{
unsigned int  target_btf_id  ;
    struct {
        unsigned long  long  iter_info  __attribute__((aligned(8)))	;
        unsigned int  iter_info_len  ;
    };
    struct {
        unsigned long  long  bpf_cookie  ;
    } perf_event;
    struct {
        unsigned int  flags  ;
        unsigned int  cnt  ;
        unsigned long  long  syms  __attribute__((aligned(8)))	;
        unsigned long  long  addrs  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
    } kprobe_multi;
    struct {
        unsigned int  target_btf_id  ;
        unsigned long  long  cookie  ;
    } tracing;
    struct {
        unsigned int  pf  ;
        unsigned int  hooknum  ;
        int  priority  ;
        unsigned int  flags  ;
    } netfilter;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } tcx;
    struct {
        unsigned long  long  path  __attribute__((aligned(8)))	;
        unsigned long  long  offsets  __attribute__((aligned(8)))	;
        unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
        unsigned int  cnt  ;
        unsigned int  flags  ;
        unsigned int  pid  ;
    } uprobe_multi;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } netkit;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } cgroup;
};

struct anonymous_typeX197
{
    union {
        unsigned int  prog_fd  ;
        unsigned int  map_fd  ;
    };
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_type  ;
    unsigned int  flags  ;
    union {
        unsigned int  target_btf_id  ;
        struct {
            unsigned long  long  iter_info  __attribute__((aligned(8)))	;
            unsigned int  iter_info_len  ;
        };
        struct {
            unsigned long  long  bpf_cookie  ;
        } perf_event;
        struct {
            unsigned int  flags  ;
            unsigned int  cnt  ;
            unsigned long  long  syms  __attribute__((aligned(8)))	;
            unsigned long  long  addrs  __attribute__((aligned(8)))	;
            unsigned long  long  cookies  __attribute__((aligned(8)))	;
        } kprobe_multi;
        struct {
            unsigned int  target_btf_id  ;
            unsigned long  long  cookie  ;
        } tracing;
        struct {
            unsigned int  pf  ;
            unsigned int  hooknum  ;
            int  priority  ;
            unsigned int  flags  ;
        } netfilter;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } tcx;
        struct {
            unsigned long  long  path  __attribute__((aligned(8)))	;
            unsigned long  long  offsets  __attribute__((aligned(8)))	;
            unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
            unsigned long  long  cookies  __attribute__((aligned(8)))	;
            unsigned int  cnt  ;
            unsigned int  flags  ;
            unsigned int  pid  ;
        } uprobe_multi;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } netkit;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } cgroup;
    };
};

union anonymous_typeZ235
{
unsigned int  new_prog_fd  ;
unsigned int  new_map_fd  ;
};

union anonymous_typeZ236
{
unsigned int  new_prog_fd  ;
unsigned int  new_map_fd  ;
};

union anonymous_typeZ237
{
unsigned int  old_prog_fd  ;
unsigned int  old_map_fd  ;
};

union anonymous_typeZ238
{
unsigned int  old_prog_fd  ;
unsigned int  old_map_fd  ;
};

struct anonymous_typeX234
{
    unsigned int  link_fd  ;
    union {
        unsigned int  new_prog_fd  ;
        unsigned int  new_map_fd  ;
    };
    unsigned int  flags  ;
    union {
        unsigned int  old_prog_fd  ;
        unsigned int  old_map_fd  ;
    };
};

struct anonymous_typeX239
{
    unsigned int  link_fd  ;
};

struct anonymous_typeX240
{
    unsigned int  type  ;
};

struct anonymous_typeX241
{
    unsigned int  link_fd  ;
    unsigned int  flags  ;
};

struct anonymous_typeX242
{
    unsigned int  prog_fd  ;
    unsigned int  map_fd  ;
    unsigned int  flags  ;
};

struct anonymous_typeX243
{
    unsigned int  flags  ;
    unsigned int  bpffs_fd  ;
};

struct anonymous_typeX244
{
    unsigned long  long  stream_buf  __attribute__((aligned(8)))	;
    unsigned int  stream_buf_len  ;
    unsigned int  stream_id  ;
    unsigned int  prog_fd  ;
};

struct anonymous_typeX245
{
    unsigned int  map_type  ;
    unsigned int  key_size  ;
    unsigned int  value_size  ;
    unsigned int  max_entries  ;
    unsigned int  map_flags  ;
    unsigned int  inner_map_fd  ;
    unsigned int  numa_node  ;
    char map_name[16U];
    unsigned int  map_ifindex  ;
    unsigned int  btf_fd  ;
    unsigned int  btf_key_type_id  ;
    unsigned int  btf_value_type_id  ;
    unsigned int  btf_vmlinux_value_type_id  ;
    unsigned long  long  map_extra  ;
    int  value_type_btf_obj_fd  ;
    int  map_token_fd  ;
};

union anonymous_typeZ247
{
unsigned long  long  value  __attribute__((aligned(8))) ;
unsigned long  long  next_key  __attribute__((aligned(8))) ;
};

union anonymous_typeZ248
{
unsigned long  long  value  __attribute__((aligned(8))) ;
unsigned long  long  next_key  __attribute__((aligned(8))) ;
};

struct anonymous_typeX246
{
    unsigned int  map_fd  ;
    unsigned long  long  key  __attribute__((aligned(8)))	;
    union {
        unsigned long  long  value  __attribute__((aligned(8))) ;
        unsigned long  long  next_key  __attribute__((aligned(8))) ;
    };
    unsigned long  long  flags  ;
};

struct anonymous_typeX249
{
    unsigned long  long  in_batch  __attribute__((aligned(8)))	;
    unsigned long  long  out_batch  __attribute__((aligned(8)))	;
    unsigned long  long  keys  __attribute__((aligned(8)))	;
    unsigned long  long  values  __attribute__((aligned(8)))	;
    unsigned int  count  ;
    unsigned int  map_fd  ;
    unsigned long  long  elem_flags  ;
    unsigned long  long  flags  ;
};

union anonymous_typeZ251
{
unsigned int  attach_prog_fd  ;
unsigned int  attach_btf_obj_fd  ;
};

union anonymous_typeZ252
{
unsigned int  attach_prog_fd  ;
unsigned int  attach_btf_obj_fd  ;
};

struct anonymous_typeX250
{
    unsigned int  prog_type  ;
    unsigned int  insn_cnt  ;
    unsigned long  long  insns  __attribute__((aligned(8)))	;
    unsigned long  long  license  __attribute__((aligned(8)))	;
    unsigned int  log_level  ;
    unsigned int  log_size  ;
    unsigned long  long  log_buf  __attribute__((aligned(8)))	;
    unsigned int  kern_version  ;
    unsigned int  prog_flags  ;
    char prog_name[16U];
    unsigned int  prog_ifindex  ;
    unsigned int  expected_attach_type  ;
    unsigned int  prog_btf_fd  ;
    unsigned int  func_info_rec_size  ;
    unsigned long  long  func_info  __attribute__((aligned(8)))	;
    unsigned int  func_info_cnt  ;
    unsigned int  line_info_rec_size  ;
    unsigned long  long  line_info  __attribute__((aligned(8)))	;
    unsigned int  line_info_cnt  ;
    unsigned int  attach_btf_id  ;
    union {
        unsigned int  attach_prog_fd  ;
        unsigned int  attach_btf_obj_fd  ;
    };
    unsigned int  core_relo_cnt  ;
    unsigned long  long  fd_array  __attribute__((aligned(8)))	;
    unsigned long  long  core_relos  __attribute__((aligned(8)))	;
    unsigned int  core_relo_rec_size  ;
    unsigned int  log_true_size  ;
    int  prog_token_fd  ;
    unsigned int  fd_array_cnt  ;
};

struct anonymous_typeX253
{
    unsigned long  long  pathname  __attribute__((aligned(8)))	;
    unsigned int  bpf_fd  ;
    unsigned int  file_flags  ;
    int  path_fd  ;
};

union anonymous_typeZ255
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ256
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ257
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ258
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX254
{
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_bpf_fd  ;
    unsigned int  attach_type  ;
    unsigned int  attach_flags  ;
    unsigned int  replace_bpf_fd  ;
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX259
{
    unsigned int  prog_fd  ;
    unsigned int  retval  ;
    unsigned int  data_size_in  ;
    unsigned int  data_size_out  ;
    unsigned long  long  data_in  __attribute__((aligned(8)))	;
    unsigned long  long  data_out  __attribute__((aligned(8)))	;
    unsigned int  repeat  ;
    unsigned int  duration  ;
    unsigned int  ctx_size_in  ;
    unsigned int  ctx_size_out  ;
    unsigned long  long  ctx_in  __attribute__((aligned(8)))	;
    unsigned long  long  ctx_out  __attribute__((aligned(8)))	;
    unsigned int  flags  ;
    unsigned int  cpu  ;
    unsigned int  batch_size  ;
};

union anonymous_typeZ261
{
unsigned int  start_id  ;
unsigned int  prog_id  ;
unsigned int  map_id  ;
unsigned int  btf_id  ;
unsigned int  link_id  ;
};

union anonymous_typeZ262
{
unsigned int  start_id  ;
unsigned int  prog_id  ;
unsigned int  map_id  ;
unsigned int  btf_id  ;
unsigned int  link_id  ;
};

struct anonymous_typeX260
{
    union {
        unsigned int  start_id  ;
        unsigned int  prog_id  ;
        unsigned int  map_id  ;
        unsigned int  btf_id  ;
        unsigned int  link_id  ;
    };
    unsigned int  next_id  ;
    unsigned int  open_flags  ;
    int  fd_by_id_token_fd  ;
};

struct anonymous_typeX263
{
    unsigned int  bpf_fd  ;
    unsigned int  info_len  ;
    unsigned long  long  info  __attribute__((aligned(8)))	;
};

union anonymous_typeZ265
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ266
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ267
{
unsigned int  prog_cnt  ;
unsigned int  count  ;
};

union anonymous_typeZ268
{
unsigned int  prog_cnt  ;
unsigned int  count  ;
};

struct anonymous_typeX264
{
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_type  ;
    unsigned int  query_flags  ;
    unsigned int  attach_flags  ;
    unsigned long  long  prog_ids  __attribute__((aligned(8)))	;
    union {
        unsigned int  prog_cnt  ;
        unsigned int  count  ;
    };
    unsigned int  :32  ;
    unsigned long  long  prog_attach_flags  __attribute__((aligned(8)))	;
    unsigned long  long  link_ids  __attribute__((aligned(8)))	;
    unsigned long  long  link_attach_flags  __attribute__((aligned(8)))	;
    unsigned long  long  revision  ;
};

struct anonymous_typeX269
{
    unsigned long  long  name  ;
    unsigned int  prog_fd  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  __attribute__((aligned(8)))	;
};

struct anonymous_typeX270
{
    unsigned long  long  btf  __attribute__((aligned(8)))	;
    unsigned long  long  btf_log_buf  __attribute__((aligned(8)))	;
    unsigned int  btf_size  ;
    unsigned int  btf_log_size  ;
    unsigned int  btf_log_level  ;
    unsigned int  btf_log_true_size  ;
    unsigned int  btf_flags  ;
    int  btf_token_fd  ;
};

struct anonymous_typeX271
{
    unsigned int  pid  ;
    unsigned int  fd  ;
    unsigned int  flags  ;
    unsigned int  buf_len  ;
    unsigned long  long  buf  __attribute__((aligned(8)))	;
    unsigned int  prog_id  ;
    unsigned int  fd_type  ;
    unsigned long  long  probe_offset  ;
    unsigned long  long  probe_addr  ;
};

union anonymous_typeZ273
{
unsigned int  prog_fd  ;
unsigned int  map_fd  ;
};

union anonymous_typeZ274
{
unsigned int  prog_fd  ;
unsigned int  map_fd  ;
};

union anonymous_typeZ275
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

union anonymous_typeZ276
{
unsigned int  target_fd  ;
unsigned int  target_ifindex  ;
};

struct anonymous_typeX278
{
    unsigned long  long  iter_info  __attribute__((aligned(8)))	;
    unsigned int  iter_info_len  ;
};

struct anonymous_typeX279
{
    unsigned long  long  bpf_cookie  ;
};

struct anonymous_typeX280
{
    unsigned int  flags  ;
    unsigned int  cnt  ;
    unsigned long  long  syms  __attribute__((aligned(8)))	;
    unsigned long  long  addrs  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
};

struct anonymous_typeX281
{
    unsigned int  target_btf_id  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX282
{
    unsigned int  pf  ;
    unsigned int  hooknum  ;
    int  priority  ;
    unsigned int  flags  ;
};

union anonymous_typeZ284
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ285
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX283
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX286
{
    unsigned long  long  path  __attribute__((aligned(8)))	;
    unsigned long  long  offsets  __attribute__((aligned(8)))	;
    unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
    unsigned int  cnt  ;
    unsigned int  flags  ;
    unsigned int  pid  ;
};

union anonymous_typeZ288
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ289
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX287
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ291
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ292
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX290
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ277
{
unsigned int  target_btf_id  ;
    struct {
        unsigned long  long  iter_info  __attribute__((aligned(8)))	;
        unsigned int  iter_info_len  ;
    };
    struct {
        unsigned long  long  bpf_cookie  ;
    } perf_event;
    struct {
        unsigned int  flags  ;
        unsigned int  cnt  ;
        unsigned long  long  syms  __attribute__((aligned(8)))	;
        unsigned long  long  addrs  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
    } kprobe_multi;
    struct {
        unsigned int  target_btf_id  ;
        unsigned long  long  cookie  ;
    } tracing;
    struct {
        unsigned int  pf  ;
        unsigned int  hooknum  ;
        int  priority  ;
        unsigned int  flags  ;
    } netfilter;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } tcx;
    struct {
        unsigned long  long  path  __attribute__((aligned(8)))	;
        unsigned long  long  offsets  __attribute__((aligned(8)))	;
        unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
        unsigned int  cnt  ;
        unsigned int  flags  ;
        unsigned int  pid  ;
    } uprobe_multi;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } netkit;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } cgroup;
};

struct anonymous_typeX294
{
    unsigned long  long  iter_info  __attribute__((aligned(8)))	;
    unsigned int  iter_info_len  ;
};

struct anonymous_typeX295
{
    unsigned long  long  bpf_cookie  ;
};

struct anonymous_typeX296
{
    unsigned int  flags  ;
    unsigned int  cnt  ;
    unsigned long  long  syms  __attribute__((aligned(8)))	;
    unsigned long  long  addrs  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
};

struct anonymous_typeX297
{
    unsigned int  target_btf_id  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX298
{
    unsigned int  pf  ;
    unsigned int  hooknum  ;
    int  priority  ;
    unsigned int  flags  ;
};

union anonymous_typeZ300
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ301
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX299
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

struct anonymous_typeX302
{
    unsigned long  long  path  __attribute__((aligned(8)))	;
    unsigned long  long  offsets  __attribute__((aligned(8)))	;
    unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
    unsigned long  long  cookies  __attribute__((aligned(8)))	;
    unsigned int  cnt  ;
    unsigned int  flags  ;
    unsigned int  pid  ;
};

union anonymous_typeZ304
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ305
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX303
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ307
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

union anonymous_typeZ308
{
unsigned int  relative_fd  ;
unsigned int  relative_id  ;
};

struct anonymous_typeX306
{
    union {
        unsigned int  relative_fd  ;
        unsigned int  relative_id  ;
    };
    unsigned long  long  expected_revision  ;
};

union anonymous_typeZ293
{
unsigned int  target_btf_id  ;
    struct {
        unsigned long  long  iter_info  __attribute__((aligned(8)))	;
        unsigned int  iter_info_len  ;
    };
    struct {
        unsigned long  long  bpf_cookie  ;
    } perf_event;
    struct {
        unsigned int  flags  ;
        unsigned int  cnt  ;
        unsigned long  long  syms  __attribute__((aligned(8)))	;
        unsigned long  long  addrs  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
    } kprobe_multi;
    struct {
        unsigned int  target_btf_id  ;
        unsigned long  long  cookie  ;
    } tracing;
    struct {
        unsigned int  pf  ;
        unsigned int  hooknum  ;
        int  priority  ;
        unsigned int  flags  ;
    } netfilter;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } tcx;
    struct {
        unsigned long  long  path  __attribute__((aligned(8)))	;
        unsigned long  long  offsets  __attribute__((aligned(8)))	;
        unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
        unsigned long  long  cookies  __attribute__((aligned(8)))	;
        unsigned int  cnt  ;
        unsigned int  flags  ;
        unsigned int  pid  ;
    } uprobe_multi;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } netkit;
    struct {
        union {
            unsigned int  relative_fd  ;
            unsigned int  relative_id  ;
        };
        unsigned long  long  expected_revision  ;
    } cgroup;
};

struct anonymous_typeX272
{
    union {
        unsigned int  prog_fd  ;
        unsigned int  map_fd  ;
    };
    union {
        unsigned int  target_fd  ;
        unsigned int  target_ifindex  ;
    };
    unsigned int  attach_type  ;
    unsigned int  flags  ;
    union {
        unsigned int  target_btf_id  ;
        struct {
            unsigned long  long  iter_info  __attribute__((aligned(8)))	;
            unsigned int  iter_info_len  ;
        };
        struct {
            unsigned long  long  bpf_cookie  ;
        } perf_event;
        struct {
            unsigned int  flags  ;
            unsigned int  cnt  ;
            unsigned long  long  syms  __attribute__((aligned(8)))	;
            unsigned long  long  addrs  __attribute__((aligned(8)))	;
            unsigned long  long  cookies  __attribute__((aligned(8)))	;
        } kprobe_multi;
        struct {
            unsigned int  target_btf_id  ;
            unsigned long  long  cookie  ;
        } tracing;
        struct {
            unsigned int  pf  ;
            unsigned int  hooknum  ;
            int  priority  ;
            unsigned int  flags  ;
        } netfilter;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } tcx;
        struct {
            unsigned long  long  path  __attribute__((aligned(8)))	;
            unsigned long  long  offsets  __attribute__((aligned(8)))	;
            unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8)))	;
            unsigned long  long  cookies  __attribute__((aligned(8)))	;
            unsigned int  cnt  ;
            unsigned int  flags  ;
            unsigned int  pid  ;
        } uprobe_multi;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } netkit;
        struct {
            union {
                unsigned int  relative_fd  ;
                unsigned int  relative_id  ;
            };
            unsigned long  long  expected_revision  ;
        } cgroup;
    };
};

union anonymous_typeZ310
{
unsigned int  new_prog_fd  ;
unsigned int  new_map_fd  ;
};

union anonymous_typeZ311
{
unsigned int  new_prog_fd  ;
unsigned int  new_map_fd  ;
};

union anonymous_typeZ312
{
unsigned int  old_prog_fd  ;
unsigned int  old_map_fd  ;
};

union anonymous_typeZ313
{
unsigned int  old_prog_fd  ;
unsigned int  old_map_fd  ;
};

struct anonymous_typeX309
{
    unsigned int  link_fd  ;
    union {
        unsigned int  new_prog_fd  ;
        unsigned int  new_map_fd  ;
    };
    unsigned int  flags  ;
    union {
        unsigned int  old_prog_fd  ;
        unsigned int  old_map_fd  ;
    };
};

struct anonymous_typeX314
{
    unsigned int  link_fd  ;
};

struct anonymous_typeX315
{
    unsigned int  type  ;
};

struct anonymous_typeX316
{
    unsigned int  link_fd  ;
    unsigned int  flags  ;
};

struct anonymous_typeX317
{
    unsigned int  prog_fd  ;
    unsigned int  map_fd  ;
    unsigned int  flags  ;
};

struct anonymous_typeX318
{
    unsigned int  flags  ;
    unsigned int  bpffs_fd  ;
};

struct anonymous_typeX319
{
    unsigned long  long  stream_buf  __attribute__((aligned(8)))	;
    unsigned int  stream_buf_len  ;
    unsigned int  stream_id  ;
    unsigned int  prog_fd  ;
};

enum  bpf_func_id { BPF_FUNC_unspec=(0),
BPF_FUNC_map_lookup_elem=(1),
BPF_FUNC_map_update_elem=(2),
BPF_FUNC_map_delete_elem=(3),
BPF_FUNC_probe_read=(4),
BPF_FUNC_ktime_get_ns=(5),
BPF_FUNC_trace_printk=(6),
BPF_FUNC_get_prandom_u32=(7),
BPF_FUNC_get_smp_processor_id=(8),
BPF_FUNC_skb_store_bytes=(9),
BPF_FUNC_l3_csum_replace=(10),
BPF_FUNC_l4_csum_replace=(11),
BPF_FUNC_tail_call=(12),
BPF_FUNC_clone_redirect=(13),
BPF_FUNC_get_current_pid_tgid=(14),
BPF_FUNC_get_current_uid_gid=(15),
BPF_FUNC_get_current_comm=(16),
BPF_FUNC_get_cgroup_classid=(17),
BPF_FUNC_skb_vlan_push=(18),
BPF_FUNC_skb_vlan_pop=(19),
BPF_FUNC_skb_get_tunnel_key=(20),
BPF_FUNC_skb_set_tunnel_key=(21),
BPF_FUNC_perf_event_read=(22),
BPF_FUNC_redirect=(23),
BPF_FUNC_get_route_realm=(24),
BPF_FUNC_perf_event_output=(25),
BPF_FUNC_skb_load_bytes=(26),
BPF_FUNC_get_stackid=(27),
BPF_FUNC_csum_diff=(28),
BPF_FUNC_skb_get_tunnel_opt=(29),
BPF_FUNC_skb_set_tunnel_opt=(30),
BPF_FUNC_skb_change_proto=(31),
BPF_FUNC_skb_change_type=(32),
BPF_FUNC_skb_under_cgroup=(33),
BPF_FUNC_get_hash_recalc=(34),
BPF_FUNC_get_current_task=(35),
BPF_FUNC_probe_write_user=(36),
BPF_FUNC_current_task_under_cgroup=(37),
BPF_FUNC_skb_change_tail=(38),
BPF_FUNC_skb_pull_data=(39),
BPF_FUNC_csum_update=(40),
BPF_FUNC_set_hash_invalid=(41),
BPF_FUNC_get_numa_node_id=(42),
BPF_FUNC_skb_change_head=(43),
BPF_FUNC_xdp_adjust_head=(44),
BPF_FUNC_probe_read_str=(45),
BPF_FUNC_get_socket_cookie=(46),
BPF_FUNC_get_socket_uid=(47),
BPF_FUNC_set_hash=(48),
BPF_FUNC_setsockopt=(49),
BPF_FUNC_skb_adjust_room=(50),
BPF_FUNC_redirect_map=(51),
BPF_FUNC_sk_redirect_map=(52),
BPF_FUNC_sock_map_update=(53),
BPF_FUNC_xdp_adjust_meta=(54),
BPF_FUNC_perf_event_read_value=(55),
BPF_FUNC_perf_prog_read_value=(56),
BPF_FUNC_getsockopt=(57),
BPF_FUNC_override_return=(58),
BPF_FUNC_sock_ops_cb_flags_set=(59),
BPF_FUNC_msg_redirect_map=(60),
BPF_FUNC_msg_apply_bytes=(61),
BPF_FUNC_msg_cork_bytes=(62),
BPF_FUNC_msg_pull_data=(63),
BPF_FUNC_bind=(64),
BPF_FUNC_xdp_adjust_tail=(65),
BPF_FUNC_skb_get_xfrm_state=(66),
BPF_FUNC_get_stack=(67),
BPF_FUNC_skb_load_bytes_relative=(68),
BPF_FUNC_fib_lookup=(69),
BPF_FUNC_sock_hash_update=(70),
BPF_FUNC_msg_redirect_hash=(71),
BPF_FUNC_sk_redirect_hash=(72),
BPF_FUNC_lwt_push_encap=(73),
BPF_FUNC_lwt_seg6_store_bytes=(74),
BPF_FUNC_lwt_seg6_adjust_srh=(75),
BPF_FUNC_lwt_seg6_action=(76),
BPF_FUNC_rc_repeat=(77),
BPF_FUNC_rc_keydown=(78),
BPF_FUNC_skb_cgroup_id=(79),
BPF_FUNC_get_current_cgroup_id=(80),
BPF_FUNC_get_local_storage=(81),
BPF_FUNC_sk_select_reuseport=(82),
BPF_FUNC_skb_ancestor_cgroup_id=(83),
BPF_FUNC_sk_lookup_tcp=(84),
BPF_FUNC_sk_lookup_udp=(85),
BPF_FUNC_sk_release=(86),
BPF_FUNC_map_push_elem=(87),
BPF_FUNC_map_pop_elem=(88),
BPF_FUNC_map_peek_elem=(89),
BPF_FUNC_msg_push_data=(90),
BPF_FUNC_msg_pop_data=(91),
BPF_FUNC_rc_pointer_rel=(92),
BPF_FUNC_spin_lock=(93),
BPF_FUNC_spin_unlock=(94),
BPF_FUNC_sk_fullsock=(95),
BPF_FUNC_tcp_sock=(96),
BPF_FUNC_skb_ecn_set_ce=(97),
BPF_FUNC_get_listener_sock=(98),
BPF_FUNC_skc_lookup_tcp=(99),
BPF_FUNC_tcp_check_syncookie=(100),
BPF_FUNC_sysctl_get_name=(101),
BPF_FUNC_sysctl_get_current_value=(102),
BPF_FUNC_sysctl_get_new_value=(103),
BPF_FUNC_sysctl_set_new_value=(104),
BPF_FUNC_strtol=(105),
BPF_FUNC_strtoul=(106),
BPF_FUNC_sk_storage_get=(107),
BPF_FUNC_sk_storage_delete=(108),
BPF_FUNC_send_signal=(109),
BPF_FUNC_tcp_gen_syncookie=(110),
BPF_FUNC_skb_output=(111),
BPF_FUNC_probe_read_user=(112),
BPF_FUNC_probe_read_kernel=(113),
BPF_FUNC_probe_read_user_str=(114),
BPF_FUNC_probe_read_kernel_str=(115),
BPF_FUNC_tcp_send_ack=(116),
BPF_FUNC_send_signal_thread=(117),
BPF_FUNC_jiffies64=(118),
BPF_FUNC_read_branch_records=(119),
BPF_FUNC_get_ns_current_pid_tgid=(120),
BPF_FUNC_xdp_output=(121),
BPF_FUNC_get_netns_cookie=(122),
BPF_FUNC_get_current_ancestor_cgroup_id=(123),
BPF_FUNC_sk_assign=(124),
BPF_FUNC_ktime_get_boot_ns=(125),
BPF_FUNC_seq_printf=(126),
BPF_FUNC_seq_write=(127),
BPF_FUNC_sk_cgroup_id=(128),
BPF_FUNC_sk_ancestor_cgroup_id=(129),
BPF_FUNC_ringbuf_output=(130),
BPF_FUNC_ringbuf_reserve=(131),
BPF_FUNC_ringbuf_submit=(132),
BPF_FUNC_ringbuf_discard=(133),
BPF_FUNC_ringbuf_query=(134),
BPF_FUNC_csum_level=(135),
BPF_FUNC_skc_to_tcp6_sock=(136),
BPF_FUNC_skc_to_tcp_sock=(137),
BPF_FUNC_skc_to_tcp_timewait_sock=(138),
BPF_FUNC_skc_to_tcp_request_sock=(139),
BPF_FUNC_skc_to_udp6_sock=(140),
BPF_FUNC_get_task_stack=(141),
BPF_FUNC_load_hdr_opt=(142),
BPF_FUNC_store_hdr_opt=(143),
BPF_FUNC_reserve_hdr_opt=(144),
BPF_FUNC_inode_storage_get=(145),
BPF_FUNC_inode_storage_delete=(146),
BPF_FUNC_d_path=(147),
BPF_FUNC_copy_from_user=(148),
BPF_FUNC_snprintf_btf=(149),
BPF_FUNC_seq_printf_btf=(150),
BPF_FUNC_skb_cgroup_classid=(151),
BPF_FUNC_redirect_neigh=(152),
BPF_FUNC_per_cpu_ptr=(153),
BPF_FUNC_this_cpu_ptr=(154),
BPF_FUNC_redirect_peer=(155),
BPF_FUNC_task_storage_get=(156),
BPF_FUNC_task_storage_delete=(157),
BPF_FUNC_get_current_task_btf=(158),
BPF_FUNC_bprm_opts_set=(159),
BPF_FUNC_ktime_get_coarse_ns=(160),
BPF_FUNC_ima_inode_hash=(161),
BPF_FUNC_sock_from_file=(162),
BPF_FUNC_check_mtu=(163),
BPF_FUNC_for_each_map_elem=(164),
BPF_FUNC_snprintf=(165),
BPF_FUNC_sys_bpf=(166),
BPF_FUNC_btf_find_by_name_kind=(167),
BPF_FUNC_sys_close=(168),
BPF_FUNC_timer_init=(169),
BPF_FUNC_timer_set_callback=(170),
BPF_FUNC_timer_start=(171),
BPF_FUNC_timer_cancel=(172),
BPF_FUNC_get_func_ip=(173),
BPF_FUNC_get_attach_cookie=(174),
BPF_FUNC_task_pt_regs=(175),
BPF_FUNC_get_branch_snapshot=(176),
BPF_FUNC_trace_vprintk=(177),
BPF_FUNC_skc_to_unix_sock=(178),
BPF_FUNC_kallsyms_lookup_name=(179),
BPF_FUNC_find_vma=(180),
BPF_FUNC_loop=(181),
BPF_FUNC_strncmp=(182),
BPF_FUNC_get_func_arg=(183),
BPF_FUNC_get_func_ret=(184),
BPF_FUNC_get_func_arg_cnt=(185),
BPF_FUNC_get_retval=(186),
BPF_FUNC_set_retval=(187),
BPF_FUNC_xdp_get_buff_len=(188),
BPF_FUNC_xdp_load_bytes=(189),
BPF_FUNC_xdp_store_bytes=(190),
BPF_FUNC_copy_from_user_task=(191),
BPF_FUNC_skb_set_tstamp=(192),
BPF_FUNC_ima_file_hash=(193),
BPF_FUNC_kptr_xchg=(194),
BPF_FUNC_map_lookup_percpu_elem=(195),
BPF_FUNC_skc_to_mptcp_sock=(196),
BPF_FUNC_dynptr_from_mem=(197),
BPF_FUNC_ringbuf_reserve_dynptr=(198),
BPF_FUNC_ringbuf_submit_dynptr=(199),
BPF_FUNC_ringbuf_discard_dynptr=(200),
BPF_FUNC_dynptr_read=(201),
BPF_FUNC_dynptr_write=(202),
BPF_FUNC_dynptr_data=(203),
BPF_FUNC_tcp_raw_gen_syncookie_ipv4=(204),
BPF_FUNC_tcp_raw_gen_syncookie_ipv6=(205),
BPF_FUNC_tcp_raw_check_syncookie_ipv4=(206),
BPF_FUNC_tcp_raw_check_syncookie_ipv6=(207),
BPF_FUNC_ktime_get_tai_ns=(208),
BPF_FUNC_user_ringbuf_drain=(209),
BPF_FUNC_cgrp_storage_get=(210),
BPF_FUNC_cgrp_storage_delete=(211),
__BPF_FUNC_MAX_ID 
};

enum { BPF_F_RECOMPUTE_CSUM=((1ULL<<0)),
BPF_F_INVALIDATE_HASH=((1ULL<<1))
};

enum { BPF_F_HDR_FIELD_MASK=(0xfULL)
};

enum { BPF_F_PSEUDO_HDR=((1ULL<<4)),
BPF_F_MARK_MANGLED_0=((1ULL<<5)),
BPF_F_MARK_ENFORCE=((1ULL<<6)),
BPF_F_IPV6=((1ULL<<7))
};

enum { BPF_F_TUNINFO_IPV6=((1ULL<<0))
};

enum { BPF_F_SKIP_FIELD_MASK=(0xffULL),
BPF_F_USER_STACK=((1ULL<<8)),
BPF_F_FAST_STACK_CMP=((1ULL<<9)),
BPF_F_REUSE_STACKID=((1ULL<<10)),
BPF_F_USER_BUILD_ID=((1ULL<<11))
};

enum { BPF_F_ZERO_CSUM_TX=((1ULL<<1)),
BPF_F_DONT_FRAGMENT=((1ULL<<2)),
BPF_F_SEQ_NUMBER=((1ULL<<3)),
BPF_F_NO_TUNNEL_KEY=((1ULL<<4))
};

enum { BPF_F_TUNINFO_FLAGS=((1ULL<<4))
};

enum { BPF_F_INDEX_MASK=(0xffffffffULL),
BPF_F_CURRENT_CPU=((0xffffffffULL)),
BPF_F_CTXLEN_MASK=((0xfffffULL<<32))
};

enum { BPF_F_CURRENT_NETNS=((-1L))
};

enum { BPF_CSUM_LEVEL_QUERY 
,BPF_CSUM_LEVEL_INC 
,BPF_CSUM_LEVEL_DEC 
,BPF_CSUM_LEVEL_RESET 
};

enum { BPF_F_ADJ_ROOM_FIXED_GSO=((1ULL<<0)),
BPF_F_ADJ_ROOM_ENCAP_L3_IPV4=((1ULL<<1)),
BPF_F_ADJ_ROOM_ENCAP_L3_IPV6=((1ULL<<2)),
BPF_F_ADJ_ROOM_ENCAP_L4_GRE=((1ULL<<3)),
BPF_F_ADJ_ROOM_ENCAP_L4_UDP=((1ULL<<4)),
BPF_F_ADJ_ROOM_NO_CSUM_RESET=((1ULL<<5)),
BPF_F_ADJ_ROOM_ENCAP_L2_ETH=((1ULL<<6)),
BPF_F_ADJ_ROOM_DECAP_L3_IPV4=((1ULL<<7)),
BPF_F_ADJ_ROOM_DECAP_L3_IPV6=((1ULL<<8))
};

enum { BPF_ADJ_ROOM_ENCAP_L2_MASK=(0xff),
BPF_ADJ_ROOM_ENCAP_L2_SHIFT=(56)
};

enum { BPF_F_SYSCTL_BASE_NAME=((1ULL<<0))
};

enum { BPF_LOCAL_STORAGE_GET_F_CREATE=((1ULL<<0)),
BPF_SK_STORAGE_GET_F_CREATE=(((1ULL<<0)))
};

enum { BPF_F_GET_BRANCH_RECORDS_SIZE=((1ULL<<0))
};

enum { BPF_RB_NO_WAKEUP=((1ULL<<0)),
BPF_RB_FORCE_WAKEUP=((1ULL<<1))
};

enum { BPF_RB_AVAIL_DATA=(0),
BPF_RB_RING_SIZE=(1),
BPF_RB_CONS_POS=(2),
BPF_RB_PROD_POS=(3)
};

enum { BPF_RINGBUF_BUSY_BIT=((1U<<31)),
BPF_RINGBUF_DISCARD_BIT=((1U<<30)),
BPF_RINGBUF_HDR_SZ=(8)
};

enum { BPF_SK_LOOKUP_F_REPLACE=((1ULL<<0)),
BPF_SK_LOOKUP_F_NO_REUSEPORT=((1ULL<<1))
};

enum  bpf_adj_room_mode { BPF_ADJ_ROOM_NET 
,BPF_ADJ_ROOM_MAC 
};

enum  bpf_hdr_start_off { BPF_HDR_START_MAC 
,BPF_HDR_START_NET 
};

enum  bpf_lwt_encap_mode { BPF_LWT_ENCAP_SEG6 
,BPF_LWT_ENCAP_SEG6_INLINE 
,BPF_LWT_ENCAP_IP 
};

enum { BPF_F_BPRM_SECUREEXEC=((1ULL<<0))
};

enum { BPF_F_INGRESS=((1ULL<<0)),
BPF_F_BROADCAST=((1ULL<<3)),
BPF_F_EXCLUDE_INGRESS=((1ULL<<4))
};

enum { BPF_SKB_TSTAMP_UNSPEC=(0),
BPF_SKB_TSTAMP_DELIVERY_MONO=(1),
BPF_SKB_CLOCK_REALTIME=(0),
BPF_SKB_CLOCK_MONOTONIC=(1),
BPF_SKB_CLOCK_TAI=(2)
};

union anonymous_typeZ320
{
struct bpf_flow_keys* flow_keys;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ321
{
struct bpf_flow_keys* flow_keys;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ322
{
struct bpf_sock* sk;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ323
{
struct bpf_sock* sk;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

struct __sk_buff
{
    unsigned int  len  ;
    unsigned int  pkt_type  ;
    unsigned int  mark  ;
    unsigned int  queue_mapping  ;
    unsigned int  protocol  ;
    unsigned int  vlan_present  ;
    unsigned int  vlan_tci  ;
    unsigned int  vlan_proto  ;
    unsigned int  priority  ;
    unsigned int  ingress_ifindex  ;
    unsigned int  ifindex  ;
    unsigned int  tc_index  ;
    unsigned int  cb[5]  ;
    unsigned int  hash  ;
    unsigned int  tc_classid  ;
    unsigned int  data  ;
    unsigned int  data_end  ;
    unsigned int  napi_id  ;
    unsigned int  family  ;
    unsigned int  remote_ip4  ;
    unsigned int  local_ip4  ;
    unsigned int  remote_ip6[4]  ;
    unsigned int  local_ip6[4]  ;
    unsigned int  remote_port  ;
    unsigned int  local_port  ;
    unsigned int  data_meta  ;
    union {
        struct bpf_flow_keys* flow_keys;
        unsigned long  long  :64  ;
    };
    unsigned long  long  tstamp  ;
    unsigned int  wire_len  ;
    unsigned int  gso_segs  ;
    union {
        struct bpf_sock* sk;
        unsigned long  long  :64  ;
    };
    unsigned int  gso_size  ;
    unsigned char  tstamp_type  ;
    unsigned int  :24  ;
    unsigned long  long  hwtstamp  ;
};

union anonymous_typeZ324
{
unsigned int  remote_ipv4  ;
unsigned int  remote_ipv6[4]  ;
};

union anonymous_typeZ325
{
unsigned int  remote_ipv4  ;
unsigned int  remote_ipv6[4]  ;
};

union anonymous_typeZ326
{
unsigned short int  tunnel_ext  ;
unsigned short int  tunnel_flags  ;
};

union anonymous_typeZ327
{
unsigned short int  tunnel_ext  ;
unsigned short int  tunnel_flags  ;
};

union anonymous_typeZ328
{
unsigned int  local_ipv4  ;
unsigned int  local_ipv6[4]  ;
};

union anonymous_typeZ329
{
unsigned int  local_ipv4  ;
unsigned int  local_ipv6[4]  ;
};

struct bpf_tunnel_key
{
    unsigned int  tunnel_id  ;
    union {
        unsigned int  remote_ipv4  ;
        unsigned int  remote_ipv6[4]  ;
    };
    unsigned char  tunnel_tos  ;
    unsigned char  tunnel_ttl  ;
    union {
        unsigned short int  tunnel_ext  ;
        unsigned short int  tunnel_flags  ;
    };
    unsigned int  tunnel_label  ;
    union {
        unsigned int  local_ipv4  ;
        unsigned int  local_ipv6[4]  ;
    };
};

union anonymous_typeZ330
{
unsigned int  remote_ipv4  ;
unsigned int  remote_ipv6[4]  ;
};

union anonymous_typeZ331
{
unsigned int  remote_ipv4  ;
unsigned int  remote_ipv6[4]  ;
};

struct bpf_xfrm_state
{
    unsigned int  reqid  ;
    unsigned int  spi  ;
    unsigned short int  family  ;
    unsigned short int  ext  ;
    union {
        unsigned int  remote_ipv4  ;
        unsigned int  remote_ipv6[4]  ;
    };
};

enum  bpf_ret_code { BPF_OK=(0),
BPF_DROP=(2),
BPF_REDIRECT=(7),
BPF_LWT_REROUTE=(128),
BPF_FLOW_DISSECTOR_CONTINUE=(129)
};

struct bpf_sock
{
    unsigned int  bound_dev_if  ;
    unsigned int  family  ;
    unsigned int  type  ;
    unsigned int  protocol  ;
    unsigned int  mark  ;
    unsigned int  priority  ;
    unsigned int  src_ip4  ;
    unsigned int  src_ip6[4]  ;
    unsigned int  src_port  ;
    unsigned short int  dst_port  ;
    unsigned short int  :16  ;
    unsigned int  dst_ip4  ;
    unsigned int  dst_ip6[4]  ;
    unsigned int  state  ;
    int  rx_queue_mapping  ;
};

struct bpf_tcp_sock
{
    unsigned int  snd_cwnd  ;
    unsigned int  srtt_us  ;
    unsigned int  rtt_min  ;
    unsigned int  snd_ssthresh  ;
    unsigned int  rcv_nxt  ;
    unsigned int  snd_nxt  ;
    unsigned int  snd_una  ;
    unsigned int  mss_cache  ;
    unsigned int  ecn_flags  ;
    unsigned int  rate_delivered  ;
    unsigned int  rate_interval_us  ;
    unsigned int  packets_out  ;
    unsigned int  retrans_out  ;
    unsigned int  total_retrans  ;
    unsigned int  segs_in  ;
    unsigned int  data_segs_in  ;
    unsigned int  segs_out  ;
    unsigned int  data_segs_out  ;
    unsigned int  lost_out  ;
    unsigned int  sacked_out  ;
    unsigned long  long  bytes_received  ;
    unsigned long  long  bytes_acked  ;
    unsigned int  dsack_dups  ;
    unsigned int  delivered  ;
    unsigned int  delivered_ce  ;
    unsigned int  icsk_retransmits  ;
};

struct anonymous_typeX333
{
    unsigned int  saddr  ;
    unsigned int  daddr  ;
    unsigned short int  sport  ;
    unsigned short int  dport  ;
};

struct anonymous_typeX334
{
    unsigned int  saddr[4]  ;
    unsigned int  daddr[4]  ;
    unsigned short int  sport  ;
    unsigned short int  dport  ;
};

union anonymous_typeZ332
{
    struct {
        unsigned int  saddr  ;
        unsigned int  daddr  ;
        unsigned short int  sport  ;
        unsigned short int  dport  ;
    } ipv4;
    struct {
        unsigned int  saddr[4]  ;
        unsigned int  daddr[4]  ;
        unsigned short int  sport  ;
        unsigned short int  dport  ;
    } ipv6;
};

struct anonymous_typeX336
{
    unsigned int  saddr  ;
    unsigned int  daddr  ;
    unsigned short int  sport  ;
    unsigned short int  dport  ;
};

struct anonymous_typeX337
{
    unsigned int  saddr[4]  ;
    unsigned int  daddr[4]  ;
    unsigned short int  sport  ;
    unsigned short int  dport  ;
};

union anonymous_typeZ335
{
    struct {
        unsigned int  saddr  ;
        unsigned int  daddr  ;
        unsigned short int  sport  ;
        unsigned short int  dport  ;
    } ipv4;
    struct {
        unsigned int  saddr[4]  ;
        unsigned int  daddr[4]  ;
        unsigned short int  sport  ;
        unsigned short int  dport  ;
    } ipv6;
};

struct bpf_sock_tuple
{
    union {
        struct {
            unsigned int  saddr  ;
            unsigned int  daddr  ;
            unsigned short int  sport  ;
            unsigned short int  dport  ;
        } ipv4;
        struct {
            unsigned int  saddr[4]  ;
            unsigned int  daddr[4]  ;
            unsigned short int  sport  ;
            unsigned short int  dport  ;
        } ipv6;
    };
};

enum  tcx_action_base { TCX_NEXT=(-1),
TCX_PASS=(0),
TCX_DROP=(2),
TCX_REDIRECT=(7)
};

struct bpf_xdp_sock
{
    unsigned int  queue_id  ;
};

enum  xdp_action { XDP_ABORTED=(0),
XDP_DROP 
,XDP_PASS 
,XDP_TX 
,XDP_REDIRECT 
};

struct xdp_md
{
    unsigned int  data  ;
    unsigned int  data_end  ;
    unsigned int  data_meta  ;
    unsigned int  ingress_ifindex  ;
    unsigned int  rx_queue_index  ;
    unsigned int  egress_ifindex  ;
};

union anonymous_typeZ338
{
int fd;
unsigned int  id  ;
};

union anonymous_typeZ339
{
int fd;
unsigned int  id  ;
};

struct bpf_devmap_val
{
    unsigned int  ifindex  ;
    union {
        int fd;
        unsigned int  id  ;
    } bpf_prog;
};

union anonymous_typeZ340
{
int fd;
unsigned int  id  ;
};

union anonymous_typeZ341
{
int fd;
unsigned int  id  ;
};

struct bpf_cpumap_val
{
    unsigned int  qsize  ;
    union {
        int fd;
        unsigned int  id  ;
    } bpf_prog;
};

enum  sk_action { SK_DROP=(0),
SK_PASS 
};

union anonymous_typeZ342
{
void* data;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ343
{
void* data;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ344
{
void* data_end;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ345
{
void* data_end;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ346
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ347
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

struct sk_msg_md
{
    union {
        void* data;
        unsigned long  long  :64  ;
    };
    union {
        void* data_end;
        unsigned long  long  :64  ;
    };
    unsigned int  family  ;
    unsigned int  remote_ip4  ;
    unsigned int  local_ip4  ;
    unsigned int  remote_ip6[4]  ;
    unsigned int  local_ip6[4]  ;
    unsigned int  remote_port  ;
    unsigned int  local_port  ;
    unsigned int  size  ;
    union {
        struct bpf_sock*  sk  ;
        unsigned long  long  :64  ;
    };
};

union anonymous_typeZ348
{
void* data;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ349
{
void* data;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ350
{
void* data_end;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ351
{
void* data_end;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ352
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ353
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ354
{
struct bpf_sock*  migrating_sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ355
{
struct bpf_sock*  migrating_sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

struct sk_reuseport_md
{
    union {
        void* data;
        unsigned long  long  :64  ;
    };
    union {
        void* data_end;
        unsigned long  long  :64  ;
    };
    unsigned int  len  ;
    unsigned int  eth_protocol  ;
    unsigned int  ip_protocol  ;
    unsigned int  bind_inany  ;
    unsigned int  hash  ;
    union {
        struct bpf_sock*  sk  ;
        unsigned long  long  :64  ;
    };
    union {
        struct bpf_sock*  migrating_sk  ;
        unsigned long  long  :64  ;
    };
};

struct bpf_prog_info
{
    unsigned int  type  ;
    unsigned int  id  ;
    unsigned char  tag[8]  ;
    unsigned int  jited_prog_len  ;
    unsigned int  xlated_prog_len  ;
    unsigned long  long  jited_prog_insns  __attribute__((aligned(8))) ;
    unsigned long  long  xlated_prog_insns  __attribute__((aligned(8))) ;
    unsigned long  long  load_time  ;
    unsigned int  created_by_uid  ;
    unsigned int  nr_map_ids  ;
    unsigned long  long  map_ids  __attribute__((aligned(8))) ;
    char name[16U];
    unsigned int  ifindex  ;
    unsigned int  gpl_compatible:1  ;
    unsigned int  :31  ;
    unsigned long  long  netns_dev  ;
    unsigned long  long  netns_ino  ;
    unsigned int  nr_jited_ksyms  ;
    unsigned int  nr_jited_func_lens  ;
    unsigned long  long  jited_ksyms  __attribute__((aligned(8))) ;
    unsigned long  long  jited_func_lens  __attribute__((aligned(8))) ;
    unsigned int  btf_id  ;
    unsigned int  func_info_rec_size  ;
    unsigned long  long  func_info  __attribute__((aligned(8))) ;
    unsigned int  nr_func_info  ;
    unsigned int  nr_line_info  ;
    unsigned long  long  line_info  __attribute__((aligned(8))) ;
    unsigned long  long  jited_line_info  __attribute__((aligned(8))) ;
    unsigned int  nr_jited_line_info  ;
    unsigned int  line_info_rec_size  ;
    unsigned int  jited_line_info_rec_size  ;
    unsigned int  nr_prog_tags  ;
    unsigned long  long  prog_tags  __attribute__((aligned(8))) ;
    unsigned long  long  run_time_ns  ;
    unsigned long  long  run_cnt  ;
    unsigned long  long  recursion_misses  ;
    unsigned int  verified_insns  ;
    unsigned int  attach_btf_obj_id  ;
    unsigned int  attach_btf_id  ;
} __attribute__((aligned(8)));

struct bpf_map_info
{
    unsigned int  type  ;
    unsigned int  id  ;
    unsigned int  key_size  ;
    unsigned int  value_size  ;
    unsigned int  max_entries  ;
    unsigned int  map_flags  ;
    char name[16U];
    unsigned int  ifindex  ;
    unsigned int  btf_vmlinux_value_type_id  ;
    unsigned long  long  netns_dev  ;
    unsigned long  long  netns_ino  ;
    unsigned int  btf_id  ;
    unsigned int  btf_key_type_id  ;
    unsigned int  btf_value_type_id  ;
    unsigned int  btf_vmlinux_id  ;
    unsigned long  long  map_extra  ;
} __attribute__((aligned(8)));

struct bpf_btf_info
{
    unsigned long  long  btf  __attribute__((aligned(8))) ;
    unsigned int  btf_size  ;
    unsigned int  id  ;
    unsigned long  long  name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  kernel_btf  ;
} __attribute__((aligned(8)));

struct anonymous_typeX357
{
    unsigned long  long  tp_name  __attribute__((aligned(8))) ;
    unsigned int  tp_name_len  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX358
{
    unsigned int  attach_type  ;
    unsigned int  target_obj_id  ;
    unsigned int  target_btf_id  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX359
{
    unsigned long  long  cgroup_id  ;
    unsigned int  attach_type  ;
};

struct anonymous_typeX362
{
    unsigned int  map_id  ;
};

union anonymous_typeZ361
{
    struct {
        unsigned int  map_id  ;
    } map;
};

struct anonymous_typeX364
{
    unsigned int  map_id  ;
};

union anonymous_typeZ363
{
    struct {
        unsigned int  map_id  ;
    } map;
};

struct anonymous_typeX366
{
    unsigned long  long  cgroup_id  ;
    unsigned int  order  ;
};

struct anonymous_typeX367
{
    unsigned int  tid  ;
    unsigned int  pid  ;
};

union anonymous_typeZ365
{
    struct {
        unsigned long  long  cgroup_id  ;
        unsigned int  order  ;
    } cgroup;
    struct {
        unsigned int  tid  ;
        unsigned int  pid  ;
    } task;
};

struct anonymous_typeX369
{
    unsigned long  long  cgroup_id  ;
    unsigned int  order  ;
};

struct anonymous_typeX370
{
    unsigned int  tid  ;
    unsigned int  pid  ;
};

union anonymous_typeZ368
{
    struct {
        unsigned long  long  cgroup_id  ;
        unsigned int  order  ;
    } cgroup;
    struct {
        unsigned int  tid  ;
        unsigned int  pid  ;
    } task;
};

struct anonymous_typeX360
{
    unsigned long  long  target_name  __attribute__((aligned(8))) ;
    unsigned int  target_name_len  ;
    union {
        struct {
            unsigned int  map_id  ;
        } map;
    };
    union {
        struct {
            unsigned long  long  cgroup_id  ;
            unsigned int  order  ;
        } cgroup;
        struct {
            unsigned int  tid  ;
            unsigned int  pid  ;
        } task;
    };
};

struct anonymous_typeX371
{
    unsigned int  netns_ino  ;
    unsigned int  attach_type  ;
};

struct anonymous_typeX372
{
    unsigned int  ifindex  ;
};

struct anonymous_typeX373
{
    unsigned int  map_id  ;
};

struct anonymous_typeX374
{
    unsigned int  pf  ;
    unsigned int  hooknum  ;
    int  priority  ;
    unsigned int  flags  ;
};

struct anonymous_typeX375
{
    unsigned long  long  addrs  __attribute__((aligned(8))) ;
    unsigned int  count  ;
    unsigned int  flags  ;
    unsigned long  long  missed  ;
    unsigned long  long  cookies  __attribute__((aligned(8))) ;
};

struct anonymous_typeX376
{
    unsigned long  long  path  __attribute__((aligned(8))) ;
    unsigned long  long  offsets  __attribute__((aligned(8))) ;
    unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8))) ;
    unsigned long  long  cookies  __attribute__((aligned(8))) ;
    unsigned int  path_size  ;
    unsigned int  count  ;
    unsigned int  flags  ;
    unsigned int  pid  ;
};

struct anonymous_typeX379
{
    unsigned long  long  file_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  offset  ;
    unsigned long  long  cookie  ;
    unsigned long  long  ref_ctr_offset  ;
};

struct anonymous_typeX380
{
    unsigned long  long  func_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  offset  ;
    unsigned long  long  addr  ;
    unsigned long  long  missed  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX381
{
    unsigned long  long  tp_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX382
{
    unsigned long  long  config  ;
    unsigned int  type  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

union anonymous_typeZ378
{
    struct {
        unsigned long  long  file_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  offset  ;
        unsigned long  long  cookie  ;
        unsigned long  long  ref_ctr_offset  ;
    } uprobe;
    struct {
        unsigned long  long  func_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  offset  ;
        unsigned long  long  addr  ;
        unsigned long  long  missed  ;
        unsigned long  long  cookie  ;
    } kprobe;
    struct {
        unsigned long  long  tp_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } tracepoint;
    struct {
        unsigned long  long  config  ;
        unsigned int  type  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } event;
};

struct anonymous_typeX384
{
    unsigned long  long  file_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  offset  ;
    unsigned long  long  cookie  ;
    unsigned long  long  ref_ctr_offset  ;
};

struct anonymous_typeX385
{
    unsigned long  long  func_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  offset  ;
    unsigned long  long  addr  ;
    unsigned long  long  missed  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX386
{
    unsigned long  long  tp_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX387
{
    unsigned long  long  config  ;
    unsigned int  type  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

union anonymous_typeZ383
{
    struct {
        unsigned long  long  file_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  offset  ;
        unsigned long  long  cookie  ;
        unsigned long  long  ref_ctr_offset  ;
    } uprobe;
    struct {
        unsigned long  long  func_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  offset  ;
        unsigned long  long  addr  ;
        unsigned long  long  missed  ;
        unsigned long  long  cookie  ;
    } kprobe;
    struct {
        unsigned long  long  tp_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } tracepoint;
    struct {
        unsigned long  long  config  ;
        unsigned int  type  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } event;
};

struct anonymous_typeX377
{
    unsigned int  type  ;
    unsigned int  :32  ;
    union {
        struct {
            unsigned long  long  file_name  __attribute__((aligned(8))) ;
            unsigned int  name_len  ;
            unsigned int  offset  ;
            unsigned long  long  cookie  ;
            unsigned long  long  ref_ctr_offset  ;
        } uprobe;
        struct {
            unsigned long  long  func_name  __attribute__((aligned(8))) ;
            unsigned int  name_len  ;
            unsigned int  offset  ;
            unsigned long  long  addr  ;
            unsigned long  long  missed  ;
            unsigned long  long  cookie  ;
        } kprobe;
        struct {
            unsigned long  long  tp_name  __attribute__((aligned(8))) ;
            unsigned int  name_len  ;
            unsigned int  :32  ;
            unsigned long  long  cookie  ;
        } tracepoint;
        struct {
            unsigned long  long  config  ;
            unsigned int  type  ;
            unsigned int  :32  ;
            unsigned long  long  cookie  ;
        } event;
    };
};

struct anonymous_typeX388
{
    unsigned int  ifindex  ;
    unsigned int  attach_type  ;
};

struct anonymous_typeX389
{
    unsigned int  ifindex  ;
    unsigned int  attach_type  ;
};

struct anonymous_typeX390
{
    unsigned int  map_id  ;
    unsigned int  attach_type  ;
};

union anonymous_typeZ356
{
    struct {
        unsigned long  long  tp_name  __attribute__((aligned(8))) ;
        unsigned int  tp_name_len  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } raw_tracepoint;
    struct {
        unsigned int  attach_type  ;
        unsigned int  target_obj_id  ;
        unsigned int  target_btf_id  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } tracing;
    struct {
        unsigned long  long  cgroup_id  ;
        unsigned int  attach_type  ;
    } cgroup;
    struct {
        unsigned long  long  target_name  __attribute__((aligned(8))) ;
        unsigned int  target_name_len  ;
        union {
            struct {
                unsigned int  map_id  ;
            } map;
        };
        union {
            struct {
                unsigned long  long  cgroup_id  ;
                unsigned int  order  ;
            } cgroup;
            struct {
                unsigned int  tid  ;
                unsigned int  pid  ;
            } task;
        };
    } iter;
    struct {
        unsigned int  netns_ino  ;
        unsigned int  attach_type  ;
    } netns;
    struct {
        unsigned int  ifindex  ;
    } xdp;
    struct {
        unsigned int  map_id  ;
    } struct_ops;
    struct {
        unsigned int  pf  ;
        unsigned int  hooknum  ;
        int  priority  ;
        unsigned int  flags  ;
    } netfilter;
    struct {
        unsigned long  long  addrs  __attribute__((aligned(8))) ;
        unsigned int  count  ;
        unsigned int  flags  ;
        unsigned long  long  missed  ;
        unsigned long  long  cookies  __attribute__((aligned(8))) ;
    } kprobe_multi;
    struct {
        unsigned long  long  path  __attribute__((aligned(8))) ;
        unsigned long  long  offsets  __attribute__((aligned(8))) ;
        unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8))) ;
        unsigned long  long  cookies  __attribute__((aligned(8))) ;
        unsigned int  path_size  ;
        unsigned int  count  ;
        unsigned int  flags  ;
        unsigned int  pid  ;
    } uprobe_multi;
    struct {
        unsigned int  type  ;
        unsigned int  :32  ;
        union {
            struct {
                unsigned long  long  file_name  __attribute__((aligned(8))) ;
                unsigned int  name_len  ;
                unsigned int  offset  ;
                unsigned long  long  cookie  ;
                unsigned long  long  ref_ctr_offset  ;
            } uprobe;
            struct {
                unsigned long  long  func_name  __attribute__((aligned(8))) ;
                unsigned int  name_len  ;
                unsigned int  offset  ;
                unsigned long  long  addr  ;
                unsigned long  long  missed  ;
                unsigned long  long  cookie  ;
            } kprobe;
            struct {
                unsigned long  long  tp_name  __attribute__((aligned(8))) ;
                unsigned int  name_len  ;
                unsigned int  :32  ;
                unsigned long  long  cookie  ;
            } tracepoint;
            struct {
                unsigned long  long  config  ;
                unsigned int  type  ;
                unsigned int  :32  ;
                unsigned long  long  cookie  ;
            } event;
        };
    } perf_event;
    struct {
        unsigned int  ifindex  ;
        unsigned int  attach_type  ;
    } tcx;
    struct {
        unsigned int  ifindex  ;
        unsigned int  attach_type  ;
    } netkit;
    struct {
        unsigned int  map_id  ;
        unsigned int  attach_type  ;
    } sockmap;
};

struct anonymous_typeX392
{
    unsigned long  long  tp_name  __attribute__((aligned(8))) ;
    unsigned int  tp_name_len  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX393
{
    unsigned int  attach_type  ;
    unsigned int  target_obj_id  ;
    unsigned int  target_btf_id  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX394
{
    unsigned long  long  cgroup_id  ;
    unsigned int  attach_type  ;
};

struct anonymous_typeX397
{
    unsigned int  map_id  ;
};

union anonymous_typeZ396
{
    struct {
        unsigned int  map_id  ;
    } map;
};

struct anonymous_typeX399
{
    unsigned int  map_id  ;
};

union anonymous_typeZ398
{
    struct {
        unsigned int  map_id  ;
    } map;
};

struct anonymous_typeX401
{
    unsigned long  long  cgroup_id  ;
    unsigned int  order  ;
};

struct anonymous_typeX402
{
    unsigned int  tid  ;
    unsigned int  pid  ;
};

union anonymous_typeZ400
{
    struct {
        unsigned long  long  cgroup_id  ;
        unsigned int  order  ;
    } cgroup;
    struct {
        unsigned int  tid  ;
        unsigned int  pid  ;
    } task;
};

struct anonymous_typeX404
{
    unsigned long  long  cgroup_id  ;
    unsigned int  order  ;
};

struct anonymous_typeX405
{
    unsigned int  tid  ;
    unsigned int  pid  ;
};

union anonymous_typeZ403
{
    struct {
        unsigned long  long  cgroup_id  ;
        unsigned int  order  ;
    } cgroup;
    struct {
        unsigned int  tid  ;
        unsigned int  pid  ;
    } task;
};

struct anonymous_typeX395
{
    unsigned long  long  target_name  __attribute__((aligned(8))) ;
    unsigned int  target_name_len  ;
    union {
        struct {
            unsigned int  map_id  ;
        } map;
    };
    union {
        struct {
            unsigned long  long  cgroup_id  ;
            unsigned int  order  ;
        } cgroup;
        struct {
            unsigned int  tid  ;
            unsigned int  pid  ;
        } task;
    };
};

struct anonymous_typeX406
{
    unsigned int  netns_ino  ;
    unsigned int  attach_type  ;
};

struct anonymous_typeX407
{
    unsigned int  ifindex  ;
};

struct anonymous_typeX408
{
    unsigned int  map_id  ;
};

struct anonymous_typeX409
{
    unsigned int  pf  ;
    unsigned int  hooknum  ;
    int  priority  ;
    unsigned int  flags  ;
};

struct anonymous_typeX410
{
    unsigned long  long  addrs  __attribute__((aligned(8))) ;
    unsigned int  count  ;
    unsigned int  flags  ;
    unsigned long  long  missed  ;
    unsigned long  long  cookies  __attribute__((aligned(8))) ;
};

struct anonymous_typeX411
{
    unsigned long  long  path  __attribute__((aligned(8))) ;
    unsigned long  long  offsets  __attribute__((aligned(8))) ;
    unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8))) ;
    unsigned long  long  cookies  __attribute__((aligned(8))) ;
    unsigned int  path_size  ;
    unsigned int  count  ;
    unsigned int  flags  ;
    unsigned int  pid  ;
};

struct anonymous_typeX414
{
    unsigned long  long  file_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  offset  ;
    unsigned long  long  cookie  ;
    unsigned long  long  ref_ctr_offset  ;
};

struct anonymous_typeX415
{
    unsigned long  long  func_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  offset  ;
    unsigned long  long  addr  ;
    unsigned long  long  missed  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX416
{
    unsigned long  long  tp_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX417
{
    unsigned long  long  config  ;
    unsigned int  type  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

union anonymous_typeZ413
{
    struct {
        unsigned long  long  file_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  offset  ;
        unsigned long  long  cookie  ;
        unsigned long  long  ref_ctr_offset  ;
    } uprobe;
    struct {
        unsigned long  long  func_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  offset  ;
        unsigned long  long  addr  ;
        unsigned long  long  missed  ;
        unsigned long  long  cookie  ;
    } kprobe;
    struct {
        unsigned long  long  tp_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } tracepoint;
    struct {
        unsigned long  long  config  ;
        unsigned int  type  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } event;
};

struct anonymous_typeX419
{
    unsigned long  long  file_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  offset  ;
    unsigned long  long  cookie  ;
    unsigned long  long  ref_ctr_offset  ;
};

struct anonymous_typeX420
{
    unsigned long  long  func_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  offset  ;
    unsigned long  long  addr  ;
    unsigned long  long  missed  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX421
{
    unsigned long  long  tp_name  __attribute__((aligned(8))) ;
    unsigned int  name_len  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

struct anonymous_typeX422
{
    unsigned long  long  config  ;
    unsigned int  type  ;
    unsigned int  :32  ;
    unsigned long  long  cookie  ;
};

union anonymous_typeZ418
{
    struct {
        unsigned long  long  file_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  offset  ;
        unsigned long  long  cookie  ;
        unsigned long  long  ref_ctr_offset  ;
    } uprobe;
    struct {
        unsigned long  long  func_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  offset  ;
        unsigned long  long  addr  ;
        unsigned long  long  missed  ;
        unsigned long  long  cookie  ;
    } kprobe;
    struct {
        unsigned long  long  tp_name  __attribute__((aligned(8))) ;
        unsigned int  name_len  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } tracepoint;
    struct {
        unsigned long  long  config  ;
        unsigned int  type  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } event;
};

struct anonymous_typeX412
{
    unsigned int  type  ;
    unsigned int  :32  ;
    union {
        struct {
            unsigned long  long  file_name  __attribute__((aligned(8))) ;
            unsigned int  name_len  ;
            unsigned int  offset  ;
            unsigned long  long  cookie  ;
            unsigned long  long  ref_ctr_offset  ;
        } uprobe;
        struct {
            unsigned long  long  func_name  __attribute__((aligned(8))) ;
            unsigned int  name_len  ;
            unsigned int  offset  ;
            unsigned long  long  addr  ;
            unsigned long  long  missed  ;
            unsigned long  long  cookie  ;
        } kprobe;
        struct {
            unsigned long  long  tp_name  __attribute__((aligned(8))) ;
            unsigned int  name_len  ;
            unsigned int  :32  ;
            unsigned long  long  cookie  ;
        } tracepoint;
        struct {
            unsigned long  long  config  ;
            unsigned int  type  ;
            unsigned int  :32  ;
            unsigned long  long  cookie  ;
        } event;
    };
};

struct anonymous_typeX423
{
    unsigned int  ifindex  ;
    unsigned int  attach_type  ;
};

struct anonymous_typeX424
{
    unsigned int  ifindex  ;
    unsigned int  attach_type  ;
};

struct anonymous_typeX425
{
    unsigned int  map_id  ;
    unsigned int  attach_type  ;
};

union anonymous_typeZ391
{
    struct {
        unsigned long  long  tp_name  __attribute__((aligned(8))) ;
        unsigned int  tp_name_len  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } raw_tracepoint;
    struct {
        unsigned int  attach_type  ;
        unsigned int  target_obj_id  ;
        unsigned int  target_btf_id  ;
        unsigned int  :32  ;
        unsigned long  long  cookie  ;
    } tracing;
    struct {
        unsigned long  long  cgroup_id  ;
        unsigned int  attach_type  ;
    } cgroup;
    struct {
        unsigned long  long  target_name  __attribute__((aligned(8))) ;
        unsigned int  target_name_len  ;
        union {
            struct {
                unsigned int  map_id  ;
            } map;
        };
        union {
            struct {
                unsigned long  long  cgroup_id  ;
                unsigned int  order  ;
            } cgroup;
            struct {
                unsigned int  tid  ;
                unsigned int  pid  ;
            } task;
        };
    } iter;
    struct {
        unsigned int  netns_ino  ;
        unsigned int  attach_type  ;
    } netns;
    struct {
        unsigned int  ifindex  ;
    } xdp;
    struct {
        unsigned int  map_id  ;
    } struct_ops;
    struct {
        unsigned int  pf  ;
        unsigned int  hooknum  ;
        int  priority  ;
        unsigned int  flags  ;
    } netfilter;
    struct {
        unsigned long  long  addrs  __attribute__((aligned(8))) ;
        unsigned int  count  ;
        unsigned int  flags  ;
        unsigned long  long  missed  ;
        unsigned long  long  cookies  __attribute__((aligned(8))) ;
    } kprobe_multi;
    struct {
        unsigned long  long  path  __attribute__((aligned(8))) ;
        unsigned long  long  offsets  __attribute__((aligned(8))) ;
        unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8))) ;
        unsigned long  long  cookies  __attribute__((aligned(8))) ;
        unsigned int  path_size  ;
        unsigned int  count  ;
        unsigned int  flags  ;
        unsigned int  pid  ;
    } uprobe_multi;
    struct {
        unsigned int  type  ;
        unsigned int  :32  ;
        union {
            struct {
                unsigned long  long  file_name  __attribute__((aligned(8))) ;
                unsigned int  name_len  ;
                unsigned int  offset  ;
                unsigned long  long  cookie  ;
                unsigned long  long  ref_ctr_offset  ;
            } uprobe;
            struct {
                unsigned long  long  func_name  __attribute__((aligned(8))) ;
                unsigned int  name_len  ;
                unsigned int  offset  ;
                unsigned long  long  addr  ;
                unsigned long  long  missed  ;
                unsigned long  long  cookie  ;
            } kprobe;
            struct {
                unsigned long  long  tp_name  __attribute__((aligned(8))) ;
                unsigned int  name_len  ;
                unsigned int  :32  ;
                unsigned long  long  cookie  ;
            } tracepoint;
            struct {
                unsigned long  long  config  ;
                unsigned int  type  ;
                unsigned int  :32  ;
                unsigned long  long  cookie  ;
            } event;
        };
    } perf_event;
    struct {
        unsigned int  ifindex  ;
        unsigned int  attach_type  ;
    } tcx;
    struct {
        unsigned int  ifindex  ;
        unsigned int  attach_type  ;
    } netkit;
    struct {
        unsigned int  map_id  ;
        unsigned int  attach_type  ;
    } sockmap;
};

struct bpf_link_info
{
    unsigned int  type  ;
    unsigned int  id  ;
    unsigned int  prog_id  ;
    union {
        struct {
            unsigned long  long  tp_name  __attribute__((aligned(8))) ;
            unsigned int  tp_name_len  ;
            unsigned int  :32  ;
            unsigned long  long  cookie  ;
        } raw_tracepoint;
        struct {
            unsigned int  attach_type  ;
            unsigned int  target_obj_id  ;
            unsigned int  target_btf_id  ;
            unsigned int  :32  ;
            unsigned long  long  cookie  ;
        } tracing;
        struct {
            unsigned long  long  cgroup_id  ;
            unsigned int  attach_type  ;
        } cgroup;
        struct {
            unsigned long  long  target_name  __attribute__((aligned(8))) ;
            unsigned int  target_name_len  ;
            union {
                struct {
                    unsigned int  map_id  ;
                } map;
            };
            union {
                struct {
                    unsigned long  long  cgroup_id  ;
                    unsigned int  order  ;
                } cgroup;
                struct {
                    unsigned int  tid  ;
                    unsigned int  pid  ;
                } task;
            };
        } iter;
        struct {
            unsigned int  netns_ino  ;
            unsigned int  attach_type  ;
        } netns;
        struct {
            unsigned int  ifindex  ;
        } xdp;
        struct {
            unsigned int  map_id  ;
        } struct_ops;
        struct {
            unsigned int  pf  ;
            unsigned int  hooknum  ;
            int  priority  ;
            unsigned int  flags  ;
        } netfilter;
        struct {
            unsigned long  long  addrs  __attribute__((aligned(8))) ;
            unsigned int  count  ;
            unsigned int  flags  ;
            unsigned long  long  missed  ;
            unsigned long  long  cookies  __attribute__((aligned(8))) ;
        } kprobe_multi;
        struct {
            unsigned long  long  path  __attribute__((aligned(8))) ;
            unsigned long  long  offsets  __attribute__((aligned(8))) ;
            unsigned long  long  ref_ctr_offsets  __attribute__((aligned(8))) ;
            unsigned long  long  cookies  __attribute__((aligned(8))) ;
            unsigned int  path_size  ;
            unsigned int  count  ;
            unsigned int  flags  ;
            unsigned int  pid  ;
        } uprobe_multi;
        struct {
            unsigned int  type  ;
            unsigned int  :32  ;
            union {
                struct {
                    unsigned long  long  file_name  __attribute__((aligned(8))) ;
                    unsigned int  name_len  ;
                    unsigned int  offset  ;
                    unsigned long  long  cookie  ;
                    unsigned long  long  ref_ctr_offset  ;
                } uprobe;
                struct {
                    unsigned long  long  func_name  __attribute__((aligned(8))) ;
                    unsigned int  name_len  ;
                    unsigned int  offset  ;
                    unsigned long  long  addr  ;
                    unsigned long  long  missed  ;
                    unsigned long  long  cookie  ;
                } kprobe;
                struct {
                    unsigned long  long  tp_name  __attribute__((aligned(8))) ;
                    unsigned int  name_len  ;
                    unsigned int  :32  ;
                    unsigned long  long  cookie  ;
                } tracepoint;
                struct {
                    unsigned long  long  config  ;
                    unsigned int  type  ;
                    unsigned int  :32  ;
                    unsigned long  long  cookie  ;
                } event;
            };
        } perf_event;
        struct {
            unsigned int  ifindex  ;
            unsigned int  attach_type  ;
        } tcx;
        struct {
            unsigned int  ifindex  ;
            unsigned int  attach_type  ;
        } netkit;
        struct {
            unsigned int  map_id  ;
            unsigned int  attach_type  ;
        } sockmap;
    };
} __attribute__((aligned(8)));

struct bpf_token_info
{
    unsigned long  long  allowed_cmds  ;
    unsigned long  long  allowed_maps  ;
    unsigned long  long  allowed_progs  ;
    unsigned long  long  allowed_attachs  ;
} __attribute__((aligned(8)));

union anonymous_typeZ426
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ427
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

struct bpf_sock_addr
{
    unsigned int  user_family  ;
    unsigned int  user_ip4  ;
    unsigned int  user_ip6[4]  ;
    unsigned int  user_port  ;
    unsigned int  family  ;
    unsigned int  type  ;
    unsigned int  protocol  ;
    unsigned int  msg_src_ip4  ;
    unsigned int  msg_src_ip6[4]  ;
    union {
        struct bpf_sock*  sk  ;
        unsigned long  long  :64  ;
    };
};

union anonymous_typeZ428
{
unsigned int  args[4]  ;
unsigned int  reply  ;
unsigned int  replylong[4]  ;
};

union anonymous_typeZ429
{
unsigned int  args[4]  ;
unsigned int  reply  ;
unsigned int  replylong[4]  ;
};

union anonymous_typeZ430
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ431
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ432
{
void* skb_data;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ433
{
void* skb_data;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ434
{
void* skb_data_end;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ435
{
void* skb_data_end;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

struct bpf_sock_ops
{
    unsigned int  op  ;
    union {
        unsigned int  args[4]  ;
        unsigned int  reply  ;
        unsigned int  replylong[4]  ;
    };
    unsigned int  family  ;
    unsigned int  remote_ip4  ;
    unsigned int  local_ip4  ;
    unsigned int  remote_ip6[4]  ;
    unsigned int  local_ip6[4]  ;
    unsigned int  remote_port  ;
    unsigned int  local_port  ;
    unsigned int  is_fullsock  ;
    unsigned int  snd_cwnd  ;
    unsigned int  srtt_us  ;
    unsigned int  bpf_sock_ops_cb_flags  ;
    unsigned int  state  ;
    unsigned int  rtt_min  ;
    unsigned int  snd_ssthresh  ;
    unsigned int  rcv_nxt  ;
    unsigned int  snd_nxt  ;
    unsigned int  snd_una  ;
    unsigned int  mss_cache  ;
    unsigned int  ecn_flags  ;
    unsigned int  rate_delivered  ;
    unsigned int  rate_interval_us  ;
    unsigned int  packets_out  ;
    unsigned int  retrans_out  ;
    unsigned int  total_retrans  ;
    unsigned int  segs_in  ;
    unsigned int  data_segs_in  ;
    unsigned int  segs_out  ;
    unsigned int  data_segs_out  ;
    unsigned int  lost_out  ;
    unsigned int  sacked_out  ;
    unsigned int  sk_txhash  ;
    unsigned long  long  bytes_received  ;
    unsigned long  long  bytes_acked  ;
    union {
        struct bpf_sock*  sk  ;
        unsigned long  long  :64  ;
    };
    union {
        void* skb_data;
        unsigned long  long  :64  ;
    };
    union {
        void* skb_data_end;
        unsigned long  long  :64  ;
    };
    unsigned int  skb_len  ;
    unsigned int  skb_tcp_flags  ;
    unsigned long  long  skb_hwtstamp  ;
};

enum { BPF_SOCK_OPS_RTO_CB_FLAG=((1<<0)),
BPF_SOCK_OPS_RETRANS_CB_FLAG=((1<<1)),
BPF_SOCK_OPS_STATE_CB_FLAG=((1<<2)),
BPF_SOCK_OPS_RTT_CB_FLAG=((1<<3)),
BPF_SOCK_OPS_PARSE_ALL_HDR_OPT_CB_FLAG=((1<<4)),
BPF_SOCK_OPS_PARSE_UNKNOWN_HDR_OPT_CB_FLAG=((1<<5)),
BPF_SOCK_OPS_WRITE_HDR_OPT_CB_FLAG=((1<<6)),
BPF_SOCK_OPS_ALL_CB_FLAGS=(0x7F)
};

enum { SK_BPF_CB_TX_TIMESTAMPING=(1<<0),
SK_BPF_CB_MASK=(((1<<0)-1)|(1<<0))
};

enum { BPF_SOCK_OPS_VOID 
,BPF_SOCK_OPS_TIMEOUT_INIT 
,BPF_SOCK_OPS_RWND_INIT 
,BPF_SOCK_OPS_TCP_CONNECT_CB 
,BPF_SOCK_OPS_ACTIVE_ESTABLISHED_CB 
,BPF_SOCK_OPS_PASSIVE_ESTABLISHED_CB 
,BPF_SOCK_OPS_NEEDS_ECN 
,BPF_SOCK_OPS_BASE_RTT 
,BPF_SOCK_OPS_RTO_CB 
,BPF_SOCK_OPS_RETRANS_CB 
,BPF_SOCK_OPS_STATE_CB 
,BPF_SOCK_OPS_TCP_LISTEN_CB 
,BPF_SOCK_OPS_RTT_CB 
,BPF_SOCK_OPS_PARSE_HDR_OPT_CB 
,BPF_SOCK_OPS_HDR_OPT_LEN_CB 
,BPF_SOCK_OPS_WRITE_HDR_OPT_CB 
,BPF_SOCK_OPS_TSTAMP_SCHED_CB 
,BPF_SOCK_OPS_TSTAMP_SND_SW_CB 
,BPF_SOCK_OPS_TSTAMP_SND_HW_CB 
,BPF_SOCK_OPS_TSTAMP_ACK_CB 
,BPF_SOCK_OPS_TSTAMP_SENDMSG_CB 
};

enum { BPF_TCP_ESTABLISHED=(1),
BPF_TCP_SYN_SENT 
,BPF_TCP_SYN_RECV 
,BPF_TCP_FIN_WAIT1 
,BPF_TCP_FIN_WAIT2 
,BPF_TCP_TIME_WAIT 
,BPF_TCP_CLOSE 
,BPF_TCP_CLOSE_WAIT 
,BPF_TCP_LAST_ACK 
,BPF_TCP_LISTEN 
,BPF_TCP_CLOSING 
,BPF_TCP_NEW_SYN_RECV 
,BPF_TCP_BOUND_INACTIVE 
,BPF_TCP_MAX_STATES 
};

enum { TCP_BPF_IW=(1001),
TCP_BPF_SNDCWND_CLAMP=(1002),
TCP_BPF_DELACK_MAX=(1003),
TCP_BPF_RTO_MIN=(1004),
TCP_BPF_SYN=(1005),
TCP_BPF_SYN_IP=(1006),
TCP_BPF_SYN_MAC=(1007),
TCP_BPF_SOCK_OPS_CB_FLAGS=(1008),
SK_BPF_CB_FLAGS=(1009)
};

enum { BPF_LOAD_HDR_OPT_TCP_SYN=((1ULL<<0))
};

enum { BPF_WRITE_HDR_TCP_CURRENT_MSS=(1),
BPF_WRITE_HDR_TCP_SYNACK_COOKIE=(2)
};

struct bpf_perf_event_value
{
    unsigned long  long  counter  ;
    unsigned long  long  enabled  ;
    unsigned long  long  running  ;
};

enum { BPF_DEVCG_ACC_MKNOD=((1ULL<<0)),
BPF_DEVCG_ACC_READ=((1ULL<<1)),
BPF_DEVCG_ACC_WRITE=((1ULL<<2))
};

enum { BPF_DEVCG_DEV_BLOCK=((1ULL<<0)),
BPF_DEVCG_DEV_CHAR=((1ULL<<1))
};

struct bpf_cgroup_dev_ctx
{
    unsigned int  access_type  ;
    unsigned int  major  ;
    unsigned int  minor  ;
};

struct bpf_raw_tracepoint_args
{
    unsigned long  long  args[0]  ;
};

enum { BPF_FIB_LOOKUP_DIRECT=((1U<<0)),
BPF_FIB_LOOKUP_OUTPUT=((1U<<1)),
BPF_FIB_LOOKUP_SKIP_NEIGH=((1U<<2)),
BPF_FIB_LOOKUP_TBID=((1U<<3)),
BPF_FIB_LOOKUP_SRC=((1U<<4)),
BPF_FIB_LOOKUP_MARK=((1U<<5))
};

enum { BPF_FIB_LKUP_RET_SUCCESS 
,BPF_FIB_LKUP_RET_BLACKHOLE 
,BPF_FIB_LKUP_RET_UNREACHABLE 
,BPF_FIB_LKUP_RET_PROHIBIT 
,BPF_FIB_LKUP_RET_NOT_FWDED 
,BPF_FIB_LKUP_RET_FWD_DISABLED 
,BPF_FIB_LKUP_RET_UNSUPP_LWT 
,BPF_FIB_LKUP_RET_NO_NEIGH 
,BPF_FIB_LKUP_RET_FRAG_NEEDED 
,BPF_FIB_LKUP_RET_NO_SRC_ADDR 
};

union anonymous_typeZ436
{
unsigned short int  tot_len  ;
unsigned short int  mtu_result  ;
} __attribute__((packed, aligned(2)));

union anonymous_typeZ437
{
unsigned short int  tot_len  ;
unsigned short int  mtu_result  ;
} __attribute__((packed, aligned(2)));

union anonymous_typeZ438
{
unsigned char  tos  ;
unsigned int  flowinfo  ;
unsigned int  rt_metric  ;
};

union anonymous_typeZ439
{
unsigned char  tos  ;
unsigned int  flowinfo  ;
unsigned int  rt_metric  ;
};

union anonymous_typeZ440
{
unsigned int  ipv4_src  ;
unsigned int  ipv6_src[4]  ;
};

union anonymous_typeZ441
{
unsigned int  ipv4_src  ;
unsigned int  ipv6_src[4]  ;
};

union anonymous_typeZ442
{
unsigned int  ipv4_dst  ;
unsigned int  ipv6_dst[4]  ;
};

union anonymous_typeZ443
{
unsigned int  ipv4_dst  ;
unsigned int  ipv6_dst[4]  ;
};

struct anonymous_typeX445
{
    unsigned short int  h_vlan_proto  ;
    unsigned short int  h_vlan_TCI  ;
};

union anonymous_typeZ444
{
    struct {
        unsigned short int  h_vlan_proto  ;
        unsigned short int  h_vlan_TCI  ;
    };
unsigned int  tbid  ;
};

struct anonymous_typeX447
{
    unsigned short int  h_vlan_proto  ;
    unsigned short int  h_vlan_TCI  ;
};

union anonymous_typeZ446
{
    struct {
        unsigned short int  h_vlan_proto  ;
        unsigned short int  h_vlan_TCI  ;
    };
unsigned int  tbid  ;
};

struct anonymous_typeX449
{
    unsigned int  mark  ;
};

struct anonymous_typeX450
{
    unsigned char  smac[6]  ;
    unsigned char  dmac[6]  ;
};

union anonymous_typeZ448
{
    struct {
        unsigned int  mark  ;
    };
    struct {
        unsigned char  smac[6]  ;
        unsigned char  dmac[6]  ;
    };
};

struct anonymous_typeX452
{
    unsigned int  mark  ;
};

struct anonymous_typeX453
{
    unsigned char  smac[6]  ;
    unsigned char  dmac[6]  ;
};

union anonymous_typeZ451
{
    struct {
        unsigned int  mark  ;
    };
    struct {
        unsigned char  smac[6]  ;
        unsigned char  dmac[6]  ;
    };
};

struct bpf_fib_lookup
{
    unsigned char  family  ;
    unsigned char  l4_protocol  ;
    unsigned short int  sport  ;
    unsigned short int  dport  ;
    union {
        unsigned short int  tot_len  ;
        unsigned short int  mtu_result  ;
    };
    unsigned int  ifindex  ;
    union {
        unsigned char  tos  ;
        unsigned int  flowinfo  ;
        unsigned int  rt_metric  ;
    };
    union {
        unsigned int  ipv4_src  ;
        unsigned int  ipv6_src[4]  ;
    };
    union {
        unsigned int  ipv4_dst  ;
        unsigned int  ipv6_dst[4]  ;
    };
    union {
        struct {
            unsigned short int  h_vlan_proto  ;
            unsigned short int  h_vlan_TCI  ;
        };
        unsigned int  tbid  ;
    };
    union {
        struct {
            unsigned int  mark  ;
        };
        struct {
            unsigned char  smac[6]  ;
            unsigned char  dmac[6]  ;
        };
    };
};

union anonymous_typeZ454
{
unsigned int  ipv4_nh  ;
unsigned int  ipv6_nh[4]  ;
};

union anonymous_typeZ455
{
unsigned int  ipv4_nh  ;
unsigned int  ipv6_nh[4]  ;
};

struct bpf_redir_neigh
{
    unsigned int  nh_family  ;
    union {
        unsigned int  ipv4_nh  ;
        unsigned int  ipv6_nh[4]  ;
    };
};

enum  bpf_check_mtu_flags { BPF_MTU_CHK_SEGS=((1U<<0))
};

enum  bpf_check_mtu_ret { BPF_MTU_CHK_RET_SUCCESS 
,BPF_MTU_CHK_RET_FRAG_NEEDED 
,BPF_MTU_CHK_RET_SEGS_TOOBIG 
};

enum  bpf_task_fd_type { BPF_FD_TYPE_RAW_TRACEPOINT 
,BPF_FD_TYPE_TRACEPOINT 
,BPF_FD_TYPE_KPROBE 
,BPF_FD_TYPE_KRETPROBE 
,BPF_FD_TYPE_UPROBE 
,BPF_FD_TYPE_URETPROBE 
};

enum { BPF_FLOW_DISSECTOR_F_PARSE_1ST_FRAG=((1U<<0)),
BPF_FLOW_DISSECTOR_F_STOP_AT_FLOW_LABEL=((1U<<1)),
BPF_FLOW_DISSECTOR_F_STOP_AT_ENCAP=((1U<<2))
};

struct anonymous_typeX457
{
    unsigned int  ipv4_src  ;
    unsigned int  ipv4_dst  ;
};

struct anonymous_typeX458
{
    unsigned int  ipv6_src[4]  ;
    unsigned int  ipv6_dst[4]  ;
};

union anonymous_typeZ456
{
    struct {
        unsigned int  ipv4_src  ;
        unsigned int  ipv4_dst  ;
    };
    struct {
        unsigned int  ipv6_src[4]  ;
        unsigned int  ipv6_dst[4]  ;
    };
};

struct anonymous_typeX460
{
    unsigned int  ipv4_src  ;
    unsigned int  ipv4_dst  ;
};

struct anonymous_typeX461
{
    unsigned int  ipv6_src[4]  ;
    unsigned int  ipv6_dst[4]  ;
};

union anonymous_typeZ459
{
    struct {
        unsigned int  ipv4_src  ;
        unsigned int  ipv4_dst  ;
    };
    struct {
        unsigned int  ipv6_src[4]  ;
        unsigned int  ipv6_dst[4]  ;
    };
};

struct bpf_flow_keys
{
    unsigned short int  nhoff  ;
    unsigned short int  thoff  ;
    unsigned short int  addr_proto  ;
    unsigned char  is_frag  ;
    unsigned char  is_first_frag  ;
    unsigned char  is_encap  ;
    unsigned char  ip_proto  ;
    unsigned short int  n_proto  ;
    unsigned short int  sport  ;
    unsigned short int  dport  ;
    union {
        struct {
            unsigned int  ipv4_src  ;
            unsigned int  ipv4_dst  ;
        };
        struct {
            unsigned int  ipv6_src[4]  ;
            unsigned int  ipv6_dst[4]  ;
        };
    };
    unsigned int  flags  ;
    unsigned int  flow_label  ;
};

struct bpf_func_info
{
    unsigned int  insn_off  ;
    unsigned int  type_id  ;
};

struct bpf_line_info
{
    unsigned int  insn_off  ;
    unsigned int  file_name_off  ;
    unsigned int  line_off  ;
    unsigned int  line_col  ;
};

struct bpf_spin_lock
{
    unsigned int  val  ;
};

struct bpf_timer
{
    unsigned long  long  __opaque[2]  ;
} __attribute__((aligned(8)));

struct bpf_wq
{
    unsigned long  long  __opaque[2]  ;
} __attribute__((aligned(8)));

struct bpf_dynptr
{
    unsigned long  long  __opaque[2]  ;
} __attribute__((aligned(8)));

struct bpf_list_head
{
    unsigned long  long  __opaque[2]  ;
} __attribute__((aligned(8)));

struct bpf_list_node
{
    unsigned long  long  __opaque[3]  ;
} __attribute__((aligned(8)));

struct bpf_rb_root
{
    unsigned long  long  __opaque[2]  ;
} __attribute__((aligned(8)));

struct bpf_rb_node
{
    unsigned long  long  __opaque[4]  ;
} __attribute__((aligned(8)));

struct bpf_refcount
{
    unsigned int  __opaque[1]  ;
} __attribute__((aligned(4)));

struct bpf_sysctl
{
    unsigned int  write  ;
    unsigned int  file_pos  ;
};

union anonymous_typeZ462
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ463
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ464
{
void* optval;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ465
{
void* optval;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ466
{
void* optval_end;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ467
{
void* optval_end;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

struct bpf_sockopt
{
    union {
        struct bpf_sock*  sk  ;
        unsigned long  long  :64  ;
    };
    union {
        void* optval;
        unsigned long  long  :64  ;
    };
    union {
        void* optval_end;
        unsigned long  long  :64  ;
    };
    int  level  ;
    int  optname  ;
    int  optlen  ;
    int  retval  ;
};

struct bpf_pidns_info
{
    unsigned int  pid  ;
    unsigned int  tgid  ;
};

union anonymous_typeZ469
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ468
{
    union {
        struct bpf_sock*  sk  ;
        unsigned long  long  :64  ;
    };
unsigned long  long  cookie  ;
};

union anonymous_typeZ471
{
struct bpf_sock*  sk  ;
unsigned long  long  :64  ;
} __attribute__((aligned(8)));

union anonymous_typeZ470
{
    union {
        struct bpf_sock*  sk  ;
        unsigned long  long  :64  ;
    };
unsigned long  long  cookie  ;
};

struct bpf_sk_lookup
{
    union {
        union {
            struct bpf_sock*  sk  ;
            unsigned long  long  :64  ;
        };
        unsigned long  long  cookie  ;
    };
    unsigned int  family  ;
    unsigned int  protocol  ;
    unsigned int  remote_ip4  ;
    unsigned int  remote_ip6[4]  ;
    unsigned short int  remote_port  ;
    unsigned short int  :16  ;
    unsigned int  local_ip4  ;
    unsigned int  local_ip6[4]  ;
    unsigned int  local_port  ;
    unsigned int  ingress_ifindex  ;
};

struct btf_ptr
{
    void* ptr;
    unsigned int  type_id  ;
    unsigned int  flags  ;
};

enum { BTF_F_COMPACT=((1ULL<<0)),
BTF_F_NONAME=((1ULL<<1)),
BTF_F_PTR_RAW=((1ULL<<2)),
BTF_F_ZERO=((1ULL<<3))
};

enum  bpf_core_relo_kind { BPF_CORE_FIELD_BYTE_OFFSET=(0),
BPF_CORE_FIELD_BYTE_SIZE=(1),
BPF_CORE_FIELD_EXISTS=(2),
BPF_CORE_FIELD_SIGNED=(3),
BPF_CORE_FIELD_LSHIFT_U64=(4),
BPF_CORE_FIELD_RSHIFT_U64=(5),
BPF_CORE_TYPE_ID_LOCAL=(6),
BPF_CORE_TYPE_ID_TARGET=(7),
BPF_CORE_TYPE_EXISTS=(8),
BPF_CORE_TYPE_SIZE=(9),
BPF_CORE_ENUMVAL_EXISTS=(10),
BPF_CORE_ENUMVAL_VALUE=(11),
BPF_CORE_TYPE_MATCHES=(12)
};

struct bpf_core_relo
{
    unsigned int  insn_off  ;
    unsigned int  type_id  ;
    unsigned int  access_str_off  ;
    enum bpf_core_relo_kind kind;
};

enum { BPF_F_TIMER_ABS=((1ULL<<0)),
BPF_F_TIMER_CPU_PIN=((1ULL<<1))
};

struct bpf_iter_num
{
    unsigned long  long  __opaque[1]  ;
} __attribute__((aligned(8)));

enum  bpf_kfunc_flags { BPF_F_PAD_ZEROS=((1ULL<<0))
};

enum  perf_type_id { PERF_TYPE_HARDWARE=(0),
PERF_TYPE_SOFTWARE=(1),
PERF_TYPE_TRACEPOINT=(2),
PERF_TYPE_HW_CACHE=(3),
PERF_TYPE_RAW=(4),
PERF_TYPE_BREAKPOINT=(5),
PERF_TYPE_MAX 
};

enum  perf_hw_id { PERF_COUNT_HW_CPU_CYCLES=(0),
PERF_COUNT_HW_INSTRUCTIONS=(1),
PERF_COUNT_HW_CACHE_REFERENCES=(2),
PERF_COUNT_HW_CACHE_MISSES=(3),
PERF_COUNT_HW_BRANCH_INSTRUCTIONS=(4),
PERF_COUNT_HW_BRANCH_MISSES=(5),
PERF_COUNT_HW_BUS_CYCLES=(6),
PERF_COUNT_HW_STALLED_CYCLES_FRONTEND=(7),
PERF_COUNT_HW_STALLED_CYCLES_BACKEND=(8),
PERF_COUNT_HW_REF_CPU_CYCLES=(9),
PERF_COUNT_HW_MAX 
};

enum  perf_hw_cache_id { PERF_COUNT_HW_CACHE_L1D=(0),
PERF_COUNT_HW_CACHE_L1I=(1),
PERF_COUNT_HW_CACHE_LL=(2),
PERF_COUNT_HW_CACHE_DTLB=(3),
PERF_COUNT_HW_CACHE_ITLB=(4),
PERF_COUNT_HW_CACHE_BPU=(5),
PERF_COUNT_HW_CACHE_NODE=(6),
PERF_COUNT_HW_CACHE_MAX 
};

enum  perf_hw_cache_op_id { PERF_COUNT_HW_CACHE_OP_READ=(0),
PERF_COUNT_HW_CACHE_OP_WRITE=(1),
PERF_COUNT_HW_CACHE_OP_PREFETCH=(2),
PERF_COUNT_HW_CACHE_OP_MAX 
};

enum  perf_hw_cache_op_result_id { PERF_COUNT_HW_CACHE_RESULT_ACCESS=(0),
PERF_COUNT_HW_CACHE_RESULT_MISS=(1),
PERF_COUNT_HW_CACHE_RESULT_MAX 
};

enum  perf_sw_ids { PERF_COUNT_SW_CPU_CLOCK=(0),
PERF_COUNT_SW_TASK_CLOCK=(1),
PERF_COUNT_SW_PAGE_FAULTS=(2),
PERF_COUNT_SW_CONTEXT_SWITCHES=(3),
PERF_COUNT_SW_CPU_MIGRATIONS=(4),
PERF_COUNT_SW_PAGE_FAULTS_MIN=(5),
PERF_COUNT_SW_PAGE_FAULTS_MAJ=(6),
PERF_COUNT_SW_ALIGNMENT_FAULTS=(7),
PERF_COUNT_SW_EMULATION_FAULTS=(8),
PERF_COUNT_SW_DUMMY=(9),
PERF_COUNT_SW_BPF_OUTPUT=(10),
PERF_COUNT_SW_CGROUP_SWITCHES=(11),
PERF_COUNT_SW_MAX 
};

enum  perf_event_sample_format { PERF_SAMPLE_IP=(1U<<0),
PERF_SAMPLE_TID=(1U<<1),
PERF_SAMPLE_TIME=(1U<<2),
PERF_SAMPLE_ADDR=(1U<<3),
PERF_SAMPLE_READ=(1U<<4),
PERF_SAMPLE_CALLCHAIN=(1U<<5),
PERF_SAMPLE_ID=(1U<<6),
PERF_SAMPLE_CPU=(1U<<7),
PERF_SAMPLE_PERIOD=(1U<<8),
PERF_SAMPLE_STREAM_ID=(1U<<9),
PERF_SAMPLE_RAW=(1U<<10),
PERF_SAMPLE_BRANCH_STACK=(1U<<11),
PERF_SAMPLE_REGS_USER=(1U<<12),
PERF_SAMPLE_STACK_USER=(1U<<13),
PERF_SAMPLE_WEIGHT=(1U<<14),
PERF_SAMPLE_DATA_SRC=(1U<<15),
PERF_SAMPLE_IDENTIFIER=(1U<<16),
PERF_SAMPLE_TRANSACTION=(1U<<17),
PERF_SAMPLE_REGS_INTR=(1U<<18),
PERF_SAMPLE_PHYS_ADDR=(1U<<19),
PERF_SAMPLE_AUX=(1U<<20),
PERF_SAMPLE_CGROUP=(1U<<21),
PERF_SAMPLE_DATA_PAGE_SIZE=(1U<<22),
PERF_SAMPLE_CODE_PAGE_SIZE=(1U<<23),
PERF_SAMPLE_WEIGHT_STRUCT=(1U<<24),
PERF_SAMPLE_MAX=(1U<<25)
};

enum  perf_branch_sample_type_shift { PERF_SAMPLE_BRANCH_USER_SHIFT=(0),
PERF_SAMPLE_BRANCH_KERNEL_SHIFT=(1),
PERF_SAMPLE_BRANCH_HV_SHIFT=(2),
PERF_SAMPLE_BRANCH_ANY_SHIFT=(3),
PERF_SAMPLE_BRANCH_ANY_CALL_SHIFT=(4),
PERF_SAMPLE_BRANCH_ANY_RETURN_SHIFT=(5),
PERF_SAMPLE_BRANCH_IND_CALL_SHIFT=(6),
PERF_SAMPLE_BRANCH_ABORT_TX_SHIFT=(7),
PERF_SAMPLE_BRANCH_IN_TX_SHIFT=(8),
PERF_SAMPLE_BRANCH_NO_TX_SHIFT=(9),
PERF_SAMPLE_BRANCH_COND_SHIFT=(10),
PERF_SAMPLE_BRANCH_CALL_STACK_SHIFT=(11),
PERF_SAMPLE_BRANCH_IND_JUMP_SHIFT=(12),
PERF_SAMPLE_BRANCH_CALL_SHIFT=(13),
PERF_SAMPLE_BRANCH_NO_FLAGS_SHIFT=(14),
PERF_SAMPLE_BRANCH_NO_CYCLES_SHIFT=(15),
PERF_SAMPLE_BRANCH_TYPE_SAVE_SHIFT=(16),
PERF_SAMPLE_BRANCH_HW_INDEX_SHIFT=(17),
PERF_SAMPLE_BRANCH_PRIV_SAVE_SHIFT=(18),
PERF_SAMPLE_BRANCH_COUNTERS_SHIFT=(19),
PERF_SAMPLE_BRANCH_MAX_SHIFT 
};

enum  perf_branch_sample_type { PERF_SAMPLE_BRANCH_USER=(1U<<(0)),
PERF_SAMPLE_BRANCH_KERNEL=(1U<<(1)),
PERF_SAMPLE_BRANCH_HV=(1U<<(2)),
PERF_SAMPLE_BRANCH_ANY=(1U<<(3)),
PERF_SAMPLE_BRANCH_ANY_CALL=(1U<<(4)),
PERF_SAMPLE_BRANCH_ANY_RETURN=(1U<<(5)),
PERF_SAMPLE_BRANCH_IND_CALL=(1U<<(6)),
PERF_SAMPLE_BRANCH_ABORT_TX=(1U<<(7)),
PERF_SAMPLE_BRANCH_IN_TX=(1U<<(8)),
PERF_SAMPLE_BRANCH_NO_TX=(1U<<(9)),
PERF_SAMPLE_BRANCH_COND=(1U<<(10)),
PERF_SAMPLE_BRANCH_CALL_STACK=(1U<<(11)),
PERF_SAMPLE_BRANCH_IND_JUMP=(1U<<(12)),
PERF_SAMPLE_BRANCH_CALL=(1U<<(13)),
PERF_SAMPLE_BRANCH_NO_FLAGS=(1U<<(14)),
PERF_SAMPLE_BRANCH_NO_CYCLES=(1U<<(15)),
PERF_SAMPLE_BRANCH_TYPE_SAVE=(1U<<(16)),
PERF_SAMPLE_BRANCH_HW_INDEX=(1U<<(17)),
PERF_SAMPLE_BRANCH_PRIV_SAVE=(1U<<(18)),
PERF_SAMPLE_BRANCH_COUNTERS=(1U<<(19)),
PERF_SAMPLE_BRANCH_MAX=(1U<<(19+1))
};

enum { PERF_BR_UNKNOWN=(0),
PERF_BR_COND=(1),
PERF_BR_UNCOND=(2),
PERF_BR_IND=(3),
PERF_BR_CALL=(4),
PERF_BR_IND_CALL=(5),
PERF_BR_RET=(6),
PERF_BR_SYSCALL=(7),
PERF_BR_SYSRET=(8),
PERF_BR_COND_CALL=(9),
PERF_BR_COND_RET=(10),
PERF_BR_ERET=(11),
PERF_BR_IRQ=(12),
PERF_BR_SERROR=(13),
PERF_BR_NO_TX=(14),
PERF_BR_EXTEND_ABI=(15),
PERF_BR_MAX 
};

enum { PERF_BR_SPEC_NA=(0),
PERF_BR_SPEC_WRONG_PATH=(1),
PERF_BR_NON_SPEC_CORRECT_PATH=(2),
PERF_BR_SPEC_CORRECT_PATH=(3),
PERF_BR_SPEC_MAX 
};

enum { PERF_BR_NEW_FAULT_ALGN=(0),
PERF_BR_NEW_FAULT_DATA=(1),
PERF_BR_NEW_FAULT_INST=(2),
PERF_BR_NEW_ARCH_1=(3),
PERF_BR_NEW_ARCH_2=(4),
PERF_BR_NEW_ARCH_3=(5),
PERF_BR_NEW_ARCH_4=(6),
PERF_BR_NEW_ARCH_5=(7),
PERF_BR_NEW_MAX 
};

enum { PERF_BR_PRIV_UNKNOWN=(0),
PERF_BR_PRIV_USER=(1),
PERF_BR_PRIV_KERNEL=(2),
PERF_BR_PRIV_HV=(3)
};

enum  perf_sample_regs_abi { PERF_SAMPLE_REGS_ABI_NONE=(0),
PERF_SAMPLE_REGS_ABI_32=(1),
PERF_SAMPLE_REGS_ABI_64=(2)
};

enum { PERF_TXN_ELISION=((1<<0)),
PERF_TXN_TRANSACTION=((1<<1)),
PERF_TXN_SYNC=((1<<2)),
PERF_TXN_ASYNC=((1<<3)),
PERF_TXN_RETRY=((1<<4)),
PERF_TXN_CONFLICT=((1<<5)),
PERF_TXN_CAPACITY_WRITE=((1<<6)),
PERF_TXN_CAPACITY_READ=((1<<7)),
PERF_TXN_MAX=((1<<8)),
PERF_TXN_ABORT_MASK=((0xffffffffULL<<32)),
PERF_TXN_ABORT_SHIFT=(32)
};

enum  perf_event_read_format { PERF_FORMAT_TOTAL_TIME_ENABLED=(1U<<0),
PERF_FORMAT_TOTAL_TIME_RUNNING=(1U<<1),
PERF_FORMAT_ID=(1U<<2),
PERF_FORMAT_GROUP=(1U<<3),
PERF_FORMAT_LOST=(1U<<4),
PERF_FORMAT_MAX=(1U<<5)
};

union anonymous_typeZ472
{
unsigned long  long  sample_period  ;
unsigned long  long  sample_freq  ;
};

union anonymous_typeZ473
{
unsigned long  long  sample_period  ;
unsigned long  long  sample_freq  ;
};

union anonymous_typeZ474
{
unsigned int  wakeup_events  ;
unsigned int  wakeup_watermark  ;
};

union anonymous_typeZ475
{
unsigned int  wakeup_events  ;
unsigned int  wakeup_watermark  ;
};

union anonymous_typeZ476
{
unsigned long  long  bp_addr  ;
unsigned long  long  kprobe_func  ;
unsigned long  long  uprobe_path  ;
unsigned long  long  config1  ;
};

union anonymous_typeZ477
{
unsigned long  long  bp_addr  ;
unsigned long  long  kprobe_func  ;
unsigned long  long  uprobe_path  ;
unsigned long  long  config1  ;
};

union anonymous_typeZ478
{
unsigned long  long  bp_len  ;
unsigned long  long  kprobe_addr  ;
unsigned long  long  probe_offset  ;
unsigned long  long  config2  ;
};

union anonymous_typeZ479
{
unsigned long  long  bp_len  ;
unsigned long  long  kprobe_addr  ;
unsigned long  long  probe_offset  ;
unsigned long  long  config2  ;
};

struct anonymous_typeX481
{
    unsigned int  aux_start_paused:1  ;
    unsigned int  aux_pause:1  ;
    unsigned int  aux_resume:1  ;
    unsigned int  __reserved_3:29  ;
};

union anonymous_typeZ480
{
unsigned int  aux_action  ;
    struct {
        unsigned int  aux_start_paused:1  ;
        unsigned int  aux_pause:1  ;
        unsigned int  aux_resume:1  ;
        unsigned int  __reserved_3:29  ;
    };
};

struct anonymous_typeX483
{
    unsigned int  aux_start_paused:1  ;
    unsigned int  aux_pause:1  ;
    unsigned int  aux_resume:1  ;
    unsigned int  __reserved_3:29  ;
};

union anonymous_typeZ482
{
unsigned int  aux_action  ;
    struct {
        unsigned int  aux_start_paused:1  ;
        unsigned int  aux_pause:1  ;
        unsigned int  aux_resume:1  ;
        unsigned int  __reserved_3:29  ;
    };
};

struct perf_event_attr
{
    unsigned int  type  ;
    unsigned int  size  ;
    unsigned long  long  config  ;
    union {
        unsigned long  long  sample_period  ;
        unsigned long  long  sample_freq  ;
    };
    unsigned long  long  sample_type  ;
    unsigned long  long  read_format  ;
    unsigned long  long  disabled:1  ;
    unsigned long  long  inherit:1  ;
    unsigned long  long  pinned:1  ;
    unsigned long  long  exclusive:1  ;
    unsigned long  long  exclude_user:1  ;
    unsigned long  long  exclude_kernel:1  ;
    unsigned long  long  exclude_hv:1  ;
    unsigned long  long  exclude_idle:1  ;
    unsigned long  long  mmap:1  ;
    unsigned long  long  comm:1  ;
    unsigned long  long  freq:1  ;
    unsigned long  long  inherit_stat:1  ;
    unsigned long  long  enable_on_exec:1  ;
    unsigned long  long  task:1  ;
    unsigned long  long  watermark:1  ;
    unsigned long  long  precise_ip:2  ;
    unsigned long  long  mmap_data:1  ;
    unsigned long  long  sample_id_all:1  ;
    unsigned long  long  exclude_host:1  ;
    unsigned long  long  exclude_guest:1  ;
    unsigned long  long  exclude_callchain_kernel:1  ;
    unsigned long  long  exclude_callchain_user:1  ;
    unsigned long  long  mmap2:1  ;
    unsigned long  long  comm_exec:1  ;
    unsigned long  long  use_clockid:1  ;
    unsigned long  long  context_switch:1  ;
    unsigned long  long  write_backward:1  ;
    unsigned long  long  namespaces:1  ;
    unsigned long  long  ksymbol:1  ;
    unsigned long  long  bpf_event:1  ;
    unsigned long  long  aux_output:1  ;
    unsigned long  long  cgroup:1  ;
    unsigned long  long  text_poke:1  ;
    unsigned long  long  build_id:1  ;
    unsigned long  long  inherit_thread:1  ;
    unsigned long  long  remove_on_exec:1  ;
    unsigned long  long  sigtrap:1  ;
    unsigned long  long  __reserved_1:26  ;
    union {
        unsigned int  wakeup_events  ;
        unsigned int  wakeup_watermark  ;
    };
    unsigned int  bp_type  ;
    union {
        unsigned long  long  bp_addr  ;
        unsigned long  long  kprobe_func  ;
        unsigned long  long  uprobe_path  ;
        unsigned long  long  config1  ;
    };
    union {
        unsigned long  long  bp_len  ;
        unsigned long  long  kprobe_addr  ;
        unsigned long  long  probe_offset  ;
        unsigned long  long  config2  ;
    };
    unsigned long  long  branch_sample_type  ;
    unsigned long  long  sample_regs_user  ;
    unsigned int  sample_stack_user  ;
    int  clockid  ;
    unsigned long  long  sample_regs_intr  ;
    unsigned int  aux_watermark  ;
    unsigned short int  sample_max_stack  ;
    unsigned short int  __reserved_2  ;
    unsigned int  aux_sample_size  ;
    union {
        unsigned int  aux_action  ;
        struct {
            unsigned int  aux_start_paused:1  ;
            unsigned int  aux_pause:1  ;
            unsigned int  aux_resume:1  ;
            unsigned int  __reserved_3:29  ;
        };
    };
    unsigned long  long  sig_data  ;
    unsigned long  long  config3  ;
};

struct perf_event_query_bpf
{
    unsigned int  ids_len  ;
    unsigned int  prog_cnt  ;
    unsigned int  ids[]  ;
};

enum  perf_event_ioc_flags { PERF_IOC_FLAG_GROUP=(1U<<0)
};

struct anonymous_typeX485
{
    unsigned long  long  cap_bit0:1  ;
    unsigned long  long  cap_bit0_is_deprecated:1  ;
    unsigned long  long  cap_user_rdpmc:1  ;
    unsigned long  long  cap_user_time:1  ;
    unsigned long  long  cap_user_time_zero:1  ;
    unsigned long  long  cap_user_time_short:1  ;
    unsigned long  long  cap_____res:58  ;
};

union anonymous_typeZ484
{
unsigned long  long  capabilities  ;
    struct {
        unsigned long  long  cap_bit0:1  ;
        unsigned long  long  cap_bit0_is_deprecated:1  ;
        unsigned long  long  cap_user_rdpmc:1  ;
        unsigned long  long  cap_user_time:1  ;
        unsigned long  long  cap_user_time_zero:1  ;
        unsigned long  long  cap_user_time_short:1  ;
        unsigned long  long  cap_____res:58  ;
    };
};

struct anonymous_typeX487
{
    unsigned long  long  cap_bit0:1  ;
    unsigned long  long  cap_bit0_is_deprecated:1  ;
    unsigned long  long  cap_user_rdpmc:1  ;
    unsigned long  long  cap_user_time:1  ;
    unsigned long  long  cap_user_time_zero:1  ;
    unsigned long  long  cap_user_time_short:1  ;
    unsigned long  long  cap_____res:58  ;
};

union anonymous_typeZ486
{
unsigned long  long  capabilities  ;
    struct {
        unsigned long  long  cap_bit0:1  ;
        unsigned long  long  cap_bit0_is_deprecated:1  ;
        unsigned long  long  cap_user_rdpmc:1  ;
        unsigned long  long  cap_user_time:1  ;
        unsigned long  long  cap_user_time_zero:1  ;
        unsigned long  long  cap_user_time_short:1  ;
        unsigned long  long  cap_____res:58  ;
    };
};

struct perf_event_mmap_page
{
    unsigned int  version  ;
    unsigned int  compat_version  ;
    unsigned int  lock  ;
    unsigned int  index  ;
    long long  offset  ;
    unsigned long  long  time_enabled  ;
    unsigned long  long  time_running  ;
    union {
        unsigned long  long  capabilities  ;
        struct {
            unsigned long  long  cap_bit0:1  ;
            unsigned long  long  cap_bit0_is_deprecated:1  ;
            unsigned long  long  cap_user_rdpmc:1  ;
            unsigned long  long  cap_user_time:1  ;
            unsigned long  long  cap_user_time_zero:1  ;
            unsigned long  long  cap_user_time_short:1  ;
            unsigned long  long  cap_____res:58  ;
        };
    };
    unsigned short int  pmc_width  ;
    unsigned short int  time_shift  ;
    unsigned int  time_mult  ;
    unsigned long  long  time_offset  ;
    unsigned long  long  time_zero  ;
    unsigned int  size  ;
    unsigned int  __reserved_1  ;
    unsigned long  long  time_cycles  ;
    unsigned long  long  time_mask  ;
    unsigned char  __reserved[116*8]  ;
    unsigned long  long  data_head  ;
    unsigned long  long  data_tail  ;
    unsigned long  long  data_offset  ;
    unsigned long  long  data_size  ;
    unsigned long  long  aux_head  ;
    unsigned long  long  aux_tail  ;
    unsigned long  long  aux_offset  ;
    unsigned long  long  aux_size  ;
};

struct perf_event_header
{
    unsigned int  type  ;
    unsigned short int  misc  ;
    unsigned short int  size  ;
};

struct perf_ns_link_info
{
    unsigned long  long  dev  ;
    unsigned long  long  ino  ;
};

enum { NET_NS_INDEX=(0),
UTS_NS_INDEX=(1),
IPC_NS_INDEX=(2),
PID_NS_INDEX=(3),
USER_NS_INDEX=(4),
MNT_NS_INDEX=(5),
CGROUP_NS_INDEX=(6),
NR_NAMESPACES 
};

enum  perf_event_type { PERF_RECORD_MMAP=(1),
PERF_RECORD_LOST=(2),
PERF_RECORD_COMM=(3),
PERF_RECORD_EXIT=(4),
PERF_RECORD_THROTTLE=(5),
PERF_RECORD_UNTHROTTLE=(6),
PERF_RECORD_FORK=(7),
PERF_RECORD_READ=(8),
PERF_RECORD_SAMPLE=(9),
PERF_RECORD_MMAP2=(10),
PERF_RECORD_AUX=(11),
PERF_RECORD_ITRACE_START=(12),
PERF_RECORD_LOST_SAMPLES=(13),
PERF_RECORD_SWITCH=(14),
PERF_RECORD_SWITCH_CPU_WIDE=(15),
PERF_RECORD_NAMESPACES=(16),
PERF_RECORD_KSYMBOL=(17),
PERF_RECORD_BPF_EVENT=(18),
PERF_RECORD_CGROUP=(19),
PERF_RECORD_TEXT_POKE=(20),
PERF_RECORD_AUX_OUTPUT_HW_ID=(21),
PERF_RECORD_MAX 
};

enum  perf_record_ksymbol_type { PERF_RECORD_KSYMBOL_TYPE_UNKNOWN=(0),
PERF_RECORD_KSYMBOL_TYPE_BPF=(1),
PERF_RECORD_KSYMBOL_TYPE_OOL=(2),
PERF_RECORD_KSYMBOL_TYPE_MAX 
};

enum  perf_bpf_event_type { PERF_BPF_EVENT_UNKNOWN=(0),
PERF_BPF_EVENT_PROG_LOAD=(1),
PERF_BPF_EVENT_PROG_UNLOAD=(2),
PERF_BPF_EVENT_MAX 
};

enum  perf_callchain_context { PERF_CONTEXT_HV=((unsigned long  long )-32),
PERF_CONTEXT_KERNEL=((unsigned long  long )-128),
PERF_CONTEXT_USER=((unsigned long  long )-512),
PERF_CONTEXT_GUEST=((unsigned long  long )-2048),
PERF_CONTEXT_GUEST_KERNEL=((unsigned long  long )-2176),
PERF_CONTEXT_GUEST_USER=((unsigned long  long )-2560),
PERF_CONTEXT_MAX=((unsigned long  long )-4095)
};

struct anonymous_typeX488
{
    unsigned long  long  mem_op:5  ;
    unsigned long  long  mem_lvl:14  ;
    unsigned long  long  mem_snoop:5  ;
    unsigned long  long  mem_lock:2  ;
    unsigned long  long  mem_dtlb:7  ;
    unsigned long  long  mem_lvl_num:4  ;
    unsigned long  long  mem_remote:1  ;
    unsigned long  long  mem_snoopx:2  ;
    unsigned long  long  mem_blk:3  ;
    unsigned long  long  mem_hops:3  ;
    unsigned long  long  mem_rsvd:18  ;
};

union perf_mem_data_src
{
unsigned long  long  val  ;
    struct {
        unsigned long  long  mem_op:5  ;
        unsigned long  long  mem_lvl:14  ;
        unsigned long  long  mem_snoop:5  ;
        unsigned long  long  mem_lock:2  ;
        unsigned long  long  mem_dtlb:7  ;
        unsigned long  long  mem_lvl_num:4  ;
        unsigned long  long  mem_remote:1  ;
        unsigned long  long  mem_snoopx:2  ;
        unsigned long  long  mem_blk:3  ;
        unsigned long  long  mem_hops:3  ;
        unsigned long  long  mem_rsvd:18  ;
    };
};

struct perf_branch_entry
{
    unsigned long  long  from  ;
    unsigned long  long  to  ;
    unsigned long  long  mispred:1  ;
    unsigned long  long  predicted:1  ;
    unsigned long  long  in_tx:1  ;
    unsigned long  long  abort:1  ;
    unsigned long  long  cycles:16  ;
    unsigned long  long  type:4  ;
    unsigned long  long  spec:2  ;
    unsigned long  long  new_type:4  ;
    unsigned long  long  priv:3  ;
    unsigned long  long  reserved:31  ;
};

struct anonymous_typeX489
{
    unsigned int  var1_dw  ;
    unsigned short int  var2_w  ;
    unsigned short int  var3_w  ;
};

union perf_sample_weight
{
unsigned long  long  full  ;
    struct {
        unsigned int  var1_dw  ;
        unsigned short int  var2_w  ;
        unsigned short int  var3_w  ;
    };
};

struct sockaddr_pkt
{
    unsigned short int spkt_family;
    unsigned char spkt_device[14];
    unsigned short int  spkt_protocol  ;
};

struct sockaddr_ll
{
    unsigned short int sll_family;
    unsigned short int  sll_protocol  ;
    int sll_ifindex;
    unsigned short int sll_hatype;
    unsigned char sll_pkttype;
    unsigned char sll_halen;
    unsigned char sll_addr[8];
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

union anonymous_typeZ490
{
struct tpacket_hdr_variant1  hv1  ;
};

union anonymous_typeZ491
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

union anonymous_typeZ492
{
unsigned int ts_usec;
unsigned int ts_nsec;
};

union anonymous_typeZ493
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

struct packet_mreq
{
    int mr_ifindex;
    unsigned short int mr_type;
    unsigned short int mr_alen;
    unsigned char mr_address[8];
};

struct fanout_args
{
    unsigned short int  id  ;
    unsigned short int  type_flags  ;
    unsigned int  max_num_members  ;
};

struct ethhdr
{
    unsigned char h_dest[6];
    unsigned char h_source[6];
    unsigned short int  h_proto  ;
} __attribute__((packed));

struct anonymous_typeX494
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

struct anonymous_typeX495
{
    long  int  fds_bits[1024/(8*(int)sizeof(long  int ))]  ;
};

struct anonymous_typeX497
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ496
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

struct anonymous_typeX498
{
    int __data;
};

union anonymous_typeZ499
{
char __size[4];
int __align;
};

union anonymous_typeZ500
{
char __size[4];
int __align;
};

union pthread_attr_t
{
char __size[56];
long  int __align;
};

union anonymous_typeZ501
{
struct __pthread_mutex_s  __data  ;
char __size[40];
long  int __align;
};

union anonymous_typeZ502
{
struct __pthread_cond_s  __data  ;
char __size[48];
long long int __align;
};

union anonymous_typeZ503
{
struct __pthread_rwlock_arch_t  __data  ;
char __size[56];
long  int __align;
};

union anonymous_typeZ504
{
char __size[8];
long  int __align;
};

union anonymous_typeZ505
{
char __size[32];
long  int __align;
};

union anonymous_typeZ506
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

struct anonymous_typeX507
{
    unsigned int clock_rate;
    unsigned int clock_type;
    unsigned short int loopback;
};

struct anonymous_typeX508
{
    unsigned int clock_rate;
    unsigned int clock_type;
    unsigned short int loopback;
    unsigned int slot_map;
};

struct anonymous_typeX509
{
    unsigned short int encoding;
    unsigned short int parity;
};

struct anonymous_typeX510
{
    unsigned int t391;
    unsigned int t392;
    unsigned int n391;
    unsigned int n392;
    unsigned int n393;
    unsigned short int lmi;
    unsigned short int dce;
};

struct anonymous_typeX511
{
    unsigned int dlci;
};

struct anonymous_typeX512
{
    unsigned int dlci;
    char master[16];
};

struct anonymous_typeX513
{
    unsigned int interval;
    unsigned int timeout;
};

struct anonymous_typeX514
{
    unsigned short int dce;
    unsigned int modulo;
    unsigned int window;
    unsigned int t1;
    unsigned int t2;
    unsigned int n2;
};

enum  net_device_flags { IFF_UP=(1<<0),
IFF_BROADCAST=(1<<1),
IFF_DEBUG=(1<<2),
IFF_LOOPBACK=(1<<3),
IFF_POINTOPOINT=(1<<4),
IFF_NOTRAILERS=(1<<5),
IFF_RUNNING=(1<<6),
IFF_NOARP=(1<<7),
IFF_PROMISC=(1<<8),
IFF_ALLMULTI=(1<<9),
IFF_MASTER=(1<<10),
IFF_SLAVE=(1<<11),
IFF_MULTICAST=(1<<12),
IFF_PORTSEL=(1<<13),
IFF_AUTOMEDIA=(1<<14),
IFF_DYNAMIC=(1<<15),
IFF_LOWER_UP=(1<<16),
IFF_DORMANT=(1<<17),
IFF_ECHO=(1<<18)
};

enum { IF_OPER_UNKNOWN 
,IF_OPER_NOTPRESENT 
,IF_OPER_DOWN 
,IF_OPER_LOWERLAYERDOWN 
,IF_OPER_TESTING 
,IF_OPER_DORMANT 
,IF_OPER_UP 
};

enum { IF_LINK_MODE_DEFAULT 
,IF_LINK_MODE_DORMANT 
,IF_LINK_MODE_TESTING 
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

union anonymous_typeZ515
{
    struct {
        unsigned short int encoding;
        unsigned short int parity;
    } raw_hdlc;
    struct {
        unsigned int interval;
        unsigned int timeout;
    } cisco;
    struct {
        unsigned int t391;
        unsigned int t392;
        unsigned int n391;
        unsigned int n392;
        unsigned int n393;
        unsigned short int lmi;
        unsigned short int dce;
    } fr;
    struct {
        unsigned int dlci;
    } fr_pvc;
    struct {
        unsigned int dlci;
        char master[16];
    } fr_pvc_info;
    struct {
        unsigned short int dce;
        unsigned int modulo;
        unsigned int window;
        unsigned int t1;
        unsigned int t2;
        unsigned int n2;
    } x25;
    struct {
        unsigned int clock_rate;
        unsigned int clock_type;
        unsigned short int loopback;
    } sync;
    struct {
        unsigned int clock_rate;
        unsigned int clock_type;
        unsigned short int loopback;
        unsigned int slot_map;
    } te1;
};

union anonymous_typeZ516
{
    struct {
        unsigned short int encoding;
        unsigned short int parity;
    } raw_hdlc;
    struct {
        unsigned int interval;
        unsigned int timeout;
    } cisco;
    struct {
        unsigned int t391;
        unsigned int t392;
        unsigned int n391;
        unsigned int n392;
        unsigned int n393;
        unsigned short int lmi;
        unsigned short int dce;
    } fr;
    struct {
        unsigned int dlci;
    } fr_pvc;
    struct {
        unsigned int dlci;
        char master[16];
    } fr_pvc_info;
    struct {
        unsigned short int dce;
        unsigned int modulo;
        unsigned int window;
        unsigned int t1;
        unsigned int t2;
        unsigned int n2;
    } x25;
    struct {
        unsigned int clock_rate;
        unsigned int clock_type;
        unsigned short int loopback;
    } sync;
    struct {
        unsigned int clock_rate;
        unsigned int clock_type;
        unsigned short int loopback;
        unsigned int slot_map;
    } te1;
};

struct if_settings
{
    unsigned int type;
    unsigned int size;
    union {
        struct {
            unsigned short int encoding;
            unsigned short int parity;
        } raw_hdlc;
        struct {
            unsigned int interval;
            unsigned int timeout;
        } cisco;
        struct {
            unsigned int t391;
            unsigned int t392;
            unsigned int n391;
            unsigned int n392;
            unsigned int n393;
            unsigned short int lmi;
            unsigned short int dce;
        } fr;
        struct {
            unsigned int dlci;
        } fr_pvc;
        struct {
            unsigned int dlci;
            char master[16];
        } fr_pvc_info;
        struct {
            unsigned short int dce;
            unsigned int modulo;
            unsigned int window;
            unsigned int t1;
            unsigned int t2;
            unsigned int n2;
        } x25;
        struct {
            unsigned int clock_rate;
            unsigned int clock_type;
            unsigned short int loopback;
        } sync;
        struct {
            unsigned int clock_rate;
            unsigned int clock_type;
            unsigned short int loopback;
            unsigned int slot_map;
        } te1;
    } ifs_ifsu;
};

union anonymous_typeZ517
{
char ifrn_name[16];
};

union anonymous_typeZ518
{
char ifrn_name[16];
};

union anonymous_typeZ519
{
struct sockaddr  ifru_addr  ;
struct sockaddr  ifru_dstaddr  ;
struct sockaddr  ifru_broadaddr  ;
struct sockaddr  ifru_netmask  ;
struct sockaddr  ifru_hwaddr  ;
short ifru_flags;
int ifru_ivalue;
int ifru_mtu;
struct ifmap  ifru_map  ;
char ifru_slave[16];
char ifru_newname[16];
void* ifru_data;
struct if_settings  ifru_settings  ;
};

union anonymous_typeZ520
{
struct sockaddr  ifru_addr  ;
struct sockaddr  ifru_dstaddr  ;
struct sockaddr  ifru_broadaddr  ;
struct sockaddr  ifru_netmask  ;
struct sockaddr  ifru_hwaddr  ;
short ifru_flags;
int ifru_ivalue;
int ifru_mtu;
struct ifmap  ifru_map  ;
char ifru_slave[16];
char ifru_newname[16];
void* ifru_data;
struct if_settings  ifru_settings  ;
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
        short ifru_flags;
        int ifru_ivalue;
        int ifru_mtu;
        struct ifmap  ifru_map  ;
        char ifru_slave[16];
        char ifru_newname[16];
        void* ifru_data;
        struct if_settings  ifru_settings  ;
    } ifr_ifru;
};

union anonymous_typeZ521
{
char* ifcu_buf;
struct ifreq*  ifcu_req  ;
};

union anonymous_typeZ522
{
char* ifcu_buf;
struct ifreq*  ifcu_req  ;
};

struct ifconf
{
    int ifc_len;
    union {
        char* ifcu_buf;
        struct ifreq*  ifcu_req  ;
    } ifc_ifcu;
};

enum { IF_PORT_UNKNOWN=(0),
IF_PORT_10BASE2 
,IF_PORT_10BASET 
,IF_PORT_AUI 
,IF_PORT_100BASET 
,IF_PORT_100BASETX 
,IF_PORT_100BASEFX 
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

struct arphdr
{
    unsigned short int  ar_hrd  ;
    unsigned short int  ar_pro  ;
    unsigned char ar_hln;
    unsigned char ar_pln;
    unsigned short int  ar_op  ;
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
IPPROTO_AGGFRAG=(144),
IPPROTO_RAW=(255),
IPPROTO_SMC=(256),
IPPROTO_MPTCP=(262),
IPPROTO_MAX 
};

struct in_addr
{
    unsigned int  s_addr  ;
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

struct ip_mreq_source
{
    unsigned int  imr_multiaddr  ;
    unsigned int  imr_interface  ;
    unsigned int  imr_sourceaddr  ;
};

struct anonymous_typeX524
{
    struct {
    } __empty_imsf_slist_flex;
    unsigned int  imsf_slist_flex[]  ;
};

union anonymous_typeZ523
{
unsigned int  imsf_slist[1]  ;
    struct {
        struct {
        } __empty_imsf_slist_flex;
        unsigned int  imsf_slist_flex[]  ;
    };
};

struct anonymous_typeX528
{
    struct {
    } __empty_imsf_slist_flex;
    unsigned int  imsf_slist_flex[]  ;
};

union anonymous_typeZ527
{
unsigned int  imsf_slist[1]  ;
    struct {
        struct {
        } __empty_imsf_slist_flex;
        unsigned int  imsf_slist_flex[]  ;
    };
};

struct ip_msfilter
{
    unsigned int  imsf_multiaddr  ;
    unsigned int  imsf_interface  ;
    unsigned int  imsf_fmode  ;
    unsigned int  imsf_numsrc  ;
    union {
        unsigned int  imsf_slist[1]  ;
        struct {
            struct {
            } __empty_imsf_slist_flex;
            unsigned int  imsf_slist_flex[]  ;
        };
    };
};

struct group_req
{
    unsigned int  gr_interface  ;
    struct __kernel_sockaddr_storage  gr_group  ;
};

struct group_source_req
{
    unsigned int  gsr_interface  ;
    struct __kernel_sockaddr_storage  gsr_group  ;
    struct __kernel_sockaddr_storage  gsr_source  ;
};

struct anonymous_typeX532
{
    unsigned int  gf_interface_aux  ;
    struct __kernel_sockaddr_storage  gf_group_aux  ;
    unsigned int  gf_fmode_aux  ;
    unsigned int  gf_numsrc_aux  ;
    struct __kernel_sockaddr_storage  gf_slist[1]  ;
};

struct anonymous_typeX533
{
    unsigned int  gf_interface  ;
    struct __kernel_sockaddr_storage  gf_group  ;
    unsigned int  gf_fmode  ;
    unsigned int  gf_numsrc  ;
    struct __kernel_sockaddr_storage  gf_slist_flex[]  ;
};

union anonymous_typeZ531
{
    struct {
        unsigned int  gf_interface_aux  ;
        struct __kernel_sockaddr_storage  gf_group_aux  ;
        unsigned int  gf_fmode_aux  ;
        unsigned int  gf_numsrc_aux  ;
        struct __kernel_sockaddr_storage  gf_slist[1]  ;
    };
    struct {
        unsigned int  gf_interface  ;
        struct __kernel_sockaddr_storage  gf_group  ;
        unsigned int  gf_fmode  ;
        unsigned int  gf_numsrc  ;
        struct __kernel_sockaddr_storage  gf_slist_flex[]  ;
    };
};

struct anonymous_typeX535
{
    unsigned int  gf_interface_aux  ;
    struct __kernel_sockaddr_storage  gf_group_aux  ;
    unsigned int  gf_fmode_aux  ;
    unsigned int  gf_numsrc_aux  ;
    struct __kernel_sockaddr_storage  gf_slist[1]  ;
};

struct anonymous_typeX536
{
    unsigned int  gf_interface  ;
    struct __kernel_sockaddr_storage  gf_group  ;
    unsigned int  gf_fmode  ;
    unsigned int  gf_numsrc  ;
    struct __kernel_sockaddr_storage  gf_slist_flex[]  ;
};

union anonymous_typeZ534
{
    struct {
        unsigned int  gf_interface_aux  ;
        struct __kernel_sockaddr_storage  gf_group_aux  ;
        unsigned int  gf_fmode_aux  ;
        unsigned int  gf_numsrc_aux  ;
        struct __kernel_sockaddr_storage  gf_slist[1]  ;
    };
    struct {
        unsigned int  gf_interface  ;
        struct __kernel_sockaddr_storage  gf_group  ;
        unsigned int  gf_fmode  ;
        unsigned int  gf_numsrc  ;
        struct __kernel_sockaddr_storage  gf_slist_flex[]  ;
    };
};

struct group_filter
{
    union {
        struct {
            unsigned int  gf_interface_aux  ;
            struct __kernel_sockaddr_storage  gf_group_aux  ;
            unsigned int  gf_fmode_aux  ;
            unsigned int  gf_numsrc_aux  ;
            struct __kernel_sockaddr_storage  gf_slist[1]  ;
        };
        struct {
            unsigned int  gf_interface  ;
            struct __kernel_sockaddr_storage  gf_group  ;
            unsigned int  gf_fmode  ;
            unsigned int  gf_numsrc  ;
            struct __kernel_sockaddr_storage  gf_slist_flex[]  ;
        };
    };
};

struct in_pktinfo
{
    int ipi_ifindex;
    struct in_addr  ipi_spec_dst  ;
    struct in_addr  ipi_addr  ;
};

struct sockaddr_in
{
    unsigned short int  sin_family  ;
    unsigned short int  sin_port  ;
    struct in_addr  sin_addr  ;
    unsigned char __pad[16-sizeof(short int)-sizeof(unsigned short int)-sizeof(struct in_addr )];
};

struct sock_filter
{
    unsigned short int  code  ;
    unsigned char  jt  ;
    unsigned char  jf  ;
    unsigned int  k  ;
};

struct sock_fprog
{
    unsigned short int len;
    struct sock_filter*  filter  ;
};

struct tun_pi
{
    unsigned short int  flags  ;
    unsigned short int  proto  ;
};

struct tun_filter
{
    unsigned short int  flags  ;
    unsigned short int  count  ;
    unsigned char  addr[1][6]  ;
};

struct futex_waitv
{
    unsigned long  long  val  ;
    unsigned long  long  uaddr  ;
    unsigned int  flags  ;
    unsigned int  __reserved  ;
};

struct robust_list
{
    struct robust_list*  next  ;
};

struct robust_list_head
{
    struct robust_list  list  ;
    long futex_offset;
    struct robust_list*  list_op_pending  ;
};

/// variable definition ///
// source head

// header function
char* strdup(const char* );
int vsnprintf(char* , unsigned long  int , const char* , __builtin_va_list );
int snprintf(char* , unsigned long  int , const char* , ...);
int select(int __nfds, struct anonymous_typeX495* __restrict  __readfds  , struct anonymous_typeX495* __restrict  __writefds  , struct anonymous_typeX495* __restrict  __exceptfds  , struct timeval* __restrict  __timeout  );
int pselect(int __nfds, struct anonymous_typeX495* __restrict  __readfds  , struct anonymous_typeX495* __restrict  __writefds  , struct anonymous_typeX495* __restrict  __exceptfds  , const struct timespec* __restrict  __timeout  , const struct anonymous_typeX494* __restrict  __sigmask  );
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
int test_headers_linux();
// uniq global variable
// inline function
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
static inline unsigned long  int __swab(const unsigned long  int y)
{
    return (unsigned long  long )(((__builtin_constant_p(y))?(((unsigned long  long )((((unsigned long  long )(y)&(unsigned long  long )0x00000000000000ffULL)<<56)|(((unsigned long  long )(y)&(unsigned long  long )0x000000000000ff00ULL)<<40)|(((unsigned long  long )(y)&(unsigned long  long )0x0000000000ff0000ULL)<<24)|(((unsigned long  long )(y)&(unsigned long  long )0x00000000ff000000ULL)<<8)|(((unsigned long  long )(y)&(unsigned long  long )0x000000ff00000000ULL)>>8)|(((unsigned long  long )(y)&(unsigned long  long )0x0000ff0000000000ULL)>>24)|(((unsigned long  long )(y)&(unsigned long  long )0x00ff000000000000ULL)>>40)|(((unsigned long  long )(y)&(unsigned long  long )0xff00000000000000ULL)>>56)))):(__fswab64(y))));
}
static inline unsigned short int  __swab16p(const unsigned short int*  p  )
{
    return (unsigned short int )(((__builtin_constant_p(*p))?(((unsigned short int )((((unsigned short int )(*p)&(unsigned short int )0x00ffU)<<8)|(((unsigned short int )(*p)&(unsigned short int )0xff00U)>>8)))):(__fswab16(*p))));
}
static inline unsigned int  __swab32p(const unsigned int*  p  )
{
    return (unsigned int )(((__builtin_constant_p(*p))?(((unsigned int )((((unsigned int )(*p)&(unsigned int )0x000000ffUL)<<24)|(((unsigned int )(*p)&(unsigned int )0x0000ff00UL)<<8)|(((unsigned int )(*p)&(unsigned int )0x00ff0000UL)>>8)|(((unsigned int )(*p)&(unsigned int )0xff000000UL)>>24)))):(__fswab32(*p))));
}
static inline unsigned long  long  __swab64p(const unsigned long  long*  p  )
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
static inline void __swab32s(unsigned int*  p  )
{
    *p=__swab32p(p);
}
static inline void __swab64s(unsigned long  long*  p  )
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
static inline unsigned long  long  __cpu_to_le64p(const unsigned long  long*  p  )
{
    return (unsigned long  long )*p;
}
static inline unsigned long  long  __le64_to_cpup(const unsigned long  long*  p  )
{
    return (unsigned long  long )*p;
}
static inline unsigned int  __cpu_to_le32p(const unsigned int*  p  )
{
    return (unsigned int )*p;
}
static inline unsigned int  __le32_to_cpup(const unsigned int*  p  )
{
    return (unsigned int )*p;
}
static inline unsigned short int  __cpu_to_le16p(const unsigned short int*  p  )
{
    return (unsigned short int )*p;
}
static inline unsigned short int  __le16_to_cpup(const unsigned short int*  p  )
{
    return (unsigned short int )*p;
}
static inline unsigned long  long  __cpu_to_be64p(const unsigned long  long*  p  )
{
    return (unsigned long  long )__swab64p(p);
}
static inline unsigned long  long  __be64_to_cpup(const unsigned long  long*  p  )
{
    return __swab64p((unsigned long  long* )p);
}
static inline unsigned int  __cpu_to_be32p(const unsigned int*  p  )
{
    return (unsigned int )__swab32p(p);
}
static inline unsigned int  __be32_to_cpup(const unsigned int*  p  )
{
    return __swab32p((unsigned int* )p);
}
static inline unsigned short int  __cpu_to_be16p(const unsigned short int*  p  )
{
    return (unsigned short int )__swab16p(p);
}
static inline unsigned short int  __be16_to_cpup(const unsigned short int*  p  )
{
    return __swab16p((unsigned short int* )p);
}
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
int test_headers_linux()
{
    return 0;
}

