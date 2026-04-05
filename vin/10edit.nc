#include "common.h"

enum {
    kOperatorDelete,
    kOperatorChange,
    kOperatorYank,
};

static bool is_text_object_word_char(wchar_t c)
{
    return xiswalnum(c) || c == '_';
}

static void normalize_operator_range(int* head_y, int* head_x, int* tail_y, int* tail_x)
{
    if(*head_y > *tail_y || (*head_y == *tail_y && *head_x > *tail_x)) {
        int tmp = *head_y;
        *head_y = *tail_y;
        *tail_y = tmp;

        tmp = *head_x;
        *head_x = *tail_x;
        *tail_x = tmp;
    }
}

static void clamp_operator_position(ViWin* self, int y, int* x)
{
    auto line = self.texts.item(y, wstring(""));

    if(*x < 0) {
        *x = 0;
    }
    if(*x > line.length()) {
        *x = line.length();
    }
}

static int operator_repeat_count(ViWin* self)
{
    if(self.digitInput > 0) {
        return self.digitInput + 1;
    }

    return 1;
}

static bool yank_operator_range(ViWin* self, Vi* nvi, int head_y, int head_x, int tail_y, int tail_x)
{
    normalize_operator_range(&head_y, &head_x, &tail_y, &tail_x);
    clamp_operator_position(self, head_y, &head_x);
    clamp_operator_position(self, tail_y, &tail_x);

    if(head_y == tail_y && head_x == tail_x) {
        return false;
    }

    nvi.yank.reset();
    nvi.yankKind = kYankKindNoLine;

    if(head_y == tail_y) {
        auto line = self.texts.item(head_y, wstring(""));
        nvi.yank.push_back(line.substring(head_x, tail_x));
    }
    else {
        auto first_line = self.texts.item(head_y, wstring(""));
        nvi.yank.push_back(first_line.substring(head_x, -1));

        for(int i=head_y+1; i<tail_y; i++) {
            nvi.yank.push_back(clone self.texts.item(i, wstring("")));
        }

        auto last_line = self.texts.item(tail_y, wstring(""));
        nvi.yank.push_back(last_line.substring(0, tail_x));
    }

    self.saveYankToFile(nvi);

    return true;
}

static bool delete_operator_range(ViWin* self, Vi* nvi, int head_y, int head_x, int tail_y, int tail_x)
{
    normalize_operator_range(&head_y, &head_x, &tail_y, &tail_x);
    clamp_operator_position(self, head_y, &head_x);
    clamp_operator_position(self, tail_y, &tail_x);

    if(head_y == tail_y && head_x == tail_x) {
        return false;
    }

    if(!yank_operator_range(self, nvi, head_y, head_x, tail_y, tail_x)) {
        return false;
    }

    self.pushUndo();

    if(head_y == tail_y) {
        auto line = self.texts.item(head_y, wstring(""));
        line.delete(head_x, tail_x);
        self.texts_length.replace(head_y, wcslen(line));
    }
    else {
        auto first_line = self.texts.item(head_y, wstring(""));
        auto last_line = self.texts.item(tail_y, wstring(""));
        auto new_line = xsprintf("%ls%ls", first_line.substring(0, head_x), last_line.substring(tail_x, -1)).to_wstring();

        self.texts.replace(head_y, clone new_line);
        self.texts_length.replace(head_y, wcslen(new_line));
        self.texts.delete(head_y+1, tail_y+1);
        self.texts_length.delete(head_y+1, tail_y+1);
    }

    self.cursorY = head_y - self.scroll;
    self.modifyUnderCursorYValue();
    self.modifyOverCursorYValue();
    self.cursorX = head_x;
    self.modifyUnderCursorXValue();
    self.modifyOverCursorXValue();

    return true;
}

static bool get_find_motion_range(ViWin* self, int motion, int find_char, int* head_y, int* head_x, int* tail_y, int* tail_x)
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    int count = operator_repeat_count(self);
    int match_x = -1;

    switch(motion) {
        case 'f': {
            int start = self.cursorX + 1;
            for(int i=0; i<count; i++) {
                match_x = -1;
                for(int j=start; j<line.length(); j++) {
                    if(line[j] == find_char) {
                        match_x = j;
                        start = j + 1;
                        break;
                    }
                }
                if(match_x == -1) {
                    return false;
                }
            }

            *head_y = self.scroll+self.cursorY;
            *head_x = self.cursorX;
            *tail_y = self.scroll+self.cursorY;
            *tail_x = match_x + 1;
            return true;
        }

        case 't': {
            int start = self.cursorX + 1;
            for(int i=0; i<count; i++) {
                match_x = -1;
                for(int j=start; j<line.length(); j++) {
                    if(line[j] == find_char) {
                        match_x = j;
                        start = j + 1;
                        break;
                    }
                }
                if(match_x == -1) {
                    return false;
                }
            }

            *head_y = self.scroll+self.cursorY;
            *head_x = self.cursorX;
            *tail_y = self.scroll+self.cursorY;
            *tail_x = match_x;
            return true;
        }

        case 'F': {
            int start = self.cursorX - 1;
            for(int i=0; i<count; i++) {
                match_x = -1;
                for(int j=start; j>=0; j--) {
                    if(line[j] == find_char) {
                        match_x = j;
                        start = j - 1;
                        break;
                    }
                }
                if(match_x == -1) {
                    return false;
                }
            }

            *head_y = self.scroll+self.cursorY;
            *head_x = match_x;
            *tail_y = self.scroll+self.cursorY;
            *tail_x = self.cursorX + 1;
            return true;
        }

        case 'T': {
            int start = self.cursorX - 1;
            for(int i=0; i<count; i++) {
                match_x = -1;
                for(int j=start; j>=0; j--) {
                    if(line[j] == find_char) {
                        match_x = j;
                        start = j - 1;
                        break;
                    }
                }
                if(match_x == -1) {
                    return false;
                }
            }

            *head_y = self.scroll+self.cursorY;
            *head_x = match_x + 1;
            *tail_y = self.scroll+self.cursorY;
            *tail_x = self.cursorX + 1;
            return true;
        }
    }

    return false;
}

static bool get_motion_range(ViWin* self, int motion, int* head_y, int* head_x, int* tail_y, int* tail_x)
{
    int scroll_before = self.scroll;
    int cursor_y_before = self.cursorY;
    int cursor_x_before = self.cursorX;
    int count = operator_repeat_count(self);

    switch(motion) {
        case '$': {
            auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

            *head_y = self.scroll+self.cursorY;
            *head_x = self.cursorX;
            *tail_y = self.scroll+self.cursorY;
            *tail_x = line.length();
            return *head_x != *tail_x;
        }

        case 'w':
            for(int i=0; i<count; i++) {
                self.forwardWord();
            }
            *head_y = scroll_before + cursor_y_before;
            *head_x = cursor_x_before;
            *tail_y = self.scroll+self.cursorY;
            *tail_x = self.cursorX;
            break;

        case 'e':
            for(int i=0; i<count; i++) {
                self.forwardWord2();
            }
            *head_y = scroll_before + cursor_y_before;
            *head_x = cursor_x_before;
            *tail_y = self.scroll+self.cursorY;
            *tail_x = self.cursorX + 1;
            break;

        case 'b':
            for(int i=0; i<count; i++) {
                self.backwardWord();
            }
            *head_y = self.scroll+self.cursorY;
            *head_x = self.cursorX;
            *tail_y = scroll_before + cursor_y_before;
            *tail_x = cursor_x_before + 1;
            break;

        case 'W':
            for(int i=0; i<count; i++) {
                self.forwardBigWord();
            }
            *head_y = scroll_before + cursor_y_before;
            *head_x = cursor_x_before;
            *tail_y = self.scroll+self.cursorY;
            *tail_x = self.cursorX;
            break;

        case 'E':
            for(int i=0; i<count; i++) {
                self.forwardBigWord2();
            }
            *head_y = scroll_before + cursor_y_before;
            *head_x = cursor_x_before;
            *tail_y = self.scroll+self.cursorY;
            *tail_x = self.cursorX + 1;
            break;

        case 'B':
            for(int i=0; i<count; i++) {
                self.backwardBigWord();
            }
            *head_y = self.scroll+self.cursorY;
            *head_x = self.cursorX;
            *tail_y = scroll_before + cursor_y_before;
            *tail_x = cursor_x_before + 1;
            break;

        default:
            return false;
    }

    self.scroll = scroll_before;
    self.cursorY = cursor_y_before;
    self.cursorX = cursor_x_before;

    normalize_operator_range(head_y, head_x, tail_y, tail_x);
    clamp_operator_position(self, *head_y, head_x);
    clamp_operator_position(self, *tail_y, tail_x);

    return !(*head_y == *tail_y && *head_x == *tail_x);
}

static bool get_ge_motion_range(ViWin* self, int* head_y, int* head_x, int* tail_y, int* tail_x)
{
    int scroll_before = self.scroll;
    int cursor_y_before = self.cursorY;
    int cursor_x_before = self.cursorX;
    int count = operator_repeat_count(self);

    for(int i=0; i<count; i++) {
        self.backwardEndWord();
    }

    *head_y = self.scroll+self.cursorY;
    *head_x = self.cursorX;
    *tail_y = scroll_before + cursor_y_before;
    *tail_x = cursor_x_before + 1;

    self.scroll = scroll_before;
    self.cursorY = cursor_y_before;
    self.cursorX = cursor_x_before;

    normalize_operator_range(head_y, head_x, tail_y, tail_x);
    clamp_operator_position(self, *head_y, head_x);
    clamp_operator_position(self, *tail_y, tail_x);

    return !(*head_y == *tail_y && *head_x == *tail_x);
}

static bool get_word_text_object_range(ViWin* self, bool around, int* head, int* tail)
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    if(line.length() == 0) {
        return false;
    }

    int pos = self.cursorX;
    if(pos >= line.length()) {
        pos = line.length()-1;
    }
    if(pos < 0) {
        pos = 0;
    }

    if(!is_text_object_word_char(line[pos])) {
        while(pos < line.length() && !is_text_object_word_char(line[pos])) {
            pos++;
        }

        if(pos >= line.length()) {
            pos = self.cursorX;
            if(pos >= line.length()) {
                pos = line.length()-1;
            }

            while(pos >= 0 && !is_text_object_word_char(line[pos])) {
                pos--;
            }
        }
    }

    if(pos < 0 || pos >= line.length() || !is_text_object_word_char(line[pos])) {
        return false;
    }

    *head = pos;
    while(*head > 0 && is_text_object_word_char(line[*head-1])) {
        (*head)--;
    }

    *tail = pos + 1;
    while(*tail < line.length() && is_text_object_word_char(line[*tail])) {
        (*tail)++;
    }

    if(around) {
        int tail2 = *tail;
        while(tail2 < line.length() && xiswblank(line[tail2])) {
            tail2++;
        }

        if(tail2 > *tail) {
            *tail = tail2;
        }
        else {
            int head2 = *head;
            while(head2 > 0 && xiswblank(line[head2-1])) {
                head2--;
            }
            *head = head2;
        }
    }

    return true;
}

static bool get_quote_text_object_range(ViWin* self, wchar_t quote, bool around, int* head, int* tail)
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    if(line.length() == 0) {
        return false;
    }

    int pos = self.cursorX;
    if(pos >= line.length()) {
        pos = line.length()-1;
    }
    if(pos < 0) {
        pos = 0;
    }

    int left = -1;
    for(int i=pos; i>=0; i--) {
        if(line[i] == quote) {
            left = i;
            break;
        }
    }

    if(left == -1) {
        return false;
    }

    int right = -1;
    for(int i=left+1; i<line.length(); i++) {
        if(line[i] == quote) {
            right = i;
            break;
        }
    }

    if(right == -1) {
        return false;
    }

    if(around) {
        *head = left;
        *tail = right + 1;
    }
    else {
        *head = left + 1;
        *tail = right;
    }

    return *head <= *tail;
}

static bool get_block_text_object_range(ViWin* self, wchar_t open_brace, wchar_t close_brace, bool around, int* head, int* tail)
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    if(line.length() == 0) {
        return false;
    }

    int pos = self.cursorX;
    if(pos >= line.length()) {
        pos = line.length()-1;
    }
    if(pos < 0) {
        pos = 0;
    }

    int left = -1;
    int nest = 0;
    for(int i=pos; i>=0; i--) {
        if(line[i] == open_brace) {
            if(nest == 0) {
                left = i;
                break;
            }
            nest--;
        }
        else if(line[i] == close_brace) {
            nest++;
        }
    }

    if(left == -1) {
        return false;
    }

    int right = -1;
    nest = 0;
    for(int i=left; i<line.length(); i++) {
        if(line[i] == open_brace) {
            nest++;
        }
        else if(line[i] == close_brace) {
            nest--;

            if(nest == 0) {
                right = i;
                break;
            }
        }
    }

    if(right == -1 || right < left) {
        return false;
    }

    if(around) {
        *head = left;
        *tail = right + 1;
    }
    else {
        *head = left + 1;
        *tail = right;
    }

    return *head <= *tail;
}

static bool get_text_object_range(ViWin* self, bool around, int key, int* head, int* tail)
{
    switch(key) {
        case 'w':
            return get_word_text_object_range(self, around, head, tail);

        case '"':
        case '\'':
            return get_quote_text_object_range(self, key, around, head, tail);

        case '(':
        case ')':
            return get_block_text_object_range(self, '(', ')', around, head, tail);

        case '[':
        case ']':
            return get_block_text_object_range(self, '[', ']', around, head, tail);

        case '{':
        case '}':
            return get_block_text_object_range(self, '{', '}', around, head, tail);
    }

    return false;
}

static bool yank_text_object(ViWin* self, Vi* nvi, bool around, int key)
{
    int head;
    int tail;

    if(!get_text_object_range(self, around, key, &head, &tail)) {
        return false;
    }

    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    nvi.yank.reset();
    nvi.yank.push_back(line.substring(head, tail));
    nvi.yankKind = kYankKindNoLine;
    self.saveYankToFile(nvi);

    return true;
}

static bool delete_text_object(ViWin* self, Vi* nvi, bool around, int key)
{
    int head;
    int tail;

    if(!get_text_object_range(self, around, key, &head, &tail)) {
        return false;
    }

    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    nvi.yank.reset();
    nvi.yank.push_back(line.substring(head, tail));
    nvi.yankKind = kYankKindNoLine;
    self.saveYankToFile(nvi);

    self.pushUndo();
    line.delete(head, tail);
    self.texts_length.replace(self.scroll+self.cursorY, wcslen(line));
    self.cursorX = head;
    self.modifyUnderCursorXValue();
    self.modifyOverCursorXValue();

    return true;
}

static bool apply_text_object_operator(Vi* self, int operator_kind, bool around, int key)
{
    switch(operator_kind) {
        case kOperatorDelete:
            if(delete_text_object(self.activeWin, self, around, key)) {
                self.activeWin.writed = true;
                return true;
            }
            break;

        case kOperatorChange:
            if(delete_text_object(self.activeWin, self, around, key)) {
                self.enterInsertMode2();
                self.activeWin.writed = true;
                return true;
            }
            break;

        case kOperatorYank:
            return yank_text_object(self.activeWin, self, around, key);
    }

    return false;
}

static bool apply_motion_operator(Vi* self, int operator_kind, int motion, int motion_key)
{
    int head_y;
    int head_x;
    int tail_y;
    int tail_x;
    bool result = false;

    if(motion == 'f' || motion == 't' || motion == 'F' || motion == 'T') {
        result = get_find_motion_range(self.activeWin, motion, motion_key, &head_y, &head_x, &tail_y, &tail_x);
    }
    else if(motion == 'g' && motion_key == 'e') {
        result = get_ge_motion_range(self.activeWin, &head_y, &head_x, &tail_y, &tail_x);
    }
    else {
        result = get_motion_range(self.activeWin, motion, &head_y, &head_x, &tail_y, &tail_x);
    }

    if(!result) {
        return false;
    }

    switch(operator_kind) {
        case kOperatorDelete:
            if(delete_operator_range(self.activeWin, self, head_y, head_x, tail_y, tail_x)) {
                self.activeWin.writed = true;
                return true;
            }
            break;

        case kOperatorChange:
            if(delete_operator_range(self.activeWin, self, head_y, head_x, tail_y, tail_x)) {
                self.enterInsertMode2();
                self.activeWin.writed = true;
                return true;
            }
            break;

        case kOperatorYank:
            return yank_operator_range(self.activeWin, self, head_y, head_x, tail_y, tail_x);
    }

    return false;
}

static void run_operator_pending(Vi* self, int operator_kind)
{
    auto key2 = self.activeWin.getKey(true);
    bool handled = false;

    switch(key2) {
        case 'd':
            if(operator_kind == kOperatorDelete) {
                self.activeWin.deleteOneLine(self);
                self.activeWin.writed = true;
                handled = true;
            }
            break;

        case 'c':
            if(operator_kind == kOperatorChange) {
                self.activeWin.deleteOneLine2(self);
                self.enterInsertMode();
                if(self.activeWin.texts.length() != 0) {
                    self.activeWin.cursorX = 0;
                }
                self.activeWin.writed = true;
                handled = true;
            }
            break;

        case 'y':
            if(operator_kind == kOperatorYank) {
                self.activeWin.yankOneLine(self);
                handled = true;
            }
            break;

        case 'i':
        case 'a':
            handled = apply_text_object_operator(self, operator_kind, key2 == 'a', self.activeWin.getKey(false));
            break;

        case 'w':
        case 'e':
        case 'b':
        case 'W':
        case 'E':
        case 'B':
        case '$':
            handled = apply_motion_operator(self, operator_kind, key2, -1);
            break;

        case 'f':
        case 't':
        case 'F':
        case 'T':
            handled = apply_motion_operator(self, operator_kind, key2, self.activeWin.getKey(false));
            break;

        case 'g':
            handled = apply_motion_operator(self, operator_kind, key2, self.activeWin.getKey(false));
            break;
    }

    self.activeWin.digitInput = 0;
    self.activeWin.saveInputedKey();
}

ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 10
{
    auto result = inherit(self, y, x, width, height, vi);
    
    result.mRepeatFowardNextCharacterKind = kRFNCNone;
    result.mRepeatFowardNextCharacter = 0;

    return result;
}

void ViWin*::modifyCursorOnDeleting(ViWin* self) 
{
    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue2();
}

void ViWin*::deleteOneLine(ViWin* self, Vi* nvi) version 10
{
    if(self.digitInput > 0 && !gBinaryMode) {
        self.pushUndo();
        
        nvi.yank.reset();
        nvi.yankKind = kYankKindLine;
        
        for(int i=0; i<self.digitInput+1; i++) {
            auto line = self.texts.item(self.scroll+self.cursorY, null);
            
            if(line != null) {
                nvi.yank.push_back(clone line);
                
                self.texts.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
                self.texts_length.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
        
                self.modifyCursorOnDeleting();
            }
            
        }
        
        self.saveYankToFile(nvi);
        self.digitInput = 0;
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        if(line != null) {
            self.pushUndo();
            nvi.yank.reset();
            nvi.yank.push_back(clone line);
            nvi.yankKind = kYankKindLine;
            self.saveYankToFile(nvi);
            self.texts.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
            self.texts_length.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
    
            self.modifyCursorOnDeleting();
        }
    }
}

void ViWin*::deleteOneLine2(ViWin* self, Vi* nvi) 
{
    if(self.digitInput > 0) {
        self.pushUndo();
        
        nvi.yank.reset();
        nvi.yankKind = kYankKindLine;
        
        for(int i=0; i<self.digitInput+1; i++) {
            auto line = self.texts.item(self.scroll+self.cursorY, null);
            
            if(line != null) {
                nvi.yank.push_back(clone line);
                
                self.texts.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
                self.texts_length.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
        
                self.modifyCursorOnDeleting();
            }
        }
        
        self.digitInput = 0;
        self.saveYankToFile(nvi);
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        if(line != null) {
            self.pushUndo();
            self.texts.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
            self.texts_length.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
            self.texts.insert(self.scroll+self.cursorY, wstring(""));
            self.texts_length.insert(self.scroll+self.cursorY, 0);
    
            self.modifyCursorOnDeleting();
        }
    }
}

void ViWin*::deleteWord(ViWin* self, Vi* nvi) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) == 0) {
            self.deleteOneLine(nvi);
        }
        else {
            int count = self.digitInput + 1;
            
            int x = self.cursorX;
    
            for(int i=0; i<count; i++) {
                wchar_t* p = line + x;
        
                if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ))
                {
                    while((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ))
                    {
                        p++;
                        x++;
        
                        if(x >= line.length())
                        {
                            break;
                        }
                    }
                }
                else if(xiswalnum(*p) || *p == '_') {
                    while(xiswalnum(*p) || *p == '_') {
                        p++;
                        x++;
        
                        if(x >= line.length())
                        {
                            break;
                        }
                    }
                }
                else if(xiswblank(*p)) {
                    while(xiswblank(*p)) {
                        p++;
                        x++;
        
                        if(x >= line.length())
                        {
                            break;
                        }
                    }
                }
                else if(xiswdigit(*p)) {
                    while(xiswdigit(*p)) {
                        p++;
                        x++;
        
                        if(x >= line.length())
                        {
                            break;
                        }
                    }
                }
                
            }
    
            nvi.yank.reset();
            nvi.yank.push_back(line.substring(self.cursorX, x));
            nvi.yankKind = kYankKindNoLine;
            self.saveYankToFile(nvi);
            line.delete(self.cursorX, x);
    
            self.modifyCursorOnDeleting();
        }
        
        self.digitInput = 0;
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) == 0) {
            self.deleteOneLine(nvi);
        }
        else {
            int x = self.cursorX;
    
            wchar_t* p = line + x;
    
            if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ))
            {
                while((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ))
                {
                    p++;
                    x++;
    
                    if(x >= line.length())
                    {
                        break;
                    }
                }
            }
            else if(xiswalnum(*p) || *p == '_') {
                while(xiswalnum(*p) || *p == '_') {
                    p++;
                    x++;
    
                    if(x >= line.length())
                    {
                        break;
                    }
                }
            }
            else if(xiswblank(*p)) {
                while(xiswblank(*p)) {
                    p++;
                    x++;
    
                    if(x >= line.length())
                    {
                        break;
                    }
                }
            }
            else if(xiswdigit(*p)) {
                while(xiswdigit(*p)) {
                    p++;
                    x++;
    
                    if(x >= line.length())
                    {
                        break;
                    }
                }
            }
    
            nvi.yank.reset();
            nvi.yank.push_back(line.substring(self.cursorX, x));
            nvi.yankKind = kYankKindNoLine;
            self.saveYankToFile(nvi);
            line.delete(self.cursorX, x);
    
            self.modifyCursorOnDeleting();
        }
    }
}

void ViWin*::deleteForNextCharacter(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        auto key = self.getKey(false);
    
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) > 0) {
            int x = self.cursorX;
            
            int count = self.digitInput + 1;
            
            wchar_t* p;
    
            for(int i=0; i<count; i++) {
                p = line + x;
        
                while(*p != key) {
                    p++;
                    x++;
        
                    if(x >= line.length())
                    {
                        break;
                    }
                }
                
                if(i != count -1) {
                    x++;
                }
                
            }
            
            if(*p == key) {
                line.delete(self.cursorX, x+1);
            }
        }
        
        self.digitInput = 0;
    }
    else {
        auto key = self.getKey(false);
    
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) > 0) {
            int x = self.cursorX;
    
            wchar_t* p = line + x;
    
            while(*p != key) {
                p++;
                x++;
    
                if(x >= line.length())
                {
                    break;
                }
            }
            
            if(*p == key) {
                line.delete(self.cursorX, x+1);
            }
        }
    }
}

void ViWin*::deleteForNextCharacter2(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        auto key = self.getKey(false);
    
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) > 0) {
            int x = self.cursorX;
            
            int count = self.digitInput + 1;
            
            wchar_t* p;
    
            for(int i=0; i<count; i++) {
                p = line + x;
        
                while(*p != key) {
                    p++;
                    x++;
        
                    if(x >= line.length())
                    {
                        break;
                    }
                }
                
                if(i != count -1) {
                    x++;
                }
                
            }
            
            if(*p == key) {
                line.delete(self.cursorX, x);
            }
        }
        
        self.digitInput = 0;
    }
    else {
        auto key = self.getKey(false);
    
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) > 0) {
            int x = self.cursorX;
    
            wchar_t* p = line + x;
    
            while(*p != key) {
                p++;
                x++;
    
                if(x >= line.length())
                {
                    break;
                }
            }
            
            if(*p == key) {
                line.delete(self.cursorX, x);
            }
        }
    }
}

void ViWin*::deleteCursorCharactor(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0 && !gBinaryMode) {
        int num = self.digitInput + 1;
        
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        int deleted_num = 0;
        
        for(int i= 0; i<num; i++) {
            if(self.cursorX >= line.length()) {
                break;
            }
            line.delete(self.cursorX, self.cursorX+1);
            deleted_num++;
        }

        int len = self.texts_length.item(self.scroll+self.cursorY, -1);
        if(len != -1) {
            len -= deleted_num;
            if(len < 0) {
                len = 0;
            }
            self.texts_length.replace(self.scroll+self.cursorY, len);
        }
    
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        if(gBinaryMode) {
            auto line = self.texts.item(self.scroll+self.cursorY, null);
            
            int len = self.texts_length.item(self.scroll+self.cursorY, -1);
            len--;
            self.texts_length.replace(self.scroll+self.cursorY, len);
            
            if(len >= 1) {
                wchar_t*% new_line = new wchar_t[len+1];
                
                memcpy(new_line, line, sizeof(wchar_t)*self.cursorX);
                memcpy(new_line + self.cursorX, line + self.cursorX+1, sizeof(wchar_t)*(len - self.cursorX));
                self.texts.replace(self.scroll+self.cursorY, new_line);
            
                self.modifyOverCursorXValue();
            }
        }
        else {
            auto line = self.texts.item(self.scroll+self.cursorY, null);
            line.delete(self.cursorX, self.cursorX+1);
            
            int len = self.texts_length.item(self.scroll+self.cursorY, -1);
            len--;
            self.texts_length.replace(self.scroll+self.cursorY, len);
        
            self.modifyOverCursorXValue();
        }
    }
}

void ViWin*::deleteBack(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        int num = self.digitInput + 1;
        
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        for(int i= 0; i<num; i++) {
            if(self.cursorX > 0) {
                self.cursorX--;
                line.delete(self.cursorX, self.cursorX+1);
            }
            
        }
    
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        if(self.cursorX > 0) {
            self.cursorX--;
            line.delete(self.cursorX, self.cursorX+1);
        }
    
        self.modifyOverCursorXValue();
    }
}

void ViWin*::getCursorNumber(ViWin* self, int* head, int* tail) 
{
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    auto c = line[self.cursorX];

    if(xiswdigit(c)) {
        /// back ///
        *head = self.cursorX;

        if(*head > 0) {
            while(true) {
                if(*head < 0) {
                    break;
                }

                auto c = line[*head];
                
                if(xiswdigit(c)) {
                    (*head)--;
                }
                else {
                    (*head)++;
                    break;
                }
            }
        }
        
        if(*head < 0) {
            *head = 0;
        };

        *tail = self.cursorX;
        
        while(true) {
            auto c = line[*tail];
            
            if(xiswdigit(c)) {
                (*tail)++;
            }
            else {
                break;
            }
        }
    }
    else {
        *head = -1;
        *tail = -1;
    }
}

void ViWin*::incrementNumber(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        int num = self.digitInput + 1;
        
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        int head;
        int tail;
        self.getCursorNumber(&head, &tail);
        
        if(head != -1 && tail != -1) {
            string number_string = line.substring(head, tail).to_string();
            
            int n = atoi(number_string);
            
            n += num;
            
            auto new_line = xsprintf("%ls%d%ls", line.substring(0, head), n, line.substring(tail, -1)).to_wstring();
            
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
        }
    
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        int head;
        int tail;
        self.getCursorNumber(&head, &tail);
        
        if(head != -1 && tail != -1) {
            string number_string = line.substring(head, tail).to_string();
            
            int n = atoi(number_string);
            
            n++;
            
            auto new_line = xsprintf("%ls%d%ls", line.substring(0, head), n, line.substring(tail, -1)).to_wstring();
            
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
        }

        self.modifyOverCursorXValue();
    }
}

void ViWin*::replaceCursorCharactor(ViWin* self) 
{
    self.pushUndo();
    
    auto key = self.getKey(false);
    
/*
    if(self.digitInput > 0) {
        int num = self.digitInput + 1;
        
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        for(int i= 0; i<num; i++) {
            line.replace(self.cursorX+i, (wchar_t)key);
        }
        
        self.digitInput = 0;
    }
    else {
*/
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        line[self.cursorX] = (wchar_t)key;
//    }
}

void ViWin*::deleteUntilTail(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        line.delete(self.cursorX, -1);
        
        int num = self.digitInput + 1;
        
        for(int i=1; i<num; i++) {
            auto line = self.texts.item(self.scroll+self.cursorY+1, null);
            
            if(line != null) {
                self.texts.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
                self.texts_length.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
        
                self.modifyCursorOnDeleting();
            }
            
        }
        
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        line.delete(self.cursorX, -1);
        
        self.modifyOverCursorXValue();
    }
}

void ViWin*::joinLines(ViWin* self) 
{
    self.pushUndo();

    if(self.scroll+self.cursorY+1 < self.texts.length()) {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        auto next_line = self.texts.item(self.scroll+self.cursorY+1, null);

        auto line2 = xsprintf("%ls %ls", line, next_line).to_wstring();

        self.texts.replace(self.scroll+self.cursorY, line2);
        self.texts_length.replace(self.scroll+self.cursorY, wcslen(line2));
        self.texts.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
        self.texts_length.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
        self.texts_length.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
    }

    self.modifyOverCursorXValue();
}

void ViWin*::yankOneLine(ViWin* self, Vi* nvi) 
{
    if(self.digitInput > 0) {
        self.pushUndo();
        
        nvi.yank.reset();
        nvi.yankKind = kYankKindLine;
        
        for(int i=0; i<self.digitInput+1; i++) {
            auto line = self.texts.item(self.scroll+self.cursorY+i, null);
            
            if(line != null) {
                nvi.yank.push_back(clone line);
            }
            
        }
        
        self.digitInput = 0;
        self.saveYankToFile(nvi);
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);

        if(line != null) {
            self.pushUndo();
            nvi.yank.reset();
            nvi.yank.push_back(clone line);
            nvi.yankKind = kYankKindLine;
            self.saveYankToFile(nvi);
        }
    }
}

void ViWin*::joinLines2(ViWin* self) version 10
{
    self.pushUndo();

    if(self.scroll+self.cursorY+1 < self.texts.length()) {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        auto next_line = clone self.texts.item(self.scroll+self.cursorY+1, null);

        self.texts.replace(self.scroll+self.cursorY, xsprintf("%ls%ls", line, next_line).to_wstring());
        self.texts_length.replace(self.scroll+self.cursorY, wcslen(xsprintf("%ls%ls", line, next_line).to_wstring()));
        self.texts.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
        self.texts_length.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
    }

    self.modifyOverCursorXValue();
}

void ViWin*::forwardToNextCharacter1(ViWin* self, int key) 
{
    self.mRepeatFowardNextCharacterKind = kRFNC1;
    self.mRepeatFowardNextCharacter = key;
    
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            auto cursor_x = line.substring(self.cursorX+1, -1).index(xsprintf("%c", key).to_wstring(), -1);
            
            if(cursor_x != -1) {
                self.cursorX += cursor_x + 1;
            }
            else {
                break;
            }
            
        }
        
        self.digitInput = 0;
    }
    else {
        auto cursor_x = line.substring(self.cursorX + 1, -1).index(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX += cursor_x + 1;
        }
    }
}

void ViWin*::forwardToNextCharacter2(ViWin* self, int key) 
{
    self.mRepeatFowardNextCharacterKind = kRFNC2;
    self.mRepeatFowardNextCharacter = key;
    
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            auto cursor_x = line.substring(self.cursorX + 2, -1).index(xsprintf("%c", key).to_wstring(), -1);
            
            if(cursor_x != -1) {
                self.cursorX += cursor_x + 1;
            }
            else {
                break;
            }
            
        }
        
        self.digitInput = 0;
    }
    else {
        auto cursor_x = line.substring(self.cursorX+1, -1).index(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX += cursor_x;
        }
    }
}

void ViWin*::repeatForwardNextCharacter(ViWin* self) 
{
    switch(self.mRepeatFowardNextCharacterKind) {
        case kRFNC1:
            self.forwardToNextCharacter1(self.mRepeatFowardNextCharacter);
            break;
            
        case kRFNC2:
            self.cursorX++;
            self.forwardToNextCharacter2(self.mRepeatFowardNextCharacter);
            break;
    }
}

void ViWin*::backwardToNextCharacter1(ViWin* self) 
{
    auto key = self.getKey(false);
    
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            auto cursor_x = line.substring(0, self.cursorX).rindex(xsprintf("%c", key).to_wstring(), -1);
            
            if(cursor_x != -1) {
                self.cursorX = cursor_x;
            }
            else {
                break;
            }
            
        }
        
        self.digitInput = 0;
    }
    else {
        auto cursor_x = line.substring(0, self.cursorX).rindex(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX = cursor_x;
        }
    }
}

void ViWin*::backwardToNextCharacter2(ViWin* self) 
{
    auto key = self.getKey(false);
    
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            auto cursor_x = line.substring(0, self.cursorX-1).rindex(xsprintf("%c", key).to_wstring(), -1);
            
            if(cursor_x != -1) {
                self.cursorX = cursor_x + 1;
            }
            else {
                break;
            }
            
        }
        
        self.digitInput = 0;
    }
    else {
        auto cursor_x = line.substring(0, self.cursorX).rindex(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX = cursor_x + 1;
        }
    }
}

void ViWin*::changeCase(ViWin* self) 
{
    self.pushUndo();

    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            wchar_t c = line[self.cursorX + i];
            
            if(c != -1) {
                if(c >= 'a' && c <= 'z') {
                    wchar_t c2 = c - 'a' + 'A';
                    
                    line[self.cursorX + i] = c2;
                }
                else if(c >= 'A' && c <= 'Z') {
                    wchar_t c2 = c - 'A' + 'a';
                    
                    line[self.cursorX + i] = c2;
                }
            }
            else {
                break;
            }
            
        }
        
        self.digitInput = 0;
    }
    else {
        wchar_t c = line[self.cursorX];
            
        if(c != -1) {
            if(c >= 'a' && c <= 'z') {
                wchar_t c2 = c - 'a' + 'A';
                
                line[self.cursorX] = c2;
            }
            else if(c >= 'A' && c <= 'Z') {
                wchar_t c2 = c - 'A' + 'a';
                
                line[self.cursorX] = c2;
            }
        }
    }
}

void ViWin*::moveToHead(ViWin* self) 
{
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    int i;
    for(i=0; i<line.length(); i++) {
        if(!(line[i] == ' ' && line[i] == '\t')) {
            break;
        }
    }

    self.cursorX = i;
}

Vi*% Vi*::initialize(Vi*% self) version 10
{
    auto result = inherit(self);

    result.events.replace('d', void lambda(Vi* self, int key) {
        run_operator_pending(self, kOperatorDelete);
    });

    result.events.replace('c', void lambda(Vi* self, int key) {
        run_operator_pending(self, kOperatorChange);
    });
    result.events.replace('y', void lambda(Vi* self, int key) {
        run_operator_pending(self, kOperatorYank);
    });
    result.events.replace('Y', void lambda(Vi* self, int key) {
        self.activeWin.yankOneLine(self);
    });
    result.events.replace('D', void lambda(Vi* self, int key) {
        self.activeWin.deleteUntilTail();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });

    result.events.replace('C', void lambda(Vi* self, int key) {
        self.activeWin.deleteUntilTail();
        self.enterInsertMode();
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.cursorX++;
        }
        self.activeWin.writed = true;
    });
    result.events.replace('x', void lambda(Vi* self, int key) {
        self.activeWin.deleteCursorCharactor();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
    result.events.replace('X', void lambda(Vi* self, int key) {
        self.activeWin.deleteBack();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
/*
    result.events.replace('A'-'A'+1, void lambda(Vi* self, int key) {
        self.activeWin.incrementNumber();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
*/
    result.events.replace('r', void lambda(Vi* self, int key) {
        self.activeWin.replaceCursorCharactor();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
    result.events.replace('s', void lambda(Vi* self, int key) {
        self.activeWin.replaceCursorCharactor();
        self.activeWin.writed = true;
        self.enterInsertMode();
    });
    result.events.replace('S', void lambda(Vi* self, int key) {
        self.activeWin.moveToHead();
        self.activeWin.deleteUntilTail();
        self.activeWin.writed = true;
        self.enterInsertMode();
        if(self.activeWin.cursorX != 0) {
            self.activeWin.cursorX++;
        }
    });
    result.events.replace('J', void lambda(Vi* self, int key) {
        self.activeWin.joinLines();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
    result.events.replace('~', void lambda(Vi* self, int key) {
        self.activeWin.changeCase();

        self.activeWin.saveInputedKey();
    });
    result.events.replace('f', void lambda(Vi* self, int key) {
        auto key2 = self.activeWin.getKey(false);
        
        self.activeWin.forwardToNextCharacter1(key2);

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('t', void lambda(Vi* self, int key) {
        auto key2 = self.activeWin.getKey(false);

        self.activeWin.forwardToNextCharacter2(key2);

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace(';', void lambda(Vi* self, int key) {
        self.activeWin.repeatForwardNextCharacter();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('F', void lambda(Vi* self, int key) {
        self.activeWin.backwardToNextCharacter1();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('T', void lambda(Vi* self, int key) {
        self.activeWin.backwardToNextCharacter2();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
/*
    result.events.replace('^', void lambda(Vi* self, int key) {
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
*/
    result.events.replace('-', void lambda(Vi* self, int key) {
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('_', void lambda(Vi* self, int key) {
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('H', void lambda(Vi* self, int key) {
        self.activeWin.cursorX = 0;
        self.activeWin.cursorY = 0;

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('L', void lambda(Vi* self, int key) {
        self.activeWin.cursorY = self.activeWin.height-2;
        self.activeWin.modifyOverCursorYValue();
        
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('+', void lambda(Vi* self, int key) {
        self.activeWin.cursorY++;
        self.activeWin.modifyOverCursorYValue();
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('Y'-'A'+1, void lambda(Vi* self, int key) {
        self.activeWin.scroll--;
        if(self.activeWin.scroll < 0) {
            self.activeWin.scroll = 0;
        }

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
/*
    result.events.replace('E'-'A'+1, void lambda(Vi* self, int key) {
        self.activeWin.scroll++;
        if(self.activeWin.scroll >= self.activeWin.texts.length()) {
            self.activeWin.scroll = self.activeWin.texts.length()-1;
        }
        self.activeWin.modifyOverCursorYValue();
        self.activeWin.modifyUnderCursorYValue();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
*/
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

    return result;
}
