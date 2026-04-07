#include "common.h"

static sType*% expand_typedef_for_load_element(sType* type)
{
    sType*% result = clone type;
    int guard = 0;
    
    while(result->mTypedefOriginalType && guard < 16) {
        sType*% orig = clone result->mTypedefOriginalType;
        
        int ptr = result->mPointerNum;
        if(ptr == 0 && orig->mPointerNum > 0) {
            ptr = orig->mPointerNum;
        }
        orig->mPointerNum = ptr;
        
        int array_ptr = result->mArrayPointerNum;
        if(array_ptr == 0 && orig->mArrayPointerNum > 0) {
            array_ptr = orig->mArrayPointerNum;
        }
        orig->mArrayPointerNum = array_ptr;
        
        if(result->mArrayPointerType) {
            orig->mArrayPointerType = true;
        }
        if(result->mArrayNum.length() > 0) {
            orig->mArrayNum = clone result->mArrayNum;
        }
        
        orig->mConstant = result->mConstant;
        orig->mVolatile = result->mVolatile;
        orig->mRestrict = result->mRestrict;
        orig->mUnsigned = result->mUnsigned;
        orig->mShort = result->mShort;
        orig->mLong = result->mLong;
        orig->mLongLong = result->mLongLong;
        orig->mComplex = result->mComplex;
        orig->mAtomic = result->mAtomic;
        
        orig->mPointerAttribute = result->mPointerAttribute;
        orig->mAttribute = result->mAttribute;
        orig->mVarAttribute = result->mVarAttribute;
        
        if(result->mGenericsTypes.length() > 0) {
            orig->mGenericsTypes = clone result->mGenericsTypes;
        }
        if(result->mNoSolvedGenericsType) {
            orig->mNoSolvedGenericsType = clone result->mNoSolvedGenericsType;
        }
        if(result->mOriginalLoadVarType) {
            orig->mOriginalLoadVarType = clone result->mOriginalLoadVarType;
        }
        
        result = clone orig;
        guard++;
    }
    
    return result;
}


bool operator_overload_fun2(sType* type, const char* fun_name, sNode*% left_node, sNode*% middle_node, sNode*% right_node, CVALUE* left_value, CVALUE* middle_value, CVALUE* right_value, sInfo* info)
{
    sType*% generics_type;
    
    if(type->mNoSolvedGenericsType) {
        generics_type = clone type->mNoSolvedGenericsType;
    }
    else {
        generics_type = clone type;
    }
    
    sClass* klass = type->mClass;
    char*% class_name = klass->mName;
    
    var fun_name2, operator_fun, generics_fun = get_method(fun_name, type, info);
    
    bool result = false;
    
    if(operator_fun) {
        {
            sRightValueObject* right_value_object = left_value.right_value_objects;
            
            if(right_value_object) {
                right_value_object->mFreed = true;
            }
        }
        {
            sRightValueObject* right_value_object = middle_value.right_value_objects;
            
            if(right_value_object) {
                right_value_object->mFreed = true;
            }
        }
        {
            sRightValueObject* right_value_object = right_value.right_value_objects;
            
            if(right_value_object) {
                right_value_object->mFreed = true;
            }
        }
        sNode*% obj = left_node;
        list<tuple2<string, sNode*%>*%>*% params =  new list<tuple2<string, sNode*%>*%>();
        
        params.add(t((string)null, left_node));
        params.add(t((string)null, middle_node));
        params.add(t((string)null, right_node));
        
        sNode*% node = create_method_call(fun_name, obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
        
        node_compile(node).if {
            result = true;
        }
    }
    
    return result;
}

sType*% get_field_type(sClass* klass, string name, sInfo* info)
{
    sType*% result = null
    foreach(field, klass->mFields) {
        var field_name, field_type2 = field;
        
        if(field_name === name) {
            result = clone field_type2;
            break;
        };
        
        if(field_type2->mAnonymousVarName) {
            result = get_field_type(field_type2->mClass, name, info);
            
            if(result) {
                break;
            }
        }
    }
    
    return result;
}


class sStoreFieldNode extends sNodeBase
{
    new(sNode* left, sNode*% right, string name, sInfo* info, bool arrow_=false)
    {
        self.super();
    
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
        string self.mName = string(name);
        bool self.mArrow = arrow_;
    }
    
    string kind()
    {
        return string("sStoreFieldNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% left = create_heap_checker(self.mLeft);
        sNode*% right = self.mRight;
        string name = string(self.mName);
        bool arrow_ = self.mArrow;
        
        node_compile(left).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type2;
        
        if(left_value.type.mNoSolvedGenericsType) {
            left_type2 = left_value.type.mNoSolvedGenericsType;
        }
        else {
            left_type2 = left_value.type;
        }
        if(left_type2.mClass.mName === "tuple1" || left_type2.mClass.mName === "tuple2" || left_type2.mClass.mName === "tuple3" || left_type2.mClass.mName === "tuple3" || left_type2.mClass.mName === "tuple4" || left_type2.mClass.mName === "tuple5")
        {
            for(int i=0; i<left_type2.mGenericsTypes.length(); i++) {
                if(name === left_type2.mGenericsTypes[i].mTupleName) {
                    name = xsprintf("v%d", i+1);
                }
            }
        }
        
        node_compile(right).elif {
            return false;
        }
        
        bool new_channel = right.kind() === "sNewChannel";
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        sType*% right_type = right_value.type;
        
        sType*% left_type = left_value.type;
        sType*% left_type3 = left_type;
        
//        sType*% left_type2 = solve_generics(left_type, info.generics_type, info);
        
        sClass*% klass = info.classes[left_type3->mClass->mName];
        
        sType*% field_type = null;
        int index = 0;
        string child_field_name = null;
        bool child_field_is_pointer = false;
        
        if(klass->mFields == null) {
            warning_msg(info, "%s fields are null", klass->mName);
            return true;
        }
        
        sType*% field_type = get_field_type(klass, name, info);
        
        if(field_type == null) {
            warning_msg(info, "field %s is not found", name);
            
            CVALUE*% come_value = new CVALUE();
            
            if(arrow_) {
                come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
            }
            else {
                come_value.c_value = xsprintf("%s.%s/* aaa */=%s", left_value.c_value, name, right_value.c_value);
            }
            come_value.type = clone right_value.type;
            come_value.var = right_value.var;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
            return true;
        }
        
        CVALUE*% come_value = new CVALUE();
        
        right_type = right_value.type;
        
        check_assign_type(s"\{name} is assigned to(1)", field_type, right_type, right_value);
        
        right_type = clone right_value.type;
        
        if(field_type->mHeap != right_value.type->mHeap) {
            if(right_value.type->mClass->mName === "void" && right_value.type->mPointerNum == 1)
            {
            }
            else {
                err_msg(info, "invalid heap object(%s) left  %d right %d", name, field_type->mHeap, right_value.type->mHeap);
                return true;
            }
        }
        if(field_type->mHeap && right_type->mHeap && field_type->mPointerNum > 0 && right_type->mPointerNum > 0) 
        {
            if(left_value.type->mPointerNum == 1 || left_value.type->mArrayPointerNum == 1) {
                if(child_field_name) {
                    string c_value;
                    if(child_field_is_pointer) {
                        c_value = xsprintf("%s->%s->%s", left_value.c_value, child_field_name, name);
                    }
                    else {
                        c_value = xsprintf("%s->%s.%s", left_value.c_value, child_field_name, name);
                    }
                    decrement_ref_count_object(field_type, c_value, info);
                    std_move(field_type, right_type, right_value);
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s->%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s->%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    string c_value = xsprintf("%s->%s", left_value.c_value, name);
                    decrement_ref_count_object(field_type, c_value, info);
                    std_move(field_type, right_type, right_value);
                    come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else if(left_value.type->mPointerNum == 0) {
                if(child_field_name) {
                    string c_value;
                    if(child_field_is_pointer) {
                        c_value = xsprintf("%s.%s->%s", left_value.c_value, child_field_name, name);
                    }
                    else {
                        c_value = xsprintf("%s.%s.%s", left_value.c_value, child_field_name, name);
                    }
                    decrement_ref_count_object(field_type, c_value, info);
                    std_move(field_type, right_type, right_value);
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s.%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s.%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    string c_value = xsprintf("%s.%s", left_value.c_value, name);
                    decrement_ref_count_object(field_type, c_value, info);
                    std_move(field_type, right_value.type, right_value);
                    come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else {
                err_msg(info, "Invalid left_type. The field name is %s. The pointer num is %d.(X)", name, left_value.type->mPointerNum);
                return true;
            }
        }
        else if(field_type->mHeap && field_type->mPointerNum > 0 && right_type->mPointerNum > 0 && right_type->mClass->mName === "void") 
        {
            if(left_value.type->mPointerNum == 1 || left_value.type->mArrayPointerNum == 1) {
                if(child_field_name) {
                    string c_value;
                    if(child_field_is_pointer) {
                        c_value = xsprintf("%s->%s->%s", left_value.c_value, child_field_name, name);
                    }
                    else {
                        c_value = xsprintf("%s->%s.%s", left_value.c_value, child_field_name, name);
                    }
                    decrement_ref_count_object(field_type, c_value, info);
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s->%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s->%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    string c_value = xsprintf("%s->%s", left_value.c_value, name);
                    decrement_ref_count_object(field_type, c_value, info);
                    come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else if(left_value.type->mPointerNum == 0) {
                if(child_field_name) {
                    string c_value;
                    if(child_field_is_pointer) {
                        c_value = xsprintf("%s.%s->%s", left_value.c_value, child_field_name, name);
                    }
                    else {
                        c_value = xsprintf("%s.%s.%s", left_value.c_value, child_field_name, name);
                    }
                    decrement_ref_count_object(field_type, c_value, info);
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s.%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s.%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    string c_value = xsprintf("%s.%s", left_value.c_value, name);
                    decrement_ref_count_object(field_type, c_value, info);
                    come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else {
                err_msg(info, "Invalid left_type. The field name is %s. The pointer num is %d.(Y)", name, left_value.type->mPointerNum);
                return true;
            }
        }
        else if(field_type->mChannel && new_channel) {
            if(child_field_is_pointer) {
                come_value.c_value = xsprintf("(pipe(%s->%s), %s);\n", left_value.c_value, name, right_value.c_value);
            }
            else {
                come_value.c_value = xsprintf("(pipe(%s.%s), %s);\n", left_value.c_value, name, right_value.c_value);
            }
            
            come_value.type = clone right_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        
            return true;
        }
        else {
            if(left_value.type->mPointerNum == 1 || left_value.type->mArrayPointerNum == 1) {
                if(child_field_name) {
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s->%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s->%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else if(left_value.type->mPointerNum == 0) {
                if(child_field_name) {
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s.%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s.%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else {
                err_msg(info, "Invalid left_type. The field name is %s. The pointer num is %d.(Z)", name, left_value.type->mPointerNum);
                return true;
            }
        }
        
        come_value.type = clone field_type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
    
        return true;
    }
};

class sLoadFieldNode extends sNodeBase
{
    new(sNode* left, string name, sInfo* info, bool arrow_=false)
    {
        self.super();
    
        sNode*% self.mLeft = clone left;
        string self.mName = string(name);
        bool self.mArrow = arrow_;
    }
    
    string kind()
    {
        return string("sLoadFieldNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% left = create_heap_checker(self.mLeft);
        string name = string(self.mName);
        bool arrow_ = self.mArrow;
        
        node_compile(left).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type2 = left_value.type;
        
        sType*% left_type3;
        if(left_type2.mNoSolvedGenericsType) {
            left_type3 = left_type2.mNoSolvedGenericsType;
        }
        else {
            left_type3 = left_type2;
        }
        if(left_type3.mClass.mName === "tuple1" || left_type3.mClass.mName === "tuple2" || left_type3.mClass.mName === "tuple3" || left_type3.mClass.mName === "tuple3" || left_type3.mClass.mName === "tuple4" || left_type3.mClass.mName === "tuple5")
        {
            for(int i=0; i<left_type3.mGenericsTypes.length(); i++) {
                if(name === left_type3.mGenericsTypes[i].mTupleName) {
                    name = xsprintf("v%d", i+1);
                }
            }
        }
        
        sType*% left_type = left_value.type;
        
        sType*% left_type3_ = solve_generics(left_type, left_type, info);
        sType*% left_type3 = solve_method_generics(left_type3_, info);
        
        sClass* klass = left_type3->mClass;
        klass = borrow info.classes[string(klass->mName)];
        
        if(klass == null || klass->mFields == null) {
            warning_msg(info, "type of %s.%s is not found. so can't check the heap type\n", left_value.c_value, name);
            
            CVALUE*% come_value = new CVALUE();
            
            if(arrow_) {
                come_value.c_value = xsprintf("%s->%s", left_value.c_value, name);
            }
            else {
                come_value.c_value = xsprintf("%s.%s", left_value.c_value, name);
            }
            come_value.type = new sType(s"void");
            come_value.type.mPointerNum = 1;
            come_value.var = left_value.var;
            come_value.mLoadField = true;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            return true;
        }
        
        sType*% field_type = get_field_type(klass, name, info);
        
        if(field_type == null) {
            warning_msg(info, "type of %s.%s is not found. so can't check the heap type\n", left_value.c_value, name);
            
            CVALUE*% come_value = new CVALUE();
            
            if(arrow_) {
                come_value.c_value = xsprintf("%s->%s", left_value.c_value, name);
            }
            else {
                come_value.c_value = xsprintf("%s.%s", left_value.c_value, name);
            }
            come_value.type = new sType(s"void");
            come_value.type.mPointerNum = 1;
            come_value.var = left_value.var;
            come_value.mLoadField = true;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            return true;
        }
        
        CVALUE*% come_value = new CVALUE();
        
        if(left_value.type->mPointerNum > 0 || left_value.type->mArrayPointerNum > 0) {
            come_value.c_value = xsprintf("%s->%s", left_value.c_value, name);
        }
        else {
            come_value.c_value = xsprintf("%s.%s", left_value.c_value, name);
        }
        come_value.type = clone field_type;
        sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
        come_value.type = solve_method_generics(type_, info);
        come_value.var = left_value.var;
        come_value.mLoadField = true;
        
        if(come_value.type->mArrayNum.length() > 0) {
            if(info.in_store_array) {
                sType*% original_load_var_type = clone come_value.type;
                come_value.type->mOriginalLoadVarType = original_load_var_type;
            }
            else if(info.in_typeof) {
                sType*% original_load_var_type = clone come_value.type;
                come_value.type->mOriginalLoadVarType = original_load_var_type;
            }
            else if(info.in_refference) {
                sType*% original_load_var_type = clone come_value.type;
                come_value.type->mOriginalLoadVarType = original_load_var_type;
                
                /// no decay ///
                come_value.type->mArrayPointerNum++;
            }
            else {
                sType*% original_load_var_type = clone come_value.type;
                come_value.type->mOriginalLoadVarType = original_load_var_type;
                
                /// decay ///
                come_value.type->mArrayNum.delete(0, 1);
                come_value.type->mArrayPointerNum++;
            }
        }
        
        info.stack.push_back(come_value);
    
        return true;
    }
};

bool in_the_fun(string fun_name, sInfo* info=info)
{
    if(info.come_fun && ((strlen(info.come_fun.mName) > strlen(fun_name) && memcmp(info.come_fun.mName, fun_name, strlen(fun_name)) == 0)))
    {
        return true;
    }
    
    return false;
}

class sAutomaticallyUnwrapNode extends sNodeBase
{
    new(sNode*% node, sInfo* info=info)
    {
        self.super();
    
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sAutomaticallyUnwrapNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        if(in_the_fun(s"ref$", info) || in_the_fun(s"optional$", info)) // || in_the_fun(s"span$", info))
        {
            info.stack.push_back(come_value);
        }
        else if(come_value.type.mNoSolvedGenericsType) {
            if(come_value.type.mNoSolvedGenericsType.mClass.mName === "ref" || come_value.type.mNoSolvedGenericsType.mClass.mName === "optional") {
            // || come_value.type.mNoSolvedGenericsType.mClass.mName === "span")
                sNode*% obj = node;
                list<tuple2<string, sNode*%>*%>*% params =  new list<tuple2<string, sNode*%>*%>();
                
                const char* fun_name = "unwrap";
                
                params.add(t((string)null, node));
                
                sNode*% node = create_method_call(fun_name, obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
                
                node_compile(node).if {
                    return true;
                }
            }
            else {
                info.stack.push_back(come_value);
            }
        }
        else {
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

sNode*% automatically_unwrap(sNode*% node, sInfo* info=info)
{
    return new sAutomaticallyUnwrapNode(node, info) implements sNode;
}

static sType*% get_result_value_type(sType* type, sInfo* info=info)
{
    if(type == null) {
        return null;
    }
    
    sType*% type2 = clone type;
    if(type2->mNoSolvedGenericsType) {
        type2 = clone type2->mNoSolvedGenericsType;
    }
    
    if(type2->mClass == null || type2->mClass->mName == null) {
        return null;
    }
    
    if(type2->mClass->mName !== "tuple2") {
        return null;
    }
    
    if(type2->mGenericsTypes.length() != 2) {
        return null;
    }
    
    sType* second_type = borrow type2->mGenericsTypes[1];
    if(second_type->mNoSolvedGenericsType) {
        second_type = borrow second_type->mNoSolvedGenericsType;
    }
    
    if(second_type->mClass == null || second_type->mClass->mName == null) {
        return null;
    }
    
    if(second_type->mClass->mName !== "_Bool" && second_type->mClass->mName !== "bool") {
        return null;
    }
    
    sType* first_type = borrow type2->mGenericsTypes[0];
    
    return clone first_type;
}

static string create_zero_value_code(sType* type, sInfo* info=info)
{
    sType*% type2_ = solve_generics(type, info->generics_type, info);
    sType*% type2 = solve_method_generics(type2_, info);
    
    string type_name = make_type_name_string(type2, no_static:true, typedef_extended:true);
    
    static int n = 0;
    string var_name = xsprintf("__zero_value%d", ++n);
    
    return xsprintf("({ %s %s; memset(&%s, 0, sizeof(%s)); %s; })", type_name, var_name, var_name, type_name, var_name);
}

class sUnwrapNode extends sNodeBase
{
    new(sNode*% node, sInfo* info=info, bool check=true, bool no_unwrap=false)
    {
        self.super();
    
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sUnwrapNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        sNode*% obj = node;
        list<tuple2<string, sNode*%>*%>*% params =  new list<tuple2<string, sNode*%>*%>();
        
        const char* fun_name = "unwrap";
        
        params.add(t((string)null, node));
        
        sNode*% node = create_method_call(fun_name, obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
        
        node_compile(node ,info).elif {
            return false;
        }
    
        return true;
    }
};

class sZeroValueNode extends sNodeBase
{
    new(sType*% type, sInfo* info=info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sZeroValueNode");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = create_zero_value_code(type, info);
        come_value.type = solve_method_generics(solve_generics(type, info->generics_type, info), info);
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sTryOperatorNode extends sNodeBase
{
    new(sNode*% node, sInfo* info=info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sTryOperatorNode");
    }
    
    bool compile(sInfo* info)
    {
        if(info->come_fun == null) {
            err_msg(info, "?? requires function context");
            return false;
        }
        
        sNode*% node = self.node;
        
        buffer*% if_expression_buffer = clone info.if_expression_buffer;
        info.if_expression_buffer = new buffer();
        
        node_compile(node).elif {
            info.if_expression_buffer = if_expression_buffer;
            return false;
        }
        
        CVALUE*% node_value = get_value_from_stack(-1, info);
        
        sType*% result_value_type = get_result_value_type(node_value.type, info);
        
        if(result_value_type == null) {
            err_msg(info, "?? requires Result<T> value");
            info.if_expression_buffer = if_expression_buffer;
            return false;
        }
        
        sType*% function_result_type_ = clone info->come_fun->mResultType;
        sType*% function_result_type2_ = solve_generics(function_result_type_, info->generics_type, info);
        sType*% function_result_type = solve_method_generics(function_result_type2_, info);
        
        sType*% function_result_value_type = get_result_value_type(function_result_type, info);
        
        if(function_result_value_type == null) {
            err_msg(info, "?? requires Result<T> return type");
            info.if_expression_buffer = if_expression_buffer;
            return false;
        }
        
        remove_value_from_right_value_objects(node_value, info);
        
        static int n = 0;
        string var_name = xsprintf("__try_value%d", ++n);
        
        sType*% node_type = clone node_value.type;
        node_type->mDefferRightValue = true;
        
        add_variable_to_table(var_name, clone node_type, info, false@function_param, false);
        
        sVar* var_ = get_variable_from_table(info->lv_table, var_name);
        
        add_come_code_at_function_head(info, "%s;\n", make_define_var(node_type, var_->mCValueName));
        
        bool no_output_come_code = info.no_output_come_code;
        
        sNode*% error_node = load_field(create_load_var(var_name), s"v2");
        info.no_output_come_code = true;
        node_compile(error_node).elif {
            info.no_output_come_code = no_output_come_code;
            info.if_expression_buffer = if_expression_buffer;
            return false;
        }
        CVALUE*% error_value = get_value_from_stack(-1, info);
        info.no_output_come_code = no_output_come_code;
        
        sNode*% success_node = load_field(create_load_var(var_name), s"v1");
        info.no_output_come_code = true;
        node_compile(success_node).elif {
            info.no_output_come_code = no_output_come_code;
            info.if_expression_buffer = if_expression_buffer;
            return false;
        }
        CVALUE*% success_value = get_value_from_stack(-1, info);
        info.no_output_come_code = no_output_come_code;
        
        string success_var_name = xsprintf("__try_result%d", n);
        sType*% success_type = clone result_value_type;
        success_type->mDefferRightValue = true;
        
        add_variable_to_table(success_var_name, clone success_type, info, false@function_param, false);
        
        sVar* success_var = get_variable_from_table(info->lv_table, success_var_name);
        
        add_come_code_at_function_head(info, "%s;\n", make_define_var(success_type, success_var->mCValueName));
        add_come_code_at_function_head(info, "%s = %s;\n", success_var->mCValueName, create_zero_value_code(success_type, info));
        
        string result_var_name = string(var_->mCValueName);
        string field_name = xsprintf("%s%sv1", result_var_name, node_type->mPointerNum > 0 ? "->" : ".");
        
        add_come_code(info, "({");
        add_come_code(info, "%s=%s;\n", var_->mCValueName, node_value.c_value);
        add_come_code(info, "if(%s) {\n", error_value.c_value);
        
        list<tuple2<string, sNode*%>*%>*% tuple_elements = new list<tuple2<string, sNode*%>*%>();
        tuple_elements.add(t((string)null, new sZeroValueNode(function_result_value_type, info) implements sNode));
        tuple_elements.add(t((string)null, create_true_object(info)));
        
        sNode*% return_node = create_return_node(create_tuple_node(tuple_elements, info), info);
        
        bool last_statment_is_return = info.last_statment_is_return;
        bool inhibits_output_code = info.inhibits_output_code;
        
        node_compile(return_node).elif {
            info.last_statment_is_return = last_statment_is_return;
            info.inhibits_output_code = inhibits_output_code;
            info.if_expression_buffer = if_expression_buffer;
            return false;
        }
        
        info.last_statment_is_return = last_statment_is_return;
        info.inhibits_output_code = inhibits_output_code;
        
        add_come_code(info, "}\n");
        add_come_code(info, "%s=%s;\n", success_var->mCValueName, success_value.c_value);
        add_come_code(info, "%s=%s;\n", field_name, create_zero_value_code(result_value_type, info));
        add_come_code(info, "(%s = come_decrement_ref_count(%s, (void*)0, (void*)0, 0, 0, (void*)0, \"%s\", %d, %d));\n", result_var_name, result_var_name, info->sname, info->sline, ++info->id);
        var_->mCValueName = null;
        add_come_code(info, "%s;})", success_var->mCValueName);
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = info.if_expression_buffer.to_string();
        come_value.type = clone result_value_type;
        come_value.var = null;
        
        if(come_value.type->mHeap) {
            append_object_to_right_values(come_value, come_value.type, info, obj_type:success_type, obj_value:success_var->mCValueName, obj_var:success_var);
        }
        else if(success_var) {
            append_object_to_right_values(come_value, come_value.type, info, obj_type:success_type, obj_value:success_var->mCValueName, obj_var:success_var);
        }
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        info.if_expression_buffer = if_expression_buffer;
        
        return true;
    }
};

sNode*% create_try_operator_node(sNode*% node, sInfo* info=info)
{
    return new sTryOperatorNode(node, info) implements sNode;
}

sNode*% load_field(sNode*% left, string name, sInfo* info=info)
{
    sNode*% left2 = automatically_unwrap(left);
    return new sLoadFieldNode(left2, name, info) implements sNode;
}

class sStoreArrayNode extends sNodeBase
{
    new(sNode* left, sNode*% right, list<sNode*%>*% array_num, bool quote, sInfo* info)
    {
        self.super();
    
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
        list<sNode*%>*% self.mArrayNum = clone array_num;
        bool self.mQuote = quote;
    }
    
    string kind()
    {
        return string("sStoreArrayNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% left = create_heap_checker(self.mLeft);
        sNode*% right = self.mRight;
        list<sNode*%>*% array_num_nodes = self.mArrayNum;
        
        info.in_store_array = true;
        node_compile(left).elif {
            return false;
        }
        info.in_store_array = false;
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type = left_value.type;
        
        list<CVALUE*%>*% array_num = new list<CVALUE*%>();
        
        foreach(it, array_num_nodes) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% c_value = get_value_from_stack(-1, info);
            
            array_num.push_back(c_value);
        }
        
        const char* fun_name = "operator_store_element";
        var fun_name2, operator_fun, generics_fun = get_method(fun_name, left_type, info);
        
        node_compile(right).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType* right_type = borrow right_value.type;
        
        sClass* klass = left_value.type->mClass;
        
        sType*% type = clone left_value.type;
        
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            sNode*% middle = array_num_nodes[0];
            calling_fun = operator_overload_fun2(type, fun_name, left, middle, right, left_value, array_num[0], right_value, info);
        }
        
        if(!calling_fun) {
            if(gComeSafe) {
                err_msg(info, "StoreArray is not safe code");
                return false;
            }
            CVALUE*% come_value = new CVALUE();
            sType*% original_load_var_type = clone left_type;
            
            if(left_type.mArrayNum.length() > 0) {
                for(int i=0; i<array_num.length(); i++) {
                    left_type.mArrayNum.delete(-1, -1);
                }
            }
            else if(left_type->mPointerNum > 0) {
                left_type->mPointerNum -= array_num.length();
                
                if(left_type->mPointerNum < 0) {
                    left_type->mPointerNum = 0;
                }
            }
            
            if(left_type->mArrayPointerNum > 0) {
                left_type->mArrayPointerNum -= array_num.length();
                if(left_type->mArrayPointerNum < 0) {
                    left_type->mArrayPointerNum = 0;
                }
                if(left_type->mArrayPointerNum == 0) {
                    left_type->mArrayPointerType = false;
                }
            }
            
            if(array_num.length() > 0) {
                left_type->mOriginalLoadVarType = original_load_var_type;
            }
            
            buffer*% buf = new buffer();
            
            buf.append_str(left_value.c_value);
            
            foreach(it, array_num) {
                buf.append_format("[%s]", it.c_value);
            }
            
            string left_value_code = buf.to_string();
            
            sType*% left_type2 = clone left_type;
            left_type2->mHeap = false;
            check_assign_type(s"array is assinged to(2)", left_type2, right_type, right_value);
            if(left_type->mHeap && right_type->mHeap && left_type->mArrayPointerNum > 0 && right_type->mPointerNum > 0) 
            {
                decrement_ref_count_object(left_type,left_value_code, info);
                std_move(left_type, right_type, right_value);
                come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
            }
            else {
                if(left_value.type->mPointerNum >= 1) {
                    come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
                }
                else if(left_value.type->mPointerNum == 0) {
                    come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
                }
                else {
                    come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
//                    err_msg(info, "Invalid left_type. The name is %s. The pointer num is %d.(2)", left_value_code, left_value.type->mPointerNum);
//                    return true;
                }
            }
            sType*% result_type = clone left_type;
            result_type.mArrayNum = new list<sNode*%>();
            come_value.type = result_type;
            come_value.var = null;
            
            sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
            come_value.type = solve_method_generics(type_, info);
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
    
        return true;
    }
};

class sLoadArrayNode extends sNodeBase
{
    new(sNode* left, list<sNode*%>*% array_num, bool quote, bool break_guard, sInfo* info)
    {
        self.super();
        
        list<sNode*%>*% self.mArrayNum = clone array_num;
        bool self.mBreakGuard = break_guard;
    
        sNode*% self.mLeft = clone left;
        bool self.mQuote = quote;
    }
    
    string kind()
    {
        return string("sLoadArrayNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% left = create_heap_checker(self.mLeft);
        list<sNode*%>*% array_num_nodes = self.mArrayNum;
        
        node_compile(left).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type = clone left_value.type;
        
        list<CVALUE*%>*% array_num = new list<CVALUE*%>();
        
        foreach(it, array_num_nodes) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% c_value = get_value_from_stack(-1, info);
            
            array_num.push_back(c_value);
        }
        
        sType*% type = clone left_value.type;
        
        const char* fun_name = "operator_load_element";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left, array_num_nodes[0], left_value, array_num[0], self.mBreakGuard, info);
        }
        
        if(!calling_fun) {
            if(gComeSafe) {
                err_msg(info, "LoadArray is not safe code");
                return false;
            }
            CVALUE*% come_value = new CVALUE();
            
            buffer*% buf = new buffer();
            
            buf.append_str(left_value.c_value);
            
            foreach(it, array_num) {
                buf.append_format("[%s]", it.c_value);
            }
            
            string left_value_code = buf.to_string();
            
            come_value.c_value = xsprintf("%s", left_value_code);
            
            sType*% result_type;
            
            if(left_type->mOriginalLoadVarType) {
                result_type = clone left_type->mOriginalLoadVarType;
            }
            else {
                result_type = clone left_type;
             }

            // For typedef pointer aliases (e.g. string -> char*), use expanded
            // type info so element access decays to the pointed element type.
            if(result_type->mTypedefOriginalType && result_type->mArrayNum.length() == 0 && result_type->mPointerNum == 0) {
                result_type = expand_typedef_for_load_element(result_type);
            }
            
            come_value.type = result_type;
            bool consumed_array_pointer_type = false;
            
            if(come_value.type->mArrayPointerType) {
                come_value.type->mPointerNum++;
                consumed_array_pointer_type = true;
            }
            
            if(come_value.type->mArrayNum.length() > 0) {
                if(info.in_store_array) {
                    come_value.type->mOriginalLoadVarType = clone result_type;
                    come_value.type->mArrayNum.delete(0, array_num.length());
                }
                else if(info.in_typeof) {
                    come_value.type->mOriginalLoadVarType = clone result_type;
                }
                else if(info.in_refference) {
                    come_value.type->mOriginalLoadVarType = clone result_type;
                    
                    /// no decay, but consume [] dimensions ///
                    come_value.type->mArrayNum.delete(0, array_num.length());
                }
                else {
                    come_value.type->mOriginalLoadVarType = clone result_type;
                    
                    /// decay ///
                    list<sNode*%>*% remained_array_num = new list<sNode*%>();
                    for(int i=1; i<come_value.type->mArrayNum.length(); i++) {
                        remained_array_num.add(clone come_value.type->mArrayNum[i]);
                    }
                    come_value.type->mArrayNum = remained_array_num;
                    if(come_value.type->mArrayNum.length() > 0) {
                        come_value.type->mArrayPointerNum++;
                    }
                }
            }
            else if(come_value.type->mPointerNum > 0) {
                come_value.type->mOriginalLoadVarType = clone result_type;
                come_value.type->mPointerNum--;
                if(consumed_array_pointer_type) {
                    // [] was consumed by this element access.
                    come_value.type->mArrayPointerType = false;
                }
            }
            else if(come_value.type->mArrayPointerNum > 0) {
                come_value.type->mOriginalLoadVarType = clone result_type;
                come_value.type->mArrayPointerNum--;
                if(come_value.type->mArrayPointerNum == 0) {
                    come_value.type->mArrayPointerType = false;
                }
            }
            
            if(array_num.length() > 0
                && come_value.type->mTypedefOriginalType
                && come_value.type->mTypedefOriginalType->mArrayNum.length() > 0
                && come_value.type->mPointerNum == 0)
            {
                // r[i] where r is typedef'd fixed-size array should be an element value.
                come_value.type->mArrayNum.reset();
                come_value.type->mArrayPointerNum = 0;
                come_value.type->mArrayPointerType = false;
            }
            
            come_value.var = left_value.var;
            come_value.mLoadField = true;
            
            sType*% type2_ = clone come_value.type;
            sType*% type3_ = solve_generics(type2_, info->generics_type, info);
            sType*% type_ = solve_method_generics(type3_, info);

            come_value.type = type_;
            come_value.type.mHeap = false;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
    
        return true;
    }
};

class sLoadRangeArrayNode extends sNodeBase
{
    new(sNode* left, list<sNode*%>*% array_num, bool quote, sInfo* info)
    {
        self.super();
        
        list<sNode*%>*% self.mArrayNum = clone array_num;
    
        sNode*% self.mLeft = clone left;
        bool self.mQuote = quote;
    }
    
    string kind()
    {
        return string("sLoadRangeArrayNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% left = create_heap_checker(self.mLeft);
        list<sNode*%>*% array_num_nodes = self.mArrayNum;
        
        node_compile(left).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type = clone left_value.type;
        
        list<CVALUE*%>*% array_num = new list<CVALUE*%>();
        
        foreach(it, array_num_nodes) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% c_value = get_value_from_stack(-1, info);
            
            array_num.push_back(c_value);
        }
        
        sType*% type = clone left_value.type;
        
        const char* fun_name = "operator_load_range_element";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            sNode*% middle = array_num_nodes[0];
            sNode*% right = array_num_nodes[1];
            calling_fun = operator_overload_fun2(type, fun_name, left, middle, right, left_value, array_num[0], array_num[1], info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            sType*% result_type = clone left_type;
            buffer*% buf = new buffer();
            
            buf.append_str(left_value.c_value);
            
            foreach(it, array_num) {
                buf.append_format("[%s]", it.c_value);
            }
            
            string left_value_code = buf.to_string();
            
            come_value.c_value = xsprintf("%s", left_value_code);
            
            if(result_type->mOriginalLoadVarType) {
                sType*% original_load_var_type = clone result_type->mOriginalLoadVarType;
                result_type = original_load_var_type;
            }
            
            if(result_type.mArrayNum.length() > 0) {
                int n = result_type.mArrayNum.length() - array_num.length();
                
                if(n == 0) {
                    result_type = clone left_type;
                    if(left_type->mOriginalLoadVarType) {
                        result_type = clone left_type->mOriginalLoadVarType;
                    }
                    result_type->mArrayNum.reset();
                }
                else if(n > 0) {
                    for(int i=0; i<n; i++) {
                        result_type.mArrayNum.delete(-1, -1);
                    }
                }
                else if(n < 0) {
                    result_type.mArrayNum.reset();
                    result_type.mPointerNum += n;
                    
                    if(result_type.mPointerNum < 0) {
                        result_type.mPointerNum = 0;
                    }
                }
            }
            else {
                if(result_type->mPointerNum > 0) {
                    result_type->mPointerNum -= array_num.length();
                    
                    if(result_type.mPointerNum < 0) {
                        result_type.mPointerNum = 0;
                    }
                }
            }
                
            
            come_value.type = clone result_type;
            come_value.var = null;
            
            sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
            come_value.type = solve_method_generics(type_, info);
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
    
        return true;
    }
};


sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info, bool arrow_=false, bool iter_=false) version 18
{
    err_msg(info, "parse_method_call is failed");
    exit(2);
    
    return (sNode*%)null;
}

sNode*% store_field(sNode*% left, sNode*% right, string name, sInfo* info)
{
    sNode*% left2 = automatically_unwrap(left);
    return new sStoreFieldNode(left2, right, name, info) implements sNode;
}

sNode*% post_position_operator(sNode*% node, sInfo* info) version 99
{
    while(true){
        /// backtrace ///
        bool range_array = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(*info.p == '[') {
                info->p++;
                skip_spaces_and_lf();
                
                bool no_comma = info.no_comma;
                bool no_output_come_code = info.no_output_come_code;
                info->no_comma = true;
                info->no_output_come_code = true;
                sNode*% exp = expression();
                info->no_comma = no_comma;
                info->no_output_come_code = no_output_come_code;
                
                if(*info.p == '.' && *(info->p+1) == '.') {
                    range_array = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(!node.terminated() && range_array && (*info.p == '\\' && *(info->p+1) == '[' || *info.p == '[')) {
            bool quote = *info.p == '\\';
            if(quote) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf();
            
            list<sNode*%>*% array_num = new list<sNode*%>();
            
            skip_pointer_attribute();
            
            sNode*% node2 = expression();
            
            array_num.push_back(node2);
            
            if(*info.p == '.' && *(info->p+1) == '.') {
                info->p += 2;
                skip_spaces_and_lf(info);
                
                skip_pointer_attribute();
                
                sNode*% node3 = expression();
                
                array_num.push_back(node3);
                
                expected_next_character(']');
            }
            
            sNode*% node2;
            if(quote) {
                node2 = node;
            }
            else {
                node2 = automatically_unwrap(node);
            }
            node = new sLoadRangeArrayNode(node2, array_num, quote, info) implements sNode;
        }
        else if(!node.terminated() && *info.p == '!' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf();
            
            node = new sUnwrapNode(node, info) implements sNode;
        }
        else if(!node->terminated() && (*info.p == '.' && *(info->p+1) == '`')) 
        {
            sNode*% obj = node;
            sNode*% node_before = null;
            while(*info.p == '.' && *(info->p+1) == '`') {
                info->p += 2;
                skip_spaces_and_lf();
                
                string field_name2 = parse_word();
                
                node = parse_iter_call(obj, field_name2, info, false@arrow_, parent_call_node:node_before);
                node_before = node;
            }
        }
        else if(!node->terminated() && !range_array && (*info.p == '\\' && *(info->p+1) == '[' || *info.p == '[')) {
            bool quote = *info.p == '\\';
            if(quote) {
                info->p++;
            }
            
            bool range = false;
            list<sNode*%>*% array_num = new list<sNode*%>();
            while(1) {
                bool range_array2 = false;
                {
                    char* p = info.p;
                    int sline = info.sline;
                    
                    if(*info.p == '[') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        bool no_comma = info.no_comma;
                        bool no_output_come_code = info.no_output_come_code;
                        info->no_comma = true;
                        info->no_output_come_code = true;
                        sNode*% exp = expression();
                        info->no_comma = no_comma;
                        info->no_output_come_code = no_output_come_code;
                        
                        if(*info.p == '.' && *(info->p+1) == '.') {
                            range_array2 = true;
                        }
                    }
                    
                    info.p = p;
                    info.sline = sline;
                }
                
                if(range_array2) {
                    break;
                }
                else if(*info.p == '[') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    skip_pointer_attribute();
                    
                    sNode*% node2 = expression();
                    
                    array_num.push_back(node2);
                    
                    if(*info.p == ']') {
                        info->p++;
                        skip_spaces_and_lf();
                    }
                    else {
                        err_msg(info, "require ] character");
                        exit(2);
                    }
                }
                else {
                    break;
                }
            }
            
            if(!info.no_assign && *info.p == '=' && *(info->p+1) != '=' && *(info->p+1) != '>') {
                info->p++;
                skip_spaces_and_lf();
                
                
                sNode*% right_node = expression();
                
                skip_spaces_and_lf();
                
                sNode*% node2;
                if(quote) {
                    node2 = node;
                }
                else {
                    node2 = automatically_unwrap(node);
                }
                node = new sStoreArrayNode(node2, right_node, array_num, quote, info) implements sNode;
            }
            else {
                sNode*% node2;
                if(quote) {
                    node2 = node;
                }
                else {
                    node2 = automatically_unwrap(node);
                }
                node = new sLoadArrayNode(node2, array_num, quote, false@break_guard, info) implements sNode;
            }
        }
        else if((*info.p == '\\' && *(info->p+1) == '.') || (*info.p == '\\' && *(info->p+1) == '-' && *(info->p+2) == '>') || (*info.p == '.' && *(info->p+1) != '.') || (*info.p == '-' && *(info->p+1) == '>')) {
            bool quote = *info.p == '\\';
            if(quote) {
                info.p++;
            }
            bool arrow_ = false;
            if(*info.p == '.') {
                info->p++;
                skip_spaces_and_lf();
            }
            else {
                arrow_ = true;
                info->p+=2;
                skip_spaces_and_lf();
            }
            
            skip_spaces_and_lf();
            
            string field_name = parse_word();
            
            skip_spaces_and_lf();
            
            bool parse_method_generics_type = false;
            {
                char* p = info->p;
                int sline = info->sline;
                
                if(*info.p == '<') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(xisalpha(*info.p) || *info.p == '_') {
                        string word = parse_word();
                        
                        if(is_type_name(word)) {
                            parse_method_generics_type = true;
                        }
                    }
                }
                
                info->p = p;
                info->sline = sline;
            }
            
            if(!info.no_assign && *info.p == '=' && *(info->p+1) != '=' && *(info->p+1) != '>') {
                info->p++;
                skip_spaces_and_lf();
                
                
                sNode*% right_node = expression();
                
                sNode*% node2;
                if(quote) {
                    node2 = node;
                }
                else {
                    node2 = automatically_unwrap(node);
                }
                node = new sStoreFieldNode(node2, right_node, field_name, info, arrow_) implements sNode;
            }
            else if(!gComeC && (*info.p == '(' || *info.p == '{' || parse_method_generics_type)) {
                if(field_name === "if") 
                {
                    node = parse_if_method_call(node, info);
                }
                else if(field_name === "elif") {
                    node = parse_elif_method_call(node, info);
                }
                else if(field_name === "case") {
                    node = parse_match(node, info);
                }
                else if(field_name === "catch") {
                    node = parse_catch(node, info);
                }
                else if(field_name === "less") {
                    node = parse_less_method_call(node, info);
                }
                else if(field_name === "unwrap") {
                    node = parse_method_call(node, field_name, info, arrow_);
                }
                else {
                    sNode*% node2;
                    if(quote) {
                        node2 = node;
                    }
                    else {
                        node2 = automatically_unwrap(node);
                    }
                    node = parse_method_call(node2, field_name, info, arrow_);
                }
            }
            else {
                sNode*% node2;
                if(quote) {
                    node2 = node;
                }
                else {
                    node2 = automatically_unwrap(node);
                }
                node = new sLoadFieldNode(node2, field_name, info, arrow_) implements sNode;
            }
        }
        else {
            sNode*% node2 = inherit(node, info);
            
            if(node2 == null) {
                break;
            }
            
            node = node2;
        }
    }
    
    return node;
}
