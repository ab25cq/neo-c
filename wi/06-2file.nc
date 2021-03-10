#include "common.h"
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>

impl Vi version 6
{

void openNewFile(Vi* self, char* file_name) {
    int maxy = xgetmaxy();
    int maxx = xgetmaxx();

    int height = maxy / (self.wins.length() + 1);

    var win = new ViWin.initialize(0,0, maxx-1, height, self);
    
    win.openFile(file_name, -1);

    self.activeWin = win;

    self.wins.push_back(win);

    self.repositionWindows();

    self.wins.each {
        if(!it.equals(self.activeWin)) {
            self.toggleWin = it2;
        }
    }
}

void closeActiveWin(Vi* self) {
    int active_pos = self.wins.find(self.activeWin, -1);
    
    self.wins.delete(active_pos);

    self.repositionWindows();

    self.activeWin = self.wins.item(0, null);
}

void exitFromApp(Vi* self) {
    self.wins.each {
        it.writeFile();
    }
    self.appEnd = true;
}

void toggleWin(Vi* self) {
    if(self.toggleWin >= 0 && self.toggleWin < self.wins.length()) {
        int toggle_win = self.wins.find(self.activeWin, -1);
        self.activeWin = self.wins.item(self.toggleWin, null);
        self.toggleWin = toggle_win;
    }
}
void nextWin(Vi* self) {
    int next_win = self.wins.find(self.activeWin, -1) + 1;
    if(next_win >= 0 && next_win < self.wins.length()) 
    {
        int toggle_win = self.wins.find(self.activeWin, -1);
        self.activeWin = self.wins.item(next_win, null);
        self.toggleWin = toggle_win;
    }
}

void prevWin(Vi* self) {
    int prev_win = self.wins.find(self.activeWin, -1) - 1;
    if(self.toggleWin >= 0 && self.toggleWin < self.wins.length()) {
        int toggle_win = self.wins.find(self.activeWin, -1);
        self.activeWin = self.wins.item(prev_win, null);
        self.toggleWin = toggle_win;
    }
}

initialize() {
    inherit(self);

    self.events.replace('W'-'A'+1, lambda(Vi* self, int key) 
    {
        var key2 = self.activeWin.getKey(false);

        switch(key2) {
            case 'W'-'A'+1:
            case 'w':
                self.toggleWin();
                break;
            case 'j':
                self.nextWin();
                break;
            case 'k':
                self.prevWin();
                break;
        }
    });
}
void repositionWindows(Vi* self) {
    int maxy = xgetmaxy();
    int maxx = xgetmaxx();

    int height = maxy / self.wins.length();

    /// determine the position ///
    self.wins.each {
        it.height = height;
        it.y = height * it2;

        delwin(it.win);
        var win = newwin(it.height, it.width, it.y, it.x);
        keypad(win, true);
        it.win = win;

        it.centeringCursor();
        it.cursorX = 0;
    }
}

void saveLastOpenFile(Vi* self, char* file_name) {
    char* home = getenv("HOME");
    
    if(home == null) {
        return;
    }
    
    char file_name2[PATH_MAX];
    
    snprintf(file_name2, PATH_MAX, "%s/.wi", home);
    
    (void)mkdir(file_name2, 0755);
    
    snprintf(file_name2, PATH_MAX, "%s/.wi/last_open_file", home, file_name);
    
    FILE* f = fopen(file_name2, "w");

    if(f == null) {
        return;
    }
    
    fprintf(f, "%s\n", file_name);
    
    fclose(f);
}

string readLastOpenFile(Vi* self) {
    char* home = getenv("HOME");
    
    if(home == null) {
        return null;
    }
    
    char file_name2[PATH_MAX];
    
    snprintf(file_name2, PATH_MAX, "%s/.wi/last_open_file", home);
    
    FILE* f = fopen(file_name2, "r");

    if(f == null) {
        return null;
    }

    char file_name[PATH_MAX];

    if(fgets(file_name, PATH_MAX, f) == NULL) {
        fclose(f);

        return string("");
    }
    
    file_name[strlen(file_name)-1] = '\0';
    
    fclose(f);

    return string(file_name);
}
}
