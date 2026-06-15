#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define EM_AVR 83
#define PT_LOAD 1
#define FLASH_SIZE 65536
#define DATA_SIZE 8704
#define UART_UDR0 0x00c6
#define IO_SPL 0x3d
#define IO_SPH 0x3e
#define IO_SREG 0x3f
#define MAX_STEPS 50000000

#define SREG_C 0
#define SREG_Z 1
#define SREG_N 2
#define SREG_V 3
#define SREG_S 4
#define SREG_H 5
#define SREG_T 6
#define SREG_I 7

typedef struct {
    uint8_t r[32];
    uint8_t data[DATA_SIZE];
    uint16_t pc;
    uint16_t sp;
    uint8_t sreg;
    uint64_t steps;
    bool halted;
    bool trace;
} avr_cpu_t;

static uint8_t g_flash[FLASH_SIZE];
static uint32_t g_flash_size;
static uint16_t g_entry;

static uint16_t rd16(const uint8_t* p)
{
    return (uint16_t)p[0] | ((uint16_t)p[1] << 8);
}

static uint32_t rd32(const uint8_t* p)
{
    return (uint32_t)p[0]
        | ((uint32_t)p[1] << 8)
        | ((uint32_t)p[2] << 16)
        | ((uint32_t)p[3] << 24);
}

static int16_t sign_extend12(uint16_t value)
{
    if ((value & 0x0800u) != 0) {
        return (int16_t)(value | 0xf000u);
    }
    return (int16_t)value;
}

static void data_write(avr_cpu_t* cpu, uint16_t addr, uint8_t value)
{
    if (addr == UART_UDR0) {
        putchar((char)value);
        fflush(stdout);
        return;
    }
    if (addr >= DATA_SIZE) {
        fprintf(stderr, "AVR data write out of range: 0x%04x\n", addr);
        exit(2);
    }
    if(addr < 32) {
        cpu->r[addr] = value;
    }
    else {
        cpu->data[addr] = value;
    }
}

static uint8_t data_read(avr_cpu_t* cpu, uint16_t addr)
{
    if (addr >= DATA_SIZE) {
        fprintf(stderr, "AVR data read out of range: 0x%04x\n", addr);
        exit(2);
    }
    if(addr < 32) {
        return cpu->r[addr];
    }
    return cpu->data[addr];
}

static void push8(avr_cpu_t* cpu, uint8_t value)
{
    data_write(cpu, cpu->sp, value);
    cpu->sp--;
}

static uint8_t pop8(avr_cpu_t* cpu)
{
    cpu->sp++;
    return data_read(cpu, cpu->sp);
}

static void push16(avr_cpu_t* cpu, uint16_t value)
{
    push8(cpu, (uint8_t)value);
    push8(cpu, (uint8_t)(value >> 8));
}

static uint16_t pop16(avr_cpu_t* cpu)
{
    uint16_t high = pop8(cpu);
    uint16_t low = pop8(cpu);
    return (uint16_t)(low | (high << 8));
}

static uint16_t fetch16(uint16_t addr)
{
    if ((uint32_t)addr + 1u >= g_flash_size) {
        fprintf(stderr, "AVR instruction fetch out of range: 0x%04x\n", addr);
        exit(2);
    }
    return rd16(g_flash + addr);
}

static bool flag_get(avr_cpu_t* cpu, uint8_t bit)
{
    return (cpu->sreg & (1u << bit)) != 0;
}

static void flag_set(avr_cpu_t* cpu, uint8_t bit, bool value)
{
    if(value) {
        cpu->sreg |= (uint8_t)(1u << bit);
    }
    else {
        cpu->sreg &= (uint8_t)~(1u << bit);
    }
}

static void set_nzs(avr_cpu_t* cpu, uint8_t result)
{
    bool n = (result & 0x80u) != 0;
    flag_set(cpu, SREG_Z, result == 0);
    flag_set(cpu, SREG_N, n);
    flag_set(cpu, SREG_S, n != flag_get(cpu, SREG_V));
}

static void flags_logic(avr_cpu_t* cpu, uint8_t result)
{
    flag_set(cpu, SREG_V, false);
    set_nzs(cpu, result);
}

static void flags_add(avr_cpu_t* cpu, uint8_t a, uint8_t b, uint8_t result,
    bool preserve_z)
{
    bool a7 = (a & 0x80u) != 0;
    bool b7 = (b & 0x80u) != 0;
    bool r7 = (result & 0x80u) != 0;
    bool z = result == 0 && (!preserve_z || flag_get(cpu, SREG_Z));
    flag_set(cpu, SREG_H, ((a & b) | (b & ~result) | (~result & a)) & 0x08u);
    flag_set(cpu, SREG_V, (a7 && b7 && !r7) || (!a7 && !b7 && r7));
    flag_set(cpu, SREG_N, r7);
    flag_set(cpu, SREG_Z, z);
    flag_set(cpu, SREG_C, (a7 && b7) || (b7 && !r7) || (!r7 && a7));
    flag_set(cpu, SREG_S, r7 != flag_get(cpu, SREG_V));
}

static void flags_sub(avr_cpu_t* cpu, uint8_t a, uint8_t b, uint8_t result,
    bool preserve_z)
{
    bool a7 = (a & 0x80u) != 0;
    bool b7 = (b & 0x80u) != 0;
    bool r7 = (result & 0x80u) != 0;
    bool z = result == 0 && (!preserve_z || flag_get(cpu, SREG_Z));
    flag_set(cpu, SREG_H, ((~a & b) | (b & result) | (result & ~a)) & 0x08u);
    flag_set(cpu, SREG_V, (a7 && !b7 && !r7) || (!a7 && b7 && r7));
    flag_set(cpu, SREG_N, r7);
    flag_set(cpu, SREG_Z, z);
    flag_set(cpu, SREG_C, (!a7 && b7) || (b7 && r7) || (r7 && !a7));
    flag_set(cpu, SREG_S, r7 != flag_get(cpu, SREG_V));
}

static uint8_t decode_dst(uint16_t op)
{
    return (uint8_t)((op >> 4) & 0x1fu);
}

static uint8_t decode_src(uint16_t op)
{
    return (uint8_t)((op & 0x0fu) | ((op >> 5) & 0x10u));
}

static uint8_t decode_q(uint16_t op)
{
    return (uint8_t)(((op >> 8) & 0x20u) | ((op >> 7) & 0x18u)
        | (op & 0x07u));
}

static uint16_t pointer_get(avr_cpu_t* cpu, uint8_t low_reg)
{
    return (uint16_t)(cpu->r[low_reg]
        | ((uint16_t)cpu->r[low_reg + 1] << 8));
}

static void pointer_set(avr_cpu_t* cpu, uint8_t low_reg, uint16_t value)
{
    cpu->r[low_reg] = (uint8_t)value;
    cpu->r[low_reg + 1] = (uint8_t)(value >> 8);
}

static uint8_t instruction_words(uint16_t op)
{
    if((op & 0xfe0eu) == 0x940cu || (op & 0xfe0eu) == 0x940eu
        || (op & 0xfe0fu) == 0x9000u || (op & 0xfe0fu) == 0x9200u) {
        return 2;
    }
    return 1;
}

static void skip_next(avr_cpu_t* cpu)
{
    uint16_t op = fetch16(cpu->pc);
    cpu->pc = (uint16_t)(cpu->pc + instruction_words(op) * 2u);
}

static void unsupported(avr_cpu_t* cpu, uint16_t op, uint16_t pc)
{
    fprintf(stderr, "unsupported AVR opcode 0x%04x at 0x%04x\n", op, pc);
    cpu->halted = true;
}

static void avr_step(avr_cpu_t* cpu)
{
    uint16_t pc = cpu->pc;
    uint16_t op = fetch16(pc);
    uint16_t next = (uint16_t)(pc + 2);
    cpu->pc = next;
    cpu->steps++;

    if (cpu->trace) {
        fprintf(stderr, "%04x: %04x\n", pc, op);
    }

    if((op & 0xfc00u) == 0x0c00u || (op & 0xfc00u) == 0x1c00u) {
        uint8_t dst = decode_dst(op);
        uint8_t src = decode_src(op);
        bool adc = (op & 0xfc00u) == 0x1c00u;
        uint8_t carry = adc && flag_get(cpu, SREG_C) ? 1 : 0;
        uint8_t a = cpu->r[dst];
        uint8_t b = (uint8_t)(cpu->r[src] + carry);
        uint8_t result = (uint8_t)(a + b);
        cpu->r[dst] = result;
        flags_add(cpu, a, b, result, adc);
        return;
    }
    if((op & 0xfc00u) == 0x1800u || (op & 0xfc00u) == 0x0800u
        || (op & 0xfc00u) == 0x1400u || (op & 0xfc00u) == 0x0400u) {
        uint8_t dst = decode_dst(op);
        uint8_t src = decode_src(op);
        uint16_t kind = op & 0xfc00u;
        bool with_carry = kind == 0x0800u || kind == 0x0400u;
        bool compare = kind == 0x1400u || kind == 0x0400u;
        uint8_t carry = with_carry && flag_get(cpu, SREG_C) ? 1 : 0;
        uint8_t a = cpu->r[dst];
        uint8_t b = (uint8_t)(cpu->r[src] + carry);
        uint8_t result = (uint8_t)(a - b);
        if(!compare) {
            cpu->r[dst] = result;
        }
        flags_sub(cpu, a, b, result, with_carry);
        return;
    }
    if((op & 0xfc00u) == 0x1000u) {
        if(cpu->r[decode_dst(op)] == cpu->r[decode_src(op)]) {
            skip_next(cpu);
        }
        return;
    }
    if((op & 0xfc00u) == 0x2000u || (op & 0xfc00u) == 0x2400u
        || (op & 0xfc00u) == 0x2800u || (op & 0xfc00u) == 0x2c00u) {
        uint8_t dst = decode_dst(op);
        uint8_t src = decode_src(op);
        uint16_t kind = op & 0xfc00u;
        if(kind == 0x2000u) {
            cpu->r[dst] &= cpu->r[src];
            flags_logic(cpu, cpu->r[dst]);
        }
        else if(kind == 0x2400u) {
            cpu->r[dst] ^= cpu->r[src];
            flags_logic(cpu, cpu->r[dst]);
        }
        else if(kind == 0x2800u) {
            cpu->r[dst] |= cpu->r[src];
            flags_logic(cpu, cpu->r[dst]);
        }
        else {
            cpu->r[dst] = cpu->r[src];
        }
        return;
    }
    if((op & 0xff00u) == 0x0100u) {
        uint8_t dst = (uint8_t)(((op >> 4) & 0x0fu) * 2u);
        uint8_t src = (uint8_t)((op & 0x0fu) * 2u);
        cpu->r[dst] = cpu->r[src];
        cpu->r[dst + 1] = cpu->r[src + 1];
        return;
    }
    if((op & 0xf000u) == 0x3000u || (op & 0xf000u) == 0x4000u
        || (op & 0xf000u) == 0x5000u || (op & 0xf000u) == 0x6000u
        || (op & 0xf000u) == 0x7000u) {
        uint8_t reg = (uint8_t)(16u + ((op >> 4) & 0x0fu));
        uint8_t value = (uint8_t)(((op >> 4) & 0xf0u) | (op & 0x0fu));
        uint16_t kind = op & 0xf000u;
        uint8_t a = cpu->r[reg];
        if(kind == 0x3000u) {
            flags_sub(cpu, a, value, (uint8_t)(a - value), false);
        }
        else if(kind == 0x4000u) {
            uint8_t b = (uint8_t)(value + (flag_get(cpu, SREG_C) ? 1 : 0));
            cpu->r[reg] = (uint8_t)(a - b);
            flags_sub(cpu, a, b, cpu->r[reg], true);
        }
        else if(kind == 0x5000u) {
            cpu->r[reg] = (uint8_t)(a - value);
            flags_sub(cpu, a, value, cpu->r[reg], false);
        }
        else if(kind == 0x6000u) {
            cpu->r[reg] |= value;
            flags_logic(cpu, cpu->r[reg]);
        }
        else {
            cpu->r[reg] &= value;
            flags_logic(cpu, cpu->r[reg]);
        }
        return;
    }
    if ((op & 0xf000u) == 0xe000u) {
        uint8_t reg = (uint8_t)(16u + ((op >> 4) & 0x0fu));
        uint8_t value = (uint8_t)(((op >> 4) & 0xf0u) | (op & 0x0fu));
        cpu->r[reg] = value;
        return;
    }
    if((op & 0xff00u) == 0x9600u || (op & 0xff00u) == 0x9700u) {
        uint8_t reg = (uint8_t)(24u + (((op >> 4) & 0x03u) * 2u));
        uint8_t value = (uint8_t)(((op >> 2) & 0x30u) | (op & 0x0fu));
        uint16_t a = pointer_get(cpu, reg);
        bool subtract = (op & 0xff00u) == 0x9700u;
        uint16_t result = subtract ? (uint16_t)(a - value)
            : (uint16_t)(a + value);
        pointer_set(cpu, reg, result);
        bool a15 = (a & 0x8000u) != 0;
        bool r15 = (result & 0x8000u) != 0;
        flag_set(cpu, SREG_Z, result == 0);
        flag_set(cpu, SREG_N, r15);
        flag_set(cpu, SREG_V, subtract ? (a15 && !r15) : (!a15 && r15));
        flag_set(cpu, SREG_C, subtract ? (!a15 && r15) : (a15 && !r15));
        flag_set(cpu, SREG_S, r15 != flag_get(cpu, SREG_V));
        return;
    }
    if((op & 0xfe0fu) == 0x9400u || (op & 0xfe0fu) == 0x9401u
        || (op & 0xfe0fu) == 0x9402u || (op & 0xfe0fu) == 0x9403u
        || (op & 0xfe0fu) == 0x9405u || (op & 0xfe0fu) == 0x9407u
        || (op & 0xfe0fu) == 0x940au) {
        uint8_t reg = decode_dst(op);
        uint8_t a = cpu->r[reg];
        uint16_t kind = op & 0xfe0fu;
        uint8_t result = a;
        if(kind == 0x9400u) {
            result = (uint8_t)~a;
            flag_set(cpu, SREG_C, true);
            flags_logic(cpu, result);
        }
        else if(kind == 0x9401u) {
            result = (uint8_t)(0u - a);
            flag_set(cpu, SREG_C, result != 0);
            flag_set(cpu, SREG_V, result == 0x80u);
            set_nzs(cpu, result);
        }
        else if(kind == 0x9402u) {
            result = (uint8_t)((a << 4) | (a >> 4));
        }
        else if(kind == 0x9403u) {
            result = (uint8_t)(a + 1u);
            flag_set(cpu, SREG_V, result == 0x80u);
            set_nzs(cpu, result);
        }
        else if(kind == 0x9405u) {
            bool carry = (a & 1u) != 0;
            result = (uint8_t)((a >> 1) | (a & 0x80u));
            flag_set(cpu, SREG_C, carry);
            flag_set(cpu, SREG_N, (result & 0x80u) != 0);
            flag_set(cpu, SREG_V, flag_get(cpu, SREG_N) != carry);
            flag_set(cpu, SREG_Z, result == 0);
            flag_set(cpu, SREG_S,
                flag_get(cpu, SREG_N) != flag_get(cpu, SREG_V));
        }
        else if(kind == 0x9407u) {
            bool carry = (a & 1u) != 0;
            result = (uint8_t)((a >> 1)
                | (flag_get(cpu, SREG_C) ? 0x80u : 0));
            flag_set(cpu, SREG_C, carry);
            flag_set(cpu, SREG_N, (result & 0x80u) != 0);
            flag_set(cpu, SREG_V, flag_get(cpu, SREG_N) != carry);
            flag_set(cpu, SREG_Z, result == 0);
            flag_set(cpu, SREG_S,
                flag_get(cpu, SREG_N) != flag_get(cpu, SREG_V));
        }
        else {
            result = (uint8_t)(a - 1u);
            flag_set(cpu, SREG_V, result == 0x7fu);
            set_nzs(cpu, result);
        }
        cpu->r[reg] = result;
        return;
    }
    if((op & 0xfc00u) == 0x9c00u) {
        uint16_t result = (uint16_t)cpu->r[decode_dst(op)]
            * (uint16_t)cpu->r[decode_src(op)];
        cpu->r[0] = (uint8_t)result;
        cpu->r[1] = (uint8_t)(result >> 8);
        flag_set(cpu, SREG_Z, result == 0);
        flag_set(cpu, SREG_C, (result & 0x8000u) != 0);
        return;
    }
    if((op & 0xfc00u) == 0xf000u || (op & 0xfc00u) == 0xf400u) {
        uint8_t bit = (uint8_t)(op & 0x07u);
        int8_t offset = (int8_t)((op >> 3) & 0x7fu);
        if((offset & 0x40) != 0) {
            offset |= (int8_t)0x80;
        }
        bool branch_if_set = (op & 0xfc00u) == 0xf000u;
        if(flag_get(cpu, bit) == branch_if_set) {
            cpu->pc = (uint16_t)(next + (int16_t)offset * 2);
        }
        return;
    }
    if((op & 0xfe08u) == 0xfc00u || (op & 0xfe08u) == 0xfe00u) {
        uint8_t reg = decode_dst(op);
        uint8_t bit = (uint8_t)(op & 0x07u);
        bool skip_if_set = (op & 0xfe08u) == 0xfe00u;
        if(((cpu->r[reg] & (1u << bit)) != 0) == skip_if_set) {
            skip_next(cpu);
        }
        return;
    }
    if ((op & 0xf000u) == 0xc000u) {
        int16_t offset = sign_extend12((uint16_t)(op & 0x0fffu));
        cpu->pc = (uint16_t)(next + offset * 2);
        return;
    }
    if ((op & 0xf800u) == 0xb800u) {
        uint8_t io = (uint8_t)(((op >> 5) & 0x30u) | (op & 0x0fu));
        uint8_t reg = (uint8_t)((op >> 4) & 0x1fu);
        data_write(cpu, (uint16_t)(io + 0x20u), cpu->r[reg]);
        if (io == IO_SPL) {
            cpu->sp = (uint16_t)((cpu->sp & 0xff00u) | cpu->r[reg]);
        }
        else if (io == IO_SPH) {
            cpu->sp = (uint16_t)((cpu->sp & 0x00ffu) | ((uint16_t)cpu->r[reg] << 8));
        }
        else if(io == IO_SREG) {
            cpu->sreg = cpu->r[reg];
        }
        return;
    }
    if((op & 0xf800u) == 0xb000u) {
        uint8_t io = (uint8_t)(((op >> 5) & 0x30u) | (op & 0x0fu));
        uint8_t reg = decode_dst(op);
        if(io == IO_SPL) {
            cpu->r[reg] = (uint8_t)cpu->sp;
        }
        else if(io == IO_SPH) {
            cpu->r[reg] = (uint8_t)(cpu->sp >> 8);
        }
        else if(io == IO_SREG) {
            cpu->r[reg] = cpu->sreg;
        }
        else {
            cpu->r[reg] = data_read(cpu, (uint16_t)(io + 0x20u));
        }
        return;
    }
    if((op & 0xfe0fu) == 0x9000u || (op & 0xfe0fu) == 0x9200u) {
        uint16_t addr = fetch16(next);
        uint8_t reg = decode_dst(op);
        cpu->pc = (uint16_t)(next + 2);
        if((op & 0xfe0fu) == 0x9000u) {
            cpu->r[reg] = data_read(cpu, addr);
        }
        else {
            data_write(cpu, addr, cpu->r[reg]);
        }
        return;
    }
    if((op & 0xd208u) == 0x8000u || (op & 0xd208u) == 0x8008u
        || (op & 0xd208u) == 0x8200u || (op & 0xd208u) == 0x8208u) {
        bool store = (op & 0x0200u) != 0;
        uint8_t low_reg = (op & 0x0008u) != 0 ? 28 : 30;
        uint16_t addr = (uint16_t)(pointer_get(cpu, low_reg) + decode_q(op));
        uint8_t reg = decode_dst(op);
        if(store) {
            data_write(cpu, addr, cpu->r[reg]);
        }
        else {
            cpu->r[reg] = data_read(cpu, addr);
        }
        return;
    }
    if((op & 0xfe0fu) == 0x900cu || (op & 0xfe0fu) == 0x900du
        || (op & 0xfe0fu) == 0x900eu || (op & 0xfe0fu) == 0x9008u
        || (op & 0xfe0fu) == 0x9009u || (op & 0xfe0fu) == 0x900au
        || (op & 0xfe0fu) == 0x9001u || (op & 0xfe0fu) == 0x9002u
        || (op & 0xfe0fu) == 0x920cu || (op & 0xfe0fu) == 0x920du
        || (op & 0xfe0fu) == 0x920eu || (op & 0xfe0fu) == 0x9208u
        || (op & 0xfe0fu) == 0x9209u || (op & 0xfe0fu) == 0x920au
        || (op & 0xfe0fu) == 0x9201u || (op & 0xfe0fu) == 0x9202u) {
        uint16_t kind = op & 0xfe0fu;
        bool store = (kind & 0x0200u) != 0;
        uint8_t low_reg = (kind & 0x000cu) == 0x000cu ? 26
            : ((kind & 0x0008u) != 0 ? 28 : 30);
        bool post_inc = (kind & 0x000fu) == 0x000du
            || (kind & 0x000fu) == 0x0009u
            || (kind & 0x000fu) == 0x0001u;
        bool pre_dec = (kind & 0x000fu) == 0x000eu
            || (kind & 0x000fu) == 0x000au
            || (kind & 0x000fu) == 0x0002u;
        uint16_t addr = pointer_get(cpu, low_reg);
        if(pre_dec) {
            addr--;
            pointer_set(cpu, low_reg, addr);
        }
        uint8_t reg = decode_dst(op);
        if(store) {
            data_write(cpu, addr, cpu->r[reg]);
        }
        else {
            cpu->r[reg] = data_read(cpu, addr);
        }
        if(post_inc) {
            pointer_set(cpu, low_reg, (uint16_t)(addr + 1u));
        }
        return;
    }
    if(op == 0x95c8u || (op & 0xfe0fu) == 0x9004u
        || (op & 0xfe0fu) == 0x9005u) {
        uint8_t reg = op == 0x95c8u ? 0 : decode_dst(op);
        uint16_t z = pointer_get(cpu, 30);
        cpu->r[reg] = z < FLASH_SIZE ? g_flash[z] : 0xffu;
        if((op & 0xfe0fu) == 0x9005u) {
            pointer_set(cpu, 30, (uint16_t)(z + 1u));
        }
        return;
    }
    if((op & 0xfe0fu) == 0x920fu) {
        push8(cpu, cpu->r[decode_dst(op)]);
        return;
    }
    if((op & 0xfe0fu) == 0x900fu) {
        cpu->r[decode_dst(op)] = pop8(cpu);
        return;
    }
    if ((op & 0xfe0eu) == 0x940eu) {
        uint16_t op2 = fetch16(next);
        uint32_t word_addr = (uint32_t)op2
            | ((uint32_t)(op & 0x0001u) << 16)
            | ((uint32_t)(op & 0x01f0u) << 13);
        uint16_t return_pc = (uint16_t)(next + 2);
        push16(cpu, return_pc);
        cpu->pc = (uint16_t)(word_addr * 2u);
        return;
    }
    if((op & 0xfe0eu) == 0x940cu) {
        uint16_t op2 = fetch16(next);
        uint32_t word_addr = (uint32_t)op2
            | ((uint32_t)(op & 0x0001u) << 16)
            | ((uint32_t)(op & 0x01f0u) << 13);
        cpu->pc = (uint16_t)(word_addr * 2u);
        return;
    }
    if(op == 0x9509u) {
        uint16_t return_pc = next;
        push16(cpu, return_pc);
        cpu->pc = (uint16_t)(pointer_get(cpu, 30) * 2u);
        return;
    }
    if (op == 0x9508u) {
        cpu->pc = pop16(cpu);
        return;
    }
    if (op == 0x9598u) {
        cpu->halted = true;
        return;
    }
    if(op == 0x94f8u) {
        flag_set(cpu, SREG_I, false);
        return;
    }
    if(op == 0x9468u) {
        flag_set(cpu, SREG_T, true);
        return;
    }
    if(op == 0x94e8u) {
        flag_set(cpu, SREG_T, false);
        return;
    }
    if (op == 0x0000u) {
        return;
    }

    unsupported(cpu, op, pc);
}

static int load_elf32(const char* path)
{
    FILE* fp = fopen(path, "rb");
    if (fp == NULL) {
        perror(path);
        return 1;
    }
    if (fseek(fp, 0, SEEK_END) != 0) {
        perror("fseek");
        fclose(fp);
        return 1;
    }
    long file_size = ftell(fp);
    if (file_size < 52) {
        fprintf(stderr, "AVR ELF is too small\n");
        fclose(fp);
        return 1;
    }
    rewind(fp);
    uint8_t* buf = (uint8_t*)malloc((size_t)file_size);
    if (buf == NULL) {
        fclose(fp);
        return 1;
    }
    if (fread(buf, 1, (size_t)file_size, fp) != (size_t)file_size) {
        perror("fread");
        free(buf);
        fclose(fp);
        return 1;
    }
    fclose(fp);

    if (buf[0] != 0x7f || buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F'
        || buf[4] != 1 || buf[5] != 1 || rd16(buf + 18) != EM_AVR) {
        fprintf(stderr, "not a little-endian ELF32 AVR file\n");
        free(buf);
        return 1;
    }

    memset(g_flash, 0xff, sizeof(g_flash));
    g_entry = (uint16_t)rd32(buf + 24);
    uint32_t phoff = rd32(buf + 28);
    uint16_t phentsize = rd16(buf + 42);
    uint16_t phnum = rd16(buf + 44);
    g_flash_size = 0;

    for (uint16_t i = 0; i < phnum; i++) {
        uint32_t pos = phoff + (uint32_t)i * phentsize;
        if (pos + 32u > (uint32_t)file_size) {
            fprintf(stderr, "invalid AVR ELF program header\n");
            free(buf);
            return 1;
        }
        uint8_t* ph = buf + pos;
        if (rd32(ph) != PT_LOAD) {
            continue;
        }
        uint32_t offset = rd32(ph + 4);
        uint32_t paddr = rd32(ph + 12);
        uint32_t filesz = rd32(ph + 16);
        if(filesz == 0) {
            continue;
        }
        if (paddr + filesz > FLASH_SIZE || offset + filesz > (uint32_t)file_size) {
            fprintf(stderr, "invalid AVR flash segment\n");
            free(buf);
            return 1;
        }
        memcpy(g_flash + paddr, buf + offset, filesz);
        if (paddr + filesz > g_flash_size) {
            g_flash_size = paddr + filesz;
        }
    }

    free(buf);
    return g_flash_size == 0 ? 1 : 0;
}

int main(int argc, char** argv)
{
    bool trace = false;
    const char* path = NULL;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--trace") == 0) {
            trace = true;
        }
        else {
            path = argv[i];
        }
    }
    if (path == NULL) {
        fprintf(stderr, "usage: avr_emu [--trace] hello.elf\n");
        return 1;
    }
    if (load_elf32(path) != 0) {
        return 1;
    }

    avr_cpu_t cpu;
    memset(&cpu, 0, sizeof(cpu));
    cpu.pc = 0;
    cpu.sp = DATA_SIZE - 1;
    cpu.trace = trace;

    while (!cpu.halted && cpu.steps < MAX_STEPS) {
        avr_step(&cpu);
    }
    if (!cpu.halted) {
        fprintf(stderr, "AVR execution step limit reached\n");
        return 2;
    }
    return 0;
}
