#line 1 "headers_linux.c"
using C
{
extern char *strdup(const char *);
extern int vsnprintf(char *, unsigned long, const char *, __builtin_va_list);
extern int snprintf(char *, unsigned long, const char *, ...);

/* ccpp: libc typedefs */
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long long int __int64_t;
typedef unsigned long long int __uint64_t;
typedef long long int __quad_t;
typedef unsigned long long int __u_quad_t;
typedef unsigned long int __ino_t;
typedef __uint64_t __ino64_t;
typedef __int64_t __off64_t;
typedef __off64_t __loff_t;
typedef struct __fsid_t { int __val[2]; } __fsid_t;

#line 1 "/usr/include/linux/types.h"

#line 4 "/usr/include/linux/types.h"

#line 1 "/usr/include/asm/types.h"
#line 1 "/usr/include/asm-generic/types.h"

#line 4 "/usr/include/asm-generic/types.h"



#line 1 "/usr/include/asm-generic/int-ll64.h"








#line 11 "/usr/include/asm-generic/int-ll64.h"

#line 1 "/usr/include/asm/bitsperlong.h"

#line 4 "/usr/include/asm/bitsperlong.h"

#line 10 "/usr/include/asm/bitsperlong.h"

#line 1 "/usr/include/asm-generic/bitsperlong.h"

#line 4 "/usr/include/asm-generic/bitsperlong.h"

#line 26 "/usr/include/asm-generic/bitsperlong.h"

#line 30 "/usr/include/asm-generic/bitsperlong.h"
#line 12 "/usr/include/asm/bitsperlong.h"

#line 14 "/usr/include/asm/bitsperlong.h"
#line 13 "/usr/include/asm-generic/int-ll64.h"

#line 15 "/usr/include/asm-generic/int-ll64.h"





typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

#line 30 "/usr/include/asm-generic/int-ll64.h"
typedef __signed__ long long __s64;
typedef unsigned long long __u64;
#line 36 "/usr/include/asm-generic/int-ll64.h"

#line 38 "/usr/include/asm-generic/int-ll64.h"

#line 8 "/usr/include/asm-generic/types.h"
#line 2 "/usr/include/asm/types.h"
#line 6 "/usr/include/linux/types.h"

#line 8 "/usr/include/linux/types.h"

#line 1 "/usr/include/linux/posix_types.h"

#line 4 "/usr/include/linux/posix_types.h"

#line 1 "/usr/include/linux/stddef.h"

#line 4 "/usr/include/linux/stddef.h"



#line 10 "/usr/include/linux/stddef.h"


#line 17 "/usr/include/linux/stddef.h"
















#line 34 "/usr/include/linux/stddef.h"

#line 39 "/usr/include/linux/stddef.h"










#line 51 "/usr/include/linux/stddef.h"

#line 55 "/usr/include/linux/stddef.h"

#line 59 "/usr/include/linux/stddef.h"

#line 63 "/usr/include/linux/stddef.h"

#line 65 "/usr/include/linux/stddef.h"
#line 6 "/usr/include/linux/posix_types.h"
















#line 24 "/usr/include/linux/posix_types.h"

typedef struct {
	unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

#line 1 "/usr/include/asm/posix_types.h"

#line 1 "/usr/include/asm/posix_types_64.h"

#line 4 "/usr/include/asm/posix_types_64.h"







typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
#line 14 "/usr/include/asm/posix_types_64.h"

typedef unsigned long	__kernel_old_dev_t;
#line 17 "/usr/include/asm/posix_types_64.h"

#line 1 "/usr/include/asm-generic/posix_types.h"

#line 4 "/usr/include/asm-generic/posix_types.h"

#line 1 "/usr/include/asm/bitsperlong.h"

#line 14 "/usr/include/asm/bitsperlong.h"
#line 6 "/usr/include/asm-generic/posix_types.h"








#line 15 "/usr/include/asm-generic/posix_types.h"
typedef long		__kernel_long_t;
typedef unsigned long	__kernel_ulong_t;
#line 18 "/usr/include/asm-generic/posix_types.h"

#line 20 "/usr/include/asm-generic/posix_types.h"
typedef __kernel_ulong_t __kernel_ino_t;
#line 22 "/usr/include/asm-generic/posix_types.h"

#line 24 "/usr/include/asm-generic/posix_types.h"
typedef unsigned int	__kernel_mode_t;
#line 26 "/usr/include/asm-generic/posix_types.h"

#line 28 "/usr/include/asm-generic/posix_types.h"
typedef int		__kernel_pid_t;
#line 30 "/usr/include/asm-generic/posix_types.h"

#line 32 "/usr/include/asm-generic/posix_types.h"
typedef int		__kernel_ipc_pid_t;
#line 34 "/usr/include/asm-generic/posix_types.h"

#line 36 "/usr/include/asm-generic/posix_types.h"
typedef unsigned int	__kernel_uid_t;
typedef unsigned int	__kernel_gid_t;
#line 39 "/usr/include/asm-generic/posix_types.h"

#line 41 "/usr/include/asm-generic/posix_types.h"
typedef __kernel_long_t		__kernel_suseconds_t;
#line 43 "/usr/include/asm-generic/posix_types.h"

#line 45 "/usr/include/asm-generic/posix_types.h"
typedef int		__kernel_daddr_t;
#line 47 "/usr/include/asm-generic/posix_types.h"

#line 49 "/usr/include/asm-generic/posix_types.h"
typedef unsigned int	__kernel_uid32_t;
typedef unsigned int	__kernel_gid32_t;
#line 52 "/usr/include/asm-generic/posix_types.h"

#line 57 "/usr/include/asm-generic/posix_types.h"

#line 61 "/usr/include/asm-generic/posix_types.h"





#line 72 "/usr/include/asm-generic/posix_types.h"
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t	__kernel_ssize_t;
typedef __kernel_long_t	__kernel_ptrdiff_t;
#line 77 "/usr/include/asm-generic/posix_types.h"

#line 79 "/usr/include/asm-generic/posix_types.h"
typedef struct {
	int	val[2];
} __kernel_fsid_t;
#line 83 "/usr/include/asm-generic/posix_types.h"




typedef __kernel_long_t	__kernel_off_t;
typedef long long	__kernel_loff_t;
typedef __kernel_long_t	__kernel_old_time_t;
typedef __kernel_long_t	__kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t	__kernel_clock_t;
typedef int		__kernel_timer_t;
typedef int		__kernel_clockid_t;
typedef char *		__kernel_caddr_t;
typedef unsigned short	__kernel_uid16_t;
typedef unsigned short	__kernel_gid16_t;
#line 19 "/usr/include/asm/posix_types_64.h"
#line 8 "/usr/include/asm/posix_types.h"
#line 37 "/usr/include/linux/posix_types.h"
#line 10 "/usr/include/linux/types.h"

#line 15 "/usr/include/linux/types.h"







#line 27 "/usr/include/linux/types.h"


#line 30 "/usr/include/linux/types.h"

typedef __u16  __le16;
typedef __u16  __be16;
typedef __u32  __le32;
typedef __u32  __be32;
typedef __u64  __le64;
typedef __u64  __be64;

typedef __u16  __sum16;
typedef __u32  __wsum;










#line 54 "/usr/include/linux/types.h"

typedef unsigned  __poll_t;
#line 5 "headers_linux.c"
#line 1 "/usr/include/linux/stddef.h"
#line 8 "headers_linux.c"
#line 1 "/usr/include/linux/errno.h"
#line 1 "/usr/include/asm/errno.h"
#line 1 "/usr/include/asm-generic/errno.h"

#line 4 "/usr/include/asm-generic/errno.h"

#line 1 "/usr/include/asm-generic/errno-base.h"

#line 4 "/usr/include/asm-generic/errno-base.h"

#line 39 "/usr/include/asm-generic/errno-base.h"
#line 6 "/usr/include/asm-generic/errno.h"

#line 10 "/usr/include/asm-generic/errno.h"








#line 19 "/usr/include/asm-generic/errno.h"

#line 39 "/usr/include/asm-generic/errno.h"

#line 41 "/usr/include/asm-generic/errno.h"

#line 106 "/usr/include/asm-generic/errno.h"

#line 114 "/usr/include/asm-generic/errno.h"


#line 118 "/usr/include/asm-generic/errno.h"

#line 120 "/usr/include/asm-generic/errno.h"

#line 122 "/usr/include/asm-generic/errno.h"
#line 2 "/usr/include/asm/errno.h"
#line 2 "/usr/include/linux/errno.h"
#line 11 "headers_linux.c"
#line 1 "/usr/include/linux/kernel.h"

#line 4 "/usr/include/linux/kernel.h"

#line 1 "/usr/include/linux/sysinfo.h"

#line 4 "/usr/include/linux/sysinfo.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/sysinfo.h"

#line 8 "/usr/include/linux/sysinfo.h"
struct sysinfo {
	__kernel_long_t uptime;		
	__kernel_ulong_t loads[3];	
	__kernel_ulong_t totalram;	
	__kernel_ulong_t freeram;	
	__kernel_ulong_t sharedram;	
	__kernel_ulong_t bufferram;	
	__kernel_ulong_t totalswap;	
	__kernel_ulong_t freeswap;	
	__u16 procs;		   	
	__u16 pad;		   	
	__kernel_ulong_t totalhigh;	
	__kernel_ulong_t freehigh;	
	__u32 mem_unit;			
	char _f[20-2*sizeof(__kernel_ulong_t)-sizeof(__u32)];	
};
#line 6 "/usr/include/linux/kernel.h"
#line 1 "/usr/include/linux/const.h"



#line 6 "/usr/include/linux/const.h"










#line 24 "/usr/include/linux/const.h"

#line 27 "/usr/include/linux/const.h"

#line 30 "/usr/include/linux/const.h"

#line 32 "/usr/include/linux/const.h"













#line 47 "/usr/include/linux/const.h"

#line 50 "/usr/include/linux/const.h"

#line 52 "/usr/include/linux/const.h"
#line 7 "/usr/include/linux/kernel.h"
#line 14 "headers_linux.c"
#line 1 "/usr/include/linux/limits.h"

#line 4 "/usr/include/linux/limits.h"

#line 6 "/usr/include/linux/limits.h"

#line 18 "/usr/include/linux/limits.h"

#line 20 "/usr/include/linux/limits.h"
#line 17 "headers_linux.c"
#line 1 "/usr/include/linux/unistd.h"

#line 4 "/usr/include/linux/unistd.h"




#line 1 "/usr/include/asm/unistd.h"

#line 4 "/usr/include/asm/unistd.h"









#line 14 "/usr/include/asm/unistd.h"

#line 1 "/usr/include/asm/unistd_64.h"
#line 3 "/usr/include/asm/unistd_64.h"

#line 386 "/usr/include/asm/unistd_64.h"

#line 21 "/usr/include/asm/unistd.h"
#line 22 "/usr/include/asm/unistd.h"
#line 9 "/usr/include/linux/unistd.h"
#line 20 "headers_linux.c"
#line 1 "/usr/include/linux/stat.h"

#line 4 "/usr/include/linux/stat.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/stat.h"

#line 8 "/usr/include/linux/stat.h"

#line 20 "/usr/include/linux/stat.h"

#line 28 "/usr/include/linux/stat.h"

#line 33 "/usr/include/linux/stat.h"

#line 38 "/usr/include/linux/stat.h"

#line 43 "/usr/include/linux/stat.h"

#line 45 "/usr/include/linux/stat.h"











struct statx_timestamp {
	__s64	tv_sec;
	__u32	tv_nsec;
	__s32	__reserved;
};






































struct statx {
	
	
	__u32	stx_mask;

	
	__u32	stx_blksize;

	
	__u64	stx_attributes;

	
	
	__u32	stx_nlink;

	
	__u32	stx_uid;

	
	__u32	stx_gid;

	
	__u16	stx_mode;
	__u16	__spare0[1];

	
	
	__u64	stx_ino;

	
	__u64	stx_size;

	
	__u64	stx_blocks;

	
	__u64	stx_attributes_mask;

	
	
	struct statx_timestamp	stx_atime;

	
	struct statx_timestamp	stx_btime;

	
	struct statx_timestamp	stx_ctime;

	
	struct statx_timestamp	stx_mtime;

	
	
	__u32	stx_rdev_major;
	__u32	stx_rdev_minor;

	
	__u32	stx_dev_major;
	__u32	stx_dev_minor;

	
	__u64	stx_mnt_id;

	
	__u32	stx_dio_mem_align;

	
	__u32	stx_dio_offset_align;

	
	
	__u64	stx_subvol;

	
	__u32	stx_atomic_write_unit_min;

	
	__u32	stx_atomic_write_unit_max;

	
	
	__u32   stx_atomic_write_segments_max;

	
	__u32	stx_dio_read_offset_align;

	
	__u32	stx_atomic_write_unit_max_opt;
	__u32	__spare2[1];

	
	__u64	__spare3[8];	

	
};









#line 222 "/usr/include/linux/stat.h"

#line 224 "/usr/include/linux/stat.h"






#line 231 "/usr/include/linux/stat.h"















#line 256 "/usr/include/linux/stat.h"

#line 23 "headers_linux.c"
#line 1 "/usr/include/linux/fcntl.h"

#line 4 "/usr/include/linux/fcntl.h"

#line 1 "/usr/include/asm/fcntl.h"
#line 1 "/usr/include/asm-generic/fcntl.h"

#line 4 "/usr/include/asm-generic/fcntl.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/asm-generic/fcntl.h"












#line 64 "/usr/include/asm-generic/fcntl.h"














#line 82 "/usr/include/asm-generic/fcntl.h"

#line 86 "/usr/include/asm-generic/fcntl.h"

#line 90 "/usr/include/asm-generic/fcntl.h"


#line 93 "/usr/include/asm-generic/fcntl.h"

#line 97 "/usr/include/asm-generic/fcntl.h"

#line 116 "/usr/include/asm-generic/fcntl.h"

#line 124 "/usr/include/asm-generic/fcntl.h"

#line 129 "/usr/include/asm-generic/fcntl.h"

#line 133 "/usr/include/asm-generic/fcntl.h"













#line 149 "/usr/include/asm-generic/fcntl.h"

#line 153 "/usr/include/asm-generic/fcntl.h"

struct f_owner_ex {
	int	type;
	__kernel_pid_t	pid;
};


#line 161 "/usr/include/asm-generic/fcntl.h"


#line 168 "/usr/include/asm-generic/fcntl.h"


#line 174 "/usr/include/asm-generic/fcntl.h"


#line 181 "/usr/include/asm-generic/fcntl.h"





#line 190 "/usr/include/asm-generic/fcntl.h"

#line 192 "/usr/include/asm-generic/fcntl.h"

#line 194 "/usr/include/asm-generic/fcntl.h"
struct flock {
	short	l_type;
	short	l_whence;
	__kernel_off_t	l_start;
	__kernel_off_t	l_len;
	__kernel_pid_t	l_pid;
#line 206 "/usr/include/asm-generic/fcntl.h"
};

struct flock64 {
	short  l_type;
	short  l_whence;
	__kernel_loff_t l_start;
	__kernel_loff_t l_len;
	__kernel_pid_t  l_pid;
#line 217 "/usr/include/asm-generic/fcntl.h"
};
#line 219 "/usr/include/asm-generic/fcntl.h"
#line 2 "/usr/include/asm/fcntl.h"
#line 6 "/usr/include/linux/fcntl.h"
#line 1 "/usr/include/linux/openat2.h"

#line 4 "/usr/include/linux/openat2.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/openat2.h"













struct open_how {
	__u64 flags;
	__u64 mode;
	__u64 resolve;
};


#line 42 "/usr/include/linux/openat2.h"
#line 7 "/usr/include/linux/fcntl.h"

#line 10 "/usr/include/linux/fcntl.h"





#line 16 "/usr/include/linux/fcntl.h"

#line 18 "/usr/include/linux/fcntl.h"


#line 21 "/usr/include/linux/fcntl.h"





#line 27 "/usr/include/linux/fcntl.h"


#line 30 "/usr/include/linux/fcntl.h"




#line 36 "/usr/include/linux/fcntl.h"




#line 42 "/usr/include/linux/fcntl.h"




#line 52 "/usr/include/linux/fcntl.h"







#line 63 "/usr/include/linux/fcntl.h"





#line 74 "/usr/include/linux/fcntl.h"






#line 81 "/usr/include/linux/fcntl.h"




#line 92 "/usr/include/linux/fcntl.h"


#line 97 "/usr/include/linux/fcntl.h"













#line 112 "/usr/include/linux/fcntl.h"

#line 115 "/usr/include/linux/fcntl.h"




#line 121 "/usr/include/linux/fcntl.h"

#line 128 "/usr/include/linux/fcntl.h"




#line 136 "/usr/include/linux/fcntl.h"

#line 138 "/usr/include/linux/fcntl.h"





















#line 162 "/usr/include/linux/fcntl.h"


#line 166 "/usr/include/linux/fcntl.h"

#line 169 "/usr/include/linux/fcntl.h"

#line 175 "/usr/include/linux/fcntl.h"


#line 179 "/usr/include/linux/fcntl.h"
#line 26 "headers_linux.c"
#line 1 "/usr/include/linux/ioctl.h"

#line 4 "/usr/include/linux/ioctl.h"

#line 1 "/usr/include/asm/ioctl.h"
#line 1 "/usr/include/asm-generic/ioctl.h"

#line 4 "/usr/include/asm-generic/ioctl.h"



















#line 25 "/usr/include/asm-generic/ioctl.h"






#line 34 "/usr/include/asm-generic/ioctl.h"

#line 38 "/usr/include/asm-generic/ioctl.h"

#line 43 "/usr/include/asm-generic/ioctl.h"

#line 48 "/usr/include/asm-generic/ioctl.h"









#line 60 "/usr/include/asm-generic/ioctl.h"

#line 64 "/usr/include/asm-generic/ioctl.h"

#line 68 "/usr/include/asm-generic/ioctl.h"

#line 70 "/usr/include/asm-generic/ioctl.h"

#line 72 "/usr/include/asm-generic/ioctl.h"







#line 86 "/usr/include/asm-generic/ioctl.h"


#line 92 "/usr/include/asm-generic/ioctl.h"



#line 100 "/usr/include/asm-generic/ioctl.h"
#line 2 "/usr/include/asm/ioctl.h"
#line 6 "/usr/include/linux/ioctl.h"

#line 8 "/usr/include/linux/ioctl.h"
#line 29 "headers_linux.c"
#line 1 "/usr/include/linux/uio.h"









#line 12 "/usr/include/linux/uio.h"


#line 1 "/usr/include/linux/types.h"
#line 15 "/usr/include/linux/uio.h"


struct iovec
{
	void *iov_base;	
	__kernel_size_t iov_len; 
};

struct dmabuf_cmsg {
	__u64 frag_offset;	

	__u32 frag_size;	
	__u32 frag_token;	


	__u32  dmabuf_id;	
	__u32 flags;		


};

struct dmabuf_token {
	__u32 token_start;
	__u32 token_count;
};




 
#line 47 "/usr/include/linux/uio.h"

#line 32 "headers_linux.c"
#line 1 "/usr/include/linux/time.h"

#line 4 "/usr/include/linux/time.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/time.h"
#line 1 "/usr/include/linux/time_types.h"

#line 4 "/usr/include/linux/time_types.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/time_types.h"

struct __kernel_timespec {
	__kernel_time64_t       tv_sec;                 
	long long               tv_nsec;                
};

struct __kernel_itimerspec {
	struct __kernel_timespec it_interval;    
	struct __kernel_timespec it_value;       
};








#line 25 "/usr/include/linux/time_types.h"
struct __kernel_old_timeval {
	__kernel_long_t tv_sec;
	__kernel_long_t tv_usec;
};
#line 30 "/usr/include/linux/time_types.h"

struct __kernel_old_timespec {
	__kernel_old_time_t	tv_sec;		
	long			tv_nsec;	
};

struct __kernel_old_itimerval {
	struct __kernel_old_timeval it_interval;
	struct __kernel_old_timeval it_value;	
};

struct __kernel_sock_timeval {
	__s64 tv_sec;
	__s64 tv_usec;
};
#line 7 "/usr/include/linux/time.h"

#line 10 "/usr/include/linux/time.h"
struct timespec {
	__kernel_old_time_t	tv_sec;		
	long			tv_nsec;	
};
#line 15 "/usr/include/linux/time.h"

struct timeval {
	__kernel_old_time_t	tv_sec;		
	__kernel_suseconds_t	tv_usec;	
};

struct itimerspec {
	struct timespec it_interval;
	struct timespec it_value;	
};

struct itimerval {
	struct timeval it_interval;
	struct timeval it_value;	
};

struct timezone {
	int	tz_minuteswest;	
	int	tz_dsttime;	
};





#line 43 "/usr/include/linux/time.h"




#line 57 "/usr/include/linux/time.h"




#line 63 "/usr/include/linux/time.h"

#line 65 "/usr/include/linux/time.h"







#line 75 "/usr/include/linux/time.h"

#line 78 "/usr/include/linux/time.h"




#line 83 "/usr/include/linux/time.h"
#line 35 "headers_linux.c"
#line 1 "/usr/include/linux/netlink.h"

#line 4 "/usr/include/linux/netlink.h"

#line 1 "/usr/include/linux/const.h"


#line 6 "/usr/include/linux/netlink.h"
#line 1 "/usr/include/linux/socket.h"

#line 4 "/usr/include/linux/socket.h"




#line 9 "/usr/include/linux/socket.h"

typedef unsigned short __kernel_sa_family_t;





struct __kernel_sockaddr_storage {
	union {
		struct {
			__kernel_sa_family_t	ss_family; 
			
			char __data[128 - sizeof(unsigned short)];
				
				
		};
		void *__align; 
	};
};

#line 31 "/usr/include/linux/socket.h"

#line 33 "/usr/include/linux/socket.h"

#line 37 "/usr/include/linux/socket.h"
#line 7 "/usr/include/linux/netlink.h"
#line 1 "/usr/include/linux/types.h"
#line 8 "/usr/include/linux/netlink.h"

#line 26 "/usr/include/linux/netlink.h"

#line 32 "/usr/include/linux/netlink.h"

#line 34 "/usr/include/linux/netlink.h"

#line 36 "/usr/include/linux/netlink.h"

struct sockaddr_nl {
	__kernel_sa_family_t	nl_family;	
	unsigned short	nl_pad;		
	__u32		nl_pid;		
       	__u32		nl_groups;	
};









struct nlmsghdr {
	__u32		nlmsg_len;
	__u16		nlmsg_type;
	__u16		nlmsg_flags;
	__u32		nlmsg_seq;
	__u32		nlmsg_pid;
};



#line 68 "/usr/include/linux/netlink.h"


#line 74 "/usr/include/linux/netlink.h"


#line 80 "/usr/include/linux/netlink.h"


#line 84 "/usr/include/linux/netlink.h"


#line 88 "/usr/include/linux/netlink.h"










#line 107 "/usr/include/linux/netlink.h"

#line 112 "/usr/include/linux/netlink.h"

#line 114 "/usr/include/linux/netlink.h"

struct nlmsgerr {
	int		error;
	struct nlmsghdr msg;
	




	



};


















enum nlmsgerr_attrs {
	NLMSGERR_ATTR_UNUSED,
	NLMSGERR_ATTR_MSG,
	NLMSGERR_ATTR_OFFS,
	NLMSGERR_ATTR_COOKIE,
	NLMSGERR_ATTR_POLICY,
	NLMSGERR_ATTR_MISS_TYPE,
	NLMSGERR_ATTR_MISS_NEST,

	__NLMSGERR_ATTR_MAX,
	NLMSGERR_ATTR_MAX = __NLMSGERR_ATTR_MAX - 1
};

#line 171 "/usr/include/linux/netlink.h"

struct nl_pktinfo {
	__u32	group;
};

struct nl_mmap_req {
	unsigned int	nm_block_size;
	unsigned int	nm_block_nr;
	unsigned int	nm_frame_size;
	unsigned int	nm_frame_nr;
};

struct nl_mmap_hdr {
	unsigned int	nm_status;
	unsigned int	nm_len;
	__u32		nm_group;
	
	__u32		nm_pid;
	__u32		nm_uid;
	__u32		nm_gid;
};

enum nl_mmap_status {
	NL_MMAP_STATUS_UNUSED,
	NL_MMAP_STATUS_RESERVED,
	NL_MMAP_STATUS_VALID,
	NL_MMAP_STATUS_COPY,
	NL_MMAP_STATUS_SKIP,
};

#line 204 "/usr/include/linux/netlink.h"

#line 206 "/usr/include/linux/netlink.h"

enum {
	NETLINK_UNCONNECTED = 0,
	NETLINK_CONNECTED,
};










struct nlattr {
	__u16           nla_len;
	__u16           nla_type;
};











#line 239 "/usr/include/linux/netlink.h"

#line 243 "/usr/include/linux/netlink.h"














struct nla_bitfield32 {
	__u32 value;
	__u32 selector;
};



































enum netlink_attribute_type {
	NL_ATTR_TYPE_INVALID,

	NL_ATTR_TYPE_FLAG,

	NL_ATTR_TYPE_U8,
	NL_ATTR_TYPE_U16,
	NL_ATTR_TYPE_U32,
	NL_ATTR_TYPE_U64,

	NL_ATTR_TYPE_S8,
	NL_ATTR_TYPE_S16,
	NL_ATTR_TYPE_S32,
	NL_ATTR_TYPE_S64,

	NL_ATTR_TYPE_BINARY,
	NL_ATTR_TYPE_STRING,
	NL_ATTR_TYPE_NUL_STRING,

	NL_ATTR_TYPE_NESTED,
	NL_ATTR_TYPE_NESTED_ARRAY,

	NL_ATTR_TYPE_BITFIELD32,

	NL_ATTR_TYPE_SINT,
	NL_ATTR_TYPE_UINT,
};
































enum netlink_policy_type_attr {
	NL_POLICY_TYPE_ATTR_UNSPEC,
	NL_POLICY_TYPE_ATTR_TYPE,
	NL_POLICY_TYPE_ATTR_MIN_VALUE_S,
	NL_POLICY_TYPE_ATTR_MAX_VALUE_S,
	NL_POLICY_TYPE_ATTR_MIN_VALUE_U,
	NL_POLICY_TYPE_ATTR_MAX_VALUE_U,
	NL_POLICY_TYPE_ATTR_MIN_LENGTH,
	NL_POLICY_TYPE_ATTR_MAX_LENGTH,
	NL_POLICY_TYPE_ATTR_POLICY_IDX,
	NL_POLICY_TYPE_ATTR_POLICY_MAXTYPE,
	NL_POLICY_TYPE_ATTR_BITFIELD32_MASK,
	NL_POLICY_TYPE_ATTR_PAD,
	NL_POLICY_TYPE_ATTR_MASK,

	
	__NL_POLICY_TYPE_ATTR_MAX,
	NL_POLICY_TYPE_ATTR_MAX = __NL_POLICY_TYPE_ATTR_MAX - 1
};
#line 38 "headers_linux.c"
#line 1 "/usr/include/linux/rtnetlink.h"

#line 4 "/usr/include/linux/rtnetlink.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/rtnetlink.h"
#line 1 "/usr/include/linux/netlink.h"
#line 7 "/usr/include/linux/rtnetlink.h"
#line 1 "/usr/include/linux/if_link.h"

#line 4 "/usr/include/linux/if_link.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/if_link.h"
#line 1 "/usr/include/linux/netlink.h"
#line 7 "/usr/include/linux/if_link.h"


struct rtnl_link_stats {
	__u32	rx_packets;
	__u32	tx_packets;
	__u32	rx_bytes;
	__u32	tx_bytes;
	__u32	rx_errors;
	__u32	tx_errors;
	__u32	rx_dropped;
	__u32	tx_dropped;
	__u32	multicast;
	__u32	collisions;
	
	__u32	rx_length_errors;
	__u32	rx_over_errors;
	__u32	rx_crc_errors;
	__u32	rx_frame_errors;
	__u32	rx_fifo_errors;
	__u32	rx_missed_errors;

	
	__u32	tx_aborted_errors;
	__u32	tx_carrier_errors;
	__u32	tx_fifo_errors;
	__u32	tx_heartbeat_errors;
	__u32	tx_window_errors;

	
	__u32	rx_compressed;
	__u32	tx_compressed;

	__u32	rx_nohandler;
};

















































































































































































struct rtnl_link_stats64 {
	__u64	rx_packets;
	__u64	tx_packets;
	__u64	rx_bytes;
	__u64	tx_bytes;
	__u64	rx_errors;
	__u64	tx_errors;
	__u64	rx_dropped;
	__u64	tx_dropped;
	__u64	multicast;
	__u64	collisions;

	
	__u64	rx_length_errors;
	__u64	rx_over_errors;
	__u64	rx_crc_errors;
	__u64	rx_frame_errors;
	__u64	rx_fifo_errors;
	__u64	rx_missed_errors;

	
	__u64	tx_aborted_errors;
	__u64	tx_carrier_errors;
	__u64	tx_fifo_errors;
	__u64	tx_heartbeat_errors;
	__u64	tx_window_errors;

	
	__u64	rx_compressed;
	__u64	tx_compressed;
	__u64	rx_nohandler;

	__u64	rx_otherhost_dropped;
};




struct rtnl_hw_stats64 {
	__u64	rx_packets;
	__u64	tx_packets;
	__u64	rx_bytes;
	__u64	tx_bytes;
	__u64	rx_errors;
	__u64	tx_errors;
	__u64	rx_dropped;
	__u64	tx_dropped;
	__u64	multicast;
};


struct rtnl_link_ifmap {
	__u64	mem_start;
	__u64	mem_end;
	__u64	base_addr;
	__u16	irq;
	__u8	dma;
	__u8	port;
};



















enum {
	IFLA_UNSPEC,
	IFLA_ADDRESS,
	IFLA_BROADCAST,
	IFLA_IFNAME,
	IFLA_MTU,
	IFLA_LINK,
	IFLA_QDISC,
	IFLA_STATS,
	IFLA_COST,
#line 307 "/usr/include/linux/if_link.h"
	IFLA_PRIORITY,
#line 309 "/usr/include/linux/if_link.h"
	IFLA_MASTER,
#line 311 "/usr/include/linux/if_link.h"
	IFLA_WIRELESS,		
#line 313 "/usr/include/linux/if_link.h"
	IFLA_PROTINFO,		
#line 315 "/usr/include/linux/if_link.h"
	IFLA_TXQLEN,
#line 317 "/usr/include/linux/if_link.h"
	IFLA_MAP,
#line 319 "/usr/include/linux/if_link.h"
	IFLA_WEIGHT,
#line 321 "/usr/include/linux/if_link.h"
	IFLA_OPERSTATE,
	IFLA_LINKMODE,
	IFLA_LINKINFO,
#line 325 "/usr/include/linux/if_link.h"
	IFLA_NET_NS_PID,
	IFLA_IFALIAS,
	IFLA_NUM_VF,		
	IFLA_VFINFO_LIST,
	IFLA_STATS64,
	IFLA_VF_PORTS,
	IFLA_PORT_SELF,
	IFLA_AF_SPEC,
	IFLA_GROUP,		
	IFLA_NET_NS_FD,
	IFLA_EXT_MASK,		
	IFLA_PROMISCUITY,	
#line 338 "/usr/include/linux/if_link.h"
	IFLA_NUM_TX_QUEUES,
	IFLA_NUM_RX_QUEUES,
	IFLA_CARRIER,
	IFLA_PHYS_PORT_ID,
	IFLA_CARRIER_CHANGES,
	IFLA_PHYS_SWITCH_ID,
	IFLA_LINK_NETNSID,
	IFLA_PHYS_PORT_NAME,
	IFLA_PROTO_DOWN,
	IFLA_GSO_MAX_SEGS,
	IFLA_GSO_MAX_SIZE,
	IFLA_PAD,
	IFLA_XDP,
	IFLA_EVENT,
	IFLA_NEW_NETNSID,
	IFLA_IF_NETNSID,
	IFLA_TARGET_NETNSID = IFLA_IF_NETNSID, 
	IFLA_CARRIER_UP_COUNT,
	IFLA_CARRIER_DOWN_COUNT,
	IFLA_NEW_IFINDEX,
	IFLA_MIN_MTU,
	IFLA_MAX_MTU,
	IFLA_PROP_LIST,
	IFLA_ALT_IFNAME, 
	IFLA_PERM_ADDRESS,
	IFLA_PROTO_DOWN_REASON,

	


	IFLA_PARENT_DEV_NAME,
	IFLA_PARENT_DEV_BUS_NAME,
	IFLA_GRO_MAX_SIZE,
	IFLA_TSO_MAX_SIZE,
	IFLA_TSO_MAX_SEGS,
	IFLA_ALLMULTI,		

	IFLA_DEVLINK_PORT,

	IFLA_GSO_IPV4_MAX_SIZE,
	IFLA_GRO_IPV4_MAX_SIZE,
	IFLA_DPLL_PIN,
	IFLA_MAX_PACING_OFFLOAD_HORIZON,
	IFLA_NETNS_IMMUTABLE,
	__IFLA_MAX
};


#line 387 "/usr/include/linux/if_link.h"

enum {
	IFLA_PROTO_DOWN_REASON_UNSPEC,
	IFLA_PROTO_DOWN_REASON_MASK,	
	IFLA_PROTO_DOWN_REASON_VALUE,   

	__IFLA_PROTO_DOWN_REASON_CNT,
	IFLA_PROTO_DOWN_REASON_MAX = __IFLA_PROTO_DOWN_REASON_CNT - 1
};


#line 400 "/usr/include/linux/if_link.h"

enum {
	IFLA_INET_UNSPEC,
	IFLA_INET_CONF,
	__IFLA_INET_MAX,
};

#line 408 "/usr/include/linux/if_link.h"































enum {
	IFLA_INET6_UNSPEC,
	IFLA_INET6_FLAGS,	
	IFLA_INET6_CONF,	
	IFLA_INET6_STATS,	
	IFLA_INET6_MCAST,	
	IFLA_INET6_CACHEINFO,	
	IFLA_INET6_ICMP6STATS,	
	IFLA_INET6_TOKEN,	
	IFLA_INET6_ADDR_GEN_MODE, 
	IFLA_INET6_RA_MTU,	
	__IFLA_INET6_MAX
};

#line 454 "/usr/include/linux/if_link.h"

enum in6_addr_gen_mode {
	IN6_ADDR_GEN_MODE_EUI64,
	IN6_ADDR_GEN_MODE_NONE,
	IN6_ADDR_GEN_MODE_STABLE_PRIVACY,
	IN6_ADDR_GEN_MODE_RANDOM,
};



























































































































































































































































































enum {
	IFLA_BR_UNSPEC,
	IFLA_BR_FORWARD_DELAY,
	IFLA_BR_HELLO_TIME,
	IFLA_BR_MAX_AGE,
	IFLA_BR_AGEING_TIME,
	IFLA_BR_STP_STATE,
	IFLA_BR_PRIORITY,
	IFLA_BR_VLAN_FILTERING,
	IFLA_BR_VLAN_PROTOCOL,
	IFLA_BR_GROUP_FWD_MASK,
	IFLA_BR_ROOT_ID,
	IFLA_BR_BRIDGE_ID,
	IFLA_BR_ROOT_PORT,
	IFLA_BR_ROOT_PATH_COST,
	IFLA_BR_TOPOLOGY_CHANGE,
	IFLA_BR_TOPOLOGY_CHANGE_DETECTED,
	IFLA_BR_HELLO_TIMER,
	IFLA_BR_TCN_TIMER,
	IFLA_BR_TOPOLOGY_CHANGE_TIMER,
	IFLA_BR_GC_TIMER,
	IFLA_BR_GROUP_ADDR,
	IFLA_BR_FDB_FLUSH,
	IFLA_BR_MCAST_ROUTER,
	IFLA_BR_MCAST_SNOOPING,
	IFLA_BR_MCAST_QUERY_USE_IFADDR,
	IFLA_BR_MCAST_QUERIER,
	IFLA_BR_MCAST_HASH_ELASTICITY,
	IFLA_BR_MCAST_HASH_MAX,
	IFLA_BR_MCAST_LAST_MEMBER_CNT,
	IFLA_BR_MCAST_STARTUP_QUERY_CNT,
	IFLA_BR_MCAST_LAST_MEMBER_INTVL,
	IFLA_BR_MCAST_MEMBERSHIP_INTVL,
	IFLA_BR_MCAST_QUERIER_INTVL,
	IFLA_BR_MCAST_QUERY_INTVL,
	IFLA_BR_MCAST_QUERY_RESPONSE_INTVL,
	IFLA_BR_MCAST_STARTUP_QUERY_INTVL,
	IFLA_BR_NF_CALL_IPTABLES,
	IFLA_BR_NF_CALL_IP6TABLES,
	IFLA_BR_NF_CALL_ARPTABLES,
	IFLA_BR_VLAN_DEFAULT_PVID,
	IFLA_BR_PAD,
	IFLA_BR_VLAN_STATS_ENABLED,
	IFLA_BR_MCAST_STATS_ENABLED,
	IFLA_BR_MCAST_IGMP_VERSION,
	IFLA_BR_MCAST_MLD_VERSION,
	IFLA_BR_VLAN_STATS_PER_PORT,
	IFLA_BR_MULTI_BOOLOPT,
	IFLA_BR_MCAST_QUERIER_STATE,
	IFLA_BR_FDB_N_LEARNED,
	IFLA_BR_FDB_MAX_LEARNED,
	__IFLA_BR_MAX,
};

#line 799 "/usr/include/linux/if_link.h"

struct ifla_bridge_id {
	__u8	prio[2];
	__u8	addr[6]; 
};











enum {
	BRIDGE_MODE_UNSPEC,
	BRIDGE_MODE_HAIRPIN,
};








































































































































































































































enum {
	IFLA_BRPORT_UNSPEC,
	IFLA_BRPORT_STATE,	
	IFLA_BRPORT_PRIORITY,	
	IFLA_BRPORT_COST,	
	IFLA_BRPORT_MODE,	
	IFLA_BRPORT_GUARD,	
	IFLA_BRPORT_PROTECT,	
	IFLA_BRPORT_FAST_LEAVE,	
	IFLA_BRPORT_LEARNING,	
	IFLA_BRPORT_UNICAST_FLOOD, 
	IFLA_BRPORT_PROXYARP,	
	IFLA_BRPORT_LEARNING_SYNC, 
	IFLA_BRPORT_PROXYARP_WIFI, 
	IFLA_BRPORT_ROOT_ID,	
	IFLA_BRPORT_BRIDGE_ID,	
	IFLA_BRPORT_DESIGNATED_PORT,
	IFLA_BRPORT_DESIGNATED_COST,
	IFLA_BRPORT_ID,
	IFLA_BRPORT_NO,
	IFLA_BRPORT_TOPOLOGY_CHANGE_ACK,
	IFLA_BRPORT_CONFIG_PENDING,
	IFLA_BRPORT_MESSAGE_AGE_TIMER,
	IFLA_BRPORT_FORWARD_DELAY_TIMER,
	IFLA_BRPORT_HOLD_TIMER,
	IFLA_BRPORT_FLUSH,
	IFLA_BRPORT_MULTICAST_ROUTER,
	IFLA_BRPORT_PAD,
	IFLA_BRPORT_MCAST_FLOOD,
	IFLA_BRPORT_MCAST_TO_UCAST,
	IFLA_BRPORT_VLAN_TUNNEL,
	IFLA_BRPORT_BCAST_FLOOD,
	IFLA_BRPORT_GROUP_FWD_MASK,
	IFLA_BRPORT_NEIGH_SUPPRESS,
	IFLA_BRPORT_ISOLATED,
	IFLA_BRPORT_BACKUP_PORT,
	IFLA_BRPORT_MRP_RING_OPEN,
	IFLA_BRPORT_MRP_IN_OPEN,
	IFLA_BRPORT_MCAST_EHT_HOSTS_LIMIT,
	IFLA_BRPORT_MCAST_EHT_HOSTS_CNT,
	IFLA_BRPORT_LOCKED,
	IFLA_BRPORT_MAB,
	IFLA_BRPORT_MCAST_N_GROUPS,
	IFLA_BRPORT_MCAST_MAX_GROUPS,
	IFLA_BRPORT_NEIGH_VLAN_SUPPRESS,
	IFLA_BRPORT_BACKUP_NHID,
	__IFLA_BRPORT_MAX
};
#line 1100 "/usr/include/linux/if_link.h"

struct ifla_cacheinfo {
	__u32	max_reasm_len;
	__u32	tstamp;		
	__u32	reachable_time;
	__u32	retrans_time;
};

enum {
	IFLA_INFO_UNSPEC,
	IFLA_INFO_KIND,
	IFLA_INFO_DATA,
	IFLA_INFO_XSTATS,
	IFLA_INFO_SLAVE_KIND,
	IFLA_INFO_SLAVE_DATA,
	__IFLA_INFO_MAX,
};

#line 1119 "/usr/include/linux/if_link.h"



enum {
	IFLA_VLAN_UNSPEC,
	IFLA_VLAN_ID,
	IFLA_VLAN_FLAGS,
	IFLA_VLAN_EGRESS_QOS,
	IFLA_VLAN_INGRESS_QOS,
	IFLA_VLAN_PROTOCOL,
	__IFLA_VLAN_MAX,
};

#line 1133 "/usr/include/linux/if_link.h"

struct ifla_vlan_flags {
	__u32	flags;
	__u32	mask;
};

enum {
	IFLA_VLAN_QOS_UNSPEC,
	IFLA_VLAN_QOS_MAPPING,
	__IFLA_VLAN_QOS_MAX
};

#line 1146 "/usr/include/linux/if_link.h"

struct ifla_vlan_qos_mapping {
	__u32 from;
	__u32 to;
};


enum {
	IFLA_MACVLAN_UNSPEC,
	IFLA_MACVLAN_MODE,
	IFLA_MACVLAN_FLAGS,
	IFLA_MACVLAN_MACADDR_MODE,
	IFLA_MACVLAN_MACADDR,
	IFLA_MACVLAN_MACADDR_DATA,
	IFLA_MACVLAN_MACADDR_COUNT,
	IFLA_MACVLAN_BC_QUEUE_LEN,
	IFLA_MACVLAN_BC_QUEUE_LEN_USED,
	IFLA_MACVLAN_BC_CUTOFF,
	__IFLA_MACVLAN_MAX,
};

#line 1168 "/usr/include/linux/if_link.h"

enum macvlan_mode {
	MACVLAN_MODE_PRIVATE = 1, 
	MACVLAN_MODE_VEPA    = 2, 
	MACVLAN_MODE_BRIDGE  = 4, 
	MACVLAN_MODE_PASSTHRU = 8,
	MACVLAN_MODE_SOURCE  = 16,
};

enum macvlan_macaddr_mode {
	MACVLAN_MACADDR_ADD,
	MACVLAN_MACADDR_DEL,
	MACVLAN_MACADDR_FLUSH,
	MACVLAN_MACADDR_SET,
};

#line 1186 "/usr/include/linux/if_link.h"


enum {
	IFLA_VRF_UNSPEC,
	IFLA_VRF_TABLE,
	__IFLA_VRF_MAX
};

#line 1195 "/usr/include/linux/if_link.h"

enum {
	IFLA_VRF_PORT_UNSPEC,
	IFLA_VRF_PORT_TABLE,
	__IFLA_VRF_PORT_MAX
};

#line 1203 "/usr/include/linux/if_link.h"


enum {
	IFLA_MACSEC_UNSPEC,
	IFLA_MACSEC_SCI,
	IFLA_MACSEC_PORT,
	IFLA_MACSEC_ICV_LEN,
	IFLA_MACSEC_CIPHER_SUITE,
	IFLA_MACSEC_WINDOW,
	IFLA_MACSEC_ENCODING_SA,
	IFLA_MACSEC_ENCRYPT,
	IFLA_MACSEC_PROTECT,
	IFLA_MACSEC_INC_SCI,
	IFLA_MACSEC_ES,
	IFLA_MACSEC_SCB,
	IFLA_MACSEC_REPLAY_PROTECT,
	IFLA_MACSEC_VALIDATION,
	IFLA_MACSEC_PAD,
	IFLA_MACSEC_OFFLOAD,
	__IFLA_MACSEC_MAX,
};

#line 1226 "/usr/include/linux/if_link.h"


enum {
	IFLA_XFRM_UNSPEC,
	IFLA_XFRM_LINK,
	IFLA_XFRM_IF_ID,
	IFLA_XFRM_COLLECT_METADATA,
	__IFLA_XFRM_MAX
};

#line 1237 "/usr/include/linux/if_link.h"

enum macsec_validation_type {
	MACSEC_VALIDATE_DISABLED = 0,
	MACSEC_VALIDATE_CHECK = 1,
	MACSEC_VALIDATE_STRICT = 2,
	__MACSEC_VALIDATE_END,
	MACSEC_VALIDATE_MAX = __MACSEC_VALIDATE_END - 1,
};

enum macsec_offload {
	MACSEC_OFFLOAD_OFF = 0,
	MACSEC_OFFLOAD_PHY = 1,
	MACSEC_OFFLOAD_MAC = 2,
	__MACSEC_OFFLOAD_END,
	MACSEC_OFFLOAD_MAX = __MACSEC_OFFLOAD_END - 1,
};


enum {
	IFLA_IPVLAN_UNSPEC,
	IFLA_IPVLAN_MODE,
	IFLA_IPVLAN_FLAGS,
	__IFLA_IPVLAN_MAX
};

#line 1263 "/usr/include/linux/if_link.h"

enum ipvlan_mode {
	IPVLAN_MODE_L2 = 0,
	IPVLAN_MODE_L3,
	IPVLAN_MODE_L3S,
	IPVLAN_MODE_MAX
};

#line 1273 "/usr/include/linux/if_link.h"


struct tunnel_msg {
	__u8 family;
	__u8 flags;
	__u16 reserved2;
	__u32 ifindex;
};


enum netkit_action {
	NETKIT_NEXT	= -1,
	NETKIT_PASS	= 0,
	NETKIT_DROP	= 2,
	NETKIT_REDIRECT	= 7,
};

enum netkit_mode {
	NETKIT_L2,
	NETKIT_L3,
};









enum netkit_scrub {
	NETKIT_SCRUB_NONE,
	NETKIT_SCRUB_DEFAULT,
};

enum {
	IFLA_NETKIT_UNSPEC,
	IFLA_NETKIT_PEER_INFO,
	IFLA_NETKIT_PRIMARY,
	IFLA_NETKIT_POLICY,
	IFLA_NETKIT_PEER_POLICY,
	IFLA_NETKIT_MODE,
	IFLA_NETKIT_SCRUB,
	IFLA_NETKIT_PEER_SCRUB,
	IFLA_NETKIT_HEADROOM,
	IFLA_NETKIT_TAILROOM,
	__IFLA_NETKIT_MAX,
};
#line 1322 "/usr/include/linux/if_link.h"




#line 1327 "/usr/include/linux/if_link.h"

#line 1329 "/usr/include/linux/if_link.h"


enum {
	VNIFILTER_ENTRY_STATS_UNSPEC,
	VNIFILTER_ENTRY_STATS_RX_BYTES,
	VNIFILTER_ENTRY_STATS_RX_PKTS,
	VNIFILTER_ENTRY_STATS_RX_DROPS,
	VNIFILTER_ENTRY_STATS_RX_ERRORS,
	VNIFILTER_ENTRY_STATS_TX_BYTES,
	VNIFILTER_ENTRY_STATS_TX_PKTS,
	VNIFILTER_ENTRY_STATS_TX_DROPS,
	VNIFILTER_ENTRY_STATS_TX_ERRORS,
	VNIFILTER_ENTRY_STATS_PAD,
	__VNIFILTER_ENTRY_STATS_MAX
};
#line 1345 "/usr/include/linux/if_link.h"

enum {
	VXLAN_VNIFILTER_ENTRY_UNSPEC,
	VXLAN_VNIFILTER_ENTRY_START,
	VXLAN_VNIFILTER_ENTRY_END,
	VXLAN_VNIFILTER_ENTRY_GROUP,
	VXLAN_VNIFILTER_ENTRY_GROUP6,
	VXLAN_VNIFILTER_ENTRY_STATS,
	__VXLAN_VNIFILTER_ENTRY_MAX
};
#line 1356 "/usr/include/linux/if_link.h"

enum {
	VXLAN_VNIFILTER_UNSPEC,
	VXLAN_VNIFILTER_ENTRY,
	__VXLAN_VNIFILTER_MAX
};
#line 1363 "/usr/include/linux/if_link.h"

enum {
	IFLA_VXLAN_UNSPEC,
	IFLA_VXLAN_ID,
	IFLA_VXLAN_GROUP,	
	IFLA_VXLAN_LINK,
	IFLA_VXLAN_LOCAL,
	IFLA_VXLAN_TTL,
	IFLA_VXLAN_TOS,
	IFLA_VXLAN_LEARNING,
	IFLA_VXLAN_AGEING,
	IFLA_VXLAN_LIMIT,
	IFLA_VXLAN_PORT_RANGE,	
	IFLA_VXLAN_PROXY,
	IFLA_VXLAN_RSC,
	IFLA_VXLAN_L2MISS,
	IFLA_VXLAN_L3MISS,
	IFLA_VXLAN_PORT,	
	IFLA_VXLAN_GROUP6,
	IFLA_VXLAN_LOCAL6,
	IFLA_VXLAN_UDP_CSUM,
	IFLA_VXLAN_UDP_ZERO_CSUM6_TX,
	IFLA_VXLAN_UDP_ZERO_CSUM6_RX,
	IFLA_VXLAN_REMCSUM_TX,
	IFLA_VXLAN_REMCSUM_RX,
	IFLA_VXLAN_GBP,
	IFLA_VXLAN_REMCSUM_NOPARTIAL,
	IFLA_VXLAN_COLLECT_METADATA,
	IFLA_VXLAN_LABEL,
	IFLA_VXLAN_GPE,
	IFLA_VXLAN_TTL_INHERIT,
	IFLA_VXLAN_DF,
	IFLA_VXLAN_VNIFILTER, 
	IFLA_VXLAN_LOCALBYPASS,
	IFLA_VXLAN_LABEL_POLICY, 
	IFLA_VXLAN_RESERVED_BITS,
	IFLA_VXLAN_MC_ROUTE,
	__IFLA_VXLAN_MAX
};
#line 1403 "/usr/include/linux/if_link.h"

struct ifla_vxlan_port_range {
	__be16	low;
	__be16	high;
};

enum ifla_vxlan_df {
	VXLAN_DF_UNSET = 0,
	VXLAN_DF_SET,
	VXLAN_DF_INHERIT,
	__VXLAN_DF_END,
	VXLAN_DF_MAX = __VXLAN_DF_END - 1,
};

enum ifla_vxlan_label_policy {
	VXLAN_LABEL_FIXED = 0,
	VXLAN_LABEL_INHERIT = 1,
	__VXLAN_LABEL_END,
	VXLAN_LABEL_MAX = __VXLAN_LABEL_END - 1,
};


enum {
	IFLA_GENEVE_UNSPEC,
	IFLA_GENEVE_ID,
	IFLA_GENEVE_REMOTE,
	IFLA_GENEVE_TTL,
	IFLA_GENEVE_TOS,
	IFLA_GENEVE_PORT,	
	IFLA_GENEVE_COLLECT_METADATA,
	IFLA_GENEVE_REMOTE6,
	IFLA_GENEVE_UDP_CSUM,
	IFLA_GENEVE_UDP_ZERO_CSUM6_TX,
	IFLA_GENEVE_UDP_ZERO_CSUM6_RX,
	IFLA_GENEVE_LABEL,
	IFLA_GENEVE_TTL_INHERIT,
	IFLA_GENEVE_DF,
	IFLA_GENEVE_INNER_PROTO_INHERIT,
	IFLA_GENEVE_PORT_RANGE,
	__IFLA_GENEVE_MAX
};
#line 1445 "/usr/include/linux/if_link.h"

enum ifla_geneve_df {
	GENEVE_DF_UNSET = 0,
	GENEVE_DF_SET,
	GENEVE_DF_INHERIT,
	__GENEVE_DF_END,
	GENEVE_DF_MAX = __GENEVE_DF_END - 1,
};

struct ifla_geneve_port_range {
	__be16 low;
	__be16 high;
};


enum {
	IFLA_BAREUDP_UNSPEC,
	IFLA_BAREUDP_PORT,
	IFLA_BAREUDP_ETHERTYPE,
	IFLA_BAREUDP_SRCPORT_MIN,
	IFLA_BAREUDP_MULTIPROTO_MODE,
	__IFLA_BAREUDP_MAX
};

#line 1470 "/usr/include/linux/if_link.h"


enum {
	IFLA_PPP_UNSPEC,
	IFLA_PPP_DEV_FD,
	__IFLA_PPP_MAX
};
#line 1478 "/usr/include/linux/if_link.h"



enum ifla_gtp_role {
	GTP_ROLE_GGSN = 0,
	GTP_ROLE_SGSN,
};

enum {
	IFLA_GTP_UNSPEC,
	IFLA_GTP_FD0,
	IFLA_GTP_FD1,
	IFLA_GTP_PDP_HASHSIZE,
	IFLA_GTP_ROLE,
	IFLA_GTP_CREATE_SOCKETS,
	IFLA_GTP_RESTART_COUNT,
	IFLA_GTP_LOCAL,
	IFLA_GTP_LOCAL6,
	__IFLA_GTP_MAX,
};
#line 1499 "/usr/include/linux/if_link.h"



enum {
	IFLA_BOND_UNSPEC,
	IFLA_BOND_MODE,
	IFLA_BOND_ACTIVE_SLAVE,
	IFLA_BOND_MIIMON,
	IFLA_BOND_UPDELAY,
	IFLA_BOND_DOWNDELAY,
	IFLA_BOND_USE_CARRIER,
	IFLA_BOND_ARP_INTERVAL,
	IFLA_BOND_ARP_IP_TARGET,
	IFLA_BOND_ARP_VALIDATE,
	IFLA_BOND_ARP_ALL_TARGETS,
	IFLA_BOND_PRIMARY,
	IFLA_BOND_PRIMARY_RESELECT,
	IFLA_BOND_FAIL_OVER_MAC,
	IFLA_BOND_XMIT_HASH_POLICY,
	IFLA_BOND_RESEND_IGMP,
	IFLA_BOND_NUM_PEER_NOTIF,
	IFLA_BOND_ALL_SLAVES_ACTIVE,
	IFLA_BOND_MIN_LINKS,
	IFLA_BOND_LP_INTERVAL,
	IFLA_BOND_PACKETS_PER_SLAVE,
	IFLA_BOND_AD_LACP_RATE,
	IFLA_BOND_AD_SELECT,
	IFLA_BOND_AD_INFO,
	IFLA_BOND_AD_ACTOR_SYS_PRIO,
	IFLA_BOND_AD_USER_PORT_KEY,
	IFLA_BOND_AD_ACTOR_SYSTEM,
	IFLA_BOND_TLB_DYNAMIC_LB,
	IFLA_BOND_PEER_NOTIF_DELAY,
	IFLA_BOND_AD_LACP_ACTIVE,
	IFLA_BOND_MISSED_MAX,
	IFLA_BOND_NS_IP6_TARGET,
	IFLA_BOND_COUPLED_CONTROL,
	IFLA_BOND_BROADCAST_NEIGH,
	__IFLA_BOND_MAX,
};

#line 1541 "/usr/include/linux/if_link.h"

enum {
	IFLA_BOND_AD_INFO_UNSPEC,
	IFLA_BOND_AD_INFO_AGGREGATOR,
	IFLA_BOND_AD_INFO_NUM_PORTS,
	IFLA_BOND_AD_INFO_ACTOR_KEY,
	IFLA_BOND_AD_INFO_PARTNER_KEY,
	IFLA_BOND_AD_INFO_PARTNER_MAC,
	__IFLA_BOND_AD_INFO_MAX,
};

#line 1553 "/usr/include/linux/if_link.h"

enum {
	IFLA_BOND_SLAVE_UNSPEC,
	IFLA_BOND_SLAVE_STATE,
	IFLA_BOND_SLAVE_MII_STATUS,
	IFLA_BOND_SLAVE_LINK_FAILURE_COUNT,
	IFLA_BOND_SLAVE_PERM_HWADDR,
	IFLA_BOND_SLAVE_QUEUE_ID,
	IFLA_BOND_SLAVE_AD_AGGREGATOR_ID,
	IFLA_BOND_SLAVE_AD_ACTOR_OPER_PORT_STATE,
	IFLA_BOND_SLAVE_AD_PARTNER_OPER_PORT_STATE,
	IFLA_BOND_SLAVE_PRIO,
	__IFLA_BOND_SLAVE_MAX,
};

#line 1569 "/usr/include/linux/if_link.h"



enum {
	IFLA_VF_INFO_UNSPEC,
	IFLA_VF_INFO,
	__IFLA_VF_INFO_MAX,
};

#line 1579 "/usr/include/linux/if_link.h"

enum {
	IFLA_VF_UNSPEC,
	IFLA_VF_MAC,		
	IFLA_VF_VLAN,		
	IFLA_VF_TX_RATE,	
	IFLA_VF_SPOOFCHK,	
	IFLA_VF_LINK_STATE,	
	IFLA_VF_RATE,		
	IFLA_VF_RSS_QUERY_EN,	


	IFLA_VF_STATS,		
	IFLA_VF_TRUST,		
	IFLA_VF_IB_NODE_GUID,	
	IFLA_VF_IB_PORT_GUID,	
	IFLA_VF_VLAN_LIST,	
	IFLA_VF_BROADCAST,	
	__IFLA_VF_MAX,
};

#line 1601 "/usr/include/linux/if_link.h"

struct ifla_vf_mac {
	__u32 vf;
	__u8 mac[32]; 
};

struct ifla_vf_broadcast {
	__u8 broadcast[32];
};

struct ifla_vf_vlan {
	__u32 vf;
	__u32 vlan; 
	__u32 qos;
};

enum {
	IFLA_VF_VLAN_INFO_UNSPEC,
	IFLA_VF_VLAN_INFO,	
	__IFLA_VF_VLAN_INFO_MAX,
};

#line 1625 "/usr/include/linux/if_link.h"

struct ifla_vf_vlan_info {
	__u32 vf;
	__u32 vlan; 
	__u32 qos;
	__be16 vlan_proto; 
};

struct ifla_vf_tx_rate {
	__u32 vf;
	__u32 rate; 
};

struct ifla_vf_rate {
	__u32 vf;
	__u32 min_tx_rate; 
	__u32 max_tx_rate; 
};

struct ifla_vf_spoofchk {
	__u32 vf;
	__u32 setting;
};

struct ifla_vf_guid {
	__u32 vf;
	__u64 guid;
};

enum {
	IFLA_VF_LINK_STATE_AUTO,	
	IFLA_VF_LINK_STATE_ENABLE,	
	IFLA_VF_LINK_STATE_DISABLE,	
	__IFLA_VF_LINK_STATE_MAX,
};

struct ifla_vf_link_state {
	__u32 vf;
	__u32 link_state;
};

struct ifla_vf_rss_query_en {
	__u32 vf;
	__u32 setting;
};

enum {
	IFLA_VF_STATS_RX_PACKETS,
	IFLA_VF_STATS_TX_PACKETS,
	IFLA_VF_STATS_RX_BYTES,
	IFLA_VF_STATS_TX_BYTES,
	IFLA_VF_STATS_BROADCAST,
	IFLA_VF_STATS_MULTICAST,
	IFLA_VF_STATS_PAD,
	IFLA_VF_STATS_RX_DROPPED,
	IFLA_VF_STATS_TX_DROPPED,
	__IFLA_VF_STATS_MAX,
};

#line 1685 "/usr/include/linux/if_link.h"

struct ifla_vf_trust {
	__u32 vf;
	__u32 setting;
};
















enum {
	IFLA_VF_PORT_UNSPEC,
	IFLA_VF_PORT,			
	__IFLA_VF_PORT_MAX,
};

#line 1713 "/usr/include/linux/if_link.h"

enum {
	IFLA_PORT_UNSPEC,
	IFLA_PORT_VF,			
	IFLA_PORT_PROFILE,		
	IFLA_PORT_VSI_TYPE,		
	IFLA_PORT_INSTANCE_UUID,	
	IFLA_PORT_HOST_UUID,		
	IFLA_PORT_REQUEST,		
	IFLA_PORT_RESPONSE,		
	__IFLA_PORT_MAX,
};

#line 1727 "/usr/include/linux/if_link.h"

#line 1731 "/usr/include/linux/if_link.h"

enum {
	PORT_REQUEST_PREASSOCIATE = 0,
	PORT_REQUEST_PREASSOCIATE_RR,
	PORT_REQUEST_ASSOCIATE,
	PORT_REQUEST_DISASSOCIATE,
};

enum {
	PORT_VDP_RESPONSE_SUCCESS = 0,
	PORT_VDP_RESPONSE_INVALID_FORMAT,
	PORT_VDP_RESPONSE_INSUFFICIENT_RESOURCES,
	PORT_VDP_RESPONSE_UNUSED_VTID,
	PORT_VDP_RESPONSE_VTID_VIOLATION,
	PORT_VDP_RESPONSE_VTID_VERSION_VIOALTION,
	PORT_VDP_RESPONSE_OUT_OF_SYNC,
	
	PORT_PROFILE_RESPONSE_SUCCESS = 0x100,
	PORT_PROFILE_RESPONSE_INPROGRESS,
	PORT_PROFILE_RESPONSE_INVALID,
	PORT_PROFILE_RESPONSE_BADSTATE,
	PORT_PROFILE_RESPONSE_INSUFFICIENT_RESOURCES,
	PORT_PROFILE_RESPONSE_ERROR,
};

struct ifla_port_vsi {
	__u8 vsi_mgr_id;
	__u8 vsi_type_id[3];
	__u8 vsi_type_version;
	__u8 pad[3];
};




enum {
	IFLA_IPOIB_UNSPEC,
	IFLA_IPOIB_PKEY,
	IFLA_IPOIB_MODE,
	IFLA_IPOIB_UMCAST,
	__IFLA_IPOIB_MAX
};

enum {
	IPOIB_MODE_DATAGRAM  = 0, 
	IPOIB_MODE_CONNECTED = 1, 
};

#line 1780 "/usr/include/linux/if_link.h"





enum {
	HSR_PROTOCOL_HSR,
	HSR_PROTOCOL_PRP,
	HSR_PROTOCOL_MAX,
};

enum {
	IFLA_HSR_UNSPEC,
	IFLA_HSR_SLAVE1,
	IFLA_HSR_SLAVE2,
	IFLA_HSR_MULTICAST_SPEC,	
	IFLA_HSR_SUPERVISION_ADDR,	
	IFLA_HSR_SEQ_NR,
	IFLA_HSR_VERSION,		
	IFLA_HSR_PROTOCOL,		


	IFLA_HSR_INTERLINK,		
	__IFLA_HSR_MAX,
};

#line 1807 "/usr/include/linux/if_link.h"



struct if_stats_msg {
	__u8  family;
	__u8  pad1;
	__u16 pad2;
	__u32 ifindex;
	__u32 filter_mask;
};




enum {
	IFLA_STATS_UNSPEC, 
	IFLA_STATS_LINK_64,
	IFLA_STATS_LINK_XSTATS,
	IFLA_STATS_LINK_XSTATS_SLAVE,
	IFLA_STATS_LINK_OFFLOAD_XSTATS,
	IFLA_STATS_AF_SPEC,
	__IFLA_STATS_MAX,
};

#line 1832 "/usr/include/linux/if_link.h"

#line 1834 "/usr/include/linux/if_link.h"

enum {
	IFLA_STATS_GETSET_UNSPEC,
	IFLA_STATS_GET_FILTERS, 


	IFLA_STATS_SET_OFFLOAD_XSTATS_L3_STATS, 
	__IFLA_STATS_GETSET_MAX,
};

#line 1845 "/usr/include/linux/if_link.h"






enum {
	LINK_XSTATS_TYPE_UNSPEC,
	LINK_XSTATS_TYPE_BRIDGE,
	LINK_XSTATS_TYPE_BOND,
	__LINK_XSTATS_TYPE_MAX
};
#line 1858 "/usr/include/linux/if_link.h"


enum {
	IFLA_OFFLOAD_XSTATS_UNSPEC,
	IFLA_OFFLOAD_XSTATS_CPU_HIT, 
	IFLA_OFFLOAD_XSTATS_HW_S_INFO,	
	IFLA_OFFLOAD_XSTATS_L3_STATS,	
	__IFLA_OFFLOAD_XSTATS_MAX
};
#line 1868 "/usr/include/linux/if_link.h"

enum {
	IFLA_OFFLOAD_XSTATS_HW_S_INFO_UNSPEC,
	IFLA_OFFLOAD_XSTATS_HW_S_INFO_REQUEST,		
	IFLA_OFFLOAD_XSTATS_HW_S_INFO_USED,		
	__IFLA_OFFLOAD_XSTATS_HW_S_INFO_MAX,
};
#line 1876 "/usr/include/linux/if_link.h"



#line 1886 "/usr/include/linux/if_link.h"


enum {
	XDP_ATTACHED_NONE = 0,
	XDP_ATTACHED_DRV,
	XDP_ATTACHED_SKB,
	XDP_ATTACHED_HW,
	XDP_ATTACHED_MULTI,
};

enum {
	IFLA_XDP_UNSPEC,
	IFLA_XDP_FD,
	IFLA_XDP_ATTACHED,
	IFLA_XDP_FLAGS,
	IFLA_XDP_PROG_ID,
	IFLA_XDP_DRV_PROG_ID,
	IFLA_XDP_SKB_PROG_ID,
	IFLA_XDP_HW_PROG_ID,
	IFLA_XDP_EXPECTED_FD,
	__IFLA_XDP_MAX,
};

#line 1910 "/usr/include/linux/if_link.h"

enum {
	IFLA_EVENT_NONE,
	IFLA_EVENT_REBOOT,		
	IFLA_EVENT_FEATURES,		
	IFLA_EVENT_BONDING_FAILOVER,	
	IFLA_EVENT_NOTIFY_PEERS,	
	IFLA_EVENT_IGMP_RESEND,		
	IFLA_EVENT_BONDING_OPTIONS,	
};



enum {
	IFLA_TUN_UNSPEC,
	IFLA_TUN_OWNER,
	IFLA_TUN_GROUP,
	IFLA_TUN_TYPE,
	IFLA_TUN_PI,
	IFLA_TUN_VNET_HDR,
	IFLA_TUN_PERSIST,
	IFLA_TUN_MULTI_QUEUE,
	IFLA_TUN_NUM_QUEUES,
	IFLA_TUN_NUM_DISABLED_QUEUES,
	__IFLA_TUN_MAX,
};

#line 1938 "/usr/include/linux/if_link.h"



#line 1947 "/usr/include/linux/if_link.h"

enum {
	IFLA_RMNET_UNSPEC,
	IFLA_RMNET_MUX_ID,
	IFLA_RMNET_FLAGS,
	__IFLA_RMNET_MAX,
};

#line 1956 "/usr/include/linux/if_link.h"

struct ifla_rmnet_flags {
	__u32	flags;
	__u32	mask;
};



enum {
	IFLA_MCTP_UNSPEC,
	IFLA_MCTP_NET,
	IFLA_MCTP_PHYS_BINDING,
	__IFLA_MCTP_MAX,
};

#line 1972 "/usr/include/linux/if_link.h"



enum {
	IFLA_DSA_UNSPEC,
	IFLA_DSA_CONDUIT,
	
	IFLA_DSA_MASTER = IFLA_DSA_CONDUIT,
	__IFLA_DSA_MAX,
};

#line 1984 "/usr/include/linux/if_link.h"



enum ovpn_mode {
	OVPN_MODE_P2P,
	OVPN_MODE_MP,
};

enum {
	IFLA_OVPN_UNSPEC,
	IFLA_OVPN_MODE,
	__IFLA_OVPN_MAX,
};

#line 1999 "/usr/include/linux/if_link.h"
#line 8 "/usr/include/linux/rtnetlink.h"
#line 1 "/usr/include/linux/if_addr.h"

#line 4 "/usr/include/linux/if_addr.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/if_addr.h"
#line 1 "/usr/include/linux/netlink.h"
#line 7 "/usr/include/linux/if_addr.h"

struct ifaddrmsg {
	__u8		ifa_family;
	__u8		ifa_prefixlen;	
	__u8		ifa_flags;	
	__u8		ifa_scope;	
	__u32		ifa_index;	
};











enum {
	IFA_UNSPEC,
	IFA_ADDRESS,
	IFA_LOCAL,
	IFA_LABEL,
	IFA_BROADCAST,
	IFA_ANYCAST,
	IFA_CACHEINFO,
	IFA_MULTICAST,
	IFA_FLAGS,
	IFA_RT_PRIORITY,	
	IFA_TARGET_NETNSID,
	IFA_PROTO,		
	__IFA_MAX,
};

#line 43 "/usr/include/linux/if_addr.h"


#line 47 "/usr/include/linux/if_addr.h"

#line 59 "/usr/include/linux/if_addr.h"

struct ifa_cacheinfo {
	__u32	ifa_prefered;
	__u32	ifa_valid;
	__u32	cstamp; 
	__u32	tstamp; 
};


#line 70 "/usr/include/linux/if_addr.h"


#line 76 "/usr/include/linux/if_addr.h"
#line 9 "/usr/include/linux/rtnetlink.h"
#line 1 "/usr/include/linux/neighbour.h"

#line 4 "/usr/include/linux/neighbour.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/neighbour.h"
#line 1 "/usr/include/linux/netlink.h"
#line 7 "/usr/include/linux/neighbour.h"

struct ndmsg {
	__u8		ndm_family;
	__u8		ndm_pad1;
	__u16		ndm_pad2;
	__s32		ndm_ifindex;
	__u16		ndm_state;
	__u8		ndm_flags;
	__u8		ndm_type;
};

enum {
	NDA_UNSPEC,
	NDA_DST,
	NDA_LLADDR,
	NDA_CACHEINFO,
	NDA_PROBES,
	NDA_VLAN,
	NDA_PORT,
	NDA_VNI,
	NDA_IFINDEX,
	NDA_MASTER,
	NDA_LINK_NETNSID,
	NDA_SRC_VNI,
	NDA_PROTOCOL,  
	NDA_NH_ID,
	NDA_FDB_EXT_ATTRS,
	NDA_FLAGS_EXT,
	NDA_NDM_STATE_MASK,
	NDA_NDM_FLAGS_MASK,
	__NDA_MAX
};

#line 41 "/usr/include/linux/neighbour.h"





#line 54 "/usr/include/linux/neighbour.h"

#line 58 "/usr/include/linux/neighbour.h"





#line 69 "/usr/include/linux/neighbour.h"


#line 74 "/usr/include/linux/neighbour.h"




























struct nda_cacheinfo {
	__u32		ndm_confirmed;
	__u32		ndm_used;
	__u32		ndm_updated;
	__u32		ndm_refcnt;
};


























struct ndt_stats {
	__u64		ndts_allocs;
	__u64		ndts_destroys;
	__u64		ndts_hash_grows;
	__u64		ndts_res_failed;
	__u64		ndts_lookups;
	__u64		ndts_hits;
	__u64		ndts_rcv_probes_mcast;
	__u64		ndts_rcv_probes_ucast;
	__u64		ndts_periodic_gc_runs;
	__u64		ndts_forced_gc_runs;
	__u64		ndts_table_fulls;
};

enum {
	NDTPA_UNSPEC,
	NDTPA_IFINDEX,			
	NDTPA_REFCNT,			
	NDTPA_REACHABLE_TIME,		
	NDTPA_BASE_REACHABLE_TIME,	
	NDTPA_RETRANS_TIME,		
	NDTPA_GC_STALETIME,		
	NDTPA_DELAY_PROBE_TIME,		
	NDTPA_QUEUE_LEN,		
	NDTPA_APP_PROBES,		
	NDTPA_UCAST_PROBES,		
	NDTPA_MCAST_PROBES,		
	NDTPA_ANYCAST_DELAY,		
	NDTPA_PROXY_DELAY,		
	NDTPA_PROXY_QLEN,		
	NDTPA_LOCKTIME,			
	NDTPA_QUEUE_LENBYTES,		
	NDTPA_MCAST_REPROBES,		
	NDTPA_PAD,
	NDTPA_INTERVAL_PROBE_TIME_MS,	
	__NDTPA_MAX
};
#line 172 "/usr/include/linux/neighbour.h"

struct ndtmsg {
	__u8		ndtm_family;
	__u8		ndtm_pad1;
	__u16		ndtm_pad2;
};

struct ndt_config {
	__u16		ndtc_key_len;
	__u16		ndtc_entry_size;
	__u32		ndtc_entries;
	__u32		ndtc_last_flush;	
	__u32		ndtc_last_rand;		
	__u32		ndtc_hash_rnd;
	__u32		ndtc_hash_mask;
	__u32		ndtc_hash_chain_gc;
	__u32		ndtc_proxy_qlen;
};

enum {
	NDTA_UNSPEC,
	NDTA_NAME,			
	NDTA_THRESH1,			
	NDTA_THRESH2,			
	NDTA_THRESH3,			
	NDTA_CONFIG,			
	NDTA_PARMS,			
	NDTA_STATS,			
	NDTA_GC_INTERVAL,		
	NDTA_PAD,
	__NDTA_MAX
};
#line 205 "/usr/include/linux/neighbour.h"

 



enum {
	FDB_NOTIFY_BIT		= (1 << 0),
	FDB_NOTIFY_INACTIVE_BIT	= (1 << 1)
};







enum {
	NFEA_UNSPEC,
	NFEA_ACTIVITY_NOTIFY,
	NFEA_DONT_REFRESH,
	__NFEA_MAX
};
#line 228 "/usr/include/linux/neighbour.h"
#line 10 "/usr/include/linux/rtnetlink.h"




#line 17 "/usr/include/linux/rtnetlink.h"







enum {
	RTM_BASE	= 16,
#line 27 "/usr/include/linux/rtnetlink.h"

	RTM_NEWLINK	= 16,
#line 30 "/usr/include/linux/rtnetlink.h"
	RTM_DELLINK,
#line 32 "/usr/include/linux/rtnetlink.h"
	RTM_GETLINK,
#line 34 "/usr/include/linux/rtnetlink.h"
	RTM_SETLINK,
#line 36 "/usr/include/linux/rtnetlink.h"

	RTM_NEWADDR	= 20,
#line 39 "/usr/include/linux/rtnetlink.h"
	RTM_DELADDR,
#line 41 "/usr/include/linux/rtnetlink.h"
	RTM_GETADDR,
#line 43 "/usr/include/linux/rtnetlink.h"

	RTM_NEWROUTE	= 24,
#line 46 "/usr/include/linux/rtnetlink.h"
	RTM_DELROUTE,
#line 48 "/usr/include/linux/rtnetlink.h"
	RTM_GETROUTE,
#line 50 "/usr/include/linux/rtnetlink.h"

	RTM_NEWNEIGH	= 28,
#line 53 "/usr/include/linux/rtnetlink.h"
	RTM_DELNEIGH,
#line 55 "/usr/include/linux/rtnetlink.h"
	RTM_GETNEIGH,
#line 57 "/usr/include/linux/rtnetlink.h"

	RTM_NEWRULE	= 32,
#line 60 "/usr/include/linux/rtnetlink.h"
	RTM_DELRULE,
#line 62 "/usr/include/linux/rtnetlink.h"
	RTM_GETRULE,
#line 64 "/usr/include/linux/rtnetlink.h"

	RTM_NEWQDISC	= 36,
#line 67 "/usr/include/linux/rtnetlink.h"
	RTM_DELQDISC,
#line 69 "/usr/include/linux/rtnetlink.h"
	RTM_GETQDISC,
#line 71 "/usr/include/linux/rtnetlink.h"

	RTM_NEWTCLASS	= 40,
#line 74 "/usr/include/linux/rtnetlink.h"
	RTM_DELTCLASS,
#line 76 "/usr/include/linux/rtnetlink.h"
	RTM_GETTCLASS,
#line 78 "/usr/include/linux/rtnetlink.h"

	RTM_NEWTFILTER	= 44,
#line 81 "/usr/include/linux/rtnetlink.h"
	RTM_DELTFILTER,
#line 83 "/usr/include/linux/rtnetlink.h"
	RTM_GETTFILTER,
#line 85 "/usr/include/linux/rtnetlink.h"

	RTM_NEWACTION	= 48,
#line 88 "/usr/include/linux/rtnetlink.h"
	RTM_DELACTION,
#line 90 "/usr/include/linux/rtnetlink.h"
	RTM_GETACTION,
#line 92 "/usr/include/linux/rtnetlink.h"

	RTM_NEWPREFIX	= 52,
#line 95 "/usr/include/linux/rtnetlink.h"

	RTM_NEWMULTICAST = 56,
#line 98 "/usr/include/linux/rtnetlink.h"
	RTM_DELMULTICAST,
#line 100 "/usr/include/linux/rtnetlink.h"
	RTM_GETMULTICAST,
#line 102 "/usr/include/linux/rtnetlink.h"

	RTM_NEWANYCAST	= 60,
#line 105 "/usr/include/linux/rtnetlink.h"
	RTM_DELANYCAST,
#line 107 "/usr/include/linux/rtnetlink.h"
	RTM_GETANYCAST,
#line 109 "/usr/include/linux/rtnetlink.h"

	RTM_NEWNEIGHTBL	= 64,
#line 112 "/usr/include/linux/rtnetlink.h"
	RTM_GETNEIGHTBL	= 66,
#line 114 "/usr/include/linux/rtnetlink.h"
	RTM_SETNEIGHTBL,
#line 116 "/usr/include/linux/rtnetlink.h"

	RTM_NEWNDUSEROPT = 68,
#line 119 "/usr/include/linux/rtnetlink.h"

	RTM_NEWADDRLABEL = 72,
#line 122 "/usr/include/linux/rtnetlink.h"
	RTM_DELADDRLABEL,
#line 124 "/usr/include/linux/rtnetlink.h"
	RTM_GETADDRLABEL,
#line 126 "/usr/include/linux/rtnetlink.h"

	RTM_GETDCB = 78,
#line 129 "/usr/include/linux/rtnetlink.h"
	RTM_SETDCB,
#line 131 "/usr/include/linux/rtnetlink.h"

	RTM_NEWNETCONF = 80,
#line 134 "/usr/include/linux/rtnetlink.h"
	RTM_DELNETCONF,
#line 136 "/usr/include/linux/rtnetlink.h"
	RTM_GETNETCONF = 82,
#line 138 "/usr/include/linux/rtnetlink.h"

	RTM_NEWMDB = 84,
#line 141 "/usr/include/linux/rtnetlink.h"
	RTM_DELMDB = 85,
#line 143 "/usr/include/linux/rtnetlink.h"
	RTM_GETMDB = 86,
#line 145 "/usr/include/linux/rtnetlink.h"

	RTM_NEWNSID = 88,
#line 148 "/usr/include/linux/rtnetlink.h"
	RTM_DELNSID = 89,
#line 150 "/usr/include/linux/rtnetlink.h"
	RTM_GETNSID = 90,
#line 152 "/usr/include/linux/rtnetlink.h"

	RTM_NEWSTATS = 92,
#line 155 "/usr/include/linux/rtnetlink.h"
	RTM_GETSTATS = 94,
#line 157 "/usr/include/linux/rtnetlink.h"
	RTM_SETSTATS,
#line 159 "/usr/include/linux/rtnetlink.h"

	RTM_NEWCACHEREPORT = 96,
#line 162 "/usr/include/linux/rtnetlink.h"

	RTM_NEWCHAIN = 100,
#line 165 "/usr/include/linux/rtnetlink.h"
	RTM_DELCHAIN,
#line 167 "/usr/include/linux/rtnetlink.h"
	RTM_GETCHAIN,
#line 169 "/usr/include/linux/rtnetlink.h"

	RTM_NEWNEXTHOP = 104,
#line 172 "/usr/include/linux/rtnetlink.h"
	RTM_DELNEXTHOP,
#line 174 "/usr/include/linux/rtnetlink.h"
	RTM_GETNEXTHOP,
#line 176 "/usr/include/linux/rtnetlink.h"

	RTM_NEWLINKPROP = 108,
#line 179 "/usr/include/linux/rtnetlink.h"
	RTM_DELLINKPROP,
#line 181 "/usr/include/linux/rtnetlink.h"
	RTM_GETLINKPROP,
#line 183 "/usr/include/linux/rtnetlink.h"

	RTM_NEWVLAN = 112,
#line 186 "/usr/include/linux/rtnetlink.h"
	RTM_DELVLAN,
#line 188 "/usr/include/linux/rtnetlink.h"
	RTM_GETVLAN,
#line 190 "/usr/include/linux/rtnetlink.h"

	RTM_NEWNEXTHOPBUCKET = 116,
#line 193 "/usr/include/linux/rtnetlink.h"
	RTM_DELNEXTHOPBUCKET,
#line 195 "/usr/include/linux/rtnetlink.h"
	RTM_GETNEXTHOPBUCKET,
#line 197 "/usr/include/linux/rtnetlink.h"

	RTM_NEWTUNNEL = 120,
#line 200 "/usr/include/linux/rtnetlink.h"
	RTM_DELTUNNEL,
#line 202 "/usr/include/linux/rtnetlink.h"
	RTM_GETTUNNEL,
#line 204 "/usr/include/linux/rtnetlink.h"

	__RTM_MAX,
#line 207 "/usr/include/linux/rtnetlink.h"
};

#line 212 "/usr/include/linux/rtnetlink.h"







struct rtattr {
	unsigned short	rta_len;
	unsigned short	rta_type;
};



#line 234 "/usr/include/linux/rtnetlink.h"








struct rtmsg {
	unsigned char		rtm_family;
	unsigned char		rtm_dst_len;
	unsigned char		rtm_src_len;
	unsigned char		rtm_tos;

	unsigned char		rtm_table;	
	unsigned char		rtm_protocol;	
	unsigned char		rtm_scope;		
	unsigned char		rtm_type;	

	unsigned		rtm_flags;
};



enum {
	RTN_UNSPEC,
	RTN_UNICAST,		
	RTN_LOCAL,		
	RTN_BROADCAST,		

	RTN_ANYCAST,		

	RTN_MULTICAST,		
	RTN_BLACKHOLE,		
	RTN_UNREACHABLE,	
	RTN_PROHIBIT,		
	RTN_THROW,		
	RTN_NAT,		
	RTN_XRESOLVE,		
	__RTN_MAX
};

#line 277 "/usr/include/linux/rtnetlink.h"




#line 287 "/usr/include/linux/rtnetlink.h"








#line 314 "/usr/include/linux/rtnetlink.h"












enum rt_scope_t {
	RT_SCOPE_UNIVERSE=0,

	RT_SCOPE_SITE=200,
	RT_SCOPE_LINK=253,
	RT_SCOPE_HOST=254,
	RT_SCOPE_NOWHERE=255
};



#line 350 "/usr/include/linux/rtnetlink.h"



enum rt_class_t {
	RT_TABLE_UNSPEC=0,

	RT_TABLE_COMPAT=252,
	RT_TABLE_DEFAULT=253,
	RT_TABLE_MAIN=254,
	RT_TABLE_LOCAL=255,
	RT_TABLE_MAX=0xFFFFFFFF
};




enum rtattr_type_t {
	RTA_UNSPEC,
	RTA_DST,
	RTA_SRC,
	RTA_IIF,
	RTA_OIF,
	RTA_GATEWAY,
	RTA_PRIORITY,
	RTA_PREFSRC,
	RTA_METRICS,
	RTA_MULTIPATH,
	RTA_PROTOINFO, 
	RTA_FLOW,
	RTA_CACHEINFO,
	RTA_SESSION, 
	RTA_MP_ALGO, 
	RTA_TABLE,
	RTA_MARK,
	RTA_MFC_STATS,
	RTA_VIA,
	RTA_NEWDST,
	RTA_PREF,
	RTA_ENCAP_TYPE,
	RTA_ENCAP,
	RTA_EXPIRES,
	RTA_PAD,
	RTA_UID,
	RTA_TTL_PROPAGATE,
	RTA_IP_PROTO,
	RTA_SPORT,
	RTA_DPORT,
	RTA_NH_ID,
	RTA_FLOWLABEL,
	__RTA_MAX
};

#line 403 "/usr/include/linux/rtnetlink.h"

#line 406 "/usr/include/linux/rtnetlink.h"










struct rtnexthop {
	unsigned short		rtnh_len;
	unsigned char		rtnh_flags;
	unsigned char		rtnh_hops;
	int			rtnh_ifindex;
};



#line 432 "/usr/include/linux/rtnetlink.h"

#line 434 "/usr/include/linux/rtnetlink.h"



#line 444 "/usr/include/linux/rtnetlink.h"


struct rtvia {
	__kernel_sa_family_t	rtvia_family;
	__u8			rtvia_addr[];
};



struct rta_cacheinfo {
	__u32	rta_clntref;
	__u32	rta_lastuse;
	__s32	rta_expires;
	__u32	rta_error;
	__u32	rta_used;

#line 461 "/usr/include/linux/rtnetlink.h"
	__u32	rta_id;
	__u32	rta_ts;
	__u32	rta_tsage;
};



enum {
	RTAX_UNSPEC,
#line 471 "/usr/include/linux/rtnetlink.h"
	RTAX_LOCK,
#line 473 "/usr/include/linux/rtnetlink.h"
	RTAX_MTU,
#line 475 "/usr/include/linux/rtnetlink.h"
	RTAX_WINDOW,
#line 477 "/usr/include/linux/rtnetlink.h"
	RTAX_RTT,
#line 479 "/usr/include/linux/rtnetlink.h"
	RTAX_RTTVAR,
#line 481 "/usr/include/linux/rtnetlink.h"
	RTAX_SSTHRESH,
#line 483 "/usr/include/linux/rtnetlink.h"
	RTAX_CWND,
#line 485 "/usr/include/linux/rtnetlink.h"
	RTAX_ADVMSS,
#line 487 "/usr/include/linux/rtnetlink.h"
	RTAX_REORDERING,
#line 489 "/usr/include/linux/rtnetlink.h"
	RTAX_HOPLIMIT,
#line 491 "/usr/include/linux/rtnetlink.h"
	RTAX_INITCWND,
#line 493 "/usr/include/linux/rtnetlink.h"
	RTAX_FEATURES,
#line 495 "/usr/include/linux/rtnetlink.h"
	RTAX_RTO_MIN,
#line 497 "/usr/include/linux/rtnetlink.h"
	RTAX_INITRWND,
#line 499 "/usr/include/linux/rtnetlink.h"
	RTAX_QUICKACK,
#line 501 "/usr/include/linux/rtnetlink.h"
	RTAX_CC_ALGO,
#line 503 "/usr/include/linux/rtnetlink.h"
	RTAX_FASTOPEN_NO_COOKIE,
#line 505 "/usr/include/linux/rtnetlink.h"
	__RTAX_MAX
};

#line 509 "/usr/include/linux/rtnetlink.h"

#line 515 "/usr/include/linux/rtnetlink.h"

#line 517 "/usr/include/linux/rtnetlink.h"

struct rta_session {
	__u8	proto;
	__u8	pad1;
	__u16	pad2;

	union {
		struct {
			__u16	sport;
			__u16	dport;
		} ports;

		struct {
			__u8	type;
			__u8	code;
			__u16	ident;
		} icmpt;

		__u32		spi;
	} u;
};

struct rta_mfc_stats {
	__u64	mfcs_packets;
	__u64	mfcs_bytes;
	__u64	mfcs_wrong_if;
};





struct rtgenmsg {
	unsigned char		rtgen_family;
};










struct ifinfomsg {
	unsigned char	ifi_family;
	unsigned char	__ifi_pad;
	unsigned short	ifi_type;		
	int		ifi_index;		
	unsigned	ifi_flags;		
	unsigned	ifi_change;		
};





struct prefixmsg {
	unsigned char	prefix_family;
	unsigned char	prefix_pad1;
	unsigned short	prefix_pad2;
	int		prefix_ifindex;
	unsigned char	prefix_type;
	unsigned char	prefix_len;
	unsigned char	prefix_flags;
	unsigned char	prefix_pad3;
};

enum 
{
	PREFIX_UNSPEC,
	PREFIX_ADDRESS,
	PREFIX_CACHEINFO,
	__PREFIX_MAX
};

#line 595 "/usr/include/linux/rtnetlink.h"

struct prefix_cacheinfo {
	__u32	preferred_time;
	__u32	valid_time;
};






struct tcmsg {
	unsigned char	tcm_family;
	unsigned char	tcm__pad1;
	unsigned short	tcm__pad2;
	int		tcm_ifindex;
	__u32		tcm_handle;
	__u32		tcm_parent;



#line 617 "/usr/include/linux/rtnetlink.h"
	__u32		tcm_info;
};





#line 625 "/usr/include/linux/rtnetlink.h"

enum {
	TCA_UNSPEC,
	TCA_KIND,
	TCA_OPTIONS,
	TCA_STATS,
	TCA_XSTATS,
	TCA_RATE,
	TCA_FCNT,
	TCA_STATS2,
	TCA_STAB,
	TCA_PAD,
	TCA_DUMP_INVISIBLE,
	TCA_CHAIN,
	TCA_HW_OFFLOAD,
	TCA_INGRESS_BLOCK,
	TCA_EGRESS_BLOCK,
	TCA_DUMP_FLAGS,
	TCA_EXT_WARN_MSG,
	__TCA_MAX
};

#line 648 "/usr/include/linux/rtnetlink.h"

#line 653 "/usr/include/linux/rtnetlink.h"

#line 656 "/usr/include/linux/rtnetlink.h"





struct nduseroptmsg {
	unsigned char	nduseropt_family;
	unsigned char	nduseropt_pad1;
	unsigned short	nduseropt_opts_len;	
	int		nduseropt_ifindex;
	__u8		nduseropt_icmp_type;
	__u8		nduseropt_icmp_code;
	unsigned short	nduseropt_pad2;
	unsigned int	nduseropt_pad3;
	
};

enum {
	NDUSEROPT_UNSPEC,
	NDUSEROPT_SRCADDR,
	__NDUSEROPT_MAX
};

#line 680 "/usr/include/linux/rtnetlink.h"


#line 686 "/usr/include/linux/rtnetlink.h"

#line 691 "/usr/include/linux/rtnetlink.h"

#line 696 "/usr/include/linux/rtnetlink.h"

#line 699 "/usr/include/linux/rtnetlink.h"

#line 701 "/usr/include/linux/rtnetlink.h"


enum rtnetlink_groups {
	RTNLGRP_NONE,
#line 706 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_LINK,
#line 708 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_NOTIFY,
#line 710 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_NEIGH,
#line 712 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_TC,
#line 714 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV4_IFADDR,
#line 716 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV4_MROUTE,
#line 718 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV4_ROUTE,
#line 720 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV4_RULE,
#line 722 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV6_IFADDR,
#line 724 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV6_MROUTE,
#line 726 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV6_ROUTE,
#line 728 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV6_IFINFO,
#line 730 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_DECnet_IFADDR,
#line 732 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_NOP2,
	RTNLGRP_DECnet_ROUTE,
#line 735 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_DECnet_RULE,
#line 737 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_NOP4,
	RTNLGRP_IPV6_PREFIX,
#line 740 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV6_RULE,
#line 742 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_ND_USEROPT,
#line 744 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_PHONET_IFADDR,
#line 746 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_PHONET_ROUTE,
#line 748 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_DCB,
#line 750 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV4_NETCONF,
#line 752 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV6_NETCONF,
#line 754 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_MDB,
#line 756 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_MPLS_ROUTE,
#line 758 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_NSID,
#line 760 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_MPLS_NETCONF,
#line 762 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV4_MROUTE_R,
#line 764 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV6_MROUTE_R,
#line 766 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_NEXTHOP,
#line 768 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_BRVLAN,
#line 770 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_MCTP_IFADDR,
#line 772 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_TUNNEL,
#line 774 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_STATS,
#line 776 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV4_MCADDR,
#line 778 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV6_MCADDR,
#line 780 "/usr/include/linux/rtnetlink.h"
	RTNLGRP_IPV6_ACADDR,
#line 782 "/usr/include/linux/rtnetlink.h"
	__RTNLGRP_MAX
};
#line 785 "/usr/include/linux/rtnetlink.h"


struct tcamsg {
	unsigned char	tca_family;
	unsigned char	tca__pad1;
	unsigned short	tca__pad2;
};

enum {
	TCA_ROOT_UNSPEC,
	TCA_ROOT_TAB,
#line 798 "/usr/include/linux/rtnetlink.h"
	TCA_ROOT_FLAGS,
	TCA_ROOT_COUNT,
	TCA_ROOT_TIME_DELTA, 
	TCA_ROOT_EXT_WARN_MSG,
	__TCA_ROOT_MAX,
#line 804 "/usr/include/linux/rtnetlink.h"
};

#line 808 "/usr/include/linux/rtnetlink.h"











#line 822 "/usr/include/linux/rtnetlink.h"


#line 832 "/usr/include/linux/rtnetlink.h"




#line 41 "headers_linux.c"
#line 1 "/usr/include/linux/genetlink.h"

#line 4 "/usr/include/linux/genetlink.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/genetlink.h"
#line 1 "/usr/include/linux/netlink.h"
#line 7 "/usr/include/linux/genetlink.h"

#line 9 "/usr/include/linux/genetlink.h"

#line 12 "/usr/include/linux/genetlink.h"

struct genlmsghdr {
	__u8	cmd;
	__u8	version;
	__u16	reserved;
};

#line 20 "/usr/include/linux/genetlink.h"

#line 26 "/usr/include/linux/genetlink.h"




#line 33 "/usr/include/linux/genetlink.h"

#line 35 "/usr/include/linux/genetlink.h"





enum {
	CTRL_CMD_UNSPEC,
	CTRL_CMD_NEWFAMILY,
	CTRL_CMD_DELFAMILY,
	CTRL_CMD_GETFAMILY,
	CTRL_CMD_NEWOPS,
	CTRL_CMD_DELOPS,
	CTRL_CMD_GETOPS,
	CTRL_CMD_NEWMCAST_GRP,
	CTRL_CMD_DELMCAST_GRP,
	CTRL_CMD_GETMCAST_GRP, 
	CTRL_CMD_GETPOLICY,
	__CTRL_CMD_MAX,
};

#line 56 "/usr/include/linux/genetlink.h"

enum {
	CTRL_ATTR_UNSPEC,
	CTRL_ATTR_FAMILY_ID,
	CTRL_ATTR_FAMILY_NAME,
	CTRL_ATTR_VERSION,
	CTRL_ATTR_HDRSIZE,
	CTRL_ATTR_MAXATTR,
	CTRL_ATTR_OPS,
	CTRL_ATTR_MCAST_GROUPS,
	CTRL_ATTR_POLICY,
	CTRL_ATTR_OP_POLICY,
	CTRL_ATTR_OP,
	__CTRL_ATTR_MAX,
};

#line 73 "/usr/include/linux/genetlink.h"

enum {
	CTRL_ATTR_OP_UNSPEC,
	CTRL_ATTR_OP_ID,
	CTRL_ATTR_OP_FLAGS,
	__CTRL_ATTR_OP_MAX,
};

#line 82 "/usr/include/linux/genetlink.h"

enum {
	CTRL_ATTR_MCAST_GRP_UNSPEC,
	CTRL_ATTR_MCAST_GRP_NAME,
	CTRL_ATTR_MCAST_GRP_ID,
	__CTRL_ATTR_MCAST_GRP_MAX,
};

#line 91 "/usr/include/linux/genetlink.h"

enum {
	CTRL_ATTR_POLICY_UNSPEC,
	CTRL_ATTR_POLICY_DO,
	CTRL_ATTR_POLICY_DUMP,

	__CTRL_ATTR_POLICY_DUMP_MAX,
	CTRL_ATTR_POLICY_DUMP_MAX = __CTRL_ATTR_POLICY_DUMP_MAX - 1
};

#line 102 "/usr/include/linux/genetlink.h"
#line 44 "headers_linux.c"
#line 1 "/usr/include/linux/netfilter/nfnetlink.h"

#line 1 "/usr/include/linux/types.h"
#line 5 "/usr/include/linux/netfilter/nfnetlink.h"
#line 1 "/usr/include/linux/netfilter/nfnetlink_compat.h"

#line 4 "/usr/include/linux/netfilter/nfnetlink_compat.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/netfilter/nfnetlink_compat.h"




#line 16 "/usr/include/linux/netfilter/nfnetlink_compat.h"








struct nfattr {
	__u16 nfa_len;
	__u16 nfa_type;	

};




#line 35 "/usr/include/linux/netfilter/nfnetlink_compat.h"

#line 47 "/usr/include/linux/netfilter/nfnetlink_compat.h"

#line 50 "/usr/include/linux/netfilter/nfnetlink_compat.h"
#line 6 "/usr/include/linux/netfilter/nfnetlink.h"

enum nfnetlink_groups {
	NFNLGRP_NONE,
#line 10 "/usr/include/linux/netfilter/nfnetlink.h"
	NFNLGRP_CONNTRACK_NEW,
#line 12 "/usr/include/linux/netfilter/nfnetlink.h"
	NFNLGRP_CONNTRACK_UPDATE,
#line 14 "/usr/include/linux/netfilter/nfnetlink.h"
	NFNLGRP_CONNTRACK_DESTROY,
#line 16 "/usr/include/linux/netfilter/nfnetlink.h"
	NFNLGRP_CONNTRACK_EXP_NEW,
#line 18 "/usr/include/linux/netfilter/nfnetlink.h"
	NFNLGRP_CONNTRACK_EXP_UPDATE,
#line 20 "/usr/include/linux/netfilter/nfnetlink.h"
	NFNLGRP_CONNTRACK_EXP_DESTROY,
#line 22 "/usr/include/linux/netfilter/nfnetlink.h"
	NFNLGRP_NFTABLES,
#line 24 "/usr/include/linux/netfilter/nfnetlink.h"
	NFNLGRP_ACCT_QUOTA,
#line 26 "/usr/include/linux/netfilter/nfnetlink.h"
	NFNLGRP_NFTRACE,
#line 28 "/usr/include/linux/netfilter/nfnetlink.h"
	__NFNLGRP_MAX,
};
#line 31 "/usr/include/linux/netfilter/nfnetlink.h"



struct nfgenmsg {
	__u8  nfgen_family;		
	__u8  version;		
	__be16    res_id;		
};

#line 41 "/usr/include/linux/netfilter/nfnetlink.h"





#line 48 "/usr/include/linux/netfilter/nfnetlink.h"



#line 65 "/usr/include/linux/netfilter/nfnetlink.h"


#line 69 "/usr/include/linux/netfilter/nfnetlink.h"






enum nfnl_batch_attributes {
        NFNL_BATCH_UNSPEC,
        NFNL_BATCH_GENID,
        __NFNL_BATCH_MAX
};
#line 81 "/usr/include/linux/netfilter/nfnetlink.h"
#line 47 "headers_linux.c"
#line 1 "/usr/include/linux/bpf.h"







#line 10 "/usr/include/linux/bpf.h"

#line 1 "/usr/include/linux/types.h"
#line 12 "/usr/include/linux/bpf.h"
#line 1 "/usr/include/linux/bpf_common.h"

#line 4 "/usr/include/linux/bpf_common.h"


#line 15 "/usr/include/linux/bpf_common.h"


#line 21 "/usr/include/linux/bpf_common.h"

#line 29 "/usr/include/linux/bpf_common.h"


#line 43 "/usr/include/linux/bpf_common.h"

#line 52 "/usr/include/linux/bpf_common.h"

#line 56 "/usr/include/linux/bpf_common.h"
#line 13 "/usr/include/linux/bpf.h"




#line 19 "/usr/include/linux/bpf.h"


#line 25 "/usr/include/linux/bpf.h"


#line 29 "/usr/include/linux/bpf.h"


#line 36 "/usr/include/linux/bpf.h"


#line 48 "/usr/include/linux/bpf.h"


#line 53 "/usr/include/linux/bpf.h"

#line 56 "/usr/include/linux/bpf.h"

enum bpf_cond_pseudo_jmp {
	BPF_MAY_GOTO = 0,
};


enum {
	BPF_REG_0 = 0,
	BPF_REG_1,
	BPF_REG_2,
	BPF_REG_3,
	BPF_REG_4,
	BPF_REG_5,
	BPF_REG_6,
	BPF_REG_7,
	BPF_REG_8,
	BPF_REG_9,
	BPF_REG_10,
	__MAX_BPF_REG,
};


#line 79 "/usr/include/linux/bpf.h"

struct bpf_insn {
	__u8	code;		
	__u8	dst_reg:4;	
	__u8	src_reg:4;	
	__s16	off;		
	__s32	imm;		
};





struct bpf_lpm_trie_key {
	__u32	prefixlen;	
	__u8	data[0];	
};


struct bpf_lpm_trie_key_hdr {
	__u32	prefixlen;
};


struct bpf_lpm_trie_key_u8 {
	union {
		struct bpf_lpm_trie_key_hdr	hdr;
		__u32				prefixlen;
	};
	__u8	data[];		
};

struct bpf_cgroup_storage_key {
	__u64	cgroup_inode_id;	
	__u32	attach_type;		
};

enum bpf_cgroup_iter_order {
	BPF_CGROUP_ITER_ORDER_UNSPEC = 0,
	BPF_CGROUP_ITER_SELF_ONLY,		
	BPF_CGROUP_ITER_DESCENDANTS_PRE,	
	BPF_CGROUP_ITER_DESCENDANTS_POST,	
	BPF_CGROUP_ITER_ANCESTORS_UP,		
};

union bpf_iter_link_info {
	struct {
		__u32	map_fd;
	} map;
	struct {
		enum bpf_cgroup_iter_order order;

		




		__u32	cgroup_fd;
		__u64	cgroup_id;
	} cgroup;
	
	struct {
		__u32	tid;
		__u32	pid;
		__u32	pid_fd;
	} task;
};























































































































































































































































































































































































































































































































































































































































































































































































































enum bpf_cmd {
	BPF_MAP_CREATE,
	BPF_MAP_LOOKUP_ELEM,
	BPF_MAP_UPDATE_ELEM,
	BPF_MAP_DELETE_ELEM,
	BPF_MAP_GET_NEXT_KEY,
	BPF_PROG_LOAD,
	BPF_OBJ_PIN,
	BPF_OBJ_GET,
	BPF_PROG_ATTACH,
	BPF_PROG_DETACH,
	BPF_PROG_TEST_RUN,
	BPF_PROG_RUN = BPF_PROG_TEST_RUN,
	BPF_PROG_GET_NEXT_ID,
	BPF_MAP_GET_NEXT_ID,
	BPF_PROG_GET_FD_BY_ID,
	BPF_MAP_GET_FD_BY_ID,
	BPF_OBJ_GET_INFO_BY_FD,
	BPF_PROG_QUERY,
	BPF_RAW_TRACEPOINT_OPEN,
	BPF_BTF_LOAD,
	BPF_BTF_GET_FD_BY_ID,
	BPF_TASK_FD_QUERY,
	BPF_MAP_LOOKUP_AND_DELETE_ELEM,
	BPF_MAP_FREEZE,
	BPF_BTF_GET_NEXT_ID,
	BPF_MAP_LOOKUP_BATCH,
	BPF_MAP_LOOKUP_AND_DELETE_BATCH,
	BPF_MAP_UPDATE_BATCH,
	BPF_MAP_DELETE_BATCH,
	BPF_LINK_CREATE,
	BPF_LINK_UPDATE,
	BPF_LINK_GET_FD_BY_ID,
	BPF_LINK_GET_NEXT_ID,
	BPF_ENABLE_STATS,
	BPF_ITER_CREATE,
	BPF_LINK_DETACH,
	BPF_PROG_BIND_MAP,
	BPF_TOKEN_CREATE,
	BPF_PROG_STREAM_READ_BY_FD,
	__MAX_BPF_CMD,
};

enum bpf_map_type {
	BPF_MAP_TYPE_UNSPEC,
	BPF_MAP_TYPE_HASH,
	BPF_MAP_TYPE_ARRAY,
	BPF_MAP_TYPE_PROG_ARRAY,
	BPF_MAP_TYPE_PERF_EVENT_ARRAY,
	BPF_MAP_TYPE_PERCPU_HASH,
	BPF_MAP_TYPE_PERCPU_ARRAY,
	BPF_MAP_TYPE_STACK_TRACE,
	BPF_MAP_TYPE_CGROUP_ARRAY,
	BPF_MAP_TYPE_LRU_HASH,
	BPF_MAP_TYPE_LRU_PERCPU_HASH,
	BPF_MAP_TYPE_LPM_TRIE,
	BPF_MAP_TYPE_ARRAY_OF_MAPS,
	BPF_MAP_TYPE_HASH_OF_MAPS,
	BPF_MAP_TYPE_DEVMAP,
	BPF_MAP_TYPE_SOCKMAP,
	BPF_MAP_TYPE_CPUMAP,
	BPF_MAP_TYPE_XSKMAP,
	BPF_MAP_TYPE_SOCKHASH,
	BPF_MAP_TYPE_CGROUP_STORAGE_DEPRECATED,
	





	BPF_MAP_TYPE_CGROUP_STORAGE = BPF_MAP_TYPE_CGROUP_STORAGE_DEPRECATED,
	BPF_MAP_TYPE_REUSEPORT_SOCKARRAY,
	BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE_DEPRECATED,
	





	BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE = BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE_DEPRECATED,
	BPF_MAP_TYPE_QUEUE,
	BPF_MAP_TYPE_STACK,
	BPF_MAP_TYPE_SK_STORAGE,
	BPF_MAP_TYPE_DEVMAP_HASH,
	BPF_MAP_TYPE_STRUCT_OPS,
	BPF_MAP_TYPE_RINGBUF,
	BPF_MAP_TYPE_INODE_STORAGE,
	BPF_MAP_TYPE_TASK_STORAGE,
	BPF_MAP_TYPE_BLOOM_FILTER,
	BPF_MAP_TYPE_USER_RINGBUF,
	BPF_MAP_TYPE_CGRP_STORAGE,
	BPF_MAP_TYPE_ARENA,
	__MAX_BPF_MAP_TYPE
};









enum bpf_prog_type {
	BPF_PROG_TYPE_UNSPEC,
	BPF_PROG_TYPE_SOCKET_FILTER,
	BPF_PROG_TYPE_KPROBE,
	BPF_PROG_TYPE_SCHED_CLS,
	BPF_PROG_TYPE_SCHED_ACT,
	BPF_PROG_TYPE_TRACEPOINT,
	BPF_PROG_TYPE_XDP,
	BPF_PROG_TYPE_PERF_EVENT,
	BPF_PROG_TYPE_CGROUP_SKB,
	BPF_PROG_TYPE_CGROUP_SOCK,
	BPF_PROG_TYPE_LWT_IN,
	BPF_PROG_TYPE_LWT_OUT,
	BPF_PROG_TYPE_LWT_XMIT,
	BPF_PROG_TYPE_SOCK_OPS,
	BPF_PROG_TYPE_SK_SKB,
	BPF_PROG_TYPE_CGROUP_DEVICE,
	BPF_PROG_TYPE_SK_MSG,
	BPF_PROG_TYPE_RAW_TRACEPOINT,
	BPF_PROG_TYPE_CGROUP_SOCK_ADDR,
	BPF_PROG_TYPE_LWT_SEG6LOCAL,
	BPF_PROG_TYPE_LIRC_MODE2,
	BPF_PROG_TYPE_SK_REUSEPORT,
	BPF_PROG_TYPE_FLOW_DISSECTOR,
	BPF_PROG_TYPE_CGROUP_SYSCTL,
	BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE,
	BPF_PROG_TYPE_CGROUP_SOCKOPT,
	BPF_PROG_TYPE_TRACING,
	BPF_PROG_TYPE_STRUCT_OPS,
	BPF_PROG_TYPE_EXT,
	BPF_PROG_TYPE_LSM,
	BPF_PROG_TYPE_SK_LOOKUP,
	BPF_PROG_TYPE_SYSCALL, 
	BPF_PROG_TYPE_NETFILTER,
	__MAX_BPF_PROG_TYPE
};

enum bpf_attach_type {
	BPF_CGROUP_INET_INGRESS,
	BPF_CGROUP_INET_EGRESS,
	BPF_CGROUP_INET_SOCK_CREATE,
	BPF_CGROUP_SOCK_OPS,
	BPF_SK_SKB_STREAM_PARSER,
	BPF_SK_SKB_STREAM_VERDICT,
	BPF_CGROUP_DEVICE,
	BPF_SK_MSG_VERDICT,
	BPF_CGROUP_INET4_BIND,
	BPF_CGROUP_INET6_BIND,
	BPF_CGROUP_INET4_CONNECT,
	BPF_CGROUP_INET6_CONNECT,
	BPF_CGROUP_INET4_POST_BIND,
	BPF_CGROUP_INET6_POST_BIND,
	BPF_CGROUP_UDP4_SENDMSG,
	BPF_CGROUP_UDP6_SENDMSG,
	BPF_LIRC_MODE2,
	BPF_FLOW_DISSECTOR,
	BPF_CGROUP_SYSCTL,
	BPF_CGROUP_UDP4_RECVMSG,
	BPF_CGROUP_UDP6_RECVMSG,
	BPF_CGROUP_GETSOCKOPT,
	BPF_CGROUP_SETSOCKOPT,
	BPF_TRACE_RAW_TP,
	BPF_TRACE_FENTRY,
	BPF_TRACE_FEXIT,
	BPF_MODIFY_RETURN,
	BPF_LSM_MAC,
	BPF_TRACE_ITER,
	BPF_CGROUP_INET4_GETPEERNAME,
	BPF_CGROUP_INET6_GETPEERNAME,
	BPF_CGROUP_INET4_GETSOCKNAME,
	BPF_CGROUP_INET6_GETSOCKNAME,
	BPF_XDP_DEVMAP,
	BPF_CGROUP_INET_SOCK_RELEASE,
	BPF_XDP_CPUMAP,
	BPF_SK_LOOKUP,
	BPF_XDP,
	BPF_SK_SKB_VERDICT,
	BPF_SK_REUSEPORT_SELECT,
	BPF_SK_REUSEPORT_SELECT_OR_MIGRATE,
	BPF_PERF_EVENT,
	BPF_TRACE_KPROBE_MULTI,
	BPF_LSM_CGROUP,
	BPF_STRUCT_OPS,
	BPF_NETFILTER,
	BPF_TCX_INGRESS,
	BPF_TCX_EGRESS,
	BPF_TRACE_UPROBE_MULTI,
	BPF_CGROUP_UNIX_CONNECT,
	BPF_CGROUP_UNIX_SENDMSG,
	BPF_CGROUP_UNIX_RECVMSG,
	BPF_CGROUP_UNIX_GETPEERNAME,
	BPF_CGROUP_UNIX_GETSOCKNAME,
	BPF_NETKIT_PRIMARY,
	BPF_NETKIT_PEER,
	BPF_TRACE_KPROBE_SESSION,
	BPF_TRACE_UPROBE_SESSION,
	__MAX_BPF_ATTACH_TYPE
};

#line 1140 "/usr/include/linux/bpf.h"




enum bpf_link_type {
	BPF_LINK_TYPE_UNSPEC = 0,
	BPF_LINK_TYPE_RAW_TRACEPOINT = 1,
	BPF_LINK_TYPE_TRACING = 2,
	BPF_LINK_TYPE_CGROUP = 3,
	BPF_LINK_TYPE_ITER = 4,
	BPF_LINK_TYPE_NETNS = 5,
	BPF_LINK_TYPE_XDP = 6,
	BPF_LINK_TYPE_PERF_EVENT = 7,
	BPF_LINK_TYPE_KPROBE_MULTI = 8,
	BPF_LINK_TYPE_STRUCT_OPS = 9,
	BPF_LINK_TYPE_NETFILTER = 10,
	BPF_LINK_TYPE_TCX = 11,
	BPF_LINK_TYPE_UPROBE_MULTI = 12,
	BPF_LINK_TYPE_NETKIT = 13,
	BPF_LINK_TYPE_SOCKMAP = 14,
	__MAX_BPF_LINK_TYPE,
};

#line 1164 "/usr/include/linux/bpf.h"

enum bpf_perf_event_type {
	BPF_PERF_EVENT_UNSPEC = 0,
	BPF_PERF_EVENT_UPROBE = 1,
	BPF_PERF_EVENT_URETPROBE = 2,
	BPF_PERF_EVENT_KPROBE = 3,
	BPF_PERF_EVENT_KRETPROBE = 4,
	BPF_PERF_EVENT_TRACEPOINT = 5,
	BPF_PERF_EVENT_EVENT = 6,
};













































#line 1221 "/usr/include/linux/bpf.h"

#line 1228 "/usr/include/linux/bpf.h"






#line 1235 "/usr/include/linux/bpf.h"













#line 1249 "/usr/include/linux/bpf.h"

















#line 1267 "/usr/include/linux/bpf.h"


#line 1270 "/usr/include/linux/bpf.h"







#line 1278 "/usr/include/linux/bpf.h"




#line 1283 "/usr/include/linux/bpf.h"




#line 1288 "/usr/include/linux/bpf.h"


#line 1291 "/usr/include/linux/bpf.h"




enum {
	BPF_F_KPROBE_MULTI_RETURN = (1U << 0)
};




enum {
	BPF_F_UPROBE_MULTI_RETURN = (1U << 0)
};




#line 1310 "/usr/include/linux/bpf.h"












#line 1324 "/usr/include/linux/bpf.h"









#line 1335 "/usr/include/linux/bpf.h"










#line 1346 "/usr/include/linux/bpf.h"








#line 1355 "/usr/include/linux/bpf.h"




#line 1360 "/usr/include/linux/bpf.h"



#line 1364 "/usr/include/linux/bpf.h"

enum bpf_addr_space_cast {
	BPF_ADDR_SPACE_CAST = 1,
};


enum {
	BPF_ANY		= 0, 
	BPF_NOEXIST	= 1, 
	BPF_EXIST	= 2, 
	BPF_F_LOCK	= 4, 
};


enum {
	BPF_F_NO_PREALLOC	= (1U << 0),






	BPF_F_NO_COMMON_LRU	= (1U << 1),

	BPF_F_NUMA_NODE		= (1U << 2),


	BPF_F_RDONLY		= (1U << 3),
	BPF_F_WRONLY		= (1U << 4),


	BPF_F_STACK_BUILD_ID	= (1U << 5),


	BPF_F_ZERO_SEED		= (1U << 6),


	BPF_F_RDONLY_PROG	= (1U << 7),
	BPF_F_WRONLY_PROG	= (1U << 8),


	BPF_F_CLONE		= (1U << 9),


	BPF_F_MMAPABLE		= (1U << 10),


	BPF_F_PRESERVE_ELEMS	= (1U << 11),


	BPF_F_INNER_MAP		= (1U << 12),


	BPF_F_LINK		= (1U << 13),


	BPF_F_PATH_FD		= (1U << 14),


	BPF_F_VTYPE_BTF_OBJ_FD	= (1U << 15),


	BPF_F_TOKEN_FD          = (1U << 16),


	BPF_F_SEGV_ON_FAULT	= (1U << 17),


	BPF_F_NO_USER_CONV	= (1U << 18),
};







#line 1442 "/usr/include/linux/bpf.h"




#line 1447 "/usr/include/linux/bpf.h"

#line 1449 "/usr/include/linux/bpf.h"

#line 1451 "/usr/include/linux/bpf.h"


enum bpf_stats_type {
	
	BPF_STATS_RUN_TIME = 0,
};

enum bpf_stack_build_id_status {
	
	BPF_STACK_BUILD_ID_EMPTY = 0,
	
	BPF_STACK_BUILD_ID_VALID = 1,
	
	BPF_STACK_BUILD_ID_IP = 2,
};

#line 1468 "/usr/include/linux/bpf.h"
struct bpf_stack_build_id {
	__s32		status;
	unsigned char	build_id[20];
	union {
		__u64	offset;
		__u64	ip;
	};
};

#line 1478 "/usr/include/linux/bpf.h"

enum {
	BPF_STREAM_STDOUT = 1,
	BPF_STREAM_STDERR = 2,
};

union bpf_attr {
	struct { 
		__u32	map_type;	
		__u32	key_size;	
		__u32	value_size;	
		__u32	max_entries;	
		__u32	map_flags;	


		__u32	inner_map_fd;	
		__u32	numa_node;	


		char	map_name[16U];
		__u32	map_ifindex;	
		__u32	btf_fd;		
		__u32	btf_key_type_id;	
		__u32	btf_value_type_id;	
		__u32	btf_vmlinux_value_type_id;



		








		__u64	map_extra;

		__s32   value_type_btf_obj_fd;	



		


		__s32	map_token_fd;
	};

	struct { 
		__u32		map_fd;
		__u64 __attribute__((aligned(8)))	key;
		union {
			__u64 __attribute__((aligned(8))) value;
			__u64 __attribute__((aligned(8))) next_key;
		};
		__u64		flags;
	};

	struct { 
		__u64 __attribute__((aligned(8)))	in_batch;	


		__u64 __attribute__((aligned(8)))	out_batch;	
		__u64 __attribute__((aligned(8)))	keys;
		__u64 __attribute__((aligned(8)))	values;
		__u32		count;		




		__u32		map_fd;
		__u64		elem_flags;
		__u64		flags;
	} batch;

	struct { 
		__u32		prog_type;	
		__u32		insn_cnt;
		__u64 __attribute__((aligned(8)))	insns;
		__u64 __attribute__((aligned(8)))	license;
		__u32		log_level;	
		__u32		log_size;	
		__u64 __attribute__((aligned(8)))	log_buf;	
		__u32		kern_version;	
		__u32		prog_flags;
		char		prog_name[16U];
		__u32		prog_ifindex;	
		



		__u32		expected_attach_type;
		__u32		prog_btf_fd;	
		__u32		func_info_rec_size;	
		__u64 __attribute__((aligned(8)))	func_info;	
		__u32		func_info_cnt;	
		__u32		line_info_rec_size;	
		__u64 __attribute__((aligned(8)))	line_info;	
		__u32		line_info_cnt;	
		__u32		attach_btf_id;	
		union {
			
			__u32		attach_prog_fd;
			
			__u32		attach_btf_obj_fd;
		};
		__u32		core_relo_cnt;	
		__u64 __attribute__((aligned(8)))	fd_array;	
		__u64 __attribute__((aligned(8)))	core_relos;
		__u32		core_relo_rec_size; 
		



		__u32		log_true_size;
		


		__s32		prog_token_fd;
		








		__u32		fd_array_cnt;
	};

	struct { 
		__u64 __attribute__((aligned(8)))	pathname;
		__u32		bpf_fd;
		__u32		file_flags;
		





		__s32		path_fd;
	};

	struct { 
		union {
			__u32	target_fd;	
			__u32	target_ifindex;	
		};
		__u32		attach_bpf_fd;
		__u32		attach_type;
		__u32		attach_flags;
		__u32		replace_bpf_fd;
		union {
			__u32	relative_fd;
			__u32	relative_id;
		};
		__u64		expected_revision;
	};

	struct { 
		__u32		prog_fd;
		__u32		retval;
		__u32		data_size_in;	
		__u32		data_size_out;	



		__u64 __attribute__((aligned(8)))	data_in;
		__u64 __attribute__((aligned(8)))	data_out;
		__u32		repeat;
		__u32		duration;
		__u32		ctx_size_in;	
		__u32		ctx_size_out;	



		__u64 __attribute__((aligned(8)))	ctx_in;
		__u64 __attribute__((aligned(8)))	ctx_out;
		__u32		flags;
		__u32		cpu;
		__u32		batch_size;
	} test;

	struct { 
		union {
			__u32		start_id;
			__u32		prog_id;
			__u32		map_id;
			__u32		btf_id;
			__u32		link_id;
		};
		__u32		next_id;
		__u32		open_flags;
		__s32		fd_by_id_token_fd;
	};

	struct { 
		__u32		bpf_fd;
		__u32		info_len;
		__u64 __attribute__((aligned(8)))	info;
	} info;

	struct { 
		union {
			__u32	target_fd;	
			__u32	target_ifindex;	
		};
		__u32		attach_type;
		__u32		query_flags;
		__u32		attach_flags;
		__u64 __attribute__((aligned(8)))	prog_ids;
		union {
			__u32	prog_cnt;
			__u32	count;
		};
		__u32		:32;
		


		__u64 __attribute__((aligned(8)))	prog_attach_flags;
		__u64 __attribute__((aligned(8)))	link_ids;
		__u64 __attribute__((aligned(8)))	link_attach_flags;
		__u64		revision;
	} query;

	struct { 
		__u64		name;
		__u32		prog_fd;
		__u32		:32;
		__u64 __attribute__((aligned(8)))	cookie;
	} raw_tracepoint;

	struct { 
		__u64 __attribute__((aligned(8)))	btf;
		__u64 __attribute__((aligned(8)))	btf_log_buf;
		__u32		btf_size;
		__u32		btf_log_size;
		__u32		btf_log_level;
		



		__u32		btf_log_true_size;
		__u32		btf_flags;
		


		__s32		btf_token_fd;
	};

	struct {
		__u32		pid;		
		__u32		fd;		
		__u32		flags;		
		__u32		buf_len;	
		__u64 __attribute__((aligned(8)))	buf;		




		__u32		prog_id;	
		__u32		fd_type;	
		__u64		probe_offset;	
		__u64		probe_addr;	
	} task_fd_query;

	struct { 
		union {
			__u32		prog_fd;	
			__u32		map_fd;		
		};
		union {
			__u32	target_fd;	
			__u32	target_ifindex; 
		};
		__u32		attach_type;	
		__u32		flags;		
		union {
			__u32	target_btf_id;	
			struct {
				__u64 __attribute__((aligned(8)))	iter_info;	
				__u32		iter_info_len;	
			};
			struct {
				



				__u64		bpf_cookie;
			} perf_event;
			struct {
				__u32		flags;
				__u32		cnt;
				__u64 __attribute__((aligned(8)))	syms;
				__u64 __attribute__((aligned(8)))	addrs;
				__u64 __attribute__((aligned(8)))	cookies;
			} kprobe_multi;
			struct {
				
				__u32		target_btf_id;
				



				__u64		cookie;
			} tracing;
			struct {
				__u32		pf;
				__u32		hooknum;
				__s32		priority;
				__u32		flags;
			} netfilter;
			struct {
				union {
					__u32	relative_fd;
					__u32	relative_id;
				};
				__u64		expected_revision;
			} tcx;
			struct {
				__u64 __attribute__((aligned(8)))	path;
				__u64 __attribute__((aligned(8)))	offsets;
				__u64 __attribute__((aligned(8)))	ref_ctr_offsets;
				__u64 __attribute__((aligned(8)))	cookies;
				__u32		cnt;
				__u32		flags;
				__u32		pid;
			} uprobe_multi;
			struct {
				union {
					__u32	relative_fd;
					__u32	relative_id;
				};
				__u64		expected_revision;
			} netkit;
			struct {
				union {
					__u32	relative_fd;
					__u32	relative_id;
				};
				__u64		expected_revision;
			} cgroup;
		};
	} link_create;

	struct { 
		__u32		link_fd;	
		union {
			
			__u32		new_prog_fd;
			
			__u32           new_map_fd;
		};
		__u32		flags;		
		union {
			


			__u32		old_prog_fd;
			


			__u32           old_map_fd;
		};
	} link_update;

	struct {
		__u32		link_fd;
	} link_detach;

	struct { 
		__u32		type;
	} enable_stats;

	struct { 
		__u32		link_fd;
		__u32		flags;
	} iter_create;

	struct { 
		__u32		prog_fd;
		__u32		map_fd;
		__u32		flags;		
	} prog_bind_map;

	struct { 
		__u32		flags;
		__u32		bpffs_fd;
	} token_create;

	struct {
		__u64 __attribute__((aligned(8)))	stream_buf;
		__u32		stream_buf_len;
		__u32		stream_id;
		__u32		prog_fd;
	} prog_stream_read;

} __attribute__((aligned(8)));






























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 5845 "/usr/include/linux/bpf.h"




#line 5851 "/usr/include/linux/bpf.h"




#line 5856 "/usr/include/linux/bpf.h"
enum bpf_func_id {
	BPF_FUNC_unspec = 0,					BPF_FUNC_map_lookup_elem = 1,				BPF_FUNC_map_update_elem = 2,				BPF_FUNC_map_delete_elem = 3,				BPF_FUNC_probe_read = 4,				BPF_FUNC_ktime_get_ns = 5,				BPF_FUNC_trace_printk = 6,				BPF_FUNC_get_prandom_u32 = 7,				BPF_FUNC_get_smp_processor_id = 8,			BPF_FUNC_skb_store_bytes = 9,				BPF_FUNC_l3_csum_replace = 10,				BPF_FUNC_l4_csum_replace = 11,				BPF_FUNC_tail_call = 12,				BPF_FUNC_clone_redirect = 13,				BPF_FUNC_get_current_pid_tgid = 14,			BPF_FUNC_get_current_uid_gid = 15,			BPF_FUNC_get_current_comm = 16,				BPF_FUNC_get_cgroup_classid = 17,			BPF_FUNC_skb_vlan_push = 18,				BPF_FUNC_skb_vlan_pop = 19,				BPF_FUNC_skb_get_tunnel_key = 20,			BPF_FUNC_skb_set_tunnel_key = 21,			BPF_FUNC_perf_event_read = 22,				BPF_FUNC_redirect = 23,					BPF_FUNC_get_route_realm = 24,				BPF_FUNC_perf_event_output = 25,			BPF_FUNC_skb_load_bytes = 26,				BPF_FUNC_get_stackid = 27,				BPF_FUNC_csum_diff = 28,				BPF_FUNC_skb_get_tunnel_opt = 29,			BPF_FUNC_skb_set_tunnel_opt = 30,			BPF_FUNC_skb_change_proto = 31,				BPF_FUNC_skb_change_type = 32,				BPF_FUNC_skb_under_cgroup = 33,				BPF_FUNC_get_hash_recalc = 34,				BPF_FUNC_get_current_task = 35,				BPF_FUNC_probe_write_user = 36,				BPF_FUNC_current_task_under_cgroup = 37,		BPF_FUNC_skb_change_tail = 38,				BPF_FUNC_skb_pull_data = 39,				BPF_FUNC_csum_update = 40,				BPF_FUNC_set_hash_invalid = 41,				BPF_FUNC_get_numa_node_id = 42,				BPF_FUNC_skb_change_head = 43,				BPF_FUNC_xdp_adjust_head = 44,				BPF_FUNC_probe_read_str = 45,				BPF_FUNC_get_socket_cookie = 46,			BPF_FUNC_get_socket_uid = 47,				BPF_FUNC_set_hash = 48,					BPF_FUNC_setsockopt = 49,				BPF_FUNC_skb_adjust_room = 50,				BPF_FUNC_redirect_map = 51,				BPF_FUNC_sk_redirect_map = 52,				BPF_FUNC_sock_map_update = 53,				BPF_FUNC_xdp_adjust_meta = 54,				BPF_FUNC_perf_event_read_value = 55,			BPF_FUNC_perf_prog_read_value = 56,			BPF_FUNC_getsockopt = 57,				BPF_FUNC_override_return = 58,				BPF_FUNC_sock_ops_cb_flags_set = 59,			BPF_FUNC_msg_redirect_map = 60,				BPF_FUNC_msg_apply_bytes = 61,				BPF_FUNC_msg_cork_bytes = 62,				BPF_FUNC_msg_pull_data = 63,				BPF_FUNC_bind = 64,					BPF_FUNC_xdp_adjust_tail = 65,				BPF_FUNC_skb_get_xfrm_state = 66,			BPF_FUNC_get_stack = 67,				BPF_FUNC_skb_load_bytes_relative = 68,			BPF_FUNC_fib_lookup = 69,				BPF_FUNC_sock_hash_update = 70,				BPF_FUNC_msg_redirect_hash = 71,			BPF_FUNC_sk_redirect_hash = 72,				BPF_FUNC_lwt_push_encap = 73,				BPF_FUNC_lwt_seg6_store_bytes = 74,			BPF_FUNC_lwt_seg6_adjust_srh = 75,			BPF_FUNC_lwt_seg6_action = 76,				BPF_FUNC_rc_repeat = 77,				BPF_FUNC_rc_keydown = 78,				BPF_FUNC_skb_cgroup_id = 79,				BPF_FUNC_get_current_cgroup_id = 80,			BPF_FUNC_get_local_storage = 81,			BPF_FUNC_sk_select_reuseport = 82,			BPF_FUNC_skb_ancestor_cgroup_id = 83,			BPF_FUNC_sk_lookup_tcp = 84,				BPF_FUNC_sk_lookup_udp = 85,				BPF_FUNC_sk_release = 86,				BPF_FUNC_map_push_elem = 87,				BPF_FUNC_map_pop_elem = 88,				BPF_FUNC_map_peek_elem = 89,				BPF_FUNC_msg_push_data = 90,				BPF_FUNC_msg_pop_data = 91,				BPF_FUNC_rc_pointer_rel = 92,				BPF_FUNC_spin_lock = 93,				BPF_FUNC_spin_unlock = 94,				BPF_FUNC_sk_fullsock = 95,				BPF_FUNC_tcp_sock = 96,					BPF_FUNC_skb_ecn_set_ce = 97,				BPF_FUNC_get_listener_sock = 98,			BPF_FUNC_skc_lookup_tcp = 99,				BPF_FUNC_tcp_check_syncookie = 100,			BPF_FUNC_sysctl_get_name = 101,				BPF_FUNC_sysctl_get_current_value = 102,		BPF_FUNC_sysctl_get_new_value = 103,			BPF_FUNC_sysctl_set_new_value = 104,			BPF_FUNC_strtol = 105,					BPF_FUNC_strtoul = 106,					BPF_FUNC_sk_storage_get = 107,				BPF_FUNC_sk_storage_delete = 108,			BPF_FUNC_send_signal = 109,				BPF_FUNC_tcp_gen_syncookie = 110,			BPF_FUNC_skb_output = 111,				BPF_FUNC_probe_read_user = 112,				BPF_FUNC_probe_read_kernel = 113,			BPF_FUNC_probe_read_user_str = 114,			BPF_FUNC_probe_read_kernel_str = 115,			BPF_FUNC_tcp_send_ack = 116,				BPF_FUNC_send_signal_thread = 117,			BPF_FUNC_jiffies64 = 118,				BPF_FUNC_read_branch_records = 119,			BPF_FUNC_get_ns_current_pid_tgid = 120,			BPF_FUNC_xdp_output = 121,				BPF_FUNC_get_netns_cookie = 122,			BPF_FUNC_get_current_ancestor_cgroup_id = 123,		BPF_FUNC_sk_assign = 124,				BPF_FUNC_ktime_get_boot_ns = 125,			BPF_FUNC_seq_printf = 126,				BPF_FUNC_seq_write = 127,				BPF_FUNC_sk_cgroup_id = 128,				BPF_FUNC_sk_ancestor_cgroup_id = 129,			BPF_FUNC_ringbuf_output = 130,				BPF_FUNC_ringbuf_reserve = 131,				BPF_FUNC_ringbuf_submit = 132,				BPF_FUNC_ringbuf_discard = 133,				BPF_FUNC_ringbuf_query = 134,				BPF_FUNC_csum_level = 135,				BPF_FUNC_skc_to_tcp6_sock = 136,			BPF_FUNC_skc_to_tcp_sock = 137,				BPF_FUNC_skc_to_tcp_timewait_sock = 138,		BPF_FUNC_skc_to_tcp_request_sock = 139,			BPF_FUNC_skc_to_udp6_sock = 140,			BPF_FUNC_get_task_stack = 141,				BPF_FUNC_load_hdr_opt = 142,				BPF_FUNC_store_hdr_opt = 143,				BPF_FUNC_reserve_hdr_opt = 144,				BPF_FUNC_inode_storage_get = 145,			BPF_FUNC_inode_storage_delete = 146,			BPF_FUNC_d_path = 147,					BPF_FUNC_copy_from_user = 148,				BPF_FUNC_snprintf_btf = 149,				BPF_FUNC_seq_printf_btf = 150,				BPF_FUNC_skb_cgroup_classid = 151,			BPF_FUNC_redirect_neigh = 152,				BPF_FUNC_per_cpu_ptr = 153,				BPF_FUNC_this_cpu_ptr = 154,				BPF_FUNC_redirect_peer = 155,				BPF_FUNC_task_storage_get = 156,			BPF_FUNC_task_storage_delete = 157,			BPF_FUNC_get_current_task_btf = 158,			BPF_FUNC_bprm_opts_set = 159,				BPF_FUNC_ktime_get_coarse_ns = 160,			BPF_FUNC_ima_inode_hash = 161,				BPF_FUNC_sock_from_file = 162,				BPF_FUNC_check_mtu = 163,				BPF_FUNC_for_each_map_elem = 164,			BPF_FUNC_snprintf = 165,				BPF_FUNC_sys_bpf = 166,					BPF_FUNC_btf_find_by_name_kind = 167,			BPF_FUNC_sys_close = 168,				BPF_FUNC_timer_init = 169,				BPF_FUNC_timer_set_callback = 170,			BPF_FUNC_timer_start = 171,				BPF_FUNC_timer_cancel = 172,				BPF_FUNC_get_func_ip = 173,				BPF_FUNC_get_attach_cookie = 174,			BPF_FUNC_task_pt_regs = 175,				BPF_FUNC_get_branch_snapshot = 176,			BPF_FUNC_trace_vprintk = 177,				BPF_FUNC_skc_to_unix_sock = 178,			BPF_FUNC_kallsyms_lookup_name = 179,			BPF_FUNC_find_vma = 180,				BPF_FUNC_loop = 181,					BPF_FUNC_strncmp = 182,					BPF_FUNC_get_func_arg = 183,				BPF_FUNC_get_func_ret = 184,				BPF_FUNC_get_func_arg_cnt = 185,			BPF_FUNC_get_retval = 186,				BPF_FUNC_set_retval = 187,				BPF_FUNC_xdp_get_buff_len = 188,			BPF_FUNC_xdp_load_bytes = 189,				BPF_FUNC_xdp_store_bytes = 190,				BPF_FUNC_copy_from_user_task = 191,			BPF_FUNC_skb_set_tstamp = 192,				BPF_FUNC_ima_file_hash = 193,				BPF_FUNC_kptr_xchg = 194,				BPF_FUNC_map_lookup_percpu_elem = 195,			BPF_FUNC_skc_to_mptcp_sock = 196,			BPF_FUNC_dynptr_from_mem = 197,				BPF_FUNC_ringbuf_reserve_dynptr = 198,			BPF_FUNC_ringbuf_submit_dynptr = 199,			BPF_FUNC_ringbuf_discard_dynptr = 200,			BPF_FUNC_dynptr_read = 201,				BPF_FUNC_dynptr_write = 202,				BPF_FUNC_dynptr_data = 203,				BPF_FUNC_tcp_raw_gen_syncookie_ipv4 = 204,		BPF_FUNC_tcp_raw_gen_syncookie_ipv6 = 205,		BPF_FUNC_tcp_raw_check_syncookie_ipv4 = 206,		BPF_FUNC_tcp_raw_check_syncookie_ipv6 = 207,		BPF_FUNC_ktime_get_tai_ns = 208,			BPF_FUNC_user_ringbuf_drain = 209,			BPF_FUNC_cgrp_storage_get = 210,			BPF_FUNC_cgrp_storage_delete = 211,
	__BPF_FUNC_MAX_ID,
};
#line 5861 "/usr/include/linux/bpf.h"




enum {
	BPF_F_RECOMPUTE_CSUM		= (1ULL << 0),
	BPF_F_INVALIDATE_HASH		= (1ULL << 1),
};




enum {
	BPF_F_HDR_FIELD_MASK		= 0xfULL,
};


enum {
	BPF_F_PSEUDO_HDR		= (1ULL << 4),
	BPF_F_MARK_MANGLED_0		= (1ULL << 5),
	BPF_F_MARK_ENFORCE		= (1ULL << 6),
	BPF_F_IPV6			= (1ULL << 7),
};


enum {
	BPF_F_TUNINFO_IPV6		= (1ULL << 0),
};


enum {
	BPF_F_SKIP_FIELD_MASK		= 0xffULL,
	BPF_F_USER_STACK		= (1ULL << 8),

	BPF_F_FAST_STACK_CMP		= (1ULL << 9),
	BPF_F_REUSE_STACKID		= (1ULL << 10),

	BPF_F_USER_BUILD_ID		= (1ULL << 11),
};


enum {
	BPF_F_ZERO_CSUM_TX		= (1ULL << 1),
	BPF_F_DONT_FRAGMENT		= (1ULL << 2),
	BPF_F_SEQ_NUMBER		= (1ULL << 3),
	BPF_F_NO_TUNNEL_KEY		= (1ULL << 4),
};


enum {
	BPF_F_TUNINFO_FLAGS		= (1ULL << 4),
};




enum {
	BPF_F_INDEX_MASK		= 0xffffffffULL,
	BPF_F_CURRENT_CPU		= BPF_F_INDEX_MASK,

	BPF_F_CTXLEN_MASK		= (0xfffffULL << 32),
};


enum {
	BPF_F_CURRENT_NETNS		= (-1L),
};


enum {
	BPF_CSUM_LEVEL_QUERY,
	BPF_CSUM_LEVEL_INC,
	BPF_CSUM_LEVEL_DEC,
	BPF_CSUM_LEVEL_RESET,
};


enum {
	BPF_F_ADJ_ROOM_FIXED_GSO	= (1ULL << 0),
	BPF_F_ADJ_ROOM_ENCAP_L3_IPV4	= (1ULL << 1),
	BPF_F_ADJ_ROOM_ENCAP_L3_IPV6	= (1ULL << 2),
	BPF_F_ADJ_ROOM_ENCAP_L4_GRE	= (1ULL << 3),
	BPF_F_ADJ_ROOM_ENCAP_L4_UDP	= (1ULL << 4),
	BPF_F_ADJ_ROOM_NO_CSUM_RESET	= (1ULL << 5),
	BPF_F_ADJ_ROOM_ENCAP_L2_ETH	= (1ULL << 6),
	BPF_F_ADJ_ROOM_DECAP_L3_IPV4	= (1ULL << 7),
	BPF_F_ADJ_ROOM_DECAP_L3_IPV6	= (1ULL << 8),
};

enum {
	BPF_ADJ_ROOM_ENCAP_L2_MASK	= 0xff,
	BPF_ADJ_ROOM_ENCAP_L2_SHIFT	= 56,
};

#line 5956 "/usr/include/linux/bpf.h"


enum {
	BPF_F_SYSCTL_BASE_NAME		= (1ULL << 0),
};


enum {
	BPF_LOCAL_STORAGE_GET_F_CREATE	= (1ULL << 0),
	


	BPF_SK_STORAGE_GET_F_CREATE  = BPF_LOCAL_STORAGE_GET_F_CREATE,
};


enum {
	BPF_F_GET_BRANCH_RECORDS_SIZE	= (1ULL << 0),
};




enum {
	BPF_RB_NO_WAKEUP		= (1ULL << 0),
	BPF_RB_FORCE_WAKEUP		= (1ULL << 1),
};


enum {
	BPF_RB_AVAIL_DATA = 0,
	BPF_RB_RING_SIZE = 1,
	BPF_RB_CONS_POS = 2,
	BPF_RB_PROD_POS = 3,
};


enum {
	BPF_RINGBUF_BUSY_BIT		= (1U << 31),
	BPF_RINGBUF_DISCARD_BIT		= (1U << 30),
	BPF_RINGBUF_HDR_SZ		= 8,
};


enum {
	BPF_SK_LOOKUP_F_REPLACE		= (1ULL << 0),
	BPF_SK_LOOKUP_F_NO_REUSEPORT	= (1ULL << 1),
};


enum bpf_adj_room_mode {
	BPF_ADJ_ROOM_NET,
	BPF_ADJ_ROOM_MAC,
};


enum bpf_hdr_start_off {
	BPF_HDR_START_MAC,
	BPF_HDR_START_NET,
};


enum bpf_lwt_encap_mode {
	BPF_LWT_ENCAP_SEG6,
	BPF_LWT_ENCAP_SEG6_INLINE,
	BPF_LWT_ENCAP_IP,
};


enum {
	BPF_F_BPRM_SECUREEXEC	= (1ULL << 0),
};


enum {
	BPF_F_INGRESS		= (1ULL << 0), 
	BPF_F_BROADCAST		= (1ULL << 3), 
	BPF_F_EXCLUDE_INGRESS	= (1ULL << 4), 
#line 6035 "/usr/include/linux/bpf.h"
};

#line 6038 "/usr/include/linux/bpf.h"




enum {
	BPF_SKB_TSTAMP_UNSPEC = 0,		
	BPF_SKB_TSTAMP_DELIVERY_MONO = 1,	
	BPF_SKB_CLOCK_REALTIME = 0,
	BPF_SKB_CLOCK_MONOTONIC = 1,
	BPF_SKB_CLOCK_TAI = 2,
	


};




struct __sk_buff {
	__u32 len;
	__u32 pkt_type;
	__u32 mark;
	__u32 queue_mapping;
	__u32 protocol;
	__u32 vlan_present;
	__u32 vlan_tci;
	__u32 vlan_proto;
	__u32 priority;
	__u32 ingress_ifindex;
	__u32 ifindex;
	__u32 tc_index;
	__u32 cb[5];
	__u32 hash;
	__u32 tc_classid;
	__u32 data;
	__u32 data_end;
	__u32 napi_id;

	
	__u32 family;
	__u32 remote_ip4;	
	__u32 local_ip4;	
	__u32 remote_ip6[4];	
	__u32 local_ip6[4];	
	__u32 remote_port;	
	__u32 local_port;	
	

	__u32 data_meta;
	union {						struct bpf_flow_keys * flow_keys;				__u64 :64;			} __attribute__((aligned(8)));
	__u64 tstamp;
	__u32 wire_len;
	__u32 gso_segs;
	union {						struct bpf_sock * sk;				__u64 :64;			} __attribute__((aligned(8)));
	__u32 gso_size;
	__u8  tstamp_type;
	__u32 :24;		
	__u64 hwtstamp;
};

struct bpf_tunnel_key {
	__u32 tunnel_id;
	union {
		__u32 remote_ipv4;
		__u32 remote_ipv6[4];
	};
	__u8 tunnel_tos;
	__u8 tunnel_ttl;
	union {
		__u16 tunnel_ext;	
		__be16 tunnel_flags;
	};
	__u32 tunnel_label;
	union {
		__u32 local_ipv4;
		__u32 local_ipv6[4];
	};
};




struct bpf_xfrm_state {
	__u32 reqid;
	__u32 spi;	
	__u16 family;
	__u16 ext;	
	union {
		__u32 remote_ipv4;	
		__u32 remote_ipv6[4];	
	};
};








enum bpf_ret_code {
	BPF_OK = 0,
	
	BPF_DROP = 2,
	
	BPF_REDIRECT = 7,
	







	BPF_LWT_REROUTE = 128,
	



	BPF_FLOW_DISSECTOR_CONTINUE = 129,
};

struct bpf_sock {
	__u32 bound_dev_if;
	__u32 family;
	__u32 type;
	__u32 protocol;
	__u32 mark;
	__u32 priority;
	
	__u32 src_ip4;
	__u32 src_ip6[4];
	__u32 src_port;		
	__be16 dst_port;	
	__u16 :16;		
	__u32 dst_ip4;
	__u32 dst_ip6[4];
	__u32 state;
	__s32 rx_queue_mapping;
};

struct bpf_tcp_sock {
	__u32 snd_cwnd;		
	__u32 srtt_us;		
	__u32 rtt_min;
	__u32 snd_ssthresh;	
	__u32 rcv_nxt;		
	__u32 snd_nxt;		
	__u32 snd_una;		
	__u32 mss_cache;	
	__u32 ecn_flags;	
	__u32 rate_delivered;	
	__u32 rate_interval_us;	
	__u32 packets_out;	
	__u32 retrans_out;	
	__u32 total_retrans;	
	__u32 segs_in;		


	__u32 data_segs_in;	


	__u32 segs_out;		


	__u32 data_segs_out;	


	__u32 lost_out;		
	__u32 sacked_out;	
	__u64 bytes_received;	



	__u64 bytes_acked;	



	__u32 dsack_dups;	


	__u32 delivered;	
	__u32 delivered_ce;	
	__u32 icsk_retransmits;	
};

struct bpf_sock_tuple {
	union {
		struct {
			__be32 saddr;
			__be32 daddr;
			__be16 sport;
			__be16 dport;
		} ipv4;
		struct {
			__be32 saddr[4];
			__be32 daddr[4];
			__be16 sport;
			__be16 dport;
		} ipv6;
	};
};







enum tcx_action_base {
	TCX_NEXT	= -1,
	TCX_PASS	= 0,
	TCX_DROP	= 2,
	TCX_REDIRECT	= 7,
};

struct bpf_xdp_sock {
	__u32 queue_id;
};

#line 6259 "/usr/include/linux/bpf.h"






enum xdp_action {
	XDP_ABORTED = 0,
	XDP_DROP,
	XDP_PASS,
	XDP_TX,
	XDP_REDIRECT,
};




struct xdp_md {
	__u32 data;
	__u32 data_end;
	__u32 data_meta;
	
	__u32 ingress_ifindex; 
	__u32 rx_queue_index;  

	__u32 egress_ifindex;  
};






struct bpf_devmap_val {
	__u32 ifindex;   
	union {
		int   fd;  
		__u32 id;  
	} bpf_prog;
};






struct bpf_cpumap_val {
	__u32 qsize;	
	union {
		int   fd;	
		__u32 id;	
	} bpf_prog;
};

enum sk_action {
	SK_DROP = 0,
	SK_PASS,
};




struct sk_msg_md {
	union {						void * data;				__u64 :64;			} __attribute__((aligned(8)));
	union {						void * data_end;				__u64 :64;			} __attribute__((aligned(8)));

	__u32 family;
	__u32 remote_ip4;	
	__u32 local_ip4;	
	__u32 remote_ip6[4];	
	__u32 local_ip6[4];	
	__u32 remote_port;	
	__u32 local_port;	
	__u32 size;		

	union {						struct bpf_sock * sk;				__u64 :64;			} __attribute__((aligned(8))); 
};

struct sk_reuseport_md {
	



	union {						void * data;				__u64 :64;			} __attribute__((aligned(8)));
	
	union {						void * data_end;				__u64 :64;			} __attribute__((aligned(8)));
	





	__u32 len;
	



	__u32 eth_protocol;
	__u32 ip_protocol;	
	__u32 bind_inany;	
	__u32 hash;		
	











	union {						struct bpf_sock * sk;				__u64 :64;			} __attribute__((aligned(8)));
	union {						struct bpf_sock * migrating_sk;				__u64 :64;			} __attribute__((aligned(8)));
};

#line 6377 "/usr/include/linux/bpf.h"

struct bpf_prog_info {
	__u32 type;
	__u32 id;
	__u8  tag[8];
	__u32 jited_prog_len;
	__u32 xlated_prog_len;
	__u64 __attribute__((aligned(8))) jited_prog_insns;
	__u64 __attribute__((aligned(8))) xlated_prog_insns;
	__u64 load_time;	
	__u32 created_by_uid;
	__u32 nr_map_ids;
	__u64 __attribute__((aligned(8))) map_ids;
	char name[16U];
	__u32 ifindex;
	__u32 gpl_compatible:1;
	__u32 :31; 
	__u64 netns_dev;
	__u64 netns_ino;
	__u32 nr_jited_ksyms;
	__u32 nr_jited_func_lens;
	__u64 __attribute__((aligned(8))) jited_ksyms;
	__u64 __attribute__((aligned(8))) jited_func_lens;
	__u32 btf_id;
	__u32 func_info_rec_size;
	__u64 __attribute__((aligned(8))) func_info;
	__u32 nr_func_info;
	__u32 nr_line_info;
	__u64 __attribute__((aligned(8))) line_info;
	__u64 __attribute__((aligned(8))) jited_line_info;
	__u32 nr_jited_line_info;
	__u32 line_info_rec_size;
	__u32 jited_line_info_rec_size;
	__u32 nr_prog_tags;
	__u64 __attribute__((aligned(8))) prog_tags;
	__u64 run_time_ns;
	__u64 run_cnt;
	__u64 recursion_misses;
	__u32 verified_insns;
	__u32 attach_btf_obj_id;
	__u32 attach_btf_id;
} __attribute__((aligned(8)));

struct bpf_map_info {
	__u32 type;
	__u32 id;
	__u32 key_size;
	__u32 value_size;
	__u32 max_entries;
	__u32 map_flags;
	char  name[16U];
	__u32 ifindex;
	__u32 btf_vmlinux_value_type_id;
	__u64 netns_dev;
	__u64 netns_ino;
	__u32 btf_id;
	__u32 btf_key_type_id;
	__u32 btf_value_type_id;
	__u32 btf_vmlinux_id;
	__u64 map_extra;
} __attribute__((aligned(8)));

struct bpf_btf_info {
	__u64 __attribute__((aligned(8))) btf;
	__u32 btf_size;
	__u32 id;
	__u64 __attribute__((aligned(8))) name;
	__u32 name_len;
	__u32 kernel_btf;
} __attribute__((aligned(8)));

struct bpf_link_info {
	__u32 type;
	__u32 id;
	__u32 prog_id;
	union {
		struct {
			__u64 __attribute__((aligned(8))) tp_name; 
			__u32 tp_name_len;     
			__u32 :32;
			__u64 cookie;
		} raw_tracepoint;
		struct {
			__u32 attach_type;
			__u32 target_obj_id; 
			__u32 target_btf_id; 
			__u32 :32;
			__u64 cookie;
		} tracing;
		struct {
			__u64 cgroup_id;
			__u32 attach_type;
		} cgroup;
		struct {
			__u64 __attribute__((aligned(8))) target_name; 
			__u32 target_name_len;	   

			



			union {
				struct {
					__u32 map_id;
				} map;
			};
			union {
				struct {
					__u64 cgroup_id;
					__u32 order;
				} cgroup;
				struct {
					__u32 tid;
					__u32 pid;
				} task;
			};
		} iter;
		struct  {
			__u32 netns_ino;
			__u32 attach_type;
		} netns;
		struct {
			__u32 ifindex;
		} xdp;
		struct {
			__u32 map_id;
		} struct_ops;
		struct {
			__u32 pf;
			__u32 hooknum;
			__s32 priority;
			__u32 flags;
		} netfilter;
		struct {
			__u64 __attribute__((aligned(8))) addrs;
			__u32 count; 
			__u32 flags;
			__u64 missed;
			__u64 __attribute__((aligned(8))) cookies;
		} kprobe_multi;
		struct {
			__u64 __attribute__((aligned(8))) path;
			__u64 __attribute__((aligned(8))) offsets;
			__u64 __attribute__((aligned(8))) ref_ctr_offsets;
			__u64 __attribute__((aligned(8))) cookies;
			__u32 path_size; 
			__u32 count; 
			__u32 flags;
			__u32 pid;
		} uprobe_multi;
		struct {
			__u32 type; 
			__u32 :32;
			union {
				struct {
					__u64 __attribute__((aligned(8))) file_name; 
					__u32 name_len;
					__u32 offset; 
					__u64 cookie;
					__u64 ref_ctr_offset;
				} uprobe; 
				struct {
					__u64 __attribute__((aligned(8))) func_name; 
					__u32 name_len;
					__u32 offset; 
					__u64 addr;
					__u64 missed;
					__u64 cookie;
				} kprobe; 
				struct {
					__u64 __attribute__((aligned(8))) tp_name;   
					__u32 name_len;
					__u32 :32;
					__u64 cookie;
				} tracepoint; 
				struct {
					__u64 config;
					__u32 type;
					__u32 :32;
					__u64 cookie;
				} event; 
			};
		} perf_event;
		struct {
			__u32 ifindex;
			__u32 attach_type;
		} tcx;
		struct {
			__u32 ifindex;
			__u32 attach_type;
		} netkit;
		struct {
			__u32 map_id;
			__u32 attach_type;
		} sockmap;
	};
} __attribute__((aligned(8)));

struct bpf_token_info {
	__u64 allowed_cmds;
	__u64 allowed_maps;
	__u64 allowed_progs;
	__u64 allowed_attachs;
} __attribute__((aligned(8)));





struct bpf_sock_addr {
	__u32 user_family;	
	__u32 user_ip4;		


	__u32 user_ip6[4];	


	__u32 user_port;	


	__u32 family;		
	__u32 type;		
	__u32 protocol;		
	__u32 msg_src_ip4;	


	__u32 msg_src_ip6[4];	


	union {						struct bpf_sock * sk;				__u64 :64;			} __attribute__((aligned(8)));
};







struct bpf_sock_ops {
	__u32 op;
	union {
		__u32 args[4];		
		__u32 reply;		
		__u32 replylong[4];	
	};
	__u32 family;
	__u32 remote_ip4;	
	__u32 local_ip4;	
	__u32 remote_ip6[4];	
	__u32 local_ip6[4];	
	__u32 remote_port;	
	__u32 local_port;	
	__u32 is_fullsock;	



	__u32 snd_cwnd;
	__u32 srtt_us;		
	__u32 bpf_sock_ops_cb_flags; 
	__u32 state;
	__u32 rtt_min;
	__u32 snd_ssthresh;
	__u32 rcv_nxt;
	__u32 snd_nxt;
	__u32 snd_una;
	__u32 mss_cache;
	__u32 ecn_flags;
	__u32 rate_delivered;
	__u32 rate_interval_us;
	__u32 packets_out;
	__u32 retrans_out;
	__u32 total_retrans;
	__u32 segs_in;
	__u32 data_segs_in;
	__u32 segs_out;
	__u32 data_segs_out;
	__u32 lost_out;
	__u32 sacked_out;
	__u32 sk_txhash;
	__u64 bytes_received;
	__u64 bytes_acked;
	union {						struct bpf_sock * sk;				__u64 :64;			} __attribute__((aligned(8)));
	













	union {						void * skb_data;				__u64 :64;			} __attribute__((aligned(8)));
	union {						void * skb_data_end;				__u64 :64;			} __attribute__((aligned(8)));
	__u32 skb_len;		



	__u32 skb_tcp_flags;	









	__u64 skb_hwtstamp;
};


enum {
	BPF_SOCK_OPS_RTO_CB_FLAG	= (1<<0),
	BPF_SOCK_OPS_RETRANS_CB_FLAG	= (1<<1),
	BPF_SOCK_OPS_STATE_CB_FLAG	= (1<<2),
	BPF_SOCK_OPS_RTT_CB_FLAG	= (1<<3),
	

















	BPF_SOCK_OPS_PARSE_ALL_HDR_OPT_CB_FLAG	= (1<<4),
	







	BPF_SOCK_OPS_PARSE_UNKNOWN_HDR_OPT_CB_FLAG = (1<<5),
	













	BPF_SOCK_OPS_WRITE_HDR_OPT_CB_FLAG = (1<<6),

	BPF_SOCK_OPS_ALL_CB_FLAGS       = 0x7F,
};

enum {
	SK_BPF_CB_TX_TIMESTAMPING	= 1<<0,
	SK_BPF_CB_MASK			= (SK_BPF_CB_TX_TIMESTAMPING - 1) |
					   SK_BPF_CB_TX_TIMESTAMPING
};




enum {
	BPF_SOCK_OPS_VOID,
	BPF_SOCK_OPS_TIMEOUT_INIT,	


	BPF_SOCK_OPS_RWND_INIT,		



	BPF_SOCK_OPS_TCP_CONNECT_CB,	


	BPF_SOCK_OPS_ACTIVE_ESTABLISHED_CB,	



	BPF_SOCK_OPS_PASSIVE_ESTABLISHED_CB,	



	BPF_SOCK_OPS_NEEDS_ECN,		


	BPF_SOCK_OPS_BASE_RTT,		






	BPF_SOCK_OPS_RTO_CB,		




	BPF_SOCK_OPS_RETRANS_CB,	





	BPF_SOCK_OPS_STATE_CB,		



	BPF_SOCK_OPS_TCP_LISTEN_CB,	


	BPF_SOCK_OPS_RTT_CB,		



	BPF_SOCK_OPS_PARSE_HDR_OPT_CB,	













	BPF_SOCK_OPS_HDR_OPT_LEN_CB,	
















	BPF_SOCK_OPS_WRITE_HDR_OPT_CB,	

























	BPF_SOCK_OPS_TSTAMP_SCHED_CB,	




	BPF_SOCK_OPS_TSTAMP_SND_SW_CB,	



	BPF_SOCK_OPS_TSTAMP_SND_HW_CB,	



	BPF_SOCK_OPS_TSTAMP_ACK_CB,	




	BPF_SOCK_OPS_TSTAMP_SENDMSG_CB,	




};






enum {
	BPF_TCP_ESTABLISHED = 1,
	BPF_TCP_SYN_SENT,
	BPF_TCP_SYN_RECV,
	BPF_TCP_FIN_WAIT1,
	BPF_TCP_FIN_WAIT2,
	BPF_TCP_TIME_WAIT,
	BPF_TCP_CLOSE,
	BPF_TCP_CLOSE_WAIT,
	BPF_TCP_LAST_ACK,
	BPF_TCP_LISTEN,
	BPF_TCP_CLOSING,	
	BPF_TCP_NEW_SYN_RECV,
	BPF_TCP_BOUND_INACTIVE,

	BPF_TCP_MAX_STATES	
};

enum {
	TCP_BPF_IW		= 1001,	
	TCP_BPF_SNDCWND_CLAMP	= 1002,	
	TCP_BPF_DELACK_MAX	= 1003, 
	TCP_BPF_RTO_MIN		= 1004, 
	































	TCP_BPF_SYN		= 1005, 
	TCP_BPF_SYN_IP		= 1006, 
	TCP_BPF_SYN_MAC         = 1007, 
	TCP_BPF_SOCK_OPS_CB_FLAGS = 1008, 
	SK_BPF_CB_FLAGS		= 1009, 
};

enum {
	BPF_LOAD_HDR_OPT_TCP_SYN = (1ULL << 0),
};




enum {
	BPF_WRITE_HDR_TCP_CURRENT_MSS = 1,	






	BPF_WRITE_HDR_TCP_SYNACK_COOKIE = 2,	


};

struct bpf_perf_event_value {
	__u64 counter;
	__u64 enabled;
	__u64 running;
};

enum {
	BPF_DEVCG_ACC_MKNOD	= (1ULL << 0),
	BPF_DEVCG_ACC_READ	= (1ULL << 1),
	BPF_DEVCG_ACC_WRITE	= (1ULL << 2),
};

enum {
	BPF_DEVCG_DEV_BLOCK	= (1ULL << 0),
	BPF_DEVCG_DEV_CHAR	= (1ULL << 1),
};

struct bpf_cgroup_dev_ctx {
	
	__u32 access_type;
	__u32 major;
	__u32 minor;
};

struct bpf_raw_tracepoint_args {
	__u64 args[0];
};




enum {
	BPF_FIB_LOOKUP_DIRECT  = (1U << 0),
	BPF_FIB_LOOKUP_OUTPUT  = (1U << 1),
	BPF_FIB_LOOKUP_SKIP_NEIGH = (1U << 2),
	BPF_FIB_LOOKUP_TBID    = (1U << 3),
	BPF_FIB_LOOKUP_SRC     = (1U << 4),
	BPF_FIB_LOOKUP_MARK    = (1U << 5),
};

enum {
	BPF_FIB_LKUP_RET_SUCCESS,      
	BPF_FIB_LKUP_RET_BLACKHOLE,    
	BPF_FIB_LKUP_RET_UNREACHABLE,  
	BPF_FIB_LKUP_RET_PROHIBIT,     
	BPF_FIB_LKUP_RET_NOT_FWDED,    
	BPF_FIB_LKUP_RET_FWD_DISABLED, 
	BPF_FIB_LKUP_RET_UNSUPP_LWT,   
	BPF_FIB_LKUP_RET_NO_NEIGH,     
	BPF_FIB_LKUP_RET_FRAG_NEEDED,  
	BPF_FIB_LKUP_RET_NO_SRC_ADDR,  
};

struct bpf_fib_lookup {
	


	__u8	family;

	
	__u8	l4_protocol;
	__be16	sport;
	__be16	dport;

	union {	
		
		__u16	tot_len; 

		
		__u16	mtu_result;
	} __attribute__((packed, aligned(2)));
	


	__u32	ifindex;

	union {
		
		__u8	tos;		
		__be32	flowinfo;	

		
		__u32	rt_metric;
	};

	


	union {
		__be32		ipv4_src;
		__u32		ipv6_src[4];  
	};

	



	union {
		__be32		ipv4_dst;
		__u32		ipv6_dst[4];  
	};

	union {
		struct {
			
			__be16	h_vlan_proto;
			__be16	h_vlan_TCI;
		};
		



		__u32	tbid;
	};

	union {
		
		struct {
			__u32	mark;   
			
		};

		
		struct {
			__u8	smac[6];	
			__u8	dmac[6];	
		};
	};
};

struct bpf_redir_neigh {
	
	__u32 nh_family;
	
	union {
		__be32		ipv4_nh;
		__u32		ipv6_nh[4];  
	};
};


enum  bpf_check_mtu_flags {
	BPF_MTU_CHK_SEGS  = (1U << 0),
};

enum bpf_check_mtu_ret {
	BPF_MTU_CHK_RET_SUCCESS,      
	BPF_MTU_CHK_RET_FRAG_NEEDED,  
	BPF_MTU_CHK_RET_SEGS_TOOBIG,  
};

enum bpf_task_fd_type {
	BPF_FD_TYPE_RAW_TRACEPOINT,	
	BPF_FD_TYPE_TRACEPOINT,		
	BPF_FD_TYPE_KPROBE,		
	BPF_FD_TYPE_KRETPROBE,		
	BPF_FD_TYPE_UPROBE,		
	BPF_FD_TYPE_URETPROBE,		
};

enum {
	BPF_FLOW_DISSECTOR_F_PARSE_1ST_FRAG		= (1U << 0),
	BPF_FLOW_DISSECTOR_F_STOP_AT_FLOW_LABEL		= (1U << 1),
	BPF_FLOW_DISSECTOR_F_STOP_AT_ENCAP		= (1U << 2),
};

struct bpf_flow_keys {
	__u16	nhoff;
	__u16	thoff;
	__u16	addr_proto;			
	__u8	is_frag;
	__u8	is_first_frag;
	__u8	is_encap;
	__u8	ip_proto;
	__be16	n_proto;
	__be16	sport;
	__be16	dport;
	union {
		struct {
			__be32	ipv4_src;
			__be32	ipv4_dst;
		};
		struct {
			__u32	ipv6_src[4];	
			__u32	ipv6_dst[4];	
		};
	};
	__u32	flags;
	__be32	flow_label;
};

struct bpf_func_info {
	__u32	insn_off;
	__u32	type_id;
};

#line 7173 "/usr/include/linux/bpf.h"

struct bpf_line_info {
	__u32	insn_off;
	__u32	file_name_off;
	__u32	line_off;
	__u32	line_col;
};

struct bpf_spin_lock {
	__u32	val;
};

struct bpf_timer {
	__u64 __opaque[2];
} __attribute__((aligned(8)));

struct bpf_wq {
	__u64 __opaque[2];
} __attribute__((aligned(8)));

struct bpf_dynptr {
	__u64 __opaque[2];
} __attribute__((aligned(8)));

struct bpf_list_head {
	__u64 __opaque[2];
} __attribute__((aligned(8)));

struct bpf_list_node {
	__u64 __opaque[3];
} __attribute__((aligned(8)));

struct bpf_rb_root {
	__u64 __opaque[2];
} __attribute__((aligned(8)));

struct bpf_rb_node {
	__u64 __opaque[4];
} __attribute__((aligned(8)));

struct bpf_refcount {
	__u32 __opaque[1];
} __attribute__((aligned(4)));

struct bpf_sysctl {
	__u32	write;		


	__u32	file_pos;	


};

struct bpf_sockopt {
	union {						struct bpf_sock * sk;				__u64 :64;			} __attribute__((aligned(8)));
	union {						void * optval;				__u64 :64;			} __attribute__((aligned(8)));
	union {						void * optval_end;				__u64 :64;			} __attribute__((aligned(8)));

	__s32	level;
	__s32	optname;
	__s32	optlen;
	__s32	retval;
};

struct bpf_pidns_info {
	__u32 pid;
	__u32 tgid;
};


struct bpf_sk_lookup {
	union {
		union {						struct bpf_sock * sk;				__u64 :64;			} __attribute__((aligned(8))); 
		__u64 cookie; 
	};

	__u32 family;		
	__u32 protocol;		
	__u32 remote_ip4;	
	__u32 remote_ip6[4];	
	__be16 remote_port;	
	__u16 :16;		
	__u32 local_ip4;	
	__u32 local_ip6[4];	
	__u32 local_port;	
	__u32 ingress_ifindex;		
};









struct btf_ptr {
	void *ptr;
	__u32 type_id;
	__u32 flags;		
};










enum {
	BTF_F_COMPACT	=	(1ULL << 0),
	BTF_F_NONAME	=	(1ULL << 1),
	BTF_F_PTR_RAW	=	(1ULL << 2),
	BTF_F_ZERO	=	(1ULL << 3),
};





enum bpf_core_relo_kind {
	BPF_CORE_FIELD_BYTE_OFFSET = 0,      
	BPF_CORE_FIELD_BYTE_SIZE = 1,        
	BPF_CORE_FIELD_EXISTS = 2,           
	BPF_CORE_FIELD_SIGNED = 3,           
	BPF_CORE_FIELD_LSHIFT_U64 = 4,       
	BPF_CORE_FIELD_RSHIFT_U64 = 5,       
	BPF_CORE_TYPE_ID_LOCAL = 6,          
	BPF_CORE_TYPE_ID_TARGET = 7,         
	BPF_CORE_TYPE_EXISTS = 8,            
	BPF_CORE_TYPE_SIZE = 9,              
	BPF_CORE_ENUMVAL_EXISTS = 10,        
	BPF_CORE_ENUMVAL_VALUE = 11,         
	BPF_CORE_TYPE_MATCHES = 12,          
};

















































struct bpf_core_relo {
	__u32 insn_off;
	__u32 type_id;
	__u32 access_str_off;
	enum bpf_core_relo_kind kind;
};







enum {
	BPF_F_TIMER_ABS = (1ULL << 0),
	BPF_F_TIMER_CPU_PIN = (1ULL << 1),
};


struct bpf_iter_num {
	


	__u64 __opaque[1];
} __attribute__((aligned(8)));






enum bpf_kfunc_flags {
	BPF_F_PAD_ZEROS = (1ULL << 0),
};
#line 50 "headers_linux.c"
#line 1 "/usr/include/linux/perf_event.h"














#line 17 "/usr/include/linux/perf_event.h"

#line 1 "/usr/include/linux/types.h"
#line 19 "/usr/include/linux/perf_event.h"
#line 1 "/usr/include/linux/ioctl.h"

#line 8 "/usr/include/linux/ioctl.h"
#line 20 "/usr/include/linux/perf_event.h"
#line 1 "/usr/include/asm/byteorder.h"

#line 4 "/usr/include/asm/byteorder.h"

#line 1 "/usr/include/linux/byteorder/little_endian.h"

#line 4 "/usr/include/linux/byteorder/little_endian.h"

#line 11 "/usr/include/linux/byteorder/little_endian.h"

#line 1 "/usr/include/linux/stddef.h"
#line 13 "/usr/include/linux/byteorder/little_endian.h"
#line 1 "/usr/include/linux/types.h"
#line 14 "/usr/include/linux/byteorder/little_endian.h"
#line 1 "/usr/include/linux/swab.h"

#line 4 "/usr/include/linux/swab.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/swab.h"
#line 1 "/usr/include/linux/stddef.h"
#line 7 "/usr/include/linux/swab.h"
#line 1 "/usr/include/asm/bitsperlong.h"

#line 14 "/usr/include/asm/bitsperlong.h"
#line 8 "/usr/include/linux/swab.h"
#line 1 "/usr/include/asm/swab.h"

#line 4 "/usr/include/asm/swab.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/asm/swab.h"


static __inline__  __u32 __arch_swab32(__u32 val)
{
	__asm__("bswapl %0" : "=r" (val) : "0" (val));
	return val;
}
#line 14 "/usr/include/asm/swab.h"

static __inline__  __u64 __arch_swab64(__u64 val)
{
#line 31 "/usr/include/asm/swab.h"
	__asm__("bswapq %0" : "=r" (val) : "0" (val));
	return val;
#line 34 "/usr/include/asm/swab.h"
}
#line 36 "/usr/include/asm/swab.h"
#line 9 "/usr/include/linux/swab.h"





#line 15 "/usr/include/linux/swab.h"

#line 17 "/usr/include/linux/swab.h"

#line 19 "/usr/include/linux/swab.h"

#line 21 "/usr/include/linux/swab.h"

#line 23 "/usr/include/linux/swab.h"







static __inline__  __u16 __fswab16(__u16 val)
{
#line 35 "/usr/include/linux/swab.h"
	return ((__u16)(					(((__u16)(val) & (__u16)0x00ffU) << 8) |				(((__u16)(val) & (__u16)0xff00U) >> 8)));
#line 37 "/usr/include/linux/swab.h"
}

static __inline__  __u32 __fswab32(__u32 val)
{
#line 42 "/usr/include/linux/swab.h"
	return __arch_swab32(val);
#line 46 "/usr/include/linux/swab.h"
}

static __inline__  __u64 __fswab64(__u64 val)
{
#line 51 "/usr/include/linux/swab.h"
	return __arch_swab64(val);
#line 59 "/usr/include/linux/swab.h"
}

static __inline__  __u32 __fswahw32(__u32 val)
{
#line 66 "/usr/include/linux/swab.h"
	return ((__u32)(				(((__u32)(val) & (__u32)0x0000ffffUL) << 16) |			(((__u32)(val) & (__u32)0xffff0000UL) >> 16)));
#line 68 "/usr/include/linux/swab.h"
}

static __inline__  __u32 __fswahb32(__u32 val)
{
#line 75 "/usr/include/linux/swab.h"
	return ((__u32)(				(((__u32)(val) & (__u32)0x00ff00ffUL) << 8) |			(((__u32)(val) & (__u32)0xff00ff00UL) >> 8)));
#line 77 "/usr/include/linux/swab.h"
}





#line 88 "/usr/include/linux/swab.h"





#line 98 "/usr/include/linux/swab.h"





#line 108 "/usr/include/linux/swab.h"

static __inline__ unsigned long __swab(const unsigned long y)
{
#line 112 "/usr/include/linux/swab.h"
	return (__u64)(__builtin_constant_p(y) ?		((__u64)(					(((__u64)(y) & (__u64)0x00000000000000ffULL) << 56) |		(((__u64)(y) & (__u64)0x000000000000ff00ULL) << 40) |		(((__u64)(y) & (__u64)0x0000000000ff0000ULL) << 24) |		(((__u64)(y) & (__u64)0x00000000ff000000ULL) <<  8) |		(((__u64)(y) & (__u64)0x000000ff00000000ULL) >>  8) |		(((__u64)(y) & (__u64)0x0000ff0000000000ULL) >> 24) |		(((__u64)(y) & (__u64)0x00ff000000000000ULL) >> 40) |		(((__u64)(y) & (__u64)0xff00000000000000ULL) >> 56))) :				__fswab64(y));
#line 116 "/usr/include/linux/swab.h"
}







#line 125 "/usr/include/linux/swab.h"







#line 133 "/usr/include/linux/swab.h"





static __inline__ __u16 __swab16p(const __u16 *p)
{
#line 143 "/usr/include/linux/swab.h"
	return (__u16)(__builtin_constant_p(*p) ?		((__u16)(					(((__u16)(*p) & (__u16)0x00ffU) << 8) |				(((__u16)(*p) & (__u16)0xff00U) >> 8))) :				__fswab16(*p));
#line 145 "/usr/include/linux/swab.h"
}





static __inline__ __u32 __swab32p(const __u32 *p)
{
#line 156 "/usr/include/linux/swab.h"
	return (__u32)(__builtin_constant_p(*p) ?		((__u32)(					(((__u32)(*p) & (__u32)0x000000ffUL) << 24) |			(((__u32)(*p) & (__u32)0x0000ff00UL) <<  8) |			(((__u32)(*p) & (__u32)0x00ff0000UL) >>  8) |			(((__u32)(*p) & (__u32)0xff000000UL) >> 24))) :				__fswab32(*p));
#line 158 "/usr/include/linux/swab.h"
}





static __inline__ __u64 __swab64p(const __u64 *p)
{
#line 169 "/usr/include/linux/swab.h"
	return (__u64)(__builtin_constant_p(*p) ?		((__u64)(					(((__u64)(*p) & (__u64)0x00000000000000ffULL) << 56) |		(((__u64)(*p) & (__u64)0x000000000000ff00ULL) << 40) |		(((__u64)(*p) & (__u64)0x0000000000ff0000ULL) << 24) |		(((__u64)(*p) & (__u64)0x00000000ff000000ULL) <<  8) |		(((__u64)(*p) & (__u64)0x000000ff00000000ULL) >>  8) |		(((__u64)(*p) & (__u64)0x0000ff0000000000ULL) >> 24) |		(((__u64)(*p) & (__u64)0x00ff000000000000ULL) >> 40) |		(((__u64)(*p) & (__u64)0xff00000000000000ULL) >> 56))) :				__fswab64(*p));
#line 171 "/usr/include/linux/swab.h"
}







static __inline__ __u32 __swahw32p(const __u32 *p)
{
#line 184 "/usr/include/linux/swab.h"
	return (__builtin_constant_p((__u32)(*p)) ?		((__u32)(				(((__u32)(*p) & (__u32)0x0000ffffUL) << 16) |			(((__u32)(*p) & (__u32)0xffff0000UL) >> 16))) :			__fswahw32(*p));
#line 186 "/usr/include/linux/swab.h"
}







static __inline__ __u32 __swahb32p(const __u32 *p)
{
#line 199 "/usr/include/linux/swab.h"
	return (__builtin_constant_p((__u32)(*p)) ?		((__u32)(				(((__u32)(*p) & (__u32)0x00ff00ffUL) << 8) |			(((__u32)(*p) & (__u32)0xff00ff00UL) >> 8))) :			__fswahb32(*p));
#line 201 "/usr/include/linux/swab.h"
}





static __inline__ void __swab16s(__u16 *p)
{
#line 212 "/usr/include/linux/swab.h"
	*p = __swab16p(p);
#line 214 "/usr/include/linux/swab.h"
}




static __inline__ void __swab32s(__u32 *p)
{
#line 224 "/usr/include/linux/swab.h"
	*p = __swab32p(p);
#line 226 "/usr/include/linux/swab.h"
}





static __inline__ void __swab64s(__u64 *p)
{
#line 237 "/usr/include/linux/swab.h"
	*p = __swab64p(p);
#line 239 "/usr/include/linux/swab.h"
}







static __inline__ void __swahw32s(__u32 *p)
{
#line 252 "/usr/include/linux/swab.h"
	*p = __swahw32p(p);
#line 254 "/usr/include/linux/swab.h"
}







static __inline__ void __swahb32s(__u32 *p)
{
#line 267 "/usr/include/linux/swab.h"
	*p = __swahb32p(p);
#line 269 "/usr/include/linux/swab.h"
}

#line 15 "/usr/include/linux/byteorder/little_endian.h"

#line 44 "/usr/include/linux/byteorder/little_endian.h"

static __inline__ __le64 __cpu_to_le64p(const __u64 *p)
{
	return (__le64)*p;
}
static __inline__ __u64 __le64_to_cpup(const __le64 *p)
{
	return (__u64)*p;
}
static __inline__ __le32 __cpu_to_le32p(const __u32 *p)
{
	return (__le32)*p;
}
static __inline__ __u32 __le32_to_cpup(const __le32 *p)
{
	return (__u32)*p;
}
static __inline__ __le16 __cpu_to_le16p(const __u16 *p)
{
	return (__le16)*p;
}
static __inline__ __u16 __le16_to_cpup(const __le16 *p)
{
	return (__u16)*p;
}
static __inline__ __be64 __cpu_to_be64p(const __u64 *p)
{
	return (__be64)__swab64p(p);
}
static __inline__ __u64 __be64_to_cpup(const __be64 *p)
{
	return __swab64p((__u64 *)p);
}
static __inline__ __be32 __cpu_to_be32p(const __u32 *p)
{
	return (__be32)__swab32p(p);
}
static __inline__ __u32 __be32_to_cpup(const __be32 *p)
{
	return __swab32p((__u32 *)p);
}
static __inline__ __be16 __cpu_to_be16p(const __u16 *p)
{
	return (__be16)__swab16p(p);
}
static __inline__ __u16 __be16_to_cpup(const __be16 *p)
{
	return __swab16p((__u16 *)p);
}
#line 105 "/usr/include/linux/byteorder/little_endian.h"

#line 6 "/usr/include/asm/byteorder.h"
#line 21 "/usr/include/linux/perf_event.h"








enum perf_type_id {
	PERF_TYPE_HARDWARE			= 0,
	PERF_TYPE_SOFTWARE			= 1,
	PERF_TYPE_TRACEPOINT			= 2,
	PERF_TYPE_HW_CACHE			= 3,
	PERF_TYPE_RAW				= 4,
	PERF_TYPE_BREAKPOINT			= 5,

	PERF_TYPE_MAX,				
};
















#line 57 "/usr/include/linux/perf_event.h"






enum perf_hw_id {
	


	PERF_COUNT_HW_CPU_CYCLES		= 0,
	PERF_COUNT_HW_INSTRUCTIONS		= 1,
	PERF_COUNT_HW_CACHE_REFERENCES		= 2,
	PERF_COUNT_HW_CACHE_MISSES		= 3,
	PERF_COUNT_HW_BRANCH_INSTRUCTIONS	= 4,
	PERF_COUNT_HW_BRANCH_MISSES		= 5,
	PERF_COUNT_HW_BUS_CYCLES		= 6,
	PERF_COUNT_HW_STALLED_CYCLES_FRONTEND	= 7,
	PERF_COUNT_HW_STALLED_CYCLES_BACKEND	= 8,
	PERF_COUNT_HW_REF_CPU_CYCLES		= 9,

	PERF_COUNT_HW_MAX,			
};








enum perf_hw_cache_id {
	PERF_COUNT_HW_CACHE_L1D			= 0,
	PERF_COUNT_HW_CACHE_L1I			= 1,
	PERF_COUNT_HW_CACHE_LL			= 2,
	PERF_COUNT_HW_CACHE_DTLB		= 3,
	PERF_COUNT_HW_CACHE_ITLB		= 4,
	PERF_COUNT_HW_CACHE_BPU			= 5,
	PERF_COUNT_HW_CACHE_NODE		= 6,

	PERF_COUNT_HW_CACHE_MAX,		
};

enum perf_hw_cache_op_id {
	PERF_COUNT_HW_CACHE_OP_READ		= 0,
	PERF_COUNT_HW_CACHE_OP_WRITE		= 1,
	PERF_COUNT_HW_CACHE_OP_PREFETCH		= 2,

	PERF_COUNT_HW_CACHE_OP_MAX,		
};

enum perf_hw_cache_op_result_id {
	PERF_COUNT_HW_CACHE_RESULT_ACCESS	= 0,
	PERF_COUNT_HW_CACHE_RESULT_MISS		= 1,

	PERF_COUNT_HW_CACHE_RESULT_MAX,		
};







enum perf_sw_ids {
	PERF_COUNT_SW_CPU_CLOCK			= 0,
	PERF_COUNT_SW_TASK_CLOCK		= 1,
	PERF_COUNT_SW_PAGE_FAULTS		= 2,
	PERF_COUNT_SW_CONTEXT_SWITCHES		= 3,
	PERF_COUNT_SW_CPU_MIGRATIONS		= 4,
	PERF_COUNT_SW_PAGE_FAULTS_MIN		= 5,
	PERF_COUNT_SW_PAGE_FAULTS_MAJ		= 6,
	PERF_COUNT_SW_ALIGNMENT_FAULTS		= 7,
	PERF_COUNT_SW_EMULATION_FAULTS		= 8,
	PERF_COUNT_SW_DUMMY			= 9,
	PERF_COUNT_SW_BPF_OUTPUT		= 10,
	PERF_COUNT_SW_CGROUP_SWITCHES		= 11,

	PERF_COUNT_SW_MAX,			
};





enum perf_event_sample_format {
	PERF_SAMPLE_IP				= 1U << 0,
	PERF_SAMPLE_TID				= 1U << 1,
	PERF_SAMPLE_TIME			= 1U << 2,
	PERF_SAMPLE_ADDR			= 1U << 3,
	PERF_SAMPLE_READ			= 1U << 4,
	PERF_SAMPLE_CALLCHAIN			= 1U << 5,
	PERF_SAMPLE_ID				= 1U << 6,
	PERF_SAMPLE_CPU				= 1U << 7,
	PERF_SAMPLE_PERIOD			= 1U << 8,
	PERF_SAMPLE_STREAM_ID			= 1U << 9,
	PERF_SAMPLE_RAW				= 1U << 10,
	PERF_SAMPLE_BRANCH_STACK		= 1U << 11,
	PERF_SAMPLE_REGS_USER			= 1U << 12,
	PERF_SAMPLE_STACK_USER			= 1U << 13,
	PERF_SAMPLE_WEIGHT			= 1U << 14,
	PERF_SAMPLE_DATA_SRC			= 1U << 15,
	PERF_SAMPLE_IDENTIFIER			= 1U << 16,
	PERF_SAMPLE_TRANSACTION			= 1U << 17,
	PERF_SAMPLE_REGS_INTR			= 1U << 18,
	PERF_SAMPLE_PHYS_ADDR			= 1U << 19,
	PERF_SAMPLE_AUX				= 1U << 20,
	PERF_SAMPLE_CGROUP			= 1U << 21,
	PERF_SAMPLE_DATA_PAGE_SIZE		= 1U << 22,
	PERF_SAMPLE_CODE_PAGE_SIZE		= 1U << 23,
	PERF_SAMPLE_WEIGHT_STRUCT		= 1U << 24,

	PERF_SAMPLE_MAX = 1U << 25,		
};

#line 173 "/usr/include/linux/perf_event.h"











enum perf_branch_sample_type_shift {
	PERF_SAMPLE_BRANCH_USER_SHIFT		=  0, 
	PERF_SAMPLE_BRANCH_KERNEL_SHIFT		=  1, 
	PERF_SAMPLE_BRANCH_HV_SHIFT		=  2, 

	PERF_SAMPLE_BRANCH_ANY_SHIFT		=  3, 
	PERF_SAMPLE_BRANCH_ANY_CALL_SHIFT	=  4, 
	PERF_SAMPLE_BRANCH_ANY_RETURN_SHIFT	=  5, 
	PERF_SAMPLE_BRANCH_IND_CALL_SHIFT	=  6, 
	PERF_SAMPLE_BRANCH_ABORT_TX_SHIFT	=  7, 
	PERF_SAMPLE_BRANCH_IN_TX_SHIFT		=  8, 
	PERF_SAMPLE_BRANCH_NO_TX_SHIFT		=  9, 
	PERF_SAMPLE_BRANCH_COND_SHIFT		= 10, 

	PERF_SAMPLE_BRANCH_CALL_STACK_SHIFT	= 11, 
	PERF_SAMPLE_BRANCH_IND_JUMP_SHIFT	= 12, 
	PERF_SAMPLE_BRANCH_CALL_SHIFT		= 13, 

	PERF_SAMPLE_BRANCH_NO_FLAGS_SHIFT	= 14, 
	PERF_SAMPLE_BRANCH_NO_CYCLES_SHIFT	= 15, 

	PERF_SAMPLE_BRANCH_TYPE_SAVE_SHIFT	= 16, 

	PERF_SAMPLE_BRANCH_HW_INDEX_SHIFT	= 17, 

	PERF_SAMPLE_BRANCH_PRIV_SAVE_SHIFT	= 18, 

	PERF_SAMPLE_BRANCH_COUNTERS_SHIFT	= 19, 

	PERF_SAMPLE_BRANCH_MAX_SHIFT		
};

enum perf_branch_sample_type {
	PERF_SAMPLE_BRANCH_USER			= 1U << PERF_SAMPLE_BRANCH_USER_SHIFT,
	PERF_SAMPLE_BRANCH_KERNEL		= 1U << PERF_SAMPLE_BRANCH_KERNEL_SHIFT,
	PERF_SAMPLE_BRANCH_HV			= 1U << PERF_SAMPLE_BRANCH_HV_SHIFT,

	PERF_SAMPLE_BRANCH_ANY			= 1U << PERF_SAMPLE_BRANCH_ANY_SHIFT,
	PERF_SAMPLE_BRANCH_ANY_CALL		= 1U << PERF_SAMPLE_BRANCH_ANY_CALL_SHIFT,
	PERF_SAMPLE_BRANCH_ANY_RETURN		= 1U << PERF_SAMPLE_BRANCH_ANY_RETURN_SHIFT,
	PERF_SAMPLE_BRANCH_IND_CALL		= 1U << PERF_SAMPLE_BRANCH_IND_CALL_SHIFT,
	PERF_SAMPLE_BRANCH_ABORT_TX		= 1U << PERF_SAMPLE_BRANCH_ABORT_TX_SHIFT,
	PERF_SAMPLE_BRANCH_IN_TX		= 1U << PERF_SAMPLE_BRANCH_IN_TX_SHIFT,
	PERF_SAMPLE_BRANCH_NO_TX		= 1U << PERF_SAMPLE_BRANCH_NO_TX_SHIFT,
	PERF_SAMPLE_BRANCH_COND			= 1U << PERF_SAMPLE_BRANCH_COND_SHIFT,

	PERF_SAMPLE_BRANCH_CALL_STACK		= 1U << PERF_SAMPLE_BRANCH_CALL_STACK_SHIFT,
	PERF_SAMPLE_BRANCH_IND_JUMP		= 1U << PERF_SAMPLE_BRANCH_IND_JUMP_SHIFT,
	PERF_SAMPLE_BRANCH_CALL			= 1U << PERF_SAMPLE_BRANCH_CALL_SHIFT,

	PERF_SAMPLE_BRANCH_NO_FLAGS		= 1U << PERF_SAMPLE_BRANCH_NO_FLAGS_SHIFT,
	PERF_SAMPLE_BRANCH_NO_CYCLES		= 1U << PERF_SAMPLE_BRANCH_NO_CYCLES_SHIFT,

	PERF_SAMPLE_BRANCH_TYPE_SAVE		= 1U << PERF_SAMPLE_BRANCH_TYPE_SAVE_SHIFT,

	PERF_SAMPLE_BRANCH_HW_INDEX		= 1U << PERF_SAMPLE_BRANCH_HW_INDEX_SHIFT,

	PERF_SAMPLE_BRANCH_PRIV_SAVE		= 1U << PERF_SAMPLE_BRANCH_PRIV_SAVE_SHIFT,

	PERF_SAMPLE_BRANCH_COUNTERS		= 1U << PERF_SAMPLE_BRANCH_COUNTERS_SHIFT,

	PERF_SAMPLE_BRANCH_MAX			= 1U << PERF_SAMPLE_BRANCH_MAX_SHIFT,
};




enum {
	PERF_BR_UNKNOWN				=  0,	
	PERF_BR_COND				=  1,	
	PERF_BR_UNCOND				=  2,	
	PERF_BR_IND				=  3,	
	PERF_BR_CALL				=  4,	
	PERF_BR_IND_CALL			=  5,	
	PERF_BR_RET				=  6,	
	PERF_BR_SYSCALL				=  7,	
	PERF_BR_SYSRET				=  8,	
	PERF_BR_COND_CALL			=  9,	
	PERF_BR_COND_RET			= 10,	
	PERF_BR_ERET				= 11,	
	PERF_BR_IRQ				= 12,	
	PERF_BR_SERROR				= 13,	
	PERF_BR_NO_TX				= 14,	
	PERF_BR_EXTEND_ABI			= 15,	
	PERF_BR_MAX,
};




enum {
	PERF_BR_SPEC_NA				= 0,	
	PERF_BR_SPEC_WRONG_PATH			= 1,	
	PERF_BR_NON_SPEC_CORRECT_PATH		= 2,	
	PERF_BR_SPEC_CORRECT_PATH		= 3,	
	PERF_BR_SPEC_MAX,
};

enum {
	PERF_BR_NEW_FAULT_ALGN			= 0,    
	PERF_BR_NEW_FAULT_DATA			= 1,    
	PERF_BR_NEW_FAULT_INST			= 2,    
	PERF_BR_NEW_ARCH_1			= 3,    
	PERF_BR_NEW_ARCH_2			= 4,    
	PERF_BR_NEW_ARCH_3			= 5,    
	PERF_BR_NEW_ARCH_4			= 6,    
	PERF_BR_NEW_ARCH_5			= 7,    
	PERF_BR_NEW_MAX,
};

enum {
	PERF_BR_PRIV_UNKNOWN			= 0,
	PERF_BR_PRIV_USER			= 1,
	PERF_BR_PRIV_KERNEL			= 2,
	PERF_BR_PRIV_HV				= 3,
};

#line 306 "/usr/include/linux/perf_event.h"

#line 308 "/usr/include/linux/perf_event.h"




enum perf_sample_regs_abi {
	PERF_SAMPLE_REGS_ABI_NONE		= 0,
	PERF_SAMPLE_REGS_ABI_32			= 1,
	PERF_SAMPLE_REGS_ABI_64			= 2,
};





enum {
	PERF_TXN_ELISION			= (1 << 0), 
	PERF_TXN_TRANSACTION			= (1 << 1), 
	PERF_TXN_SYNC				= (1 << 2), 
	PERF_TXN_ASYNC				= (1 << 3), 
	PERF_TXN_RETRY				= (1 << 4), 
	PERF_TXN_CONFLICT			= (1 << 5), 
	PERF_TXN_CAPACITY_WRITE			= (1 << 6), 
	PERF_TXN_CAPACITY_READ			= (1 << 7), 

	PERF_TXN_MAX				= (1 << 8), 

	

	PERF_TXN_ABORT_MASK			= (0xffffffffULL << 32),
	PERF_TXN_ABORT_SHIFT			= 32,
};























enum perf_event_read_format {
	PERF_FORMAT_TOTAL_TIME_ENABLED		= 1U << 0,
	PERF_FORMAT_TOTAL_TIME_RUNNING		= 1U << 1,
	PERF_FORMAT_ID				= 1U << 2,
	PERF_FORMAT_GROUP			= 1U << 3,
	PERF_FORMAT_LOST			= 1U << 4,

	PERF_FORMAT_MAX = 1U << 5,		
};

#line 376 "/usr/include/linux/perf_event.h"
							
#line 382 "/usr/include/linux/perf_event.h"







struct perf_event_attr {

	


	__u32			type;

	


	__u32			size;

	


	__u64			config;

	union {
		__u64		sample_period;
		__u64		sample_freq;
	};

	__u64			sample_type;
	__u64			read_format;

	__u64			disabled       :  1, 
				inherit	       :  1, 
				pinned	       :  1, 
				exclusive      :  1, 
				exclude_user   :  1, 
				exclude_kernel :  1, 
				exclude_hv     :  1, 
				exclude_idle   :  1, 
				mmap           :  1, 
				comm	       :  1, 
				freq           :  1, 
				inherit_stat   :  1, 
				enable_on_exec :  1, 
				task           :  1, 
				watermark      :  1, 
				









				precise_ip     :  2, 
				mmap_data      :  1, 
				sample_id_all  :  1, 

				exclude_host   :  1, 
				exclude_guest  :  1, 

				exclude_callchain_kernel : 1, 
				exclude_callchain_user   : 1, 
				mmap2          :  1, 
				comm_exec      :  1, 
				use_clockid    :  1, 
				context_switch :  1, 
				write_backward :  1, 
				namespaces     :  1, 
				ksymbol        :  1, 
				bpf_event      :  1, 
				aux_output     :  1, 
				cgroup         :  1, 
				text_poke      :  1, 
				build_id       :  1, 
				inherit_thread :  1, 
				remove_on_exec :  1, 
				sigtrap        :  1, 
				__reserved_1   : 26;

	union {
		__u32		wakeup_events;	  
		__u32		wakeup_watermark; 
	};

	__u32			bp_type;
	union {
		__u64		bp_addr;
		__u64		kprobe_func; 
		__u64		uprobe_path; 
		__u64		config1;     
	};
	union {
		__u64		bp_len;
		__u64		kprobe_addr;  
		__u64		probe_offset; 
		__u64		config2;      
	};
	__u64	branch_sample_type; 

	



	__u64	sample_regs_user;

	


	__u32	sample_stack_user;

	__s32	clockid;
	







	__u64	sample_regs_intr;

	


	__u32	aux_watermark;

	






	__u16	sample_max_stack;

	__u16	__reserved_2;
	__u32	aux_sample_size;

	union {
		__u32	aux_action;
		struct {
			__u32	aux_start_paused :  1, 
				aux_pause        :  1, 
				aux_resume       :  1, 
				__reserved_3     : 29;
		};
	};

	





	__u64	sig_data;

	__u64	config3; 
};






struct perf_event_query_bpf {
	


	__u32	ids_len;
	



	__u32	prog_cnt;
	


	__u32	ids[];
};




#line 581 "/usr/include/linux/perf_event.h"

enum perf_event_ioc_flags {
	PERF_IOC_FLAG_GROUP			= 1U << 0,
};




struct perf_event_mmap_page {
	__u32	version;		
	__u32	compat_version;		

	


































	__u32	lock;			
	__u32	index;			
	__s64	offset;			
	__u64	time_enabled;		
	__u64	time_running;		
	union {
		__u64	capabilities;
		struct {
			__u64	cap_bit0		: 1, 
				cap_bit0_is_deprecated	: 1, 

				cap_user_rdpmc		: 1, 
				cap_user_time		: 1, 
				cap_user_time_zero	: 1, 
				cap_user_time_short	: 1, 
				cap_____res		: 58;
		};
	};

	








	__u16	pmc_width;

	























	__u16	time_shift;
	__u32	time_mult;
	__u64	time_offset;
	















	__u64	time_zero;

	__u32	size;			
	__u32	__reserved_1;

	










	__u64	time_cycles;
	__u64	time_mask;

		



	__u8	__reserved[116*8];	

	















	__u64   data_head;		
	__u64	data_tail;		
	__u64	data_offset;		
	__u64	data_size;		

	










	__u64	aux_head;
	__u64	aux_tail;
	__u64	aux_offset;
	__u64	aux_size;
};

















#line 787 "/usr/include/linux/perf_event.h"




#line 792 "/usr/include/linux/perf_event.h"









#line 805 "/usr/include/linux/perf_event.h"




















#line 828 "/usr/include/linux/perf_event.h"



#line 832 "/usr/include/linux/perf_event.h"

struct perf_event_header {
	__u32 type;
	__u16 misc;
	__u16 size;
};

struct perf_ns_link_info {
	__u64 dev;
	__u64 ino;
};

enum {
	NET_NS_INDEX				= 0,
	UTS_NS_INDEX				= 1,
	IPC_NS_INDEX				= 2,
	PID_NS_INDEX				= 3,
	USER_NS_INDEX				= 4,
	MNT_NS_INDEX				= 5,
	CGROUP_NS_INDEX				= 6,

	NR_NAMESPACES, 
};

enum perf_event_type {

	























	














	PERF_RECORD_MMAP			= 1,

	







	PERF_RECORD_LOST			= 2,

	








	PERF_RECORD_COMM			= 3,

	








	PERF_RECORD_EXIT			= 4,

	








	PERF_RECORD_THROTTLE			= 5,
	PERF_RECORD_UNTHROTTLE			= 6,

	








	PERF_RECORD_FORK			= 7,

	








	PERF_RECORD_READ			= 8,

	






















































































	PERF_RECORD_SAMPLE			= 9,

	





























	PERF_RECORD_MMAP2			= 10,

	











	PERF_RECORD_AUX				= 11,

	









	PERF_RECORD_ITRACE_START		= 12,

	









	PERF_RECORD_LOST_SAMPLES		= 13,

	









	PERF_RECORD_SWITCH			= 14,

	











	PERF_RECORD_SWITCH_CPU_WIDE		= 15,

	









	PERF_RECORD_NAMESPACES			= 16,

	












	PERF_RECORD_KSYMBOL			= 17,

	
















	PERF_RECORD_BPF_EVENT			= 18,

	







	PERF_RECORD_CGROUP			= 19,

	















	PERF_RECORD_TEXT_POKE			= 20,

	












	PERF_RECORD_AUX_OUTPUT_HW_ID		= 21,

	PERF_RECORD_MAX,			
};

enum perf_record_ksymbol_type {
	PERF_RECORD_KSYMBOL_TYPE_UNKNOWN	= 0,
	PERF_RECORD_KSYMBOL_TYPE_BPF		= 1,
	



	PERF_RECORD_KSYMBOL_TYPE_OOL		= 2,
	PERF_RECORD_KSYMBOL_TYPE_MAX		
};

#line 1254 "/usr/include/linux/perf_event.h"

enum perf_bpf_event_type {
	PERF_BPF_EVENT_UNKNOWN			= 0,
	PERF_BPF_EVENT_PROG_LOAD		= 1,
	PERF_BPF_EVENT_PROG_UNLOAD		= 2,
	PERF_BPF_EVENT_MAX,			
};

#line 1264 "/usr/include/linux/perf_event.h"

enum perf_callchain_context {
	PERF_CONTEXT_HV				= (__u64)-32,
	PERF_CONTEXT_KERNEL			= (__u64)-128,
	PERF_CONTEXT_USER			= (__u64)-512,

	PERF_CONTEXT_GUEST			= (__u64)-2048,
	PERF_CONTEXT_GUEST_KERNEL		= (__u64)-2176,
	PERF_CONTEXT_GUEST_USER			= (__u64)-2560,

	PERF_CONTEXT_MAX			= (__u64)-4095,
};




#line 1285 "/usr/include/linux/perf_event.h"


#line 1289 "/usr/include/linux/perf_event.h"

#line 1294 "/usr/include/linux/perf_event.h"

#line 1296 "/usr/include/linux/perf_event.h"
union perf_mem_data_src {
	__u64 val;
	struct {
		__u64   mem_op      :  5, 
			mem_lvl     : 14, 
			mem_snoop   :  5, 
			mem_lock    :  2, 
			mem_dtlb    :  7, 
			mem_lvl_num :  4, 
			mem_remote  :  1, 
			mem_snoopx  :  2, 
			mem_blk     :  3, 
			mem_hops    :  3, 
			mem_rsvd    : 18;
	};
};
#line 1332 "/usr/include/linux/perf_event.h"


#line 1340 "/usr/include/linux/perf_event.h"








#line 1363 "/usr/include/linux/perf_event.h"

#line 1366 "/usr/include/linux/perf_event.h"

#line 1373 "/usr/include/linux/perf_event.h"

#line 1382 "/usr/include/linux/perf_event.h"

#line 1384 "/usr/include/linux/perf_event.h"


#line 1392 "/usr/include/linux/perf_event.h"

#line 1396 "/usr/include/linux/perf_event.h"


#line 1401 "/usr/include/linux/perf_event.h"


#line 1411 "/usr/include/linux/perf_event.h"


#line 1417 "/usr/include/linux/perf_event.h"


#line 1423 "/usr/include/linux/perf_event.h"

#line 1425 "/usr/include/linux/perf_event.h"

#line 1427 "/usr/include/linux/perf_event.h"


















struct perf_branch_entry {
	__u64	from;
	__u64	to;
	__u64	mispred   :  1, 
		predicted :  1, 
		in_tx     :  1, 
		abort     :  1, 
		cycles    : 16, 
		type      :  4, 
		spec      :  2, 
		new_type  :  4, 
		priv      :  3, 
		reserved  : 31;
};


#line 1462 "/usr/include/linux/perf_event.h"

union perf_sample_weight {
	__u64	      full;
#line 1466 "/usr/include/linux/perf_event.h"
	struct {
		__u32 var1_dw;
		__u16 var2_w;
		__u16 var3_w;
	};
#line 1480 "/usr/include/linux/perf_event.h"
};
#line 53 "headers_linux.c"
#line 1 "/usr/include/linux/if_packet.h"

#line 4 "/usr/include/linux/if_packet.h"

#line 1 "/usr/include/asm/byteorder.h"
#line 6 "/usr/include/linux/if_packet.h"
#line 1 "/usr/include/linux/types.h"
#line 7 "/usr/include/linux/if_packet.h"

struct sockaddr_pkt {
	unsigned short spkt_family;
	unsigned char spkt_device[14];
	__be16 spkt_protocol;
};

struct sockaddr_ll {
	unsigned short	sll_family;
	__be16		sll_protocol;
	int		sll_ifindex;
	unsigned short	sll_hatype;
	unsigned char	sll_pkttype;
	unsigned char	sll_halen;
	unsigned char	sll_addr[8];
};



#line 34 "/usr/include/linux/if_packet.h"

#line 36 "/usr/include/linux/if_packet.h"



#line 42 "/usr/include/linux/if_packet.h"

#line 63 "/usr/include/linux/if_packet.h"

#line 76 "/usr/include/linux/if_packet.h"

struct tpacket_stats {
	unsigned int	tp_packets;
	unsigned int	tp_drops;
};

struct tpacket_stats_v3 {
	unsigned int	tp_packets;
	unsigned int	tp_drops;
	unsigned int	tp_freeze_q_cnt;
};

struct tpacket_rollover_stats {
	__u64 __attribute__((aligned(8)))	tp_all;
	__u64 __attribute__((aligned(8)))	tp_huge;
	__u64 __attribute__((aligned(8)))	tp_failed;
};

union tpacket_stats_u {
	struct tpacket_stats stats1;
	struct tpacket_stats_v3 stats3;
};

struct tpacket_auxdata {
	__u32		tp_status;
	__u32		tp_len;
	__u32		tp_snaplen;
	__u16		tp_mac;
	__u16		tp_net;
	__u16		tp_vlan_tci;
	__u16		tp_vlan_tpid;
};


#line 120 "/usr/include/linux/if_packet.h"


#line 126 "/usr/include/linux/if_packet.h"


#line 131 "/usr/include/linux/if_packet.h"


#line 134 "/usr/include/linux/if_packet.h"

struct tpacket_hdr {
	unsigned long	tp_status;
	unsigned int	tp_len;
	unsigned int	tp_snaplen;
	unsigned short	tp_mac;
	unsigned short	tp_net;
	unsigned int	tp_sec;
	unsigned int	tp_usec;
};

#line 148 "/usr/include/linux/if_packet.h"

struct tpacket2_hdr {
	__u32		tp_status;
	__u32		tp_len;
	__u32		tp_snaplen;
	__u16		tp_mac;
	__u16		tp_net;
	__u32		tp_sec;
	__u32		tp_nsec;
	__u16		tp_vlan_tci;
	__u16		tp_vlan_tpid;
	__u8		tp_padding[4];
};

struct tpacket_hdr_variant1 {
	__u32	tp_rxhash;
	__u32	tp_vlan_tci;
	__u16	tp_vlan_tpid;
	__u16	tp_padding;
};

struct tpacket3_hdr {
	__u32		tp_next_offset;
	__u32		tp_sec;
	__u32		tp_nsec;
	__u32		tp_snaplen;
	__u32		tp_len;
	__u32		tp_status;
	__u16		tp_mac;
	__u16		tp_net;
	
	union {
		struct tpacket_hdr_variant1 hv1;
	};
	__u8		tp_padding[8];
};

struct tpacket_bd_ts {
	unsigned int ts_sec;
	union {
		unsigned int ts_usec;
		unsigned int ts_nsec;
	};
};

struct tpacket_hdr_v1 {
	__u32	block_status;
	__u32	num_pkts;
	__u32	offset_to_first_pkt;

	


	__u32	blk_len;

	








	__u64 __attribute__((aligned(8)))	seq_num;

	
























	struct tpacket_bd_ts	ts_first_pkt, ts_last_pkt;
};

union tpacket_bd_header_u {
	struct tpacket_hdr_v1 bh1;
};

struct tpacket_block_desc {
	__u32 version;
	__u32 offset_to_priv;
	union tpacket_bd_header_u hdr;
};

#line 254 "/usr/include/linux/if_packet.h"

enum tpacket_versions {
	TPACKET_V1,
	TPACKET_V2,
	TPACKET_V3
};















struct tpacket_req {
	unsigned int	tp_block_size;	
	unsigned int	tp_block_nr;	
	unsigned int	tp_frame_size;	
	unsigned int	tp_frame_nr;	
};

struct tpacket_req3 {
	unsigned int	tp_block_size;	
	unsigned int	tp_block_nr;	
	unsigned int	tp_frame_size;	
	unsigned int	tp_frame_nr;	
	unsigned int	tp_retire_blk_tov; 
	unsigned int	tp_sizeof_priv; 
	unsigned int	tp_feature_req_word;
};

union tpacket_req_u {
	struct tpacket_req	req;
	struct tpacket_req3	req3;
};

struct packet_mreq {
	int		mr_ifindex;
	unsigned short	mr_type;
	unsigned short	mr_alen;
	unsigned char	mr_address[8];
};

struct fanout_args {
#line 306 "/usr/include/linux/if_packet.h"
	__u16		id;
	__u16		type_flags;
#line 312 "/usr/include/linux/if_packet.h"
	__u32		max_num_members;
};

#line 319 "/usr/include/linux/if_packet.h"
#line 56 "headers_linux.c"
#line 1 "/usr/include/linux/if_ether.h"





















#line 24 "/usr/include/linux/if_ether.h"

#line 1 "/usr/include/linux/types.h"
#line 26 "/usr/include/linux/if_ether.h"






#line 39 "/usr/include/linux/if_ether.h"

#line 42 "/usr/include/linux/if_ether.h"





#line 122 "/usr/include/linux/if_ether.h"

#line 125 "/usr/include/linux/if_ether.h"





#line 162 "/usr/include/linux/if_ether.h"






#line 171 "/usr/include/linux/if_ether.h"

#line 173 "/usr/include/linux/if_ether.h"
struct ethhdr {
	unsigned char	h_dest[6];	
	unsigned char	h_source[6];	
	__be16		h_proto;		
} __attribute__((packed));
#line 179 "/usr/include/linux/if_ether.h"

#line 59 "headers_linux.c"
#line 1 "/usr/include/linux/if.h"



















#line 22 "/usr/include/linux/if.h"

#line 1 "/usr/include/linux/libc-compat.h"
















































#line 51 "/usr/include/linux/libc-compat.h"


#line 155 "/usr/include/linux/libc-compat.h"


#line 169 "/usr/include/linux/libc-compat.h"

#line 173 "/usr/include/linux/libc-compat.h"

#line 177 "/usr/include/linux/libc-compat.h"


#line 197 "/usr/include/linux/libc-compat.h"


#line 223 "/usr/include/linux/libc-compat.h"


#line 228 "/usr/include/linux/libc-compat.h"

#line 230 "/usr/include/linux/libc-compat.h"
#line 24 "/usr/include/linux/if.h"
#line 1 "/usr/include/linux/types.h"
#line 25 "/usr/include/linux/if.h"
#line 1 "/usr/include/linux/socket.h"
#line 26 "/usr/include/linux/if.h"
		

#line 1 "/usr/include/sys/socket.h"


















#line 21 "/usr/include/sys/socket.h"

#line 1 "/usr/include/features.h"

















#line 20 "/usr/include/features.h"













































































































#line 158 "/usr/include/features.h"



#line 164 "/usr/include/features.h"








#line 177 "/usr/include/features.h"





#line 187 "/usr/include/features.h"


#line 190 "/usr/include/features.h"





#line 200 "/usr/include/features.h"


#line 207 "/usr/include/features.h"


#line 237 "/usr/include/features.h"



#line 244 "/usr/include/features.h"


#line 251 "/usr/include/features.h"


#line 258 "/usr/include/features.h"


#line 263 "/usr/include/features.h"


#line 268 "/usr/include/features.h"


#line 273 "/usr/include/features.h"

#line 286 "/usr/include/features.h"




#line 299 "/usr/include/features.h"

#line 313 "/usr/include/features.h"







#line 325 "/usr/include/features.h"

#line 329 "/usr/include/features.h"

#line 333 "/usr/include/features.h"

#line 337 "/usr/include/features.h"

#line 341 "/usr/include/features.h"

#line 349 "/usr/include/features.h"

#line 355 "/usr/include/features.h"

#line 381 "/usr/include/features.h"

#line 385 "/usr/include/features.h"

#line 389 "/usr/include/features.h"

#line 393 "/usr/include/features.h"

#line 1 "/usr/include/features-time64.h"



















#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 21 "/usr/include/features-time64.h"
#line 1 "/usr/include/bits/timesize.h"


















#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 20 "/usr/include/bits/timesize.h"

#line 25 "/usr/include/bits/timesize.h"
#line 22 "/usr/include/features-time64.h"

#line 39 "/usr/include/features-time64.h"
#line 395 "/usr/include/features.h"

#line 399 "/usr/include/features.h"

#line 403 "/usr/include/features.h"

#line 407 "/usr/include/features.h"

#line 411 "/usr/include/features.h"

#line 435 "/usr/include/features.h"





#line 445 "/usr/include/features.h"













#line 463 "/usr/include/features.h"






#line 474 "/usr/include/features.h"



#line 1 "/usr/include/stdc-predef.h"

















#line 20 "/usr/include/stdc-predef.h"
















#line 45 "/usr/include/stdc-predef.h"

#line 55 "/usr/include/stdc-predef.h"







#line 63 "/usr/include/stdc-predef.h"
#line 478 "/usr/include/features.h"







#line 487 "/usr/include/features.h"



#line 492 "/usr/include/features.h"

#line 494 "/usr/include/features.h"


#line 1 "/usr/include/sys/cdefs.h"


















#line 21 "/usr/include/sys/cdefs.h"


#line 26 "/usr/include/sys/cdefs.h"




#line 33 "/usr/include/sys/cdefs.h"


#line 37 "/usr/include/sys/cdefs.h"





#line 57 "/usr/include/sys/cdefs.h"

#line 59 "/usr/include/sys/cdefs.h"



#line 69 "/usr/include/sys/cdefs.h"






#line 97 "/usr/include/sys/cdefs.h"

#line 103 "/usr/include/sys/cdefs.h"

#line 118 "/usr/include/sys/cdefs.h"



#line 123 "/usr/include/sys/cdefs.h"




#line 129 "/usr/include/sys/cdefs.h"


#line 132 "/usr/include/sys/cdefs.h"



#line 142 "/usr/include/sys/cdefs.h"



#line 150 "/usr/include/sys/cdefs.h"


#line 154 "/usr/include/sys/cdefs.h"


#line 163 "/usr/include/sys/cdefs.h"

#line 286 "/usr/include/sys/cdefs.h"

#line 294 "/usr/include/sys/cdefs.h"





#line 317 "/usr/include/sys/cdefs.h"












#line 330 "/usr/include/sys/cdefs.h"

#line 341 "/usr/include/sys/cdefs.h"

#line 345 "/usr/include/sys/cdefs.h"

#line 349 "/usr/include/sys/cdefs.h"






#line 356 "/usr/include/sys/cdefs.h"




#line 363 "/usr/include/sys/cdefs.h"




#line 372 "/usr/include/sys/cdefs.h"



#line 380 "/usr/include/sys/cdefs.h"



#line 388 "/usr/include/sys/cdefs.h"




#line 397 "/usr/include/sys/cdefs.h"


#line 404 "/usr/include/sys/cdefs.h"

#line 410 "/usr/include/sys/cdefs.h"




#line 421 "/usr/include/sys/cdefs.h"


#line 428 "/usr/include/sys/cdefs.h"




#line 437 "/usr/include/sys/cdefs.h"







#line 449 "/usr/include/sys/cdefs.h"





#line 459 "/usr/include/sys/cdefs.h"





#line 474 "/usr/include/sys/cdefs.h"



#line 484 "/usr/include/sys/cdefs.h"



#line 498 "/usr/include/sys/cdefs.h"


#line 501 "/usr/include/sys/cdefs.h"



#line 510 "/usr/include/sys/cdefs.h"



#line 518 "/usr/include/sys/cdefs.h"










#line 537 "/usr/include/sys/cdefs.h"

#line 541 "/usr/include/sys/cdefs.h"



#line 548 "/usr/include/sys/cdefs.h"





#line 556 "/usr/include/sys/cdefs.h"




#line 567 "/usr/include/sys/cdefs.h"





#line 586 "/usr/include/sys/cdefs.h"

#line 594 "/usr/include/sys/cdefs.h"

#line 602 "/usr/include/sys/cdefs.h"

#line 611 "/usr/include/sys/cdefs.h"


#line 621 "/usr/include/sys/cdefs.h"

#line 625 "/usr/include/sys/cdefs.h"



#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 630 "/usr/include/sys/cdefs.h"
#line 1 "/usr/include/bits/long-double.h"



















#line 631 "/usr/include/sys/cdefs.h"
#line 632 "/usr/include/sys/cdefs.h"

#line 683 "/usr/include/sys/cdefs.h"






#line 695 "/usr/include/sys/cdefs.h"








#line 708 "/usr/include/sys/cdefs.h"

#line 735 "/usr/include/sys/cdefs.h"

#line 745 "/usr/include/sys/cdefs.h"



#line 753 "/usr/include/sys/cdefs.h"




#line 762 "/usr/include/sys/cdefs.h"
#line 499 "/usr/include/features.h"
#line 500 "/usr/include/features.h"



#line 507 "/usr/include/features.h"

#line 509 "/usr/include/features.h"


#line 514 "/usr/include/features.h"






#line 1 "/usr/include/gnu/stubs.h"





#line 1 "/usr/include/gnu/stubs-64.h"





#line 9 "/usr/include/gnu/stubs-64.h"
#line 11 "/usr/include/gnu/stubs.h"
#line 521 "/usr/include/features.h"

#line 23 "/usr/include/sys/socket.h"



#line 1 "/usr/include/bits/types/struct_iovec.h"


















#line 21 "/usr/include/bits/types/struct_iovec.h"

#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"













#line 16 "/usr/lib/clang/21/include/__stddef_size_t.h"

typedef unsigned long size_t;
#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 24 "/usr/include/bits/types/struct_iovec.h"


struct iovec
  {
    void *iov_base;	
    size_t iov_len;	
  };
#line 27 "/usr/include/sys/socket.h"
#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 29 "/usr/include/sys/socket.h"




#line 1 "/usr/include/bits/socket.h"


















#line 21 "/usr/include/bits/socket.h"

#line 25 "/usr/include/bits/socket.h"

#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 28 "/usr/include/bits/socket.h"

#line 1 "/usr/include/sys/types.h"





















#line 24 "/usr/include/sys/types.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/sys/types.h"



#line 1 "/usr/include/bits/types.h"






















#line 25 "/usr/include/bits/types.h"

#line 1 "/usr/include/features.h"
















#line 27 "/usr/include/bits/types.h"
#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 28 "/usr/include/bits/types.h"
#line 1 "/usr/include/bits/timesize.h"


















#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 20 "/usr/include/bits/timesize.h"

#line 25 "/usr/include/bits/timesize.h"
#line 29 "/usr/include/bits/types.h"


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#line 44 "/usr/include/bits/types.h"
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
#line 50 "/usr/include/bits/types.h"


typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;


#line 63 "/usr/include/bits/types.h"
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#line 69 "/usr/include/bits/types.h"


#line 72 "/usr/include/bits/types.h"
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
#line 78 "/usr/include/bits/types.h"































#line 136 "/usr/include/bits/types.h"

#line 1 "/usr/include/bits/typesizes.h"


















#line 22 "/usr/include/bits/typesizes.h"

#line 25 "/usr/include/bits/typesizes.h"





#line 37 "/usr/include/bits/typesizes.h"

#line 76 "/usr/include/bits/typesizes.h"

#line 78 "/usr/include/bits/typesizes.h"



#line 82 "/usr/include/bits/typesizes.h"


#line 85 "/usr/include/bits/typesizes.h"


#line 88 "/usr/include/bits/typesizes.h"


#line 91 "/usr/include/bits/typesizes.h"


#line 101 "/usr/include/bits/typesizes.h"


#line 104 "/usr/include/bits/typesizes.h"

#line 142 "/usr/include/bits/types.h"
#line 1 "/usr/include/bits/time64.h"


















#line 22 "/usr/include/bits/time64.h"

#line 25 "/usr/include/bits/time64.h"



#line 29 "/usr/include/bits/time64.h"

#line 35 "/usr/include/bits/time64.h"
#line 143 "/usr/include/bits/types.h"


typedef unsigned long int __dev_t;	
typedef unsigned int __uid_t;	
typedef unsigned int __gid_t;	
typedef unsigned long int __ino_t;	
typedef unsigned long int __ino64_t;	
typedef unsigned int __mode_t;	
typedef unsigned long int __nlink_t;	
typedef long int __off_t;	
typedef long int __off64_t;	
typedef int __pid_t;	
typedef struct __fsid_t { int __val[2]; } __fsid_t;	
typedef long int __clock_t;	
typedef unsigned long int __rlim_t;	
typedef unsigned long int __rlim64_t;	
typedef unsigned int __id_t;		
typedef long int __time_t;	
typedef unsigned int __useconds_t; 
typedef long int __suseconds_t; 
typedef long int __suseconds64_t;

typedef int __daddr_t;	
typedef int __key_t;	


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t; 


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;	
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;




#line 225 "/usr/include/bits/types.h"

#line 227 "/usr/include/bits/types.h"
#line 30 "/usr/include/sys/types.h"

#line 33 "/usr/include/sys/types.h"
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
#line 42 "/usr/include/sys/types.h"
typedef __loff_t loff_t;
#line 44 "/usr/include/sys/types.h"

#line 47 "/usr/include/sys/types.h"
typedef __ino_t ino_t;
#line 54 "/usr/include/sys/types.h"
typedef __ino64_t ino64_t;
#line 57 "/usr/include/sys/types.h"

#line 59 "/usr/include/sys/types.h"
typedef __dev_t dev_t;
#line 62 "/usr/include/sys/types.h"

#line 64 "/usr/include/sys/types.h"
typedef __gid_t gid_t;
#line 67 "/usr/include/sys/types.h"

#line 69 "/usr/include/sys/types.h"
typedef __mode_t mode_t;
#line 72 "/usr/include/sys/types.h"

#line 74 "/usr/include/sys/types.h"
typedef __nlink_t nlink_t;
#line 77 "/usr/include/sys/types.h"

#line 79 "/usr/include/sys/types.h"
typedef __uid_t uid_t;
#line 82 "/usr/include/sys/types.h"

#line 85 "/usr/include/sys/types.h"
typedef __off_t off_t;
#line 92 "/usr/include/sys/types.h"
typedef __off64_t off64_t;
#line 95 "/usr/include/sys/types.h"

#line 97 "/usr/include/sys/types.h"
typedef __pid_t pid_t;
#line 100 "/usr/include/sys/types.h"

#line 102 "/usr/include/sys/types.h"
typedef __id_t id_t;
#line 105 "/usr/include/sys/types.h"

#line 107 "/usr/include/sys/types.h"
typedef __ssize_t ssize_t;
#line 110 "/usr/include/sys/types.h"

#line 113 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
#line 118 "/usr/include/sys/types.h"

#line 120 "/usr/include/sys/types.h"
typedef __key_t key_t;
#line 123 "/usr/include/sys/types.h"

#line 1 "/usr/include/bits/types/clock_t.h"
#line 3 "/usr/include/bits/types/clock_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/clock_t.h"


typedef __clock_t clock_t;
#line 126 "/usr/include/sys/types.h"
#line 1 "/usr/include/bits/types/clockid_t.h"
#line 3 "/usr/include/bits/types/clockid_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/clockid_t.h"


typedef __clockid_t clockid_t;
#line 128 "/usr/include/sys/types.h"
#line 1 "/usr/include/bits/types/time_t.h"
#line 3 "/usr/include/bits/types/time_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/time_t.h"


#line 10 "/usr/include/bits/types/time_t.h"
typedef __time_t time_t;
#line 12 "/usr/include/bits/types/time_t.h"
#line 129 "/usr/include/sys/types.h"
#line 1 "/usr/include/bits/types/timer_t.h"
#line 3 "/usr/include/bits/types/timer_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/timer_t.h"


typedef __timer_t timer_t;
#line 130 "/usr/include/sys/types.h"

#line 133 "/usr/include/sys/types.h"
typedef __useconds_t useconds_t;
#line 137 "/usr/include/sys/types.h"
typedef __suseconds_t suseconds_t;
#line 141 "/usr/include/sys/types.h"

#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 144 "/usr/include/sys/types.h"

#line 146 "/usr/include/sys/types.h"

typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 151 "/usr/include/sys/types.h"



#line 1 "/usr/include/bits/stdint-intn.h"


















#line 21 "/usr/include/bits/stdint-intn.h"

#line 1 "/usr/include/bits/types.h"





















#line 23 "/usr/include/bits/stdint-intn.h"

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
#line 155 "/usr/include/sys/types.h"


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;

#line 163 "/usr/include/sys/types.h"
typedef int register_t __attribute__ ((__mode__ (__word__)));
#line 167 "/usr/include/sys/types.h"



#line 171 "/usr/include/sys/types.h"


#line 174 "/usr/include/sys/types.h"

#line 1 "/usr/include/endian.h"

















#line 20 "/usr/include/endian.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/endian.h"


#line 1 "/usr/include/bits/endian.h"


















#line 21 "/usr/include/bits/endian.h"









#line 33 "/usr/include/bits/endian.h"


#line 1 "/usr/include/bits/endianness.h"
#line 3 "/usr/include/bits/endianness.h"

#line 7 "/usr/include/bits/endianness.h"


#line 10 "/usr/include/bits/endianness.h"
#line 36 "/usr/include/bits/endian.h"



#line 42 "/usr/include/bits/endian.h"

#line 48 "/usr/include/bits/endian.h"
#line 25 "/usr/include/endian.h"

#line 32 "/usr/include/endian.h"

#line 34 "/usr/include/endian.h"

#line 1 "/usr/include/bits/byteswap.h"


















#line 22 "/usr/include/bits/byteswap.h"

#line 25 "/usr/include/bits/byteswap.h"

#line 1 "/usr/include/features.h"
















#line 27 "/usr/include/bits/byteswap.h"
#line 1 "/usr/include/bits/types.h"





















#line 28 "/usr/include/bits/byteswap.h"


#line 31 "/usr/include/bits/byteswap.h"

static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{
#line 38 "/usr/include/bits/byteswap.h"
  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));
#line 40 "/usr/include/bits/byteswap.h"
}


#line 44 "/usr/include/bits/byteswap.h"

static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{
#line 51 "/usr/include/bits/byteswap.h"
  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8)	   | (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));
#line 53 "/usr/include/bits/byteswap.h"
}


#line 57 "/usr/include/bits/byteswap.h"

static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
#line 64 "/usr/include/bits/byteswap.h"
  return ((((__bsx) & 0xff00000000000000ull) >> 56)	   | (((__bsx) & 0x00ff000000000000ull) >> 40)	   | (((__bsx) & 0x0000ff0000000000ull) >> 24)	   | (((__bsx) & 0x000000ff00000000ull) >> 8)	   | (((__bsx) & 0x00000000ff000000ull) << 8)	   | (((__bsx) & 0x0000000000ff0000ull) << 24)	   | (((__bsx) & 0x000000000000ff00ull) << 40)	   | (((__bsx) & 0x00000000000000ffull) << 56));
#line 66 "/usr/include/bits/byteswap.h"
}
#line 36 "/usr/include/endian.h"
#line 1 "/usr/include/bits/uintn-identity.h"


















#line 22 "/usr/include/bits/uintn-identity.h"

#line 25 "/usr/include/bits/uintn-identity.h"

#line 1 "/usr/include/bits/types.h"





















#line 27 "/usr/include/bits/uintn-identity.h"





static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
#line 37 "/usr/include/endian.h"

#line 43 "/usr/include/endian.h"

#line 48 "/usr/include/endian.h"

#line 53 "/usr/include/endian.h"

#line 71 "/usr/include/endian.h"
#line 176 "/usr/include/sys/types.h"


#line 1 "/usr/include/sys/select.h"




















#line 23 "/usr/include/sys/select.h"

#line 1 "/usr/include/features.h"
















#line 25 "/usr/include/sys/select.h"


#line 1 "/usr/include/bits/types.h"





















#line 28 "/usr/include/sys/select.h"


#line 1 "/usr/include/bits/select.h"

















#line 21 "/usr/include/bits/select.h"



#line 31 "/usr/include/sys/select.h"


#line 1 "/usr/include/bits/types/sigset_t.h"
#line 3 "/usr/include/bits/types/sigset_t.h"

#line 1 "/usr/include/bits/types/__sigset_t.h"
#line 3 "/usr/include/bits/types/__sigset_t.h"

#line 5 "/usr/include/bits/types/__sigset_t.h"
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
#line 5 "/usr/include/bits/types/sigset_t.h"


typedef __sigset_t sigset_t;
#line 34 "/usr/include/sys/select.h"


#line 1 "/usr/include/bits/types/time_t.h"
#line 37 "/usr/include/sys/select.h"
#line 1 "/usr/include/bits/types/struct_timeval.h"
#line 3 "/usr/include/bits/types/struct_timeval.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/struct_timeval.h"



struct timeval
{
#line 14 "/usr/include/bits/types/struct_timeval.h"
  __time_t tv_sec;		
  __suseconds_t tv_usec;	
#line 17 "/usr/include/bits/types/struct_timeval.h"
};
#line 38 "/usr/include/sys/select.h"
#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 40 "/usr/include/sys/select.h"
#line 41 "/usr/include/sys/select.h"

#line 46 "/usr/include/sys/select.h"



typedef long int __fd_mask;


#line 53 "/usr/include/sys/select.h"

#line 57 "/usr/include/sys/select.h"


typedef struct
  {
    

#line 64 "/usr/include/sys/select.h"
    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
#line 70 "/usr/include/sys/select.h"
  } fd_set;


#line 74 "/usr/include/sys/select.h"

#line 76 "/usr/include/sys/select.h"

typedef __fd_mask fd_mask;


#line 82 "/usr/include/sys/select.h"



#line 89 "/usr/include/sys/select.h"












#line 102 "/usr/include/sys/select.h"
extern int select (int __nfds, fd_set *__restrict __readfds,
		   fd_set *__restrict __writefds,
		   fd_set *__restrict __exceptfds,
		   struct timeval *__restrict __timeout);
#line 118 "/usr/include/sys/select.h"

#line 120 "/usr/include/sys/select.h"






#line 127 "/usr/include/sys/select.h"
extern int pselect (int __nfds, fd_set *__restrict __readfds,
		    fd_set *__restrict __writefds,
		    fd_set *__restrict __exceptfds,
		    const struct timespec *__restrict __timeout,
		    const __sigset_t *__restrict __sigmask);
#line 146 "/usr/include/sys/select.h"



#line 152 "/usr/include/sys/select.h"


#line 179 "/usr/include/sys/types.h"
#line 180 "/usr/include/sys/types.h"


#line 183 "/usr/include/sys/types.h"
typedef __blksize_t blksize_t;
#line 186 "/usr/include/sys/types.h"


#line 190 "/usr/include/sys/types.h"
typedef __blkcnt_t blkcnt_t;	 
#line 194 "/usr/include/sys/types.h"
typedef __fsblkcnt_t fsblkcnt_t; 
#line 198 "/usr/include/sys/types.h"
typedef __fsfilcnt_t fsfilcnt_t; 
#line 215 "/usr/include/sys/types.h"

#line 217 "/usr/include/sys/types.h"
typedef __blkcnt64_t blkcnt64_t;     
typedef __fsblkcnt64_t fsblkcnt64_t; 
typedef __fsfilcnt64_t fsfilcnt64_t; 
#line 221 "/usr/include/sys/types.h"



#line 1 "/usr/include/bits/pthreadtypes.h"


















#line 21 "/usr/include/bits/pthreadtypes.h"


#line 1 "/usr/include/bits/thread-shared-types.h"


















#line 21 "/usr/include/bits/thread-shared-types.h"























#line 1 "/usr/include/bits/pthreadtypes-arch.h"

















#line 20 "/usr/include/bits/pthreadtypes-arch.h"

#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 22 "/usr/include/bits/pthreadtypes-arch.h"

#line 46 "/usr/include/bits/pthreadtypes-arch.h"

#line 49 "/usr/include/bits/pthreadtypes-arch.h"

#line 54 "/usr/include/bits/pthreadtypes-arch.h"
#line 45 "/usr/include/bits/thread-shared-types.h"

#line 1 "/usr/include/bits/atomic_wide_counter.h"


















#line 21 "/usr/include/bits/atomic_wide_counter.h"




typedef union
{
  unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
#line 47 "/usr/include/bits/thread-shared-types.h"




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;















#line 1 "/usr/include/bits/struct_mutex.h"


















#line 21 "/usr/include/bits/struct_mutex.h"

struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;
#line 28 "/usr/include/bits/struct_mutex.h"
  unsigned int __nusers;
#line 30 "/usr/include/bits/struct_mutex.h"
  

  int __kind;
#line 34 "/usr/include/bits/struct_mutex.h"
  short __spins;
  short __elision;
  __pthread_list_t __list;
#line 53 "/usr/include/bits/struct_mutex.h"
};

#line 60 "/usr/include/bits/struct_mutex.h"
#line 77 "/usr/include/bits/thread-shared-types.h"












#line 1 "/usr/include/bits/struct_rwlock.h"



















#line 22 "/usr/include/bits/struct_rwlock.h"

struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
#line 32 "/usr/include/bits/struct_rwlock.h"
  int __cur_writer;
  int __shared;
  signed char __rwelision;
#line 39 "/usr/include/bits/struct_rwlock.h"
  unsigned char __pad1[7];
#line 42 "/usr/include/bits/struct_rwlock.h"
  unsigned long int __pad2;
  

  unsigned int __flags;
#line 55 "/usr/include/bits/struct_rwlock.h"
};

#line 62 "/usr/include/bits/struct_rwlock.h"
#line 90 "/usr/include/bits/thread-shared-types.h"




struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_size[2] ;
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
  unsigned int __unused_initialized_1;
  unsigned int __unused_initialized_2;
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;

#line 115 "/usr/include/bits/thread-shared-types.h"
#line 24 "/usr/include/bits/pthreadtypes.h"



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int  pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};
#line 62 "/usr/include/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t;
#line 65 "/usr/include/bits/pthreadtypes.h"


typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  long long int __align;
} pthread_cond_t;


#line 84 "/usr/include/bits/pthreadtypes.h"


typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
#line 99 "/usr/include/bits/pthreadtypes.h"


#line 102 "/usr/include/bits/pthreadtypes.h"

typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
#line 120 "/usr/include/bits/pthreadtypes.h"
#line 226 "/usr/include/sys/types.h"
#line 227 "/usr/include/sys/types.h"


#line 30 "/usr/include/bits/socket.h"


#line 33 "/usr/include/bits/socket.h"
typedef __socklen_t socklen_t;
#line 36 "/usr/include/bits/socket.h"


#line 1 "/usr/include/bits/socket_type.h"


















#line 22 "/usr/include/bits/socket_type.h"


enum __socket_type
{
  SOCK_STREAM = 1,		

#line 29 "/usr/include/bits/socket_type.h"
  SOCK_DGRAM = 2,		

#line 32 "/usr/include/bits/socket_type.h"
  SOCK_RAW = 3,			
#line 34 "/usr/include/bits/socket_type.h"
  SOCK_RDM = 4,			
#line 36 "/usr/include/bits/socket_type.h"
  SOCK_SEQPACKET = 5,		

#line 39 "/usr/include/bits/socket_type.h"
  SOCK_DCCP = 6,		
#line 41 "/usr/include/bits/socket_type.h"
  SOCK_PACKET = 10,		


#line 45 "/usr/include/bits/socket_type.h"

  


  SOCK_CLOEXEC = 02000000,	

#line 52 "/usr/include/bits/socket_type.h"
  SOCK_NONBLOCK = 00004000	

#line 55 "/usr/include/bits/socket_type.h"
};
#line 39 "/usr/include/bits/socket.h"


#line 91 "/usr/include/bits/socket.h"


#line 143 "/usr/include/bits/socket.h"





#line 176 "/usr/include/bits/socket.h"


#line 179 "/usr/include/bits/socket.h"


#line 1 "/usr/include/bits/sockaddr.h"






















#line 25 "/usr/include/bits/sockaddr.h"



typedef unsigned short int sa_family_t;





#line 35 "/usr/include/bits/sockaddr.h"

#line 37 "/usr/include/bits/sockaddr.h"


#line 40 "/usr/include/bits/sockaddr.h"
#line 182 "/usr/include/bits/socket.h"


struct __attribute__ ((__may_alias__)) sockaddr
  {
    sa_family_t sa_family;	
    char sa_data[14];		
  };




#line 195 "/usr/include/bits/socket.h"

struct __attribute__ ((__may_alias__)) sockaddr_storage
  {
    sa_family_t ss_family;	
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;	
  };



enum
  {
    MSG_OOB		= 0x01,	
#line 209 "/usr/include/bits/socket.h"
    MSG_PEEK		= 0x02,	
#line 211 "/usr/include/bits/socket.h"
    MSG_DONTROUTE	= 0x04,	
#line 214 "/usr/include/bits/socket.h"
    
    MSG_TRYHARD		= MSG_DONTROUTE,
#line 218 "/usr/include/bits/socket.h"
    MSG_CTRUNC		= 0x08,	
#line 220 "/usr/include/bits/socket.h"
    MSG_PROXY		= 0x10,	
#line 222 "/usr/include/bits/socket.h"
    MSG_TRUNC		= 0x20,
#line 224 "/usr/include/bits/socket.h"
    MSG_DONTWAIT	= 0x40, 
#line 226 "/usr/include/bits/socket.h"
    MSG_EOR		= 0x80, 
#line 228 "/usr/include/bits/socket.h"
    MSG_WAITALL		= 0x100, 
#line 230 "/usr/include/bits/socket.h"
    MSG_FIN		= 0x200,
#line 232 "/usr/include/bits/socket.h"
    MSG_SYN		= 0x400,
#line 234 "/usr/include/bits/socket.h"
    MSG_CONFIRM		= 0x800, 
#line 236 "/usr/include/bits/socket.h"
    MSG_RST		= 0x1000,
#line 238 "/usr/include/bits/socket.h"
    MSG_ERRQUEUE	= 0x2000, 
#line 240 "/usr/include/bits/socket.h"
    MSG_NOSIGNAL	= 0x4000, 
#line 242 "/usr/include/bits/socket.h"
    MSG_MORE		= 0x8000,  
#line 244 "/usr/include/bits/socket.h"
    MSG_WAITFORONE	= 0x10000, 
#line 246 "/usr/include/bits/socket.h"
    MSG_BATCH		= 0x40000, 
#line 248 "/usr/include/bits/socket.h"
    MSG_SOCK_DEVMEM	= 0x2000000, 
#line 250 "/usr/include/bits/socket.h"
    MSG_ZEROCOPY	= 0x4000000, 
#line 252 "/usr/include/bits/socket.h"
    MSG_FASTOPEN	= 0x20000000, 
#line 254 "/usr/include/bits/socket.h"

    MSG_CMSG_CLOEXEC	= 0x40000000	


#line 259 "/usr/include/bits/socket.h"
  };




struct msghdr
  {
    void *msg_name;		
    socklen_t msg_namelen;	

    struct iovec *msg_iov;	
    size_t msg_iovlen;		

    void *msg_control;		
    size_t msg_controllen;	




    int msg_flags;		
  };


struct cmsghdr
  {
    size_t cmsg_len;		




    int cmsg_level;		
    int cmsg_type;		
#line 292 "/usr/include/bits/socket.h"
    unsigned char __cmsg_data []; 
#line 294 "/usr/include/bits/socket.h"
  };


#line 307 "/usr/include/bits/socket.h"



#line 311 "/usr/include/bits/socket.h"

extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
				      struct cmsghdr *__cmsg) ;
#line 356 "/usr/include/bits/socket.h"



enum
  {
    SCM_RIGHTS = 0x01		
#line 364 "/usr/include/bits/socket.h"
    , SCM_CREDENTIALS = 0x02	
#line 366 "/usr/include/bits/socket.h"
    , SCM_SECURITY = 0x03	
#line 368 "/usr/include/bits/socket.h"
    , SCM_PIDFD = 0x04		
#line 371 "/usr/include/bits/socket.h"
  };

#line 374 "/usr/include/bits/socket.h"

struct ucred
{
  pid_t pid;			
  uid_t uid;			
  gid_t gid;			
};
#line 382 "/usr/include/bits/socket.h"

#line 1 "/usr/include/bits/types/time_t.h"
#line 385 "/usr/include/bits/socket.h"
#line 1 "/usr/include/asm/socket.h"
#line 1 "/usr/include/asm-generic/socket.h"

#line 4 "/usr/include/asm-generic/socket.h"

#line 1 "/usr/include/linux/posix_types.h"
#line 6 "/usr/include/asm-generic/socket.h"
#line 1 "/usr/include/asm/sockios.h"
#line 1 "/usr/include/asm-generic/sockios.h"

#line 4 "/usr/include/asm-generic/sockios.h"


#line 13 "/usr/include/asm-generic/sockios.h"
#line 2 "/usr/include/asm/sockios.h"
#line 7 "/usr/include/asm-generic/socket.h"


#line 10 "/usr/include/asm-generic/socket.h"

#line 36 "/usr/include/asm-generic/socket.h"


#line 41 "/usr/include/asm-generic/socket.h"

#line 43 "/usr/include/asm-generic/socket.h"


#line 48 "/usr/include/asm-generic/socket.h"

#line 50 "/usr/include/asm-generic/socket.h"

#line 52 "/usr/include/asm-generic/socket.h"

#line 55 "/usr/include/asm-generic/socket.h"

#line 57 "/usr/include/asm-generic/socket.h"

#line 60 "/usr/include/asm-generic/socket.h"

#line 62 "/usr/include/asm-generic/socket.h"

#line 66 "/usr/include/asm-generic/socket.h"


#line 69 "/usr/include/asm-generic/socket.h"

#line 71 "/usr/include/asm-generic/socket.h"

#line 73 "/usr/include/asm-generic/socket.h"

#line 75 "/usr/include/asm-generic/socket.h"

#line 77 "/usr/include/asm-generic/socket.h"

#line 79 "/usr/include/asm-generic/socket.h"

#line 81 "/usr/include/asm-generic/socket.h"

#line 84 "/usr/include/asm-generic/socket.h"

#line 87 "/usr/include/asm-generic/socket.h"

#line 89 "/usr/include/asm-generic/socket.h"

#line 91 "/usr/include/asm-generic/socket.h"

#line 93 "/usr/include/asm-generic/socket.h"

#line 95 "/usr/include/asm-generic/socket.h"

#line 97 "/usr/include/asm-generic/socket.h"

#line 99 "/usr/include/asm-generic/socket.h"

#line 101 "/usr/include/asm-generic/socket.h"

#line 103 "/usr/include/asm-generic/socket.h"

#line 106 "/usr/include/asm-generic/socket.h"

#line 108 "/usr/include/asm-generic/socket.h"

#line 112 "/usr/include/asm-generic/socket.h"

#line 116 "/usr/include/asm-generic/socket.h"

#line 119 "/usr/include/asm-generic/socket.h"

#line 121 "/usr/include/asm-generic/socket.h"

#line 124 "/usr/include/asm-generic/socket.h"

#line 126 "/usr/include/asm-generic/socket.h"

#line 128 "/usr/include/asm-generic/socket.h"

#line 130 "/usr/include/asm-generic/socket.h"

#line 132 "/usr/include/asm-generic/socket.h"

#line 134 "/usr/include/asm-generic/socket.h"

#line 137 "/usr/include/asm-generic/socket.h"

#line 143 "/usr/include/asm-generic/socket.h"

#line 145 "/usr/include/asm-generic/socket.h"

#line 147 "/usr/include/asm-generic/socket.h"

#line 149 "/usr/include/asm-generic/socket.h"

#line 152 "/usr/include/asm-generic/socket.h"


#line 155 "/usr/include/asm-generic/socket.h"

#line 159 "/usr/include/asm-generic/socket.h"

#line 170 "/usr/include/asm-generic/socket.h"

#line 174 "/usr/include/asm-generic/socket.h"

#line 2 "/usr/include/asm/socket.h"
#line 386 "/usr/include/bits/socket.h"
#line 390 "/usr/include/bits/socket.h"


struct linger
  {
    int l_onoff;		
    int l_linger;		
  };
#line 34 "/usr/include/sys/socket.h"

#line 1 "/usr/include/bits/types/struct_osockaddr.h"
#line 3 "/usr/include/bits/types/struct_osockaddr.h"



struct osockaddr
{
  unsigned short int sa_family;
  unsigned char sa_data[14];
};
#line 37 "/usr/include/sys/socket.h"
#line 38 "/usr/include/sys/socket.h"



enum
{
  SHUT_RD = 0,		
#line 45 "/usr/include/sys/socket.h"
  SHUT_WR,		
#line 47 "/usr/include/sys/socket.h"
  SHUT_RDWR		
#line 49 "/usr/include/sys/socket.h"
};







#line 61 "/usr/include/sys/socket.h"


#line 64 "/usr/include/sys/socket.h"

#line 67 "/usr/include/sys/socket.h"
typedef struct sockaddr *__restrict __SOCKADDR_ARG;
#line 71 "/usr/include/sys/socket.h"
typedef const struct sockaddr *__restrict __CONST_SOCKADDR_ARG;
#line 74 "/usr/include/sys/socket.h"

#line 76 "/usr/include/sys/socket.h"

struct mmsghdr
  {
    struct msghdr msg_hdr;	
    unsigned int msg_len;	

  };
#line 84 "/usr/include/sys/socket.h"





extern int socket (int __domain, int __type, int __protocol) ;





extern int socketpair (int __domain, int __type, int __protocol,
		       int __fds[2]) ;


extern int bind (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
     ;


extern int getsockname (int __fd, __SOCKADDR_ARG __addr,
			socklen_t *__restrict __len) ;








extern int connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);



extern int getpeername (int __fd, __SOCKADDR_ARG __addr,
			socklen_t *__restrict __len) ;






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
		       int __flags, __CONST_SOCKADDR_ARG __addr,
		       socklen_t __addr_len);








extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
			 int __flags, __SOCKADDR_ARG __addr,
			 socklen_t *__restrict __addr_len);







#line 161 "/usr/include/sys/socket.h"
extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
			int __flags);
#line 174 "/usr/include/sys/socket.h"

#line 176 "/usr/include/sys/socket.h"





#line 182 "/usr/include/sys/socket.h"
extern int sendmmsg (int __fd, struct mmsghdr *__vmessages,
		     unsigned int __vlen, int __flags);
#line 196 "/usr/include/sys/socket.h"






#line 203 "/usr/include/sys/socket.h"
extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);
#line 214 "/usr/include/sys/socket.h"

#line 216 "/usr/include/sys/socket.h"





#line 222 "/usr/include/sys/socket.h"
extern int recvmmsg (int __fd, struct mmsghdr *__vmessages,
		     unsigned int __vlen, int __flags,
		     struct timespec *__tmo);
#line 236 "/usr/include/sys/socket.h"





#line 242 "/usr/include/sys/socket.h"
extern int getsockopt (int __fd, int __level, int __optname,
		       void *__restrict __optval,
		       socklen_t *__restrict __optlen) ;
#line 259 "/usr/include/sys/socket.h"




#line 264 "/usr/include/sys/socket.h"
extern int setsockopt (int __fd, int __level, int __optname,
		       const void *__optval, socklen_t __optlen) ;
#line 278 "/usr/include/sys/socket.h"





extern int listen (int __fd, int __n) ;









extern int accept (int __fd, __SOCKADDR_ARG __addr,
		   socklen_t *__restrict __addr_len);

#line 297 "/usr/include/sys/socket.h"




extern int accept4 (int __fd, __SOCKADDR_ARG __addr,
		    socklen_t *__restrict __addr_len, int __flags);
#line 304 "/usr/include/sys/socket.h"







extern int shutdown (int __fd, int __how) ;


#line 315 "/usr/include/sys/socket.h"

extern int sockatmark (int __fd) ;
#line 318 "/usr/include/sys/socket.h"


#line 321 "/usr/include/sys/socket.h"



extern int isfdtype (int __fd, int __fdtype) ;
#line 326 "/usr/include/sys/socket.h"



#line 332 "/usr/include/sys/socket.h"


#line 29 "/usr/include/linux/if.h"

#line 1 "/usr/include/linux/hdlc/ioctl.h"

#line 4 "/usr/include/linux/hdlc/ioctl.h"


#line 7 "/usr/include/linux/hdlc/ioctl.h"

#line 13 "/usr/include/linux/hdlc/ioctl.h"


#line 21 "/usr/include/linux/hdlc/ioctl.h"


#line 31 "/usr/include/linux/hdlc/ioctl.h"

#line 37 "/usr/include/linux/hdlc/ioctl.h"

#line 39 "/usr/include/linux/hdlc/ioctl.h"

typedef struct {
	unsigned int clock_rate; 
	unsigned int clock_type; 
	unsigned short loopback;
} sync_serial_settings;          

typedef struct {
	unsigned int clock_rate; 
	unsigned int clock_type; 
	unsigned short loopback;
	unsigned int slot_map;
} te1_settings;                  

typedef struct {
	unsigned short encoding;
	unsigned short parity;
} raw_hdlc_proto;

typedef struct {
	unsigned int t391;
	unsigned int t392;
	unsigned int n391;
	unsigned int n392;
	unsigned int n393;
	unsigned short lmi;
	unsigned short dce; 
} fr_proto;

typedef struct {
	unsigned int dlci;
} fr_proto_pvc;          

typedef struct {
	unsigned int dlci;
	char master[16];	
}fr_proto_pvc_info;		

typedef struct {
    unsigned int interval;
    unsigned int timeout;
} cisco_proto;

typedef struct {
	unsigned short dce; 
	unsigned int modulo; 
	unsigned int window; 
	unsigned int t1; 
	unsigned int t2; 
	unsigned int n2; 
} x25_hdlc_proto;


#line 36 "/usr/include/linux/if.h"


#line 39 "/usr/include/linux/if.h"








































enum net_device_flags {

#line 82 "/usr/include/linux/if.h"
	IFF_UP				= 1<<0,  
	IFF_BROADCAST			= 1<<1,  
	IFF_DEBUG			= 1<<2,  
	IFF_LOOPBACK			= 1<<3,  
	IFF_POINTOPOINT			= 1<<4,  
	IFF_NOTRAILERS			= 1<<5,  
	IFF_RUNNING			= 1<<6,  
	IFF_NOARP			= 1<<7,  
	IFF_PROMISC			= 1<<8,  
	IFF_ALLMULTI			= 1<<9,  
	IFF_MASTER			= 1<<10, 
	IFF_SLAVE			= 1<<11, 
	IFF_MULTICAST			= 1<<12, 
	IFF_PORTSEL			= 1<<13, 
	IFF_AUTOMEDIA			= 1<<14, 
	IFF_DYNAMIC			= 1<<15, 
#line 100 "/usr/include/linux/if.h"
	IFF_LOWER_UP			= 1<<16, 
	IFF_DORMANT			= 1<<17, 
	IFF_ECHO			= 1<<18, 
#line 104 "/usr/include/linux/if.h"
};
#line 106 "/usr/include/linux/if.h"


#line 126 "/usr/include/linux/if.h"

#line 132 "/usr/include/linux/if.h"

#line 134 "/usr/include/linux/if.h"

#line 137 "/usr/include/linux/if.h"


#line 146 "/usr/include/linux/if.h"


#line 161 "/usr/include/linux/if.h"


enum {
	IF_OPER_UNKNOWN,
	IF_OPER_NOTPRESENT,
	IF_OPER_DOWN,
	IF_OPER_LOWERLAYERDOWN,
	IF_OPER_TESTING,
	IF_OPER_DORMANT,
	IF_OPER_UP,
};


enum {
	IF_LINK_MODE_DEFAULT,
	IF_LINK_MODE_DORMANT,	
	IF_LINK_MODE_TESTING,	
};












#line 192 "/usr/include/linux/if.h"
struct ifmap {
	unsigned long mem_start;
	unsigned long mem_end;
	unsigned short base_addr; 
	unsigned char irq;
	unsigned char dma;
	unsigned char port;
	
};
#line 202 "/usr/include/linux/if.h"

struct if_settings {
	unsigned int type;	
	unsigned int size;	
	union {
		
		raw_hdlc_proto		*raw_hdlc;
		cisco_proto		*cisco;
		fr_proto		*fr;
		fr_proto_pvc		*fr_pvc;
		fr_proto_pvc_info	*fr_pvc_info;
		x25_hdlc_proto		*x25;

		
		sync_serial_settings	*sync;
		te1_settings		*te1;
	} ifs_ifsu;
};









#line 230 "/usr/include/linux/if.h"
struct ifreq {
#line 232 "/usr/include/linux/if.h"
	union
	{
		char	ifrn_name[16];		
	} ifr_ifrn;
	
	union {
		struct	sockaddr ifru_addr;
		struct	sockaddr ifru_dstaddr;
		struct	sockaddr ifru_broadaddr;
		struct	sockaddr ifru_netmask;
		struct  sockaddr ifru_hwaddr;
		short	ifru_flags;
		int	ifru_ivalue;
		int	ifru_mtu;
		struct  ifmap ifru_map;
		char	ifru_slave[16];	
		char	ifru_newname[16];
		void *	ifru_data;
		struct	if_settings ifru_settings;
	} ifr_ifru;
};
#line 254 "/usr/include/linux/if.h"

#line 272 "/usr/include/linux/if.h"









#line 282 "/usr/include/linux/if.h"
struct ifconf  {
	int	ifc_len;			
	union {
		char *ifcu_buf;
		struct ifreq *ifcu_req;
	} ifc_ifcu;
};
#line 290 "/usr/include/linux/if.h"

#line 293 "/usr/include/linux/if.h"
#line 62 "headers_linux.c"
#line 1 "/usr/include/linux/if_arp.h"























#line 26 "/usr/include/linux/if_arp.h"

#line 1 "/usr/include/linux/netdevice.h"

























#line 28 "/usr/include/linux/netdevice.h"

#line 1 "/usr/include/linux/if.h"


















#line 30 "/usr/include/linux/netdevice.h"
#line 1 "/usr/include/linux/if_ether.h"




















#line 31 "/usr/include/linux/netdevice.h"
#line 1 "/usr/include/linux/if_packet.h"
#line 32 "/usr/include/linux/netdevice.h"
#line 1 "/usr/include/linux/if_link.h"
#line 33 "/usr/include/linux/netdevice.h"


#line 36 "/usr/include/linux/netdevice.h"


#line 39 "/usr/include/linux/netdevice.h"



#line 47 "/usr/include/linux/netdevice.h"


enum {
        IF_PORT_UNKNOWN = 0,
        IF_PORT_10BASE2,
        IF_PORT_10BASET,
        IF_PORT_AUI,
        IF_PORT_100BASET,
        IF_PORT_100BASETX,
        IF_PORT_100BASEFX
};


#line 65 "/usr/include/linux/netdevice.h"
#line 28 "/usr/include/linux/if_arp.h"


#line 45 "/usr/include/linux/if_arp.h"


#line 65 "/usr/include/linux/if_arp.h"

#line 82 "/usr/include/linux/if_arp.h"

#line 87 "/usr/include/linux/if_arp.h"
	
#line 94 "/usr/include/linux/if_arp.h"

#line 102 "/usr/include/linux/if_arp.h"

#line 105 "/usr/include/linux/if_arp.h"


#line 114 "/usr/include/linux/if_arp.h"



struct arpreq {
	struct sockaddr	arp_pa;		
	struct sockaddr	arp_ha;		
	int		arp_flags;	
	struct sockaddr arp_netmask;    
	char		arp_dev[16];
};

struct arpreq_old {
	struct sockaddr	arp_pa;		
	struct sockaddr	arp_ha;		
	int		arp_flags;	
	struct sockaddr	arp_netmask;    
};


#line 140 "/usr/include/linux/if_arp.h"





struct arphdr {
	__be16		ar_hrd;		
	__be16		ar_pro;		
	unsigned char	ar_hln;		
	unsigned char	ar_pln;		
	__be16		ar_op;		

#line 161 "/usr/include/linux/if_arp.h"

};

#line 65 "headers_linux.c"
#line 1 "/usr/include/linux/socket.h"
#line 68 "headers_linux.c"
#line 1 "/usr/include/linux/in.h"


















#line 21 "/usr/include/linux/in.h"

#line 1 "/usr/include/linux/types.h"
#line 23 "/usr/include/linux/in.h"
#line 1 "/usr/include/linux/stddef.h"
#line 24 "/usr/include/linux/in.h"
#line 1 "/usr/include/linux/libc-compat.h"















































#line 25 "/usr/include/linux/in.h"
#line 1 "/usr/include/linux/socket.h"
#line 26 "/usr/include/linux/in.h"

#line 28 "/usr/include/linux/in.h"

enum {
  IPPROTO_IP = 0,		
#line 32 "/usr/include/linux/in.h"
  IPPROTO_ICMP = 1,		
#line 34 "/usr/include/linux/in.h"
  IPPROTO_IGMP = 2,		
#line 36 "/usr/include/linux/in.h"
  IPPROTO_IPIP = 4,		
#line 38 "/usr/include/linux/in.h"
  IPPROTO_TCP = 6,		
#line 40 "/usr/include/linux/in.h"
  IPPROTO_EGP = 8,		
#line 42 "/usr/include/linux/in.h"
  IPPROTO_PUP = 12,		
#line 44 "/usr/include/linux/in.h"
  IPPROTO_UDP = 17,		
#line 46 "/usr/include/linux/in.h"
  IPPROTO_IDP = 22,		
#line 48 "/usr/include/linux/in.h"
  IPPROTO_TP = 29,		
#line 50 "/usr/include/linux/in.h"
  IPPROTO_DCCP = 33,		
#line 52 "/usr/include/linux/in.h"
  IPPROTO_IPV6 = 41,		
#line 54 "/usr/include/linux/in.h"
  IPPROTO_RSVP = 46,		
#line 56 "/usr/include/linux/in.h"
  IPPROTO_GRE = 47,		
#line 58 "/usr/include/linux/in.h"
  IPPROTO_ESP = 50,		
#line 60 "/usr/include/linux/in.h"
  IPPROTO_AH = 51,		
#line 62 "/usr/include/linux/in.h"
  IPPROTO_MTP = 92,		
#line 64 "/usr/include/linux/in.h"
  IPPROTO_BEETPH = 94,		
#line 66 "/usr/include/linux/in.h"
  IPPROTO_ENCAP = 98,		
#line 68 "/usr/include/linux/in.h"
  IPPROTO_PIM = 103,		
#line 70 "/usr/include/linux/in.h"
  IPPROTO_COMP = 108,		
#line 72 "/usr/include/linux/in.h"
  IPPROTO_L2TP = 115,		
#line 74 "/usr/include/linux/in.h"
  IPPROTO_SCTP = 132,		
#line 76 "/usr/include/linux/in.h"
  IPPROTO_UDPLITE = 136,	
#line 78 "/usr/include/linux/in.h"
  IPPROTO_MPLS = 137,		
#line 80 "/usr/include/linux/in.h"
  IPPROTO_ETHERNET = 143,	
#line 82 "/usr/include/linux/in.h"
  IPPROTO_AGGFRAG = 144,	
#line 84 "/usr/include/linux/in.h"
  IPPROTO_RAW = 255,		
#line 86 "/usr/include/linux/in.h"
  IPPROTO_SMC = 256,		
#line 88 "/usr/include/linux/in.h"
  IPPROTO_MPTCP = 262,		
#line 90 "/usr/include/linux/in.h"
  IPPROTO_MAX
};
#line 93 "/usr/include/linux/in.h"

#line 95 "/usr/include/linux/in.h"

struct in_addr {
	__be32	s_addr;
};
#line 100 "/usr/include/linux/in.h"

#line 120 "/usr/include/linux/in.h"


#line 123 "/usr/include/linux/in.h"


#line 127 "/usr/include/linux/in.h"

#line 134 "/usr/include/linux/in.h"


#line 140 "/usr/include/linux/in.h"




#line 145 "/usr/include/linux/in.h"



#line 149 "/usr/include/linux/in.h"

#line 171 "/usr/include/linux/in.h"

#line 174 "/usr/include/linux/in.h"


#line 178 "/usr/include/linux/in.h"



#line 182 "/usr/include/linux/in.h"
struct ip_mreq  {
	struct in_addr imr_multiaddr;	
	struct in_addr imr_interface;	
};

struct ip_mreqn {
	struct in_addr	imr_multiaddr;		
	struct in_addr	imr_address;		
	int		imr_ifindex;		
};

struct ip_mreq_source {
	__be32		imr_multiaddr;
	__be32		imr_interface;
	__be32		imr_sourceaddr;
};

struct ip_msfilter {
	__be32		imsf_multiaddr;
	__be32		imsf_interface;
	__u32		imsf_fmode;
	__u32		imsf_numsrc;
	union {
		__be32		imsf_slist[1];
		struct { 		struct { } __empty_imsf_slist_flex; 		__be32 imsf_slist_flex[]; 	};
	};
};

#line 211 "/usr/include/linux/in.h"

struct group_req {
	__u32				 gr_interface;	
	struct __kernel_sockaddr_storage gr_group;	
};

struct group_source_req {
	__u32				 gsr_interface;	
	struct __kernel_sockaddr_storage gsr_group;	
	struct __kernel_sockaddr_storage gsr_source;	
};

struct group_filter {
	union {
		struct {
			__u32				 gf_interface_aux; 
			struct __kernel_sockaddr_storage gf_group_aux;	   
			__u32				 gf_fmode_aux;	   
			__u32				 gf_numsrc_aux;	   
			struct __kernel_sockaddr_storage gf_slist[1];	   
		};
		struct {
			__u32				 gf_interface;	  
			struct __kernel_sockaddr_storage gf_group;	  
			__u32				 gf_fmode;	  
			__u32				 gf_numsrc;	  
			struct __kernel_sockaddr_storage gf_slist_flex[]; 
		};
	};
};

#line 244 "/usr/include/linux/in.h"

#line 246 "/usr/include/linux/in.h"
struct in_pktinfo {
	int		ipi_ifindex;
	struct in_addr	ipi_spec_dst;
	struct in_addr	ipi_addr;
};
#line 252 "/usr/include/linux/in.h"


#line 256 "/usr/include/linux/in.h"
struct sockaddr_in {
  __kernel_sa_family_t	sin_family;	
  __be16		sin_port;	
  struct in_addr	sin_addr;	

  
  unsigned char		__pad[16 - sizeof(short int) -
			sizeof(unsigned short int) - sizeof(struct in_addr)];
};
#line 267 "/usr/include/linux/in.h"

#line 269 "/usr/include/linux/in.h"





#line 279 "/usr/include/linux/in.h"

#line 285 "/usr/include/linux/in.h"

#line 290 "/usr/include/linux/in.h"

#line 294 "/usr/include/linux/in.h"

#line 297 "/usr/include/linux/in.h"

#line 301 "/usr/include/linux/in.h"


#line 304 "/usr/include/linux/in.h"


#line 307 "/usr/include/linux/in.h"


#line 310 "/usr/include/linux/in.h"


#line 313 "/usr/include/linux/in.h"


#line 316 "/usr/include/linux/in.h"


#line 320 "/usr/include/linux/in.h"


#line 328 "/usr/include/linux/in.h"


#line 1 "/usr/include/asm/byteorder.h"
#line 331 "/usr/include/linux/in.h"

#line 71 "headers_linux.c"
#line 1 "/usr/include/linux/if_tun.h"
















#line 19 "/usr/include/linux/if_tun.h"

#line 1 "/usr/include/linux/types.h"
#line 21 "/usr/include/linux/if_tun.h"
#line 1 "/usr/include/linux/if_ether.h"




















#line 22 "/usr/include/linux/if_tun.h"
#line 1 "/usr/include/linux/filter.h"





#line 8 "/usr/include/linux/filter.h"


#line 1 "/usr/include/linux/types.h"
#line 11 "/usr/include/linux/filter.h"
#line 1 "/usr/include/linux/bpf_common.h"
#line 12 "/usr/include/linux/filter.h"




#line 18 "/usr/include/linux/filter.h"





 
struct sock_filter {	
	__u16	code;   
	__u8	jt;	
	__u8	jf;	
	__u32	k;      
};

struct sock_fprog {	
	unsigned short		len;	
	struct sock_filter *filter;
};


#line 39 "/usr/include/linux/filter.h"


#line 44 "/usr/include/linux/filter.h"




#line 54 "/usr/include/linux/filter.h"




#line 59 "/usr/include/linux/filter.h"






#line 83 "/usr/include/linux/filter.h"

#line 86 "/usr/include/linux/filter.h"

#line 89 "/usr/include/linux/filter.h"
#line 23 "/usr/include/linux/if_tun.h"


#line 26 "/usr/include/linux/if_tun.h"

#line 30 "/usr/include/linux/if_tun.h"


#line 54 "/usr/include/linux/if_tun.h"




#line 64 "/usr/include/linux/if_tun.h"


#line 70 "/usr/include/linux/if_tun.h"

#line 73 "/usr/include/linux/if_tun.h"

#line 80 "/usr/include/linux/if_tun.h"

#line 83 "/usr/include/linux/if_tun.h"


#line 86 "/usr/include/linux/if_tun.h"


#line 95 "/usr/include/linux/if_tun.h"


#line 98 "/usr/include/linux/if_tun.h"





#line 104 "/usr/include/linux/if_tun.h"


#line 107 "/usr/include/linux/if_tun.h"
struct tun_pi {
	__u16  flags;
	__be16 proto;
};









#line 121 "/usr/include/linux/if_tun.h"
struct tun_filter {
	__u16  flags; 
	__u16  count; 
	__u8   addr[1][6];
};
#line 74 "headers_linux.c"
#line 1 "/usr/include/linux/futex.h"

#line 4 "/usr/include/linux/futex.h"


#line 1 "/usr/include/linux/types.h"
#line 7 "/usr/include/linux/futex.h"




#line 25 "/usr/include/linux/futex.h"

#line 29 "/usr/include/linux/futex.h"

#line 43 "/usr/include/linux/futex.h"
















#line 65 "/usr/include/linux/futex.h"
			
			
			
#line 69 "/usr/include/linux/futex.h"

#line 71 "/usr/include/linux/futex.h"


#line 74 "/usr/include/linux/futex.h"






#line 81 "/usr/include/linux/futex.h"




#line 86 "/usr/include/linux/futex.h"








struct futex_waitv {
	__u64 val;
	__u64 uaddr;
	__u32 flags;
	__u32 __reserved;
};















struct robust_list {
	struct robust_list *next;
};









struct robust_list_head {
	


	struct robust_list list;

	





	long futex_offset;

	









	struct robust_list *list_op_pending;
};




#line 158 "/usr/include/linux/futex.h"







#line 166 "/usr/include/linux/futex.h"




#line 171 "/usr/include/linux/futex.h"





#line 177 "/usr/include/linux/futex.h"





#line 183 "/usr/include/linux/futex.h"


#line 190 "/usr/include/linux/futex.h"

#line 192 "/usr/include/linux/futex.h"

#line 199 "/usr/include/linux/futex.h"







#line 207 "/usr/include/linux/futex.h"
#line 77 "headers_linux.c"
#line 78 "headers_linux.c"
}

int test_headers_linux(void)
{
    return 0;
}
