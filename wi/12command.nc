#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <limits.h>
#include <libgen.h>
#include <dirent.h>
#include <sys/stat.h>

#include "common.h"

impl Vi version 12
{
void exitFromComandMode(Vi* self);
}

impl ViWin version 12
{
void commandModeView(ViWin* self, Vi* nvi) {
    //werase(self.win);

    self.textsView(nvi);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, ":%s", nvi.commandString);
    wattroff(self.win, A_REVERSE);

    //wrefresh(self.win);
}

string selector(ViWin* self, list<string>* lines) {
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
                mvprintw(y, 0, "%s", line);
                attroff(A_REVERSE);
            }
            else {
                mvprintw(y, 0, "%s", line);
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

    if(canceled) {
        return string("");
    }
    return string(lines.item(scrolltop+cursor, string("")));
}

void fileCompetion(ViWin* self, Vi* nvi) {
    char* line = nvi.commandString;

    char* p = line + strlen(line) -1;
    
    while(p >= line) {
        if(*p == ' ' || *p == '\t') {
            p++;
            break;
        }
        else {
            p--;
        }
    }
    
    var word = string(p);

    string dir_name = null;
    if(word.item(-1, -1) == '/') {
        dir_name = string(word);
    }
    else {
        char* dname = dirname(clone word);

        if(strcmp(dname, "/") == 0) {
            dir_name = string("/");
        }
        else {
            dir_name = string(dirname(clone word)) + string("/");
        }
    }

    var words = new list<string>.initialize();

    if(dir_name.equals("./")) {
        char* cwd = getenv("PWD");
        
        if(cwd == null) {
            return;
        }
    
        DIR* dir = opendir(cwd);
    
        if(dir == null) {
            return;
        }
    
        while(true) {
            struct dirent* entry = readdir(dir);
    
            if(entry == null) {
                break;
            }
            
            string path = string(cwd) + string("/") + string(entry->d_name);
            
            stat stat_;
            stat(path, &stat_);
            
            if(S_ISDIR(stat_.st_mode)) {
                words.push_back(string(entry->d_name) + string("/"));
            }
            else {
                words.push_back(string(entry->d_name));
            }
        }
    
        closedir(dir);
    }
    else if(dir_name.item(0, -1) == '/') {
        DIR* dir;
        if(strcmp(word, "/") != 0 && word.item(-1, -1) == '/') {
            dir = opendir(word.substring(0, -2));
        }
        else {
            dir = opendir(dir_name);
        }
    
        if(dir == null) {
            return;
        }
    
        while(true) {
            struct dirent* entry = readdir(dir);
    
            if(entry == null) {
                break;
            }
            
            string path = dir_name + string(entry->d_name);
            
            stat stat_;
            stat(path, &stat_);
            
            if(S_ISDIR(stat_.st_mode)) {
                words.push_back(dir_name + string(entry->d_name) + string("/"));
            }
            else {
                words.push_back(dir_name + string(entry->d_name));
            }
        }
    
        closedir(dir);
    }
    else {
        DIR* dir;
        if(word.item(-1, -1) == '/') {
            dir = opendir(word.substring(0, -2));
        }
        else {
            dir = opendir(dir_name);
        }
    
        if(dir == null) {
            return;
        }
    
        while(true) {
            struct dirent* entry = readdir(dir);
    
            if(entry == null) {
                break;
            }
            
            string path = dir_name + string(entry->d_name);
            
            stat stat_;
            stat(path, &stat_);
            
            if(S_ISDIR(stat_.st_mode)) {
                words.push_back(dir_name + string(entry->d_name) + string("/"));
            }
            else {
                words.push_back(dir_name + string(entry->d_name));
            }
        }
    
        closedir(dir);
    }
    
    var words2 = words.filter { strcmp(word, "") == 0 || strstr(it, word) == it }.sort();
    
    var file_name = self.selector(words2).substring(strlen(word), -1);
    
    nvi.commandString = nvi.commandString + file_name;
}

void commandModeInput(ViWin* self, Vi* nvi) {
    var key = self.getKey(false);

    switch(key) {
        case '\n':
            nvi.exitFromComandMode();
            break;

        case 3:
        case 27:
            nvi.mode = kEditMode;
            break;
            
        case '\t':
            self.fileCompetion(nvi);
            break;

        case 8:
        case 127:
        case KEY_BACKSPACE:
            nvi.commandString.delete(-1);
            break;

        default:
            nvi.commandString = nvi.commandString + key.to_string();
            break;
    }
}

void view(ViWin* self, Vi* nvi) {
    if(nvi.mode == kCommandMode && self == nvi.activeWin) {
        self.commandModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}
void input(ViWin* self, Vi* nvi) {
    if(nvi.mode == kCommandMode) {
        self.commandModeInput(nvi);
    }
    else {
        inherit(self, nvi);
    }
}
void subAllTextsFromCommandMode(ViWin* self, Vi* nvi) {
    /// parse command ///
    var command = nvi.commandString
           .scan(regex!("%s\/\(.+\)\/\(.*\)\/*?"));
               
    var str = command.item(1, null);
    var replace = command.item(2, null);
    
    if(str != null && replace != null) {
        self.pushUndo();
        self.texts.each {
            var reg = regex(str, false, false, true, false
                        , false, false, false, false);
            var new_line = it.to_string("").sub(reg, replace, null).to_wstring();
            
            self.texts.replace(it2, new_line);
        }
    }
}

impl Vi version 12
{
void enterComandMode(Vi* self) {
    self.mode = kCommandMode;
    self.commandString = string("");
}
void exitFromComandMode(Vi* self) {
    if(self.commandString.index("sp", -1) == 0) {
        var file_name = self.commandString.scan(regex!("sp \(.+\)")).clone_item(1, null);

        if(file_name != null) {
            self.openNewFile(file_name);
        }
    }
    else {
        if(self.commandString.index("%", -1) != -1) {
            self.activeWin.subAllTextsFromCommandMode(self);
            self.mode = kEditMode;
        }
        if(self.commandString.index("w", -1) != -1) {
            self.activeWin.writeFile();
        }
        if(self.commandString.index("q", -1) != -1) {
            bool writed = self.activeWin.writed;

            if(!writed || self.commandString.index("!", -1) != -1) {
                if(self.wins.length() == 1) {
                    self.appEnd = true;
                }
                else {
                    self.closeActiveWin();
                }
            }
        }
        if(self.commandString.index("shell", -1) != -1) {
            endwin();
            
            (void)system("bash");

            self.init_curses();
        }
    }

    self.mode = kEditMode;
}
initialize() {
    inherit(self);

    self.commandString = string("");

    self.events.replace(':', lambda(Vi* self, int key) {
        self.enterComandMode();
    });
}

/// implemeted after ///
void activateFiler(Vi* self) {
}
}





/*
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <limits.h>
#include <libgen.h>
#include <dirent.h>
#include <sys/stat.h>

#include "common.h"

Vi* gApp;

impl Vi version 12
{
initialize() {
    inherit(self);

    self.events.replace(':', lambda(Vi* self, int key) {
        self.enterComandMode();
    });

    gApp = self;
}

void enterComandMode(Vi* self) 
{
    ViWin* win = self.activeWin;

    win.pushUndo();
    
    endwin();
    
    bool no_load_fudamental_classes = false;

    setlocale(LC_ALL, "");

    set_signal_shell();

    var types = new vector<sCLType*%>.initialize();

    clover3_init(no_load_fudamental_classes);

    heap_init(HEAP_INIT_SIZE, HEAP_HANDLE_INIT_SIZE);

    clover3_init_for_wi(types);
    
    CLVALUE result;
    shell_commandline_without_to_string("", -1, types, &result);
    
    if(result.mObjectValue != 0) {
        CLObject obj = result.mObjectValue;
        sCLObject* object_data = CLOBJECT(obj);
        sCLType* type = object_data->mType;
        
        if(strcmp(type->mClass->mName, "string") == 0) {
            char* str = get_string_mem(obj);
            
            if(strcmp(str, "") != 0) {
                var li = string(str).split_char('\n');
                
                li.each {
                    var wstr = it.to_wstring();
                    win.texts.insert(win.scroll+win.cursorY+it2, wstr);
                }
                
                self.exitFromVisualMode();
            }
        }
        else if(strcmp(type->mClass->mName, "list") == 0) {
            var li = get_list_value(obj);
            
            li.each {
                CLObject obj = it;
                
                sCLObject* object_data = CLOBJECT(obj);
                
                sCLType* type = object_data->mType;
                
                if(strcmp(type->mClass->mName, "string") == 0) {
                    char* str = get_string_mem(obj);
                    
                    var wstr = str.to_wstring();
                    win.texts.insert(win.scroll+win.cursorY+it2, wstr);
                }
            }
            
            self.exitFromVisualMode();
        }
    }

    heap_final();

    clover3_final();
    
    self.init_curses();
}

}

bool system_wq(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.wq");
        return false;
    }

    gApp.activeWin.writeFile();

    if(gApp.wins.length() == 1) {
        puts("writed and exiting...");
        gApp.appEnd = true;
    }
    else {
        puts("writed and closing window...");
        gApp.closeActiveWin();
    }

    return true;
}

bool system_qw(CLVALUE** stack_ptr, sVMInfo* info)
{
    if(!system_wq(stack_ptr, info)) {
        return false;
    }

    return true;
}

bool system_q(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.wq");
        return false;
    }

    if(gApp.wins.length() == 1) {
        puts("don't writing and exiting...");
        gApp.appEnd = true;
    }
    else {
        puts("don't writing and closing window...");
        gApp.closeActiveWin();
    }

    return true;
}

bool system_sp(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject path = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.sp");
        return false;
    }
    if(!check_type(path, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.sp");
        return false;
    }

    /// sevenstars to neo-c ///
    char* path_value = get_string_mem(path);

    /// go ///
    gApp.openNewFile(path_value);
    
    return true;
}

bool system_texts(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.sp");
        return false;
    }

    /// sevenstars to neo-c ///
    list<int>*% li = new list<int>.initialize();
    
    ViWin* win = gApp.activeWin;
    
    if(gApp.mode == kVisualMode) {
        int head = win.visualModeHead;
        int tail = win.scroll+win.cursorY;
    
        if(head >= tail) {
            int tmp = tail;
            tail = head;
            head = tmp;
        }
    
        win.texts.sublist(head, tail+1).each {
            CLObject obj = create_string_object(it.to_string(""), info);
            
            (*stack_ptr)->mObjectValue = obj;
            (*stack_ptr)++;
            
            li.push_back(obj);
        }

        CLObject obj = create_list_object(li, info);
        
        (*stack_ptr) -= tail+1-head;
        
        (*stack_ptr)->mObjectValue = obj;
        (*stack_ptr)++;
    }
    else {
        win.texts.each {
            CLObject obj = create_string_object(it.to_string(""), info);
            
            (*stack_ptr)->mObjectValue = obj;
            (*stack_ptr)++;
            
            li.push_back(obj);
        }

        CLObject obj = create_list_object(li, info);
        
        (*stack_ptr) -= win.texts.length();
        
        (*stack_ptr)->mObjectValue = obj;
        (*stack_ptr)++;
    }
    
    return true;
}

void clover3_init_for_wi(vector<sCLType*%>* types)
{
    (void)eval_class("class system { def wq():void; def qw():void; def sp(path:string):void; def q():void; def texts():list<string>; }", types, "wi", 0);

    gNativeMethods.insert(string("system.wq"), system_wq);
    gNativeMethods.insert(string("system.q"), system_q);
    gNativeMethods.insert(string("system.qw"), system_qw);
    gNativeMethods.insert(string("system.sp"), system_sp);
    gNativeMethods.insert(string("system.texts"), system_texts);
}
*/
