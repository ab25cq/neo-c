#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <locale.h>
#include <wctype.h>

#include "common.h"

impl ViWin version 2 
{
initialize(int y, int x, int width, int height, Vi* vi) {
    inherit(self, y, x, width, height, vi);
    
    self.returnPointStack 
        = new list<tuple3<int, int, int>*%>.initialize();
}

void textsView(ViWin* self, Vi* nvi){
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    self.texts
        .sublist(self.scroll, self.scroll+maxy-1)
        .each 
    {
        var line = it.substring(0, maxx-1);

        if(self.cursorY == it2 && nvi.activeWin.equals(self)) {
            if(line.length() == 0) {
                wattron(self.win, A_REVERSE);
                mvwprintw(self.win, it2, 0, " ");
                wattroff(self.win, A_REVERSE);
            }
            else if(self.cursorX == line.length())
            {

                mvwprintw(self.win, it2, 0, "%ls", line);
                wstring line2 = line.printable();

                wattron(self.win, A_REVERSE);
                mvwprintw(self.win, it2, wcswidth(line2, line2.length()), " ");
                wattroff(self.win, A_REVERSE);
            }
            else {
                int x = 0;
                wstring head_string = line.substring(0, self.cursorX);
                wstring printable_head_string = head_string.printable();

                mvwprintw(self.win, it2, 0, "%ls", printable_head_string);

                x += wcswidth(printable_head_string, printable_head_string.length());

                wstring cursor_string = line.substring(self.cursorX, self.cursorX+1);
                wstring printable_cursor_string = cursor_string.printable();

                wattron(self.win, A_REVERSE);
                mvwprintw(self.win, it2, x, "%ls", printable_cursor_string);
                wattroff(self.win, A_REVERSE);

                x += wcswidth(printable_cursor_string, printable_cursor_string.length());

                wstring tail_string = line.substring(self.cursorX+1, -1);

                mvwprintw(self.win, it2, x, "%ls", tail_string);
            }
        }
        else {
            mvwprintw(self.win, it2, 0, "%ls", line);
        }
    }
}
void statusBarView(ViWin* self, Vi* nvi){
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "x %d y %d scroll %d", self.cursorX, self.cursorY, self.scroll);
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

void view(ViWin* self, Vi* nvi) {
    //werase(self.win);

    self.textsView(nvi);

    self.statusBarView(nvi);

    //wrefresh(self.win);
}

int getKey(ViWin* self, bool head) {
    return wgetch(self.win);        
}

void input(ViWin* self, Vi* nvi) {
    var key = self.getKey(true);

    var event = nvi.events.item(key, null);

    if(event != null) {
        event(nvi, key);
    }
}

void modifyUnderCursorYValue(ViWin* self){
    if(self.cursorY < 0) {
        self.scroll += self.cursorY;

        if(self.scroll < 0) {
            self.scroll = 0;
        }

        self.cursorY = 0;
    }
}

void modifyOverCursorYValue(ViWin* self){
    if(self.texts.length() == 0) {
        self.scroll = 0;
        self.cursorY = 0;
        self.cursorX = 0;
    }
    else {
        int maxy = getmaxy(self.win);

        if(self.cursorY >= maxy-2)
        {
            self.scroll += self.cursorY - (maxy-2);

            if(self.scroll >= self.texts.length()-1) {
                self.scroll = self.texts.length()-1;
            }

            self.cursorY = maxy-2;
        }

        if(self.cursorY + self.scroll >= self.texts.length()-1) {
            self.cursorY = self.texts.length()-self.scroll-1;
        }
    }
}

void modifyOverCursorXValue(ViWin* self){
    if(self.texts.length() == 0) {
        self.scroll = 0;
        self.cursorY = 0;
        self.cursorX = 0;
    }
    else {
        var cursor_line = self.texts.item(self.scroll+self.cursorY, null);

        if(cursor_line) {
            if(self.cursorX >= cursor_line.length())
            {
                self.cursorX = cursor_line.length()-1;

                if(self.cursorX < 0) {
                    self.cursorX = 0;
                }
            }
        }
    }
}

void modifyOverCursorXValue2(ViWin* self){
    if(self.texts.length() == 0) {
        self.scroll = 0;
        self.cursorY = 0;
        self.cursorX = 0;
    }
    else {
        var cursor_line = self.texts.item(self.scroll+self.cursorY, null);

        if(cursor_line) {
            if(self.cursorX >= cursor_line.length())
            {
                self.cursorX = cursor_line.length()+1;

                if(self.cursorX < 0) {
                    self.cursorX = 0;
                }
            }
        }
    }
}

void modifyUnderCursorXValue(ViWin* self){
    if(self.cursorX < 0) {
        self.cursorX = 0;
    }
}

void forward(ViWin* self) {
    self.cursorX++;
    self.modifyOverCursorXValue();
}

void backward(ViWin* self) {
    self.cursorX--;
    self.modifyUnderCursorXValue();
}

void prevLine(ViWin* self) {
    self.cursorY--;

    self.modifyUnderCursorYValue();
    self.modifyOverCursorXValue();
}

void nextLine(ViWin* self) {
    self.cursorY++;

    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();
}

void halfScrollUp(ViWin* self) {
    int maxy = getmaxy(self.win);

    self.cursorY -= maxy/2;

    self.modifyUnderCursorYValue();
    self.modifyOverCursorXValue();
}

void halfScrollDown(ViWin* self) {
    int maxy = getmaxy(self.win);

    self.cursorY += maxy/2;

    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();
}

void centeringCursor(ViWin* self) {
    int maxy = getmaxy(self.win);
    
    int n = self.scroll + self.cursorY;

    if(n > maxy / 2) {
        self.scroll = n - maxy / 2; 
        self.cursorY = maxy / 2;
        
        if(self.scroll >= self.texts.length()) {
            self.scroll = self.texts.length() - 1;
            self.cursorY = 0;
        }
        if(self.scroll < 0) {
            self.scroll = 0;
            self.cursorY = 0;
        }
    }
}

void topCursor(ViWin* self) {
    self.scroll = self.scroll + self.cursorY;
    self.cursorY = 0;
}

void moveAtHead(ViWin* self) {
    self.cursorX = 0;
}

void moveAtTail(ViWin* self) {
    var cursor_line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    var line_max = cursor_line.length();

    self.cursorX = line_max-1;

    if(self.cursorX < 0) {
        self.cursorX = 0;
    }
}

void moveTop(ViWin* self) {
    self.saveReturnPoint();

    self.scroll = 0;
    self.cursorY = 0;
    self.cursorX = 0;

    self.modifyOverCursorXValue();
}

/// implemented after layer
void restoreVisualMode(ViWin* self, Vi* nvi) {
}

void keyG(ViWin* self, Vi* nvi) {
    var key2 = self.getKey(false);

    switch(key2) {
        case 'g':
            self.moveTop();
            break;

        case 'v':
            self.restoreVisualMode(nvi);
            break;
            
        case '/':
            nvi.enterSearchMode(true, false);
            break;
            
        case '?':
            nvi.enterSearchMode(true, true);
            break;
            
        case 'J':
            self.joinLines2();
            break;
    }
}

void moveBottom(ViWin* self) {
    self.saveReturnPoint();
    
    if(self.digitInput > 0) {
        self.scroll = 0;
        self.cursorY = self.digitInput;
        self.digitInput = 0;
    }
    else {
        self.cursorY = self.texts.length()-1;
    }

    self.modifyOverCursorXValue();
    self.modifyOverCursorYValue();
    self.centeringCursor();
}
void openFile(ViWin* self, char* file_name, int line_num) {
    /// implemented by the after layer
}

void saveReturnPoint(ViWin* self){
    var return_point = new tuple3<int,int,int>.initialize();

    return_point.v1 = self.cursorY;
    return_point.v2 = self.cursorX;
    return_point.v3 = self.scroll;

    self.returnPoint = clone return_point;
    self.returnPointStack.push_back(clone return_point);
}
void saveInputedKeyOnTheMovingCursor(ViWin* self) {
    /// inpelemeted after layer
}
void joinLines2(ViWin* self) {
}
}

impl Vi version 2 
{
initialize() {
    setlocale(LC_ALL, "");
    
    self.init_curses();

    self.wins = new list<ViWin*%>.initialize();

    var maxx = xgetmaxx();
    var maxy = xgetmaxy();

    var win = new ViWin.initialize(0,0, maxx-1, maxy, self);

    win.texts.push_back(wstring(""));

    self.activeWin = win;

    self.wins.push_back(win);

    self.appEnd = false;

    self.events = new vector<void (*lambda)(Vi*, int)>.initialize_with_values(KEY_MAX, null);

    self.events.replace('l', lambda(Vi* self, int key) 
    {
        self.activeWin.forward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_RIGHT, lambda(Vi* self, int key) 
    {
        self.activeWin.forward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('h', lambda(Vi* self, int key) 
    {
        self.activeWin.backward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_LEFT, lambda(Vi* self, int key) 
    {
        self.activeWin.backward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('j', lambda(Vi* self, int key) 
    {
        self.activeWin.nextLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_DOWN, lambda(Vi* self, int key) 
    {
        self.activeWin.nextLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('k', lambda(Vi* self, int key) 
    {
        self.activeWin.prevLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_UP, lambda(Vi* self, int key) 
    {
        self.activeWin.prevLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('0', lambda(Vi* self, int key) 
    {
        self.activeWin.moveAtHead();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('$', lambda(Vi* self, int key) 
    {
        if(self.activeWin.digitInput > 0) {
            self.activeWin.cursorY += self.activeWin.digitInput;
            self.activeWin.modifyOverCursorYValue();
            
            self.activeWin.digitInput = 0;
            self.activeWin.moveAtTail();
        }
        else {
            self.activeWin.moveAtTail();
        }
        
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('D'-'A'+1, lambda(Vi* self, int key) 
    {
        self.activeWin.halfScrollDown();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('U'-'A'+1, lambda(Vi* self, int key) 
    {
        self.activeWin.halfScrollUp();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('L'-'A'+1, lambda(Vi* self, int key) 
    {
        self.clearView();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('g', lambda(Vi* self, int key) 
    {
        self.activeWin.keyG(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('G', lambda(Vi* self, int key) 
    {
        self.activeWin.moveBottom();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('z', lambda(Vi* self, int key) 
    {
        var key2 = self.activeWin.getKey(false);

        switch(key2) {
            case 'z':
            case '.':
                self.activeWin.centeringCursor();
                self.activeWin.saveInputedKeyOnTheMovingCursor();
                break;
                
            case '\n':
            case 't':
                self.activeWin.topCursor();
                self.activeWin.saveInputedKeyOnTheMovingCursor();
                break;
        }
    });
    self.events.replace('Z', lambda(Vi* self, int key) 
    {
        var key2 = self.activeWin.getKey(false);

        switch(key2) {
            case 'Z':
                self.exitFromApp();
                break;
        }
    });
}

void exitFromApp(Vi* self) {
    self.appEnd = true;
}

void view(Vi* self) {
    erase();

    self.wins.each {
        it.view(self);
        wrefresh(it.win);
    }
}

void clearView(Vi* self)
{
    clearok(stdscr, true);
    clear();
    clearok(stdscr, false);
    self.wins.each {
        clearok(it.win, true);
        wclear(it.win);
        clearok(it.win, false);
        it.view(self);
    }
    refresh();
}

int main_loop(Vi* self) {
    while(!self.appEnd) {
        self.view();
        
        self.activeWin.input(self);
    }

    0
}

void openFile(Vi* self, char* file_name, int line_num)
{
    /// implemented by the after layer
}

void repositionWindows(Vi* self) 
{
    /// implemented by the after layer
}

void repositionFiler(Vi* self) 
{
    /// implemented by the after layer
}
void enterSearchMode(Vi* self, bool regex_search, bool search_reverse)
{
    /// implemented by the after layer
}

}
