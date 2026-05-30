#include "common.h"

void std_move(sType* left_type, sType* right_type, CVALUE* right_value, sInfo* info=info)
{
    if(gComeC) {
        return;
    }
    if(right_value.right_value_objects) {
        sRightValueObject* it = right_value.right_value_objects;
        foreach(it2, info.right_value_objects) {
            if(it->mID == it2->mID) {
                it2->mStored = true;
                break;
            }
        }
    }
    if(right_value.c_value_without_right_value_objects) {
        right_value.c_value = right_value.c_value_without_right_value_objects;
    }
    right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
}

sType*% solve_generics(sType* type, sType* generics_type, sInfo* info)
{
    sType*% result = clone type;
    
    if(type->mTypeOfNode) {
        int pointer_num = type->mPointerNum;
        bool heap = type->mHeap;
        
        sNode*% node = clone type->mTypeOfNode;
        
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        info.in_typeof = true;
        node_compile(node).elif {
            return result;
        }
        info.no_output_come_code = no_output_come_code;
        info.in_typeof = false;
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        result = come_value.type;
        if(result.mArrayNum.length() > 0) {
            if(pointer_num > 0) {
                result.mArrayPointerNum += pointer_num;
            }
        }
        else {
            if(pointer_num > 0) {
                result.mPointerNum += pointer_num;
            }
        }
        if(heap) {
            result.mHeap = true;
        }
    }
    if(generics_type == null) {
        return result;
    }
    if(generics_type.mGenericsTypes.length() == 0) {
        return result;
    }
    if(type.mGenericsTypes.length() > 0 && generics_type.mGenericsTypes.length() > 0 && is_contained_generics_class(type, info) && type.mGenericsTypes.length() > generics_type.mGenericsTypes.length()) {
        err_msg(info, "generics type num invalid (%d %d)", type.mGenericsTypes.length(), generics_type.mGenericsTypes.length());
        return result;
    }
    
    sClass* klass = type->mClass;

    if(klass->mName === "lambda") {
        var result_type = solve_generics(type->mResultType, generics_type, info);
        
        result->mResultType = clone result_type;
        
        result.mParamTypes.reset();

        foreach(it, type->mParamTypes) {
            sType*% new_param_type = solve_generics(dummy_heap it, generics_type, info);

            result.mParamTypes.push_back(new_param_type);
        }
    }
    else if(klass->mMethodGenerics && info->method_generics_types && info->method_generics_types.length() > 0) {
        int generics_number = klass->mMethodGenericsNum;

        if(generics_number >= info->method_generics_types.length())
        {
            err_msg(info, "invalid method generics parametor number. %d %d", generics_number, info->method_generics_types.length());
            exit(2);
        }
        
        var array_num = type->mArrayNum;
        int pointer_num = type->mPointerNum;
        bool heap = type->mHeap;
        bool deffer_right_value = type->mDefferRightValue;
        bool const_ = type->mConstant;
        
        bool norecord_ = type->mNorecord;
        bool refference_ = type->mRefference;
        bool optional_ = type->mOptional;
        bool no_heap = type->mNoHeap;
        int minus_pointer_num = type->mMinusPointerNum;
        bool no_calling_destructor = type->mNoCallingDestructor;
        int minus_pointer_num = type->mMinusPointerNum;
        
        result = clone info->method_generics_types[generics_number];
        
        if(norecord_) {
            result->mNorecord = norecord_ || result->mNorecord;
        }
        if(heap) {
            result->mHeap = result->mHeap || heap;
        }
        if(const_) {
            result->mConstant = result->mConstant || const_;
        }
        if(deffer_right_value) {
            result->mDefferRightValue = deffer_right_value || result->mDefferRightValue;
        }
        if(no_heap) {
            result->mNoHeap = true;
            result->mHeap = false;
        }
        if(no_calling_destructor) {
            result->mNoCallingDestructor = true;
        }
        if(array_num.length() > 0) {
            result->mArrayNum = array_num;
        }
        
        if(pointer_num > 0) {
            result->mPointerNum += pointer_num;
        }
        if(minus_pointer_num) {
            result->mPointerNum -= minus_pointer_num;
        }
        if(refference_) {
            //result->mRefference = result->mRefference || refference_;
            sType*% generics_type = new sType(s"ref");
            generics_type->mGenericsTypes.add(clone result);
            
            sType*% type = new sType(s"ref");
            type->mGenericsTypes.add(new sType(s"__generics_type0"));
            type->mPointerNum++;
            type->mHeap = true;
            
            sType*% type2 = solve_generics(type, generics_type, info);
            
            result = type2;
        }
        if(optional_) {
            sType*% generics_type = new sType(s"optional");
            generics_type->mGenericsTypes.add(clone type);
            
            sType*% type = new sType(s"optional");
            type->mGenericsTypes.add(new sType(s"__generics_type0"));
            type->mPointerNum++;
            type->mHeap = true;
            
            sType*% type2 = solve_generics(type, generics_type, info);
            
            result = type2;
        }
    }
    else if(klass->mGenerics) {
        int generics_number = klass->mGenericsNum;

        if(generics_number >= generics_type->mGenericsTypes.length())
        {
            err_msg(info, "invalid generics parametor number");
            exit(2);
        }

        sClass* klass2 = generics_type->mGenericsTypes[generics_number]->mClass;

        int generics_number2 = klass2->mGenericsNum;

        if(generics_number != generics_number2) 
        {
            var array_num = type->mArrayNum;
            int pointer_num = type->mPointerNum;
            bool heap = type->mHeap;
            bool deffer_right_value = type->mDefferRightValue;
            
            bool norecord_ = type->mNorecord;
            bool refference_ = type->mRefference;
            bool optional_ = type->mOptional;
            bool no_heap = type->mNoHeap;
            bool no_calling_destructor = type->mNoCallingDestructor;
            bool multiple_types = type->mMultipleTypes;
            bool const_ = type->mConstant;
            int minus_pointer_num = type->mMinusPointerNum;
            
            result = clone generics_type->mGenericsTypes[generics_number];

            if(norecord_) {
                result->mNorecord = norecord_ || result->mNorecord;
            }
            if(heap) {
                result->mHeap = result->mHeap || heap;
            }
            if(const_) {
                result->mConstant = result->mConstant || const_;
            }
            if(deffer_right_value) {
                result->mDefferRightValue = deffer_right_value || result->mDefferRightValue;
            }
            if(no_heap) {
                result->mNoHeap = true;
                result->mHeap = false;
            }
            if(multiple_types) {
                result->mMultipleTypes = true;
            }
            if(no_calling_destructor) {
                result->mNoCallingDestructor = true;
            }
            if(array_num.length() > 0) {
                result->mArrayNum = array_num;
            }
            
            if(pointer_num > 0) {
                result->mPointerNum += pointer_num;
            }
            if(minus_pointer_num) {
                result->mPointerNum -= minus_pointer_num;
            }
            if(refference_) {
                //result->mRefference = result->mRefference || refference_;
                sType*% generics_type = new sType(s"ref");
                generics_type->mGenericsTypes.add(clone result);
                
                sType*% type = new sType(s"ref");
                type->mGenericsTypes.add(new sType(s"__generics_type0"));
                type->mPointerNum++;
                type->mHeap = true;
                
                sType*% type2 = solve_generics(type, generics_type, info);
                
                result = type2;
            }
            if(optional_) {
                sType*% generics_type = new sType(s"optional");
                generics_type->mGenericsTypes.add(clone type);
                
                sType*% type = new sType(s"optional");
                type->mGenericsTypes.add(new sType(s"__generics_type0"));
                type->mPointerNum++;
                type->mHeap = true;
                
                sType*% type2 = solve_generics(type, generics_type, info);
                
                result = type2;
            }
        }
    }
    else {
        result.mGenericsTypes.reset();
        foreach(it, type->mGenericsTypes) {
            var type = solve_generics(dummy_heap it, generics_type, info);
            result->mGenericsTypes.push_back(type);
        }
        
        if(!output_generics_struct(result, generics_type, info))
        {
            string new_name = create_generics_name(type, info);
            printf("output generics is failed(%s)", new_name);
            exit(1);
        }
    }
    
    return result;
}

sType*% solve_method_generics(sType* type, sInfo* info)
{
    sType*% result = clone type;
    
    sClass* klass = type->mClass;
    
    if(klass->mMethodGenerics && info->method_generics_types && info->method_generics_types.length() > 0) {
        int generics_number = klass->mMethodGenericsNum;

        if(generics_number >= info->method_generics_types.length())
        {
            err_msg(info, "invalid method generics parametor number. %d %d", generics_number, info->method_generics_types.length());
            exit(2);
        }
        
        var array_num = type->mArrayNum;
        int pointer_num = type->mPointerNum;
        bool heap = type->mHeap;
        bool deffer_right_value = type->mDefferRightValue;
        
        bool norecord_ = type->mNorecord;
        bool refference_ = type->mRefference;
        bool optional_ = type->mOptional;
        bool no_heap = type->mNoHeap;
        bool no_calling_destructor = type->mNoCallingDestructor;
        bool constant_ = type->mConstant;
        bool norecord_ = type->mNorecord;
        int minus_pointer_num = type->mMinusPointerNum;
        
        result = clone info->method_generics_types[generics_number];

        if(heap) {
            result->mHeap = heap || result->mHeap;
        }
        if(norecord_) {
            result->mNorecord = norecord_ || result->mNorecord;
        }
        if(constant_) {
            result->mConstant = constant_ || result->mConstant;
        }
        if(deffer_right_value) {
            result->mDefferRightValue = deffer_right_value || result->mDefferRightValue;
        }
        if(no_heap) {
            result->mNoHeap = true;
            result->mHeap = false;
        }
        if(no_calling_destructor) {
            result->mNoCallingDestructor = true;
        }
        if(array_num.length() > 0) {
            result->mArrayNum = array_num;
        }
        
        if(pointer_num > 0) {
            result->mPointerNum += pointer_num;
        }
        if(minus_pointer_num) {
            result->mPointerNum -= minus_pointer_num;
        }
        if(refference_) {
            //result->mRefference = result->mRefference || refference_;
            sType*% generics_type = new sType(s"ref");
            generics_type->mGenericsTypes.add(clone result);
            
            sType*% type = new sType(s"ref");
            type->mGenericsTypes.add(new sType(s"__generics_type0"));
            type->mPointerNum++;
            type->mHeap = true;
            
            sType*% type2 = solve_generics(type, generics_type, info);
            
            result = type2;
        }
        if(optional_) {
            sType*% generics_type = new sType(s"optional");
            generics_type->mGenericsTypes.add(clone type);
            
            sType*% type = new sType(s"optional");
            type->mGenericsTypes.add(new sType(s"__generics_type0"));
            type->mPointerNum++;
            type->mHeap = true;
            
            sType*% type2 = solve_generics(type, generics_type, info);
            
            result = type2;
        }
    }
    
    int i = 0;
    foreach(it, type->mGenericsTypes) {
        result->mGenericsTypes[i] = solve_method_generics(it, info);
        i++;
    }
    i = 0;
    foreach(it, type->mParamTypes) {
        result->mParamTypes[i] = solve_method_generics(it, info);
        i++;
    }
    
    if(type->mResultType) {
        result->mResultType = solve_method_generics(type->mResultType, info);
    }
    
    (void)output_generics_struct(result, null, info);
    
    return result;
}

void append_object_to_right_values(CVALUE* come_value, sType* type, sInfo* info, bool decrement_ref_count=false, sType* obj_type=null, char* obj_value=null, sVar* obj_var=null)
{
    if(gComeC) {
        return ;
    }
    if(info->no_output_come_code) {
        return ;
    }
    
    var new_value = new sRightValueObject;
    new_value.mType = clone type;
    new_value.mFreed = false;
    new_value.mID = info->right_value_num;
    new_value.mVarName = xsprintf("__right_value%d", info->right_value_num++);
    new_value.mFunName = info->come_fun->mName;
    new_value.mSName = borrow info->sname;
    new_value.mSLine = info->sline;
    new_value.mBlockLevel = info->block_level;
    new_value.mDecrementRefCount = decrement_ref_count;
    
    if(obj_value) {
        new_value.mObjType = clone obj_type;
        new_value.mObjValue = string(obj_value);
        new_value.mObjVar = obj_var;
        
        if(!type->mHeap) {
            new_value.mNoFree = true;
        }
    }
    
    info.right_value_objects.push_back(new_value);
    
    if(type->mPointerNum > 0) {
        bool already_defined = info->right_value_num-1 < info->right_value_max && info->right_value_max > 0;
        
        if(already_defined) {
            if(info.in_conditional) {
                add_come_code(info, "__right_value%d = (void*)0,\n", info->right_value_num-1);
            }
            else {
                add_come_code(info, "__right_value%d = (void*)0;\n", info->right_value_num-1);
            }
        }
        else {
            string buf = xsprintf("void* __right_value%d = (void*)0;\n", info->right_value_num-1);
            add_come_code_at_function_head(info, buf);
        }
        
        come_value.c_value_without_right_value_objects = clone come_value.c_value;
        come_value.c_value = xsprintf("((%s)(%s=%s))", make_type_name_string(type, cast_type:true), new_value->mVarName, come_value.c_value);
        come_value.right_value_objects = borrow new_value;
    }
}

void remove_object_from_right_values(int right_value_num, sInfo* info)
{
    if(gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return ;
    }
    int i = 0;
    bool found = false;
    foreach(it, info->right_value_objects) {
        if(it->mID == right_value_num) {
            found = true;
            break;
        }
        i++;
    }
    if(!found) {
        return;
    }
    int id = right_value_num;
    if(id + 1 > info->right_value_max) {
        info->right_value_max = id +1;
    }
    
    info->right_value_objects.delete(i, i+1);
}

void remove_value_from_right_value_objects(CVALUE* come_value, sInfo* info=info)
{
    if(come_value.type.mPointerNum > 0) {
        struct sRightValueObject* right_value_objects = come_value.right_value_objects;
        if(right_value_objects) {
             int right_value_id = right_value_objects.mID;
            
            if(right_value_id != -1) {
                remove_object_from_right_values(right_value_id, info);
            }
        }
    }
}

string increment_ref_count_object(sType* type, char* obj, sInfo* info)
{
    if(gComeC) {
        return string(obj);
    }
    if(info->no_output_come_code) {
        return string(obj);
    }
    sClass* klass = type->mClass;
    
    string type_name = make_type_name_string(type);
    
    return xsprintf("(%s)come_increment_ref_count(%s, \"%s\", %d, %d)", type_name, obj, info->sname, info->sline, ++info.id);
}

void decrement_ref_count_object(sType* type, char* obj, sInfo* info, bool no_free=false)
{
    if(gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return ;
    }
    var stack_saved = info.stack;
    list<sRightValueObject*%>* right_value_objects = borrow info.right_value_objects;
    
    sClass* klass = type->mClass;
    
    static int dec_num = 0;
    
    string name = xsprintf("__dec_obj%d", ++dec_num);
    add_come_code_at_function_head(info, "%s;\n", make_define_var(type, name));
    
    add_come_code(info, "%s=%s,\n", name, obj);
    
    obj = borrow name;
    bool no_decrement = false;
    
    if(type->mPointerNum > 0 || type->mArrayPointerNum) {
        string c_value = string(obj);
        
        sClass* klass = type->mClass;
        
        char* class_name = borrow klass->mName;

        const char* fun_name = "finalize";
        
        sType*% type2 = clone type;
        type2->mHeap = false;
        
        string fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
        
        sType*% type_ = get_no_solved_type2(type);
        
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
                    add_come_last_code2(info, s"come_call_finalizer(\{fun_name2}, \{c_value}, \{c_value} ? ((\{type_name})\{c_value})->finalize:(void*)0, \{c_value} ? ((\{type_name})\{c_value})->_protocol_obj:(void*)0, \{type_->mAllocaValue?1:0}, \{no_decrement?1:0}, \{no_free?1:0}, (void*)0, \"\{info->sname}\", \{info->sline}, \{++info->id})");
                }
            }
            else {
                if(c_value) {
                    add_come_last_code2(info, s"come_call_finalizer(\{fun_name2}, \{c_value},(void*)0, (void*)0, \{type_->mAllocaValue?1:0}, \{no_decrement?1:0}, \{no_free?1:0}, (void*)0, \"\{info->sname}\", \{info->sline}, \{++info->id})");
                }
            }
        }
        else {
            if(klass->mProtocol && type_->mPointerNum == 1) {
                string type_name = make_type_name_string(type_);
                string str = s"(\{name} ? \{name} = come_decrement_ref_count(\{name}, ((\{type_name})\{name})->finalize, ((\{type_name})\{name})->_protocol_obj, 0,\{no_free ? 1:0}, (void*)0, \"\{info->sname}\", \{info->sline}, \{++info->id}) :0)";
                add_come_last_code2(info, str);
            }
            else {
                string str = xsprintf(s"%s = come_decrement_ref_count(%s, (void*)0, (void*)0, 0,\{no_free ? 1:0}, (void*)0, \"\{info->sname}\", \{info->sline}, \{++info.id})", name, name);
                add_come_last_code2(info, str);
            }
        }
    }
    
    info.right_value_objects = dummy_heap right_value_objects;
    info.stack = stack_saved;
}

