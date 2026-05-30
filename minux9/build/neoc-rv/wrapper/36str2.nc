#include "common.h"

class sStrNode extends sNodeBase
{
    new(string value, int sline, sInfo* info)
    {
        self.super();
        
        string self.value = string(value);
    }
    
    string kind()
    {
        return string("sStrNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("\"%s\"", self.value);
        come_value.type = new sType(s"char*");
        if(gComeSafe) {
            come_value.type.mConstant = true;
        }
        come_value.var = null;
        
        info.stack.push_back(come_value);
    
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
}

class sBufferNode extends sNodeBase
{
    new(buffer*% value, size_t size, sInfo* info)
    {
        self.super();
        
        buffer*% self.value = value;
        size_t self.size = size;
    }
    
    string kind()
    {
        return string("sBufferNode");
    }
    
    bool compile(sInfo* info)
    {
        buffer*% value = self.value;
        size_t size = self.size;
        
        CVALUE*% come_value = new CVALUE();
        
        buffer*% buf = new buffer();
        
        sType*% type2 = new sType(s"buffer");
        type2->mPointerNum++;
        
        sType*% any_type = new sType(s"buffer");
        any_type->mPointerNum = 1;
        any_type->mHeap = true;
        
        if(info.funcs[s"come_calloc_v2"]) {
            buf.append_format("buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc_v2(1, sizeof(struct buffer), \"%s\", %d, %d, \"buffer\"), \"%s\", %d, %d), \"%s\", %ld)", info->sname, info->sline, ++info->id, info->sname, info->sline, ++info->id, value.to_string(), size);
        }
        else {
            buf.append_format("buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, %d, \"buffer\"), \"%s\", %d, %d), \"%s\", %ld)", info->sname, info->sline, ++info->id, info->sname, info->sline, ++info.id, value.to_string(), size);
        }
        
        sType*% type2 = new sType(s"buffer*");
        type2->mHeap = true;
        
        come_value.c_value = buf.to_string();
        come_value.type = clone type2;
        come_value.var = null;
        
        append_object_to_right_values(come_value, type2,info);
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
}

class sSStringNode extends sNodeBase
{
    new(string value, list<sNode*%>*% exps, int sline, sInfo* info)
    {
        self.super();
        
        string self.value = string(value);
        list<sNode*%>*% self.exps = clone exps;
    }
    
    string kind()
    {
        return string("sSStringNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        buffer*% buf = new buffer();
        
        buf.append_str("xsprintf(\"");
        buf.append_str(self.value);
        buf.append_str("\"");
        
        if(self.exps.length() > 0) {
            foreach(it, self.exps) {
                sNode*% obj = clone it;
                
                list<tuple2<string, sNode*%>*%>*% params = new list<tuple2<string, sNode*%>*%>();
                params.add(t(s"self", clone it));
                
                sNode*% node = create_method_call("to_string", obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
                
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                buf.append_str(",");
                buf.append_str(come_value.c_value);
            }
        }
        
        buf.append_str(")");
        
        sType*% type2 = new sType(s"char*");
        type2->mHeap = true;
        
        come_value.c_value = buf.to_string();
        come_value.type = clone type2;
        come_value.var = null;
        
        append_object_to_right_values(come_value, type2,info);
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
}

class sCharNode extends sNodeBase
{
    new(int value, sInfo* info)
    {
        self.super();
        
        int self.value = value;
    }
    
    string kind()
    {
        return string("sCharNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%d", self.value);
        come_value.type = new sType(s"char");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
}

class sWCharNode extends sNodeBase
{
    new(wchar_t value, bool quote, sInfo* info)
    {
        self.super();
        
        wchar_t self.value = value;
        bool self.quote = quote;
    }
    
    string kind()
    {
        return string("sWCharNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        if(self.quote) {
            come_value.c_value = xsprintf("L'\\%o'", self.value);
        }
        else {
            come_value.c_value = xsprintf("L'%lc'", self.value);
        }
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sWStringNode extends sNodeBase
{
    new(wchar_t*% value, int sline, sInfo* info)
    {
        self.super();
        
        wchar_t*% self.value = value;
    }
    
    string kind()
    {
        return string("sWStringNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("L\"%ls\"", self.value);
        come_value.type = new sType(s"int*");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sPrefixedCharNode extends sNodeBase
{
    new(int value, string prefix, sInfo* info)
    {
        self.super();
        
        int self.value = value;
        string self.prefix = string(prefix);
    }
    
    string kind()
    {
        return string("sPrefixedCharNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s'\\%o'", self.prefix, self.value);
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
}

class sPrefixedStringNode extends sNodeBase
{
    new(string value, string prefix, int sline, sInfo* info)
    {
        self.super();
        
        string self.value = string(value);
        string self.prefix = string(prefix);
    }
    
    string kind()
    {
        return string("sPrefixedStringNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s\"%s\"", self.prefix, self.value);
        come_value.type = new sType(s"int*");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
}

class sListNode extends sNodeBase
{
    new(list<sNode*%>*% list_elements, sInfo* info)
    {
        self.super();
        
        list<sNode*%>*% self.list_elements = list_elements;
    }
    
    string kind()
    {
        return string("sListNode");
    }
    
    bool compile(sInfo* info)
    {
        list<sNode*%>* list_elements = borrow self.list_elements;
        
        list<CVALUE*%>*% params = new list<CVALUE*%>();
        sType*% list_element_type = null;
        
        if(info.exp_value) {
            err_msg(info, "nest value expression is prohibited");
            return false;
        }
        info.exp_value = true;
        
        int n = 0;
        foreach(it, list_elements) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            
            if(list_element_type) {
                check_assign_type(s"invalid list element type", list_element_type, come_value.type, come_value);
            }
            
            remove_value_from_right_value_objects(come_value, info);
            
            params.push_back(come_value);
            
            if(list_element_type) {
                check_assign_type(s"List element type", list_element_type, come_value.type, come_value);
            }
            list_element_type = clone come_value.type;
            
            n++;
        }
        info.exp_value = false;
        
        sType*% type_values = clone list_element_type;
        type_values.mArrayNum.push_back(create_int_node(params.length().to_string(), info));
        type_values->mHeap = false;
        
        static int list_value_num = 0;
        string var_name = xsprintf("__list_values%d__", ++list_value_num);
        
        add_variable_to_table(var_name, clone type_values, info, false@function_param);
        
        sVar* var_ = get_variable_from_table(info.lv_table, var_name);
        
        add_come_code_at_function_head(info, "%s;\n", make_define_var(type_values, var_->mCValueName));
        
        buffer*% source = new buffer();
        
        source.append_str("(");
        
        int i = 0;
        foreach(it, params) {
            if(list_element_type->mHeap) {
                //string c_value = increment_ref_count_object(params[i].type, params[i].c_value, info);
                source.append_format("%s[%d]=%s,\n", var_->mCValueName, i, params[i].c_value);
            }
            else {
                source.append_format("%s[%d]=%s,\n", var_->mCValueName, i, params[i].c_value);
            }
            i++;
        }
        
        //source.append_str(")");
        
        //add_come_code(info, "%s", source.to_string());
        
        sType*% list_type = new sType(s"list");
        list_type->mGenericsTypes.push_back((clone list_element_type));
        
        sType*% obj_type = clone list_type;
        const char* fun_name = "initialize_with_values";
        
        var name, generics_fun = make_generics_function(obj_type, string(fun_name), info);
        string generics_fun_name = name;
        
        sFun* fun = borrow info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
            
            fun = borrow info.funcs.at(generics_fun_name, null);
            
            if(fun == null) {
                err_msg(info, "function not found(%s) at method(%s)(1)", generics_fun_name, info.come_fun.mName);
                return true;
            }
        }
            
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
        
        sType*% type = list_type;
        
        CVALUE*% obj_value = new CVALUE();
        
        buffer*% num_string = new buffer();
        
        num_string.append_str("1");
        
        sType*% type2_ = solve_generics(type, type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        string type_name = make_type_name_string(type2, cast_type:true);
        
        sType*% any_type = type2;
        any_type->mPointerNum = 1;
        any_type->mHeap = true;
        
        if(info.funcs[s"come_calloc_v2"]) {
            obj_value.c_value = xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name);
        }
        else {
            obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name);
        }
        
        sType*% type3 = clone type2;
        type3->mPointerNum++;
        type3->mHeap = true;
        type2->mHeap = true;
        obj_value.type = clone type2;
        //obj_value.type->mPointerNum ++;
        obj_value.var = null;
        
        append_object_to_right_values(obj_value, type3 ,info);
            
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
            std_move(fun.mParamTypes[0], obj_value.type, obj_value);
        }
        come_params.push_back(obj_value);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("%d", params.length());
        come_value2.type = null; // no required
        come_value2.var = null;
        
        come_params.push_back(come_value2);
        
        CVALUE*% come_value3 = new CVALUE();
        
        come_value3.c_value = xsprintf("%s", var_->mCValueName);
        come_value3.type = null; // no required
        come_value3.var = null;
        
        come_params.push_back(come_value3);
        
        //buffer*% buf = new buffer();
        
        source.append_str(generics_fun_name);
        source.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            source.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                source.append_str(",");
            }
            
            j++;
        }
        source.append_str(")");
        source.append_str(")");
        
        CVALUE*% come_value4 = new CVALUE();
        
        come_value4.c_value = source.to_string();
        
        come_value4.type = clone result_type;
        come_value4.type->mStatic = false;
        come_value4.var = null;
        
        if(result_type->mHeap) {
            append_object_to_right_values(come_value4, result_type, info);
        }
        
        info.stack.push_back(come_value4);
        
        add_come_last_code(info, "%s", come_value4.c_value);
        
        return true;
    }
};

class sVectorNode extends sNodeBase
{
    new(list<sNode*%>*% list_elements, sInfo* info)
    {
        self.super();
        
        list<sNode*%>*% self.list_elements = list_elements;
    }
    
    string kind()
    {
        return string("sVectorNode");
    }
    
    bool compile(sInfo* info)
    {
        list<sNode*%>* list_elements = borrow self.list_elements;
        
        list<CVALUE*%>*% params = new list<CVALUE*%>();
        sType*% list_element_type = null;
        
        if(info.exp_value) {
            err_msg(info, "nest value expression is prohibited");
            return false;
        }
        info.exp_value = true;
        
        int n = 0;
        foreach(it, list_elements) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            
            if(list_element_type) {
                check_assign_type(s"invalid list element type", list_element_type, come_value.type, come_value);
            }
            
            remove_value_from_right_value_objects(come_value, info);
            
            params.push_back(come_value);
            
            if(list_element_type) {
                check_assign_type(s"Vector element type", list_element_type, come_value.type, come_value);
            }
            list_element_type = clone come_value.type;
            
            n++;
        }
        info.exp_value = false;
        
        sType*% type_values = clone list_element_type;
        type_values.mArrayNum.push_back(create_int_node(params.length().to_string(), info));
        type_values->mHeap = false;
        
        static int list_value_num = 0;
        string var_name = xsprintf("__vector_values%d__", ++list_value_num);
        
        add_variable_to_table(var_name, clone type_values, info, false@function_param);
        
        sVar* var_ = get_variable_from_table(info.lv_table, var_name);
        
        add_come_code_at_function_head(info, "%s;\n", make_define_var(type_values, var_->mCValueName));
        
        buffer*% source = new buffer();
        
        source.append_str("({");
        
        int i = 0;
        foreach(it, params) {
            if(list_element_type->mHeap) {
                //string c_value = increment_ref_count_object(params[i].type, params[i].c_value, info);
                source.append_format("%s[%d]=%s;", var_->mCValueName, i, params[i].c_value);
            }
            else {
                source.append_format("%s[%d]=%s;", var_->mCValueName, i, params[i].c_value);
            }
            i++;
        }
        
        //source.append_str(")");
        
        //add_come_code(info, "%s", source.to_string());
        
        sType*% list_type = new sType(s"vector");
        list_type->mGenericsTypes.push_back((clone list_element_type));
        
        sType*% obj_type = clone list_type;
        const char* fun_name = "initialize_with_values";
        
        var name, generics_fun = make_generics_function(obj_type, string(fun_name), info);
        string generics_fun_name = name;
        
        sFun* fun = borrow info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
            
            fun = borrow info.funcs.at(generics_fun_name, null);
            
            if(fun == null) {
                err_msg(info, "function not found(%s) at method(%s)(1)", generics_fun_name, info.come_fun.mName);
                return true;
            }
        }
            
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
        
        sType*% type = list_type;
        
        CVALUE*% obj_value = new CVALUE();
        
        buffer*% num_string = new buffer();
        
        num_string.append_str("1");
        
        sType*% type2_ = solve_generics(type, type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        string type_name = make_type_name_string(type2, cast_type:true);
        
        sType*% any_type = type2;
        any_type->mPointerNum = 1;
        any_type->mHeap = true;
        
        if(info.funcs[s"come_calloc_v2"]) {
            obj_value.c_value = xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name);
        }
        else {
            obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name);
        }
        
        sType*% type3 = clone type2;
        type3->mPointerNum++;
        type3->mHeap = true;
        type2->mHeap = true;
        obj_value.type = clone type2;
        //obj_value.type->mPointerNum ++;
        obj_value.var = null;
        
        append_object_to_right_values(obj_value, type3 ,info);
            
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
            std_move(fun.mParamTypes[0], obj_value.type, obj_value);
        }
        come_params.push_back(obj_value);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("%d", params.length());
        come_value2.type = null; // no required
        come_value2.var = null;
        
        come_params.push_back(come_value2);
        
        CVALUE*% come_value3 = new CVALUE();
        
        come_value3.c_value = xsprintf("%s", var_->mCValueName);
        come_value3.type = null; // no required
        come_value3.var = null;
        
        come_params.push_back(come_value3);
        
        //buffer*% buf = new buffer();
        
        source.append_str(generics_fun_name);
        source.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            source.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                source.append_str(",");
            }
            
            j++;
        }
        source.append_str(");");
        source.append_str("})");
        
        CVALUE*% come_value4 = new CVALUE();
        
        come_value4.c_value = source.to_string();
        
        come_value4.type = clone result_type;
        come_value4.type->mStatic = false;
        come_value4.var = null;
        
        if(result_type->mHeap) {
            append_object_to_right_values(come_value4, result_type, info);
        }
        
        info.stack.push_back(come_value4);
        
        add_come_last_code(info, "%s", come_value4.c_value);
        
        return true;
    }
};

class sTupleNode extends sNodeBase
{
    new(list<tuple2<string, sNode*%>*%>*% tuple_elements, sInfo* info)
    {
        self.super();
        
        list<tuple2<string, sNode*%>*%>*% self.tuple_elements = tuple_elements;
    }
    
    string kind()
    {
        return string("sTupleNode");
    }
    
    bool compile(sInfo* info)
    {
        list<tuple2<string, sNode*%>*%>*% tuple_elements = self.tuple_elements;
        list<sType*%>*% tuple_types = new list<sType*%>();
        list<CVALUE*%>*% tuple_values = new list<CVALUE*%>();
        
        if(info.exp_value) {
            err_msg(info, "nest value expression is prohibited");
            return false;
        }
        info.exp_value = true;
        
        int n = 0;
        foreach(it, tuple_elements) {
            var name, node = it;
            
            node_compile(node).elif {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            
            tuple_values.push_back(clone come_value);
            sType*% type = clone come_value.type;
            type->mTupleName = name;
            tuple_types.push_back(type);
            
            n++;
        }
        
        info.exp_value = false;
        
        sType*% type = new sType(xsprintf("tuple%d", tuple_types.length()));
        
        foreach(it, tuple_types) {
            type->mGenericsTypes.push_back((clone it));
        }
        
        CVALUE*% obj_value = new CVALUE();
        
        buffer*% num_string = new buffer();
        
        num_string.append_str("1");
        
        sType*% type2_ = solve_generics(type, type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        string type_name = make_type_name_string(type2, cast_type:true);
        
        sType*% any_type = type2;
        any_type->mPointerNum = 1;
        any_type->mHeap = true;
        
        if(info.funcs[s"come_calloc_v2"]) {
            obj_value.c_value = xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name);
        }
        else {
            obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name);
        }
        
        sType*% type3 = clone type2;
        type3->mPointerNum++;
        type3->mHeap = true;
        type2->mHeap = true;
        obj_value.type = clone type2;
//        obj_value.type->mPointerNum ++;
        obj_value.var = null;
        
        append_object_to_right_values(obj_value, type3 ,info);
        
        sType*% obj_type = clone type2;
        const char* fun_name = "initialize";
        
        var name, generics_fun = make_generics_function(obj_type, string(fun_name), info);
        string generics_fun_name = name;
        
        sFun* fun = borrow info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
            
            fun = borrow info.funcs.at(generics_fun_name, null);
            
            if(fun == null) {
                err_msg(info, "function not found(%s) at method(%s)(2)", generics_fun_name, info.come_fun.mName);
                return true;
            }
        }
            
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
            
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
            std_move(fun.mParamTypes[0], obj_value.type, obj_value);
        }
        come_params.push_back(obj_value);
    
        int i = 1;
        foreach(it, tuple_values) {
            CVALUE*% come_value = clone it;
            
            if(fun.mParamTypes[i] && fun.mParamTypes[i].mHeap && come_value.type.mHeap) {
                std_move(fun.mParamTypes[i], come_value.type, come_value);
            }
            come_params.push_back(come_value);
            
            i++;
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str(generics_fun_name);
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
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = buf.to_string();
        
        come_value2.type = clone result_type;
        come_value2.type->mStatic = false;
        come_value2.var = null;
        
        if(result_type->mHeap) {
            append_object_to_right_values(come_value2, result_type, info);
        }
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sMapNode extends sNodeBase
{
    new(list<sNode*%>*% map_key_elements, list<sNode*%>*% map_elements, sInfo* info)
    {
        self.super();
        
        list<sNode*%>*% self.map_key_elements = map_key_elements;
        list<sNode*%>*% self.map_elements = map_elements;
    }
    
    string kind()
    {
        return string("sMapNode");
    }
    
    bool compile(sInfo* info)
    {
        list<sNode*%>*% map_key_elements = self.map_key_elements;
        list<sNode*%>*% map_elements = self.map_elements;
    
        list<CVALUE*%>*% key_params = new list<CVALUE*%>();
        list<CVALUE*%>*% element_params = new list<CVALUE*%>();
        sType*% map_key_type = null;
        sType*% map_element_type = null;
        
        if(info.exp_value) {
            err_msg(info, "nest value expression is prohibited");
            return false;
        }
        info.exp_value = true;
        
        for(int i=0; i<map_key_elements.length(); i++) {
            sNode* key_elements = borrow map_key_elements[i];
            sNode* elements = borrow map_elements[i];
            
            node_compile(key_elements).elif {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            
            remove_value_from_right_value_objects(come_value, info);
            
            if(map_key_type) {
                check_assign_type(s"Map key type", map_key_type, come_value.type, come_value);
            }
            
            key_params.push_back(come_value);
            map_key_type = clone come_value.type;
            
            node_compile(elements).elif {
                return false;
            }
            
            CVALUE*% come_value2 = get_value_from_stack(-1, info);
            
            remove_value_from_right_value_objects(come_value2, info);
            
            if(map_element_type) {
                check_assign_type(s"Map element type", map_element_type, come_value2.type, come_value2);
            }
            
            element_params.push_back(come_value2);
            map_element_type = clone come_value2.type;
        }
        info.exp_value = false;
        
        static int map_value_num = 0;
        
        sType*% key_type_values = clone map_key_type;
        key_type_values.mArrayNum.push_back(create_int_node(key_params.length().to_string(), info));
        key_type_values->mHeap = false;
        
        string var_name = xsprintf("__map_keys%d__", ++map_value_num);
        
        add_variable_to_table(var_name, clone key_type_values, info, false@function_param);
        
        sVar* var_ = get_variable_from_table(info.lv_table, var_name);
        
        add_come_code_at_function_head(info, "%s;\n", make_define_var(key_type_values, var_->mCValueName));
        
        sType*% element_type_values = clone map_element_type;
        element_type_values.mArrayNum.push_back(create_int_node(element_params.length().to_string(), info));
        element_type_values->mHeap = false;
        
        string var_name2 = xsprintf("__map_element%d__", map_value_num);
        
        add_variable_to_table(var_name2, clone element_type_values, info, false@function_param);
        
        sVar* var2_ = get_variable_from_table(info.lv_table, var_name2);
        
        add_come_code_at_function_head(info, "%s;\n", make_define_var(element_type_values, var2_->mCValueName));
        
        buffer*% source = new buffer();
        
        source.append_str("(");
        
        for(int i = 0; i<key_params.length(); i++) {
            CVALUE* key_param = borrow key_params[i];
            CVALUE* element_param = borrow element_params[i];
            
            if(map_key_type->mHeap) {
                //string c_value = increment_ref_count_object(key_param.type, key_param.c_value, info);
                source.append_format("%s[%d]=%s,\n", var_->mCValueName, i, key_param.c_value);
            }
            else {
                source.append_format("%s[%d]=%s,\n", var_->mCValueName, i, key_param.c_value);
            }
            
            if(map_element_type->mHeap) {
                //string c_value = increment_ref_count_object(element_param.type, element_param.c_value, info);
                source.append_format("%s[%d]=%s,\n", var2_->mCValueName, i, element_param.c_value);
            }
            else {
                source.append_format("%s[%d]=%s,\n", var2_->mCValueName, i, element_param.c_value);
            }
        }
        
        sType*% map_type = new sType(s"map");
        map_type->mGenericsTypes.push_back((clone map_key_type));
        map_type->mGenericsTypes.push_back((clone map_element_type));
        
        sType*% obj_type = clone map_type;
        const char* fun_name = "initialize_with_values";
        
        var name, generics_fun = make_generics_function(obj_type, string(fun_name), info);
        string generics_fun_name = name;
        
        sFun* fun = borrow info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
            
            fun = borrow info.funcs.at(generics_fun_name, null);
            
            if(fun == null) {
                err_msg(info, "function not found(%s) at method(%s)(3)", generics_fun_name, info.come_fun.mName);
                return true;
            }
        }
            
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
        
        sType*% type = map_type;
        
        CVALUE*% obj_value = new CVALUE();
        
        buffer*% num_string = new buffer();
        
        num_string.append_str("1");
        
        sType*% type2_ = solve_generics(type, type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        string type_name = make_type_name_string(type2, cast_type:true);
        
        sType*% any_type = type2;
        any_type->mPointerNum = 1;
        any_type->mHeap = true;
        
        if(info.funcs[s"come_calloc_v2"]) {
            obj_value.c_value = xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name);
        }
        else {
            obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name);
        }
        
        sType*% type3 = clone type2;
        type3->mPointerNum++;
        type3->mHeap = true;
        type2->mHeap = true;
        obj_value.type = clone type2;
        //obj_value.type->mPointerNum ++;
        obj_value.var = null;
        
        append_object_to_right_values(obj_value, type3 ,info);
            
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
            std_move(fun.mParamTypes[0], obj_value.type, obj_value);
        }
        come_params.push_back(obj_value);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("%d", key_params.length());
        come_value2.type = null; // no required
        come_value2.var = null;
        
        come_params.push_back(come_value2);
        
        CVALUE*% come_value3 = new CVALUE();
        
        come_value3.c_value = xsprintf("%s", var_->mCValueName);
        come_value3.type = null; // no required
        come_value3.var = null;
        
        come_params.push_back(come_value3);
        
        CVALUE*% come_value4 = new CVALUE();
        
        come_value4.c_value = xsprintf("%s", var2_->mCValueName);
        come_value4.type = null; // no required
        come_value4.var = null;
        
        come_params.push_back(come_value4);
        
        //buffer*% buf = new buffer();
        
        source.append_str(generics_fun_name);
        source.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            source.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                source.append_str(",");
            }
            
            j++;
        }
        source.append_str(")");
        source.append_str(")");
        
        CVALUE*% come_value5 = new CVALUE();
        
        come_value5.c_value = source.to_string();
        come_value5.type = clone result_type;
        come_value5.type->mStatic = false;
        come_value5.var = null;
        
        if(result_type->mHeap) {
            append_object_to_right_values(come_value5, result_type, info);
        }
        
        add_come_last_code(info, "%s", come_value5.c_value);
        
        info.stack.push_back(come_value5);
        
        return true;
    }
};

sNode*% create_str_node(string value, int sline, sInfo* info)
{
    return new sStrNode(value, sline, info) implements sNode;
}

sNode*% create_buffer_node(buffer*% value, size_t size, sInfo* info)
{
    return new sBufferNode(value, size, info) implements sNode;
}

sNode*% create_sstring_node(string value, list<sNode*%>*% exps, int sline, sInfo* info)
{
    return new sSStringNode(value, exps, sline, info) implements sNode;
}

sNode*% create_char_node(int value, sInfo* info)
{
    return new sCharNode(value, info) implements sNode;
}

sNode*% create_wchar_node(wchar_t value, bool quote, sInfo* info)
{
    return new sWCharNode(value, quote, info) implements sNode;
}

sNode*% create_wstring_node(wchar_t*% value, int sline, sInfo* info)
{
    return new sWStringNode(value, sline, info) implements sNode;
}

sNode*% create_prefixed_char_node(int value, string prefix, sInfo* info)
{
    return new sPrefixedCharNode(value, prefix, info) implements sNode;
}

sNode*% create_prefixed_string_node(string value, string prefix, int sline, sInfo* info)
{
    return new sPrefixedStringNode(value, prefix, sline, info) implements sNode;
}

sNode*% create_list_node(list<sNode*%>*% list_elements, sInfo* info)
{
    return new sListNode(list_elements, info) implements sNode;
}

sNode*% create_vector_node(list<sNode*%>*% list_elements, sInfo* info)
{
    return new sVectorNode(list_elements, info) implements sNode;
}

sNode*% create_tuple_node(list<tuple2<string, sNode*%>*%>*% tuple_elements, sInfo* info)
{
    return new sTupleNode(tuple_elements, info) implements sNode;
}

sNode*% create_map_node(list<sNode*%>*% map_key_elements, list<sNode*%>*% map_elements, sInfo* info)
{
    return new sMapNode(map_key_elements, map_elements, info) implements sNode;
}

