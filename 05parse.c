#include "common.h"

bool parsecmp(char* p2, sInfo* info=info)
{
    bool terminated = false;
    char* p3  = info->p;
    for(int i=0; i<strlen(p2); i++) {
        if(*p3 == '\0') {
            return false;
        }
        p3++;
    }
    unsigned char c = *(info->p+strlen(p2));
    return memcmp(info->p, p2, strlen(p2)) == 0 && (xispunct(c) || c == ' ' || c == '\t' || c == '\n' || c == '\0' || c == '\r') && c != '_';
}

int err_msg(sInfo* info, char* msg, ...)
{
    if(!info.no_output_come_code) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        char* p = info.p;
        
        char* last_lf = null;
        while(p >= info.head) {
            if(*p == '\n') {
                last_lf = p;
                break;
            }
            p--;
        }
        
        buffer*% buf = new buffer();
        
        if(last_lf) {
            int col = info.p - last_lf;
        
            buf.append_format("%s %d(real %d)(block %d) %d: %s", info.sname, info.sline, info.sline_real, info.sline_block, col, msg2);
        }
        else {
            int col = info.p - info.head;
        
            buf.append_format("%s %d(real %d)(block %d) %d: %s", info.sname, info.sline, info.sline_real, info.sline_block, col, msg2);
        }
        
        info.err_num++;

        free(msg2);
        
        printf(buf.to_string() + "\n");
        return 0;
    }
    
    return 0;
}

int err_msg2(sInfo* info, char* msg, ...)
{
    if(!info.no_output_come_code) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        char* p = info.p;
        
        char* last_lf = null;
        while(p >= info.head) {
            if(*p == '\n') {
                last_lf = p;
                break;
            }
            p--;
        }
        
        buffer*% buf = new buffer();
        
        if(last_lf) {
            int col = info.p - last_lf;
        
            buf.append_format("%s %d(real %d)(block %d) %d: %s", info.sname, info.sline, info.sline_real, info.sline_block, col, msg2);
        }
        else {
            int col = info.p - info.head;
        
            buf.append_format("%s %d(real %d)(block %d) %d: %s", info.sname, info.sline, info.sline_real, info.sline_block, col, msg2);
        }
        
        info.err_num2++;

        free(msg2);
        
        printf(buf.to_string() + "\n");
        return 0;
    }
    
    return 0;
}

record int expected_next_character(char c, sInfo* info=info)
{
    parse_sharp();
    if(*info->p != c) {
        if(!info.no_output_come_code) {
            err_msg(info, "expected next charaster is %c, but %c, caller %s %d", c, *info->p, info->caller_sname, info->caller_line);
            stackframe();
            exit(1);
        }
    }
    
    info->p++;
    skip_spaces_and_lf();
    
    return 0;
}

record string parse_word(bool digits=false, sInfo* info=info)
{
    var buf = new buffer();
    parse_sharp();
    
    if(digits) {
        while((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_' || (*info->p >= '0' && *info->p <= '9') || (*info->p == '$'))
        {
            buf.append_char(*info->p);
            info->p++;
        }
    }
    else {
        if((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_' || (*info->p == '$'))
        {
            while((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_' || (*info->p >= '0' && *info->p <= '9') || (*info->p == '$'))
            {
                buf.append_char(*info->p);
                info->p++;
            }
        }
    }
    skip_spaces_and_lf();
    
    if(buf.to_string().length() == 0) {
        err_msg(info, "unexpected character(%c), expected word character, caller %s %d", *info->p, info->caller_sname, info->caller_line);
        stackframe();
        return string("");
    }
    
    string result = buf.to_string();
    
    if(info->module_params) {
        if(info->module_params[string(result)]) {
            return string(info->module_params[string(result)]);
        }
    }
    
    return result;
}

string backtrace_parse_word(sInfo* info=info)
{
    char* p = info.p;
    int sline = info.sline;
    
    string buf;
    if(xisalpha(*info->p) || *info->p == '_') {
        buf = parse_word();
    }
    else {
        buf = string("");
    }
    
    info.p = p;
    info.sline = sline;
    
    return buf;
}


static bool skip_comment(sInfo* info, bool skip_space_after)
{
    if(*info->p == '/' && *(info->p+1) == '*') {
        int nest = 0;
        while(1) {
            if(*info->p == '/' && *(info->p+1) == '*') {
                info->p +=2;
                nest++;
            }
            else if(*info->p == '*' && *(info->p+1) == '/') {
                info->p +=2;
                nest--;
                
                if(nest == 0) {
                    if(skip_space_after) {
                        skip_spaces_and_lf2();
                    }
                    break;
                }
            }
            else if(*info->p == '\n') {
                info->p++;
                info->sline++;
            }
            else if(*info->p == '\r') {
                info->p++;
                if(*info->p == '\n') {
                    info->p++;
                }
                info->sline++;
            }
            else if(*info->p == '\0') {
                err_msg(info, "unterminated comment");
                break;
            }
            else {
                info->p++;
            }
        }
        
        return true;
    }
    else if(*info->p == '/' && *(info->p+1) == '/') {
        info->p+=2;
        
        while(1) {
            if(*info->p == '\n') {
                info->p++;
                info->sline++;
                if(skip_space_after) {
                    skip_spaces_and_lf2();
                }
                break;
            }
            else if(*info->p == '\r') {
                info->p++;
                if(*info->p == '\n') {
                    info->p++;
                }
                info->sline++;
                if(skip_space_after) {
                    skip_spaces_and_lf2();
                }
                break;
            }
            else if(*info->p == '\0') {
                break;
            }
            else { 
                info->p++;
            }
        }
        
        return true;
    }
    
    return false;
}

void skip_spaces_and_lf(sInfo* info=info)
{
    while(true) {
        if(*info->p == ' ' || *info->p == '\t') {
            info->p++;
        }
        else if(*info->p == '\r') {
            info->p++;
            if(*info->p == '\n') {
                info->p++;
            }
            info->sline++;
        }
        else if(*info->p == '\n') {
            info->p++;
            info->sline++;
        }
        else if(skip_comment(info, false)) {
        }
        else {
            break;
        }
    }
    
    if(*info->p == '#') {
        parse_sharp();
    }
    else if(*info->p == '_' && parsecmp("__extension__")) {
        parse_sharp();
    }
}

void skip_spaces_and_lf2(sInfo* info=info)
{
    while(true) {
        if(*info->p == ' ' || *info->p == '\t') {
            info->p++;
        }
        else if(*info->p == '\r') {
            info->p++;
            if(*info->p == '\n') {
                info->p++;
            }
            info->sline++;
        }
        else if(*info->p == '\n') {
            info->p++;
            info->sline++;
        }
        else if(skip_comment(info, false)) {
        }
        else {
            break;
        }
    }
}

void skip_spaces_and_tabs(sInfo* info=info)
{
    while(true) {
        if(*info->p == ' ' || *info->p == '\t') {
            info->p++;
        }
        else if(*info->p == '/' && *(info->p+1) == '*') {
            (void)skip_comment(info, false);
        }
        else if(*info->p == '/' && *(info->p+1) == '/') {
            info->p += 2;
            while(*info->p && *info->p != '\n' && *info->p != '\r') {
                info->p++;
            }
            break;
        }
        else {
            break;
        }
    }
}

void parse_sharp(sInfo* info=info) version 5
{
    while(1) {
        if(*info->p == '#') {
            info->p++;
            skip_spaces_and_tabs();
            
            if(parsecmp("pragma")) {
                buffer*% buf = new buffer();
                buf.append_str("#");
                while(*info->p) {
                    if(*info->p == '\n') {
                        buf.append_char(*info->p);
                        skip_spaces_and_lf2();
                        break;
                    }
                    else if(*info->p == '\0') {
                        break;
                    }
                    else {
                        buf.append_char(*info->p);
                        info->p++;
                    }
                }
                
                if(buf.to_string().index("pack(", -1) != -1) {
                    info.pragma = buf.to_string();
                }
            }
            else if(parsecmp("line")) {
                info->p += strlen("line");
                skip_spaces_and_tabs();
                
                int line = 0;
                buffer*% fname = new buffer();
    
                if(!xisdigit(*info->p)) {
                    err_msg(info, "invalid #line directive");
                    return;
                }
                
                while(xisdigit(*info->p)) {
                    line = line * 10 + (*info->p - '0');
                    info->p++;
                }
                skip_spaces_and_tabs();
    
                if(*info->p == '"') {
                    info->p++;
    
                    while(*info->p && *info->p != '"') {
                        fname.append_char(*info->p);
                        info->p++;
                    }
                    if(*info->p == '\0') {
                        err_msg(info, "unterminated #line file name");
                        return;
                    }
                    info->p++;
    
                    while(*info->p && *info->p != '\n') {
                        info->p++;
                    }
                    if(*info->p == '\n') {
                        info->p++;
                    }
                }
    
                if(line > 0) {
                    info->sline = line; // - 1;
                }
                else {
                    info->sline = line;
                }
                
                string fname_str = fname.to_string();
                if(fname_str.length() > 0) {
                    info->sname = fname_str;
                }
    
                skip_spaces_and_tabs();
            }
            else if(xisdigit(*info->p)) {
                int line = 0;
                buffer*% fname = new buffer();
    
                while(xisdigit(*info->p)) {
                    line = line * 10 + (*info->p - '0');
                    info->p++;
                }
                skip_spaces_and_tabs();
    
                if(*info->p == '"') {
                    info->p++;
    
                    while(*info->p && *info->p != '"') {
                        fname.append_char(*info->p);
                        info->p++;
                    }
                    if(*info->p == '\0') {
                        err_msg(info, "unterminated #line file name");
                        return;
                    }
                    info->p++;
    
                    while(*info->p && *info->p != '\n') {
                        info->p++;
                    }
                    if(*info->p == '\n') {
                        info->p++;
                    }
                }
    
/*
                if(line > 0) {
                    info->sline = line - 1;
                }
                else {
*/
                    info->sline = line;
//                }
                
                string fname_str = fname.to_string();
                if(fname_str.length() > 0) {
                    info->sname = fname_str;
                }
    
                skip_spaces_and_tabs();
            }
            else if(*info->p == '"') {
                info->p++;
    
                while(*info->p && *info->p != '"') {
                    info->p++;
                }
                if(*info->p == '\0') {
                    err_msg(info, "unterminated #include file name");
                    return;
                }
                info->p++;
    
                while(*info->p && *info->p != '\n') {
                    info->p++;
                }
                if(*info->p == '\n') {
                    info->p++;
                }
            }
        
            skip_spaces_and_lf2();
        }
        else if(skip_comment(info, true)) {
        }
        else if(parsecmp("__extension__")) {
            info->p += strlen("__extension__");
            skip_spaces_and_lf2();
        }
        else {
            break;
        }
    }
}

void skip_paren(sInfo* info)
{
    int nest = 0;
    while(true) {
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            
            nest++;
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            
            nest--;
            if(nest == 0) {
                break;
            }
        }
        else if(*info->p == '\0') {
            err_msg(info, "invalid the source end. require )");
            exit(1);
        }
        else {
            info->p++;
        }
    }
}
