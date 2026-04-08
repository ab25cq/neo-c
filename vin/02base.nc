#include "common.h"
#include <locale.h>

ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 2
{
    auto result = inherit(self, y, x, width, height, vi);
    
    result.returnPointStack = new list<tuple3<int, int, int>*%>();

    return result;
}

void ViWin*::textsView(ViWin* self, Vi* nvi)
{
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    if(self.texts.length() > 0) {
        int screen_row = 0;

        for(int i = self.scroll; i < self.texts.length() && screen_row < maxy - 1; i++) {
            int it2 = i - self.scroll;
            auto it = self.texts.item(i, null);
            if(it == null) break;
            auto printable_line = it.printable();
            int line_width = wcswidth(printable_line, printable_line.length());
            if(line_width < 0) { line_width = 0; }

            if(self.cursorY == it2 && nvi.activeWin.equals(self))
            {
                if(printable_line.length() == 0) {
                    wattron(self.win, A_REVERSE);
                    mvwprintw(self.win, screen_row, 0, "$");
                    wattroff(self.win, A_REVERSE);
                    screen_row++;
                }
                else {
                    int x = 0;
                    int cur_y = screen_row;
                    int cur_x = 0;
                    int col_width = 0;
                    while(x < it.length() && cur_y < maxy - 1) {
                        auto c = it.substring(x, x+1).printable();
                        int cw = wcswidth(c, c.length());
                        if(cw < 1) { cw = 1; }

                        if(col_width + cw > maxx - 1) {
                            cur_x = 0;
                            col_width = 0;
                            cur_y++;
                            if(cur_y >= maxy - 1) break;
                        }

                        wmove(self.win, cur_y, cur_x);
                        if(x == self.cursorX) {
                            wattron(self.win, A_REVERSE);
                            wprintw(self.win, "%ls", c);
                            wattroff(self.win, A_REVERSE);
                        }
                        else {
                            wprintw(self.win, "%ls", c);
                        }
                        cur_x += cw;
                        col_width += cw;
                        x++;
                    }
                    if(self.cursorX == it.length() && cur_y < maxy - 1) {
                        wmove(self.win, cur_y, cur_x);
                        wattron(self.win, A_REVERSE);
                        wprintw(self.win, "$");
                        wattroff(self.win, A_REVERSE);
                    }
                    int rows_used = (line_width > 0) ? ((line_width + maxx - 2) / (maxx - 1)) : 1;
                    screen_row += rows_used;
                }
            }
            else {
                if(line_width == 0) {
                    screen_row++;
                }
                else if(line_width <= maxx - 1) {
                    mvwprintw(self.win, screen_row, 0, "%ls", printable_line);
                    screen_row++;
                }
                else {
                    int x = 0;
                    int cur_col = 0;
                    int cur_row = screen_row;
                    while(x < printable_line.length() && cur_row < maxy - 1) {
                        wstring c = printable_line.substring(x, x+1);
                        int cw = wcswidth(c, c.length());
                        if(cw < 1) { cw = 1; }
                        if(cur_col + cw > maxx - 1) {
                            cur_row++;
                            cur_col = 0;
                            if(cur_row >= maxy - 1) break;
                        }
                        mvwprintw(self.win, cur_row, cur_col, "%ls", c);
                        cur_col += cw;
                        x++;
                    }
                    int rows_used = (line_width + maxx - 2) / (maxx - 1);
                    if(rows_used < 1) { rows_used = 1; }
                    screen_row += rows_used;
                }
            }
        }
    }
}

void ViWin*::statusBarView(ViWin* self, Vi* nvi) version 2
{
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "x %d y %d scroll %d", self.cursorX, self.cursorY, self.scroll);
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

void ViWin*::view(ViWin* self, Vi* nvi) version 2
{
    werase(self.win);

    self.textsView(nvi);

    self.statusBarView(nvi);

    wrefresh(self.win);
}

int ViWin*::getKey(ViWin* self, bool head) version 2
{
    return wgetch(self.win);        
}

void ViWin*::input(ViWin* self, Vi* nvi) version 2
{
    auto key = self.getKey(true);

    auto event = nvi.events.item(key, null);

    if(event != null) {
        event(nvi, key);
    }
}

void ViWin*::modifyUnderCursorYValue(ViWin* self)
{
    if(self.cursorY < 0) {
        self.scroll += self.cursorY;

        if(self.scroll < 0) {
            self.scroll = 0;
        }

        self.cursorY = 0;
    }
}

void ViWin*::modifyOverCursorYValue(ViWin* self)
{
    if(self.texts.length() == 0) {
        self.scroll = 0;
        self.cursorY = 0;
        self.cursorX = 0;
    }
    else {
        int maxy = getmaxy(self.win);
        int maxx = getmaxx(self.win);

        // Absolute line index the cursor points to
        int abs_line = self.scroll + self.cursorY;
        if(abs_line >= self.texts.length()) {
            abs_line = self.texts.length() - 1;
        }

        // Ensure scroll <= abs_line
        if(self.scroll > abs_line) {
            self.scroll = abs_line;
        }

        // Calculate total screen rows from scroll to abs_line (inclusive)
        int screen_rows = 0;
        for(int i = self.scroll; i <= abs_line; i++) {
            auto line = self.texts.item(i, null);
            int lw = 0;
            if(line != null) {
                auto pl = line.printable();
                lw = wcswidth(pl, pl.length());
                if(lw < 0) { lw = 0; }
            }
            int rows = (lw > 0) ? ((lw + maxx - 2) / (maxx - 1)) : 1;
            screen_rows += rows;
        }

        // Advance scroll until cursor fits on screen
        while(screen_rows > maxy - 1 && self.scroll < abs_line) {
            auto first_line = self.texts.item(self.scroll, null);
            int first_lw = 0;
            if(first_line != null) {
                auto pl = first_line.printable();
                first_lw = wcswidth(pl, pl.length());
                if(first_lw < 0) { first_lw = 0; }
            }
            int first_rows = (first_lw > 0) ? ((first_lw + maxx - 2) / (maxx - 1)) : 1;
            screen_rows -= first_rows;
            self.scroll++;
        }

        self.cursorY = abs_line - self.scroll;
    }
}

void ViWin*::modifyOverCursorXValue(ViWin* self)
{
    if(self.texts.length() == 0) {
        self.scroll = 0;
        self.cursorY = 0;
        self.cursorX = 0;
    }
    else if(gBinaryMode) {
        int len = self.texts_length.item(self.scroll+self.cursorY, -1);
        
        if(len != -1 && self.cursorX >= len)
        {
            self.cursorX = len-1;

            if(self.cursorX < 0) {
                self.cursorX = 0;
            }
        }
    }
    else {
        auto cursor_line = self.texts.item(self.scroll+self.cursorY, null);

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

void ViWin*::modifyOverCursorXValue2(ViWin* self)
{
    if(self.texts.length() == 0) {
        self.scroll = 0;
        self.cursorY = 0;
        self.cursorX = 0;
    }
    else if(gBinaryMode) {
        int len = self.texts_length.item(self.scroll+self.cursorY, -1);
        if(len == -1) {
            self.cursorX = 0;
        }
        else if(self.cursorX >= len)
        {
            self.cursorX = len+1;

            if(self.cursorX < 0) {
                self.cursorX = 0;
            }
        }
    }
    else {
        auto cursor_line = self.texts.item(self.scroll+self.cursorY, null);

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

void ViWin*::modifyUnderCursorXValue(ViWin* self)
{
    if(self.cursorX < 0) {
        self.cursorX = 0;
    }
}

void ViWin*::forward(ViWin* self) version 2
{
    self.cursorX++;
    self.modifyOverCursorXValue();
}

void ViWin*::backward(ViWin* self) version 2
{
    self.cursorX--;
    self.modifyUnderCursorXValue();
}

void ViWin*::prevLine(ViWin* self) 
{
    self.cursorY--;

    self.modifyUnderCursorYValue();
    self.modifyOverCursorXValue();
}

void ViWin*::nextLine(ViWin* self) 
{
    self.cursorY++;

    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();
}

void ViWin*::halfScrollUp(ViWin* self) 
{
    int maxy = getmaxy(self.win);

    self.cursorY -= maxy/2;

    self.modifyUnderCursorYValue();
    self.modifyOverCursorXValue();
}

void ViWin*::halfScrollDown(ViWin* self) 
{
    int maxy = getmaxy(self.win);

    self.cursorY += maxy/2;

    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();
}

void ViWin*::centeringCursor(ViWin* self) 
{
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

void ViWin*::topCursor(ViWin* self) 
{
    self.scroll = self.scroll + self.cursorY;
    self.cursorY = 0;
}

void ViWin*::moveAtHead(ViWin* self) 
{
    self.cursorX = 0;
}

void ViWin*::moveAtHead2(ViWin* self) 
{
    self.cursorX = 0;
    auto cursor_line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
    while(cursor_line[self.cursorX] == L' ' || cursor_line[self.cursorX] == L'\t') {
        self.cursorX++;
    }
}

void ViWin*::moveAtTail(ViWin* self) 
{
    auto cursor_line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    auto line_max = cursor_line.length();

    self.cursorX = line_max-1;

    if(self.cursorX < 0) {
        self.cursorX = 0;
    }
}

void ViWin*::moveTop(ViWin* self) 
{
    self.saveReturnPoint();

    self.scroll = 0;
    self.cursorY = 0;
    self.cursorX = 0;

    self.modifyOverCursorXValue();
}

void ViWin*::restoreVisualMode(ViWin* self, Vi* nvi) version 2
{
}

void ViWin*::keyG(ViWin* self, Vi* nvi) 
{
    auto key2 = self.getKey(false);

    switch(key2) {
        case 'g':
            self.moveTop();
            break;

        case 'e':
            self.backwardEndWord();
            break;

        case '*':
            self.searchWordOnCursor2(nvi);
            break;

        case '#':
            self.searchWordOnCursorReverse2(nvi);
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

void ViWin*::moveBottom(ViWin* self) 
{
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

void ViWin*::openFile(ViWin* self, string file_name, int line_num, bool binary_mode=false) version 2
{
}

void ViWin*::saveReturnPoint(ViWin* self)
{
    auto return_point = new tuple3<int,int,int>;

    return_point.v1 = self.cursorY;
    return_point.v2 = self.cursorX;
    return_point.v3 = self.scroll;

    self.returnPoint = clone return_point;
    self.returnPointStack.push_back(clone return_point);
}

void ViWin*::saveInputedKeyOnTheMovingCursor(ViWin* self) version 2
{
}

void ViWin*::joinLines2(ViWin* self)  version 2
{
}


// Vi

Vi*% Vi*::initialize(Vi*% self) version 2
{
    setlocale(LC_ALL, "");
    
    self.init_curses();

    self.wins = new list<ViWin*%>.initialize();

    auto maxx = xgetmaxx();
    auto maxy = xgetmaxy();

    auto win = new ViWin.initialize(0,0, maxx-1, maxy, self);

    win.texts.push_back(wstring(""));
    win.texts_length.push_back(0);

    self.wins.push_back(win);

    self.activeWin = borrow self.wins[-1];

    self.appEnd = false;

    self.events = new list<void (*lambda)(Vi*, int)>.initialize();
    
    for(int i=0; i<KEY_MAX; i++) {
        self.events.push_back(null);
    }

    self.events.replace('l', void lambda(Vi* self, int key) 
    {
        self.activeWin.forward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_RIGHT, void lambda(Vi* self, int key) 
    {
        self.activeWin.forward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('F'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.activeWin.forward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('h', void lambda(Vi* self, int key) 
    {
        self.activeWin.backward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('B'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.activeWin.backward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_LEFT, void lambda(Vi* self, int key) 
    {
        self.activeWin.backward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('j', void lambda(Vi* self, int key) 
    {
        self.activeWin.nextLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_DOWN, void lambda(Vi* self, int key) 
    {
        self.activeWin.nextLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('N'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.activeWin.nextLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('k', void lambda(Vi* self, int key) 
    {
        self.activeWin.prevLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_UP, void lambda(Vi* self, int key) 
    {
        self.activeWin.prevLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('P'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.activeWin.prevLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('0', void lambda(Vi* self, int key) 
    {
        self.activeWin.moveAtHead();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('A'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.activeWin.moveAtHead2();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('^', void lambda(Vi* self, int key) 
    {
        self.activeWin.moveAtHead2();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('|', void lambda(Vi* self, int key) 
    {
        self.activeWin.moveAtHead();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('$', void lambda(Vi* self, int key) 
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
/*
    self.events.replace('E'-'A'+1, void lambda(Vi* self, int key) 
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
*/
    self.events.replace('D'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.activeWin.halfScrollDown();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_NPAGE, void lambda(Vi* self, int key) 
    {
        self.activeWin.halfScrollDown();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('U'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.activeWin.halfScrollUp();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_PPAGE, void lambda(Vi* self, int key) 
    {
        self.activeWin.halfScrollUp();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('L'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.clearView();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('g', void lambda(Vi* self, int key) 
    {
        self.activeWin.keyG(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('G', void lambda(Vi* self, int key) 
    {
        self.activeWin.moveBottom();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('z', void lambda(Vi* self, int key) 
    {
        auto key2 = self.activeWin.getKey(false);

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
    self.events.replace('Z', void lambda(Vi* self, int key) 
    {
        auto key2 = self.activeWin.getKey(false);

        switch(key2) {
            case 'Z':
                self.exitFromApp();
                break;
        }
    });

    return self;
}

void Vi*::exitFromApp(Vi* self) version 2
{
    self.appEnd = true;
}

void Vi*::view(Vi* self) 
{
    erase();

    foreach(it, self.wins) {
        it.view(self);
        wrefresh(it.win);
    }
}

void Vi*::clearView(Vi* self)
{
    clearok(stdscr, true);
    clear();
    clearok(stdscr, false);
    foreach(it, self.wins) {
        clearok(it.win, true);
        wclear(it.win);
        clearok(it.win, false);
        it.view(self);
    }
    refresh();
}

int Vi*::main_loop(Vi* self) version 2
{
    while(!self.appEnd) {
        self.view();
        
        self.activeWin.input(self);
    }

    return 0;
}

void Vi*::openFile(Vi* self, string file_name, int line_num, bool binary_mode=false) version 2
{
    /// implemented by the after layer
}

void Vi*::repositionWindows(Vi* self)  version 2
{
    /// implemented by the after layer
}

void Vi*::enterSearchMode(Vi* self, bool regex_search, bool search_reverse) version 2
{
    /// implemented by the after layer
}
