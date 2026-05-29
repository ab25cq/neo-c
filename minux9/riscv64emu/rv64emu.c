// Minimal RV64I(+W) emulator in standard C (C11)
// - Flat memory, little-endian
// - ELF64 loader (PT_LOAD only) or raw loader
// - ECALL halts and returns a0 as exit code
// - Optional SV39 MMU (very small subset)
// - No interrupts, no full CSR set, no compressed (C) extension
//
// Summary:
// - Minimal RV64I (+W) emulator implementation (C11)
// - Emulates a single flat little-endian memory space
// - Can load ELF64 (PT_LOAD only) or raw binaries
// - Execution halts on ecall and returns a0 as the process exit code
// - No MMU/interrupts/CSR set/compressed (C) extension support

#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <inttypes.h>
#include <errno.h>
#include <termios.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>

#define TLB_SIZE 256
#define TLB_PERM_R 0x1
#define TLB_PERM_W 0x2
#define TLB_PERM_X 0x4
#define TLB_PERM_U 0x8

typedef struct {
    uint64_t tag;
    uint64_t pa_base;
    uint16_t asid;
    uint8_t perms;
    uint8_t valid;
} tlb_entry_t;

#define EM_RISCV 243

typedef struct {
    uint64_t pc;
    uint64_t x[32]; // x0..x31, x0 is hardwired to 0
    bool halt;
    uint64_t exit_code;
    // CSRs for full system operation
    uint64_t csr_satp;     // Address translation
    uint64_t csr_mstatus;  // Machine status
    uint64_t csr_mtvec;    // Machine trap-handler base address
    uint64_t csr_mepc;     // Machine exception program counter
    uint64_t csr_mcause;   // Machine trap cause
    uint64_t csr_mtval;    // Machine bad address or instruction
    uint64_t csr_mie;      // Machine interrupt enable
    uint64_t csr_mip;      // Machine interrupt pending
    uint64_t csr_mideleg;  // Machine interrupt delegation
    uint64_t csr_medeleg;  // Machine exception delegation
    uint64_t csr_sstatus;  // Supervisor status
    uint64_t csr_stvec;    // Supervisor trap-handler base address
    uint64_t csr_sepc;     // Supervisor exception program counter
    uint64_t csr_scause;   // Supervisor trap cause
    uint64_t csr_stval;    // Supervisor bad address or instruction
    uint64_t csr_sie;      // Supervisor interrupt enable
    uint64_t csr_sip;      // Supervisor interrupt pending
    uint64_t csr_sscratch; // Supervisor scratch register (0x140)
    uint64_t csr_custom51; // Custom CSR 0x51
    uint64_t csr_time;     // Time counter (0xC01) - read-only shadow of mtime
    uint64_t csr_menvcfg;  // Machine environment configuration (0x30a)
    uint64_t csr_mcounteren; // Machine counter enable (0x306)
    uint64_t csr_stimecmp; // Supervisor timer compare (0x14d)
    // Privilege level: 0=U, 1=S, 3=M
    int priv;
    // Trap handling state
    bool pending_interrupt;
    uint64_t interrupt_cause;
    // LR/SC (Load-Reserved/Store-Conditional) support
    bool lr_valid;
    uint64_t lr_addr;
    // Simple direct-mapped TLB for Sv39 address translation
    tlb_entry_t tlb[TLB_SIZE];
} cpu_t;

typedef struct {
    uint8_t *data;
    uint64_t size;
    uint64_t base; // base physical address
    // Flat memory region allocated on the host (base physical address at base)
} mem_t;

#define VIRTIO_MMIO_BASE0  0x10001000ULL
#define VIRTIO_MMIO_STRIDE 0x00001000ULL
#define VIRTIO_MAX_SLOTS   8
#define VIRTIO_SECTOR_SIZE 512
#define VIRTIO_QNUM_MAX    128

#define VIRTIO_R_MAGIC            0x000
#define VIRTIO_R_VERSION          0x004
#define VIRTIO_R_DEVICE_ID        0x008
#define VIRTIO_R_VENDOR_ID        0x00c
#define VIRTIO_R_DEVICE_FEATURES  0x010
#define VIRTIO_R_DRIVER_FEATURES  0x020
#define VIRTIO_R_GPAGE_SZ         0x028
#define VIRTIO_R_Q_SEL            0x030
#define VIRTIO_R_Q_NUM_MAX        0x034
#define VIRTIO_R_Q_NUM            0x038   // Driver uses this for both qnum and align
#define VIRTIO_R_Q_ALIGN          0x038
#define VIRTIO_R_Q_PFN            0x040
#define VIRTIO_R_Q_READY          0x044
#define VIRTIO_R_Q_NOTIFY         0x050
#define VIRTIO_R_STATUS           0x070
#define VIRTIO_R_CONFIG           0x100

typedef struct {
    bool present;
    uint64_t base;
    uint32_t qnum_max;
    uint32_t queue_sel;
    uint32_t queue_num;
    uint32_t queue_align;
    uint32_t queue_pfn;
    uint32_t gpage_sz;
    uint32_t status;
    uint32_t driver_features;
    uint16_t last_avail_idx;
    FILE *disk;
    uint64_t disk_size;
} virtio_blk_t;

#define UART_PLIC_IRQ 10
#define CLINT_MTIME_FREQ 10000000ULL

// Device I/O structure
typedef struct {
    uint64_t uart_base;  // UART base address
    uint8_t uart_thr;    // Transmit holding register
    uint8_t uart_rbr;    // Receive buffer register
    uint8_t uart_lsr;    // Line status register
    uint8_t uart_ier;    // Interrupt enable register
    bool uart_thr_empty; // THR empty flag
    bool uart_rx_ready;  // RX data ready flag
    uint64_t uart_write_count; // Count of UART writes
    // CLINT (Core-Local Interrupt Controller)
    uint64_t clint_base;
    uint64_t mtime;      // Machine time
    uint64_t mtimecmp;   // Machine time comparison
    struct timespec mtime_start;
    int64_t mtime_offset;

    // PLIC (Platform-Level Interrupt Controller)
    uint64_t plic_base;
    uint32_t plic_priority[32];  // Interrupt priorities
    uint32_t plic_pending;       // Pending interrupts
    uint32_t plic_menable;       // Machine mode enable
    uint32_t plic_mpriority;     // Machine mode priority threshold
    uint32_t plic_claim_value;

    // Interrupt statistics
    uint64_t timer_interrupt_count;
    uint64_t external_interrupt_count;

    // Virtio block device (legacy MMIO) backed by a host file
    virtio_blk_t vblk;
} devices_t;

static void virtio_blk_reset_state(virtio_blk_t *blk);
static bool virtio_blk_open(virtio_blk_t *blk, const char *path);
static uint32_t virtio_blk_reg_read(devices_t *dev, uint64_t addr);
static void virtio_blk_reg_write(mem_t *mem, devices_t *dev, uint64_t addr, uint32_t val);
static void virtio_blk_process_queue(mem_t *mem, devices_t *dev);

// Mark that cpu_t, mem_t, devices_t are defined
#define CPU_T_DEFINED

typedef enum {
    ACCESS_FETCH,
    ACCESS_LOAD,
    ACCESS_STORE,
} access_t;

typedef struct {
    uint32_t raw;
    uint32_t opcode, rd, rs1, rs2, funct3, funct7;
    int64_t imm_i, imm_s, imm_b, imm_u, imm_j;
} dec_t;

// MMU / address translation helpers (SV39)

// Global debug counters
static int g_vtp_debug_count = 0;
static int g_sv39_debug_count = 0;

static inline uint64_t satp_mode(uint64_t satp) { return (satp >> 60) & 0xF; }
static inline uint64_t satp_asid(uint64_t satp) { return (satp >> 44) & 0xFFFF; }
static inline uint64_t satp_ppn(uint64_t satp)  { return satp & ((1ULL<<44)-1); }

typedef struct {
    bool trace;
    uint64_t max_steps; // 0 = unlimited
} run_opts_t;

// Global pointer to current CPU for debug output
static cpu_t *g_debug_cpu = NULL;
static uint64_t g_step_counter = 0;

// PC history for debugging
#define PC_HISTORY_SIZE 50
static uint64_t g_pc_history[PC_HISTORY_SIZE];
static int g_pc_history_idx = 0;

static inline uint64_t sext64(uint64_t val, int bits) {
    uint64_t m = 1ULL << (bits - 1);
    return (val ^ m) - m;
}
// Sign-extend using the given bit width to 64 bits.

static inline uint16_t get16le(const void *p) {
    const uint8_t *b = (const uint8_t*)p;
    return (uint16_t)b[0] | ((uint16_t)b[1] << 8);
}

static inline uint32_t get32le(const void *p) {
    const uint8_t *b = (const uint8_t*)p;
    return (uint32_t)b[0] | ((uint32_t)b[1] << 8) | ((uint32_t)b[2] << 16) | ((uint32_t)b[3] << 24);
}
// Helper to read a little-endian 32-bit value.

static inline uint64_t get64le(const void *p) {
    const uint8_t *b = (const uint8_t*)p;
    return (uint64_t)b[0] | ((uint64_t)b[1] << 8) | ((uint64_t)b[2] << 16) | ((uint64_t)b[3] << 24)
        | ((uint64_t)b[4] << 32) | ((uint64_t)b[5] << 40) | ((uint64_t)b[6] << 48) | ((uint64_t)b[7] << 56);
}
// Helper to read a little-endian 64-bit value.

static inline void put16le(void *p, uint16_t v) {
    uint8_t *b = (uint8_t*)p;
    b[0] = (uint8_t)(v & 0xff);
    b[1] = (uint8_t)((v >> 8) & 0xff);
}

static inline void put32le(void *p, uint32_t v) {
    uint8_t *b = (uint8_t*)p;
    b[0] = (uint8_t)(v & 0xff);
    b[1] = (uint8_t)((v >> 8) & 0xff);
    b[2] = (uint8_t)((v >> 16) & 0xff);
    b[3] = (uint8_t)((v >> 24) & 0xff);
}

static inline void put64le(void *p, uint64_t v) {
    uint8_t *b = (uint8_t*)p;
    b[0] = (uint8_t)(v & 0xff);
    b[1] = (uint8_t)((v >> 8) & 0xff);
    b[2] = (uint8_t)((v >> 16) & 0xff);
    b[3] = (uint8_t)((v >> 24) & 0xff);
    b[4] = (uint8_t)((v >> 32) & 0xff);
    b[5] = (uint8_t)((v >> 40) & 0xff);
    b[6] = (uint8_t)((v >> 48) & 0xff);
    b[7] = (uint8_t)((v >> 56) & 0xff);
}

static void mem_init(mem_t *m, uint64_t size, uint64_t base) {
    m->data = (uint8_t*)calloc(1, size);
    if (!m->data) {
        fprintf(stderr, "mem alloc failed (%" PRIu64 " bytes)\n", size);
        exit(1);
    }
    m->size = size;
    m->base = base;
}

// Device initialization
static void devices_init(devices_t *dev, const char *disk_path) {
    dev->uart_base = 0x10000000ULL;  // UART0 base address from MINUX9
    dev->uart_thr = 0;
    dev->uart_rbr = 0;
    dev->uart_lsr = 0x60;  // THR empty and transmitter empty
    dev->uart_thr_empty = true;
    dev->uart_rx_ready = false;
    dev->uart_write_count = 0;

    // CLINT (Core-Local Interrupt Controller) - MINUX9 addresses
    dev->clint_base = 0x02000000ULL;  // CLINT base address for MINUX9
    dev->mtime = 0;
    // Set mtimecmp to max to disable timer interrupts initially
    // Kernel will enable timer by writing to stimecmp in timerinit()
    dev->mtimecmp = UINT64_MAX;

    // PLIC (Platform-Level Interrupt Controller)
    dev->plic_base = 0x0c000000ULL;  // PLIC base address (QEMU virt: 0x0c000000)
    for (int i = 0; i < 32; i++) {
        dev->plic_priority[i] = 0;
    }
    dev->plic_pending = 0;
    dev->plic_menable = 0;
    dev->plic_mpriority = 0;
    dev->plic_claim_value = 0;

    // Interrupt statistics
    dev->timer_interrupt_count = 0;
    dev->external_interrupt_count = 0;

    clock_gettime(CLOCK_MONOTONIC, &dev->mtime_start);
    dev->mtime_offset = 0;
    dev->uart_ier = 0;

    dev->vblk.base = VIRTIO_MMIO_BASE0;
    dev->vblk.qnum_max = VIRTIO_QNUM_MAX;
    dev->vblk.present = virtio_blk_open(&dev->vblk, disk_path);
}

static uint64_t clint_elapsed_ticks(const devices_t *dev) {
    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC, &now);
    time_t sec = now.tv_sec - dev->mtime_start.tv_sec;
    long nsec = now.tv_nsec - dev->mtime_start.tv_nsec;
    if (nsec < 0) {
        sec -= 1;
        nsec += 1000000000L;
    }
    uint64_t ns = (uint64_t)sec * 1000000000ULL + (uint64_t)nsec;
    return ns / (1000000000ULL / CLINT_MTIME_FREQ);
}

static void clint_update_mtime(devices_t *dev) {
    uint64_t elapsed = clint_elapsed_ticks(dev);
    if (dev->mtime_offset >= 0) {
        dev->mtime = elapsed + (uint64_t)dev->mtime_offset;
    } else {
        uint64_t neg = (uint64_t)(-dev->mtime_offset);
        dev->mtime = (elapsed > neg) ? (elapsed - neg) : 0;
    }
}

static void clint_sync_offset(devices_t *dev) {
    uint64_t elapsed = clint_elapsed_ticks(dev);
    dev->mtime_offset = (int64_t)dev->mtime - (int64_t)elapsed;
}

static inline void plic_raise_irq(devices_t *dev, uint32_t irq) {
    if (irq == 0 || irq >= 32) return;
    dev->plic_pending |= (1u << irq);
}

static bool plic_irq_pending(const devices_t *dev) {
    uint32_t enabled = dev->plic_menable;
    uint32_t pending = dev->plic_pending & enabled;
    if (!pending) return false;
    uint32_t threshold = dev->plic_mpriority;
    for (uint32_t irq = 1; irq < 32; ++irq) {
        if (!(pending & (1u << irq))) continue;
        uint32_t pri = dev->plic_priority[irq];
        if (pri > threshold && pri != 0) {
            return true;
        }
    }
    return false;
}

static uint32_t plic_claim(devices_t *dev) {
    uint32_t enabled = dev->plic_menable;
    uint32_t pending = dev->plic_pending & enabled;
    uint32_t threshold = dev->plic_mpriority;
    uint32_t best_irq = 0;
    uint32_t best_prio = 0;
    for (uint32_t irq = 1; irq < 32; ++irq) {
        if (!(pending & (1u << irq))) continue;
        uint32_t prio = dev->plic_priority[irq];
        if (prio == 0 || prio <= threshold) continue;
        if (prio > best_prio || (prio == best_prio && irq < best_irq)) {
            best_prio = prio;
            best_irq = irq;
        }
    }
    if (best_irq) {
        dev->plic_pending &= ~(1u << best_irq);
    }
    return best_irq;
}


// Device I/O handlers
static bool is_device_addr(const devices_t *dev, uint64_t addr) {
    return (addr >= dev->uart_base && addr < dev->uart_base + 0x100) ||
           (addr >= dev->clint_base && addr < dev->clint_base + 0x1000000) ||
           (addr >= dev->plic_base && addr < dev->plic_base + 0x4000000) ||
           (addr >= dev->vblk.base && addr < dev->vblk.base + VIRTIO_MMIO_STRIDE * VIRTIO_MAX_SLOTS);
}

static uint8_t device_read8(devices_t *dev, uint64_t addr) {
    if (addr >= dev->vblk.base && addr < dev->vblk.base + VIRTIO_MMIO_STRIDE * VIRTIO_MAX_SLOTS) {
        uint32_t v = virtio_blk_reg_read(dev, addr);
        return (v >> (8 * (addr & 3))) & 0xFF;
    } else if (addr >= dev->uart_base && addr < dev->uart_base + 0x100) {
        uint64_t offset = addr - dev->uart_base;
        switch (offset) {
            case 0x00: // RBR - Receiver Buffer Register
                if (dev->uart_rx_ready) {
                    uint8_t ch = dev->uart_rbr;
                    dev->uart_rx_ready = false;
                    dev->uart_lsr &= ~0x01; // Clear RX_READY bit
                    return ch;
                }
                return 0;
            case 0x05: // LSR - Line Status Register
                // Update LSR based on RX ready state
                if (dev->uart_rx_ready) {
                    dev->uart_lsr |= 0x01; // Set RX_READY bit
                } else {
                    dev->uart_lsr &= ~0x01; // Clear RX_READY bit
                }
                return dev->uart_lsr;
            default:
                return 0;
        }
    } else if (addr >= dev->clint_base && addr < dev->clint_base + 0x1000000) {
        uint64_t offset = addr - dev->clint_base;
        // CLINT memory map: mtimecmp at 0x4000, mtime at 0xbff8
        if (offset >= 0x4000 && offset < 0x4008) {
            // mtimecmp register (64-bit)
            uint8_t byte_offset = offset - 0x4000;
            return (dev->mtimecmp >> (byte_offset * 8)) & 0xFF;
        } else if (offset >= 0xbff8 && offset < 0xc000) {
            // mtime register (64-bit)
            uint8_t byte_offset = offset - 0xbff8;
            clint_update_mtime(dev);
            return (dev->mtime >> (byte_offset * 8)) & 0xFF;
        }
        return 0;
    } else if (addr >= dev->plic_base && addr < dev->plic_base + 0x4000000) {
        uint64_t offset = addr - dev->plic_base;
        // PLIC memory map
        if (offset < 0x1000) {
            // Priority registers (0x000000 - 0x000FFF)
            uint32_t irq = offset / 4;
            if (irq < 32) {
                return (dev->plic_priority[irq] >> ((offset & 3) * 8)) & 0xFF;
            }
        } else if (offset >= 0x1000 && offset < 0x2000) {
            // Pending bits (0x001000 - 0x001FFF)
            return (dev->plic_pending >> ((offset & 3) * 8)) & 0xFF;
        } else if (offset >= 0x2000 && offset < 0x200000) {
            // Enable bits (0x002000 - 0x1FFFFF)
            return (dev->plic_menable >> ((offset & 3) * 8)) & 0xFF;
        } else if (offset >= 0x200000 && offset < 0x4000000) {
            // Priority threshold and claim/complete (0x200000 - 0x3FFFFFF)
            uint64_t ctx_offset = offset - 0x200000;
            uint64_t context_reg = ctx_offset % 0x1000;
            if (context_reg == 0) {
                // Priority threshold
                uint8_t byte_offset = ctx_offset & 3;
                return (dev->plic_mpriority >> (byte_offset * 8)) & 0xFF;
            } else if (context_reg == 4) {
                uint8_t byte_offset = ctx_offset & 3;
                if (byte_offset == 0) {
                    dev->plic_claim_value = plic_claim(dev);
                }
                return (dev->plic_claim_value >> (byte_offset * 8)) & 0xFF;
            }
        }
        return 0;
    }
    return 0;
}

static void device_write8(mem_t *mem, devices_t *dev, uint64_t addr, uint8_t val) {
    if (addr >= dev->vblk.base && addr < dev->vblk.base + VIRTIO_MMIO_STRIDE * VIRTIO_MAX_SLOTS) {
        uint64_t aligned = addr & ~0x3ULL;
        uint32_t cur = virtio_blk_reg_read(dev, aligned);
        uint32_t shift = (addr & 3) * 8;
        uint32_t mask = ~(0xFFu << shift);
        uint32_t newv = (cur & mask) | ((uint32_t)val << shift);
        virtio_blk_reg_write(mem, dev, aligned, newv);
        return;
    } else if (addr >= dev->uart_base && addr < dev->uart_base + 0x100) {
        uint64_t offset = addr - dev->uart_base;
        switch (offset) {
            case 0x00: // THR - Transmit Holding Register
                dev->uart_thr = val;
                dev->uart_write_count++;
                fputc(val, stdout);  // Output to stdout for normal operation
                fflush(stdout);
                dev->uart_lsr |= 0x20;  // Set THR empty bit
                break;
            case 0x01: // IER - Interrupt Enable Register
                dev->uart_ier = val;
                break;
            default:
                break;
        }
    } else if (addr >= dev->clint_base && addr < dev->clint_base + 0x1000000) {
        uint64_t offset = addr - dev->clint_base;
        // CLINT memory map: mtimecmp at 0x4000, mtime at 0xbff8
        if (offset >= 0x4000 && offset < 0x4008) {
            // mtimecmp register (64-bit) - write to specific byte
            uint8_t byte_offset = offset - 0x4000;
            uint64_t mask = ~(0xFFULL << (byte_offset * 8));
            dev->mtimecmp = (dev->mtimecmp & mask) | ((uint64_t)val << (byte_offset * 8));
            fprintf(stderr, "CLINT: mtimecmp write at offset 0x%lx, byte_offset=%d, val=0x%02x, new mtimecmp=0x%016" PRIx64 "\n",
                    (unsigned long)offset, byte_offset, val, dev->mtimecmp);
        } else if (offset >= 0xbff8 && offset < 0xc000) {
            // mtime register (64-bit) - usually read-only, but allow writes for debugging
            uint8_t byte_offset = offset - 0xbff8;
            uint64_t mask = ~(0xFFULL << (byte_offset * 8));
            dev->mtime = (dev->mtime & mask) | ((uint64_t)val << (byte_offset * 8));
            fprintf(stderr, "CLINT: mtime write at offset 0x%lx, byte_offset=%d, val=0x%02x, new mtime=0x%016" PRIx64 "\n",
                    (unsigned long)offset, byte_offset, val, dev->mtime);
            clint_sync_offset(dev);
        } else {
            // Silently ignore other CLINT writes
        }
    } else if (addr >= dev->plic_base && addr < dev->plic_base + 0x4000000) {
        uint64_t offset = addr - dev->plic_base;
        // PLIC memory map
        if (offset < 0x1000) {
            // Priority registers (0x000000 - 0x000FFF)
            uint32_t irq = offset / 4;
            if (irq < 32) {
                uint8_t byte_offset = offset & 3;
                uint32_t mask = ~(0xFFU << (byte_offset * 8));
                dev->plic_priority[irq] = (dev->plic_priority[irq] & mask) | ((uint32_t)val << (byte_offset * 8));
            }
        } else if (offset >= 0x2000 && offset < 0x200000) {
            // Enable bits (0x002000 - 0x1FFFFF)
            uint8_t byte_offset = offset & 3;
            uint32_t mask = ~(0xFFU << (byte_offset * 8));
            dev->plic_menable = (dev->plic_menable & mask) | ((uint32_t)val << (byte_offset * 8));
        } else if (offset >= 0x200000 && offset < 0x4000000) {
            // Priority threshold and claim/complete (0x200000 - 0x3FFFFFF)
            uint64_t ctx_offset = offset - 0x200000;
            uint64_t context_reg = ctx_offset % 0x1000;
            if (context_reg == 0) {
                uint8_t byte_offset = ctx_offset & 3;
                uint32_t mask = ~(0xFFU << (byte_offset * 8));
                dev->plic_mpriority = (dev->plic_mpriority & mask) | ((uint32_t)val << (byte_offset * 8));
            } else if (context_reg == 4) {
                // Claim/complete register - acknowledge interrupt (value ignored)
                dev->plic_claim_value = 0;
            }
        }
    }
}
// Allocate and initialize the flat memory region

static inline bool mem_in_range(const mem_t *m, uint64_t addr, uint64_t len) {
    // Allow access to low memory (0x0 - 0x1000) for page tables and interrupt vectors
    if (addr < 0x1000) return true;
    if (addr < m->base) return false;
    uint64_t off = addr - m->base;
    return off + len <= m->size;
}
// Check whether the specified address range lies within the memory region

static void mem_oob(const mem_t *m, uint64_t addr, uint64_t len, const char *what) {
    fprintf(stderr, "%s OOB @0x%016" PRIx64 " (len=0x%llx, base=0x%016" PRIx64 ", size=0x%016" PRIx64 ")\n",
            what, addr, (unsigned long long)len, m->base, m->size);
    fprintf(stderr, "Valid range: 0x%016" PRIx64 " - 0x%016" PRIx64 "\n",
            m->base, m->base + m->size);
    if (g_debug_cpu) {
        fprintf(stderr, "PC=0x%016" PRIx64 " satp=0x%016" PRIx64 " priv=%d\n",
                g_debug_cpu->pc, g_debug_cpu->csr_satp, g_debug_cpu->priv);
        fprintf(stderr, "Registers: sp=0x%016" PRIx64 " gp=0x%016" PRIx64 " tp=0x%016" PRIx64 "\n",
                g_debug_cpu->x[2], g_debug_cpu->x[3], g_debug_cpu->x[4]);
        fprintf(stderr, "Recent PC history:\n");
        for (int i = 0; i < PC_HISTORY_SIZE; i++) {
            int idx = (g_pc_history_idx - 1 - i + PC_HISTORY_SIZE) % PC_HISTORY_SIZE;
            fprintf(stderr, "  [-%d] PC=0x%016" PRIx64 "\n", i, g_pc_history[idx]);
        }
    }
    exit(1);
}

static uint8_t mem_read8(const mem_t *m, uint64_t addr) {
    if (!mem_in_range(m, addr, 1)) {
        mem_oob(m, addr, 1, "mem_read8");
    }
    // Handle low memory access (0x0 - 0x1000)
    if (addr < 0x1000) {
        // For now, return zero for uninitialized low memory
        return 0;
    }
    return m->data[addr - m->base];
}

// Enhanced memory access with device support
static uint8_t mem_read8_dev(const mem_t *m, devices_t *dev, uint64_t addr) {
    if (is_device_addr(dev, addr)) {
        return device_read8(dev, addr);
    }
    return mem_read8(m, addr);
}

static uint32_t device_read32(devices_t *dev, uint64_t addr) {
    if (addr >= dev->vblk.base && addr < dev->vblk.base + VIRTIO_MMIO_STRIDE * VIRTIO_MAX_SLOTS) {
        return virtio_blk_reg_read(dev, addr & ~0x3ULL);
    }
    // Fall back to byte access for devices that only expose 8-bit registers
    uint32_t v = 0;
    v |= (uint32_t)device_read8(dev, addr);
    v |= (uint32_t)device_read8(dev, addr+1) << 8;
    v |= (uint32_t)device_read8(dev, addr+2) << 16;
    v |= (uint32_t)device_read8(dev, addr+3) << 24;
    return v;
}

// Memory reads (8/16/32/64bit). Abort immediately if out of range.
static uint16_t mem_read16(const mem_t *m, uint64_t addr) {
    if (!mem_in_range(m, addr, 2)) {
        mem_oob(m, addr, 2, "mem_read16");
    }
    if (addr < 0x1000) {
        uint16_t v = 0;
        v |= (uint16_t)mem_read8(m, addr);
        v |= (uint16_t)mem_read8(m, addr + 1) << 8;
        return v;
    }
    size_t off = (size_t)(addr - m->base);
    return get16le(m->data + off);
}
static uint32_t mem_read32(const mem_t *m, uint64_t addr) {
    if (!mem_in_range(m, addr, 4)) {
        mem_oob(m, addr, 4, "mem_read32");
    }
    if (addr < 0x1000) {
        uint32_t v = 0;
        for (int i = 0; i < 4; i++) {
            v |= (uint32_t)mem_read8(m, addr + i) << (8 * i);
        }
        return v;
    }
    size_t off = (size_t)(addr - m->base);
    return get32le(m->data + off);
}

static uint32_t mem_read32_dev(const mem_t *m, devices_t *dev, uint64_t addr) {
    if (is_device_addr(dev, addr)) {
        return device_read32(dev, addr);
    }
    return mem_read32(m, addr);
}
static uint64_t mem_read64(const mem_t *m, uint64_t addr) {
    if (!mem_in_range(m, addr, 8)) {
        mem_oob(m, addr, 8, "mem_read64");
    }
    if (addr < 0x1000) {
        uint64_t v = 0;
        for (int i = 0; i < 8; i++) {
            v |= (uint64_t)mem_read8(m, addr + i) << (8 * i);
        }
        return v;
    }
    size_t off = (size_t)(addr - m->base);
    return get64le(m->data + off);
}

static void mem_write8(mem_t *m, uint64_t addr, uint8_t v) {
    static int wr_debug_count = 0;
    if (!mem_in_range(m, addr, 1)) {
        if (wr_debug_count++ < 3) {
            fprintf(stderr, "mem_write8 OOB @0x%016" PRIx64 " (mem base=0x%016" PRIx64 " size=0x%016" PRIx64 ")\n",
                    addr, m->base, m->size);
            if (g_debug_cpu) {
                fprintf(stderr, "  Current PC=0x%016" PRIx64 " sp=0x%016" PRIx64 "\n",
                        g_debug_cpu->pc, g_debug_cpu->x[2]);
            }
        } else {
            fprintf(stderr, "mem_write8 OOB @0x%016" PRIx64 "\n", addr);
        }
        exit(1);
    }
    // Handle low memory access (0x0 - 0x1000)
    if (addr < 0x1000) {
        // For now, silently ignore writes to low memory (page table area)
        return;
    }
    m->data[addr - m->base] = v;
}

static void mem_write8_dev(mem_t *m, devices_t *dev, uint64_t addr, uint8_t v);
static void device_write32_dev(mem_t *m, devices_t *dev, uint64_t addr, uint32_t v) {
    if (addr >= dev->vblk.base && addr < dev->vblk.base + VIRTIO_MMIO_STRIDE * VIRTIO_MAX_SLOTS) {
        virtio_blk_reg_write(m, dev, addr, v);
        return;
    }
    // Fall back to byte-by-byte writes for devices
    mem_write8_dev(m, dev, addr, (uint8_t)(v & 0xff));
    mem_write8_dev(m, dev, addr+1, (uint8_t)((v >> 8) & 0xff));
    mem_write8_dev(m, dev, addr+2, (uint8_t)((v >> 16) & 0xff));
    mem_write8_dev(m, dev, addr+3, (uint8_t)((v >> 24) & 0xff));
}

static void mem_write8_dev(mem_t *m, devices_t *dev, uint64_t addr, uint8_t v) {
    if (is_device_addr(dev, addr)) {
        device_write8(m, dev, addr, v);
        return;
    }
    mem_write8(m, addr, v);
}
// Memory writes (8/16/32/64bit). Abort immediately if out of range.
static void mem_write16(mem_t *m, uint64_t addr, uint16_t v) {
    if (!mem_in_range(m, addr, 2)) {
        mem_oob(m, addr, 2, "mem_write16");
    }
    if (addr < 0x1000) {
        mem_write8(m, addr, (uint8_t)(v & 0xff));
        mem_write8(m, addr + 1, (uint8_t)((v >> 8) & 0xff));
        return;
    }
    size_t off = (size_t)(addr - m->base);
    put16le(m->data + off, v);
}
static void mem_write32(mem_t *m, uint64_t addr, uint32_t v) {
    if (!mem_in_range(m, addr, 4)) {
        mem_oob(m, addr, 4, "mem_write32");
    }
    if (addr < 0x1000) {
        for (int i = 0; i < 4; i++) {
            mem_write8(m, addr + i, (uint8_t)((v >> (8 * i)) & 0xff));
        }
        return;
    }
    size_t off = (size_t)(addr - m->base);
    put32le(m->data + off, v);
}
static void mem_write64(mem_t *m, uint64_t addr, uint64_t v) {
    if (!mem_in_range(m, addr, 8)) {
        mem_oob(m, addr, 8, "mem_write64");
    }
    if (addr < 0x1000) {
        for (int i = 0; i < 8; i++) {
            mem_write8(m, addr + i, (uint8_t)((v >> (8 * i)) & 0xff));
        }
        return;
    }
    size_t off = (size_t)(addr - m->base);
    put64le(m->data + off, v);
}

// ---------------- Virtio-blk (legacy MMIO) ----------------

#define VIRTQ_DESC_F_NEXT  1
#define VIRTQ_DESC_F_WRITE 2
#define VIRTIO_BLK_T_IN    0
#define VIRTIO_BLK_T_OUT   1

typedef struct {
    uint64_t addr;
    uint32_t len;
    uint16_t flags;
    uint16_t next;
} virtq_desc_t;

static void virtio_blk_reset_state(virtio_blk_t *blk) {
    blk->queue_sel = 0;
    blk->queue_num = 0;
    blk->queue_align = 0;
    blk->queue_pfn = 0;
    blk->gpage_sz = 0;
    blk->status = 0;
    blk->driver_features = 0;
    blk->last_avail_idx = 0;
}

static bool virtio_blk_open(virtio_blk_t *blk, const char *path) {
    virtio_blk_reset_state(blk);
    blk->disk_size = 0;
    blk->disk = NULL;
    blk->present = false;

    const char *p = path ? path : "../fs.img";
    blk->disk = fopen(p, "r+b");
    if (!blk->disk) {
        fprintf(stderr, "virtio-blk: failed to open disk image '%s': %s\n", p, strerror(errno));
        return false;
    }
    if (fseeko(blk->disk, 0, SEEK_END) != 0) {
        fprintf(stderr, "virtio-blk: seek end failed for '%s'\n", p);
        fclose(blk->disk);
        blk->disk = NULL;
        return false;
    }
    off_t end = ftello(blk->disk);
    if (end < 0) {
        fprintf(stderr, "virtio-blk: ftello failed for '%s'\n", p);
        fclose(blk->disk);
        blk->disk = NULL;
        return false;
    }
    blk->disk_size = (uint64_t)end;
    fseeko(blk->disk, 0, SEEK_SET);
    blk->present = true;
    return true;
}

static virtq_desc_t virtio_desc_load(const mem_t *mem, uint64_t desc_base, uint32_t idx) {
    virtq_desc_t d;
    uint64_t addr = desc_base + (uint64_t)idx * 16ULL;
    d.addr  = mem_read64(mem, addr);
    d.len   = mem_read32(mem, addr + 8);
    d.flags = mem_read16(mem, addr + 12);
    d.next  = mem_read16(mem, addr + 14);
    return d;
}

static bool virtio_blk_handle_req(mem_t *mem, devices_t *dev,
                                  uint64_t desc_base, uint64_t used_base,
                                  uint16_t head_idx) {
    virtio_blk_t *blk = &dev->vblk;
    if (!blk->present || blk->queue_num == 0) return false;

    virtq_desc_t d0 = virtio_desc_load(mem, desc_base, head_idx);
    virtq_desc_t d1 = virtio_desc_load(mem, desc_base, d0.next);
    virtq_desc_t d2 = virtio_desc_load(mem, desc_base, d1.next);

    uint32_t type = mem_read32(mem, d0.addr);
    uint64_t sector = mem_read64(mem, d0.addr + 8);
    uint32_t data_len = d1.len;

    uint64_t offset = sector * VIRTIO_SECTOR_SIZE;
    bool ok = true;
    if (offset + data_len > blk->disk_size || data_len == 0) {
        ok = false;
    } else {
        uint8_t *buf = (uint8_t*)malloc(data_len);
        if (!buf) {
            ok = false;
        } else if (type == VIRTIO_BLK_T_IN) {
            if (fseeko(blk->disk, (off_t)offset, SEEK_SET) != 0) {
                ok = false;
            } else {
                size_t n = fread(buf, 1, data_len, blk->disk);
                if (n < data_len) {
                    memset(buf + n, 0, data_len - n);
                }
                for (uint32_t i = 0; i < data_len; i++) {
                    mem_write8(mem, d1.addr + i, buf[i]);
                }
            }
        } else if (type == VIRTIO_BLK_T_OUT) {
            for (uint32_t i = 0; i < data_len; i++) {
                buf[i] = mem_read8(mem, d1.addr + i);
            }
            if (fseeko(blk->disk, (off_t)offset, SEEK_SET) != 0) {
                ok = false;
            } else {
                size_t n = fwrite(buf, 1, data_len, blk->disk);
                fflush(blk->disk);
                if (n != data_len) ok = false;
            }
        } else {
            ok = false;
        }
        free(buf);
    }

    uint8_t status = ok ? 0 : 1;
    mem_write8(mem, d2.addr, status);

    uint16_t used_idx = mem_read16(mem, used_base + 2);
    uint64_t used_slot = used_base + 4 + 8ULL * (used_idx % blk->queue_num);
    mem_write32(mem, used_slot, head_idx);
    mem_write32(mem, used_slot + 4, data_len);
    mem_write16(mem, used_base + 2, (uint16_t)(used_idx + 1));
    return ok;
}

static void virtio_blk_process_queue(mem_t *mem, devices_t *dev) {
    virtio_blk_t *blk = &dev->vblk;
    if (!blk->present || blk->queue_num == 0 || blk->queue_pfn == 0) return;

    uint64_t q_base = ((uint64_t)blk->queue_pfn) << 12;
    uint64_t desc_base = q_base;
    uint64_t avail_base = desc_base + 16ULL * blk->queue_num;
    uint64_t used_base  = avail_base + 4ULL + 2ULL * blk->queue_num;

    uint16_t avail_idx = mem_read16(mem, avail_base + 2);
    while (blk->last_avail_idx != avail_idx) {
        uint16_t ring_slot = blk->last_avail_idx % blk->queue_num;
        uint16_t head = mem_read16(mem, avail_base + 4 + 2ULL * ring_slot);
        virtio_blk_handle_req(mem, dev, desc_base, used_base, head);
        blk->last_avail_idx++;
    }
}

static uint32_t virtio_blk_reg_read(devices_t *dev, uint64_t addr) {
    virtio_blk_t *blk = &dev->vblk;
    if (!blk->present) return 0;
    uint64_t offset = addr - blk->base;
    uint64_t slot_off = offset % VIRTIO_MMIO_STRIDE;

    switch (slot_off) {
        case VIRTIO_R_MAGIC:           return 0x74726976;
        case VIRTIO_R_VERSION:         return 1;
        case VIRTIO_R_DEVICE_ID:       return 2;
        case VIRTIO_R_VENDOR_ID:       return 0x00000000;
        case VIRTIO_R_DEVICE_FEATURES: return 0;
        case VIRTIO_R_DRIVER_FEATURES: return blk->driver_features;
        case VIRTIO_R_GPAGE_SZ:        return blk->gpage_sz;
        case VIRTIO_R_Q_SEL:           return blk->queue_sel;
        case VIRTIO_R_Q_NUM_MAX:       return (blk->queue_sel == 0) ? blk->qnum_max : 0;
        case VIRTIO_R_Q_NUM:           return (blk->queue_sel == 0) ? (blk->queue_num ? blk->queue_num : blk->queue_align) : 0;
        case VIRTIO_R_Q_PFN:           return (blk->queue_sel == 0) ? blk->queue_pfn : 0;
        case VIRTIO_R_Q_READY:         return (blk->queue_sel == 0 && blk->queue_pfn != 0);
        case VIRTIO_R_STATUS:          return blk->status;
        default:
            if (offset >= VIRTIO_R_CONFIG && offset < VIRTIO_R_CONFIG + 8) {
                uint64_t cap = blk->disk_size / VIRTIO_SECTOR_SIZE;
                if (offset < VIRTIO_R_CONFIG + 4) {
                    return (uint32_t)(cap & 0xffffffffu);
                } else {
                    return (uint32_t)((cap >> 32) & 0xffffffffu);
                }
            }
            return 0;
    }
}

static void virtio_blk_reg_write(mem_t *mem, devices_t *dev, uint64_t addr, uint32_t val) {
    virtio_blk_t *blk = &dev->vblk;
    if (!blk->present) return;
    uint64_t offset = addr - blk->base;
    uint64_t slot_off = offset % VIRTIO_MMIO_STRIDE;

    switch (slot_off) {
        case VIRTIO_R_STATUS:
            blk->status = val & 0xff;
            if ((blk->status & 0xff) == 0) {
                virtio_blk_reset_state(blk);
            }
            break;
        case VIRTIO_R_DRIVER_FEATURES:
            blk->driver_features = val;
            break;
        case VIRTIO_R_GPAGE_SZ:
            blk->gpage_sz = val;
            break;
        case VIRTIO_R_Q_SEL:
            blk->queue_sel = val;
            blk->last_avail_idx = 0;
            break;
        case VIRTIO_R_Q_NUM: // driver writes queue size here; driver also writes align using same offset
#if VIRTIO_R_Q_ALIGN != VIRTIO_R_Q_NUM
        case VIRTIO_R_Q_ALIGN:
#endif
            if (blk->queue_sel != 0) break;
            if (val > blk->qnum_max) {
                blk->queue_align = val;
            } else {
                blk->queue_num = val;
            }
            break;
        case VIRTIO_R_Q_PFN:
            if (blk->queue_sel != 0) break;
            blk->queue_pfn = val;
            blk->last_avail_idx = 0;
            break;
        case VIRTIO_R_Q_NOTIFY:
            if (blk->queue_sel == 0) {
                virtio_blk_process_queue(mem, dev);
            }
            break;
        default:
            break;
    }
}

// ---------------- MMU: SV39 translator and virtual accessors ----------------
static inline void tlb_flush_all(cpu_t *cpu) {
    memset(cpu->tlb, 0, sizeof(cpu->tlb));
}

static inline bool vaddr_crosses_page(uint64_t vaddr, size_t len) {
    return ((vaddr ^ (vaddr + len - 1)) & ~0xfffULL) != 0;
}

static inline bool mmu_enabled(const cpu_t *cpu) {
    return satp_mode(cpu->csr_satp) == 8; // 8 = Sv39
}

static bool sv39_walk(const cpu_t *cpu, const mem_t *mem, uint64_t va, access_t acc,
                      uint64_t *pa_out, uint8_t *perms_out) {
    // VA must be sign-extended from bit 38
    uint64_t sign_mask = ~((1ULL<<39)-1);
    if (((va & sign_mask) != 0) && ((va & sign_mask) != sign_mask)) {
        fprintf(stderr, "SV39: VA sign-extension invalid: 0x%016" PRIx64 "\n", va);
        return false;
    }

    uint64_t vpn[3] = { (va >> 12) & 0x1FF, (va >> 21) & 0x1FF, (va >> 30) & 0x1FF };
    uint64_t off = va & 0xFFF;
    uint64_t a = satp_ppn(cpu->csr_satp) << 12; // root page table physical address

    for (int level = 2; level >= 0; level--) {
        uint64_t pte_addr = a + vpn[level] * 8;
        if (!mem_in_range(mem, pte_addr, 8)) {
            fprintf(stderr, "SV39: PTE addr OOB @0x%016" PRIx64 " (level %d)\n", pte_addr, level);
            return false;
        }
        uint64_t pte = mem_read64(mem, pte_addr);
        uint64_t V = pte & 1ULL;
        uint64_t R = (pte >> 1) & 1ULL;
        uint64_t W = (pte >> 2) & 1ULL;
        uint64_t X = (pte >> 3) & 1ULL;
        uint64_t U = (pte >> 4) & 1ULL;
        uint64_t PPN0 = (pte >> 10) & 0x1FFULL;
        uint64_t PPN1 = (pte >> 19) & 0x1FFULL;
        uint64_t PPN2 = (pte >> 28) & 0x3FFFFFFULL; // 26 bits

        if (!V || (!R && W)) {
            return false; // invalid PTE
        }

        if (R || X) {
            // Leaf
            if (level == 2) {
                if ((PPN1 != 0) || (PPN0 != 0)) return false;
            } else if (level == 1) {
                if (PPN0 != 0) return false;
            }

            uint8_t perms = 0;
            if (R) perms |= TLB_PERM_R;
            if (W) perms |= TLB_PERM_W;
            if (X) perms |= TLB_PERM_X;
            if (U) perms |= TLB_PERM_U;

            if (acc == ACCESS_FETCH && !(perms & TLB_PERM_X)) return false;
            if (acc == ACCESS_LOAD  && !(perms & TLB_PERM_R)) return false;
            if (acc == ACCESS_STORE && !(perms & TLB_PERM_W)) return false;

            // S-mode cannot access U=1 pages unless mstatus.SUM is set
            if (cpu->priv == 1 /*S-mode*/ && (perms & TLB_PERM_U)) {
                uint64_t sum = (cpu->csr_mstatus >> 18) & 1;
                if (acc == ACCESS_FETCH) {
                    return false;
                }
                if (!sum) {
                    return false;
                }
            }

            uint64_t phys_ppn2 = PPN2;
            uint64_t phys_ppn1 = (level <= 1) ? PPN1 : vpn[1];
            uint64_t phys_ppn0 = (level == 0) ? PPN0 : vpn[0];
            uint64_t pa = (phys_ppn2 << 30) | (phys_ppn1 << 21) | (phys_ppn0 << 12) | off;

            if (perms_out) *perms_out = perms;
            *pa_out = pa;
            return true;
        } else {
            // Non-leaf, next level walk
            uint64_t next_ppn = (PPN2 << 18) | (PPN1 << 9) | PPN0;
            a = next_ppn << 12;
        }
    }
    return false; // fell off levels
}

static bool virt_to_phys(cpu_t *cpu, const mem_t *mem, uint64_t vaddr, access_t acc, uint64_t *paddr) {
    if (cpu->priv == 3 || !mmu_enabled(cpu)) {
        *paddr = vaddr;
        return true;
    }

    uint64_t vpn = vaddr >> 12;
    uint64_t offset = vaddr & 0xfffULL;
    uint16_t asid = (uint16_t)satp_asid(cpu->csr_satp);
    uint8_t required = (acc == ACCESS_FETCH) ? TLB_PERM_X :
                       (acc == ACCESS_STORE) ? TLB_PERM_W : TLB_PERM_R;

    tlb_entry_t *entry = &cpu->tlb[vpn & (TLB_SIZE - 1)];
    if (entry->valid && entry->tag == vpn && entry->asid == asid) {
        if ((entry->perms & required) != required) goto tlb_miss;
        if (cpu->priv == 1 && (entry->perms & TLB_PERM_U)) {
            uint64_t sum = (cpu->csr_mstatus >> 18) & 1;
            if (acc == ACCESS_FETCH || !sum) goto tlb_miss;
        }
        *paddr = entry->pa_base | offset;
        return true;
    }

tlb_miss:;
    uint64_t pa;
    uint8_t perms = 0;
    if (!sv39_walk(cpu, mem, vaddr, acc, &pa, &perms)) {
        return false;
    }

    entry->valid = 1;
    entry->tag = vpn;
    entry->asid = asid;
    entry->perms = perms;
    entry->pa_base = pa & ~0xfffULL;
    *paddr = pa;
    return true;
}

// CSR access helpers
#define CSR_MSTATUS  0x300
#define CSR_MTVEC    0x305
#define CSR_MEPC     0x341
#define CSR_MCAUSE   0x342
#define CSR_MTVAL    0x343
#define CSR_MIE      0x304
#define CSR_MIP      0x344
#define CSR_MIDELEG  0x303
#define CSR_MEDELEG  0x302
#define CSR_SSTATUS  0x100
#define CSR_SSCRATCH 0x140
#define CSR_STVEC    0x105
#define CSR_SEPC     0x141
#define CSR_SCAUSE   0x142
#define CSR_STVAL    0x143
#define CSR_SIE      0x104
#define CSR_SIP      0x144
#define CSR_SATP     0x180
#define CSR_TIME     0xC01
#define CSR_MENVCFG  0x30a
#define CSR_MCOUNTEREN 0x306
#define CSR_STIMECMP 0x14d

// Trap causes
#define CAUSE_INSTRUCTION_MISALIGNED    0
#define CAUSE_INSTRUCTION_ACCESS_FAULT  1
#define CAUSE_ILLEGAL_INSTRUCTION       2
#define CAUSE_BREAKPOINT                3
#define CAUSE_LOAD_ACCESS_MISALIGNED    4
#define CAUSE_LOAD_ACCESS_FAULT         5
#define CAUSE_STORE_AMO_MISALIGNED      6
#define CAUSE_STORE_AMO_ACCESS_FAULT    7
#define CAUSE_ECALL_FROM_U              8
#define CAUSE_ECALL_FROM_S              9
#define CAUSE_ECALL_FROM_M             11
#define CAUSE_INSTRUCTION_PAGE_FAULT   12
#define CAUSE_LOAD_PAGE_FAULT          13
#define CAUSE_STORE_AMO_PAGE_FAULT     15

// Interrupt causes (MSB set to indicate interrupt)
#define INTERRUPT_S_SOFTWARE  (1ULL << 63 | 1)
#define INTERRUPT_M_SOFTWARE  (1ULL << 63 | 3)
#define INTERRUPT_S_TIMER     (1ULL << 63 | 5)
#define INTERRUPT_M_TIMER     (1ULL << 63 | 7)
#define INTERRUPT_S_EXTERNAL  (1ULL << 63 | 9)
#define INTERRUPT_M_EXTERNAL  (1ULL << 63 | 11)

// MIP/MIE bit masks
#define MIP_SSIP  (1ULL << 1)
#define MIP_MSIP  (1ULL << 3)
#define MIP_STIP  (1ULL << 5)
#define MIP_MTIP  (1ULL << 7)
#define MIP_SEIP  (1ULL << 9)
#define MIP_MEIP  (1ULL << 11)

static uint64_t csr_read(cpu_t *cpu, uint32_t csr_addr, devices_t *dev) {
    switch (csr_addr) {
        case CSR_MSTATUS:
            // printf("MSTATUS read: value=0x%016" PRIx64 " at PC=0x%016" PRIx64 "\n", cpu->csr_mstatus, cpu->pc);
            return cpu->csr_mstatus;
        case CSR_MTVEC:    return cpu->csr_mtvec;
        case CSR_MEPC:     return cpu->csr_mepc;
        case CSR_MCAUSE:   return cpu->csr_mcause;
        case CSR_MTVAL:    return cpu->csr_mtval;
        case CSR_MIE:      return cpu->csr_mie;
        case CSR_MIP:      return cpu->csr_mip;
        case CSR_MIDELEG:  return cpu->csr_mideleg;
        case CSR_MEDELEG:  return cpu->csr_medeleg;
        case CSR_MENVCFG:  return cpu->csr_menvcfg;
        case CSR_MCOUNTEREN: return cpu->csr_mcounteren;
        case CSR_SSTATUS:  return cpu->csr_sstatus;
        case CSR_SSCRATCH: return cpu->csr_sscratch;
        case CSR_STVEC:    return cpu->csr_stvec;
        case CSR_SEPC:     return cpu->csr_sepc;
        case CSR_SCAUSE:   return cpu->csr_scause;
        case CSR_STVAL:    return cpu->csr_stval;
        case CSR_SIE:      return cpu->csr_sie;
        case CSR_SIP:      return cpu->csr_sip;
        case CSR_SATP:     return cpu->csr_satp;
        case CSR_STIMECMP: return cpu->csr_stimecmp;
        case CSR_TIME:
            // Time CSR reads from device mtime
            clint_update_mtime(dev);
            cpu->csr_time = dev->mtime;
            return cpu->csr_time;
        case 0x51:         return cpu->csr_custom51; // Custom CSR 0x51
        default:           return 0; // Unknown CSRs read as 0
    }
}

static void csr_write(cpu_t *cpu, uint32_t csr_addr, uint64_t val) {
    switch (csr_addr) {
        case CSR_MSTATUS:
            // MSTATUS has specific writable bits - mask to valid bits only
            // Key bits: SIE(1), MIE(3), SPIE(5), SPP(8), MPIE(7), MPP(11-12)
            // printf("MSTATUS write attempt: raw_value=0x%016" PRIx64 " at PC=0x%016" PRIx64 "\n", val, cpu->pc);
            val &= 0x000019AA;  // Keep only the valid writable bits
            cpu->csr_mstatus = val;
            // printf("MSTATUS write final: value=0x%016" PRIx64 " MPP=%d at PC=0x%016" PRIx64 "\n", val, (int)((val >> 11) & 3), cpu->pc);
            break;
        case CSR_MTVEC:    cpu->csr_mtvec = val; break;
        case CSR_MEPC:
            cpu->csr_mepc = val;
            // printf("MEPC write: value=0x%016" PRIx64 " at PC=0x%016" PRIx64 "\n", val, cpu->pc);
            break;
        case CSR_MCAUSE:   cpu->csr_mcause = val; break;
        case CSR_MTVAL:    cpu->csr_mtval = val; break;
        case CSR_MIE:      cpu->csr_mie = val; break;
        case CSR_MIP:      cpu->csr_mip = val; break;
        case CSR_MIDELEG:  cpu->csr_mideleg = val; break;
        case CSR_MEDELEG:  cpu->csr_medeleg = val; break;
        case CSR_MENVCFG: {
            static int menvcfg_log_count = 0;
            cpu->csr_menvcfg = val;
            if (menvcfg_log_count++ < 3) {
                fprintf(stderr, "[emu] menvcfg write @step=%" PRIu64 " val=0x%016" PRIx64 "\n",
                        g_step_counter, val);
            }
            break;
        }
        case CSR_MCOUNTEREN: cpu->csr_mcounteren = val; break;
        case CSR_SSTATUS:
            cpu->csr_sstatus = val;
            // sstatus is a view of mstatus, so update mstatus with sstatus-writable bits
            // Writable bits in sstatus: SIE(1), SPIE(5), UBE(6), SPP(8), VS(9-10), FS(13-14),
            //                           XS(15-16), SUM(18), MXR(19), UXL(32-33), SD(63)
            // For simplicity, update common bits: SIE, SPIE, SPP, SUM, MXR
            uint64_t sstatus_mask = (1ULL << 1) | (1ULL << 5) | (1ULL << 8) | (1ULL << 18) | (1ULL << 19);
            cpu->csr_mstatus = (cpu->csr_mstatus & ~sstatus_mask) | (val & sstatus_mask);
            break;
        case CSR_SSCRATCH:
            cpu->csr_sscratch = val;
            break;
        case CSR_STVEC:    cpu->csr_stvec = val; break;
        case CSR_SEPC:     cpu->csr_sepc = val; break;
        case CSR_SCAUSE:   cpu->csr_scause = val; break;
        case CSR_STVAL:    cpu->csr_stval = val; break;
        case CSR_SIE: {
            static int sie_log_count = 0;
            cpu->csr_sie = val;
            if (sie_log_count++ < 3) {
                fprintf(stderr, "[emu] sie write @step=%" PRIu64 " val=0x%016" PRIx64 "\n",
                        g_step_counter, val);
            }
            break;
        }
        case CSR_SIP:      cpu->csr_sip = val; break;
        case CSR_SATP: {
            static int satp_log_count = 0;
            cpu->csr_satp = val;
            tlb_flush_all(cpu);
            if (satp_log_count++ < 5) {
                fprintf(stderr, "[emu] satp write @step=%" PRIu64 " val=0x%016" PRIx64 " pc=0x%016" PRIx64 " priv=%d\n",
                        g_step_counter, val, cpu->pc, cpu->priv);
            }
            break;
        }
        case CSR_STIMECMP: {
            static int stcmp_log_count = 0;
            cpu->csr_stimecmp = val;
            if (stcmp_log_count++ < 3) {
                fprintf(stderr, "[emu] stimecmp write @step=%" PRIu64 " val=0x%016" PRIx64 "\n",
                        g_step_counter, val);
            }
            break;
        }
        case CSR_TIME:
            // Time CSR is read-only, ignore writes
            break;
        case 0x51:         cpu->csr_custom51 = val; break; // Custom CSR 0x51
        default: break; // Ignore writes to unknown CSRs
    }
}

// Forward declaration
static void take_trap(cpu_t *cpu, uint64_t cause, uint64_t tval);

// Check for pending interrupts and handle them
// Returns true if an interrupt was taken
static bool check_pending_interrupts(cpu_t *cpu, devices_t *dev) {
    // Update timer interrupt pending bit in MIP based on mtimecmp
    bool mmu_enabled = cpu->csr_satp != 0;
    if (mmu_enabled) {
        if (dev->mtime >= dev->mtimecmp) {
            cpu->csr_mip |= MIP_MTIP;  // Set machine timer interrupt pending
            // If MTIP is delegated to S-mode, also set STIP
            if (cpu->csr_mideleg & MIP_MTIP) {
                cpu->csr_sip |= MIP_STIP;
            }
        } else {
            cpu->csr_mip &= ~MIP_MTIP; // Clear if timer hasn't fired
            cpu->csr_sip &= ~MIP_STIP;
        }
    } else {
        // Avoid firing timer interrupts before SATP is programmed (boot-time quirk).
        cpu->csr_mip &= ~MIP_MTIP;
        cpu->csr_sip &= ~MIP_STIP;
    }

    // Also check stimecmp for S-mode timer interrupt (Sstc extension)
    // Honor it only if menvcfg.STCE (bit 63) is set; otherwise keep STIP cleared.
    if (cpu->csr_menvcfg & (1ULL << 63)) {
        if (cpu->csr_stimecmp != 0 && cpu->csr_stimecmp != UINT64_MAX) {
            if (dev->mtime >= cpu->csr_stimecmp) {
                cpu->csr_sip |= MIP_STIP;  // Set supervisor timer interrupt pending
            } else {
                cpu->csr_sip &= ~MIP_STIP; // Clear if timer hasn't fired
            }
        }
    } else {
        cpu->csr_sip &= ~MIP_STIP;
    }

    if (plic_irq_pending(dev)) {
        cpu->csr_mip |= MIP_MEIP;
        if (cpu->csr_mideleg & MIP_MEIP) {
            cpu->csr_sip |= MIP_SEIP;
        }
    } else {
        cpu->csr_mip &= ~MIP_MEIP;
        cpu->csr_sip &= ~MIP_SEIP;
    }

    // Check which interrupts are both pending and enabled
    uint64_t pending = cpu->csr_mip & cpu->csr_mie;
    // Also check S-mode pending interrupts (they may not be in mip/mie if fully delegated)
    uint64_t s_pending_early = cpu->csr_sip & cpu->csr_sie;
    if (pending == 0 && s_pending_early == 0) return false;

    // Check if interrupts are globally enabled based on current privilege level
    bool interrupts_enabled = false;
    if (cpu->priv == 3) { // M-mode
        interrupts_enabled = (cpu->csr_mstatus & (1ULL << 3)) != 0; // MIE bit
    } else if (cpu->priv == 1) { // S-mode
        interrupts_enabled = (cpu->csr_mstatus & (1ULL << 1)) != 0; // SIE bit
    } else { // U-mode
        interrupts_enabled = true; // Always enabled in U-mode
    }

    if (!interrupts_enabled) return false;

    // Check machine-level interrupts (not delegated to S-mode)
    uint64_t m_interrupts = pending & ~cpu->csr_mideleg;
    if (m_interrupts) {
        // M-mode interrupts can interrupt S-mode and U-mode
        if (cpu->priv < 3) {
            if (m_interrupts & MIP_MEIP) {
                dev->external_interrupt_count++;
                take_trap(cpu, INTERRUPT_M_EXTERNAL, 0);
                return true;
            }
            if (m_interrupts & MIP_MTIP) {
                dev->timer_interrupt_count++;
                take_trap(cpu, INTERRUPT_M_TIMER, 0);
                return true;
            }
            if (m_interrupts & MIP_MSIP) {
                take_trap(cpu, INTERRUPT_M_SOFTWARE, 0);
                return true;
            }
        }
    }

    // Check supervisor-level interrupts
    // S-mode interrupts are in sip/sie, which shadow delegated M-mode interrupts
    uint64_t s_pending = cpu->csr_sip & cpu->csr_sie;

    // Debug: print first time we have pending S-mode interrupt (DISABLED)
    static bool first_s_interrupt_debug = true;
    if (false && s_pending && first_s_interrupt_debug) {
        fprintf(stderr, "\n=== First S-mode interrupt check ===\n");
        fprintf(stderr, "sip=0x%016" PRIx64 " sie=0x%016" PRIx64 " s_pending=0x%016" PRIx64 "\n",
                cpu->csr_sip, cpu->csr_sie, s_pending);
        fprintf(stderr, "priv=%d interrupts_enabled=%d\n", cpu->priv, interrupts_enabled);
        fprintf(stderr, "MIP_STIP=0x%016" PRIx64 "\n", MIP_STIP);
        first_s_interrupt_debug = false;
    }

    if (s_pending && cpu->priv <= 1) {
        // S-mode interrupts can interrupt U-mode, and S-mode if SIE bit is set
        if (s_pending & MIP_SEIP) {
            dev->external_interrupt_count++;
            take_trap(cpu, INTERRUPT_S_EXTERNAL, 0);
            return true;
        }
        if (s_pending & MIP_STIP) {
            dev->timer_interrupt_count++;
            take_trap(cpu, INTERRUPT_S_TIMER, 0);
            return true;
        }
        if (s_pending & MIP_SSIP) {
            take_trap(cpu, INTERRUPT_S_SOFTWARE, 0);
            return true;
        }
    }

    return false;
}

// Trap handling
static void take_trap(cpu_t *cpu, uint64_t cause, uint64_t tval) {
    // Debug: show important trap details for MINUX9
    // if (cause == CAUSE_ECALL_FROM_M || cause == CAUSE_ECALL_FROM_S || cause == CAUSE_ECALL_FROM_U) {
    //     fprintf(stderr, "ECALL: priv=%d, a7=%" PRIu64 " (syscall), pc=0x%016" PRIx64 ", a0=%" PRIu64 "\n",
    //             cpu->priv, cpu->x[17], cpu->pc, cpu->x[10]);  // a7 is x[17], a0 is x[10]

    //     // Show syscall details for important calls
    //     if (cpu->x[17] == 93) { // exit syscall
    //         fprintf(stderr, "  -> exit(%" PRIu64 ")\n", cpu->x[10]);
    //     }
    //     // else if (cpu->x[17] == 64) { // write syscall
    //     //     fprintf(stderr, "  -> write(fd=%" PRIu64 ", buf=0x%016" PRIx64 ", count=%" PRIu64 ")\n",
    //     //             cpu->x[10], cpu->x[11], cpu->x[12]);
    //     // }
    // }

    // Special case for smoke test: if mtvec points to the same address as PC, handle ECALL as exit
    if ((cause == CAUSE_ECALL_FROM_M || cause == CAUSE_ECALL_FROM_S || cause == CAUSE_ECALL_FROM_U) &&
        (cpu->csr_mtvec & ~3ULL) == 0x80000000) {
        cpu->halt = true;
        cpu->exit_code = cpu->x[10]; // a0
        return;
    }

    if (cpu->priv == 3) { // M-mode trap
        cpu->csr_mepc = cpu->pc;
        cpu->csr_mcause = cause;
        cpu->csr_mtval = tval;
        cpu->csr_mstatus = (cpu->csr_mstatus & ~(3ULL << 11)) | ((uint64_t)cpu->priv << 11);
        cpu->priv = 3;
        uint64_t mtvec_base = cpu->csr_mtvec & ~3ULL;
        uint64_t mtvec_mode = cpu->csr_mtvec & 3ULL;
        uint64_t mtvec_offset = ((cause >> 63) && mtvec_mode == 1) ? 4 * (cause & 0xfffULL) : 0;
        cpu->pc = mtvec_base + mtvec_offset;
    } else { // S-mode trap (delegate to supervisor)
        static int first_trap_debug = 0;
        uint64_t stvec_base = cpu->csr_stvec & ~3ULL;
        uint64_t stvec_mode = cpu->csr_stvec & 3ULL;
        uint64_t stvec_offset = ((cause >> 63) && stvec_mode == 1) ? 4 * (cause & 0xfffULL) : 0;
        uint64_t stvec_target = stvec_base + stvec_offset;
        if (first_trap_debug++ < 5) {
            fprintf(stderr, "S-mode trap @step=%" PRIu64 ": cause=0x%016" PRIx64 " pc=0x%016" PRIx64 " stvec=0x%016" PRIx64 "\n",
                    g_step_counter, cause, cpu->pc, cpu->csr_stvec);
            fprintf(stderr, "  sp(x2)=0x%016" PRIx64 " ra(x1)=0x%016" PRIx64 " gp(x3)=0x%016" PRIx64 "\n",
                    cpu->x[2], cpu->x[1], cpu->x[3]);
            fprintf(stderr, "  Setting PC to stvec_target=0x%016" PRIx64 " (base=0x%016" PRIx64 " mode=%" PRIu64 " offset=0x%" PRIx64 ")\n",
                    stvec_target, stvec_base, stvec_mode, stvec_offset);
            // Reset debug counters to capture MMU translations after trap
            g_vtp_debug_count = 0;
            g_sv39_debug_count = 0;
        }
        cpu->csr_sepc = cpu->pc;
        cpu->csr_scause = cause;
        cpu->csr_stval = tval;
        // Save SPP (previous privilege) and SPIE (previous interrupt enable)
        uint64_t sie = (cpu->csr_mstatus >> 1) & 1; // SIE bit from mstatus
        cpu->csr_sstatus = (cpu->csr_sstatus & ~(3ULL << 8)) | ((uint64_t)cpu->priv << 8);
        // Set SPIE = SIE, then clear SIE
        cpu->csr_mstatus = (cpu->csr_mstatus & ~(1ULL << 5)) | (sie << 5); // SPIE = old SIE
        cpu->csr_mstatus &= ~(1ULL << 1); // Clear SIE
        cpu->priv = 1;
        cpu->pc = stvec_target;
    }
}

uint8_t vmem_read8(cpu_t *cpu, const mem_t *mem, devices_t *dev, uint64_t vaddr, access_t acc) {
    // Check if this is a device address first - device I/O bypasses MMU
    if (is_device_addr(dev, vaddr)) {
        return mem_read8_dev(mem, dev, vaddr);
    }

    uint64_t pa;
    if (!virt_to_phys(cpu, mem, vaddr, acc, &pa)) {
        fprintf(stderr, "MMU: page fault on read8 @0x%016" PRIx64 "\n", vaddr);
        take_trap(cpu, CAUSE_LOAD_PAGE_FAULT, vaddr);
        return 0;
    }
    return mem_read8_dev(mem, dev, pa);
}
uint16_t vmem_read16(cpu_t *cpu, const mem_t *mem, devices_t *dev, uint64_t vaddr, access_t acc) {
    if (!is_device_addr(dev, vaddr) && !vaddr_crosses_page(vaddr, 2)) {
        uint64_t pa;
        if (!virt_to_phys(cpu, mem, vaddr, acc, &pa)) {
            fprintf(stderr, "MMU: page fault on read16 @0x%016" PRIx64 "\n", vaddr);
            take_trap(cpu, CAUSE_LOAD_PAGE_FAULT, vaddr);
            return 0;
        }
        return mem_read16(mem, pa);
    }

    uint16_t v = 0;
    v |= (uint16_t)vmem_read8(cpu, mem, dev, vaddr, acc);
    v |= (uint16_t)vmem_read8(cpu, mem, dev, vaddr+1, acc) << 8;
    return v;
}
uint32_t vmem_read32(cpu_t *cpu, const mem_t *mem, devices_t *dev, uint64_t vaddr, access_t acc) {
    if (is_device_addr(dev, vaddr)) {
        return device_read32(dev, vaddr);
    }

    if (!vaddr_crosses_page(vaddr, 4)) {
        uint64_t pa;
        if (!virt_to_phys(cpu, mem, vaddr, acc, &pa)) {
            fprintf(stderr, "MMU: page fault on read32 @0x%016" PRIx64 "\n", vaddr);
            take_trap(cpu, CAUSE_LOAD_PAGE_FAULT, vaddr);
            return 0;
        }
        return mem_read32(mem, pa);
    }

    uint32_t v = 0;
    v |= (uint32_t)vmem_read8(cpu, mem, dev, vaddr, acc);
    v |= (uint32_t)vmem_read8(cpu, mem, dev, vaddr+1, acc) << 8;
    v |= (uint32_t)vmem_read8(cpu, mem, dev, vaddr+2, acc) << 16;
    v |= (uint32_t)vmem_read8(cpu, mem, dev, vaddr+3, acc) << 24;
    return v;
}
uint64_t vmem_read64(cpu_t *cpu, const mem_t *mem, devices_t *dev, uint64_t vaddr, access_t acc) {
    if (is_device_addr(dev, vaddr)) {
        uint64_t v = 0;
        for (int i = 0; i < 8; i++) v |= (uint64_t)mem_read8_dev(mem, dev, vaddr+i) << (8*i);
        return v;
    }

    if (!vaddr_crosses_page(vaddr, 8)) {
        uint64_t pa;
        if (!virt_to_phys(cpu, mem, vaddr, acc, &pa)) {
            fprintf(stderr, "MMU: page fault on read64 @0x%016" PRIx64 "\n", vaddr);
            take_trap(cpu, CAUSE_LOAD_PAGE_FAULT, vaddr);
            return 0;
        }
        return mem_read64(mem, pa);
    }

    uint64_t v = 0;
    for (int i = 0; i < 8; i++) v |= (uint64_t)vmem_read8(cpu, mem, dev, vaddr+i, acc) << (8*i);
    return v;
}
void vmem_write8(cpu_t *cpu, mem_t *mem, devices_t *dev, uint64_t vaddr, uint8_t val, access_t acc) {
    // Check if this is a device address first - device I/O bypasses MMU
    if (is_device_addr(dev, vaddr)) {
        mem_write8_dev(mem, dev, vaddr, val);
        return;
    }

    uint64_t pa;
    if (!virt_to_phys(cpu, mem, vaddr, acc, &pa)) {
        fprintf(stderr, "MMU: page fault on write8 @0x%016" PRIx64 "\n", vaddr);
        take_trap(cpu, CAUSE_STORE_AMO_PAGE_FAULT, vaddr);
        return;
    }
    mem_write8_dev(mem, dev, pa, val);
}
void vmem_write16(cpu_t *cpu, mem_t *mem, devices_t *dev, uint64_t vaddr, uint16_t val, access_t acc) {
    if (!is_device_addr(dev, vaddr) && !vaddr_crosses_page(vaddr, 2)) {
        uint64_t pa;
        if (!virt_to_phys(cpu, mem, vaddr, acc, &pa)) {
            fprintf(stderr, "MMU: page fault on write16 @0x%016" PRIx64 "\n", vaddr);
            take_trap(cpu, CAUSE_STORE_AMO_PAGE_FAULT, vaddr);
            return;
        }
        mem_write16(mem, pa, val);
        return;
    }

    vmem_write8(cpu, mem, dev, vaddr, (uint8_t)(val & 0xff), acc);
    vmem_write8(cpu, mem, dev, vaddr+1, (uint8_t)((val >> 8) & 0xff), acc);
}
void vmem_write32(cpu_t *cpu, mem_t *mem, devices_t *dev, uint64_t vaddr, uint32_t val, access_t acc) {
    // Check if this is a device address first - device I/O bypasses MMU
    if (is_device_addr(dev, vaddr)) {
        device_write32_dev(mem, dev, vaddr, val);
        return;
    }

    if (!vaddr_crosses_page(vaddr, 4)) {
        uint64_t pa;
        if (!virt_to_phys(cpu, mem, vaddr, acc, &pa)) {
            fprintf(stderr, "MMU: page fault on write32 @0x%016" PRIx64 "\n", vaddr);
            take_trap(cpu, CAUSE_STORE_AMO_PAGE_FAULT, vaddr);
            return;
        }
        mem_write32(mem, pa, val);
        return;
    }

    for (int i = 0; i < 4; i++) {
        vmem_write8(cpu, mem, dev, vaddr + i, (uint8_t)((val >> (8*i)) & 0xff), acc);
    }
}
void vmem_write64(cpu_t *cpu, mem_t *mem, devices_t *dev, uint64_t vaddr, uint64_t val, access_t acc) {
    // Check if this is a device address first - device I/O bypasses MMU
    if (is_device_addr(dev, vaddr)) {
        for (int i = 0; i < 8; i++) mem_write8_dev(mem, dev, vaddr+i, (uint8_t)((val >> (8*i)) & 0xff));
        return;
    }

    if (!vaddr_crosses_page(vaddr, 8)) {
        uint64_t pa;
        if (!virt_to_phys(cpu, mem, vaddr, acc, &pa)) {
            fprintf(stderr, "MMU: page fault on write64 @0x%016" PRIx64 "\n", vaddr);
            take_trap(cpu, CAUSE_STORE_AMO_PAGE_FAULT, vaddr);
            return;
        }
        mem_write64(mem, pa, val);
        return;
    }

    for (int i = 0; i < 8; i++) {
        vmem_write8(cpu, mem, dev, vaddr + i, (uint8_t)((val >> (8*i)) & 0xff), acc);
    }
}

static inline void set_x(cpu_t *cpu, int rd, uint64_t val) {
    if (rd != 0) {
        cpu->x[rd] = val;
    }
}
// x0 is always 0 so writes are ignored; others write the register.

static void dump_regs(const cpu_t *cpu) {
    static const char *abi[32] = {
        "zero","ra","sp","gp","tp",
        "t0","t1","t2",
        "s0/fp","s1",
        "a0","a1","a2","a3","a4","a5","a6","a7",
        "s2","s3","s4","s5","s6","s7","s8","s9","s10","s11",
        "t3","t4","t5","t6"
    };
    for (int i = 0; i < 32; i++) {
        fprintf(stderr, "%5s=%016" PRIx64 "%s", abi[i], cpu->x[i], ((i%4)==3)?"\n":" ");
    }
}
// Register trace output

// ELF64 loader (very small subset)
// Load only a small subset of RISC-V ELF64 (PT_LOAD segments only)
static bool load_elf64_riscv(mem_t *mem, const char *path, uint64_t *entry_out) {
    FILE *f = fopen(path, "rb");
    if (!f) return false;
    uint8_t e[64];
    if (fread(e, 1, 64, f) != 64) { fclose(f); return false; }
    if (e[0]!=0x7f || e[1]!='E' || e[2]!='L' || e[3]!='F') { fclose(f); return false; }
    if (e[4] != 2 /*ELFCLASS64*/ || e[5] != 1 /*little*/ ) { fclose(f); return false; }
    uint16_t e_machine = e[18] | (e[19] << 8);
    if (e_machine != EM_RISCV) { fclose(f); return false; }
    uint64_t e_entry = get64le(e+24);
    uint64_t e_phoff = get64le(e+32);
    uint16_t e_phentsize = e[54] | (e[55] << 8);
    uint16_t e_phnum = e[56] | (e[57] << 8);

    if (fseek(f, (long)e_phoff, SEEK_SET) != 0) { fclose(f); return false; }
    for (uint16_t i = 0; i < e_phnum; i++) {
        uint8_t ph[56];
        if (fread(ph, 1, sizeof(ph), f) != sizeof(ph)) { fclose(f); return false; }
        uint32_t p_type = get32le(ph+0);
        if (p_type != 1 /*PT_LOAD*/) continue;
        uint64_t p_offset = get64le(ph+8);
        uint64_t p_vaddr  = get64le(ph+16);
        uint64_t p_filesz = get64le(ph+32);
        uint64_t p_memsz  = get64le(ph+40);
        if (!mem_in_range(mem, p_vaddr, p_memsz)) {
            fprintf(stderr, "ELF PT_LOAD out of range: vaddr=0x%016" PRIx64 ", memsz=%" PRIu64 "\n", p_vaddr, p_memsz);
            fclose(f); return false;
        }
        long cur = ftell(f);
        if (cur < 0) { fclose(f); return false; }
        if (fseek(f, (long)p_offset, SEEK_SET) != 0) { fclose(f); return false; }
        if (p_filesz > 0) {
            if (fread(mem->data + (p_vaddr - mem->base), 1, p_filesz, f) != p_filesz) { fclose(f); return false; }
        }
        if (p_memsz > p_filesz) {
            memset(mem->data + (p_vaddr - mem->base) + p_filesz, 0, (size_t)(p_memsz - p_filesz));
        }
        if (fseek(f, (long)(e_phoff + (uint64_t)(i+1)*e_phentsize), SEEK_SET) != 0) { fclose(f); return false; }
    }
    fclose(f);
    if (entry_out) *entry_out = e_entry;
    return true;
}

static bool load_raw(mem_t *mem, const char *path, uint64_t addr) {
    FILE *f = fopen(path, "rb");
    if (!f) return false;
    if (fseek(f, 0, SEEK_END) != 0) { fclose(f); return false; }
    long len = ftell(f);
    if (len < 0) { fclose(f); return false; }
    if (fseek(f, 0, SEEK_SET) != 0) { fclose(f); return false; }
    if (!mem_in_range(mem, addr, (uint64_t)len)) { fclose(f); return false; }
    size_t n = fread(mem->data + (addr - mem->base), 1, (size_t)len, f);
    fclose(f);
    return n == (size_t)len;
}

// Decode helpers
// Instruction decode helpers: extract fields and build immediates (I/S/B/U/J)

static inline int64_t sext32i(int32_t v, int bits) {
    int32_t m = 1 << (bits - 1);
    return (int64_t)((v ^ m) - m);
}

// Decode instruction into a convenient struct for the interpreter
dec_t decode(uint32_t inst) {
    dec_t d = {0};
    d.raw = inst;
    d.opcode = inst & 0x7f;
    d.rd = (inst >> 7) & 0x1f;
    d.funct3 = (inst >> 12) & 7;
    d.rs1 = (inst >> 15) & 0x1f;
    d.rs2 = (inst >> 20) & 0x1f;
    d.funct7 = (inst >> 25) & 0x7f;
    // immediates
    // Sign-extend and assemble immediates for each format
    d.imm_i = sext32i(inst >> 20, 12);
    int32_t imm_s = ((inst >> 7) & 0x1f) | ((int32_t)inst & 0xfe000000);
    imm_s = (imm_s & 0x1f) | ((inst >> 20) & 0xfe0);
    d.imm_s = sext32i(((int32_t)(inst & 0xfe000000)) >> 20 | ((inst >> 7) & 0x1f), 12);
    // Proper S-type
    int32_t s_hi = (int32_t)((inst >> 25) & 0x7f);
    int32_t s_lo = (int32_t)((inst >> 7) & 0x1f);
    int32_t s_imm = (s_hi << 5) | s_lo;
    d.imm_s = sext32i(s_imm, 12);
    // B-type
    int32_t b_imm = ((inst >> 31) & 0x1) << 12
                  | ((inst >> 7) & 0x1) << 11
                  | ((inst >> 25) & 0x3f) << 5
                  | ((inst >> 8) & 0xf) << 1;
    d.imm_b = sext32i(b_imm, 13);
    // U-type (sign-extended from bit 31)
    d.imm_u = (int64_t)(int32_t)(inst & 0xfffff000);
    // J-type
    int32_t j_imm = ((inst >> 31) & 0x1) << 20
                  | ((inst >> 21) & 0x3ff) << 1
                  | ((inst >> 20) & 0x1) << 11
                  | ((inst >> 12) & 0xff) << 12;
    d.imm_j = sext32i(j_imm, 21);
    return d;
}

static inline uint64_t zext32(uint64_t x) { return (uint32_t)x; }
static inline uint64_t sext32(uint64_t x) { return (uint64_t)(int64_t)(int32_t)(uint32_t)x; }

// Basic C-extension decoder
static uint32_t decompress_c_inst(uint16_t c_inst) {
    uint32_t opcode = c_inst & 0x3;
    uint32_t funct3 = (c_inst >> 13) & 0x7;
    uint32_t rd_rs1 = (c_inst >> 7) & 0x1f;
    uint32_t rs2 = (c_inst >> 2) & 0x1f;

    switch (opcode) {
        case 0x0: { // C0 quadrant
            switch (funct3) {
                case 0x0: // C.ADDI4SPN
                    if (((c_inst >> 5) & 0xFF) == 0) return 0; // Reserved
                    {
                        uint32_t nzimm = ((c_inst >> 6) & 0x1) << 2 | ((c_inst >> 5) & 0x1) << 3 |
                                        ((c_inst >> 11) & 0x3) << 4 | ((c_inst >> 7) & 0xF) << 6;
                        uint32_t rd_p = ((c_inst >> 2) & 0x7) + 8; // x8-x15
                        return (nzimm << 20) | (2 << 15) | (0 << 12) | (rd_p << 7) | 0x13; // addi rd', sp, nzimm
                    }
                case 0x2: // C.LW
                    {
                        uint32_t rs1_p = ((c_inst >> 7) & 0x7) + 8;
                        uint32_t rd_p = ((c_inst >> 2) & 0x7) + 8;
                        uint32_t imm = ((c_inst >> 6) & 0x1) << 2 | ((c_inst >> 10) & 0x7) << 3 | ((c_inst >> 5) & 0x1) << 6;
                        return (imm << 20) | (rs1_p << 15) | (2 << 12) | (rd_p << 7) | 0x03; // lw rd', offset(rs1')
                    }
                case 0x3: // C.LD (RV64)
                    {
                        uint32_t rs1_p = ((c_inst >> 7) & 0x7) + 8;
                        uint32_t rd_p = ((c_inst >> 2) & 0x7) + 8;
                        uint32_t imm = ((c_inst >> 10) & 0x7) << 3 | ((c_inst >> 5) & 0x3) << 6;
                        return (imm << 20) | (rs1_p << 15) | (3 << 12) | (rd_p << 7) | 0x03; // ld rd', offset(rs1')
                    }
                case 0x6: // C.SW
                    {
                        uint32_t rs1_p = ((c_inst >> 7) & 0x7) + 8;
                        uint32_t rs2_p = ((c_inst >> 2) & 0x7) + 8;
                        uint32_t imm = ((c_inst >> 6) & 0x1) << 2 | ((c_inst >> 10) & 0x7) << 3 | ((c_inst >> 5) & 0x1) << 6;
                        uint32_t imm_hi = (imm >> 5) & 0x7F;
                        uint32_t imm_lo = imm & 0x1F;
                        return (imm_hi << 25) | (rs2_p << 20) | (rs1_p << 15) | (2 << 12) | (imm_lo << 7) | 0x23; // sw rs2', offset(rs1')
                    }
                case 0x7: // C.SD (RV64)
                    {
                        uint32_t rs1_p = ((c_inst >> 7) & 0x7) + 8;
                        uint32_t rs2_p = ((c_inst >> 2) & 0x7) + 8;
                        uint32_t imm = ((c_inst >> 10) & 0x7) << 3 | ((c_inst >> 5) & 0x3) << 6;
                        uint32_t imm_hi = (imm >> 5) & 0x7F;
                        uint32_t imm_lo = imm & 0x1F;
                        return (imm_hi << 25) | (rs2_p << 20) | (rs1_p << 15) | (3 << 12) | (imm_lo << 7) | 0x23; // sd rs2', offset(rs1')
                    }
                case 0x4: // Reserved/RV128 instructions - treat as NOP for now
                    return 0x00000013; // NOP (addi x0, x0, 0)
                default:
                    return 0; // Unknown
            }
        }
        case 0x1: { // C1 quadrant
            switch (funct3) {
                case 0x0: // C.ADDI
                    if (rd_rs1 == 0) return 0x00000013; // NOP (addi x0, x0, 0)
                    // Extract immediate [5:0]
                    uint32_t imm = ((c_inst >> 12) & 1) << 5 | ((c_inst >> 2) & 0x1f);
                    if (imm & 0x20) imm |= 0xffffffc0; // Sign extend
                    return (imm << 20) | (rd_rs1 << 15) | (0x0 << 12) | (rd_rs1 << 7) | 0x13;
                case 0x1: // C.ADDIW (RV64)
                    if (rd_rs1 == 0) return 0; // Reserved
                    imm = ((c_inst >> 12) & 1) << 5 | ((c_inst >> 2) & 0x1f);
                    if (imm & 0x20) imm |= 0xffffffc0; // Sign extend
                    return (imm << 20) | (rd_rs1 << 15) | (0x0 << 12) | (rd_rs1 << 7) | 0x1B; // addiw
                case 0x2: // C.LI
                    // Load immediate to rd
                    imm = ((c_inst >> 12) & 1) << 5 | ((c_inst >> 2) & 0x1f);
                    if (imm & 0x20) imm |= 0xffffffc0; // Sign extend
                    return (imm << 20) | (0x0 << 15) | (0x0 << 12) | (rd_rs1 << 7) | 0x13;
                case 0x3: // C.ADDI16SP / C.LUI
                    if (rd_rs1 == 2) { // C.ADDI16SP
                        uint32_t nzimm = ((c_inst >> 12) & 1) << 9 | ((c_inst >> 3) & 3) << 7 | ((c_inst >> 5) & 1) << 6 | ((c_inst >> 2) & 1) << 5 | ((c_inst >> 6) & 1) << 4;
                        if (nzimm == 0) return 0; // Reserved
                        if (nzimm & 0x200) nzimm |= 0xfffffc00; // Sign extend
                        return (nzimm << 20) | (2 << 15) | (0 << 12) | (2 << 7) | 0x13; // addi sp, sp, nzimm
                    } else { // C.LUI
                        if (rd_rs1 == 0) return 0; // Reserved
                        uint32_t nzimm = ((c_inst >> 12) & 1) << 17 | ((c_inst >> 2) & 0x1f) << 12;
                        if (nzimm == 0) return 0; // Reserved
                        if (nzimm & 0x20000) nzimm |= 0xfffe0000; // Sign extend
                        return nzimm | (rd_rs1 << 7) | 0x37; // lui
                    }
                case 0x4: { // C.SRLI, C.SRAI, C.ANDI, C.SUB, C.XOR, C.OR, C.AND, C.SUBW, C.ADDW
                    uint32_t rs1_p = ((c_inst >> 7) & 0x7) + 8; // x8-x15
                    uint32_t funct2_high = (c_inst >> 10) & 0x3;

                    switch (funct2_high) {
                        case 0: // C.SRLI
                        case 1: // C.SRAI
                            {
                                uint32_t shamt = ((c_inst >> 12) & 1) << 5 | ((c_inst >> 2) & 0x1f);
                                if (shamt == 0) return 0; // Reserved
                                if (funct2_high == 0) {
                                    // SRLI
                                    return (shamt << 20) | (rs1_p << 15) | (5 << 12) | (rs1_p << 7) | 0x13;
                                } else {
                                    // SRAI
                                    return (0x20 << 25) | (shamt << 20) | (rs1_p << 15) | (5 << 12) | (rs1_p << 7) | 0x13;
                                }
                            }
                        case 2: // C.ANDI
                            {
                                uint32_t imm = ((c_inst >> 12) & 1) << 5 | ((c_inst >> 2) & 0x1f);
                                if (imm & 0x20) imm |= 0xffffffc0; // Sign extend
                                return (imm << 20) | (rs1_p << 15) | (7 << 12) | (rs1_p << 7) | 0x13; // andi
                            }
                        case 3: // C.SUB, C.XOR, C.OR, C.AND, C.SUBW, C.ADDW
                            {
                                uint32_t rs2_p = ((c_inst >> 2) & 0x7) + 8;
                                uint32_t funct1 = (c_inst >> 12) & 1;
                                uint32_t funct2_low = (c_inst >> 5) & 0x3;

                                if (funct1 == 0) {
                                    switch (funct2_low) {
                                        case 0: // C.SUB
                                            return (0x20 << 25) | (rs2_p << 20) | (rs1_p << 15) | (0 << 12) | (rs1_p << 7) | 0x33;
                                        case 1: // C.XOR
                                            return (rs2_p << 20) | (rs1_p << 15) | (4 << 12) | (rs1_p << 7) | 0x33;
                                        case 2: // C.OR
                                            return (rs2_p << 20) | (rs1_p << 15) | (6 << 12) | (rs1_p << 7) | 0x33;
                                        case 3: // C.AND
                                            return (rs2_p << 20) | (rs1_p << 15) | (7 << 12) | (rs1_p << 7) | 0x33;
                                    }
                                } else { // RV64 only
                                    switch (funct2_low) {
                                        case 0: // C.SUBW
                                            return (0x20 << 25) | (rs2_p << 20) | (rs1_p << 15) | (0 << 12) | (rs1_p << 7) | 0x3B;
                                        case 1: // C.ADDW
                                            return (rs2_p << 20) | (rs1_p << 15) | (0 << 12) | (rs1_p << 7) | 0x3B;
                                        default:
                                            return 0;
                                    }
                                }
                            }
                    }
                    return 0;
                }
                case 0x5: // C.J
                    {
                        int32_t offset = ((c_inst >> 12) & 1) << 11 | ((c_inst >> 8) & 1) << 10 | ((c_inst >> 9) & 3) << 8 |
                                        ((c_inst >> 6) & 1) << 7 | ((c_inst >> 7) & 1) << 6 | ((c_inst >> 2) & 1) << 5 |
                                        ((c_inst >> 11) & 1) << 4 | ((c_inst >> 3) & 7) << 1;
                        if (offset & 0x800) offset |= 0xfffff000; // Sign extend
                        // Encode JAL instruction format: imm[20|10:1|11|19:12] rd opcode
                        uint32_t imm20 = (offset >> 20) & 1;
                        uint32_t imm10_1 = (offset >> 1) & 0x3ff;
                        uint32_t imm11 = (offset >> 11) & 1;
                        uint32_t imm19_12 = (offset >> 12) & 0xff;
                        return (imm20 << 31) | (imm19_12 << 12) | (imm11 << 20) | (imm10_1 << 21) | (0 << 7) | 0x6F;
                    }
                case 0x6: // C.BEQZ
                    {
                        uint32_t rs1_p = ((c_inst >> 7) & 0x7) + 8;
                        // Fixed offset extraction according to RISC-V spec:
                        // offset[8|4:3|7:6|2:1|5] from bits [12|11:10|6:5|4:3|2]
                        int32_t offset = ((c_inst >> 12) & 1) << 8      // bit 12 → offset[8]
                                       | ((c_inst >> 10) & 0x3) << 3    // bits 11-10 → offset[4:3]
                                       | ((c_inst >> 5) & 0x3) << 6     // bits 6-5 → offset[7:6]
                                       | ((c_inst >> 3) & 0x3) << 1     // bits 4-3 → offset[2:1]
                                       | ((c_inst >> 2) & 1) << 5;      // bit 2 → offset[5]
                        if (offset & 0x100) offset |= 0xfffffe00; // Sign extend
                        uint32_t imm_12 = (offset >> 12) & 1;
                        uint32_t imm_10_5 = (offset >> 5) & 0x3f;
                        uint32_t imm_4_1 = (offset >> 1) & 0xf;
                        uint32_t imm_11 = (offset >> 11) & 1;
                        uint32_t b_imm = (imm_12 << 31) | (imm_10_5 << 25) | (imm_4_1 << 8) | (imm_11 << 7);
                        return b_imm | (0 << 20) | (rs1_p << 15) | (0 << 12) | 0x63; // beq rs1', x0, offset
                    }
                case 0x7: // C.BNEZ
                    {
                        uint32_t rs1_p = ((c_inst >> 7) & 0x7) + 8;
                        // Fixed offset extraction according to RISC-V spec (same as C.BEQZ):
                        // offset[8|4:3|7:6|2:1|5] from bits [12|11:10|6:5|4:3|2]
                        int32_t offset = ((c_inst >> 12) & 1) << 8      // bit 12 → offset[8]
                                       | ((c_inst >> 10) & 0x3) << 3    // bits 11-10 → offset[4:3]
                                       | ((c_inst >> 5) & 0x3) << 6     // bits 6-5 → offset[7:6]
                                       | ((c_inst >> 3) & 0x3) << 1     // bits 4-3 → offset[2:1]
                                       | ((c_inst >> 2) & 1) << 5;      // bit 2 → offset[5]
                        if (offset & 0x100) offset |= 0xfffffe00; // Sign extend
                        uint32_t imm_12 = (offset >> 12) & 1;
                        uint32_t imm_10_5 = (offset >> 5) & 0x3f;
                        uint32_t imm_4_1 = (offset >> 1) & 0xf;
                        uint32_t imm_11 = (offset >> 11) & 1;
                        uint32_t b_imm = (imm_12 << 31) | (imm_10_5 << 25) | (imm_4_1 << 8) | (imm_11 << 7);
                        return b_imm | (0 << 20) | (rs1_p << 15) | (1 << 12) | 0x63; // bne rs1', x0, offset
                    }
                default:
                    return 0; // Unknown
            }
        }
        case 0x2: { // C2 quadrant
            switch (funct3) {
                case 0x0: // C.SLLI (RV64)
                    if (rd_rs1 == 0) return 0; // Reserved
                    {
                        uint32_t shamt = ((c_inst >> 12) & 1) << 5 | ((c_inst >> 2) & 0x1f);
                        if (shamt == 0) return 0; // Reserved
                        return (shamt << 20) | (rd_rs1 << 15) | (1 << 12) | (rd_rs1 << 7) | 0x13; // slli
                    }
                case 0x2: // C.LWSP
                    {
                        if (rd_rs1 == 0) return 0; // Reserved
                        uint32_t imm = ((c_inst >> 4) & 0x7) << 2 | ((c_inst >> 12) & 0x1) << 5 | ((c_inst >> 2) & 0x3) << 6;
                        return (imm << 20) | (2 << 15) | (2 << 12) | (rd_rs1 << 7) | 0x03; // lw rd, offset(sp)
                    }
                case 0x3: // C.LDSP (RV64)
                    {
                        if (rd_rs1 == 0) return 0; // Reserved
                        uint32_t imm = ((c_inst >> 5) & 0x3) << 3 | ((c_inst >> 12) & 0x1) << 5 | ((c_inst >> 2) & 0x7) << 6;
                        return (imm << 20) | (2 << 15) | (3 << 12) | (rd_rs1 << 7) | 0x03; // ld rd, offset(sp)
                    }
                case 0x4: // C.JR, C.MV, C.EBREAK, C.JALR, C.ADD
                    if ((c_inst >> 12) & 1) { // c[12] = 1
                        if (rd_rs1 == 0 && rs2 == 0) {
                            // C.EBREAK
                            return 0x00100073;
                        } else if (rs2 == 0) {
                            // C.JALR
                            return (rd_rs1 << 15) | (0x0 << 12) | (0x1 << 7) | 0x67;
                        } else {
                            // C.ADD
                            return (0x0 << 25) | (rs2 << 20) | (rd_rs1 << 15) | (0x0 << 12) | (rd_rs1 << 7) | 0x33;
                        }
                    } else { // c[12] = 0
                        if (rs2 == 0) {
                            // C.JR
                            return (rd_rs1 << 15) | (0x0 << 12) | (0x0 << 7) | 0x67;
                        } else {
                            // C.MV
                            return (0x0 << 25) | (rs2 << 20) | (0x0 << 15) | (0x0 << 12) | (rd_rs1 << 7) | 0x33;
                        }
                    }
                case 0x6: // C.SWSP
                    {
                        uint32_t imm = ((c_inst >> 9) & 0xF) << 2 | ((c_inst >> 7) & 0x3) << 6;
                        uint32_t imm_hi = (imm >> 5) & 0x7F;
                        uint32_t imm_lo = imm & 0x1F;
                        return (imm_hi << 25) | (rs2 << 20) | (2 << 15) | (2 << 12) | (imm_lo << 7) | 0x23; // sw rs2, offset(sp)
                    }
                case 0x7: // C.SDSP (RV64)
                    {
                        uint32_t imm = ((c_inst >> 10) & 0x7) << 3 | ((c_inst >> 7) & 0x7) << 6;
                        uint32_t imm_hi = (imm >> 5) & 0x7F;
                        uint32_t imm_lo = imm & 0x1F;
                        return (imm_hi << 25) | (rs2 << 20) | (2 << 15) | (3 << 12) | (imm_lo << 7) | 0x23; // sd rs2, offset(sp)
                    }
                default:
                    return 0; // Unknown
            }
        }
        default:
            return 0; // Unknown compressed instruction
    }
}

static void step(cpu_t *cpu, mem_t *mem, devices_t *dev, const run_opts_t *opt) {
    uint64_t pc = cpu->pc;
    // Record PC history
    g_pc_history[g_pc_history_idx] = pc;
    g_pc_history_idx = (g_pc_history_idx + 1) % PC_HISTORY_SIZE;

    // Warn if in user mode with MMU disabled
    static bool warned_user_mode_no_mmu = false;
    if (cpu->priv == 0 && cpu->csr_satp == 0 && !warned_user_mode_no_mmu) {
        fprintf(stderr, "\n=== WARNING: User mode (priv=0) with MMU disabled (satp=0) ===\n");
        fprintf(stderr, "PC=0x%016" PRIx64 "\n", pc);
        fprintf(stderr, "This will likely cause memory access errors!\n\n");
        warned_user_mode_no_mmu = true;
    }

    // Special debug for trap handler entry
    static int trap_handler_debug_count = 0;
    if ((trap_handler_debug_count < 5) && (pc >= 0x80075000 && pc <= 0x80075010)) {
        trap_handler_debug_count++;
        fprintf(stderr, "\n=== TRAP HANDLER: PC = 0x%016" PRIx64 " ===\n", pc);
        fprintf(stderr, "  t0(x5)=0x%016" PRIx64 " sp(x2)=0x%016" PRIx64 "\n", cpu->x[5], cpu->x[2]);
    }
    // Special debug for the problematic PC (DISABLED)
    if (false && (pc == 0x800000e0 || pc == 0x800002c8 || pc == 0x800002d2 || pc == 0x800002e2 || pc == 0x800002f4 || pc == 0x800002f6 || pc == 0x80000312)) {
        fprintf(stderr, "\n=== STEP FUNCTION START: PC = 0x%016" PRIx64 " ===\n", pc);
        if (pc == 0x800002d2) {
            fprintf(stderr, "This is the JAL instruction that may cause the problem\n");
        }
        if (pc == 0x800002e2) {
            fprintf(stderr, "This is the ADDI instruction at 0x800002e2\n");
            fprintf(stderr, "Expected instruction: fff78513 (addi a0,a5,-1)\n");
        }
        if (pc == 0x800002f4) {
            fprintf(stderr, "This is the MV instruction at 0x800002f4 (compressed)\n");
            fprintf(stderr, "Expected instruction: 853e (mv a0,a5)\n");
        }
        if (pc == 0x800002f6) {
            fprintf(stderr, "This is the JAL instruction at 0x800002f6\n");
            fprintf(stderr, "Expected instruction: da3ff0ef (jal w_sie)\n");
        }
        if (pc == 0x80000312) {
            fprintf(stderr, "This is the SLLI instruction at 0x80000312 (compressed)\n");
            fprintf(stderr, "Expected instruction: 17fe (slli a5,a5,0x3f)\n");
            fprintf(stderr, "Current a5 = 0x%016" PRIx64 "\n", cpu->x[15]);
        }
    }

    uint32_t inst;
    uint64_t next_pc = pc + 4;

    // Check for compressed instruction
    if ((vmem_read16(cpu, mem, dev, pc, ACCESS_FETCH) & 3) != 3) {
        uint16_t c_inst = vmem_read16(cpu, mem, dev, pc, ACCESS_FETCH);
        inst = decompress_c_inst(c_inst);
        if (inst == 0) {
            // Handle special cases
            if (c_inst == 0x0000) {
                // 0x0000 is typically an illegal instruction or uninitialized memory
                // Treat as NOP for now to allow kernel to continue
                inst = 0x00000013; // NOP (addi x0, x0, 0)
            } else {
                fprintf(stderr, "Unknown compressed instruction 0x%04x at PC=0x%016" PRIx64 "\n", c_inst, pc);
                exit(1);
            }
        }
        next_pc = pc + 2;  // Compressed instructions are 2 bytes
    } else {
        inst = vmem_read32(cpu, mem, dev, pc, ACCESS_FETCH);
    }

    // Check for invalid PC (outside kernel text/data/bss sections)
    // Kernel sections: text(0x80000000-0x8000e780), data(0x80011878-0x8002a3a8), bss(0x8002a400-0x80032ba0)
    // Also allow _end3 region (0x8098b000-0x8110000) which is used by kinit/freerange
    if (cpu->priv == 1 && cpu->csr_satp == 0) { // S-mode with MMU disabled
        if (pc < 0x80000000 || pc > 0x82000000) {
            fprintf(stderr, "ERROR: Invalid PC 0x%016" PRIx64 " in S-mode with MMU disabled!\n", pc);
            fprintf(stderr, "This indicates a jump to uninitialized/invalid memory.\n");
            cpu->halt = true;
            return;
        }
        // Warn if PC is in unexpected range
        bool in_trampoline = (pc >= 0x80088000 && pc < 0x80089000);
        if (!in_trampoline && ((pc > 0x80032ba0 && pc < 0x8098b000) || pc > 0x81200000)) {
            static int warn_count = 0;
            if (warn_count++ < 10) {
                fprintf(stderr, "WARNING: PC 0x%016" PRIx64 " in unexpected memory range\n", pc);
            }
        }
    }

    // Track key PCs in main function
    if (pc == 0x800097d6) {
        fprintf(stderr, ">>> At timerinit call site\n");
    } else if (pc == 0x800097da) {
        fprintf(stderr, ">>> At trap_init call site (returned from timerinit)\n");
    } else if (pc == 0x80009802) {
        fprintf(stderr, ">>> At kinit call site (returned from trap_init)\n");
    } else if (pc == 0x80009826) {
        fprintf(stderr, ">>> At mmu_init call site (returned from kinit!)\n");
    }

    // Debug: Show fetched instruction for problematic PCs
    if (false && (pc == 0x800000e0 || pc == 0x800002c8 || pc == 0x800002d2 || pc == 0x800002e2 || pc == 0x800002f4 || pc == 0x800002f6 || pc == 0x80000312)) {
        fprintf(stderr, "Fetched instruction: 0x%08x\n", inst);
        fprintf(stderr, "next_pc after fetch: 0x%016" PRIx64 "\n", next_pc);
    }

    // 16-bit compressed instructions (C extension) are not supported. low 2 bits != 3 indicates compressed form.
    dec_t d = decode(inst);

    // Debug: Show decoded instruction for problematic PCs
    if (false && (pc == 0x800000e0 || pc == 0x800002c8 || pc == 0x800002d2)) {
        fprintf(stderr, "Decoded opcode: 0x%02x, funct3: 0x%x, rd: %d, rs1: %d, rs2: %d\n",
                d.opcode, d.funct3, d.rd, d.rs1, d.rs2);
        if (pc == 0x800002d2) {
            fprintf(stderr, "JAL: imm_j = %d (0x%x as uint32, 0x%016" PRIx64 " as uint64)\n",
                    (int)d.imm_j, (uint32_t)d.imm_j, (uint64_t)d.imm_j);
            uint64_t target = pc + (uint64_t)d.imm_j;
            fprintf(stderr, "JAL: target = pc + imm_j = 0x%016" PRIx64 " + 0x%016" PRIx64 " = 0x%016" PRIx64 "\n",
                    pc, (uint64_t)d.imm_j, target);
        } else {
            fprintf(stderr, "imm_u: 0x%016" PRIx64 " (for AUIPC)\n", (uint64_t)d.imm_u);
        }
    }

    uint64_t rs1 = cpu->x[d.rs1];
    uint64_t rs2 = cpu->x[d.rs2];
    uint64_t rd_val = 0;
    bool do_write = false;

    // Dispatch major opcodes; only the base RV64I (+W) instruction set is implemented.
    switch (d.opcode) {
        case 0x37: // LUI
            rd_val = (uint64_t)d.imm_u;
            do_write = true;
            break;
        case 0x17: // AUIPC
            rd_val = pc + (uint64_t)d.imm_u;
            do_write = true;
            break;
        case 0x6F: { // JAL
            rd_val = next_pc;
            do_write = true;
            next_pc = pc + (uint64_t)d.imm_j;
            // Track key function calls via JAL
            if (next_pc == 0x800097ce) {
                fprintf(stderr, ">>> JAL to main() from PC=0x%016" PRIx64 "\n", pc);
            } else if (next_pc == 0x800096e2) {
                fprintf(stderr, ">>> JAL to timerinit() from PC=0x%016" PRIx64 "\n", pc);
            } else if (next_pc == 0x80006bdc) {
                fprintf(stderr, ">>> JAL to kinit() from PC=0x%016" PRIx64 "\n", pc);
            } else if (next_pc == 0x80007296) {
                fprintf(stderr, ">>> JAL to mmu_init() from PC=0x%016" PRIx64 "\n", pc);
            } else if (next_pc == 0x80006664) {
                fprintf(stderr, ">>> JAL to trap_init() from PC=0x%016" PRIx64 "\n", pc);
            }
            break;
        }
        case 0x67: { // JALR
            uint64_t t = (rs1 + (uint64_t)d.imm_i) & ~1ULL;
            rd_val = next_pc;
            do_write = true;
            next_pc = t;
            // Track key function calls (updated addresses for current kernel.elf)
            if (t == 0x8000a142) {
                fprintf(stderr, ">>> Calling main() from PC=0x%016" PRIx64 "\n", pc);
            } else if (t == 0x800071b8) {
                fprintf(stderr, ">>> Calling kinit() from PC=0x%016" PRIx64 "\n", pc);
            } else if (t == 0x80007b76) {
                fprintf(stderr, ">>> Calling mmu_init() from PC=0x%016" PRIx64 "\n", pc);
                fprintf(stderr, ">>> CPU state: pc=0x%016" PRIx64 " sp=0x%016" PRIx64 " ra=0x%016" PRIx64 "\n",
                        pc, cpu->x[2], cpu->x[1]);
            } else if (t == 0x80007acc) {
                fprintf(stderr, ">>> Calling uart_init() from PC=0x%016" PRIx64 "\n", pc);
            }
            break;
        }
        case 0x63: { // BRANCH
            int64_t off = d.imm_b;
            bool take = false;
            switch (d.funct3) {
                case 0: take = (rs1 == rs2); break; // BEQ
                case 1: take = (rs1 != rs2); break; // BNE
                case 4: take = ((int64_t)rs1 < (int64_t)rs2); break; // BLT
                case 5: take = ((int64_t)rs1 >= (int64_t)rs2); break; // BGE
                case 6: take = (rs1 < rs2); break; // BLTU
                case 7: take = (rs1 >= rs2); break; // BGEU
                default:
                    fprintf(stderr, "Unknown BRANCH funct3=%u at PC=0x%016" PRIx64 "\n", d.funct3, pc); exit(1);
            }
            if (take) next_pc = pc + (uint64_t)off;
            break;
        }
        case 0x03: { // LOAD
            uint64_t addr = rs1 + (uint64_t)d.imm_i;
            switch (d.funct3) {
                case 0: rd_val = (uint64_t)(int64_t)(int8_t)vmem_read8(cpu, mem, dev, addr, ACCESS_LOAD); break; // LB
                case 1: rd_val = (uint64_t)(int64_t)(int16_t)vmem_read16(cpu, mem, dev, addr, ACCESS_LOAD); break; // LH
                case 2: rd_val = (uint64_t)(int64_t)(int32_t)vmem_read32(cpu, mem, dev, addr, ACCESS_LOAD); break; // LW
                case 3: rd_val = vmem_read64(cpu, mem, dev, addr, ACCESS_LOAD); break; // LD
                case 4: rd_val = (uint64_t)vmem_read8(cpu, mem, dev, addr, ACCESS_LOAD); break; // LBU
                case 5: rd_val = (uint64_t)vmem_read16(cpu, mem, dev, addr, ACCESS_LOAD); break; // LHU
                case 6: rd_val = (uint64_t)vmem_read32(cpu, mem, dev, addr, ACCESS_LOAD); break; // LWU
                default: fprintf(stderr, "Unknown LOAD funct3=%u\n", d.funct3); exit(1);
            }
            do_write = true;
            break;
        }
        case 0x23: { // STORE
            uint64_t addr = rs1 + (uint64_t)d.imm_s;
            switch (d.funct3) {
                case 0: vmem_write8(cpu, mem, dev, addr, (uint8_t)(rs2 & 0xff), ACCESS_STORE); break; // SB
                case 1: vmem_write16(cpu, mem, dev, addr, (uint16_t)(rs2 & 0xffff), ACCESS_STORE); break; // SH
                case 2: vmem_write32(cpu, mem, dev, addr, (uint32_t)(rs2 & 0xffffffffu), ACCESS_STORE); break; // SW
                case 3: vmem_write64(cpu, mem, dev, addr, rs2, ACCESS_STORE); break; // SD
                default: fprintf(stderr, "Unknown STORE funct3=%u\n", d.funct3); exit(1);
            }
            if (false && pc == 0x800001ae) {
                fprintf(stderr, "After store: next_pc = 0x%016" PRIx64 "\n", next_pc);
            }
            break;
        }
        case 0x13: { // OP-IMM
            switch (d.funct3) {
                case 0: rd_val = rs1 + (uint64_t)d.imm_i; break; // ADDI
                case 2: rd_val = ((int64_t)rs1 < (int64_t)(int64_t)d.imm_i) ? 1 : 0; break; // SLTI
                case 3: rd_val = (rs1 < (uint64_t)d.imm_i) ? 1 : 0; break; // SLTIU
                case 4: rd_val = rs1 ^ (uint64_t)d.imm_i; break; // XORI
                case 6: rd_val = rs1 | (uint64_t)d.imm_i; break; // ORI
                case 7: rd_val = rs1 & (uint64_t)d.imm_i; break; // ANDI
                case 1: { // SLLI
                    uint32_t sh = d.imm_i & 0x3f;
                    if (false && pc == 0x80000312) {
                        fprintf(stderr, "SLLI: shift amount = %u (0x%x)\n", sh, sh);
                        fprintf(stderr, "SLLI: rs1 = 0x%016" PRIx64 "\n", rs1);
                    }
                    rd_val = rs1 << sh;
                    if (false && pc == 0x80000312) {
                        fprintf(stderr, "SLLI: result (rd_val) = 0x%016" PRIx64 "\n", rd_val);
                        fprintf(stderr, "SLLI: next_pc after computation = 0x%016" PRIx64 "\n", next_pc);
                    }
                    break;
                }
                case 5: { // SRLI/SRAI
                    uint32_t sh = d.imm_i & 0x3f;
                    if ((d.imm_i & (1<<10)) == 0) { // SRLI (funct7=0000000)
                        rd_val = rs1 >> sh;
                    } else { // SRAI (funct7=0100000)
                        rd_val = (uint64_t)((int64_t)rs1 >> sh);
                    }
                    break;
                }
                default: fprintf(stderr, "Unknown OP-IMM funct3=%u\n", d.funct3); exit(1);
            }
            do_write = true;
            break;
        }
        case 0x33: { // OP
            uint32_t f3 = d.funct3;
            uint32_t f7 = d.funct7;
            // M extension (multiply/divide)
            if (f7 == 0x01) {
                switch (f3) {
                    case 0: // MUL
                        rd_val = (uint64_t)((int64_t)rs1 * (int64_t)rs2);
                        break;
                    case 1: { // MULH
                        __int128_t a = (__int128_t)(int64_t)rs1;
                        __int128_t b = (__int128_t)(int64_t)rs2;
                        rd_val = (uint64_t)((a * b) >> 64);
                        break;
                    }
                    case 2: { // MULHSU
                        __int128_t a = (__int128_t)(int64_t)rs1;
                        __uint128_t b = (__uint128_t)rs2;
                        rd_val = (uint64_t)((__int128_t)(a * (__int128_t)b) >> 64);
                        break;
                    }
                    case 3: { // MULHU
                        __uint128_t a = (__uint128_t)rs1;
                        __uint128_t b = (__uint128_t)rs2;
                        rd_val = (uint64_t)((a * b) >> 64);
                        break;
                    }
                    case 4: // DIV
                        if (rs2 == 0) rd_val = (uint64_t)-1;
                        else if (rs1 == (uint64_t)INT64_MIN && rs2 == (uint64_t)-1) rd_val = rs1;
                        else rd_val = (uint64_t)((int64_t)rs1 / (int64_t)rs2);
                        break;
                    case 5: // DIVU
                        rd_val = (rs2 == 0) ? (uint64_t)-1 : (rs1 / rs2);
                        break;
                    case 6: // REM
                        if (rs2 == 0) rd_val = rs1;
                        else if (rs1 == (uint64_t)INT64_MIN && rs2 == (uint64_t)-1) rd_val = 0;
                        else rd_val = (uint64_t)((int64_t)rs1 % (int64_t)rs2);
                        break;
                    case 7: // REMU
                        rd_val = (rs2 == 0) ? rs1 : (rs1 % rs2);
                        break;
                }
                do_write = true;
                break;
            }
            switch (f3) {
                case 0:
                    if (f7 == 0x00) rd_val = rs1 + rs2; // ADD
                    else if (f7 == 0x20) rd_val = rs1 - rs2; // SUB
                    else { fprintf(stderr, "Unknown OP f7=0x%x f3=%u\n", f7, f3); exit(1);}
                    break;
                case 1: // SLL
                    rd_val = rs1 << (rs2 & 0x3f);
                    break;
                case 2: // SLT
                    rd_val = ((int64_t)rs1 < (int64_t)rs2) ? 1 : 0;
                    break;
                case 3: // SLTU
                    rd_val = (rs1 < rs2) ? 1 : 0;
                    break;
                case 4: // XOR
                    rd_val = rs1 ^ rs2; break;
                case 5: // SRL/SRA
                    if (f7 == 0x00) rd_val = rs1 >> (rs2 & 0x3f);
                    else if (f7 == 0x20) rd_val = (uint64_t)((int64_t)rs1 >> (rs2 & 0x3f));
                    else { fprintf(stderr, "Unknown SRL/SRA f7=0x%x\n", f7); exit(1);}    
                    break;
                case 6: // OR
                    rd_val = rs1 | rs2; break;
                case 7: // AND
                    rd_val = rs1 & rs2; break;
                default: fprintf(stderr, "Unknown OP funct3=%u\n", f3); exit(1);
            }
            do_write = true;
            break;
        }
        case 0x1B: { // OP-IMM-32
            uint32_t sh = d.imm_i & 0x1f;
            switch (d.funct3) {
                case 0: { // ADDIW
                    uint32_t rs1_32 = zext32(rs1);
                    uint32_t imm_32 = (uint32_t)(int32_t)d.imm_i;
                    uint32_t result_32 = rs1_32 + imm_32;
                    rd_val = sext32(result_32);
                    break;
                }
                case 1: rd_val = sext32(zext32(rs1) << sh); break; // SLLIW
                case 5: // SRLIW/SRAIW
                    if ((d.imm_i & (1<<10)) == 0) rd_val = sext32(zext32(rs1) >> sh); // SRLIW
                    else rd_val = sext32((uint32_t)((int32_t)zext32(rs1) >> sh)); // SRAIW
                    break;
                default: fprintf(stderr, "Unknown OP-IMM-32 f3=%u\n", d.funct3); exit(1);
            }
            do_write = true;
            break;
        }
        case 0x3B: { // OP-32
            uint32_t f3 = d.funct3;
            uint32_t f7 = d.funct7;
            uint32_t a = (uint32_t)rs1;
            uint32_t b = (uint32_t)rs2;
            // M extension (32-bit multiply/divide)
            if (f7 == 0x01) {
                switch (f3) {
                    case 0: // MULW
                        rd_val = sext32((uint64_t)((int32_t)a * (int32_t)b));
                        break;
                    case 4: // DIVW
                        if (b == 0) rd_val = sext32((uint64_t)-1);
                        else if ((int32_t)a == INT32_MIN && (int32_t)b == -1) rd_val = sext32((uint64_t)a);
                        else rd_val = sext32((uint64_t)((int32_t)a / (int32_t)b));
                        break;
                    case 5: // DIVUW
                        rd_val = (b == 0) ? sext32((uint64_t)-1) : sext32((uint64_t)(a / b));
                        break;
                    case 6: // REMW
                        if (b == 0) rd_val = sext32((uint64_t)a);
                        else if ((int32_t)a == INT32_MIN && (int32_t)b == -1) rd_val = 0;
                        else rd_val = sext32((uint64_t)((int32_t)a % (int32_t)b));
                        break;
                    case 7: // REMUW
                        rd_val = (b == 0) ? sext32((uint64_t)a) : sext32((uint64_t)(a % b));
                        break;
                    default:
                        fprintf(stderr, "Unknown OP-32 M-ext f3=%u\n", f3);
                        exit(1);
                }
                do_write = true;
                break;
            }
            switch (f3) {
                case 0:
                    if (f7 == 0x00) rd_val = sext32((uint64_t)((uint32_t)(a + b))); // ADDW
                    else if (f7 == 0x20) rd_val = sext32((uint64_t)((uint32_t)(a - b))); // SUBW
                    else { fprintf(stderr, "Unknown OP-32 f7=0x%x f3=%u\n", f7, f3); exit(1);}
                    break;
                case 1: // SLLW
                    rd_val = sext32((uint64_t)((uint32_t)(a << (b & 0x1f))));
                    break;
                case 5: // SRLW/SRAW
                    if (f7 == 0x00) rd_val = sext32((uint64_t)(a >> (b & 0x1f)));
                    else if (f7 == 0x20) rd_val = sext32((uint64_t)((uint32_t)((int32_t)a >> (b & 0x1f))));
                    else { fprintf(stderr, "Unknown SRLW/SRAW f7=0x%x\n", f7); exit(1);}    
                    break;
                default: fprintf(stderr, "Unknown OP-32 f3=%u\n", f3); exit(1);
            }
            do_write = true;
            break;
        }
        case 0x0F: // FENCE family — treat as NOP
            break;
        case 0x2F: { // AMO (Atomic Memory Operations)
            uint32_t f3 = d.funct3; // width: 010=W (32-bit), 011=D (64-bit)
            uint32_t f7 = d.funct7;
            uint32_t f5 = (f7 >> 2) & 0x1F; // Top 5 bits of funct7
            bool aq = (f7 >> 1) & 1;
            bool rl = f7 & 1;
            uint64_t addr = rs1;

            // LR/SC use f5 to distinguish operations
            if (f5 == 0x02) { // LR.W or LR.D
                if (f3 == 2) { // LR.W
                    uint32_t val = vmem_read32(cpu, mem, dev, addr, ACCESS_LOAD);
                    rd_val = sext32((uint64_t)val);
                } else if (f3 == 3) { // LR.D
                    rd_val = vmem_read64(cpu, mem, dev, addr, ACCESS_LOAD);
                } else {
                    fprintf(stderr, "Unknown LR width f3=%u at PC=0x%016" PRIx64 "\n", f3, pc);
                    exit(1);
                }
                cpu->lr_valid = true;
                cpu->lr_addr = addr;
                do_write = true;
            } else if (f5 == 0x03) { // SC.W or SC.D
                // Store-conditional: succeeds if reservation is valid
                if (cpu->lr_valid && cpu->lr_addr == addr) {
                    if (f3 == 2) { // SC.W
                        vmem_write32(cpu, mem, dev, addr, (uint32_t)rs2, ACCESS_STORE);
                    } else if (f3 == 3) { // SC.D
                        vmem_write64(cpu, mem, dev, addr, rs2, ACCESS_STORE);
                    } else {
                        fprintf(stderr, "Unknown SC width f3=%u at PC=0x%016" PRIx64 "\n", f3, pc);
                        exit(1);
                    }
                    rd_val = 0; // Success
                } else {
                    rd_val = 1; // Failure
                }
                cpu->lr_valid = false;
                do_write = true;
            } else {
                // Other AMO operations: AMOSWAP, AMOADD, AMOXOR, AMOAND, AMOOR, AMOMIN, AMOMAX, AMOMINU, AMOMAXU
                uint64_t mem_val;
                if (f3 == 2) { // AMO.W
                    mem_val = sext32((uint64_t)vmem_read32(cpu, mem, dev, addr, ACCESS_LOAD));
                } else if (f3 == 3) { // AMO.D
                    mem_val = vmem_read64(cpu, mem, dev, addr, ACCESS_LOAD);
                } else {
                    fprintf(stderr, "Unknown AMO width f3=%u at PC=0x%016" PRIx64 "\n", f3, pc);
                    exit(1);
                }

                uint64_t new_val = mem_val;
                switch (f5) {
                    case 0x01: new_val = rs2; break; // AMOSWAP
                    case 0x00: new_val = mem_val + rs2; break; // AMOADD
                    case 0x04: new_val = mem_val ^ rs2; break; // AMOXOR
                    case 0x0C: new_val = mem_val & rs2; break; // AMOAND
                    case 0x08: new_val = mem_val | rs2; break; // AMOOR
                    case 0x10: new_val = ((int64_t)mem_val < (int64_t)rs2) ? mem_val : rs2; break; // AMOMIN
                    case 0x14: new_val = ((int64_t)mem_val > (int64_t)rs2) ? mem_val : rs2; break; // AMOMAX
                    case 0x18: new_val = (mem_val < rs2) ? mem_val : rs2; break; // AMOMINU
                    case 0x1C: new_val = (mem_val > rs2) ? mem_val : rs2; break; // AMOMAXU
                    default:
                        fprintf(stderr, "Unknown AMO f5=0x%x at PC=0x%016" PRIx64 "\n", f5, pc);
                        exit(1);
                }

                if (f3 == 2) { // AMO.W
                    vmem_write32(cpu, mem, dev, addr, (uint32_t)new_val, ACCESS_STORE);
                    rd_val = sext32((uint64_t)(uint32_t)mem_val);
                } else { // AMO.D
                    vmem_write64(cpu, mem, dev, addr, new_val, ACCESS_STORE);
                    rd_val = mem_val;
                }
                do_write = true;
            }
            break;
        }
        case 0x73: { // SYSTEM
            // Debug: log all SYSTEM instructions at problematic PCs
            if (pc >= 0x800000e0 && pc <= 0x800000f0) {
                // fprintf(stderr, "=== SYSTEM instruction at PC 0x%016" PRIx64 " ===\n", pc);
                // fprintf(stderr, "funct3 = %d, raw = 0x%08x\n", d.funct3, d.raw);
            }

            uint32_t csr_funct = d.funct3;
            if (csr_funct == 0) {
                uint32_t sys_imm12 = (d.raw >> 20) & 0xFFF;
                if (sys_imm12 == 0) { // ECALL
                    uint64_t cause = 0;
                    switch (cpu->priv) {
                        case 0: cause = CAUSE_ECALL_FROM_U; break;
                        case 1: cause = CAUSE_ECALL_FROM_S; break;
                        case 3: cause = CAUSE_ECALL_FROM_M; break;
                    }
                    take_trap(cpu, cause, 0);
                    return; // Don't update PC normally
                } else if (sys_imm12 == 1) { // EBREAK
                    take_trap(cpu, CAUSE_BREAKPOINT, pc);
                    return;
                } else if (sys_imm12 == 0x102) { // SRET
                    static int sret_debug_count = 0;
                    uint8_t new_priv = (cpu->csr_sstatus >> 8) & 1;
                    // if (sret_debug_count++ < 10 || new_priv == 0) {
                    //     fprintf(stderr, "SRET: sepc=0x%016" PRIx64 ", priv %d -> %d, satp=0x%016" PRIx64 "\n",
                    //             cpu->csr_sepc, cpu->priv, (int)new_priv, cpu->csr_satp);
                    // }
                    cpu->pc = cpu->csr_sepc;
                    // Restore privilege level from SPP
                    cpu->priv = new_priv; // SPP field (only bit 8)
                    // Restore SIE from SPIE
                    uint64_t spie = (cpu->csr_mstatus >> 5) & 1;
                    cpu->csr_mstatus = (cpu->csr_mstatus & ~(1ULL << 1)) | (spie << 1);
                    // Set SPIE = 1
                    cpu->csr_mstatus |= (1ULL << 5);
                    // Clear SPP (set to U-mode)
                    cpu->csr_sstatus &= ~(1ULL << 8);
                    return;
                } else if (sys_imm12 == 0x302) { // MRET
                    static int mret_debug_count = 0;
                    if (mret_debug_count++ < 5) {
                        fprintf(stderr, "MRET: mepc=0x%016" PRIx64 ", priv %d -> %d, mstatus=0x%016" PRIx64 "\n",
                                cpu->csr_mepc, cpu->priv, (int)((cpu->csr_mstatus >> 11) & 3), cpu->csr_mstatus);
                    }
                    if (cpu->csr_mepc == 0) {
                        fprintf(stderr, "MRET with mepc=0, halting\n");
                        cpu->halt = true;
                        cpu->exit_code = 1;
                        return;
                    }
                    cpu->pc = cpu->csr_mepc;
                    // Restore privilege level from MPP
                    cpu->priv = (cpu->csr_mstatus >> 11) & 3; // MPP field
                    // Restore MIE from MPIE
                    uint64_t mpie = (cpu->csr_mstatus >> 7) & 1;
                    cpu->csr_mstatus = (cpu->csr_mstatus & ~(1ULL << 3)) | (mpie << 3);
                    // Set MPIE = 1
                    cpu->csr_mstatus |= (1ULL << 7);
                    // Set MPP = 0 (U-mode)
                    cpu->csr_mstatus &= ~(3ULL << 11);
                    return;
                } else if ((d.raw & 0xfe007fffU) == 0x12000073U) {
                    tlb_flush_all(cpu);
                } else if (sys_imm12 == 0x105) { // WFI - Wait For Interrupt
                    // WFI: idle until interrupt pending
                    // For emulator, we just continue execution and check for interrupts
                    // In a real implementation, this would halt the CPU until an interrupt arrives
                    // For now, treat as NOP since we check for interrupts every instruction
                } else {
                    fprintf(stderr, "SYSTEM(0) unknown imm12=0x%x at PC=0x%016" PRIx64 "\n", sys_imm12, pc);
                    exit(1);
                }
            } else if (csr_funct >= 1 && csr_funct <= 7) {
                // Full CSR support
                uint32_t csr_addr = (d.raw >> 20) & 0xFFF;
                uint64_t old = csr_read(cpu, csr_addr, dev);
                uint64_t zimm = d.rs1; // for *I forms, rs1 encoded as zimm
                bool is_imm = (csr_funct & 0x4) != 0;
                uint64_t src = is_imm ? (uint64_t)zimm : cpu->x[d.rs1];

                // Debug CSR writes at problematic PC
                // if (pc >= 0x800000e0 && pc <= 0x800000f0) {
                //     fprintf(stderr, "CSR operation: addr=0x%03x, old=0x%016" PRIx64 ", src=0x%016" PRIx64 "\n",
                //             csr_addr, old, src);
                // }

                uint64_t newv = old;
                switch (csr_funct & 0x3) {
                    case 1: // CSRRW
                        newv = src;
                        break;
                    case 2: // CSRRS
                        if (src) newv = old | src;
                        break;
                    case 3: // CSRRC
                        if (src) newv = old & ~src;
                        break;
                    default:
                        fprintf(stderr, "Unsupported CSR funct3=%u\n", csr_funct); exit(1);
                }

                if (pc >= 0x800000e0 && pc <= 0x800000f0) {
                    // fprintf(stderr, "CSR write: newv=0x%016" PRIx64 "\n", newv);
                }

                csr_write(cpu, csr_addr, newv);
                rd_val = old; do_write = (d.rd != 0);
            } else {
                fprintf(stderr, "SYSTEM not implemented (funct3=%u) at PC=0x%016" PRIx64 "\n", csr_funct, pc);
                exit(1);
            }
            break;
        }
        case 0x77: { // OP-FP (Floating-Point operations)
            // For now, implement minimal floating-point support
            // Most FP operations will just set rd to 0 or rs1 value
            switch (d.funct7) {
                case 0x60: // FCVT.W.S - convert single to word
                case 0x61: // FCVT.WU.S - convert single to unsigned word
                case 0x68: // FCVT.S.W - convert word to single
                case 0x69: // FCVT.S.WU - convert unsigned word to single
                    // Simplified: just move rs1 to rd for conversion ops
                    rd_val = cpu->x[d.rs1];
                    do_write = true;
                    break;
                case 0x70: // FMV.X.W or FCLASS.S
                case 0x78: // FMV.W.X
                    // Move operations: copy rs1 to rd
                    rd_val = cpu->x[d.rs1];
                    do_write = true;
                    break;
                default:
                    // For other FP operations, just set rd to 0
                    rd_val = 0;
                    do_write = true;
                    break;
            }
            break;
        }
        default:
            fprintf(stderr, "Unknown opcode 0x%02x at PC=0x%016" PRIx64 " inst=0x%08x\n", d.opcode, pc, d.raw);
            exit(1);
    }

    if (do_write) {
        set_x(cpu, d.rd, rd_val);
    }

    cpu->pc = next_pc;
    cpu->x[0] = 0;

    if (opt && opt->trace) {
        fprintf(stderr, "PC=0x%016" PRIx64 " INST=0x%08x\n", pc, inst);
        dump_regs(cpu);
    }
}

typedef struct {
    const char *image_path;
    bool raw;
    uint64_t raw_addr;
    const char *disk_path;
    uint64_t entry;
    bool entry_set;
    uint64_t mem_size;
    uint64_t mem_base;
    run_opts_t run;
    bool smoke;
    // MMU options
    bool mmu_sv39;
    bool satp_set;
    uint64_t satp_val;
    bool rootpt_set;
    uint64_t rootpt_pa;
} cli_t;
// Holds command-line arguments: image type (ELF/RAW), memory settings, trace options, etc.

static void usage(const char *prog) {
    fprintf(stderr,
        "Usage: %s [options]\n"
        "Options:\n"
        "  -i <file>         Input image (ELF64 by default)\n"
        "  --disk <file>     Path to virtio-blk disk image (default ../fs.img)\n"
        "  --raw <addr>      Treat input as raw, load at hex <addr>\n"
        "  --mem <MB>        Memory size in MB (default 128)\n"
        "  --base <hex>      Memory base address (default 0x80000000)\n"
        "  --entry <hex>     Override entry PC\n"
        "  --mmu <mode>      MMU mode: off|sv39 (default off)\n"
        "  --satp <hex>      Set satp CSR value (implies MMU if MODE=8)\n"
        "  --rootpt <hex>    Set SV39 root page table physical address (implies sv39)\n"
        "  --trace           Enable instruction + regs trace\n"
        "  --steps <N>       Max steps before stop (0=inf)\n"
        "  --smoke           Run built-in smoke (no file needed)\n",
        prog);
}

static bool parse_hex_u64(const char *s, uint64_t *out) {
    if (!s) return false;
    char *end = NULL;
    uint64_t v = strtoull(s, &end, 16);
    if (end == s || (end && *end != '\0')) return false;
    *out = v; return true;
}

static bool parse_u64(const char *s, uint64_t *out) {
    if (!s) return false;
    char *end = NULL;
    uint64_t v = strtoull(s, &end, 10);
    if (end == s || (end && *end != '\0')) return false;
    *out = v; return true;
}

static void cli_defaults(cli_t *c) {
    memset(c, 0, sizeof(*c));
    c->mem_size = 128ULL << 20; // 128 MiB
    // Default memory size 128MiB, base address 0x8000_0000
    c->mem_base = 0x80000000ULL;
    c->disk_path = "../fs.img";
    c->run.trace = false;
    c->run.max_steps = 0;
    c->raw = false;
    c->raw_addr = 0;
    c->entry_set = false;
    c->smoke = false;
    c->mmu_sv39 = false;
    c->satp_set = false;
    c->satp_val = 0;
    c->rootpt_set = false;
    c->rootpt_pa = 0;
}

static bool cli_parse(cli_t *c, int argc, char **argv) {
    cli_defaults(c);
    const char *prog = argv[0];
    for (int i = 1; i < argc; i++) {
        const char *a = argv[i];
        if (strcmp(a, "-h") == 0 || strcmp(a, "--help") == 0) {
            usage(prog); return false;
        } else if (strcmp(a, "-i") == 0) {
            if (++i >= argc) { fprintf(stderr, "-i requires a file\n"); return false; }
            c->image_path = argv[i];
        } else if (strcmp(a, "--disk") == 0) {
            if (++i >= argc) { fprintf(stderr, "--disk requires a file\n"); return false; }
            c->disk_path = argv[i];
        } else if (strcmp(a, "--raw") == 0) {
            if (++i >= argc) { fprintf(stderr, "--raw requires hex addr\n"); return false; }
            if (!parse_hex_u64(argv[i], &c->raw_addr)) { fprintf(stderr, "invalid --raw addr\n"); return false; }
            c->raw = true;
        } else if (strcmp(a, "--mem") == 0) {
            if (++i >= argc) { fprintf(stderr, "--mem requires MB\n"); return false; }
            uint64_t mb;
            if (!parse_u64(argv[i], &mb)) { fprintf(stderr, "invalid --mem\n"); return false; }
            c->mem_size = mb << 20;
        } else if (strcmp(a, "--base") == 0) {
            if (++i >= argc) { fprintf(stderr, "--base requires hex addr\n"); return false; }
            if (!parse_hex_u64(argv[i], &c->mem_base)) { fprintf(stderr, "invalid --base\n"); return false; }
        } else if (strcmp(a, "--entry") == 0) {
            if (++i >= argc) { fprintf(stderr, "--entry requires hex addr\n"); return false; }
            if (!parse_hex_u64(argv[i], &c->entry)) { fprintf(stderr, "invalid --entry\n"); return false; }
            c->entry_set = true;
        } else if (strcmp(a, "--mmu") == 0) {
            if (++i >= argc) { fprintf(stderr, "--mmu requires mode (off|sv39)\n"); return false; }
            const char *m = argv[i];
            if (strcmp(m, "off") == 0) { c->mmu_sv39 = false; }
            else if (strcmp(m, "sv39") == 0) { c->mmu_sv39 = true; }
            else { fprintf(stderr, "invalid --mmu mode: %s\n", m); return false; }
        } else if (strcmp(a, "--satp") == 0) {
            if (++i >= argc) { fprintf(stderr, "--satp requires hex value\n"); return false; }
            if (!parse_hex_u64(argv[i], &c->satp_val)) { fprintf(stderr, "invalid --satp\n"); return false; }
            c->satp_set = true;
        } else if (strcmp(a, "--rootpt") == 0) {
            if (++i >= argc) { fprintf(stderr, "--rootpt requires hex physical addr\n"); return false; }
            if (!parse_hex_u64(argv[i], &c->rootpt_pa)) { fprintf(stderr, "invalid --rootpt\n"); return false; }
            c->rootpt_set = true;
        } else if (strcmp(a, "--trace") == 0) {
            c->run.trace = true;
        } else if (strcmp(a, "--steps") == 0) {
            if (++i >= argc) { fprintf(stderr, "--steps requires N\n"); return false; }
            if (!parse_u64(argv[i], &c->run.max_steps)) { fprintf(stderr, "invalid --steps\n"); return false; }
        } else if (strcmp(a, "--smoke") == 0) {
            c->smoke = true;
        } else {
            fprintf(stderr, "Unknown arg: %s\n", a);
            usage(prog);
            return false;
        }
    }
    return true;
}

// Setup non-blocking stdin for UART RX
static struct termios g_old_term;
static bool g_term_setup = false;

static void setup_stdin(void) {
    struct termios new_term;
    tcgetattr(STDIN_FILENO, &g_old_term);
    new_term = g_old_term;
    new_term.c_lflag &= ~(ICANON | ECHO); // Disable canonical mode and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &new_term);
    fcntl(STDIN_FILENO, F_SETFL, fcntl(STDIN_FILENO, F_GETFL) | O_NONBLOCK);
    g_term_setup = true;
}

static void restore_stdin(void) {
    if (g_term_setup) {
        tcsetattr(STDIN_FILENO, TCSANOW, &g_old_term);
        fcntl(STDIN_FILENO, F_SETFL, fcntl(STDIN_FILENO, F_GETFL) & ~O_NONBLOCK);
        g_term_setup = false;
    }
}

// Check stdin for UART RX data
static void check_uart_rx(devices_t *dev) {
    if (!dev->uart_rx_ready) {
        char c;
        ssize_t n = read(STDIN_FILENO, &c, 1);
        if (n == 1) {
            dev->uart_rbr = (uint8_t)c;
            dev->uart_rx_ready = true;
            dev->uart_lsr |= 0x01; // Set RX_READY bit
            if (dev->uart_ier & 0x01) {
                plic_raise_irq(dev, UART_PLIC_IRQ);
            }
        }
    }
}

static void run(cpu_t *cpu, mem_t *mem, devices_t *dev, const run_opts_t *opt) {
    g_debug_cpu = cpu; // Set global debug pointer
    uint64_t steps = 0;
    bool user_mode_announced = false;
    // Setup non-blocking stdin for UART input
    setup_stdin();

    while (!cpu->halt) {
        g_step_counter = steps;
        if (steps && (steps % 1000000ULL) == 0) {
            fprintf(stderr, "[emu] step=%" PRIu64 " pc=0x%016" PRIx64 " priv=%d satp=0x%016" PRIx64 " stimecmp=0x%016" PRIx64 " sip=0x%016" PRIx64 " sie=0x%016" PRIx64 "\n",
                    steps, cpu->pc, cpu->priv, cpu->csr_satp, cpu->csr_stimecmp, cpu->csr_sip, cpu->csr_sie);
        }
        // Debug: Print PC periodically to detect infinite loops (disabled for performance)
        /*
        static uint64_t last_pc_log = 0;
        static uint64_t same_pc_count = 0;
        if (steps % 100000 == 0) {
            if (cpu->pc == last_pc_log) {
                same_pc_count++;
                if (same_pc_count > 3) {
                    fprintf(stderr, ">>> STUCK at PC=0x%016" PRIx64 " for %" PRIu64 " iterations\n",
                            cpu->pc, same_pc_count * 100000ULL);
                }
            } else {
                same_pc_count = 0;
            }
            last_pc_log = cpu->pc;
            fprintf(stderr, ">>> PC=0x%016" PRIx64 " steps=%" PRIu64 "\n", cpu->pc, steps);
        }
        */
        

        // Check for UART RX input every step for immediate responsiveness
        check_uart_rx(dev);

        // Keep CLINT time in sync with host time
        clint_update_mtime(dev);

        // Check for pending interrupts before executing instruction
        check_pending_interrupts(cpu, dev);

        step(cpu, mem, dev, opt);
        if (!user_mode_announced && cpu->priv == 0) {
            fprintf(stderr, "\nMINUX9 user mode entered. Shell has no prompt; type commands and press Enter.\n");
            user_mode_announced = true;
        }
        steps++;
        if (opt->max_steps && steps >= opt->max_steps) {
            fprintf(stderr, "Hit max steps (%" PRIu64 "), stopping.\n", opt->max_steps);
            fprintf(stderr, "UART writes: %" PRIu64 "\n", dev->uart_write_count);
            fprintf(stderr, "Timer interrupts: %" PRIu64 "\n", dev->timer_interrupt_count);
            fprintf(stderr, "External interrupts: %" PRIu64 "\n", dev->external_interrupt_count);
            break;
        }
        // Report PC every 50k steps to see where kernel is executing
        // Report more frequently if we're in user space to detect loops (DISABLED)
        // if (cpu->pc >= 0x80c00000 && steps % 10000 == 0 && steps > 100000) {
        //     fprintf(stderr, "UserSpace Step %" PRIu64 ": PC=0x%016" PRIx64 "\n", steps, cpu->pc);
        // }
        // Report first few instructions in user space to see what shell is doing (DISABLED)
        // if (cpu->pc >= 0x80c00000 && steps >= 100000 && steps <= 100010) {
        //     uint32_t inst = mem_read32(mem, cpu->pc);
        //     fprintf(stderr, "UserSpace Inst %" PRIu64 ": PC=0x%016" PRIx64 " inst=0x%08x\n", steps, cpu->pc, inst);
        // }
        // Debug: catch when PC jumps to user space area for the first time
        // (Disabled for minux9)
        // if (cpu->pc >= 0x80c00000 && steps > 50000 && steps < 100000) {
        //     fprintf(stderr, "First jump to user space: Step %" PRIu64 " PC=0x%016" PRIx64 "\n", steps, cpu->pc);
        // }
    }
}
// Execution loop: repeat step until the stop flag or step limit is reached.

static void load_smoke(mem_t *mem, uint64_t addr, uint64_t *entry) {
    // Program: addi a0, x0, 42; ecall
    // Minimal smoke program (set a0=42 then ecall)
    uint32_t prog[] = {0x02a00513u, 0x00000073u};
    mem_write32(mem, addr, prog[0]);
    mem_write32(mem, addr+4, prog[1]);
    *entry = addr;
}

int main(int argc, char **argv) {
    cli_t cli;
    if (!cli_parse(&cli, argc, argv)) {
        return 1;
    }

    mem_t mem; mem_init(&mem, cli.mem_size, cli.mem_base);
    devices_t dev; devices_init(&dev, cli.disk_path);
    if (!dev.vblk.present) {
        fprintf(stderr, "virtio-blk disk image not available (%s)\n", cli.disk_path ? cli.disk_path : "none");
        return 1;
    }
    cpu_t cpu = {0};
    cpu.priv = 3; // Start in M-mode (machine mode)
    // Initialize trap vectors
    cpu.csr_mtvec = 0x80000000ULL; // Default M-mode trap vector
    cpu.csr_stvec = 0x80000000ULL; // Default S-mode trap vector
    // Enable interrupts in mstatus (MIE and SIE bits)
    // MINUX9 expects interrupts to be enabled from boot
    cpu.csr_mstatus = (1ULL << 3) | (1ULL << 1); // MIE (bit 3) and SIE (bit 1)

    uint64_t entry = cli.mem_base;
    bool loaded = false;
    if (cli.smoke) {
        load_smoke(&mem, cli.mem_base, &entry);
        loaded = true;
    } else if (cli.image_path) {
        if (!cli.raw) {
            loaded = load_elf64_riscv(&mem, cli.image_path, &entry);
        } else {
            loaded = load_raw(&mem, cli.image_path, cli.raw_addr ? cli.raw_addr : cli.mem_base);
            entry = cli.raw_addr ? cli.raw_addr : cli.mem_base;
        }
        if (!loaded) {
            fprintf(stderr, "Failed to load image: %s\n", cli.image_path);
            return 1;
        }
    } else {
        fprintf(stderr, "No input specified. Use -i <file> or --smoke.\n");
        return 1;
    }

    if (cli.satp_set) {
        cpu.csr_satp = cli.satp_val;
    } else if (cli.rootpt_set) {
        cpu.csr_satp = (8ULL<<60) | ((cli.rootpt_pa >> 12) & ((1ULL<<44)-1));
    } else {
        // Default: satp=0 (MMU disabled). Kernel will enable it when ready.
        cpu.csr_satp = 0;
    }

    if (cli.entry_set) entry = cli.entry;
    cpu.pc = entry;

    run(&cpu, &mem, &dev, &cli.run);

    // Restore terminal settings before exit
    restore_stdin();

    if (cpu.halt) {
        printf("ECALL exit: %" PRIu64 "\n", cpu.exit_code);
        return (int)(cpu.exit_code & 0xff);
    }
    return 0;
}
