#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <limits.h>

#include "common.h"

impl ViWin version 8 
{
initialize(int y, int x, int width, int height, Vi* vi) {
    inherit(self, y, x, width, height, vi);

    self.visualModeHead = 0;

    self.visualModeHeadBefore = -1;
    self.visualModeTailCursorYBefore = -1;
    self.visualModeTailScrollBefore = -1;
}

void visualModeView(ViWin* self, Vi* nvi){
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    //werase(self.win);

    self.texts
        .sublist(self.scroll, self.scroll+maxy-1)
        .each 
    {
        var line = it.substring(0, maxx-1);

        if(it2 >= (self.visualModeHead-self.scroll) 
            && it2 <= self.cursorY) 
        {
            wattron(self.win, A_REVERSE);
            mvwprintw(self.win, it2, 0, "%s", line.to_string(""));
            wattroff(self.win, A_REVERSE);
        }
        else if(it2 <= 
            (self.visualModeHead-self.scroll) 
            && it2 >= self.cursorY) 
        {
            wattron(self.win, A_REVERSE);
            mvwprintw(self.win, it2, 0, "%s", line.to_string(""));
            wattroff(self.win, A_REVERSE);
        }
        else {
            mvwprintw(self.win, it2, 0, "%s", line.to_string(""));
        }
    }

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "VISUAL MODE x %d y %d", self.cursorX, self.cursorY);
    wattroff(self.win, A_REVERSE);

    //wrefresh(self.win);
}

void view(ViWin* self, Vi* nvi) {
    if(nvi.mode == kVisualMode 
        && nvi.activeWin.equals(self)) 
    {
        self.visualModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void yankOnVisualMode(ViWin* self, Vi* nvi) {
    int head = self.visualModeHead;
    int tail = self.scroll+self.cursorY;

    if(head >= tail) {
        int tmp = tail;
        tail = head;
        head = tmp;
    }

    nvi.yank.reset();
    self.texts.sublist(head, tail+1).each {
        nvi.yank.push_back(clone it);
    }
    
    nvi.yankKind = kYankKindLine;
    self.saveYankToFile(nvi);
}

void indentVisualMode(ViWin* self, Vi* nvi) {
    self.pushUndo();

    int head = self.visualModeHead;
    int tail = self.scroll+self.cursorY;

    if(head >= tail) {
        int tmp = tail;
        tail = head;
        head = tmp;
    }
    
    self.texts.sublist(head, tail+1).each {
        wstring new_line = wstring("    ") + it;

        self.texts.replace(it2+head, new_line);
    }

    self.modifyOverCursorXValue();
}

void backIndentVisualMode(ViWin* self, Vi* nvi) {
    self.pushUndo();

    int head = self.visualModeHead;
    int tail = self.scroll+self.cursorY;

    if(head >= tail) {
        int tmp = tail;
        tail = head;
        head = tmp;
    }

    self.texts.sublist(head, tail+1).each {
        wstring new_line = wstring("") + it;

        if(new_line.index(wstring("    "), -1) == 0) {
            for(int i=0; i<4; i++) {
                new_line.delete(0);
            }

            self.texts.replace(it2+head, new_line);
        }
    }

    self.modifyOverCursorXValue();
}

void changeCaseVisualMode(ViWin* self, Vi* nvi) {
    self.pushUndo();

    int head = self.visualModeHead;
    int tail = self.scroll+self.cursorY;

    if(head >= tail) {
        int tmp = tail;
        tail = head;
        head = tmp;
    }

    self.texts.sublist(head, tail+1).each {
        wstring new_line = wstring("") + it;
        
        for(int i=0; i<new_line.length(); i++) {
            wchar_t c = new_line.item(i, null);
            
            if(c >= 'a' && c <= 'z') {
                wchar_t c2 = c - 'a' + 'A';
                new_line.replace(i, c2);
            }
            else if(c >= 'A' && c <= 'Z') {
                wchar_t c2 = c - 'A' + 'a';
                new_line.replace(i, c2);
            }
        }
        
        self.texts.replace(it2+head, new_line);
    }

    self.modifyOverCursorXValue();
}

void joinVisualMode(ViWin* self, Vi* nvi) {
    self.pushUndo();

    int head = self.visualModeHead;
    int tail = self.scroll+self.cursorY;

    if(head >= tail) {
        int tmp = tail;
        tail = head;
        head = tmp;
    }
    
    wstring new_line = self.texts.sublist(head, tail+1).map { it.to_string("") }.join(" ").to_wstring();
    
    self.texts.delete_range(head, tail+1);
    
    self.texts.insert(head, new_line);

    if(self.scroll+self.cursorY >= self.visualModeHead) {
        self.cursorY -= tail - head;

        self.modifyUnderCursorYValue();
    }
    
    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();

}
void equalVisualMode(ViWin* self, Vi* nvi) 
{
    self.pushUndo();

    int head = self.visualModeHead;
    int tail = self.scroll+self.cursorY;

    if(head >= tail) {
        int tmp = tail;
        tail = head;
        head = tmp;
    }
    
    int indent = 0;
    
    self.texts.sublist(0, head).each {
        for(int i = 0; i<it.length(); i++) {
            wchar_t c = it.item(i, -1);
            
            if(c == '{') {
                indent++;
            }
            else if(c == '}') {
                indent--;
            }
        }
    }
    
    self.texts.sublist(head, tail+1).each {
        bool brace_begin = false;
        for(int i = 0; i<it.length(); i++) {
            wchar_t c = it.item(i, -1);
            
            if(c == '{') {
                brace_begin = true;
                indent++;
            }
            else if(c == '}') {
                brace_begin = false;
                indent--;
            }
        }
        
        wstring new_line = it.to_string("").scan(regex!("^ *(.*)")).item(1, null).to_wstring();

        var head_str = new buffer.initialize();
        int indent2 = indent;
        if(brace_begin) {
            indent2--;
        }
        for(int i = 0; i<indent2; i++) {
            head_str.append_str("    ");
        }
        
        wstring new_line2 = head_str.to_string().to_wstring() + new_line;
        
        self.texts.replace(it2+head, new_line2);
    }

    self.modifyOverCursorXValue();

    if(self.scroll+self.cursorY >= self.visualModeHead) {
        self.cursorY -= tail - head;

        self.modifyUnderCursorYValue();
    }
    
    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();

}

void rewriteVisualMode(ViWin* self, Vi* nvi) {
    self.pushUndo();
    
    var key = self.getKey(false);

    int head = self.visualModeHead;
    int tail = self.scroll+self.cursorY;

    if(head >= tail) {
        int tmp = tail;
        tail = head;
        head = tmp;
    }
    
    int indent = 0;
    
    self.texts.sublist(head, tail+1).each {
        int len = it.length();
        
        wchar_t c = key;
        wstring new_line = (xsprintf("%lc", c) * len).to_wstring()

        self.texts.replace(it2+head, new_line);
    }

    self.modifyOverCursorXValue();

    if(self.scroll+self.cursorY >= self.visualModeHead) {
        self.cursorY -= tail - head;

        self.modifyUnderCursorYValue();
    }
    
    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();

}

void deleteOnVisualMode(ViWin* self, Vi* nvi) {
    self.pushUndo();

    self.yankOnVisualMode(nvi);

    int head = self.visualModeHead;
    int tail = self.scroll+self.cursorY;

    if(head >= tail) {
        int tmp = tail;
        tail = head;
        head = tmp;
    }

    if(tail+1 >= self.texts.length()) {
        self.texts.delete_range(head, -1);
        self.texts.push_back(wstring(""));
    }
    else {
        self.texts.delete_range(head, tail+1);
    }

    if(self.scroll+self.cursorY >= self.visualModeHead) {
        self.cursorY -= tail - head;

        self.modifyUnderCursorYValue();
    }
    
    self.modifyOverCursorYValue();
    
}

/*
void runShell(ViWin* self, Vi* nvi) {
    self.pushUndo();
    
    endwin();
    
    bool no_load_fudamental_classes = false;

    setlocale(LC_ALL, "");

    set_signal_shell();

    var types = new vector<sCLType*%>.initialize();

    clover3_init(no_load_fudamental_classes);
    clover3_init_for_wi(types);

    heap_init(HEAP_INIT_SIZE, HEAP_HANDLE_INIT_SIZE);
    
    CLVALUE result;
    shell_commandline_without_to_string("texts()..to_string()", 8, types, &result);
    
    if(result.mObjectValue != 0) {
        CLObject obj = result.mObjectValue;
        sCLObject* object_data = CLOBJECT(obj);
        sCLType* type = object_data->mType;
        
        if(strcmp(type->mClass->mName, "string") == 0) {
            char* str = get_string_mem(obj);
            
            if(strcmp(str, "") != 0) {
                self.deleteOnVisualMode(nvi);
                
                var li = string(str).split_char('\n');
                
                li.each {
                    var wstr = it.to_wstring();
                    self.texts.insert(self.scroll+self.cursorY+it2, wstr);
                }
                
                nvi.exitFromVisualMode();
            }
        }
        else if(strcmp(type->mClass->mName, "list") == 0) {
            self.deleteOnVisualMode(nvi);
            var li = get_list_value(obj);
            
            li.each {
                CLObject obj = it;
                
                sCLObject* object_data = CLOBJECT(obj);
                
                sCLType* type = object_data->mType;
                
                if(strcmp(type->mClass->mName, "string") == 0) {
                    char* str = get_string_mem(obj);
                    
                    var wstr = str.to_wstring();
                    self.texts.insert(self.scroll+self.cursorY+it2, wstr);
                }
            }
            
            nvi.exitFromVisualMode();
        }
    }
    
    heap_final();

    clover3_final();
    
    nvi.init_curses();
}
*/

void makeInputedKeyGVIndent(ViWin* self, Vi* nvi) {
}

void makeInputedKeyGVDeIndent(ViWin* self, Vi* nvi) {
}

void inputVisualMode(ViWin* self, Vi* nvi){
    var key = self.getKey(false);

    switch(key) {
        case KEY_RIGHT:
        case 'l':
            self.forward();
            break;
        
        case KEY_LEFT:
        case 'h':
            self.backward();
            break;

        case KEY_DOWN:
        case 'j':
            self.nextLine();
            break;
    
        case KEY_UP:
        case 'k':
            self.prevLine();
            break;

        case '0':
            self.moveAtHead();
            break;

        case '$':
            self.moveAtTail();
            break;

        case 'C'-'A'+1:
            nvi.exitFromVisualMode();
            break;

        case 'D'-'A'+1:
            self.halfScrollDown();
            break;

        case 'U'-'A'+1:
            self.halfScrollUp();
            break;
            
        case 'G':
            self.moveBottom();
            break;

        case 'g':
            self.keyG(nvi);
            break;

        case 'y':
            self.yankOnVisualMode(nvi);
            nvi.exitFromVisualMode();
            break;

        case 'd':
            self.deleteOnVisualMode(nvi);
            nvi.exitFromVisualMode();
            break;

        case 'c': 
        case 'C': {
            self.deleteOnVisualMode(nvi);
            nvi.exitFromVisualMode();
            self.cursorX = self.visualModeHeadX;
            self.modifyOverCursorXValue();
            self.modifyUnderCursorXValue();
            nvi.enterInsertMode();
            }
            break;

        case '>':
            self.indentVisualMode(nvi);
            nvi.exitFromVisualMode();
    
            self.makeInputedKeyGVIndent(nvi);
            break;

        case '<':
            self.backIndentVisualMode(nvi);
            nvi.exitFromVisualMode();
            self.makeInputedKeyGVDeIndent(nvi);
            break;

        case '~':
            self.changeCaseVisualMode(nvi);
            nvi.exitFromVisualMode();
    
            self.makeInputedKeyGVIndent(nvi);
            break;
            
        case 'J':
            self.joinVisualMode(nvi);
            nvi.exitFromVisualMode();
            break;
            
        case '=':
            self.equalVisualMode(nvi);
            nvi.exitFromVisualMode();
            break;
            
        case '%':
            self.gotoBraceEnd(nvi);
            break;
            
        case 'r':
            self.rewriteVisualMode(nvi);
            break;
            
/*
        case ':':
            self.runShell(nvi);
            break;
*/

        case 27:
            nvi.exitFromVisualMode();
            break;
    }
}

void input(ViWin* self, Vi* nvi) {
    if(nvi.mode == kVisualMode) {
        self.inputVisualMode(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

/// implemented after layer
void restoreVisualMode(ViWin* self, Vi* nvi) {
    nvi.mode = kVisualMode;

    if(self.visualModeHeadBefore != -1) {
        self.visualModeHead = self.visualModeHeadBefore;
        self.cursorY = self.visualModeTailCursorYBefore;
        self.scroll = self.visualModeTailScrollBefore;
    }
}

void gotoBraceEnd(ViWin* self, Vi* nvi) {
}

}

impl Vi version 8
{
void enterVisualMode(Vi* self) {
    self.mode = kVisualMode;
    self.activeWin.visualModeHead = self.activeWin.cursorY + self.activeWin.scroll;
    self.activeWin.visualModeHeadX = self.activeWin.cursorX;
}

void exitFromVisualMode(Vi* self) {
    self.mode = kEditMode;

    self.activeWin.visualModeHeadBefore = self.activeWin.visualModeHead;
    self.activeWin.visualModeTailCursorYBefore = self.activeWin.cursorY;
    self.activeWin.visualModeTailScrollBefore = self.activeWin.scroll;
}

initialize() {
    inherit(self);

    self.events.replace('V', lambda(Vi* self, int key) 
    {
        self.enterVisualMode();
    });
}
}
