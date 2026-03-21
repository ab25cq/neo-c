#include "common.h"


void arrange_stack(sInfo* info, int top)
{
    if(info->stack.length() > top) {
        dec_stack_ptr(info->stack.length()-top);
    }
    if(info->stack.length() < top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n", info->sname, info->sline, info->stack.length(), top);
        exit(2);
    }
}

string skip_block(sInfo* info=info, bool return_self_at_last=false)
{
    char* head = info.p;
    if(*info->p == '{') {
        info->p++;

        bool dquort = false;
        bool squort = false;
        int sline = 0;
        int nest = 0;
        while(1) {
            parse_sharp();
            if(dquort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    if(*info->p == '\n') {
                        info->p++;
                    }
                    info->p++;
                }
                else if(*info->p == '"') {
                    info->p++;
                    dquort = !dquort;
                }
                else if(*info->p == '\n') {
                    info->p++;
                    info->sline++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(squort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    if(*info->p == '\n') {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(*info->p == '\'') {
                    info->p++;
                    squort = !squort;
                }
                else if(*info->p == '\n') {
                    info->p++;
                    info->sline++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(*info->p == '\'') {
                sline = info->sline;
                info->p++;
                squort = !squort;
            }
            else if(*info->p == '"') {
                sline = info->sline;
                info->p++;
                dquort = !dquort;
            }
            else if(*info->p == '#') {
                skip_spaces_and_lf();
            }
            else if(*info->p == '/' && *(info->p+1) == '*') {
                skip_spaces_and_lf();
            }
            else if(*info->p == '/' && *(info->p+1) == '/') {
                skip_spaces_and_lf();
            }
            else if(*info->p == '\\') {
                info->p++;
                if(*info->p) info->p++;
            }
            else if(*info->p == '{') {
                info->p++;

                nest++;
            }
            else if(*info->p == '}') {
                info->p++;

                if(nest == 0) {
                    break;
                }

                nest--;
            }
            else if(*info->p == '\0') {
                err_msg(info, "The block requires } character for closing block");
                exit(2);
            }
            else if(*info->p == '\n') {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info, "Require block. This is %c", *info->p);
        //stackframe();
        exit(1);
    }
    
    char* tail = info.p;
    
    buffer*% buf = new buffer();
    
    buf.append(head, tail-head-1);
    
    if(return_self_at_last) {
        buf.append_str("return self; }");
    }
    else {
        buf.append_str("}");
    }
    
    skip_spaces_and_lf();
    
    return buf.to_string();
}

/*
string skip_paren(sInfo* info=info)
{
    char* head = info.p;
    if(*info->p == '(') {
        info->p++;

        bool dquort = false;
        bool squort = false;
        int sline = 0;
        int nest = 0;
        while(1) {
            parse_sharp();
            if(dquort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    if(*info->p == '\n') {
                        info->p++;
                    }
                    info->p++;
                }
                else if(*info->p == '"') {
                    info->p++;
                    dquort = !dquort;
                }
                else if(*info->p == '\n') {
                    info->p++;
                    info->sline++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(squort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    if(*info->p == '\n') {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(*info->p == '\'') {
                    info->p++;
                    squort = !squort;
                }
                else if(*info->p == '\n') {
                    info->p++;
                    info->sline++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(*info->p == '\'') {
                sline = info->sline;
                info->p++;
                squort = !squort;
            }
            else if(*info->p == '"') {
                sline = info->sline;
                info->p++;
                dquort = !dquort;
            }
            else if(*info->p == '#') {
                skip_spaces_and_lf();
            }
            else if(*info->p == '/' && *(info->p+1) == '*') {
                skip_spaces_and_lf();
            }
            else if(*info->p == '/' && *(info->p+1) == '/') {
                skip_spaces_and_lf();
            }
            else if(*info->p == '(') {
                info->p++;

                nest++;
            }
            else if(*info->p == ')') {
                info->p++;

                if(nest == 0) {
                    break;
                }

                nest--;
            }
            else if(*info->p == '\0') {
                err_msg(info, "The block requires } character for closing block");
                exit(2);
            }
            else if(*info->p == '\n') {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info, "Require block. This is %c", *info->p);
        exit(1);
    }
    
    char* tail = info.p;
    
    buffer*% buf = new buffer();
    
    buf.append(head, tail-head-1);
    
    skip_spaces_and_lf();
    
    return buf.to_string();
}
*/

void parse_function_attribute_skip_paren(sInfo* info)
{
    skip_spaces_and_lf();
    if(*info->p == '(') {
        int nest = 0;
        while(1) {
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
                nest++;
            }
            else if(*info->p == ')') {
                info->p++
                skip_spaces_and_lf();
                
                nest--;
                if(nest == 0) {
                    break;
                }
            }
            else if(*info->p == '\0') {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    skip_spaces_and_lf();
}

bool parse_function_attribute_keyword(buffer* result, const char* keyword, sInfo* info=info)
{
    if(parsecmp(keyword)) {
        char* head = info.p;
        info->p += strlen(keyword);
        
        parse_function_attribute_skip_paren(info);
        
        char* tail = info.p;
        result.append(head, tail-head);
        
        return true;
    }
    
    return false;
}

bool parse_common_function_attribute_keyword(buffer* result, sInfo* info=info)
{
    int keyword_len = match_common_attribute_keyword_len(info.p);
    if(keyword_len == 0) {
        return false;
    }
    
    char* head = info.p;
    info->p += keyword_len;
    
    parse_function_attribute_skip_paren(info);
    
    char* tail = info.p;
    result.append(head, tail-head);
    
    return true;
}

string,string parse_function_attribute(sInfo* info=info)
{
    buffer*% asm_fun_name = new buffer();
    buffer*% result = new buffer();
    
    while(true) {
        if(parsecmp("__attribute__")) {
            char* head = info.p;
            info->p += strlen("__attribute__");

            parse_function_attribute_skip_paren(info);

            char* tail = info.p;
            
            result.append(head, tail-head);
        }
        else if(parsecmp("__declspec")) {
            string attr = parse_declspec_attribute();
            if(attr !== "") {
                if(result.length() > 0) {
                    result.append_str(" ");
                }
                result.append_str(attr);
            }
        }
        else if(parsecmp("_Noreturn")) {
            char* head = info.p;
            
            info->p += strlen("_Noreturn");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("_Nonnull")) {
            char* head = info.p;
            
            info->p += strlen("_Nonnull");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__noreturn")) {
            char* head = info.p;
            
            info->p += strlen("__noreturn");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__asm__")) {
            char* head = info.p;
            
            info->p += strlen("__asm__");
            skip_spaces_and_lf();
            
            if(((info->end - info->p) >= strlen("__ASMNAME")) && memcmp(info->p, "__ASMNAME", strlen("__ASMNAME")) == 0) {
                info->p += strlen("__ASMNAME");
                skip_spaces_and_lf();
            }

            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__attribute_pure__")) {
            char* head = info.p; 
            
            info->p += strlen("__attribute_pure__");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__malloc_like")) {
            char* head = info.p; 
            
            info->p += strlen("__malloc_like");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__result_use_check")) {
            char* head = info.p; 
            
            info->p += strlen("__result_use_check");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__alloc_size2")) {
            char* head = info.p; 
            
            info->p += strlen("__alloc_size2");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__alloc_size")) {
            char* head = info.p;
            
            info->p += strlen("__alloc_size");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__nonnull")) {
            char* head = info.p;
            
            info->p += strlen("__nonnull");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__alloc_align")) {
            char* head = info.p;
            
            info->p += strlen("__alloc_align");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__attribute_malloc__")) {
            char* head = info.p;
            
            info->p += strlen("__attribute_malloc__");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__attr_dealloc_fclose")) {
            char* head = info.p;
            
            info->p += strlen("__attr_dealloc_fclose");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__wur")) {
            char* head = info.p;
            
            info->p += strlen("__wur");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__pure2")) {
            char* head = info.p;
            
            info->p += strlen("__pure2");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__pure")) {
            char* head = info.p;
            
            info->p += strlen("__pure");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__THROW")) {
            char* head = info.p;
            
            info->p += strlen("__THROW");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__asm")) {
            char* head0 = info.p;
            int sline0 = info.sline;
            
            info->p += strlen("__asm");
            skip_spaces_and_lf();
            
            char* head = info.p;
            int sline = info.sline;
            
            int nest = 0;
            while(*info->p) {
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
                else if(*info->p == '"') {
                    info->p++;
                    while(*info->p != '\0' && *info->p != '"') {
                        asm_fun_name.append_char(*info->p);
                        info->p++;
                    }
                    
                    info->p++;
                    skip_spaces_and_lf();
                }
                else {
                    //asm_fun_name.append_char(*info->p);
                    info->p++;
                }
            }
            
            info.p = head0;
            info.sline = sline0;
            
            info->p += strlen("__asm");
            skip_spaces_and_lf();

            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p;
            result.append(head0, tail-head0);
        }
        else if(parse_common_function_attribute_keyword(result, info)) {
        }
        else {
            break;
        }
    }

    return t(asm_fun_name.to_string(), result.to_string());
}


void transpile_toplevel(bool block=false, sInfo* info=info)
{
    while(*info->p) {
        info.sname_at_head = clone info.sname;
        skip_spaces_and_lf();
        
        if(*info->p == '\0') {
            break;
        }
        if(block && *info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        while(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }
        skip_spaces_and_lf();
        
        char* head = info.p;
        int head_sline = info.sline;
        string buf = null;
        if(*info->p == '[' && *(info->p+1) == '[') {
            buf = s"__attribute__";
        }
        else {
            buf = parse_word();
        }
        
        skip_spaces_and_lf();
        
        if(block && *info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        
        sNode*% node = top_level(buf, head, head_sline, info);
        skip_spaces_and_lf();
        
        while(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }
        skip_spaces_and_lf();
        
        if(node != null) {
            node_compile(node).elif {
                printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
                exit(2);
            }
        }
        
        
        skip_spaces_and_lf();
        
        if(block && *info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
}

int transpile(sInfo* info)
{
    skip_spaces_and_lf();
    
    {
        var name = string("__builtin_va_start");
        var result_type = new sType(s"void");
        var param_types = new list<sType*%>();
        var param_names = new list<string>();
        var param_default_parametors = new list<string>();
        var fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, true@var_args
            , null@block, false@static_
            , info, false@inline_, false@uniq_);
        
        info.funcs.insert(string(name), fun);
    }
    {
        var name = string("__builtin_va_end");
        var result_type = new sType(s"void");
        var param_types = new list<sType*%>();
        var param_names = new list<string>();
        var param_default_parametors = new list<string>();
        var fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, true@var_args
            , null@block, false@static_
            , info, false@inline_, false@uniq_);
        
        info.funcs.insert(string(name), fun);
    }
    transpile_toplevel();
    
    return 0;
}
