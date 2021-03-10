#include "common.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>

impl Vi version 6
{

void openFile(Vi* self, char* file_name, int line_num) 
{
    if(file_name == null) {
        var file_name = self.readLastOpenFile();
        
        if(access(file_name, R_OK) == 0) {
            int active_pos = self.wins.find(self.activeWin, -1);
            self.wins.delete(active_pos);
    
            var maxx = xgetmaxx();
            var maxy = xgetmaxy();
            
            var win = new ViWin.initialize(0,0, maxx-1, maxy, self);
    
            self.activeWin = win;
            self.wins.push_back(win);
            
            self.activeWin.openFile(file_name, -1);
            
            self.repositionWindows();
        }
    }
    else {
        if(access(file_name, R_OK) == 0) {
            int active_pos = self.wins.find(self.activeWin, -1);
            self.wins.delete(active_pos);
    
            var maxx = xgetmaxx();
            var maxy = xgetmaxy();
            
            var win = new ViWin.initialize(0,0, maxx-1, maxy, self);
    
            self.activeWin = win;
            self.wins.push_back(win);
            
            self.activeWin.openFile(file_name, line_num);
            self.saveLastOpenFile(file_name);
            
            self.repositionWindows();
        }
        else {
            char cmd[PATH_MAX+128];
            
            snprintf(cmd, PATH_MAX+128, "echo \"\" > %s", file_name);

            int rc = system(cmd);
            
            if(rc != 0) {
                endwin();
                fprintf(stderr, "can't open file %s\n", file_name);
                exit(2);
            }

            self.activeWin.fileName = string(file_name);
            //self.fileName = "a.txt";
            
            self.activeWin.cursorY = 0;
            self.activeWin.cursorX = 0;
            self.activeWin.scroll = 0;
        }
    }
}
}
