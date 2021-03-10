#include "common.h"
#include <limits.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

impl ViWin version 6
{
initialize(int y, int x, int width, int height, Vi* vi) {
    inherit(self, y, x, width, height, vi);

    self.fileName = string("a.txt");
    //self.fileName = "a.txt";
}
void statusBarView(ViWin* self, Vi* nvi)
{
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "x %d y %d scroll %d file %s writed %d", self.cursorX, self.cursorY, self.scroll, self.fileName, (self.writed ? 1:0));
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

void saveCursorPosition(ViWin* self, char* file_name) {
    char* home = getenv("HOME");
    
    if(home == null) {
        return;
    }
    
    char file_name2[PATH_MAX];
    
    snprintf(file_name2, PATH_MAX, "%s/.wi", home);
    
    (void)mkdir(file_name2, 0755);
    
    var bname = xbasename(file_name);  

    snprintf(file_name2, PATH_MAX, "%s/.wi/%s.pos"
                , home, bname);
    
    FILE* f = fopen(file_name2, "w");

    if(f == null) {
        return;
    }
    
    fprintf(f, "%d %d\n", self.scroll, self.cursorY);
    
    fclose(f);
}
void readCursorPosition(ViWin* self, char* file_name) {
    char* home = getenv("HOME");
    
    if(home == null) {
        self.scroll = 0;
        self.cursorY = 0;
        return;
    }
    
    char file_name2[PATH_MAX];
    
    var bname = xbasename(file_name); 
    snprintf(file_name2, PATH_MAX, "%s/.wi/%s.pos"
                , home, bname);
    
    FILE* f = fopen(file_name2, "r");

    if(f == null) {
        self.cursorY = 0;
        return;
    }
    
    char line[4096];

    int scroll = 0;
    int cursor_y = 0;
    fscanf(f, "%d %d", &scroll, &cursor_y);
    
    fclose(f);
    
    self.scroll = scroll;
    self.cursorY = cursor_y;
    
    if(self.scroll >= self.texts.length()) {
        self.scroll = self.texts.length() - 1;
        self.cursorY = 0;
    }
    
    self.modifyUnderCursorYValue();
    self.modifyOverCursorYValue();
}

void openFile(ViWin* self, char* file_name, int line_num)
{
    FILE* f = fopen(file_name, "r");
    
    if(f == null) {
        char cmd[PATH_MAX+128];
        
        snprintf(cmd, PATH_MAX+128, "echo \"\" > %s", file_name);

        self.texts.push_back(wstring(""))
        
        int rc = system(cmd);
        
        if(rc != 0) {
            endwin();
            fprintf(stderr, "can't open file %s\n", file_name);
            exit(2);
        }

        self.fileName = string(file_name);
        //self.fileName = "a.txt";
        
        self.cursorY = 0;
        self.cursorX = 0;
        self.scroll = 0;
    }
    else {
        char line[4096];

        while(fgets(line, 4096, f) != NULL)
        {
            line[strlen(line)-1] = '\0';
            self.texts.push_back(wstring(line))
        }

        fclose(f);

        if(self.texts.length() == 0) {
            self.texts.push_back(wstring(""))
        }

        self.fileName = string(file_name);
        //self.fileName = "a.txt";

        if(line_num == -1) {
            self.readCursorPosition(file_name);
        }
        else {
            self.cursorY = line_num;
            
            self.modifyUnderCursorYValue();
            self.modifyOverCursorYValue();
            self.centeringCursor();
        }
    }
}

void writeFile(ViWin* self) {
    /// back up /// 
    char* home = getenv("HOME");
    
    if(home == null) {
        return;
    }
    
    char path[PATH_MAX];
    
    snprintf(path, PATH_MAX, "%s/.wi", home);
    
    (void)mkdir(path, 0755);
    
    snprintf(path, PATH_MAX, "%s/.wi/backup", home);
    
    (void)mkdir(path, 0755);
    
    char cmd[BUFSIZ];
    
    snprintf(cmd, BUFSIZ, "cp %s %s/.wi/backup", self.fileName, home);
    
    (void)system(cmd);
    
    /// write ///
    FILE* f = fopen(self.fileName, "w");

    if(f != null) {
        self.texts.each {
            fprintf(f, "%s\n", it.to_string(""));
        }

        fclose(f);

        self.writed = false;
        self.saveCursorPosition(self.fileName);
        self.saveDotToFile(self.vi);
    }
}
void writedFlagOn(ViWin* self) {
    self.writed = true;
}
}
