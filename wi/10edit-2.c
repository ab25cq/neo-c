#include "common.h"

impl ViWin version 10
{
extern void modifyCursorOnDeleting(ViWin* self);
extern void deleteOneLine(ViWin* self, Vi* nvi);
extern void deleteOneLine2(ViWin* self, Vi* nvi);
extern void deleteWord(ViWin* self, Vi* nvi);
extern void deleteForNextCharacter(ViWin* self);
extern void deleteForNextCharacter2(ViWin* self);
extern void deleteCursorCharactor(ViWin* self);
extern void deleteBack(ViWin* self);
extern void getCursorNumber(ViWin* self, int* head, int* tail);
extern void incrementNumber(ViWin* self);
extern void replaceCursorCharactor(ViWin* self);
extern void deleteUntilTail(ViWin* self);
extern void joinLines(ViWin* self);
extern void yankOneLine(ViWin* self, Vi* nvi);
extern void joinLines2(ViWin* self);
extern void forwardToNextCharacter1(ViWin* self, int key);
extern void forwardToNextCharacter2(ViWin* self, int key);
extern void repeatForwardNextCharacter(ViWin* self);
extern void backwardToNextCharacter1(ViWin* self);
extern void backwardToNextCharacter2(ViWin* self);
extern void changeCase(ViWin* self);
extern void moveToHead(ViWin* self);
}

impl Vi version 10
{
initialize() {
    inherit(self);

    self.events.replace('d', lambda(Vi* self, int key) {
        var key2 = self.activeWin.getKey(true);

        switch(key2) {
            case 'd':
                self.activeWin.deleteOneLine(self);
                self.activeWin.writed = true;
                break;
            
            case 'w':
            case 'e':
                self.activeWin.deleteWord(self);
                self.activeWin.writed = true;
                break;
            
            case 'f':
                self.activeWin.deleteForNextCharacter();
                self.activeWin.writed = true;
                break;
                
            case 't':
                self.activeWin.deleteForNextCharacter2();
                self.activeWin.writed = true;
                break;
                
            case '$':
                self.activeWin.deleteUntilTail();
                self.activeWin.writed = true;
                break;
        }

        self.activeWin.saveInputedKey();
    });

    self.events.replace('c', lambda(Vi* self, int key) {
        var key2 = self.activeWin.getKey(true);

        switch(key2) {
            case '$':
                self.activeWin.deleteUntilTail();
                self.enterInsertMode();
                if(self.activeWin.texts.length() != 0) {
                    self.activeWin.cursorX++;
                }
                self.activeWin.writed = true;
                break;
                
            case 'c':
                self.activeWin.deleteOneLine2(self);
                self.enterInsertMode();
                if(self.activeWin.texts.length() != 0) {
                    self.activeWin.cursorX = 0;
                }
                self.activeWin.writed = true;
                break;
                
                
            case 'w':
            case 'e':
                self.activeWin.deleteWord(self);
                self.enterInsertMode2();
                self.activeWin.writed = true;
                break;
                
            case 't':
                self.activeWin.deleteForNextCharacter2();
                self.enterInsertMode();
                self.activeWin.writed = true;
                break;
                
            case 'f':
                self.activeWin.deleteForNextCharacter();
                self.enterInsertMode();
                self.activeWin.writed = true;
                break;
        }
    });
    self.events.replace('y', lambda(Vi* self, int key) {
        var key2 = self.activeWin.getKey(true);

        switch(key2) {
            case 'y':
                self.activeWin.yankOneLine(self);
                break;
        }
    });
    self.events.replace('Y', lambda(Vi* self, int key) {
        self.activeWin.yankOneLine(self);
    });
    self.events.replace('D', lambda(Vi* self, int key) {
        self.activeWin.deleteUntilTail();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });

    self.events.replace('C', lambda(Vi* self, int key) {
        self.activeWin.deleteUntilTail();
        self.enterInsertMode();
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.cursorX++;
        }
        self.activeWin.writed = true;
    });
    self.events.replace('x', lambda(Vi* self, int key) {
        self.activeWin.deleteCursorCharactor();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
    self.events.replace('X', lambda(Vi* self, int key) {
        self.activeWin.deleteBack();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
    self.events.replace('A'-'A'+1, lambda(Vi* self, int key) {
        self.activeWin.incrementNumber();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
    self.events.replace('r', lambda(Vi* self, int key) {
        self.activeWin.replaceCursorCharactor();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
    self.events.replace('s', lambda(Vi* self, int key) {
        self.activeWin.replaceCursorCharactor();
        self.activeWin.writed = true;
        self.enterInsertMode();
    });
    self.events.replace('S', lambda(Vi* self, int key) {
        self.activeWin.moveToHead();
        self.activeWin.deleteUntilTail();
        self.activeWin.writed = true;
        self.enterInsertMode();
        if(self.activeWin.cursorX != 0) {
            self.activeWin.cursorX++;
        }
    });
    self.events.replace('J', lambda(Vi* self, int key) {
        self.activeWin.joinLines();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
    self.events.replace('~', lambda(Vi* self, int key) {
        self.activeWin.changeCase();

        self.activeWin.saveInputedKey();
    });
    self.events.replace('f', lambda(Vi* self, int key) {
        var key2 = self.activeWin.getKey(false);
        
        self.activeWin.forwardToNextCharacter1(key2);

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('t', lambda(Vi* self, int key) {
        var key2 = self.activeWin.getKey(false);

        self.activeWin.forwardToNextCharacter2(key2);

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(';', lambda(Vi* self, int key) {
        self.activeWin.repeatForwardNextCharacter();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('F', lambda(Vi* self, int key) {
        self.activeWin.backwardToNextCharacter1();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('T', lambda(Vi* self, int key) {
        self.activeWin.backwardToNextCharacter2();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('^', lambda(Vi* self, int key) {
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('-', lambda(Vi* self, int key) {
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('_', lambda(Vi* self, int key) {
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('H', lambda(Vi* self, int key) {
        self.activeWin.cursorX = 0;
        self.activeWin.cursorY = 0;

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('L', lambda(Vi* self, int key) {
        self.activeWin.cursorY = self.activeWin.height-2;
        self.activeWin.modifyOverCursorYValue();
        
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('+', lambda(Vi* self, int key) {
        self.activeWin.cursorY++;
        self.activeWin.modifyOverCursorYValue();
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('Y'-'A'+1, lambda(Vi* self, int key) {
        self.activeWin.scroll--;
        if(self.activeWin.scroll < 0) {
            self.activeWin.scroll = 0;
        }

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('E'-'A'+1, lambda(Vi* self, int key) {
        self.activeWin.scroll++;
        if(self.activeWin.scroll >= self.activeWin.texts.length()) {
            self.activeWin.scroll = self.activeWin.texts.length()-1;
        }
        self.activeWin.modifyOverCursorYValue();
        self.activeWin.modifyUnderCursorYValue();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
}
}
