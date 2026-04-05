#include "common.h"
#include <libgen.h>
#include <dirent.h>
#include <limits.h>

static bool is_directory_path(char* path)
{
    DIR* dir = opendir(path);
    if(dir) {
        closedir(dir);
        return true;
    }
    else {
        return false;
    }
}

static string parse_sp_path(char* command_string)
{
    char* p = command_string;
    while(*p == ' ' || *p == '\t') {
        p++;
    }

    int command_len = 0;
    if(strncmp(p, "sp", 2) == 0 && (p[2] == '\0' || p[2] == ' ' || p[2] == '\t')) {
        command_len = 2;
    }
    else if(strncmp(p, "split", 5) == 0 && (p[5] == '\0' || p[5] == ' ' || p[5] == '\t')) {
        command_len = 5;
    }
    else {
        return null;
    }

    p += command_len;
    while(*p == ' ' || *p == '\t') {
        p++;
    }

    if(*p == '\0') {
        return string("");
    }

    char* tail = command_string + strlen(command_string);
    while(tail > p && (tail[-1] == ' ' || tail[-1] == '\t')) {
        tail--;
    }

    if(tail <= p) {
        return null;
    }

    char buf[tail-p+1];
    memcpy(buf, p, tail-p);
    buf[tail-p] = '\0';

    return string(buf);
}

static void skip_command_spaces(char** p)
{
    while(**p == ' ' || **p == '\t') {
        (*p)++;
    }
}

static bool parse_command_name(char* command_string, char* short_name, char* long_name, bool* force)
{
    char* p = command_string;
    skip_command_spaces(&p);

    int len = 0;

    if(short_name != null && strncmp(p, short_name, strlen(short_name)) == 0) {
        len = strlen(short_name);
    }
    else if(long_name != null && strncmp(p, long_name, strlen(long_name)) == 0) {
        len = strlen(long_name);
    }
    else {
        return false;
    }

    p += len;

    if(force != null) {
        *force = false;

        if(*p == '!') {
            *force = true;
            p++;
        }
    }

    skip_command_spaces(&p);
    return *p == '\0';
}

static string parse_edit_path(char* command_string, bool* force)
{
    char* p = command_string;
    skip_command_spaces(&p);

    int command_len = 0;
    if(strncmp(p, "e", 1) == 0 && (p[1] == '\0' || p[1] == '!' || p[1] == ' ' || p[1] == '\t')) {
        command_len = 1;
    }
    else if(strncmp(p, "edit", 4) == 0 && (p[4] == '\0' || p[4] == '!' || p[4] == ' ' || p[4] == '\t')) {
        command_len = 4;
    }
    else {
        return null;
    }

    p += command_len;
    *force = false;
    if(*p == '!') {
        *force = true;
        p++;
    }

    skip_command_spaces(&p);

    if(*p == '\0') {
        return string("");
    }

    char* tail = command_string + strlen(command_string);
    while(tail > p && (tail[-1] == ' ' || tail[-1] == '\t')) {
        tail--;
    }

    char buf[tail-p+1];
    memcpy(buf, p, tail-p);
    buf[tail-p] = '\0';

    return string(buf);
}

static bool get_visual_command_range(Vi* nvi, ViWin* self, int* head, int* tail)
{
    if(nvi.modeBeforeCommand == kVisualMode) {
        *head = self.visualModeHead;
        *tail = self.scroll + self.cursorY;
        return true;
    }
    else if(nvi.modeBeforeCommand == kHorizonVisualMode) {
        *head = self.visualModeHorizonHeadScroll + self.visualModeHorizonHeadY;
        *tail = self.scroll + self.cursorY;
        return true;
    }
    else if(nvi.modeBeforeCommand == kVerticalVisualMode) {
        *head = self.visualModeVerticalHeadY;
        *tail = self.scroll + self.cursorY;
        return true;
    }

    return false;
}

static bool parse_ex_address(char** p, Vi* nvi, ViWin* self, int* value)
{
    if(**p == '.') {
        *value = self.scroll + self.cursorY;
        (*p)++;
        return true;
    }
    else if(**p == '$') {
        *value = self.texts.length() - 1;
        (*p)++;
        return true;
    }
    else if(**p >= '0' && **p <= '9') {
        *value = atoi(*p) - 1;
        while(**p >= '0' && **p <= '9') {
            (*p)++;
        }
        return true;
    }
    else if(**p == '\'' && ((*p)[1] == '<' || (*p)[1] == '>')) {
        int head = 0;
        int tail = 0;

        if(!get_visual_command_range(nvi, self, &head, &tail)) {
            return false;
        }

        if(head > tail) {
            int tmp = head;
            head = tail;
            tail = tmp;
        }

        *value = (*p)[1] == '<' ? head : tail;
        *p += 2;
        return true;
    }

    return false;
}

static bool parse_ex_range(char** p, Vi* nvi, ViWin* self, int* range_head, int* range_tail, bool* has_range)
{
    int current_line = self.scroll + self.cursorY;
    if(current_line < 0) {
        current_line = 0;
    }
    if(current_line >= self.texts.length()) {
        current_line = self.texts.length() - 1;
    }

    *range_head = current_line;
    *range_tail = current_line;
    *has_range = false;

    skip_command_spaces(p);

    if(**p == '%') {
        *range_head = 0;
        *range_tail = self.texts.length() - 1;
        *has_range = true;
        (*p)++;
        return true;
    }

    int head = 0;
    if(!parse_ex_address(p, nvi, self, &head)) {
        return true;
    }

    *has_range = true;
    *range_head = head;
    *range_tail = head;

    skip_command_spaces(p);

    if(**p == ',') {
        int tail = 0;

        (*p)++;
        skip_command_spaces(p);

        if(!parse_ex_address(p, nvi, self, &tail)) {
            return false;
        }

        *range_tail = tail;
    }

    return true;
}

static string parse_filter_command(char* command_string, Vi* nvi, ViWin* self, int* range_head, int* range_tail)
{
    char* p = command_string;
    bool has_range = false;

    if(!parse_ex_range(&p, nvi, self, range_head, range_tail, &has_range) || !has_range) {
        return null;
    }

    skip_command_spaces(&p);
    if(*p != '!') {
        return null;
    }

    p++;
    skip_command_spaces(&p);

    if(*p == '\0') {
        return null;
    }

    return string(p);
}

static string parse_shell_command(char* command_string)
{
    char* p = command_string;
    skip_command_spaces(&p);

    if(*p != '!') {
        return null;
    }

    p++;
    skip_command_spaces(&p);

    if(*p == '\0') {
        return null;
    }

    return string(p);
}

static bool parse_write_quit_command(char* command_string, bool* write, bool* quit, bool* force)
{
    *write = false;
    *quit = false;
    *force = false;

    if(parse_command_name(command_string, "w", "write", force)) {
        *write = true;
        return true;
    }
    else if(parse_command_name(command_string, "q", "quit", force)) {
        *quit = true;
        return true;
    }
    else if(parse_command_name(command_string, "wq", null, force)
        || parse_command_name(command_string, "x", null, force)
        || parse_command_name(command_string, "xit", null, force))
    {
        *write = true;
        *quit = true;
        return true;
    }

    return false;
}

static string parse_write_path(char* command_string, bool* force)
{
    char* p = command_string;
    skip_command_spaces(&p);

    int command_len = 0;
    if(strncmp(p, "w", 1) == 0 && (p[1] == '\0' || p[1] == '!' || p[1] == ' ' || p[1] == '\t')) {
        command_len = 1;
    }
    else if(strncmp(p, "write", 5) == 0 && (p[5] == '\0' || p[5] == '!' || p[5] == ' ' || p[5] == '\t')) {
        command_len = 5;
    }
    else {
        return null;
    }

    p += command_len;
    *force = false;
    if(*p == '!') {
        *force = true;
        p++;
    }

    skip_command_spaces(&p);
    if(*p == '\0') {
        return null;
    }

    char* tail = command_string + strlen(command_string);
    while(tail > p && (tail[-1] == ' ' || tail[-1] == '\t')) {
        tail--;
    }

    char buf[tail-p+1];
    memcpy(buf, p, tail-p);
    buf[tail-p] = '\0';

    return string(buf);
}

static string parse_saveas_path(char* command_string, bool* force)
{
    char* p = command_string;
    skip_command_spaces(&p);

    if(strncmp(p, "saveas", 6) != 0 || (p[6] != '\0' && p[6] != '!' && p[6] != ' ' && p[6] != '\t')) {
        return null;
    }

    p += 6;
    *force = false;
    if(*p == '!') {
        *force = true;
        p++;
    }

    skip_command_spaces(&p);
    if(*p == '\0') {
        return null;
    }

    char* tail = command_string + strlen(command_string);
    while(tail > p && (tail[-1] == ' ' || tail[-1] == '\t')) {
        tail--;
    }

    char buf[tail-p+1];
    memcpy(buf, p, tail-p);
    buf[tail-p] = '\0';

    return string(buf);
}

static int parse_set_paste_command(char* command_string)
{
    if(parse_command_name(command_string, null, "set paste", null)
        || parse_command_name(command_string, null, "paste", null))
    {
        return 1;
    }
    else if(parse_command_name(command_string, null, "set nopaste", null)
        || parse_command_name(command_string, null, "nopaste", null))
    {
        return -1;
    }

    return 0;
}

static void run_shell_command(string command)
{
    endwin();
    (void)system(command);
    printf("\nPress ENTER to continue");
    fflush(stdout);

    int c = 0;
    while((c = getchar()) != '\n' && c != EOF) {
    }
}

static list<string>*% run_filter_command_with_input(string command, list<string>* input_lines)
{
    auto input_path = xsprintf("/tmp/vin-filter-input-%d", getpid());
    auto output_path = xsprintf("/tmp/vin-filter-output-%d", getpid());
    auto result = new list<string>.initialize();

    FILE* input_fp = fopen(input_path, "w");
    if(input_fp == null) {
        return result;
    }

    foreach(it, input_lines) {
        fprintf(input_fp, "%s\n", it);
    }
    fclose(input_fp);

    (void)system(xsprintf("(%s) < '%s' > '%s'", command, input_path, output_path));

    FILE* output_fp = fopen(output_path, "r");
    if(output_fp != null) {
        char line[4096];

        while(fgets(line, 4096, output_fp) != null) {
            int len = strlen(line);
            if(len > 0 && line[len-1] == '\n') {
                line[len-1] = '\0';
            }

            result.push_back(string(line));
        }

        fclose(output_fp);
    }

    unlink(input_path);
    unlink(output_path);

    return result;
}

static void append_command_string(char* command_string, char* str)
{
    int len = strlen(command_string);

    if(len >= 127) {
        return;
    }

    strncat(command_string, str, 127-len);
}

static void remember_command_line_for_history(Vi* nvi)
{
    if(!nvi.commandHistoryBrowsing) {
        strncpy(nvi.commandStringBeforeHistory, nvi.commandString, 128);
        nvi.commandHistoryBrowsing = true;
    }
}

static void stop_command_history_browsing(Vi* nvi)
{
    nvi.commandHistoryBrowsing = false;
    nvi.commandHistoryIndex = nvi.commandHistory.length();
}

static void browse_command_history_prev(Vi* nvi)
{
    if(nvi.commandHistory.length() == 0) {
        return;
    }

    remember_command_line_for_history(nvi);

    if(nvi.commandHistoryIndex <= 0) {
        nvi.commandHistoryIndex = 0;
    }
    else {
        nvi.commandHistoryIndex--;
    }

    auto command = nvi.commandHistory.item(nvi.commandHistoryIndex, string(""));
    strncpy(nvi.commandString, command, 128);
}

static void browse_command_history_next(Vi* nvi)
{
    if(!nvi.commandHistoryBrowsing) {
        return;
    }

    if(nvi.commandHistoryIndex < nvi.commandHistory.length() - 1) {
        nvi.commandHistoryIndex++;
        auto command = nvi.commandHistory.item(nvi.commandHistoryIndex, string(""));
        strncpy(nvi.commandString, command, 128);
    }
    else {
        strncpy(nvi.commandString, nvi.commandStringBeforeHistory, 128);
        stop_command_history_browsing(nvi);
    }
}

static void add_command_history(Vi* nvi)
{
    if(nvi.commandString[0] == '\0') {
        return;
    }

    nvi.commandHistory.push_back(string(nvi.commandString));
    stop_command_history_browsing(nvi);
    strncpy(nvi.commandStringBeforeHistory, "", 128);
}

static bool parse_substitute_token(char** p, char* buf, int buf_size)
{
    int len = 0;

    while(**p != '\0' && **p != '/') {
        if(**p == '\\' && (*p)[1] != '\0') {
            (*p)++;
        }

        if(len < buf_size - 1) {
            buf[len++] = **p;
        }

        (*p)++;
    }

    buf[len] = '\0';

    if(**p != '/') {
        return false;
    }

    (*p)++;

    return true;
}

static bool parse_substitute_command(char* command_string, Vi* nvi, ViWin* self, int* range_head, int* range_tail, char* match, int match_size, char* replace, int replace_size, bool* global)
{
    char* p = command_string;
    bool has_range = false;
    *global = false;

    if(!parse_ex_range(&p, nvi, self, range_head, range_tail, &has_range)) {
        return false;
    }

    skip_command_spaces(&p);
    if(*p != 's') {
        return false;
    }
    p++;

    if(*p != '/') {
        return false;
    }
    p++;

    if(!parse_substitute_token(&p, match, match_size)) {
        return false;
    }

    if(!parse_substitute_token(&p, replace, replace_size)) {
        return false;
    }

    while(*p == ' ' || *p == '\t') {
        p++;
    }

    while(*p != '\0') {
        if(*p == 'g') {
            *global = true;
        }
        else if(*p != ' ' && *p != '\t') {
            return false;
        }

        p++;
    }

    return match[0] != '\0';
}

static bool parse_delete_command(char* command_string, Vi* nvi, ViWin* self, int* range_head, int* range_tail)
{
    char* p = command_string;
    bool has_range = false;

    if(!parse_ex_range(&p, nvi, self, range_head, range_tail, &has_range)) {
        return false;
    }

    skip_command_spaces(&p);

    if(strncmp(p, "d", 1) == 0 && (p[1] == '\0' || p[1] == ' ' || p[1] == '\t')) {
        p++;
    }
    else if(strncmp(p, "delete", 6) == 0 && (p[6] == '\0' || p[6] == ' ' || p[6] == '\t')) {
        p += 6;
    }
    else {
        return false;
    }

    skip_command_spaces(&p);

    return *p == '\0';
}

static bool parse_goto_line_command(char* command_string, Vi* nvi, ViWin* self, int* line)
{
    char* p = command_string;
    bool has_range = false;
    int head = 0;
    int tail = 0;

    if(!parse_ex_range(&p, nvi, self, &head, &tail, &has_range) || !has_range) {
        return false;
    }

    skip_command_spaces(&p);
    if(*p != '\0' || head != tail) {
        return false;
    }

    *line = head;
    return true;
}

static bool parse_copy_move_destination(char** p, Vi* nvi, ViWin* self, int* dest)
{
    skip_command_spaces(p);

    if(!parse_ex_address(p, nvi, self, dest)) {
        return false;
    }

    skip_command_spaces(p);

    return **p == '\0';
}

static bool parse_yank_command(char* command_string, Vi* nvi, ViWin* self, int* range_head, int* range_tail)
{
    char* p = command_string;
    bool has_range = false;

    if(!parse_ex_range(&p, nvi, self, range_head, range_tail, &has_range)) {
        return false;
    }

    skip_command_spaces(&p);

    if(strncmp(p, "y", 1) == 0 && (p[1] == '\0' || p[1] == ' ' || p[1] == '\t')) {
        p++;
    }
    else if(strncmp(p, "yank", 4) == 0 && (p[4] == '\0' || p[4] == ' ' || p[4] == '\t')) {
        p += 4;
    }
    else {
        return false;
    }

    skip_command_spaces(&p);

    return *p == '\0';
}

static bool parse_copy_command(char* command_string, Vi* nvi, ViWin* self, int* range_head, int* range_tail, int* dest)
{
    char* p = command_string;
    bool has_range = false;

    if(!parse_ex_range(&p, nvi, self, range_head, range_tail, &has_range)) {
        return false;
    }

    skip_command_spaces(&p);

    if(strncmp(p, "t", 1) == 0) {
        p++;
    }
    else if(strncmp(p, "co", 2) == 0 && !(xiswalpha(p[2]) || p[2] == '_')) {
        p += 2;
    }
    else if(strncmp(p, "copy", 4) == 0 && !(xiswalpha(p[4]) || p[4] == '_')) {
        p += 4;
    }
    else {
        return false;
    }

    return parse_copy_move_destination(&p, nvi, self, dest);
}

static bool parse_move_command(char* command_string, Vi* nvi, ViWin* self, int* range_head, int* range_tail, int* dest)
{
    char* p = command_string;
    bool has_range = false;

    if(!parse_ex_range(&p, nvi, self, range_head, range_tail, &has_range)) {
        return false;
    }

    skip_command_spaces(&p);

    if(strncmp(p, "m", 1) == 0) {
        p++;
    }
    else if(strncmp(p, "move", 4) == 0 && !(xiswalpha(p[4]) || p[4] == '_')) {
        p += 4;
    }
    else {
        return false;
    }

    return parse_copy_move_destination(&p, nvi, self, dest);
}

static list<wstring>*% clone_line_range(ViWin* self, int head, int tail)
{
    auto result = new list<wstring>.initialize();

    for(int i=head; i<=tail; i++) {
        result.push_back(clone self.texts.item(i, wstring("")));
    }

    return result;
}

static string replace_first_plain(string line, char* match, char* replace)
{
    int index = line.index(match, -1);

    if(index < 0) {
        return line;
    }

    return xsprintf("%s%s%s"
            , line.substring(0, index)
            , replace
            , line.substring(index + strlen(match), -1));
}

void ViWin*::commandModeView(ViWin* self, Vi* nvi) 
{
    werase(self.win);

    self.textsView(nvi);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, ":%s", nvi.commandString.printable());
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

string ViWin*::selector(ViWin* self, list<string>* lines) 
{
    bool end_of_select = false;
    bool canceled = false;

    int maxx = getmaxx(self.win);
    int maxy = getmaxy(self.win);

    int scrolltop = 0;
    int cursor = 0;

    while(!end_of_select) {
        clear();
        int maxy2 = lines.length() - scrolltop;

        /// view ///
        for(int y=0; y<maxy && y < maxy2; y++) {
            auto it = lines.item(scrolltop+y, null);

            auto line = it.substring(0, maxx-1);

            if(cursor == y) {
                attron(A_REVERSE);
                mvprintw(y, 0, "%s", line);
                attroff(A_REVERSE);
            }
            else {
                mvprintw(y, 0, "%s", line);
            }
        }
        refresh();

        /// input ///
        auto key = getch();


        switch(key) {
            case KEY_UP:
            case 'k':
            case 'P'-'A'+1:
                cursor--;
                break;

            case KEY_DOWN:
            case 'j':
            case 'N'-'A'+1:
            case (('I'-'A')+1):
                cursor++;
                break;

            case 'D'-'A'+1:
            case KEY_NPAGE:
                cursor+=10;
                break;
           
            case (('U'-'A')+1):
            case KEY_PPAGE:
                cursor-=10;
                break;

            case ('C'-'A')+1:
            case 'q':
            case ('['-'A')+1:
                canceled = true;
                end_of_select = true;
                break;

            case KEY_ENTER:
            case ('J'-'A')+1:
                end_of_select = true;
                break;
        }
        
        /// modification ///
        if(cursor < 0) {
            int scroll_size = -cursor +1;
            
            cursor = 0;
            scrolltop-=scroll_size;

            if(scrolltop < 0) {
                scrolltop = 0;
                cursor = 0;
            }
        }

        if(maxy2 < maxy) {
            if(cursor >= maxy2) {
                cursor = maxy2 - 1;
            }
        }
        else {
            if(cursor >= maxy) {
                int scroll_size = cursor - maxy + 1;

                scrolltop += scroll_size;
                cursor -= scroll_size;
            }
        }
    }

    if(canceled) {
        return string("");
    }
    return string(lines.item(scrolltop+cursor, string("")));
}

string ViWin*::selectFileCompletionCandidate(ViWin* self, string word)
{
    if(strcmp(word, "") == 0) {
        return string("");
    }

    string dir_name = null;
    if(word[strlen(word)-1] == '/') {
        dir_name = string(word);
    }
    else {
        string tmp = clone word;
        char* dname = dirname(tmp);

        if(strcmp(dname, "/") == 0) {
            dir_name = string("/");
        }
        else {
            dir_name = xsprintf("%s/", dname);
        }
    }

    auto words = new list<string>.initialize();

    if(dir_name.equals("./")) {
        char* cwd = getenv("PWD");
        char cwd2[PATH_MAX];
        
        if(cwd == null) {
            if(getcwd(cwd2, PATH_MAX) == null) {
                return string("");
            }
            cwd = cwd2;
        }
    
        DIR* dir = opendir(cwd);
    
        if(dir == null) {
            return string("");
        }
    
        while(true) {
            struct dirent* entry = readdir(dir);
    
            if(entry == null) {
                break;
            }
            
            string path = xsprintf("%s/%s", cwd, entry->d_name);
            
            if(is_directory_path(path)) {
                auto item = xsprintf("%s/", entry->d_name);
                words.push_back(item);
            }
            else {
                words.push_back(string(entry->d_name));
            }
        }
    
        closedir(dir);
    }
    else if(dir_name[0] == '/') {
        DIR* dir;
        if(strcmp(word, "/") != 0 && word[strlen(word)-1] == '/') {
            dir = opendir(word.substring(0, -2));
        }
        else {
            dir = opendir(dir_name);
        }
    
        if(dir == null) {
            return string("");
        }
    
        while(true) {
            struct dirent* entry = readdir(dir);
    
            if(entry == null) {
                break;
            }
            
            string path = xsprintf("%s%s", dir_name, entry->d_name);
            
            if(is_directory_path(path)) {
                auto item = xsprintf("%s%s/", dir_name, entry->d_name);
                words.push_back(item);
            }
            else {
                words.push_back(xsprintf("%s%s", dir_name, string(entry->d_name)));
            }
        }
    
        closedir(dir);
    }
    else {
        DIR* dir;
        if(word[strlen(word)-1] == '/') {
            dir = opendir(word.substring(0, -2));
        }
        else {
            dir = opendir(dir_name);
        }
    
        if(dir == null) {
            return string("");
        }
    
        while(true) {
            struct dirent* entry = readdir(dir);
    
            if(entry == null) {
                break;
            }
            
            string path = xsprintf("%s%s", dir_name, entry->d_name);
            
            if(is_directory_path(path)) {
                auto item = xsprintf("%s%s/", dir_name, entry->d_name);
                words.push_back(item);
            }
            else {
                words.push_back(xsprintf("%s%s", dir_name, entry->d_name));
            }
        }
    
        closedir(dir);
    }

    auto words2 = new list<string>.initialize();
    
    foreach(it, words) {
        if(strstr(it, word) == it) {
            words2.push_back(clone it);
        }
    }
    
    if(words2.length() == 0) {
        return string("");
    }

    auto words3 = words2.sort();

    return self.selector(words3);
}

void ViWin*::fileCompetion(ViWin* self, Vi* nvi) 
{
    char* line = nvi.commandString;

    char* p = line + strlen(line) -1;
    
    while(p >= line) {
        if(*p == ' ' || *p == '\t') {
            p++;
            break;
        }
        else {
            p--;
        }
    }
    
    auto word = string(p);
    auto candidate = self.selectFileCompletionCandidate(word);

    if(strcmp(candidate, "") != 0 && strstr(candidate, word) == candidate) {
        auto file_name = candidate.substring(strlen(word), -1);
        append_command_string(nvi.commandString, file_name);
    }
}

void ViWin*::commandModeInput(ViWin* self, Vi* nvi) 
{
    auto key = self.getKey(false);
    
if(key == 410) { // For iPhone + clicks
    key = self.getKey(false);
}

    char a[128];
    snprintf(a, 128, "%c", key);

    switch(key) {
        case '\n':
            add_command_history(nvi);
            nvi.exitFromComandMode();
            break;

        case 3:
        case 27:
            stop_command_history_browsing(nvi);
            nvi.mode = kEditMode;
            break;

        case KEY_UP:
        case 'P'-'A'+1:
            browse_command_history_prev(nvi);
            break;

        case KEY_DOWN:
        case 'N'-'A'+1:
            browse_command_history_next(nvi);
            break;
            
        case 'V'-'A'+1: {
            auto key2 = self.getKey(false);
            
            if(key2 == 10) {
                char a[128];
                a[0] = 13;
                a[1] = '\0';
                stop_command_history_browsing(nvi);
                append_command_string(nvi.commandString, a);
            }
            else {
                char a[128];
                a[0] = key2;
                a[1] = '\0';
                stop_command_history_browsing(nvi);
                append_command_string(nvi.commandString, a);
            }
            }
            break;
            
        case '\t':
            self.fileCompetion(nvi);
            break;

        case 8:
        case 127:
        case KEY_BACKSPACE: {
            int len = strlen(nvi.commandString);
            if(len > 0) {
                stop_command_history_browsing(nvi);
                nvi.commandString[len-1] = '\0';
            }
            }
            break;

        default: {
            stop_command_history_browsing(nvi);
            append_command_string(nvi.commandString, a);
            }
            break;
    }
}

void ViWin*::view(ViWin* self, Vi* nvi) version 12
{
    if(nvi.mode == kCommandMode && self == nvi.activeWin) {
        self.commandModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void ViWin*::input(ViWin* self, Vi* nvi) version 12
{
    if(nvi.mode == kCommandMode) {
        self.commandModeInput(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

bool ViWin*::subAllTextsFromCommandMode(ViWin* self, Vi* nvi) 
{
    char match[128];
    char replace[128];
    int head = 0;
    int tail = 0;
    bool global = false;

    if(!parse_substitute_command(nvi.commandString, nvi, self, &head, &tail, match, 128, replace, 128, &global)) {
        return false;
    }

    if(self.texts.length() == 0) {
        return true;
    }

    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }

    if(head < 0) {
        head = 0;
    }
    if(tail >= self.texts.length()) {
        tail = self.texts.length() - 1;
    }

    bool changed = false;

    for(int i=head; i<=tail; i++) {
        auto line = self.texts.item(i, wstring("")).to_string();
        auto new_line = global ? line.sub_plain(match, replace) : replace_first_plain(line, match, replace);

        if(strcmp(line, new_line) != 0) {
            if(!changed) {
                self.pushUndo();
                changed = true;
            }

            auto wide_line = new_line.to_wstring();
            self.texts.replace(i, clone wide_line);
            self.texts_length.replace(i, wcslen(wide_line));
        }
    }

    if(changed) {
        self.writed = true;
        self.modifyUnderCursorYValue();
        self.modifyOverCursorYValue();
        self.modifyOverCursorXValue();
    }

    return true;
}

bool ViWin*::deleteLinesFromCommandMode(ViWin* self, Vi* nvi)
{
    int head = 0;
    int tail = 0;

    if(!parse_delete_command(nvi.commandString, nvi, self, &head, &tail)) {
        return false;
    }

    if(self.texts.length() == 0) {
        return true;
    }

    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }

    if(head < 0) {
        head = 0;
    }
    if(tail >= self.texts.length()) {
        tail = self.texts.length() - 1;
    }

    self.pushUndo();

    nvi.yank.reset();
    nvi.yankKind = kYankKindLine;
    for(int i=head; i<=tail; i++) {
        nvi.yank.push_back(clone self.texts.item(i, wstring("")));
    }
    self.saveYankToFile(nvi);

    self.texts.delete(head, tail+1);
    self.texts_length.delete(head, tail+1);

    if(self.texts.length() == 0) {
        self.texts.push_back(wstring(""));
        self.texts_length.push_back(0);
    }

    self.scroll = 0;
    self.cursorY = head;
    self.modifyUnderCursorYValue();
    self.modifyOverCursorYValue();
    self.cursorX = 0;
    self.modifyUnderCursorXValue();
    self.modifyOverCursorXValue();
    self.writed = true;

    return true;
}

bool ViWin*::yankLinesFromCommandMode(ViWin* self, Vi* nvi)
{
    int head = 0;
    int tail = 0;

    if(!parse_yank_command(nvi.commandString, nvi, self, &head, &tail)) {
        return false;
    }

    if(self.texts.length() == 0) {
        return true;
    }

    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }

    if(head < 0) {
        head = 0;
    }
    if(tail >= self.texts.length()) {
        tail = self.texts.length() - 1;
    }

    nvi.yank = clone_line_range(self, head, tail);
    nvi.yankKind = kYankKindLine;
    self.saveYankToFile(nvi);

    self.scroll = 0;
    self.cursorY = head;
    self.modifyUnderCursorYValue();
    self.modifyOverCursorYValue();
    self.cursorX = 0;
    self.modifyUnderCursorXValue();
    self.modifyOverCursorXValue();

    return true;
}

bool ViWin*::copyLinesFromCommandMode(ViWin* self, Vi* nvi)
{
    int head = 0;
    int tail = 0;
    int dest = 0;

    if(!parse_copy_command(nvi.commandString, nvi, self, &head, &tail, &dest)) {
        return false;
    }

    if(self.texts.length() == 0) {
        return true;
    }

    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }

    if(head < 0) {
        head = 0;
    }
    if(tail >= self.texts.length()) {
        tail = self.texts.length() - 1;
    }
    if(dest < -1) {
        dest = -1;
    }
    if(dest >= self.texts.length()) {
        dest = self.texts.length() - 1;
    }

    auto lines = clone_line_range(self, head, tail);

    self.pushUndo();

    for(int i=0; i<lines.length(); i++) {
        auto line = lines.item(i, wstring(""));
        self.texts.insert(dest + 1 + i, clone line);
        self.texts_length.insert(dest + 1 + i, wcslen(line));
    }

    self.scroll = 0;
    self.cursorY = dest + 1;
    self.modifyUnderCursorYValue();
    self.modifyOverCursorYValue();
    self.cursorX = 0;
    self.modifyUnderCursorXValue();
    self.modifyOverCursorXValue();
    self.writed = true;

    return true;
}

bool ViWin*::moveLinesFromCommandMode(ViWin* self, Vi* nvi)
{
    int head = 0;
    int tail = 0;
    int dest = 0;

    if(!parse_move_command(nvi.commandString, nvi, self, &head, &tail, &dest)) {
        return false;
    }

    if(self.texts.length() == 0) {
        return true;
    }

    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }

    if(head < 0) {
        head = 0;
    }
    if(tail >= self.texts.length()) {
        tail = self.texts.length() - 1;
    }
    if(dest < -1) {
        dest = -1;
    }
    if(dest >= self.texts.length()) {
        dest = self.texts.length() - 1;
    }

    if(dest >= head && dest <= tail) {
        return true;
    }

    auto lines = clone_line_range(self, head, tail);
    int len = tail - head + 1;

    self.pushUndo();

    self.texts.delete(head, tail+1);
    self.texts_length.delete(head, tail+1);

    if(dest > tail) {
        dest -= len;
    }

    for(int i=0; i<lines.length(); i++) {
        auto line = lines.item(i, wstring(""));
        self.texts.insert(dest + 1 + i, clone line);
        self.texts_length.insert(dest + 1 + i, wcslen(line));
    }

    self.scroll = 0;
    self.cursorY = dest + 1;
    self.modifyUnderCursorYValue();
    self.modifyOverCursorYValue();
    self.cursorX = 0;
    self.modifyUnderCursorXValue();
    self.modifyOverCursorXValue();
    self.writed = true;

    return true;
}

void ViWin*::filterTextsFromCommandMode(ViWin* self, Vi* nvi)
{
    int head = 0;
    int tail = 0;
    var command = parse_filter_command(nvi.commandString, nvi, self, &head, &tail);

    if(command == null) {
        return;
    }

    auto input_lines = new list<string>.initialize();
    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }

    if(head < 0) {
        head = 0;
    }
    if(tail >= self.texts.length()) {
        tail = self.texts.length() - 1;
    }

    for(int i=head; i<=tail; i++) {
        input_lines.push_back(self.texts.item(i, wstring("")).to_string());
    }
    auto lines = run_filter_command_with_input(command, input_lines);

    self.pushUndo();

    if(lines.length() == 0) {
        self.texts.delete(head, tail+1);
        self.texts_length.delete(head, tail+1);
        self.texts.insert(head, wstring(""));
        self.texts_length.insert(head, 0);
    }
    else {
        self.texts.replace(head, lines.item(0, string("")).to_wstring());
        self.texts_length.replace(head, lines.item(0, string("")).length());

        for(int i=1; i<lines.length(); i++) {
            if(head + i <= tail) {
                self.texts.replace(head+i, lines.item(i, string("")).to_wstring());
                self.texts_length.replace(head+i, lines.item(i, string("")).length());
            }
            else {
                self.texts.insert(head+i, lines.item(i, string("")).to_wstring());
                self.texts_length.insert(head+i, lines.item(i, string("")).length());
            }
        }

        if(head + lines.length() <= tail) {
            self.texts.delete(head + lines.length(), tail + 1);
            self.texts_length.delete(head + lines.length(), tail + 1);
        }
    }

    self.scroll = 0;
    self.cursorY = head;
    self.cursorX = 0;
    self.modifyUnderCursorYValue();
    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();
    self.writed = true;
}

void ViWin*::filterVerticalTextsFromCommandMode(ViWin* self, Vi* nvi)
{
    int head = 0;
    int tail = 0;
    var command = parse_filter_command(nvi.commandString, nvi, self, &head, &tail);

    if(command == null) {
        return;
    }

    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }

    auto input_lines = new list<string>.initialize();

    for(int i=head; i<=tail; i++) {
        auto line = self.texts.item(i, wstring(""));
        input_lines.push_back(line.substring(self.visualModeVerticalHeadX
                , self.visualModeVerticalHeadX + self.visualModeVerticalLen).to_string());
    }

    auto lines = run_filter_command_with_input(command, input_lines);

    self.pushUndo();

    for(int i=head; i<=tail; i++) {
        auto line = self.texts.item(i, wstring(""));
        auto head_line = line.substring(0, self.visualModeVerticalHeadX);
        auto tail_line = line.substring(self.visualModeVerticalHeadX + self.visualModeVerticalLen, -1);
        auto middle_line = lines.item(i-head, string("")).to_wstring();
        auto new_line = xsprintf("%ls%ls%ls", head_line, middle_line, tail_line).to_wstring();

        self.texts.replace(i, clone new_line);
        self.texts_length.replace(i, wcslen(new_line));
    }

    self.cursorY = self.visualModeVerticalStartY;
    self.scroll = self.visualModeVerticalStartScroll;
    self.cursorX = self.visualModeVerticalStartX;
    self.modifyUnderCursorYValue();
    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();
    self.writed = true;
}

void Vi*::enterComandMode(Vi* self) 
{
    self.modeBeforeCommand = self.mode;
    self.mode = kCommandMode;

    if(self.modeBeforeCommand == kVisualMode
        || self.modeBeforeCommand == kHorizonVisualMode
        || self.modeBeforeCommand == kVerticalVisualMode)
    {
        strncpy(self.commandString, "'<,'>", 128);
    }
    else {
        strncpy(self.commandString, "", 128);
    }

    self.commandHistoryIndex = self.commandHistory.length();
    self.commandHistoryBrowsing = false;
    strncpy(self.commandStringBeforeHistory, self.commandString, 128);
}

void Vi*::exitFromComandMode(Vi* self) 
{
    bool force_edit = false;
    bool force_write = false;
    bool force_saveas = false;
    bool write = false;
    bool quit = false;
    bool force_command = false;
    int filter_head = 0;
    int filter_tail = 0;
    int goto_line = 0;
    var edit_path = parse_edit_path(self.commandString, &force_edit);
    var write_path = parse_write_path(self.commandString, &force_write);
    var saveas_path = parse_saveas_path(self.commandString, &force_saveas);
    var split_path = parse_sp_path(self.commandString);
    int set_paste = parse_set_paste_command(self.commandString);
    var shell_command = parse_shell_command(self.commandString);
    var filter_command = parse_filter_command(self.commandString, self, self.activeWin, &filter_head, &filter_tail);

    if(split_path != null) {
        if(split_path.length() == 0) {
            self.openNewFile(self.activeWin.fileName);
        }
        else {
            self.openNewFile(split_path);
        }
    }
    else if(saveas_path != null) {
        self.activeWin.writeFileAs(saveas_path, gBinaryMode, true);
    }
    else if(write_path != null) {
        self.activeWin.writeFileAs(write_path, gBinaryMode, false);
    }
    else if(edit_path != null) {
        if(edit_path.length() == 0) {
            self.editActiveFile(self.activeWin.fileName, force_edit);
        }
        else {
            self.editActiveFile(edit_path, force_edit);
        }
    }
    else if(parse_command_name(self.commandString, "bn", "bnext", null)) {
        self.nextWin();
    }
    else if(parse_command_name(self.commandString, "bp", "bprevious", null)) {
        self.prevWin();
    }
    else if(parse_command_name(self.commandString, "bd", "bdelete", &force_command)) {
        if(self.wins.length() > 1) {
            self.closeActiveWin();
        }
    }
    else if(set_paste != 0) {
        self.activeWin.pasteMode = set_paste > 0;
    }
    else if(filter_command != null) {
        if(self.modeBeforeCommand == kVerticalVisualMode) {
            self.activeWin.filterVerticalTextsFromCommandMode(self);
        }
        else {
            self.activeWin.filterTextsFromCommandMode(self);
        }
    }
    else if(self.activeWin.moveLinesFromCommandMode(self)) {
    }
    else if(self.activeWin.copyLinesFromCommandMode(self)) {
    }
    else if(self.activeWin.yankLinesFromCommandMode(self)) {
    }
    else if(self.activeWin.deleteLinesFromCommandMode(self)) {
    }
    else if(self.activeWin.subAllTextsFromCommandMode(self)) {
    }
    else if(parse_goto_line_command(self.commandString, self, self.activeWin, &goto_line)) {
        self.activeWin.scroll = 0;
        self.activeWin.cursorY = goto_line;
        self.activeWin.modifyUnderCursorYValue();
        self.activeWin.modifyOverCursorYValue();
        self.activeWin.modifyUnderCursorXValue();
        self.activeWin.modifyOverCursorXValue();
    }
    else if(shell_command != null) {
        run_shell_command(shell_command);
        self.init_curses();
    }
    else if(parse_write_quit_command(self.commandString, &write, &quit, &force_command)) {
        if(write) {
            self.activeWin.writeFile(gBinaryMode);
        }

        if(quit) {
            bool writed = self.activeWin.writed;

            if(!writed || force_command || write) {
                if(self.wins.length() == 1) {
                    self.activeWin.saveCursorPosition(self.activeWin.fileName);
                    self.appEnd = true;
                }
                else {
                    self.closeActiveWin();
                }
            }
        }
    }
    else {
        if(parse_command_name(self.commandString, null, "shell", null)) {
            endwin();
            
            (void)system("bash");

            self.init_curses();
        }
    }

    self.mode = kEditMode;

    self.modeBeforeCommand = kEditMode;
}

Vi*% Vi*::initialize(Vi*% self) version 12
{
    auto result = inherit(self);

    strncpy(result.commandString, "", 128);
    result.commandHistory = new list<string>.initialize();
    result.commandHistoryIndex = 0;
    result.commandHistoryBrowsing = false;
    strncpy(result.commandStringBeforeHistory, "", 128);
    result.modeBeforeCommand = kEditMode;

    result.events.replace(':', void lambda(Vi* self, int key) {
        self.enterComandMode();
    });

    return result;
}
