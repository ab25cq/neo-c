#include "common.h"

bool operator_overload_fun_self(sType* type, const char* fun_name, sNode*% node, CVALUE* left_value, sInfo* info)
{
    sType*% generics_type;
    if(type->mNoSolvedGenericsType) {
        generics_type = type->mNoSolvedGenericsType;
    }
    else {
        generics_type = clone type;
    }
    
    sType*% type_;
    if(type->mNoSolvedGenericsType) {
        type_ = clone type->mNoSolvedGenericsType;
    }
    else {
        type_ = clone type;
    }
    sClass* klass = type_->mClass;
    string class_name = klass->mName;
    
    var fun_name2, operator_fun, generics_fun = get_method(fun_name, type_, info);
    
    bool result = false;
    
    if(operator_fun) {
        sRightValueObject* right_value_object = left_value.right_value_objects;
        
        if(right_value_object) {
            right_value_object->mFreed = true;
        }
        
        sNode*% obj = node;
        list<tuple2<string, sNode*%>*%>*% params =  new list<tuple2<string, sNode*%>*%>();
        
        params.add(t((string)null, obj));
        
        sNode*% node = create_method_call(fun_name, obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
        
        node_compile(node).if {
            result = true;
        }
    }
    
    return result;
}

class sRefferenceNode extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sRefferenceNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* value = borrow self.value;
        
        bool in_refference = info.in_refference;
        info.in_refference = true;
        if(!node_compile(value)) {
            return false;
        }
        info.in_refference = in_refference;
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value = new CVALUE();
        
        if(left_value.c_value_without_cast_object_value) {
            come_value.c_value = xsprintf("&%s", left_value.c_value_without_cast_object_value);
        }
        else {
            come_value.c_value = xsprintf("&%s", left_value.c_value);
        }
        
        come_value.type = clone left_value.type;
        come_value.type->mPointerNum++;
        come_value.var = left_value.var;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sParenBlockNode extends sNodeBase
{
    new(list<sNode*%>*% paren_block, sInfo* info)
    {
        self.super();
        
        list<sNode*%>*% self.paren_block = paren_block;
    }
    
    string kind()
    {
        return string("sParenBlockNode");
    }
    
    bool compile(sInfo* info)
    {
        list<sNode*%>*% paren_block = self.paren_block;
        
        buffer*% buf = new buffer();
        
        buf.append_str("({");
        
/*
        if(info->paren_block_buffer) {
            buf.append_str(info.paren_block_buffer.to_string());
        }
*/
        
        var paren_block_buffer = info.paren_block_buffer;
        info->paren_block_buffer = new buffer(); 
        sType*% come_type = null;
        foreach(it, paren_block) {
            if(!node_compile(it)) {
                return false;
            }
            
            if(info.paren_block_buffer.length() > 0) {
                buf.append_str(info.paren_block_buffer.to_string());
                info.paren_block_buffer = new buffer();
            }
            
            if(info.stack.length() > 0) {
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                if(buf) {
                    buf.append_str(come_value.c_value + "; ");
                }
                else {
                    add_come_code(info, come_value.c_value + "; ");
                }
                
                come_type = clone come_value.type;
                
                transpiler_clear_last_code(info);
            }
            else {
                if(buf) {
                    if(info.module.mLastCode) buf.append_str(info.module.mLastCode + "; ");
                    if(info.module.mLastCode2) buf.append_str(info.module.mLastCode2 + "; ");
                    
                    transpiler_clear_last_code(info);
                }
                else {
                    add_last_code_to_source(info);
                }
            }
        }
        info->paren_block_buffer = paren_block_buffer;
        
        if(buf) {
            buf.append_str("})");
            
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = buf.to_string();
            come_value.type = come_type;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
        else {
            add_come_code(info, "});");
        }
        
        return true;
    }
};


class sDerefferenceNode extends sNodeBase
{
    new(sNode*% value, bool quote, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
        bool self.mQuote = quote;
    }
    
    string kind()
    {
        return string("sDerefferenceNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% value = self.value;
        
        if(!node_compile(value)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        
        sType*% type = left_value.type;
        
        const char* fun_name = "operator_derefference";
        
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun_self(type, fun_name, value, left_value, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("*%s", left_value.c_value);
            come_value.type = clone left_value.type;
            come_value.type->mPointerNum--;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
        
        return true;
    }
};

class sLogicalDenial extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sLogicalDenial");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("!%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sLogicalDenial2 extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sLogicalDenial2");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("!!%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sReverseNode extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sReverseNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* value = borrow self.value;
        
        if(!node_compile(value)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("!%s", left_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mPointerNum--;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sMinusNode2 extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sMinusNode2");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("-%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sPlusPlusNode2 extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sPlusPlusNode2");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("++%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sMinusMinusNode2 extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sMinusMinusNode2");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("--%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sNormalBlock extends sNodeBase
{
    new(sBlock* block, bool clang, sInfo* info)
    {
        self.super();
        
        sBlock*% self.mBlock = clone block;
        bool self.clang = clang;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sNormalBlock");
    }
    
    bool compile(sInfo* info)
    {
        sBlock* block = borrow self.mBlock;
        
        add_come_code(info, "{\n");
        
        bool come_c = gComeC;
        if(self.clang) { gComeC = true; }
        
        transpile_block(block, null, null, info);
        
        add_come_code(info, "}\n");
        
        gComeC = come_c;
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};


class sComplement extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sComplement");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("~%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sParenNode extends sNodeBase
{
    new(sNode* left, sInfo* info)
    {
        self.super();
        
        sNode*% self.mLeft = clone left;
    }
    
    string kind()
    {
        return string("sParenNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = borrow self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("(%s)", left_value.c_value);
        come_value.type = clone left_value.type;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sCastNode extends sNodeBase
{
    new(sType* type, sNode* left, sInfo* info)
    {
        self.super();
        
        sType*% self.mType = clone type;
        sNode*% self.mLeft = clone left;
    }
    
    string kind()
    {
        return string("sCastNode");
    }
    
    bool compile(sInfo* info)
    {
        sType* type = borrow self.mType;
        sNode* left = borrow self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% type2 = solve_generics(clone type, info.generics_type, info);
        
        sType*% type3 = solve_method_generics(type2, info);
        
        CVALUE*% come_value = new CVALUE();
        
        cast_type(type3, left_value.type, left_value);
        
        come_value.c_value = xsprintf("(%s)%s", make_type_name_string(type3, cast_type:true), left_value.c_value);
        come_value.type = clone type3;
        come_value.var = left_value.var;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
}

sNode*% parse_normal_block(bool clang=false, sInfo* info=info)
{
    int sline_real = info.sline_real;
    info.sline_real = info.sline;
    sBlock*% block = parse_block();
    
    info.sline_real = sline_real;
    
    return new sNormalBlock(block, clang, info) implements sNode;
}

sNode*% craete_logical_denial(sNode*% node, sInfo* info)
{
    return new sLogicalDenial(clone node, info) implements sNode;
}

sNode*% cast_node(sType* type, sNode*% node, sInfo* info=info)
{
    return new sCastNode(type, node, info) implements sNode;
}

sNode*% reffence_node(sNode*% value, sInfo* info)
{
    return new sRefferenceNode(value, info) implements sNode;
}

sNode*% reverse_node(sNode*% value, sInfo* info)
{
    return new sReverseNode(value, info) implements sNode;
}

class sArrayInitializer extends sNodeBase
{
    new(sType* type_, string initializer, sInfo* info)
    {
        self.super();
       
        string self.initializer = clone initializer;
        sType*% self.type_ = clone type_;
    }
    
    string kind()
    {
        return string("sArrayInitializer");
    }
    
    bool compile(sInfo* info)
    {
        var type_ = self.type_;
        var initializer = self.initializer;
        
        if(type_) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("(%s)%s", make_type_name_string(type_, cast_type:true), initializer);
            come_value.type = new sType(s"void");
            come_value.type->mPointerNum++;
            come_value.var = null;
            
            info.stack.push_back(come_value);
        }
        else {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = initializer;
            come_value.type = new sType(s"void");
            come_value.type->mPointerNum++;
            come_value.var = null;
            
            info.stack.push_back(come_value);
        }
        
        return true;
    }
};


sNode*% pre_position_operator(sInfo* info=info)
{
    skip_spaces_and_lf();
    
    bool refference = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info->p == '&' && *(info->p+1) != '&') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info->p == '"') {
                refference = true;
            }
            else if(xisalpha(*info->p) || *info->p == '_') {
                refference = true;
            }
            else if(*info->p == '(' || *info->p == '*') {
                while(*info->p == '(' || *info->p == '*') {
                    info->p++
                    skip_spaces_and_lf();
                }
                
                if(*info->p == '&') {
                    refference = true;
                }
                else if(xisalpha(*info->p) || *info->p == '_') {
                    refference = true;
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    
    skip_spaces_and_lf();
    
    if(*info->p == '{') {
        if(info.array_initializer) {
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
            return new sArrayInitializer(null, buf.to_string(), info) implements sNode;
        }
        else {
            return parse_normal_block();
        }
    }
    else if(*info->p == '!' && *(info->p+1) != '!' && *(info->p+1) != '{') {
        info->p++;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sLogicalDenial(node, info) implements sNode;
    }
    else if(*info->p == '!' && *(info->p+1) == '!') {
        info->p+=2;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sLogicalDenial2(node, info) implements sNode;
    }
    else if(*info->p == '-' && *(info->p+1) == '-') {
        info->p+=2;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sMinusMinusNode2(node, info) implements sNode;
    }
    else if(*info->p == '-' && !xisdigit(*(info->p+1))) {
        info->p++;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sMinusNode2(node, info) implements sNode;
    }
    else if(*info->p == '+' && *(info->p+1) == '+') {
        info->p+=2;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sPlusPlusNode2(node, info) implements sNode;
    }
    else if(*info->p == '~') {
        info->p++;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sComplement(node, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '*') || *info->p == '*') {
        bool quote;
        if(*info->p == '\\') {
            info->p += 2;
            skip_spaces_and_lf();
            quote = true;
        }
        else {
            info->p ++;
            skip_spaces_and_lf();
            quote = false;
        }
        
        bool no_assign = info.no_assign;
        info.no_assign = true;
        sNode*% value = expression_node();
        info.no_assign = no_assign;
        
        return new sDerefferenceNode(value, quote, info) implements sNode;
    }
    else if(*info->p == '&' && refference) {
        info->p ++;
        skip_spaces_and_lf();
        
        sNode*% value = expression_node();
        
        return new sRefferenceNode(value, info) implements sNode;
    }
/*
    else if(*info->p == '&' && *(info->p+1) == '&') {
        info->p ++;
        skip_spaces_and_lf();
        
        sNode*% value = expression_node();
        
        return new sRawPtrNode(value, info) implements sNode;
    }
*/
    else if(*info->p == '!' && *(info->p+1) != '!' && *(info->p+1) != '{') {
        info->p ++;
        skip_spaces_and_lf();
        
        sNode*% value = expression_node();
        
        return new sReverseNode(value, info) implements sNode;
    }
    else if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        /// backtrace ///
        bool cast_expression_flag = false;
        bool struct_initializer_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            skip_spaces_and_lf();
            
            char* p2 = info.p;
            int sline2 = info.sline;
            
            string word = string("");
            if(xisalpha(*info->p) || *info->p == '_') {
                word = parse_word();
                if(is_type_name(word)) {
                    info.p = p2;
                    info.sline = sline2;
                    
                    parse_type();
                    
                    if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf();
                        if(*info->p == '{') {
                            struct_initializer_flag = true;
                        }
                        else {
                            cast_expression_flag = true;
                        }
                    }
                }
            }
            
            skip_spaces_and_lf();
            
            info.p = p;
            info.sline = sline;
        }
        
        /// backtrace ///
        bool tuple_expression_flag = false;
        bool named_tuple_expression_flag = false;
        /*
        if(!gComeC && !cast_expression_flag && !struct_initializer_flag)
        {
            char* p = info.p;
            int sline = info.sline;
            
            skip_spaces_and_lf();
            
            {
                char* p = info.p;
                int sline = info.sline;
                if(*info->p == '_' || xisalpha(*info->p)) {
                    parse_word();
                }
                
                if(*info->p == ':') {
                    info->p++;
                    skip_spaces_and_lf();
                    named_tuple_expression_flag = true;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                }
            }
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            bool no_output_come_code = info.no_output_come_code;
            info.no_output_come_code = true;
            
            sNode*% node = expression();
            sNode*% node2 = node;
            
            skip_spaces_and_lf();
            
            info.no_comma = no_comma;
            info.no_output_come_code = no_output_come_code;
            
            if(*info->p == ',') {
                tuple_expression_flag = true;
            }
            
            skip_spaces_and_lf();
            
            info.p = p;
            info.sline = sline;
        }
        tuple_expression_flag = false;
        */
        
        if(*info->p == '{') {
            info->p++;
            skip_spaces_and_lf();
            
            list<sNode*%>*% paren_block = new list<sNode*%>();
            
            while(true) {
                skip_spaces_and_lf();
                
                sNode*% node2 = expression();
                
                skip_spaces_and_lf();
                
                paren_block.add(node2);
                
                while(*info->p == ';') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else if(*info->p == '\0') {
                    err_msg(info, "invalid source end in paren block");
                    exit(0);
                }
            }
            
            expected_next_character(')');
            
            sNode*% node = new sParenBlockNode(paren_block, info) implements sNode;
            
            skip_spaces_and_lf();
            
            return node;
        }
/*
        else if(!gComeC && tuple_expression_flag) {
            skip_spaces_and_lf();
            
            sNode*% node = parse_tuple(info, named_tuple_expression_flag);
            
            skip_spaces_and_lf();
            
            return node;
        }
*/
        else if(struct_initializer_flag) {
            skip_spaces_and_lf();
            var type, name, err = parse_type();
            
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            
            expected_next_character(')');
            skip_spaces_and_lf();
            
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
            return new sArrayInitializer(type, buf.to_string(), info) implements sNode;
        }
        else if(cast_expression_flag) {
            skip_spaces_and_lf();
            var type, name, err = parse_type();
            
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            
            expected_next_character(')');
            skip_spaces_and_lf();
            
            sNode*% node = expression_node();
            
            return new sCastNode(type, node, info) implements sNode;
        }
        else {
            sNode*% node;
            bool no_assign = info.no_assign;
            info.no_assign = false;
            
            if(gComeC && info.in_fun_param) {
                bool no_comma = info.no_comma;
                info.no_comma = false;
                skip_spaces_and_lf();
                node = expression();
                skip_spaces_and_lf();
                info.no_comma = no_comma;
            }
            else {
                skip_spaces_and_lf();
                node = expression();
                skip_spaces_and_lf();
            }
            
            info.no_assign = no_assign;
            
            expected_next_character(')');
            skip_spaces_and_lf();
            
            node = new sParenNode(node, info) implements sNode;
            
            return node;
        }
    }
    else {
        return (sNode*%)null;
    }
}

sNode*% expression_node(sInfo* info=info) version 97
{
    sNode*% node = pre_position_operator();
    
    if(node == null) {
        return inherit(info);
    }
    else {
        return node;
    }
}

