#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <limits.h>
#include <unistd.h>

#include "common.h"

impl ViWin version 19 
{
void rewriteModeView(ViWin* self, Vi* nvi)
{
    self.textsView(nvi);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "REWITEMODE MODE x %d y %d scroll %d", self.cursorX, self.scroll+self.cursorY, self.scroll);
    wattroff(self.win, A_REVERSE);
}

void view(ViWin* self, Vi* nvi) {
    if(nvi.mode == kRewriteMode && self.equals(nvi.activeWin)) {
        self.rewriteModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void insertText2(ViWin* self, wstring text) {
    if(self.texts.length() == 0) {
        self.texts.push_back(clone text);
        self.cursorX += text.length();
    }
    else {
        var old_line = self.texts.item(self.scroll+self.cursorY, wstring(""));

        var new_line = old_line.substring(0, self.cursorX) + text + old_line.substring(self.cursorX+text.length(), -1);

        self.texts.replace(self.scroll+self.cursorY, new_line);
        self.cursorX += text.length();
    }
}

void inputRewritetMode(ViWin* self, Vi* nvi)
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
            self.insertText2(wstring("    "));
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

        self.insertText2(wstring(keys));
    }
    else if(key == '(') {
        self.blinkBraceFoward('(', ')', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == '{') {
        self.blinkBraceFoward('{', '}', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == '[') {
        self.blinkBraceFoward('<', '>', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == ')') {
        self.blinkBraceEnd('(', ')', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == '}') {
        self.blinkBraceEnd('{', '}', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == ']') {
        self.blinkBraceEnd('[', ']', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == '>') {
        self.blinkBraceEnd('<', '>', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
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
        
        self.insertText2(wstring(str));
    }
    else {
        self.insertText2(wstring(xsprintf("%c", key)));
    }
}

void input(ViWin* self, Vi* nvi) {
    if(nvi.mode == kRewriteMode) {
        self.inputRewritetMode(nvi);
    }
    else {
        inherit(self, nvi);
    }
}
}

impl Vi version 19
{
void enterRewriteMode(Vi* self) {
    self.mode = kRewriteMode;
    self.activeWin.writedFlagOn();
    self.activeWin.modifyOverCursorXValue();
}
void exitFromRewiteMode(Vi* self) {
    self.mode = kEditMode;
    self.activeWin.saveInputedKey();
}

initialize() {
    inherit(self);

    self.mode = kEditMode;

    self.events.replace('R', lambda(Vi* self, int key) 
    {
        self.activeWin.pushUndo();
        self.enterRewriteMode();
    });
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
}
