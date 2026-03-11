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


sNode*% create_new_node(sType*% type, list<tuple2<string, sNode*%>*%>*% initializer, sNode*% initializer_num, sInfo* info)
{
    return new sNewNode(type, initializer, initializer_num, info) implements sNode;
}

sNode*% create_defer_node(sBlock*% block, sInfo* info=info)
{
    return new sDeferNode(block, info) implements sNode;
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
