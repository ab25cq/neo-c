#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <limits.h>

#include "common.h"

impl ViWin version 7
{
bool saveYankToFile(ViWin* self, Vi* nvi)
{
    char* home = getenv("HOME");
    if(home == null) {
        return false;
    }

    string path = xsprintf("%s/.wi/yank.txt", home);
    FILE* f = fopen(path, "w");

    if(f == null) {
        return false;
    }

    nvi.yank.each {
        fputs(it.to_string(""), f);
        fputs("\n", f);
    }

    fclose(f);

    return true;
}

bool loadYankFromFile(ViWin* self, Vi* nvi)
{
    char* home = getenv("HOME");
    if(home == null) {
        return false;
    }

    string path = xsprintf("%s/.wi/yank.txt", home);
    FILE* f = fopen(path, "r");

    if(f == null) {
        return false;
    }

    char line[4096];

    nvi.yank.reset();

    while(fgets(line, 4096, f) != NULL)
    {
        char c = line[strlen(line)-1];
        line[strlen(line)-1] = '\0';
        nvi.yank.push_back(wstring(line))
    }

    fclose(f);

    return true;
}

void pasteAfterCursor(ViWin* self, Vi* nvi) {
    self.loadYankFromFile(nvi);
    if(nvi.yankKind == kYankKindLine) {
        self.pushUndo();

        nvi.yank.each {
            self.texts.insert(
                self.scroll+self.cursorY+it2+1, 
                clone it);
        }
    }
    else {
        self.pushUndo();

        var line = self.texts.item(self.scroll+self.cursorY, null);
        
        if(nvi.yank.length() == 1) {
            var yank_first_line = nvi.yank.item(0, null);

            var new_line = line.substring(0, self.cursorX+1) 
                                + yank_first_line 
                                + line.substring(self.cursorX+1, -1);
    
            self.texts.replace(self.scroll+self.cursorY, clone new_line);
        }
        else if(nvi.yank.length() == 2) {
            var yank_first_line = nvi.yank.item(0, null);
    
            var new_line = line.substring(0, self.cursorX+1) 
                                + yank_first_line;

            var after_line = line.substring(self.cursorX+1, -1);
    
            self.texts.replace(self.scroll+self.cursorY, clone new_line);
            
            var yank_last_line = nvi.yank.item(-1, null);
            
            var new_line2 = yank_last_line + after_line;
            self.texts.insert(
                self.scroll+self.cursorY+1,
                clone new_line2);
        }
        else if(nvi.yank.length() > 2) {
            var yank_first_line = nvi.yank.item(0, null);
    
            var new_line = line.substring(0, self.cursorX+1) 
                                + yank_first_line;
            var after_line = line.substring(self.cursorX+1, -1);
    
            self.texts.replace(self.scroll+self.cursorY
                            , clone new_line);
            nvi.yank.sublist(1,-2).each {
                self.texts.insert(
                    self.scroll+self.cursorY+it2+1, 
                    clone it);
            }
            
            var yank_last_line = nvi.yank.item(-1, null);
            
            var new_line2 = yank_last_line 
                    + after_line;
            self.texts.insert(
                self.scroll+self.cursorY+nvi.yank.length()-1, 
                clone new_line2);
        }
    }
}

void pasteBeforeCursor(ViWin* self, Vi* nvi) {
    self.loadYankFromFile(nvi);
    if(nvi.yankKind == kYankKindLine) {
        self.pushUndo();
        nvi.yank.each {
            self.texts.insert(
                self.scroll+self.cursorY+it2, 
                clone it);
        }
    }
    else {
        self.pushUndo();

        var line = self.texts.item(self.scroll+self.cursorY, null);
        
        if(nvi.yank.length() == 1) {
            var yank_first_line = nvi.yank.item(0, null);

            var new_line = line.substring(0, self.cursorX) 
                                + yank_first_line 
                                + line.substring(self.cursorX, -1);
    
            self.texts.replace(self.scroll+self.cursorY, clone new_line);
        }
        else if(nvi.yank.length() == 2) {
            var yank_first_line = nvi.yank.item(0, null);
    
            var new_line = line.substring(0, self.cursorX) 
                                + yank_first_line;
            var after_line = line.substring(self.cursorX, -1);
    
            self.texts.replace(self.scroll+self.cursorY, clone new_line);
            
            var yank_last_line = nvi.yank.item(-1, null);
            
            var new_line2 = yank_last_line + after_line;
            self.texts.insert(
                self.scroll+self.cursorY+1,
                clone new_line2);
        }
        else if(nvi.yank.length() > 2) {
            var yank_first_line = nvi.yank.item(0, null);
    
            var new_line = line.substring(0, self.cursorX) 
                                + yank_first_line;
            var after_line = line.substring(self.cursorX, -1);
    
            self.texts.replace(self.scroll+self.cursorY
                            , clone new_line);
            nvi.yank.sublist(1,-2).each {
                self.texts.insert(
                    self.scroll+self.cursorY+it2+1, 
                    clone it);
            }
            
            var yank_last_line = nvi.yank.item(-1, null);
            
            var new_line2 = yank_last_line + after_line;
            self.texts.insert(
                self.scroll+self.cursorY+nvi.yank.length()-1, 
                clone new_line2);
        }
    }
}
}

impl Vi version 7 
{
initialize() {
    inherit(self);

    self.yank = new list<wstring>.initialize();

    self.yankKind = 0;

    self.events.replace('p', lambda(Vi* self, int key) 
    {
        self.activeWin.pasteAfterCursor(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });

    self.events.replace('P', lambda(Vi* self, int key) 
    {
        self.activeWin.pasteBeforeCursor(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
}
}
