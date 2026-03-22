#include "common.h"

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

sNode*% parse_function(sInfo* info)
{
    char* header_head = info.p;
    char* source_head = info.p;
    
    var asm_fun, fun_attribute_prefix = parse_function_attribute();
    string fun_attribute = s"";
    string fun_attribute_middle = s"";
    //string attribute = parse_struct_attribute();
    
    sType*% result_type = null;
    string var_name = null;
    bool constructor_ = false;

    if(info.in_class && (info->end - info->p) >= strlen("new(") && memcmp(info.p, "new(", 4) == 0) {
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
        char* p = info.p;
        int sline = info.sline;
        
        bool flag = false;
        while(NEO_IS_ASCII_ALNUM(*info->p) || *info->p == '_') {
            flag = true;
            parse_word();
        }
        
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf();
        }
        while(*info->p == '[' && *(info->p+1) == ']') {
            info->p+=2;
            skip_spaces_and_lf();
        }
        while(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf();
        }
        if(flag && *info->p == ':' && *(info->p+1) == ':') {
            method_definition = true;
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    string fun_name;
    char*% base_fun_name = null;
    if(constructor_) {
        base_fun_name = string("initialize");
        fun_name = create_method_name(info->class_type, false@no_pointer_name, base_fun_name, info);
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
    }
    else if(info->impl_type) {
        if(result_type->mClass->mIter) {
            base_fun_name = parse_word();
        
            fun_name = create_method_name(info->impl_type, false@no_pointer_name, base_fun_name, info);
        }
        else {
            base_fun_name = parse_word();
        
            fun_name = create_method_name(info->impl_type, false@no_pointer_name, base_fun_name, info);
        }
    }
    else if(info->class_type) {
        base_fun_name = parse_word();
    
        fun_name = create_method_name(info->class_type, false@no_pointer_name, base_fun_name, info);
    }
    else {
        fun_name = parse_word();
        base_fun_name = string(fun_name);
    }
    
    if(info.in_class && base_fun_name === "initialize") {
        info.in_class = false;
    }
    
    var param_types, param_names, param_default_parametors, var_args = parse_params(info, constructor_);
    char* header_tail = info.p;
    if(info.in_class && base_fun_name === "initialize") {
        info.in_class = true;
    }
    
    bool const_fun = false;
    
    int version = 0;
    if(parsecmp("version")) {
        info->p += strlen("version");
        skip_spaces_and_lf();
        
        int n = 0;
        while(NEO_IS_ASCII_DIGIT(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
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
    else if(*info->p == '{') {
        char* source_tail = info.p -1;
        
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
                char* p = info.p;
                int sline = info.sline;
                int sline_real = info.sline_real;
                int sline_top = info.sline_top;
                string sname = string(info.sname);
                char* head = info.head;
                buffer*% source = info.source;
                
                info.source = block.to_buffer();
                if(info.p == null) {
                    info.p = borrow info.source.buf;
                }
                info.p = borrow info.source.buf;
                info.head = borrow info.source.buf;
                
                info.sline = generics_sline;
                info.sline_real = generics_sline;
                info.sline_top = generics_sline;
                info.sname = string(generics_sname);
                
                parse_block(in_function:true);
                
                info.head = head;
                info.source = source;
                if(info.p == null) {
                    info.p = borrow info.source.buf;
                }
                info.p = borrow info.source.buf;
                info.p = p;
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
    else if(NEO_IS_ASCII_ALPHA(*info->p) || *info->p == '_' || *info->p == ';') {
        if(version > 0) {
            string new_fun_name = xsprintf("%s_v%d", fun_name, version);
            fun_name = string(new_fun_name);
        }
        
        if(*info->p == ';') {
            info->p++;
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
        err_msg(info, "invalid character(2)(%c)", *info->p);
        exit(2);
    }
    
    info.constructor_ = false;
    
    info.in_top_level = in_top_level;
    
    return (sNode*%)null;
}
