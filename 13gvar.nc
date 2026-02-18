#include "common.h"

class sGlobalVariable extends sNodeBase
{
    new(list<tuple3<sType*%, string, string>*%>*% multiple_declare, sType* type, string name, sNode*% right_node, string array_initializer, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
        string self.name = string(name);
        sNode*% self.right_node = right_node;
        string self.array_initializer = array_initializer;
        
        list<tuple3<sType*%, string, string>*%>*% self.multiple_declare = clone multiple_declare;
    }
    
    string kind()
    {
        return string("sGlobalVariable");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = clone self.type;
        string name = clone self.name;
        sNode* right_node = borrow self.right_node;
        string array_initializer = clone self.array_initializer;
        
        if(self.multiple_declare) {
            foreach(it, self.multiple_declare) {
                var type, name,initializer = it;
                
                add_variable_to_global_table(name, clone type, info);
                
                if(type.mUniq) {
                    if(!type.mConstant) info.var_definition.insert(string(name), xsprintf("extern %s;\n", make_define_var(type, name)).to_buffer());
                    info.uniq_definition.insert(string(name), xsprintf("%s;\n", make_define_var(type, name)));
                }
                else if(initializer) {
                    info.var_definition.insert(string(name), xsprintf("%s=%s;", make_define_var(type, name), initializer).to_buffer());
                }
                else {
                    info.var_definition.insert(string(name), xsprintf("%s;", make_define_var(type, name)).to_buffer());
                }
            }
        }
        else {
            add_variable_to_global_table(name, clone type, info);
            
            if(array_initializer) {
                if(type.mUniq) {
                    if(!type->mConstant) info.var_definition.insert(string(name), xsprintf("extern %s;\n", make_define_var(type, name)).to_buffer());
                    info.uniq_definition.insert(string(name), xsprintf("%s=%s;\n", make_define_var(type, name), array_initializer));
                }
                else {
                    info.var_definition.insert(string(name), xsprintf("%s=%s;", make_define_var(type, name), array_initializer).to_buffer());
                }
            }
            else if(right_node) {
                node_compile(right_node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                if(type.mUniq) {
                    if(!type->mConstant) info.var_definition.insert(string(name), xsprintf("extern %s;\n", make_define_var(type, name)).to_buffer());
                    info.uniq_definition.insert(string(name), xsprintf("%s=%s;\n", make_define_var(type, name), come_value.c_value));
                }
                else {
                    info.var_definition.insert(string(name), xsprintf("%s=%s;", make_define_var(type, name), come_value.c_value).to_buffer());
                }
            }
            else {
                if(type.mUniq) {
                    if(!type->mConstant) info.var_definition.insert(string(name), xsprintf("extern %s;\n", make_define_var(type, name)).to_buffer());
                    info.uniq_definition.insert(string(name), xsprintf("%s;\n", make_define_var(type, name)));
                }
                else {
                    info.var_definition.insert(string(name), xsprintf("%s;", make_define_var(type, name)).to_buffer());
                }
            }
        }
        
        return true;
    }
};

class sExternalGlobalVariable extends sNodeBase
{
    new(list<tuple3<sType*%, string, string>*%>*% multiple_declare, sType* type, string name, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
        string self.name = string(name);
        
        list<tuple3<sType*%, string, string>*%>*% self.multiple_declare = clone multiple_declare;
    }
    
    string kind()
    {
        return string("sExternalGlobalVariable");
    }
    
    bool compile(sInfo* info)
    {
        sType* type = borrow self.type;
        string name = self.name;
        
        if(self.multiple_declare) {
            foreach(it, self.multiple_declare) {
                var type, name,initializer = it;
                add_variable_to_global_table(name, clone type, info);
                info.var_definition.insert(string(name), xsprintf("extern %s;", make_define_var(type, name)).to_buffer());
            }
        }
        else {
            add_variable_to_global_table(name, clone type, info);
            info.var_definition.insert(string(name), xsprintf("extern %s;", make_define_var(type, name)).to_buffer());
        }
        
        return true;
    }
};

sNode*% parse_global_variable(sInfo* info)
{
    /// backtrace ///
    bool multiple_declare = false;
    {
        char* p = info.p;
        int sline = info.sline;
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        if(xisalpha(*info->p) || *info->p == '_') {
            skip_spaces_and_lf();
            var type, name, err = parse_type();
            skip_spaces_and_lf();
            
            if(err) {
                skip_spaces_and_lf();
                var type,name = parse_variable_name_on_multiple_declare(type@base_type_name, true@first, info);
                skip_spaces_and_lf();
                
                if(*info->p == '=' && *(info->p+1) != '=' && *(info->p+1) != '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info->p == '{') {
                        skip_block();
                    }
                    else {
                        bool no_comma = info->no_comma;
                        
                        info->no_comma = true;
                        
                        sNode*% exp = expression();
                        
                        info->no_comma = no_comma;
                    }
                    
                }
                
                if(!is_type_name(name) && *info->p == ',') {
                    multiple_declare = true;
                }
            }
        }
        
        info.no_output_come_code =  no_output_come_code;
        info.p = p;
        info.sline = sline;
    }
    
    if(multiple_declare) {
        list<tuple3<sType*%, string, string>*%>*% multiple_declare = new list<tuple3<sType*%, string, string>*%>();
        
        skip_spaces_and_lf();
        var base_type, name, err = parse_type();
        skip_spaces_and_lf();
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        skip_spaces_and_lf();
        var type2, var_name = parse_variable_name_on_multiple_declare(base_type, true@first, info);
        skip_spaces_and_lf();
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf();
            
            char* head = info.p;
            
            if(*info->p == '{') {
                skip_block();
            }
            else {
                bool no_comma = info->no_comma;
                bool no_output_come_code = info->no_output_come_code;
                
                info->no_comma = true;
                info->no_output_come_code = true;
                
                sNode*% exp = expression();
                
                info->no_comma = no_comma;
                info->no_output_come_code = no_output_come_code;
            }
            
            char* tail = info.p;
            
            var buf = new buffer();
            
            buf.append(head, tail - head);
            
            string initializer = buf.to_string();
            
            multiple_declare.push_back(t(type2, var_name, initializer));
        }
        else {
            multiple_declare.push_back(t(type2, var_name, (string)null));
        }
        
        while(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            var type2, var_name = parse_variable_name_on_multiple_declare(base_type, false@first, info);
            
            if(*info->p == '=' && *(info->p+1) != '=')  {
                info->p++;
                skip_spaces_and_lf();
                
                char* head = info.p;
                
                if(*info->p == '{') {
                    skip_block();
                }
                else {
                    bool no_comma = info->no_comma;
                    bool no_output_come_code = info->no_output_come_code;
                    
                    info->no_comma = true;
                    info->no_output_come_code = true;
                    
                    sNode*% exp = expression();
                    
                    info->no_comma = no_comma;
                    info->no_output_come_code = no_output_come_code;
                }
                
                char* tail = info.p;
                
                var buf = new buffer();
                
                buf.append(head, tail - head);
                
                string initializer = buf.to_string();
                
                multiple_declare.push_back(t(type2, var_name, initializer));
            }
            else {
                multiple_declare.push_back(t(type2, var_name, (string)null));
            }
        }
        
        sNode*% right_node = null;
        string array_initializer = null;
        string var_name2 = string("");
        
        if(base_type->mExtern) {
            if(right_node) {
                err_msg(info, "invalid right value");
                exit(2);
            }
            return new sExternalGlobalVariable(multiple_declare, base_type, var_name2, info) implements sNode;
        }
        else {
            return new sGlobalVariable(multiple_declare, base_type, var_name2, right_node, array_initializer, info) implements sNode;
        }
    }
    else {
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        skip_spaces_and_lf();
        var result_type, var_name,err = parse_type(parse_variable_name:true);
        skip_spaces_and_lf();
        info.no_output_come_code = no_output_come_code;
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        sNode*% right_node = null;
        string array_initializer = null;
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info->p == '{') {
                buffer*% buf = new buffer();
                
                buf.append_char(*info->p);
                info->p++;
                
                bool squort = false;
                bool dquort = false;
                int nest = 1;
                while(1) {
                    if(*info->p == '\0') {
                        err_msg(info, "unexpected source end in array initiailizer");
                        exit(2);
                    }
                    else if(*info->p == '\\') {
                        buf.append_char(*info->p);
                        info->p++;
                        if(*info->p == '\n') {
                            info->sline++;
                        }
                        buf.append_char(*info->p);
                        info->p++;
                    }
                    else if(!squort && *info->p == '"') {
                        buf.append_char(*info->p);
                        info->p++;
                        dquort = !dquort;
                    }
                    else if(!dquort && *info->p == '\'') {
                        buf.append_char(*info->p);
                        info->p++;
                        squort = !squort;
                    }
                    else if(squort || dquort) {
                        if(*info->p == '\n') {
                            info->sline++;
                        }
                        buf.append_char(*info->p);
                        info->p++;
                    }
                    else if(*info->p == '{') {
                        nest++;
                        buf.append_char(*info->p);
                        info->p++;
                    }
                    else if(*info->p == '}') {
                        nest--;
                        buf.append_char(*info->p);
                        info->p++;
                        
                        if(nest == 0) {
                            skip_spaces_and_lf();
                            break;
                        }
                    }
                    else if(*info->p == '\n') {
                        info->sline++;
                        buf.append_char(*info->p);
                        info->p++;
                    }
                    else {
                        buf.append_char(*info->p);
                        info->p++;
                    }
                }
                array_initializer = buf.to_string();
            }
            else {
                skip_spaces_and_lf();
                right_node = expression();
                skip_spaces_and_lf();
            }
        }
        
        if(result_type->mExtern) {
            if(right_node) {
                err_msg(info, "invalid right value");
                exit(2);
            }
            return new sExternalGlobalVariable(null@multiple_declare, result_type, var_name, info) implements sNode;
        }
        else {
            return new sGlobalVariable(null@multiple_declare, result_type, var_name, right_node, array_initializer, info) implements sNode;
        }
    }
    
    return (sNode*%)null;
}
