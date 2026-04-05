#include "common.h"

static int word_char_kind(wchar_t c, bool big_word)
{
    if(c == 0 || xiswblank(c)) {
        return 0;
    }

    if(big_word) {
        return 1;
    }

    if(xiswalnum(c) || c == '_') {
        return 1;
    }

    return 2;
}

static int find_word_start_on_line(wstring line, int x, bool big_word)
{
    int kind = word_char_kind(line[x], big_word);

    while(x > 0 && word_char_kind(line[x-1], big_word) == kind) {
        x--;
    }

    return x;
}

static int find_word_end_on_line(wstring line, int x, bool big_word)
{
    int kind = word_char_kind(line[x], big_word);

    while(x + 1 < line.length() && word_char_kind(line[x+1], big_word) == kind) {
        x++;
    }

    return x;
}

static bool move_next_word_start(ViWin* self, bool big_word)
{
    int y = self.scroll + self.cursorY;
    int x = self.cursorX;

    if(y >= self.texts.length()) {
        return false;
    }

    auto line = self.texts.item(y, wstring(""));
    if(x < line.length() && word_char_kind(line[x], big_word) != 0) {
        x = find_word_end_on_line(line, x, big_word) + 1;
    }

    while(true) {
        line = self.texts.item(y, wstring(""));

        while(x < line.length()) {
            if(word_char_kind(line[x], big_word) != 0) {
                self.scroll = 0;
                self.cursorY = y;
                self.modifyOverCursorYValue();
                self.cursorX = x;
                self.modifyOverCursorXValue();
                return true;
            }

            x++;
        }

        if(y + 1 >= self.texts.length()) {
            return false;
        }

        y++;
        x = 0;
    }
}

static bool move_next_word_end(ViWin* self, bool big_word)
{
    int y = self.scroll + self.cursorY;
    int x = self.cursorX;

    while(y < self.texts.length()) {
        auto line = self.texts.item(y, wstring(""));

        while(x < line.length()) {
            if(word_char_kind(line[x], big_word) != 0) {
                int end = find_word_end_on_line(line, x, big_word);
                self.scroll = 0;
                self.cursorY = y;
                self.modifyOverCursorYValue();
                self.cursorX = end;
                self.modifyOverCursorXValue();
                return true;
            }

            x++;
        }

        y++;
        x = 0;
    }

    return false;
}

static bool move_prev_word_start(ViWin* self, bool big_word)
{
    int y = self.scroll + self.cursorY;
    int x = self.cursorX;

    if(y >= self.texts.length()) {
        return false;
    }

    auto line = self.texts.item(y, wstring(""));
    if(line.length() > 0 && x >= line.length()) {
        x = line.length() - 1;
    }

    if(line.length() > 0 && x >= 0 && word_char_kind(line[x], big_word) != 0) {
        int head = find_word_start_on_line(line, x, big_word);

        if(head < x) {
            self.scroll = 0;
            self.cursorY = y;
            self.modifyOverCursorYValue();
            self.cursorX = head;
            self.modifyOverCursorXValue();
            return true;
        }

        x = head - 1;
    }
    else {
        x--;
    }

    while(y >= 0) {
        line = self.texts.item(y, wstring(""));

        while(x >= 0) {
            if(word_char_kind(line[x], big_word) != 0) {
                int head = find_word_start_on_line(line, x, big_word);
                self.scroll = 0;
                self.cursorY = y;
                self.modifyOverCursorYValue();
                self.cursorX = head;
                self.modifyOverCursorXValue();
                return true;
            }

            x--;
        }

        y--;
        if(y >= 0) {
            line = self.texts.item(y, wstring(""));
            x = line.length() - 1;
        }
    }

    return false;
}

static bool move_prev_word_end(ViWin* self, bool big_word)
{
    int y = self.scroll + self.cursorY;
    int x = self.cursorX;

    if(y >= self.texts.length()) {
        return false;
    }

    auto line = self.texts.item(y, wstring(""));
    if(line.length() > 0 && x >= line.length()) {
        x = line.length() - 1;
    }

    if(line.length() > 0 && x >= 0 && word_char_kind(line[x], big_word) != 0) {
        x = find_word_start_on_line(line, x, big_word) - 1;
    }
    else {
        x--;
    }

    while(y >= 0) {
        line = self.texts.item(y, wstring(""));

        while(x >= 0) {
            if(word_char_kind(line[x], big_word) != 0) {
                int tail = find_word_end_on_line(line, x, big_word);
                self.scroll = 0;
                self.cursorY = y;
                self.modifyOverCursorYValue();
                self.cursorX = tail;
                self.modifyOverCursorXValue();
                return true;
            }

            x--;
        }

        y--;
        if(y >= 0) {
            line = self.texts.item(y, wstring(""));
            x = line.length() - 1;
        }
    }

    return false;
}

void ViWin*::forwardWord(ViWin* self) 
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    wchar_t* p = line + self.cursorX;

    if(self.cursorX == wcslen(line)) 
    {
        self.cursorY++;

        self.modifyOverCursorYValue();

        line = self.texts.item(self.scroll+self.cursorY, wstring(""));

        self.cursorX = 0;
    }

    if(wcslen(line) == 0) {
        while(wcslen(line) == 0) {
            self.cursorY++;

            self.modifyOverCursorYValue();

            if(self.scroll+self.cursorY >= self.texts.length()-1)
            {
                break;
            }

            line = self.texts.item(self.scroll+self.cursorY, wstring(""));
        }
        
        self.cursorX = 0;
    }
    else if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_' || (*p >= '0' && *p <= '9'))
    {
        while((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_' || (*p >= '0' && *p <= '9'))
        {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = borrow line;
                self.cursorX = 0;
            }
        }
    }
    else if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
    {
        while((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
        {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = borrow line;
                self.cursorX = 0;
            }
        }
    }
    else if(xiswalpha(*p)) {
        while(xiswalpha(*p)) {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = borrow line;
                self.cursorX = 0;
            }
        }
    }
    else if(xiswblank(*p)) {
        while(xiswblank(*p)) {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = borrow line;
                self.cursorX = 0;
            }
        }
    }
    else if(xiswdigit(*p)) {
        while(xiswdigit(*p)) {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = borrow line;
                self.cursorX = 0;
            }
        }
    }
    
    if(xiswblank(*p)) {
        while(xiswblank(*p)) {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = borrow line;
                self.cursorX = 0;
            }
        }
    }
}

void ViWin*::forwardWord2(ViWin* self) 
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    wchar_t* p = line + self.cursorX;

    if(self.cursorX == wcslen(line)) 
    {
        self.cursorY++;

        self.modifyOverCursorYValue();

        line = self.texts.item(self.scroll+self.cursorY, wstring(""));

        self.cursorX = 0;
    }

    if(wcslen(line) == 0) {
        while(wcslen(line) == 0) {
            self.cursorY++;

            self.modifyOverCursorYValue();

            if(self.scroll+self.cursorY >= self.texts.length()-1)
            {
                break;
            }

            line = self.texts.item(self.scroll+self.cursorY, wstring(""));
        }

        self.cursorX = 0;
    }
    else {
        p++;
        self.cursorX++;
        
        if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_' || (*p >= '0' && *p <= '9'))
        {
        
            while((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_' || (*p >= '0' && *p <= '9'))
            {
                p++;
                self.cursorX++;
    
                if(self.cursorX >= line.length())
                {
                    self.cursorY++;
    
                    if(self.scroll+self.cursorY > self.texts.length()-1)
                    {
                        self.cursorY--;
                        self.modifyUnderCursorYValue();
                        line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                        self.cursorX = line.length()-1;
                        break;
                    }
    
                    self.modifyOverCursorYValue();
    
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    p = borrow line;
                    self.cursorX = 0;
                }
            }
            self.cursorX--;
            
            if(self.cursorX < 0) {
                self.cursorX = 0;
            }
        }
        else if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
        {
            while((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
            {
                p++;
                self.cursorX++;
    
                if(self.cursorX >= line.length())
                {
                    self.cursorY++;
    
                    if(self.scroll+self.cursorY > self.texts.length()-1)
                    {
                        self.cursorY--;
                        self.modifyUnderCursorYValue();
                        line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                        self.cursorX = line.length()-1;
                        break;
                    }
    
                    self.modifyOverCursorYValue();
    
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    p = borrow line;
                    self.cursorX = 0;
                }
            }
            self.cursorX--;
            
            if(self.cursorX < 0) {
                self.cursorX = 0;
            }
        }
        else if(xiswblank(*p)) {
            while(xiswblank(*p)) {
                p++;
                self.cursorX++;
    
                if(self.cursorX >= line.length())
                {
                    self.cursorY++;
    
                    if(self.scroll+self.cursorY > self.texts.length()-1)
                    {
                        self.cursorY--;
                        self.modifyUnderCursorYValue();
                        line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                        self.cursorX = line.length()-1;
                        break;
                    }
    
                    self.modifyOverCursorYValue();
    
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    p = borrow line;
                    self.cursorX = 0;
                }
            }
        }
        else if(xiswdigit(*p)) {
            while(xiswdigit(*p)) {
                p++;
                self.cursorX++;
    
                if(self.cursorX >= line.length())
                {
                    self.cursorY++;
    
                    if(self.scroll+self.cursorY > self.texts.length()-1)
                    {
                        self.cursorY--;
                        self.modifyUnderCursorYValue();
                        line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                        self.cursorX = line.length()-1;
                        break;
                    }
    
                    self.modifyOverCursorYValue();
    
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    p = borrow line;
                    self.cursorX = 0;
                }
            }
            self.cursorX--;
            
            if(self.cursorX < 0) {
                self.cursorX = 0;
            }
        }
    }
}

void ViWin*::forwardBigWord(ViWin* self)
{
    move_next_word_start(self, true);
}

void ViWin*::forwardBigWord2(ViWin* self)
{
    move_next_word_end(self, true);
}

void ViWin*::backwardWord(ViWin* self) version 4
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    wchar_t* p = line + self.cursorX;

    if(self.cursorX == wcslen(line)) 
    {
        self.cursorX--;
        p--;

        if(self.cursorX < 0) {
            self.cursorX++;
            p++;
        }
    }

    if(wcslen(line) == 0) {
        while(wcslen(line) == 0) {
            self.cursorY--;

            self.modifyUnderCursorYValue();

            if(self.scroll == 0 && self.cursorY == 0)
            {
                break;
            }

            line = self.texts.item(self.scroll+self.cursorY, wstring(""));
        }

        self.cursorX = wcslen(self.texts.item(self.scroll+self.cursorY, wstring(""))) -1;

        if(self.cursorX < 0) {
            self.cursorX = 0;
        }
    }
    else if(xiswalnum(*p) || *p == '_') {
        int insert_count = 0;
        while(xiswalnum(*p) || *p == '_') {
            p--;
            self.cursorX--;
            
            insert_count++;

            if(self.cursorX < 0)
            {
                insert_count = 0;
                self.cursorX = 0;
                self.cursorY--;

                self.modifyUnderCursorYValue();

                if(self.scroll+self.cursorY <= 0)
                {
                    self.cursorY = 0;
                    self.scroll = 0;
                    break;
                }


                line = self.texts.item(self.scroll+self.cursorY, wstring(""));

                if(wcslen(line) == 0)
                {
                    p = borrow line;
                    self.cursorX = 0;
                }
                else {
                    self.cursorX = wcslen(line) -1;
                    p = line + self.cursorX;
                }
            }
        }
        
        if(insert_count > 3) {
            self.cursorX++;
        }
    }
    else if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
    {
        while((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
        {
            p--;
            self.cursorX--;

            if(self.cursorX < 0)
            {
                self.cursorX = 0;
                self.cursorY--;

                self.modifyUnderCursorYValue();

                if(self.scroll+self.cursorY <= 0) 
                {
                    self.cursorY = 0;
                    self.scroll = 0;
                    break;
                }

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));

                if(wcslen(line) == 0)
                {
                    p = borrow line;
                    self.cursorX = 0;
                }
                else {
                    self.cursorX = wcslen(line) -1;
                    p = line + self.cursorX;
                }
            }
        }
    }
    else if(xiswdigit(*p)) {
        while(xiswdigit(*p)) {
            p--;
            self.cursorX--;

            if(self.cursorX < 0)
            {
                self.cursorX = 0;
                self.cursorY--;

                self.modifyUnderCursorYValue();

                if(self.scroll+self.cursorY <= 0)
                {
                    self.cursorY = 0;
                    self.scroll = 0;
                    break;
                }


                line = self.texts.item(self.scroll+self.cursorY, wstring(""));

                if(wcslen(line) == 0)
                {
                    p = borrow line;
                    self.cursorX = 0;
                }
                else {
                    self.cursorX = wcslen(line) -1;
                    p = line + self.cursorX;
                }
            }
        }
    }
    else if(xiswblank(*p)) {
        while(xiswblank(*p)) {
            p--;
            self.cursorX--;

            if(self.cursorX < 0)
            {
                self.cursorX = 0;
                self.cursorY--;

                self.modifyUnderCursorYValue();

                if(self.scroll+self.cursorY <= 0)
                {
                    self.cursorY = 0;
                    self.scroll = 0;
                    break;
                }


                line = self.texts.item(self.scroll+self.cursorY, wstring(""));

                if(wcslen(line) == 0)
                {
                    p = borrow line;
                    self.cursorX = 0;
                }
                else {
                    self.cursorX = wcslen(line) -1;
                    p = line + self.cursorX;
                }
            }
        }
    }
}

void ViWin*::backwardBigWord(ViWin* self)
{
    move_prev_word_start(self, true);
}

void ViWin*::backwardEndWord(ViWin* self)
{
    move_prev_word_end(self, false);
}

Vi*% Vi*::initialize(Vi*% self) version 4
{
    auto result = inherit(self);

    result.events.replace('w', void lambda(Vi* self, int key) 
    {
        if(self.activeWin.digitInput > 0) {
            for(int i=0; i<self.activeWin.digitInput+1; i++) {
                self.activeWin.forwardWord();
                
            }
            self.activeWin.digitInput = 0;
        }
        else {
            self.activeWin.forwardWord();
        }
        
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('e', void lambda(Vi* self, int key) 
    {
        if(self.activeWin.digitInput > 0) {
            for(int i=0; i<self.activeWin.digitInput+1; i++) {
                self.activeWin.forwardWord2();
                
            }
            self.activeWin.digitInput = 0;
        }
        else {
            self.activeWin.forwardWord2();
        }
        
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('b', void lambda(Vi* self, int key) 
    {
        if(self.activeWin.digitInput > 0) {
            for(int i=0; i<self.activeWin.digitInput+1; i++) {
                self.activeWin.backwardWord();
                
            }
            self.activeWin.digitInput = 0;
        }
        else {
            self.activeWin.backwardWord();
        }
        
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('W', void lambda(Vi* self, int key)
    {
        if(self.activeWin.digitInput > 0) {
            for(int i=0; i<self.activeWin.digitInput+1; i++) {
                self.activeWin.forwardBigWord();
            }
            self.activeWin.digitInput = 0;
        }
        else {
            self.activeWin.forwardBigWord();
        }

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('E', void lambda(Vi* self, int key)
    {
        if(self.activeWin.digitInput > 0) {
            for(int i=0; i<self.activeWin.digitInput+1; i++) {
                self.activeWin.forwardBigWord2();
            }
            self.activeWin.digitInput = 0;
        }
        else {
            self.activeWin.forwardBigWord2();
        }

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('B', void lambda(Vi* self, int key)
    {
        if(self.activeWin.digitInput > 0) {
            for(int i=0; i<self.activeWin.digitInput+1; i++) {
                self.activeWin.backwardBigWord();
            }
            self.activeWin.digitInput = 0;
        }
        else {
            self.activeWin.backwardBigWord();
        }

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });

    return result;
}
