#include "common.h"

class sStoreNode extends sNodeBase
{
    new(string name, list<string>*% multiple_assign, list<tuple3<sType*%, string, sNode*%>*%>*% multiple_declare, sType*% type, bool alloc, sNode*% right_value, sInfo* info)
    {
        self.super();
        
        string self.name = string(name);
        bool self.alloc = alloc;
        sType*% self.type;
        self.type = dupe type;
        sNode*% self.right_value = right_value;
        list<string>*% self.multiple_assign;
        self.multiple_assign = dupe multiple_assign;
        list<tuple3<sType*%,string,sNode*%>*%>*% self.multiple_declare;
        self.multiple_declare = dupe multiple_declare;
    }
    
    string kind()
    {
        return string("sStoreNode");
    }
    
    bool compile(sInfo* info)
    {
        if(self.multiple_declare) {
            sVar* var_ = info.lv_table.mVars[self.name]??;
            if(var_) {
                err_msg(info, "Already appended this var name(%s)(1)", self.name);
                return false;
            }
            
            if(self.type == null) {
                err_msg(info, "Require concrete variable type(%s)", self.name);
                return false;
            }
            
            var type = solve_generics(self.type, info->generics_type, info);
            type->mFunctionParam = false;
            
            foreach(it, self.multiple_declare) {
                var type, var_name, right_value = it;
                add_variable_to_table(var_name, clone type, info);
                
                var_ = get_variable_from_table(info.lv_table, var_name);
                
                if(var_ == null) {
                    err_msg(info, "var not found(%s)(ZY) at definition of variable\n", it);
                    return true;
                }
                
                sType*% left_type = clone var_->mType;
                
                if(right_value) {
                    if(!node_compile(right_value)) {
                        return false;
                    }
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    dec_stack_ptr(1, info);
                    
                    add_come_code(info, "%s=%s;\n", make_define_var(left_type, var_->mCValueName), come_value.c_value);
                }
                else {
                    add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(left_type));
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                }
            }
        }
        else if(self.multiple_assign) {
            if(!node_compile(self.right_value)) {
                return false;
            }
            
            CVALUE*% right_value = get_value_from_stack(-1, info);
            sType* right_type = right_value.type;
            dec_stack_ptr(1, info);
            
            if(right_type->mNoSolvedGenericsType.v1) {
                right_type = right_type->mNoSolvedGenericsType.v1;
            }
            
            int i = 0;
            foreach(it, self.multiple_assign) {
                if(i < right_type.mGenericsTypes.length()) {
                    sType* right_type2 = right_type.mGenericsTypes[i];
                    right_type2->mFunctionParam = false;
                    add_variable_to_table(it, clone right_type2, info);
                }
                
                i++;
            }
            
            static int num_multiple_var = 0;
            string multiple_var_name = xsprintf("multiple_assign_var%d", ++num_multiple_var);
            add_come_code_at_function_head(info, "%s;\n", make_define_var(right_value.type, multiple_var_name));
            
            add_come_code(info, "%s=%s;\n", multiple_var_name, right_value.c_value);
            
            right_value.c_value = clone multiple_var_name;
            
            i = 0;
            foreach(it, self.multiple_assign) {
                if(i < right_type.mGenericsTypes.length()) {
                    sType*% right_type2 = clone right_type.mGenericsTypes[i];
                    
                    sVar* var_ = get_variable_from_table(info.lv_table, it);
                    
                    sType*% var_type = clone var_->mType;
                    var_type->mStatic = false;
                    
                    sType*% left_type = clone var_->mType;
                    
                    CVALUE*% right_value2 = new CVALUE;
                    
                    right_value2.c_value = xsprintf("%s->v%d", right_value.c_value, i+1);
                    right_value2.type = clone right_type2;
                    right_value2.var = null;
                    
                    CVALUE*% come_value = new CVALUE;
                    
                    check_assign_type(s"\{self.name} is assining to}", left_type, right_type2, come_value);
                    
                    if(right_type2->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type2->mPointerNum > 0)
                    {
                        std_move(left_type, right_type2, right_value2);
                        come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value2.c_value);
                        
                        int right_value_id = get_right_value_id_from_obj(right_value2.c_value);
                        
                        if(right_value_id != -1) {
                            remove_object_from_right_values(right_value_id, info);
                        }
                    }
                    else {
                        come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value2.c_value);
                    }
                    come_value.type = clone left_type;
                    come_value.var = var_;
                    
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                    add_come_code(info, "%s;\n", come_value.c_value);
                }
                
                i++;
            }
        }
        else if(self.right_value == null) { // assert(self.alloc == true)
            sVar* var_ = info.lv_table.mVars[self.name]??;
            if(var_) {
                err_msg(info, "Already appended this var name(%s)(1)", self.name);
                return false;
            }
            
            if(self.type == null) {
                err_msg(info, "Require concrete variable type(%s)", self.name);
                return false;
            }
            
            var type = solve_generics(self.type, info->generics_type, info);
            type->mFunctionParam = false;
            
            
            add_variable_to_table(self.name, clone type, info);
        
            var_ = get_variable_from_table(info.lv_table, self.name);
            
            if(var_ == null) {
                var_ = get_variable_from_table(info.gv_table, self.name);
                
                if(var_ == null) {
                    err_msg(info, "var not found(%s)(Y) at definition of variable\n", self.name);
                    return true;
                }
            }
            
            sType*% left_type = clone var_->mType;
            
            if(left_type->mArrayNum.length() > 0) {
                add_come_code(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                
                //if(!left_type->mStatic) {
                    add_come_code(info, "memset(&%s, 0, sizeof(%s)", var_->mCValueName, make_type_name_string(left_type));
                    
                    foreach(it, left_type->mArrayNum) {
                        if(!node_compile(it)) {
                            err_msg(info, "invalid array num");
                            exit(1);
                        }
                        
                        CVALUE*% come_value = get_value_from_stack(-1, info);
                        dec_stack_ptr(1, info);
                        add_come_code(info, "*(%s)", come_value.c_value);
                    }
                    add_come_code(info, ");\n");
                //}
            }
            else {
                add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                
                sType*% left_type2 = clone left_type;
                left_type2->mStatic = false;
                
                add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(left_type2));
            }
            
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s", var_->mCValueName);
            come_value.type = clone left_type;
            come_value.var = var_;
            
            info.stack.push_back(come_value);
            
            if(!left_type->mClass->mNumber && left_type->mPointerNum == 0) {
                var_->mType->mAllocaValue = true;
            }
        }
        else if(self.alloc) { // right_value != null
            sVar* var_ = info.lv_table.mVars[self.name]??;
            if(var_) {
                err_msg(info, "Already appended this var name(%s)(2)", self.name);
                return false;
            }
            
            if(self.type == null) {
            }
            else {
                var type = solve_generics(self.type, info->generics_type, info);
                
                type->mFunctionParam = false;
                add_variable_to_table(self.name, clone type, info);
            }
            
            if(!node_compile(self.right_value)) {
                return false;
            }
            
            bool array_initializer = self.right_value.kind() === "sArrayInitializer";
            
            CVALUE*% right_value = get_value_from_stack(-1, info);
            sType* right_type = right_value.type;
            dec_stack_ptr(1, info);
            
            if(self.type == null) {
                right_type->mFunctionParam = false;
                add_variable_to_table(self.name, clone right_type, info);
            }
            else {
            }
            
            var_ = get_variable_from_table(info.lv_table, self.name);
            
            sType*% var_type = clone var_->mType;
            var_type->mStatic = false;
            
            if(!array_initializer && !var_->mType->mStatic && !var_type->mConstant && var_type->mArrayNum.length() == 0) {
                add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(var_type));
            }
            
            sType*% left_type = clone var_->mType;
            
            if(array_initializer) {
                sVar* var_ = info.lv_table.mVars[self.name]??;
                add_come_code(info, "%s=%s;\n", make_define_var(var_->mType, var_->mCValueName), right_value.c_value);
                
                CVALUE*% come_value = new CVALUE;
                come_value.c_value = string("");
                info.stack.push_back(come_value);
                
                transpiler_clear_last_code(info);
            }
            else if(var_->mType->mStatic || var_->mType->mConstant) {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                
                add_come_code(info, "%s=%s;\n", make_define_var(left_type, var_->mCValueName), right_value.c_value);
                
                CVALUE*% come_value = new CVALUE;
                come_value.c_value = string("");
                info.stack.push_back(come_value);
                
                transpiler_clear_last_code(info);
            }
            else if(right_type->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0)
            {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                
                std_move(left_type, right_type, right_value);
                
                int right_value_id = get_right_value_id_from_obj(right_value.c_value);
                
                if(right_value_id != -1) {
                    remove_object_from_right_values(right_value_id, info);
                }
                
                add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                
                CVALUE*% come_value = new CVALUE;
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
            else if(left_type->mPointerNum > 0 && left_type->mHeap && right_type->mClass->mName === "void" && right_type->mPointerNum > 0)
            {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                
                decrement_ref_count_object(left_type, var_->mCValueName, info);
                
                add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                
                CVALUE*% come_value = new CVALUE;
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
            else {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                
                if(left_type->mHeap && !right_value.type->mHeap) {
                    err_msg(info, "require right value as heap object(%s)", self.name);
                    return false;
                }
                
                add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                
                CVALUE*% come_value = new CVALUE;
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
        }
        else {
            if(!node_compile(self.right_value)) {
                return false;
            }
            
            CVALUE*% right_value = get_value_from_stack(-1, info);
            sType* right_type = right_value.type;
            dec_stack_ptr(1, info);
            
            sClass* current_stack_frame_struct = info->current_stack_frame_struct;
            
            if(current_stack_frame_struct && info.lv_table.mVars[self.name]?? == null) {
                sVar* parent_var = get_variable_from_table(info.lv_table->mParent, self.name);
                
                if(parent_var != null) {
                    if(parent_var->mFunName !== info.come_fun.mName) {
                        sType* left_type = parent_var->mType;
                        
                        if(left_type->mPointerNum > 0 && right_type->mPointerNum > 0 && right_type->mHeap && left_type->mHeap) {
                            check_assign_type(s"\{self.name} is assigning to", left_type, right_type, right_value);
                            
                            string c_value = xsprintf("*(parent->%s)", parent_var->mCValueName);
                            
                            decrement_ref_count_object(parent_var->mType, c_value, info);
                            std_move(left_type, right_type, right_value);
                            
                            int right_value_id = get_right_value_id_from_obj(right_value.c_value);
                            
                            if(right_value_id != -1) {
                                remove_object_from_right_values(right_value_id, info);
                            }
                            
                            CVALUE*% come_value = new CVALUE;
                        
                            come_value.c_value = xsprintf("(*(parent->%s))=%s", parent_var->mCValueName, right_value.c_value);
                            come_value.type = clone left_type;
                            come_value.var = null;
                            
                            add_come_last_code(info, "%s;\n", come_value.c_value);
                            
                            info.stack.push_back(come_value);
                            
                            return true;
                        }
                        else if(left_type->mPointerNum > 0 && right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type->mHeap) 
                        {
                            check_assign_type(s"\{self.name} is assigning to", left_type, right_type, right_value);
                            
                            string c_value = xsprintf("*(parent->%s)", parent_var->mCValueName);
                            decrement_ref_count_object(parent_var->mType, c_value, info);
                            
                            CVALUE*% come_value = new CVALUE;
                            
                            come_value.c_value = xsprintf("(*(parent->%s))=%s", parent_var->mCValueName, right_value.c_value);
                            come_value.type = clone left_type;
                            come_value.var = null;
                            
                            add_come_last_code(info, "%s;\n", come_value.c_value);
                            
                            info.stack.push_back(come_value);
                            
                            return true;
                        }
                        else {
                            check_assign_type(s"\{self.name} is assigning to", left_type, right_type, right_value);
                            
                            if(left_type->mHeap && !right_value.type->mHeap) {
                                err_msg(info, "require right value as heap object(%s)", self.name);
                                return false;
                            }
                            
                            CVALUE*% come_value = new CVALUE;
                            
                            come_value.c_value = xsprintf("(*(parent->%s))=%s", parent_var->mCValueName, right_value.c_value);
                            come_value.type = clone left_type;
                            come_value.var = null;
                            
                            add_come_last_code(info, "%s;\n", come_value.c_value);
                            
                            info.stack.push_back(come_value);
                            
                            return true;
                        }
                    }
                }
            }
            
            sVar* var_ = get_variable_from_table(info.lv_table, self.name);
            
            if(var_ == null) {
                var_ = get_variable_from_table(info.gv_table, self.name);
                
                if(var_ == null) {
                    err_msg(info, "var not found(%s)(X) at storing variable\n", self.name);
                    return true;
                }
            }
            
            if(var_->mType == null) {
                var_->mType = clone right_type;
            }
            
            sType*% left_type = clone var_->mType;
            
            if((var_->mType->mStatic || var_->mType->mConstant) && !var_->mGlobal) {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                
                CVALUE*% come_value = new CVALUE;
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
            else if(right_type->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0)
            {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                
                decrement_ref_count_object(left_type, var_->mCValueName, info);
                std_move(left_type, right_type, right_value);
                
                int right_value_id = get_right_value_id_from_obj(right_value.c_value);
                
                if(right_value_id != -1) {
                    remove_object_from_right_values(right_value_id, info);
                }
                
                CVALUE*% come_value = new CVALUE;
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
            else if(left_type->mPointerNum > 0 && left_type->mHeap && right_type->mClass->mName === "void" && right_type->mPointerNum > 0)
            {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                
                decrement_ref_count_object(left_type, var_->mCValueName, info);
                
                CVALUE*% come_value = new CVALUE;
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
            else {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value);
                
                if(left_type->mHeap && !right_value.type->mHeap) {
                    err_msg(info, "require right value as heap object(%s)", self.name);
                    return false;
                }
                
                CVALUE*% come_value = new CVALUE;
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
        }
        
        return true;
    }
};

class sLoadNode extends sNodeBase
{
    new(string name, sInfo* info)
    {
        self.super();
        
        string self.name = string(name);
    }
    
    string kind()
    {
        return string("sLoadNode");
    }
    
    bool compile(sInfo* info)
    {
        sClass* current_stack_frame_struct = info->current_stack_frame_struct;
        
        if(current_stack_frame_struct && info.lv_table.mVars[self.name]?? == null) {
            sVar* parent_var = get_variable_from_table(info.lv_table->mParent, self.name);
            
            if(parent_var != null) {
                if(parent_var->mFunName !== info.come_fun.mName) {
                    CVALUE*% come_value = new CVALUE;
                    
                    sType* type = parent_var->mType;
                    
                    come_value.c_value = xsprintf("(*(parent->%s))", parent_var->mCValueName);
                    
                    come_value.type = clone type;
                    come_value.var = null;
                    
                    add_come_last_code(info, "%s;\n", come_value.c_value);
                    
                    info.stack.push_back(come_value);
                    
                    return true;
                }
            }
        }
        
        sVar* var_ = get_variable_from_table(info.lv_table, self.name);
        
        if(var_ == null) {
            var_ = get_variable_from_table(info.gv_table, self.name);
            
            if(var_ == null) {
                sFun* fun = info.funcs[self.name]??;
                
                if(fun) {
                    CVALUE*% come_value = new CVALUE;
                    
                    come_value.c_value = xsprintf("%s", fun->mName);
                    come_value.type = fun->mLambdaType;
                    come_value.var = null;
                    
                    info.stack.push_back(come_value);
                    
                    return true;
                }
                else {
                    err_msg(info, "var not found(%s)(Z) at loading variable\n", self.name);
                    return true;
                }
            }
        }
        
        CVALUE*% come_value = new CVALUE;
        come_value.c_value = xsprintf("%s", var_->mCValueName);
        come_value.type = clone var_->mType;
        come_value.var = var_;
        
        info.stack.push_back(come_value);
        
        if(come_value.type->mArrayNum.length() == 1) {
            come_value.type->mOriginalLoadVarType.v1 = clone come_value.type;
            
            come_value.type->mArrayNum.reset();
            come_value.type->mPointerNum++;
            come_value.type->mOriginalTypeNamePointerNum = come_value.type->mPointerNum;
        }
        
        return true;
    }
};

class sFunLoadNode extends sNodeBase
{
    new(string name, sInfo* info)
    {
        self.super();
        
        string self.name = string(name);
    }
    
    string kind()
    {
        return string("sFunLoadNode");
    }
    
    bool compile(sInfo* info)
    {
        sFun* fun = info.funcs[self.name]??;
        
        if(fun == null) {
            err_msg(info, "fun not found(%s) at loading variable\n", self.name);
            return false;
        }
        else {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s", fun->mName);
            come_value.type = fun->mLambdaType;
            come_value.var = null;
            
            info.stack.push_back(come_value);
        }
        
        return true;
    }
};

class sArrayInitializer extends sNodeBase
{
    new(list<tuple2<sNode*%, sNode*%>*%>*% initializer, sInfo* info)
    {
        self.super();
       
        list<tuple2<sNode*%, sNode*%>*%>*% self.initializer = clone initializer;
    }
    
    string kind()
    {
        return string("sArrayInitializer");
    }
    
    bool compile(sInfo* info)
    {
        var initializer = self.initializer;
        
        var buf = new buffer();
        buf.append_str("{");
        int i = 0;
        sType*% element_type = null;
        foreach(it, initializer) {
            var index, value = it;
            
            CVALUE*% come_value = null;
            if(index) {
                if(!node_compile(index)) {
                    return false;
                }
                come_value = get_value_from_stack(-1, info);
                dec_stack_ptr(1, info);
            }
            
            if(!node_compile(value)) {
                return false;
            }
            CVALUE*% come_value2 = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
            
            element_type = clone come_value2.type;
            
            if(come_value) {
                buf.append_str(xsprintf("[%s] = %s", come_value.c_value, come_value2.c_value));
            }
            else {
                buf.append_str(come_value2.c_value);
            }
            
            i++;
            
            if(i != initializer.length()) {
                buf.append_str(",");
            }
        }
        buf.append_str("}");
        
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = buf.to_string();
        come_value.type = clone element_type;
        come_value.type->mPointerNum++;
        //come_value.type->mArrayNum.add(create_int_node(i, info));
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

sNode*% parse_array_initializer(sInfo* info=info)
{
    expected_next_character('{');
    
    list<tuple2<sNode*%,sNode*%>*%>*% initializer = new list<tuple2<sNode*%,sNode*%>*%>();
    
    if(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf();
        
        sNode*% index = expression();
        
        expected_next_character(']');
        expected_next_character('=');
        
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% exp = expression();
        info->no_comma = no_comma;
        
        initializer.add((index, exp));
    }
    else {
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% exp = expression();
        info->no_comma = no_comma;
        
        initializer.add((null, exp));
    }
    
    while(*info->p == ',') {
        info->p++;
        skip_spaces_and_lf();
        
        parse_sharp();
        
        if(*info->p == '}') {
            break;
        }
        
        if(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% index = expression();
            
            expected_next_character(']');
            expected_next_character('=');
            
            bool no_comma = info->no_comma;
            info->no_comma = true;
            sNode*% exp = expression();
            info->no_comma = no_comma;
            
            initializer.add((index, exp));
        }
        else {
            bool no_comma = info->no_comma;
            info->no_comma = true;
            sNode*% exp = expression();
            info->no_comma = no_comma;
            
            initializer.add((null,exp));
        }
    }
    
    expected_next_character('}');
    
    return new sArrayInitializer(initializer, info) implements sNode;
}

void add_variable_to_table(char* name, sType*% type, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    if(type->mFunctionParam) {
        self->mCValueName = string(name);
    }
    else {
        static int n = 0;
        self->mCValueName = xsprintf("%s_%d", name, n++);
    }
    
    self->mBlockLevel = info->block_level;
    self->mAllocaValue = false;
    self->mFunctionParam = false;
    self->mNoFree = false;
    if(info.come_fun) {
        self->mFunName = clone info.come_fun.mName;
    }
    else {
        self->mFunName = null;
    }
    
    info.lv_table.mVars.insert(string(name), self);
}

void add_variable_to_global_table(char* name, sType*% type, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    self->mGlobal = true;
    
    self->mCValueName = string(name);
    
    self->mBlockLevel = info->block_level;
    self->mAllocaValue = false;
    self->mFunctionParam = false;
    self->mNoFree = false;
    
    info.gv_table.mVars.insert(string(name), self);
}

void add_variable_to_global_table_with_int_value(char* name, sType*% type, char* c_value, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    self->mGlobal = true;
    
    self->mCValueName = string(c_value);
    
    self->mBlockLevel = info->block_level;
    self->mAllocaValue = false;
    self->mFunctionParam = false;
    self->mNoFree = false;
    
    info.gv_table.mVars.insert(string(name), self);
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 7
{
    bool is_type_name_flag = is_type_name(buf);
    
    /// backtrace ///
    bool multiple_declare = false;
    if(is_type_name_flag)
    {
        char* p = info.p;
        int sline = info.sline;
        
        info.p = head;
        info.sline = head_sline;
        
        if(xisalpha(*info->p) || *info->p == '_') {
            
            var type, name, err = parse_type();
            
            if(err) {
                var type,name = parse_variable_name(type@base_type_name, true@first, info);
                
                if(*info->p == '=') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info->p == '{') {
                        skip_block();
                    }
                    else {
                        bool no_output_err = info->no_output_err;
                        bool no_comma = info->no_comma;
                        bool no_output_come_code = info->no_output_come_code;
                        
                        info->no_output_err = true;
                        info->no_comma = true;
                        info->no_output_come_code = true;
                        
                        sNode*% exp = expression();
                        
                        info->no_comma = no_comma;
                        info->no_output_err = no_output_err;
                        info->no_output_come_code = no_output_come_code;
                    }
                }
                
                if(!is_type_name(name) && *info->p == ',') {
                    multiple_declare = true;
                }
            }
        }
        
//        info.no_output_come_code = false;
//        info.no_output_come_code = no_output_come_code;
        
        info.p = p;
        info.sline = sline;
    }
    
    bool attr_define = false;
    if(is_type_name_flag && info->defining_class) {
        char* p = info.p;
        int sline = info.sline;
        
        info.p = head;
        info.sline = head_sline;
        
        var type, name, err = parse_type(parse_variable_name:false);
        
        if(err && strmemcmp(info->p, "self")) {
            attr_define = true;
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    parse_sharp();
    sFun* fun = info.funcs[buf]??;
    
    if((!gComeC && buf === "var") || buf === "auto") {
        parse_sharp();
        var buf2 = parse_word();
        parse_sharp();
        
        list<string>*% multiple_assign = null;
        
        if(*info->p == ',' ) {
            multiple_assign = new list<string>();
            multiple_assign.push_back(clone buf2);
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                var buf3 = parse_word();
                parse_sharp();
                
                multiple_assign.push_back(clone buf3);
            }
        }
        parse_sharp();
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info.p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            bool no_comma = info->no_comma
            info.no_comma = true;
            sNode*% right_value = expression();
            info.no_comma = no_comma;
            parse_sharp();
            
            right_value = post_position_operator(right_value, info);
            parse_sharp();
            
            return new sStoreNode(string(buf2)@name, multiple_assign, null@multiple_declare, null@type, true@alloc, right_value, info) implements sNode;
        }
        else {
            err_msg(info, "var requires a right value(%c)", *info->p);
            exit(1);
        }
    }
    else if(multiple_declare) {
        info.p = head;
        info.sline = head_sline;

        list<tuple3<sType*%, string,sNode*%>*%>*% multiple_declare = new list<tuple3<sType*%, string, sNode*%>*%>();
        
        var base_type, name, err = parse_type();
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        parse_sharp();
        var type2,var_name = parse_variable_name(base_type, true@first, info);
        parse_sharp();
        
        
        if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf();
            
            info->array_initializer = true;
            bool no_comma = info->no_comma;
            info->no_comma = true;
            sNode*% exp = expression();
            info->no_comma = no_comma;
            info->array_initializer = false;
            
            multiple_declare.push_back((type2, var_name, exp));
        }
        else {
            multiple_declare.push_back((type2, var_name, null));
        }
        
        while(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            var type2, var_name = parse_variable_name(base_type, false@first, info);
            parse_sharp();
            
            if(*info->p == '=')  {
                info->p++;
                skip_spaces_and_lf();
                
                bool no_comma = info->no_comma;
                info->no_comma = true;
                info->array_initializer = true;
                
                sNode*% exp = expression();
                
                info->no_comma = no_comma;
                info->array_initializer = false;
                
                multiple_declare.push_back((type2, var_name, exp));
            }
            else {
                multiple_declare.push_back((type2, var_name, null));
            }
        }
        
        sNode*% right_node = null;
        string var_name2 = string("");
        
        return new sStoreNode(string(buf)@name, null@multiple_assign, multiple_declare, base_type@type, true@alloc, null@right_value, info) implements sNode;
    }
    else if(attr_define) {
        /// backtrace ///
        info.p = head;
        info.sline = head_sline;
        
        parse_sharp();
        var type, name, err = parse_type(parse_variable_name:false);
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        info->p += strlen("self.");
        
        name = parse_word();
        
        parse_sharp();
        info.defining_class->mFields.add((name, type));
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            
            sNode*% self_node = new sLoadNode(string("self"), info) implements sNode;
            
            sNode*% right_node = expression();
            
            return store_field(self_node, right_node, name, info);
        }
        else {
            return create_null_node();
        }
    }
    else if(!is_type_name_flag && *info->p == '=' && *(info->p+1) != '=' && !info->no_assign) {
        info.p++;
        skip_spaces_and_lf();
        
        parse_sharp();
        sNode*% right_value = expression();
        parse_sharp();
        
        right_value = post_position_operator(right_value, info);
        
        parse_sharp();
        
        return new sStoreNode(string(buf)@name, null@multiple_assign, null@multiple_declare, null@type, false@alloc, right_value, info) implements sNode;
    }
    else if(!is_type_name_flag || info.funcs[buf]??) {
        sNode*% node = new sLoadNode(string(buf)@name, info) implements sNode;
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else {
        /// backtrace ///
        info.p = head;
        info.sline = head_sline;
        
        string word;
        if(xisalpha(*info->p) || *info->p == '_') {
            word = parse_word();
        }
        else {
            word = string("");
        }
        
        bool is_type_name_flag = is_type_name(word);
        
        info.p = head;
        info.sline = head_sline;
        
        if(is_type_name_flag) {
            parse_sharp();
            var type, name, err = parse_type(parse_variable_name:true);
            
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            parse_sharp();
            
            if(*info->p == '=') {
                info.p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                
                info.array_initializer = true;
                parse_sharp();
                sNode*% right_value = expression();
                parse_sharp();
                info.array_initializer = false;
                
                right_value = post_position_operator(right_value, info);
                
                return new sStoreNode(name, null@multiple_assign, null@multiple_declare, type, true@alloc, right_value, info) implements sNode;
            }
            else {
                return new sStoreNode(name, null@multiple_assign, null@multiple_declare, type, true@alloc, null@right_value, info) implements sNode;
            }
        }
    }
    
    err_msg(info, "unexpected word(%s)(1)\n", buf);
    exit(2);
}

