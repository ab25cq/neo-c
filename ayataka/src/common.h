#include <ncurses.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "config.h"
#include "../clover3/src/common.h"

struct Filer;

struct Ayataka 
{
    Filer*% filer;
    bool app_end;
    vector<sCLType*%>*% types;
};

impl Ayataka 
{
    initialize();
    finalize();

    bool main_loop(Ayataka* self);
    void exit(Ayataka* self);
}

struct Filer 
{
    Ayataka* ayataka;
    string path;
    list<string>*% files;
    int cursor;
    int page;
    int cols;
};

impl Filer 
{
    initialize(char* path, Ayataka* ayataka);
    finalize();
    bool read_dir(Filer* self);
    void view(Filer* self);
    void input(Filer* self);
    string cursor_path(Filer* self);
    string cursor_file(Filer* self);
    bool chage_directory(Filer* self, char* path, char* cursor_file);
    void fix_cursor(Filer* self);
};

