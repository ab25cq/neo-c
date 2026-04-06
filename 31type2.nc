#include "common.h"

tuple3<sType*%,string,bool>*% parse_type(sInfo* info=info, bool parse_variable_name=false, bool parse_multiple_type=true, bool in_function_parametor=false)
{
    char* head = info.p;
    int head_sline = info.sline;
    
    string attribute_before = parse_struct_attribute();
    string type_name = parse_word();
    
    bool norecord = false;
    bool constant = false;
    bool static_ = false;
    bool volatile_ = false;
    bool register_ = false;
    bool unsigned_ = false;
    bool long_ = false;
    bool long_long = false;
    bool short_ = false;
    bool restrict_ = false;
    bool struct_ = false;
    bool union_ = false;
    bool enum_ = false;
    bool no_heap = false;
    bool extern_ = false;
    bool inline_ = false;
    bool uniq_ = false;
    bool tuple_ = false;
    bool original_var_name = false;
    bool complex_ = false;
    bool type_name_ = false;
    bool noreturn_ = false;
    bool weak_ = false;
    
    sNode*% alignas_ = null;
    bool alignas_double = false;
    
    string tag_attribute = s"";
    bool struct_define_parsed = false;
    
    bool anonymous_type = false;
    bool anonymous_name = false;
    bool atomic_ = false;
    bool thread_local = false;
    bool thread_ = false;
    while(true) {
        if(type_name === "__type__") {
            if(*info.p == '(') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            var buf = new buffer();
            while(*info.p) {
                if(*info.p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    buf.append_char(*info.p);
                    info->p++;
                }
            }
            type_name = buf.to_string();

            type_name_ = true;
        }
        else if(type_name === "_Thread_local") {
            type_name = parse_word();
            thread_local = true;
        }
        else if(type_name === "_norecord") {
            type_name = parse_word();
            norecord = true;
        }
        else if(type_name === "_weak") {
            type_name = parse_word();
            weak_ = true;
        }
        else if(type_name === "__thread") {
            type_name = parse_word();
            thread_ = true;
        }
        else if(type_name === "_Atomic") {
            if(*info.p == '(') {
                expected_next_character('(');
            }
            type_name = parse_word();
            atomic_ = true;
        }
        else if(type_name === "__extension__") {
            type_name = parse_word();
        }
        else if(type_name === "__attribute__") {
            buffer*% attr = new buffer();
            attr.append_str("__attribute__");
            
            skip_spaces_and_lf();
            
            if(*info.p == '(') {
                char* p = info.p;
                skip_paren(info);
                char* tail = info.p;
                
                attr.append(p, tail - p);
            }
            
            string attr_str = attr.to_string();
            if(attribute_before !== "") {
                attribute_before = attribute_before + " " + attr_str;
            }
            else {
                attribute_before = attr_str;
            }
            
            type_name = parse_word();
        }
        else if(type_name === "__declspec") {
            string attr = parse_declspec_attribute();
            if(attr !== "") {
                if(attribute_before !== "") {
                    attribute_before = attribute_before + " " + attr;
                }
                else {
                    attribute_before = attr;
                }
            }
            
            type_name = parse_word();
        }
        else if(type_name === "_Noreturn") {
            type_name = parse_word();
            noreturn_ = true;
        }
        else if(type_name === "__noreturn") {
            type_name = parse_word();
            noreturn_ = true;
        }
        else if(type_name === "_Nullable") {
            type_name = parse_word();
        }
        else if(type_name === "_noreturn") {
            type_name = parse_word();
            noreturn_ = true;
        }
        else if(type_name === "_Alignas") {
            expected_next_character('(');
            
            if((info->end - info->p) > strlen("double") && memcmp(info->p, "double", strlen("double")) == 0)
            {
                (void)parse_word();
                alignas_double = true;
            }
            else {
                alignas_ = expression();
            }
            
            expected_next_character(')');
            
            type_name = parse_word();
        }
        else if(type_name === "const") {
            constant = true;
            
            type_name = parse_word();
        }
        else if(type_name === "_Complex") {
            complex_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "static") {
            static_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "uniq") {
            uniq_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "extern") {
            extern_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "inline" || type_name === "__inline" || type_name === "__inline__" || type_name === "__always_inline" || type_name === "__forceinline") 
        {
            inline_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "volatile" || type_name === "__volatile__") {
            volatile_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "struct") {
            struct_ = true;
            tag_attribute = merge_tag_attribute(tag_attribute, parse_struct_attribute());
            
            if(*info.p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info.p == ';') {
                    anonymous_name = true;
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    struct_define_parsed = true;
                    break;
                } 
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    struct_define_parsed = true;
                    break;
                }
            }

            skip_spaces_and_lf();
            
            if(*info.p != '>') {
                type_name = parse_word();
                
                skip_spaces_and_lf();
                
                string struct_attribute_after_name = parse_struct_attribute();
                tag_attribute = merge_tag_attribute(tag_attribute, struct_attribute_after_name);
                
                if(*info.p == '<') {
                    char* p = info.p;
                    int sline = info.sline;
                    
                    info->p++;
                    skip_spaces_and_lf();
                    
                    while(true) {
                        if(*info.p == '>') {
                            info->p++;
                            skip_spaces_and_lf();
                            
                            if(*info.p == '{') {
                            }
                            else {
                                info.p = p;
                                info.sline = sline;
                            }
                            break;
                        }
                        else if(*info.p == '\0') {
                            err_msg(info, "invalid struct definition");
                            return t((sType*%)null, (string)null, false);
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                
                string struct_attribute_after_generics = parse_struct_attribute();
                tag_attribute = merge_tag_attribute(tag_attribute, struct_attribute_after_generics);
                
                if(*info.p == '{') {
                    char* p = info.p;
                    int sline = info.sline;
                    
                    skip_block(info);
                    
                    (void)parse_struct_attribute();
                    
                    if(*info.p == ';') {
                        info.p = head;
                        info.sline = head_sline;
                        return t((sType*%)null, (string)null, false);
                    }
                    else {
                        info.p = p;
                        info.sline = sline;
                        
                        sNode*% node = parse_struct(type_name, tag_attribute, info);
                        
                        node_compile(node).elif {
                            return t((sType*%)null, (string)null, false);
                        }
                        struct_define_parsed = true;
                        break;
                    }
                }
            }
        }
        else if(type_name === "union") {
            union_ = true;
            tag_attribute = merge_tag_attribute(tag_attribute, parse_struct_attribute());
           
            if(*info.p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if((info->end - info->p) >= strlen("__attribute__") && memcmp(info->p, "__attribute__", strlen("__attribute__")) == 0) {
                    parse_attribute();
                }
                
                if(*info.p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }

            skip_spaces_and_lf();
            
            type_name = parse_word();

            skip_spaces_and_lf();
            
            if(*info.p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info.p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    return t((sType*%)null, (string)null, false);
                } 
                else {
                    anonymous_type = true;
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
        }
        else if(type_name === "enum") {
            enum_ = true;

            skip_spaces_and_lf();
            
            var asm_name, enum_attribute = parse_attribute();
            tag_attribute = merge_tag_attribute(tag_attribute, enum_attribute);
            
            if(*info.p == ':') {
                info->p++;
                skip_spaces_and_lf();
                
                var type,name,err = parse_type();
            }

            skip_spaces_and_lf();
            
            if(*info.p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if((info->end - info->p) >= strlen("__attribute__") && memcmp(info->p, "__attribute__", strlen("__attribute__")) == 0) {
                    parse_attribute();
                }
                
                if(*info.p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    return t((sType*%)null, (string)null, false);
                }
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    struct_define_parsed = true;
                    break;
                }
            }

            skip_spaces_and_lf();
            
            type_name = parse_word();

            skip_spaces_and_lf();
            
            string enum_attribute_after_name = parse_struct_attribute();
            tag_attribute = merge_tag_attribute(tag_attribute, enum_attribute_after_name);
            
            if(*info.p == ':') {
                info->p++;
                skip_spaces_and_lf();
                
                var type,name,err = parse_type();
            }

            skip_spaces_and_lf();
            
            string enum_attribute_after_type = parse_struct_attribute();
            tag_attribute = merge_tag_attribute(tag_attribute, enum_attribute_after_type);
            
            if(*info.p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info.p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    return t((sType*%)null, (string)null, false);
                }
                else {
                    anonymous_type = true;
                    info.p = p;
                    info.sline = sline;
                    struct_define_parsed = true;
                    break;
                }
            }
        }
        else if(type_name === "long") {
            /// backtrace ///
            {
                char* p = info.p;
                int sline = info.sline;
                
                if(!(xisalpha(*info.p) || *info.p == '_')) {
                    type_name = string("long");
                    break;
                }
                else {
                    char* p2 = info.p;
                    int sline2 = info.sline;
                    
                    type_name = parse_word();
                    
                    if(type_name === "double") {
                        long_ = true;
                        break;
                    }
                    else if(type_name === "unsigned") {
                        type_name = parse_word();
                        
                        if(type_name === "int") {
                            long_ = true;
                            unsigned_ = true;
                            break;
                        }
                    }
                    else if(type_name === "signed") {
                        type_name = parse_word();
                        
                        if(type_name === "int") {
                            long_ = true;
                            unsigned_ = false;
                            break;
                        }
                    }
                    else if(type_name === "long") {
                        p = info.p;
                        sline = info.sline;
                        if(xisalpha(*info.p) || *info.p == '_') {
                            long_long = true;
                            type_name = parse_word();
                        }
                        else if(*info.p == ':') {
                            type_name = string("long");
                            info.p = p2;
                            info.sline = sline2;
                            break;
                        }
                        else {
                            long_ = true;
                            break;
                        }
                        
                        if(type_name === "int") {
                            long_long = true;
                            break;
                        }
                        else if(!is_type_name(type_name)) {
                            type_name = string("long");
                            long_long = true;
                            info.p = p;
                            info.sline = sline;
                            break;
                        }
                    }
                    else if(is_type_name(type_name)) {
                        if(long_) {
                            long_long = true;
                            long_ = false;
                        }
                        else {
                            long_ = true;
                        }
                        break;
                    }
                    else {
                        info.p = p;
                        info.sline = sline;
                        
                        type_name = string("long");
                        break;
                    }
                }
            }
        }
        else if(type_name === "signed") {
            unsigned_ = false;
            
            if(xisalpha(*info.p) || *info.p == '_') {
                char* p = info.p;
                int sline = info.sline;
                
                type_name = parse_word();
                
                if(type_name === "char" || type_name === "short" || type_name === "long" || type_name === "int") {
                }
                else {
                    type_name = s"int";
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
            else {
                type_name = s"int";
                break;
            }
        }
        else if(type_name === "unsigned") {
            unsigned_ = true;
            
            if(xisalpha(*info.p) || *info.p == '_') {
                char* p = info.p;
                int sline = info.sline;
                
                type_name = parse_word();
                
                if(type_name === "short") {
                    if(xisalpha(*info.p) || *info.p == '_') {
                        char* p = info.p;
                        int sline = info.sline;
                        
                        type_name = parse_word();
                        
                        if(is_type_name(type_name)) {
                            short_ = true;
                        }
                        else {
                            short_ = true;
                            type_name = string("int");
                            
                            info.p = p;
                            info.sline = sline;
                        }
                    }
                    else {
                        short_ = true;
                        type_name = string("int");
                        break;
                    }
                }
                else if(type_name === "long") {
                    if(xisalpha(*info.p) || *info.p == '_') {
                        char* p = info.p;
                        int sline = info.sline;
                        
                        type_name = parse_word();
                        
                        if(is_type_name(type_name)) {
                            long_ = true;
                        }
                        else {
                            long_ = true;
                            type_name = string("int");
                            
                            info.p = p;
                            info.sline = sline;
                        }
                    }
                    else {
                        long_ = true;
                        type_name = string("int");
                        break;
                    }
                }
                else if(!is_type_name(type_name)) {
                    type_name = string("int");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
            else {
                type_name = string("int");
                break;
            }
        }
        else if(type_name === "signed" || type_name === "__signed__") {
            unsigned_ = false;
            
            char* p = info.p;
            int sline = info.sline;
            
            type_name = parse_word();
            
            if(*info.p == ':' && *(info->p+1) == ':') {
                type_name = string("int");
                info.p = p;
                info.sline = sline;
                break;
            }
        }
        else if(type_name === "register") {
            register_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "restrict") {
            restrict_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "_Addr") {
            type_name = parse_word();
        }
        else if(type_name === "__restrict") {
            restrict_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "tup") {
            err_msg(info, "tup shorthand was removed. use tuple2/tuple3/... explicit types");
            return t((sType*%)null, (string)null, false);
        }
        else if(type_name === "short") {
            short_ = false;
            
            if(*info.p == ':') {
                break;
            }
            else if(xisalnum(*info.p)) {
                char* p = info.p;
                int sline = info.sline;
                type_name = parse_word();
                
                if(*info.p == ':' && *(info->p+1) == ':') {
                    type_name = string("short");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
                
                if(type_name === "int") {
                    short_ = true;
                    break;
                }
                else if(type_name === "short") {
                    short_ = true;
                    break;
                }
                else if(is_type_name(type_name)) {
                    info.p = p;
                    info.sline = sline;
                }
                else {
                    type_name = string("short");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    
    if((type_name === "typeof" || type_name === "__typeof__") && *info.p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        bool no_comma = info.no_comma;
        info.no_comma = false;
        sNode*% exp = expression();
        info.no_comma = no_comma;
        
        expected_next_character(')');
        
        sType*% type = new sType(s"int");
        type->mTypeOfNode = exp;
        
        string var_name = null;
        
        type = parse_pointer_attribute(type);
        
        string attribute = null;
        
        if(parse_variable_name) {
            var_name = parse_variable_name_fun(type, anonymous_name:anonymous_name, var_name_between_brace:false, attribute);
        }
        return t(type, var_name, true);
    }
    
    string attribute = parse_struct_attribute(allow_end:false);
    if(attribute_before !== "") {
        if(attribute === "") {
            attribute = attribute_before;
        }
        else {
            attribute = attribute_before + " " + attribute;
        }
        attribute_before = s"";
    }
    if(!struct_define_parsed && (struct_ || enum_) && tag_attribute !== "") {
        attribute = merge_tag_attribute(tag_attribute, attribute);
    }
    
    skip_pointer_attribute();
    
    int pointer_num = 0;
    string pointer_attribute = s"";
    bool heap = false;
    bool refference = false;
    bool no_refference = false;
    bool channel = false;
    bool deffer_ = false;
    bool any_class = false;
    bool vtable = false;
    while(1) {
        if(*info.p == '*') {
            info->p++;
            skip_spaces_and_lf();
            string pointer_attr = parse_pointer_qualifier();
            if(pointer_attr !== "") {
                if(pointer_attribute !== "") {
                    pointer_attribute = pointer_attribute + " " + pointer_attr;
                }
                else {
                    pointer_attribute = pointer_attr;
                }
            }
            
            pointer_num++;
        }
        else if(*info.p == '%') {
            info->p++;
            skip_spaces_and_lf();
            
            heap = true;
        }
        else if(gComePthread && *info.p == '|') {
            info->p++;
            skip_spaces_and_lf();
            
            channel = true;
        }
        else if(*info.p == '@') {
            info->p++;
            while(xisalnum(*info.p) || *info.p == '_') {
                info->p++;
            }
            skip_spaces_and_lf();
        }
        else {
            break;
        }
    }
    
    skip_pointer_attribute();
    
    string tuple_name = null;
    if(*info.p == ':' && *(info->p+1) != ':' && tuple_) {
        info->p++;
        skip_spaces_and_lf();
        
        tuple_name = parse_word();
    }
    
    if(atomic_ && *info.p == ')') {
        expected_next_character(')');
    }
    
    bool lambda_flag = false;
    {
        char* pX = info.p;
        int slineX = info.sline;
        
        if(xisalpha(*info.p) || *info.p == '_') {
            (void)parse_word();
            
            if(*info.p == '(' && info.in_typedef) {
                lambda_flag = true;
            }
        }
        
        info.p = pX;
        info.sline = slineX;
    }
    
    sType*% type;
    string var_name;
    
    bool function_pointer_flag = false;
    bool pointer_to_array_flag = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info.p == '(') {
            info->p++;
            skip_spaces_and_lf();
        
            skip_pointer_attribute();
            
            if(*info.p == '(') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            if(*info.p == '*' || *info.p == '^') {
                while(*info.p == '*' || *info.p == '^') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                
                function_pointer_flag = true;
                
                string word = null;
                if(xisalpha(*info.p) || *info.p == '_') {
                    word = parse_word();
                }
                
                if(*info.p == '[') {
                    pointer_to_array_flag = true;
                    while(*info.p == '[') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        if(*info.p == ']') {
                            info->p++;
                            skip_spaces_and_lf();
                            break;
                        }
                        bool no_output_come_code = info.no_output_come_code
                        info.no_output_come_code = true;
                        sNode*% exp = expression();
                        info.no_output_come_code = no_output_come_code;
                        
                        if(*info.p == ']') {
                            info->p++;
                            skip_spaces_and_lf();
                        }
                    }
                    
                    if(*info.p == ')') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        if(*info.p == '(') {
                            function_pointer_flag = true;
                            pointer_to_array_flag = false;
                        }
                        else if(*info.p == '[') {
                            function_pointer_flag = false;
                            pointer_to_array_flag = true;
                        }
                    }
                }
                else if(*info.p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info.p == ')') {
                        info->p++;
                        skip_spaces_and_lf();
                        pointer_to_array_flag = true;
                        function_pointer_flag = false;
                    }
                    
                    if(*info.p == '[') {
                        pointer_to_array_flag = true;
                        function_pointer_flag = false;
                    }
                    else if(*info.p == '(') {
                        function_pointer_flag = true;
                    }
                }
            }
            else if(xisalpha(*info.p) || *info.p == '_') {
                string word = parse_word();
                
                if(*info.p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info.p == '(') {
                        function_pointer_flag = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    bool var_name_between_brace = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info.p == '(') {
            info->p++;
            skip_spaces_and_lf();
        
            skip_pointer_attribute();
            
            if(xisalpha(*info.p) || *info.p == '_') {
                string word = parse_word();
                
                if(is_type_name(word)) {
                }
                else if(*info.p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info.p != '(') {
                        var_name_between_brace = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    
    if(anonymous_type && *info.p == '{') {
        static int anonymous_num = 0;
        if(struct_) {
            bool anonymous = false;
            if(type_name === "") {
                anonymous = true;
                type_name = xsprintf("anonymous_typeX%d", ++anonymous_num);
            }
            
            sNode*% node = parse_struct(type_name, tag_attribute, info, anonymous);
            
            node_compile(node).elif {
                err_msg(info, "parse_struct is failed");
                return t((sType*%)null, (string)null, false);
            }
            
            int pointer_num = 0;
            while(*info.p == '*') {
                info->p++
                skip_spaces_and_lf(info);
                
                skip_pointer_attribute();
                
                pointer_num++;
            }
            
            //type = new sType(string(type_name));
            type = clone info.types[type_name];
            
            if(type == null) {
                type = new sType(string(type_name));
            }
            sClass*% klass = info.classes[type_name];
            klass->mAnonymous = true;
            type->mAnonymous = anonymous;
            type->mAnonymous = anonymous;
            type->mAnonymousName = string(type_name);
            
            type->mPointerNum = pointer_num;
        }
        else if(enum_) {
            if(type_name === "") {
                if(!info.no_output_err) {
                    type_name = xsprintf("anonymous_typeY%d", anonymous_num);
                }
                else {
                    type_name = xsprintf("anonymous_typeY%d", ++anonymous_num);
                }
            }
            
            sNode*% node = parse_enum(type_name, tag_attribute, info);
            
            if(!info.no_output_err) {
                node_compile(node).elif {
                    printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
                    return t((sType*%)null, (string)null, false);
                }
            }
            
            type = clone info.types[type_name];
            
            if(type == null) {
                type = new sType(string(type_name));
            }
        }
        else if(union_) {
            bool anonymous = false;
            if(type_name === "") {
                type_name = xsprintf("anonymous_typeZ%d", ++anonymous_num);
                anonymous = true;
            }
            
            sNode*% node = parse_union(type_name, tag_attribute, info, true@anoymous);
            
            node_compile(node).elif {
                printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
                return t((sType*%)null, (string)null, false);
            }
            
            int pointer_num = 0;
            while(*info.p == '*') {
                info->p++
                skip_spaces_and_lf(info);
                
                skip_pointer_attribute();
                
                pointer_num++;
            }
            
            
            type = clone info.types[type_name];
            
            if(type == null) {
                type = new sType(string(type_name));
            }
            //type = new sType(string(type_name));
            
            sClass*% klass = info.classes[type_name];
            klass->mAnonymous = true;
            
            type->mPointerNum = pointer_num;
            type->mAnonymous = anonymous;
            type->mAnonymousName = string(type_name);
        }
        else {
            err_msg(info, "unexpected { character");
            return t((sType*%)null, (string)null, false);
        }
        
        string attribute = parse_struct_attribute(allow_end:false);
        
        if(!parse_variable_name) {
            append_attribute_to_type(type, attribute, false, info);
        }
        
        if(parse_variable_name) {
            var_name = parse_variable_name_fun(type, anonymous_name:anonymous_name, var_name_between_brace:var_name_between_brace, attribute);
        }
    }
    else if(lambda_flag) {
        sType*% result_type;
        if(info.types[type_name]) {
            result_type = clone info.types[type_name];
            result_type->mClass = borrow info.classes[result_type->mClass->mName];
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("__generics_type%d", i));
                }
            }
        }
        else if(info.method_generics_type_names.contained(type_name)) {
            for(int i=0; i<info.method_generics_type_names.length(); i++) {
                if(info.method_generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("__mgenerics_type%d", i));
                }
            }
        }
        else {
            //result_type = new sType(string(type_name));
            result_type = clone info.types[type_name];
            
            if(result_type == null) {
                result_type = new sType(string(type_name));
            }
        }
        
        apply_type_qualifiers(result_type, constant, complex_, atomic_, thread_local, thread_, alignas_double, register_, unsigned_, noreturn_, volatile_, uniq_, static_, extern_, inline_, restrict_, long_long, long_, short_, norecord, weak_);
        result_type->mAlignas = alignas_;
        result_type->mPointerNum = pointer_num;
        result_type->mHeap = result_type->mHeap || heap;
        result_type->mChannel = result_type->mChannel || channel;
        result_type->mDefferRightValue = result_type->mDefferRightValue || deffer_;
        merge_pointer_attribute_to_type(result_type, pointer_attribute);
        
        var_name = parse_word();
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
        type = new sType(s"lambda");
        
        type->mResultType = result_type;
        type->mParamTypes = param_types;
        type->mParamNames = param_names;
        type->mVarArgs = var_args;
        type->mExtern = extern_;
    }
    else if(pointer_to_array_flag) {
        expected_next_character('(');
        
        skip_pointer_attribute();
        
        bool pointer_paren = false;
        int paren_num = 1;
        if(*info.p == '(') {
            pointer_paren = true;
            info->p++;
            skip_spaces_and_lf();
            paren_num++;
        }
        
        int array_pointer_num = 0;
        while(*info.p == '*' || *info.p == '^') {
            info->p++;
            skip_spaces_and_lf();
            skip_pointer_attribute();
            array_pointer_num++;
        }
        
        skip_pointer_attribute();
        
        type = clone info.types[type_name];
        
        if(type == null) {
            type = new sType(string(type_name));
        }
        
        apply_type_qualifiers(type, constant, complex_, atomic_, thread_local, thread_, alignas_double, register_, unsigned_, noreturn_, volatile_, uniq_, static_, extern_, inline_, restrict_, long_long, long_, short_, norecord, weak_);
        type->mAlignas = alignas_;
        type->mPointerNum += pointer_num;
        type->mHeap = type->mHeap || heap;
        type->mChannel = type->mChannel || channel;
        type->mTupleName = tuple_name;
        type->mDefferRightValue = type->mDefferRightValue || deffer_;
        merge_pointer_attribute_to_type(type, pointer_attribute);
        
        if(xisalpha(*info.p) || *info.p == '_') {
            var_name = parse_word();
        }
        else {
            var_name = s"";
        }
        
        if(*info.p == ')') {
            info->p++;
            skip_spaces_and_lf();
            paren_num--;
        }
        list<sNode*%>*% array = new list<sNode*%>();
        while(*info.p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% node = expression();
            
            array.add(node);
            
            if(*info.p == ']') {
                info->p++;
                skip_spaces_and_lf();
            }
        }
        if(paren_num > 0 && *info.p == ')') {
            info->p++;
            skip_spaces_and_lf();
            
            type.mVarNameArrayNum = array;
        }
        else {
            array.each {
                type.mArrayNum.add(clone it);
            }
        }
        
        while(*info.p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info.p == ']') {
                info->p++;
                skip_spaces_and_lf();
                type->mArrayPointerType = true;
                break;
            }
            
            sNode*% node = expression();
            
            type.mArrayNum.add(node);
            
            if(*info.p == ']') {
                info->p++;
                skip_spaces_and_lf();
            }
        }
        
        type->mArrayPointerNum = array_pointer_num;
        type->mPointerParen = pointer_paren;
    }
    else if(function_pointer_flag) {
        info->p++;
        skip_spaces_and_lf();
        
        skip_pointer_attribute();
        string function_pointer_attribute = s"";
        
        int function_pointer_num = 0;
        while(*info.p == '*' || *info.p == '^') {
            info->p++;
            skip_spaces_and_lf();
            string pointer_attr = parse_pointer_qualifier();
            if(pointer_attr !== "") {
                if(function_pointer_attribute !== "") {
                    function_pointer_attribute = function_pointer_attribute + " " + pointer_attr;
                }
                else {
                    function_pointer_attribute = pointer_attr;
                }
            }
            function_pointer_num++;
        }
        
        string pointer_attr2 = parse_pointer_qualifier();
        if(pointer_attr2 !== "") {
            if(function_pointer_attribute !== "") {
                function_pointer_attribute = function_pointer_attribute + " " + pointer_attr2;
            }
            else {
                function_pointer_attribute = pointer_attr2;
            }
        }
        
        sType*% result_type;
        if(info.types[type_name]) {
            result_type = clone info.types[type_name];
            result_type->mClass = borrow info.classes[result_type->mClass->mName];
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("__generics_type%d", i));
                }
            }
        }
        else if(info.method_generics_type_names.contained(type_name)) {
            for(int i=0; i<info.method_generics_type_names.length(); i++) {
                if(info.method_generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("__mgenerics_type%d", i));
                }
            }
        }
        else {
            result_type = clone info.types[type_name];
            
            if(result_type == null) {
                result_type = new sType(string(type_name));
            }
        }
        
        apply_type_qualifiers(result_type, constant, complex_, atomic_, thread_local, thread_, alignas_double, register_, unsigned_, noreturn_, volatile_, uniq_, static_, extern_, inline_, restrict_, long_long, long_, short_, norecord, weak_);
        result_type->mAlignas = alignas_;
        result_type->mPointerNum += pointer_num;
        result_type->mHeap = result_type->mHeap || heap;
        result_type->mChannel = result_type->mChannel || channel;
        result_type->mDefferRightValue = result_type->mDefferRightValue || deffer_;
        merge_pointer_attribute_to_type(result_type, pointer_attribute);
        
        int paren_flag = false;
        if(*info.p == '(') {
            info->p++;
            skip_spaces_and_lf();
            paren_flag = true;
        }
            
        int array_pointer = 0;
        while(*info.p == '*') {
            info->p++;
            skip_spaces_and_lf();
            array_pointer++;
        }
    
        if(xisalnum(*info.p) || *info.p == '_') {
            var_name = parse_word();
            if(!paren_flag && *info.p == '(') { // function pointer result function
                return t(result_type,var_name, false);
            }
        }
        else {
            static int num_anonymous_var_name = 0;
            num_anonymous_var_name++;
            var_name = xsprintf("anonymous_lambda_var_nameZ%d", num_anonymous_var_name);
        }
        
        type = new sType(s"lambda");
        while(*info.p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info.p == ']') {
                info->p++;
                skip_spaces_and_lf();
                
                type->mArrayPointerType = true;
                break;
            }
            else {
                sNode*% node = expression();
                
                type.mArrayNum.add(node);
                
                if(*info.p == ']') {
                    info->p++;
                    skip_spaces_and_lf();
                }
            }
        }
        
        if(paren_flag && *info.p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        while(*info.p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% node = expression();
            
            type.mArrayNum.add(node);
            
            if(*info.p == ']') {
                info->p++;
                skip_spaces_and_lf();
            }
        }
        expected_next_character(')');
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
        type->mResultType = clone result_type;
        type->mParamTypes = param_types;
        type->mParamNames = param_names;
        type->mVarArgs = var_args;
        type->mExtern = extern_;
        type->mPointerAttribute = function_pointer_attribute;
        
        type->mFunctionPointerNum = function_pointer_num;
        type->mArrayPointerNum = array_pointer;
    }
    else {
        if(info.types[type_name]) {
            type = clone info.types[type_name];
            type->mClass = borrow info.classes[type->mClass->mName];
            
            buffer* t = borrow info.typedef_definition[type_name];
            
            type->mOriginalTypePointerNum = pointer_num;
            type->mOriginalTypePointerHeap = heap;
            if(type->mTypedef || t) {
                sType*% type_ = clone type;
                type_->mAttribute = s"";
                type.mTypedefOriginalType = clone type_;
            }
            
            type->mAttribute = s"";
            type->mVarAttribute = s"";
            
            apply_type_qualifiers(type, constant, complex_, atomic_, thread_local, thread_, alignas_double, register_, unsigned_, noreturn_, volatile_, uniq_, static_, extern_, inline_, restrict_, long_long, long_, short_, norecord, weak_);
            type->mAlignas = alignas_;
            if(type.mClass.mName === "lambda" || type.mArrayNum.length() > 0) {
                type->mArrayPointerNum += pointer_num;
            }
            else {
                type->mPointerNum += pointer_num;
            }
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
            
            type = parse_pointer_attribute(type);
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    type = new sType(xsprintf("__generics_type%d", i));
                }
            }
            
            apply_type_qualifiers(type, constant, complex_, atomic_, thread_local, thread_, alignas_double, register_, unsigned_, noreturn_, volatile_, uniq_, static_, extern_, inline_, restrict_, long_long, long_, short_, norecord, weak_);
            type->mAlignas = alignas_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
            
            type = parse_pointer_attribute(type);
        }
        else if(info.method_generics_type_names.contained(type_name)) {
            for(int i=0; i<info.method_generics_type_names.length(); i++) {
                if(info.method_generics_type_names[i] === type_name) {
                    type = new sType(xsprintf("__mgenerics_type%d", i));
                }
            }
            
            apply_type_qualifiers(type, constant, complex_, atomic_, thread_local, thread_, alignas_double, register_, unsigned_, noreturn_, volatile_, uniq_, static_, extern_, inline_, restrict_, long_long, long_, short_, norecord, weak_);
            type->mAlignas = alignas_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
            
            type = parse_pointer_attribute(type);
        }
        else if(type_name === "Result" && *info.p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            var result_type, var_name, err = parse_type(parse_multiple_type:false);
            
            if(!err) {
                return t((sType*%)null, (string)null, false);
            }
            
            if(*info.p != '>') {
                err_msg(info, "invalid Result type arguments");
                return t((sType*%)null, (string)null, false);
            }
            
            info->p++;
            skip_spaces_and_lf();
            
            type = new sType(s"tuple2");
            type->mGenericsTypes.push_back(result_type);
            type->mGenericsTypes.push_back(new sType(s"_Bool"));
            type->mPointerNum = 1;
            type->mHeap = true;
            
            if(is_contained_generics_class(type, info)) {
                type = solve_generics(type, info.generics_type, info);
            }
            else {
                if(!output_generics_struct(type, type, info))
                {
                    string new_name = create_generics_name(type, info);
                    printf("%s %d: output generics is failed(%s)\n", info->sname, info->sline, new_name);
                    exit(7);
                }
            }
            
            apply_type_qualifiers(type, constant, complex_, atomic_, thread_local, thread_, alignas_double, register_, unsigned_, noreturn_, volatile_, uniq_, static_, extern_, inline_, restrict_, long_long, long_, short_, norecord, weak_);
            type->mAlignas = alignas_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
            
            type_name = type->mClass->mName;
            
            type = parse_pointer_attribute(type);
        }
        else if(*info.p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            if(info.generics_classes[string(type_name)] == null)
            {
                return t((sType*%)null, (string)null, false);
            }
            
            //type = new sType(string(type_name));
            
            type = clone info.types[type_name];
            
            if(type == null) {
                type = new sType(string(type_name));
            }
            
            while(true) {
                var generics_type, var_name, err = parse_type(parse_multiple_type:false);
                
                if(!err) {
                    return t((sType*%)null, (string)null, false);
                }
                
                type->mGenericsTypes.push_back(generics_type);
                
                if(*info.p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info.p == '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    break;
                }
                else {
                    err_msg(info, "invalid generics type(%c)(%c)(%c)", *info.p, *(info->p+1), *(info->p+2));
                    return t((sType*%)null, (string)null, false);
                }
            }
            
            int expected_generics_num = -1;
            sClass* generics_class = borrow info.generics_classes.at(string(type_name), null);
            if(generics_class) {
                expected_generics_num = generics_class.mGenericsNum;
            }
            if(expected_generics_num >= 0 && type->mGenericsTypes.length() != expected_generics_num) {
                err_msg(info, "invalid count of generics type arguments. %s requires %d but got %d", type_name, expected_generics_num, type->mGenericsTypes.length());
                return t((sType*%)null, (string)null, false);
            }
            
            if(is_contained_generics_class(type, info)) {
                type = solve_generics(type, info.generics_type, info);
            }
            else {
                if(!output_generics_struct(type, type, info))
                {
                    string new_name = create_generics_name(type, info);
                    printf("%s %d: output generics is failed(%s)\n", info->sname, info->sline, new_name);
                    exit(7);
                }
            }
            
            apply_type_qualifiers(type, constant, complex_, atomic_, thread_local, thread_, alignas_double, register_, unsigned_, noreturn_, volatile_, uniq_, static_, extern_, inline_, restrict_, long_long, long_, short_, norecord, weak_);
            type->mAlignas = alignas_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
            
            type_name = type->mClass->mName;
            
            type = parse_pointer_attribute(type);
        }
        else {
            if(struct_) {
                sClass* klass = borrow info.classes[type_name];
                
                if(klass == null && *info.p != '<') {
                    info.classes.insert(string(type_name), new sClass(name:string(type_name), struct_:true));
                }
            }
            if(union_) {
                sClass* klass = borrow info.classes[type_name];
                
                if(klass == null && *info.p != '<') {
                    info.classes.insert(string(type_name), new sClass(name:string(type_name), union_:true));
                }
            }
            
            //type = new sType(string(type_name));
            
            type = clone info.types[type_name];
            
            if(type == null) {
                type = new sType(string(type_name));
            }
            
            apply_type_qualifiers(type, constant, complex_, atomic_, thread_local, thread_, alignas_double, register_, unsigned_, noreturn_, volatile_, uniq_, static_, extern_, inline_, restrict_, long_long, long_, short_, norecord, weak_);
            type->mAlignas = alignas_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
        }
        
        merge_pointer_attribute_to_type(type, pointer_attribute);
        
        type = parse_pointer_attribute(type);
        
        if(parse_multiple_type && *info.p == ',' && !info.in_offsetof) {
            list<sType*%>*% types = new list<sType*%>();
            
            types.push_back(clone type);
            
            while(*info.p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                var type2, name, err = parse_type(parse_multiple_type:false);
                
                if(!err) {
                    return t((sType*%)null, (string)null, false);
                }
                    
                types.push_back(clone type2);
            }
            
            if(*info.p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            int num_tuples = types.length();
            
            type = new sType(xsprintf("tuple%d", num_tuples));
            type->mPointerNum++;
            type->mHeap = true;
            
            foreach(it, types) {
                type->mGenericsTypes.push_back((clone it));
            }
            
            type = parse_pointer_attribute(type);
            
            if(is_contained_generics_class(type, info)) {
                type = solve_generics(type, info.generics_type, info);
            }
            else {
                if(!output_generics_struct(type, type, info))
                {
                    string new_name = create_generics_name(type, info);
                    printf("output generics is failed(%s)\n", new_name);
                    exit(9);
                }
            }
            type->mMultipleTypes = true;
            
            type_name = type->mClass->mName;
        }
        
        string attribute = parse_struct_attribute(allow_end:false);
        
        if(type && type->mClass->mName === "lambda" && attribute !== "") {
            if(type->mMiddleAttribute != null && type->mMiddleAttribute !== "") {
                type->mMiddleAttribute = type->mMiddleAttribute + " " + attribute;
            }
            else {
                type->mMiddleAttribute = attribute;
            }
            attribute = s"";
        }
        
        if(!parse_variable_name) {
            append_attribute_to_type(type, attribute, false, info);
        }

        if(parse_variable_name) {
            var_name = parse_variable_name_fun(type, anonymous_name:anonymous_name, var_name_between_brace:var_name_between_brace, attribute);
        }
    }
    skip_spaces_and_lf();
    list<sNode*%>*% array_num_typedef = null;
    if(type->mArrayNum.length() > 0) {
        array_num_typedef = clone type->mArrayNum;
        type->mArrayNum.reset();
    }
    
    while(*info.p == '[') {
        info->p++;
        skip_spaces_and_lf();
        
        bool array_static = false;
        bool array_restrict = false;
        while(1) {
            if(parsecmp_forward("static")) {
                skip_spaces_and_lf();
                
                array_static = true;
            }
            else if(parsecmp_forward("restrict")) {
                skip_spaces_and_lf();
                
                array_restrict = true;
            }
            else {
                break;
            }
        }
        
        skip_pointer_attribute();
        
        if(*info.p == ']') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mArrayPointerType = true;
            //type->mPointerNum++;
            break;
        }
        skip_spaces_and_lf();
        
        sNode*% node = expression();
        type.mArrayNum.push_back(node);
        type.mArrayStatic.push_back(array_static);
        type.mArrayRestrict.push_back(array_restrict);
        
        expected_next_character(']');
    }
    
    if(array_num_typedef) {
        type->mArrayNum.each {
            type->mVarNameArrayNum.add(clone it);
        }
        type->mArrayNum.reset();
        array_num_typedef.each {
            type.mArrayNum.add(clone it);
        }
    }
    var asm_name,attribute2 = parse_attribute();
    
    append_attribute_to_type(type, attribute2, parse_variable_name, info);
    
    type->mAsmName = asm_name;
    
    skip_spaces_and_lf();
    
    if(type->mChannel) {
        sType*% type_before = clone type;
        type = new sType(s"int");
        type->mArrayNum = [ create_int_node(s"2"@value, info) ];
        type->mChannelType = type_before;
        type->mChannel = true;
    }
    
    if(type && type->mClass->mName === "lambda" && attribute !== "") {
        if(type->mMiddleAttribute != null && type->mMiddleAttribute !== "") {
            type->mMiddleAttribute = type->mMiddleAttribute + " " + attribute;
        }
        else {
            type->mMiddleAttribute = attribute;
        }
        attribute = s"";
    }
    append_attribute_to_type(type, attribute, parse_variable_name, info);
    
    return t(type, var_name, true);
}
