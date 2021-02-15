#include "common.h"

impl ViWin version 10
{
initialize(int y, int x, int width, int height, Vi* vi)
{
    inherit(self, y, x, width, height, vi);
    
    self.mRepeatFowardNextCharacterKind = kRFNCNone;
    self.mRepeatFowardNextCharacter = 0;
}

void modifyCursorOnDeleting(ViWin* self) {
    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue2();
}

void deleteOneLine(ViWin* self, Vi* nvi) {
    if(self.digitInput > 0) {
        self.pushUndo();
        
        nvi.yank.reset();
        nvi.yankKind = kYankKindLine;
        
        for(int i=0; i<self.digitInput+1; i++) {
            var line = self.texts.item(self.scroll+self.cursorY, null);
            
            if(line != null) {
                nvi.yank.push_back(clone line);
                
                self.texts.delete(self.scroll+self.cursorY);
        
                self.modifyCursorOnDeleting();
            }
        }
        
        self.saveYankToFile(nvi);
        self.digitInput = 0;
    }
    else {
        var line = self.texts.item(self.scroll+self.cursorY, null);
        if(line != null) {
            self.pushUndo();
            nvi.yank.reset();
            nvi.yank.push_back(clone line);
            nvi.yankKind = kYankKindLine;
            self.saveYankToFile(nvi);
            self.texts.delete(self.scroll+self.cursorY);
    
            self.modifyCursorOnDeleting();
        }
    }
}

void deleteOneLine2(ViWin* self, Vi* nvi) {
    if(self.digitInput > 0) {
        self.pushUndo();
        
        nvi.yank.reset();
        nvi.yankKind = kYankKindLine;
        
        for(int i=0; i<self.digitInput+1; i++) {
            var line = self.texts.item(self.scroll+self.cursorY, null);
            
            if(line != null) {
                nvi.yank.push_back(clone line);
                
                self.texts.delete(self.scroll+self.cursorY);
        
                self.modifyCursorOnDeleting();
            }
        }
        
        self.digitInput = 0;
        self.saveYankToFile(nvi);
    }
    else {
        var line = self.texts.item(self.scroll+self.cursorY, null);
        if(line != null) {
            self.pushUndo();
            self.texts.delete(self.scroll+self.cursorY);
            self.texts.insert(self.scroll+self.cursorY, wstring(""));
    
            self.modifyCursorOnDeleting();
        }
    }
}

void deleteWord(ViWin* self, Vi* nvi) {
    self.pushUndo();
    
    if(self.digitInput > 0) {
        var line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) == 0) {
            self.deleteOneLine(nvi);
        }
        else {
            int count = self.digitInput + 1;
            
            int x = self.cursorX;
    
            for(int i=0; i<count; i++) {
                wchar_t* p = line + x;
        
                if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_')
                {
                    while((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_')
                    {
                        p++;
                        x++;
        
                        if(x >= line.length())
                        {
                            break;
                        }
                    }
                }
                else if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ))
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
                else if(xiswalpha(*p)) {
                    while(xiswalpha(*p)) {
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
            line.delete_range(self.cursorX, x);
    
            self.modifyCursorOnDeleting();
        }
        
        self.digitInput = 0;
    }
    else {
        var line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) == 0) {
            self.deleteOneLine(nvi);
        }
        else {
            int x = self.cursorX;
    
            wchar_t* p = line + x;
    
            if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_')
            {
                while((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_')
                {
                    p++;
                    x++;
    
                    if(x >= line.length())
                    {
                        break;
                    }
                }
            }
            else if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ))
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
            else if(xiswalpha(*p)) {
                while(xiswalpha(*p)) {
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
            line.delete_range(self.cursorX, x);
    
            self.modifyCursorOnDeleting();
        }
    }
}

void deleteForNextCharacter(ViWin* self) {
    self.pushUndo();
    
    if(self.digitInput > 0) {
        var key = self.getKey(false);
    
        var line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
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
                line.delete_range(self.cursorX, x+1);
            }
        }
        
        self.digitInput = 0;
    }
    else {
        var key = self.getKey(false);
    
        var line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
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
                line.delete_range(self.cursorX, x+1);
            }
        }
    }
}

void deleteForNextCharacter2(ViWin* self) {
    self.pushUndo();
    
    if(self.digitInput > 0) {
        var key = self.getKey(false);
    
        var line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
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
                line.delete_range(self.cursorX, x);
            }
        }
        
        self.digitInput = 0;
    }
    else {
        var key = self.getKey(false);
    
        var line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
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
                line.delete_range(self.cursorX, x);
            }
        }
    }
}

void deleteCursorCharactor(ViWin* self) {
    self.pushUndo();
    
    if(self.digitInput > 0) {
        int num = self.digitInput + 1;
        
        var line = self.texts.item(self.scroll+self.cursorY, null);
        
        for(int i= 0; i<num; i++) {
            line.delete(self.cursorX);
        }
    
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        var line = self.texts.item(self.scroll+self.cursorY, null);
        line.delete(self.cursorX);
    
        self.modifyOverCursorXValue();
    }
}

void deleteBack(ViWin* self) {
    self.pushUndo();
    
    if(self.digitInput > 0) {
        int num = self.digitInput + 1;
        
        var line = self.texts.item(self.scroll+self.cursorY, null);
        
        for(int i= 0; i<num; i++) {
            if(self.cursorX > 0) {
                self.cursorX--;
                line.delete(self.cursorX);
            }
        }
    
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        var line = self.texts.item(self.scroll+self.cursorY, null);
        
        if(self.cursorX > 0) {
            self.cursorX--;
            line.delete(self.cursorX);
        }
    
        self.modifyOverCursorXValue();
    }
}

void getCursorNumber(ViWin* self, int* head, int* tail) {
    var line = self.texts.item(self.scroll+self.cursorY, null);
    
    var c = line.item(self.cursorX, null); 
    
    if(xiswdigit(c)) {
        /// back ///
        *head = self.cursorX;
        
        while(true) {
            var c = line.item(*head, null);
            
            if(xiswdigit(c)) {
                (*head)--;
            }
            else {
                (*head)++;
                break;
            }
        };
        
        *tail = self.cursorX;
        
        while(true) {
            var c = line.item(*tail, null);
            
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

void incrementNumber(ViWin* self) {
    self.pushUndo();
    
    if(self.digitInput > 0) {
        int num = self.digitInput + 1;
        
        var line = self.texts.item(self.scroll+self.cursorY, null);
        
        int head;
        int tail;
        self.getCursorNumber(&head, &tail);
        
        if(head != -1 && tail != -1) {
            string number_string = line.substring(head, tail).to_string("");
            
            int n = atoi(number_string);
            
            n += num;
            
            wstring new_line = line.substring(0, head) + xsprintf("%d", n).to_wstring() + line.substring(tail, -1);
            
            self.texts.replace(self.scroll+self.cursorY, new_line);
        }
    
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        var line = self.texts.item(self.scroll+self.cursorY, null);
        
        int head;
        int tail;
        self.getCursorNumber(&head, &tail);
        
        if(head != -1 && tail != -1) {
            string number_string = line.substring(head, tail).to_string("");
            
            int n = atoi(number_string);
            
            n++;
            
            wstring new_line = line.substring(0, head) + xsprintf("%d", n).to_wstring() + line.substring(tail, -1);
            
            self.texts.replace(self.scroll+self.cursorY, new_line);
        }

        self.modifyOverCursorXValue();
    }
}

void replaceCursorCharactor(ViWin* self) {
    self.pushUndo();
    
    var key = self.getKey(false);
    
/*
    if(self.digitInput > 0) {
        int num = self.digitInput + 1;
        
        var line = self.texts.item(self.scroll+self.cursorY, null);
        
        for(int i= 0; i<num; i++) {
            line.replace(self.cursorX+i, (wchar_t)key);
        }
        
        self.digitInput = 0;
    }
    else {
*/
        var line = self.texts.item(self.scroll+self.cursorY, null);
        line.replace(self.cursorX, (wchar_t)key);
//    }
}

void deleteUntilTail(ViWin* self) {
    self.pushUndo();
    
    if(self.digitInput > 0) {
        var line = self.texts.item(self.scroll+self.cursorY, null);
        
        line.delete_range(self.cursorX, -1);
        
        int num = self.digitInput + 1;
        
        for(int i=1; i<num; i++) {
            var line = self.texts.item(self.scroll+self.cursorY+1, null);
            
            if(line != null) {
                self.texts.delete(self.scroll+self.cursorY+1);
        
                self.modifyCursorOnDeleting();
            }
        }
        
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        var line = self.texts.item(self.scroll+self.cursorY, null);
        line.delete_range(self.cursorX, -1);
        
        self.modifyOverCursorXValue();
    }
}

void joinLines(ViWin* self) {
    self.pushUndo();

    if(self.scroll+self.cursorY+1 < self.texts.length()) {
        var line = self.texts.item(self.scroll+self.cursorY, null);
        var next_line = self.texts.item(self.scroll+self.cursorY+1, null);

        self.texts.replace(self.scroll+self.cursorY, line + wstring(" ") + next_line);
        self.texts.delete(self.scroll+self.cursorY+1);
    }

    self.modifyOverCursorXValue();
}

void yankOneLine(ViWin* self, Vi* nvi) {
    if(self.digitInput > 0) {
        self.pushUndo();
        
        nvi.yank.reset();
        nvi.yankKind = kYankKindLine;
        
        for(int i=0; i<self.digitInput+1; i++) {
            var line = self.texts.item(self.scroll+self.cursorY+i, null);
            
            if(line != null) {
                nvi.yank.push_back(clone line);
            }
        }
        
        self.digitInput = 0;
        self.saveYankToFile(nvi);
    }
    else {
        var line = self.texts.item(self.scroll+self.cursorY, null);
        if(line != null) {
            self.pushUndo();
            nvi.yank.reset();
            nvi.yank.push_back(clone line);
            nvi.yankKind = kYankKindLine;
            self.saveYankToFile(nvi);
        }
    }
}

void joinLines2(ViWin* self) {
    self.pushUndo();

    if(self.scroll+self.cursorY+1 < self.texts.length()) {
        var line = self.texts.item(self.scroll+self.cursorY, null);
        var next_line = self.texts.item(self.scroll+self.cursorY+1, null);

        self.texts.replace(self.scroll+self.cursorY, line + next_line);
        self.texts.delete(self.scroll+self.cursorY+1);
    }

    self.modifyOverCursorXValue();
}

void forwardToNextCharacter1(ViWin* self, int key) {
    self.mRepeatFowardNextCharacterKind = kRFNC1;
    self.mRepeatFowardNextCharacter = key;
    
    var line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            var cursor_x = line.substring(self.cursorX+1, -1).index(xsprintf("%c", key).to_wstring(), -1);
            
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
        var cursor_x = line.substring(self.cursorX + 1, -1).index(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX += cursor_x + 1;
        }
    }
}

void forwardToNextCharacter2(ViWin* self, int key) {
    self.mRepeatFowardNextCharacterKind = kRFNC2;
    self.mRepeatFowardNextCharacter = key;
    
    var line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            var cursor_x = line.substring(self.cursorX + 2, -1).index(xsprintf("%c", key).to_wstring(), -1);
            
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
        var cursor_x = line.substring(self.cursorX+1, -1).index(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX += cursor_x;
        }
    }
}

void repeatForwardNextCharacter(ViWin* self) {
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

void backwardToNextCharacter1(ViWin* self) {
    var key = self.getKey(false);
    
    var line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            var cursor_x = line.substring(0, self.cursorX).rindex(xsprintf("%c", key).to_wstring(), -1);
            
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
        var cursor_x = line.substring(0, self.cursorX).rindex(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX = cursor_x;
        }
    }
}

void backwardToNextCharacter2(ViWin* self) {
    var key = self.getKey(false);
    
    var line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            var cursor_x = line.substring(0, self.cursorX-1).rindex(xsprintf("%c", key).to_wstring(), -1);
            
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
        var cursor_x = line.substring(0, self.cursorX).rindex(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX = cursor_x + 1;
        }
    }
}

void changeCase(ViWin* self) {
    self.pushUndo();

    var line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            wchar_t c = line.item(self.cursorX + i, -1);
            
            if(c != -1) {
                if(c >= 'a' && c <= 'z') {
                    wchar_t c2 = c - 'a' + 'A';
                    
                    line.replace(self.cursorX + i, c2);
                }
                else if(c >= 'A' && c <= 'Z') {
                    wchar_t c2 = c - 'A' + 'a';
                    
                    line.replace(self.cursorX + i, c2);
                }
            }
            else {
                break;
            }
        }
        
        self.digitInput = 0;
    }
    else {
        wchar_t c = line.item(self.cursorX, -1);
            
        if(c != -1) {
            if(c >= 'a' && c <= 'z') {
                wchar_t c2 = c - 'a' + 'A';
                
                line.replace(self.cursorX, c2);
            }
            else if(c >= 'A' && c <= 'Z') {
                wchar_t c2 = c - 'A' + 'a';
                
                line.replace(self.cursorX, c2);
            }
        }
    }
}

void moveToHead(ViWin* self) {
    var line = self.texts.item(self.scroll+self.cursorY, null);
    
    var point = line.to_string("").index_regex(regex!("\\S"), -1);
    
    if(point != -1) {
        self.cursorX = point;
    }
}

}
