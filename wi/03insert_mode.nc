#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <limits.h>
#include <unistd.h>

#include "common.h"

impl ViWin version 3 
{
void insertModeView(ViWin* self, Vi* nvi)
{
    //werase(self.win);

    self.textsView(nvi);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "INSERT MODE x %d y %d scroll %d", self.cursorX, self.scroll+self.cursorY, self.scroll);
    wattroff(self.win, A_REVERSE);

    //wrefresh(self.win);
}

void view(ViWin* self, Vi* nvi) {
    if(nvi.mode == kInsertMode && self.equals(nvi.activeWin)) {
        self.insertModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void insertText(ViWin* self, wstring text) {
    if(self.texts.length() == 0) {
        self.texts.push_back(clone text);
        self.cursorX += text.length();
    }
    else {
        var old_line = self.texts.item(self.scroll+self.cursorY, wstring(""));

        var new_line = old_line.substring(0, self.cursorX) + text + old_line.substring(self.cursorX, -1);

        self.texts.replace(self.scroll+self.cursorY, new_line);
        self.cursorX += text.length();
    }
}

void enterNewLine(ViWin* self)
{
    var old_line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    int num_spaces = 0;
    for(int i=0; i<old_line.length(); i++)
    {
        if(old_line[i] == ' ') {
            num_spaces++;
        }
        else {
            break;
        }
    }

    var head_new_line = wstring(" ") * num_spaces;

    var new_line1 = old_line.substring(0, self.cursorX);
    var new_line2 = head_new_line + old_line.substring(self.cursorX, -1);

    self.texts.replace(self.scroll+self.cursorY, new_line1);
    self.texts.insert(self.scroll+self.cursorY+1, new_line2);
    self.cursorY++;
    self.cursorX = num_spaces;

    self.modifyOverCursorYValue();
}

void enterNewLine2(ViWin* self)
{
    var line = self.texts.item(self.scroll+self.cursorY, null);
    int num_spaces = 0;
    for(int i=0; i<line.length(); i++)
    {
        if(line[i] == ' ') {
            num_spaces++;
        }
        else {
            break;
        }
    }

    var new_line = wstring(" ") * num_spaces;

    self.texts.insert(self.scroll+self.cursorY+1, new_line);
    self.cursorY++;
    self.cursorX = num_spaces;

    self.modifyOverCursorYValue();
}

void backSpace(ViWin* self) {
    var line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    if(line.length() > 0 && self.cursorX > 0) {
        line.delete(self.cursorX-1);
        self.cursorX--;
    }
}

void backIndent(ViWin* self) {
    self.pushUndo();

    var line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    if(line.length() >= 4) {
        if(line.index(wstring("    "), -1) == 0) {
            for(int i=0; i<4; i++) {
                line.delete(0);
                self.cursorX--;
                
                if(self.cursorX < 0) {
                    self.cursorX = 0;
                }
            }
        }
    }
}

void blinkBraceFoward(ViWin* self, wchar_t head, wchar_t tail, Vi* nvi) {
/*
    int cursor_y = self.scroll+self.cursorY;
    int cursor_x = -1;

    int nest = 0;

    var line = self.texts.item(self.scroll+self.cursorY, null);

    wchar_t* p = line + self.cursorX+1;

    while(p < line + line.length()) {
        if(*p == tail) {
            if(nest == 0) {
                cursor_x = (p - line) / sizeof(wchar_t);
                break;
            }

            p++;
            nest--;
        }
        else if(*p == head) {
            p++;

            nest++;
        }
        else {
            p++;
        }
    }

    if(cursor_x == -1) {
        cursor_y++;

        self.texts.sublist(self.scroll+self.cursorY+1, -1).each {
            wchar_t* p = it;

            while(p < it + it.length()) {
                if(*p == tail) {
                    if(nest == 0) {
                        cursor_x = (p - it) / sizeof(wchar_t);
                        *it3 = true;
                        return;
                    }

                    p++;
                    nest--;
                }
                else if(*p == head) {
                    p++;

                    nest++;
                }
                else {
                    p++;
                }
            }

            cursor_y++;
        }
    }

    if(cursor_x != -1) {
        int maxy = getmaxy(self.win);

        if(cursor_y > self.scroll && cursor_y < self.scroll+maxy) {
            int cursor_x_saved = self.cursorX;
            int cursor_y_saved = self.cursorY;
            int scroll_saved = self.scroll;

            self.cursorX = cursor_x;
            self.cursorY = cursor_y - self.scroll;

            self.view(nvi);
            usleep(1000000);

            self.cursorX = cursor_x_saved;
            self.cursorY = cursor_y_saved;
            self.scroll = scroll_saved;
            self.view(nvi);
        }
        else {
            int cursor_x_saved = self.cursorX;
            int cursor_y_saved = self.cursorY;
            int scroll_saved = self.scroll;

            self.scroll = 0;
            self.cursorX = cursor_x;
            self.cursorY = cursor_y;
            self.modifyOverCursorYValue();
            self.modifyOverCursorXValue();

            self.view(nvi);
            usleep(1000000);

            self.cursorX = cursor_x_saved;
            self.cursorY = cursor_y_saved;
            self.scroll = scroll_saved;
            self.view(nvi);
        }
    }
*/
}
void blinkBraceEnd(ViWin* self, wchar_t head, wchar_t tail, Vi* nvi) {
/*
    int cursor_y = self.scroll+self.cursorY;
    int cursor_x = -1;

    int nest = 0;

    var line = self.texts.item(self.scroll+self.cursorY, null);

    wchar_t* p = line + self.cursorX-1;

    while(p >= line) {
        if(*p == head) {
            if(nest == 0) {
                cursor_x = (p - line) / sizeof(wchar_t);
                break;
            }

            p--;
            nest--;
        }
        else if(*p == tail) {
            p--;

            nest++;
        }
        else {
            p--;
        }
    }

    if(cursor_x == -1) {
        cursor_y--;

        self.texts.sublist(0, self.scroll+self.cursorY).reverse().each {
            wchar_t* p = it + it.length();

            while(p >= it) {
                if(*p == head) {
                    if(nest == 0) {
                        cursor_x = (p - it) / sizeof(wchar_t);
                        *it3 = true;
                        return;
                    }

                    p--;
                    nest--;
                }
                else if(*p == tail) {
                    p--;

                    nest++;
                }
                else {
                    p--;
                }
            }

            cursor_y--;
        }
    }

    if(cursor_x != -1) {
        int maxy = getmaxy(self.win);

        if(cursor_y > self.scroll && cursor_y < self.scroll+maxy) {
            int cursor_x_saved = self.cursorX;
            int cursor_y_saved = self.cursorY;
            int scroll_saved = self.scroll;

            self.cursorX = cursor_x;
            self.cursorY = cursor_y - self.scroll;

            self.view(nvi);
            usleep(1000000);

            self.cursorX = cursor_x_saved;
            self.cursorY = cursor_y_saved;
            self.scroll = scroll_saved;
            self.view(nvi);
        }
        else {
            int cursor_x_saved = self.cursorX;
            int cursor_y_saved = self.cursorY;
            int scroll_saved = self.scroll;

            self.scroll = 0;
            self.cursorX = cursor_x;
            self.cursorY = cursor_y;
            self.modifyOverCursorYValue();
            self.modifyOverCursorXValue();

            self.view(nvi);
            usleep(1000000);

            self.cursorX = cursor_x_saved;
            self.cursorY = cursor_y_saved;
            self.scroll = scroll_saved;
            self.view(nvi);
        }
    }
*/
}

void inputInsertMode(ViWin* self, Vi* nvi)
{
    var key = self.getKey(false);
    
    if(key == 3 || key == 27) {
        nvi.exitFromInsertMode();
    }
    else if(key == 4) {
        self.backIndent();
    }
    else if(key == 10) {
        self.enterNewLine();
    }
    else if(key == 8 || key == 127 || key == KEY_BACKSPACE) {
        self.backSpace();
    }
    else if(key == 9) {
        var str = self.texts.item(self.scroll+self.cursorY, null).substring(0, self.cursorX);
        if(str.to_string("").match(regex!(/^$|^[ ]+$/), null)) {
            self.insertText(wstring("    "));
        }
        else {
            self.completion(nvi);
        }
    }
    else if(key > 127) {
        var size = ((key & 0x80) >> 7) + ((key & 0x40) >> 6) + ((key & 0x20) >> 5) + ((key & 0x10) >> 4);

        char keys[MB_LEN_MAX];

        keys[0] = key;

        int i;
        for(i = 1; i<size; i++)
        {
            keys[i] = self.getKey(false);
        }
        keys[i] = '\0';

        self.insertText(wstring(keys));
    }
    else if(key == '(') {
        self.blinkBraceFoward('(', ')', nvi);
        self.insertText(wstring(xasprintf("%c", key)));
    }
    else if(key == '{') {
        self.blinkBraceFoward('{', '}', nvi);
        self.insertText(wstring(xasprintf("%c", key)));
    }
    else if(key == '[') {
        self.blinkBraceFoward('<', '>', nvi);
        self.insertText(wstring(xasprintf("%c", key)));
    }
    else if(key == ')') {
        self.blinkBraceEnd('(', ')', nvi);
        self.insertText(wstring(xasprintf("%c", key)));
    }
    else if(key == '}') {
        self.blinkBraceEnd('{', '}', nvi);
        self.insertText(wstring(xasprintf("%c", key)));
    }
    else if(key == ']') {
        self.blinkBraceEnd('[', ']', nvi);
        self.insertText(wstring(xasprintf("%c", key)));
    }
    else if(key == '>') {
        self.blinkBraceEnd('<', '>', nvi);
        self.insertText(wstring(xasprintf("%c", key)));
    }
    else if(key == 'W'-'A'+1) {
        int cursor_x = self.cursorX;
        int cursor_y = self.cursorY;
        
        self.backwardWord();
        
        if(cursor_y == self.cursorY) {
            var line = self.texts.item(self.scroll+self.cursorY, wstring(""));
            line.delete_range(self.cursorX, cursor_x+1);
         
            self.texts.replace(self.scroll+self.cursorY, clone line);
            self.modifyOverCursorXValue();
            self.cursorX++;
        }
        else {
            self.cursorY = cursor_y;
            var line = self.texts.item(self.scroll+self.cursorY, wstring(""));
            
            line.delete_range(0, cursor_x+1);
            
            self.texts.replace(self.scroll+self.cursorY, clone line);
                            
            self.cursorX = 0;
            self.cursorY = cursor_y;
        }
    }
    else if(key == 'V'-'A'+1) {
        var key2 = self.getKey(false);
        
        char str[2];
        
        str[0] = key2;
        str[1] = '\0';
        
        self.insertText(wstring(str));
    }
    else {
        self.insertText(wstring(xasprintf("%c", key)));
    }
}

void input(ViWin* self, Vi* nvi) {
    if(nvi.mode == kInsertMode) {
        self.inputInsertMode(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void pushUndo(ViWin* self) {
    /// implemented by the after layer
}
void writedFlagOn(ViWin* self) {
    /// implemented by the after layer
}
void completion(ViWin* self, Vi* nvi) {
    /// implemented by the after layer
}
void clearInputedKey(ViWin* self) {
    /// implemented by the after layer
}
void saveInputedKey(ViWin* self) {
    /// implemented by the after layer
}
void backwardWord(ViWin* self) {
    /// implemented by the after layer
}
}

impl Vi version 3 
{
void enterInsertMode(Vi* self) {
    self.mode = kInsertMode;
    self.activeWin.writedFlagOn();
    self.activeWin.modifyOverCursorXValue();
}
void enterInsertMode2(Vi* self) {
    self.mode = kInsertMode;
    self.activeWin.writedFlagOn();
    self.activeWin.modifyOverCursorXValue2();
}
void exitFromInsertMode(Vi* self) {
    self.mode = kEditMode;
    self.activeWin.saveInputedKey();
}

initialize() {
    inherit(self);

    self.mode = kEditMode;

    self.events.replace('i', lambda(Vi* self, int key) 
    {
        self.enterInsertMode();
    });
    self.events.replace('I', lambda(Vi* self, int key) 
    {
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.moveAtHead();
        }
        self.enterInsertMode();
    });
    self.events.replace('a', lambda(Vi* self, int key) 
    {
        self.enterInsertMode();
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.cursorX++;
        }
    });
    self.events.replace('A', lambda(Vi* self, int key) 
    {
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.moveAtTail();
        }
        self.enterInsertMode();
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.cursorX++;
        }
    });
    self.events.replace('o', lambda(Vi* self, int key) 
    {
        self.enterInsertMode();
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.enterNewLine2();
        }
    });
}

int main_loop(Vi* self) {
    while(!self.appEnd) {
        erase();

        self.wins.each {
            it.view(self);
        }

        if(self.mode != kInsertMode) {
            self.activeWin.clearInputedKey();
        }
        self.activeWin.input(self);
    }

    0
}
}
