#include "common.h"

bool parsecmp(const char* p2, sInfo* info=info)
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

int err_msg(sInfo* info, const char* msg, ...)
{
    if(!info.no_output_come_code) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        char* p = info.p;
        int sline_real = info.sline_real > 0 ? info.sline_real : info.sline;
        
        buffer*% buf = new buffer();
        
        if(info.come_fun) {
            buf.append_format("%s %d(%d): [error] %s in fun (%s)\n", info.sname, info.sline, sline_real, msg2, info.come_fun.mName);
        }
        else {
            buf.append_format("%s %d(%d): [error] %s\n", info.sname, info.sline, sline_real, msg2);
        }
        
        if((info.end - info.p) > 30 && (info.p - info.head) > 30) {
            char mem[128];
            memcpy(mem, info.p - 30, 60);
            mem[20] = '\0';
            buf.append_str(mem + "\n"); 
        }
        
        info.err_num++;

        free(msg2);
        
        printf(buf.to_string() + "\n");
        return 0;
    }
    
    return 0;
}

int warning_msg(sInfo* info, const char* msg, ...)
{
    if(!info.no_output_come_code) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        int sline_real = info.sline_real > 0 ? info.sline_real : info.sline;
        
        buffer*% buf = new buffer();
        
        if(info.come_fun) {
            buf.append_format("%s %d(%d): [warning] %s in fun (%s)\n", info.sname, info.sline, sline_real, msg2, info.come_fun.mName);
        }
        else {
            buf.append_format("%s %d(%d): [warning] %s\n", info.sname, info.sline, sline_real, msg2);
        }
        if((info.end - info.p) > 30 && (info.p - info.head) > 30) {
            char mem[128];
            memcpy(mem, info.p - 30, 60);
            mem[20] = '\0';
            buf.append_str(mem + "\n"); 
        }
        
        info.warning_num++;

        free(msg2);
        
        printf(buf.to_string() + "\n");
        return 0;
    }
    
    return 0;
}

int expected_next_character(char c, sInfo* info=info)
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

string parse_word(bool digits=false, sInfo* info=info)
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
        exit(1);
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
                info->sline_real++;
            }
            else if(*info->p == '\r') {
                info->p++;
                if(*info->p == '\n') {
                    info->p++;
                }
                info->sline++;
                info->sline_real++;
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
                info->sline_real++;
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
                info->sline_real++;
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
            info->sline_real++;
        }
        else if(*info->p == '\n') {
            info->p++;
            info->sline++;
            info->sline_real++;
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
            info->sline_real++;
        }
        else if(*info->p == '\n') {
            info->p++;
            info->sline++;
            info->sline_real++;
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

static bool is_number_token(char* token)
{
    if(token == null || *token == '\0') {
        return false;
    }
    char* p = token;
    while(*p) {
        if(!xisdigit(*p)) {
            return false;
        }
        p++;
    }
    return true;
}

static string pack_stack_make_entry(string id, string pragma)
{
    return xsprintf("%s\t%s", id, pragma);
}

static string pack_stack_entry_id(char* entry)
{
    if(entry == null) {
        return s"";
    }
    
    char* p = strchr(entry, '\t');
    if(p == null) {
        return s"";
    }
    
    buffer*% buf = new buffer();
    buf.append(entry, p-entry);
    return buf.to_string();
}

static string pack_stack_entry_pragma(char* entry)
{
    if(entry == null) {
        return s"";
    }
    
    char* p = strchr(entry, '\t');
    if(p == null) {
        return s"";
    }
    
    return xsprintf("%s", p+1);
}

static void apply_pack_pragma_state(string pragma_line, sInfo* info)
{
    if(info.pragma_pack_stack == null) {
        info.pragma_pack_stack = new list<string>();
    }
    if(info.pragma == null) {
        info.pragma = s"";
    }
    
    buffer*% compact_buf = new buffer();
    char* p = borrow pragma_line;
    while(*p) {
        if(*p != ' ' && *p != '\t' && *p != '\n' && *p != '\r') {
            compact_buf.append_char(*p);
        }
        p++;
    }
    
    string compact = compact_buf.to_string();

    int lparen_pos = -1;
    int rparen_pos = -1;
    for(int i=0; i<compact.length(); i++) {
        char d = compact[i];
        if(d == '(' && lparen_pos == -1) {
            lparen_pos = i;
        }
        if(d == ')') {
            rparen_pos = i;
        }
    }
    if(lparen_pos == -1 || rparen_pos == -1) {
        return;
    }
    
    // #pragma pack() resets to the default alignment.
    // Without this, a preceding #pragma pack(N) can leak to unrelated
    // structs (e.g. sys/stat.h on macOS).
    if(rparen_pos == lparen_pos+1) {
        info.pragma = s"";
        return;
    }
    
    if(rparen_pos < lparen_pos+1) {
        return;
    }

    list<string>*% tokens = new list<string>();
    {
        int i = lparen_pos + 1;
        while(i < rparen_pos) {
            buffer*% tok = new buffer();
            while(i < rparen_pos) {
                char d = compact[i];
                if(d == ',') {
                    break;
                }
                tok.append_char(d);
                i++;
            }
            tokens.push_back(tok.to_string());
            if(i < rparen_pos && compact[i] == ',') {
                i++;
            }
        }
    }
    if(tokens.length() == 0) {
        return;
    }
    
    string op = clone tokens.item(0, s"");
    
    if(op === "push") {
        string push_id = s"";
        string push_num = s"";
        
        for(int i=1; i<tokens.length(); i++) {
            string tok2 = clone tokens.item(i, s"");
            if(is_number_token(tok2)) {
                push_num = clone tok2;
            }
            else if(push_id === "") {
                push_id = clone tok2;
            }
        }
        
        info.pragma_pack_stack.push_back(pack_stack_make_entry(push_id, info.pragma));
        
        if(push_num !== "") {
            info.pragma = pragma_line;
        }
    }
    else if(op === "pop") {
        string pop_id = s"";
        string pop_num = s"";
        
        for(int i=1; i<tokens.length(); i++) {
            string tok2 = clone tokens.item(i, s"");
            if(is_number_token(tok2)) {
                pop_num = clone tok2;
            }
            else if(pop_id === "") {
                pop_id = clone tok2;
            }
        }
        
        if(pop_id !== "") {
            int found = -1;
            for(int i=0; i<info.pragma_pack_stack.length(); i++) {
                string stack_id = pack_stack_entry_id(info.pragma_pack_stack.item(i, s""));
                if(stack_id === pop_id) {
                    found = i;
                }
            }
            if(found >= 0) {
                info.pragma = pack_stack_entry_pragma(info.pragma_pack_stack.item(found, s""));
                info.pragma_pack_stack.delete(found, info.pragma_pack_stack.length());
            }
        }
        else {
            int len = info.pragma_pack_stack.length();
            if(len > 0) {
                info.pragma = pack_stack_entry_pragma(info.pragma_pack_stack.item(len-1, s""));
                info.pragma_pack_stack.delete(len-1, len);
            }
            else {
                info.pragma = s"";
            }
        }
        
        if(pop_num !== "") {
            info.pragma = xsprintf("#pragma pack(push, %s)\n", pop_num);
        }
    }
    else if(tokens.length() == 1 && is_number_token(op)) {
        // Normalize pack(N) to push/pop form so generated C stays balanced.
        info.pragma = xsprintf("#pragma pack(push, %s)\n", op);
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
                
                string pragma_line = buf.to_string();
                if(pragma_line.index("pack(", -1) != -1) {
                    apply_pack_pragma_state(pragma_line, info);
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
                        info->sline_real++;
                    }
                }
    
                if(line > 0) {
                    info->sline = line; // - 1;
                    info->sline_real = line;
                }
                else {
                    info->sline = line;
                    info->sline_real = line;
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
                        info->sline_real++;
                    }
                }
    
/*
                if(line > 0) {
                    info->sline = line - 1;
                }
                else {
*/
                    info->sline = line;
                    info->sline_real = line;
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
                    info->sline_real++;
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
