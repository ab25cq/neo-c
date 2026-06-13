#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define EM_AVR 83
#define PT_LOAD 1
#define FLASH_SIZE 32768
#define DATA_SIZE 2304
#define UART_UDR0 0x00c6
#define IO_SPL 0x3d
#define IO_SPH 0x3e
#define MAX_STEPS 1000000

typedef struct {
    uint8_t r[32];
    uint8_t data[DATA_SIZE];
    uint16_t pc;
    uint16_t sp;
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
    cpu->data[addr] = value;
}

static uint8_t data_read(avr_cpu_t* cpu, uint16_t addr)
{
    if (addr >= DATA_SIZE) {
        fprintf(stderr, "AVR data read out of range: 0x%04x\n", addr);
        exit(2);
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

    if ((op & 0xf000u) == 0xe000u) {
        uint8_t reg = (uint8_t)(16u + ((op >> 4) & 0x0fu));
        uint8_t value = (uint8_t)(((op >> 4) & 0xf0u) | (op & 0x0fu));
        cpu->r[reg] = value;
        return;
    }
    if ((op & 0xfc00u) == 0x2400u) {
        uint8_t dst = (uint8_t)((op >> 4) & 0x1fu);
        uint8_t src = (uint8_t)((op & 0x0fu) | ((op >> 5) & 0x10u));
        cpu->r[dst] ^= cpu->r[src];
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
        return;
    }
    if ((op & 0xfe0fu) == 0x8200u) {
        uint8_t reg = (uint8_t)((op >> 4) & 0x1fu);
        uint16_t z = (uint16_t)(cpu->r[30] | ((uint16_t)cpu->r[31] << 8));
        data_write(cpu, z, cpu->r[reg]);
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
    if (op == 0x9508u) {
        cpu->pc = pop16(cpu);
        return;
    }
    if (op == 0x9598u) {
        cpu->halted = true;
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
    cpu.pc = g_entry;
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
