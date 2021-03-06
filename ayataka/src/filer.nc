#include "common.h"

int xgetmaxx(){
#ifdef __DARWIN__ 
    return getmaxx(stdscr);
#elif __PPC64LE__
    return getmaxx(stdscr);
#else
    var ws = new winsize;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, ws);
    
    int result = ws.ws_col;
/*
Raspberry PI return -1
*/
    if(result == -1) {
        return getmaxx(stdscr);
    }
    else {
        return result;
    }
#endif
}

int xgetmaxy(){
#ifdef __DARWIN__
    return getmaxy(stdscr);
#elif __PPC64LE__
    return getmaxy(stdscr);
#else
    var ws = new winsize;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, ws);
    
    int result = ws.ws_row;
/*
Raspberry PI return -1
*/
    if(result == -1) {
        return getmaxy(stdscr);
    }
    else {
        return result;
    }
#endif
}

impl Ayataka 
{
initialize()
{
    initscr();
    keypad(stdscr, true);
    raw();
    noecho();

    char* cwd = getenv("PWD");

    if(cwd == null) {
        self.exit();
        fprintf(stderr, "PWD is null. exited\n");
        exit(2);
    }
    self.filer = new Filer.initialize(cwd, self);
    (void)self.filer.read_dir();
    self.types = new vector<sCLType*%>.initialize();
}

finalize()
{
    self.exit();
}

void exit(Ayataka* self)
{
    endwin();
}

bool main_loop(Ayataka* self)
{
    while(!self.app_end) {
        self.filer.view();

        self.filer.input();
    }
    return true;
}

}

impl Filer 
{
initialize(char* path, Ayataka* ayataka)
{
    self.path = string(path);
    self.ayataka = ayataka;
    self.files = new list<string>.initialize();
    self.cursor = 0;
    self.page = 0;
    self.cols = 3;
}

finalize()
{
}

bool chage_directory(Filer* self, char* path, char* cursor_file)
{
    var absolute_path = xrealpath(path);

    self.path = absolute_path;
    (void)self.read_dir();

    chdir(self.path);
    setenv("PWD", self.path, 1);

    if(cursor_file) {
        self.files.each {
            if(strcmp(it, cursor_file) == 0) {
                self.cursor = it2;
                self.fix_cursor();
                *it3 = true;
                return;
            }
        }
    }
    else {
        self.cursor = 0;
        self.page = 0;
    }
}

bool read_dir(Filer* self)
{
    self.files.reset();

    DIR* dir = opendir(self.path);

    if(dir == null) {
        return false;
    }
    
    struct dirent* entry;
    while(entry = readdir(dir)) {
        self.files.push_back(string(entry->d_name));
    }

    closedir(dir);

    self.files = self.files.sort();

    return true;
}

void view(Filer* self)
{
    int maxx = xgetmaxx();
    int maxy = xgetmaxy()-2;

    erase();

    int files_in_one_page = maxy * self.cols;

    int head = self.page * files_in_one_page;
    int tail = (self.page+1) * files_in_one_page;

    self.files.sublist(head, tail).each {
        string path = self.path + string("/") + it;

        struct stat stat_;
        (void)stat(path, &stat_);

        bool is_dir = S_ISDIR(stat_.st_mode);

        int index = it2;
        int cols = maxx/self.cols;
        int x = (index / maxy) * cols;
        int y = index % maxy;
        if(it2+head == self.cursor) {
            attron(A_REVERSE);
            if(is_dir) {
                mvprintw(y, x, "%s/", it.substring(0, cols-1));
            }
            else {
                mvprintw(y, x, "%s", it.substring(0, cols));
            }
            attroff(A_REVERSE);
        }
        else {
            if(is_dir) {
                mvprintw(y, x, "%s/", it.substring(0, cols-1));
            }
            else {
                mvprintw(y, x, "%s", it.substring(0, cols));
            }
        }
    }

    attron(A_REVERSE);
    mvprintw(maxy, 0, "page %d files %d head %d tail %d", self.page, self.files.length(), head, tail);
    attroff(A_REVERSE);

    int title_len = 20;
    int x = 0;
    gJobs.each {
        if(x + title_len < maxx) {
            sCLJob* job = CLJOB(it);
            mvprintw(maxy+1, x, "%d %s", it2, string(job.mTitle).substring(0, title_len-3));
            x += title_len;
        }
    }

    refresh();
}

void fix_cursor(Filer* self)
{
    int maxx = xgetmaxx();
    int maxy = xgetmaxy()-2;

    if(self.cursor >= self.files.length()) {
        self.cursor = self.files.length() - 1;
    }
    if(self.cursor < 0) {
        self.cursor = 0;
    }

    self.page = self.cursor / (self.cols*maxy);
}

string cursor_path(Filer* self)
{
    char* file_name = self.files.item(self.cursor, null);
    return xsprintf("%s/%s", self.path, file_name);
}

string cursor_file(Filer* self)
{
    return string(self.files.item(self.cursor, null));
}

void input(Filer* self)
{
    int maxx = xgetmaxx();
    int maxy = xgetmaxy()-2;

    var key = getch();

    if(key >= '0' && key <= '9') {
        endwin();
        forground_job(key-'0');
        initscr();
        keypad(stdscr, true);
        raw();
        noecho();
    }
    else {
        switch(key) {
            case 'q':
                self.ayataka.app_end = true;
                break;

            case KEY_ENTER:
            case '\n': {
                string path = self.path + string("/") + self.cursor_file();

                struct stat stat_;
                (void)stat(path, &stat_);

                bool is_dir = S_ISDIR(stat_.st_mode);

                if(is_dir) {
                    self.chage_directory(path, null);
                }
                else {
                    endwin();
                    CLVALUE result;
                    shell_commandline(xsprintf(" %s", self.cursor_file()), 0, self.ayataka.types, &result);
                    self.read_dir();
                    puts("HIT ANY KEY");
                    getchar();
                    initscr();
                    keypad(stdscr, true);
                    raw();
                    noecho();
                }
                }
                break;
                
            case '~': {
                string path = string(getenv("HOME"));

                self.chage_directory(path, null);
                }
                break;

            case KEY_BACKSPACE:
            case 8:
            case 127: {
                string current_directory_name = xbasename(self.path);
                string path = self.path + string("/..");
                self.chage_directory(path, current_directory_name);
                }
                break;

            case 'd': {
                endwin();
                CLVALUE result;
                shell_commandline(xsprintf("rm -rf %s", self.cursor_file()), -1, self.ayataka.types, &result);
                self.read_dir();
                puts("HIT ANY KEY");
                getchar();
                initscr();
                keypad(stdscr, true);
                raw();
                noecho();
                }
                break;

            case 'c': {
                endwin();
                CLVALUE result;
                shell_commandline(xsprintf("cp -r %s ", self.cursor_file()), -1, self.ayataka.types, &result);
                self.read_dir();
                puts("HIT ANY KEY");
                getchar();
                initscr();
                keypad(stdscr, true);
                raw();
                noecho();
                }
                break;

            case 'm': {
                endwin();
                CLVALUE result;
                shell_commandline(xsprintf("mv %s ", self.cursor_file()), -1, self.ayataka.types, &result);
                self.read_dir();
                puts("HIT ANY KEY");
                getchar();
                initscr();
                keypad(stdscr, true);
                raw();
                noecho();
                }
                break;

            case 'n': {
                endwin();
                CLVALUE result;
                shell_commandline(xsprintf("touch "), -1, self.ayataka.types, &result);
                self.read_dir();
                initscr();
                keypad(stdscr, true);
                raw();
                noecho();
                }
                break;

            case 'x': {
                endwin();
                CLVALUE result;
                shell_commandline(xsprintf(" ./%s", self.cursor_file()), 0, self.ayataka.types, &result);
                self.read_dir();
                puts("HIT ANY KEY");
                getchar();
                initscr();
                keypad(stdscr, true);
                raw();
                noecho();
                }
                break;

            case 'e': {
                endwin();
                CLVALUE result;
                shell_run_command(xsprintf("wi %s", self.cursor_file()), self.ayataka.types, &result);
                initscr();
                keypad(stdscr, true);
                raw();
                noecho();
                }
                break;

            case KEY_LEFT:
            case 'h':
                if(self.cursor >= maxy) {
                    self.cursor-=maxy;
                }
                break;

            case KEY_RIGHT:
            case 'l':
                if(self.cursor + maxy < self.files.length()) {
                    self.cursor+=maxy;
                }
                break;

            case KEY_DOWN:
            case 'j':
                self.cursor++;
                break;

            case KEY_UP:
            case 'k':
                self.cursor--;

                break;

            case 'L'-'A'+1:
                clear();
                self.view();
                refresh();
                break;

            case ':': {
                endwin();
                CLVALUE result;
                shell_commandline("", -1, self.ayataka.types, &result);
                self.read_dir();
                puts("HIT ANY KEY");
                getchar();
                initscr();
                keypad(stdscr, true);
                raw();
                noecho();

                }
                break;
        }
    }

    self.fix_cursor();
}

};
