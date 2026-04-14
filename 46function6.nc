#include "common.h"

class sSemicolonNode extends sNodeBase
{
    new(sInfo* info=info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sSemicolonNode");
    }
    
    bool compile(sInfo* info)
    {
        add_come_code(info, ";\n");
        
        return true;
    }
};

class sRawCodeNode extends sNodeBase
{
    new(string code, sInfo* info=info)
    {
        self.super();
        string self.mCode = string(code);
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sRawCodeNode");
    }
    
    bool compile(sInfo* info)
    {
        add_come_code(info, "%s\n", self.mCode);
        
        return true;
    }
};


sNode*% create_fun_node(sFun*% fun, sInfo* info=info)
{
    return new sFunNode(fun, info) implements sNode;
}

sBlock*% parse_block(sInfo* info=info, bool return_self_at_last=false, bool in_function=false)
{
    var result = new sBlock();
    
    sVarTable* old_table = info->lv_table;
    sVarTable*% parse_table = new sVarTable(false@global, old_table);
    info->lv_table = borrow parse_table;
    
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
            
            char* p = info.p;
            int sline = info.sline;
            string sname = string(info.sname);
            
            
            if(*info->p == '{') {
                info->sline_top = sline;
            }
            
            sNode*% node = null;
            if(in_function) {
                sNode*% nested_fun = null;
                char* head = info->p;
                int head_sline = info->sline;
                string head_sname = string(info->sname);
                
                if(xisalpha(*info->p) || *info->p == '_') {
                    char* p0 = info->p;
                    int sline0 = info->sline;
                    string word = parse_word();
                    bool is_type = is_type_name(word);
                    info->p = p0;
                    info->sline = sline0;
                    
                    if(is_type) {
                        bool no_output_come_code = info.no_output_come_code;
                        info.no_output_come_code = true;
                        
                        var type, name, err = parse_type(parse_variable_name:true);
                        skip_spaces_and_lf();
                        
                        if(err && *info->p == '(') {
                            skip_paren(info);
                            skip_spaces_and_lf();
                            var asm_name, fun_attr = parse_function_attribute();
                            skip_spaces_and_lf();
                            
                            if(*info->p == '{') {
                                string block = skip_block(info);
                                char* tail = info->p;
                                
                                buffer*% buf = new buffer();
                                buf.append(head, tail - head);
                                
                                nested_fun = new sRawCodeNode(buf.to_string(), info) implements sNode;
                            }
                        }
                        
                        info.no_output_come_code = no_output_come_code;
                    }
                }
                
                if(nested_fun) {
                    node = nested_fun;
                }
                else {
                    info->p = head;
                    info->sline = head_sline;
                    info->sname = string(head_sname);
                }
            }
            
            if(node == null) {
                node = statment();
            }
            
            info->sname = node.sname();
            info->sline = node.sline();
            
            if(node == null) {
                err_msg(info, "Invalid expression");
                return null;
            }
            
            skip_spaces_and_lf();
            
            if(node.terminated()) {
                skip_spaces_and_lf();
            }
            
            
            bool omit_semicolon = true;
            if(node.terminated()) {
                omit_semicolon = false;
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
                    result.mNodes.push_back(node);
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
            }
            
            result.mNodes.push_back(node);
        }
    }
    else {
        info.sline_block = info.sline;
        
        skip_spaces_and_lf();
        sNode*% node;
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
            
            
            node = new sSemicolonNode() implements sNode;
            
            result.mNodes.push_back(node);
        }
        else {
            node = expression();
            skip_spaces_and_lf();
            
            if(node == null) {
                err_msg(info, "Invalid expression");
                return null;
            }
            
            skip_spaces_and_lf();
            
            if(node.terminated()) {
                skip_spaces_and_lf();
            }
            
            bool omit_semicolon = true;
            if(node.terminated()) {
                omit_semicolon = false;
            }
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf();
                
                omit_semicolon = false;
            }
            skip_spaces_and_lf();
            result.mOmitSemicolon = omit_semicolon;
            
            result.mNodes.push_back(node);
        }
    }
    
    if(return_self_at_last) {
        char* p = info.p;
        char* head = info.head;
        buffer*% source2 = info.source;
        
        info.source = string("return self;").to_buffer();
        if(info.p == null) {
            info.p = borrow info.source.buf;
        }
        info.p = borrow info.source.buf;
        info.head = borrow info.source.buf;
        
        sNode*% node = expression();
        
        if(node == null) {
            err_msg(info, "Invalid expression");
            return null;
        }
        
        result.mNodes.push_back(node);
        
        info.source = source2;
        if(info.p == null) {
            info.p = borrow info.source.buf;
        }
        info.p = borrow info.source.buf;
        info.p = p;
        info.head = borrow head;
    }
    
    info->block_level = block_level;
    info->lv_table = old_table;
    
    return result;
}


bool is_function_attribute_word(char* buf)
{
    return buf === "_Noreturn"
        || buf === "_Nonnull"
        || buf === "__noreturn"
        || buf === "__asm__"
        || buf === "__attribute_pure__"
        || buf === "__malloc_like"
        || buf === "__result_use_check"
        || buf === "__alloc_size2"
        || buf === "__alloc_size"
        || buf === "__nonnull"
        || buf === "__alloc_align"
        || buf === "__attribute_malloc__"
        || buf === "__attr_dealloc_fclose"
        || buf === "__wur"
        || buf === "__pure2"
        || buf === "__pure"
        || buf === "__THROW"
        || buf === "__asm"
        || match_common_attribute_keyword_len(buf) > 0;
}
