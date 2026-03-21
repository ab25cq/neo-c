#include "common.h"

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 99
{
    info.in_top_level = true;
    char* source_head = info->p;
    
    bool is_type_name_flag = is_type_name(buf);
    int sline = info.sline;
    
    info.p = head;
    info.sline = head_sline;
    
    var define_only, anonymous_name, struct_, union_, enum_ = backtrace_struct_union_enum();
    bool square_attribute_head = *head == '[' && *(head+1) == '[';
    
/*
    if(union_ && anonymous_name) {
        define_only = false;
    }
*/
    
    /// backtrace ///
    bool define_struct_nobody = false;
    {
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        char* p = info.p;
        int sline = info.sline;
        
        if(buf === "struct") {
            parse_word();
            
            if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(*info->p == ';') {
                    define_struct_nobody = true;
                }
            }
        }
        
        info.no_output_come_code = no_output_come_code;
        
        info.p = p;
        info.sline = sline;
    }
    
    /// uniq class ///
    bool uniq_class = false;
    if(buf === "uniq") {
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        char* p = info.p;
        info.p = head;
        int sline = info.sline;
        
        if(xisalpha(*info->p) || *info->p == '_') {
            parse_word();
        }
        
        if(xisalpha(*info->p) || *info->p == '_') {
            string buf2 = parse_word();
            
            if(buf2 === "class") {
                uniq_class = true;
            }
        }
        
        info.p = p;
        info.sline = sline;
        info.no_output_come_code = no_output_come_code;
    }
    
    /// backtrace ///
    bool define_function_pointer_result_function = false;
    bool define_variable_between_brace = false;
    if(is_type_name_flag && !uniq_class && !square_attribute_head)
    {
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        char* p = info.p;
        info.p = head;
        
        if(xisalpha(*info->p) || *info->p == '_' || (*info->p == '[' && *(info->p+1) == '[')) {
            var result_type, fun_name, err = backtrace_parse_type();
            
            if(*info->p == '(') {
                info->p ++;
                skip_spaces_and_lf();
                
                if(*info->p != '*') {
                    define_function_pointer_result_function = true;
                    
                    if(xisalpha(*info->p) || *info->p == '_') {
                        string word = parse_word();
                        
                        if(!is_type_name(word) && *info->p == ')') {
                            info->p++;
                            skip_spaces_and_lf();
                            
                            if(*info->p == '(') {
                            }
                            else {
                                define_variable_between_brace = true;
                            }
                        }
                    }
                }
            }
        }
        
        info.no_output_come_code = no_output_come_code;
        info.p = head;
        info.sline = sline;
    }
    
    /// backtrace ///
    bool define_function_flag = false;
    if(is_type_name_flag && !define_function_pointer_result_function && buf !== "__typeof__" && !uniq_class && !square_attribute_head)
    {
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        char* p = info.p;
        info.p = head;
        
        if(xisalpha(*info->p) || *info->p == '_' || (*info->p == '[' && *(info->p+1) == '[')) {
            var result_type, fun_name, err = backtrace_parse_type();
        }
        if(*info->p == '(' || (*info->p == ':' && *(info->p+1) == ':')) {
            define_function_flag = true;
        }
        
        if(!define_only) {
            string word = null;
            if(xisalnum(*info.p) || *info->p == '_') {
                word = parse_word();
                
                if(word === "extern") {
                    word = parse_word();
                }
            }
            else {
                word = null;
            }
            
            if(word) {
                if(is_type_name(word)) {
                    while(*info->p == '*') {
                        info->p++;
                        skip_spaces_and_lf();
                    }
                    if(*info->p == '[' && *(info->p+1) == ']') {
                        info->p += 2;
                        skip_spaces_and_lf();
                    }
                    if(*info->p == ':') {
                        info->p++;
                        skip_spaces_and_lf();
                    }
                    if(*info->p == ':') {
                        info->p++;
                        skip_spaces_and_lf();
                    }
                    if(xisalnum(*info.p) || *info->p == '_') {
                        word = parse_word();
                    }
                }
                
                /// fun name ///
                if(strlen(word) > 0 && (*info->p == '(' || (*info->p == ':' && *(info->p+1) == ':'))) {
                    if(is_type_name_flag) {
                        define_function_flag = true;
                    }
                }
            }
        }
        
        info.no_output_come_code = no_output_come_code;
        info.p = p;
        info.sline = sline;
    }
    
    /// backtrace ///
    bool define_variable = true;
    if(is_type_name_flag && !define_function_pointer_result_function && !uniq_class && !square_attribute_head)
    {
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        char* p = info.p;
        info.p = head;
        
        if(!is_type_name_flag) {
            define_variable = false;
        }
        
        if(xisalpha(*info->p) || *info->p == '_' || (*info->p == '[' && *(info->p+1) == '[')) {
            var result_type, fun_name, err = backtrace_parse_type();
            
            if(*info->p == '(') {
                info->p ++;
                skip_spaces_and_lf();
                
                if(*info->p == '*') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(xisalpha(*info->p) || *info->p == '_') {
                        string word = parse_word();
                        
                        if(*info->p == ')') {
                            info->p++;
                            skip_spaces_and_lf();
                            
                            if(*info->p == '(') {
                                define_variable = true;
                            }
                        }
                    }
                }
                else if(xisalpha(*info->p) || *info->p == '_') {
                    string word = parse_word();
                    
                    if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        if(!is_type_name(word) && *info->p != '(') {
                            define_variable = true;
                        }
                    }
                }
            }
        }
        
        if(define_only) {
            define_variable = false;
        }
        else if(define_variable) {
        }
        else {
            if(!(xisalpha(*info->p) || *info->p == '_')) {
                define_variable = false;
            }
            
            while(xisalpha(*info->p) || *info->p == '_') {
                info->p++;
            }
            skip_spaces_and_lf();
            
            if(*info->p == '(' || *info->p == ':') {
                define_variable = false;
            }
        }
        
        info.p = p;
        info.sline = sline;
        info.no_output_come_code = no_output_come_code;
    }
    else {
        define_variable = false;
    }
    
    /// backtrace ///
    if(!define_function_pointer_result_function)
    {
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        char* p = info.p;
        info.p = head;
        
        if(buf === "struct") {
            parse_struct_attribute();
            if(xisalpha(*info->p) || *info->p == '_') {
                parse_word();
                if(xisalpha(*info->p) || *info->p == '_') {
                    string word = parse_word();
                    if(xisalpha(*info->p) || *info->p == '_') {
                        word = parse_word();
                        
                        if(word === "extends") {
                            define_variable = false;
                        }
                    }
                }
            }
        }
        
        if(define_only) {
            define_variable = false;
        }
        else if(define_variable) {
        }
        else {
            if(!(xisalpha(*info->p) || *info->p == '_')) {
                define_variable = false;
            }
            
            while(xisalpha(*info->p) || *info->p == '_') {
                info->p++;
            }
            skip_spaces_and_lf();
            
            if(*info->p == '(' || *info->p == ':') {
                define_variable = false;
            }
        }
        
        info.p = p;
        info.sline = sline;
        info.no_output_come_code = no_output_come_code;
    }
    
    info.p = head;
    info.sline = head_sline;
    
    if(uniq_class) {
        info.p = head;
        info.sline = sline;
        
        string buf2 = parse_word();
     
        return inherit(buf2, head, head_sline, info);
    }
    else if(buf === "template") {
        string word = parse_word();
        
        if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            info->method_generics_type_names.reset();
            
            while(true) {
                if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == '\0') {
                    err_msg(info, "unexpected source end");
                    exit(2);
                }
                else {
                    string word = parse_word();       // definition limit
                    info->method_generics_type_names.push_back(clone word);
                }
            }
            
            sNode*% node = parse_function(info);
            
            info->method_generics_type_names.reset();
            
            return node;
        }
    }
    else if(buf === "enum" && *info->p == '{') {
    }
    else if(define_struct_nobody) {
    }
    else if(define_variable_between_brace) {
        info.p = head;
        info.sline = sline;
        
        return parse_global_variable(info);
    }
    else if(define_function_pointer_result_function) {
        char* header_head = info.p;
        var result_type, fun_name, err = parse_type();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            
            var param_types = new list<sType*%>();
            var param_names = new list<string>();
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            else {
                while(true) {
                    var param_type, param_name, err = parse_type(parse_multiple_type:false);
                    
                    if(!err) {
                        err_msg(info, "parse_type is failed");
                        exit(2);
                    }
                    
                    param_types.push_back(param_type);
                    
                    static int num_function_pointer_result_var_name_a = 0;
                    param_names.push_back(xsprintf("_function_pointer_result_var_name_a%d", ++num_function_pointer_result_var_name_a));
                    
                    if(xisalpha(*info->p) || *info->p == '_') {
                        (void)parse_word();
                    }
                    
                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf();
                    }
                    else if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf();
                        break;
                    }
                    else {
                        err_msg(info, "require , or ) (1) it is %c", *info->p);
                        exit(2);
                    }
                }
            }
            
            expected_next_character(')');
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
                
                var param_types2 = new list<sType*%>();
                var param_names2 = new list<string>();
                
                if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else {
                    while(true) {
                        var param_type, param_name, err = parse_type(parse_multiple_type:false);
                        
                        if(!err) {
                            err_msg(info, "parse_type is failed");
                            exit(2);
                        }
                        
                        param_types2.push_back(param_type);
                        
                        static int num_function_pointer_result_var_name_b = 0;
                        param_names2.push_back(xsprintf("_function_pointer_result_var_name_b%d", ++num_function_pointer_result_var_name_b));
                    
                        if(xisalpha(*info->p) || *info->p == '_') {
                            (void)parse_word();
                        }
                        
                        if(*info->p == ',') {
                            info->p++;
                            skip_spaces_and_lf();
                        }
                        else if(*info->p == ')') {
                            info->p++;
                            skip_spaces_and_lf();
                            break;
                        }
                        else {
                            err_msg(info, "require , or ) (2)");
                            exit(2);
                        }
                    }
                }
                
                char* header_tail = info.p;
                
                sType*% result_type2 = new sType(s"lambda");
                
                result_type2->mResultType = result_type;
                result_type2->mParamTypes = clone param_types2;
                result_type2->mParamNames = clone param_names2;
                result_type2->mVarArgs = false;
                result_type2->mStatic = false;
                
                bool var_args = false;
                
                var param_default_parametors = new list<string>();
                
                var fun = new sFun(string(fun_name), result_type2
                                    , param_types, param_names
                                    , param_default_parametors
                                    , true@external, var_args, null@block
                                    , false@static_, info, false@inline_
                                    , false@uniq_);
                
                info.funcs.insert(string(fun_name), fun);
                
                sNode*% result = new sFunNode(fun, info) implements sNode;
                
                return result;
            }
            else {
                err_msg(info, "require (");
                exit(2);
            }
        }
    }
    else if(buf === "__attribute__" || buf === "__declspec") {
        info.p = head;
        info.sline = sline;
        
        string struct_attribute0 = parse_struct_attribute();
        
        if(xisalpha(*info->p) || *info->p == '_') {
            string word = parse_word();
            
            if(word === "struct") {
                string struct_attribute = parse_struct_attribute() + " " + struct_attribute0;
                word = parse_word();
                return parse_struct(word, struct_attribute, info);
            }
            else if(word === "union") {
                string struct_attribute = parse_struct_attribute() + " " + struct_attribute0;
                word = parse_word();
                return parse_union(word, struct_attribute, info);
            }
            else if(word === "enum") {
                string struct_attribute = parse_struct_attribute() + " " + struct_attribute0;
                word = parse_word();
                return parse_enum(word, struct_attribute, info);
            }
            else if(is_type_name(word)) {
                bool attribute_define_function = define_function_flag;
                if(!attribute_define_function) {
                    bool no_output_come_code = info.no_output_come_code;
                    info.no_output_come_code = true;
                    
                    char* p = info.p;
                    int sline2 = info.sline;
                    info.p = head;
                    info.sline = head_sline;
                    
                    (void)parse_struct_attribute();
                    while(xisalnum(*info.p) || *info->p == '_') {
                        string declaration_word = parse_word();
                        bool type_word = is_type_name(declaration_word);
                        
                        if(!type_word) {
                            if(*info->p == '(' || (*info->p == ':' && *(info->p+1) == ':')) {
                                attribute_define_function = true;
                            }
                            break;
                        }
                        
                        while(*info->p == '*') {
                            info->p++;
                            skip_spaces_and_lf();
                        }
                        if(*info->p == '[' && *(info->p+1) == ']') {
                            info->p += 2;
                            skip_spaces_and_lf();
                        }
                    }
                    
                    info.p = p;
                    info.sline = sline2;
                    info.no_output_come_code = no_output_come_code;
                }
                
                info.p = head;
                info.sline = sline;

                sNode*% node;
                if(attribute_define_function) {
                    node = parse_function(info);
                }
                else {
                    node = parse_global_variable(info);
                }

                return node;
            }
            else {
                err_msg(info, "invalid attribute declaration");
                return null;
            }
        }
        else {
            err_msg(info, "invalid attribute declaration");
            return null;
        }
    }
    else if(is_function_attribute_word(buf)) {
        info.p = head;
        info.sline = sline;
        
        sNode*% node = parse_function(info);
        
        return node;
    }
    else if(define_function_flag) {
        info.p = head;
        info.sline = sline;
        
        sNode*% node = parse_function(info);
        
        return node;
    }
    else if(define_variable) {
        info.p = head;
        info.sline = sline;
        
        sNode*% node = parse_global_variable(info);
        
        char* source_tail = info.p;
        
        buffer*% header = new buffer();
        header.append(source_head, source_tail - source_head);
        
        return node;
    }
    
    info.p = head;
    info.sline = sline;
    
    string buf2 = parse_word();
 
    return inherit(buf2, head, head_sline, info);
}
