#include "common.h"

static bool is_inline_file_completion_char(wchar_t c)
{
    return c != '\0'
        && c != ' '
        && c != '\t'
        && c != '"'
        && c != '\''
        && c != '('
        && c != ')'
        && c != '['
        && c != ']'
        && c != '{'
        && c != '}'
        && c != '<'
        && c != '>'
        && c != ','
        && c != ';'
        && c != '`';
}

static bool is_completion_word_char(wchar_t c)
{
    return (c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z')
        || (c >= '0' && c <= '9')
        || c == '_';
}

ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 13
{
    auto result = inherit(self, y, x, width, height, vi);

    result.completionCandidates = null;
    result.completionPrefix = null;
    result.completionStartX = 0;
    result.completionIndex = 0;
    result.completionActive = false;

    return result;
}

void ViWin*::resetCompletionState(ViWin* self)
{
    self.completionCandidates = null;
    self.completionPrefix = null;
    self.completionStartX = 0;
    self.completionIndex = 0;
    self.completionActive = false;
}

wstring ViWin*::getCompletionWord(ViWin* self, int* start_pos)
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    int cursor_x = self.cursorX;
    if(cursor_x > line.length()) {
        cursor_x = line.length();
    }

    int start = cursor_x;
    while(start > 0 && is_completion_word_char(line[start-1])) {
        start--;
    }

    *start_pos = start;

    if(start == cursor_x) {
        return null;
    }

    return line.substring(start, cursor_x);
}

wchar_t* ViWin*::selector2(ViWin* self, list<wstring>* lines) 
{
    wchar_t* result = null;

    bool end_of_select = false;
    bool canceled = false;

    int maxx = getmaxx(self.win);
    int maxy = getmaxy(self.win);

    int scrolltop = 0;
    int cursor = 0;

    while(!end_of_select) {
        clear();
        int maxy2 = lines.length() - scrolltop;

        /// view ///
        for(int y=0; y<maxy && y < maxy2; y++) {
            auto it = lines.item(scrolltop+y, null);

            auto line = it.substring(0, maxx-1);

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

        /// input ///
        auto key = getch();

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
            case KEY_NPAGE:
                cursor+=10;
                break;
           
            case (('U'-'A')+1):
            case KEY_PPAGE:
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
        
        /// modification ///
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
        result = borrow lines.item(scrolltop+cursor, null);
    }

    return result;
}

void ViWin*::completion(ViWin* self, Vi* nvi) version 13
{
    int start_pos = 0;
    auto word = self.getCompletionWord(&start_pos);
    if(word == null) {
        return;
    }
    

    int len = self.cursorX - start_pos;

    auto candidates = new list<wstring>.initialize();

    foreach(it, self.texts) {
        auto li = it.to_string().scan("[a-zA-Z0-9_]+");

        foreach(it2, li) {
            if(strncmp(it2, word.to_string(), len) == 0 && strcmp(it2, word.to_string()) != 0) {
                candidates.push_back(it2.to_wstring());
            }
        }
    }

    auto candidates2 = candidates.sort().uniq();

    auto candidate = self.selector2(candidates2);
    
    if(candidate) {
        auto append = candidate.substring(len, -1);
        self.insertText(append);
    }
}

void ViWin*::completionFileName(ViWin* self, Vi* nvi) version 13
{
    auto line = self.texts.item(self.scroll+self.cursorY, null);

    wchar_t* p = line + self.cursorX;
    p--;

    while(p >= line) {
        if(is_inline_file_completion_char(*p)) {
            p--;
        }
        else {
            break;
        }
    }
    p++;

    int len = ((wchar_t*)(line + self.cursorX) - p);
    if(len <= 0) {
        return;
    }

    auto word = line.substring(self.cursorX-len, self.cursorX).to_string();
    auto candidate = self.selectFileCompletionCandidate(word);

    if(strcmp(candidate, "") != 0 && strstr(candidate, word) == candidate) {
        auto append = candidate.substring(strlen(word), -1).to_wstring();
        self.insertText(append);
    }
}

void ViWin*::completionNext(ViWin* self, Vi* nvi, bool prev)
{
    if(!self.completionActive) {
        int start_pos = 0;
        auto word = self.getCompletionWord(&start_pos);
        if(word == null) {
            return;
        }

        auto candidates = new list<wstring>.initialize();

        foreach(it, self.texts) {
            auto li = it.to_string().scan("[a-zA-Z0-9_]+");

            foreach(it2, li) {
                if(it2.index(word.to_string(), -1) == 0 && strcmp(it2, word.to_string()) != 0)
                {
                    candidates.push_back(it2.to_wstring());
                }
            }
        }

        auto candidates2 = candidates.sort().uniq();
        if(candidates2.length() == 0) {
            return;
        }

        self.completionCandidates = clone candidates2;
        self.completionPrefix = clone word;
        self.completionStartX = start_pos;
        self.completionIndex = prev ? self.completionCandidates.length()-1 : 0;
        self.completionActive = true;
    }
    else {
        if(self.completionCandidates == null || self.completionCandidates.length() == 0) {
            self.resetCompletionState();
            return;
        }

        if(prev) {
            self.completionIndex--;
            if(self.completionIndex < 0) {
                self.completionIndex = self.completionCandidates.length()-1;
            }
        }
        else {
            self.completionIndex++;
            if(self.completionIndex >= self.completionCandidates.length()) {
                self.completionIndex = 0;
            }
        }
    }

    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    auto candidate = self.completionCandidates.item(self.completionIndex, null);
    auto new_line = wstring(xsprintf("%ls%ls%ls"
        , line.substring(0, self.completionStartX)
        , candidate
        , line.substring(self.cursorX, -1)));

    self.texts.replace(self.scroll+self.cursorY, clone new_line);
    self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
    self.cursorX = self.completionStartX + candidate.length();
}
