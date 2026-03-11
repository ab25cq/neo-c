#include "common.h"

class sNewNode extends sNodeBase
{
    new(sType* type, list<tuple2<string, sNode*%>*%>*% initializer, sNode*% initializer_num, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
        list<tuple2<string, sNode*%>*%>*% self.initializer = initializer;
        sNode*% self.initializer_num = initializer_num;
    }
    
    string kind()
    {
        return string("sNewNode");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = self.type;
        list<tuple2<string, sNode*%>*%>*% initializer = self.initializer;
        sNode*% initializer_num = self.initializer_num;
        
        CVALUE*% come_value = new CVALUE();
        
        buffer*% num_string = new buffer();
        
        num_string.append_str("1");
        
        foreach(it, type->mArrayNum) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% cvalue = get_value_from_stack(-1, info);
            
            num_string.append_format("*(%s)", cvalue.c_value);
        }
        
        sType*% type2_ = solve_generics(type, info->generics_type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        type2->mHeapArrayNum = clone type2->mArrayNum;
        type2->mArrayNum.reset();
        type2->mNew = true;
        
        string type_name = make_type_name_string(type2, cast_type:true, no_static:true);
        
        string type_name2 = make_come_type_name_string(type2);
        
        if(initializer_num) {
            static int var_num = 1;
            var_num++;
            
            string var_name = xsprintf("__new_num__%d", var_num);
            
            sType*% type3 = clone type2;
            type3->mPointerNum++;
            if(type3->mNoSolvedGenericsType) {
                type3->mNoSolvedGenericsType.mPointerNum++;
            }
            
            string type_name3 = make_type_name_string(type3);
            
            add_come_code_at_function_head(info, "%s;\n", make_define_var(type3, var_name));
            
            var buf = new buffer();
            
            buf.append_str("({");
            
            string obj;
            if(info.funcs[s"come_calloc_v2"]) {
                obj = xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", var_name, type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name3);
            }
            else {
                obj = xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", var_name, type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name3);
            }
            
            buf.append_str(obj);
            buf.append_str(";");
            
            sClass* klass = type3->mClass;
            
            node_compile(initializer_num).elif {
                return false;
            }
                
            CVALUE*% come_value2 = get_value_from_stack(-1, info);
            
            buf.append_str("*" + var_name + "= " + come_value2.c_value + ";");
                
            buf.append_str(var_name);
            buf.append_str("; })");
            
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = buf.to_string();
            
            type2->mHeap = true;
            type2->mPointerNum++;
            
            if(type2->mNoSolvedGenericsType) {
                type2->mNoSolvedGenericsType->mPointerNum++;
                type2->mNoSolvedGenericsType->mHeap = true;
            }
            
            come_value.type = clone type2;
            come_value.var = null;
            
            append_object_to_right_values(come_value, type2, info);
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
        else if(initializer) {
            static int var_num = 1;
            var_num++;
            
            string var_name = xsprintf("__new_obj__%d", var_num);
            
            sType*% type3 = clone type2;
            type3->mPointerNum++;
            if(type3->mNoSolvedGenericsType) {
                type3->mNoSolvedGenericsType.mPointerNum++;
            }
            
            string type_name3 = make_type_name_string(type3);
            
            add_come_code_at_function_head(info, "%s;\n", make_define_var(type3, var_name));
            
            var buf = new buffer();
            
            buf.append_str("({");
            
            string obj;
            if(info.funcs[s"come_calloc_v2"]) {
                obj = xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", var_name, type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name3);
            }
            else {
                obj = xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", var_name, type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name3);
            }
            
            buf.append_str(obj);
            buf.append_str(";");
            
            sClass* klass = type3->mClass;
            
            int i = 0;
            foreach(it, initializer) {
                var name, exp = it;
                
                node_compile(exp).elif {
                    return false;
                }
                
                CVALUE*% come_value2 = get_value_from_stack(-1, info);
                
                sType*% left_type = null;
                foreach(it2, klass->mFields) {
                    var field_name, field_type = it2;
                    
                    if(name === field_name) {
                        left_type = clone field_type;
                        break;
                    }
                }
                
                if(left_type == null) {
                    err_msg(info, "field %s is not defined", name);
                    return true;
                }
                
                sType*% right_type = come_value2.type;
                
                check_assign_type(s"\{name} is assining to", left_type, right_type, come_value2);
                
                right_type = come_value2.type;
                
                if(left_type->mHeap && right_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0) {
                    string c_value = increment_ref_count_object(left_type, come_value2.c_value, info);
                    buf.append_format("%s->%s = %s", var_name, name, c_value);
                }
                else {
                    buf.append_format("%s->%s = %s", var_name, name, come_value2.c_value);
                }
                
                buf.append_str(";");
                
                i++;
            }
            
            buf.append_str(var_name);
            buf.append_str("; })");
            
            come_value.c_value = buf.to_string();
            
            type2->mHeap = true;
            type2->mPointerNum++;
            
            if(type2->mNoSolvedGenericsType) {
                type2->mNoSolvedGenericsType->mPointerNum++;
                type2->mNoSolvedGenericsType->mHeap = true;
            }
            
            come_value.type = clone type2;
            come_value.var = null;
            
            append_object_to_right_values(come_value, type2, info);
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
        else {
            sType*% type3 = clone type2;
            type3->mPointerNum++;
            type3->mHeap = true;
            
            if(type3->mNoSolvedGenericsType) {
                type3->mNoSolvedGenericsType.mPointerNum++;
                type3->mNoSolvedGenericsType.mHeap = true;
            }
            
            string type_name3 = make_type_name_string(type3);
            
            if(info.funcs[s"come_calloc_v2"]) {
                come_value.c_value = xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name3);
            }
            else {
                come_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, ++info.id, type_name3);
            }
            
            type2->mHeap = true;
            type2->mPointerNum++;
                
            if(type2->mNoSolvedGenericsType) {
                type2->mNoSolvedGenericsType->mPointerNum++;
                type2->mNoSolvedGenericsType->mHeap = true;
            }
            
            come_value.type = clone type2;
            come_value.var = null;
            
            append_object_to_right_values(come_value, type2 ,info);
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
        
        return true;
    }
};

class sDeferNode extends sNodeBase
{
    new(sBlock*% block, sInfo* info=info)
    {
        self.super();
        
        sBlock*% self.block = block;
    }
    
    string kind()
    {
        return string("sDeferNode");
    }
    
    bool compile(sInfo* info)
    {
        sBlock*% block = self.block;
        
        bool defer_block = info.defer_block;
        info.defer_block = true;
        
        transpile_block(block, null, null, info);
        
        info.defer_block = defer_block;
        
        return true;
    }
};


sNode*% create_new_object(sType*% type, sInfo* info=info)
{
    return new sNewNode(type, null, null, info) implements sNode;
}

class sImplementsNode extends sNodeBase
{
    new(sNode*% obj_exp, sType* inf_type, sInfo* info)
    {
        self.super();
        
        sNode*% self.obj_exp = clone obj_exp;
        sType*% self.inf_type = clone inf_type;
    }
    
    string kind()
    {
        return string("sImplementsNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% obj_exp = clone self.obj_exp;
        sType*% inf_type = clone self.inf_type;
        
        node_compile(obj_exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType*% type = clone come_value.type;
        type->mPointerNum--;
        type->mHeap = false;
        
        sClass* klass = inf_type->mClass;
        
        CVALUE*% come_value2 = new CVALUE();
        
        sType*% type2 = clone inf_type;
        
        string type_name = make_type_name_string(inf_type, cast_type:true);
        string type_name2 = make_type_name_string(type, cast_type:true);
        
        static int inf_num = 0;
        ++inf_num;
        int inf_num_stack = inf_num;
        
        string buf = xsprintf("%s* _inf_value%d;\n", type_name, inf_num_stack);
        add_come_code_at_function_head(info, buf);
        string buf2 = xsprintf("%s* _inf_obj_value%d;\n", type_name2, inf_num_stack);
        add_come_code_at_function_head(info, buf2);
        
        if(info.funcs[s"come_calloc_v2"]) {
            add_come_code(info, "_inf_value%d=(%s*)come_calloc_v2(1, sizeof(%s), \"%s\", %d, %d, \"%s\");\n", inf_num_stack, type_name, type_name, info.sname, info.sline, ++info.id, type_name);
        }
        else {
            add_come_code(info, "_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, %d, \"%s\");\n", inf_num_stack, type_name, type_name, info.sname, info.sline, ++info.id, type_name);
        }
        
        string c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
        add_come_code(info, "_inf_obj_value%d=%s;\n", inf_num_stack, c_value);
        add_come_code(info, "_inf_value%d->_protocol_obj=_inf_obj_value%d;\n", inf_num_stack, inf_num_stack);
        
        sType*% typeX = clone type;
        typeX->mPointerNum++;
        
        create_finalizer_automatically(typeX, "finalize", info);
        create_cloner_automatically(typeX, "clone", info);
        
        for(int i=1; i<klass->mFields.length(); i++) {
            var name, field_type = klass->mFields[i];
            
            string method_name = create_method_name(type, false@no_pointer_name, name, info);
            
            sFun* fun = borrow info.funcs.at(method_name, null);
            
            if(fun == null && name === "to_string") {
                sType*% type2 = clone type;
                type2->mPointerNum++;
                
                if(require_explicit_method_in_low_memory_mode(type2, name, info)) {
                    return false;
                }
                
                var fun2, real_fun_name = create_to_string_automatically(type2, name, info);
                
                fun = fun2;
                method_name = real_fun_name;
            }
            if(fun == null && name === "equals") {
                sType*% type2 = clone type;
                type2->mPointerNum++;
                
                if(require_explicit_method_in_low_memory_mode(type2, name, info)) {
                    return false;
                }
                
                var fun2, real_fun_name = create_equals_automatically(type2, name, info);
                
                fun = fun2;
                method_name = real_fun_name;
            }
            
            if(fun == null) {
                sClass* klass2 = borrow info->classes[type->mClass->mName];
                while(info->classes[klass2->mParentClassName]) {
                    klass2 = borrow info->classes[klass2->mParentClassName];
                    
                    method_name = create_method_name_using_class(klass2, name, info);
                    
                    fun = borrow info.funcs.at(string(method_name), null);
                    
                    if(fun) {
                        break;
                    }
                }
                
                add_come_code(info, "_inf_value%d->%s=(void*)%s;\n", inf_num_stack, name, method_name);
            }
            else {
                add_come_code(info, "_inf_value%d->%s=(void*)%s;\n", inf_num_stack, name, method_name);
            }
        }
        
        come_value2.c_value = xsprintf("_inf_value%d", inf_num_stack);
        
        sType*% type3 = clone inf_type;
        type3->mPointerNum++;
        type3->mHeap = true;
        type2->mHeap = true;
        
        come_value2.type = clone type2;
        come_value2.type->mPointerNum ++;
        come_value2.var = null;
        
        append_object_to_right_values(come_value2, type3 ,info);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sTrueNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sTrueNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("(_Bool)1");
        come_value.type = new sType(s"_Bool");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

sNode*% create_true_object(sInfo* info)
{
    return new sTrueNode(info) implements sNode;
}

class sFalseNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sFalseNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("(_Bool)0");
        come_value.type = new sType(s"_Bool");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

sNode*% create_false_object(sInfo* info)
{
    return new sFalseNode(info) implements sNode;
}

class sGeneric extends sNodeBase
{
    new(sNode*% exp, list<sType*%>*% types, list<sNode*%>*% exps, sNode*% default_exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = exp;
        list<sType*%>*% self.types = types;
        list<sNode*%>*% self.exps = exps;
        sNode*% self.default_exp = default_exp;
    }
    
    string kind()
    {
        return string("sGeneric");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        list<sNode*%>*% exps = self.exps;
        list<sType*%>*% types = self.types;
        sNode*% default_exp = self.default_exp;
        
        buffer*% buf = new buffer();
        
        node_compile(exp).elif {
            return false;
        }
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        buf.append_format("_Generic((%s), ", come_value.c_value);
        
        sType*% result_type = null;
        if(default_exp) {
            int n = 0;
            foreach(it, exps) {
                sType*% type = types[n];
                
                node_compile(it).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                result_type = come_value.type;
                
                buf.append_format("%s: %s", make_type_name_string(type), come_value.c_value);
                
                buf.append_format(",");
                
                n++;
            }
            
            node_compile(default_exp).elif {
                return false;
            }
                
            CVALUE*% come_value = get_value_from_stack(-1, info);
                
            buf.append_format("default: %s", come_value.c_value);
                
            buf.append_format(")");
        }
        else {
            int n = 0;
            foreach(it, exps) {
                sType*% type = types[n];
                
                node_compile(it).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                result_type = come_value.type;
                
                buf.append_format("%s: %s", make_type_name_string(type), come_value.c_value);
                
                if(n == exps.length() -1) {
                    buf.append_format(")");
                }
                else {
                    buf.append_format(",");
                }
                
                n++;
            }
        }
        
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = buf.to_string();
        come_value2.type = result_type;
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sHeapSizeOfNode extends sNodeBase
{
    new(sType* type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sHeapSizeOfNode");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        var type2_ = solve_generics(type, info->generics_type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        type2->mPointerNum--;
        
        string type_name = make_type_name_string(type2, no_static:true, typedef_extended:true);
        
        var buf = new buffer();
        buf.append_format("sizeof(%s)", type_name);
        foreach(it, type->mHeapArrayNum) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% cvalue = get_value_from_stack(-1, info);
            
            buf.append_format("*(%s)", cvalue.c_value);
        }
        
        come_value.c_value = buf.to_string();
        come_value.type = new sType(s"long");
        come_value.type->mUnsigned = true;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sSizeOfNode extends sNodeBase
{
    new(sType* type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sSizeOfNode");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        var type2_ = solve_generics(type, info->generics_type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        string type_name = make_type_name_string(type2, no_static:true, typedef_extended:true);
        
        come_value.c_value = xsprintf("sizeof(%s)", type_name);
        come_value.type = new sType(s"long");
        come_value.type->mUnsigned = true;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sOffsetOf extends sNodeBase
{
    new(sType* type, string name, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
        string self.name = clone name;
    }
    
    string kind()
    {
        return string("sOffsetOf");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = self.type;
        string name = self.name;
        
        CVALUE*% come_value = new CVALUE();
        
        var type2_ = solve_generics(type, info->generics_type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        string type_name = make_type_name_string(type2, no_static:true);
        
        come_value.c_value = xsprintf("__builtin_offsetof(%s, %s)", type_name, name);
        come_value.type = new sType(s"long");
        come_value.type->mUnsigned = true;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sSizeOfExpNode extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
        
        return self;
    }
    
    string kind()
    {
        return string("sSizeOfExpNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("sizeof(%s)", come_value.c_value);
        come_value2.type = new sType(s"long");
        come_value2.type->mUnsigned = true;
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sDynamicSizeOfExpNode extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
        
        return self;
    }
    
    string kind()
    {
        return string("sSizeOfExpNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("dynamic_sizeof(%s, \"%s\", %d)", come_value.c_value, info.sname, info.sline);
        come_value2.type = new sType(s"long");
        come_value2.type->mUnsigned = true;
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sTypeOfNode extends sNodeBase
{
    new(sType* type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sTypeOfNode");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = self.type;
        
        CVALUE*% come_value = new CVALUE();
    
        var type2_ = solve_generics(type, info->generics_type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        string type_name = make_type_name_string(type2);
        
        come_value.c_value = xsprintf("\"%s\"", type_name);
        come_value.type = new sType(s"char*");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sTypeOfExpNode extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
    }
    
    string kind()
    {
        return string("sTypeOfExpNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType*% type = clone come_value.type;
        
        var type2_ = solve_generics(type, info->generics_type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        string type_name = make_type_name_string(type2);
        
        come_value.c_value = xsprintf("\"%s\"", type_name);
        come_value.type = new sType(s"char*");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sDynamicTypeOf extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
    }
    
    string kind()
    {
        return string("sDynamicTypeOf");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        if(come_value.type.mPointerNum > 0 && come_value.type.mHeap) {
            CVALUE*% come_value2 = new CVALUE();
            
            come_value2.c_value = xsprintf("come_dynamic_typeof(%s, \"%s\", %d)", come_value.c_value, info->sname, info->sline);
            come_value2.type = new sType(s"char*");
            come_value2.var = null;
            
            add_come_last_code(info, "%s", come_value2.c_value);
            
            info.stack.push_back(come_value2);
        }
        else {
            CVALUE*% come_value2 = new CVALUE();
            
            come_value2.c_value = xsprintf("__builtin_string(\"NOT HEAP OBJECT\")");
            come_value2.type = new sType(s"char*");
            come_value2.var = null;
            
            add_come_last_code(info, "%s", come_value2.c_value);
            
            append_object_to_right_values(come_value2, come_value2.type ,info);
            
            info.stack.push_back(come_value2);
        }
        
        return true;
    }
};

class sAlignOfNode extends sNodeBase
{
    new(sType* type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
        
        return self;
    }
    
    string kind()
    {
        return string("sAlignOfNode");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        var type2_ = solve_generics(type, info->generics_type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        string type_name = make_type_name_string(type2);
        
        come_value.c_value = xsprintf("_Alignof(%s)", type_name);
        come_value.type = new sType(s"long");
        come_value.type->mUnsigned = true;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sAlignOfExpNode extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
    }
    
    string kind()
    {
        return string("sAlignOfExpNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("_AlignOf(%s)", come_value.c_value);
        come_value2.type = new sType(s"long");
        come_value2.type->mUnsigned = true;
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sAlignOfNode2 extends sNodeBase
{
    new(sType* type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sAlignOfNode2");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        var type2_ = solve_generics(type, info->generics_type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        string type_name = make_type_name_string(type2);
        
        come_value.c_value = xsprintf("__alignof__(%s)", type_name);
        come_value.type = new sType(s"long");
        come_value.type->mUnsigned = true;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sAlignOfExpNode2 extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
    }
    
    string kind()
    {
        return string("sAlignOfExpNode2");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("__alignof__(%s)", come_value.c_value);
        come_value2.type = new sType(s"long");
        come_value2.type->mUnsigned = true;
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sAlignAsNode extends sNodeBase
{
    new(sType* type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sAlignAsNode");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        var type2_ = solve_generics(type, info->generics_type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        string type_name = make_type_name_string(type2);
        
        come_value.c_value = xsprintf("_Alignas(%s)", type_name);
        come_value.type = new sType(s"long");
        come_value.type->mUnsigned = true;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sAlignAsExpNode extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
    }
    
    string kind()
    {
        return string("sAlignAsExpNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("_Alignas(%s)", come_value.c_value);
        come_value2.type = new sType(s"long");
        come_value2.type->mUnsigned = true;
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sDeleteNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sDeleteNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        if(come_value.type.mPointerNum > 0) {
            free_object(clone come_value.type, come_value.c_value, false@no_decrement, false@no_free, info);
        }
        
        return true;
    }
};

class sBorrowNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
        
        return self;
    }
    
    string kind()
    {
        return string("sBorrowNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        remove_value_from_right_value_objects(come_value);
        
        sType*% type = clone come_value.type;
        type->mHeap = false;
        come_value.type = type;
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sCloneNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sCloneNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type = clone left_value.type;
        
        if(left_type->mPointerNum == 1 && left_type->mClass->mName === "void" && left_type->mHeap == false) { // null
            info.stack.push_back(left_value);
        }
        else if(left_type->mPointerNum == 0) {
            info.stack.push_back(left_value);
        }
        else if(left_type->mPointerNum > 0) {
            CVALUE*% come_value = new CVALUE();
            
            var result_type, c_value = clone_object(left_type, left_value.c_value, info);
            come_value.c_value = c_value;
            come_value.type = clone left_type;
            come_value.type->mHeap = true;
            come_value.var = null;
            
            append_object_to_right_values(come_value, left_type,info);
            
            info.stack.push_back(come_value);
        }
        
        return true;
    }
};

class sDupeNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sDupeNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type = clone left_value.type;
        
        if(left_type->mPointerNum == 0) {
            info.stack.push_back(left_value);
        }
        else if(left_type->mPointerNum > 0 && left_type->mHeap == false) {
            info.stack.push_back(left_value);
        }
        else if(left_type->mPointerNum > 0) {
            CVALUE*% come_value = new CVALUE();
            
            var result_type, c_value = clone_object(left_type, left_value.c_value, info);
            come_value.c_value = c_value;
            come_value.type = clone left_type;
            come_value.type->mHeap = true;
            come_value.var = null;
            
            append_object_to_right_values(come_value, left_type,info);
            
            info.stack.push_back(come_value);
        }
        
        return true;
    }
};

class sDummyHeapNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sDummyHeapNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        if(come_value.type.mPointerNum > 0) {
            come_value.type.mHeap = true;
        }
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sGCIncNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sGCIncNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType* type = borrow come_value.type;
        
        if(come_value.type.mHeap && come_value.type.mPointerNum > 0) {
            string type_name = make_type_name_string(type);
            come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
        }
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sGCDecNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sGCDecNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType*% type = come_value.type;
        
        if(come_value.type.mHeap && come_value.type.mPointerNum > 0) {
            decrement_ref_count_object(type, come_value.c_value, info);
        }
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sIsHeap extends sNodeBase
{
    new(sType* type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sIsHeap");
    }
    
    bool compile(sInfo* info)
    {
        if(self.type.mHeap) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("1");
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
        else {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("0");
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
        
        return true;
    }
};

class sIsPointer extends sNodeBase
{
    new(sType* type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sIsPointer");
    }
    
    bool compile(sInfo* info)
    {
        if(self.type.mPointerNum == 0 && self.type->mArrayPointerNum == 0) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("0");
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
        else {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("1");
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
        
        return true;
    }
};

class sGCDecNoFreeNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sGCDecNoFreeNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType*% type = come_value.type;
        
        if(type->mHeap && type->mPointerNum > 0) {
            decrement_ref_count_object(type, come_value.c_value, info, no_free:true);
        }
        
        info.stack.push_back(come_value);
        
        return true;
    }
};




class sRefNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = node;
    }
    
    string kind()
    {
        return string("sRefNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        bool global_;
        bool heap_;
        bool local_;
        
        sType*% origin = come_value.type.mTypedefOriginalType;
        
        if(come_value.type->mPointerNum != 1 && come_value.type->mArrayPointerNum != 1 && origin.mPointerNum != 1) {
            err_msg(info, "require pointer for ref");
            show_type(come_value.type);
            return true;
        }
        else if(come_value.var) {
            if(come_value.type.mHeap) {
                err_msg(info, "require borrow and do not owned for ref");
                show_type(come_value.type);
                return true;
            }
            global_ = come_value.var->mGlobal;
            heap_ = come_value.var.mType.mHeap;
            local_ = !global_ && !heap_;
        }
        else if(come_value.mNullValue) {
            err_msg(info, "no assign to null for ref");
            return true;
        }
        else {
            err_msg(info, "require variable name for ref");
            return true;
        }
        
        sType*% type_ = clone come_value.type;
        
        sType*% generics_type = new sType(s"ref");
        generics_type->mGenericsTypes.add(type_);
        if(type_->mArrayPointerNum == 1) {
            type_->mArrayPointerNum = 0;
            type_->mPointerNum = 1;
        }
        
        sType*% type = new sType(s"ref");
        type->mGenericsTypes.add(new sType(s"__generics_type0"));
        
        sType*% type2 = solve_generics(type, generics_type, info);
        
        sNode*% obj = create_new_object(type2);
        
        list<tuple2<string, sNode*%>*%>*% params = new list<tuple2<string, sNode*%>*%>();
        
        sNode*% node2 = create_load_var("neo_current_frame");
        sNode*% stacktop = load_field(node2, s"stacktop");
        
        params.add(t((string)null, obj));
        params.add(t((string)null, node));
        params.add(t((string)null, global_ ? create_true_object(info):create_false_object(info)));
        params.add(t((string)null, heap_ ? create_true_object(info):create_false_object(info)));
        params.add(t((string)null, local_ ? create_true_object(info):create_false_object(info)));
        params.add(t((string)null, stacktop));
        
        sNode*% method_node = create_method_call("initialize", obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
        
        node_compile(method_node).elif {
            return false;
        }
        
        return true;
    }
};

class sOptionalNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = node;
    }
    
    string kind()
    {
        return string("sOptionalNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        bool global_;
        bool heap_;
        bool local_;
        
        sType*% origin = come_value.type.mTypedefOriginalType;
        int origin_pointer_num = origin ? origin.mPointerNum : 0;
        
        if(!come_value.mNullValue
            && come_value.type->mPointerNum != 1
            && come_value.type->mArrayPointerNum != 1
            && origin_pointer_num != 1)
        {
            err_msg(info, "require pointer for opt");
            show_type(come_value.type);
            return true;
        }
        else if(come_value.var) {
            global_ = come_value.var->mGlobal;
            heap_ = come_value.var.mType.mHeap;
            local_ = !global_ && !heap_;
        }
        else if(come_value.mNullValue) {
            global_ = false;
            heap_ = false;
            local_ = false;
        }
        else {
            if(come_value.type.mHeap) {
                global_ = false;
                heap_ = true;
                local_ = false;
            }
            else {
                err_msg(info, "require heap or variable name for opt");
                return true;
            }
        }
        
        sType*% type_ = clone come_value.type;
        
        sType*% generics_type = new sType(s"optional");
        if(type_->mArrayPointerNum == 1) {
            type_->mArrayPointerNum = 0;
            type_->mPointerNum = 1;
        }
        generics_type->mGenericsTypes.add(type_);
        
        sType*% type = new sType(s"optional");
        type->mGenericsTypes.add(new sType(s"__generics_type0"));
        
        sType*% type2 = solve_generics(type, generics_type, info);
        
        sNode*% obj = create_new_object(type2);
        
        list<tuple2<string, sNode*%>*%>*% params = new list<tuple2<string, sNode*%>*%>();
        
        sNode*% node2 = create_load_var("neo_current_frame");
        sNode*% stacktop = load_field(node2, s"stacktop");
        
        params.add(t((string)null, obj));
        params.add(t((string)null, node));
        params.add(t((string)null, global_ ? create_true_object(info):create_false_object(info)));
        params.add(t((string)null, heap_ ? create_true_object(info):create_false_object(info)));
        params.add(t((string)null, local_ ? create_true_object(info):create_false_object(info)));
        params.add(t((string)null, stacktop));
        
        sNode*% method_node = create_method_call("initialize", obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
        
        node_compile(method_node).elif {
            return false;
        }
        
        return true;
    }
};

static bool is_buffer_like_type(sType* type)
{
    if(type == null) {
        return false;
    }
    
    sType*% it = clone type;
    int guard = 0;
    
    while(it != null && guard < 16) {
        if(it->mClass && it->mClass->mName) {
            string class_name = string(it->mClass->mName);
            if(class_name === "buffer" || class_name === "buffer*") {
                return true;
            }
        }
        
        if(it->mOriginalTypeName) {
            string original_name = string(it->mOriginalTypeName);
            if(original_name === "buffer" || original_name === "buffer*") {
                return true;
            }
        }
        
        if(it->mTypedefOriginalType) {
            it = clone it->mTypedefOriginalType;
            guard++;
            continue;
        }
        
        break;
    }
    
    return false;
}

sNode*%@head,sNode*%@len get_head_and_len(sNode*% node, CVALUE*% come_value, sInfo* info=info)
{
    sNode*% head;
    sNode*% len;
    sType*% type = clone come_value.type;
    sType*% type2;
    if(type->mNoSolvedGenericsType) {
        type2 = type->mNoSolvedGenericsType;
    }
    else {
        type2 = type;
    }

    bool buffer_like = is_buffer_like_type(type) || is_buffer_like_type(type2);

    if(buffer_like) {
        head = load_field(node, s"buf", info);
        sNode*% len_field = load_field(node, s"len", info);
        len = add_node(len_field, create_int_node(s"1", info));
    }
    else if((type2->mOriginalTypeName && type2->mOriginalTypeName === "string") || (type2->mClass->mName === "char" && type2->mPointerNum == 1 && type2->mHeap) && !type2->mNew) {
        static int n = 0;
        string var_name = s"__tmp_string\{++n}";
        
        sNode*% svar = store_var(var_name, null, null, type2, alloc:true, node, info);
        
        head = svar;
        //create_load_var(var_name);
        
        list<tuple2<string, sNode*%>*%>*% params = new list<tuple2<string, sNode*%>*%>();
        
        params.add(t((string)null, create_load_var(var_name)));
        
        len = create_funcall("strlen", params, null, 0, null, info);
//        len = add_node(v, create_int_node(s"1", info));
    }
    else if(type2->mClass->mName === "vector") {
        head = load_field(node, s"items", info);
        
        sNode*% obj = node;
        
        list<tuple2<string, sNode*%>*%>*% params = new list<tuple2<string, sNode*%>*%>();
        
        params.add(t((string)null, obj));
        
        sNode*% method_node = create_method_call("alloc_size", obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
        
        len = method_node;
    }
    else if(type2->mClass->mName === "map" || type2->mClass->mName === "list") {
        err_msg(info, "can't get serialize memory of this type(%s).require to use to_vector method.", type2->mClass->mName);
        exit(1);
    }
    else if(type2->mHeap && type2->mPointerNum == 1 && type2->mNew) {
        head = node;
        len = new sHeapSizeOfNode(type2, info) implements sNode;
    }
    else if(type2->mHeap && type2->mPointerNum == 1) {
        static int n = 0;
        string var_name = s"__tmp_heap\{++n}";
        
        sNode*% svar = store_var(var_name, null, null, type2, alloc:true, node, info);
        
        head = svar;
        len = new sDynamicSizeOfExpNode(create_load_var(var_name), info) implements sNode;
    }
    else if(type2->mPointerNum == 1
        && ((come_value.var && come_value.var->mType->mHeap)
            || (come_value.mLoadField && come_value.var && is_buffer_like_type(come_value.var->mType))))
    {
        head = node;
        len = new sDynamicSizeOfExpNode(node, info) implements sNode;
    }
    else if(type2->mPointerNum == 1) {
        head = node;
        if(node.kind() === "sRefferenceNode") {
            len = new sSizeOfExpNode(clone node.left_value(), info) implements sNode;
        }
        else {
            len = new sSizeOfExpNode(node, info) implements sNode;
        }
    }
    else {
        head = node;
        len = new sSizeOfExpNode(node, info) implements sNode;
    }
    
    return t(head,len);
}

class sSpanNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = node;
    }
    
    string kind()
    {
        return string("sSpanNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType*% origin = come_value.type.mTypedefOriginalType;
        
        if(come_value.type->mPointerNum != 1 && come_value.type->mArrayPointerNum != 1 && origin.mPointerNum != 1) {
            err_msg(info, "require pointer for span");
            show_type(come_value.type);
            return true;
        }
        
        bool global_;
        bool heap_;
        bool local_;
        
        if(come_value.var) {
            if(come_value.type.mHeap) {
                err_msg(info, "require borrow and do not owned for span");
                show_type(come_value.type);
                return true;
            }
            global_ = come_value.var->mGlobal;
            heap_ = come_value.var.mType.mHeap;
            local_ = !global_ && !heap_;
        }
        else {
            err_msg(info, "require variable name for span");
            return true;
        }
        
        sType*% type_ = clone come_value.type;
        
        // normalize pointer-to-array (e.g. &char[16]) to element type for span<T>
        if(type_->mPointerNum == 1 && type_->mArrayNum.length() > 0) {
            type_->mPointerNum = 1;
            type_->mArrayNum.reset();
            type_->mArrayPointerNum = 0;
            type_->mArrayPointerType = false;
        }
        
        sType*% generics_type = new sType(s"span");
        generics_type->mGenericsTypes.add(type_);
        if(type_->mArrayPointerNum == 1) {
            type_->mArrayPointerNum = 0;
            type_->mPointerNum = 1;
        }
        
        sType*% type = new sType(s"span");
        type->mGenericsTypes.add(new sType(s"__generics_type0"));
        
        sType*% type2 = solve_generics(type, generics_type, info);
        
        sNode*% obj = create_new_object(type2);
        
        list<tuple2<string, sNode*%>*%>*% params = new list<tuple2<string, sNode*%>*%>();
        
        var head, len = get_head_and_len(node, come_value);
        
        sNode*% node2 = create_load_var("neo_current_frame");
        sNode*% stacktop = load_field(node2, s"stacktop");
        
        params.add(t((string)null, obj));
        params.add(t((string)null, head));
        params.add(t((string)null, len));
        params.add(t((string)null, local_ ? create_true_object(info):create_false_object(info)));
        params.add(t((string)null, heap_ ? create_true_object(info):create_false_object(info)));
        params.add(t((string)null, global_ ? create_true_object(info):create_false_object(info)));
        params.add(t((string)null, stacktop));
        
        sNode*% method_node = create_method_call("initialize", obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
        
        node_compile(method_node).elif {
            return false;
        }
        
        return true;
    }
};


sNode*% create_new_node(sType*% type, list<tuple2<string, sNode*%>*%>*% initializer, sNode*% initializer_num, sInfo* info)
{
    return new sNewNode(type, initializer, initializer_num, info) implements sNode;
}

sNode*% create_defer_node(sBlock*% block, sInfo* info=info)
{
    return new sDeferNode(block, info) implements sNode;
}

sNode*% create_delete_node(sNode*% node, sInfo* info)
{
    return new sDeleteNode(node, info) implements sNode;
}

sNode*% create_borrow_node(sNode*% node, sInfo* info)
{
    return new sBorrowNode(node, info) implements sNode;
}

sNode*% create_clone_node(sNode*% node, sInfo* info)
{
    return new sCloneNode(node, info) implements sNode;
}

sNode*% create_dupe_node(sNode*% node, sInfo* info)
{
    return new sDupeNode(node, info) implements sNode;
}

sNode*% create_dummy_heap_node(sNode*% node, sInfo* info)
{
    return new sDummyHeapNode(node, info) implements sNode;
}

sNode*% create_gc_inc_node(sNode*% node, sInfo* info)
{
    return new sGCIncNode(node, info) implements sNode;
}

sNode*% create_gc_dec_node(sNode*% node, sInfo* info)
{
    return new sGCDecNode(node, info) implements sNode;
}

sNode*% create_gc_dec_nofree_node(sNode*% node, sInfo* info)
{
    return new sGCDecNoFreeNode(node, info) implements sNode;
}

sNode*% create_is_heap_node(sType* type, sInfo* info)
{
    return new sIsHeap(type, info) implements sNode;
}

sNode*% create_is_pointer_node(sType* type, sInfo* info)
{
    return new sIsPointer(type, info) implements sNode;
}

sNode*% create_optional_node(sNode*% node, sInfo* info)
{
    return new sOptionalNode(node, info) implements sNode;
}

sNode*% create_ref_node(sNode*% node, sInfo* info)
{
    return new sRefNode(node, info) implements sNode;
}

sNode*% create_span_node(sNode*% node, sInfo* info)
{
    return new sSpanNode(node, info) implements sNode;
}

sNode*% create_generic_node(sNode*% exp, list<sType*%>*% types, list<sNode*%>*% exps, sNode*% default_exp, sInfo* info)
{
    return new sGeneric(exp, types, exps, default_exp, info) implements sNode;
}

sNode*% create_offsetof_node(sType* type, string name, sInfo* info)
{
    return new sOffsetOf(type, name, info) implements sNode;
}

sNode*% create_sizeof_node(sType* type, sInfo* info)
{
    return new sSizeOfNode(type, info) implements sNode;
}

sNode*% create_sizeof_exp_node(sNode*% exp, sInfo* info)
{
    return new sSizeOfExpNode(exp, info) implements sNode;
}

sNode*% create_dynamic_typeof_node(sNode*% exp, sInfo* info)
{
    return new sDynamicTypeOf(exp, info) implements sNode;
}

sNode*% create_dynamic_sizeof_exp_node(sNode*% exp, sInfo* info)
{
    return new sDynamicSizeOfExpNode(exp, info) implements sNode;
}

sNode*% create_alignof_node(sType* type, sInfo* info)
{
    return new sAlignOfNode(type, info) implements sNode;
}

sNode*% create_alignof_exp_node(sNode*% exp, sInfo* info)
{
    return new sAlignOfExpNode(exp, info) implements sNode;
}

sNode*% create_alignof_node2(sType* type, sInfo* info)
{
    return new sAlignOfNode2(type, info) implements sNode;
}

sNode*% create_alignof_exp_node2(sNode*% exp, sInfo* info)
{
    return new sAlignOfExpNode2(exp, info) implements sNode;
}

sNode*% create_implements(sNode*% node, sType* inf_type, sInfo* info=info)
{
    return new sImplementsNode(node, inf_type, info) implements sNode;
}

sNode*% post_position_operator(sNode*% node, sInfo* info) version 21
{
    if(!node->terminated() && !gComeC && parsecmp("implements")) {
        info->p.p += strlen("implements");
        skip_spaces_and_lf();
        
        var type3, name2,err = parse_type(parse_multiple_type:false);
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        sType*% inf_type = clone type3;
        
        return new sImplementsNode(node, inf_type, info) implements sNode;
    }
    else if(*info.p == '@') {
        info->p.p++;
        while(xisalnum(*info.p) || *info.p == '_') {
            info->p.p++;
        }
        skip_spaces_and_lf();
    }
    
    return inherit(node, info);
}
