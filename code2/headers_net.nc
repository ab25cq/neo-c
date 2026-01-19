using C
{
#include <arpa/inet.h>
#include <netdb.h>
#include <net/ethernet.h>
#include <netinet/in.h>
#include <netinet/ether.h>
#include <netinet/igmp.h>
#include <netinet/tcp.h>
#include <sys/socket.h>
#include <sys/un.h>
#if __has_include(<ifaddrs.h>)
#include <ifaddrs.h>
#endif
#if __has_include(<net/if.h>)
#include <net/if.h>
#endif
#if __has_include(<netpacket/packet.h>)
#include <netpacket/packet.h>
#endif
#if __has_include(<linux/if_packet.h>)
#include <linux/if_packet.h>
#endif
#if __has_include(<netinet/ip_icmp.h>)
#include <netinet/ip_icmp.h>
#elif __has_include(<netinet/icmp.h>)
#include <netinet/icmp.h>
#endif
#if __has_include(<netinet/ip.h>)
#include <netinet/ip.h>
#endif
#if __has_include(<netinet/ip6.h>)
#include <netinet/ip6.h>
#endif
#if __has_include(<netinet/icmp6.h>)
#include <netinet/icmp6.h>
#endif
#if __has_include(<netinet/udp.h>)
#include <netinet/udp.h>
#endif
#if __has_include(<net/if_arp.h>)
#include <net/if_arp.h>
#endif
}

int test_headers_net(void)
{
    return 0;
}
