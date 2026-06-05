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
#define PICO_SYST_CVR 0xe000e018u

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
    bool halt;
    bool trace;
} cpu_t;

static uint8_t g_flash[FLASH_SIZE];
static uint8_t g_sram[SRAM_SIZE];

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

static uint8_t mem_read8(cpu_t *cpu, uint32_t addr)
{
    uint8_t *p = addr_ptr(addr);
    if (p != 0) {
        return *p;
    }
    if (addr == PICO_SYST_CVR) {
        return (uint8_t)(cpu->systick & 0xffu);
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
    if (addr == PICO_SYST_CVR) {
        cpu->systick = value;
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
    if (addr == PICO_SYST_CVR) {
        cpu->systick = value;
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
            cpu->r[15] = cpu->r[rs] & ~1u;
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
    cpu->r[13] = mem_read32(cpu, FLASH_BASE);
    cpu->r[15] = mem_read32(cpu, FLASH_BASE + 4u) & ~1u;
}

static void usage(const char *argv0)
{
    fprintf(stderr, "usage: %s [--trace] [--max-steps N] utkernel.elf\n", argv0);
}

int main(int argc, char **argv)
{
    const char *image = 0;
    uint64_t max_steps = 20000000u;
    bool trace = false;
    cpu_t cpu;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--trace") == 0) {
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
        step_thumb(&cpu);
    }
    if (!cpu.halt) {
        fprintf(stderr, "EMU step limit reached at pc=0x%08x\n", cpu.r[15]);
        cpu.exit_code = 124;
    }
    printf("EMU exit: %u\n", cpu.exit_code);
    return (int)cpu.exit_code;
}
