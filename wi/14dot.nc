#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <locale.h>
#include <wctype.h>
#include <termios.h>
#include <signal.h>

#include "common.h"

void mreset_tty()
{
    struct termios t;

    t.c_cc[VINTR] =  3;
    t.c_cc[VQUIT] =  28;
    t.c_cc[VERASE] =  127;
    t.c_cc[VKILL] =  21;
    t.c_cc[VEOF] =  4;
    t.c_cc[VTIME] =  0;
    t.c_cc[VMIN] =  1;
#if defined(VSWTC)
    t.c_cc[VSWTC] =  0;
#endif
    t.c_cc[VSTART] =  17;
    t.c_cc[VSTOP] =  19;
    t.c_cc[VSUSP] =  26;
    t.c_cc[VEOL] =  0;
    t.c_cc[VREPRINT] =  18;
    t.c_cc[VDISCARD] =  15;
    t.c_cc[VWERASE] =  23;
    t.c_cc[VLNEXT] =  22;
    t.c_cc[VEOL2] =  0;

    t.c_iflag = BRKINT | IGNPAR | ICRNL | IXON | IMAXBEL;
    t.c_oflag = OPOST | ONLCR;
    t.c_cflag = CREAD | CS8 | B38400;
    t.c_lflag = ISIG | ICANON 
                | ECHO | ECHOE | ECHOK 
                //| ECHOKE 
                //| ECHOCTL | ECHOKE 
                | IEXTEN;

    int fd = open("/dev/tty", O_RDWR);

    tcsetattr(fd, TCSANOW, &t);
    //system("tset");
}

impl ViWin version 14
{
initialize(int y, int x, int width, int height, Vi* vi) {
    inherit(self, y, x, width, height, vi);

    self.inputedKeys = new vector<int>.initialize();
    self.autoInput = false;
    self.digitInput = 0;
    self.autoInputIndex = 0;
    
    self.macro = new map<int, vector<vector<int>*%>*%>.initialize();
    self.recordingMacroKey = -1;
    self.recordingMacro = null;
    
    self.runningMacro = null;
    
    (void)self.loadDotFromFile(vi);
}

bool saveDotToFile(ViWin* self, Vi* nvi)
{
    char* home = getenv("HOME");
    if(home == null) {
        return false;
    }

    string path = xsprintf("%s/.wi/dot.txt", home);
    FILE* f = fopen(path, "w");

    if(f == null) {
        return false;
    }
    
    self.savedInputedKeys.each {
        if(fputc(it, f) < 0) {
            *it3 = true;
            return;
        }
    }

    fclose(f);

    return true;
}

bool loadDotFromFile(ViWin* self, Vi* nvi)
{
    char* home = getenv("HOME");
    if(home == null) {
        return false;
    }

    string path = xsprintf("%s/.wi/dot.txt", home);
    FILE* f = fopen(path, "r");

    if(f == null) {
        return false;
    }

    self.savedInputedKeys = new vector<int>.initialize();
    
    while(true) {
        char c;
        if(fread(&c, sizeof(char), 1, f) == 0) {
            break;
        }

        self.savedInputedKeys.push_back(c);
    }

    fclose(f);

    return true;
}

int getKey(ViWin* self, bool head) 
{
    if(self.runningMacro) {
        if(self.runningMacroIndex1 >= self.runningMacro.length())
        {
            self.runningMacro = null;
            self.runningMacroIndex1 = 0;
            self.runningMacroIndex2 = 0;
        }
        else {
            var inputed_key_vec = self.runningMacro.item(self.runningMacroIndex1, null);
            
            if(self.runningMacroIndex2 < inputed_key_vec.length())
            {
                int inputed_key_vec2 = inputed_key_vec.item(self.runningMacroIndex2, -1);
                self.runningMacroIndex2++;
                
                return inputed_key_vec2;
            }
            else {
                self.runningMacroIndex1++;
                self.runningMacroIndex2 = 0;
                
                return self.getKey(head);
            }
        }
    }
    
    if(self.autoInput && self.savedInputedKeys) 
    {
        if(self.autoInputIndex < self.savedInputedKeys.length()) {
            int key = self.savedInputedKeys.item(self.autoInputIndex, -1);
            self.autoInputIndex++;

            return key;
        }
        else {
            if(self.pressedDot) {
                self.autoInputIndex = 0;
                self.autoInput = false;
                self.pressedDot = false;

                int key = wgetch(self.win);
                
                if(self.inputedKeys.length() < SAVE_INPUT_KEY_MAX) {
                    self.inputedKeys.push_back(key);
                }
                return key;
            }
            else {
                self.savedInputedKeys.reset();
                self.autoInput = false;
                self.autoInputIndex = 0;
                self.pressedDot = false;

                int key = wgetch(self.win);
                self.inputedKeys.push_back(key);
                return key;
            }
        }
    }
    else {
        self.pressedDot = false;
        
        int key = wgetch(self.win);
        
        if(key == 26) {
            endwin();
            mreset_tty();
            kill(getpid(), SIGSTOP);
            Vi* vi = self.vi;
            vi.init_curses();
        }
        else if(head && key >= '1' && key <= '9' && ((Vi*)self.vi).mode != kInsertMode) {
            int num = key - '0';
            
            key = wgetch(self.win);
            
            while(key >= '0' && key <= '9') {
                num = num * 10 + key - '0';
                
                key = wgetch(self.win);
            }
            
            self.digitInput = num-1;
            
            if(self.inputedKeys.length() < SAVE_INPUT_KEY_MAX) {
                self.inputedKeys.push_back(key);
            }

            return key;
        }
        else {
            if(self.inputedKeys.length() < SAVE_INPUT_KEY_MAX) {
                self.inputedKeys.push_back(key);
            }

            return key;
        }
        
        return key;
    }

}

void clearInputedKey(ViWin* self) {
    self.inputedKeys.reset();
}

void saveInputedKeyOnTheMovingCursor(ViWin* self) {
    if(self.recordingMacro) {
        self.saveInputedKey();
    }
}

void saveInputedKey(ViWin* self) {
    if(!self.autoInput && !self.pressedDot) {
        if(self.digitInput > 0) {
            self.autoInput = true;
            self.autoInputIndex = 0;
            self.savedInputedKeys = new vector<int>.initialize();
            for(int i=0; i<self.digitInput; i++) {
                self.inputedKeys.each {
                    self.savedInputedKeys.push_back(it);
                }
            }
            self.digitInput = 0;
        }
        else {
            self.savedInputedKeys = clone self.inputedKeys;
        }
    }
    
    if(self.recordingMacroKey != -1) {
        self.recordingMacro.push_back(clone self.savedInputedKeys);
    }
}

void makeInputedKeyGVIndent(ViWin* self, Vi* nvi) {
    self.inputedKeys = new vector<int>.initialize();
    
    self.inputedKeys.push_back('g');
    self.inputedKeys.push_back('v');
    self.inputedKeys.push_back('>');
    
    self.saveInputedKey();
}

void makeInputedKeyGVDeIndent(ViWin* self, Vi* nvi) {
    self.inputedKeys = new vector<int>.initialize();
    
    self.inputedKeys.push_back('g');
    self.inputedKeys.push_back('v');
    self.inputedKeys.push_back('<');
    
    self.saveInputedKey();
}

void recordMacro(ViWin* self) {
    if(self.recordingMacroKey == -1) {
        int key = self.getKey(false);
        
        self.recordingMacroKey = key;
        self.recordingMacro = new vector<vector<int>*%>.initialize();
    }
    else {
        self.macro.insert(self.recordingMacroKey, clone self.recordingMacro);
        
        self.recordingMacroKey = -1;
        self.recordingMacro = null;
    }
}

void runMacro(ViWin* self) {
    int key = self.getKey(false);
    
    var macro_ = self.macro.at(key, null);
    
    if(macro_) {
        self.runningMacro = clone macro_;
        self.runningMacroIndex1 = 0;
        self.runningMacroIndex2 = 0;
    }
}
}

impl Vi version 14
{
initialize() {
    inherit(self);
    
    self.events.replace('.', lambda(Vi* self, int key) 
    {
        self.activeWin.autoInput = true;
        self.activeWin.pressedDot = true;
    });

    self.events.replace('q', lambda(Vi* self, int key) 
    {
        self.activeWin.recordMacro();
    });
    self.events.replace('@', lambda(Vi* self, int key) 
    {
        self.activeWin.runMacro();
    });
}
}
