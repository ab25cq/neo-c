#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <limits.h>

#include "common.h"

impl ViWin version 11
{
void toggleBraceForward(ViWin* self, wchar_t head, wchar_t tail) {
    int cursor_y = self.scroll + self.cursorY;
    int cursor_x = -1;

    int nest = 0;

    var line = self.texts.item(cursor_y, null);

    wchar_t* p = line + self.cursorX+1;

    while(p < line + line.length()) {
        if(*p == tail) {
            if(nest == 0) {
                self.saveReturnPoint();

                cursor_x = (p - line);
                self.cursorX = cursor_x;
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
                        self.saveReturnPoint();

                        cursor_x = (p - it);
                        self.cursorY += it2 + 1;
                        self.modifyOverCursorYValue();
                        self.cursorX = cursor_x;
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
}
void toggleBraceBack(ViWin* self, wchar_t head, wchar_t tail) {
    int cursor_y = self.scroll + self.cursorY;
    int cursor_x = -1;

    int nest = 0;

    var line = self.texts.item(cursor_y, null);

    wchar_t* p = line + self.cursorX-1;

    while(p >= line) {
        if(*p == head) {
            if(nest == 0) {
                self.saveReturnPoint();
                cursor_x = (p - line);
                self.cursorX = cursor_x;
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
                        self.saveReturnPoint();

                        cursor_x = (p - it);
                        self.cursorY = self.cursorY - it2 -1;
                        self.modifyUnderCursorYValue();
                        self.cursorX = cursor_x;
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
}

void toggleCommentForward(ViWin* self)
{
    int head = self.scroll + self.cursorY;
    int tail = -1;
    
    int nest = 0;
    
    self.texts.sublist(head, tail).each {
        int index = it.to_string("").index("*/", -1);
        
        int index2 = it.to_string("").index("/*", -1);
        
        if(index2 != -1) {
            nest++;
        }
        
        if(index != -1) {
            nest--;
            
            if(nest <= 0) {
                self.saveReturnPoint();
                self.cursorX = index;
                self.scroll = 0;
                self.cursorY = it2 + head;
                self.modifyOverCursorYValue();
                self.centeringCursor();
                *it3 = true;
                return;
            }
        }
    }
}

void toggleCommentBackward(ViWin* self)
{
    int head = 0;
    int tail = self.scroll + self.cursorY + 1;
    
    int nest = 0;
    
    self.texts.sublist(head, tail).reverse().each {
        int index = it.to_string("").index("/*", -1);
        
        int index2 = it.to_string("").index("*/", -1);
        
        if(index2 != -1) {
            nest++;
        }
        
        if(index != -1) {
            nest--;
            
            if(nest == 0) {
                self.saveReturnPoint();
                self.cursorX = index;
                self.scroll = 0;
                self.cursorY = tail - it2 -1;
                self.modifyOverCursorYValue();
                self.centeringCursor();
                *it3 = true;
                return;
            }
        }
    }
}

void gotoBraceEnd(ViWin* self, Vi* nvi) {
    var line = self.texts.item(self.scroll+self.cursorY, null);

    var c = line[self.cursorX];
    wchar_t c1 = 0;
    wchar_t c2 = 0;
    if(self.cursorX - 1 >= 0) {
        c1 = line[self.cursorX-1];
    }
    if(self.cursorX + 1 < line.length()) {
        c2 = line[self.cursorX+1];
    }
    
    switch(c) {
        case '*':
            if(c1 == '/') {
                self.toggleCommentForward();
            }
            if(c2 == '/') {
                self.toggleCommentBackward();
            }
            break;
            
        case '/':
            if(c1 == '*') {
                self.toggleCommentBackward();
            }
            if(c2 == '*') {
                self.toggleCommentForward();
            }
            break;
            
        case '(':
            self.toggleBraceForward('(', ')');
            break;

        case '{':
            self.toggleBraceForward('{', '}');
            break;

        case '[':
            self.toggleBraceForward('[', ']');
            break;

        case '<':
            self.toggleBraceForward('<', '>');
            break;

        case ')':
            self.toggleBraceBack('(', ')');
            break;

        case '}':
            self.toggleBraceBack('{', '}');
            break;

        case ']':
            self.toggleBraceBack('[', ']');

        case '>':
            self.toggleBraceBack('<', '>');
            break;
    }
}

void gotoMethodTop(ViWin* self, Vi* nvi) {
    self.texts.sublist(0, self.scroll+self.cursorY).reverse().each() {
        if(it.to_string("").match(regex!</^\\s*[a-zA-Z0-9%*?_]+\\s+[a-zA-Z0-9_]+\\(/>, null) 
            || it.to_string("").match(regex!</^\\s*initialize\\(/>, null) 
            || it.to_string("").match(regex!</^\\s*finalize\\(/>, null)) 
        {
            if(!it.to_string("").match(regex!</else\\s+if/>, null)
               && !it.to_string("").match(regex!</return\\s+[a-zA-Z0-9_]+/>, null))
            {
                self.saveReturnPoint();

                *it3 = true;
                self.cursorY = self.cursorY - it2 -1;
                self.modifyUnderCursorYValue();
                self.modifyOverCursorYValue();
                return;
            }
        }
    }
}

void gotoFunctionTop(ViWin* self, Vi* nvi) {
    self.texts.sublist(0, self.scroll+self.cursorY).reverse().each() {
        if(it.to_string("").match(regex!("^{"), null))
        {
            self.saveReturnPoint();

            *it3 = true;
            self.cursorY = self.cursorY - it2 -1;
            self.modifyUnderCursorYValue();
            self.modifyOverCursorYValue();
            return;
        }
    }
}

void gotoFunctionBottom(ViWin* self, Vi* nvi) {
    int cursor_y = self.scroll+self.cursorY + 1;

    self.texts.sublist(self.scroll+self.cursorY+1, -1).each() {
        if(it.to_string("").match(regex!("^}"), null)) 
        {
            self.saveReturnPoint();


            *it3 = true;
            self.cursorY += it2 + 1;
            self.cursorX = 0;
            self.modifyOverCursorYValue();
            return;
        }

        cursor_y++;
    }
}

void gotoMethodBottom(ViWin* self, Vi* nvi) {
    int cursor_y = self.scroll+self.cursorY + 1;

    self.texts.sublist(self.scroll+self.cursorY+1, -1).each() {
        if(it.to_string("").match(regex!</^\\s*[a-zA-Z0-9%*?_]+\\s+[a-zA-Z0-9_]+\\(/>, null) 
        || it.to_string("").match(regex!</^\\s*initialize\\(/>, null) 
        || it.to_string("").match(regex!</^\\s*finalize\\(/>, null)) 
        {
            if(!it.to_string("").match(regex!</else\\s+if/>, null)
               && !it.to_string("").match(regex!</return\\s+[a-zA-Z0-9_]+/>, null))
            {
                self.saveReturnPoint();


                *it3 = true;
                self.cursorY += it2 + 1;
                self.cursorX = 0;
                self.modifyOverCursorYValue();
                return;
            }
        }

        cursor_y++;
    }
}
}

impl Vi version 11
{
initialize() {
    inherit(self);

    self.events.replace('%', lambda(Vi* self, int key) {
        self.activeWin.gotoBraceEnd(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });

    self.events.replace('[', lambda(Vi* self, int key) {
        var key2 = self.activeWin.getKey(false);

        switch(key2) {
            case '[':
                self.activeWin.gotoFunctionTop(self);
                self.activeWin.centeringCursor();
                self.activeWin.saveInputedKeyOnTheMovingCursor();
                break;

            case 'm':
                self.activeWin.gotoMethodTop(self);
                self.activeWin.centeringCursor();
                self.activeWin.saveInputedKeyOnTheMovingCursor();
                break;
        }
    });

    self.events.replace(']', lambda(Vi* self, int key) {
        var key2 = self.activeWin.getKey(false);

        switch(key2) {
            case ']':
                self.activeWin.gotoFunctionBottom(self);
                self.activeWin.centeringCursor();
                self.activeWin.saveInputedKeyOnTheMovingCursor();
                break;

            case ']':
                self.activeWin.gotoMethodBottom(self);
                self.activeWin.centeringCursor();
                self.activeWin.saveInputedKeyOnTheMovingCursor();
        }
    });
}
}
