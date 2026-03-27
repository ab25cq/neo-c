#include "common.h"

char* parsecmp_tail(const char* p2, sInfo* info=info)
{
    char* p = info.p;
    
    while(*p2) {
        if(*p == '\0' || *p != *p2) {
            return null;
        }
        p++;
        p2++;
    }
    
    unsigned char c = *p;
    if(!NEO_IS_PARSE_TAIL_CHAR(c)) {
        return null;
    }
    
    return p;
}

bool parsecmp(const char* p2, sInfo* info=info)
{
    return parsecmp_tail(p2, info) != null;
}

char* parsecmp_forward(const char* p2, sInfo* info=info)
{
    char* tail = parsecmp_tail(p2, info);
    if(tail != null) {
        info.p = tail;
    }
    return tail;
}

#define MATCH_COMMON_ATTRIBUTE(keyword) (len == (sizeof(keyword)-1) && memcmp(p, keyword, sizeof(keyword)-1) == 0)

int match_common_attribute_keyword_len(const char* p)
{
    if(p == null || p[0] != '_' || p[1] != '_') {
        return 0;
    }
    
    int len = 0;
    while(NEO_IS_ASCII_ALNUM(p[len]) || p[len] == '_') {
        len++;
    }
    
    if(len < 5 || !NEO_IS_PARSE_TAIL_CHAR(p[len])) {
        return 0;
    }
    
    switch(p[2]) {
        case 'a':
            if(MATCH_COMMON_ATTRIBUTE("__aligned")
                || MATCH_COMMON_ATTRIBUTE("__aligned_largest")
                || MATCH_COMMON_ATTRIBUTE("__aligned_u64")
                || MATCH_COMMON_ATTRIBUTE("__alias")
                || MATCH_COMMON_ATTRIBUTE("__alloc_align")
                || MATCH_COMMON_ATTRIBUTE("__always_inline")
                || MATCH_COMMON_ATTRIBUTE("__always_unused")
                || MATCH_COMMON_ATTRIBUTE("__assume_aligned"))
            {
                return len;
            }
            break;
        
        case 'c':
            if(MATCH_COMMON_ATTRIBUTE("__cleanup")
                || MATCH_COMMON_ATTRIBUTE("__cold")
                || MATCH_COMMON_ATTRIBUTE("__constructor"))
            {
                return len;
            }
            break;
        
        case 'd':
            if(MATCH_COMMON_ATTRIBUTE("__deprecated")
                || MATCH_COMMON_ATTRIBUTE("__destructor"))
            {
                return len;
            }
            break;
        
        case 'e':
            if(MATCH_COMMON_ATTRIBUTE("__error")
                || MATCH_COMMON_ATTRIBUTE("__exit")
                || MATCH_COMMON_ATTRIBUTE("__exitconst")
                || MATCH_COMMON_ATTRIBUTE("__exitdata"))
            {
                return len;
            }
            break;
        
        case 'f':
            if(MATCH_COMMON_ATTRIBUTE("__flatten")
                || MATCH_COMMON_ATTRIBUTE("__format")
                || MATCH_COMMON_ATTRIBUTE("__format_arg"))
            {
                return len;
            }
            break;
        
        case 'h':
            if(MATCH_COMMON_ATTRIBUTE("__hot")) {
                return len;
            }
            break;
        
        case 'i':
            if(MATCH_COMMON_ATTRIBUTE("__init")
                || MATCH_COMMON_ATTRIBUTE("__init_rodata")
                || MATCH_COMMON_ATTRIBUTE("__initconst")
                || MATCH_COMMON_ATTRIBUTE("__initdata"))
            {
                return len;
            }
            break;
        
        case 'l':
            if(MATCH_COMMON_ATTRIBUTE("__latent_entropy")
                || MATCH_COMMON_ATTRIBUTE("__leaf"))
            {
                return len;
            }
            break;
        
        case 'm':
            if(MATCH_COMMON_ATTRIBUTE("__malloc")
                || MATCH_COMMON_ATTRIBUTE("__maybe_unused")
                || MATCH_COMMON_ATTRIBUTE("__meminit")
                || MATCH_COMMON_ATTRIBUTE("__meminitconst")
                || MATCH_COMMON_ATTRIBUTE("__meminitdata")
                || MATCH_COMMON_ATTRIBUTE("__must_check"))
            {
                return len;
            }
            break;
        
        case 'n':
            if(MATCH_COMMON_ATTRIBUTE("__naked")
                || MATCH_COMMON_ATTRIBUTE("__noclone")
                || MATCH_COMMON_ATTRIBUTE("__no_instrument_function")
                || MATCH_COMMON_ATTRIBUTE("__no_profile")
                || MATCH_COMMON_ATTRIBUTE("__no_sanitize")
                || MATCH_COMMON_ATTRIBUTE("__no_sanitize_address")
                || MATCH_COMMON_ATTRIBUTE("__no_sanitize_coverage")
                || MATCH_COMMON_ATTRIBUTE("__no_sanitize_thread")
                || MATCH_COMMON_ATTRIBUTE("__noinline"))
            {
                return len;
            }
            break;
        
        case 'o':
            if(MATCH_COMMON_ATTRIBUTE("__optimize")) {
                return len;
            }
            break;
        
        case 'p':
            if(MATCH_COMMON_ATTRIBUTE("__packed")
                || MATCH_COMMON_ATTRIBUTE("__percpu"))
            {
                return len;
            }
            break;
        
        case 'r':
            if(MATCH_COMMON_ATTRIBUTE("__read_mostly")
                || MATCH_COMMON_ATTRIBUTE("__ref")
                || MATCH_COMMON_ATTRIBUTE("__returns_nonnull")
                || MATCH_COMMON_ATTRIBUTE("__ro_after_init"))
            {
                return len;
            }
            break;
        
        case 's':
            if(MATCH_COMMON_ATTRIBUTE("__scanf")
                || MATCH_COMMON_ATTRIBUTE("__section"))
            {
                return len;
            }
            break;
        
        case 't':
            if(MATCH_COMMON_ATTRIBUTE("__target")) {
                return len;
            }
            break;
        
        case 'u':
            if(MATCH_COMMON_ATTRIBUTE("__unused")
                || MATCH_COMMON_ATTRIBUTE("__used"))
            {
                return len;
            }
            break;
        
        case 'v':
            if(MATCH_COMMON_ATTRIBUTE("__visibility")) {
                return len;
            }
            break;
        
        case 'w':
            if(MATCH_COMMON_ATTRIBUTE("__warn_unused_result")
                || MATCH_COMMON_ATTRIBUTE("__warning")
                || MATCH_COMMON_ATTRIBUTE("__weak")
                || MATCH_COMMON_ATTRIBUTE("__weak_ref"))
            {
                return len;
            }
            break;
    }
    
    return 0;
}

#undef MATCH_COMMON_ATTRIBUTE

static int output_compile_message(sInfo* info, const char* level, const char* msg2)
{
    int sline_real = info.sline_real > 0 ? info.sline_real : info.sline;
    
    if(info.come_fun) {
        printf("%s %d(%d): [%s] %s in fun (%s)\n", info.sname, info.sline, sline_real, level, msg2, info.come_fun.mName);
    }
    else {
        printf("%s %d(%d): [%s] %s\n", info.sname, info.sline, sline_real, level, msg2);
    }
    
    if((info.end - info.p) > 30 && (info.p - info.head) > 30) {
        char mem[61];
        memcpy(mem, info.p - 30, 60);
        mem[60] = '\0';
        printf("%s\n", mem);
    }
    
    printf("\n");
    return 0;
}

int err_msg(sInfo* info, const char* msg, ...)
{
    if(!info.no_output_come_code) {
        char* msg2;
    
        va_list/ args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        info.err_num++;

        output_compile_message(info, "error", msg2);
        free(msg2);
        return 0;
    }
    
    return 0;
}

int warning_msg(sInfo* info, const char* msg, ...)
{
    if(!info.no_output_come_code) {
        char* msg2;
    
        va_list/ args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        info.warning_num++;

        output_compile_message(info, "warning", msg2);
        free(msg2);
        return 0;
    }
    
    return 0;
}

int expected_next_character(char c, sInfo* info=info)
{
    parse_sharp();
    if(*info.p != c) {
        if(!info.no_output_come_code) {
            err_msg(info, "expected next charaster is %c, but %c, caller %s %d", c, *info.p, info->caller_sname, info->caller_line);
            //stackframe();
            exit(1);
        }
    }
    
    info->p++;
    skip_spaces_and_lf();
    
    return 0;
}

string parse_word(bool digits=false, sInfo* info=info)
{
    parse_sharp();
    
    char* p = info.p;
    char* head = p;
    
    char c = *p;
    if(NEO_IS_WORD_HEAD_CHAR(c) || (digits && NEO_IS_ASCII_DIGIT(c))) {
        do {
            p++;
        } while(NEO_IS_WORD_BODY_CHAR(*p));
    }
    
    info.p = p;
    skip_spaces_and_lf();
    
    if(head == p) {
        err_msg(info, "unexpected character(%c), expected word character, caller %s %d", *info.p, info->caller_sname, info->caller_line);
        //stackframe();
        exit(1);
    }
    
    int len = p - head;
    char*% mem = new char[len+1];
    memcpy(mem, head, len);
    mem[len] = '\0';
    string result = mem;
    
    if(info->module_params) {
        string module_param = info->module_params[result];
        if(module_param) {
            return module_param;
        }
    }
    
    return result;
}

string backtrace_parse_word(sInfo* info=info)
{
    char* p = info.p;
    int sline = info.sline;
    
    string buf;
    if(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_') {
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
    char* p = info.p;
    int sline = info.sline;
    int sline_real = info.sline_real;
    
    if(*p == '/' && *(p+1) == '*') {
        int nest = 0;
        while(1) {
            if(*p == '/' && *(p+1) == '*') {
                p += 2;
                nest++;
            }
            else if(*p == '*' && *(p+1) == '/') {
                p += 2;
                nest--;
                
                if(nest == 0) {
                    info.p = p;
                    info.sline = sline;
                    info.sline_real = sline_real;
                    if(skip_space_after) {
                        skip_spaces_and_lf2();
                    }
                    break;
                }
            }
            else if(*p == '\n') {
                p++;
                sline++;
                sline_real++;
            }
            else if(*p == '\r') {
                p++;
                if(*p == '\n') {
                    p++;
                }
                sline++;
                sline_real++;
            }
            else if(*p == '\0') {
                info.p = p;
                info.sline = sline;
                info.sline_real = sline_real;
                err_msg(info, "unterminated comment");
                break;
            }
            else {
                p++;
            }
        }
        
        return true;
    }
    else if(*p == '/' && *(p+1) == '/') {
        p += 2;
        
        while(1) {
            if(*p == '\n') {
                p++;
                sline++;
                sline_real++;
                info.p = p;
                info.sline = sline;
                info.sline_real = sline_real;
                if(skip_space_after) {
                    skip_spaces_and_lf2();
                }
                break;
            }
            else if(*p == '\r') {
                p++;
                if(*p == '\n') {
                    p++;
                }
                sline++;
                sline_real++;
                info.p = p;
                info.sline = sline;
                info.sline_real = sline_real;
                if(skip_space_after) {
                    skip_spaces_and_lf2();
                }
                break;
            }
            else if(*p == '\0') {
                info.p = p;
                info.sline = sline;
                info.sline_real = sline_real;
                break;
            }
            else { 
                p++;
            }
        }
        
        return true;
    }
    
    return false;
}

static void skip_spaces_core(bool skip_lf, bool parse_sharp_after, bool stop_at_line_comment, sInfo* info=info)
{
    char* p = info.p;
    int sline = info.sline;
    int sline_real = info.sline_real;
    
    while(true) {
        if(*p == ' ' || *p == '\t') {
            p++;
        }
        else if(skip_lf && *p == '\r') {
            p++;
            if(*p == '\n') {
                p++;
            }
            sline++;
            sline_real++;
        }
        else if(skip_lf && *p == '\n') {
            p++;
            sline++;
            sline_real++;
        }
        else if(*p == '/' && *(p+1) == '*') {
            int nest = 0;
            while(true) {
                if(*p == '/' && *(p+1) == '*') {
                    p += 2;
                    nest++;
                }
                else if(*p == '*' && *(p+1) == '/') {
                    p += 2;
                    nest--;
                    if(nest == 0) {
                        break;
                    }
                }
                else if(*p == '\n') {
                    p++;
                    sline++;
                    sline_real++;
                }
                else if(*p == '\r') {
                    p++;
                    if(*p == '\n') {
                        p++;
                    }
                    sline++;
                    sline_real++;
                }
                else if(*p == '\0') {
                    info.p = p;
                    info.sline = sline;
                    info.sline_real = sline_real;
                    err_msg(info, "unterminated comment");
                    break;
                }
                else {
                    p++;
                }
            }
        }
        else if(*p == '/' && *(p+1) == '/') {
            p += 2;
            while(*p && *p != '\n' && *p != '\r') {
                p++;
            }
            if(skip_lf) {
                if(*p == '\n') {
                    p++;
                    sline++;
                    sline_real++;
                }
                else if(*p == '\r') {
                    p++;
                    if(*p == '\n') {
                        p++;
                    }
                    sline++;
                    sline_real++;
                }
            }
            if(stop_at_line_comment) {
                break;
            }
        }
        else {
            break;
        }
    }
    info.p = p;
    info.sline = sline;
    info.sline_real = sline_real;
    
    if(parse_sharp_after) {
        if(*info.p == '#') {
            parse_sharp();
        }
        else if(*info.p == '_' && parsecmp("__extension__")) {
            parse_sharp();
        }
    }
}

void skip_spaces_and_lf(sInfo* info=info)
{
    skip_spaces_core(true, true, false, info);
}

void skip_spaces_and_lf2(sInfo* info=info)
{
    skip_spaces_core(true, false, false, info);
}

void skip_spaces_and_tabs(sInfo* info=info)
{
    skip_spaces_core(false, false, true, info);
}

static bool is_number_token(char* token)
{
    if(token == null || *token == '\0') {
        return false;
    }
    char* p = token;
    while(*p) {
        if(!NEO_IS_ASCII_DIGIT(*p)) {
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
    int compact_len = compact.length();
    for(int i=0; i<compact_len; i++) {
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
    int tokens_len = tokens.length();
    if(tokens_len == 0) {
        return;
    }
    
    string op = clone tokens.item(0, s"");
    
    if(op === "push") {
        string push_id = s"";
        string push_num = s"";
        
        for(int i=1; i<tokens_len; i++) {
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
        
        for(int i=1; i<tokens_len; i++) {
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
            int pragma_pack_stack_len = info.pragma_pack_stack.length();
            for(int i=0; i<pragma_pack_stack_len; i++) {
                string stack_id = pack_stack_entry_id(info.pragma_pack_stack.item(i, s""));
                if(stack_id === pop_id) {
                    found = i;
                }
            }
            if(found >= 0) {
                info.pragma = pack_stack_entry_pragma(info.pragma_pack_stack.item(found, s""));
                info.pragma_pack_stack.delete(found, pragma_pack_stack_len);
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
    else if(tokens_len == 1 && is_number_token(op)) {
        // Normalize pack(N) to push/pop form so generated C stays balanced.
        info.pragma = xsprintf("#pragma pack(push, %s)\n", op);
    }
}

void parse_sharp(sInfo* info=info) version 5
{
    
    while(1) {
        if(*info.p == '#') {
            info->p++;
            skip_spaces_and_tabs();
            
            if(parsecmp("pragma")) {
                char* head = info.p;
                while(*info.p && *info.p != '\n') {
                    info->p++;
                }
                int len = info.p - head;
                char*% mem = new char[len+2];
                mem[0] = '#';
                memcpy(mem+1, head, len);
                
                if(*info.p == '\n') {
                    mem[len+1] = '\n';
                    mem[len+2-1] = '\0';
                    info->p++;
                    info->sline++;
                    info->sline_real++;
                }
                else {
                    mem[len+1] = '\0';
                }
                
                string pragma_line = mem;
                if(pragma_line.index("pack(", -1) != -1) {
                    apply_pack_pragma_state(pragma_line, info);
                }
                skip_spaces_and_lf2();
            }
            else if(parsecmp("line")) {
                info->p += 4;
                skip_spaces_and_tabs();
                
                int line = 0;
                string fname_str = null;
    
                if(!NEO_IS_ASCII_DIGIT(*info.p)) {
                    err_msg(info, "invalid #line directive");
                    return;
                }
                
                while(NEO_IS_ASCII_DIGIT(*info.p)) {
                    line = line * 10 + (*info.p - '0');
                    info->p++;
                }
                skip_spaces_and_tabs();
    
                if(*info.p == '"') {
                    info->p++;
                    char* head = info.p;
    
                    while(*info.p && *info.p != '"') {
                        info->p++;
                    }
                    if(*info.p == '\0') {
                        err_msg(info, "unterminated #line file name");
                        return;
                    }
                    int len = info.p - head;
                    char*% mem = new char[len+1];
                    memcpy(mem, head, len);
                    mem[len] = '\0';
                    fname_str = mem;
                    info->p++;
    
                    while(*info.p && *info.p != '\n') {
                        info->p++;
                    }
                    if(*info.p == '\n') {
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
                
                if(fname_str && fname_str.length() > 0) {
                    info->sname = fname_str;
                }
    
                skip_spaces_and_tabs();
            }
            else if(NEO_IS_ASCII_DIGIT(*info.p)) {
                int line = 0;
                string fname_str = null;
    
                while(NEO_IS_ASCII_DIGIT(*info.p)) {
                    line = line * 10 + (*info.p - '0');
                    info->p++;
                }
                skip_spaces_and_tabs();
    
                if(*info.p == '"') {
                    info->p++;
                    char* head = info.p;
    
                    while(*info.p && *info.p != '"') {
                        info->p++;
                    }
                    if(*info.p == '\0') {
                        err_msg(info, "unterminated #line file name");
                        return;
                    }
                    int len = info.p - head;
                    char*% mem = new char[len+1];
                    memcpy(mem, head, len);
                    mem[len] = '\0';
                    fname_str = mem;
                    info->p++;
    
                    while(*info.p && *info.p != '\n') {
                        info->p++;
                    }
                    if(*info.p == '\n') {
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
                
                if(fname_str && fname_str.length() > 0) {
                    info->sname = fname_str;
                }
    
                skip_spaces_and_tabs();
            }
            else if(*info.p == '"') {
                info->p++;
    
                while(*info.p && *info.p != '"') {
                    info->p++;
                }
                if(*info.p == '\0') {
                    err_msg(info, "unterminated #include file name");
                    return;
                }
                info->p++;
    
                while(*info.p && *info.p != '\n') {
                    info->p++;
                }
                if(*info.p == '\n') {
                    info->p++;
                    info->sline_real++;
                }
            }
        
            skip_spaces_and_lf2();
        }
        else if(skip_comment(info, true)) {
        }
        else if(parsecmp("__extension__")) {
            info->p += 13;
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
        if(*info.p == '(') {
            info->p++;
            skip_spaces_and_lf();
            
            nest++;
        }
        else if(*info.p == ')') {
            info->p++;
            skip_spaces_and_lf();
            
            nest--;
            if(nest == 0) {
                break;
            }
        }
        else if(*info.p == '\0') {
            err_msg(info, "invalid the source end. require )");
            exit(1);
        }
        else {
            info->p++;
        }
    }
}
