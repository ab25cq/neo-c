// Demonstrates basic GNU inline assembly on x86_64 and AArch64.
// Falls back to pure C on other architectures so the sample still runs.

#include <stdio.h>
#include <stdint.h>

static int add_with_inline_asm(int a, int b) {
#if defined(__x86_64__) || defined(__i386__)
    int sum = a;
    __asm__ volatile("addl %1, %0"
                     : "+r"(sum)
                     : "r"(b)
                     : "cc");
 
    return sum;
#elif defined(__aarch64__)
    int sum = a;
    __asm__ volatile("add %w0, %w0, %w1"
                     : "+r"(sum)
                     : "r"(b)
                     : "cc");
printf("add_with_inline_asm sum %d\n", sum);
    return sum;
#else
    return a + b; // fallback when arch is unknown
#endif
}

static uint32_t mask_and_set(uint32_t value, uint32_t mask) {
#if defined(__x86_64__) || defined(__i386__)
    __asm__ volatile("andl %1, %0\n\t"
                     "orl $0x100, %0"
                     : "+r"(value)
                     : "r"(mask)
                     : "cc");
    return value;
#elif defined(__aarch64__)
    __asm__ volatile("and %w0, %w0, %w1\n"
                     "orr %w0, %w0, #0x100"
                     : "+r"(value)
                     : "r"(mask)
                     : "cc");
printf("mask_and_set value %x\n", ((value & mask) | 0x100u));
printf("mask_and_set value %x\n", value);
    return value;
#else
    return (value & mask) | 0x100u;
#endif
}

// Empty asm with a "memory" clobber acts as a compiler barrier.
static void store_with_barrier(int *dst, int v) {
    __asm__ volatile("" ::: "memory");
    *dst = v;
    __asm__ volatile("" ::: "memory");
}

static int expect_u32(const char *label, uint32_t expect, uint32_t got) {
    if (expect != got) {
        printf("FAIL %s expected=0x%x got=0x%x\n", label, expect, got);
        return 1;
    }
    return 0;
}

int main(void) {
    int fails = 0;
    fails |= expect_u32("add_with_inline_asm", 12u, (uint32_t)add_with_inline_asm(5, 7));

    uint32_t v = 0x1F2u;
    fails |= expect_u32("mask_and_set", 0x1f2u, mask_and_set(v, 0xFFu));

    int stored = 0;
    store_with_barrier(&stored, 42);
    fails |= expect_u32("store_with_barrier", 42u, (uint32_t)stored);

#if !defined(__x86_64__) && !defined(__i386__) && !defined(__aarch64__)
    puts("[inline_asm] arch not recognized, used C fallback");
#endif

    if (fails == 0) {
        puts("[inline_asm] OK");
    }
    return fails ? 1 : 0;
}
