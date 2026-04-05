#include "common.h"

static bool is_named_register(int key)
{
    return key >= 'a' && key <= 'z';
}

static void save_yank_to_named_register(Vi* nvi)
{
    if(is_named_register(nvi.selectedRegister)) {
        nvi.registers.insert(nvi.selectedRegister, clone nvi.yank);
        nvi.registerKinds.insert(nvi.selectedRegister, nvi.yankKind);
        nvi.selectedRegister = -1;
    }
}

static bool load_yank_from_named_register(Vi* nvi)
{
    if(!is_named_register(nvi.selectedRegister)) {
        return false;
    }

    auto register_yank = nvi.registers.at(nvi.selectedRegister, null);
    if(register_yank == null) {
        nvi.selectedRegister = -1;
        return false;
    }

    nvi.yank = clone register_yank;
    nvi.yankKind = nvi.registerKinds.at(nvi.selectedRegister, kYankKindNoLine);
    nvi.selectedRegister = -1;

    return true;
}

static void ensure_line_has_width(ViWin* self, int y, int width)
{
    auto line = self.texts.item(y, wstring(""));

    if(line.length() < width) {
        auto new_line = xsprintf("%ls%ls", line, wstring(" ").multiply(width - line.length())).to_wstring();
        self.texts.replace(y, clone new_line);
        self.texts_length.replace(y, wcslen(new_line));
    }
}

static void paste_block(ViWin* self, Vi* nvi, int insert_x)
{
    self.pushUndo();

    for(int i=0; i<nvi.yank.length(); i++) {
        int y = self.scroll + self.cursorY + i;

        while(y >= self.texts.length()) {
            self.texts.push_back(wstring(""));
            self.texts_length.push_back(0);
        }

        ensure_line_has_width(self, y, insert_x);

        auto line = self.texts.item(y, wstring(""));
        auto yank_line = nvi.yank.item(i, wstring(""));
        auto new_line = xsprintf("%ls%ls%ls"
                , line.substring(0, insert_x)
                , yank_line
                , line.substring(insert_x, -1)).to_wstring();

        self.texts.replace(y, clone new_line);
        self.texts_length.replace(y, wcslen(new_line));
    }
}

static bool prepare_yank_for_paste(ViWin* self, Vi* nvi)
{
    if(is_named_register(nvi.selectedRegister)) {
        return load_yank_from_named_register(nvi);
    }

    if(nvi.yank.length() > 0) {
        return true;
    }

    return self.loadYankFromFile(nvi);
}

bool ViWin*::saveYankToFile(ViWin* self, Vi* nvi)
{
    char* home = getenv("HOME");
    save_yank_to_named_register(nvi);
    if(home == null) {
        return false;
    }

    string path = xsprintf("%s/.vin/yank.txt", home);
    FILE* f = fopen(path, "w");

    if(f == null) {
        return false;
    }

    fprintf(f, "__VIN_YANK_KIND__:%d\n", nvi.yankKind);

    foreach(it, nvi.yank) {
        fputs(it.to_string(), f);
        fputs("\n", f);
    }

    fclose(f);

    return true;
}

bool ViWin*::loadYankFromFile(ViWin* self, Vi* nvi)
{
    if(load_yank_from_named_register(nvi)) {
        return true;
    }

    char* home = getenv("HOME");
    if(home == null) {
        return false;
    }

    string path = xsprintf("%s/.vin/yank.txt", home);
    FILE* f = fopen(path, "r");

    if(f == null) {
        return false;
    }

    char line[4096];

    nvi.yank.reset();

    bool first_line = true;

    while(fgets(line, 4096, f) != NULL)
    {
        char c = line[strlen(line)-1];
        line[strlen(line)-1] = '\0';
        if(first_line && strncmp(line, "__VIN_YANK_KIND__:", 18) == 0) {
            nvi.yankKind = atoi(line + 18);
            first_line = false;
            continue;
        }
        nvi.yank.push_back(wstring(line))
        first_line = false;
    }

    fclose(f);

    return true;
}

bool ViWin*::saveFileYankToFile(ViWin* self, Vi* nvi)
{
    char* home = getenv("HOME");
    if(home == null) {
        return false;
    }

    string path = xsprintf("%s/.vin/fyank.txt", home);
    FILE* f = fopen(path, "w");

    if(f == null) {
        return false;
    }

    foreach(it, nvi.fileYank) {
        fputs(it.to_string(), f);
        fputs("\n", f);
    }

    fclose(f);

    return true;
}

bool ViWin*::loadFileYankFromFile(ViWin* self, Vi* nvi)
{
    char* home = getenv("HOME");
    if(home == null) {
        return false;
    }

    string path = xsprintf("%s/.vin/fyank.txt", home);
    FILE* f = fopen(path, "r");

    if(f == null) {
        return false;
    }

    char line[4096];

    nvi.fileYank.reset();

    while(fgets(line, 4096, f) != NULL)
    {
        char c = line[strlen(line)-1];
        line[strlen(line)-1] = '\0';
        nvi.fileYank.push_back(wstring(line))
    }

    fclose(f);

    return true;
}

void ViWin*::pasteAfterCursor(ViWin* self, Vi* nvi) 
{
    prepare_yank_for_paste(self, nvi);
    if(nvi.yankKind == kYankKindLine) {
        self.pushUndo();

        int it2 = 0;
        foreach(it, nvi.yank) {
            self.texts.insert(self.scroll+self.cursorY+it2+1, clone it);
            self.texts_length.insert(self.scroll+self.cursorY+it2+1, wcslen(it));
            it2++;
        }
    }
    else if(nvi.yankKind == kYankKindBlock) {
        paste_block(self, nvi, self.cursorX+1);
    }
    else {
        self.pushUndo();

        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        if(nvi.yank.length() == 1) {
            auto yank_first_line = nvi.yank.item(0, null);

            auto new_line = xsprintf("%ls%ls%ls"
                            , line.substring(0, self.cursorX+1)
                            , yank_first_line
                            , line.substring(self.cursorX+1, -1)).to_wstring();
    
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
        }
        else if(nvi.yank.length() == 2) {
            auto yank_first_line = nvi.yank.item(0, null);
    
            auto new_line = xsprintf("%ls%ls"
                                , line.substring(0, self.cursorX+1)
                                , yank_first_line).to_wstring();

            auto after_line = line.substring(self.cursorX+1, -1);
    
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
            
            auto yank_last_line = nvi.yank.item(-1, null);
            
            auto new_line2 = xsprintf("%ls%ls"
                                , yank_last_line
                                , after_line).to_wstring();
            self.texts.insert(self.scroll+self.cursorY+1, new_line2);
            self.texts_length.insert(self.scroll+self.cursorY+1, wcslen(new_line2));
        }
        else if(nvi.yank.length() > 2) {
            auto yank_first_line = nvi.yank.item(0, null);
    
            auto new_line = xsprintf("%ls%ls"
                                    , line.substring(0, self.cursorX+1)
                                    , yank_first_line).to_wstring();
            auto after_line = line.substring(self.cursorX+1, -1);
    
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));

            int it2 = 0;
            foreach(it, nvi.yank.sublist(1,-2)) {
                self.texts.insert(self.scroll+self.cursorY+it2+1, clone it);
                self.texts_length.insert(self.scroll+self.cursorY+it2+1, wcslen(it));
                it2++;
            }
            
            auto yank_last_line = nvi.yank.item(-1, null);
            
            auto new_line2 = xsprintf("%ls%ls"
                                        , yank_last_line
                                        , after_line).to_wstring();
            self.texts.insert(self.scroll+self.cursorY+nvi.yank.length()-1, new_line2);
            self.texts_length.insert(self.scroll+self.cursorY+nvi.yank.length()-1, wcslen(new_line2));
        }
    }
}

void ViWin*::pasteBeforeCursor(ViWin* self, Vi* nvi) 
{
    prepare_yank_for_paste(self, nvi);
    if(nvi.yankKind == kYankKindLine) {
        self.pushUndo();
        int it2 = 0;
        foreach(it, nvi.yank) {
            self.texts.insert(self.scroll+self.cursorY+it2, clone it);
            self.texts_length.insert(self.scroll+self.cursorY+it2, wcslen(it));
            it2++;
        }
    }
    else if(nvi.yankKind == kYankKindBlock) {
        paste_block(self, nvi, self.cursorX);
    }
    else {
        self.pushUndo();

        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        if(nvi.yank.length() == 1) {
            auto yank_first_line = nvi.yank.item(0, null);

            auto new_line = xsprintf("%ls%ls%ls"
                                , line.substring(0, self.cursorX)
                                , yank_first_line
                                , line.substring(self.cursorX, -1)).to_wstring();
    
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
        }
        else if(nvi.yank.length() == 2) {
            auto yank_first_line = nvi.yank.item(0, null);
    
            auto new_line = xsprintf("%ls%ls"
                                , line.substring(0, self.cursorX) 
                                , yank_first_line).to_wstring();

            auto after_line = line.substring(self.cursorX, -1);
    
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
            
            auto yank_last_line = nvi.yank.item(-1, null);
            
            auto new_line2 = xsprintf("%ls%ls"
                                , yank_last_line
                                , after_line).to_wstring();
            self.texts.insert(self.scroll+self.cursorY+1, new_line2);
            self.texts_length.insert(self.scroll+self.cursorY+1, wcslen(new_line2));
        }
        else if(nvi.yank.length() > 2) {
            auto yank_first_line = nvi.yank.item(0, null);
    
            auto new_line = xsprintf("%ls%ls"
                                , line.substring(0, self.cursorX) 
                                , yank_first_line).to_wstring();
            auto after_line = line.substring(self.cursorX, -1);
    
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
            int it2 = 0;
            foreach(it, nvi.yank.sublist(1,-2)) {
                self.texts.insert(self.scroll+self.cursorY+it2+1, clone it);
                self.texts_length.insert(self.scroll+self.cursorY+it2+1, wcslen(it));
                it2++;
            }
            
            auto yank_last_line = nvi.yank.item(-1, null);
            
            auto new_line2 = xsprintf("%ls%ls"
                                        ,yank_last_line
                                        , after_line).to_wstring();
            self.texts.insert(self.scroll+self.cursorY+nvi.yank.length()-1, new_line2);
            self.texts_length.insert(self.scroll+self.cursorY+nvi.yank.length()-1, wcslen(new_line2));
        }
    }
}

void ViWin*::filePasteAfterCursor(ViWin* self, Vi* nvi) 
{
    self.loadFileYankFromFile(nvi);
    if(nvi.yankKind == kYankKindLine) {
        self.pushUndo();

        int it2 = 0;
        foreach(it, nvi.fileYank) {
            self.texts.insert(self.scroll+self.cursorY+it2+1, clone it);
            self.texts_length.insert(self.scroll+self.cursorY+it2+1, wcslen(it));
            it2++;
        }
    }
    else {
        self.pushUndo();

        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        if(nvi.fileYank.length() == 1) {
            auto yank_first_line = nvi.fileYank.item(0, null);

            auto new_line = xsprintf("%ls%ls%ls"
                            , line.substring(0, self.cursorX+1)
                            , yank_first_line
                            , line.substring(self.cursorX+1, -1)).to_wstring();
    
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
        }
        else if(nvi.fileYank.length() == 2) {
            auto yank_first_line = nvi.yank.item(0, null);
    
            auto new_line = xsprintf("%ls%ls"
                                , line.substring(0, self.cursorX+1)
                                , yank_first_line).to_wstring();

            auto after_line = line.substring(self.cursorX+1, -1);
    
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
            
            auto yank_last_line = nvi.fileYank.item(-1, null);
            
            auto new_line2 = xsprintf("%ls%ls"
                                , yank_last_line
                                , after_line).to_wstring();
            self.texts.insert(self.scroll+self.cursorY+1, new_line2);
            self.texts_length.insert(self.scroll+self.cursorY+1, wcslen(new_line2));
        }
        else if(nvi.fileYank.length() > 2) {
            auto yank_first_line = nvi.fileYank.item(0, null);
    
            auto new_line = xsprintf("%ls%ls"
                                    , line.substring(0, self.cursorX+1)
                                    , yank_first_line).to_wstring();
            auto after_line = line.substring(self.cursorX+1, -1);
    
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));

            int it2 = 0;
            foreach(it, nvi.fileYank.sublist(1,-2)) {
                self.texts.insert(self.scroll+self.cursorY+it2+1, clone it);
                self.texts_length.insert(self.scroll+self.cursorY+it2+1, wcslen(it));
                it2++;
            }
            
            auto yank_last_line = nvi.fileYank.item(-1, null);
            
            auto new_line2 = xsprintf("%ls%ls"
                                        , yank_last_line
                                        , after_line).to_wstring();
            self.texts.insert(self.scroll+self.cursorY+nvi.yank.length()-1, new_line2);
            self.texts_length.insert(self.scroll+self.cursorY+nvi.yank.length()-1, wcslen(new_line2));
        }
    }
}

Vi*% Vi*::initialize(Vi*% self) version 7
{
    auto result = inherit(self);

    result.yank = new list<wstring>.initialize();
    result.fileYank = new list<wstring>.initialize();
    result.registers = new map<int, list<wstring>*%>.initialize();
    result.registerKinds = new map<int, int>.initialize();
    result.selectedRegister = -1;

    result.yankKind = 0;

    result.events.replace('"', void lambda(Vi* self, int key)
    {
        self.selectedRegister = self.activeWin.getKey(false);
        self.activeWin.saveInputedKey();
    });

    result.events.replace('p', void lambda(Vi* self, int key) 
    {
        self.activeWin.pasteAfterCursor(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });

    result.events.replace('P', void lambda(Vi* self, int key) 
    {
        self.activeWin.pasteBeforeCursor(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });

/*
    result.events.replace('P'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.activeWin.filePasteAfterCursor(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
*/

    return result;
}
