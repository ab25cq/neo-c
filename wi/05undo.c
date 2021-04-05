#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <wctype.h>

#include "common.h"

impl ViWin version 5
{
initialize(int y, int x, int width, int height, Vi* vi) 
{
    inherit(self, y, x, width, height, vi);
    self.undo = new list<list<wstring>*%>.initialize();
    self.undoScroll = new list<int>.initialize();
    self.undoCursorX = new list<int>.initialize();
    self.undoCursorY = new list<int>.initialize();
    self.undoIndex = 0;
}

void pushUndo(ViWin* self)
{
    self.undo.delete_range(self.undoIndex, -1);
    self.undoScroll.delete_range(self.undoIndex, -1);
    self.undoCursorX.delete_range(self.undoIndex, -1);
    self.undoCursorY.delete_range(self.undoIndex, -1);

    var undo = clone self.texts;


    self.undo.push_back(undo);

    self.undoCursorX.push_back(self.cursorX);
    self.undoScroll.push_back(self.scroll);
    self.undoCursorY.push_back(self.cursorY);
    self.undoIndex++;
}

void redo(ViWin* self) {
    if(self.undoIndex < self.undo.length()-1) 
    {
        self.undoIndex++;

        var undo = self.undo.item(self.undoIndex, null);
        var cursor_x = self.undoCursorX.item(self.undoIndex, -1);
        var scroll = self.undoScroll.item(self.undoIndex, -1);
        var cursor_y = self.undoCursorY.item(self.undoIndex, -1);

        if(undo != null && cursor_x != -1 && cursor_y != -1 && scroll != -1) 
        {
            self.texts = clone undo;
            self.cursorX = cursor_x;
            self.cursorY = cursor_y;
            self.scroll = scroll;
        }
    }
}

void undo(ViWin* self) {
    if(self.undoIndex == self.undo.length())
    {
        self.pushUndo();
        self.undoIndex--;
    }

    if(self.undoIndex > 0) {
        self.undoIndex--;

        var undo = self.undo.item(self.undoIndex, null);
        var cursor_x = self.undoCursorX.item(self.undoIndex, -1);
        var cursor_y = self.undoCursorY.item(self.undoIndex, -1);
        var scroll = self.undoScroll.item(self.undoIndex, -1);

        if(undo != null && cursor_x != -1 && cursor_y != -1 && scroll != -1) 
        {
            self.texts = clone undo;
            self.cursorX = cursor_x;
            self.cursorY = cursor_y;
            self.scroll = scroll;
        }
    }
}
}

impl Vi version 5
{
initialize() {
    inherit(self);

    self.events.replace('u', lambda(Vi* self, int key) 
    {
        self.activeWin.undo();
    });

    self.events.replace('r'-'a'+1, lambda(Vi* self, int key) 
    {
        self.activeWin.redo();
    });
}
void enterInsertMode(Vi* self) {
    inherit(self);

    self.activeWin.pushUndo();
}
}
