#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <limits.h>

#include "common.h"

impl ViWin version 17
{
initialize(int y, int x, int width, int height, Vi* vi) {
    inherit(self, y, x, width, height, vi);
    
    self.visualModeHorizonHeadX = 0;
    self.visualModeHorizonHeadY = 0;
    self.visualModeHorizonHeadScroll = 0;
}

void horizonVisualModeView(ViWin* self, Vi* nvi){
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    //werase(self.win);

    if(self.visualModeHorizonHeadScroll
        +self.visualModeHorizonHeadY 
        <= self.scroll+self.cursorY)
    {
        self.texts
            .sublist(self.scroll, self.scroll+maxy-1)
            .each 
        {
            var line = it.substring(0, maxx-1);
    
            int y = it2 + self.scroll;
            
            if(y == self.visualModeHorizonHeadY
                        + self.visualModeHorizonHeadScroll)  
            {
                if(y == self.scroll + self.cursorY)
                {
                    if(self.cursorX < self.visualModeHorizonHeadX)
                    {
                        var x = 0;
                        
                        var line1 = line.substring(0, self.cursorX);
                        mvwprintw(self.win, it2, x, "%ls", line1);
                        
                        x += line1.length();
                        
                        var line2 = line.substring(self.cursorX
                                , self.visualModeHorizonHeadX+1);
                        wattron(self.win, A_REVERSE);
                        mvwprintw(self.win, it2, x, "%ls", line2);
                        wattroff(self.win, A_REVERSE);
                        
                        x += line2.length();
                        
                        var line3 = line.substring(
                                self.visualModeHorizonHeadX+1, -1);
                        mvwprintw(self.win, it2, x, "%ls", line3);
                    }
                    else {
                        var x = 0;
                        
                        var line1 = line.substring(0
                                , self.visualModeHorizonHeadX);
                        mvwprintw(self.win, it2, x, "%ls", line1);
                        
                        x += line1.length();
                        
                        var line2 = line.substring(
                                self.visualModeHorizonHeadX
                                , self.cursorX+1);
                        wattron(self.win, A_REVERSE);
                        mvwprintw(self.win, it2, x, "%ls", line2);
                        wattroff(self.win, A_REVERSE);
                        
                        x += line2.length();
                        
                        var line3 = line.substring(
                                    self.cursorX+1, -1);
                        mvwprintw(self.win, it2, x, "%ls", line3);
                    }
                }
                else {
                    var x = 0;
                    
                    var line1 = line.substring(0
                            , self.visualModeHorizonHeadX);
                    mvwprintw(self.win, it2, x, "%ls", line1);
                    
                    x += line1.length();
                    
                    var line2 = line.substring(
                            self.visualModeHorizonHeadX
                            , -1);
                    wattron(self.win, A_REVERSE);
                    mvwprintw(self.win, it2, x, "%ls", line2);
                    wattroff(self.win, A_REVERSE);
                }
            }
            else if(y == (self.cursorY + self.scroll))
            {
                var x = 0;
                
                var line1 = line.substring(0, self.cursorX+1);
                wattron(self.win, A_REVERSE);
                mvwprintw(self.win, it2, x, "%ls", line1);
                wattroff(self.win, A_REVERSE);
                
                x += line1.length();
                
                var line2 = line.substring(self.cursorX+1
                        , -1);
                mvwprintw(self.win, it2, x, "%ls", line2);
            }
            else if(y > (self.visualModeHorizonHeadScroll 
                            +self.visualModeHorizonHeadY)
                    && y < self.scroll+self.cursorY) 
            {
                wattron(self.win, A_REVERSE);
                mvwprintw(self.win, it2, 0, "%s", line.to_string(""));
                wattroff(self.win, A_REVERSE);
            }
            else {
                mvwprintw(self.win, it2, 0, "%s", line.to_string(""));
            }
        }
    }
    else {
        self.texts
            .sublist(self.scroll, self.scroll+maxy-1)
            .each 
        {
            var line = it.substring(0, maxx-1);
    
            int y = it2 + self.scroll;
            
            if(y == self.visualModeHorizonHeadY
                        + self.visualModeHorizonHeadScroll)  
            {
                var x = 0;
                
                var line1 = line.substring(0
                        , self.visualModeHorizonHeadX+1);
                wattron(self.win, A_REVERSE);
                mvwprintw(self.win, it2, x, "%ls", line1);
                wattroff(self.win, A_REVERSE);
                
                x += line1.length();
                
                var line2 = line.substring(
                        self.visualModeHorizonHeadX+1
                        , -1);
                mvwprintw(self.win, it2, x, "%ls", line2);
            }
            else if(y == (self.cursorY + self.scroll))
            {
                var x = 0;
                
                var line1 = line.substring(0, self.cursorX+1);
                mvwprintw(self.win, it2, x, "%ls", line1);
                
                x += line1.length();
                
                var line2 = line.substring(self.cursorX+1
                        , -1);
                wattron(self.win, A_REVERSE);
                mvwprintw(self.win, it2, x, "%ls", line2);
                wattroff(self.win, A_REVERSE);
            }
            else if(y < (self.visualModeHorizonHeadScroll 
                            +self.visualModeHorizonHeadY)
                    && y > self.scroll+self.cursorY) 
            {
                wattron(self.win, A_REVERSE);
                mvwprintw(self.win, it2, 0, "%s", line.to_string(""));
                wattroff(self.win, A_REVERSE);
            }
            else {
                mvwprintw(self.win, it2, 0, "%s", line.to_string(""));
            }
        }
    }

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "VISUAL MODE x %d y %d", self.cursorX, self.cursorY);
    wattroff(self.win, A_REVERSE);

    //wrefresh(self.win);
}

void view(ViWin* self, Vi* nvi) {
    if(nvi.mode == kHorizonVisualMode 
        && nvi.activeWin.equals(self)) 
    {
        self.horizonVisualModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void yankOnHorizonVisualMode(ViWin* self, Vi* nvi) {
    int y = self.scroll+self.cursorY;
    int hv_y = self.visualModeHorizonHeadScroll 
              + self.visualModeHorizonHeadY;
    
    if(y < hv_y) {
        nvi.yank.reset();
        var first_line = self.texts.item(y, null).substring(self.cursorX, -1);
        
        nvi.yank.push_back(clone first_line);
        
        self.texts.sublist(y+1, hv_y).each {
            nvi.yank.push_back(clone it);
        }
        var last_line = self.texts.item(hv_y, null).substring(0, self.visualModeHorizonHeadX+1);
        
        nvi.yank.push_back(clone last_line);
        
        nvi.yankKind = kYankKindNoLine;
        self.saveYankToFile(nvi);
    }
    else if(y == hv_y) {
        nvi.yank.reset();

        int head = self.visualModeHorizonHeadX;
        int tail = self.cursorX;
        
        if(head < tail) {
            var line = self.texts.item(y, null).substring(head, tail+1);

            nvi.yank.push_back(clone line);
        }
        else {
            var line = self.texts.item(y, null).substring(tail, head+1);
            
            nvi.yank.push_back(clone line);
        }
        
        nvi.yankKind = kYankKindNoLine;
        self.saveYankToFile(nvi);
    }
    else {
        nvi.yank.reset();
        var first_line = self.texts.item(hv_y, null).substring(self.visualModeHorizonHeadX, -1);
        
        nvi.yank.push_back(clone first_line);
        
        self.texts.sublist(hv_y+1, y).each {
            nvi.yank.push_back(clone it);
        }
        var last_line = self.texts.item(y, null).substring(0, self.cursorX+1);
        
        nvi.yank.push_back(clone last_line);
        nvi.yankKind = kYankKindNoLine;
        self.saveYankToFile(nvi);
    }
}

void deleteOnHorizonVisualMode(ViWin* self, Vi* nvi) 
{
    self.pushUndo();

    int y = self.scroll+self.cursorY;
    int hv_y = self.visualModeHorizonHeadScroll 
              + self.visualModeHorizonHeadY;
    
    if(y < hv_y) {
        self.texts.item(y, null).delete_range(self.cursorX, -1);
        self.texts.item(hv_y, null).delete_range(0, self.visualModeHorizonHeadX+1);
        var new_line = self.texts.item(y, null) 
                + self.texts.item(hv_y, null);
        self.texts.replace(y, clone new_line);

        self.texts.delete_range(y+1, hv_y+1);

    }
    else if(y == hv_y) {
        int head = self.visualModeHorizonHeadX;
        int tail = self.cursorX;
        
        if(head < tail) {
            var line = self.texts.item(y, null).delete_range(head, tail+1);
        }
        else {
            var line = self.texts.item(y, null).delete_range(tail, head+1);
        }

        self.cursorX = self.visualModeHorizonHeadX;
        self.cursorY = self.visualModeHorizonHeadY;
        self.scroll = self.visualModeHorizonHeadScroll;
    }
    else {
        nvi.yank.reset();
        self.texts.item(hv_y, null).delete_range(self.visualModeHorizonHeadX, -1);
        self.texts.item(y, null).delete_range(0, self.cursorX+1);

        var new_line = self.texts.item(hv_y, null) 
                + self.texts.item(y, null);
        self.texts.replace(hv_y, clone new_line);

        self.texts.delete_range(hv_y+1, y+1);

        self.cursorX = self.visualModeHorizonHeadX;
        self.cursorY = self.visualModeHorizonHeadY;
        self.scroll = self.visualModeHorizonHeadScroll;
    }
}

void changeCaseHorizonVisualMode(ViWin* self, Vi* nvi) 
{
    self.pushUndo();

    int y = self.scroll+self.cursorY;
    int hv_y = self.visualModeHorizonHeadScroll 
              + self.visualModeHorizonHeadY;
    int x = self.cursorX;
    int hv_x = self.visualModeHorizonHeadX;

    if(y > hv_y) {
        y = self.visualModeHorizonHeadScroll + self.visualModeHorizonHeadY;
        x = self.visualModeHorizonHeadX;
        hv_y = self.scroll+self.cursorY;
        hv_x = self.cursorX;
    }
              
    if(y < hv_y) {
        var first_line = self.texts.item(y, null);
        var head_first_line = first_line.substring(0, x);
        var tail_first_line = first_line.substring(x, -1);
        for(int i=0; i<tail_first_line.length(); i++) {
            wchar_t c = tail_first_line.item(i, null);
            
            if(c >= 'a' && c <= 'z') {
                wchar_t c2 = c - 'a' + 'A';
                tail_first_line.replace(i, c2);
            }
            else if(c >= 'A' && c <= 'Z') {
                wchar_t c2 = c - 'A' + 'a';
                tail_first_line.replace(i, c2);
            }
        }
        
        var new_line = head_first_line + tail_first_line;
        
        self.texts.replace(y, new_line);
        
        self.texts.sublist(y+1, hv_y).each {
            var new_line = clone it;
            
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
            
            self.texts.replace(y+1+it2, new_line);
        }
        var last_line = self.texts.item(hv_y, null);
        
        var head_last_line = last_line.substring(0,hv_x+1);
        for(int i=0; i<head_last_line.length(); i++) {
            wchar_t c = head_last_line.item(i, null);
            
            if(c >= 'a' && c <= 'z') {
                wchar_t c2 = c - 'a' + 'A';
                head_last_line.replace(i, c2);
            }
            else if(c >= 'A' && c <= 'Z') {
                wchar_t c2 = c - 'A' + 'a';
                head_last_line.replace(i, c2);
            }
        }
        var tail_last_line = last_line.substring(hv_x+1, -1);
        
        var new_last_line = head_last_line + tail_last_line;
        
        self.texts.replace(hv_y, new_last_line);
    }
    else if(y == hv_y) {
        int head = self.visualModeHorizonHeadX;
        int tail = self.cursorX;
        
        if(head > tail) {
            head = self.cursorX;
            tail = self.visualModeHorizonHeadX;
        }
        
        tail++;
        
        var line = self.texts.item(y, null);
        var head_line = line.substring(0, head);
        var middle_line = line.substring(head, tail);
        for(int i=0; i<middle_line.length(); i++) {
            wchar_t c = middle_line.item(i, null);
            
            if(c >= 'a' && c <= 'z') {
                wchar_t c2 = c - 'a' + 'A';
                middle_line.replace(i, c2);
            }
            else if(c >= 'A' && c <= 'Z') {
                wchar_t c2 = c - 'A' + 'a';
                middle_line.replace(i, c2);
            }
        }
        var tail_line = line.substring(tail, -1);
        var new_line = head_line + middle_line + tail_line;
        
        self.texts.replace(y, new_line);
    }
}

void rewriteOnHorizonVisualMode(ViWin* self, Vi* nvi) 
{
    self.pushUndo();

    int y = self.scroll+self.cursorY;
    int hv_y = self.visualModeHorizonHeadScroll 
              + self.visualModeHorizonHeadY;
    int x = self.cursorX;
    int hv_x = self.visualModeHorizonHeadX;

    if(y > hv_y) {
        y = self.visualModeHorizonHeadScroll + self.visualModeHorizonHeadY;
        x = self.visualModeHorizonHeadX;
        hv_y = self.scroll+self.cursorY;
        hv_x = self.cursorX;
    }
              
    wchar_t key = self.getKey(false);
    
    if(y < hv_y) {
        var first_line = self.texts.item(y, null);
        var head_first_line = first_line.substring(0, x);
        var tail_first_line = (xsprintf("%lc", key) * (first_line.length() - x)).to_wstring();
        
        var new_line = head_first_line + tail_first_line;
        
        self.texts.replace(y, new_line);
        
        self.texts.sublist(y+1, hv_y).each {
            var new_line = (xsprintf("%lc", key) * it.length()).to_wstring();
            
            self.texts.replace(y+1+it2, new_line);
        }
        var last_line = self.texts.item(hv_y, null);
        
        var head_last_line = (xsprintf("%lc", key) * (hv_x+1)).to_wstring();
        var tail_last_line = last_line.substring(hv_x+1, -1);
        
        var new_last_line = head_last_line+ tail_last_line;
        
        self.texts.replace(hv_y, new_last_line);
    }
    else if(y == hv_y) {
        int head = self.visualModeHorizonHeadX;
        int tail = self.cursorX;
        
        if(head > tail) {
            head = self.cursorX;
            tail = self.visualModeHorizonHeadX;
        }
        
        tail++;
        
        var line = self.texts.item(y, null);
        var head_line = line.substring(0, head);
        var middle_line = (xsprintf("%lc", key) * (tail-head)).to_wstring();
        var tail_line = line.substring(tail, -1);
        var new_line = head_line+ middle_line+ tail_line
        
        self.texts.replace(y, new_line);
    }
}

void inputHorizonVisualMode(ViWin* self, Vi* nvi){
    var key = self.getKey(false);

    switch(key) {
        case 'l':
        case KEY_RIGHT:
            self.forward();
            break;
        
        case 'h':
        case KEY_LEFT:
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
            self.yankOnHorizonVisualMode(nvi);
            nvi.exitFromVisualMode();
            break;

        case 'd':
            self.deleteOnHorizonVisualMode(nvi);
            nvi.exitFromVisualMode();
            break;

        case '~':
            self.changeCaseHorizonVisualMode(nvi);
            nvi.exitFromVisualMode();
            break;

        case 'c':
            self.deleteOnHorizonVisualMode(nvi);
            nvi.exitFromVisualMode();
            nvi.enterInsertMode();
            break;
            
        case 'r':
            self.rewriteOnHorizonVisualMode(nvi);
            nvi.exitFromVisualMode();
            break;
            
        case 'C':
            self.deleteUntilTail();
            self.deleteOnHorizonVisualMode(nvi);
            nvi.exitFromVisualMode();
            if(self.texts.length() != 0) {
                self.cursorX++;
            }
            nvi.enterInsertMode();
            break;
            
        case 'w':
        case 'e':
            self.forwardWord();
            break;
        
        case 'b':
            self.backwardWord();
            break;
                

        case 27:
            nvi.exitFromVisualMode();
            break;
    }
    self.saveInputedKey();
}

void input(ViWin* self, Vi* nvi) {
    if(nvi.mode == kHorizonVisualMode) {
        self.inputHorizonVisualMode(nvi);
    }
    else {
        inherit(self, nvi);
    }
}
}

impl Vi version 17
{
void enterHorizonVisualMode(Vi* self) {
    self.mode = kHorizonVisualMode;
    self.activeWin.visualModeHorizonHeadScroll = self.activeWin.scroll;
    self.activeWin.visualModeHorizonHeadX = self.activeWin.cursorX;
    self.activeWin.visualModeHorizonHeadY = self.activeWin.cursorY;
}

initialize() {
    inherit(self);

    self.events.replace('v', lambda(Vi* self, int key) 
    {
        self.enterHorizonVisualMode();
        self.activeWin.saveInputedKey();
    });
}
}
