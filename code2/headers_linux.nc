using C
{
#if __has_include(<linux/types.h>)
#include <linux/types.h>
#endif
#if __has_include(<linux/stddef.h>)
#include <linux/stddef.h>
#endif
#if __has_include(<linux/errno.h>)
#include <linux/errno.h>
#endif
#if __has_include(<linux/kernel.h>)
#include <linux/kernel.h>
#endif
#if __has_include(<linux/limits.h>)
#include <linux/limits.h>
#endif
#if __has_include(<linux/unistd.h>)
#include <linux/unistd.h>
#endif
#if __has_include(<linux/stat.h>)
#include <linux/stat.h>
#endif
#if __has_include(<linux/fcntl.h>)
#include <linux/fcntl.h>
#endif
#if __has_include(<linux/ioctl.h>)
#include <linux/ioctl.h>
#endif
#if __has_include(<linux/uio.h>)
#include <linux/uio.h>
#endif
#if __has_include(<linux/time.h>)
#include <linux/time.h>
#endif
#if __has_include(<linux/netlink.h>)
#include <linux/netlink.h>
#endif
#if __has_include(<linux/rtnetlink.h>)
#include <linux/rtnetlink.h>
#endif
#if __has_include(<linux/genetlink.h>)
#include <linux/genetlink.h>
#endif
#if __has_include(<linux/netfilter/nfnetlink.h>)
#include <linux/netfilter/nfnetlink.h>
#endif
#if __has_include(<linux/bpf.h>)
#include <linux/bpf.h>
#endif
#if __has_include(<linux/perf_event.h>)
#include <linux/perf_event.h>
#endif
#if __has_include(<linux/if_packet.h>)
#include <linux/if_packet.h>
#endif
#if __has_include(<linux/if_ether.h>)
#include <linux/if_ether.h>
#endif
#if __has_include(<linux/if.h>)
#include <linux/if.h>
#endif
#if __has_include(<linux/if_arp.h>)
#include <linux/if_arp.h>
#endif
#if __has_include(<linux/socket.h>)
#include <linux/socket.h>
#endif
#if __has_include(<linux/in.h>)
#include <linux/in.h>
#endif
#if __has_include(<linux/if_tun.h>)
#include <linux/if_tun.h>
#endif
#if __has_include(<linux/futex.h>)
#include <linux/futex.h>
#endif
}

int test_headers_linux(void)
{
    return 0;
}
