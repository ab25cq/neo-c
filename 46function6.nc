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
    
    int sline_top = info.sline_top;
    info.sline_top = info.sline;
    
    int block_level = info->block_level;
    info->block_level++;
    
    if(*info->p.p == '{') {
        info->p.p++;
        skip_spaces_and_lf();
        while(true) {
            skip_spaces_and_lf();
            if(*info->p.p == '}') {
                info->p.p++;
                skip_spaces_and_lf();
                break;
            }
            while(*info->p.p == ';') {
                info->p.p++;
                skip_spaces_and_lf();
            }
            
            skip_spaces_and_lf();
            
            char* p = info.p.p;
            int sline = info.sline;
            string sname = string(info.sname);
            
            
            if(*info->p.p == '{') {
                info->sline_top = sline;
            }
            
            sNode*% node = null;
            if(in_function) {
                sNode*% nested_fun = null;
                char* head = info->p.p;
                int head_sline = info->sline;
                string head_sname = string(info->sname);
                
                if(xisalpha(*info->p.p) || *info->p.p == '_') {
                    char* p0 = info->p.p;
                    int sline0 = info->sline;
                    string word = parse_word();
                    bool is_type = is_type_name(word);
                    info->p.p = p0;
                    info->sline = sline0;
                    
                    if(is_type) {
                        bool no_output_come_code = info.no_output_come_code;
                        info.no_output_come_code = true;
                        
                        var type, name, err = parse_type(parse_variable_name:true);
                        skip_spaces_and_lf();
                        
                        if(err && *info->p.p == '(') {
                            skip_paren(info);
                            skip_spaces_and_lf();
                            var asm_name, fun_attr = parse_function_attribute();
                            skip_spaces_and_lf();
                            
                            if(*info->p.p == '{') {
                                string block = skip_block(info);
                                char* tail = info->p.p;
                                
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
                    info->p.p = head;
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
            while(*info->p.p == ';') {
                info->p.p++;
                skip_spaces_and_lf();
                
                omit_semicolon = false;
            }
            skip_spaces_and_lf();
            
            if(*info->p.p == '}') {
                result.mOmitSemicolon = omit_semicolon;
                if(omit_semicolon && in_function) {
                    info->p.p++;
                    skip_spaces_and_lf();
                    
                    sNode*% node2 = create_return_node(node);
                    
                    result.mNodes.push_back(node2);
                    
                    break;
                }
                else {
                    result.mNodes.push_back(node);
                    info->p.p++;
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
        
        if(*info->p.p == ';') {
            info->p.p++;
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
            while(*info->p.p == ';') {
                info->p.p++;
                skip_spaces_and_lf();
                
                omit_semicolon = false;
            }
            skip_spaces_and_lf();
            result.mOmitSemicolon = omit_semicolon;
            
            result.mNodes.push_back(node);
        }
    }
    
    if(return_self_at_last) {
        char* p = info.p.p;
        char* head = info.head;
        buffer*% source2 = info.source;
        
        info.source = string("return self;").to_buffer();
        if(info.p == null) {
            info.p = span borrow info.source;
        }
        info.p.memory = borrow info.source.buf;
        info.p.len = info.source.len+2;
        info.p.p = borrow info.source.buf;
        info.head = borrow info.source.buf;
        
        sNode*% node = expression();
        
        if(node == null) {
            err_msg(info, "Invalid expression");
            return null;
        }
        
        result.mNodes.push_back(node);
        
        info.source = source2;
        if(info.p == null) {
            info.p = span borrow info.source;
        }
        info.p.memory = borrow info.source.buf;
        info.p.len = info.source.len+2;
        info.p.p = borrow info.source.buf;
        info.p.p = p;
        info.head = borrow head;
    }
    
    info->block_level = block_level;
    
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
        || buf === "__aligned_largest"
        || buf === "__aligned_u64"
        || buf === "__aligned"
        || buf === "__section"
        || buf === "__visibility"
        || buf === "__alias"
        || buf === "__format_arg"
        || buf === "__format"
        || buf === "__printf"
        || buf === "__scanf"
        || buf === "__assume_aligned"
        || buf === "__cleanup"
        || buf === "__optimize"
        || buf === "__target"
        || buf === "__error"
        || buf === "__warning"
        || buf === "__no_sanitize_address"
        || buf === "__no_sanitize_thread"
        || buf === "__no_sanitize_coverage"
        || buf === "__no_sanitize"
        || buf === "__constructor"
        || buf === "__destructor"
        || buf === "__packed"
        || buf === "__used"
        || buf === "__unused"
        || buf === "__maybe_unused"
        || buf === "__always_unused"
        || buf === "__deprecated"
        || buf === "__cold"
        || buf === "__hot"
        || buf === "__weak_ref"
        || buf === "__weak"
        || buf === "__noinline"
        || buf === "__always_inline"
        || buf === "__flatten"
        || buf === "__leaf"
        || buf === "__naked"
        || buf === "__noclone"
        || buf === "__no_profile"
        || buf === "__no_instrument_function"
        || buf === "__warn_unused_result"
        || buf === "__must_check"
        || buf === "__returns_nonnull"
        || buf === "__malloc"
        || buf === "__init"
        || buf === "__initdata"
        || buf === "__initconst"
        || buf === "__init_rodata"
        || buf === "__exit"
        || buf === "__exitdata"
        || buf === "__exitconst"
        || buf === "__ref"
        || buf === "__meminit"
        || buf === "__meminitdata"
        || buf === "__meminitconst"
        || buf === "__ro_after_init"
        || buf === "__read_mostly"
        || buf === "__latent_entropy"
        || buf === "__percpu";
}
