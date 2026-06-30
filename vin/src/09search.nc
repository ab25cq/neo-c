#include "common.h"

static bool search_has_uppercase(wchar_t* pattern)
{
    for(int i=0; pattern[i] != 0; i++) {
        if(pattern[i] >= 'A' && pattern[i] <= 'Z') {
            return true;
        }
    }

    return false;
}

static bool search_ignore_case(Vi* nvi)
{
    if(!nvi.searchIgnoreCase) {
        return false;
    }

    if(nvi.searchSmartCase && search_has_uppercase(nvi.searchString)) {
        return false;
    }

    return true;
}

static bool is_search_word_char(char c)
{
    return xisalnum(c) || c == '_';
}

static bool match_plain_at(string text, string pattern, int index, bool ignore_case)
{
    if(index < 0 || index + pattern.length() > text.length()) {
        return false;
    }

    for(int i=0; i<pattern.length(); i++) {
        char c1 = text[index+i];
        char c2 = pattern[i];

        if(ignore_case) {
            if(c1 >= 'A' && c1 <= 'Z') {
                c1 = c1 - 'A' + 'a';
            }
            if(c2 >= 'A' && c2 <= 'Z') {
                c2 = c2 - 'A' + 'a';
            }
        }

        if(c1 != c2) {
            return false;
        }
    }

    return true;
}

static bool is_whole_word_match(string text, string pattern, int index)
{
    int head = index - 1;
    int tail = index + pattern.length();

    bool head_ok = head < 0 || !is_search_word_char(text[head]);
    bool tail_ok = tail >= text.length() || !is_search_word_char(text[tail]);

    return head_ok && tail_ok;
}

static int find_plain_match(string text, string pattern, int start, bool reverse, bool ignore_case, bool whole_word)
{
    if(pattern.length() == 0) {
        return -1;
    }

    if(reverse) {
        int limit = start;
        if(limit > text.length() - pattern.length()) {
            limit = text.length() - pattern.length();
        }

        for(int i=limit; i>=0; i--) {
            if(match_plain_at(text, pattern, i, ignore_case)) {
                if(!whole_word || is_whole_word_match(text, pattern, i)) {
                    return i;
                }
            }
        }
    }
    else {
        if(start < 0) {
            start = 0;
        }

        for(int i=start; i + pattern.length() <= text.length(); i++) {
            if(match_plain_at(text, pattern, i, ignore_case)) {
                if(!whole_word || is_whole_word_match(text, pattern, i)) {
                    return i;
                }
            }
        }
    }

    return -1;
}

static int find_match_in_line(string text, Vi* nvi, int start, bool reverse, bool whole_word)
{
    auto pattern = ((wchar_t*)nvi.searchString).to_string();
    bool ignore_case = search_ignore_case(nvi);

    if(nvi.regexSearch) {
        if(reverse) {
            return text.rindex_regex(pattern, -1, ignore_case);
        }
        else {
            if(start <= 0) {
                return text.index_regex(pattern, -1, ignore_case);
            }

            auto sub = text.substring(start, -1);
            int x = sub.index_regex(pattern, -1, ignore_case);
            return x < 0 ? -1 : x + start;
        }
    }

    return find_plain_match(text, pattern, start, reverse, ignore_case, whole_word);
}

static void search_word_on_cursor(ViWin* self, Vi* nvi, bool reverse, bool whole_word)
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    if(self.cursorX >= line.length()) {
        return;
    }

    auto line_string = line.to_string();
    int pos = self.cursorX;
    if(!is_search_word_char(line_string[pos])) {
        return;
    }

    while(pos > 0 && is_search_word_char(line_string[pos-1])) {
        pos--;
    }
    int head = pos;

    while(pos < line.length() && is_search_word_char(line_string[pos])) {
        pos++;
    }

    auto search_word = line.substring(head, pos);

    wcsncpy(nvi.searchString, search_word, 128);
    nvi.searchReverse = reverse;
    nvi.regexSearch = false;
    nvi.searchWholeWord = whole_word;

    if(reverse) {
        self.searchReverse(nvi, whole_word);
    }
    else {
        self.search(nvi, whole_word);
    }
    nvi.saveSearchString("searchString.vin");
}

void ViWin*::searchModeView(ViWin* self, Vi* nvi)
{
    werase(self.win);

    self.textsView(nvi);

    wattron(self.win, A_REVERSE);
    if(nvi.searchReverse) {
        mvwprintw(self.win, self.height-1, 0, "?%ls", nvi.searchString);
    }
    else {
        mvwprintw(self.win, self.height-1, 0, "/%ls", nvi.searchString);
    }
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

void ViWin*::view(ViWin* self, Vi* nvi) version 9
{
    if(nvi.mode == kSearchMode && self.equals(nvi.activeWin)) {
        self.searchModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void ViWin*::search(ViWin* self, Vi* nvi, bool whole_word=false) 
{
    if(wcscmp(nvi.searchString, wstring("")) == 0) 
    {
        return;
    }
    
    auto cursor_line = self.texts.item(self.scroll+self.cursorY, null).to_string();
    int x = find_match_in_line(cursor_line, nvi, self.cursorX+1, false, whole_word);

    if(x != -1) {
        self.saveReturnPoint();
        self.cursorX = x;
    }
    else {
        int it2 = 0;
        foreach(it, self.texts.sublist(self.scroll+self.cursorY+1, -1)) {
            int x = find_match_in_line(it.to_string(), nvi, 0, false, whole_word);

            if(x != -1) {
                self.saveReturnPoint();

                self.cursorY += it2 + 1;
                self.modifyOverCursorYValue();
                self.cursorX = x;
                break;
            }
            it2++;
        }

        if(it2 == self.texts.sublist(self.scroll+self.cursorY+1, -1).length()) {
            int current_y = self.scroll + self.cursorY;

            for(int i=0; i<current_y; i++) {
                auto line = self.texts.item(i, wstring(""));
                x = find_match_in_line(line.to_string(), nvi, 0, false, whole_word);

                if(x != -1) {
                    self.saveReturnPoint();
                    self.scroll = 0;
                    self.cursorY = i;
                    self.modifyOverCursorYValue();
                    self.cursorX = x;
                    return;
                }
            }

            x = find_match_in_line(cursor_line, nvi, 0, false, whole_word);
            if(x != -1 && x <= self.cursorX) {
                self.saveReturnPoint();
                self.cursorX = x;
            }
        }
    }
}

void ViWin*::searchReverse(ViWin* self, Vi* nvi, bool whole_word=false) 
{
    if(wcscmp(nvi.searchString, wstring("")) == 0) 
    {
        return;
    }
    
    auto cursor_line = self.texts.item(self.scroll+self.cursorY, null).to_string();
    int x = find_match_in_line(cursor_line, nvi, self.cursorX-1, true, whole_word);

    if(x != -1) {
        self.saveReturnPoint();

        self.cursorX = x;
    }
    else {
        int it2 = 0;
        foreach(it, self.texts.sublist(0, self.scroll+self.cursorY).reverse()) {
            int x = find_match_in_line(it.to_string(), nvi, it.to_string().length()-1, true, whole_word);

            if(x != -1) {
                self.saveReturnPoint();

                self.cursorY = self.cursorY - it2 -1;
                self.modifyUnderCursorYValue();
                self.cursorX = x;
                break;
            }

            it2++;
        }

        if(it2 == self.texts.sublist(0, self.scroll+self.cursorY).length()) {
            int current_y = self.scroll + self.cursorY;

            for(int i=self.texts.length()-1; i>current_y; i--) {
                auto line = self.texts.item(i, wstring(""));
                x = find_match_in_line(line.to_string(), nvi, line.to_string().length()-1, true, whole_word);

                if(x != -1) {
                    self.saveReturnPoint();
                    self.scroll = 0;
                    self.cursorY = i;
                    self.modifyOverCursorYValue();
                    self.cursorX = x;
                    return;
                }
            }

            x = find_match_in_line(cursor_line, nvi, cursor_line.length()-1, true, whole_word);
            if(x != -1 && x >= self.cursorX) {
                self.saveReturnPoint();
                self.cursorX = x;
            }
        }
    }
}

void ViWin*::searchWordOnCursor(ViWin* self, Vi* nvi)
{
    search_word_on_cursor(self, nvi, false, true);
}

void ViWin*::searchWordOnCursorReverse(ViWin* self, Vi* nvi)
{
    search_word_on_cursor(self, nvi, true, true);
}

void ViWin*::searchWordOnCursor2(ViWin* self, Vi* nvi)
{
    search_word_on_cursor(self, nvi, false, false);
}

void ViWin*::searchWordOnCursorReverse2(ViWin* self, Vi* nvi)
{
    search_word_on_cursor(self, nvi, true, false);
}

void ViWin*::inputSearchlMode(ViWin* self, Vi* nvi)
{
    auto key = self.getKey(false);
    
    switch(key) {
        case 27:
            nvi.exitFromSearchMode();
            break;

        case 'C'-'A'+1:
            nvi.exitFromSearchMode();
            break;
            
        case 'V'-'A'+1: {
            key = self.getKey(false);
            char a[2];
            a[0] = key;
            a[1] = '\0';
            wcsncat(nvi.searchString, a.to_wstring(), 128);
            }
            break;

        case 'W'-'A'+1: {
            while(true) {
                wchar_t c = nvi.searchString[wcslen(nvi.searchString)-1];
                
                if(c == null) {
                    break;
                }
                else if(xiswalnum(c)) {
                    nvi.searchString[wcslen(nvi.searchString)-1] = '\0';
                }
                else {
                    break;
                }
            }
            
            }
            break;

        case 10:
            if(nvi.searchReverse) {
                self.searchReverse(nvi, nvi.searchWholeWord);
            }
            else {
                self.search(nvi, nvi.searchWholeWord);
            }
            nvi.saveSearchString("searchString.vin");
            nvi.exitFromSearchMode();
            break;
            
        case 8:
        case 127:
        case KEY_BACKSPACE:
            nvi.searchString[wcslen(nvi.searchString)-1] = '\0';
            break;

        default:
            wcsncat(nvi.searchString, xsprintf("%c", key).to_wstring(), 128);
            break;
    }
    self.saveInputedKey();
}

void ViWin*::input(ViWin* self, Vi* nvi) version 9
{
    if(nvi.mode == kSearchMode) {
        self.inputSearchlMode(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void Vi*::saveSearchString(Vi* self, const char* file_name) 
{
    char* home = getenv("HOME");
    
    if(home == null) {
        return;
    }
    
    string file_name2 = xsprintf("%s/.vin", home);
    
    system(xsprintf("mkdir -p '%s'", file_name2));
    
    file_name2 = xsprintf("%s/.vin/%s", home, file_name);
    
    FILE* f = fopen(file_name2, "w");

    if(f == null) {
        return;
    }
    
    if(wcscmp(self.searchString, wstring("")) != 0) 
    {
        fprintf(f, "%ls\n", self.searchString);
    }
    
    fclose(f);
}

void Vi*::readSearchString(Vi* self, const char* file_name) 
{
    char* home = getenv("HOME");
    
    if(home == null) {
        wcsncpy(self.searchString, wstring(""), 128);
        return;
    }
    
    string file_name2 = xsprintf("%s/.vin/%s", home, file_name);
    
    FILE* f = fopen(file_name2, "r");

    if(f == null) {
        wcsncpy(self.searchString, wstring(""), 128);
        return;
    }
    
    wchar_t line[4096];

    wchar_t* result = fgetws(line, 4096, f);
    
    if(result) {
        int len = wcslen(line);
        line[len-1] = 0;
        wcsncpy(self.searchString, line, 128);
    }

    fclose(f);
}

void Vi*::enterSearchMode(Vi* self, bool regex_search, bool reverse) version 9
{
    self.modeBeforeSearch = self.mode;
    self.mode = kSearchMode;
    wcsncpy(self.searchString, wstring(""), 128);
    self.regexSearch = regex_search;
    self.searchReverse = reverse;
    self.searchWholeWord = false;
}

void Vi*::exitFromSearchMode(Vi* self) 
{
    self.mode = self.modeBeforeSearch;
    self.modeBeforeSearch = kEditMode;
}

Vi*% Vi*::initialize(Vi*% self) version 9
{
    auto result = inherit(self);
    
    result.readSearchString("searchString.vin");
    result.modeBeforeSearch = kEditMode;
    result.searchIgnoreCase = true;
    result.searchSmartCase = true;

    result.events.replace('/', void lambda(Vi* self, int key) 
    {
        self.enterSearchMode(false, false);
        self.activeWin.saveInputedKey();
    });

    result.events.replace('?', void lambda(Vi* self, int key) 
    {
        self.enterSearchMode(false, true);
        self.activeWin.saveInputedKey();
    });

    result.events.replace('n', void lambda(Vi* self, int key) 
    {
        if(self.searchReverse) {
            self.activeWin.searchReverse(self, self.searchWholeWord);
        }
        else {
            self.activeWin.search(self, self.searchWholeWord);
        }
        self.activeWin.saveInputedKeyOnTheMovingCursor();
        //self.activeWin.saveInputedKey();
    });
    result.events.replace('N', void lambda(Vi* self, int key) 
    {
        if(self.searchReverse) {
            self.activeWin.search(self, self.searchWholeWord);
        }
        else {
            self.activeWin.searchReverse(self, self.searchWholeWord);
        }
        self.activeWin.saveInputedKeyOnTheMovingCursor();
        //self.activeWin.saveInputedKey();
    });
    result.events.replace('*', void lambda(Vi* self, int key) 
    {
        self.activeWin.searchWordOnCursor(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('#', void lambda(Vi* self, int key) 
    {
        self.activeWin.searchWordOnCursorReverse(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
        self.activeWin.saveInputedKey();
    });

    return result;
}
