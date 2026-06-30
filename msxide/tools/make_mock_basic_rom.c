#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#define ROM_SIZE 0x8000
#define MAX_LABELS 256
#define MAX_FIXUPS 512

#define PORT_IN 0x2e
#define PORT_OUT 0x2f
#define LINEBUF 0xc000
#define STOPFLAG 0xc061
#define CURLINE 0xc062
#define NEXTLINE 0xc063
#define GOSUB_SP 0xc064
#define GOSUB_STACK 0xc070
#define ASM_BASE 0xc100
#define PROGRAM 0xc800

struct Label {
    char name[32];
    int addr;
};

struct Fixup {
    char name[32];
    int pos;
    int rel;
};

static unsigned char rom[ROM_SIZE];
static int pc;
static struct Label labels[MAX_LABELS];
static int label_count;
static struct Fixup fixups[MAX_FIXUPS];
static int fixup_count;

static void emit(int value)
{
    if (pc >= ROM_SIZE) {
        fprintf(stderr, "ROM overflow\n");
        exit(1);
    }
    rom[pc++] = (unsigned char)value;
}

static void emit16(int value)
{
    emit(value & 255);
    emit((value >> 8) & 255);
}

static void label(const char *name)
{
    strncpy(labels[label_count].name, name, sizeof(labels[label_count].name) - 1);
    labels[label_count].name[sizeof(labels[label_count].name) - 1] = '\0';
    labels[label_count].addr = pc;
    label_count++;
}

static void const_label(const char *name, int addr)
{
    strncpy(labels[label_count].name, name, sizeof(labels[label_count].name) - 1);
    labels[label_count].name[sizeof(labels[label_count].name) - 1] = '\0';
    labels[label_count].addr = addr;
    label_count++;
}

static int find_label(const char *name)
{
    int i = 0;
    while (i < label_count) {
        if (strcmp(labels[i].name, name) == 0) {
            return labels[i].addr;
        }
        i++;
    }
    fprintf(stderr, "unknown label: %s\n", name);
    exit(1);
}

static void fix16(const char *name)
{
    strncpy(fixups[fixup_count].name, name, sizeof(fixups[fixup_count].name) - 1);
    fixups[fixup_count].name[sizeof(fixups[fixup_count].name) - 1] = '\0';
    fixups[fixup_count].pos = pc;
    fixups[fixup_count].rel = 0;
    fixup_count++;
    emit16(0);
}

static void fixrel(const char *name)
{
    strncpy(fixups[fixup_count].name, name, sizeof(fixups[fixup_count].name) - 1);
    fixups[fixup_count].name[sizeof(fixups[fixup_count].name) - 1] = '\0';
    fixups[fixup_count].pos = pc;
    fixups[fixup_count].rel = 1;
    fixup_count++;
    emit(0);
}

static void patch_fixups(void)
{
    int i = 0;
    while (i < fixup_count) {
        int addr = find_label(fixups[i].name);
        if (fixups[i].rel) {
            int off = addr - (fixups[i].pos + 1);
            if (off < -128 || off > 127) {
                fprintf(stderr, "relative jump out of range to %s\n", fixups[i].name);
                exit(1);
            }
            rom[fixups[i].pos] = (unsigned char)(signed char)off;
        } else {
            rom[fixups[i].pos] = (unsigned char)(addr & 255);
            rom[fixups[i].pos + 1] = (unsigned char)(addr >> 8);
        }
        i++;
    }
}

static void call(const char *name) { emit(0xcd); fix16(name); }
static void jp(const char *name) { emit(0xc3); fix16(name); }
static void jpz(const char *name) { emit(0xca); fix16(name); }
static void jr(const char *name) { emit(0x18); fixrel(name); }
static void jrz(const char *name) { emit(0x28); fixrel(name); }
static void jrnz(const char *name) { emit(0x20); fixrel(name); }
static void jrc(const char *name) { emit(0x38); fixrel(name); }
static void jrnc(const char *name) { emit(0x30); fixrel(name); }

static void ld_hl(int value) { emit(0x21); emit16(value); }
static void ld_de(int value) { emit(0x11); emit16(value); }
static void ld_sp(int value) { emit(0x31); emit16(value); }
static void ld_a_n(int value) { emit(0x3e); emit(value); }
static void ld_b_n(int value) { emit(0x06); emit(value); }
static void ld_c_n(int value) { emit(0x0e); emit(value); }

static void emit_string(const char *s)
{
    while (*s != '\0') {
        emit((unsigned char)*s);
        s++;
    }
    emit(0);
}

int main(int argc, char **argv)
{
    const char *path = argc > 1 ? argv[1] : "roms/msx.rom";
    FILE *fp;

    memset(rom, 0, sizeof(rom));
    mkdir("roms", 0777);
    const_label("asm_entry", ASM_BASE);

    label("start");
    ld_sp(0xf380);
    ld_hl(0);
    emit(0x22); emit16(CURLINE);
    ld_a_n(0);
    emit(0x32); emit16(STOPFLAG);
    emit(0x32); emit16(GOSUB_SP);
    ld_hl(0); fixups[fixup_count].rel = 0;
    pc -= 2; fix16("banner");
    call("puts");
    label("main");
    call("read_line");
    ld_hl(LINEBUF);
    call("exec_line");
    jp("main");

    label("read_line");
    ld_hl(LINEBUF);
    label("read_loop");
    emit(0xdb); emit(PORT_IN);
    emit(0xb7);
    jrz("read_loop");
    emit(0xfe); emit(13);
    jrz("read_enter");
    emit(0xfe); emit(10);
    jrz("read_enter");
    emit(0x77);
    emit(0x23);
    jr("read_loop");
    label("read_enter");
    ld_a_n(0);
    emit(0x77);
    ld_a_n(10);
    emit(0xd3); emit(PORT_OUT);
    emit(0xc9);

    label("skip_spaces");
    label("skip_spaces_loop");
    emit(0x7e);
    emit(0xfe); emit(' ');
    jrz("skip_spaces_inc");
    emit(0xfe); emit('\t');
    jrz("skip_spaces_inc");
    emit(0xc9);
    label("skip_spaces_inc");
    emit(0x23);
    jr("skip_spaces_loop");

    label("exec_line");
    call("skip_spaces");
    emit(0x7e);
    emit(0xfe); emit('0');
    jrc("exec_statement");
    emit(0xfe); emit(':');
    jrnc("exec_statement");
    emit(0xd6); emit('0');
    emit(0x47);
    emit(0x23);
    emit(0x7e);
    emit(0xfe); emit('0');
    jrc("line_number_done");
    emit(0xfe); emit(':');
    jrnc("line_number_done");
    emit(0xd6); emit('0');
    emit(0x4f);
    emit(0x78);
    emit(0x87);
    emit(0x57);
    emit(0x87);
    emit(0x87);
    emit(0x82);
    emit(0x81);
    emit(0x47);
    emit(0x23);
    label("line_number_done");
    call("skip_spaces");
    call("store_line");
    emit(0xc9);

    label("store_line");
    emit(0xe5);
    call("slot_addr");
    emit(0xe1);
    emit(0x7e);
    emit(0xb7);
    jrnz("store_nonempty");
    ld_a_n(0);
    emit(0x12);
    emit(0xc9);
    label("store_nonempty");
    ld_a_n(1);
    emit(0x12);
    emit(0x13);
    ld_c_n(0);
    label("store_copy");
    emit(0x7e);
    emit(0x12);
    emit(0xb7);
    jrz("store_done");
    emit(0x23);
    emit(0x13);
    emit(0x0c);
    emit(0x79);
    emit(0xfe); emit(60);
    jrc("store_copy");
    ld_a_n(0);
    emit(0x12);
    label("store_done");
    emit(0xc9);

    label("exec_statement");
    call("skip_spaces");
    emit(0x7e);
    emit(0xb7);
    jpz("stmt_ret");
    emit(0xfe); emit('A');
    jpz("stmt_asm");
    emit(0xfe); emit('a');
    jpz("stmt_asm");
    emit(0xfe); emit('P');
    jpz("stmt_print");
    emit(0xfe); emit('p');
    jpz("stmt_print");
    emit(0xfe); emit('R');
    jpz("stmt_r");
    emit(0xfe); emit('r');
    jpz("stmt_r");
    emit(0xfe); emit('G');
    jpz("stmt_g");
    emit(0xfe); emit('g');
    jpz("stmt_g");
    emit(0xfe); emit('L');
    jpz("stmt_l");
    emit(0xfe); emit('l');
    jpz("stmt_l");
    emit(0xfe); emit('N');
    jpz("stmt_new");
    emit(0xfe); emit('n');
    jpz("stmt_new");
    emit(0xfe); emit('C');
    jpz("stmt_c");
    emit(0xfe); emit('c');
    jpz("stmt_c");
    emit(0xfe); emit('E');
    jpz("stmt_stop");
    emit(0xfe); emit('e');
    jpz("stmt_stop");
    emit(0xfe); emit('S');
    jpz("stmt_s");
    emit(0xfe); emit('s');
    jpz("stmt_s");
    emit(0xfe); emit('W');
    jpz("stmt_width");
    emit(0xfe); emit('w');
    jpz("stmt_width");
    ld_hl(0); pc -= 2; fix16("syntax");
    call("puts");
    label("stmt_ret");
    emit(0xc9);

    label("stmt_r");
    emit(0x23);
    emit(0x7e);
    emit(0xfe); emit('E');
    jpz("stmt_r_e");
    emit(0xfe); emit('e');
    jpz("stmt_r_e");
    jp("stmt_run");
    label("stmt_r_e");
    emit(0x23);
    emit(0x7e);
    emit(0xfe); emit('M');
    jpz("stmt_ret");
    emit(0xfe); emit('m');
    jpz("stmt_ret");
    jp("stmt_return");

    label("stmt_c");
    emit(0x23);
    emit(0x7e);
    emit(0xfe); emit('L');
    jpz("stmt_cls");
    emit(0xfe); emit('l');
    jpz("stmt_cls");
    emit(0xfe); emit('A');
    jpz("stmt_call");
    emit(0xfe); emit('a');
    jpz("stmt_call");
    emit(0xfe); emit('O');
    jpz("stmt_color");
    emit(0xfe); emit('o');
    jpz("stmt_color");
    jp("stmt_syntax");

    label("stmt_s");
    emit(0x23);
    emit(0x7e);
    emit(0xfe); emit('C');
    jpz("stmt_screen");
    emit(0xfe); emit('c');
    jpz("stmt_screen");
    jp("stmt_stop");

    label("stmt_g");
    emit(0x23);
    emit(0x7e);
    emit(0xfe); emit('O');
    jrnz("stmt_syntax");
    emit(0x23);
    emit(0x7e);
    emit(0xfe); emit('S');
    jpz("stmt_gosub");
    emit(0xfe); emit('s');
    jpz("stmt_gosub");
    jp("stmt_goto");

    label("stmt_l");
    emit(0x23);
    emit(0x7e);
    emit(0xfe); emit('O');
    jpz("stmt_locate");
    emit(0xfe); emit('o');
    jpz("stmt_locate");
    jp("stmt_list");

    label("stmt_syntax");
    ld_hl(0); pc -= 2; fix16("syntax");
    call("puts");
    emit(0xc9);

    label("stmt_print");
    emit(0x23); emit(0x23); emit(0x23); emit(0x23); emit(0x23);
    call("skip_spaces");
    emit(0x7e);
    emit(0xfe); emit('"');
    jrnz("print_loop");
    emit(0x23);
    label("print_loop");
    emit(0x7e);
    emit(0xb7);
    jrz("print_done");
    emit(0xfe); emit('"');
    jrz("print_done");
    emit(0xd3); emit(PORT_OUT);
    emit(0x23);
    jr("print_loop");
    label("print_done");
    ld_a_n(10);
    emit(0xd3); emit(PORT_OUT);
    emit(0xc9);

    label("stmt_cls");
    ld_a_n(12);
    emit(0xd3); emit(PORT_OUT);
    emit(0xc9);

    label("stmt_screen");
    emit(0x23);
    emit(0x23);
    emit(0x23);
    emit(0x23);
    emit(0x23);
    emit(0x23);
    call("parse_num");
    emit(0x78);
    emit(0xb7);
    jpz("stmt_ret");
    ld_hl(0); pc -= 2; fix16("textonly");
    call("puts");
    emit(0xc9);

    label("stmt_width");
    emit(0xc9);

    label("stmt_color");
    emit(0xc9);

    label("stmt_stop");
    ld_a_n(1);
    emit(0x32); emit16(STOPFLAG);
    emit(0xc9);

    label("stmt_asm");
    emit(0x23);
    emit(0x23);
    emit(0x23);
    ld_de(ASM_BASE);
    label("asm_loop");
    call("skip_spaces");
    emit(0x7e);
    emit(0xb7);
    jpz("stmt_ret");
    emit(0xfe); emit(',');
    jrnz("asm_parse_byte");
    emit(0x23);
    label("asm_parse_byte");
    call("parse_num");
    emit(0x78);
    emit(0x12);
    emit(0x13);
    jr("asm_loop");

    label("stmt_call");
    call("asm_entry");
    emit(0xc9);

    label("stmt_goto");
    emit(0x23);
    emit(0x23);
    call("parse_num");
    emit(0x78);
    emit(0x32); emit16(NEXTLINE);
    emit(0xc9);

    label("stmt_gosub");
    emit(0x23);
    emit(0x23);
    emit(0x23);
    call("parse_num");
    emit(0x3a); emit16(NEXTLINE);
    emit(0x32); emit16(GOSUB_STACK);
    ld_a_n(1);
    emit(0x32); emit16(GOSUB_SP);
    emit(0x78);
    emit(0x32); emit16(NEXTLINE);
    emit(0xc9);

    label("stmt_return");
    emit(0x3a); emit16(GOSUB_SP);
    emit(0xb7);
    jpz("stmt_ret");
    emit(0x3a); emit16(GOSUB_STACK);
    emit(0x32); emit16(NEXTLINE);
    ld_a_n(0);
    emit(0x32); emit16(GOSUB_SP);
    emit(0xc9);

    label("stmt_locate");
    emit(0x23);
    emit(0x23);
    emit(0x23);
    emit(0x23);
    emit(0x23);
    call("parse_num");
    emit(0x78);
    emit(0x57);
    call("skip_spaces");
    emit(0x7e);
    emit(0xfe); emit(',');
    jrnz("locate_no_comma");
    emit(0x23);
    label("locate_no_comma");
    call("parse_num");
    ld_a_n(31);
    emit(0xd3); emit(PORT_OUT);
    emit(0x7a);
    emit(0xd3); emit(PORT_OUT);
    emit(0x78);
    emit(0xd3); emit(PORT_OUT);
    emit(0xc9);

    label("stmt_new");
    ld_b_n(0);
    label("new_loop");
    call("slot_addr");
    ld_a_n(0);
    emit(0x12);
    emit(0x04);
    emit(0x78);
    emit(0xfe); emit(100);
    jrc("new_loop");
    emit(0xc9);

    label("stmt_run");
    ld_a_n(0);
    emit(0x32); emit16(STOPFLAG);
    emit(0x32); emit16(GOSUB_SP);
    ld_b_n(0);
    label("run_loop");
    emit(0x78);
    emit(0x32); emit16(CURLINE);
    emit(0x3c);
    emit(0x32); emit16(NEXTLINE);
    call("slot_addr");
    emit(0x1a);
    emit(0xb7);
    jrz("run_next");
    emit(0x13);
    emit(0xeb);
    call("exec_statement");
    emit(0x3a); emit16(STOPFLAG);
    emit(0xb7);
    jrnz("run_done");
    label("run_next");
    emit(0x3a); emit16(NEXTLINE);
    emit(0x47);
    emit(0x78);
    emit(0xfe); emit(100);
    jrc("run_loop");
    label("run_done");
    ld_a_n(0);
    emit(0x32); emit16(STOPFLAG);
    emit(0xc9);

    label("stmt_list");
    ld_b_n(0);
    label("list_loop");
    emit(0x78);
    emit(0x32); emit16(CURLINE);
    call("slot_addr");
    emit(0x1a);
    emit(0xb7);
    jrz("list_next");
    emit(0x3a); emit16(CURLINE);
    emit(0x47);
    call("print_num");
    ld_a_n(' ');
    emit(0xd3); emit(PORT_OUT);
    call("slot_addr");
    emit(0x13);
    emit(0xeb);
    call("puts");
    label("list_next");
    emit(0x3a); emit16(CURLINE);
    emit(0x47);
    emit(0x04);
    emit(0x78);
    emit(0xfe); emit(100);
    jrc("list_loop");
    emit(0xc9);

    label("parse_num");
    call("skip_spaces");
    emit(0x7e);
    emit(0xfe); emit('0');
    jrc("parse_num_zero");
    emit(0xfe); emit(':');
    jrnc("parse_num_zero");
    emit(0xd6); emit('0');
    emit(0x47);
    emit(0x23);
    emit(0x7e);
    emit(0xfe); emit('0');
    jrc("parse_num_done");
    emit(0xfe); emit(':');
    jrnc("parse_num_done");
    emit(0xd6); emit('0');
    emit(0x4f);
    emit(0x78);
    emit(0x87);
    emit(0x57);
    emit(0x87);
    emit(0x87);
    emit(0x82);
    emit(0x81);
    emit(0x47);
    emit(0x23);
    emit(0x7e);
    emit(0xfe); emit('0');
    jrc("parse_num_done");
    emit(0xfe); emit(':');
    jrnc("parse_num_done");
    emit(0xd6); emit('0');
    emit(0x4f);
    emit(0x78);
    emit(0x87);
    emit(0x57);
    emit(0x87);
    emit(0x87);
    emit(0x82);
    emit(0x81);
    emit(0x47);
    emit(0x23);
    label("parse_num_done");
    emit(0xc9);
    label("parse_num_zero");
    ld_b_n(0);
    emit(0xc9);

    label("slot_addr");
    ld_hl(0);
    emit(0x68);
    emit(0x29); emit(0x29); emit(0x29); emit(0x29); emit(0x29); emit(0x29);
    ld_de(PROGRAM);
    emit(0x19);
    emit(0xeb);
    emit(0xc9);

    label("puts");
    label("puts_loop");
    emit(0x7e);
    emit(0xb7);
    jrz("puts_done");
    emit(0xd3); emit(PORT_OUT);
    emit(0x23);
    jr("puts_loop");
    label("puts_done");
    ld_a_n(10);
    emit(0xd3); emit(PORT_OUT);
    emit(0xc9);

    label("print_num");
    emit(0x78);
    ld_c_n(0);
    label("num_tens");
    emit(0xfe); emit(10);
    jrc("num_ones");
    emit(0xd6); emit(10);
    emit(0x0c);
    jr("num_tens");
    label("num_ones");
    emit(0x57);
    emit(0x79);
    emit(0xb7);
    jrz("num_skip_tens");
    emit(0xc6); emit('0');
    emit(0xd3); emit(PORT_OUT);
    label("num_skip_tens");
    emit(0x7a);
    emit(0xc6); emit('0');
    emit(0xd3); emit(PORT_OUT);
    emit(0xc9);

    label("banner");
    emit_string("C- BASIC 0.2");
    emit_string("Z80 ROM BASIC READY");
    label("syntax");
    emit_string("SYNTAX ERROR");
    label("textonly");
    emit_string("TEXT SCREEN ONLY");

    patch_fixups();

    fp = fopen(path, "wb");
    if (fp == NULL) {
        perror(path);
        return 1;
    }
    if (fwrite(rom, 1, sizeof(rom), fp) != sizeof(rom)) {
        perror(path);
        fclose(fp);
        return 1;
    }
    fclose(fp);
    printf("wrote %s (%d bytes, code %d bytes)\n", path, ROM_SIZE, pc);
    return 0;
}
