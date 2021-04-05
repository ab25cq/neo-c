#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <limits.h>

#include "common.h"

impl ViWin version 13 
{
wstring&? selector2(ViWin* self, list<wstring>* lines) {
    wstring&? result = null;

    bool end_of_select = false;
    bool canceled = false;

    int maxx = getmaxx(self.win);
    int maxy = getmaxy(self.win);

    int scrolltop = 0;
    int cursor = 0;

    while(!end_of_select) {
        clear();
        int maxy2 = lines.length() - scrolltop;

        ### view ###
        for(int y=0; y<maxy && y < maxy2; y++) {
            var it = lines.item(scrolltop+y, null);

            var line = it.substring(0, maxx-1);

            if(cursor == y) {
                attron(A_REVERSE);
                mvprintw(y, 0, "%ls", line);
                attroff(A_REVERSE);
            }
            else {
                mvprintw(y, 0, "%ls", line);
            }
        }
        refresh();

        ### input ###
        var key = getch();

        switch(key) {
            case KEY_UP:
            case 'k':
            case 'P'-'A'+1:
                cursor--;
                break;

            case KEY_DOWN:
            case 'j':
            case 'N'-'A'+1:
            case (('I'-'A')+1):
                cursor++;
                break;

            case 'D'-'A'+1:
                cursor+=10;
                break;
           
            case (('U'-'A')+1):
                cursor-=10;
                break;

            case ('C'-'A')+1:
            case 'q':
            case ('['-'A')+1:
                canceled = true;
                end_of_select = true;
                break;

            case KEY_ENTER:
            case ('J'-'A')+1:
                end_of_select = true;
                break;
        }
        
        ### modification ###
        if(cursor < 0) {
            int scroll_size = -cursor +1;
            
            cursor = 0;
            scrolltop-=scroll_size;

            if(scrolltop < 0) {
                scrolltop = 0;
                cursor = 0;
            }
        }

        if(maxy2 < maxy) {
            if(cursor >= maxy2) {
                cursor = maxy2 - 1;
            }
        }
        else {
            if(cursor >= maxy) {
                int scroll_size = cursor - maxy + 1;

                scrolltop += scroll_size;
                cursor -= scroll_size;
            }
        }
    }

    if(!canceled) {
        result = lines.item(scrolltop+cursor, null);
    }

    return result;
}

void completion(ViWin* self, Vi* nvi) {
    var line = self.texts.item(self.scroll+self.cursorY, null);

    wchar_t* p = line + self.cursorX;
    p--;

    while(p >= line) {
        if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
        {
            p--;
        }
        else {
            break;
        }
    }
    p++;
    
    int len = (line + self.cursorX - p);

    var word = line.substring(self.cursorX-len, self.cursorX);

    var candidates = new list<wstring>.initialize();

    nvi.wins.each {
        it.texts.each {
            var li = it.to_string("").scan(regex("[a-zA-Z0-9_]+", false, false, false, false, false, false, false, false));
    
            li.each {
                if(it.index(word.to_string(""), -1) != -1)
                {
                    candidates.push_back(it.to_wstring());
                }
            }
        }
    }

    var candidates2 = candidates.sort().uniq();

    var candidate = self.selector2(candidates2);

    var append = candidate.substring(len, -1);
    self.insertText(append);
}
}
