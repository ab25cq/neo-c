using C
{
#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>

#if __has_include(<arpa/inet.h>)
#include <arpa/inet.h>
#endif
#if __has_include(<arpa/nameser.h>)
#include <arpa/nameser.h>
#endif
#if __has_include(<arpa/telnet.h>)
#include <arpa/telnet.h>
#endif
#if __has_include(<arpa/tftp.h>)
#include <arpa/tftp.h>
#endif

#if __has_include(<gnu/libc-version.h>)
#include <gnu/libc-version.h>
#endif
#if __has_include(<gnu/lib-names.h>)
#include <gnu/lib-names.h>
#endif

#if __has_include(<ncurses/ncurses.h>)
#include <ncurses/ncurses.h>
#endif
#if __has_include(<ncurses/form.h>)
#include <ncurses/form.h>
#endif
#if __has_include(<ncurses/menu.h>)
#include <ncurses/menu.h>
#endif
#if __has_include(<ncurses/panel.h>)
#include <ncurses/panel.h>
#endif
#if __has_include(<ncurses/term.h>)
#include <ncurses/term.h>
#endif
#if __has_include(<ncursesw/ncurses.h>)
#include <ncursesw/ncurses.h>
#endif
#if __has_include(<ncursesw/form.h>)
#include <ncursesw/form.h>
#endif
#if __has_include(<ncursesw/menu.h>)
#include <ncursesw/menu.h>
#endif
#if __has_include(<ncursesw/panel.h>)
#include <ncursesw/panel.h>
#endif
#if __has_include(<ncursesw/term.h>)
#include <ncursesw/term.h>
#endif

#if __has_include(<net/if_ppp.h>)
#include <net/if_ppp.h>
#endif
#if __has_include(<net/if_shaper.h>)
#include <net/if_shaper.h>
#endif
#if __has_include(<net/if_slip.h>)
#include <net/if_slip.h>
#endif
#if __has_include(<net/ppp-comp.h>)
#include <net/ppp-comp.h>
#endif
#if __has_include(<net/ppp_defs.h>)
#include <net/ppp_defs.h>
#endif
#if __has_include(<net/route.h>)
#include <net/route.h>
#endif

#if __has_include(<netinet/if_ether.h>)
#include <netinet/if_ether.h>
#endif
#if __has_include(<netinet/if_fddi.h>)
#include <netinet/if_fddi.h>
#endif
#if __has_include(<netinet/if_tr.h>)
#include <netinet/if_tr.h>
#endif
#if __has_include(<netinet/in_systm.h>)
#include <netinet/in_systm.h>
#endif

#if __has_include(<netash/ash.h>)
#include <netash/ash.h>
#endif
#if __has_include(<netatalk/at.h>)
#include <netatalk/at.h>
#endif
#if __has_include(<netax25/ax25.h>)
#include <netax25/ax25.h>
#endif
#if __has_include(<neteconet/ec.h>)
#include <neteconet/ec.h>
#endif
#if __has_include(<netipx/ipx.h>)
#include <netipx/ipx.h>
#endif
#if __has_include(<netiucv/iucv.h>)
#include <netiucv/iucv.h>
#endif
#if __has_include(<netrom/netrom.h>)
#include <netrom/netrom.h>
#endif
#if __has_include(<netrose/rose.h>)
#include <netrose/rose.h>
#endif

#if __has_include(<protocols/routed.h>)
#include <protocols/routed.h>
#endif
#if __has_include(<protocols/rwhod.h>)
#include <protocols/rwhod.h>
#endif
#if __has_include(<protocols/talkd.h>)
#include <protocols/talkd.h>
#endif
#if __has_include(<protocols/timed.h>)
#include <protocols/timed.h>
#endif

#if __has_include(<rpc/netdb.h>)
#include <rpc/netdb.h>
#endif

#if __has_include(<readline/readline.h>)
#include <readline/readline.h>
#endif
#if __has_include(<readline/history.h>)
#include <readline/history.h>
#endif
#if __has_include(<readline/tilde.h>)
#include <readline/tilde.h>
#endif

#if __has_include(<openssl/ssl.h>)
#include <openssl/ssl.h>
#endif
#if __has_include(<openssl/err.h>)
#include <openssl/err.h>
#endif
#if __has_include(<openssl/evp.h>)
#include <openssl/evp.h>
#endif
#if __has_include(<openssl/x509.h>)
#include <openssl/x509.h>
#endif
#if __has_include(<openssl/rand.h>)
#include <openssl/rand.h>
#endif
#if __has_include(<openssl/crypto.h>)
#include <openssl/crypto.h>
#endif

#if __has_include(<nfs/nfs.h>)
#include <nfs/nfs.h>
#endif

#if __has_include(<scsi/scsi.h>)
#include <scsi/scsi.h>
#endif
#if __has_include(<scsi/sg.h>)
#include <scsi/sg.h>
#endif
#if __has_include(<scsi/scsi_ioctl.h>)
#include <scsi/scsi_ioctl.h>
#endif

#if __has_include(<sound/asound.h>)
#include <sound/asound.h>
#endif
#if __has_include(<sound/asequencer.h>)
#include <sound/asequencer.h>
#endif
#if __has_include(<sound/tlv.h>)
#include <sound/tlv.h>
#endif

#if __has_include(<video/edid.h>)
#include <video/edid.h>
#endif
#if __has_include(<video/uvesafb.h>)
#include <video/uvesafb.h>
#endif

#if __has_include(<drm/drm.h>)
#include <drm/drm.h>
#endif
#if __has_include(<drm/drm_mode.h>)
#include <drm/drm_mode.h>
#endif

#if __has_include(<rdma/rdma_user_cm.h>)
#include <rdma/rdma_user_cm.h>
#endif
#if __has_include(<rdma/rdma_netlink.h>)
#include <rdma/rdma_netlink.h>
#endif

#if __has_include(<mtd/mtd-abi.h>)
#include <mtd/mtd-abi.h>
#endif
#if __has_include(<mtd/mtd-user.h>)
#include <mtd/mtd-user.h>
#endif
#if __has_include(<mtd/ubi-user.h>)
#include <mtd/ubi-user.h>
#endif

#if __has_include(<regulator/regulator.h>)
#include <regulator/regulator.h>
#endif

#if __has_include(<xen/interface/xen.h>)
#if __has_include(<xen/evtchn.h>)
#include <xen/evtchn.h>
#endif
#if __has_include(<xen/gntdev.h>)
#include <xen/gntdev.h>
#endif
#if __has_include(<xen/privcmd.h>)
#include <xen/privcmd.h>
#endif
#endif

#if __has_include(<cxl/features.h>)
#include <cxl/features.h>
#endif
#if __has_include(<fwctl/fwctl.h>)
#include <fwctl/fwctl.h>
#endif
}

int test_headers_subdir(void)
{
    return 0;
}
