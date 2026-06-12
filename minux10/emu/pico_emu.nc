#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define FLASH_BASE 0x10000000u
#define FLASH_SIZE (2u * 1024u * 1024u)
#define SRAM_BASE 0x20000000u
#define SRAM_SIZE (264u * 1024u)

#define PICO_UART0_DR 0x40034000u
#define PICO_EMU_EXIT 0x40000000u
#define PICO_SYST_CSR 0xe000e010u
#define PICO_SYST_RVR 0xe000e014u
#define PICO_SYST_CVR 0xe000e018u
#define NVIC_ISER 0xe000e100u
#define NVIC_ICER 0xe000e180u
#define NVIC_ISPR 0xe000e200u
#define NVIC_ICPR 0xe000e280u
#define NVIC_IPR_BASE 0xe000e400u
#define SCB_ICSR 0xe000ed04u
#define SCB_VTOR 0xe000ed08u

#define APB_BASE 0x40000000u
#define APB_END 0x40070000u
#define IO_BANK0_BASE 0x40014000u
#define CLOCKS_BASE 0x40008000u
#define RESETS_BASE 0x4000c000u
#define SPI0_BASE 0x4003c000u
#define SPI1_BASE 0x40040000u
#define I2C0_BASE 0x40044000u
#define I2C1_BASE 0x40048000u
#define ADC_BASE 0x4004c000u
#define PWM_BASE 0x40050000u
#define TIMER_BASE 0x40054000u
#define WATCHDOG_BASE 0x40058000u
#define DMA_BASE 0x50000000u
#define USB_DPRAM_BASE 0x50100000u
#define USB_REGS_BASE 0x50110000u
#define PIO0_BASE 0x50200000u
#define PIO1_BASE 0x50300000u
#define SIO_BASE 0xd0000000u

#define PERIPHERAL_PAGE_SIZE 0x1000u
#define GPIO_MASK 0x3fffffffu

#define EM_ARM 40
#define PT_LOAD 1

typedef struct {
    uint32_t r[16];
    uint32_t apsr_n;
    uint32_t apsr_z;
    uint32_t apsr_c;
    uint32_t apsr_v;
    uint64_t steps;
    uint32_t exit_code;
    uint32_t systick;
    uint32_t systick_csr;
    uint32_t systick_rvr;
    uint32_t nvic_enable;
    uint32_t nvic_pending;
    uint8_t nvic_priority[32];
    uint32_t vector_table;
    uint32_t active_exception;
    bool halt;
    bool trace;
} cpu_t;

static uint8_t g_flash[FLASH_SIZE];
static uint8_t g_sram[SRAM_SIZE];
static uint32_t g_apb_regs[(APB_END - APB_BASE) / 4u];
static uint32_t g_dma_regs[PERIPHERAL_PAGE_SIZE / 4u];
static uint8_t g_usb_dpram[PERIPHERAL_PAGE_SIZE];
static uint32_t g_usb_regs[PERIPHERAL_PAGE_SIZE / 4u];
static uint32_t g_pio0_regs[PERIPHERAL_PAGE_SIZE / 4u];
static uint32_t g_pio1_regs[PERIPHERAL_PAGE_SIZE / 4u];
static uint32_t g_sio_gpio_out;
static uint32_t g_sio_gpio_oe;
static uint32_t g_sio_gpio_input;
static uint32_t g_timer_alarm[4];
static uint32_t g_timer_armed;
static uint32_t g_watchdog_load;
static uint32_t g_watchdog_count;
static uint32_t g_watchdog_reason;
static uint32_t g_adc_sample = 2048u;
static uint32_t g_spi0_data;
static uint32_t g_spi1_data;
static uint32_t g_i2c0_data;
static uint32_t g_i2c1_data;

static uint8_t mem_read8(cpu_t *cpu, uint32_t addr);
static uint32_t mem_read32(cpu_t *cpu, uint32_t addr);
static void mem_write8(cpu_t *cpu, uint32_t addr, uint8_t value);
static void mem_write32(cpu_t *cpu, uint32_t addr, uint32_t value);

static uint16_t rd16(const uint8_t *p)
{
    return (uint16_t)p[0] | ((uint16_t)p[1] << 8);
}

static uint32_t rd32(const uint8_t *p)
{
    return (uint32_t)p[0] |
        ((uint32_t)p[1] << 8) |
        ((uint32_t)p[2] << 16) |
        ((uint32_t)p[3] << 24);
}

static void wr32(uint8_t *p, uint32_t value)
{
    p[0] = (uint8_t)value;
    p[1] = (uint8_t)(value >> 8);
    p[2] = (uint8_t)(value >> 16);
    p[3] = (uint8_t)(value >> 24);
}

static bool in_range(uint32_t addr, uint32_t base, uint32_t size)
{
    return addr >= base && addr < base + size;
}

static uint32_t apply_atomic_alias(uint32_t old, uint32_t value, uint32_t alias)
{
    if (alias == 0x1000u) {
        return old ^ value;
    }
    if (alias == 0x2000u) {
        return old | value;
    }
    if (alias == 0x3000u) {
        return old & ~value;
    }
    return value;
}

static uint32_t timer_value(cpu_t *cpu)
{
    return (uint32_t)cpu->steps;
}

static void dma_trigger(cpu_t *cpu, uint32_t channel)
{
    uint32_t base = channel * 0x40u / 4u;
    uint32_t read_addr = g_dma_regs[base + 0u];
    uint32_t write_addr = g_dma_regs[base + 1u];
    uint32_t count = g_dma_regs[base + 2u];
    uint32_t ctrl = g_dma_regs[base + 3u];
    uint32_t size_code = (ctrl >> 2) & 3u;
    uint32_t transfer_size = size_code == 0 ? 1u : (size_code == 1 ? 2u : 4u);
    bool increment_read = (ctrl & (1u << 4)) != 0;
    bool increment_write = (ctrl & (1u << 5)) != 0;
    if ((ctrl & 1u) == 0 || count > 4096u) {
        return;
    }
    for (uint32_t i = 0; i < count; i++) {
        uint32_t value;
        if (transfer_size == 1u) {
            value = mem_read8(cpu, read_addr);
            mem_write8(cpu, write_addr, (uint8_t)value);
        }
        else {
            value = mem_read32(cpu, read_addr);
            mem_write32(cpu, write_addr, value);
        }
        if (increment_read) {
            read_addr += transfer_size;
        }
        if (increment_write) {
            write_addr += transfer_size;
        }
    }
    g_dma_regs[base + 0u] = read_addr;
    g_dma_regs[base + 1u] = write_addr;
    g_dma_regs[base + 2u] = 0;
    g_dma_regs[base + 3u] = ctrl & ~(1u << 24);
}

static uint32_t peripheral_read32(cpu_t *cpu, uint32_t addr)
{
    uint32_t aligned = addr & ~3u;
    if (in_range(aligned, SIO_BASE, PERIPHERAL_PAGE_SIZE)) {
        uint32_t offset = aligned - SIO_BASE;
        if (offset == 0x000u) return 0;
        if (offset == 0x004u) return g_sio_gpio_input | (g_sio_gpio_out & g_sio_gpio_oe);
        if (offset == 0x010u) return g_sio_gpio_out;
        if (offset == 0x020u) return g_sio_gpio_oe;
        if (offset == 0x050u) return 2u;
        if (offset == 0x05cu) return 0xffffffffu;
        if (offset >= 0x100u && offset < 0x180u) return 1u;
        return 0;
    }
    if (in_range(aligned, DMA_BASE, PERIPHERAL_PAGE_SIZE)) {
        return g_dma_regs[(aligned - DMA_BASE) / 4u];
    }
    if (in_range(aligned, USB_DPRAM_BASE, PERIPHERAL_PAGE_SIZE)) {
        uint32_t offset = aligned - USB_DPRAM_BASE;
        return rd32(&g_usb_dpram[offset]);
    }
    if (in_range(aligned, USB_REGS_BASE, PERIPHERAL_PAGE_SIZE)) {
        return g_usb_regs[(aligned - USB_REGS_BASE) / 4u];
    }
    if (in_range(aligned, PIO0_BASE, PERIPHERAL_PAGE_SIZE)
        || in_range(aligned, PIO1_BASE, PERIPHERAL_PAGE_SIZE)) {
        uint32_t base = aligned >= PIO1_BASE ? PIO1_BASE : PIO0_BASE;
        uint32_t *regs = base == PIO0_BASE ? g_pio0_regs : g_pio1_regs;
        uint32_t offset = aligned - base;
        if (offset == 0x004u) return 0x0f000f00u;
        return regs[offset / 4u];
    }
    if (in_range(aligned, APB_BASE, APB_END - APB_BASE)) {
        uint32_t alias = aligned & 0x3000u;
        uint32_t physical = aligned & ~0x3000u;
        uint32_t offset = physical - APB_BASE;
        (void)alias;
        if (physical == TIMER_BASE + 0x00u || physical == TIMER_BASE + 0x08u) {
            return 0;
        }
        if (physical == TIMER_BASE + 0x04u || physical == TIMER_BASE + 0x0cu
            || physical == TIMER_BASE + 0x28u) {
            return timer_value(cpu);
        }
        if (physical == TIMER_BASE + 0x20u) return g_timer_armed;
        if (physical == TIMER_BASE + 0x40u) {
            uint32_t intr = g_apb_regs[(TIMER_BASE + 0x34u - APB_BASE) / 4u];
            uint32_t inte = g_apb_regs[(TIMER_BASE + 0x38u - APB_BASE) / 4u];
            uint32_t intf = g_apb_regs[(TIMER_BASE + 0x3cu - APB_BASE) / 4u];
            return (intr & inte) | intf;
        }
        if (physical == WATCHDOG_BASE + 0x04u) return g_watchdog_count;
        if (physical == WATCHDOG_BASE + 0x08u) return g_watchdog_reason;
        if (physical == ADC_BASE + 0x04u) return g_adc_sample & 0xfffu;
        if (physical == ADC_BASE + 0x08u) return (1u << 8) | 1u;
        if (physical == ADC_BASE + 0x0cu) return g_adc_sample & 0xfffu;
        if (physical == SPI0_BASE + 0x08u) return g_spi0_data;
        if (physical == SPI1_BASE + 0x08u) return g_spi1_data;
        if (physical == SPI0_BASE + 0x0cu || physical == SPI1_BASE + 0x0cu) return 7u;
        if (physical == I2C0_BASE + 0x10u) return g_i2c0_data;
        if (physical == I2C1_BASE + 0x10u) return g_i2c1_data;
        if (physical == I2C0_BASE + 0x70u || physical == I2C1_BASE + 0x70u) return 6u;
        if (physical == I2C0_BASE + 0x78u || physical == I2C1_BASE + 0x78u) return 1u;
        if (physical == RESETS_BASE + 0x08u) return 0x01ffffffu;
        if (physical == 0x40024004u) return 0x80000000u;
        if (physical == 0x40028000u || physical == 0x4002c000u) return 0x80000000u;
        return g_apb_regs[offset / 4u];
    }
    return 0;
}

static void peripheral_write32(cpu_t *cpu, uint32_t addr, uint32_t value)
{
    uint32_t aligned = addr & ~3u;
    if (in_range(aligned, SIO_BASE, PERIPHERAL_PAGE_SIZE)) {
        uint32_t offset = aligned - SIO_BASE;
        if (offset == 0x010u) g_sio_gpio_out = value & GPIO_MASK;
        else if (offset == 0x014u) g_sio_gpio_out |= value & GPIO_MASK;
        else if (offset == 0x018u) g_sio_gpio_out &= ~(value & GPIO_MASK);
        else if (offset == 0x01cu) g_sio_gpio_out ^= value & GPIO_MASK;
        else if (offset == 0x020u) g_sio_gpio_oe = value & GPIO_MASK;
        else if (offset == 0x024u) g_sio_gpio_oe |= value & GPIO_MASK;
        else if (offset == 0x028u) g_sio_gpio_oe &= ~(value & GPIO_MASK);
        else if (offset == 0x02cu) g_sio_gpio_oe ^= value & GPIO_MASK;
        return;
    }
    if (in_range(aligned, DMA_BASE, PERIPHERAL_PAGE_SIZE)) {
        uint32_t index = (aligned - DMA_BASE) / 4u;
        g_dma_regs[index] = value;
        if ((aligned - DMA_BASE) < 12u * 0x40u && ((aligned - DMA_BASE) & 0x3fu) == 0x0cu) {
            dma_trigger(cpu, (aligned - DMA_BASE) / 0x40u);
        }
        return;
    }
    if (in_range(aligned, USB_DPRAM_BASE, PERIPHERAL_PAGE_SIZE)) {
        uint32_t offset = aligned - USB_DPRAM_BASE;
        g_usb_dpram[offset] = (uint8_t)value;
        g_usb_dpram[offset + 1u] = (uint8_t)(value >> 8);
        g_usb_dpram[offset + 2u] = (uint8_t)(value >> 16);
        g_usb_dpram[offset + 3u] = (uint8_t)(value >> 24);
        return;
    }
    if (in_range(aligned, USB_REGS_BASE, PERIPHERAL_PAGE_SIZE)) {
        g_usb_regs[(aligned - USB_REGS_BASE) / 4u] = value;
        return;
    }
    if (in_range(aligned, PIO0_BASE, PERIPHERAL_PAGE_SIZE)
        || in_range(aligned, PIO1_BASE, PERIPHERAL_PAGE_SIZE)) {
        uint32_t base = aligned >= PIO1_BASE ? PIO1_BASE : PIO0_BASE;
        uint32_t *regs = base == PIO0_BASE ? g_pio0_regs : g_pio1_regs;
        uint32_t offset = aligned - base;
        regs[offset / 4u] = value;
        if (offset >= 0x010u && offset < 0x020u) {
            regs[(offset + 0x10u) / 4u] = value;
        }
        return;
    }
    if (in_range(aligned, APB_BASE, APB_END - APB_BASE)) {
        uint32_t alias = aligned & 0x3000u;
        uint32_t physical = aligned & ~0x3000u;
        uint32_t offset = physical - APB_BASE;
        uint32_t old = g_apb_regs[offset / 4u];
        if (physical == TIMER_BASE + 0x34u && alias == 0) {
            g_apb_regs[offset / 4u] = old & ~value;
            return;
        }
        g_apb_regs[offset / 4u] = apply_atomic_alias(old, value, alias);
        if (physical >= TIMER_BASE + 0x10u && physical <= TIMER_BASE + 0x1cu) {
            uint32_t alarm = (physical - TIMER_BASE - 0x10u) / 4u;
            g_timer_alarm[alarm] = value;
            g_timer_armed |= 1u << alarm;
        }
        else if (physical == TIMER_BASE + 0x20u) {
            g_timer_armed &= ~value;
        }
        else if (physical == WATCHDOG_BASE + 0x04u) {
            g_watchdog_load = value & 0x00ffffffu;
            g_watchdog_count = g_watchdog_load;
        }
        else if (physical == SPI0_BASE + 0x08u) g_spi0_data = value;
        else if (physical == SPI1_BASE + 0x08u) g_spi1_data = value;
        else if (physical == I2C0_BASE + 0x10u) g_i2c0_data = value & 0xffu;
        else if (physical == I2C1_BASE + 0x10u) g_i2c1_data = value & 0xffu;
        else if (physical == ADC_BASE + 0x00u && (value & 4u) != 0) {
            g_apb_regs[offset / 4u] |= 1u << 8;
        }
    }
}

static void peripheral_tick(cpu_t *cpu)
{
    uint32_t now = timer_value(cpu);
    for (int i = 0; i < 4; i++) {
        if ((g_timer_armed & (1u << i)) != 0 && now >= g_timer_alarm[i]) {
            g_timer_armed &= ~(1u << i);
            g_apb_regs[(TIMER_BASE + 0x34u - APB_BASE) / 4u] |= 1u << i;
            uint32_t inte = g_apb_regs[(TIMER_BASE + 0x38u - APB_BASE) / 4u];
            if ((inte & (1u << i)) != 0) {
                cpu->nvic_pending |= 1u << i;
            }
        }
    }
    uint32_t watchdog_ctrl = g_apb_regs[(WATCHDOG_BASE - APB_BASE) / 4u];
    if ((watchdog_ctrl & (1u << 30)) != 0 && g_watchdog_count != 0) {
        g_watchdog_count--;
        if (g_watchdog_count == 0) {
            g_watchdog_reason = 1u;
        }
    }
    uint32_t pwm_enable = g_apb_regs[(PWM_BASE + 0xa0u - APB_BASE) / 4u];
    for (int slice = 0; slice < 8; slice++) {
        if ((pwm_enable & (1u << slice)) != 0) {
            uint32_t ctr_index = (PWM_BASE + (uint32_t)slice * 0x14u + 0x08u - APB_BASE) / 4u;
            g_apb_regs[ctr_index]++;
        }
    }
}

static bool is_systick_addr(uint32_t addr)
{
    return addr >= PICO_SYST_CSR && addr < PICO_SYST_CVR + 4u;
}

static uint32_t systick_read32(cpu_t *cpu, uint32_t addr)
{
    uint32_t reg = addr & ~3u;
    if (reg == PICO_SYST_CSR) {
        return cpu->systick_csr;
    }
    if (reg == PICO_SYST_RVR) {
        return cpu->systick_rvr;
    }
    if (reg == PICO_SYST_CVR) {
        return cpu->systick;
    }
    return 0;
}

static void systick_write32(cpu_t *cpu, uint32_t addr, uint32_t value)
{
    uint32_t reg = addr & ~3u;
    if (reg == PICO_SYST_CSR) {
        cpu->systick_csr = value;
    }
    else if (reg == PICO_SYST_RVR) {
        cpu->systick_rvr = value;
    }
    else if (reg == PICO_SYST_CVR) {
        cpu->systick = value;
    }
}

static bool is_system_control_addr(uint32_t addr)
{
    return in_range(addr, 0xe000e000u, 0x1000u);
}

static int selected_pending_irq(cpu_t *cpu)
{
    uint32_t ready = cpu->nvic_pending & cpu->nvic_enable;
    int selected = -1;
    uint8_t selected_priority = 0xffu;
    for (int i = 0; i < 32; i++) {
        if ((ready & (1u << i)) != 0
            && (selected < 0 || cpu->nvic_priority[i] < selected_priority)) {
            selected = i;
            selected_priority = cpu->nvic_priority[i];
        }
    }
    return selected;
}

static uint32_t system_control_read32(cpu_t *cpu, uint32_t addr)
{
    uint32_t reg = addr & ~3u;
    if (is_systick_addr(reg)) {
        return systick_read32(cpu, reg);
    }
    if (reg == NVIC_ISER || reg == NVIC_ICER) {
        return cpu->nvic_enable;
    }
    if (reg == NVIC_ISPR || reg == NVIC_ICPR) {
        return cpu->nvic_pending;
    }
    if (reg >= NVIC_IPR_BASE && reg < NVIC_IPR_BASE + 32u) {
        uint32_t first = reg - NVIC_IPR_BASE;
        return (uint32_t)cpu->nvic_priority[first] |
            ((uint32_t)cpu->nvic_priority[first + 1u] << 8) |
            ((uint32_t)cpu->nvic_priority[first + 2u] << 16) |
            ((uint32_t)cpu->nvic_priority[first + 3u] << 24);
    }
    if (reg == SCB_ICSR) {
        uint32_t vector_pending = 0;
        int selected = selected_pending_irq(cpu);
        if (selected >= 0) {
            vector_pending = 16u + (uint32_t)selected;
        }
        return (cpu->active_exception & 0x1ffu) | (vector_pending << 12);
    }
    if (reg == SCB_VTOR) {
        return cpu->vector_table;
    }
    return 0;
}

static void system_control_write32(cpu_t *cpu, uint32_t addr, uint32_t value)
{
    uint32_t reg = addr & ~3u;
    if (is_systick_addr(reg)) {
        systick_write32(cpu, reg, value);
    }
    else if (reg == NVIC_ISER) {
        cpu->nvic_enable |= value;
    }
    else if (reg == NVIC_ICER) {
        cpu->nvic_enable &= ~value;
    }
    else if (reg == NVIC_ISPR) {
        cpu->nvic_pending |= value;
    }
    else if (reg == NVIC_ICPR) {
        cpu->nvic_pending &= ~value;
    }
    else if (reg >= NVIC_IPR_BASE && reg < NVIC_IPR_BASE + 32u) {
        uint32_t first = reg - NVIC_IPR_BASE;
        cpu->nvic_priority[first] = (uint8_t)value;
        cpu->nvic_priority[first + 1u] = (uint8_t)(value >> 8);
        cpu->nvic_priority[first + 2u] = (uint8_t)(value >> 16);
        cpu->nvic_priority[first + 3u] = (uint8_t)(value >> 24);
    }
    else if (reg == SCB_VTOR) {
        cpu->vector_table = value & 0xffffff80u;
    }
}

static void system_control_write8(cpu_t *cpu, uint32_t addr, uint8_t value)
{
    uint32_t reg = addr & ~3u;
    uint32_t shift = (addr & 3u) * 8u;
    if (reg == NVIC_ISER || reg == NVIC_ICER || reg == NVIC_ISPR || reg == NVIC_ICPR) {
        system_control_write32(cpu, reg, (uint32_t)value << shift);
    }
    else {
        uint32_t old = system_control_read32(cpu, reg);
        uint32_t mask = 0xffu << shift;
        system_control_write32(cpu, reg, (old & ~mask) | ((uint32_t)value << shift));
    }
}

static int32_t sx(uint32_t value, int bits)
{
    uint32_t mask = 1u << (bits - 1);
    value &= (1u << bits) - 1u;
    return (int32_t)((value ^ mask) - mask);
}

static uint8_t *addr_ptr(uint32_t addr)
{
    if (addr >= FLASH_BASE && addr < FLASH_BASE + FLASH_SIZE) {
        return &g_flash[addr - FLASH_BASE];
    }
    if (addr >= SRAM_BASE && addr < SRAM_BASE + SRAM_SIZE) {
        return &g_sram[addr - SRAM_BASE];
    }
    return 0;
}

static bool is_peripheral_addr(uint32_t addr)
{
    return in_range(addr, APB_BASE, APB_END - APB_BASE)
        || in_range(addr, DMA_BASE, PERIPHERAL_PAGE_SIZE)
        || in_range(addr, USB_DPRAM_BASE, PERIPHERAL_PAGE_SIZE)
        || in_range(addr, USB_REGS_BASE, PERIPHERAL_PAGE_SIZE)
        || in_range(addr, PIO0_BASE, PERIPHERAL_PAGE_SIZE)
        || in_range(addr, PIO1_BASE, PERIPHERAL_PAGE_SIZE)
        || in_range(addr, SIO_BASE, PERIPHERAL_PAGE_SIZE);
}

static uint8_t mem_read8(cpu_t *cpu, uint32_t addr)
{
    uint8_t *p = addr_ptr(addr);
    if (p != 0) {
        return *p;
    }
    if (is_system_control_addr(addr)) {
        uint32_t value = system_control_read32(cpu, addr);
        return (uint8_t)((value >> ((addr & 3u) * 8u)) & 0xffu);
    }
    if (is_peripheral_addr(addr)) {
        uint32_t value = peripheral_read32(cpu, addr);
        return (uint8_t)((value >> ((addr & 3u) * 8u)) & 0xffu);
    }
    fprintf(stderr, "EMU load8 fault: 0x%08x\n", addr);
    cpu->halt = true;
    cpu->exit_code = 125;
    return 0;
}

static uint16_t mem_read16(cpu_t *cpu, uint32_t addr)
{
    uint16_t a = mem_read8(cpu, addr);
    uint16_t b = mem_read8(cpu, addr + 1u);
    return a | (uint16_t)(b << 8);
}

static uint32_t mem_read32(cpu_t *cpu, uint32_t addr)
{
    uint32_t a = mem_read8(cpu, addr);
    uint32_t b = mem_read8(cpu, addr + 1u);
    uint32_t c = mem_read8(cpu, addr + 2u);
    uint32_t d = mem_read8(cpu, addr + 3u);
    return a | (b << 8) | (c << 16) | (d << 24);
}

static void mem_write8(cpu_t *cpu, uint32_t addr, uint8_t value)
{
    uint8_t *p = addr_ptr(addr);
    if (p != 0 && addr >= SRAM_BASE) {
        *p = value;
        return;
    }
    if (addr == PICO_UART0_DR) {
        putchar((int)value);
        fflush(stdout);
        return;
    }
    if (addr == PICO_EMU_EXIT) {
        cpu->exit_code = value;
        cpu->halt = true;
        return;
    }
    if (is_system_control_addr(addr)) {
        system_control_write8(cpu, addr, value);
        return;
    }
    if (is_peripheral_addr(addr)) {
        uint32_t aligned = addr & ~3u;
        uint32_t shift = (addr & 3u) * 8u;
        uint32_t old = peripheral_read32(cpu, aligned);
        uint32_t mask = 0xffu << shift;
        peripheral_write32(cpu, aligned, (old & ~mask) | ((uint32_t)value << shift));
        return;
    }
    fprintf(stderr, "EMU store8 fault: 0x%08x = 0x%02x\n", addr, value);
    cpu->halt = true;
    cpu->exit_code = 126;
}

static void mem_write16(cpu_t *cpu, uint32_t addr, uint16_t value)
{
    mem_write8(cpu, addr, (uint8_t)(value & 0xffu));
    mem_write8(cpu, addr + 1u, (uint8_t)((value >> 8) & 0xffu));
}

static void mem_write32(cpu_t *cpu, uint32_t addr, uint32_t value)
{
    if (addr == PICO_UART0_DR) {
        putchar((int)(value & 0xffu));
        fflush(stdout);
        return;
    }
    if (addr == PICO_EMU_EXIT) {
        cpu->exit_code = value;
        cpu->halt = true;
        return;
    }
    if (is_system_control_addr(addr)) {
        system_control_write32(cpu, addr, value);
        return;
    }
    if (is_peripheral_addr(addr)) {
        peripheral_write32(cpu, addr, value);
        return;
    }
    mem_write8(cpu, addr, (uint8_t)(value & 0xffu));
    mem_write8(cpu, addr + 1u, (uint8_t)((value >> 8) & 0xffu));
    mem_write8(cpu, addr + 2u, (uint8_t)((value >> 16) & 0xffu));
    mem_write8(cpu, addr + 3u, (uint8_t)((value >> 24) & 0xffu));
}

static void set_nz(cpu_t *cpu, uint32_t value)
{
    cpu->apsr_n = (value >> 31) & 1u;
    cpu->apsr_z = value == 0;
}

static void set_add_flags(cpu_t *cpu, uint32_t a, uint32_t b, uint32_t result)
{
    set_nz(cpu, result);
    cpu->apsr_c = result < a;
    cpu->apsr_v = (((a ^ result) & (b ^ result)) >> 31) & 1u;
}

static void set_sub_flags(cpu_t *cpu, uint32_t a, uint32_t b, uint32_t result)
{
    set_nz(cpu, result);
    cpu->apsr_c = a >= b;
    cpu->apsr_v = (((a ^ b) & (a ^ result)) >> 31) & 1u;
}

static void write_reg(cpu_t *cpu, int reg, uint32_t value)
{
    if (reg == 15) {
        cpu->r[15] = value & ~1u;
    }
    else {
        cpu->r[reg] = value;
    }
}

static uint32_t read_pc(cpu_t *cpu)
{
    return (cpu->r[15] + 2u) & ~3u;
}

static bool cond_pass(cpu_t *cpu, uint32_t cond)
{
    switch (cond) {
    case 0x0: return cpu->apsr_z != 0;
    case 0x1: return cpu->apsr_z == 0;
    case 0x2: return cpu->apsr_c != 0;
    case 0x3: return cpu->apsr_c == 0;
    case 0x4: return cpu->apsr_n != 0;
    case 0x5: return cpu->apsr_n == 0;
    case 0x6: return cpu->apsr_v != 0;
    case 0x7: return cpu->apsr_v == 0;
    case 0x8: return cpu->apsr_c != 0 && cpu->apsr_z == 0;
    case 0x9: return cpu->apsr_c == 0 || cpu->apsr_z != 0;
    case 0xa: return cpu->apsr_n == cpu->apsr_v;
    case 0xb: return cpu->apsr_n != cpu->apsr_v;
    case 0xc: return cpu->apsr_z == 0 && cpu->apsr_n == cpu->apsr_v;
    case 0xd: return cpu->apsr_z != 0 || cpu->apsr_n != cpu->apsr_v;
    case 0xe: return true;
    default: return false;
    }
}

static void push32(cpu_t *cpu, uint32_t value)
{
    cpu->r[13] -= 4u;
    mem_write32(cpu, cpu->r[13], value);
}

static uint32_t pop32(cpu_t *cpu)
{
    uint32_t value = mem_read32(cpu, cpu->r[13]);
    cpu->r[13] += 4u;
    return value;
}

static uint32_t current_xpsr(cpu_t *cpu)
{
    return 0x01000000u |
        (cpu->apsr_n << 31) |
        (cpu->apsr_z << 30) |
        (cpu->apsr_c << 29) |
        (cpu->apsr_v << 28) |
        (cpu->active_exception & 0x1ffu);
}

static void exception_enter(cpu_t *cpu, uint32_t exception_number)
{
    uint32_t sp = cpu->r[13] - 32u;
    mem_write32(cpu, sp + 0u, cpu->r[0]);
    mem_write32(cpu, sp + 4u, cpu->r[1]);
    mem_write32(cpu, sp + 8u, cpu->r[2]);
    mem_write32(cpu, sp + 12u, cpu->r[3]);
    mem_write32(cpu, sp + 16u, cpu->r[12]);
    mem_write32(cpu, sp + 20u, cpu->r[14]);
    mem_write32(cpu, sp + 24u, cpu->r[15]);
    mem_write32(cpu, sp + 28u, current_xpsr(cpu));
    cpu->r[13] = sp;
    cpu->r[14] = 0xfffffff9u;
    cpu->active_exception = exception_number;
    cpu->r[15] = mem_read32(cpu, cpu->vector_table + exception_number * 4u) & ~1u;
}

static void exception_return(cpu_t *cpu)
{
    uint32_t sp = cpu->r[13];
    uint32_t xpsr;
    cpu->r[0] = mem_read32(cpu, sp + 0u);
    cpu->r[1] = mem_read32(cpu, sp + 4u);
    cpu->r[2] = mem_read32(cpu, sp + 8u);
    cpu->r[3] = mem_read32(cpu, sp + 12u);
    cpu->r[12] = mem_read32(cpu, sp + 16u);
    cpu->r[14] = mem_read32(cpu, sp + 20u);
    cpu->r[15] = mem_read32(cpu, sp + 24u) & ~1u;
    xpsr = mem_read32(cpu, sp + 28u);
    cpu->r[13] = sp + 32u;
    cpu->apsr_n = (xpsr >> 31) & 1u;
    cpu->apsr_z = (xpsr >> 30) & 1u;
    cpu->apsr_c = (xpsr >> 29) & 1u;
    cpu->apsr_v = (xpsr >> 28) & 1u;
    cpu->active_exception = xpsr & 0x1ffu;
}

static bool service_pending_interrupt(cpu_t *cpu)
{
    int selected;
    if (cpu->active_exception != 0) {
        return false;
    }
    selected = selected_pending_irq(cpu);
    if (selected < 0) {
        return false;
    }
    cpu->nvic_pending &= ~(1u << selected);
    exception_enter(cpu, 16u + (uint32_t)selected);
    return true;
}

static void unsupported(cpu_t *cpu, uint16_t op, uint32_t pc)
{
    fprintf(stderr, "EMU unsupported thumb op 0x%04x at 0x%08x\n", op, pc);
    cpu->halt = true;
    cpu->exit_code = 127;
}

static void step_thumb(cpu_t *cpu)
{
    uint32_t pc = cpu->r[15];
    uint16_t op = mem_read16(cpu, pc);
    cpu->r[15] = pc + 2u;
    cpu->steps++;
    cpu->systick++;
    peripheral_tick(cpu);

    if (cpu->trace) {
        fprintf(stderr, "%08x  %04x  r0=%08x r1=%08x r3=%08x sp=%08x z=%u\n",
            pc, op, cpu->r[0], cpu->r[1], cpu->r[3], cpu->r[13], cpu->apsr_z);
    }

    if ((op & 0xf800u) == 0x0000u) {
        int imm = (op >> 6) & 0x1f;
        int rs = (op >> 3) & 7;
        int rd = op & 7;
        uint32_t value = cpu->r[rs] << imm;
        cpu->r[rd] = value;
        set_nz(cpu, value);
        if (imm != 0) {
            cpu->apsr_c = (cpu->r[rs] >> (32 - imm)) & 1u;
        }
        return;
    }
    if ((op & 0xf800u) == 0x0800u) {
        int imm = (op >> 6) & 0x1f;
        int rs = (op >> 3) & 7;
        int rd = op & 7;
        uint32_t value;
        if (imm == 0) {
            value = 0;
            cpu->apsr_c = (cpu->r[rs] >> 31) & 1u;
        }
        else {
            value = cpu->r[rs] >> imm;
            cpu->apsr_c = (cpu->r[rs] >> (imm - 1)) & 1u;
        }
        cpu->r[rd] = value;
        set_nz(cpu, value);
        return;
    }
    if ((op & 0xf800u) == 0x1000u) {
        int imm = (op >> 6) & 0x1f;
        int rs = (op >> 3) & 7;
        int rd = op & 7;
        uint32_t value;
        if (imm == 0) {
            value = (cpu->r[rs] & 0x80000000u) ? 0xffffffffu : 0;
            cpu->apsr_c = (cpu->r[rs] >> 31) & 1u;
        }
        else {
            value = (uint32_t)(((int32_t)cpu->r[rs]) >> imm);
            cpu->apsr_c = (cpu->r[rs] >> (imm - 1)) & 1u;
        }
        cpu->r[rd] = value;
        set_nz(cpu, value);
        return;
    }
    if ((op & 0xf800u) == 0x1800u) {
        int imm_mode = (op >> 10) & 1;
        int sub = (op >> 9) & 1;
        int rn = (op >> 6) & 7;
        int rs = (op >> 3) & 7;
        int rd = op & 7;
        uint32_t rhs = imm_mode ? (uint32_t)rn : cpu->r[rn];
        uint32_t lhs = cpu->r[rs];
        uint32_t result = sub ? lhs - rhs : lhs + rhs;
        cpu->r[rd] = result;
        if (sub) {
            set_sub_flags(cpu, lhs, rhs, result);
        }
        else {
            set_add_flags(cpu, lhs, rhs, result);
        }
        return;
    }
    if ((op & 0xe000u) == 0x2000u) {
        int kind = (op >> 11) & 3;
        int rd = (op >> 8) & 7;
        uint32_t imm = op & 0xffu;
        uint32_t result;
        if (kind == 0) {
            cpu->r[rd] = imm;
            set_nz(cpu, imm);
        }
        else if (kind == 1) {
            result = cpu->r[rd] - imm;
            set_sub_flags(cpu, cpu->r[rd], imm, result);
        }
        else if (kind == 2) {
            result = cpu->r[rd] + imm;
            cpu->r[rd] = result;
            set_add_flags(cpu, cpu->r[rd] - imm, imm, result);
        }
        else {
            result = cpu->r[rd] - imm;
            cpu->r[rd] = result;
            set_sub_flags(cpu, cpu->r[rd] + imm, imm, result);
        }
        return;
    }
    if ((op & 0xfc00u) == 0x4000u) {
        int alu = (op >> 6) & 0xf;
        int rs = (op >> 3) & 7;
        int rd = op & 7;
        uint32_t a = cpu->r[rd];
        uint32_t b = cpu->r[rs];
        uint32_t result = 0;
        switch (alu) {
        case 0x0: result = a & b; cpu->r[rd] = result; set_nz(cpu, result); break;
        case 0x1: result = a ^ b; cpu->r[rd] = result; set_nz(cpu, result); break;
        case 0x2:
            result = b >= 32 ? 0 : a << b;
            if (b != 0 && b <= 32) cpu->apsr_c = (a >> (32 - b)) & 1u;
            cpu->r[rd] = result; set_nz(cpu, result); break;
        case 0x3:
            result = b >= 32 ? 0 : a >> b;
            if (b != 0 && b <= 32) cpu->apsr_c = (a >> (b - 1)) & 1u;
            cpu->r[rd] = result; set_nz(cpu, result); break;
        case 0x4:
            result = b >= 32 ? ((a & 0x80000000u) ? 0xffffffffu : 0) : (uint32_t)((int32_t)a >> b);
            if (b != 0 && b <= 32) cpu->apsr_c = (a >> (b - 1)) & 1u;
            cpu->r[rd] = result; set_nz(cpu, result); break;
        case 0x5: {
            uint32_t carry = cpu->apsr_c ? 1u : 0u;
            result = a + b + carry;
            cpu->r[rd] = result;
            set_add_flags(cpu, a, b + carry, result);
            break;
        }
        case 0x6: {
            uint32_t borrow = cpu->apsr_c ? 0u : 1u;
            result = a - b - borrow;
            cpu->r[rd] = result;
            set_sub_flags(cpu, a, b + borrow, result);
            break;
        }
        case 0x7: {
            uint32_t rot = b & 31u;
            result = rot == 0 ? a : ((a >> rot) | (a << (32u - rot)));
            if (rot != 0) cpu->apsr_c = (result >> 31) & 1u;
            cpu->r[rd] = result;
            set_nz(cpu, result);
            break;
        }
        case 0x8: result = a & b; set_nz(cpu, result); break;
        case 0x9: result = 0u - b; cpu->r[rd] = result; set_sub_flags(cpu, 0, b, result); break;
        case 0xa: result = a - b; set_sub_flags(cpu, a, b, result); break;
        case 0xb: result = a + b; set_add_flags(cpu, a, b, result); break;
        case 0xc: result = a | b; cpu->r[rd] = result; set_nz(cpu, result); break;
        case 0xd: result = a * b; cpu->r[rd] = result; set_nz(cpu, result); break;
        case 0xe: result = a & ~b; cpu->r[rd] = result; set_nz(cpu, result); break;
        case 0xf: result = ~b; cpu->r[rd] = result; set_nz(cpu, result); break;
        default: unsupported(cpu, op, pc); break;
        }
        return;
    }
    if ((op & 0xfc00u) == 0x4400u) {
        int kind = (op >> 8) & 3;
        int rs = ((op >> 3) & 0xf);
        int rd = (op & 7) | ((op >> 4) & 8);
        uint32_t result;
        if (kind == 0) {
            result = cpu->r[rd] + cpu->r[rs];
            write_reg(cpu, rd, result);
        }
        else if (kind == 1) {
            result = cpu->r[rd] - cpu->r[rs];
            set_sub_flags(cpu, cpu->r[rd], cpu->r[rs], result);
        }
        else if (kind == 2) {
            write_reg(cpu, rd, cpu->r[rs]);
        }
        else {
            if ((op & 0x0080u) != 0) {
                cpu->r[14] = cpu->r[15] | 1u;
            }
            uint32_t target = cpu->r[rs];
            if (target >= 0xfffffff0u && cpu->active_exception != 0) {
                exception_return(cpu);
            }
            else {
                cpu->r[15] = target & ~1u;
            }
        }
        return;
    }
    if ((op & 0xf800u) == 0x4800u) {
        int rd = (op >> 8) & 7;
        uint32_t addr = (read_pc(cpu) + ((op & 0xffu) << 2)) & ~3u;
        cpu->r[rd] = mem_read32(cpu, addr);
        return;
    }
    if ((op & 0xf200u) == 0x5000u) {
        int kind = (op >> 9) & 7;
        int rm = (op >> 6) & 7;
        int rn = (op >> 3) & 7;
        int rt = op & 7;
        uint32_t addr = cpu->r[rn] + cpu->r[rm];
        if (kind == 0) mem_write32(cpu, addr, cpu->r[rt]);
        else if (kind == 1) mem_write16(cpu, addr, (uint16_t)cpu->r[rt]);
        else if (kind == 2) mem_write8(cpu, addr, (uint8_t)cpu->r[rt]);
        else if (kind == 3) cpu->r[rt] = (uint32_t)(int32_t)(int8_t)mem_read8(cpu, addr);
        else if (kind == 4) cpu->r[rt] = mem_read32(cpu, addr);
        else if (kind == 5) cpu->r[rt] = mem_read16(cpu, addr);
        else if (kind == 6) cpu->r[rt] = mem_read8(cpu, addr);
        else cpu->r[rt] = (uint32_t)(int32_t)(int16_t)mem_read16(cpu, addr);
        return;
    }
    if ((op & 0xf000u) == 0x6000u) {
        int ldr = (op >> 11) & 1;
        int imm = (op >> 6) & 0x1f;
        int rn = (op >> 3) & 7;
        int rt = op & 7;
        uint32_t addr = cpu->r[rn] + ((uint32_t)imm << 2);
        if (ldr) cpu->r[rt] = mem_read32(cpu, addr);
        else mem_write32(cpu, addr, cpu->r[rt]);
        return;
    }
    if ((op & 0xf000u) == 0x7000u) {
        int ldr = (op >> 11) & 1;
        int imm = (op >> 6) & 0x1f;
        int rn = (op >> 3) & 7;
        int rt = op & 7;
        uint32_t addr = cpu->r[rn] + (uint32_t)imm;
        if (ldr) cpu->r[rt] = mem_read8(cpu, addr);
        else mem_write8(cpu, addr, (uint8_t)cpu->r[rt]);
        return;
    }
    if ((op & 0xf000u) == 0x8000u) {
        int ldr = (op >> 11) & 1;
        int imm = (op >> 6) & 0x1f;
        int rn = (op >> 3) & 7;
        int rt = op & 7;
        uint32_t addr = cpu->r[rn] + ((uint32_t)imm << 1);
        if (ldr) cpu->r[rt] = mem_read16(cpu, addr);
        else mem_write16(cpu, addr, (uint16_t)cpu->r[rt]);
        return;
    }
    if ((op & 0xf000u) == 0x9000u) {
        int ldr = (op >> 11) & 1;
        int rt = (op >> 8) & 7;
        uint32_t addr = cpu->r[13] + ((op & 0xffu) << 2);
        if (ldr) cpu->r[rt] = mem_read32(cpu, addr);
        else mem_write32(cpu, addr, cpu->r[rt]);
        return;
    }
    if ((op & 0xf000u) == 0xa000u) {
        int rd = (op >> 8) & 7;
        uint32_t imm = (op & 0xffu) << 2;
        if ((op & 0x0800u) != 0) cpu->r[rd] = cpu->r[13] + imm;
        else cpu->r[rd] = read_pc(cpu) + imm;
        return;
    }
    if ((op & 0xff00u) == 0xb000u) {
        uint32_t imm = (op & 0x7fu) << 2;
        if ((op & 0x0080u) != 0) cpu->r[13] -= imm;
        else cpu->r[13] += imm;
        return;
    }
    if ((op & 0xff00u) == 0xb200u) {
        int rn = (op >> 3) & 7;
        int rd = op & 7;
        int kind = (op >> 6) & 3;
        if (kind == 0) cpu->r[rd] = (uint32_t)(int32_t)(int16_t)(cpu->r[rn] & 0xffffu);
        else if (kind == 1) cpu->r[rd] = (uint32_t)(int32_t)(int8_t)(cpu->r[rn] & 0xffu);
        else if (kind == 2) cpu->r[rd] = cpu->r[rn] & 0xffffu;
        else cpu->r[rd] = cpu->r[rn] & 0xffu;
        return;
    }
    if ((op & 0xfe00u) == 0xb400u) {
        uint32_t list = op & 0xffu;
        if ((op & 0x0100u) != 0) push32(cpu, cpu->r[14]);
        for (int i = 7; i >= 0; i--) {
            if ((list & (1u << i)) != 0) push32(cpu, cpu->r[i]);
        }
        return;
    }
    if ((op & 0xfe00u) == 0xbc00u) {
        uint32_t list = op & 0xffu;
        for (int i = 0; i < 8; i++) {
            if ((list & (1u << i)) != 0) cpu->r[i] = pop32(cpu);
        }
        if ((op & 0x0100u) != 0) cpu->r[15] = pop32(cpu) & ~1u;
        return;
    }
    if ((op & 0xf500u) == 0xb100u) {
        int rn = op & 7;
        uint32_t imm = (((op >> 9) & 1u) << 6) | (((op >> 3) & 0x1fu) << 1);
        bool nonzero = (op & 0x0800u) != 0;
        bool take = nonzero ? cpu->r[rn] != 0 : cpu->r[rn] == 0;
        if (take) cpu->r[15] += imm + 2u;
        return;
    }
    if ((op & 0xf000u) == 0xc000u) {
        int ldm = (op >> 11) & 1;
        int rn = (op >> 8) & 7;
        uint32_t list = op & 0xffu;
        uint32_t addr = cpu->r[rn];
        for (int i = 0; i < 8; i++) {
            if ((list & (1u << i)) != 0) {
                if (ldm) cpu->r[i] = mem_read32(cpu, addr);
                else mem_write32(cpu, addr, cpu->r[i]);
                addr += 4u;
            }
        }
        cpu->r[rn] = addr;
        return;
    }
    if ((op & 0xf000u) == 0xd000u) {
        uint32_t cond = (op >> 8) & 0xfu;
        if (cond == 0xfu) {
            cpu->exit_code = cpu->r[0];
            cpu->halt = true;
            return;
        }
        if (cond_pass(cpu, cond)) {
            cpu->r[15] = (uint32_t)((int32_t)(cpu->r[15] + 2u) + sx((op & 0xffu) << 1, 9));
        }
        return;
    }
    if ((op & 0xf800u) == 0xe000u) {
        cpu->r[15] = (uint32_t)((int32_t)(cpu->r[15] + 2u) + sx((op & 0x7ffu) << 1, 12));
        return;
    }
    if ((op & 0xf800u) == 0xf000u || (op & 0xf800u) == 0xf800u) {
        uint16_t op2 = mem_read16(cpu, cpu->r[15]);
        if ((op2 & 0xd000u) == 0xd000u) {
            cpu->r[15] += 2u;
            uint32_t s = (op >> 10) & 1u;
            uint32_t j1 = (op2 >> 13) & 1u;
            uint32_t j2 = (op2 >> 11) & 1u;
            uint32_t i1 = (~(j1 ^ s)) & 1u;
            uint32_t i2 = (~(j2 ^ s)) & 1u;
            uint32_t imm = (s << 24) |
                (i1 << 23) |
                (i2 << 22) |
                ((op & 0x03ffu) << 12) |
                ((op2 & 0x07ffu) << 1);
            int32_t off = sx(imm, 25);
            cpu->r[14] = cpu->r[15] | 1u;
            cpu->r[15] = (uint32_t)((int32_t)cpu->r[15] + off);
            return;
        }
    }

    unsupported(cpu, op, pc);
}

static int load_elf32(const char *path)
{
    FILE *fp = fopen(path, "rb");
    if (fp == 0) {
        perror(path);
        return 1;
    }
    if (fseek(fp, 0, SEEK_END) != 0) {
        perror("fseek");
        fclose(fp);
        return 1;
    }
    long size = ftell(fp);
    if (size <= 0) {
        perror("ftell");
        fclose(fp);
        return 1;
    }
    rewind(fp);
    uint8_t *buf = (uint8_t*)malloc((size_t)size);
    if (buf == 0) {
        fclose(fp);
        return 1;
    }
    if (fread(buf, 1, (size_t)size, fp) != (size_t)size) {
        perror("fread");
        free(buf);
        fclose(fp);
        return 1;
    }
    fclose(fp);

    if (size < 52 ||
        buf[0] != 0x7f || buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F' ||
        buf[4] != 1 || buf[5] != 1) {
        fprintf(stderr, "not a little-endian ELF32 file\n");
        free(buf);
        return 1;
    }
    if (rd16(buf + 18) != EM_ARM) {
        fprintf(stderr, "ELF machine is not ARM\n");
        free(buf);
        return 1;
    }

    uint32_t phoff = rd32(buf + 28);
    uint16_t phentsize = rd16(buf + 42);
    uint16_t phnum = rd16(buf + 44);
    for (uint16_t i = 0; i < phnum; i++) {
        uint8_t *ph = buf + phoff + (uint32_t)i * phentsize;
        uint32_t type = rd32(ph + 0);
        if (type != PT_LOAD) {
            continue;
        }
        uint32_t offset = rd32(ph + 4);
        uint32_t paddr = rd32(ph + 12);
        uint32_t filesz = rd32(ph + 16);
        uint32_t memsz = rd32(ph + 20);
        uint8_t *dst = addr_ptr(paddr);
        if (dst == 0 || offset + filesz > (uint32_t)size) {
            fprintf(stderr, "cannot load segment at 0x%08x\n", paddr);
            free(buf);
            return 1;
        }
        memset(dst, 0, memsz);
        memcpy(dst, buf + offset, filesz);
    }

    free(buf);
    return 0;
}

static void cpu_reset(cpu_t *cpu)
{
    memset(cpu, 0, sizeof(*cpu));
    cpu->vector_table = FLASH_BASE;
    cpu->r[13] = mem_read32(cpu, FLASH_BASE);
    cpu->r[15] = mem_read32(cpu, FLASH_BASE + 4u) & ~1u;
}

static void self_expect(const char *name, bool ok, int *failures)
{
    if (!ok) {
        fprintf(stderr, "PERIPHERAL SELFTEST FAIL: %s\n", name);
        (*failures)++;
    }
}

static int peripheral_self_test(void)
{
    cpu_t cpu;
    int failures = 0;
    memset(&cpu, 0, sizeof(cpu));
    memset(g_sram, 0, sizeof(g_sram));

    mem_write32(&cpu, SIO_BASE + 0x024u, 1u << 25);
    mem_write32(&cpu, SIO_BASE + 0x014u, 1u << 25);
    self_expect("GPIO output enable", (mem_read32(&cpu, SIO_BASE + 0x020u) & (1u << 25)) != 0, &failures);
    self_expect("GPIO output value", (mem_read32(&cpu, SIO_BASE + 0x004u) & (1u << 25)) != 0, &failures);

    mem_write32(&cpu, IO_BANK0_BASE + 25u * 8u + 4u, 5u);
    self_expect("IO_BANK0 GPIO control", mem_read32(&cpu, IO_BANK0_BASE + 25u * 8u + 4u) == 5u, &failures);

    mem_write32(&cpu, PIO0_BASE + 0x010u, 0x12345678u);
    self_expect("PIO FIFO loopback", mem_read32(&cpu, PIO0_BASE + 0x020u) == 0x12345678u, &failures);

    mem_write32(&cpu, SRAM_BASE + 0x000u, 0x11223344u);
    mem_write32(&cpu, SRAM_BASE + 0x004u, 0x55667788u);
    mem_write32(&cpu, DMA_BASE + 0x000u, SRAM_BASE);
    mem_write32(&cpu, DMA_BASE + 0x004u, SRAM_BASE + 0x100u);
    mem_write32(&cpu, DMA_BASE + 0x008u, 2u);
    mem_write32(&cpu, DMA_BASE + 0x00cu, 1u | (2u << 2) | (1u << 4) | (1u << 5));
    self_expect("DMA word 0", mem_read32(&cpu, SRAM_BASE + 0x100u) == 0x11223344u, &failures);
    self_expect("DMA word 1", mem_read32(&cpu, SRAM_BASE + 0x104u) == 0x55667788u, &failures);

    mem_write32(&cpu, PWM_BASE + 0xa0u, 1u);
    peripheral_tick(&cpu);
    peripheral_tick(&cpu);
    self_expect("PWM counter", mem_read32(&cpu, PWM_BASE + 0x08u) == 2u, &failures);

    mem_write32(&cpu, ADC_BASE + 0x00u, 4u);
    self_expect("ADC ready", (mem_read32(&cpu, ADC_BASE + 0x00u) & (1u << 8)) != 0, &failures);
    self_expect("ADC sample", mem_read32(&cpu, ADC_BASE + 0x04u) == 2048u, &failures);

    mem_write32(&cpu, SPI0_BASE + 0x08u, 0x5au);
    self_expect("SPI loopback", mem_read32(&cpu, SPI0_BASE + 0x08u) == 0x5au, &failures);
    mem_write32(&cpu, I2C0_BASE + 0x10u, 0xa5u);
    self_expect("I2C loopback", mem_read32(&cpu, I2C0_BASE + 0x10u) == 0xa5u, &failures);

    mem_write32(&cpu, USB_DPRAM_BASE + 0x40u, 0xdeadbeefu);
    mem_write32(&cpu, USB_REGS_BASE + 0x08u, 0x00000001u);
    self_expect("USB DPRAM", mem_read32(&cpu, USB_DPRAM_BASE + 0x40u) == 0xdeadbeefu, &failures);
    self_expect("USB registers", mem_read32(&cpu, USB_REGS_BASE + 0x08u) == 1u, &failures);

    cpu.steps = 100u;
    mem_write32(&cpu, TIMER_BASE + 0x38u, 1u);
    mem_write32(&cpu, NVIC_ISER, 1u);
    mem_write32(&cpu, TIMER_BASE + 0x10u, 102u);
    cpu.steps = 102u;
    peripheral_tick(&cpu);
    self_expect("Timer alarm", (mem_read32(&cpu, TIMER_BASE + 0x34u) & 1u) != 0, &failures);
    self_expect("Timer IRQ pending", (mem_read32(&cpu, NVIC_ISPR) & 1u) != 0, &failures);

    cpu.vector_table = FLASH_BASE;
    cpu.r[13] = SRAM_BASE + 0x800u;
    cpu.r[15] = FLASH_BASE + 0x100u;
    cpu.r[0] = 0x12345678u;
    wr32(&g_flash[16u * 4u], FLASH_BASE + 0x201u);
    g_flash[0x200u] = 0x70u;
    g_flash[0x201u] = 0x47u;
    uint32_t interrupted_sp = cpu.r[13];
    uint32_t interrupted_pc = cpu.r[15];
    self_expect("NVIC interrupt service", service_pending_interrupt(&cpu), &failures);
    self_expect("Exception handler PC", cpu.r[15] == FLASH_BASE + 0x200u, &failures);
    self_expect("Exception frame SP", cpu.r[13] == interrupted_sp - 32u, &failures);
    self_expect("Exception frame r0", mem_read32(&cpu, cpu.r[13]) == 0x12345678u, &failures);
    step_thumb(&cpu);
    self_expect("Exception return PC", cpu.r[15] == interrupted_pc, &failures);
    self_expect("Exception return SP", cpu.r[13] == interrupted_sp, &failures);
    self_expect("Exception return state", cpu.active_exception == 0, &failures);
    mem_write32(&cpu, TIMER_BASE + 0x34u, 1u);
    self_expect("Timer IRQ clear", (mem_read32(&cpu, TIMER_BASE + 0x34u) & 1u) == 0, &failures);

    wr32(&g_flash[17u * 4u], FLASH_BASE + 0x201u);
    mem_write32(&cpu, NVIC_IPR_BASE, 0x00000080u);
    mem_write32(&cpu, NVIC_ISER, 3u);
    mem_write32(&cpu, NVIC_ISPR, 3u);
    self_expect("NVIC priority pending vector",
        ((mem_read32(&cpu, SCB_ICSR) >> 12) & 0x1ffu) == 17u, &failures);
    self_expect("NVIC priority service", service_pending_interrupt(&cpu), &failures);
    self_expect("NVIC priority selected IRQ1", cpu.active_exception == 17u, &failures);
    step_thumb(&cpu);
    mem_write8(&cpu, NVIC_ICER, 1u);
    mem_write8(&cpu, NVIC_ICPR, 1u);
    self_expect("NVIC byte disable", (mem_read32(&cpu, NVIC_ISER) & 1u) == 0, &failures);
    self_expect("NVIC byte pending clear", (mem_read32(&cpu, NVIC_ISPR) & 1u) == 0, &failures);

    mem_write32(&cpu, WATCHDOG_BASE + 0x04u, 2u);
    mem_write32(&cpu, WATCHDOG_BASE + 0x00u, 1u << 30);
    peripheral_tick(&cpu);
    peripheral_tick(&cpu);
    self_expect("Watchdog expiry", mem_read32(&cpu, WATCHDOG_BASE + 0x08u) == 1u, &failures);

    mem_write32(&cpu, CLOCKS_BASE + 0x48u, 1u);
    mem_write32(&cpu, CLOCKS_BASE + 0x2048u, 4u);
    self_expect("Clock atomic alias", mem_read32(&cpu, CLOCKS_BASE + 0x48u) == 5u, &failures);
    self_expect("Reset done", mem_read32(&cpu, RESETS_BASE + 0x08u) == 0x01ffffffu, &failures);

    if (failures == 0) {
        puts("PERIPHERAL SELFTEST PASS");
        return 0;
    }
    return 1;
}

static void usage(const char *argv0)
{
    fprintf(stderr, "usage: %s [--self-test] [--trace] [--max-steps N] utkernel.elf\n", argv0);
}

int main(int argc, char **argv)
{
    const char *image = 0;
    uint64_t max_steps = 20000000u;
    bool trace = false;
    bool self_test = false;
    cpu_t cpu;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--self-test") == 0) {
            self_test = true;
        }
        else if (strcmp(argv[i], "--trace") == 0) {
            trace = true;
        }
        else if (strcmp(argv[i], "--max-steps") == 0 && i + 1 < argc) {
            i++;
            max_steps = (uint64_t)strtoull(argv[i], 0, 0);
        }
        else {
            image = argv[i];
        }
    }
    if (self_test) {
        return peripheral_self_test();
    }
    if (image == 0) {
        usage(argv[0]);
        return 2;
    }

    memset(g_flash, 0xff, sizeof(g_flash));
    memset(g_sram, 0, sizeof(g_sram));
    if (load_elf32(image) != 0) {
        return 1;
    }
    cpu_reset(&cpu);
    cpu.trace = trace;

    while (!cpu.halt && cpu.steps < max_steps) {
        service_pending_interrupt(&cpu);
        step_thumb(&cpu);
    }
    if (!cpu.halt) {
        fprintf(stderr, "EMU step limit reached at pc=0x%08x\n", cpu.r[15]);
        cpu.exit_code = 124;
    }
    printf("EMU exit: %u\n", cpu.exit_code);
    return (int)cpu.exit_code;
}
