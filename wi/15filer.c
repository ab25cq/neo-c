#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <locale.h>
#include <wctype.h>
#include <signal.h>
#include <fcntl.h>
#include <libgen.h>
#include <sys/stat.h>

#include "common.h"

impl ViWin version 15
{
initialize(int y, int x, int width, int height, Vi* vi) {
    int maxx = xgetmaxx();

    //int filer_width = maxx / 5;
    
    inherit(self, y, x, width, height, vi);
}

void textsView(ViWin* self, Vi* nvi)
{

    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    if(self.texts.length() > 0) {
        var cursor_line = self.texts.item(self.scroll + self.cursorY, null).printable();
            
        int cursor_height = (wcswidth(cursor_line, cursor_line.length()) / (maxx-1));

        self.texts
            .sublist(self.scroll, self.scroll+maxy-1)
            .each 
        {
            var printable_line = it.printable();

            if(it2 > self.cursorY 
                && it2 <= self.cursorY + cursor_height)
            {
            }
            else if(self.cursorY == it2 && nvi.activeWin.equals(self) && !nvi.filer.active) 
            {
                if(printable_line.length() == 0) {
                    wattron(self.win, A_REVERSE);
                    mvwprintw(self.win, it2, 0, "$");
                    wattroff(self.win, A_REVERSE);
                }
                else if(wcswidth(printable_line, wcslen(printable_line)) > maxx-2)
                {
                    int x = 0;
                    int cursor_y = it2;
                    int cursor_x = 0;
                    int terminal_width = 0;
                    while(x < it.length()) {
                        var c = it.substring(x, x+1).printable();

                        if(x == self.cursorX) {
                            wmove(self.win, cursor_y, cursor_x);
                            wattron(self.win, A_REVERSE);
                            wprintw(self.win, "%ls", c);
                            wattroff(self.win, A_REVERSE);
                        }
                        else {
                            wmove(self.win, cursor_y, cursor_x);
                            wprintw(self.win, "%ls", c);
                        }

                        x++;
                        cursor_x += wcswidth(c, c.length());
                        terminal_width += wcswidth(c, c.length());
                        
                        if(terminal_width >= maxx-2) {
                            cursor_x = 0;
                            terminal_width = 0;
                            cursor_y++;
                            wprintw(self.win, "~");
                        }
                    }
                    if(self.cursorX == it.length()) {
                        wattron(self.win, A_REVERSE);
                        wprintw(self.win, "$");
                        wattroff(self.win, A_REVERSE);
                    }
                    else {
                        wprintw(self.win, "$");
                    }
                }
                else {
                    int cursor_x = self.cursorX;
                    int x = 0;
                    wstring head_string = it.substring(0, cursor_x);
                    wstring printable_head_string = head_string.printable();

                    mvwprintw(self.win, it2, 0, "%ls", printable_head_string);

                    x += wcswidth(printable_head_string, printable_head_string.length());

                    wstring cursor_string = it.substring(cursor_x, cursor_x+1);
                    wstring printable_cursor_string = cursor_string.printable();

                    if(printable_cursor_string[0] == '\0') {
                        wattron(self.win, A_REVERSE);
                        mvwprintw(self.win, it2, x, " ", printable_cursor_string);
                        wattroff(self.win, A_REVERSE);
                    }
                    else {
                        wattron(self.win, A_REVERSE);
                        mvwprintw(self.win, it2, x, "%ls", printable_cursor_string);
                        wattroff(self.win, A_REVERSE);
                    }

                    x += wcswidth(printable_cursor_string, printable_cursor_string.length());

                    wstring tail_string = it.substring(cursor_x+1, -1);
                    wstring printable_tail_string = tail_string.printable();

                    mvwprintw(self.win, it2, x, "%ls", printable_tail_string);
                    
                    if(self.cursorX == it.length()) {
                        wattron(self.win, A_REVERSE);
                        wprintw(self.win, "$");
                        wattroff(self.win, A_REVERSE);
                    }
                    else {
                        wprintw(self.win, "$");
                    }
                }
            }
            else {
                if(wcswidth(printable_line, wcslen(printable_line)) > maxx-2)
                {
                    int x = 0;
                    int visible_x = 0;
                    while(visible_x < maxx-2 && x < printable_line.length()) {
                        wstring c = printable_line.substring(x, x+1);
                        mvwprintw(self.win, it2, visible_x, "%ls", c);
                        
                        visible_x += wcswidth(c, wcslen(c));
                        x++;
                    }
                    wprintw(self.win, "~");
                }
                else {
                    mvwprintw(self.win, it2, 0, "%ls$", printable_line);
                }
            }
        }
    }
}
void statusBarView(ViWin* self, Vi* nvi)
{
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    wattron(self.win, A_REVERSE);
    string search_mode = string("");
    if(nvi.searchReverse) {
        search_mode = string("?");
    }
    else {
        search_mode = string("/");
    }
    if(self.recordingMacroKey == -1) {
        mvwprintw(self.win, maxy-1, 0
            , "%s x %d line %d (y %d scroll %d) changed %d search %s%ls"
            , xbasename(self.fileName)
            , self.cursorX, self.cursorY + self.scroll + 1
            , self.cursorY, self.scroll
            , self.writed
            , search_mode
            , nvi.searchString);
    }
    else {
        mvwprintw(self.win, maxy-1, 0
            , "%s x %d line %d (y %d scroll %d) changed %d recording macro %c search %s%ls"
            , xbasename(self.fileName)
            , self.cursorX, self.cursorY + self.scroll + 1
            , self.cursorY, self.scroll
            , self.writed
            , self.recordingMacroKey
            , search_mode
            , nvi.searchString);
    }
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}
}

impl Vi version 15
{
void activateFiler(Vi* self) {
    self.filer.active = true;

    int maxy = xgetmaxy();
    int maxx = xgetmaxx();

    int filer_width = maxx / 5;

    self.filer.win = newwin(maxy, filer_width, 0, 0);
    keypad(self.filer.win, true);
    
    self.repositionWindows();
}

void deactivateFiler(Vi* self) {
    self.filer.active = false;
    delwin(self.filer.win);
    self.repositionWindows();

    self.filer.win = null;
}
}

impl ViFiler
{
bool cd(ViFiler* self, char* cwd) {
    self.path = xrealpath(cwd);

    self.files = new list<string>.initialize();

    DIR* dir = opendir(cwd);

    if(dir == null) {
        return false;
    }

    while(true) {
        struct dirent* entry = readdir(dir);

        if(entry == null) {
            break;
        }
        
        string path = string(cwd) + string("/") + string(entry->d_name);
        
        stat stat_;
        stat(path, &stat_);
        
        if(S_ISDIR(stat_.st_mode)) {
            self.files.push_back(string(entry->d_name) + string("/"));
        }
        else {
            self.files.push_back(string(entry->d_name));
        }
    }

    closedir(dir);

    self.files = self.files.sort_block {
        if(strcmp(it, ".") == 0) {
            return -1;
        }
        if(strcmp(it2, ".") == 0) {
            return 1;
        }
        if(strcmp(it, "..") == 0) {
            return -1;
        }
        if(strcmp(it2, "..") == 0) {
            return 1;
        }
        
        string left_path = string(cwd) + string("/") + string(it);
        string right_path = string(cwd) + string("/") + string(it2);
        
        stat left_stat;
        stat(left_path, &left_stat);
        stat right_stat;
        stat(right_path, &right_stat);
            
        if(S_ISDIR(left_stat.st_mode) 
                && S_ISDIR(right_stat.st_mode)) 
        {
            return strcmp(it, it2);
        }
        else if(S_ISDIR(left_stat.st_mode) && !S_ISDIR(right_stat.st_mode)) {
            return -1;
        }
        else if(!S_ISDIR(left_stat.st_mode) && S_ISDIR(right_stat.st_mode)) {
            return 1;
        }

        char* p = it + strlen(it);

        while(p >= it) {
            if(*p == '.') {
                break;
            }
            else {
                p--;
            }
        }

        int name_len = p - it;

        char* p2 = it2 + strlen(it2);

        while(p2 >= it2) {
            if(*p2 == '.') {
                break;
            }
            else {
                p2--;
            }
        }

        int name_len2 = p2 - it2;

        if(name_len == 0 && name_len2 == 0) {
            return strcmp(it, it2);
        }
        if(name_len == 0) {
            return -1;
        }
        if(name_len2 == 0) {
            return 1;
        }

        string ext_name = it.substring(name_len+1, -1);
        string ext_name2 = it2.substring(name_len2+1, -1);
        
        if(strcmp(ext_name, ext_name2) != 0) {
            return strcmp(ext_name, ext_name2);
        }

        return strcmp(it, it2);
    }
    
    self.cursor = 0;
    self.scroll = 0;
    
    chdir(self.path);
    
    return true;
}

initialize() {
    int maxy = xgetmaxy();
    int maxx = xgetmaxx();

    self.active = false;

    int filer_width = maxx / 5;

    self.scroll = 0;
    self.cursor = 0;
    self.width = filer_width;

    char cwd[PATH_MAX];
    getcwd(cwd, PATH_MAX);
    
    self.searchString = string("");

    self.cd(cwd);
}


finalize() {
    delwin(self.win);
}

void search(ViFiler* self, Vi* nvi, int start_point) {
    int maxy = xgetmaxy();
    
    self.files.each {
        if(it.index(self.searchString, -1) != -1
            && it2 > start_point)
        {
            self.scroll = 0;
            self.cursor = it2;
            
            if(self.cursor >= maxy-1) {
                self.scroll = self.cursor - (maxy-1);
                self.cursor = maxy-1;
            };
            
            *it3 = true;
            return;
        }
    }
}
void searchReverse(ViFiler* self, Vi* nvi) {
    int maxy = xgetmaxy();
    
    self.files.sublist(0, self.scroll+self.cursor)
        .reverse().each 
    {
        if(it.index(self.searchString, -1) != -1)
        {
            self.cursor = self.scroll + self.cursor -  it2 -1;
            self.scroll = 0;
            
            if(self.cursor >= maxy-1) {
                self.scroll = self.cursor - (maxy-1);
                self.cursor = maxy-1;
            };
            
            *it3 = true;
            return;
        }
    }
}

void view(ViFiler* self, Vi* nvi)
{
    //werase(self.win);
    
    int maxx = xgetmaxx();
    
    int filer_width = maxx / 5;

    int maxy = xgetmaxy();
    self.files.sublist(self.scroll, self.scroll+maxy+1).each {
        if(it2 == self.cursor && self.active) {
            wattron(self.win, A_REVERSE);
            mvwprintw(self.win, it2, 0, "%s", it.substring(0, filer_width-2));
            wattroff(self.win, A_REVERSE);
        }
        else {
            mvwprintw(self.win, it2, 0, "%s", it.substring(0, filer_width-2));
        }
    }
    
    for(int y=0; y<maxy; y++) {
        wattron(self.win, A_REVERSE);
        mvwprintw(self.win, y, filer_width-1, "|");
        wattroff(self.win, A_REVERSE);
    }
    //wrefresh(self.win);
}

void find(ViFiler* self, Vi* nvi) {
    var command = nvi.commandBox(string(""), null);
    
    if(command != null) {
        FILE* fp = popen(command, "r");

        var command_output = new buffer.initialize(); 
        
        while(!feof(fp)) {
            char buf[BUFSIZ];

            fgets(buf, BUFSIZ, fp);

            command_output.append_str(buf);
        }

        pclose(fp);

        var selected_files = command_output.to_string()
                               .split(regex!(/\n/));

        var new_files = new list<string>.initialize();
        self.cd(self.path);
        
        selected_files.each {
            if(access(it, R_OK) == 0) {
                new_files.push_back(clone it);
            }
        }
        
/*
        self.files.each {
            if(selected_files.find(it, -1) != -1) {
                new_files.push_back(clone it);
            }
        }
*/

        self.files = new_files;
        
        self.scroll = 0;
        self.cursor = 0;
    }
}

void input(ViFiler* self, Vi* nvi) {
    var key = wgetch(self.win);

    var file_name = self.files.item(self.scroll+self.cursor, null);
    
    int maxy = xgetmaxy();

    switch(key) {
        case 'j': 
        case KEY_DOWN:
            self.cursor ++;

            if(self.cursor >= maxy) {
                self.scroll++;
                self.cursor = maxy-1;

                if(self.scroll >= self.files.length()) {
                    self.scroll = self.files.length()-1;
                }
            }

            if(self.cursor >= self.files.length()-self.scroll-1) {
                self.cursor = self.files.length()-self.scroll-1;
            }
            break;

        case 'k': 
        case KEY_UP:
            self.cursor--; 

            if(self.cursor < 0) {
                self.scroll--;
                self.cursor = 0;

                if(self.scroll < 0) {
                    self.scroll = 0;
                }
            }
            break;
            
        case 'D'-'A'+1: 
            self.cursor += 10;

            if(self.cursor >= maxy) {
                int scroll_num = self.cursor - maxy;
                self.scroll += scroll_num;
                self.cursor -= scroll_num;
                self.cursor --;

                if(self.scroll >= self.files.length()) {
                    self.scroll = self.files.length()-1;
                }
            }

            if(self.cursor >= self.files.length()-self.scroll-1) {
                self.cursor = self.files.length()-self.scroll-1;
            }
            break;

        case 'U'-'A'+1: 
            self.cursor-=10; 

            if(self.cursor < 0) {
                int scroll_num = -self.cursor;
                self.scroll-= scroll_num;
                self.cursor = 0;

                if(self.scroll < 0) {
                    self.scroll = 0;
                }
            }
            break;

        case 'x': {
            var cursor_file = self.files.item(self.scroll+self.cursor, null);
                    
            var command = nvi.commandBox(
                    xsprintf(" ./%s", cursor_file), null);
            
            if(command != null) {
                endwin();
                
                (void)system(command);
                
                fgetc(stdin);

                nvi.init_curses();
                self.cd(".");
            }
            }
            break;
            
        case '\n': {
            var path = xsprintf("%s/%s", self.path, file_name);
            
            stat stat_;
            
            stat(path, &stat_); 
            
            if(S_ISDIR(stat_.st_mode)) {
                self.cd(path);
            }
            else {
                nvi.activeWin.writeFile();
                nvi.openFile(path, -1);
                nvi.deactivateFiler();
            }
            }
            break;
            
        case 'G': {
            int maxy = xgetmaxy();
            
            self.cursor = self.files.length() - 1;
            
            if(self.cursor >= maxy-1) {
                self.scroll = self.cursor - maxy + 1;
                self.cursor = maxy-1;
            }
            }
            break;
            
        case 'g': {
            var key = getch();
            if(key == 'g') {
                self.scroll = 0;
                self.cursor = 0;
            }
            }
            break;
            
        case 8:
        case 127:
        case KEY_BACKSPACE: {
            var path = xsprintf("%s/..", self.path);

            var cwd_before = xbasename(self.path) + string("/");
                    
            self.cd(path);

            self.files.each {
                if(strcmp(it, cwd_before) == 0) {
                    self.scroll = it2 - 10;
                    self.cursor = 10;

                    if(self.scroll < 0) {
                        self.cursor += self.scroll;
                        self.scroll = 0;
                    }
                }
            }
            }
            break; 
            
        case ':': {
            endwin();
            
            (void)system("bash");

            nvi.init_curses();
            }
            break; 

        case 'C'-'A'+1:
        case 'F'-'A'+1:
        case 27:
            nvi.deactivateFiler();
            break;

        case '*':
            self.find(nvi);
            break;
            
        case 'L'-'A'+1:
            self.cd(".");
            break;

        case '/':
        case 'f': {
            self.searchString = nvi.inputBox(string(""));
           
            self.search(nvi, 0);
            }
            break;

        case 'n':
            self.search(nvi, self.cursor + self.scroll);
            break;

        case 'N':
            self.searchReverse(nvi);
            break;
        
        case 'o':
            nvi.openNewFile(file_name);
            nvi.deactivateFiler();
            break;
        
        case 'q':
            nvi.exitFromApp();
            break;
    }
}
}

void xclear(WINDOW* win)
{
//    wclear(win);
werase(win);
/*
int maxx = getmaxx(win);
int maxy = getmaxy(win);

for(int i=0; i< maxy; i++) {
    for(int j=0; j<maxx-1; j++) {
        mvwprintw(win, i, j, " ");
    }
}

wrefresh(win);
*/
}

Vi* gVi;

void sig_winch(int sig_num)
{
    gVi.repositionWindows();
    if(gVi.filer.active) {
        gVi.repositionFiler();
    }
    
    gVi.clearView();
    gVi.view();
    
    gVi.extraView();
    
    if(gVi.extraWin) {
        delwin(gVi.extraWin);
        
        int maxx = xgetmaxx();
        var win = newwin(3,maxx-1, 0, 0);
        gVi.extraWin = win;
    }
}

impl Vi version 15
{
initialize() {
    inherit(self);

    self.filer = new ViFiler.initialize();

    gVi = self;
    signal(SIGWINCH, sig_winch);
    
    self.events.replace('F'-'A'+1, lambda(Vi* self, int key) 
    {
        self.activateFiler();
    });
}

void repositionWindows(Vi* self) {
    int maxy = xgetmaxy();
    int maxx = xgetmaxx();

    int filer_width;
    if(self.filer.active) {
        filer_width = maxx / 5;
    }
    else {
        filer_width = 0;
    }
    
    int height = maxy / self.wins.length();

    /// determine the position ///
    self.wins.each {
        int new_height = height;
        int new_width = maxx - filer_width;

        int new_y = height * it2;
        int new_x = filer_width;
        
        delwin(it.win);
        var win = newwin(new_height, new_width, new_y, new_x);
        keypad(win, true);
        it.win = win;

        it.y = new_y;
        it.x = new_x;
        it.width = new_width;
        it.height = new_height;

        it.centeringCursor();
    }
}

void extraView(Vi* self) {
    if(self.extraWin) {
        var win = self.extraWin;

        var line = clone self.extraLine;
        var cursor = self.extraCursor;
        
        werase(win);
        
        box(win, '|', '-');
        
        mvwprintw(win, 1, 1, line.substring(0,cursor));
        wattron(win, A_REVERSE);
        mvwprintw(win, 1, cursor+1, line.substring(cursor, cursor+1));
        wattroff(win, A_REVERSE);
        mvwprintw(win, 1, cursor+2, line.substring(cursor+1, -1));
        
        wrefresh(win);
    }
}

string commandBox(Vi* self, string command, string default_value) {
    int maxx = xgetmaxx();
    
    var win = newwin(3,maxx-1, 0, 0);
    keypad(win, true);
    
    int end = false;
    
    int cursor = 0;
    
    while(!end) {
        self.extraWin = win;
        self.extraLine = clone command;
        self.extraCursor = cursor;
        self.extraView();
        
        int maxx = xgetmaxx();
        
        var key = wgetch(win);
        
        switch(key) {
            case '\n':
                end = true;
                break;
                
            case 'B'-'A'+1:
            case KEY_LEFT:
                cursor--;
                if(cursor < 0) {
                    cursor = 0;
                }
                break;
                
            case 8:
            case 127:
            case KEY_BACKSPACE:
                command.delete(cursor);
                cursor--;
                if(cursor < 0) {
                    cursor = 0;
                }
                break;
                
            case 'F'-'A'+1:
            case KEY_RIGHT:
                cursor++;
                if(cursor >= command.length()) {
                    cursor = command.length();
                }
                if(cursor >= maxx-1) {
                    cursor = maxx-1;
                }
                break;
            
            case 'A'-'A'+1:
                cursor = 0;
                break;    
                
            case 'E'-'A'+1:
                cursor = command.length() - 1;
                
                if(cursor < 0) {
                    cursor = 0;
                }
                break;
                
            case 'C'-'A'+1:
                delwin(win);
                self.extraWin = NULL;
                return default_value;
                
            default:
                command = xsprintf("%s%s%s"
                        , command.substring(0, cursor)
                        , key.to_string().printable()
                        , command.substring(cursor, -1));
                cursor++;
                break;
        }
    }
    
    delwin(win);
    
    self.extraWin = NULL;
    return command;
}

string selector(ViWin* self, list<string>* lines) {
    bool end_of_select = false;
    bool canceled = false;

    int maxx = getmaxx(self.win);
    int maxy = getmaxy(self.win);

    int scrolltop = 0;
    int cursor = 0;

    while(!end_of_select) {
        clear();
        int maxy2 = lines.length() - scrolltop;

        ### view ###
        for(int y=0; y<maxy && y < maxy2; y++) {
            var it = lines.item(scrolltop+y, null);

            var line = it.substring(0, maxx-1);

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

        ### input ###
        var key = getch();

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
                cursor+=10;
                break;
           
            case (('U'-'A')+1):
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
        
        ### modification ###
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

string inputBox(Vi* self, string default_value) {
    int maxx = xgetmaxx();
    
    var win = newwin(3,maxx-1, 0, 0);
    keypad(win, true);
    
    self.extraWin = win;
    
    var command = string("");
    
    int end = false;
    int cursor = 0;
    
    while(!end) {
        self.extraWin = win;
        self.extraLine = clone command;
        self.extraCursor = cursor;
        self.extraView();
        
        var key = wgetch(win);
        
        switch(key) {
            case '\n':
                end = true;
                break;
                
            case 'B'-'A'+1:
            case KEY_LEFT:
                cursor--;
                if(cursor < 0) {
                    cursor = 0;
                }
                break;
                
            case 8:
            case 127:
            case KEY_BACKSPACE:
                command.delete(cursor);
                cursor--;
                if(cursor < 0) {
                    cursor = 0;
                }
                break;
                
            case 'F'-'A'+1:
            case KEY_RIGHT:
                cursor++;
                if(cursor >= command.length()) {
                    cursor = command.length();
                }
                if(cursor >= maxx-1) {
                    cursor = maxx-1;
                }
                break;
                
            case 'C'-'A'+1:
                delwin(win);
                self.extraWin = NULL;
                return default_value;
                
            default:
                command = xsprintf("%s%s%s"
                        , command.substring(0, cursor)
                        , key.to_string().printable()
                        , command.substring(cursor, -1));
                cursor++;
                break;
        }
    }
    
    delwin(win);
    
    self.extraWin = NULL;
    
    return command;
}

void view(Vi* self) {

    if(self.filer.active) {
        xclear(self.filer.win);
    }

    self.wins.each {
        xclear(it.win);
    }
    
    if(self.filer.active) {
        xclear(self.filer.win);
    
        self.filer.view(self);
    }

    self.wins.each {
        it.view(self);
    }

    if(self.filer.active) {
        wrefresh(self.filer.win);
    }

    self.wins.each {
        wrefresh(it.win);
    }
}

void clearView(Vi* self)
{
    clearok(stdscr, true);
    clear();
    clearok(stdscr, false);

    if(self.filer.active) {
        clearok(self.filer.win, true);
        wclear(self.filer.win);
        clearok(self.filer.win, false);

        self.filer.view(self);
        wrefresh(self.filer.win);
    }

    self.wins.each {
        clearok(it.win, true);
        wclear(it.win);
        clearok(it.win, false);
        it.view(self);
        wrefresh(it.win);
    }

    refresh();
}

int main_loop(Vi* self) {
    while(!self.appEnd) {
        self.view();

        if(self.mode != kInsertMode)
        {
            self.activeWin.clearInputedKey();
        }

        if(self.filer.active) {
            self.filer.input(self);
        }
        else {
            self.activeWin.input(self);
        }
    }

    0
}

void repositionFiler(Vi* self) {
    int maxy = xgetmaxy();
    int maxx = xgetmaxx();

    delwin(self.filer.win);

    int width = maxx / 5;
    var win = newwin(maxy, width, 0, 0);
    keypad(win, true);

    self.filer.win = win;
}
}
