#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdarg.h>
#include <unistd.h>
#include <ncurses.h>

#define MAX_LINES 512
#define MAX_LINE_TEXT 256
#define MAX_INPUT 512
#define MAX_GOSUB 64
#define MAX_FOR 32
#define MAX_STEPS 100000
#define SCREEN_WIDTH 40
#define SCREEN_HEIGHT 24
#define HISTORY_SIZE 32

typedef struct {
    int number;
    char text[MAX_LINE_TEXT];
} basic_line_t;

typedef struct {
    int return_index;
} gosub_frame_t;

typedef struct {
    int variable;
    int limit;
    int step;
    int body_index;
} for_frame_t;

typedef enum {
    FLOW_NEXT,
    FLOW_JUMP,
    FLOW_SKIP_LINE,
    FLOW_STOP,
    FLOW_ERROR
} flow_kind_t;

typedef struct {
    flow_kind_t kind;
    int target;
} flow_t;

static basic_line_t g_program[MAX_LINES];
static int g_line_count;
static int g_variables[26];
static gosub_frame_t g_gosub[MAX_GOSUB];
static int g_gosub_count;
static for_frame_t g_for[MAX_FOR];
static int g_for_count;
static bool g_quiet;
static bool g_fullscreen;
static bool g_colors;
static bool g_cursor_visible = true;
static char g_screen[SCREEN_HEIGHT][SCREEN_WIDTH];
static int g_screen_x;
static int g_screen_y;
static char g_history[HISTORY_SIZE][MAX_INPUT];
static int g_history_count;

static void fullscreen_draw(const char* input, int input_cursor);

static void screen_clear(void)
{
    memset(g_screen, ' ', sizeof(g_screen));
    g_screen_x = 0;
    g_screen_y = 0;
}

static void screen_scroll(void)
{
    for (int y = 0; y + 1 < SCREEN_HEIGHT; y++) {
        memcpy(g_screen[y], g_screen[y + 1], SCREEN_WIDTH);
    }
    memset(g_screen[SCREEN_HEIGHT - 1], ' ', SCREEN_WIDTH);
    g_screen_y = SCREEN_HEIGHT - 1;
}

static void screen_putc(char c)
{
    if (c == '\r') {
        g_screen_x = 0;
        return;
    }
    if (c == '\n') {
        g_screen_x = 0;
        g_screen_y++;
        if (g_screen_y >= SCREEN_HEIGHT) {
            screen_scroll();
        }
        if (g_fullscreen) {
            fullscreen_draw("", 0);
        }
        return;
    }
    if (c == '\b') {
        if (g_screen_x > 0) {
            g_screen_x--;
        }
        return;
    }
    if ((unsigned char)c < 32) {
        return;
    }
    g_screen[g_screen_y][g_screen_x] = c;
    g_screen_x++;
    if (g_screen_x >= SCREEN_WIDTH) {
        g_screen_x = 0;
        g_screen_y++;
        if (g_screen_y >= SCREEN_HEIGHT) {
            screen_scroll();
        }
    }
}

static int basic_putchar(int c)
{
    if (!g_fullscreen) {
        return fputc(c, stdout);
    }
    screen_putc((char)c);
    return c;
}

static int basic_fputs(const char* text)
{
    if (!g_fullscreen) {
        return fputs(text, stdout);
    }
    while (*text != 0) {
        screen_putc(*text++);
    }
    return 0;
}

static int basic_printf(const char* format, ...)
{
    char buffer[2048];
    va_list args;
    va_start(args, format);
    int result = vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);
    basic_fputs(buffer);
    return result;
}

static int basic_puts(const char* text)
{
    basic_fputs(text);
    basic_putchar('\n');
    return 0;
}

static void basic_clear(void)
{
    if (g_fullscreen) {
        screen_clear();
        fullscreen_draw("", 0);
    }
    else {
        fputs("\033[2J\033[H", stdout);
    }
}

static void basic_locate(int x, int y, int cursor)
{
    if (cursor >= 0) {
        g_cursor_visible = cursor != 0;
    }
    if (g_fullscreen) {
        g_screen_x = x;
        g_screen_y = y;
        fullscreen_draw("", 0);
    }
    else {
        if (cursor >= 0) {
            fputs(cursor == 0 ? "\033[?25l" : "\033[?25h", stdout);
        }
        printf("\033[%d;%dH", y + 1, x + 1);
    }
}

static void fullscreen_draw(const char* input, int input_cursor)
{
    int rows;
    int columns;
    getmaxyx(stdscr, rows, columns);
    bool compact = rows < SCREEN_HEIGHT + 3;
    int visible_rows = compact ? rows : SCREEN_HEIGHT;
    if (visible_rows > SCREEN_HEIGHT) {
        visible_rows = SCREEN_HEIGHT;
    }
    int first_screen_row = 0;
    if (g_screen_y >= visible_rows) {
        first_screen_row = g_screen_y - visible_rows + 1;
    }
    int top = compact ? 0 : (rows - SCREEN_HEIGHT - 2) / 2;
    int left = columns > SCREEN_WIDTH + 2 ? (columns - SCREEN_WIDTH - 2) / 2 : 0;

    if (g_colors) {
        bkgd(COLOR_PAIR(1) | ' ');
    }
    erase();
    if (g_colors) {
        attron(COLOR_PAIR(1));
    }
    for (int y = 0; y < visible_rows; y++) {
        mvaddnstr(top + y, left + 1, g_screen[first_screen_row + y], SCREEN_WIDTH);
    }

    if (compact) {
        int screen_cursor_row = g_screen_y - first_screen_row;
        int available = SCREEN_WIDTH - g_screen_x;
        int input_offset = 0;
        if (input_cursor >= available) {
            input_offset = input_cursor - available + 1;
        }
        mvaddnstr(top + screen_cursor_row, left + 1 + g_screen_x,
            input + input_offset, available);
        int cursor_column = input_cursor - input_offset;
        if (cursor_column >= available) {
            cursor_column = available - 1;
        }
        move(top + screen_cursor_row, left + 1 + g_screen_x + cursor_column);
        if (g_colors) {
            attroff(COLOR_PAIR(1));
        }
        curs_set(g_cursor_visible ? 1 : 0);
        refresh();
        return;
    }

    if (g_colors) {
        attroff(COLOR_PAIR(1));
    }

    if (g_colors) {
        attron(COLOR_PAIR(2));
    }
    attron(A_BOLD);
    mvhline(top + SCREEN_HEIGHT, left, ' ', SCREEN_WIDTH + 2);
    mvaddnstr(top + SCREEN_HEIGHT, left + 1,
        "NEO-C MSX BASIC  F1 HELP  F5 RUN  F10 QUIT", SCREEN_WIDTH);
    attroff(A_BOLD);
    if (g_colors) {
        attroff(COLOR_PAIR(2));
    }

    if (g_colors) {
        attron(COLOR_PAIR(3));
    }
    mvhline(top + SCREEN_HEIGHT + 1, left, ' ', SCREEN_WIDTH + 2);
    mvaddch(top + SCREEN_HEIGHT + 1, left, '>');
    int input_offset = input_cursor > SCREEN_WIDTH - 2
        ? input_cursor - (SCREEN_WIDTH - 2) : 0;
    mvaddnstr(top + SCREEN_HEIGHT + 1, left + 2, input + input_offset,
        SCREEN_WIDTH - 1);
    if (g_colors) {
        attroff(COLOR_PAIR(3));
    }
    int cursor_column = input_cursor - input_offset;
    move(top + SCREEN_HEIGHT + 1, left + 2 + cursor_column);
    curs_set(g_cursor_visible ? 1 : 0);
    refresh();
}

static void history_add(const char* input)
{
    if (*input == 0) {
        return;
    }
    if (g_history_count > 0
        && strcmp(g_history[g_history_count - 1], input) == 0) {
        return;
    }
    if (g_history_count >= HISTORY_SIZE) {
        for (int i = 0; i + 1 < HISTORY_SIZE; i++) {
            strcpy(g_history[i], g_history[i + 1]);
        }
        g_history_count = HISTORY_SIZE - 1;
    }
    strncpy(g_history[g_history_count], input, MAX_INPUT - 1);
    g_history[g_history_count][MAX_INPUT - 1] = 0;
    g_history_count++;
}

static bool fullscreen_readline(const char* prompt, char* input)
{
    int length = 0;
    int cursor = 0;
    int history_index = g_history_count;
    input[0] = 0;
    while (true) {
        char displayed[MAX_INPUT];
        snprintf(displayed, sizeof(displayed), "%s%s", prompt, input);
        fullscreen_draw(displayed, (int)strlen(prompt) + cursor);
        int key = getch();
        if (key == '\n' || key == '\r' || key == KEY_ENTER) {
            input[length] = 0;
            history_add(input);
            return true;
        }
        if (key == 27) {
            input[0] = 0;
            return true;
        }
        if (key == KEY_F(1)) {
            strcpy(input, "HELP");
            return true;
        }
        if (key == KEY_F(5)) {
            strcpy(input, "RUN");
            return true;
        }
        if (key == KEY_F(10)) {
            strcpy(input, "QUIT");
            return true;
        }
        if (key == KEY_LEFT && cursor > 0) {
            cursor--;
        }
        else if (key == KEY_RIGHT && cursor < length) {
            cursor++;
        }
        else if (key == KEY_HOME) {
            cursor = 0;
        }
        else if (key == KEY_END) {
            cursor = length;
        }
        else if ((key == KEY_BACKSPACE || key == 127 || key == 8) && cursor > 0) {
            memmove(input + cursor - 1, input + cursor, (size_t)(length - cursor + 1));
            cursor--;
            length--;
        }
        else if (key == KEY_DC && cursor < length) {
            memmove(input + cursor, input + cursor + 1, (size_t)(length - cursor));
            length--;
        }
        else if (key == KEY_UP && history_index > 0) {
            history_index--;
            strcpy(input, g_history[history_index]);
            length = (int)strlen(input);
            cursor = length;
        }
        else if (key == KEY_DOWN && history_index < g_history_count) {
            history_index++;
            if (history_index == g_history_count) {
                input[0] = 0;
            }
            else {
                strcpy(input, g_history[history_index]);
            }
            length = (int)strlen(input);
            cursor = length;
        }
        else if (key >= 32 && key <= 126 && length + 1 < MAX_INPUT) {
            memmove(input + cursor + 1, input + cursor, (size_t)(length - cursor + 1));
            input[cursor++] = (char)key;
            length++;
        }
    }
}

#define putchar(c) basic_putchar(c)
#define puts(s) basic_puts(s)
#define printf(...) basic_printf(__VA_ARGS__)

static void skip_spaces(const char** p)
{
    while (**p != 0 && isspace((unsigned char)**p)) {
        (*p)++;
    }
}

static void trim_right(char* text)
{
    int len = (int)strlen(text);
    while (len > 0 && isspace((unsigned char)text[len - 1])) {
        text[--len] = 0;
    }
}

static bool keyword(const char** p, const char* word)
{
    const char* s = *p;
    skip_spaces(&s);
    int len = (int)strlen(word);
    for (int i = 0; i < len; i++) {
        if (toupper((unsigned char)s[i]) != toupper((unsigned char)word[i])) {
            return false;
        }
    }
    if (isalnum((unsigned char)s[len]) || s[len] == '_') {
        return false;
    }
    *p = s + len;
    return true;
}

static bool command_equals(const char* input, const char* command)
{
    skip_spaces(&input);
    while (*command != 0 && *input != 0) {
        if (toupper((unsigned char)*input) != toupper((unsigned char)*command)) {
            return false;
        }
        input++;
        command++;
    }
    skip_spaces(&input);
    return *input == 0 && *command == 0;
}

static int find_line_number(int number)
{
    int low = 0;
    int high = g_line_count;
    while (low < high) {
        int middle = low + (high - low) / 2;
        if (g_program[middle].number < number) {
            low = middle + 1;
        }
        else {
            high = middle;
        }
    }
    return low;
}

static int exact_line_number(int number)
{
    int index = find_line_number(number);
    if (index < g_line_count && g_program[index].number == number) {
        return index;
    }
    return -1;
}

static bool store_line(int number, const char* text)
{
    int index = find_line_number(number);
    if (*text == 0) {
        if (index < g_line_count && g_program[index].number == number) {
            for (int i = index; i + 1 < g_line_count; i++) {
                g_program[i] = g_program[i + 1];
            }
            g_line_count--;
        }
        return true;
    }
    if ((int)strlen(text) >= MAX_LINE_TEXT) {
        puts("?LINE TOO LONG");
        return false;
    }
    if (index < g_line_count && g_program[index].number == number) {
        strcpy(g_program[index].text, text);
        return true;
    }
    if (g_line_count >= MAX_LINES) {
        puts("?OUT OF PROGRAM MEMORY");
        return false;
    }
    for (int i = g_line_count; i > index; i--) {
        g_program[i] = g_program[i - 1];
    }
    g_program[index].number = number;
    strcpy(g_program[index].text, text);
    g_line_count++;
    return true;
}

static int parse_expression(const char** p, bool* ok);

static int parse_factor(const char** p, bool* ok)
{
    skip_spaces(p);
    if (**p == '+') {
        (*p)++;
        return parse_factor(p, ok);
    }
    if (**p == '-') {
        (*p)++;
        return -parse_factor(p, ok);
    }
    if (**p == '(') {
        (*p)++;
        int value = parse_expression(p, ok);
        skip_spaces(p);
        if (**p != ')') {
            *ok = false;
            return 0;
        }
        (*p)++;
        return value;
    }
    if (isalpha((unsigned char)**p)) {
        int variable = toupper((unsigned char)**p) - 'A';
        (*p)++;
        if (variable < 0 || variable >= 26) {
            *ok = false;
            return 0;
        }
        return g_variables[variable];
    }
    if (isdigit((unsigned char)**p)) {
        char* end = NULL;
        long value = strtol(*p, &end, 10);
        *p = end;
        return (int)value;
    }
    *ok = false;
    return 0;
}

static int parse_term(const char** p, bool* ok)
{
    int value = parse_factor(p, ok);
    while (*ok) {
        skip_spaces(p);
        char op = **p;
        if (op != '*' && op != '/' && op != '%') {
            break;
        }
        (*p)++;
        int right = parse_factor(p, ok);
        if (!*ok) {
            return 0;
        }
        if ((op == '/' || op == '%') && right == 0) {
            puts("?DIVISION BY ZERO");
            *ok = false;
            return 0;
        }
        if (op == '*') {
            value *= right;
        }
        else if (op == '/') {
            value /= right;
        }
        else {
            value %= right;
        }
    }
    return value;
}

static int parse_expression(const char** p, bool* ok)
{
    int value = parse_term(p, ok);
    while (*ok) {
        skip_spaces(p);
        char op = **p;
        if (op != '+' && op != '-') {
            break;
        }
        (*p)++;
        int right = parse_term(p, ok);
        if (op == '+') {
            value += right;
        }
        else {
            value -= right;
        }
    }
    return value;
}

static bool parse_condition(const char** p, bool* ok)
{
    int left = parse_expression(p, ok);
    if (!*ok) {
        return false;
    }
    skip_spaces(p);
    if (strncmp(*p, "<>", 2) == 0) {
        *p += 2;
        return left != parse_expression(p, ok);
    }
    if (strncmp(*p, "<=", 2) == 0) {
        *p += 2;
        return left <= parse_expression(p, ok);
    }
    if (strncmp(*p, ">=", 2) == 0) {
        *p += 2;
        return left >= parse_expression(p, ok);
    }
    if (**p == '=') {
        (*p)++;
        return left == parse_expression(p, ok);
    }
    if (**p == '<') {
        (*p)++;
        return left < parse_expression(p, ok);
    }
    if (**p == '>') {
        (*p)++;
        return left > parse_expression(p, ok);
    }
    return left != 0;
}

static flow_t flow(flow_kind_t kind, int target)
{
    flow_t result;
    result.kind = kind;
    result.target = target;
    return result;
}

static flow_t jump_to_line(int line_number)
{
    int index = exact_line_number(line_number);
    if (index < 0) {
        printf("?UNDEFINED LINE %d\n", line_number);
        return flow(FLOW_ERROR, 0);
    }
    return flow(FLOW_JUMP, index);
}

static flow_t execute_statement(const char* statement, int current_index)
{
    const char* p = statement;
    skip_spaces(&p);
    if (*p == 0 || keyword(&p, "REM") || *p == '\'') {
        return flow(FLOW_NEXT, 0);
    }
    if (keyword(&p, "PRINT") || *p == '?') {
        if (*p == '?') {
            p++;
        }
        bool newline = true;
        skip_spaces(&p);
        while (*p != 0) {
            if (*p == '"') {
                p++;
                while (*p != 0 && *p != '"') {
                    putchar(*p++);
                }
                if (*p == '"') {
                    p++;
                }
                else {
                    puts("\n?UNTERMINATED STRING");
                    return flow(FLOW_ERROR, 0);
                }
            }
            else {
                bool ok = true;
                int value = parse_expression(&p, &ok);
                if (!ok) {
                    puts("?SYNTAX ERROR");
                    return flow(FLOW_ERROR, 0);
                }
                printf("%d", value);
            }
            skip_spaces(&p);
            if (*p == ';') {
                newline = false;
                p++;
                skip_spaces(&p);
                if (*p != 0) {
                    newline = true;
                }
            }
            else if (*p == ',') {
                basic_fputs("        ");
                p++;
                newline = true;
                skip_spaces(&p);
            }
            else if (*p != 0) {
                puts("\n?SYNTAX ERROR");
                return flow(FLOW_ERROR, 0);
            }
        }
        if (newline) {
            putchar('\n');
        }
        return flow(FLOW_NEXT, 0);
    }
    if (keyword(&p, "LET")) {
        skip_spaces(&p);
    }
    if (isalpha((unsigned char)*p)) {
        int variable = toupper((unsigned char)*p) - 'A';
        const char* after_variable = p + 1;
        skip_spaces(&after_variable);
        if (*after_variable == '=') {
            p = after_variable + 1;
            bool ok = true;
            int value = parse_expression(&p, &ok);
            skip_spaces(&p);
            if (!ok || *p != 0) {
                puts("?SYNTAX ERROR");
                return flow(FLOW_ERROR, 0);
            }
            g_variables[variable] = value;
            return flow(FLOW_NEXT, 0);
        }
    }
    p = statement;
    if (keyword(&p, "INPUT")) {
        skip_spaces(&p);
        if (!isalpha((unsigned char)*p)) {
            puts("?SYNTAX ERROR");
            return flow(FLOW_ERROR, 0);
        }
        int variable = toupper((unsigned char)*p) - 'A';
        char input[MAX_INPUT];
        bool input_ok;
        if (g_fullscreen) {
            input_ok = fullscreen_readline("? ", input);
            basic_fputs("? ");
            basic_puts(input);
        }
        else {
            basic_fputs("? ");
            fflush(stdout);
            input_ok = fgets(input, sizeof(input), stdin) != NULL;
        }
        if (!input_ok) {
            puts("?INPUT ENDED");
            return flow(FLOW_ERROR, 0);
        }
        g_variables[variable] = atoi(input);
        return flow(FLOW_NEXT, 0);
    }
    if (keyword(&p, "GOTO")) {
        bool ok = true;
        int line_number = parse_expression(&p, &ok);
        return ok ? jump_to_line(line_number) : flow(FLOW_ERROR, 0);
    }
    if (keyword(&p, "GOSUB")) {
        bool ok = true;
        int line_number = parse_expression(&p, &ok);
        if (!ok || g_gosub_count >= MAX_GOSUB) {
            puts("?OUT OF GOSUB");
            return flow(FLOW_ERROR, 0);
        }
        flow_t target = jump_to_line(line_number);
        if (target.kind == FLOW_JUMP) {
            g_gosub[g_gosub_count++].return_index = current_index + 1;
        }
        return target;
    }
    if (keyword(&p, "RETURN")) {
        if (g_gosub_count <= 0) {
            puts("?RETURN WITHOUT GOSUB");
            return flow(FLOW_ERROR, 0);
        }
        return flow(FLOW_JUMP, g_gosub[--g_gosub_count].return_index);
    }
    if (keyword(&p, "IF")) {
        bool ok = true;
        bool condition = parse_condition(&p, &ok);
        if (!ok || !keyword(&p, "THEN")) {
            puts("?SYNTAX ERROR");
            return flow(FLOW_ERROR, 0);
        }
        if (!condition) {
            return flow(FLOW_SKIP_LINE, 0);
        }
        skip_spaces(&p);
        if (isdigit((unsigned char)*p)) {
            int line_number = atoi(p);
            return jump_to_line(line_number);
        }
        return execute_statement(p, current_index);
    }
    if (keyword(&p, "FOR")) {
        skip_spaces(&p);
        if (!isalpha((unsigned char)*p) || g_for_count >= MAX_FOR) {
            puts("?FOR ERROR");
            return flow(FLOW_ERROR, 0);
        }
        int variable = toupper((unsigned char)*p++) - 'A';
        skip_spaces(&p);
        if (*p++ != '=') {
            puts("?SYNTAX ERROR");
            return flow(FLOW_ERROR, 0);
        }
        bool ok = true;
        int initial = parse_expression(&p, &ok);
        if (!ok || !keyword(&p, "TO")) {
            puts("?SYNTAX ERROR");
            return flow(FLOW_ERROR, 0);
        }
        int limit = parse_expression(&p, &ok);
        int step = 1;
        if (keyword(&p, "STEP")) {
            step = parse_expression(&p, &ok);
        }
        if (!ok || step == 0) {
            puts("?FOR ERROR");
            return flow(FLOW_ERROR, 0);
        }
        g_variables[variable] = initial;
        g_for[g_for_count].variable = variable;
        g_for[g_for_count].limit = limit;
        g_for[g_for_count].step = step;
        g_for[g_for_count].body_index = current_index + 1;
        g_for_count++;
        return flow(FLOW_NEXT, 0);
    }
    if (keyword(&p, "NEXT")) {
        if (g_for_count <= 0) {
            puts("?NEXT WITHOUT FOR");
            return flow(FLOW_ERROR, 0);
        }
        int frame_index = g_for_count - 1;
        skip_spaces(&p);
        if (isalpha((unsigned char)*p)) {
            int variable = toupper((unsigned char)*p) - 'A';
            while (frame_index >= 0 && g_for[frame_index].variable != variable) {
                frame_index--;
            }
            if (frame_index < 0) {
                puts("?NEXT WITHOUT FOR");
                return flow(FLOW_ERROR, 0);
            }
        }
        for_frame_t* frame = &g_for[frame_index];
        g_variables[frame->variable] += frame->step;
        int value = g_variables[frame->variable];
        bool keep_running = frame->step > 0 ? value <= frame->limit : value >= frame->limit;
        if (keep_running) {
            return flow(FLOW_JUMP, frame->body_index);
        }
        g_for_count = frame_index;
        return flow(FLOW_NEXT, 0);
    }
    if (keyword(&p, "CLS")) {
        basic_clear();
        return flow(FLOW_NEXT, 0);
    }
    if (keyword(&p, "LOCATE")) {
        bool ok = true;
        int x = parse_expression(&p, &ok);
        skip_spaces(&p);
        if (!ok || *p != ',') {
            puts("?SYNTAX ERROR");
            return flow(FLOW_ERROR, 0);
        }
        p++;
        int y = parse_expression(&p, &ok);
        if (!ok || x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT) {
            puts("?ILLEGAL FUNCTION CALL");
            return flow(FLOW_ERROR, 0);
        }
        skip_spaces(&p);
        int cursor = -1;
        if (*p == ',') {
            p++;
            cursor = parse_expression(&p, &ok);
            if (!ok || (cursor != 0 && cursor != 1)) {
                puts("?ILLEGAL FUNCTION CALL");
                return flow(FLOW_ERROR, 0);
            }
        }
        skip_spaces(&p);
        if (*p != 0) {
            puts("?SYNTAX ERROR");
            return flow(FLOW_ERROR, 0);
        }
        basic_locate(x, y, cursor);
        return flow(FLOW_NEXT, 0);
    }
    if (keyword(&p, "END") || keyword(&p, "STOP")) {
        return flow(FLOW_STOP, 0);
    }
    puts("?SYNTAX ERROR");
    return flow(FLOW_ERROR, 0);
}

static bool comment_statement(const char* statement)
{
    skip_spaces(&statement);
    if (*statement == '\'') {
        return true;
    }
    const char* p = statement;
    return keyword(&p, "REM");
}

static flow_t execute_line(const char* line, int current_index)
{
    const char* start = line;
    bool quoted = false;
    while (true) {
        const char* end = start;
        while (*end != 0) {
            if (*end == '"') {
                quoted = !quoted;
            }
            else if (*end == ':' && !quoted) {
                break;
            }
            end++;
        }

        int length = (int)(end - start);
        if (length >= MAX_LINE_TEXT) {
            puts("?LINE TOO LONG");
            return flow(FLOW_ERROR, 0);
        }
        char statement[MAX_LINE_TEXT];
        memcpy(statement, start, (size_t)length);
        statement[length] = 0;
        trim_right(statement);

        bool comment = comment_statement(statement);
        flow_t result = execute_statement(statement, current_index);
        if (result.kind != FLOW_NEXT) {
            return result;
        }
        if (comment || *end == 0) {
            return flow(FLOW_NEXT, 0);
        }
        start = end + 1;
    }
}

static bool run_program(void)
{
    memset(g_variables, 0, sizeof(g_variables));
    g_gosub_count = 0;
    g_for_count = 0;
    int index = 0;
    int steps = 0;
    while (index >= 0 && index < g_line_count) {
        if (++steps > MAX_STEPS) {
            puts("?PROGRAM STEP LIMIT");
            return false;
        }
        flow_t result = execute_line(g_program[index].text, index);
        if (result.kind == FLOW_ERROR) {
            printf(" in %d\n", g_program[index].number);
            return false;
        }
        if (result.kind == FLOW_STOP) {
            return true;
        }
        if (result.kind == FLOW_JUMP) {
            index = result.target;
        }
        else {
            index++;
        }
    }
    return true;
}

static void list_program(int first, int last)
{
    for (int i = 0; i < g_line_count; i++) {
        if (g_program[i].number >= first && g_program[i].number <= last) {
            printf("%d %s\n", g_program[i].number, g_program[i].text);
        }
    }
}

static bool save_program(const char* path)
{
    FILE* fp = fopen(path, "w");
    if (fp == NULL) {
        perror(path);
        return false;
    }
    for (int i = 0; i < g_line_count; i++) {
        fprintf(fp, "%d %s\n", g_program[i].number, g_program[i].text);
    }
    fclose(fp);
    return true;
}

static bool load_program(const char* path)
{
    FILE* fp = fopen(path, "r");
    if (fp == NULL) {
        perror(path);
        return false;
    }
    basic_line_t loaded[MAX_LINES];
    int loaded_count = 0;
    char input[MAX_INPUT];
    while (fgets(input, sizeof(input), fp) != NULL) {
        trim_right(input);
        const char* p = input;
        skip_spaces(&p);
        if (!isdigit((unsigned char)*p)) {
            continue;
        }
        char* end = NULL;
        long number = strtol(p, &end, 10);
        p = end;
        skip_spaces(&p);
        if (loaded_count >= MAX_LINES || number <= 0 || number > 65529
            || (int)strlen(p) >= MAX_LINE_TEXT) {
            fclose(fp);
            puts("?INVALID BASIC FILE");
            return false;
        }
        loaded[loaded_count].number = (int)number;
        strcpy(loaded[loaded_count].text, p);
        loaded_count++;
    }
    fclose(fp);
    g_line_count = 0;
    for (int i = 0; i < loaded_count; i++) {
        store_line(loaded[i].number, loaded[i].text);
    }
    return true;
}

static const char* command_argument(const char* input)
{
    while (*input != 0 && !isspace((unsigned char)*input)) {
        input++;
    }
    skip_spaces(&input);
    if (*input == '"') {
        input++;
    }
    return input;
}

static void copy_path(char* destination, const char* input)
{
    int i = 0;
    while (*input != 0 && *input != '"' && !isspace((unsigned char)*input)
        && i + 1 < MAX_INPUT) {
        destination[i++] = *input++;
    }
    destination[i] = 0;
}

static void show_help(void)
{
    puts("COMMANDS: LIST [start[-end]]  RUN  NEW  SAVE \"file\"  LOAD \"file\"");
    puts("          DELETE line  CLS  HELP  QUIT");
    puts("BASIC:    PRINT/?  LET  INPUT  IF expr THEN line  GOTO");
    puts("          GOSUB/RETURN  FOR var=first TO last STEP n  NEXT");
    puts("          LOCATE x,y[,cursor]  CLS  END  : compound separator");
}

static void show_banner(void)
{
    puts("NEO-C Z80 BASIC");
    puts("MSX-BASIC style IDE");
    puts("28815 Bytes free");
}

static bool process_command(char* input)
{
    trim_right(input);
    const char* p = input;
    skip_spaces(&p);
    if (*p == 0) {
        return true;
    }
    if (isdigit((unsigned char)*p)) {
        char* end = NULL;
        long number = strtol(p, &end, 10);
        p = end;
        skip_spaces(&p);
        if (number <= 0 || number > 65529) {
            puts("?ILLEGAL LINE NUMBER");
            return true;
        }
        store_line((int)number, p);
        return true;
    }
    if (command_equals(p, "RUN")) {
        run_program();
        return true;
    }
    if (command_equals(p, "NEW")) {
        g_line_count = 0;
        memset(g_variables, 0, sizeof(g_variables));
        return true;
    }
    if (command_equals(p, "CLS")) {
        basic_clear();
        return true;
    }
    if (command_equals(p, "HELP")) {
        show_help();
        return true;
    }
    if (command_equals(p, "QUIT") || command_equals(p, "SYSTEM")) {
        return false;
    }
    const char* q = p;
    if (keyword(&q, "LIST")) {
        int first = 0;
        int last = 65529;
        skip_spaces(&q);
        if (isdigit((unsigned char)*q)) {
            first = atoi(q);
            while (isdigit((unsigned char)*q)) {
                q++;
            }
            last = first;
            skip_spaces(&q);
            if (*q == '-') {
                q++;
                skip_spaces(&q);
                last = isdigit((unsigned char)*q) ? atoi(q) : 65529;
            }
        }
        list_program(first, last);
        return true;
    }
    q = p;
    if (keyword(&q, "DELETE")) {
        skip_spaces(&q);
        if (!isdigit((unsigned char)*q)) {
            puts("?SYNTAX ERROR");
        }
        else {
            store_line(atoi(q), "");
        }
        return true;
    }
    q = p;
    if (keyword(&q, "SAVE")) {
        char path[MAX_INPUT];
        copy_path(path, command_argument(p));
        if (*path == 0) {
            puts("?FILE NAME REQUIRED");
        }
        else {
            save_program(path);
        }
        return true;
    }
    q = p;
    if (keyword(&q, "LOAD")) {
        char path[MAX_INPUT];
        copy_path(path, command_argument(p));
        if (*path == 0) {
            puts("?FILE NAME REQUIRED");
        }
        else {
            load_program(path);
        }
        return true;
    }

    flow_t direct = execute_line(p, -1);
    if (direct.kind == FLOW_ERROR) {
        return true;
    }
    if (direct.kind == FLOW_JUMP) {
        puts("?ILLEGAL DIRECT");
    }
    return true;
}

int main(int argc, char** argv)
{
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--quiet") == 0) {
            g_quiet = true;
        }
        else if (strcmp(argv[i], "--run") == 0 && i + 1 < argc) {
            g_quiet = true;
            if (!load_program(argv[++i])) {
                return 1;
            }
            return run_program() ? 0 : 1;
        }
    }

    g_fullscreen = !g_quiet && isatty(STDIN_FILENO) && isatty(STDOUT_FILENO);
    if (g_fullscreen) {
        initscr();
        cbreak();
        noecho();
        keypad(stdscr, true);
        g_colors = has_colors();
        if (g_colors) {
            start_color();
            use_default_colors();
            init_pair(1, COLOR_WHITE, COLOR_BLUE);
            init_pair(2, COLOR_BLUE, COLOR_WHITE);
            init_pair(3, COLOR_WHITE, COLOR_BLACK);
        }
        screen_clear();
    }

    if (!g_quiet) {
        show_banner();
    }
    char input[MAX_INPUT];
    bool running = true;
    while (running) {
        if (!g_quiet) {
            basic_puts("Ok");
        }
        if (g_fullscreen) {
            if (!fullscreen_readline("", input)) {
                break;
            }
            basic_puts(input);
        }
        else {
            if (fgets(input, sizeof(input), stdin) == NULL) {
                break;
            }
        }
        running = process_command(input);
    }
    if (g_fullscreen) {
        endwin();
    }
    return 0;
}
