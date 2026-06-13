#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define EM_MSP430 105
#define PT_LOAD 1
#define MEMORY_SIZE 65536
#define UART_TXBUF 0x0067
#define MAX_STEPS 1000000

typedef struct {
    uint16_t r[16];
    uint64_t steps;
    bool halted;
    bool trace;
} msp430_cpu_t;

static uint8_t g_memory[MEMORY_SIZE];
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

static uint16_t mem_read16(uint16_t addr)
{
    return (uint16_t)g_memory[addr]
        | ((uint16_t)g_memory[(uint16_t)(addr + 1)] << 8);
}

static void mem_write8(uint16_t addr, uint8_t value)
{
    if (addr == UART_TXBUF) {
        putchar((char)value);
        fflush(stdout);
        return;
    }
    g_memory[addr] = value;
}

static void unsupported(msp430_cpu_t* cpu, uint16_t op, uint16_t pc)
{
    fprintf(stderr, "unsupported MSP430 opcode 0x%04x at 0x%04x\n", op, pc);
    cpu->halted = true;
}

static void msp430_step(msp430_cpu_t* cpu)
{
    uint16_t pc = cpu->r[0];
    uint16_t op = mem_read16(pc);
    cpu->r[0] = (uint16_t)(pc + 2);
    cpu->steps++;

    if (cpu->trace) {
        fprintf(stderr, "%04x: %04x\n", pc, op);
    }

    // MOV.B #immediate, &absolute
    if (op == 0x40f2u) {
        uint8_t value = (uint8_t)mem_read16(cpu->r[0]);
        uint16_t addr = mem_read16((uint16_t)(cpu->r[0] + 2));
        cpu->r[0] = (uint16_t)(cpu->r[0] + 4);
        mem_write8(addr, value);
        return;
    }

    // MOV.B register, &absolute
    if ((op & 0xf0ffu) == 0x40c2u) {
        uint8_t src = (uint8_t)((op >> 8) & 0x0fu);
        uint16_t addr = mem_read16(cpu->r[0]);
        cpu->r[0] = (uint16_t)(cpu->r[0] + 2);
        mem_write8(addr, (uint8_t)cpu->r[src]);
        return;
    }

    // CLR Rn is the assembler alias for MOV #0, Rn.
    if ((op & 0xfff0u) == 0x4300u) {
        cpu->r[op & 0x000fu] = 0;
        return;
    }

    // RET is the assembler alias for MOV @SP+, PC. With no caller, it
    // terminates the firmware entry point.
    if (op == 0x4130u) {
        cpu->halted = true;
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
        fprintf(stderr, "MSP430 ELF is too small\n");
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
        || buf[4] != 1 || buf[5] != 1 || rd16(buf + 18) != EM_MSP430) {
        fprintf(stderr, "not a little-endian ELF32 MSP430 file\n");
        free(buf);
        return 1;
    }

    memset(g_memory, 0, sizeof(g_memory));
    g_entry = (uint16_t)rd32(buf + 24);
    uint32_t phoff = rd32(buf + 28);
    uint16_t phentsize = rd16(buf + 42);
    uint16_t phnum = rd16(buf + 44);
    bool loaded = false;

    for (uint16_t i = 0; i < phnum; i++) {
        uint32_t pos = phoff + (uint32_t)i * phentsize;
        if (pos + 32u > (uint32_t)file_size) {
            fprintf(stderr, "invalid MSP430 ELF program header\n");
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
        if (paddr + filesz > MEMORY_SIZE || offset + filesz > (uint32_t)file_size) {
            fprintf(stderr, "invalid MSP430 load segment\n");
            free(buf);
            return 1;
        }
        memcpy(g_memory + paddr, buf + offset, filesz);
        loaded = true;
    }

    free(buf);
    return loaded ? 0 : 1;
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
        fprintf(stderr, "usage: msp430_emu [--trace] hello.elf\n");
        return 1;
    }
    if (load_elf32(path) != 0) {
        return 1;
    }

    msp430_cpu_t cpu;
    memset(&cpu, 0, sizeof(cpu));
    cpu.r[0] = g_entry;
    cpu.r[1] = 0x0400;
    cpu.trace = trace;

    while (!cpu.halted && cpu.steps < MAX_STEPS) {
        msp430_step(&cpu);
    }
    if (!cpu.halted) {
        fprintf(stderr, "MSP430 execution step limit reached\n");
        return 2;
    }
    return 0;
}
