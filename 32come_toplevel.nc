#include "common.h"

sType*%@type, string@var_name, bool@err parse_come_type(sInfo* info=info, bool parse_type_only=false)
{
    string var_name;
    if(parse_type_only) {
    }
    else {
        var_name = parse_word();
        expected_next_character(':');
    }
    
    var type_name = parse_word();
    
    sType*% type = type_name.case {
        (Value === "i32") { new sType(s"int") }
        (Value === "i64") { new sType(s"long") }
        (Value === "i16") { new sType(s"short") }
        (Value === "i8") { new sType(s"char") }
        (Value === "i1") { new sType(s"bool") }
        (Value === "u32") { new sType(s"int", unsigned_:true) }
        (Value === "u64") { new sType(s"long", unsigned_:true) }
        (Value === "u16") { new sType(s"short", unsigned_:true) }
        (Value === "u8") { new sType(s"char" unsigned_:true) }
        (Value === "u1") { new sType(s"bool" unsigned_:true) }
        else { 
            new sType(type_name, heap:true, pointer_num_:1) 
        }
    }
    
    return t(type, var_name, false);
}

list<sType*%>*%@param_types, list<string>*%@param_names, list<string>*%@param_default_parametors, bool@var_args, bool@err 
parse_come_params(sInfo* info=info)
{
    var param_types = new list<sType*%>();
    var param_names = new list<string>();
    var param_default_parametors = new list<string>();
    bool var_args = false;
    
    expected_next_character('(');
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        
        skip_spaces_and_lf();
        
        var param_type, param_name, err = parse_come_type();
        
        if(err) {
            err_msg(info, "invalid type");
            exit(2);
        }
        
        var param_type2 = solve_generics(param_type, info->generics_type, info);
        
        param_types.push_back(clone param_type2);
        param_names.push_back(clone param_name);
        
        if(*info->p == '=' && *(info->p+1) != '=' && *(info->p+1) != '>') {
            info->p++;
            skip_spaces_and_lf();
            
            
            char* p = info->p;
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            
            sNode*% node = expression();
            
            info.no_comma = no_comma;
            
            char* p2 = info->p;
            
            char buf[p2 -p +1];
            memcpy(buf, p, p2 -p);
            buf[p2-p] = '\0';
            
            param_default_parametors.push_back(string(buf));
        }
        else {
            param_default_parametors.push_back(null);
        }
        
        skip_spaces_and_lf();
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            if(parsecmp("...")) {
                info->p += strlen("...");
                skip_spaces_and_lf();
                var_args = true;
                
                expected_next_character(')');
                break;
            }
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
    }
    
    return t(param_types, param_names, param_default_parametors, var_args, false);
}

sBlock*% parse_come_block(sInfo* info=info, bool in_function=false)
{
    var result = new sBlock();
    
    int sline_top = info.sline_top;
    info.sline_top = info.sline;
    
    int block_level = info->block_level;
    info->block_level++;
    
    if(*info->p == '{') {
        info->p++;
        skip_spaces_and_lf();
        while(true) {
            skip_spaces_and_lf();
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            skip_spaces_and_lf();
            
            sNode*% node = statment();
            
            info->sname = node.sname();
            info->sline = node.sline();
            
            if(node == null) {
                err_msg(info, "NULL expression");
                exit(1);
            }
            
            skip_spaces_and_lf();
            
            bool omit_semicolon = true;
            if(node.terminated()) {
                omit_semicolon = false;
                skip_spaces_and_lf();
            }
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf();
                
                omit_semicolon = false;
            }
            skip_spaces_and_lf();
            
            if(*info->p == '}') {
                result.mOmitSemicolon = omit_semicolon;
                if(omit_semicolon && in_function) {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    sNode*% node2 = create_return_node(node);
                    
                    result.mNodes.push_back(node2);
                    
                    break;
                }
                else {
                    info->p++;
                    skip_spaces_and_lf();
                    result.mNodes.push_back(node);
                    break;
                }
            }
            
            result.mNodes.push_back(node);
        }
    }
    
    info->block_level = block_level;
    
    return result;
}

sNode*% parse_come_function(sInfo* info=info)
{
    string fun_name = parse_word();
    
    
    var param_types, param_names, param_default_parametors, var_args, err = parse_come_params();
    
    var result_type2 = new sType(s"void");
    
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf();
        
        var type, var_name, err = parse_come_type(parse_type_only:true);
        
        result_type2 = type;
    }
    
    var block = parse_come_block(in_function:true);
    
    var fun = new sFun(string(fun_name), result_type2
                        , param_types, param_names
                        , param_default_parametors
                        , false@external, var_args, block@block
                        , false@static_, info, false@inline_
                        , false@uniq_);
                
    info.funcs.insert(string(fun_name), fun);
                
    return create_fun_node(fun);
}

sNode*% parse_come_gvar(sInfo* info=info)
{
    return create_nothing_node();
}

sNode*% parse_come_gval(sInfo* info=info)
{
    return create_nothing_node();
}
