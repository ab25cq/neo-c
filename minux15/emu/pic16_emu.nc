#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define PROGRAM_WORDS 8192
#define DATA_BYTES 512
#define TXREG_ADDR 0x19
#define STATUS_ADDR 0x03
#define PCLATH_ADDR 0x0a
#define MAX_STEPS 100000

typedef struct {
    uint16_t pc;
    uint8_t w;
    uint16_t stack[8];
    int stack_depth;
    unsigned long steps;
    bool halted;
    bool trace;
} pic16_cpu_t;

static uint16_t g_program[PROGRAM_WORDS];
static uint8_t g_data[DATA_BYTES];

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

    memset(g_program, 0, sizeof(g_program));
    uint8_t bytes[PROGRAM_WORDS * 2];
    memset(bytes, 0, sizeof(bytes));
    char line[600];
    uint32_t upper = 0;
    bool loaded = false;

    while (fgets(line, sizeof(line), fp) != NULL) {
        if (line[0] != ':') {
            fclose(fp);
            return 1;
        }
        int count = hex_byte(line + 1);
        int addr_high = hex_byte(line + 3);
        int addr_low = hex_byte(line + 5);
        int type = hex_byte(line + 7);
        if (count < 0 || addr_high < 0 || addr_low < 0 || type < 0) {
            fclose(fp);
            return 1;
        }
        uint32_t address = upper + (uint32_t)((addr_high << 8) | addr_low);
        unsigned int checksum =
            (unsigned int)(count + addr_high + addr_low + type);
        for (int i = 0; i < count; i++) {
            int value = hex_byte(line + 9 + i * 2);
            if (value < 0) {
                fclose(fp);
                return 1;
            }
            checksum += (unsigned int)value;
            if (type == 0) {
                if (address + (uint32_t)i >= sizeof(bytes)) {
                    fclose(fp);
                    return 1;
                }
                bytes[address + (uint32_t)i] = (uint8_t)value;
                loaded = true;
            }
        }
        int expected = hex_byte(line + 9 + count * 2);
        if (expected < 0
            || ((checksum + (unsigned int)expected) & 0xffu) != 0) {
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

    for (int i = 0; i < PROGRAM_WORDS; i++) {
        g_program[i] =
            (uint16_t)(bytes[i * 2] | ((uint16_t)bytes[i * 2 + 1] << 8));
    }
    return loaded ? 0 : 1;
}

static uint16_t file_address(uint8_t file)
{
    if (file == STATUS_ADDR || file == PCLATH_ADDR) {
        return file;
    }
    uint8_t status = g_data[STATUS_ADDR];
    return (uint16_t)(file | ((status & 0x60u) << 2));
}

static void write_file(uint8_t file, uint8_t value)
{
    uint16_t address = file_address(file);
    if (address == TXREG_ADDR) {
        putchar((char)value);
        fflush(stdout);
    }
    if (address < DATA_BYTES) {
        g_data[address] = value;
    }
}

static void push(pic16_cpu_t* cpu, uint16_t value)
{
    if (cpu->stack_depth >= 8) {
        fprintf(stderr, "PIC16 hardware stack overflow\n");
        cpu->halted = true;
        return;
    }
    cpu->stack[cpu->stack_depth++] = value;
}

static uint16_t pop(pic16_cpu_t* cpu)
{
    if (cpu->stack_depth <= 0) {
        cpu->halted = true;
        return cpu->pc;
    }
    return cpu->stack[--cpu->stack_depth];
}

static void step(pic16_cpu_t* cpu)
{
    uint16_t address = cpu->pc;
    uint16_t op = g_program[cpu->pc++] & 0x3fffu;
    cpu->steps++;

    if (cpu->trace) {
        fprintf(stderr, "%04x: %04x W=%02x\n", address, op, cpu->w);
    }
    if (op == 0x0000) {
        return;
    }
    if (op == 0x0008) {
        cpu->pc = pop(cpu);
        return;
    }
    if ((op & 0x3f00u) == 0x3000u) {
        cpu->w = (uint8_t)op;
        return;
    }
    if ((op & 0x3f80u) == 0x0080u) {
        write_file((uint8_t)(op & 0x7fu), cpu->w);
        return;
    }
    if ((op & 0x3c00u) == 0x1000u) {
        uint8_t file = (uint8_t)(op & 0x7fu);
        uint8_t bit = (uint8_t)((op >> 7) & 7u);
        uint16_t data_address = file_address(file);
        g_data[data_address] &= (uint8_t)~(1u << bit);
        return;
    }
    if ((op & 0x3000u) == 0x2000u) {
        uint16_t target =
            (uint16_t)((op & 0x7ffu) | ((g_data[PCLATH_ADDR] & 0x18u) << 8));
        if ((op & 0x0800u) == 0) {
            push(cpu, cpu->pc);
        }
        else if (target == address && cpu->stack_depth == 0) {
            cpu->halted = true;
        }
        cpu->pc = target;
        return;
    }

    fprintf(stderr, "unsupported PIC16 opcode 0x%04x at 0x%04x\n", op, address);
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
        fprintf(stderr, "usage: pic16_emu [--trace] hello.hex\n");
        return 1;
    }
    if (load_ihex(path) != 0) {
        fprintf(stderr, "failed to load PIC Intel HEX\n");
        return 1;
    }

    pic16_cpu_t cpu;
    memset(&cpu, 0, sizeof(cpu));
    cpu.trace = trace;
    while (!cpu.halted && cpu.steps < MAX_STEPS) {
        step(&cpu);
    }
    if (!cpu.halted) {
        fprintf(stderr, "PIC16 execution step limit reached\n");
        return 2;
    }
    return 0;
}
