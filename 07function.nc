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
    char* head = info.p.p;
    if(*info->p.p == '{') {
        info->p.p++;

        bool dquort = false;
        bool squort = false;
        int sline = 0;
        int nest = 0;
        while(1) {
            parse_sharp();
            if(dquort) {
                if(*info->p.p == '\\') {
                    info->p.p++;
                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    if(*info->p.p == '\n') {
                        info->p.p++;
                    }
                    info->p.p++;
                }
                else if(*info->p.p == '"') {
                    info->p.p++;
                    dquort = !dquort;
                }
                else if(*info->p.p == '\n') {
                    info->p.p++;
                    info->sline++;

                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
                else {
                    info->p.p++;

                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(squort) {
                if(*info->p.p == '\\') {
                    info->p.p++;
                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    if(*info->p.p == '\n') {
                        info->sline++;
                    }
                    info->p.p++;
                }
                else if(*info->p.p == '\'') {
                    info->p.p++;
                    squort = !squort;
                }
                else if(*info->p.p == '\n') {
                    info->p.p++;
                    info->sline++;

                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
                else {
                    info->p.p++;

                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(*info->p.p == '\'') {
                sline = info->sline;
                info->p.p++;
                squort = !squort;
            }
            else if(*info->p.p == '"') {
                sline = info->sline;
                info->p.p++;
                dquort = !dquort;
            }
            else if(*info->p.p == '#') {
                skip_spaces_and_lf();
            }
            else if(*info->p.p == '/' && *(info->p.p+1) == '*') {
                skip_spaces_and_lf();
            }
            else if(*info->p.p == '/' && *(info->p.p+1) == '/') {
                skip_spaces_and_lf();
            }
            else if(*info->p.p == '\\') {
                info->p.p++;
                if(*info->p.p) info->p.p++;
            }
            else if(*info->p.p == '{') {
                info->p.p++;

                nest++;
            }
            else if(*info->p.p == '}') {
                info->p.p++;

                if(nest == 0) {
                    break;
                }

                nest--;
            }
            else if(*info->p.p == '\0') {
                err_msg(info, "The block requires } character for closing block");
                exit(2);
            }
            else if(*info->p.p == '\n') {
                info->p.p++;
                info->sline++;
            }
            else {
                info->p.p++;
            }
        }
    }
    else {
        err_msg(info, "Require block. This is %c", *info->p.p);
        //stackframe();
        exit(1);
    }
    
    char* tail = info.p.p;
    
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
    char* head = info.p.p;
    if(*info->p.p == '(') {
        info->p.p++;

        bool dquort = false;
        bool squort = false;
        int sline = 0;
        int nest = 0;
        while(1) {
            parse_sharp();
            if(dquort) {
                if(*info->p.p == '\\') {
                    info->p.p++;
                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    if(*info->p.p == '\n') {
                        info->p.p++;
                    }
                    info->p.p++;
                }
                else if(*info->p.p == '"') {
                    info->p.p++;
                    dquort = !dquort;
                }
                else if(*info->p.p == '\n') {
                    info->p.p++;
                    info->sline++;

                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
                else {
                    info->p.p++;

                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(squort) {
                if(*info->p.p == '\\') {
                    info->p.p++;
                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    if(*info->p.p == '\n') {
                        info->sline++;
                    }
                    info->p.p++;
                }
                else if(*info->p.p == '\'') {
                    info->p.p++;
                    squort = !squort;
                }
                else if(*info->p.p == '\n') {
                    info->p.p++;
                    info->sline++;

                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
                else {
                    info->p.p++;

                    if(*info->p.p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(*info->p.p == '\'') {
                sline = info->sline;
                info->p.p++;
                squort = !squort;
            }
            else if(*info->p.p == '"') {
                sline = info->sline;
                info->p.p++;
                dquort = !dquort;
            }
            else if(*info->p.p == '#') {
                skip_spaces_and_lf();
            }
            else if(*info->p.p == '/' && *(info->p.p+1) == '*') {
                skip_spaces_and_lf();
            }
            else if(*info->p.p == '/' && *(info->p.p+1) == '/') {
                skip_spaces_and_lf();
            }
            else if(*info->p.p == '(') {
                info->p.p++;

                nest++;
            }
            else if(*info->p.p == ')') {
                info->p.p++;

                if(nest == 0) {
                    break;
                }

                nest--;
            }
            else if(*info->p.p == '\0') {
                err_msg(info, "The block requires } character for closing block");
                exit(2);
            }
            else if(*info->p.p == '\n') {
                info->p.p++;
                info->sline++;
            }
            else {
                info->p.p++;
            }
        }
    }
    else {
        err_msg(info, "Require block. This is %c", *info->p.p);
        exit(1);
    }
    
    char* tail = info.p.p;
    
    buffer*% buf = new buffer();
    
    buf.append(head, tail-head-1);
    
    skip_spaces_and_lf();
    
    return buf.to_string();
}
*/

void parse_function_attribute_skip_paren(sInfo* info)
{
    skip_spaces_and_lf();
    if(*info->p.p == '(') {
        int nest = 0;
        while(1) {
            if(*info->p.p == '(') {
                info->p.p++;
                skip_spaces_and_lf();
                nest++;
            }
            else if(*info->p.p == ')') {
                info->p.p++
                skip_spaces_and_lf();
                
                nest--;
                if(nest == 0) {
                    break;
                }
            }
            else if(*info->p.p == '\0') {
                break;
            }
            else {
                info->p.p++;
            }
        }
    }
    skip_spaces_and_lf();
}

bool parse_function_attribute_keyword(buffer* result, const char* keyword, sInfo* info=info)
{
    if(parsecmp(keyword)) {
        char* head = info.p.p;
        info->p.p += strlen(keyword);
        
        parse_function_attribute_skip_paren(info);
        
        char* tail = info.p.p;
        result.append(head, tail-head);
        
        return true;
    }
    
    return false;
}

bool parse_common_function_attribute_keyword(buffer* result, sInfo* info=info)
{
    if(parse_function_attribute_keyword(result, "__aligned_largest", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__aligned_u64", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__aligned", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__section", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__visibility", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__alias", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__format_arg", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__format", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__printf", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__scanf", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__assume_aligned", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__cleanup", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__optimize", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__target", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__error", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__warning", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__no_sanitize_address", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__no_sanitize_thread", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__no_sanitize_coverage", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__no_sanitize", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__constructor", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__destructor", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__packed", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__used", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__unused", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__maybe_unused", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__always_unused", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__deprecated", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__cold", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__hot", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__weak_ref", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__weak", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__noinline", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__always_inline", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__flatten", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__leaf", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__naked", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__noclone", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__no_profile", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__no_instrument_function", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__warn_unused_result", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__must_check", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__returns_nonnull", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__malloc", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__init", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__initdata", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__initconst", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__init_rodata", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__exit", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__exitdata", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__exitconst", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__ref", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__meminit", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__meminitdata", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__meminitconst", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__ro_after_init", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__read_mostly", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__latent_entropy", info)) {
        return true;
    }
    else if(parse_function_attribute_keyword(result, "__percpu", info)) {
        return true;
    }
    
    return false;
}

string,string parse_function_attribute(sInfo* info=info)
{
    buffer*% asm_fun_name = new buffer();
    buffer*% result = new buffer();
    
    while(true) {
        if(parsecmp("__attribute__")) {
            char* head = info.p.p;
            info->p.p += strlen("__attribute__");

            parse_function_attribute_skip_paren(info);

            char* tail = info.p.p;
            
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
            char* head = info.p.p;
            
            info->p.p += strlen("_Noreturn");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("_Nonnull")) {
            char* head = info.p.p;
            
            info->p.p += strlen("_Nonnull");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__noreturn")) {
            char* head = info.p.p;
            
            info->p.p += strlen("__noreturn");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__asm__")) {
            char* head = info.p.p;
            
            info->p.p += strlen("__asm__");
            skip_spaces_and_lf();
            
            if(((info->end - info->p.p) >= strlen("__ASMNAME")) && memcmp(info->p.p, "__ASMNAME", strlen("__ASMNAME")) == 0) {
                info->p.p += strlen("__ASMNAME");
                skip_spaces_and_lf();
            }

            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__attribute_pure__")) {
            char* head = info.p.p; 
            
            info->p.p += strlen("__attribute_pure__");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__malloc_like")) {
            char* head = info.p.p; 
            
            info->p.p += strlen("__malloc_like");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__result_use_check")) {
            char* head = info.p.p; 
            
            info->p.p += strlen("__result_use_check");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__alloc_size2")) {
            char* head = info.p.p; 
            
            info->p.p += strlen("__alloc_size2");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__alloc_size")) {
            char* head = info.p.p;
            
            info->p.p += strlen("__alloc_size");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__nonnull")) {
            char* head = info.p.p;
            
            info->p.p += strlen("__nonnull");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__alloc_align")) {
            char* head = info.p.p;
            
            info->p.p += strlen("__alloc_align");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__attribute_malloc__")) {
            char* head = info.p.p;
            
            info->p.p += strlen("__attribute_malloc__");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__attr_dealloc_fclose")) {
            char* head = info.p.p;
            
            info->p.p += strlen("__attr_dealloc_fclose");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__wur")) {
            char* head = info.p.p;
            
            info->p.p += strlen("__wur");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__pure2")) {
            char* head = info.p.p;
            
            info->p.p += strlen("__pure2");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__pure")) {
            char* head = info.p.p;
            
            info->p.p += strlen("__pure");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__THROW")) {
            char* head = info.p.p;
            
            info->p.p += strlen("__THROW");
            
            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
            result.append(head, tail-head);
        }
        else if(parsecmp("__asm")) {
            char* head0 = info.p.p;
            int sline0 = info.sline;
            
            info->p.p += strlen("__asm");
            skip_spaces_and_lf();
            
            char* head = info.p.p;
            int sline = info.sline;
            
            int nest = 0;
            while(*info->p.p) {
                if(*info->p.p == '(') {
                    info->p.p++;
                    skip_spaces_and_lf();
                    
                    nest++;
                }
                else if(*info->p.p == ')') {
                    info->p.p++;
                    skip_spaces_and_lf();
                    
                    nest--;
                    if(nest == 0) {
                        break;
                    }
                }
                else if(*info->p.p == '"') {
                    info->p.p++;
                    while(*info->p.p != '\0' && *info->p.p != '"') {
                        asm_fun_name.append_char(*info->p.p);
                        info->p.p++;
                    }
                    
                    info->p.p++;
                    skip_spaces_and_lf();
                }
                else {
                    //asm_fun_name.append_char(*info->p.p);
                    info->p.p++;
                }
            }
            
            info.p.p = head0;
            info.sline = sline0;
            
            info->p.p += strlen("__asm");
            skip_spaces_and_lf();

            parse_function_attribute_skip_paren(info);
            
            char* tail = info.p.p;
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
    while(*info->p.p) {
        info.sname_at_head = clone info.sname;
        skip_spaces_and_lf();
        
        if(*info->p.p == '\0') {
            break;
        }
        if(block && *info->p.p == '}') {
            info->p.p++;
            skip_spaces_and_lf(info);
            break;
        }
        while(*info->p.p == ';') {
            info->p.p++;
            skip_spaces_and_lf();
        }
        skip_spaces_and_lf();
        
        char* head = info.p.p;
        int head_sline = info.sline;
        string buf = null;
        if(*info->p.p == '[' && *(info->p.p+1) == '[') {
            buf = s"__attribute__";
        }
        else {
            buf = parse_word();
        }
        
        skip_spaces_and_lf();
        
        if(block && *info->p.p == '}') {
            info->p.p++;
            skip_spaces_and_lf(info);
            break;
        }
        
        sNode*% node = top_level(buf, head, head_sline, info);
        skip_spaces_and_lf();
        
        while(*info->p.p == ';') {
            info->p.p++;
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
        
        if(block && *info->p.p == '}') {
            info->p.p++;
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
