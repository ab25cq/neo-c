#include "common.h"

#if defined(__linux__) || defined(__APPLE__) || defined(__ANDROID__)
#include <poll.h>
#endif

class sReturnNode extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sReturnNode");
    }
    
    bool compile(sInfo* info)
    {
        if(self.value) {
            sFun* come_fun = info.come_fun;
            
            add_come_code(info, info->come_fun->mSourceEnd.to_string());
            
            sType*% result_type = clone come_fun.mResultType;
            
            sType*% result_type2_ = solve_generics(result_type, info.generics_type, info);
            sType*% result_type2 = solve_method_generics(result_type2_, info);
            
            sType* result_type3;
            if(result_type2->mNoSolvedGenericsType) {
                result_type3 = borrow result_type2->mNoSolvedGenericsType;
            }
            else {
                result_type3 = borrow result_type2;
            }
            
            node_compile(self.value).elif {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            
            sType*% come_value_type_ = solve_generics(come_value.type, info.generics_type, info);
            sType*% come_value_type = solve_method_generics(come_value_type_, info);
            
            info->function_result_type = clone come_value.type;
            
            check_assign_type("result type", result_type2, come_value_type, come_value);
            
            if(gComeC) {
                add_come_code(info, "return %s;\n", come_value.c_value);
            }
            else if(info.come_fun.mName !== "main" && info.come_fun.mNoResultType && !existance_free_objects_on_return(come_fun->mBlock, info, come_value.var, false@top_block) && !existance_free_right_value_objects(info)) {
                if(!gComeC && !info.come_fun.mResultType.mNorecord) {
                    add_come_code(info, "neo_current_frame = fr.prev;\n");
                }
                add_come_code(info, "return %s;\n", come_value.c_value);
            }
            else {
                if(!info.come_fun.mDefineReturnVar) {
                    info.come_fun.mDefineReturnVar = true;
                    
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(result_type2, s"__result_obj__\{000}"));
                }
                
                if(!info.come_fun.mNoResultType) {
                    if(result_type2.mHeap) {
                        string type_name = make_type_name_string(result_type2);
                        add_come_code(info, s"__result_obj__\{000} = (%s)come_increment_ref_count(%s, \"%s\", %d, %d);\n", type_name, come_value.c_value, info->sname, info->sline, ++info.id);
                    }
                    else {
                        add_come_code(info, s"__result_obj__\{000} = %s;\n", come_value.c_value);
                    }
                }
                else {
                    add_come_code(info, s"__result_obj__\{000} = %s;\n", come_value.c_value);
                }
                add_last_code_to_source(info);
        
                free_objects_on_return(come_fun.mBlock, info, come_value.var, false@top_block, come_value.mLoadField);
                free_right_value_objects(info);

                if(info->block_level == 1) {
                    info->inhibits_output_code = true;
                    
                    if(info->match_it_var) {
                        foreach(it, info->match_it_var) {
                            free_object(it->mType, it->mCValueName, false@no_decrement, false@no_free, info);
                        }
                        info->match_it_var = null;
                    }
                }
                
               if(!gComeC && !info.come_fun.mResultType.mNorecord) {
                    add_come_code(info, "neo_current_frame = fr.prev;\n");
                }
                
                if(!gComeC && info.come_fun.mName === "main" && info.funcs[s"come_heap_final"]) {
                    free_objects(info->gv_table, null@ret_value, info);
                    add_come_code(info, xsprintf("come_heap_final();\n"));
                }
                
                if(result_type2.mHeap) {
                    free_object(result_type2, s"__result_obj__\{000}", false@no_decrement, true@no_free, info@info);
                }
                
                add_come_code(info, s"return __result_obj__\{000};\n");
            }
        }
        else {
            sFun* come_fun = info.come_fun;
            
            add_come_code(info, info->come_fun->mSourceEnd.to_string());
            
            add_last_code_to_source(info);
            free_objects_on_return(come_fun.mBlock, info, null, false@top_block);
            free_right_value_objects(info);
            
            if(info->block_level == 1) {
                info->inhibits_output_code = true;
                
                if(info->match_it_var) {
                    foreach(it, info->match_it_var) {
                        free_object(it->mType, it->mCValueName, false@no_decrement, false@no_free, info);
                    }
                    info->match_it_var = null;
                }
            }
            
            if(!gComeC && !info.come_fun.mResultType.mNorecord) {
                add_come_code(info, "neo_current_frame = fr.prev;\n");
            }
            
            if(!gComeC && info.come_fun.mName === "main") {
                free_objects(info->gv_table, null@ret_value, info);
                add_come_code(info, xsprintf("come_heap_final();\n"));
            }
            
            add_come_code(info, "return;\n");
        }
        
        info->last_statment_is_return = true;
        
        return true;
    }
}

sNode*% create_return_node(sNode*% value, sInfo* info=info)
{
    return new sReturnNode(value, info) implements sNode;
}

class sCSourceNode extends sNodeBase
{
    new(string contents, sInfo* info)
    {
        self.super();
        
        string self.contents = contents;
    }
    
    string kind()
    {
        return string("sCSourceNode");
    }
    
    bool compile(sInfo* info)
    {
        add_come_last_code(info, "%s", self.contents[1..-2]);
        
        return true;
    }
};

class sInlineAssembler extends sNodeBase
{
    new(string source, bool volatile_, sInfo* info)
    {
        self.super();
        
        string self.source = source;
        bool self.volatile_ = volatile_;
    }
    
    string kind()
    {
        return string("sInlineAssembler");
    }
    
    bool compile(sInfo* info)
    {
        string source = self.source;
        bool volatile_ = self.volatile_;
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = s" __asm \{volatile_ ? "volatile":""} \{source}";
        
        come_value.type = new sType(s"void");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sLineNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sLineNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%d", info->sline);
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sSNameNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sSNameNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("\"%s\"", info->sname);
        come_value.type = new sType(s"char*");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sFuncNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sFuncNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("\"%s\"", info->come_fun->mName);
        come_value.type = new sType(s"char*");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sCallerFuncNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sCallerFuncNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        if(info->caller_fun) {
            come_value.c_value = xsprintf("\"%s\"", info->caller_fun->mName);
        }
        else {
            come_value.c_value = xsprintf("\"\"");
        }
        come_value.type = new sType(s"char*");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sCallerLineNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%d", info->caller_line);
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
    
    string kind()
    {
        return string("sCallerLineNode");
    }
};

class sCallerSNameNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("\"%s\"", info->caller_sname);
        come_value.type = new sType(s"char*");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
    
    string kind()
    {
        return string("sCallerSNameNode");
    }
};

class sComeCallNode extends sNodeBase
{
    new(buffer*% come_block, int come_block_sline, sInfo* info) {
        self.super();
        
        buffer*% self.come_block = come_block;
        int self.come_block_sline = come_block_sline;
    }
    
    string kind()
    {
        return string("sComeCallNode");
    }
    
    bool terminated()
    {
        return true;
    }
    
    bool compile(sInfo* info)
    {
        int come_block_sline = self.come_block_sline;
        buffer*% come_block = self.come_block;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        static int thread_num = 0;
        thread_num++;
        
        string var_name = xsprintf("__thread_info%d", thread_num);
        
        sType*% type_ = clone info.types.at(s"pthread_t", null);
        
        if(type_ == null) {
            err_msg(info, "pthread_t is not defined");
            return true;
        }
        
        sNode*% var_node = store_var(var_name, null@multiple_assign, null@multiple_declare, type_@type, true@alloc, null@right_value, info);
        
        node_compile(var_node).elif {
            return false;
        }
        
        CVALUE*% thread_var_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value = new CVALUE();
        come_value.c_value = xsprintf("&%s", thread_var_value.c_value);
        come_value.type = thread_var_value.type;
        come_value.var = null;
        
        come_params.push_back(come_value);
        
        sNode*% null_node = create_null_node();
        
        node_compile(null_node).elif {
            return false;
        }
        
        come_value = get_value_from_stack(-1, info);
        
        sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
        come_value.type = solve_method_generics(type_, info);
        
        come_params.push_back(come_value);
        
        sNode*% current_stack_frame_node = new sCurrentNode(info) implements sNode;
        
        node_compile(current_stack_frame_node).elif {
            return false;
        }
        
        CVALUE*% current_stack_frame_value = get_value_from_stack(-1, info);
        
        string fun_name = xsprintf("__thread_fun%d", thread_num);
        
        buffer*% come_block2 = new buffer();
        
        string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
        
        come_block2.append_format("void* %s(%s* parent)\n", fun_name, class_name);
        
        come_block2.append_str(come_block.to_string());
                        
        sClass* current_stack_frame_struct = info.current_stack_frame_struct;
        info->current_stack_frame_struct = borrow info.classes[class_name];
        
        buffer*% source3 = info.source;
        char* p = info.p;
        char* head = info.head;
        int sline = info.sline;
        
        info.source = come_block2;
        if(info.p == null) {
            info.p = borrow info.source.buf;
        }
        info.p = borrow info.source.buf;
        info.head = borrow info.source.buf;
        info.sline = come_block_sline;
       
        sNode*% node = parse_function(info);
        
        bool in_method_block = info.in_method_block;
        info.in_method_block = true;
        node_compile(node).elif {
            return false;
        }
        info.in_method_block = in_method_block;
        
        info.source = source3;
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
        info.head = head;
        info.sline = sline;
        
        info->current_stack_frame_struct = current_stack_frame_struct;
        
        CVALUE*% fun_value = new CVALUE();
        
        fun_value.c_value = xsprintf("(((void* (*)(void*))(%s)))", fun_name);
        come_value.type = null;
        come_value.var = null;
        
        come_params.add(fun_value);
        
        come_params.add(current_stack_frame_value);
        
        buffer*% buf = new buffer();
        
        string fun_name = s"pthread_create";
        
        buf.append_str("(");
        buf.append_str(fun_name);
        buf.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            buf.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                buf.append_str(",");
            }
            
            j++;
        }
        buf.append_str(")");
        buf.append_str(", ");
        buf.append_str(thread_var_value.c_value);
        buf.append_str(")");
        
        CVALUE*% come_value = new CVALUE();
        come_value.c_value = buf.to_string();
        
        sType*% type = clone info.types.at(s"pthread_t", null);
        if(type == null) {
            err_msg(info, "pthread_t is not defined");
        }
        come_value.type = type;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};
        
class sComeJoinNode extends sNodeBase
{
    new(sNode*% node, sInfo* info) {
        self.super();
        
        sNode*% self.node = node;
    }
    
    string kind()
    {
        return string("sComeJoinNode");
    }
    
    bool terminated()
    {
        return false;
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        var buf = new buffer();
        buf.append_str("pthread_join(");
        buf.append_str(come_value.c_value);
        buf.append_str(", 0)");
        
        CVALUE*% come_value = new CVALUE();
        come_value.c_value = buf.to_string();
        come_value.type = new sType(s"void");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

#if defined(__linux__) || defined(__APPLE__) || defined(__ANDROID__)
class sComePollNode extends sNodeBase
{
    new(list<sNode*%>*% vars, list<sBlock*%>*% blocks, sBlock*% else_block, int time_out, sInfo* info) {
        self.super();
        
        list<sNode*%>*% self.vars = vars;
        list<sBlock*%>*% self.blocks = blocks;
        sBlock*% self.else_block = else_block;
        int self.time_out = time_out;
    }
    
    string kind()
    {
        return string("sComePollNode");
    }
    
    bool terminated()
    {
        return true;
    }
    
    bool compile(sInfo* info)
    {
        list<sNode*%>*% vars = self.vars;
        list<sBlock*%>*% blocks = self.blocks;
        int time_out = self.time_out;
        
        static int var_num = 0;
        var_num++;
        
        add_come_code(info, "struct pollfd fds%d[%d];\n", var_num, vars.length());
        
        int n = 0;
        foreach(it, self.vars) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            
            add_come_code(info, "fds%d[%d].fd = %s[0];\n", var_num, n, come_value.c_value);
            add_come_code(info, "fds%d[%d].events = %d;\n",var_num, n, POLLIN);
            n++;
        }
        
        add_come_code(info, "int poll_ret%d = poll(fds%d, %d, %d);\n", var_num, var_num, vars.length(), time_out);
        
        add_come_code(info, "if(poll_ret%d > 0) {\n", var_num);
        int n = 0;
        foreach(it, self.vars) {
            add_come_code(info, "if(fds%d[%d].revents & %d) {\n", var_num, n, POLLIN);
            transpile_block(blocks[n], null@param_types, null@param_names, info);
            add_come_code(info, "}\n");
            
            n++;
        }
        
        add_come_code(info, "}\n");
        add_come_code(info, "else {\n", var_num);
        
        transpile_block(self.else_block, null@param_types, null@param_names, info);
        
        add_come_code(info, "}\n");
        
        return true;
    }
};
#endif

class sVarArgTypeName extends sNodeBase
{
    new(sType* type, sInfo* info=info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sVarArgTypeName");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = make_type_name_string(type);
        come_value.type = type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sInnerAttribute extends sNodeBase
{
    new(string attr, sInfo* info=info)
    {
        self.super();
        
        string self.attr = attr;
    }
    
    string kind()
    {
        return string("sInnerAttribute");
    }
    
    bool compile(sInfo* info)
    {
        string attr = self.attr;
        
        add_come_code(info, "__attribute__%s", attr);
        
        return true;
    }
};

sNode*% expression_node(sInfo* info=info) version 1
{
    skip_spaces_and_lf();
    
    err_msg(info, "invalid character(1)(%d)(%c)", *info->p, *info->p);
    exit(3);
    return (sNode*%)null;
}

string parse_inner_attribute(sInfo* info=info)
{
    char* head = info.p;
    
    if(*info->p == '(') {
        bool in_dquort = false;
        int brace_num = 0;
        while(*info->p) {
            if(*info->p == '"') {
                info->p++;
                in_dquort = !in_dquort;
            }
            else if(in_dquort) {
                info->p++;
            }
            else if(*info->p == '(') {
                info->p++;
                brace_num++;
            }
            else if(*info->p == ')') {
                info->p++;
                brace_num--;
                if(brace_num == 0) {
                    break;
                }
            }
            else {
                info->p++;
            }
        }
    }
    skip_spaces_and_lf();
    
    char* tail = info.p;
    
    var buf = new buffer();
    buf.append(head, tail-head);

    return buf.to_string();
}

sNode*% expression_node(sInfo* info=info) version 98
{
    skip_spaces_and_lf();
    
    if(parsecmp("return", info)) {
        info->p += strlen("return");
        skip_spaces_and_lf();
        
        if(*info->p == ';') {
            return new sReturnNode(null, info) implements sNode;
        }
        else {
            sNode*% value = expression();
            value = post_position_operator(value, info);
            
            return new sReturnNode(value, info) implements sNode;
        }
    }
    else if(*info->p == '/' && *(info->p+1) == '*') {
        int nest = 0;
        while(1) {
            if(*info->p == '/' && *(info->p+1) == '*') {
                info->p +=2;
                nest++;
            }
            else if(*info->p == '*' && *(info->p+1) == '/') {
                info->p +=2;
                nest--;
                
                if(nest == 0) {
                    break;
                }
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
    else if(*info->p == '/' && *(info->p+1) == '/') {
        info->p+=2;
        
        while(1) {
            if(*info->p == '\n') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            else if(*info->p == '\0') {
                break;
            }
            else { 
                info->p++;
            }
        }
    }
    else if(!gComeC && *info->p == 't' && *(info->p+1) == '(') {
        info->p+=2;
        skip_spaces_and_lf();
        
        sNode*% node = parse_tuple(info, false@named_tuple_expression_flag);
        
        skip_spaces_and_lf();
        
        return node;
    }
    else if(!gComeC && *info->p == 'v' && *(info->p+1) == '[') {
        info->p+=2;
        skip_spaces_and_lf();
        
        sNode*% node = parse_vector(info);
        
        skip_spaces_and_lf();
        
        return node;
    }
    else if(!gComeC && (info->end - info->p) >= strlen("`it") && memcmp(info->p, "`it", strlen("`it")) == 0) 
    {
        sNode*% node = parse_iterator_it(info);
        
        return node;
    }
    else if((xisalpha(*info->p) || *info->p == '_' ) && !(((*info->p == 'L' || *info->p == 'l' || *info->p == 's' || *info->p == 'S' || *info->p == 'b' || *info->p == 'B' || *info->p == 'h' || *info->p == 'H' || *info->p == 'u' || *info->p == 'U') && *(info->p+1) == '"') || ((*info->p == 'L' || *info->p == 'u' || *info->p == 'U') && *(info->p+1) == '\'') || (*info->p == 'u' && *(info->p+1) == '8' && *(info->p+2) == '"'))) {
        char* head = info.p;
        int head_sline = info.sline;
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        
        string buf = backtrace_parse_word();
        bool is_type_name_ = is_type_name(buf);
        
        const char* is_special_word_array[25] = { "if", "while", "for", "switch", "return", "sizeof", "offsetof", "isheap", "ispointer", "__typeof__"
                                    , "dynamic_typeof", "typeof", "gc_inc", "gc_dec", "gc_dec_nofree", "case", "_Alignof"
                                    , "_Alignas", "__alignof__", "_Atomic", "borrow", "dupe", "clone", "__builtin_offsetof", "_Generic" }
                                    
        bool is_special_word = is_special_word_array.contained(25, buf);
        bool is_portable_symbol = is_portable_libc_symbol(buf);
        
        bool define_function_pointer_flag = false;
        if(!is_special_word && *info->p == '(' && *(info->p+1) != '*')
        {
            backtrace_parse_type();
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
                
                if(*info->p == '*') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    define_function_pointer_flag = true;
                }
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        
        bool lambda_flag = false;
        if(!is_special_word && is_type_name_)
        {
            info.p = head;
            info.sline = head_sline;
            
            backtrace_parse_type();
            var word2 = backtrace_parse_word();
            
            if(word2 === "lambda") {
                lambda_flag = true;
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        
        bool fun_name_with_type_name = false;
        if(!is_special_word)
        {
            info.p = head;
            info.sline = head_sline;
            
            bool no_output_come_code = info.no_output_come_code;
            info.no_output_come_code = true;
            
            bool flag = false
            while(xisalpha(*info.p) || *info.p == '_') {
                flag = true;
                var word2 = parse_word();
            }
            while(*info->p == '*' || *info->p == '%') {
                info->p++;
                skip_spaces_and_lf();
            }
            while(*info->p == '[' && *(info->p+1) == ']') {
                info->p+=2;
                skip_spaces_and_lf();
            }
            if(flag && *info->p == ':' && *(info->p+1) == ':') {
                info->p += 2;
                skip_spaces_and_lf();
                if(xisalpha(*info->p) || *info.p == '_') {
                    fun_name_with_type_name = true;
                }
            }
            
            info.no_output_come_code = no_output_come_code;
            
            info.p = head;
            info.sline = head_sline;
        }
        
        bool call_method_generics_fun_call = false;
        if(!is_special_word)
        {
            info.p = head;
            info.sline = head_sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                buf = parse_word();
            }
            
            if(!is_type_name(buf) && info.lv_table.mVars[string(buf)] == null && info.gv_table.mVars[string(buf)] == null && *info->p == '<') {
                int nest = 0;
                while(*info->p) {
                    if(*info->p == '<') {
                        info->p++;
                        nest++;
                    }
                    else if(*info->p == '>') {
                        info->p++;
                        
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info->p == '\n' || *info->p == ';') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                
                if(*info->p == '(') {
                    call_method_generics_fun_call = true;
                }
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        
        bool inline_asm = false;
        if(!is_special_word)
        {
            info.p = head;
            info.sline = head_sline;
            
            buf = parse_word();
            
            if(buf === "asm" || buf === "__asm" || buf === "__asm__") {
                if(*info->p == '(') {
                    inline_asm = true;
                }
                else if(xisalpha(*info->p) || *info->p == '_') {
                    buf = parse_word();
                    if(*info->p == '(') {
                        inline_asm = true;
                    }
                }
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        
        skip_spaces_and_lf();
        buf = parse_word();
        skip_spaces_and_lf();
        
        if(lambda_flag) {
            info.p = head;
            info.sline = head_sline;
            
            sNode*% node =  parse_function(info);
            info.sline_real = sline_real;
            return node;
        }
        else if((buf === "_Static_assert" || buf === "static_assert") && *info->p == '(') 
        {
            expected_next_character('(');
            
            bool no_comma = info->no_comma;
            info->no_comma = true;
            sNode*% exp = expression();
            info->no_comma = no_comma;
            
            expected_next_character(',');
            sNode*% exp2 = expression();
            expected_next_character(')');
            
            return static_assert_node(exp, exp2);
        }
        else if(buf === "__attribute__" && *info->p == '(') 
        {
            string attr = parse_inner_attribute();
            return new sInnerAttribute(attr, info) implements sNode;
        }
        else if(buf === "__c__" && *info->p == '{') 
        {
            string block_text = skip_block();
            string contents = block_text;
            return new sCSourceNode(contents, info) implements sNode;
        }
        else if(buf === "extern") {
            return parse_function(info);
        }
        else if(!gComeC && (buf === "string" || buf === "wstring") && *info->p == '(') {
            sNode*% node = parse_function_call(buf, info);
            info.sline_real = sline_real;
            return node;
        }
        else if(is_special_word) {
            sNode*% node = string_node(buf, head, head_sline, info);
            info.sline_real = sline_real;
            return node;
        }
        else if(gComePthread && buf === "come") {
            buffer*% come_block = null;
            int come_block_sline = 0;
            
            if(*info->p == '{') {
                char* head = info.p;
                come_block_sline = info.sline;
                skip_block(info);
                char* tail = info.p;
                come_block = new buffer();
                int len = tail - head;
                char*% mem = new char[len+1];
                memcpy(mem, head, len);
                mem[len] = '\0';
                come_block.append_str(mem);
                come_block.append_str("\n");
            }
            else {
                char* head = info.p;
                come_block_sline = info.sline;
                bool no_output_come_code = info.no_output_come_code;
                info.no_output_come_code = true;
                expression(info);
                info.no_output_come_code = no_output_come_code;
                char* tail = info.p;
                come_block = new buffer();
                int len = tail - head;
                char*% mem = new char[len+1];
                memcpy(mem, head, len);
                mem[len] = '\0';
                come_block.append_str("{");
                come_block.append_str(mem);
                come_block.append_str("; }");
                come_block.append_str("return (void*)0;\n}");
                come_block.append_str("\n");
            }
            
            sNode*% node = new sComeCallNode(come_block, come_block_sline, info) implements sNode;
            info.sline_real = sline_real;
            return node;
        }
        else if(gComePthread && buf === "come_join" && *info->p == '(') {
            expected_next_character('(', info);
            sNode*% node = expression();
            expected_next_character(')', info);
            info.sline_real = sline_real;
            return new sComeJoinNode(node, info) implements sNode;
        }
#if defined(__linux__) || defined(__APPLE__) || defined(__ANDROID__)
        else if(gComePthread && buf === "come_poll" && (*info->p == '(' || *info->p == '{')) {
            int time_out = 1;
            if(*info->p == '(') {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out = time_out * 10 + (*info->p - '0');
                    info->p++;
                    skip_spaces_and_lf();
                }
                expected_next_character(')');
            }
            expected_next_character('{');
            
            list<sNode*%>*% vars = new list<sNode*%>();
            list<sBlock*%>*% blocks = new list<sBlock*%>();
            sBlock*% else_block = new sBlock();
            while(1) {
                if(((info->end - info->p) >= strlen("else")) && memcmp(info->p, "else", strlen("else")) == 0) {
                    info->p += strlen("else");
                    skip_spaces_and_lf();
                    else_block = parse_block();
                    if(*info->p == '}') {
                        break;
                    }
                }
                else {
                    sNode*% var_name = expression();
                    sBlock*% block = parse_block();
                    vars.add(var_name);
                    blocks.add(block);
                    if(*info->p == '}') {
                        break;
                    }
                }
            }
            
            expected_next_character('}');
            info.sline_real = sline_real;
            return new sComePollNode(vars, blocks, else_block, time_out, info) implements sNode;
        }
#endif
        else if(buf === "__func__" || buf === "__FUNCTION__") {
            info.sline_real = sline_real;
            return new sFuncNode(info) implements sNode;
        }
        else if(buf === "__line__" || buf === "__LINE__") {
            info.sline_real = sline_real;
            return new sLineNode(info) implements sNode;
        }
        else if(buf === "__sname__") {
            info.sline_real = sline_real;
            return new sSNameNode(info) implements sNode;
        }
        else if(buf === "__caller_func__") {
            info.sline_real = sline_real;
            return new sCallerFuncNode(info) implements sNode;
        }
        else if(buf === "__caller_line__") {
            info.sline_real = sline_real;
            return new sCallerLineNode(info) implements sNode;
        }
        else if(buf === "__caller_sname__") {
            info.sline_real = sline_real;
            return new sCallerSNameNode(info) implements sNode;
        }
        else if(info->va_arg && is_type_name(buf)) {
            info.p = head;
            info.sline = head_sline;
            var type, name, err = parse_type(parse_variable_name:false, parse_multiple_type:false);
            info.sline_real = sline_real;
            return new sVarArgTypeName(type) implements sNode;
        }
        else if(buf === "sizeof" || buf === "_Alignof" || buf === "_Alignas" || buf === "__alignof__" || buf === "offsetof" || buf === "__builtin_offsetof" || buf === "_Generic") {
            sNode*% node = string_node(buf, head, head_sline, info);
            info.sline_real = sline_real;
            return node;
        }
        else if(inline_asm) {
            bool volatile_ = false;
            var buf2 = new buffer();
            
            if(*info->p != '(') {
                string word = parse_word();
                if(word === "volatile") {
                    volatile_ = true;
                }
            }
            
            expected_next_character('(');
            buf2.append_str("(\n");
            
            bool dquort = false;
            while(true) {
                if(dquort) {
                    if(*info->p == '\\') {
                        buf2.append_char(*info->p);
                        info->p++;
                        if(*info->p == '\0') {
                            err_msg(info, "invalid source end");
                            return null;
                        }
                        buf2.append_char(*info->p);
                        info->p++;
                    }
                    else if(*info->p == '"') {
                        buf2.append_char(*info->p);
                        info->p++;
                        buf2.append_char('\n');
                        skip_spaces_and_lf();
                        dquort = false;
                    }
                    else {
                        buf2.append_char(*info->p);
                        info->p++;
                    }
                }
                else if(*info->p == '"') {
                    dquort = true;
                    for(int i=0; i<info->block_level+1; i++) {
                        buf2.append_str("    ");
                    }
                    buf2.append_char(*info->p);
                    info->p++;
                }
                else if(*info->p == '(') {
                    buf2.append_char('(');
                    info->p++;
                    sNode*% exp = expression();
                    node_compile(exp).elif {
                        return null;
                    }
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    buf2.append_str(come_value.c_value);
                    expected_next_character(')');
                    buf2.append_char(')');
                }
                else if(*info->p == ')') {
                    for(int i=0; i<info->block_level; i++) {
                        buf2.append_str("    ");
                    }
                    buf2.append_char(')');
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else if(*info->p == '\n') {
                    info->sline++;
                    buf2.append_char(*info->p);
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == ':') {
                    for(int i=0; i<info->block_level+1; i++) {
                        buf2.append_str("    ");
                    }
                    buf2.append_char(*info->p);
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == ',') {
                    for(int i=0; i<info->block_level+1; i++) {
                        buf2.append_str("    ");
                    }
                    buf2.append_char(*info->p);
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == '\0') {
                    err_msg(info, "invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    err_msg(info, "unexpected character(%c)", *info->p);
                    exit(2);
                }
            }
            skip_spaces_and_lf();
            
            info.sline_real = sline_real;
            return new sInlineAssembler(buf2.to_string(), volatile_, info) implements sNode;
        }
        else if(fun_name_with_type_name) {
            info.p = head;
            info.sline = head_sline;
            var type,name,err = parse_type();
            expected_next_character(':');
            expected_next_character(':');
            string base_fun_name = parse_word();
            string fun_name = create_method_name(type, false@nopointer_name, base_fun_name, info);
            sNode*% node = parse_function_call(fun_name, info);
            info.sline_real = sline_real;
            return node;
        }
        else if(*info->p == ':' && *(info->p+1) == ':') {
            info->p+=2;
            skip_spaces_and_lf();
            buffer*% fun_name = new buffer();
            fun_name.append_str(buf);
            fun_name.append_str("_");
            string buf2 = parse_word();
            fun_name.append_str(buf2);
            sNode*% node = parse_function_call(fun_name.to_string(), info);
            info.sline_real = sline_real;
            return node;
        }
        else if(call_method_generics_fun_call) {
            sNode*% node = parse_function_call(buf, info);
            info.sline_real = sline_real;
            return node;
        }
        else if(!is_special_word && *info->p == '(' && !is_type_name_ || (is_portable_symbol && *info->p == '('))
        {
            sNode*% node = parse_function_call(buf, info);
            info.sline_real = sline_real;
            return node;
        }
        else {
            sNode*% node = string_node(buf, head, head_sline, info);
            info.sline_real = sline_real;
            return node;
        }
    }
    else {
        return inherit(info);
    }
    
    err_msg(info, "unexpected operator(%c)", *info->p);
    exit(2);
    
    return (sNode*%)null;
}
