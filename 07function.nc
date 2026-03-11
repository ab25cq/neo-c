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

class sLambdaNode extends sNodeBase
{
    new(sFun* fun, sInfo* info)
    {
        self.super();
        
        sFun* self.mFun = fun;
    }
    
    string kind()
    {
        return string("sLambdaNode");
    }
    
    bool compile(sInfo* info)
    {
        sFun* come_fun = info.come_fun;
        info.come_fun = self.mFun;
        
        int right_value_max = info->right_value_max;
        info->right_value_max = 0;
        
        int right_value_num = info->right_value_num;
        info->right_value_num = 0;
        
        int block_level = info->block_level;
        info->block_level = 0;
        
        int max_conditional = info->max_conditional;
        info->max_conditional = 0;
        
        if(!gComeC && !info.come_fun.mResultType.mNorecord) {
            add_come_code_at_function_head(info, s"struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = \"\{info.come_fun.mName}\"; neo_current_frame = &fr;\n"); 
        }
        
        if(self.mFun.mBlock) {
            transpile_block(self.mFun.mBlock, self.mFun.mParamTypes, self.mFun.mParamNames, info);
        }
        if(!gComeC && !info.inhibits_output_code2 && !info.come_fun.mResultType.mNorecord) {
            add_come_code_no_indent(info, "neo_current_frame = fr.prev;\n");
        }
        
        info->block_level = block_level;
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.mFun.mName);
        come_value.type = clone self.mFun.mLambdaType;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        info.come_fun = come_fun;
        
        info->right_value_max = right_value_max;
        info->right_value_num = right_value_num;
        info->max_conditional = max_conditional;
        
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

int transpile_block(sBlock* block, list<sType*%>* param_types, list<string>* param_names, sInfo* info, bool no_var_table=false, bool loop_block=false, bool if_result_value=false, bool iter_=false, bool loop_result_type=false)
{
    bool inhibits_output_code = info->inhibits_output_code;
    info->inhibits_output_code = false;
    
    bool omit_semicolon = block.mOmitSemicolon;
    
    sVarTable* old_table = info->lv_table;
    if(!no_var_table) {
        block->mVarTable = new sVarTable(false@global, old_table);
        info->lv_table = borrow block->mVarTable;
    }

    sVarTable* current_loop_vtable = info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable = borrow block->mVarTable;
    }
    
    if(param_types && param_names) {
        int i;
        foreach(name, param_names) {
            sType*% type = param_types[i];
            type->mAllocaValue = false;
            add_variable_to_table(name, clone type, info, true@function_param);
            i++;
        }
    }
    
    int block_level = info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    
    if(block->mNodes.length() == 0) {
    }
    else {
        int i;
        foreach(node, block->mNodes) {
            int num_conditional = info->num_conditional;
            if(info->block_level == 1) info->num_conditional = 0;
            
            var right_value_objects = info.right_value_objects;
            info.right_value_objects = new list<sRightValueObject*%>();
            
            info.module.mLastCode = null;
            info.module.mLastCode2 = null;
            
            int stack_num_before = info->stack.length();
            info.writing_source_file_position = true;
            
            int sline = info.sline;
            string sname = string(info.sname);
            
            info->last_statment_is_return = false;
            
            info.sline = node.sline();
            info.sname = node.sname();
            
            node_compile(node).elif {
                if(gComeDebug) {
                    puts(node.kind());
                    printf("%s %d: compiling is failed(5)\n", info->sname, info->sline);
                }
                return false;
            }
            
            info.sline = sline;
            info.sname = string(sname);
    
            /// return if result value
            if(omit_semicolon && if_result_value && i == block.mNodes.length()-1) {
                //add_last_code_to_source(info);
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                sType*% right_type__ = clone come_value.type;
                var right_type_ = solve_generics(right_type__, info->generics_type, info);
                var right_type2 = solve_method_generics(right_type_, info);
                
                if(!info.if_result_value_name_defined) {
                    info.if_result_value_name_defined = true;
                    string var_name = info.if_result_value_name;
                    sType*% result_type = clone come_value.type;
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(result_type, var_name));
                    if(info.come_fun.mName !== "memset" && info.funcs[s"memset"]) {
                        add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_name, var_name);
                    }
                    add_variable_to_table(var_name, result_type, info, false@function_param, to_function_table:true);
                    
                    info.if_result_type = clone result_type;
                }
                else {
                    sType*% result_type = clone come_value.type;
                    check_assign_type("invalid if result type", info.if_result_type, result_type, come_value, info);
                }
                if(come_value.type.mHeap) {
                    sType*% left_type = clone right_type2
                    std_move(left_type, right_type2, come_value);
                }
                add_come_code(info, s"\{info.if_result_value_name} = %s;\n", come_value.c_value);
            }
            else if(iter_ && i == block.mNodes.length()-1) {
            }
            else if(omit_semicolon && loop_result_type && i == block.mNodes.length()-1) {
                //add_last_code_to_source(info);
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                sType*% right_type__ = clone come_value.type;
                var right_type_ = solve_generics(right_type__, info->generics_type, info);
                var right_type2 = solve_method_generics(right_type_, info);
                
                if(!info.loop_result_value_name_defined) {
                    info.loop_result_value_name_defined = true;
                    string var_name = info.loop_result_value_name;
                    sType*% result_type = clone come_value.type;
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(result_type, var_name));
                    if(info.come_fun.mName !== "memset" && info.funcs[s"memset"]) {
                        add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_name, var_name);
                    }
                    add_variable_to_table(var_name, result_type, info, false@function_param, to_function_table:true);
                    
                    info.loop_result_type = clone result_type;
                }
                else {
                    sType*% result_type = clone come_value.type;
                    check_assign_type("invalid loop result type", info.loop_result_type, result_type, come_value, info);
                }
                if(come_value.type.mHeap) {
                    sType*% left_type = clone right_type2
                    std_move(left_type, right_type2, come_value);
                }
                add_come_code(info, s"\{info.loop_result_value_name} = %s;\n", come_value.c_value);
            }
            else {
                add_last_code_to_source(info);
                
                arrange_stack(info, stack_num_before);
            }

            free_right_value_objects(info);
            
            if(info.right_value_objects) info.right_value_objects.reset();
            info.right_value_objects = right_value_objects;
            i++;
            if(info->block_level == 1) info->num_conditional = num_conditional;
        }
    }

    if(!no_var_table && !info.inhibits_output_code) {
        free_objects(info->lv_table, null, info);
        
        if(info->match_it_var && block_level == 0) {
            foreach(it, info->match_it_var) {
                free_object(clone it->mType, it->mCValueName, false@no_decrement, false@no_free, info);
            }
            info->match_it_var = null;
        }
    }
    
    info->lv_table = old_table;
    info->block_level = block_level;
    
    info->inhibits_output_code2 = info->inhibits_output_code;

    info->current_loop_vtable = current_loop_vtable;
    info->inhibits_output_code = inhibits_output_code;
    
    return 0;
}

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

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 99
{
    info.in_top_level = true;
    char* source_head = info->p.p;
    
    bool is_type_name_flag = is_type_name(buf);
    int sline = info.sline;
    
    info.p.p = head;
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
        
        char* p = info.p.p;
        int sline = info.sline;
        
        if(buf === "struct") {
            parse_word();
            
            if(xisalpha(*info->p.p) || *info->p.p == '_') {
                string word = parse_word();
                
                if(*info->p.p == ';') {
                    define_struct_nobody = true;
                }
            }
        }
        
        info.no_output_come_code = no_output_come_code;
        
        info.p.p = p;
        info.sline = sline;
    }
    
    /// uniq class ///
    bool uniq_class = false;
    if(buf === "uniq") {
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        char* p = info.p.p;
        info.p.p = head;
        int sline = info.sline;
        
        if(xisalpha(*info->p.p) || *info->p.p == '_') {
            parse_word();
        }
        
        if(xisalpha(*info->p.p) || *info->p.p == '_') {
            string buf2 = parse_word();
            
            if(buf2 === "class") {
                uniq_class = true;
            }
        }
        
        info.p.p = p;
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
        
        char* p = info.p.p;
        info.p.p = head;
        
        if(xisalpha(*info->p.p) || *info->p.p == '_' || (*info->p.p == '[' && *(info->p.p+1) == '[')) {
            var result_type, fun_name, err = backtrace_parse_type();
            
            if(*info->p.p == '(') {
                info->p.p ++;
                skip_spaces_and_lf();
                
                if(*info->p.p != '*') {
                    define_function_pointer_result_function = true;
                    
                    if(xisalpha(*info->p.p) || *info->p.p == '_') {
                        string word = parse_word();
                        
                        if(!is_type_name(word) && *info->p.p == ')') {
                            info->p.p++;
                            skip_spaces_and_lf();
                            
                            if(*info->p.p == '(') {
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
        info.p.p = head;
        info.sline = sline;
    }
    
    /// backtrace ///
    bool define_function_flag = false;
    if(is_type_name_flag && !define_function_pointer_result_function && buf !== "__typeof__" && !uniq_class && !square_attribute_head)
    {
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        char* p = info.p.p;
        info.p.p = head;
        
        if(xisalpha(*info->p.p) || *info->p.p == '_' || (*info->p.p == '[' && *(info->p.p+1) == '[')) {
            var result_type, fun_name, err = backtrace_parse_type();
        }
        if(*info->p.p == '(' || (*info->p.p == ':' && *(info->p.p+1) == ':')) {
            define_function_flag = true;
        }
        
        if(!define_only) {
            string word = null;
            if(xisalnum(*info.p.p) || *info->p.p == '_') {
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
                    while(*info->p.p == '*') {
                        info->p.p++;
                        skip_spaces_and_lf();
                    }
                    if(*info->p.p == '[' && *(info->p.p+1) == ']') {
                        info->p.p += 2;
                        skip_spaces_and_lf();
                    }
                    if(*info->p.p == ':') {
                        info->p.p++;
                        skip_spaces_and_lf();
                    }
                    if(*info->p.p == ':') {
                        info->p.p++;
                        skip_spaces_and_lf();
                    }
                    if(xisalnum(*info.p.p) || *info->p.p == '_') {
                        word = parse_word();
                    }
                }
                
                /// fun name ///
                if(strlen(word) > 0 && (*info->p.p == '(' || (*info->p.p == ':' && *(info->p.p+1) == ':'))) {
                    if(is_type_name_flag) {
                        define_function_flag = true;
                    }
                }
            }
        }
        
        info.no_output_come_code = no_output_come_code;
        info.p.p = p;
        info.sline = sline;
    }
    
    /// backtrace ///
    bool define_variable = true;
    if(is_type_name_flag && !define_function_pointer_result_function && !uniq_class && !square_attribute_head)
    {
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        char* p = info.p.p;
        info.p.p = head;
        
        if(!is_type_name_flag) {
            define_variable = false;
        }
        
        if(xisalpha(*info->p.p) || *info->p.p == '_' || (*info->p.p == '[' && *(info->p.p+1) == '[')) {
            var result_type, fun_name, err = backtrace_parse_type();
            
            if(*info->p.p == '(') {
                info->p.p ++;
                skip_spaces_and_lf();
                
                if(*info->p.p == '*') {
                    info->p.p++;
                    skip_spaces_and_lf();
                    
                    if(xisalpha(*info->p.p) || *info->p.p == '_') {
                        string word = parse_word();
                        
                        if(*info->p.p == ')') {
                            info->p.p++;
                            skip_spaces_and_lf();
                            
                            if(*info->p.p == '(') {
                                define_variable = true;
                            }
                        }
                    }
                }
                else if(xisalpha(*info->p.p) || *info->p.p == '_') {
                    string word = parse_word();
                    
                    if(*info->p.p == ')') {
                        info->p.p++;
                        skip_spaces_and_lf();
                        
                        if(!is_type_name(word) && *info->p.p != '(') {
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
            if(!(xisalpha(*info->p.p) || *info->p.p == '_')) {
                define_variable = false;
            }
            
            while(xisalpha(*info->p.p) || *info->p.p == '_') {
                info->p.p++;
            }
            skip_spaces_and_lf();
            
            if(*info->p.p == '(' || *info->p.p == ':') {
                define_variable = false;
            }
        }
        
        info.p.p = p;
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
        
        char* p = info.p.p;
        info.p.p = head;
        
        if(buf === "struct") {
            parse_struct_attribute();
            if(xisalpha(*info->p.p) || *info->p.p == '_') {
                parse_word();
                if(xisalpha(*info->p.p) || *info->p.p == '_') {
                    string word = parse_word();
                    if(xisalpha(*info->p.p) || *info->p.p == '_') {
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
            if(!(xisalpha(*info->p.p) || *info->p.p == '_')) {
                define_variable = false;
            }
            
            while(xisalpha(*info->p.p) || *info->p.p == '_') {
                info->p.p++;
            }
            skip_spaces_and_lf();
            
            if(*info->p.p == '(' || *info->p.p == ':') {
                define_variable = false;
            }
        }
        
        info.p.p = p;
        info.sline = sline;
        info.no_output_come_code = no_output_come_code;
    }
    
    info.p.p = head;
    info.sline = head_sline;
    
    if(uniq_class) {
        info.p.p = head;
        info.sline = sline;
        
        string buf2 = parse_word();
     
        return inherit(buf2, head, head_sline, info);
    }
    else if(buf === "template") {
        string word = parse_word();
        
        if(*info->p.p == '<') {
            info->p.p++;
            skip_spaces_and_lf();
            
            info->method_generics_type_names.reset();
            
            while(true) {
                if(*info->p.p == '>') {
                    info->p.p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*info->p.p == ',') {
                    info->p.p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p.p == '\0') {
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
    else if(buf === "enum" && *info->p.p == '{') {
    }
    else if(define_struct_nobody) {
    }
    else if(define_variable_between_brace) {
        info.p.p = head;
        info.sline = sline;
        
        return parse_global_variable(info);
    }
    else if(define_function_pointer_result_function) {
        char* header_head = info.p.p;
        var result_type, fun_name, err = parse_type();
        
        if(*info->p.p == '(') {
            info->p.p++;
            skip_spaces_and_lf();
            
            var param_types = new list<sType*%>();
            var param_names = new list<string>();
            
            if(*info->p.p == ')') {
                info->p.p++;
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
                    
                    if(xisalpha(*info->p.p) || *info->p.p == '_') {
                        (void)parse_word();
                    }
                    
                    if(*info->p.p == ',') {
                        info->p.p++;
                        skip_spaces_and_lf();
                    }
                    else if(*info->p.p == ')') {
                        info->p.p++;
                        skip_spaces_and_lf();
                        break;
                    }
                    else {
                        err_msg(info, "require , or ) (1) it is %c", *info->p.p);
                        exit(2);
                    }
                }
            }
            
            expected_next_character(')');
            
            if(*info->p.p == '(') {
                info->p.p++;
                skip_spaces_and_lf();
                
                var param_types2 = new list<sType*%>();
                var param_names2 = new list<string>();
                
                if(*info->p.p == ')') {
                    info->p.p++;
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
                    
                        if(xisalpha(*info->p.p) || *info->p.p == '_') {
                            (void)parse_word();
                        }
                        
                        if(*info->p.p == ',') {
                            info->p.p++;
                            skip_spaces_and_lf();
                        }
                        else if(*info->p.p == ')') {
                            info->p.p++;
                            skip_spaces_and_lf();
                            break;
                        }
                        else {
                            err_msg(info, "require , or ) (2)");
                            exit(2);
                        }
                    }
                }
                
                char* header_tail = info.p.p;
                
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
        info.p.p = head;
        info.sline = sline;
        
        string struct_attribute0 = parse_struct_attribute();
        
        if(xisalpha(*info->p.p) || *info->p.p == '_') {
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
                    
                    char* p = info.p.p;
                    int sline2 = info.sline;
                    info.p.p = head;
                    info.sline = head_sline;
                    
                    (void)parse_struct_attribute();
                    while(xisalnum(*info.p.p) || *info->p.p == '_') {
                        string declaration_word = parse_word();
                        bool type_word = is_type_name(declaration_word);
                        
                        if(!type_word) {
                            if(*info->p.p == '(' || (*info->p.p == ':' && *(info->p.p+1) == ':')) {
                                attribute_define_function = true;
                            }
                            break;
                        }
                        
                        while(*info->p.p == '*') {
                            info->p.p++;
                            skip_spaces_and_lf();
                        }
                        if(*info->p.p == '[' && *(info->p.p+1) == ']') {
                            info->p.p += 2;
                            skip_spaces_and_lf();
                        }
                    }
                    
                    info.p.p = p;
                    info.sline = sline2;
                    info.no_output_come_code = no_output_come_code;
                }
                
                info.p.p = head;
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
        info.p.p = head;
        info.sline = sline;
        
        sNode*% node = parse_function(info);
        
        return node;
    }
    else if(define_function_flag) {
        info.p.p = head;
        info.sline = sline;
        
        sNode*% node = parse_function(info);
        
        return node;
    }
    else if(define_variable) {
        info.p.p = head;
        info.sline = sline;
        
        sNode*% node = parse_global_variable(info);
        
        char* source_tail = info.p.p;
        
        buffer*% header = new buffer();
        header.append(source_head, source_tail - source_head);
        
        return node;
    }
    
    info.p.p = head;
    info.sline = sline;
    
    string buf2 = parse_word();
 
    return inherit(buf2, head, head_sline, info);
}

sNode*% parse_function(sInfo* info)
{
    char* header_head = info.p.p;
    char* source_head = info.p.p;
    
    var asm_fun, fun_attribute_prefix = parse_function_attribute();
    string fun_attribute = s"";
    string fun_attribute_middle = s"";
    //string attribute = parse_struct_attribute();
    
    sType*% result_type = null;
    string var_name = null;
    bool constructor_ = false;

    if(info.in_class && (info->end - info->p.p) >= strlen("new(") && memcmp(info.p.p, "new(", 4) == 0) {
        parse_word();
        result_type = clone info.class_type;
        result_type.mHeap = true;
        constructor_ = true;
        
        info.constructor_ = true;
    }
    else {
        var result_type2, var_name2, err = parse_type();
        
        result_type = result_type2;
        var_name = var_name2;

        if(result_type->mAttribute != null && result_type->mAttribute !== "") {
            fun_attribute_middle = result_type->mAttribute;
            result_type->mAttribute = s"";
        }
        if(result_type->mVarAttribute != null && result_type->mVarAttribute !== "") {
            if(fun_attribute_middle !== "") {
                fun_attribute_middle = fun_attribute_middle + " " + result_type->mVarAttribute;
            }
            else {
                fun_attribute_middle = result_type->mVarAttribute;
            }
            result_type->mVarAttribute = s"";
        }
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
    }
    
    /// backtrace ///
    bool method_definition = false;
    {
        char* p = info.p.p;
        int sline = info.sline;
        
        bool flag = false;
        while(xisalnum(*info->p.p) || *info->p.p == '_') {
            flag = true;
            parse_word();
        }
        
        while(*info->p.p == '*') {
            info->p.p++;
            skip_spaces_and_lf();
        }
        while(*info->p.p == '[' && *(info->p.p+1) == ']') {
            info->p.p+=2;
            skip_spaces_and_lf();
        }
        while(*info->p.p == '%') {
            info->p.p++;
            skip_spaces_and_lf();
        }
        if(flag && *info->p.p == ':' && *(info->p.p+1) == ':') {
            method_definition = true;
        }
        
        info.p.p = p;
        info.sline = sline;
    }
    
    string fun_name;
    char*% base_fun_name = null;
    sType*% obj_type2 = null;
    
    if(constructor_) {
        base_fun_name = string("initialize");
        fun_name = create_method_name(info->class_type, false@no_pointer_name, base_fun_name, info);
        
        obj_type2 = clone info->class_type;
    }
    else if(method_definition) {
        var obj_type, name, err = parse_type();
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        expected_next_character(':');
        expected_next_character(':');
        
        base_fun_name = parse_word();
        fun_name = create_method_name(obj_type, false@no_pointer_name, base_fun_name, info);
        
        obj_type2 = clone obj_type;
    }
    else if(info->impl_type) {
        if(result_type->mClass->mIter) {
            base_fun_name = parse_word();
        
            fun_name = create_method_name(info->impl_type, false@no_pointer_name, base_fun_name, info);
            
            obj_type2 = clone info->impl_type;
        }
        else {
            base_fun_name = parse_word();
        
            fun_name = create_method_name(info->impl_type, false@no_pointer_name, base_fun_name, info);
            
            obj_type2 = clone info->impl_type;
        }
    }
    else if(info->class_type) {
        base_fun_name = parse_word();
    
        fun_name = create_method_name(info->class_type, false@no_pointer_name, base_fun_name, info);
        
        obj_type2 = clone info->class_type;
    }
    else {
        fun_name = parse_word();
        base_fun_name = string(fun_name);
    }
    
    if(info.in_class && base_fun_name === "initialize") {
        info.in_class = false;
    }
    
    var param_types, param_names, param_default_parametors, var_args = parse_params(info, constructor_);
    char* header_tail = info.p.p;
    if(info.in_class && base_fun_name === "initialize") {
        info.in_class = true;
    }
    
    bool const_fun = false;
    
    int version = 0;
    if(parsecmp("version")) {
        info->p.p += strlen("version");
        skip_spaces_and_lf();
        
        int n = 0;
        while(xisdigit(*info->p.p)) {
            n = n * 10 + (*info->p.p - '0');
            info->p.p++;
        }
        skip_spaces_and_lf();
        
        version = n;
    }
    
    var asm_fun2, fun_attribute2 = parse_function_attribute();
    
    if(fun_attribute2 !== "") {
        if(fun_attribute !== "") {
            fun_attribute = fun_attribute + " " + fun_attribute2;
        }
        else {
            fun_attribute = fun_attribute2;
        }
    }
    
/*
    if(asm_fun !== "") {
        fun_name = string(asm_fun);
    }
    if(asm_fun2 !== "") {
        fun_name = string(asm_fun2);
    }
*/
    
    bool in_top_level = info.in_top_level;
    info.in_top_level = false;
    
    if(base_fun_name === "lambda") {
        sBlock*% block = parse_block(in_function:true);
        
        static int lambda_num = 0;
        lambda_num++;
        
        string fun_name = xsprintf("lambda%d", lambda_num);
        
        result_type->mInline = false;
        result_type->mStatic = false;
        result_type->mUniq = false;
        
        var fun = new sFun(string(fun_name), result_type, param_types, param_names
                            , param_default_parametors
                            , false@external, var_args, block
                            , true@static_, info, false@inline_, false@uniq_, const_fun:const_fun);
        fun->mMiddleAttribute = fun_attribute_middle;
        
        var fun2 = info.funcs[string(fun_name)];
        info.funcs.insert(string(fun_name), fun);
        
        return new sLambdaNode(fun, info) implements sNode;
    }
    else if(info.impl_type && info.generics_type_names.length() > 0) {
        if(result_type->mClass->mIter) {
            string none_generics_name = get_none_generics_name(info.impl_type.mClass.mName);
            
            string generics_sname = string(info.sname);
            int generics_sline = info.sline;
            
            string block = skip_block(info);
            
            var fun = new sGenericsFun(info.impl_type, clone info.generics_type_names, clone info.method_generics_type_names, string(fun_name), result_type, param_types, param_names, param_default_parametors, var_args, block, info, string(generics_sname), generics_sline, const_fun:const_fun);
            
            string fun_name3 = xsprintf("%s_iter_%s", none_generics_name, base_fun_name);
            
            info.generics_funcs.insert(string(fun_name3), fun);
            
            return (sNode*%)null;
        }
        else {
            string none_generics_name = get_none_generics_name(info.impl_type.mClass.mName);
            
            string generics_sname = string(info.sname);
            int generics_sline = info.sline;
            
            string block = skip_block(info);
            
            var fun = new sGenericsFun(info.impl_type, clone info.generics_type_names, clone info.method_generics_type_names, string(fun_name), result_type, param_types, param_names, param_default_parametors, var_args, block, info, string(generics_sname), generics_sline, const_fun:const_fun);
            
            string fun_name3 = xsprintf("%s_%s", none_generics_name, base_fun_name);
            
            info.generics_funcs.insert(string(fun_name3), fun);
            
            return (sNode*%)null;
        }
    }
    else if(info.method_generics_type_names.length() > 0) {
        string generics_sname = string(info.sname);
        int generics_sline = info.sline;
        
        string block = skip_block(info);
        
        var fun = new sGenericsFun(info.impl_type, clone info.generics_type_names, clone info.method_generics_type_names, string(fun_name), result_type, param_types, param_names, param_default_parametors, var_args, block, info, string(generics_sname), generics_sline, const_fun:const_fun);
        
        if(method_definition) {
            info.generics_funcs.insert(string(fun_name), fun);
        }
        else {
            info.generics_funcs.insert(string(base_fun_name), fun);
        }
        
        return (sNode*%)null;
    }
    else if(*info->p.p == '{') {
        char* source_tail = info.p.p -1;
        
        if(version > 0) {
            string new_fun_name = xsprintf("%s_v%d", string(fun_name), version);
            fun_name = string(new_fun_name);
        }
        
        bool static_fun = false;
        if(result_type->mStatic) {
            result_type->mStatic = false;
            result_type->mUniq = false;
            static_fun = true;
        }
        
        bool inline_fun = false;
        if(result_type->mInline) {
            result_type->mInline = false;
            result_type->mUniq = false;
            inline_fun = true;
        }
        
        bool uniq_fun = false;
        if(result_type->mUniq) {
            result_type->mUniq = false;
            result_type->mInline = false;
            result_type->mStatic = false;
            uniq_fun = true;
        }
        if(result_type->mUniq) {
            result_type->mUniq = false;
            result_type->mInline = false;
            result_type->mStatic = false;
        }
        if(info.defining_class && info.defining_class.mUniq) {
            uniq_fun = true;
        }
        
        if(uniq_fun) {
            string generics_sname = string(info.sname);
            int generics_sline = info.sline;
            
            string block = skip_block(info, return_self_at_last:constructor_);
            
            if(constructor_ && info.defining_class && info.defining_class.mUniq) {
                char* p = info.p.p;
                int sline = info.sline;
                int sline_real = info.sline_real;
                int sline_top = info.sline_top;
                string sname = string(info.sname);
                char* head = info.head;
                buffer*% source = info.source;
                
                info.source = block.to_buffer();
                if(info.p == null) {
                    info.p = span borrow info.source;
                }
                info.p.memory = borrow info.source.buf;
                info.p.len = info.source.len+2;
                info.p.p = borrow info.source.buf;
                info.head = borrow info.source.buf;
                
                info.sline = generics_sline;
                info.sline_real = generics_sline;
                info.sline_top = generics_sline;
                info.sname = string(generics_sname);
                
                parse_block(in_function:true);
                
                info.head = head;
                info.source = source;
                if(info.p == null) {
                    info.p = span borrow info.source;
                }
                info.p.memory = borrow info.source.buf;
                info.p.len = info.source.len+2;
                info.p.p = borrow info.source.buf;
                info.p.p = p;
                info.sline = sline;
                info.sline_real = sline_real;
                info.sline_top = sline_top;
                info.sname = string(sname);
            }
            
            var fun = new sFun(string(fun_name), result_type, param_types
                                    , param_names
                                    , param_default_parametors
                                    , false@external, var_args, null
                                    , static_fun@static_
                                    , info, inline_fun, uniq_fun, fun_attribute_prefix, fun_attribute
                                    , const_fun:const_fun, text_block:block, generics_sname:generics_sname, generics_sline:generics_sline);
            fun->mMiddleAttribute = fun_attribute_middle;
            
            if(info.in_class) {
                info.funcs.insert(string(fun_name), fun);
                info.uniq_funcs.insert(string(fun_name), fun);
            }
            else {
                info.funcs.insert(string(fun_name), fun);
                info.uniq_funcs.insert(string(fun_name), fun);
            }
        
            return new sFunNode(fun, info) implements sNode;
        }
        else {
            sBlock*% block = parse_block(in_function:true, info, return_self_at_last:constructor_);
            
            var fun = new sFun(string(fun_name), result_type, param_types
                                    , param_names
                                    , param_default_parametors
                                    , false@external, var_args, clone block
                                    , static_fun@static_
                                    , info, inline_fun, uniq_fun, fun_attribute_prefix, fun_attribute, const_fun:const_fun);
            fun->mMiddleAttribute = fun_attribute_middle;
            
            
            if(info.in_class) {
                info.funcs.insert(string(fun_name), fun);
            }
            else {
                info.funcs.insert(string(fun_name), fun);
            }
        
            return new sFunNode(fun, info) implements sNode;
        }
    }
    else if(xisalpha(*info->p.p) || *info->p.p == '_' || *info->p.p == ';') {
        if(version > 0) {
            string new_fun_name = xsprintf("%s_v%d", fun_name, version);
            fun_name = string(new_fun_name);
        }
        
        if(*info->p.p == ';') {
            info->p.p++;
            skip_spaces_and_lf();
            
            result_type->mStatic = false;
            result_type->mUniq = false;
            result_type->mInline = false;
            
            var fun = new sFun(string(fun_name), result_type
                                , param_types, param_names
                                , param_default_parametors
                                , true@external, var_args, null@block
                                , false@static_, info, false@inline_
                                , false@uniq_, fun_attribute_prefix, fun_attribute, const_fun:const_fun
                                , asm_fun:asm_fun2);
            fun->mMiddleAttribute = fun_attribute_middle;
            
            info.funcs.insert(string(fun_name), fun);
            
            return new sFunNode(fun, info) implements sNode;
        }
        else {
            var asm_fun, fun_attribute2 = parse_function_attribute();
            
/*
            if(asm_fun !== "") {
                fun_name = string(asm_fun);
            }
*/

            if(fun_attribute2 !== "") {
                if(fun_attribute !== "") {
                    fun_attribute = fun_attribute + " " + fun_attribute2;
                }
                else {
                    fun_attribute = fun_attribute2;
                }
            }
            
            result_type->mStatic = false;
            result_type->mUniq = false;
            result_type->mInline = false;
            
            var fun = new sFun(string(fun_name), result_type, param_types
                                , param_names
                                , param_default_parametors
                                , true@external, var_args, null@block
                                , false@static_, info, false@inline_, false@uniq_
                                , fun_attribute_prefix, fun_attribute, const_fun:const_fun, asm_fun:asm_fun);
            fun->mMiddleAttribute = fun_attribute_middle;
            
            info.funcs.insert(string(fun_name), fun);
            
            return new sFunNode(fun, info) implements sNode;
        }
    }
    else {
        err_msg(info, "invalid character(2)(%c)", *info->p.p);
        exit(2);
    }
    
    info.constructor_ = false;
    
    info.in_top_level = in_top_level;
    
    return (sNode*%)null;
}

string, bool create_generics_fun(string fun_name, sGenericsFun* generics_fun, sType* generics_type, sInfo* info)
{
    MSaveState;
//    bool no_output_come_code = info.no_output_come_code;
//    info.no_output_come_code = true;
    
    sType*% generics_type_ = get_no_solved_type2(generics_type);
    
    sFun*% funX = info.funcs[string(fun_name)];
    if(funX) {
        MRestoreState;
        return t(fun_name, true);
    }
    
    sType*% result_type_ = solve_generics(generics_fun->mResultType, generics_type_, info);
    
    sType*% result_type = solve_method_generics(result_type_, info);
    
    list<sType*%>*% param_types = new list<sType*%>();
    foreach(it, generics_fun->mParamTypes) {
        sType*% param_type_ = solve_generics(clone it, generics_type_, info);
    
        sType*% param_type = solve_method_generics(param_type_, info);
        
        param_types.add(clone param_type);
    }
    list<string>*% param_names = clone generics_fun->mParamNames;
    
    var param_default_parametors = clone generics_fun->mParamDefaultParametors;
    
    char* p = info.p.p;
    int sline = info.sline;
    string sname = info.sname;
    char* head = info.head;
    buffer*% source = info.source;
    
    info.source = generics_fun->mBlock.to_buffer();
    if(info.p == null) {
        info.p = span borrow info.source;
    }
    info.p.memory = borrow info.source.buf;
    info.p.len = info.source.len+2;
    info.p.p = borrow info.source.buf;
    info.head = borrow info.source.buf;
    
    sType*% generics_type_saved = info->generics_type;
    sType*% generics_type_ = get_no_solved_type2(generics_type);
    info->generics_type = clone generics_type_;
    
    list<string>*% method_generics_type_names = info->method_generics_type_names;
    
    info->method_generics_type_names = new list<string>();
    foreach(it, generics_fun->mMethodGenericsTypeNames) {
        info->method_generics_type_names.push_back(clone it);
    }
    
    info.generics_type_names.reset();
    info.generics_type_names = clone generics_fun.mGenericsTypeNames;
    
    info.sline = generics_fun->mGenericsSLine;
    info.sname = generics_fun->mGenericsSName;
    
    sBlock*% block = parse_block(in_function:true);
    
    info.head = head;
    info.source = source;
    if(info.p == null) {
        info.p = span borrow info.source;
    }
    info.p.memory = borrow info.source.buf;
    info.p.len = info.source.len+2;
    info.p.p = borrow info.source.buf;
    info.p.p = p;
    info.sline = sline;
    info.sname = sname;
    
    result_type->mInline = false;
    result_type->mStatic = false;
    result_type->mUniq = false;
    
    bool const_fun = generics_fun->mConstFun;
    
    bool var_args = generics_fun.mVarArgs;
    var fun = new sFun(fun_name, result_type
                    , param_types
                    , param_names, param_default_parametors, false@external
                    , var_args, block, true@static_, info, false@inline_, false@uniq_, const_fun:const_fun);
                    
    fun->mGenericsFun = true;
    
    info.funcs.insert(string(fun_name), fun);
    
    sNode*% node = new sFunNode(fun, info) implements sNode;
    
    bool in_generics_fun = info.in_generics_fun;
    info.in_generics_fun = true;
    node_compile(node).elif {
        MRestoreState;
        return t(s"", false);
    }
    info.in_generics_fun = in_generics_fun;
    
    info->generics_type = generics_type_saved;
    info.method_generics_type_names = method_generics_type_names;
    
    info.generics_type_names.reset();
    
//    info.no_output_come_code = no_output_come_code;
    MRestoreState;
    
    return t(string(fun_name), true);
}

bool create_method_generics_fun(string fun_name, sGenericsFun* generics_fun, sInfo* info)
{
    MSaveState;
    
    string sname_top = string(info->sname);
    int sline_top = info->sline;
    
    sFun* funX = borrow info.funcs[string(fun_name)];
    if(funX) {
        MRestoreState;
        return true;
    }

    sType*% result_type = solve_method_generics(generics_fun->mResultType, info);
    
    list<sType*%>*% param_types = new list<sType*%>();
    foreach(it, generics_fun->mParamTypes) {
        sType*% param_type = solve_method_generics(clone it, info);
        
        param_types.add(clone param_type);
    }
    list<string>*% param_names = clone generics_fun->mParamNames;
    
    var param_default_parametors = clone generics_fun->mParamDefaultParametors;
    
    char* p = info.p.p;
    int sline = info.sline;
    string sname = info.sname;
    char* head = info.head;
    buffer*% source = info.source;
    
    info.source = generics_fun->mBlock.to_buffer();
    if(info.p == null) {
        info.p = span borrow info.source;
    }
    info.p.memory = borrow info.source.buf;
    info.p.len = info.source.len+2;
    info.p.p = borrow info.source.buf;
    info.head = borrow info.source.buf;
    
    list<string>*% method_generics_type_names = info->method_generics_type_names;
    
    info->method_generics_type_names = new list<string>();
    foreach(it, generics_fun->mMethodGenericsTypeNames) {
        info->method_generics_type_names.push_back(clone it);
    }
    
    info.generics_type_names.reset();
    info.generics_type_names = clone generics_fun.mGenericsTypeNames;
    
    info.sline = generics_fun->mGenericsSLine;
    info.sname = generics_fun->mGenericsSName;
    
    sBlock*% block = parse_block(in_function:true);
    
    info.head = head;
    info.source = source;
    if(info.p == null) {
        info.p = span borrow info.source;
    }
    info.p.memory = borrow info.source.buf;
    info.p.len = info.source.len+2;
    info.p.p = borrow info.source.buf;
    info.p.p = p;
    info.sline = sline;
    info.sname = sname;
    
    result_type->mInline = false;
    result_type->mStatic = false;
    result_type->mUniq = false;
    
    bool var_args = generics_fun.mVarArgs;
    var fun = new sFun(fun_name, result_type
                    , clone param_types
                    , param_names, param_default_parametors, false@external
                    , var_args, block, true@static_, info, false@inline_, false@uniq_);
    fun->mGenericsFun = true;
    
    info.funcs.insert(string(fun_name), fun);
    
    sNode*% node = new sFunNode(fun, info) implements sNode;
    
    node_compile(node).elif {
        MRestoreState;
        return false;
    }
    
    info.method_generics_type_names = method_generics_type_names;
    
    info.generics_type_names.reset();
    
    MRestoreState;
    
    return true;
}

bool has_owned_path_to_owner(sClass* current_klass, sClass* owner_klass, list<string>* visited, sInfo* info=info)
{
    if(current_klass == null || owner_klass == null) {
        return false;
    }
    
    if(current_klass->mName === owner_klass->mName) {
        return true;
    }
    
    if(visited.contained(current_klass->mName)) {
        return false;
    }
    visited.push_back(current_klass->mName);
    
    foreach(it, current_klass->mFields) {
        var field_name, field_type = it;
        
        sType*% field_type2 = get_no_solved_type2(field_type);
        bool weak_field = field_type2->mWeak;
        field_type2->mNoSolvedGenericsType.if {
            if(Value.mWeak) {
                weak_field = true;
            }
        }
        
        if(!field_type2->mHeap || weak_field || field_type2->mClass == null) {
            continue;
        }
        
        if(field_type2->mClass->mName === owner_klass->mName) {
            return true;
        }
        
        if(has_owned_path_to_owner(field_type2->mClass, owner_klass, visited)) {
            return true;
        }
    }
    
    return false;
}

bool is_owned_main(sType*% type_, sClass* klass, sType*% field_type, sType*% owner, sInfo* info=info)
{
    if(owner == null || owner->mClass == null || field_type == null || field_type->mClass == null) {
        return false;
    }
    
    sType*% field_type2 = get_no_solved_type2(field_type);
    bool weak_field = field_type2->mWeak;
    field_type2->mNoSolvedGenericsType.if {
        if(Value.mWeak) {
            weak_field = true;
        }
    }
    
    if(!field_type2->mHeap || weak_field) {
        return false;
    }
    
    if(field_type2->mClass->mName === owner->mClass->mName) {
        return true;
    }
    
    list<string>*% visited = new list<string>();
    return has_owned_path_to_owner(field_type2->mClass, owner->mClass, visited);
}
   

sFun*% compile_uniq_function(sFun* fun, sInfo* info=info)
{
    MSaveState;
    
    sType*% result_type = clone fun->mResultType;
    
    list<sType*%>*% param_types = new list<sType*%>();
    foreach(it, fun->mParamTypes) {
        param_types.add(clone it);
    }
    list<string>*% param_names = clone fun->mParamNames;
    
    var param_default_parametors = clone fun->mParamDefaultParametors;
    
    char* p = info.p.p;
    int sline = info.sline;
    string sname = info.sname;
    char* head = info.head;
    buffer*% source = info.source;
    
    info.source = fun.mTextBlock.to_buffer();
    if(info.p == null) {
        info.p = span borrow info.source;
    }
    info.p.memory = borrow info.source.buf;
    info.p.len = info.source.len+2;
    info.p.p = borrow info.source.buf;
    info.head = borrow info.source.buf;
    
    info.sline = fun->mTextBlockSline;
    info.sname = fun->mTextBlockSName;
    
    sClass* defining_class = info.defining_class;
    if(fun->mParamTypes.length() > 0 && fun->mParamNames.length() > 0 && fun->mParamNames[0] === "self") {
        info.defining_class = borrow fun->mParamTypes[0].mClass;
    }
    
    sBlock*% block = parse_block(in_function:true);
    
    info.defining_class = defining_class;
    
    info.head = head;
    info.source = source;
    if(info.p == null) {
        info.p = span borrow info.source;
    }
    info.p.memory = borrow info.source.buf;
    info.p.len = info.source.len+2;
    info.p.p = borrow info.source.buf;
    info.p.p = p;
    info.sline = sline;
    info.sname = sname;
    
    result_type->mInline = false;
    result_type->mStatic = false;
    result_type->mUniq = false;
    
    bool const_fun = fun->mConstFun;
    
    bool var_args = fun.mVarArgs;
    var fun2 = new sFun(fun->mName, result_type
                    , param_types
                    , param_names, param_default_parametors, false@external
                    , var_args, block, false@static_, info, false@inline_, true@uniq_, const_fun:const_fun);
    
    sNode*% node = new sFunNode(fun2, info) implements sNode;
    
    node_compile(node).elif {
        MRestoreState;
        return null;
    }
    
    MRestoreState;
    
    return fun2;
}

bool create_equals_method(sType* type, sInfo* info)
{
    sType*% type_ = get_no_solved_type(type);
    string result = null
    
    MSaveState;
    
    sClass* klass = type_->mClass;
    
    string class_name = klass->mName;

    const char* fun_name = "equals";
    
    sType*% type2 = clone type_;
    type2->mHeap = false;
    
    sFun* cloner = null;
    string fun_name2;
    if(type_->mGenericsTypes.length() > 0) {
        string none_generics_name = get_none_generics_name(type_.mClass.mName);
        
        sType*% obj_type = solve_generics(type_, info.generics_type, info);
        
        fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
        string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
        
        sGenericsFun* generics_fun = borrow info.generics_funcs.at(fun_name3, null);
        
        if(generics_fun) {
            var name,err = create_generics_fun(string(fun_name2), generics_fun, obj_type, info);
        
            if(!err) {
                MRestoreState;
                return false;
            }
            else {
                cloner = borrow info->funcs[name];
            }
        }
        else {
            cloner = borrow info->funcs[fun_name2];
        }
    }
    else {
        fun_name2 = create_method_name(type_, false@no_pointer_name, fun_name, info);
        
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
            cloner = borrow info->funcs[new_fun_name];
            
            if(cloner) {
                fun_name2 = string(new_fun_name);
                break;
            }
        }
        
        if(cloner == NULL) {
            cloner = borrow info->funcs[fun_name2];
        }
    }
    
    if(cloner == null && !type_->mClass->mProtocol && !type_->mClass->mNumber)
    {
        var fun,new_fun_name = create_equals_automatically(type_, fun_name, info);
        
        fun_name2 = new_fun_name;
        cloner = borrow fun;
    }

    MRestoreState;
    
    return true;
}

bool create_operator_equals_method(sType* type, sInfo* info)
{
    sType*% type_ = get_no_solved_type2(type);
    string result = null
    
    MSaveState;
    
    sClass* klass = type_->mClass;
    
    string class_name = klass->mName;

    const char* fun_name = "operator_equals";
    
    sType*% type2 = clone type_;
    type2->mHeap = false;
    
    sFun* cloner = null;
    string fun_name2;
    if(type_->mGenericsTypes.length() > 0) {
        string none_generics_name = get_none_generics_name(type_.mClass.mName);
        
        sType*% obj_type = solve_generics(type_, info.generics_type, info);
        
        fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
        string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
        
        sGenericsFun* generics_fun = borrow info.generics_funcs.at(fun_name3, null);
        
        if(generics_fun) {
            var name,err = create_generics_fun(string(fun_name2), generics_fun, obj_type, info);
            
            if(!err) {
                MRestoreState;
                return false;
            }
            cloner = borrow info->funcs[name];
        }
        else {
            cloner = borrow info->funcs[fun_name2];
        }
    }
    else {
        fun_name2 = create_method_name(type_, false@no_pointer_name, fun_name, info);
        
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
            cloner = borrow info->funcs[new_fun_name];
            
            if(cloner) {
                fun_name2 = string(new_fun_name);
                break;
            }
        }
        
        if(cloner == null) {
            cloner = borrow info->funcs[fun_name2];
        }
    }
    
    if(cloner == null && !type_->mClass->mProtocol && !type_->mClass->mNumber)
    {
        var fun,new_fun_name = create_operator_equals_automatically(type_, fun_name, info);
        
        fun_name2 = new_fun_name;
        cloner = borrow fun;
    }

    MRestoreState;
    
    return true;
}

bool create_operator_not_equals_method(sType* type, sInfo* info)
{
    sType*% type_ = get_no_solved_type2(type);
    string result = null
    
    MSaveState;
    
    sClass* klass = type_->mClass;
    
    string class_name = klass->mName;

    const char* fun_name = "operator_not_equals";
    
    sType*% type2 = clone type_;
    type2->mHeap = false;
    
    sFun* cloner = null;
    string fun_name2;
    if(type_->mGenericsTypes.length() > 0) {
        string none_generics_name = get_none_generics_name(type_.mClass.mName);
        
        sType*% obj_type = solve_generics(type_, info.generics_type, info);
        
        fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
        string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
        
        sGenericsFun* generics_fun = borrow info.generics_funcs.at(fun_name3, null);
        
        if(generics_fun) {
            var name, err = create_generics_fun(string(fun_name2), generics_fun, obj_type, info);
            
            if(!err) {
                MRestoreState;
                return false;
            }
            cloner = borrow info->funcs[name];
        }
        else {
            cloner = borrow info->funcs[fun_name2];
        }
    }
    else {
        fun_name2 = create_method_name(type_, false@no_pointer_name, fun_name, info);
        
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
            cloner = borrow info->funcs[new_fun_name];
            
            if(cloner) {
                fun_name2 = string(new_fun_name);
                break;
            }
        }
        
        if(cloner == null) {
            cloner = borrow info->funcs[fun_name2];
        }
    }
    
    if(cloner == null && !type_->mClass->mProtocol && !type_->mClass->mNumber)
    {
        var fun,new_fun_name = create_operator_not_equals_automatically(type_, fun_name, info);
        
        fun_name2 = new_fun_name;
        cloner = borrow fun;
    }

    MRestoreState;
    
    return true;
}
