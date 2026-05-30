#include "common.h"

void on_drop_object(sType* type, char* obj, sInfo* info=info)
{
    if(gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return ;
    }

    sType*% type_ = get_no_solved_type2(type);

    if(type_->mClass->mStruct || type_->mGenericsTypes.length() > 0) 
    {
        string c_value = string(obj);
        
        const char* fun_name = "on_drop";
        
        sType*% type2 = clone type_;
        type2->mHeap = false;
        
        string fun_name2 = create_method_name(type_, false@no_pointer_name, fun_name, info);
        
        sFun* dropper = NULL;
        if(type_->mGenericsTypes.length() > 0) {
            dropper = borrow info->funcs[fun_name2];
            
            if(dropper == NULL) {
                string none_generics_name = get_none_generics_name(type2.mClass.mName);
                
                string generics_fun_name = xsprintf("%s_%s", none_generics_name, fun_name);
                sGenericsFun* generics_fun = borrow info->generics_funcs[generics_fun_name];
                
                if(generics_fun) {
                    var name, err = create_generics_fun(fun_name2, generics_fun, type_, info);
                    
                    if(!err) {
                        printf("%s %d: can't create generics dropper\n", info->sname, info->sline);
                        exit(2);
                    }
                    dropper = borrow info->funcs[name];
                }
            }
        }
        else {
            int i;
            for(i=FUN_VERSION_MAX-1; i>=1; i--) {
                string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
                dropper = borrow info->funcs[new_fun_name];
                
                if(dropper) {
                    fun_name2 = string(new_fun_name);
                    break;
                }
            }
            
            if(dropper == NULL) {
                dropper = borrow info->funcs[fun_name2];
            }
        }

        /// call dropper ///
        if(dropper != null) {
            if(c_value) {
                add_come_code(info, s"\{fun_name2}(\{c_value});\n");
            }
        }
    }
}

void free_object(sType* type, char* obj, bool no_decrement, bool no_free, sInfo* info, bool ret_value=false)
{
    if(gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return ;
    }
    if(type->mDefferRightValue) {
        on_drop_object(type, obj, info);
    }
    var stack_saved = info.stack;
    list<sRightValueObject*%>* right_value_objects = borrow info.right_value_objects;

    sType* type_before = type;

    sType*% type_ = get_no_solved_type2(type);

    if(type_->mPointerNum > 0 || type_->mClass->mProtocol || type_->mGenericsTypes.length() > 0) 
    {
        string c_value = string(obj);
        
        sClass* klass = type_->mClass;
        
        char* class_name = borrow klass->mName;

        const char* fun_name = "finalize";
        
        sType*% type2 = clone type_;
        type2->mHeap = false;
        
        string fun_name2 = create_method_name(type_, false@no_pointer_name, fun_name, info);
        
        sFun* finalizer = NULL;
        if(type_->mGenericsTypes.length() > 0) {
            finalizer = borrow info->funcs[fun_name2];
            
            if(finalizer == NULL) {
                string none_generics_name = get_none_generics_name(type2.mClass.mName);
                
                string generics_fun_name = xsprintf("%s_%s", none_generics_name, fun_name);
                sGenericsFun* generics_fun = borrow info->generics_funcs[generics_fun_name];
                
                if(generics_fun) {
                    var name, err = create_generics_fun(fun_name2, generics_fun, type_, info);
                    
                    if(!err) {
                        printf("%s %d: can't create generics finalizer\n", info->sname, info->sline);
                        exit(2);
                    }
                    //finalizer = borrow info->funcs[fun_name2];
                    finalizer = borrow info->funcs[name];
                }
            }
        }
        else {
            int i;
            for(i=FUN_VERSION_MAX-1; i>=1; i--) {
                string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
                finalizer = borrow info->funcs[new_fun_name];
                
                if(finalizer) {
                    fun_name2 = string(new_fun_name);
                    break;
                }
            }
            
            if(finalizer == NULL) {
                finalizer = borrow info->funcs[fun_name2];
            }
        }
        
        if(finalizer == NULL && !type_->mClass->mProtocol && !type_->mClass->mNumber && type_->mArrayNum.length() == 0)
        {
            var fun,new_fun_name = create_finalizer_automatically(type_, fun_name, info);
            
            fun_name2 = new_fun_name;
            finalizer = fun;
        }

        /// call finalizer ///
        if(finalizer != null) {
            if(klass->mProtocol && type_->mPointerNum == 1) {
                string type_name = make_type_name_string(type_);
                if(c_value) {
                    add_come_code(info, s"come_call_finalizer(\{fun_name2}, \{c_value}, \{c_value} ? ((\{type_name})\{c_value})->finalize :(void*)0, \{c_value} ? ((\{type_name})\{c_value})->_protocol_obj :(void*)0, \{type_->mAllocaValue?1:0} , \{no_decrement?1:0}, \{no_free?1:0}, (void*)0, \"\{info->sname}\", \{info->sline}, \{++info->id})\{(info->in_conditional ? ";" : ";\n")}");
                }
            }
            else {
                if(c_value) {
                    add_come_code(info, s"come_call_finalizer(\{fun_name2}, \{c_value}, (void*)0, (void*)0, \{type_->mAllocaValue?1:0}, \{no_decrement?1:0}, \{no_free?1:0}, (void*)0, \"\{info->sname\}\", \{info->sline}, \{++info->id})\{(info->in_conditional ? ";" : ";\n")}");
                }
            }
        }
        else {
            if(klass->mStruct && type_->mPointerNum == 0) {
                //klass = info.classes[klass->mName];
                foreach(it, klass->mFields) {
                    var name, field_type = it;
                    
                    if(field_type->mHeap && field_type->mPointerNum > 0) {
                        string obj = xsprintf("(((%s)%s).%s)", make_type_name_string(type_), c_value, name);
                        free_object(field_type, obj, no_decrement, no_free, info);
                    }
                }
            }
            else if(klass->mStruct && type_->mPointerNum == 1) {
                //klass = info.classes[klass->mName];
                foreach(it, klass->mFields) {
                    var name, field_type = it;
                    
                    if(field_type->mHeap && field_type->mPointerNum > 0) {
                        string obj = xsprintf("(((%s)%s)->%s)", make_type_name_string(type_), c_value, name);
                        free_object(field_type, obj, no_decrement, no_free, info);
                    }
                }
            }
            
            /// free memory ///
            if(!type_->mAllocaValue) {
                if(klass->mProtocol && type_->mPointerNum == 1) {
                    if(c_value) {
                        string type_name = make_type_name_string(type_);
                        add_come_code(info, s"((\{c_value}) ? \{c_value} = come_decrement_ref_count(\{c_value}, ((\{type_name})\{c_value})->finalize, ((\{type_name})\{c_value})->_protocol_obj, \{no_decrement?1:0}, \{no_free?1:0},(void*)0, \"\{info->sname}\", \{info->sline}, \{++info.id}):(void*)0)\{(";\n")}");
                    }
                }
                else {
                    if(c_value) {
                        add_come_code(info, s"(\{c_value} = come_decrement_ref_count(\{c_value}, (void*)0, (void*)0, \{no_decrement?1:0}, \{no_free?1:0}, (void*)0, \"\{info->sname}\", \{info->sline}, \{++info->id}))\{(";\n")}");
                    }
                }
            }
        }
    }
    
    info.right_value_objects = dummy_heap right_value_objects;
    info.stack = stack_saved;
}

tuple2<sType*%, string>*% clone_object(sType* type, char* obj, sInfo* info)
{
    bool in_clone_object = info.in_clone_object;
    info.in_clone_object = true;
    
    sType*% type2 = clone type;
    
    sType*% type_ = get_no_solved_type2(type);
    
    string result = null;
    sType*% result_type = null;
    var stack_saved = info.stack;
    list<sRightValueObject*%>* right_value_objects = borrow info.right_value_objects;
    
    string c_value = string(obj);
    
    sClass* klass = type_->mClass;
    
    char* class_name = borrow klass->mName;

    const char* fun_name = "clone";
    
    sFun* cloner = NULL;
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
                return t(new sType(s"void"), string(""));
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
        
        if(cloner == NULL) {
            cloner = borrow info->funcs[fun_name2];
        }
    }
    
    if(cloner == NULL && !type_->mClass->mNumber)
    {
        var fun,new_fun_name = create_cloner_automatically(type_, fun_name, info);
        
        fun_name2 = new_fun_name;
        cloner = fun;
    }

    /// call cloner ///
    if(cloner != null) {
        sType*% type_ = clone cloner->mResultType;
        result_type = solve_generics(type_, type_, info);
        
        result = xsprintf("%s(%s)", fun_name2, c_value);
    }
    else {
        result_type = clone type_;
        type2->mHeap = true;
        string type_name = make_type_name_string(type2);
        
        result = xsprintf("(%s)come_memdup(%s, \"%s\", %d, %d, \"%s\")", type_name, c_value, info.sname, info.sline, ++info.id, type_name);
    }
    
    info.right_value_objects = dummy_heap right_value_objects;
    info.stack = stack_saved;
    
    info.in_clone_object = in_clone_object;
    
    return t(result_type, result);
}

void free_right_value_objects(sInfo* info)
{
    if(gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return ;
    }
    
    bool free_right_value = false;
    list<sRightValueObject*%>* right_value_objects = borrow info.right_value_objects;
    
    int n = 0;
    foreach(it, right_value_objects) {
        if(it && !it->mFreed) {
            if(it->mFunName === info->come_fun->mName && it->mBlockLevel == info->block_level && !it->mStored) {
                if(it->mObjType) {
                    on_drop_object(it->mObjType, it->mObjValue, info);
                    sVar* var_ = it->mObjVar;
                    
                    var_->mCValueName = null;
                }
            }
        }
        
        n++;
    }
    foreach(it, right_value_objects) {
        if(it && !it->mFreed) {
            if(it->mFunName === info->come_fun->mName && it->mBlockLevel == info->block_level && !it->mStored && !it->mNoFree) {
                sType*% type = it->mType;
                
                sType*% type2 = clone type;
                
                if(info->generics_type) {
                    type = solve_generics(type2, info->generics_type, info);
                }

                string sname_saved = string(info->sname);
                int sline_saved = info->sline;
                info->sname = string(it->mSName);
                info->sline = it->mSLine;
                free_object(type, it->mVarName, !it->mDecrementRefCount@no_decrement, false@no_free, info);
                info->sname = sname_saved;
                info->sline = sline_saved;
                
                it->mFreed = true;
                free_right_value = true;
            }
        }
        
        n++;
    }

    int max_num = 0;
    foreach(it, right_value_objects) {
        if(it->mID + 1 > max_num) {
            max_num = it->mID +1;
        }
    }
    info->right_value_num = 0;
    if(max_num >= info->right_value_max) {
        info->right_value_max = max_num;
    }
}

sVar* get_variable_from_table(sVarTable* table, char* name)
{
    sVarTable* it = table;

    while(it) {
        sVar* var_ = borrow it.mVars[string(name)];

        if(var_) {
            return var_;
        }

        it = it->mParent;
    }

    return null;
}

void free_objects(sVarTable* table, sVar* ret_value, sInfo* info, bool ret_value_is_field=false)
{
    if(gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return ;
    }
    foreach(it, table->mVars) {
        sVar* p = borrow table->mVars[string(it)];
        sType* type = borrow p->mType;
        sClass* klass = type->mClass;
        
        if(p->no_output_come_code) {
        }
        else if(type->mChannel) {
            add_come_code(info, "(%s[0]) ? close(%s[0]):0;\n", p->mCValueName, p->mCValueName);
            add_come_code(info, "(%s[1]) ? close(%s[1]):0;\n", p->mCValueName, p->mCValueName);
        }
        else if(ret_value != null && p->mCValueName != null && p->mCValueName === ret_value->mCValueName && type->mHeap) 
        {
            if(type->mArrayNum.length() > 0) {
                err_msg(info, "no support array element with heap object result");
                exit(1);
            }
            if(ret_value_is_field) {
                free_object(type, p->mCValueName, false@no_decrement, false@no_free, info, true);
            }
            else {
                free_object(type, p->mCValueName, false@no_decrement, true@no_free, info, true);
            }
        }
        else if(type->mHeap && p->mCValueName) {
            if(type->mArrayNum.length() > 0) {
                if(type->mArrayNum.length() == 1) {
                    sNode*% node = type->mArrayNum[0];
                    
                    node_compile(node).elif {
                        err_msg(info, "invalid array number");
                        exit(1);
                    }
                    
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    
                    int n = atoi(come_value.c_value);
                    
                    for(int i=0; i<n; i++) {
                        string c_value = p->mCValueName + "[" + i.to_string() + "]";
                        sType*% element_type = clone type;
                        element_type.mArrayNum.reset();
                        
                        free_object(element_type, c_value, false@no_decrement, false@no_free, info);
                    }
                }
                else if(type->mArrayNum.length() == 2) {
                    sNode*% node = type->mArrayNum[0];
                    
                    node_compile(node).elif {
                        err_msg(info, "invalid array number");
                        exit(1);
                    }
                    
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    
                    int n = atoi(come_value.c_value);
                    
                    sNode*% node2 = type->mArrayNum[1];
                    
                    node_compile(node2).elif {
                        err_msg(info, "invalid array number");
                        exit(1);
                    }
                    
                    CVALUE*% come_value2 = get_value_from_stack(-1, info);
                    
                    int m = atoi(come_value2.c_value);
                    
                    for(int i=0; i<n; i++) {
                        for(int j=0; j<m; j++) {
                            string c_value = p->mCValueName + "[" + i.to_string() + "]" + "[" + j.to_string() + "]";
                            
                            sType*% element_type = clone type;
                            element_type.mArrayNum.reset();
                            
                            free_object(element_type, c_value, false@no_decrement, false@no_free, info);
                        }
                    }
                }
                else if(type->mArrayNum.length() == 3) {
                    sNode*% node = type->mArrayNum[0];
                    
                    node_compile(node).elif {
                        err_msg(info, "invalid array number");
                        exit(1);
                    }
                    
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    
                    int n = atoi(come_value.c_value);
                    
                    sNode*% node2 = type->mArrayNum[1];
                    
                    node_compile(node2).elif {
                        err_msg(info, "invalid array number");
                        exit(1);
                    }
                    
                    CVALUE*% come_value2 = get_value_from_stack(-1, info);
                    
                    int m = atoi(come_value2.c_value);
                    
                    sNode*% node3 = type->mArrayNum[2];
                    
                    node_compile(node3).elif {
                        err_msg(info, "invalid array number");
                        exit(1);
                    }
                    
                    CVALUE*% come_value3 = get_value_from_stack(-1, info);
                    
                    int l = atoi(come_value3.c_value);
                    
                    for(int i=0; i<n; i++) {
                        for(int j=0; j<m; j++) {
                            for(int k=0; k<l; k++) {
                                string c_value = p->mCValueName + "[" + i.to_string() + "]" + "[" + j.to_string() + "]" + "[" + k.to_string() + "]";
                                
                                sType*% element_type = clone type;
                                element_type.mArrayNum.reset();
                                
                                free_object(element_type, c_value, false@no_decrement, false@no_free, info);
                            }
                        }
                    }
                }
                else {
                    err_msg(info, "no support more 4 dimention array with heap object");
                    exit(1);
                }
            }
            else {
                free_object(type, p->mCValueName, false@no_decrement, false@no_free, info);
            }
        }
        else if(klass->mStruct && p->mCValueName && type->mAllocaValue && !type->mNoCallingDestructor) {
            string c_value = xsprintf("(&%s)", p->mCValueName);
            sType*% type2 = clone type;
            type2->mPointerNum++;
            free_object(type2, c_value, false@no_decrement, false@no_free, info);
        }
    }
}

void free_objects_on_return(sBlock* current_block, sInfo* info, sVar* ret_value, bool top_block, bool ret_value_is_field=false)
{
    if(gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return ;
    }
    sVarTable* it = info->lv_table;
    
    if(it == info->come_fun->mBlock->mVarTable) {
        free_objects(it, ret_value, info, ret_value_is_field);
    }
    else {
        while(it != info->come_fun->mBlock->mVarTable) {
            free_objects(it, ret_value, info, ret_value_is_field);
    
            it = it->mParent;
        }
        free_objects(it, ret_value, info, ret_value_is_field);
    }
}

void free_objects_on_break(sInfo* info)
{
    if(gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return ;
    }
    sVar* ret_value = null;

    sVarTable* current_loop_vtable = info.current_loop_vtable;

    if(current_loop_vtable != null) {
        sVarTable* it = info->lv_table;
        while(it != current_loop_vtable) {
            free_objects(it, ret_value, info);
        
            it = it->mParent;
         }
        free_objects(it, ret_value, info);
    }
}

bool existance_free_objects(sVarTable* table, sVar* ret_value, sInfo* info)
{
    if(gComeC) {
        return true;
    }
    foreach(it, table->mVars) {
        sVar* p = borrow table->mVars[string(it)];
        sType* type = borrow p->mType;
        sClass* klass = type->mClass;
        
        if(type->mChannel) {
            return true;
        }
        else if(ret_value != null && p->mCValueName != null && p->mCValueName === ret_value->mCValueName && type->mHeap) 
        {
            return true;
        }
        else if(type->mHeap && p->mCValueName) {
            return true;
        }
        else if(klass->mStruct && p->mCValueName && type->mAllocaValue && !type->mNoCallingDestructor) {
            return true;
        }
    }
    
    return false;
}

bool existance_free_objects_on_return(sBlock* current_block, sInfo* info, sVar* ret_value, bool top_block)
{
    if(gComeC) {
        return false;
    }
    sVarTable* it = info->lv_table;
    
    if(it == info->come_fun->mBlock->mVarTable) {
        if(existance_free_objects(it, ret_value, info)) {
            return true;
        }
    }
    else {
        while(it != info->come_fun->mBlock->mVarTable) {
            if(existance_free_objects(it, ret_value, info)) {
                return true;
            }
    
            it = it->mParent;
        }
        if(existance_free_objects(it, ret_value, info)) {
            return true;
        }
    }
    
    return false;
}

bool existance_free_right_value_objects(sInfo* info)
{
    if(gComeC) {
        return false;
    }
    list<sRightValueObject*%>* right_value_objects = borrow info.right_value_objects;
    
    foreach(it, right_value_objects) {
        if(it && !it->mFreed) {
            if(it->mFunName === info->come_fun->mName && it->mBlockLevel == info->block_level) {
                return true;
            }
        }
    }
    
    return false;
}
