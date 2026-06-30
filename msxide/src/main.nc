#include <locale.h>
#include <ncursesw/curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MEM_SIZE 65536
#define LOG_LINES 24
#define BASIC_LINES 128
#define KEY_QUEUE_SIZE 512

struct Z80 {
    unsigned char a;
    unsigned char f;
    unsigned char b;
    unsigned char c;
    unsigned char d;
    unsigned char e;
    unsigned char h;
    unsigned char l;
    unsigned short ix;
    unsigned short iy;
    unsigned short pc;
    unsigned short sp;
    unsigned long cycles;
    int halted;
};

struct MSX {
    struct Z80 cpu;
    unsigned char mem[MEM_SIZE];
    unsigned char vram[16384];
    unsigned char vdp_reg[32];
    unsigned char vdp_status;
    unsigned short vdp_addr;
    int running;
    int show_help;
    char log[LOG_LINES][96];
    int log_head;
    int log_count;
    char input[96];
    int input_len;
    int input_cursor;
    int cursor_log;
    int basic_line_no[BASIC_LINES];
    char basic_line[BASIC_LINES][96];
    int basic_count;
    int basic_stop;
    unsigned char key_queue[KEY_QUEUE_SIZE];
    int key_head;
    int key_tail;
    int locate_state;
    int locate_x;
};

static unsigned short pair_hl(struct Z80* cpu)
{
    return ((unsigned short)cpu->h << 8) | cpu->l;
}

static void set_hl(struct Z80* cpu, unsigned short value)
{
    cpu->h = (unsigned char)(value >> 8);
    cpu->l = (unsigned char)(value & 255);
}

static unsigned short get_index(struct Z80* cpu, int use_iy)
{
    return use_iy ? cpu->iy : cpu->ix;
}

static void set_index(struct Z80* cpu, int use_iy, unsigned short value)
{
    if (use_iy) {
        cpu->iy = value;
    } else {
        cpu->ix = value;
    }
}

static void log_msg(struct MSX* msx, const char* text)
{
    strncpy(msx->log[msx->log_head], text, 95);
    msx->log[msx->log_head][95] = '\0';
    msx->log_head++;
    if (msx->log_head >= LOG_LINES) {
        msx->log_head = 0;
    }
    msx->log[msx->log_head][0] = '\0';
    if (msx->log_count < LOG_LINES) {
        msx->log_count++;
    }
    msx->cursor_log = msx->log_head;
    msx->input_cursor = (int)strlen(msx->log[msx->cursor_log]);
}

static void console_putc(struct MSX* msx, unsigned char value)
{
    size_t len;

    if (msx->locate_state == 1) {
        msx->locate_x = value;
        msx->locate_state = 2;
        return;
    }
    if (msx->locate_state == 2) {
        int y = value;
        while (y >= LOG_LINES) {
            y -= LOG_LINES;
        }
        if (y < 0) {
            y = 0;
        }
        msx->log_head = y;
        if (msx->log_count <= y) {
            msx->log_count = y + 1;
        }
        msx->cursor_log = y;
        msx->input_cursor = msx->locate_x;
        msx->log[msx->cursor_log][0] = '\0';
        msx->locate_state = 0;
        return;
    }
    if (value == 31) {
        msx->locate_state = 1;
        return;
    }
    if (value == 12) {
        memset(msx->log, 0, sizeof(msx->log));
        msx->log_head = 0;
        msx->log_count = 1;
        msx->cursor_log = 0;
        msx->input_len = 0;
        msx->input_cursor = 0;
        msx->input[0] = '\0';
        return;
    }
    if (value == '\r') {
        return;
    }
    if (value == '\n') {
        msx->log_head++;
        if (msx->log_head >= LOG_LINES) {
            msx->log_head = 0;
        }
        msx->log[msx->log_head][0] = '\0';
        if (msx->log_count < LOG_LINES) {
            msx->log_count++;
        }
        msx->cursor_log = msx->log_head;
        msx->input_cursor = 0;
        return;
    }
    len = strlen(msx->log[msx->log_head]);
    if (len < 95) {
        msx->log[msx->log_head][len] = (char)value;
        msx->log[msx->log_head][len + 1] = '\0';
        msx->cursor_log = msx->log_head;
        msx->input_cursor = (int)(len + 1);
    }
}

static void queue_key(struct MSX* msx, unsigned char ch)
{
    int next = msx->key_tail + 1;
    if (next >= KEY_QUEUE_SIZE) {
        next = 0;
    }
    if (next != msx->key_head) {
        msx->key_queue[msx->key_tail] = ch;
        msx->key_tail = next;
    }
}

static unsigned char dequeue_key(struct MSX* msx)
{
    unsigned char ch;
    if (msx->key_head == msx->key_tail) {
        return 0;
    }
    ch = msx->key_queue[msx->key_head];
    msx->key_head++;
    if (msx->key_head >= KEY_QUEUE_SIZE) {
        msx->key_head = 0;
    }
    return ch;
}

static void queue_line(struct MSX* msx, const char* line)
{
    while (*line != '\0') {
        queue_key(msx, (unsigned char)*line);
        line++;
    }
    queue_key(msx, '\n');
}

static void clear_input(struct MSX* msx)
{
    msx->input_len = 0;
    msx->input_cursor = 0;
    msx->input[0] = '\0';
    msx->cursor_log = msx->log_head;
}

static void sync_input_from_cursor_line(struct MSX* msx)
{
    strncpy(msx->input, msx->log[msx->cursor_log], 95);
    msx->input[95] = '\0';
    msx->input_len = (int)strlen(msx->input);
    if (msx->input_cursor > msx->input_len) {
        msx->input_cursor = msx->input_len;
    }
}

static void update_cursor_line_from_input(struct MSX* msx)
{
    strncpy(msx->log[msx->cursor_log], msx->input, 95);
    msx->log[msx->cursor_log][95] = '\0';
}

static void append_blank_line(struct MSX* msx)
{
    msx->log_head++;
    if (msx->log_head >= LOG_LINES) {
        msx->log_head = 0;
    }
    msx->log[msx->log_head][0] = '\0';
    if (msx->log_count < LOG_LINES) {
        msx->log_count++;
    }
    msx->cursor_log = msx->log_head;
    msx->input_len = 0;
    msx->input_cursor = 0;
    msx->input[0] = '\0';
}

static const char* skip_spaces(const char* s)
{
    while (*s == ' ' || *s == '\t') {
        s++;
    }
    return s;
}

static void trim_line(char* text)
{
    int len = (int)strlen(text);
    while (len > 0 && (text[len - 1] == ' ' || text[len - 1] == '\t')) {
        len--;
    }
    text[len] = '\0';
}

static int starts_ci(const char* s, const char* word)
{
    while (*word != '\0') {
        char a = *s;
        char b = *word;
        if (a >= 'a' && a <= 'z') {
            a = (char)(a - 'a' + 'A');
        }
        if (b >= 'a' && b <= 'z') {
            b = (char)(b - 'a' + 'A');
        }
        if (a != b) {
            return 0;
        }
        s++;
        word++;
    }
    return 1;
}

static int is_digit_char(char ch)
{
    return ch >= '0' && ch <= '9';
}

static const char* parse_line_number(const char* s, int* number)
{
    int value = 0;
    int found = 0;

    s = skip_spaces(s);
    while (is_digit_char(*s)) {
        value = value * 10 + (*s - '0');
        found = 1;
        s++;
    }
    if (!found) {
        return NULL;
    }
    *number = value;
    return skip_spaces(s);
}

static int basic_find_line(struct MSX* msx, int number)
{
    int i = 0;
    while (i < msx->basic_count) {
        if (msx->basic_line_no[i] == number) {
            return i;
        }
        i++;
    }
    return -1;
}

static int basic_insert_pos(struct MSX* msx, int number)
{
    int i = 0;
    while (i < msx->basic_count && msx->basic_line_no[i] < number) {
        i++;
    }
    return i;
}

static void basic_print_text(struct MSX* msx, const char* s);

static void basic_delete_line(struct MSX* msx, int index)
{
    int i = index;
    while (i + 1 < msx->basic_count) {
        msx->basic_line_no[i] = msx->basic_line_no[i + 1];
        strncpy(msx->basic_line[i], msx->basic_line[i + 1], 95);
        msx->basic_line[i][95] = '\0';
        i++;
    }
    if (msx->basic_count > 0) {
        msx->basic_count--;
    }
}

static void basic_store_line(struct MSX* msx, int number, const char* body)
{
    int index = basic_find_line(msx, number);
    int pos;
    int i;

    if (*body == '\0') {
        if (index >= 0) {
            basic_delete_line(msx, index);
        }
        clear_input(msx);
        return;
    }
    if (index >= 0) {
        strncpy(msx->basic_line[index], body, 95);
        msx->basic_line[index][95] = '\0';
        clear_input(msx);
        return;
    }
    if (msx->basic_count >= BASIC_LINES) {
        basic_print_text(msx, "OUT OF MEMORY");
        clear_input(msx);
        return;
    }
    pos = basic_insert_pos(msx, number);
    i = msx->basic_count;
    while (i > pos) {
        msx->basic_line_no[i] = msx->basic_line_no[i - 1];
        strncpy(msx->basic_line[i], msx->basic_line[i - 1], 95);
        msx->basic_line[i][95] = '\0';
        i--;
    }
    msx->basic_line_no[pos] = number;
    strncpy(msx->basic_line[pos], body, 95);
    msx->basic_line[pos][95] = '\0';
    msx->basic_count++;
    clear_input(msx);
}

static void basic_print_text(struct MSX* msx, const char* s)
{
    while (*s != '\0') {
        console_putc(msx, (unsigned char)*s);
        s++;
    }
    console_putc(msx, '\n');
}

static void basic_execute_statement(struct MSX* msx, const char* line);

static void basic_run_program(struct MSX* msx)
{
    int i = 0;
    msx->basic_stop = 0;
    while (i < msx->basic_count && !msx->basic_stop) {
        char line[96];
        strncpy(line, msx->basic_line[i], sizeof(line) - 1);
        line[sizeof(line) - 1] = '\0';
        trim_line(line);
        basic_execute_statement(msx, line);
        i++;
    }
    msx->basic_stop = 0;
    clear_input(msx);
}

static void basic_list_program(struct MSX* msx)
{
    int i = 0;
    while (i < msx->basic_count) {
        char buf[128];
        snprintf(buf, sizeof(buf), "%d %s", msx->basic_line_no[i], msx->basic_line[i]);
        basic_print_text(msx, buf);
        i++;
    }
    clear_input(msx);
}

static void basic_execute_statement(struct MSX* msx, const char* line)
{
    const char* p = skip_spaces(line);

    if (*p == '\0') {
        clear_input(msx);
        return;
    }
    if (starts_ci(p, "CLS")) {
        memset(msx->log, 0, sizeof(msx->log));
        msx->log_head = 0;
        msx->log_count = 1;
        msx->cursor_log = 0;
        clear_input(msx);
        return;
    }
    if (starts_ci(p, "RUN")) {
        basic_run_program(msx);
        return;
    }
    if (starts_ci(p, "LIST")) {
        basic_list_program(msx);
        return;
    }
    if (starts_ci(p, "NEW")) {
        msx->basic_count = 0;
        clear_input(msx);
        return;
    }
    if (starts_ci(p, "END") || starts_ci(p, "STOP")) {
        msx->basic_stop = 1;
        clear_input(msx);
        return;
    }
    if (starts_ci(p, "PRINT")) {
        p = skip_spaces(p + 5);
        if (*p == '"') {
            p++;
            while (*p != '\0' && *p != '"') {
                console_putc(msx, (unsigned char)*p);
                p++;
            }
            console_putc(msx, '\n');
        } else {
            basic_print_text(msx, p);
        }
        clear_input(msx);
        return;
    }
    basic_print_text(msx, "SYNTAX ERROR");
    clear_input(msx);
}

static void basic_execute(struct MSX* msx, const char* line)
{
    int number = 0;
    char body[96];
    const char* p = parse_line_number(line, &number);

    if (p != NULL) {
        strncpy(body, p, sizeof(body) - 1);
        body[sizeof(body) - 1] = '\0';
        trim_line(body);
        basic_store_line(msx, number, body);
        return;
    }
    basic_execute_statement(msx, line);
}

static void input_backspace(struct MSX* msx)
{
    sync_input_from_cursor_line(msx);
    if (msx->input_cursor > 0) {
        int i = msx->input_cursor - 1;
        while (i < msx->input_len) {
            msx->input[i] = msx->input[i + 1];
            i++;
        }
        msx->input_len--;
        msx->input_cursor--;
        update_cursor_line_from_input(msx);
    }
}

static void input_char(struct MSX* msx, int ch)
{
    sync_input_from_cursor_line(msx);
    if (msx->input_len < 92 && ch >= 32 && ch < 127) {
        int i = msx->input_len;
        while (i > msx->input_cursor) {
            msx->input[i] = msx->input[i - 1];
            i--;
        }
        msx->input[msx->input_cursor] = (char)ch;
        msx->input_len++;
        msx->input_cursor++;
        msx->input[msx->input_len] = '\0';
        update_cursor_line_from_input(msx);
    }
}

static void input_delete(struct MSX* msx)
{
    sync_input_from_cursor_line(msx);
    if (msx->input_cursor < msx->input_len) {
        int i = msx->input_cursor;
        while (i < msx->input_len) {
            msx->input[i] = msx->input[i + 1];
            i++;
        }
        msx->input_len--;
        update_cursor_line_from_input(msx);
    }
}

static void input_left(struct MSX* msx)
{
    if (msx->input_cursor > 0) {
        msx->input_cursor--;
    }
}

static void input_right(struct MSX* msx)
{
    sync_input_from_cursor_line(msx);
    if (msx->input_cursor < msx->input_len) {
        msx->input_cursor++;
    } else if (msx->input_len < 92) {
        msx->input[msx->input_len] = ' ';
        msx->input_len++;
        msx->input_cursor++;
        msx->input[msx->input_len] = '\0';
        update_cursor_line_from_input(msx);
    }
}

static void input_home(struct MSX* msx)
{
    msx->input_cursor = 0;
}

static void input_end(struct MSX* msx)
{
    sync_input_from_cursor_line(msx);
    msx->input_cursor = msx->input_len;
}

static int first_visible_log(struct MSX* msx, int visible)
{
    int display_count = msx->log_count;
    int start;

    if (display_count > visible) {
        display_count = visible;
    }
    start = msx->log_head - display_count + 1;
    while (start < 0) {
        start += LOG_LINES;
    }
    return start;
}

static int cursor_visible_row(struct MSX* msx, int visible)
{
    int display_count = msx->log_count;
    int start;
    int i = 0;

    if (display_count > visible) {
        display_count = visible;
    }
    start = first_visible_log(msx, visible);
    while (i < display_count) {
        if (((start + i) % LOG_LINES) == msx->cursor_log) {
            return i;
        }
        i++;
    }
    return display_count - 1;
}

static void input_up(struct MSX* msx)
{
    int visible = LINES;
    int row;
    int start;

    if (visible > LOG_LINES) {
        visible = LOG_LINES;
    }
    row = cursor_visible_row(msx, visible);
    if (row > 0) {
        start = first_visible_log(msx, visible);
        msx->cursor_log = (start + row - 1) % LOG_LINES;
        sync_input_from_cursor_line(msx);
    }
}

static void input_down(struct MSX* msx)
{
    int visible = LINES;
    int display_count = msx->log_count;
    int row;
    int start;

    if (visible > LOG_LINES) {
        visible = LOG_LINES;
    }
    if (display_count > visible) {
        display_count = visible;
    }
    row = cursor_visible_row(msx, visible);
    if (row + 1 < display_count) {
        start = first_visible_log(msx, visible);
        msx->cursor_log = (start + row + 1) % LOG_LINES;
        sync_input_from_cursor_line(msx);
    } else {
        append_blank_line(msx);
    }
}

static void input_enter(struct MSX* msx)
{
    char line[96];
    sync_input_from_cursor_line(msx);
    strncpy(line, msx->input, sizeof(line) - 1);
    line[sizeof(line) - 1] = '\0';
    trim_line(line);
    console_putc(msx, '\n');
    queue_line(msx, line);
    clear_input(msx);
}

static unsigned char mem_read(struct MSX* msx, unsigned short addr)
{
    return msx->mem[addr];
}

static void mem_write(struct MSX* msx, unsigned short addr, unsigned char value)
{
    msx->mem[addr] = value;
}

static unsigned char fetch8(struct MSX* msx)
{
    unsigned char v = mem_read(msx, msx->cpu.pc);
    msx->cpu.pc++;
    return v;
}

static unsigned short fetch16(struct MSX* msx)
{
    unsigned char lo = fetch8(msx);
    unsigned char hi = fetch8(msx);
    return ((unsigned short)hi << 8) | lo;
}

static void push16(struct MSX* msx, unsigned short value)
{
    msx->cpu.sp--;
    mem_write(msx, msx->cpu.sp, (unsigned char)(value >> 8));
    msx->cpu.sp--;
    mem_write(msx, msx->cpu.sp, (unsigned char)(value & 255));
}

static unsigned short pop16(struct MSX* msx)
{
    unsigned char lo = mem_read(msx, msx->cpu.sp);
    msx->cpu.sp++;
    unsigned char hi = mem_read(msx, msx->cpu.sp);
    msx->cpu.sp++;
    return ((unsigned short)hi << 8) | lo;
}

#define F_S 0x80
#define F_Z 0x40
#define F_H 0x10
#define F_PV 0x04
#define F_N 0x02
#define F_C 0x01

static unsigned short pair_bc(struct Z80* cpu)
{
    return ((unsigned short)cpu->b << 8) | cpu->c;
}

static unsigned short pair_de(struct Z80* cpu)
{
    return ((unsigned short)cpu->d << 8) | cpu->e;
}

static void set_bc(struct Z80* cpu, unsigned short value)
{
    cpu->b = (unsigned char)(value >> 8);
    cpu->c = (unsigned char)(value & 255);
}

static void set_de(struct Z80* cpu, unsigned short value)
{
    cpu->d = (unsigned char)(value >> 8);
    cpu->e = (unsigned char)(value & 255);
}

static int parity_even(unsigned char value)
{
    int bits = 0;
    int i = 0;
    while (i < 8) {
        if ((value & (1 << i)) != 0) {
            bits++;
        }
        i++;
    }
    return (bits & 1) == 0;
}

static void set_szp_flags(struct Z80* cpu, unsigned char value)
{
    cpu->f &= F_C;
    if (value == 0) {
        cpu->f |= F_Z;
    }
    if ((value & 0x80) != 0) {
        cpu->f |= F_S;
    }
    if (parity_even(value)) {
        cpu->f |= F_PV;
    }
}

static int cond_true(struct Z80* cpu, int cond)
{
    if (cond == 0) {
        return (cpu->f & F_Z) == 0;
    }
    if (cond == 1) {
        return (cpu->f & F_Z) != 0;
    }
    if (cond == 2) {
        return (cpu->f & F_C) == 0;
    }
    if (cond == 3) {
        return (cpu->f & F_C) != 0;
    }
    if (cond == 4) {
        return (cpu->f & F_PV) == 0;
    }
    if (cond == 5) {
        return (cpu->f & F_PV) != 0;
    }
    if (cond == 6) {
        return (cpu->f & F_S) == 0;
    }
    return (cpu->f & F_S) != 0;
}

static unsigned short get_rp(struct Z80* cpu, int rp)
{
    if (rp == 0) {
        return pair_bc(cpu);
    }
    if (rp == 1) {
        return pair_de(cpu);
    }
    if (rp == 2) {
        return pair_hl(cpu);
    }
    return cpu->sp;
}

static void set_rp(struct Z80* cpu, int rp, unsigned short value)
{
    if (rp == 0) {
        set_bc(cpu, value);
    } else if (rp == 1) {
        set_de(cpu, value);
    } else if (rp == 2) {
        set_hl(cpu, value);
    } else {
        cpu->sp = value;
    }
}

static unsigned char read_r8(struct MSX* msx, int r)
{
    struct Z80* cpu = &msx->cpu;
    if (r == 0) {
        return cpu->b;
    }
    if (r == 1) {
        return cpu->c;
    }
    if (r == 2) {
        return cpu->d;
    }
    if (r == 3) {
        return cpu->e;
    }
    if (r == 4) {
        return cpu->h;
    }
    if (r == 5) {
        return cpu->l;
    }
    if (r == 6) {
        return mem_read(msx, pair_hl(cpu));
    }
    return cpu->a;
}

static void write_r8(struct MSX* msx, int r, unsigned char value)
{
    struct Z80* cpu = &msx->cpu;
    if (r == 0) {
        cpu->b = value;
    } else if (r == 1) {
        cpu->c = value;
    } else if (r == 2) {
        cpu->d = value;
    } else if (r == 3) {
        cpu->e = value;
    } else if (r == 4) {
        cpu->h = value;
    } else if (r == 5) {
        cpu->l = value;
    } else if (r == 6) {
        mem_write(msx, pair_hl(cpu), value);
    } else {
        cpu->a = value;
    }
}

static unsigned char inc8(struct Z80* cpu, unsigned char value)
{
    unsigned char r = (unsigned char)(value + 1);
    unsigned char carry = cpu->f & F_C;
    cpu->f = carry;
    if ((value & 0x0f) == 0x0f) {
        cpu->f |= F_H;
    }
    if (value == 0x7f) {
        cpu->f |= F_PV;
    }
    if (r == 0) {
        cpu->f |= F_Z;
    }
    if ((r & 0x80) != 0) {
        cpu->f |= F_S;
    }
    return r;
}

static unsigned char dec8(struct Z80* cpu, unsigned char value)
{
    unsigned char r = (unsigned char)(value - 1);
    unsigned char carry = cpu->f & F_C;
    cpu->f = carry | F_N;
    if ((value & 0x0f) == 0) {
        cpu->f |= F_H;
    }
    if (value == 0x80) {
        cpu->f |= F_PV;
    }
    if (r == 0) {
        cpu->f |= F_Z;
    }
    if ((r & 0x80) != 0) {
        cpu->f |= F_S;
    }
    return r;
}

static void add_a(struct Z80* cpu, unsigned char value, int carry_in)
{
    unsigned int c = carry_in && ((cpu->f & F_C) != 0) ? 1 : 0;
    unsigned int r = (unsigned int)cpu->a + value + c;
    unsigned char old = cpu->a;
    cpu->a = (unsigned char)(r & 255);
    cpu->f = 0;
    if (((old ^ value ^ cpu->a) & 0x10) != 0) {
        cpu->f |= F_H;
    }
    if (((old ^ cpu->a) & (value ^ cpu->a) & 0x80) != 0) {
        cpu->f |= F_PV;
    }
    if ((r & 256) != 0) {
        cpu->f |= F_C;
    }
    if (cpu->a == 0) {
        cpu->f |= F_Z;
    }
    if ((cpu->a & 0x80) != 0) {
        cpu->f |= F_S;
    }
}

static void sub_a(struct Z80* cpu, unsigned char value, int carry_in, int store)
{
    unsigned int c = carry_in && ((cpu->f & F_C) != 0) ? 1 : 0;
    unsigned int r = (unsigned int)cpu->a - value - c;
    unsigned char old = cpu->a;
    unsigned char out = (unsigned char)(r & 255);
    cpu->f = F_N;
    if (((old ^ value ^ out) & 0x10) != 0) {
        cpu->f |= F_H;
    }
    if (((old ^ value) & (old ^ out) & 0x80) != 0) {
        cpu->f |= F_PV;
    }
    if ((r & 256) != 0) {
        cpu->f |= F_C;
    }
    if (out == 0) {
        cpu->f |= F_Z;
    }
    if ((out & 0x80) != 0) {
        cpu->f |= F_S;
    }
    if (store) {
        cpu->a = out;
    }
}

static void logic_a(struct Z80* cpu, unsigned char value, int op)
{
    if (op == 4) {
        cpu->a &= value;
        cpu->f = F_H;
    } else if (op == 5) {
        cpu->a ^= value;
        cpu->f = 0;
    } else {
        cpu->a |= value;
        cpu->f = 0;
    }
    set_szp_flags(cpu, cpu->a);
}

static unsigned char io_read(struct MSX* msx, unsigned char port)
{
    if (port == 0x2e) {
        return dequeue_key(msx);
    }
    if (port == 0x99) {
        return msx->vdp_status;
    }
    return 0xff;
}

static void io_write(struct MSX* msx, unsigned char port, unsigned char value)
{
    if (port == 0x98) {
        msx->vram[msx->vdp_addr & 0x3fff] = value;
        msx->vdp_addr++;
    } else if (port == 0x99) {
        msx->vdp_addr = ((unsigned short)value << 8) | (msx->vdp_addr & 255);
    } else if (port == 0x2f) {
        console_putc(msx, value);
    }
}

static void z80_reset(struct MSX* msx)
{
    memset(&msx->cpu, 0, sizeof(msx->cpu));
    msx->cpu.sp = 0xf380;
    msx->running = 1;
}

static int load_rom_at(struct MSX* msx, const char* path, unsigned short base, int max_size)
{
    FILE* fp = fopen(path, "rb");
    int count;

    if (fp == NULL) {
        return 0;
    }
    count = fread(msx->mem + base, 1, max_size, fp);
    fclose(fp);
    if (count > 0) {
        char buf[96];
        snprintf(buf, sizeof(buf), "loaded %s at %04X (%d bytes)", path, base, count);
        log_msg(msx, buf);
    }
    return count;
}

static void msx_init(struct MSX* msx)
{
    memset(msx, 0, sizeof(*msx));
    msx->log_count = 1;
    z80_reset(msx);
    log_msg(msx, "MSX IDE ready");
    if (!load_rom_at(msx, "roms/msx.rom", 0x0000, 0x8000)) {
        if (!load_rom_at(msx, "roms/MSX.ROM", 0x0000, 0x8000)) {
            log_msg(msx, "ROM not found: put MSX BIOS/BASIC at roms/msx.rom");
        }
    }
    load_rom_at(msx, "roms/basic.rom", 0x8000, 0x4000);
    load_rom_at(msx, "roms/MSXBASIC.ROM", 0x8000, 0x4000);
}

static void z80_cb_step(struct MSX* msx)
{
    struct Z80* cpu = &msx->cpu;
    unsigned char op = fetch8(msx);
    int group = (int)(op >> 6);
    int y = (int)((op >> 3) & 7);
    int r = (int)(op & 7);
    unsigned char v = read_r8(msx, r);
    unsigned char out = v;

    if (group == 0) {
        if (y == 0) {
            out = (unsigned char)((v << 1) | (v >> 7));
            cpu->f = (v >> 7) & F_C;
        } else if (y == 1) {
            out = (unsigned char)((v >> 1) | (v << 7));
            cpu->f = v & F_C;
        } else if (y == 2) {
            out = (unsigned char)((v << 1) | ((cpu->f & F_C) != 0));
            cpu->f = (v >> 7) & F_C;
        } else if (y == 3) {
            out = (unsigned char)((v >> 1) | (((cpu->f & F_C) != 0) << 7));
            cpu->f = v & F_C;
        } else if (y == 4) {
            out = (unsigned char)(v << 1);
            cpu->f = (v >> 7) & F_C;
        } else if (y == 5) {
            out = (unsigned char)((v >> 1) | (v & 0x80));
            cpu->f = v & F_C;
        } else if (y == 7) {
            out = (unsigned char)(v >> 1);
            cpu->f = v & F_C;
        }
        write_r8(msx, r, out);
        set_szp_flags(cpu, out);
    } else if (group == 1) {
        unsigned char keep_c = cpu->f & F_C;
        cpu->f = keep_c | F_H;
        if ((v & (1 << y)) == 0) {
            cpu->f |= F_Z | F_PV;
        }
        if (y == 7 && (v & 0x80) != 0) {
            cpu->f |= F_S;
        }
    } else if (group == 2) {
        write_r8(msx, r, (unsigned char)(v & ~(1 << y)));
    } else {
        write_r8(msx, r, (unsigned char)(v | (1 << y)));
    }
    cpu->cycles += r == 6 ? 15 : 8;
}

static void z80_ed_step(struct MSX* msx)
{
    struct Z80* cpu = &msx->cpu;
    unsigned char op = fetch8(msx);

    if (op == 0x44 || op == 0x4c || op == 0x54 || op == 0x5c || op == 0x64 || op == 0x6c || op == 0x74 || op == 0x7c) {
        sub_a(cpu, cpu->a, 0, 1);
        cpu->cycles += 8;
        return;
    }
    if (op == 0x45 || op == 0x4d) {
        cpu->pc = pop16(msx);
        cpu->cycles += 14;
        return;
    }
    if (op == 0x47) {
        cpu->cycles += 9;
        return;
    }
    if (op == 0x57) {
        cpu->a = 0xff;
        set_szp_flags(cpu, cpu->a);
        cpu->cycles += 9;
        return;
    }
    if (op == 0xa0 || op == 0xb0) {
        mem_write(msx, pair_de(cpu), mem_read(msx, pair_hl(cpu)));
        set_hl(cpu, pair_hl(cpu) + 1);
        set_de(cpu, pair_de(cpu) + 1);
        set_bc(cpu, pair_bc(cpu) - 1);
        cpu->f &= F_C;
        if (pair_bc(cpu) != 0) {
            cpu->f |= F_PV;
        }
        if (op == 0xb0 && pair_bc(cpu) != 0) {
            cpu->pc -= 2;
            cpu->cycles += 21;
        } else {
            cpu->cycles += 16;
        }
        return;
    }
    if (op == 0xa8 || op == 0xb8) {
        mem_write(msx, pair_de(cpu), mem_read(msx, pair_hl(cpu)));
        set_hl(cpu, pair_hl(cpu) - 1);
        set_de(cpu, pair_de(cpu) - 1);
        set_bc(cpu, pair_bc(cpu) - 1);
        cpu->f &= F_C;
        if (pair_bc(cpu) != 0) {
            cpu->f |= F_PV;
        }
        if (op == 0xb8 && pair_bc(cpu) != 0) {
            cpu->pc -= 2;
            cpu->cycles += 21;
        } else {
            cpu->cycles += 16;
        }
        return;
    }
    {
        char buf[96];
        snprintf(buf, sizeof(buf), "unimplemented ED opcode %02X at %04X", op, (cpu->pc - 2) & 0xffff);
        log_msg(msx, buf);
        cpu->halted = 1;
    }
}

static unsigned char read_index_r8(struct MSX* msx, int r, unsigned short addr)
{
    struct Z80* cpu = &msx->cpu;
    if (r == 0) {
        return cpu->b;
    }
    if (r == 1) {
        return cpu->c;
    }
    if (r == 2) {
        return cpu->d;
    }
    if (r == 3) {
        return cpu->e;
    }
    if (r == 6) {
        return mem_read(msx, addr);
    }
    return cpu->a;
}

static void write_index_r8(struct MSX* msx, int r, unsigned short addr, unsigned char value)
{
    struct Z80* cpu = &msx->cpu;
    if (r == 0) {
        cpu->b = value;
    } else if (r == 1) {
        cpu->c = value;
    } else if (r == 2) {
        cpu->d = value;
    } else if (r == 3) {
        cpu->e = value;
    } else if (r == 6) {
        mem_write(msx, addr, value);
    } else if (r == 7) {
        cpu->a = value;
    }
}

static void z80_index_cb_step(struct MSX* msx, int use_iy)
{
    struct Z80* cpu = &msx->cpu;
    signed char disp = (signed char)fetch8(msx);
    unsigned char op = fetch8(msx);
    int group = (int)(op >> 6);
    int y = (int)((op >> 3) & 7);
    int r = (int)(op & 7);
    unsigned short addr = (unsigned short)(get_index(cpu, use_iy) + disp);
    unsigned char v = mem_read(msx, addr);
    unsigned char out = v;

    if (group == 0) {
        if (y == 0) {
            out = (unsigned char)((v << 1) | (v >> 7));
            cpu->f = (v >> 7) & F_C;
        } else if (y == 1) {
            out = (unsigned char)((v >> 1) | (v << 7));
            cpu->f = v & F_C;
        } else if (y == 2) {
            out = (unsigned char)((v << 1) | ((cpu->f & F_C) != 0));
            cpu->f = (v >> 7) & F_C;
        } else if (y == 3) {
            out = (unsigned char)((v >> 1) | (((cpu->f & F_C) != 0) << 7));
            cpu->f = v & F_C;
        } else if (y == 4) {
            out = (unsigned char)(v << 1);
            cpu->f = (v >> 7) & F_C;
        } else if (y == 5) {
            out = (unsigned char)((v >> 1) | (v & 0x80));
            cpu->f = v & F_C;
        } else if (y == 7) {
            out = (unsigned char)(v >> 1);
            cpu->f = v & F_C;
        }
        mem_write(msx, addr, out);
        if (r != 6) {
            write_index_r8(msx, r, addr, out);
        }
        set_szp_flags(cpu, out);
    } else if (group == 1) {
        unsigned char keep_c = cpu->f & F_C;
        cpu->f = keep_c | F_H;
        if ((v & (1 << y)) == 0) {
            cpu->f |= F_Z | F_PV;
        }
        if (y == 7 && (v & 0x80) != 0) {
            cpu->f |= F_S;
        }
    } else if (group == 2) {
        out = (unsigned char)(v & ~(1 << y));
        mem_write(msx, addr, out);
        if (r != 6) {
            write_index_r8(msx, r, addr, out);
        }
    } else {
        out = (unsigned char)(v | (1 << y));
        mem_write(msx, addr, out);
        if (r != 6) {
            write_index_r8(msx, r, addr, out);
        }
    }
    cpu->cycles += 23;
}

static void z80_index_step(struct MSX* msx, int use_iy)
{
    struct Z80* cpu = &msx->cpu;
    unsigned char op = fetch8(msx);
    unsigned short idx = get_index(cpu, use_iy);
    unsigned short nn;
    unsigned short addr;
    unsigned char n;
    int r;
    int rp;

    if ((op & 0xc7) == 0x04 && (((op >> 3) & 7) == 6)) {
        signed char disp = (signed char)fetch8(msx);
        addr = (unsigned short)(idx + disp);
        mem_write(msx, addr, inc8(cpu, mem_read(msx, addr)));
        cpu->cycles += 23;
        return;
    }
    if ((op & 0xc7) == 0x05 && (((op >> 3) & 7) == 6)) {
        signed char disp = (signed char)fetch8(msx);
        addr = (unsigned short)(idx + disp);
        mem_write(msx, addr, dec8(cpu, mem_read(msx, addr)));
        cpu->cycles += 23;
        return;
    }
    if ((op & 0xc7) == 0x06 && (((op >> 3) & 7) == 6)) {
        signed char disp = (signed char)fetch8(msx);
        n = fetch8(msx);
        mem_write(msx, (unsigned short)(idx + disp), n);
        cpu->cycles += 19;
        return;
    }
    if (op >= 0x40 && op <= 0x7f && op != 0x76) {
        int dst = (int)((op >> 3) & 7);
        int src = (int)(op & 7);
        if (dst == 6 || src == 6) {
            signed char disp = (signed char)fetch8(msx);
            addr = (unsigned short)(idx + disp);
            write_index_r8(msx, dst, addr, read_index_r8(msx, src, addr));
            cpu->cycles += 19;
            return;
        }
    }
    if (op >= 0x80 && op <= 0xbf && (op & 7) == 6) {
        int alu = (int)((op >> 3) & 7);
        signed char disp = (signed char)fetch8(msx);
        n = mem_read(msx, (unsigned short)(idx + disp));
        if (alu == 0) {
            add_a(cpu, n, 0);
        } else if (alu == 1) {
            add_a(cpu, n, 1);
        } else if (alu == 2) {
            sub_a(cpu, n, 0, 1);
        } else if (alu == 3) {
            sub_a(cpu, n, 1, 1);
        } else if (alu == 7) {
            sub_a(cpu, n, 0, 0);
        } else {
            logic_a(cpu, n, alu);
        }
        cpu->cycles += 19;
        return;
    }

    switch (op) {
    case 0x09:
    case 0x19:
    case 0x29:
    case 0x39:
        {
            unsigned int sum;
            rp = (op >> 4) & 3;
            nn = (unsigned short)(rp == 2 ? idx : get_rp(cpu, rp));
            sum = (unsigned int)idx + nn;
            cpu->f &= F_S | F_Z | F_PV;
            if ((sum & 0x10000) != 0) {
                cpu->f |= F_C;
            }
            set_index(cpu, use_iy, (unsigned short)sum);
            cpu->cycles += 15;
        }
        break;
    case 0x21:
        set_index(cpu, use_iy, fetch16(msx));
        cpu->cycles += 14;
        break;
    case 0x22:
        nn = fetch16(msx);
        idx = get_index(cpu, use_iy);
        mem_write(msx, nn, (unsigned char)(idx & 255));
        mem_write(msx, nn + 1, (unsigned char)(idx >> 8));
        cpu->cycles += 20;
        break;
    case 0x23:
        set_index(cpu, use_iy, idx + 1);
        cpu->cycles += 10;
        break;
    case 0x2a:
        nn = fetch16(msx);
        set_index(cpu, use_iy, mem_read(msx, nn) | ((unsigned short)mem_read(msx, nn + 1) << 8));
        cpu->cycles += 20;
        break;
    case 0x2b:
        set_index(cpu, use_iy, idx - 1);
        cpu->cycles += 10;
        break;
    case 0x34:
    case 0x35:
    case 0x36:
        cpu->pc--;
        z80_index_step(msx, use_iy);
        break;
    case 0x46:
    case 0x4e:
    case 0x56:
    case 0x5e:
    case 0x66:
    case 0x6e:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x77:
    case 0x7e:
        cpu->pc--;
        z80_index_step(msx, use_iy);
        break;
    case 0x86:
    case 0x8e:
    case 0x96:
    case 0x9e:
    case 0xa6:
    case 0xae:
    case 0xb6:
    case 0xbe:
        cpu->pc--;
        z80_index_step(msx, use_iy);
        break;
    case 0xcb:
        z80_index_cb_step(msx, use_iy);
        break;
    case 0xe1:
        set_index(cpu, use_iy, pop16(msx));
        cpu->cycles += 14;
        break;
    case 0xe3:
        nn = (unsigned short)(mem_read(msx, cpu->sp) | ((unsigned short)mem_read(msx, cpu->sp + 1) << 8));
        idx = get_index(cpu, use_iy);
        mem_write(msx, cpu->sp, (unsigned char)(idx & 255));
        mem_write(msx, cpu->sp + 1, (unsigned char)(idx >> 8));
        set_index(cpu, use_iy, nn);
        cpu->cycles += 23;
        break;
    case 0xe5:
        push16(msx, idx);
        cpu->cycles += 15;
        break;
    case 0xe9:
        cpu->pc = idx;
        cpu->cycles += 8;
        break;
    case 0xf9:
        cpu->sp = idx;
        cpu->cycles += 10;
        break;
    default:
        {
            char buf[96];
            snprintf(buf, sizeof(buf), "unimplemented %s opcode %02X at %04X", use_iy ? "FD" : "DD", op, (cpu->pc - 2) & 0xffff);
            log_msg(msx, buf);
            cpu->halted = 1;
        }
        break;
    }
}

static void z80_step(struct MSX* msx)
{
    struct Z80* cpu = &msx->cpu;
    unsigned char op;
    unsigned short nn;
    unsigned char n;
    int r;
    int rp;

    if (cpu->halted) {
        cpu->cycles += 4;
        return;
    }
    op = fetch8(msx);

    if (op >= 0x40 && op <= 0x7f) {
        if (op == 0x76) {
            cpu->halted = 1;
            cpu->cycles += 4;
            return;
        }
        write_r8(msx, (op >> 3) & 7, read_r8(msx, op & 7));
        cpu->cycles += ((op & 7) == 6 || ((op >> 3) & 7) == 6) ? 7 : 4;
        return;
    }
    if ((op & 0xc7) == 0x04) {
        r = (op >> 3) & 7;
        write_r8(msx, r, inc8(cpu, read_r8(msx, r)));
        cpu->cycles += r == 6 ? 11 : 4;
        return;
    }
    if ((op & 0xc7) == 0x05) {
        r = (op >> 3) & 7;
        write_r8(msx, r, dec8(cpu, read_r8(msx, r)));
        cpu->cycles += r == 6 ? 11 : 4;
        return;
    }
    if ((op & 0xc7) == 0x06) {
        r = (op >> 3) & 7;
        write_r8(msx, r, fetch8(msx));
        cpu->cycles += r == 6 ? 10 : 7;
        return;
    }
    if (op >= 0x80 && op <= 0xbf) {
        int alu = (op >> 3) & 7;
        n = read_r8(msx, op & 7);
        if (alu == 0) {
            add_a(cpu, n, 0);
        } else if (alu == 1) {
            add_a(cpu, n, 1);
        } else if (alu == 2) {
            sub_a(cpu, n, 0, 1);
        } else if (alu == 3) {
            sub_a(cpu, n, 1, 1);
        } else if (alu == 7) {
            sub_a(cpu, n, 0, 0);
        } else {
            logic_a(cpu, n, alu);
        }
        cpu->cycles += (op & 7) == 6 ? 7 : 4;
        return;
    }

    switch (op) {
    case 0x00:
        cpu->cycles += 4;
        break;
    case 0x01:
    case 0x11:
    case 0x21:
    case 0x31:
        set_rp(cpu, (op >> 4) & 3, fetch16(msx));
        cpu->cycles += 10;
        break;
    case 0x02:
        mem_write(msx, pair_bc(cpu), cpu->a);
        cpu->cycles += 7;
        break;
    case 0x12:
        mem_write(msx, pair_de(cpu), cpu->a);
        cpu->cycles += 7;
        break;
    case 0x0a:
        cpu->a = mem_read(msx, pair_bc(cpu));
        cpu->cycles += 7;
        break;
    case 0x1a:
        cpu->a = mem_read(msx, pair_de(cpu));
        cpu->cycles += 7;
        break;
    case 0x03:
    case 0x13:
    case 0x23:
    case 0x33:
        rp = (op >> 4) & 3;
        set_rp(cpu, rp, get_rp(cpu, rp) + 1);
        cpu->cycles += 6;
        break;
    case 0x0b:
    case 0x1b:
    case 0x2b:
    case 0x3b:
        rp = (op >> 4) & 3;
        set_rp(cpu, rp, get_rp(cpu, rp) - 1);
        cpu->cycles += 6;
        break;
    case 0x09:
    case 0x19:
    case 0x29:
    case 0x39:
        {
            unsigned int sum = (unsigned int)pair_hl(cpu) + get_rp(cpu, (op >> 4) & 3);
            cpu->f &= F_S | F_Z | F_PV;
            if ((sum & 0x10000) != 0) {
                cpu->f |= F_C;
            }
            set_hl(cpu, (unsigned short)sum);
            cpu->cycles += 11;
        }
        break;
    case 0x07:
        cpu->f = (cpu->a >> 7) & F_C;
        cpu->a = (unsigned char)((cpu->a << 1) | (cpu->a >> 7));
        cpu->cycles += 4;
        break;
    case 0x0f:
        cpu->f = cpu->a & F_C;
        cpu->a = (unsigned char)((cpu->a >> 1) | (cpu->a << 7));
        cpu->cycles += 4;
        break;
    case 0x17:
        {
            unsigned char c = (cpu->f & F_C) != 0;
            cpu->f = (cpu->a >> 7) & F_C;
            cpu->a = (unsigned char)((cpu->a << 1) | c);
            cpu->cycles += 4;
        }
        break;
    case 0x1f:
        {
            unsigned char c = (cpu->f & F_C) != 0;
            cpu->f = cpu->a & F_C;
            cpu->a = (unsigned char)((cpu->a >> 1) | (c << 7));
            cpu->cycles += 4;
        }
        break;
    case 0x18:
        n = fetch8(msx);
        cpu->pc = (unsigned short)(cpu->pc + (signed char)n);
        cpu->cycles += 12;
        break;
    case 0x10:
        n = fetch8(msx);
        cpu->b--;
        if (cpu->b != 0) {
            cpu->pc = (unsigned short)(cpu->pc + (signed char)n);
            cpu->cycles += 13;
        } else {
            cpu->cycles += 8;
        }
        break;
    case 0x20:
    case 0x28:
    case 0x30:
    case 0x38:
        n = fetch8(msx);
        if (cond_true(cpu, (op >> 3) & 3)) {
            cpu->pc = (unsigned short)(cpu->pc + (signed char)n);
            cpu->cycles += 12;
        } else {
            cpu->cycles += 7;
        }
        break;
    case 0x22:
        nn = fetch16(msx);
        mem_write(msx, nn, cpu->l);
        mem_write(msx, nn + 1, cpu->h);
        cpu->cycles += 16;
        break;
    case 0x2a:
        nn = fetch16(msx);
        cpu->l = mem_read(msx, nn);
        cpu->h = mem_read(msx, nn + 1);
        cpu->cycles += 16;
        break;
    case 0x27:
        cpu->cycles += 4;
        break;
    case 0x2f:
        cpu->a = (unsigned char)~cpu->a;
        cpu->f |= F_H | F_N;
        cpu->cycles += 4;
        break;
    case 0x32:
        nn = fetch16(msx);
        mem_write(msx, nn, cpu->a);
        cpu->cycles += 13;
        break;
    case 0x37:
        cpu->f = (cpu->f & (F_S | F_Z | F_PV)) | F_C;
        cpu->cycles += 4;
        break;
    case 0x3a:
        nn = fetch16(msx);
        cpu->a = mem_read(msx, nn);
        cpu->cycles += 13;
        break;
    case 0x3f:
        cpu->f = (cpu->f & (F_S | F_Z | F_PV)) | ((cpu->f & F_C) ? 0 : F_C);
        cpu->cycles += 4;
        break;
    case 0xc0:
    case 0xc8:
    case 0xd0:
    case 0xd8:
    case 0xe0:
    case 0xe8:
    case 0xf0:
    case 0xf8:
        if (cond_true(cpu, (op >> 3) & 7)) {
            cpu->pc = pop16(msx);
            cpu->cycles += 11;
        } else {
            cpu->cycles += 5;
        }
        break;
    case 0xc1:
    case 0xd1:
    case 0xe1:
    case 0xf1:
        nn = pop16(msx);
        rp = (op >> 4) & 3;
        if (rp == 3) {
            cpu->f = (unsigned char)(nn & 255);
            cpu->a = (unsigned char)(nn >> 8);
        } else {
            set_rp(cpu, rp, nn);
        }
        cpu->cycles += 10;
        break;
    case 0xc2:
    case 0xca:
    case 0xd2:
    case 0xda:
    case 0xe2:
    case 0xea:
    case 0xf2:
    case 0xfa:
        nn = fetch16(msx);
        if (cond_true(cpu, (op >> 3) & 7)) {
            cpu->pc = nn;
        }
        cpu->cycles += 10;
        break;
    case 0xc3:
        cpu->pc = fetch16(msx);
        cpu->cycles += 10;
        break;
    case 0xc4:
    case 0xcc:
    case 0xd4:
    case 0xdc:
    case 0xe4:
    case 0xec:
    case 0xf4:
    case 0xfc:
        nn = fetch16(msx);
        if (cond_true(cpu, (op >> 3) & 7)) {
            push16(msx, cpu->pc);
            cpu->pc = nn;
            cpu->cycles += 17;
        } else {
            cpu->cycles += 10;
        }
        break;
    case 0xc5:
    case 0xd5:
    case 0xe5:
    case 0xf5:
        rp = (op >> 4) & 3;
        if (rp == 3) {
            push16(msx, ((unsigned short)cpu->a << 8) | cpu->f);
        } else {
            push16(msx, get_rp(cpu, rp));
        }
        cpu->cycles += 11;
        break;
    case 0xc6:
        add_a(cpu, fetch8(msx), 0);
        cpu->cycles += 7;
        break;
    case 0xce:
        add_a(cpu, fetch8(msx), 1);
        cpu->cycles += 7;
        break;
    case 0xd6:
        sub_a(cpu, fetch8(msx), 0, 1);
        cpu->cycles += 7;
        break;
    case 0xde:
        sub_a(cpu, fetch8(msx), 1, 1);
        cpu->cycles += 7;
        break;
    case 0xe6:
        logic_a(cpu, fetch8(msx), 4);
        cpu->cycles += 7;
        break;
    case 0xee:
        logic_a(cpu, fetch8(msx), 5);
        cpu->cycles += 7;
        break;
    case 0xf6:
        logic_a(cpu, fetch8(msx), 6);
        cpu->cycles += 7;
        break;
    case 0xfe:
        sub_a(cpu, fetch8(msx), 0, 0);
        cpu->cycles += 7;
        break;
    case 0xc7:
    case 0xcf:
    case 0xd7:
    case 0xdf:
    case 0xe7:
    case 0xef:
    case 0xf7:
    case 0xff:
        push16(msx, cpu->pc);
        cpu->pc = op & 0x38;
        cpu->cycles += 11;
        break;
    case 0xc9:
        cpu->pc = pop16(msx);
        cpu->cycles += 10;
        break;
    case 0xcd:
        nn = fetch16(msx);
        push16(msx, cpu->pc);
        cpu->pc = nn;
        cpu->cycles += 17;
        break;
    case 0xcb:
        z80_cb_step(msx);
        break;
    case 0xdd:
        z80_index_step(msx, 0);
        break;
    case 0xd3:
        n = fetch8(msx);
        io_write(msx, n, cpu->a);
        cpu->cycles += 11;
        break;
    case 0xdb:
        n = fetch8(msx);
        cpu->a = io_read(msx, n);
        cpu->cycles += 11;
        break;
    case 0xe3:
        {
            unsigned short tmp = mem_read(msx, cpu->sp) | ((unsigned short)mem_read(msx, cpu->sp + 1) << 8);
            mem_write(msx, cpu->sp, cpu->l);
            mem_write(msx, cpu->sp + 1, cpu->h);
            set_hl(cpu, tmp);
            cpu->cycles += 19;
        }
        break;
    case 0xe9:
        cpu->pc = pair_hl(cpu);
        cpu->cycles += 4;
        break;
    case 0xeb:
        nn = pair_de(cpu);
        set_de(cpu, pair_hl(cpu));
        set_hl(cpu, nn);
        cpu->cycles += 4;
        break;
    case 0xed:
        z80_ed_step(msx);
        break;
    case 0xfd:
        z80_index_step(msx, 1);
        break;
    case 0xf3:
    case 0xfb:
        cpu->cycles += 4;
        break;
    case 0xf9:
        cpu->sp = pair_hl(cpu);
        cpu->cycles += 6;
        break;
    default:
        {
            char buf[96];
            snprintf(buf, sizeof(buf), "unimplemented opcode %02X at %04X", op, (cpu->pc - 1) & 0xffff);
            log_msg(msx, buf);
            cpu->halted = 1;
        }
        break;
    }
}

static void draw_fill(int y, int x, int h, int w, int pair)
{
    int row = 0;
    int col;

    if (pair > 0) {
        attron(COLOR_PAIR(pair));
    }
    while (row < h) {
        col = 0;
        while (col < w) {
            mvaddch(y + row, x + col, ' ');
            col++;
        }
        row++;
    }
    if (pair > 0) {
        attroff(COLOR_PAIR(pair));
    }
}

static void draw_msx_screen(struct MSX* msx, int top, int left, int height, int width)
{
    int i;
    int usable_h = height;
    int usable_w = width - 2;
    int visible;
    int display_count;
    int start = 0;
    int line_y;
    int cursor_x;
    int cursor_y;

    draw_fill(top, left, height, width, 1);
    visible = usable_h;
    if (visible > LOG_LINES) {
        visible = LOG_LINES;
    }
    display_count = msx->log_count;
    if (display_count > visible) {
        display_count = visible;
    }
    start = msx->log_head - display_count + 1;
    while (start < 0) {
        start += LOG_LINES;
    }
    i = 0;
    while (i < display_count) {
        int index = (start + i) % LOG_LINES;
        line_y = top + i;
        attron(COLOR_PAIR(1) | A_BOLD);
        mvprintw(line_y, left + 1, "%-*.*s", usable_w, usable_w, msx->log[index]);
        attroff(COLOR_PAIR(1) | A_BOLD);
        i++;
    }
    cursor_y = top + cursor_visible_row(msx, visible);
    if (cursor_y < top) {
        cursor_y = top;
    }
    if (cursor_y >= top + height) {
        cursor_y = top + height - 1;
    }
    cursor_x = left + 1 + msx->input_cursor;
    if (cursor_x >= left + width - 1) {
        cursor_x = left + width - 2;
    }
    if (cursor_x < left + 1) {
        cursor_x = left + 1;
    }
    wmove(stdscr, cursor_y, cursor_x);
}

static void draw_panel(struct MSX* msx)
{
    erase();
    bkgd(COLOR_PAIR(3));
    draw_msx_screen(msx, 0, 0, LINES, COLS);
    refresh();
}

static int run_until_halt(struct MSX* msx, int limit)
{
    int steps = 0;
    while (!msx->cpu.halted && steps < limit) {
        z80_step(msx);
        steps++;
    }
    return msx->cpu.halted;
}

static void run_steps(struct MSX* msx, int limit)
{
    int steps = 0;
    while (!msx->cpu.halted && steps < limit) {
        z80_step(msx);
        steps++;
    }
}

static int self_test(void)
{
    struct MSX msx;
    memset(&msx, 0, sizeof(msx));
    z80_reset(&msx);

    msx.mem[0] = 0x3e;
    msx.mem[1] = 0x2a;
    msx.mem[2] = 0x32;
    msx.mem[3] = 0x00;
    msx.mem[4] = 0xc0;
    msx.mem[5] = 0x76;
    if (!run_until_halt(&msx, 64) || msx.mem[0xc000] != 0x2a) {
        fprintf(stderr, "self-test failed: ld/store\n");
        return 1;
    }

    memset(&msx, 0, sizeof(msx));
    z80_reset(&msx);
    msx.mem[0] = 0x06;
    msx.mem[1] = 0x03;
    msx.mem[2] = 0x3c;
    msx.mem[3] = 0x10;
    msx.mem[4] = 0xfd;
    msx.mem[5] = 0x32;
    msx.mem[6] = 0x01;
    msx.mem[7] = 0xc0;
    msx.mem[8] = 0x76;
    if (!run_until_halt(&msx, 64) || msx.mem[0xc001] != 3) {
        fprintf(stderr, "self-test failed: djnz/inc\n");
        return 1;
    }

    memset(&msx, 0, sizeof(msx));
    z80_reset(&msx);
    msx.mem[0] = 0x21;
    msx.mem[1] = 0x00;
    msx.mem[2] = 0x01;
    msx.mem[3] = 0x11;
    msx.mem[4] = 0x10;
    msx.mem[5] = 0xc0;
    msx.mem[6] = 0x01;
    msx.mem[7] = 0x03;
    msx.mem[8] = 0x00;
    msx.mem[9] = 0xed;
    msx.mem[10] = 0xb0;
    msx.mem[11] = 0x76;
    msx.mem[0x0100] = 0x11;
    msx.mem[0x0101] = 0x22;
    msx.mem[0x0102] = 0x33;
    if (!run_until_halt(&msx, 128) || msx.mem[0xc010] != 0x11 ||
        msx.mem[0xc011] != 0x22 || msx.mem[0xc012] != 0x33) {
        fprintf(stderr, "self-test failed: ldir\n");
        return 1;
    }

    memset(&msx, 0, sizeof(msx));
    z80_reset(&msx);
    msx.mem[0] = 0x3e;
    msx.mem[1] = 0x00;
    msx.mem[2] = 0xcb;
    msx.mem[3] = 0xc7;
    msx.mem[4] = 0x32;
    msx.mem[5] = 0x02;
    msx.mem[6] = 0xc0;
    msx.mem[7] = 0x76;
    if (!run_until_halt(&msx, 64) || msx.mem[0xc002] != 1) {
        fprintf(stderr, "self-test failed: cb-set\n");
        return 1;
    }

    memset(&msx, 0, sizeof(msx));
    z80_reset(&msx);
    msx.mem[0] = 0xdd;
    msx.mem[1] = 0x21;
    msx.mem[2] = 0x00;
    msx.mem[3] = 0xc1;
    msx.mem[4] = 0xdd;
    msx.mem[5] = 0x36;
    msx.mem[6] = 0x05;
    msx.mem[7] = 0x44;
    msx.mem[8] = 0xdd;
    msx.mem[9] = 0x7e;
    msx.mem[10] = 0x05;
    msx.mem[11] = 0x32;
    msx.mem[12] = 0x03;
    msx.mem[13] = 0xc0;
    msx.mem[14] = 0x76;
    if (!run_until_halt(&msx, 128) || msx.mem[0xc105] != 0x44 || msx.mem[0xc003] != 0x44) {
        fprintf(stderr, "self-test failed: ix-index\n");
        return 1;
    }

    memset(&msx, 0, sizeof(msx));
    z80_reset(&msx);
    msx.mem[0] = 0xfd;
    msx.mem[1] = 0x21;
    msx.mem[2] = 0x00;
    msx.mem[3] = 0xc2;
    msx.mem[4] = 0xfd;
    msx.mem[5] = 0x36;
    msx.mem[6] = 0xfe;
    msx.mem[7] = 0x01;
    msx.mem[8] = 0xfd;
    msx.mem[9] = 0xcb;
    msx.mem[10] = 0xfe;
    msx.mem[11] = 0xf6;
    msx.mem[12] = 0xfd;
    msx.mem[13] = 0x7e;
    msx.mem[14] = 0xfe;
    msx.mem[15] = 0x32;
    msx.mem[16] = 0x04;
    msx.mem[17] = 0xc0;
    msx.mem[18] = 0x76;
    if (!run_until_halt(&msx, 128) || msx.mem[0xc1fe] != 0x41 || msx.mem[0xc004] != 0x41) {
        fprintf(stderr, "self-test failed: iy-cb-index\n");
        return 1;
    }
    puts("self-test ok");
    return 0;
}

static int rom_test(void)
{
    struct MSX msx;
    int i;

    msx_init(&msx);
    run_steps(&msx, 20000);
    i = 0;
    while (i < LOG_LINES) {
        if (strstr(msx.log[i], "C- BASIC") != NULL) {
            puts("rom-test ok");
            return 0;
        }
        i++;
    }
    fprintf(stderr, "rom-test failed: C- BASIC banner not found\n");
    return 1;
}

static int basic_test(void)
{
    struct MSX msx;
    int i;

    msx_init(&msx);
    run_steps(&msx, 20000);
    queue_line(&msx, "PRINT \"HELLO\"");
    run_steps(&msx, 40000);

    i = 0;
    while (i < LOG_LINES) {
        if (strstr(msx.log[i], "HELLO") != NULL) {
            puts("basic-test ok");
            return 0;
        }
        i++;
    }
    fprintf(stderr, "basic-test failed: PRINT output not found\n");
    return 1;
}

static int cls_print_test(void)
{
    struct MSX msx;
    int found_hello = 0;
    int found_banner = 0;
    int i;

    msx_init(&msx);
    run_steps(&msx, 20000);
    queue_line(&msx, "CLS");
    queue_line(&msx, "PRINT HELLO");
    run_steps(&msx, 80000);

    i = 0;
    while (i < LOG_LINES) {
        if (strstr(msx.log[i], "HELLO") != NULL) {
            found_hello = 1;
        }
        if (strstr(msx.log[i], "C- BASIC") != NULL) {
            found_banner = 1;
        }
        i++;
    }
    if (found_hello && !found_banner) {
        puts("cls-print-test ok");
        return 0;
    }
    fprintf(stderr, "cls-print-test failed: CLS/PRINT output not found\n");
    return 1;
}

static int program_test(void)
{
    struct MSX msx;
    int found_one = 0;
    int found_two = 0;
    int i;

    msx_init(&msx);
    run_steps(&msx, 20000);
    queue_line(&msx, "20 PRINT \"TWO\"");
    queue_line(&msx, "10 PRINT \"ONE\"");
    queue_line(&msx, "RUN");
    run_steps(&msx, 120000);

    i = 0;
    while (i < LOG_LINES) {
        if (strstr(msx.log[i], "ONE") != NULL) {
            found_one = 1;
        }
        if (strstr(msx.log[i], "TWO") != NULL) {
            found_two = 1;
        }
        i++;
    }
    if (found_one && found_two) {
        puts("program-test ok");
        return 0;
    }
    fprintf(stderr, "program-test failed: RUN output not found\n");
    return 1;
}

static int list_test(void)
{
    struct MSX msx;
    int found_ten = 0;
    int found_twenty = 0;
    int i;

    msx_init(&msx);
    run_steps(&msx, 20000);
    queue_line(&msx, "20 PRINT \"TWO\"");
    queue_line(&msx, "10 PRINT \"ONE\"");
    queue_line(&msx, "LIST");
    run_steps(&msx, 120000);

    i = 0;
    while (i < LOG_LINES) {
        if (strstr(msx.log[i], "10 PRINT \"ONE\"") != NULL) {
            found_ten = 1;
        }
        if (strstr(msx.log[i], "20 PRINT \"TWO\"") != NULL) {
            found_twenty = 1;
        }
        i++;
    }
    if (found_ten && found_twenty) {
        puts("list-test ok");
        return 0;
    }
    fprintf(stderr, "list-test failed: LIST output not found\n");
    return 1;
}

static int command_test(void)
{
    struct MSX msx;
    int found_sub = 0;
    int found_done = 0;
    int found_rem = 0;
    int found_locate = 0;
    int found_textonly = 0;
    int i;

    msx_init(&msx);
    run_steps(&msx, 20000);
    queue_line(&msx, "10 GOSUB 30");
    queue_line(&msx, "20 PRINT \"DONE\"");
    queue_line(&msx, "21 END");
    queue_line(&msx, "30 PRINT \"SUB\"");
    queue_line(&msx, "40 RETURN");
    queue_line(&msx, "RUN");
    queue_line(&msx, "10 REM NOTHING");
    queue_line(&msx, "20 PRINT \"REMOK\"");
    queue_line(&msx, "RUN");
    queue_line(&msx, "SCREEN 0");
    queue_line(&msx, "WIDTH 40");
    queue_line(&msx, "COLOR 15,4");
    queue_line(&msx, "SCREEN 1");
    queue_line(&msx, "LOCATE 5,3");
    queue_line(&msx, "PRINT \"LOC\"");
    run_steps(&msx, 600000);

    i = 0;
    while (i < LOG_LINES) {
        if (strstr(msx.log[i], "SUB") != NULL) {
            found_sub = 1;
        }
        if (strstr(msx.log[i], "DONE") != NULL) {
            found_done = 1;
        }
        if (strstr(msx.log[i], "REMOK") != NULL) {
            found_rem = 1;
        }
        if (strstr(msx.log[i], "LOC") != NULL) {
            found_locate = 1;
        }
        if (strstr(msx.log[i], "TEXT SCREEN ONLY") != NULL) {
            found_textonly = 1;
        }
        i++;
    }
    if (found_sub && found_done && found_rem && found_locate && found_textonly) {
        puts("command-test ok");
        return 0;
    }
    i = 0;
    while (i < LOG_LINES) {
        if (msx.log[i][0] != '\0') {
            fprintf(stderr, "log[%d]=%s\n", i, msx.log[i]);
        }
        i++;
    }
    fprintf(stderr, "command-test failed: command output not found\n");
    return 1;
}

static int dump_log_test(void)
{
    struct MSX msx;
    int i;

    msx_init(&msx);
    run_steps(&msx, 20000);
    i = 0;
    while (i < LOG_LINES) {
        if (msx.log[i][0] != '\0') {
            puts(msx.log[i]);
        }
        i++;
    }
    return 0;
}

static int asm_test(void)
{
    struct MSX msx;
    int i;

    msx_init(&msx);
    run_steps(&msx, 20000);
    queue_line(&msx, "ASM 62,65,211,47,201");
    queue_line(&msx, "CALL");
    run_steps(&msx, 80000);

    i = 0;
    while (i < LOG_LINES) {
        if (strstr(msx.log[i], "A") != NULL) {
            puts("asm-test ok");
            return 0;
        }
        i++;
    }
    fprintf(stderr, "asm-test failed: asm=%02X %02X %02X %02X %02X pc=%04X\n",
            msx.mem[0xc100], msx.mem[0xc101], msx.mem[0xc102], msx.mem[0xc103],
            msx.mem[0xc104], msx.cpu.pc);
    return 1;
}

int main(int argc, char** argv)
{
    struct MSX msx;
    int ch;

    if (argc == -1000) {
        basic_execute(&msx, "");
    }
    if (argc > 1 && strcmp(argv[1], "--self-test") == 0) {
        return self_test();
    }
    if (argc > 1 && strcmp(argv[1], "--rom-test") == 0) {
        return rom_test();
    }
    if (argc > 1 && strcmp(argv[1], "--basic-test") == 0) {
        return basic_test();
    }
    if (argc > 1 && strcmp(argv[1], "--cls-print-test") == 0) {
        return cls_print_test();
    }
    if (argc > 1 && strcmp(argv[1], "--program-test") == 0) {
        return program_test();
    }
    if (argc > 1 && strcmp(argv[1], "--list-test") == 0) {
        return list_test();
    }
    if (argc > 1 && strcmp(argv[1], "--command-test") == 0) {
        return command_test();
    }
    if (argc > 1 && strcmp(argv[1], "--asm-test") == 0) {
        return asm_test();
    }
    if (argc > 1 && strcmp(argv[1], "--dump-log") == 0) {
        return dump_log_test();
    }
    setlocale(LC_ALL, "");
    msx_init(&msx);
    initscr();
    if (has_colors()) {
        start_color();
        use_default_colors();
        init_pair(1, COLOR_WHITE, COLOR_BLUE);
        init_pair(2, COLOR_YELLOW, COLOR_BLUE);
        init_pair(3, COLOR_GREEN, COLOR_BLACK);
        init_pair(4, COLOR_CYAN, COLOR_BLACK);
        init_pair(5, COLOR_BLACK, COLOR_CYAN);
    }
    cbreak();
    noecho();
    keypad(stdscr, 1);
    nodelay(stdscr, 1);
    curs_set(1);
    msx.show_help = 0;
    for (;;) {
        if (msx.running) {
            int i = 0;
            while (i < 2000 && !msx.cpu.halted) {
                z80_step(&msx);
                i++;
            }
        }
        ch = getch();
        if (ch == 27) {
            break;
        } else if (ch == KEY_BACKSPACE || ch == 127 || ch == 8) {
            input_backspace(&msx);
        } else if (ch == KEY_DC) {
            input_delete(&msx);
        } else if (ch == KEY_LEFT) {
            input_left(&msx);
        } else if (ch == KEY_RIGHT) {
            input_right(&msx);
        } else if (ch == KEY_UP) {
            input_up(&msx);
        } else if (ch == KEY_DOWN) {
            input_down(&msx);
        } else if (ch == KEY_HOME) {
            input_home(&msx);
        } else if (ch == KEY_END) {
            input_end(&msx);
        } else if (ch == '\n' || ch == '\r') {
            input_enter(&msx);
        } else if (ch == KEY_F(5)) {
            msx.running = 1;
        } else if (ch == KEY_F(6)) {
            msx.running = 0;
        } else if (ch == KEY_F(12)) {
            z80_reset(&msx);
            memset(msx.log, 0, sizeof(msx.log));
            msx.log_head = 0;
            msx.log_count = 1;
            clear_input(&msx);
        } else if (ch != ERR) {
            input_char(&msx, ch);
        }
        draw_panel(&msx);
        napms(16);
    }
    endwin();
    return 0;
}
