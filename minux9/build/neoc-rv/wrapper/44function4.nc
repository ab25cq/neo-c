#include "common.h"

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
    
    char* p = info.p;
    int sline = info.sline;
    int sline_real = info.sline_real;
    int sline_top = info.sline_top;
    string sname = info.sname;
    char* head = info.head;
    buffer*% source = info.source;
    
    info.source = generics_fun->mBlock.to_buffer();
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
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
    info.sline_real = generics_fun->mGenericsSLine;
    info.sline_top = generics_fun->mGenericsSLine;
    info.sname = generics_fun->mGenericsSName;
    
    sBlock*% block = parse_block(in_function:true);
    
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
    
    char* p = info.p;
    int sline = info.sline;
    int sline_real = info.sline_real;
    int sline_top = info.sline_top;
    string sname = info.sname;
    char* head = info.head;
    buffer*% source = info.source;
    
    info.source = generics_fun->mBlock.to_buffer();
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.head = borrow info.source.buf;
    
    list<string>*% method_generics_type_names = info->method_generics_type_names;
    
    info->method_generics_type_names = new list<string>();
    foreach(it, generics_fun->mMethodGenericsTypeNames) {
        info->method_generics_type_names.push_back(clone it);
    }
    
    info.generics_type_names.reset();
    info.generics_type_names = clone generics_fun.mGenericsTypeNames;
    
    info.sline = generics_fun->mGenericsSLine;
    info.sline_real = generics_fun->mGenericsSLine;
    info.sline_top = generics_fun->mGenericsSLine;
    info.sname = generics_fun->mGenericsSName;
    
    sBlock*% block = parse_block(in_function:true);
    
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
    
    char* p = info.p;
    int sline = info.sline;
    int sline_real = info.sline_real;
    int sline_top = info.sline_top;
    string sname = info.sname;
    char* head = info.head;
    buffer*% source = info.source;
    
    info.source = fun.mTextBlock.to_buffer();
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.head = borrow info.source.buf;
    
    info.sline = fun->mTextBlockSline;
    info.sline_real = fun->mTextBlockSline;
    info.sline_top = fun->mTextBlockSline;
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
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
    info.sline = sline;
    info.sline_real = sline_real;
    info.sline_top = sline_top;
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
        if(require_explicit_method_in_low_memory_mode(type_, fun_name, info)) {
            MRestoreState;
            return false;
        }
        
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
        if(require_explicit_method_in_low_memory_mode(type_, fun_name, info)) {
            MRestoreState;
            return false;
        }
        
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
        if(require_explicit_method_in_low_memory_mode(type_, fun_name, info)) {
            MRestoreState;
            return false;
        }
        
        var fun,new_fun_name = create_operator_not_equals_automatically(type_, fun_name, info);
        
        fun_name2 = new_fun_name;
        cloner = borrow fun;
    }

    MRestoreState;
    
    return true;
}
