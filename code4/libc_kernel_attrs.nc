// libc/kernel-style attribute keywords (non-__attribute__ forms)
__cold __used __maybe_unused __noinline __always_inline __flatten __leaf __deprecated __warn_unused_result __returns_nonnull
__section(".text.kernel") __aligned(16) __visibility("hidden") __alias("f_kernel_alias") __weak
int f_kernel_attrs(int a)
{
    return a;
}

__init int f_init(void)
{
    return 0;
}

struct __packed SK1 { int a; };
struct SK2 { int a; } __aligned(8);

int gv_kernel __section(".data") __used;
int gv_read_mostly __read_mostly;
