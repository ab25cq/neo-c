#include "common.h"

ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 18
{
    auto result = inherit(self, y, x, width, height, vi);
    
    result.visualModeVerticalHeadX = 0;

    return result;
}

void ViWin*::verticalVisualModeView(ViWin* self, Vi* nvi)
{
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    werase(self.win);

    int it2 = 0;
    foreach(it, self.texts.sublist(self.scroll, self.scroll+maxy-1))
    {
        auto line = it.substring(0, maxx-1);

        if((it2 >= (self.visualModeVerticalHeadY-self.scroll) 
            && it2 <= self.cursorY)
            || (it2 <= 
                (self.visualModeVerticalHeadY-self.scroll) 
            && it2 >= self.cursorY)) 
        {
            auto line1 = it.substring(0
                        , self.visualModeVerticalHeadX);
            mvwprintw(self.win, it2, 0, "%ls", line1);
            
            wattron(self.win, A_REVERSE);
            auto line2 = it.substring(
                    self.visualModeVerticalHeadX
                    , self.visualModeVerticalHeadX
                      + self.visualModeVerticalLen);
            mvwprintw(self.win, it2
                            , self.visualModeVerticalHeadX
                            , "%ls", line2);
            wattroff(self.win, A_REVERSE);
            
            auto line3 = it.substring(
                    self.visualModeVerticalHeadX
                        +self.visualModeVerticalLen
                    , -1);
            mvwprintw(self.win, it2
                    , self.visualModeVerticalHeadX
                        + self.visualModeVerticalLen
                    , "%ls", line3);
        }
        else {
            mvwprintw(self.win, it2, 0, "%s", line.to_string());
        }

        it2++;
    }

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "VISUAL MODE x %d y %d", self.cursorX, self.cursorY);
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

void ViWin*::view(ViWin* self, Vi* nvi) version 18
{
    if(nvi.mode == kVerticalVisualMode && nvi.activeWin.equals(self)) 
    {
        self.verticalVisualModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void ViWin*::yankOnVerticalVisualMode(ViWin* self, Vi* nvi)
{
    int head = self.visualModeVerticalHeadY;
    int tail = self.cursorY + self.scroll;

    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }

    nvi.yank.reset();

    for(int i=head; i<=tail; i++) {
        auto line = self.texts.item(i, wstring(""));
        nvi.yank.push_back(line.substring(self.visualModeVerticalHeadX
                , self.visualModeVerticalHeadX + self.visualModeVerticalLen));
    }

    nvi.yankKind = kYankKindBlock;
    self.saveYankToFile(nvi);
}

void ViWin*::deleteOnVerticalVisualMode(ViWin* self, Vi* nvi) 
{
    self.pushUndo();
    
    int head = self.visualModeVerticalHeadY;
    int tail = self.cursorY + self.scroll;
    
    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }
    
    for(int i=head; i<=tail; i++) {
        auto it = self.texts.item(i, null);
        
        it.delete(self.visualModeVerticalHeadX
            , self.visualModeVerticalHeadX 
                    + self.visualModeVerticalLen);
    }
    
    self.cursorY = self.visualModeVerticalStartY;
    self.scroll = self.visualModeVerticalStartScroll;
    
    self.cursorX = self.visualModeVerticalStartX;
}

void ViWin*::deleteLinesOnVerticalVisualMode(ViWin* self, Vi* nvi) 
{
    self.pushUndo();
    
    int head = self.visualModeVerticalHeadY;
    int tail = self.cursorY + self.scroll;
    
    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }
    
    for(int i=head; i<=tail; i++) {
        auto it = self.texts.item(i, null);
        
        it.delete(0, -1);
    }
    
    self.cursorY = self.visualModeVerticalStartY;
    self.scroll = self.visualModeVerticalStartScroll;
    
    self.cursorX = self.visualModeVerticalStartX;
}

void ViWin*::changeCaseVerticalVisualMode(ViWin* self, Vi* nvi) 
{
    self.pushUndo();
    
    int head = self.visualModeVerticalHeadY;
    int tail = self.cursorY + self.scroll;
    
    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }
    
    for(int i=head; i<=tail; i++) {
        auto line = self.texts.item(i, null);
        
        
        wstring head_line = line.substring(0, self.visualModeVerticalHeadX);
        wstring tail_line = line.substring(
            self.visualModeVerticalHeadX + self.visualModeVerticalLen, -1);
        wstring middle_line = line.substring(self.visualModeVerticalHeadX
            , self.visualModeVerticalHeadX + self.visualModeVerticalLen);
        
        for(int i=0; i<middle_line.length(); i++) {
            wchar_t c = middle_line[i];
            
            if(c >= 'a' && c <= 'z') {
                wchar_t c2 = c - 'a' + 'A';
                middle_line[i] = c2;
            }
            else if(c >= 'A' && c <= 'Z') {
                wchar_t c2 = c - 'A' + 'a';
                middle_line[i] = c2;
            }
        }

        wstring new_line = xsprintf("%ls%ls%ls", head_line, middle_line, tail_line).to_wstring();
        
        self.texts.replace(i, clone new_line);
        self.texts_length.replace(i, wcslen(new_line));
    }
    
    self.cursorY = self.visualModeVerticalStartY;
    self.scroll = self.visualModeVerticalStartScroll;
    
    self.cursorX = self.visualModeVerticalStartX;
}

void ViWin*::rewriteOnVerticalVisualMode(ViWin* self, Vi* nvi) 
{
    self.pushUndo();
    
    int head = self.visualModeVerticalHeadY;
    int tail = self.cursorY + self.scroll;
    
    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }
    
    wchar_t key = self.getKey(false);
    
    for(int i=head; i<=tail; i++) {
        auto it = self.texts.item(i, null);
        
        auto head_new_line = it.substring(0, self.visualModeVerticalHeadX);
        auto middle_new_line = xsprintf("%lc", key).multiply(self.visualModeVerticalLen).to_wstring();
        auto tail_new_line = it.substring(self.visualModeVerticalHeadX+self.visualModeVerticalLen, -1);
        
        auto new_line = xsprintf("%ls%ls%ls", head_new_line, middle_new_line, tail_new_line).to_wstring();
        
        self.texts.replace(i, clone new_line);
        self.texts_length.replace(i, wcslen(new_line));
    }
    
    self.cursorY = self.visualModeVerticalStartY;
    self.scroll = self.visualModeVerticalStartScroll;
    
    self.cursorX = self.visualModeVerticalStartX;
}

void ViWin*::indentVerticalVisualMode(ViWin* self, Vi* nvi)
{
    self.pushUndo();

    int head = self.visualModeVerticalHeadY;
    int tail = self.scroll + self.cursorY;

    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }

    for(int i=head; i<=tail; i++) {
        auto line = self.texts.item(i, wstring(""));
        auto new_line = xsprintf("%ls%ls", wstring("    "), line).to_wstring();

        self.texts.replace(i, clone new_line);
        self.texts_length.replace(i, wcslen(new_line));
    }

    self.cursorY = self.visualModeVerticalStartY;
    self.scroll = self.visualModeVerticalStartScroll;
    self.cursorX = self.visualModeVerticalStartX + 4;
    self.visualModeVerticalHeadX += 4;
    self.modifyUnderCursorYValue();
    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();
    self.writed = true;
}

void ViWin*::backIndentVerticalVisualMode(ViWin* self, Vi* nvi)
{
    self.pushUndo();

    int head = self.visualModeVerticalHeadY;
    int tail = self.scroll + self.cursorY;

    if(head > tail) {
        int tmp = head;
        head = tail;
        tail = tmp;
    }

    int deleted_columns = 4;

    for(int i=head; i<=tail; i++) {
        auto line = self.texts.item(i, wstring(""));
        auto new_line = clone line;

        if(new_line.index(wstring("    "), -1) == 0) {
            for(int j=0; j<4; j++) {
                new_line.delete(0, 1);
            }
        }
        else {
            int removed = 0;
            while(removed < 4 && new_line.length() > 0 && new_line[0] == ' ') {
                new_line.delete(0, 1);
                removed++;
            }

            if(removed < deleted_columns) {
                deleted_columns = removed;
            }
        }

        self.texts.replace(i, clone new_line);
        self.texts_length.replace(i, wcslen(new_line));
    }

    if(deleted_columns < 0) {
        deleted_columns = 0;
    }

    self.cursorY = self.visualModeVerticalStartY;
    self.scroll = self.visualModeVerticalStartScroll;
    self.cursorX = self.visualModeVerticalStartX - deleted_columns;
    if(self.cursorX < 0) {
        self.cursorX = 0;
    }
    self.visualModeVerticalHeadX -= deleted_columns;
    if(self.visualModeVerticalHeadX < 0) {
        self.visualModeVerticalHeadX = 0;
    }
    self.modifyUnderCursorYValue();
    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();
    self.writed = true;
}

void ViWin*::insertOnVerticalVisualMode(ViWin* self, Vi* nvi) 
{
    auto key = self.getKey(false);
    
    if(key == 3 || key == 27) {
        self.visualModeVerticalInserting = false;
        
        self.cursorY = self.visualModeVerticalStartY;
        self.scroll = self.visualModeVerticalStartScroll;
        
        self.cursorX = self.visualModeVerticalStartX;
        nvi.exitFromVisualMode();
    }
    else if(key == 8 || key == 127 || key == KEY_BACKSPACE)
    {
        int head = self.visualModeVerticalHeadY;
        int tail = self.cursorY + self.scroll;
        
        if(head > tail) {
            int tmp = head;
            head = tail;
            tail = tmp;
        }
        
        if(self.visualModeVerticalHeadX > 0) {
            for(int i=head; i<=tail; i++) {
                auto it = self.texts.item(i, null);
                
                auto new_line = xsprintf("%ls%ls"
                        , it.substring(0, self.visualModeVerticalHeadX-1)
                        , it.substring(self.visualModeVerticalHeadX, -1)).to_wstring();
                
                self.texts.replace(i, clone new_line);
                self.texts_length.replace(i, wcslen(new_line));
            }
        }
        
        self.visualModeVerticalHeadX--;
        
        if(self.visualModeVerticalHeadX < 0) {
            self.visualModeVerticalHeadX = 0;
        }
    }
    else {
        int head = self.visualModeVerticalHeadY;
        int tail = self.cursorY + self.scroll;
        
        if(head > tail) {
            int tmp = head;
            head = tail;
            tail = tmp;
        }
        
        for(int i=head; i<=tail; i++) {
            auto it = self.texts.item(i, null);
            
            auto new_line = xsprintf("%ls%lc%ls"
                    ,it.substring(0, self.visualModeVerticalHeadX)
                    , key
                    , it.substring(self.visualModeVerticalHeadX, -1)).to_wstring();
            
            self.texts.replace(i, clone new_line);
            self.texts_length.replace(i, wcslen(new_line));
        }
        
        self.visualModeVerticalHeadX++;
    }
}

void ViWin*::inputVerticalVisualMode(ViWin* self, Vi* nvi)
{
    if(self.visualModeVerticalInserting) {
        self.insertOnVerticalVisualMode(nvi);
    }
    else {
        auto key = self.getKey(false);
    
        switch(key) {
            case 'l':
            case KEY_RIGHT:
                self.forward();
                self.visualModeVerticalLen++;
                break;
            
            case KEY_LEFT:
            case 'h':
                self.backward();
                self.visualModeVerticalLen--;
                
                if(self.visualModeVerticalLen < 1) {
                    self.visualModeVerticalLen = 1;
                }
                break;

            case KEY_DOWN:
            case 'j':
                self.nextLine();
                break;
        
            case KEY_UP:
            case 'k':
                self.prevLine();
                break;
    
            case 'C'-'A'+1:
                nvi.exitFromVisualMode();
                break;
    
            case 'D'-'A'+1:
            case KEY_NPAGE:
                self.halfScrollDown();
                break;
    
            case 'U'-'A'+1:
            case KEY_PPAGE:
                self.halfScrollUp();
                break;
                
            case 'G':
                self.moveBottom();
                break;
    
            case 'g':
                self.keyG(nvi);
                break;

            case ':':
                nvi.enterComandMode();
                break;

            case '/':
                nvi.enterSearchMode(false, false);
                break;

            case '?':
                nvi.enterSearchMode(false, true);
                break;
    
            case 'd':
                self.deleteOnVerticalVisualMode(nvi);
                nvi.exitFromVisualMode();
                break;

            case 'y':
                self.yankOnVerticalVisualMode(nvi);
                nvi.exitFromVisualMode();
                break;
    
            case 'c':
                self.deleteOnVerticalVisualMode(nvi);
                nvi.exitFromVisualMode();
                nvi.enterInsertMode();
                break;
    
            case 'D':
                self.deleteLinesOnVerticalVisualMode(nvi);
                nvi.exitFromVisualMode();
                break;
    
            case 'C':
                self.deleteLinesOnVerticalVisualMode(nvi);
                nvi.exitFromVisualMode();
                nvi.enterInsertMode();
                break;
    
            case '~':
                self.changeCaseVerticalVisualMode(nvi);
                nvi.exitFromVisualMode();
                break;
    
            case 'r':
                self.rewriteOnVerticalVisualMode(nvi);
                nvi.exitFromVisualMode();
                break;

            case '>':
                self.indentVerticalVisualMode(nvi);
                nvi.exitFromVisualMode();
                nvi.clearView();
                break;

            case '<':
                self.backIndentVerticalVisualMode(nvi);
                nvi.exitFromVisualMode();
                nvi.clearView();
                break;
                
            case 'I':
                self.pushUndo();
                self.visualModeVerticalInserting = true; 
                break;
                
            case '$':
                self.moveAtTail();
                self.visualModeVerticalLen = self.cursorX;
                break;
    
            case 27:
                nvi.exitFromVisualMode();
                break;
        
        }
    }
    self.saveInputedKey();
}

void ViWin*::input(ViWin* self, Vi* nvi) version 18
{
    if(nvi.mode == kVerticalVisualMode) {
        self.inputVerticalVisualMode(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void Vi*::enterVerticalVisualMode(Vi* self) 
{
    self.mode = kVerticalVisualMode;
    self.activeWin.visualModeVerticalHeadY
        = self.activeWin.scroll + self.activeWin.cursorY;
    self.activeWin.visualModeVerticalHeadX
        = self.activeWin.cursorX;
    self.activeWin.visualModeVerticalLen = 1;
    
    self.activeWin.visualModeVerticalStartY 
        = self.activeWin.cursorY;
    self.activeWin.visualModeVerticalStartScroll
        = self.activeWin.scroll;
    self.activeWin.visualModeVerticalStartX
        = self.activeWin.cursorX;
        
    self.activeWin.visualModeVerticalInserting = false;
}

Vi*% Vi*::initialize(Vi*% self) version 18
{
    auto result = inherit(self);

    result.events.replace('V'-'A'+1, void lambda(Vi* self, int key) {
        self.enterVerticalVisualMode();
        self.activeWin.saveInputedKey();
    });

    return result;
}
