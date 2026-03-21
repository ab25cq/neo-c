#include "common.h"

sNode*% expression_node(sInfo* info) version 96
{
    /// here document ///
    if(*info.p == '"' && *(info->p+1) == '"' && *(info->p+2) == '"' && *(info->p+3) == '\n') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p +=4;
        info->sline++;

        int sline = info->sline;

        list<sNode*%>*% exps = new list<sNode*%>();
        buffer*% value = new buffer();
        
        char* head_of_last_line = NULL;
        

        while(1) {
            if(*info.p == '"' && *(info->p+1) == '"' && *(info->p+2) == '"') {
                info->p+=3;
                
                skip_spaces_and_lf();
                break;
            }
            else if(*info.p == '%') {
                value.append_char('%');
                value.append_char('%');
                info->p++;
            }
            else if(*info.p == '"') {
                value.append_char('\\');
                value.append_char('"');
                info->p++;
            }
            else if(*info.p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(xisdigit(*info.p)) {
                    int len = 0;
                    while(xisdigit(*info.p) && len < 3) {
                        value.append_char(*info.p);
                        info->p++;
                        len++;
                    }
                }
                else if(*info.p == 'x' || *info.p == 'X') {
                    value.append_char(*info.p);
                    info->p++;
                    
                    while(*info.p >= '0' && *info.p <= '9' || *info.p >= 'a' && *info.p <= 'f' || *info.p >= 'A' && *info.p <= 'F') {
                        value.append_char(*info.p);
                        info->p++;
                    }
                }
                else if(*info.p == '{') {
                    info->p++;
                    
                    sNode*% exp = expression();
                    
                    exps.add(exp);
                    
                    if(*info.p == '}') {
                        info->p++;
                    }
                    
                    value.append_str("%s");
                }
                else {
                    switch(*info.p) {
                        case '0':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'n':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 't':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'r':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'v':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'f':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'a':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'b':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case '\\':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        default:
                            value.append_char(*info.p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info.p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info.p == '\n') {
                    value.append_char('\\');
                    value.append_char('n');
                    info->p++;
                    info->sline++;
                    
                    head_of_last_line = info->p;
                }
                else {
                    value.append_char(*info.p);
                    info->p++;
                }
            }
        }

        skip_spaces_and_lf();
        
        info.sline_real = sline_real;
        return create_sstring_node(value.to_string(), exps, sline, info);
    }
    else if(*info.p == 'u' && *(info->p+1) == '8' && *(info->p+2) == '"')
    {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;

        info->p+=3;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info.p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                parse_sharp()
                
                if(*info.p == 'u' && *(info->p+1) == '8' && *(info->p+2) == '"') {
                    info->p += 3;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info.p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info.p == '"') {
                    value.append_char('"');
                    info->p++;
                }
                else {
                    value.append_char(*info.p);
                    info->p++;
                }
            }
            else if(*info.p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                info->sline = sline2;
                exit(2);
            }
            else {
                if(*info.p == '\n') info->sline++;

                value.append_char(*info.p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        info.sline_real = sline_real;
        return create_prefixed_string_node(value.to_string(), xsprintf("u8"), sline, info);
    }
    else if((*info.p == 'u' || *info.p == 'U') && *(info->p+1) == '"')
    {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;

        char prefix = *info.p;
        info->p+=2;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info.p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                parse_sharp()
                
                if(*info.p == prefix && *(info->p+1) == '"') {
                    info->p += 2;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info.p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info.p == '"') {
                    value.append_char('"');
                    info->p++;
                }
                else {
                    value.append_char(*info.p);
                    info->p++;
                }
            }
            else if(*info.p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                info->sline = sline2;
                exit(2);
            }
            else {
                if(*info.p == '\n') info->sline++;

                value.append_char(*info.p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        info.sline_real = sline_real;
        return create_prefixed_string_node(value.to_string(), xsprintf("%c", prefix), sline, info);
    }
    else if(*info.p == '"') 
    {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p++;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info.p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                parse_sharp()
                
                if(*info.p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info.p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info.p == '"') {
                    value.append_char('"');
                    info->p++;
                }
                else {
                    value.append_char(*info.p);
                    info->p++;
                }
            }
            else if(*info.p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                info->sline = sline2;
                exit(2);
            }
            else {
                if(*info.p == '\n') info->sline++;

                value.append_char(*info.p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        info.sline_real = sline_real;
        return create_str_node(value.to_string(), sline, info);
    }
    else if((*info.p == 'b' || *info.p == 'B') && *(info->p+1) == '"') 
    {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p+=2;

        int sline = info->sline;

        buffer*% value = new buffer();

        size_t size = 0;
        while(1) {
            if(*info.p == '"') {
//                value.append_char(*info.p);
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info.p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info.p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(xisdigit(*info.p)) {
                    int len = 0;
                    while(xisdigit(*info.p) && len < 3) {
                        value.append_char(*info.p);
                        info->p++;
                        len++;
                    }
                    size++;
                }
                else if(*info.p == 'x' || *info.p == 'X') {
                    value.append_char(*info.p);
                    info->p++;
                    
                    while(*info.p >= '0' && *info.p <= '9' || *info.p >= 'a' && *info.p <= 'f' || *info.p >= 'A' && *info.p <= 'F') {
                        value.append_char(*info.p);
                        info->p++;
                    }
                    size++;
                }
                else {
                    switch(*info.p) {
                        case '0':
                            value.append_char(*info.p);
                            info->p++;
                            size++;
                            break;
    
                        case 'n':
                            value.append_char(*info.p);
                            info->p++;
                            size++;
                            break;
    
                        case 't':
                            value.append_char(*info.p);
                            info->p++;
                            size++;
                            break;
    
                        case 'r':
                            value.append_char(*info.p);
                            info->p++;
                            size++;
                            break;
    
                        case 'v':
                            value.append_char(*info.p);
                            info->p++;
                            size++;
                            break;
    
                        case 'f':
                            value.append_char(*info.p);
                            info->p++;
                            size++;
                            break;
    
                        case 'a':
                            value.append_char(*info.p);
                            info->p++;
                            size++;
                            break;
    
                        case 'b':
                            value.append_char(*info.p);
                            info->p++;
                            size++;
                            break;
    
                        case '\\':
                            value.append_char(*info.p);
                            info->p++;
                            size++;
                            break;
    
                        default:
                            value.append_char(*info.p);
                            info->p++;
                            size++;
                            break;
                    }
                }
            }
            else if(*info.p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info.p == '\n') info->sline++;

                value.append_char(*info.p);
                info->p++;
                size++;
            }
        }

        skip_spaces_and_lf();
        
        info.sline_real = sline_real;
        return create_buffer_node(value, size, info);
    }
    else if(*info.p == '/' && *(info->p-1) != '*' && *(info->p+1) != '*') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p++;
        
        int sline = info->sline;
        
        buffer*% buf = new buffer();
        while(true) {
            if(*info.p == '\\' && *(info->p+1) == '/') {
                info->p++;
                buf.append_char(*info.p);
                info->p++;
            }
            else if(*info.p == '/') {
                info->p++;
                break;
            }
            else if(*info.p == '\0') {
                err_msg(info, "require closing / for regex");
                exit(5);
            }
            else {
                buf.append_char(*info.p);
                info->p++;
            }
        }
        
        bool global = false;
        bool ignore_case = false;
        while(*info.p == 'g' || *info.p == 'i') {
            if(*info.p == 'g') {
                info->p++;
                global = true;
            }
            else if(*info.p == 'i') {
                info->p++;
                ignore_case = true;
            }
            else {
                break;
            }
        }
        
        skip_spaces_and_lf();
        
        sNode*% obj = create_str_node(buf.to_string(), sline, info);
        
        list<tuple2<string, sNode*%>*%>*% params = new list<tuple2<string, sNode*%>*%>();
        
        params.add(t(s"self", obj));
        params.add(t(s"ignore_case", ignore_case ? create_int_node(1.to_string(), info) : create_int_node(0.to_string(), info)));
        params.add(t(s"multiline", create_int_node(0.to_string(), info)));
        params.add(t(s"global", global ? create_int_node(1.to_string(), info) : create_int_node(0.to_string(), info)));
        params.add(t(s"extended", create_int_node(0.to_string(), info)));
        params.add(t(s"dotall", create_int_node(0.to_string(), info)));
        params.add(t(s"anchored", create_int_node(0.to_string(), info)));
        params.add(t(s"dollar_endonly", create_int_node(0.to_string(), info)));
        params.add(t(s"ungreedy", create_int_node(0.to_string(), info)));
        
        buffer* method_block = null;
        
        int method_block_sline = info.sline;
        
        list<sType*%>*% method_generics_types = new list<sType*%>();
        
        sNode*% node = create_method_call("to_regex", obj, params, method_block, method_block_sline, method_generics_types, info);
        
        info.sline_real = sline_real;
        return node;
    }
    else if((*info.p == 'R' || *info.p == 'r') && *(info->p+1) == '"') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p+=2;
        
        int sline = info->sline;
        
        buffer*% value = new buffer();
        while(1) {
            if(*info.p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info.p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info.p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(xisdigit(*info.p)) {
                    int len = 0;
                    while(xisdigit(*info.p) && len < 3) {
                        value.append_char(*info.p);
                        info->p++;
                        len++;
                    }
                }
                else if(*info.p == 'x' || *info.p == 'X') {
                    value.append_char(*info.p);
                    info->p++;
                    
                    while(*info.p >= '0' && *info.p <= '9' || *info.p >= 'a' && *info.p <= 'f' || *info.p >= 'A' && *info.p <= 'F') {
                        value.append_char(*info.p);
                        info->p++;
                    }
                }
                else {
                    switch(*info.p) {
                        case '0':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'n':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 't':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'r':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'v':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'f':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'a':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'b':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case '\\':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        default:
                            value.append_char(*info.p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info.p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info.p == '\n') info->sline++;

                value.append_char(*info.p);
                info->p++;
            }
        }
        
        bool global = false;
        bool ignore_case = false;
        while(*info.p == 'g' || *info.p == 'i') {
            if(*info.p == 'g') {
                info->p++;
                global = true;
            }
            else if(*info.p == 'i') {
                info->p++;
                ignore_case = true;
            }
            else {
                break;
            }
        }
        
        skip_spaces_and_lf();
        
        sNode*% obj = create_str_node(value.to_string(), sline, info);
        
        list<tuple2<string, sNode*%>*%>*% params = new list<tuple2<string, sNode*%>*%>();
        
        params.add(t(s"self", obj));
        params.add(t(s"ignore_case", ignore_case ? create_int_node(1.to_string(), info) : create_int_node(0.to_string(), info)));
        params.add(t(s"multiline", create_int_node(0.to_string(), info)));
        params.add(t(s"global", global ? create_int_node(1.to_string(), info) : create_int_node(0.to_string(), info)));
        params.add(t(s"extended", create_int_node(0.to_string(), info)));
        params.add(t(s"dotall", create_int_node(0.to_string(), info)));
        params.add(t(s"anchored", create_int_node(0.to_string(), info)));
        params.add(t(s"dollar_endonly", create_int_node(0.to_string(), info)));
        params.add(t(s"ungreedy", create_int_node(0.to_string(), info)));
        
        buffer* method_block = null;
        
        int method_block_sline = info.sline;
        
        list<sType*%>*% method_generics_types = new list<sType*%>();
        
        sNode*% node = create_method_call("to_regex", obj, params, method_block, method_block_sline, method_generics_types, info);
        
        info.sline_real = sline_real;
        return node;
    }
    else if((*info.p == 'u' || *info.p == 'U') && *(info->p+1) == '\'') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;

        char prefix = *info.p;
        info->p += 2;

        int c;

        if(*info.p == '\\') {
            info->p++;

            if(xisdigit(*info.p)) {
                int n = 0;
                while(xisdigit(*info.p)) {
                    n = n * 8 + *info.p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info.p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;

                    case 't':
                        c = '\t';
                        info->p++;
                        break;

                    case 'r':
                        c = '\r';
                        info->p++;
                        break;

                    case 'a':
                        c = '\a';
                        info->p++;
                        break;

                    case 'f':
                        c = '\f';
                        info->p++;
                        break;

                    case 'v':
                        c = '\v';
                        info->p++;
                        break;

                    case 'b':
                        c = '\b';
                        info->p++;
                        break;

                    case '\\':
                        c = '\\';
                        info->p++;
                        break;

                    case '0':
                        c = '\0';
                        info->p++;
                        
                        if(xisdigit(*info.p)) {
                            int n = 0;
                            while(xisdigit(*info.p)) {
                                n = n * 8 + *info.p - '0';
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        strncpy(buf, "0x", 128);
                        while(*info.p >= '0' && *info.p <= '9' || *info.p >= 'a' && *info.p <= 'f' || *info.p >= 'A' && *info.p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info.p;
                            buf2[1] = '\0';
                            info->p++;
                            strncat(buf, buf2, 128);
                        }
                        
                        unsigned long long int n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;

                    default:
                        c = *info.p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            c = *info.p;
            info->p++;
        }

        if(*info.p != '\'') {
            err_msg(info, "close \' to make character value");
            exit(1);
        }
        else {
            info->p++;

            skip_spaces_and_lf();

            info.sline_real = sline_real;
            return create_prefixed_char_node(c, xsprintf("%c", prefix), info);
        }
    }
    else if(*info.p == '\'') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p++;

        int c;

        if(*info.p == '\\') {
            info->p++;

            if(xisdigit(*info.p)) {
                int n = 0;
                while(xisdigit(*info.p)) {
                    n = n * 8 + *info.p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info.p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case 'f':
                        c = '\f';
                        info->p++;
                        break;
    
                    case 'v':
                        c = '\v';
                        info->p++;
                        break;
    
                    case 'b':
                        c = '\b';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        info->p++;
                        
                        if(xisdigit(*info.p)) {
                            int n = 0;
                            while(xisdigit(*info.p)) {
                                n = n * 8 + *info.p - '0';
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        strncpy(buf, "0x", 128);
                        while(*info.p >= '0' && *info.p <= '9' || *info.p >= 'a' && *info.p <= 'f' || *info.p >= 'A' && *info.p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info.p;
                            buf2[1] = '\0';
                            info->p++;
                            strncat(buf, buf2, 128);
                        }
                        
                        unsigned long long int n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info.p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            c = *info.p;
            info->p++;
        }

        if(*info.p != '\'') {
            err_msg(info, "close \' to make character value");
            exit(1);
        }
        else {
            info->p++;

            skip_spaces_and_lf();

            info.sline_real = sline_real;
            return create_char_node(c, info);
        }
    }
#ifndef __BAREMETAL__
    /// wchararacter ///
    else if(*info.p == 'L' && *(info->p+1) == '\'') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p+=2;

        wchar_t c;
        bool quote;

        if(*info.p == '\\') {
            quote = true;
            info->p++;
            
            if(xisdigit(*info.p)) {
                int n = 0;
                while(xisdigit(*info.p)) {
                    n = n * 8 + *info.p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info.p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        
                        info->p++;
                        
                        if(xisdigit(*info.p)) {
                            int n = 0;
                            while(xisdigit(*info.p)) {
                                n = n * 8 + *info.p - '0';
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        strncpy(buf, "0x", 128);
                        while(*info.p >= '0' && *info.p <= '9' || *info.p >= 'a' && *info.p <= 'f' || *info.p >= 'A' && *info.p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info.p;
                            buf2[1] = '\0';
                            info->p++;
                            strncat(buf, buf2, 128);
                        }
                        
                        unsigned long long int n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info.p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            quote = false;
            unsigned char p2 = *(unsigned char*)info->p;

            /// utf-8 character ///
            if(p2 > 127) {
                int size;
                char str[MB_LEN_MAX+1];

                size = ((p2 & 0x80) >> 7) + ((p2 & 0x40) >> 6) + ((p2 & 0x20) >> 5) + ((p2 & 0x10) >> 4);

                if(size > MB_LEN_MAX) {
                    err_msg(info, "invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                    exit(2);
                }
                else {
                    memcpy(str, info->p, size);
                    str[size] = 0;

                    if(mbtowc(&c, str, size) < 0) {
                        perror("mbtowc");
                        err_msg(info, "invalid utf-8 character. mbtowc");
                        info->err_num++;
                        exit(2);
                    }
                    else {
                        info->p += size;
                    }
                }
            }
            /// ASCII character ///
            else {
                c = *info.p;
                info->p++;
            }
        }
        
        if(*info.p != '\'') {
            err_msg(info, "close \' to make character value");
            info->err_num++;
            exit(2);
        }
        else {
            info->p++;

            skip_spaces_and_lf();

            info.sline_real = sline_real;
            return create_wchar_node(c, quote, info);
        }
    }
    /// wstring ///
    else if(*info.p == 'L' && *(info->p+1) == '"') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p+=2;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info.p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info.p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info.p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info.p == '"') {
                    value.append_char('"');
                    info->p++;
                }
                else {
                    value.append_char(*info.p);
                    info->p++;
                }
            }
            else if(*info.p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                exit(2);
            }
            else {
                if(*info.p == '\n') info->sline++;

                value.append_char(*info.p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        int len = value.len;
        
        wchar_t*% wstr = new wchar_t[len+1];
        
        char* str = borrow value.buf;
        
        if(mbstowcs(wstr, str, len+1) < 0) {
            perror("mbstowcs");
            exit(1);
        }
        
        wstr[len] = 0;
        
        info.sline_real = sline_real;
        return create_wstring_node(wstr, sline, info);
    }
#endif
    /// heap string ///
    else if((*info.p == 's' || *info.p == 'S')  && *(info->p+1) == '"') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p+=2;

        int sline = info->sline;

        list<sNode*%>*% exps = new list<sNode*%>();
        buffer*% value = new buffer();

        while(1) {
            if(*info.p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info.p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info.p == '%') {
                value.append_char('%');
                value.append_char('%');
                info->p++;
            }
/*
            else if(*info.p == '$') {
                info->p++;
                
                sNode*% exp = expression();
                
                exps.add(exp);
                
                value.append_str("%s");
                
                char* p = info->p -1;
                while(*p == ' ' || *p == '\t') {
                    p--;
                }
                
                info->p = p + 1;
            }
*/
            else if(*info.p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(xisdigit(*info.p)) {
                    int len = 0;
                    while(xisdigit(*info.p) && len < 3) {
                        value.append_char(*info.p);
                        info->p++;
                        len++;
                    }
                }
                else if(*info.p == 'x' || *info.p == 'X') {
                    value.append_char(*info.p);
                    info->p++;
                    
                    while(*info.p >= '0' && *info.p <= '9' || *info.p >= 'a' && *info.p <= 'f' || *info.p >= 'A' && *info.p <= 'F') {
                        value.append_char(*info.p);
                        info->p++;
                    }
                }
                else if(*info.p == '{') {
                    info->p++;
                    
                    sNode*% exp = expression();
                    
                    exps.add(exp);
                    
                    if(*info.p == '}') {
                        info->p++;
                    }
                    
                    value.append_str("%s");
                }
                else {
                    switch(*info.p) {
                        case '0':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'n':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 't':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'r':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'v':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'f':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'a':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case 'b':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        case '\\':
                            value.append_char(*info.p);
                            info->p++;
                            break;
    
                        default:
                            value.append_char(*info.p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info.p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info.p == '\n') info->sline++;

                value.append_char(*info.p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        info.sline_real = sline_real;
        return create_sstring_node(value.to_string(), exps, sline, info);
    }
    else if(*info.p == '[') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p++;
        skip_spaces_and_lf();
        
        char* p = info.p;
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        
        sNode*% node = expression();
        
        info.no_comma = no_comma;
        
        char* p2 = info.p;
        
        buffer*% first_element_source = new buffer();
        
        first_element_source.append(p, p2 - p);
        first_element_source.append_char('\0');
        
        list<sNode*%>*% list_elements = new list<sNode*%>();
        
        list<sNode*%>*% map_keys = new list<sNode*%>();
        list<sNode*%>*% map_elements = new list<sNode*%>();
        
        //// map ///
        if(*info.p == ':') {
            info->p++;
            skip_spaces_and_lf();
            
            map_keys.push_back(node);
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            
        
            sNode*% node2 = expression();
            
            info.no_comma = no_comma;
            
            map_elements.push_back(node2);
            
            if(*info.p == ']') {
                info->p++;
                skip_spaces_and_lf();
                
                return create_map_node(map_keys, map_elements, info);
            }
            else {
                expected_next_character(',');
                
                while(true) {
                    bool no_comma = info.no_comma;
                    info.no_comma = true;
                    
                    sNode*% node2 = expression();
                    
                    info.no_comma = no_comma;
                    
                    map_keys.push_back(node2);
                    
                    expected_next_character(':');
                    
                    no_comma = info.no_comma;
                    info.no_comma = true;
                    
                    sNode*% node3 = expression();
                    
                    info.no_comma = no_comma;
                    
                    map_elements.push_back(node3);
                    
                    if(*info.p == '\0') {
                        err_msg(info, "invalid source end");
                        exit(2);
                    }
                    else if(*info.p == ',') {
                        info->p++;
                        skip_spaces_and_lf();
                    }
                    else if(*info.p == ']') {
                        info->p++;
                        skip_spaces_and_lf();
                        break;
                    }
                    else {
                        err_msg(info, "invalid character(3)(%c)", *info.p);
                        exit(2);
                    }
                }
                
                return create_map_node(map_keys, map_elements, info);
            }
        }
        /// list ///
        else if(*info.p == ']') {
            info->p++;
            skip_spaces_and_lf();
            
            list_elements.push_back(node);
        }
        else if(*info.p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            list_elements.push_back(node);
            
            while(true) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                
                sNode*% node2 = expression();
                
                info.no_comma = no_comma;
                
                list_elements.push_back(node2);
                
                if(*info.p == '\0') {
                    err_msg(info, "invalid source end");
                    exit(2);
                }
                else if(*info.p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info.p == ']') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    err_msg(info, "invalid character(4)(%c)", *info.p);
                    exit(2);
                }
            }
        }
        else {
            err_msg(info, "invalid character(5)(%c)", *info.p);
            exit(2);
        }
        
        if(list_elements.length() > 0) {
            info.sline_real = sline_real;
            return create_list_node(list_elements, info);
        }
        else {
            err_msg(info, "invalid vector");
            return null;
        }
    }
    else if(*info.p == 'v' && *(info->p+1) == '(') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p+=2;
        skip_spaces_and_lf();
        
    }
    else {
        sNode*% node = inherit(info);
        return node;
    }
    
    return (sNode*%)null;
}

sNode*% parse_tuple(sInfo* info, bool named_tuple=false)
{
    list<tuple2<string, sNode*%>*%>*% tuple_elements = new list<tuple2<string, sNode*%>*%>();
    while(true) {
        char* p = info.p;
        
        string name;
        if(named_tuple) {
            name = parse_word();
            
            expected_next_character(':', info);
        }
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        
        sNode*% node = expression();
        node = post_position_operator(node, info);
        
        info.no_comma = no_comma;
        
        tuple_elements.push_back(t(clone name, node));
        
        if(*info.p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }
        else if(*info.p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        else {
            err_msg(info, "invalid character in tuple expression (%c)", *info.p);
            exit(2);
        }
    }
    
    return create_tuple_node(tuple_elements, info);
}

sNode*% parse_vector(sInfo* info=info)
{
    char* p = info.p;
    
    int sline_real = info.sline;
    
    bool no_comma = info.no_comma;
    info.no_comma = true;
    
    sNode*% node = expression();
    
    info.no_comma = no_comma;
    
    char* p2 = info.p;
    
    buffer*% first_element_source = new buffer();
    
    first_element_source.append(p, p2 - p);
    first_element_source.append_char('\0');
    
    list<sNode*%>*% list_elements = new list<sNode*%>();
    
    list<sNode*%>*% map_keys = new list<sNode*%>();
    list<sNode*%>*% map_elements = new list<sNode*%>();
    
    /// vector ///
    if(*info.p == ']') {
        info->p++;
        skip_spaces_and_lf();
        
        list_elements.push_back(node);
    }
    else if(*info.p == ',') {
        info->p++;
        skip_spaces_and_lf();
        
        list_elements.push_back(node);
        
        while(true) {
            bool no_comma = info.no_comma;
            info.no_comma = true;
            
            sNode*% node2 = expression();
            
            info.no_comma = no_comma;
            
            list_elements.push_back(node2);
            
            if(*info.p == '\0') {
                err_msg(info, "invalid source end");
                exit(2);
            }
            else if(*info.p == ',') {
                info->p++;
                skip_spaces_and_lf();
            }
            else if(*info.p == ']') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            else {
                err_msg(info, "invalid character(4)(%c)", *info.p);
                exit(2);
            }
        }
    }
    else {
        err_msg(info, "invalid character(5)(%c)", *info.p);
        exit(2);
    }
    
    if(list_elements.length() > 0) {
        info.sline_real = sline_real;
        return create_vector_node(list_elements, info);
    }
    
    err_msg(info, "invalid vector");
    
    return null;
}
