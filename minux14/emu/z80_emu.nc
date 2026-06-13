#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define MEMORY_SIZE 65536
#define UART_ADDR 0xff00
#define ENTRY_ADDR 0x0104
#define MAX_STEPS 1000000

typedef struct {
    uint8_t a;
    uint16_t de;
    uint16_t pc;
    uint16_t sp;
    uint64_t steps;
    bool halted;
    bool trace;
} z80_cpu_t;

static uint8_t g_memory[MEMORY_SIZE];

static int hex_digit(char c)
{
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    }
    if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }
    return -1;
}

static int hex_byte(const char* p)
{
    int high = hex_digit(p[0]);
    int low = hex_digit(p[1]);
    return high < 0 || low < 0 ? -1 : (high << 4) | low;
}

static int load_ihex(const char* path)
{
    FILE* fp = fopen(path, "r");
    if (fp == NULL) {
        perror(path);
        return 1;
    }
    memset(g_memory, 0, sizeof(g_memory));

    char line[600];
    uint32_t upper = 0;
    bool loaded = false;
    while (fgets(line, sizeof(line), fp) != NULL) {
        if (line[0] != ':') {
            fprintf(stderr, "invalid Intel HEX line\n");
            fclose(fp);
            return 1;
        }
        int count = hex_byte(line + 1);
        int addr_high = hex_byte(line + 3);
        int addr_low = hex_byte(line + 5);
        int type = hex_byte(line + 7);
        if (count < 0 || addr_high < 0 || addr_low < 0 || type < 0) {
            fprintf(stderr, "invalid Intel HEX field\n");
            fclose(fp);
            return 1;
        }
        uint16_t addr = (uint16_t)((addr_high << 8) | addr_low);
        unsigned int checksum = (unsigned int)(count + addr_high + addr_low + type);
        for (int i = 0; i < count; i++) {
            int value = hex_byte(line + 9 + i * 2);
            if (value < 0) {
                fprintf(stderr, "invalid Intel HEX data\n");
                fclose(fp);
                return 1;
            }
            checksum += (unsigned int)value;
            if (type == 0) {
                uint32_t absolute = upper + addr + (uint32_t)i;
                if (absolute >= MEMORY_SIZE) {
                    fprintf(stderr, "Intel HEX address out of range\n");
                    fclose(fp);
                    return 1;
                }
                g_memory[absolute] = (uint8_t)value;
                loaded = true;
            }
        }
        int expected = hex_byte(line + 9 + count * 2);
        if (expected < 0 || ((checksum + (unsigned int)expected) & 0xffu) != 0) {
            fprintf(stderr, "Intel HEX checksum mismatch\n");
            fclose(fp);
            return 1;
        }
        if (type == 1) {
            break;
        }
        if (type == 4 && count == 2) {
            int high = hex_byte(line + 9);
            int low = hex_byte(line + 11);
            upper = (uint32_t)((high << 8) | low) << 16;
        }
    }

    fclose(fp);
    return loaded ? 0 : 1;
}

static uint8_t fetch8(z80_cpu_t* cpu)
{
    return g_memory[cpu->pc++];
}

static uint16_t fetch16(z80_cpu_t* cpu)
{
    uint16_t low = fetch8(cpu);
    uint16_t high = fetch8(cpu);
    return (uint16_t)(low | (high << 8));
}

static void mem_write8(uint16_t addr, uint8_t value)
{
    if (addr == UART_ADDR) {
        putchar((char)value);
        fflush(stdout);
        return;
    }
    g_memory[addr] = value;
}

static void push16(z80_cpu_t* cpu, uint16_t value)
{
    g_memory[--cpu->sp] = (uint8_t)(value >> 8);
    g_memory[--cpu->sp] = (uint8_t)value;
}

static uint16_t pop16(z80_cpu_t* cpu)
{
    uint16_t low = g_memory[cpu->sp++];
    uint16_t high = g_memory[cpu->sp++];
    return (uint16_t)(low | (high << 8));
}

static void z80_step(z80_cpu_t* cpu)
{
    uint16_t pc = cpu->pc;
    uint8_t op = fetch8(cpu);
    cpu->steps++;

    if (cpu->trace) {
        fprintf(stderr, "%04x: %02x\n", pc, op);
    }

    if (op == 0x3e) {
        cpu->a = fetch8(cpu);
        return;
    }
    if (op == 0x32) {
        uint16_t addr = fetch16(cpu);
        mem_write8(addr, cpu->a);
        return;
    }
    if (op == 0xcd) {
        uint16_t addr = fetch16(cpu);
        push16(cpu, cpu->pc);
        cpu->pc = addr;
        return;
    }
    if (op == 0x11) {
        cpu->de = fetch16(cpu);
        return;
    }
    if (op == 0xc9) {
        if (cpu->sp == 0xfffe) {
            cpu->halted = true;
        }
        else {
            cpu->pc = pop16(cpu);
        }
        return;
    }

    fprintf(stderr, "unsupported Z80 opcode 0x%02x at 0x%04x\n", op, pc);
    cpu->halted = true;
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
        fprintf(stderr, "usage: z80_emu [--trace] hello.ihx\n");
        return 1;
    }
    if (load_ihex(path) != 0) {
        return 1;
    }

    z80_cpu_t cpu;
    memset(&cpu, 0, sizeof(cpu));
    cpu.pc = ENTRY_ADDR;
    cpu.sp = 0xfffe;
    cpu.trace = trace;

    while (!cpu.halted && cpu.steps < MAX_STEPS) {
        z80_step(&cpu);
    }
    if (!cpu.halted) {
        fprintf(stderr, "Z80 execution step limit reached\n");
        return 2;
    }
    return 0;
}
