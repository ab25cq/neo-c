#include "common.h"

bool is_type_name(char* buf, sInfo* info=info)
{
    sClass* klass = borrow info.classes[buf];
    sType* type = borrow info.types[buf];
    sClass* generics_class = borrow info.generics_classes[string(buf)];
    bool generics_type_name = info.generics_type_names.contained(string(buf));
    bool mgenerics_type_name = info.method_generics_type_names.contained(string(buf));
    
    if(gComeC) {
        return (type && type->mTypedef) 
            || (klass && klass->mNumber) 
            || (klass && klass->mFloat) 
            || buf === "_Thread_local"
            || buf === "__thread"
            || buf === "_Complex"
            || buf === "const" || buf === "register" || buf === "static" || buf === "volatile" || buf === "unsigned" || buf === "__volatile__"
            || buf === "signed" || buf === "struct" || buf === "enum" || buf === "union" || buf === "extern" 
            || info->in_top_level && (buf === "inline" || buf === "__inline" || buf === "__always_inline" || buf === "__inline__" || buf === "__forceinline" )
            || buf === "__extension__" 
            || buf === "_Noreturn" 
            || buf === "restrict" 
            || buf === "__noreturn" 
            || buf === "_noreturn" 
            || buf === "__typeof__" 
            || buf === "typeof" 
            || buf === "_Nullable" 
            || buf === "_Alignas"
            || buf === "_Atomic"
            || buf === "__type__"
            || buf === "__attribute__" && *info->p == '(' 
            || buf === "void" ;
    }
    else {
        return generics_class || generics_type_name || mgenerics_type_name || klass || type 
        || buf === "const" || buf === "register" || buf === "static" || buf === "volatile" || buf === "__volatile__" || buf === "unsigned" 
        || buf === "signed" || buf === "struct" || buf === "enum" || buf === "union" || buf === "extern" 
        || info->in_top_level && (buf === "inline" || buf === "__inline" || buf === "__always_inline" || buf === "__inline__" || buf === "__forceinline")
        || buf === "__extension__" 
        || buf === "_Thread_local"
        || buf === "__thread"
        || buf === "_Complex"
        || (info->in_top_level && buf === "_Noreturn")
        || (info->in_top_level && buf === "__noreturn")
        || (info->in_top_level && buf === "_noreturn")
        || buf === "__typeof__" 
        || buf === "typeof" 
        || buf === "_Nullable" 
        || buf === "_Alignas"
        || buf === "_Atomic"
        || buf === "restrict"
        || buf === "__type__"
        || buf === "__attribute__" && *info->p == '('
        || (buf === "tup" && (*info->p == ':' || *info->p == '('))
        || (info.in_top_level && buf === "uniq") ;
    }
}

bool is_contained_generics_class(sType* type, sInfo* info)
{
    sType*% type2;
    if(type->mNoSolvedGenericsType) {
        type2 = clone type->mNoSolvedGenericsType;
    }
    else {
        type2 = clone type;
    }
    foreach(it, type2->mGenericsTypes) {
        if(is_contained_generics_class(it, info)) {
            return true;
        }
    }
    
    if(type2->mClass->mGenerics) {
        return true;
    }
    if(type2->mClass->mMethodGenerics) {
        return true;
    }
    
    return false;
}

tuple4<list<sType*%>*%, list<string>*%, list<string>*%, bool>*% parse_params(sInfo* info, bool in_constructor_=false)
{
    var param_types = new list<sType*%>();
    var param_names = new list<string>();
    var param_default_parametors = new list<string>();
    bool var_args = false;
    
    if(in_constructor_) {
        param_names.add(s"self");
        sType*% type_ = clone info->class_type;
        type_->mHeap = true;
        param_types.add(type_);
        param_default_parametors.add(null);
    }
    else if(info.in_class) {
        param_names.add(s"self");
        param_types.add(clone info->class_type);
        param_default_parametors.add(null);
    }
    
    expected_next_character('(');
    
    /// backtrace ///
    bool void_param = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(parsecmp("void")) {
            info.p += strlen("void");
            skip_spaces_and_lf();
            
            if(*info->p == ')') {
                void_param = true;
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    if(void_param) {
        if(parsecmp("void")) {
            info.p += strlen("void");
            skip_spaces_and_lf();
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
        }
    }
    else {
        while(true) {
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            
            skip_spaces_and_lf();
            
            var param_type, param_name, err = parse_type(parse_variable_name:true, parse_multiple_type:false, in_function_parametor:true);
            
            if(!err) {
                printf("%s %d: failed to function parametor\n", info->sname, info->sline);
                return t((list<sType*%>*%)null, (list<string>*%)null, (list<string>*%)null, false);
            }
            
            var param_type2 = solve_generics(param_type, info->generics_type, info);
            
            param_types.push_back(clone param_type2);
            param_names.push_back(clone param_name);
            
            if(*info->p == '=' && *(info->p+1) != '=' && *(info->p+1) != '>') {
                info->p++;
                skip_spaces_and_lf();
                
                
                char* p = info->p;
                
                bool no_comma = info.no_comma;
                info.no_comma = true;
                
                sNode*% node = expression();
                
                info.no_comma = no_comma;
                
                char* p2 = info->p;
                
                char buf[p2 -p +1];
                memcpy(buf, p, p2 -p);
                buf[p2-p] = '\0';
                
                param_default_parametors.push_back(string(buf));
            }
            else {
                param_default_parametors.push_back(null);
            }
            
            skip_spaces_and_lf();
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                if(parsecmp("...")) {
                    info->p += strlen("...");
                    skip_spaces_and_lf();
                    var_args = true;
                    
                    expected_next_character(')');
                    break;
                }
            }
            else if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
        }
    }
    
    return t(param_types, param_names, param_default_parametors, var_args);
}

bool is_pointer_type(sType* type)
{
    return type->mPointerNum > 0 || type->mArrayPointerNum > 0 || type->mArrayPointerNum > 0;
}

bool check_assign_type_safe(const char* msg, sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info)
{
    sType*% left_type2 = clone left_type;
/*
    if(left_type2->mNoSolvedGenericsType) {
        sType*% tmp = clone left_type2->mNoSolvedGenericsType;
        left_type2 = clone tmp;
    }
*/
    if(left_type2->mOriginalLoadVarType) {
        sType*% tmp = left_type2->mOriginalLoadVarType;
        left_type2 = clone tmp;
    }
    sType*% right_type2 = clone right_type;
/*
    if(right_type2->mNoSolvedGenericsType) {
        sType*% tmp = right_type2->mNoSolvedGenericsType;
        right_type2 = clone tmp
    }
*/
    if(right_type2->mOriginalLoadVarType) {
        sType*% tmp = right_type2->mOriginalLoadVarType;
        right_type2 = clone tmp;
    }
    
    if(is_pointer_type(left_type2) && is_pointer_type(right_type2)) {
        if(left_type2->mClass->mName === "void" || right_type2->mClass->mName === "void") {
        }
        else if(left_type2->mGenericsTypes.length() > 0 || right_type2->mGenericsTypes.length() > 0) {
            if(left_type2->mGenericsTypes.length() != right_type2->mGenericsTypes.length()) {
                return false;
            }
            
            for(int i=0; i<left_type2->mGenericsTypes.length(); i++) {
                sType*% left_type = left_type2->mGenericsTypes[i];
                sType*% right_type = right_type2->mGenericsTypes[i];
                
                check_assign_type_safe(msg, left_type, right_type, come_value).elif {
                    return false;
                }
            }
            
            if(left_type2->mClass->mName !== right_type2->mClass->mName || left_type2->mPointerNum != right_type2->mPointerNum)
            {
                warning_msg(info, "invalid type left %s %d right %s %d", left_type2->mClass->mName, left_type2->mPointerNum, right_type2->mClass->mName, right_type2->mPointerNum);
                return false;
            }
        }
        else if(left_type2->mClass->mName !== right_type2->mClass->mName || left_type2->mPointerNum != right_type2->mPointerNum)
        {
            warning_msg(info, "invalid type left %s %d right %s %d", left_type2->mClass->mName, left_type2->mPointerNum, right_type2->mClass->mName, right_type2->mPointerNum);
            return false;
        }
    }
    else if(left_type2->mClass->mName === right_type2->mClass->mName && is_pointer_type(left_type2) && right_type2->mArrayNum.length() > 0) {
    }
    else if(is_pointer_type(left_type2) && !is_pointer_type(right_type)) {
        warning_msg(info, "invalid type left %s %d right %s %d", left_type2->mClass->mName, left_type2->mPointerNum, right_type2->mClass->mName, right_type2->mPointerNum);
        return false;
    }
    else if(!is_pointer_type(left_type2) && is_pointer_type(right_type)) {
        warning_msg(info, "invalid type left %s %d right %s %d", left_type2->mClass->mName, left_type2->mPointerNum, right_type2->mClass->mName, right_type2->mPointerNum);
        return false;
    }
    return true;
}

bool check_assign_type(const char* msg, sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info)
{
    if(info->no_output_come_code) {
        return true;
    }
    if(left_type->mClass->mMethodGenerics) { // precompile
        return true;
    }
    
    if(gComeSafe) {
        return check_assign_type_safe(msg, left_type, right_type, come_value);
    }
    sType*% left_type2 = clone left_type;
    sType*% right_type2 = clone right_type;
    
    sType* left_no_solved_generics_type = null;
    if(left_type2->mNoSolvedGenericsType) {
        left_no_solved_generics_type = borrow left_type2->mNoSolvedGenericsType;
    }
    sType* right_no_solved_generics_type = null;
    if(right_type2->mNoSolvedGenericsType) {
        right_no_solved_generics_type = borrow right_type2->mNoSolvedGenericsType;
    }
    
    sClass* left_class = left_type2->mClass;
    sClass* right_class = right_type2->mClass;
    
    bool parent_class = false;
    if(left_class->mName !== right_class->mName) {
        while(left_class && right_class) {
            if(left_class->mName === right_class->mName) {
                parent_class = true;
            }
            if(right_class->mParentClassName) {
                right_class = borrow info.classes[right_class->mParentClassName];
            }
            else {
                right_class = null;
            }
        }
    }
    
    if(left_type2->mPointerNum > 0 && (right_type->mArrayNum.length() > 0 || right_type->mArrayPointerNum > 0)) {
        if(!left_type2->mConstant && right_type->mConstant) {
            warning_msg(info , "type check warning(1).%s %s %d <- const %s %d", msg, left_type2->mClass->mName, left_type2->mPointerNum, right_type->mClass->mName, right_type->mPointerNum);
        }
        else if(left_type2->mClass->mName === right_type->mClass->mName) {
        }
        else if(left_type2->mClass->mName === "void") {
        }
        else {
            warning_msg(info , "type check warning(1).%s %s %d <- %s %d", msg, left_type2->mClass->mName, left_type2->mPointerNum, right_type->mClass->mName, right_type->mPointerNum);
        }
    }
    else if(left_type2->mPointerNum > 0 && right_type->mPointerNum == 0) {
        if(left_type2->mClass->mName === "lambda") {
        }
        else if(right_type->mArrayNum.length() > 0) {
        }
        else if(right_type->mArrayPointerNum > 0) {
        }
        else {
            warning_msg(info , "type check warning(2).%s. %s %d <- %s %d", msg, left_type2->mClass->mName, left_type2->mPointerNum, right_type->mClass->mName, right_type->mPointerNum);
        }
    }
    else if(left_type2->mPointerNum == 0 && right_type->mPointerNum > 0) {
        if(left_type2->mArrayPointerNum > 0) {
        }
        else if(left_type2->mArrayNum.length() > 0) {
        }
        else if(left_type2->mClass->mName === "lambda" || right_type->mClass->mName === "void") {
        }
        else {
            warning_msg(info , "type check warning(3).%s. %s %d <- %s %d", msg, left_type2->mClass->mName, left_type2->mPointerNum, right_type->mClass->mName, right_type->mPointerNum);
        }
    }
    else if(left_type2->mPointerNum > 0 && right_type->mPointerNum > 0) {
        sClass* klass = right_type->mClass;
        bool flag_ = false;
        while(klass) {
            if(klass->mName === left_type2->mClass->mName) {
                flag_ = true;
            }
            if(klass->mParentClassName) {
                klass = borrow info.classes[klass->mParentClassName];
            }
            else {
                klass = null;
            }
        }
        if(left_type2->mClass->mName === "void") {
        }
        else if(left_type2->mClass->mName === "lambda") {
        }
        else if(left_no_solved_generics_type && right_no_solved_generics_type && (left_no_solved_generics_type.mGenericsTypes.length() > 0 || right_no_solved_generics_type->mGenericsTypes.length() > 0))
        {
            bool check_ = true;
            if(left_no_solved_generics_type->mClass->mName !== right_no_solved_generics_type->mClass->mName) {
                check_ = false;
            }
            
            if(left_no_solved_generics_type->mGenericsTypes.length() != right_no_solved_generics_type->mGenericsTypes.length()) {
                check_ = false;
            }
            else {
                for(int i=0; i<left_no_solved_generics_type.mGenericsTypes.length(); i++) {
                    sType* left = borrow left_no_solved_generics_type.mGenericsTypes[i];
                    sType* right = borrow right_no_solved_generics_type.mGenericsTypes[i];
                    
                    if(left->mHeap != right->mHeap) {
                        check_ = false
                        err_msg(info, "left child generics %s right child generics %s", left->mClass->mName, right->mClass->mName);
                    }
                    else if((left->mClass->mName !== right->mClass->mName) || (left->mPointerNum != right->mPointerNum)) {
                        check_ = false;
                        warning_msg(info , "left child generics %s right child generics %s", left->mClass->mName, right->mClass->mName);
                    }
                }
            }
            
            
            if(!check_) {
                warning_msg(info , "type check warning(4).%s. %s %d <- %s %d", msg, left_no_solved_generics_type->mClass->mName, left_type2->mPointerNum, right_no_solved_generics_type->mClass->mName, right_type2->mPointerNum);
            }
        }
        else if(strlen(left_type2->mClass->mName) >= strlen("tuple") 
            && memcmp(left_type2->mClass->mName, "tuple", strlen("tuple")) == 0
            && (strlen(right_type->mClass->mName) >= strlen("tuple") ))
        {
        }
        else if(right_type->mClass->mName === "void") {
        }
        else if(left_type2->mClass->mName === right_type2->mClass->mName && left_type2->mHeap && !right_type2->mHeap ) {
            err_msg(info , "type check warning(4).%s. %s %d <- %s %d", msg, left_type2->mClass->mName, left_type2->mPointerNum, right_type2->mClass->mName, right_type2->mPointerNum);
        }
        else if(!left_type2->mConstant && right_type->mConstant) {
            warning_msg(info , "type check warning(1).%s %s %d <- const %s %d", msg, left_type2->mClass->mName, left_type2->mPointerNum, right_type->mClass->mName, right_type->mPointerNum);
        }
        else if(parent_class) {
        }
        else if(left_type2->mClass->mName !== right_type->mClass->mName && !flag_) {
            warning_msg(info , "type check warning(5).%s. %s %d <- %s %d", msg, left_type2->mClass->mName, left_type2->mPointerNum, right_type->mClass->mName, right_type->mPointerNum);
        }
    }
    else if(left_type2->mPointerNum == 0 && right_type->mPointerNum == 0) {
        if(left_type2->mClass->mName === "lambda") {
        }
        else if(left_type2->mClass->mNumber && right_type->mClass->mNumber) {
        }
        else if(left_type2->mClass->mName === right_type->mClass->mName) {
        }
        else {
            warning_msg(info , "type check warning(6).%s. %s %d <- %s %d", msg, left_type2->mClass->mName, left_type2->mPointerNum, right_type->mClass->mName, right_type->mPointerNum);
        }
    }
    
    return true;
}

void cast_type(sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info)
{
}

bool parse_common_attribute_keyword(buffer* result, sInfo* info=info, bool allow_end=true);

string,string parse_attribute(sInfo* info=info)
{
    buffer*% asm_fun_name = new buffer();
    buffer*% attribute = new buffer();
    
    while(true) {
        if(parsecmp("__attribute_pure__")) {
            info->p += strlen("__attribute_pure__");
            skip_spaces_and_lf();
        }
        else if(parsecmp("__malloc_like")) {
            info->p += strlen("__malloc_like");
            skip_spaces_and_lf();
        }
        else if(parsecmp("__result_use_check")) {
            info->p += strlen("__result_use_check");
            skip_spaces_and_lf();
        }
        else if(parsecmp("__alloc_size2")) {
            info->p += strlen("__alloc_size2");
            skip_spaces_and_lf();
            
            if(*info->p == '(') {
                int nest = 0;
                while(1) {
                    if(*info->p == '(') {
                        info->p++;
                        skip_spaces_and_lf();
                        nest++;
                    }
                    else if(*info->p == ')') {
                        info->p++
                        skip_spaces_and_lf();
                        
                        nest--;
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info->p == '\0') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(parsecmp("__alloc_size")) {
            info->p += strlen("__alloc_size");
            skip_spaces_and_lf();
            
            if(*info->p == '(') {
                int nest = 0;
                while(1) {
                    if(*info->p == '(') {
                        info->p++;
                        skip_spaces_and_lf();
                        nest++;
                    }
                    else if(*info->p == ')') {
                        info->p++
                        skip_spaces_and_lf();
                        
                        nest--;
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info->p == '\0') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(parsecmp("__nonnull")) {
            info->p += strlen("__nonnull");
            skip_spaces_and_lf();
            
            if(*info->p == '(') {
                int nest = 0;
                while(1) {
                    if(*info->p == '(') {
                        info->p++;
                        skip_spaces_and_lf();
                        nest++;
                    }
                    else if(*info->p == ')') {
                        info->p++
                        skip_spaces_and_lf();
                        
                        nest--;
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info->p == '\0') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(parsecmp("_Nonnull")) {
            info->p += strlen("_Nonnull");
            skip_spaces_and_lf();
            
            if(*info->p == '(') {
                int nest = 0;
                while(1) {
                    if(*info->p == '(') {
                        info->p++;
                        skip_spaces_and_lf();
                        nest++;
                    }
                    else if(*info->p == ')') {
                        info->p++
                        skip_spaces_and_lf();
                        
                        nest--;
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info->p == '\0') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(parsecmp("__alloc_align")) {
            info->p += strlen("__alloc_align");
            skip_spaces_and_lf();
            
            if(*info->p == '(') {
                int nest = 0;
                while(1) {
                    if(*info->p == '(') {
                        info->p++;
                        skip_spaces_and_lf();
                        nest++;
                    }
                    else if(*info->p == ')') {
                        info->p++
                        skip_spaces_and_lf();
                        
                        nest--;
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info->p == '\0') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(parsecmp("__attribute_malloc__")) {
            info->p += strlen("__attribute_malloc__");
            skip_spaces_and_lf();
        }
        else if(parsecmp("__attr_dealloc_fclose")) {
            info->p += strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf();
        }
        else if(parsecmp("__wur")) {
            info->p += strlen("__wur");
            skip_spaces_and_lf();
        }
        else if(parsecmp("__pure2")) {
            info->p += strlen("__pure2");
            skip_spaces_and_lf();
        }
        else if(parsecmp("__pure")) {
            info->p += strlen("__pure");
            skip_spaces_and_lf();
        }
        else if(parsecmp("__noreturn")) {
            info->p += strlen("__noreturn");
            skip_spaces_and_lf();
        }
        else if(parsecmp("__attribute__")) {
            string attr = parse_struct_attribute();
            if(attr !== "") {
                attribute.append_str(attr);
            }
        }
        else if(parsecmp("__asm__")) {
            info->p += strlen("__asm__");
            skip_spaces_and_lf();
            
            if((info->end - info->p) >= strlen("__ASMNAME") && memcmp(info->p, "__ASMNAME", strlen("__ASMNAME")) == 0) {
                info->p += strlen("__ASMNAME");
                skip_spaces_and_lf();
            }

            int len = 0;

            if(*info->p == '(') {
                bool in_dquort = false;
                int brace_num = 0;
                while(*info->p) {
                    if(*info->p == '"') {
                        info->p++;
    
                        in_dquort = !in_dquort;
                    }
                    else if(in_dquort) {
                        asm_fun_name.append_char(*info->p);
                        info->p++;
                    }
                    else if(*info->p == '(') {
                        info->p++;
                        brace_num++;
                    }
                    else if(*info->p == ')') {
                        info->p++;
                        brace_num--;
    
                        if(brace_num == 0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }

            skip_spaces_and_lf();
        }
        else if(parsecmp("__asm")) {
            info->p += strlen("__asm");
            skip_spaces_and_lf();

            if(*info->p == '(') {
                int brace_num = 0;
                while(*info->p) {
                    if(*info->p == '(') {
                        info->p++;
                        brace_num++;
                    }
                    else if(*info->p == ')') {
                        info->p++;
                        brace_num--;
    
                        if(brace_num == 0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }

            skip_spaces_and_lf();
        }
        else if(parse_common_attribute_keyword(attribute, info)) {
        }
        else {
            break;
        }
    }

    return t(asm_fun_name.to_string(), attribute.to_string());
}

void parse_struct_attribute_skip_paren(sInfo* info)
{
    skip_spaces_and_lf();
    if(*info->p == '(') {
        int nest = 0;
        while(1) {
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
                nest++;
            }
            else if(*info->p == ')') {
                info->p++
                skip_spaces_and_lf();
                
                nest--;
                if(nest == 0) {
                    break;
                }
            }
            else if(*info->p == '\0') {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    skip_spaces_and_lf();
}

bool parse_attribute_keyword(buffer* result, const char* keyword, bool allow_end, sInfo* info=info)
{
    if(parsecmp(keyword)) {
        char* p = info.p + strlen(keyword);
        while(*p == ' ' || *p == '\t' || *p == '\n' || *p == '\r') {
            p++;
        }
        if(!allow_end && *p != '(') {
            if(*p == ';' || *p == ',' || *p == ')' || *p == ']' || *p == '=' || *p == ':') {
                return false;
            }
        }
        
        char* head = info.p;
        info->p += strlen(keyword);
        
        parse_struct_attribute_skip_paren(info);
        
        char* tail = info.p;
        result.append(head, tail-head);
        
        return true;
    }
    
    return false;
}

bool parse_common_attribute_keyword(buffer* result, sInfo* info=info, bool allow_end=true)
{
    if(parse_attribute_keyword(result, "__aligned_largest", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__aligned_u64", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__aligned", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__section", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__visibility", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__alias", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__format_arg", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__format", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__printf", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__scanf", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__assume_aligned", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__cleanup", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__optimize", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__target", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__error", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__warning", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__no_sanitize_address", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__no_sanitize_thread", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__no_sanitize_coverage", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__no_sanitize", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__constructor", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__destructor", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__packed", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__used", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__unused", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__maybe_unused", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__always_unused", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__deprecated", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__cold", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__hot", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__weak_ref", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__weak", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__noinline", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__always_inline", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__flatten", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__leaf", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__naked", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__noclone", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__no_profile", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__no_instrument_function", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__warn_unused_result", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__must_check", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__returns_nonnull", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__malloc", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__init", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__initdata", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__initconst", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__init_rodata", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__exit", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__exitdata", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__exitconst", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__ref", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__meminit", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__meminitdata", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__meminitconst", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__ro_after_init", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__read_mostly", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__latent_entropy", allow_end, info)) {
        return true;
    }
    else if(parse_attribute_keyword(result, "__percpu", allow_end, info)) {
        return true;
    }
    
    return false;
}

string parse_struct_attribute(sInfo* info=info, bool allow_end=true)
{
    skip_spaces_and_lf();
    buffer*% result = new buffer();
    while(1) {
        if(parsecmp("__attribute__")) {
            char* head = info.p;
            
            info->p += strlen("__attribute__");
            skip_spaces_and_lf();
            skip_paren(info);
            
            char* tail = info->p;
            
            result.append(head, tail-head);
        }
        else if(parse_common_attribute_keyword(result, allow_end:allow_end)) {
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf();
    
    return result.to_string();
}

void append_attribute_to_type(sType* type, string attribute, bool for_variable, sInfo* info=info);

sType*%, string parse_variable_name_on_multiple_declare(sType* base_type_name, bool first, sInfo* info)
{
    sType*% result_type = clone base_type_name;
    if(!first) {
        if(result_type->mTypedefOriginalType) {
            result_type->mPointerNum = result_type->mTypedefOriginalType.mPointerNum;
        }
    }
    string var_name = null;
    
    {
        char* p = info.p;
        int sline = info.sline;
    
        if(xisalpha(*info->p) || *info->p == '_') {
            string word = parse_word();
            
            if(word === "const" || word === "__restrict" || word === "restrict" || word === "__user" || word === "volatile" || word === "__volatile__" || word === "_Nonnull" || word === "_Nullable" || word === "_Null_unspecified" || word === "__user" || word === "_Addr") {
            }
            else {
                info.p = p;
                info.sline = sline;
            }
        }
        else {
            info.p = p;
            info.sline = sline;
        }
    }
    
    bool between_brace = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            
            if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(is_type_name(word)) {
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info->p != '(') {
                        between_brace = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    bool lambda_ = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info->p == '*') {
                info->p++
                skip_spaces_and_lf();
                
                if(xisalpha(*info->p) || *info->p == '_') {
                    string word = parse_word();
                    
                    if(is_type_name(word)) {
                    }
                    else if(*info->p == '[') {
                        lambda_ = true;
                    }
                    else if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        if(*info->p == '(') {
                            lambda_ = true;
                        }
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    skip_spaces_and_lf();
    while(*info->p == '*') {
        info->p++;
        skip_spaces_and_lf();
        
        skip_pointer_attribute();
        
        result_type->mPointerNum++;
    }
    skip_spaces_and_lf();
    
    if(between_brace && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    if(lambda_) {
        expected_next_character('(');
        expected_next_character('*');
            
        var_name = parse_word();
        
        sType*% result_type2 = new sType(s"lambda");
        
        if(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% node = expression();
            
            result_type2.mArrayNum.add(node);
            
            expected_next_character(']');
        }
        
        expected_next_character(')');
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
        result_type2->mResultType = clone result_type;
        result_type2->mParamTypes = param_types;
        result_type2->mParamNames = param_names;
        result_type2->mVarArgs = var_args;
        
        result_type = result_type2;
    }
    else if(xisalnum(*info.p) || *info->p == '_') {
        var_name = parse_word();
    }
    else {
        static int num_anonymous_var_name = 0;
        num_anonymous_var_name++;
        var_name = xsprintf("anonymous_var_nameYYY%d", num_anonymous_var_name);
    }
    
    if(between_brace && *info->p == ')') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf();
        
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% node = expression();
        info->no_comma = no_comma;
        
        result_type->mSizeNum = node;
    }
    
    while(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf();
        
        {
            char* p = info.p;
            int sline = info.sline;
        
            if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(word === "const" || word === "__restrict" || word === "restrict" || word === "__user" || word === "volatile" || word === "__volatile__" || word === "_Nonnull" || word === "_Nullable" || word === "_Null_unspecified" || word === "__user" || word === "_Addr") {
                }
                else {
                    info.p = p;
                    info.sline = sline;
                }
            }
            else {
                info.p = p;
                info.sline = sline;
            }
        }
        
        if(*info->p == ']') {
            info->p++;
            skip_spaces_and_lf();
            
            result_type->mArrayPointerType = true;
            //result_type->mPointerNum++;
            break;
        }
        skip_spaces_and_lf();
        
        sNode*% node = expression();
        result_type.mArrayNum.push_back(node);
        
        expected_next_character(']');
    }
    
    string attribute = parse_struct_attribute();
    append_attribute_to_type(result_type, attribute, true, info);
    
    parse_attribute();
    
    return t(result_type, var_name);
}

bool skip_pointer_attribute(sInfo* info=info)
{
    char* p = info.p;
    int sline = info.sline;

    if(xisalpha(*info->p) || *info->p == '_') {
        string word = parse_word();
        
        if((word === "__attribute" || word === "__attribute__") && *info->p == '(') {
            int nest = 0;
            while(1) {
                if(*info->p == '(') {
                    info->p++;
                    skip_spaces_and_lf();
                    nest++;
                }
                else if(*info->p == ')') {
                    info->p++
                    skip_spaces_and_lf();
                    
                    nest--;
                    if(nest == 0) {
                        break;
                    }
                }
                else if(*info->p == '\0') {
                    break;
                }
                else {
                    info->p++;
                }
            }
            
            return true;
        }
        else if(word === "const" || word === "__restrict" || word === "restrict" || word === "__user" || word === "volatile" || word === "__volatile__" || word === "_Nonnull" || word === "_Nullable" || word === "__nonnull" || word === "_Null_unspecified" || word === "__user" || word === "_Addr" || word === "__noreturn" || word === "_noreturn" || word === "_Noreturn") {
            return true;
        }
        else {
            info.p = p;
            info.sline = sline;
        }
    }
    else {
        info.p = p;
        info.sline = sline;
    }
    
    return false;
}

string parse_pointer_qualifier(sInfo* info=info)
{
    buffer*% result = new buffer();
    
    while(1) {
        if(!(xisalpha(*info->p) || *info->p == '_')) {
            break;
        }
        
        char* p = info.p;
        int sline = info.sline;
        
        string word = parse_word();
        
        if((word === "__attribute" || word === "__attribute__") && *info->p == '(') {
            int nest = 0;
            while(1) {
                if(*info->p == '(') {
                    info->p++;
                    skip_spaces_and_lf();
                    nest++;
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    nest--;
                    if(nest == 0) {
                        break;
                    }
                }
                else if(*info->p == '\0') {
                    break;
                }
                else {
                    info->p++;
                }
            }
            continue;
        }
        else if(word === "const" || word === "volatile" || word === "__volatile__" || word === "restrict" || word === "__restrict") {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_str(word);
            skip_spaces_and_lf();
            continue;
        }
        else if(word === "__user" || word === "_Nonnull" || word === "_Nullable" || word === "__nonnull" || word === "_Null_unspecified" || word === "_Addr" || word === "__noreturn" || word === "_noreturn" || word === "_Noreturn") {
            skip_spaces_and_lf();
            continue;
        }
        else {
            info.p = p;
            info.sline = sline;
            break;
        }
    }
    
    return result.to_string();
}

tuple3<sType*%,string,bool>*% backtrace_parse_type(bool parse_variable_name=false,sInfo* info=info)
{
    bool no_output_come_code = info.no_output_come_code;
    info.no_output_come_code = true;
    var type, name, err = parse_type(parse_variable_name:parse_variable_name);
    info.no_output_come_code = no_output_come_code;
    
    return t(type, name, err);
}

bool@define_only, bool@anonymous_name, bool@struct_,bool@union_,bool@enum_ backtrace_struct_union_enum(sInfo* info=info)
{
    /// backtrace ///
    bool define_only = false;
    bool anonymous_name = false;
    bool struct_ = false;
    bool union_ = false;
    bool enum_ = false;
    {
        char* head = info->p;
        int head_sline = info->sline;
   
        parse_attribute();
        
        if(xisalpha(*info->p) || *info->p == '_') {
            string declare_name = parse_word();
            
            if(declare_name === "struct") {
                struct_ = true;
            }
            else if(declare_name === "union") {
                union_ = true;
            }
            else if(declare_name === "enum") {
                enum_ = true;
            }
            else {
                return t(false@define_only, false@anonymous_name, false@struct_, false@union_, false@enum_);
            }
        }
        parse_attribute();
        
        if(xisalpha(*info->p) || *info->p == '_') {
            string struct_name = parse_word();
        }
        else {
            anonymous_name = true;
        }
        
        parse_attribute();
        
        if(*info->p == '<') {
            int nest = 0;
            while(true) {
                if(*info->p == '<') {
                    info->p++;
                    skip_spaces_and_lf();
                    nest++;
                }
                else if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    nest--;
                    if(nest == 0) {
                        break;
                    }
                }
                else if(*info->p == '\0') {
                    err_msg(info, "unexpected source end");
                    exit(1);
                }
                else {
                    *info->p++;
                    skip_spaces_and_lf();
                }
            }
        }
        
        parse_attribute();
        
        if(*info->p == '{') {
            skip_block(info);
            
            parse_attribute();
            
            if(*info->p == ';') {
                define_only = true;
            }
            else {
                define_only = false;
            }
        }
        
        info.p = head;
        info.sline = head_sline;
    }
    
    return t(define_only, anonymous_name, struct_, union_, enum_);
}

sType*% parse_pointer_attribute(sType* type, sInfo* info=info)
{
    while(1) {
        if(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mPointerNum++;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mPointerNum++;
            }
            string pointer_attr = parse_pointer_qualifier();
            if(pointer_attr !== "") {
                if(type->mPointerAttribute == null || type->mPointerAttribute === "") {
                    type->mPointerAttribute = pointer_attr;
                }
                else {
                    type->mPointerAttribute = type->mPointerAttribute + " " + pointer_attr;
                }
            }
        }
        else if(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mHeap = true;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mHeap = true;
            }
        }
        else if(*info->p == '@') {
            info->p++;
            while(xisalnum(*info->p) || *info->p == '_') {
                info->p++;
            }
            skip_spaces_and_lf();
        }
        else if(*info->p == '&') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mNoHeap = true;
            
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mNoHeap = false;
            }
        }
        else if(*info->p == '`') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mNoCallingDestructor = true;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mNoCallingDestructor = true;
            }
        }
        else if(gComePthread && *info->p == '|') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mChannel = true;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mChannel = true;
            }
        }
        else if(*info->p == '~') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mDefferRightValue = true;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mDefferRightValue = true;
            }
        }
        else if(xisalpha(*info->p) || *info->p == '_') {
            char* p = info.p;
            int sline = info.sline;
            string pointer_attr = parse_pointer_qualifier();
            if(info.p != p) {
                if(pointer_attr !== "") {
                    if(type->mPointerAttribute == null || type->mPointerAttribute === "") {
                        type->mPointerAttribute = pointer_attr;
                    }
                    else {
                        type->mPointerAttribute = type->mPointerAttribute + " " + pointer_attr;
                    }
                }
            }
            else {
                info.p = p;
                info.sline = sline;
                break;
            }
        }
        else {
            break;
        }
    }
    
    return clone type;
}

void append_attribute_to_type(sType* type, string attribute, bool for_variable, sInfo* info=info)
{
    if(attribute == null || attribute === "") {
        return;
    }
    
    if(for_variable && !info.in_typedef) {
        if(type->mVarAttribute == null || type->mVarAttribute === "") {
            type->mVarAttribute = attribute;
        }
        else {
            type->mVarAttribute = type->mVarAttribute + " " + attribute;
        }
    }
    else {
        if(type->mAttribute == null || type->mAttribute === "") {
            type->mAttribute = attribute;
        }
        else {
            type->mAttribute = type->mAttribute + " " + attribute;
        }
    }
}

string parse_variable_name_fun(sType* type, bool anonymous_name, bool var_name_between_brace, string attribute, sInfo* info=info)
{
    string var_name = s"";
    if(var_name_between_brace && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    if(*info->p == ':') {
        var_name = string("");
    }
    else if(anonymous_name) {
        static int num_anonymous_var_name = 0;
        num_anonymous_var_name++;
        var_name = xsprintf("anonymous_var_nameXYZ%d", num_anonymous_var_name);
        type->mAnonymousVarName = true;
    }
    else if(xisalnum(*info.p) || *info->p == '_') {
        var_name = parse_word();
    }
    else {
        static int num_anonymous_var_name = 0;
        num_anonymous_var_name++;
        var_name = xsprintf("anonymous_var_nameY%d", num_anonymous_var_name);
        type->mAnonymousVarName = true;
    }
            
    if(var_name_between_brace && *info->p == ')') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf();
        
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% node = expression();
        info->no_comma = no_comma;
        
        type->mSizeNum = node;
    }

    string attribute2 = parse_struct_attribute();
    
    append_attribute_to_type(type, attribute, true, info);
    append_attribute_to_type(type, attribute2, true, info);
    
    return var_name;
}

tuple3<sType*%,string,bool>*% parse_type(sInfo* info=info, bool parse_variable_name=false, bool parse_multiple_type=true, bool in_function_parametor=false)
{
    char* head = info.p;
    int head_sline = info.sline;
    info.define_struct = false;
    
    string type_name = parse_word();
    
    bool constant = false;
    bool static_ = false;
    bool volatile_ = false;
    bool register_ = false;
    bool unsigned_ = false;
    bool long_ = false;
    bool long_long = false;
    bool short_ = false;
    bool restrict_ = false;
    bool struct_ = false;
    bool union_ = false;
    bool enum_ = false;
    bool no_heap = false;
    bool extern_ = false;
    bool inline_ = false;
    bool uniq_ = false;
    bool tuple_ = false;
    bool original_var_name = false;
    bool complex_ = false;
    bool type_name_ = false;
    bool noreturn_ = false;
    
    sNode*% alignas_ = null;
    bool alignas_double = false;
    
    string union_attribute = s"";
    bool struct_define_parsed = false;
    
    bool anonymous_type = false;
    bool anonymous_name = false;
    bool atomic_ = false;
    bool thread_local = false;
    bool thread_ = false;
    while(true) {
        if(type_name === "__type__") {
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            var buf = new buffer();
            while(*info->p) {
                if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    buf.append_char(*info->p);
                    info->p++;
                }
            }
            type_name = buf.to_string();

            type_name_ = true;
        }
        else if(type_name === "_Thread_local") {
            type_name = parse_word();
            thread_local = true;
        }
        else if(type_name === "__thread") {
            type_name = parse_word();
            thread_ = true;
        }
        else if(type_name === "_Atomic") {
            if(*info->p == '(') {
                expected_next_character('(');
            }
            type_name = parse_word();
            atomic_ = true;
        }
        else if(type_name === "__extension__") {
            type_name = parse_word();
        }
        else if(type_name === "__attribute__") {
            if(*info->p == '(') {
                int brace_num = 0;
                while(*info->p) {
                    if(*info->p == '(') {
                        info->p++;
                        brace_num++;
                    }
                    else if(*info->p == ')') {
                        info->p++;
                        brace_num--;
    
                        if(brace_num == 0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
    
            skip_spaces_and_lf();
            
            type_name = parse_word();
        }
        else if(type_name === "_Noreturn") {
            type_name = parse_word();
            noreturn_ = true;
        }
        else if(type_name === "__noreturn") {
            type_name = parse_word();
            noreturn_ = true;
        }
        else if(type_name === "_Nullable") {
            type_name = parse_word();
        }
        else if(type_name === "_noreturn") {
            type_name = parse_word();
            noreturn_ = true;
        }
        else if(type_name === "_Alignas") {
            expected_next_character('(');
            
            if((info->end - info->p) > strlen("double") && memcmp(info->p, "double", strlen("double")) == 0)
            {
                (void)parse_word();
                alignas_double = true;
            }
            else {
                alignas_ = expression();
            }
            
            expected_next_character(')');
            
            type_name = parse_word();
        }
        else if(type_name === "const") {
            constant = true;
            
            type_name = parse_word();
        }
        else if(type_name === "_Complex") {
            complex_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "static") {
            static_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "uniq") {
            uniq_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "extern") {
            extern_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "inline" || type_name === "__inline" || type_name === "__inline__" || type_name === "__always_inline" || type_name === "__forceinline") 
        {
            inline_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "volatile" || type_name === "__volatile__") {
            volatile_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "struct") {
            struct_ = true;
            union_attribute = parse_struct_attribute();
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    anonymous_name = true;
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    struct_define_parsed = true;
                    break;
                } 
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    struct_define_parsed = true;
                    break;
                }
            }

            skip_spaces_and_lf();
            
            if(*info->p != '>') {
                type_name = parse_word();
                
                skip_spaces_and_lf();
                
                string struct_attribute_after_name = parse_struct_attribute();
                if(struct_attribute_after_name !== "") {
                    if(union_attribute === "") {
                        union_attribute = struct_attribute_after_name;
                    }
                    else {
                        union_attribute = union_attribute + " " + struct_attribute_after_name;
                    }
                }
                
                if(*info->p == '<') {
                    char* p = info.p;
                    int sline = info.sline;
                    
                    info->p++;
                    skip_spaces_and_lf();
                    
                    while(true) {
                        if(*info->p == '>') {
                            info->p++;
                            skip_spaces_and_lf();
                            
                            if(*info->p == '{') {
                            }
                            else {
                                info.p = p;
                                info.sline = sline;
                            }
                            break;
                        }
                        else if(*info->p == '\0') {
                            err_msg(info, "invalid struct definition");
                            return t((sType*%)null, (string)null, false);
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                
                string struct_attribute_after_generics = parse_struct_attribute();
                if(struct_attribute_after_generics !== "") {
                    if(union_attribute === "") {
                        union_attribute = struct_attribute_after_generics;
                    }
                    else {
                        union_attribute = union_attribute + " " + struct_attribute_after_generics;
                    }
                }
                
                if(*info->p == '{') {
                    char* p = info.p;
                    int sline = info.sline;
                    
                    skip_block(info);
                    
                    (void)parse_struct_attribute();
                    
                    if(*info->p == ';') {
                        info.p = head;
                        info.sline = head_sline;
                        info.define_struct = true;
                        return t((sType*%)null, (string)null, false);
                    }
                    else {
                        info.p = p;
                        info.sline = sline;
                        
                        sNode*% node = parse_struct(type_name, union_attribute, info);
                        
                        node_compile(node).elif {
                            return t((sType*%)null, (string)null, false);
                        }
                        struct_define_parsed = true;
                        break;
                    }
                }
            }
        }
        else if(type_name === "union") {
            union_ = true;
            union_attribute = parse_struct_attribute();
           
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if((info->end - info->p) >= strlen("__attribute__") && memcmp(info->p, "__attribute__", strlen("__attribute__")) == 0) {
                    parse_attribute();
                }
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    //info.define_struct = true;
                    info.define_struct = false;
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }

            skip_spaces_and_lf();
            
            type_name = parse_word();

            skip_spaces_and_lf();
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    info.define_struct = true;
                    return t((sType*%)null, (string)null, false);
                } 
                else {
                    anonymous_type = true;
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
        }
        else if(type_name === "enum") {
            enum_ = true;

            skip_spaces_and_lf();
            
            var asm_name, enum_attribute = parse_attribute();
            if(enum_attribute !== "") {
                union_attribute = enum_attribute;
            }
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_and_lf();
                
                var type,name,err = parse_type();
            }

            skip_spaces_and_lf();
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if((info->end - info->p) >= strlen("__attribute__") && memcmp(info->p, "__attribute__", strlen("__attribute__")) == 0) {
                    parse_attribute();
                }
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    info.define_struct = true;
                    return t((sType*%)null, (string)null, false);
                }
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    struct_define_parsed = true;
                    break;
                }
            }

            skip_spaces_and_lf();
            
            type_name = parse_word();

            skip_spaces_and_lf();
            
            string enum_attribute_after_name = parse_struct_attribute();
            if(enum_attribute_after_name !== "") {
                if(union_attribute === "") {
                    union_attribute = enum_attribute_after_name;
                }
                else {
                    union_attribute = union_attribute + " " + enum_attribute_after_name;
                }
            }
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_and_lf();
                
                var type,name,err = parse_type();
            }

            skip_spaces_and_lf();
            
            string enum_attribute_after_type = parse_struct_attribute();
            if(enum_attribute_after_type !== "") {
                if(union_attribute === "") {
                    union_attribute = enum_attribute_after_type;
                }
                else {
                    union_attribute = union_attribute + " " + enum_attribute_after_type;
                }
            }
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    info.define_struct = true;
                    return t((sType*%)null, (string)null, false);
                }
                else {
                    anonymous_type = true;
                    info.p = p;
                    info.sline = sline;
                    struct_define_parsed = true;
                    break;
                }
            }
        }
        else if(type_name === "long") {
            /// backtrace ///
            {
                char* p = info.p;
                int sline = info.sline;
                
                if(!(xisalpha(*info->p) || *info->p == '_')) {
                    type_name = string("long");
                    break;
                }
                else {
                    char* p2 = info.p;
                    int sline2 = info.sline;
                    
                    type_name = parse_word();
                    
                    if(type_name === "double") {
                        long_ = true;
                        break;
                    }
                    else if(type_name === "unsigned") {
                        type_name = parse_word();
                        
                        if(type_name === "int") {
                            long_ = true;
                            unsigned_ = true;
                            break;
                        }
                    }
                    else if(type_name === "signed") {
                        type_name = parse_word();
                        
                        if(type_name === "int") {
                            long_ = true;
                            unsigned_ = false;
                            break;
                        }
                    }
                    else if(type_name === "long") {
                        p = info.p;
                        sline = info.sline;
                        if(xisalpha(*info->p) || *info->p == '_') {
                            long_long = true;
                            type_name = parse_word();
                        }
                        else if(*info->p == ':') {
                            type_name = string("long");
                            info.p = p2;
                            info.sline = sline2;
                            break;
                        }
                        else {
                            long_ = true;
                            break;
                        }
                        
                        if(type_name === "int") {
                            long_long = true;
                            break;
                        }
                        else if(!is_type_name(type_name)) {
                            type_name = string("long");
                            long_long = true;
                            info.p = p;
                            info.sline = sline;
                            break;
                        }
                    }
                    else if(is_type_name(type_name)) {
                        if(long_) {
                            long_long = true;
                            long_ = false;
                        }
                        else {
                            long_ = true;
                        }
                        break;
                    }
                    else {
                        info.p = p;
                        info.sline = sline;
                        
                        type_name = string("long");
                        break;
                    }
                }
            }
        }
        else if(type_name === "signed") {
            unsigned_ = false;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                char* p = info.p;
                int sline = info.sline;
                
                type_name = parse_word();
                
                if(type_name === "char" || type_name === "short" || type_name === "long" || type_name === "int") {
                }
                else {
                    type_name = s"int";
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
            else {
                type_name = s"int";
                break;
            }
        }
        else if(type_name === "unsigned") {
            unsigned_ = true;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                char* p = info.p;
                int sline = info.sline;
                
                type_name = parse_word();
                
                if(type_name === "short") {
                    if(xisalpha(*info->p) || *info->p == '_') {
                        char* p = info.p;
                        int sline = info.sline;
                        
                        type_name = parse_word();
                        
                        if(is_type_name(type_name)) {
                            short_ = true;
                        }
                        else {
                            short_ = true;
                            type_name = string("int");
                            
                            info.p = p;
                            info.sline = sline;
                        }
                    }
                    else {
                        short_ = true;
                        type_name = string("int");
                        break;
                    }
                }
                else if(type_name === "long") {
                    if(xisalpha(*info->p) || *info->p == '_') {
                        char* p = info.p;
                        int sline = info.sline;
                        
                        type_name = parse_word();
                        
                        if(is_type_name(type_name)) {
                            long_ = true;
                        }
                        else {
                            long_ = true;
                            type_name = string("int");
                            
                            info.p = p;
                            info.sline = sline;
                        }
                    }
                    else {
                        long_ = true;
                        type_name = string("int");
                        break;
                    }
                }
                else if(!is_type_name(type_name)) {
                    type_name = string("int");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
            else {
                type_name = string("int");
                break;
            }
        }
        else if(type_name === "signed" || type_name === "__signed__") {
            unsigned_ = false;
            
            char* p = info.p;
            int sline = info.sline;
            
            type_name = parse_word();
            
            if(*info->p == ':' && *(info->p+1) == ':') {
                type_name = string("int");
                info.p = p;
                info.sline = sline;
                break;
            }
        }
        else if(type_name === "register") {
            register_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "restrict") {
            restrict_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "_Addr") {
            type_name = parse_word();
        }
        else if(type_name === "__restrict") {
            restrict_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "tup") {
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
            }
            else {
                expected_next_character(':');
            }
            
            type_name = parse_word();
            
            parse_multiple_type = true;
            tuple_ = true;
        }
        else if(type_name === "short") {
            short_ = false;
            
            if(*info->p == ':') {
                break;
            }
            else if(xisalnum(*info.p)) {
                char* p = info.p;
                int sline = info.sline;
                type_name = parse_word();
                
                if(*info->p == ':' && *(info->p+1) == ':') {
                    type_name = string("short");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
                
                if(type_name === "int") {
                    short_ = true;
                    break;
                }
                else if(type_name === "short") {
                    short_ = true;
                    break;
                }
                else if(is_type_name(type_name)) {
                    info.p = p;
                    info.sline = sline;
                }
                else {
                    type_name = string("short");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    
    if((type_name === "typeof" || type_name === "__typeof__") && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        bool no_comma = info.no_comma;
        info.no_comma = false;
        sNode*% exp = expression();
        info.no_comma = no_comma;
        
        expected_next_character(')');
        
        sType*% type = new sType(s"int");
        type->mTypeOfNode = exp;
        
        string var_name = null;
        
        type = parse_pointer_attribute(type);
        
        string attribute = null;
        
        if(parse_variable_name) {
            var_name = parse_variable_name_fun(type, anonymous_name:anonymous_name, var_name_between_brace:false, attribute);
        }
        return t(type, var_name, true);
    }
    
    string attribute = parse_struct_attribute(allow_end:false);
    if(!struct_define_parsed && (struct_ || enum_) && union_attribute !== "") {
        if(attribute === "") {
            attribute = union_attribute;
        }
        else {
            attribute = union_attribute + " " + attribute;
        }
    }
    
    skip_pointer_attribute();
    
    int pointer_num = 0;
    string pointer_attribute = s"";
    bool heap = false;
    bool refference = false;
    bool no_refference = false;
    bool channel = false;
    bool deffer_ = false;
    bool any_class = false;
    bool vtable = false;
    while(1) {
        if(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf();
            string pointer_attr = parse_pointer_qualifier();
            if(pointer_attr !== "") {
                if(pointer_attribute !== "") {
                    pointer_attribute = pointer_attribute + " " + pointer_attr;
                }
                else {
                    pointer_attribute = pointer_attr;
                }
            }
            
            pointer_num++;
        }
        else if(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf();
            
            heap = true;
        }
        else if(gComePthread && *info->p == '|') {
            info->p++;
            skip_spaces_and_lf();
            
            channel = true;
        }
        else if(*info->p == '@') {
            info->p++;
            while(xisalnum(*info->p) || *info->p == '_') {
                info->p++;
            }
            skip_spaces_and_lf();
        }
        else {
            break;
        }
    }
    
    skip_pointer_attribute();
    
    string tuple_name = null;
    if(*info->p == ':' && *(info->p+1) != ':' && tuple_) {
        info->p++;
        skip_spaces_and_lf();
        
        tuple_name = parse_word();
    }
    
    if(atomic_ && *info->p == ')') {
        expected_next_character(')');
    }
    
    bool lambda_flag = false;
    {
        char* pX = info.p;
        int slineX = info.sline;
        
        if(xisalpha(*info->p) || *info->p == '_') {
            (void)parse_word();
            
            if(*info->p == '(' && info.in_typedef) {
                lambda_flag = true;
            }
        }
        
        info.p = pX;
        info.sline = slineX;
    }
    
    sType*% type;
    string var_name;
    
    bool function_pointer_flag = false;
    bool pointer_to_array_flag = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        
            skip_pointer_attribute();
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            if(*info->p == '*' || *info->p == '^') {
                while(*info->p == '*' || *info->p == '^') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                
                function_pointer_flag = true;
                
                string word = null;
                if(xisalpha(*info->p) || *info->p == '_') {
                    word = parse_word();
                }
                
                if(*info->p == '[') {
                    pointer_to_array_flag = true;
                    while(*info->p == '[') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        if(*info->p == ']') {
                            info->p++;
                            skip_spaces_and_lf();
                            break;
                        }
                        bool no_output_come_code = info.no_output_come_code
                        info.no_output_come_code = true;
                        sNode*% exp = expression();
                        info.no_output_come_code = no_output_come_code;
                        
                        if(*info->p == ']') {
                            info->p++;
                            skip_spaces_and_lf();
                        }
                    }
                    
                    if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        if(*info->p == '(') {
                            function_pointer_flag = true;
                            pointer_to_array_flag = false;
                        }
                        else if(*info->p == '[') {
                            function_pointer_flag = false;
                            pointer_to_array_flag = true;
                        }
                    }
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf();
                        pointer_to_array_flag = true;
                        function_pointer_flag = false;
                    }
                    
                    if(*info->p == '[') {
                        pointer_to_array_flag = true;
                        function_pointer_flag = false;
                    }
                    else if(*info->p == '(') {
                        function_pointer_flag = true;
                    }
                }
            }
            else if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info->p == '(') {
                        function_pointer_flag = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    bool var_name_between_brace = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        
            skip_pointer_attribute();
            
            if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(is_type_name(word)) {
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info->p != '(') {
                        var_name_between_brace = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    
    if(anonymous_type && *info->p == '{') {
        static int anonymous_num = 0;
        if(struct_) {
            bool anonymous = false;
            if(type_name === "") {
                anonymous = true;
                type_name = xsprintf("anonymous_typeX%d", ++anonymous_num);
            }
            
            sNode*% node = parse_struct(type_name, union_attribute, info, anonymous);
            
            node_compile(node).elif {
                err_msg(info, "parse_struct is failed");
                return t((sType*%)null, (string)null, false);
            }
            
            int pointer_num = 0;
            while(*info->p == '*') {
                info->p++
                skip_spaces_and_lf(info);
                
                skip_pointer_attribute();
                
                pointer_num++;
            }
            
            //type = new sType(string(type_name));
            type = clone info.types[type_name];
            
            if(type == null) {
                type = new sType(string(type_name));
            }
            sClass*% klass = info.classes[type_name];
            klass->mAnonymous = true;
            type->mAnonymous = anonymous;
            type->mAnonymous = anonymous;
            type->mAnonymousName = string(type_name);
            
            type->mPointerNum = pointer_num;
        }
        else if(enum_) {
            if(type_name === "") {
                if(!info.no_output_err) {
                    type_name = xsprintf("anonymous_typeY%d", anonymous_num);
                }
                else {
                    type_name = xsprintf("anonymous_typeY%d", ++anonymous_num);
                }
            }
            
            sNode*% node = parse_enum(type_name, union_attribute, info);
            
            if(!info.no_output_err) {
                node_compile(node).elif {
                    printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
                    return t((sType*%)null, (string)null, false);
                }
            }
            
            type = clone info.types[type_name];
            
            if(type == null) {
                type = new sType(string(type_name));
            }
        }
        else if(union_) {
            bool anonymous = false;
            if(type_name === "") {
                type_name = xsprintf("anonymous_typeZ%d", ++anonymous_num);
                anonymous = true;
            }
            
            sNode*% node = parse_union(type_name, union_attribute, info, true@anoymous);
            
            node_compile(node).elif {
                printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
                return t((sType*%)null, (string)null, false);
            }
            
            int pointer_num = 0;
            while(*info->p == '*') {
                info->p++
                skip_spaces_and_lf(info);
                
                skip_pointer_attribute();
                
                pointer_num++;
            }
            
            
            type = clone info.types[type_name];
            
            if(type == null) {
                type = new sType(string(type_name));
            }
            //type = new sType(string(type_name));
            
            sClass*% klass = info.classes[type_name];
            klass->mAnonymous = true;
            
            type->mPointerNum = pointer_num;
            type->mAnonymous = anonymous;
            type->mAnonymousName = string(type_name);
        }
        else {
            err_msg(info, "unexpected { character");
            return t((sType*%)null, (string)null, false);
        }
        
        string attribute = parse_struct_attribute(allow_end:false);
        
        if(!parse_variable_name) {
            append_attribute_to_type(type, attribute, false, info);
        }
        
        if(parse_variable_name) {
            var_name = parse_variable_name_fun(type, anonymous_name:anonymous_name, var_name_between_brace:var_name_between_brace, attribute);
        }
    }
    else if(lambda_flag) {
        sType*% result_type;
        if(info.types[type_name]) {
            result_type = clone info.types[type_name];
            result_type->mClass = borrow info.classes[result_type->mClass->mName];
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("__generics_type%d", i));
                }
            }
        }
        else if(info.method_generics_type_names.contained(type_name)) {
            for(int i=0; i<info.method_generics_type_names.length(); i++) {
                if(info.method_generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("__mgenerics_type%d", i));
                }
            }
        }
        else {
            //result_type = new sType(string(type_name));
            result_type = clone info.types[type_name];
            
            if(result_type == null) {
                result_type = new sType(string(type_name));
            }
        }
        
        result_type->mAtomic = result_type->mAtomic || atomic_;
        result_type->mThreadLocal = result_type->mThreadLocal || thread_local;
        result_type->mThread = result_type->mThread || thread_;
        result_type->mConstant = result_type->mConstant || constant;
        result_type->mComplex = result_type->mComplex || complex_;
        result_type->mAlignas = alignas_;
        result_type->mAlignasDouble = alignas_double;
        result_type->mRegister = register_;
        result_type->mUnsigned = result_type->mUnsigned || unsigned_;
        result_type->mNoreturn = result_type->mNoreturn || noreturn_;
        result_type->mVolatile = volatile_;
        result_type->mUniq = result_type->mUniq || uniq_;
        result_type->mStatic = (result_type->mStatic || static_) && !result_type->mUniq;
        result_type->mExtern = result_type->mExtern || extern_;
        result_type->mInline = result_type->mInline || inline_;
        result_type->mRestrict = result_type->mRestrict || restrict_;
        result_type->mLongLong = result_type->mLongLong || long_long;
        result_type->mLong = result_type->mLong || long_;
        result_type->mShort = result_type->mShort || short_;
        result_type->mPointerNum = pointer_num;
        result_type->mHeap = result_type->mHeap || heap;
        result_type->mChannel = result_type->mChannel || channel;
        result_type->mDefferRightValue = result_type->mDefferRightValue || deffer_;
        if(pointer_attribute !== "") {
            if(result_type->mPointerAttribute == null || result_type->mPointerAttribute === "") {
                result_type->mPointerAttribute = pointer_attribute;
            }
            else {
                result_type->mPointerAttribute = result_type->mPointerAttribute + " " + pointer_attribute;
            }
        }
        
        var_name = parse_word();
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
        type = new sType(s"lambda");
        
        type->mResultType = result_type;
        type->mParamTypes = param_types;
        type->mParamNames = param_names;
        type->mVarArgs = var_args;
        type->mExtern = extern_;
    }
    else if(pointer_to_array_flag) {
        expected_next_character('(');
        
        skip_pointer_attribute();
        
        bool pointer_paren = false;
        int paren_num = 1;
        if(*info->p == '(') {
            pointer_paren = true;
            info->p++;
            skip_spaces_and_lf();
            paren_num++;
        }
        
        int array_pointer_num = 0;
        while(*info->p == '*' || *info->p == '^') {
            info->p++;
            skip_spaces_and_lf();
            skip_pointer_attribute();
            array_pointer_num++;
        }
        
        skip_pointer_attribute();
        
        type = clone info.types[type_name];
        
        if(type == null) {
            type = new sType(string(type_name));
        }
        
        type->mConstant = type->mConstant || constant;
        type->mComplex = type->mComplex || complex_;
        type->mAtomic = type->mAtomic || atomic_;
        type->mThreadLocal = type->mThreadLocal || thread_local;
        type->mThread = type->mThread || thread_;
        type->mAlignas = alignas_;
        type->mAlignasDouble = alignas_double;
        type->mRegister = register_;
        type->mUnsigned = type->mUnsigned || unsigned_;
        type->mNoreturn = type->mNoreturn || noreturn_;
        type->mVolatile = volatile_;
        type->mUniq = type->mUniq || uniq_;
        type->mStatic = (type->mStatic || static_) && !type->mUniq;
        type->mExtern = type->mExtern || extern_;
        type->mInline = type->mInline || inline_;
        type->mRestrict = type->mRestrict || restrict_;
        type->mLongLong = type->mLongLong || long_long;
        type->mLong = type->mLong || long_;
        type->mShort = type->mShort || short_;
        type->mPointerNum += pointer_num;
        type->mHeap = type->mHeap || heap;
        type->mChannel = type->mChannel || channel;
        type->mTupleName = tuple_name;
        type->mDefferRightValue = type->mDefferRightValue || deffer_;
        if(pointer_attribute !== "") {
            if(type->mPointerAttribute == null || type->mPointerAttribute === "") {
                type->mPointerAttribute = pointer_attribute;
            }
            else {
                type->mPointerAttribute = type->mPointerAttribute + " " + pointer_attribute;
            }
        }
        
        if(xisalpha(*info->p) || *info->p == '_') {
            var_name = parse_word();
        }
        else {
            var_name = s"";
        }
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            paren_num--;
        }
        list<sNode*%>*% array = new list<sNode*%>();
        while(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% node = expression();
            
            array.add(node);
            
            if(*info->p == ']') {
                info->p++;
                skip_spaces_and_lf();
            }
        }
        if(paren_num > 0 && *info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            
            type.mVarNameArrayNum = array;
        }
        else {
            array.each {
                type.mArrayNum.add(clone it);
            }
        }
        
        while(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info->p == ']') {
                info->p++;
                skip_spaces_and_lf();
                type->mArrayPointerType = true;
                break;
            }
            
            sNode*% node = expression();
            
            type.mArrayNum.add(node);
            
            if(*info->p == ']') {
                info->p++;
                skip_spaces_and_lf();
            }
        }
        
        type->mArrayPointerNum = array_pointer_num;
        type->mPointerParen = pointer_paren;
    }
    else if(function_pointer_flag) {
        info->p++;
        skip_spaces_and_lf();
        
        skip_pointer_attribute();
        string function_pointer_attribute = s"";
        
        int function_pointer_num = 0;
        while(*info->p == '*' || *info->p == '^') {
            info->p++;
            skip_spaces_and_lf();
            string pointer_attr = parse_pointer_qualifier();
            if(pointer_attr !== "") {
                if(function_pointer_attribute !== "") {
                    function_pointer_attribute = function_pointer_attribute + " " + pointer_attr;
                }
                else {
                    function_pointer_attribute = pointer_attr;
                }
            }
            function_pointer_num++;
        }
        
        string pointer_attr2 = parse_pointer_qualifier();
        if(pointer_attr2 !== "") {
            if(function_pointer_attribute !== "") {
                function_pointer_attribute = function_pointer_attribute + " " + pointer_attr2;
            }
            else {
                function_pointer_attribute = pointer_attr2;
            }
        }
        
        sType*% result_type;
        if(info.types[type_name]) {
            result_type = clone info.types[type_name];
            result_type->mClass = borrow info.classes[result_type->mClass->mName];
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("__generics_type%d", i));
                }
            }
        }
        else if(info.method_generics_type_names.contained(type_name)) {
            for(int i=0; i<info.method_generics_type_names.length(); i++) {
                if(info.method_generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("__mgenerics_type%d", i));
                }
            }
        }
        else {
            result_type = clone info.types[type_name];
            
            if(result_type == null) {
                result_type = new sType(string(type_name));
            }
        }
        
        result_type->mConstant = result_type->mConstant || constant;
        result_type->mComplex = result_type->mComplex || complex_;
        result_type->mAtomic = result_type->mAtomic || atomic_;
        result_type->mThreadLocal = result_type->mThreadLocal || thread_local;
        result_type->mThread = result_type->mThread || thread_;
        result_type->mAlignas = alignas_;
        result_type->mAlignasDouble = alignas_double;
        result_type->mRegister = register_;
        result_type->mUnsigned = result_type->mUnsigned || unsigned_;
        result_type->mNoreturn = result_type->mNoreturn || noreturn_;
        result_type->mVolatile = volatile_;
        result_type->mUniq = result_type->mUniq || uniq_;
        result_type->mStatic = (result_type->mStatic || static_) && !result_type->mUniq;
        result_type->mExtern = result_type->mExtern || extern_;
        result_type->mInline = result_type->mInline || inline_;
        result_type->mRestrict = result_type->mRestrict || restrict_;
        result_type->mLongLong = result_type->mLongLong || long_long;
        result_type->mLong = result_type->mLong || long_;
        result_type->mShort = result_type->mShort || short_;
        result_type->mPointerNum += pointer_num;
        result_type->mHeap = result_type->mHeap || heap;
        result_type->mChannel = result_type->mChannel || channel;
        result_type->mDefferRightValue = result_type->mDefferRightValue || deffer_;
        if(pointer_attribute !== "") {
            if(result_type->mPointerAttribute == null || result_type->mPointerAttribute === "") {
                result_type->mPointerAttribute = pointer_attribute;
            }
            else {
                result_type->mPointerAttribute = result_type->mPointerAttribute + " " + pointer_attribute;
            }
        }
        
        int paren_flag = false;
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            paren_flag = true;
        }
            
        int array_pointer = 0;
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf();
            array_pointer++;
        }
    
        if(xisalnum(*info.p) || *info->p == '_') {
            var_name = parse_word();
            if(!paren_flag && *info->p == '(') { // function pointer result function
                return t(result_type,var_name, false);
            }
        }
        else {
            static int num_anonymous_var_name = 0;
            num_anonymous_var_name++;
            var_name = xsprintf("anonymous_lambda_var_nameZ%d", num_anonymous_var_name);
        }
        
        type = new sType(s"lambda");
        while(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info->p == ']') {
                info->p++;
                skip_spaces_and_lf();
                
                type->mArrayPointerType = true;
                break;
            }
            else {
                sNode*% node = expression();
                
                type.mArrayNum.add(node);
                
                if(*info->p == ']') {
                    info->p++;
                    skip_spaces_and_lf();
                }
            }
        }
        
        if(paren_flag && *info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        while(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% node = expression();
            
            type.mArrayNum.add(node);
            
            if(*info->p == ']') {
                info->p++;
                skip_spaces_and_lf();
            }
        }
        expected_next_character(')');
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
        type->mResultType = clone result_type;
        type->mParamTypes = param_types;
        type->mParamNames = param_names;
        type->mVarArgs = var_args;
        type->mExtern = extern_;
        type->mPointerAttribute = function_pointer_attribute;
        
        type->mFunctionPointerNum = function_pointer_num;
        type->mArrayPointerNum = array_pointer;
    }
    else {
        if(info.types[type_name]) {
            type = clone info.types[type_name];
            type->mClass = borrow info.classes[type->mClass->mName];
            
            buffer* t = borrow info.typedef_definition[type_name];
            
            type->mOriginalTypePointerNum = pointer_num;
            type->mOriginalTypePointerHeap = heap;
            if(type->mTypedef || t) {
                sType*% type_ = clone type;
                type_->mAttribute = s"";
                type.mTypedefOriginalType = clone type_;
            }
            
            type->mAttribute = s"";
            type->mVarAttribute = s"";
            
            type->mConstant = type->mConstant || constant;
            type->mComplex = type->mComplex || complex_;
            type->mAtomic = type->mAtomic || atomic_;
            type->mThreadLocal = type->mThreadLocal || thread_local;
            type->mThread = type->mThread || thread_;
            type->mAlignas = alignas_;
            type->mAlignasDouble = alignas_double;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mNoreturn = type->mNoreturn || noreturn_;
            type->mVolatile = volatile_;
            type->mUniq = type->mUniq || uniq_;
            type->mStatic = (type->mStatic || static_) && !type->mUniq;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
            if(type.mClass.mName === "lambda" || type.mArrayNum.length() > 0) {
                type->mArrayPointerNum += pointer_num;
            }
            else {
                type->mPointerNum += pointer_num;
            }
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
            
            type = parse_pointer_attribute(type);
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    type = new sType(xsprintf("__generics_type%d", i));
                }
            }
            
            type->mConstant = type->mConstant || constant;
            type->mComplex = type->mComplex || complex_;
            type->mAtomic = type->mAtomic || atomic_;
            type->mThreadLocal = type->mThreadLocal || thread_local;
            type->mThread = type->mThread || thread_;
            type->mAlignas = alignas_;
            type->mAlignasDouble = alignas_double;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mNoreturn = type->mNoreturn || noreturn_;
            type->mVolatile = volatile_;
            type->mUniq = type->mUniq || uniq_;
            type->mStatic = (type->mStatic || static_) && !type->mUniq;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
            
            type = parse_pointer_attribute(type);
        }
        else if(info.method_generics_type_names.contained(type_name)) {
            for(int i=0; i<info.method_generics_type_names.length(); i++) {
                if(info.method_generics_type_names[i] === type_name) {
                    type = new sType(xsprintf("__mgenerics_type%d", i));
                }
            }
            
            type->mConstant = type->mConstant || constant;
            type->mComplex = type->mComplex || complex_;
            type->mAtomic = type->mAtomic || atomic_;
            type->mThreadLocal = type->mThreadLocal || thread_local;
            type->mThread = type->mThread || thread_;
            type->mAlignas = alignas_;
            type->mAlignasDouble = alignas_double;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mNoreturn = type->mNoreturn || noreturn_;
            type->mVolatile = volatile_;
            type->mUniq = type->mUniq || uniq_;
            type->mStatic = (type->mStatic || static_) && !type->mUniq;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
            
            type = parse_pointer_attribute(type);
        }
        else if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            if(info.generics_classes[string(type_name)] == null)
            {
                return t((sType*%)null, (string)null, false);
            }
            
            //type = new sType(string(type_name));
            
            type = clone info.types[type_name];
            
            if(type == null) {
                type = new sType(string(type_name));
            }
            
            while(true) {
                var generics_type, var_name, err = parse_type(parse_multiple_type:false);
                
                if(!err) {
                    return t((sType*%)null, (string)null, false);
                }
                
                type->mGenericsTypes.push_back(generics_type);
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    break;
                }
                else {
                    err_msg(info, "invalid generics type(%c)(%c)(%c)", *info->p, *(info->p+1), *(info->p+2));
                    return t((sType*%)null, (string)null, false);
                }
            }
            
            if(is_contained_generics_class(type, info)) {
                type = solve_generics(type, info.generics_type, info);
            }
            else {
                if(!output_generics_struct(type, type, info))
                {
                    string new_name = create_generics_name(type, info);
                    printf("%s %d: output generics is failed(%s)\n", info->sname, info->sline, new_name);
                    exit(7);
                }
            }
            
            type->mConstant = type->mConstant || constant;
            type->mComplex = type->mComplex || complex_;
            type->mAtomic = type->mAtomic || atomic_;
            type->mThreadLocal = type->mThreadLocal || thread_local;
            type->mThread = type->mThread || thread_;
            type->mAlignas = alignas_;
            type->mAlignasDouble = alignas_double;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mNoreturn = type->mNoreturn || noreturn_;
            type->mVolatile = volatile_;
            type->mUniq = type->mUniq || uniq_;
            type->mStatic = (type->mStatic || static_) && !type->mUniq;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
            
            type_name = type->mClass->mName;
            
            type = parse_pointer_attribute(type);
        }
        else {
            if(struct_) {
                sClass* klass = borrow info.classes[type_name];
                
                if(klass == null && *info->p != '<') {
                    info.classes.insert(string(type_name), new sClass(name:string(type_name), struct_:true));
                }
            }
            if(union_) {
                sClass* klass = borrow info.classes[type_name];
                
                if(klass == null && *info->p != '<') {
                    info.classes.insert(string(type_name), new sClass(name:string(type_name), union_:true));
                }
            }
            
            //type = new sType(string(type_name));
            
            type = clone info.types[type_name];
            
            if(type == null) {
                type = new sType(string(type_name));
            }
            
            type->mConstant = type->mConstant || constant;
            type->mComplex = type->mComplex || complex_;
            type->mAtomic = type->mAtomic || atomic_;
            type->mThreadLocal = type->mThreadLocal || thread_local;
            type->mThread = type->mThread || thread_;
            type->mAlignas = alignas_;
            type->mAlignasDouble = alignas_double;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mNoreturn = type->mNoreturn || noreturn_;
            type->mVolatile = volatile_;
            type->mUniq = type->mUniq || uniq_;
            type->mStatic = (type->mStatic || static_) && !type->mUniq;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
        }
        
        if(pointer_attribute !== "") {
            if(type->mPointerAttribute == null || type->mPointerAttribute === "") {
                type->mPointerAttribute = pointer_attribute;
            }
            else {
                type->mPointerAttribute = type->mPointerAttribute + " " + pointer_attribute;
            }
        }
        
        type = parse_pointer_attribute(type);
        
        if(parse_multiple_type && *info->p == ',' && !info.in_offsetof) {
            list<sType*%>*% types = new list<sType*%>();
            
            types.push_back(clone type);
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                var type2, name, err = parse_type(parse_multiple_type:false);
                
                if(!err) {
                    return t((sType*%)null, (string)null, false);
                }
                    
                types.push_back(clone type2);
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            int num_tuples = types.length();
            
            type = new sType(xsprintf("tuple%d", num_tuples));
            type->mPointerNum++;
            type->mHeap = true;
            
            foreach(it, types) {
                type->mGenericsTypes.push_back((clone it));
            }
            
            
            type = parse_pointer_attribute(type);
            
            if(is_contained_generics_class(type, info)) {
                type = solve_generics(type, info.generics_type, info);
            }
            else {
                if(!output_generics_struct(type, type, info))
                {
                    string new_name = create_generics_name(type, info);
                    printf("output generics is failed(%s)\n", new_name);
                    exit(9);
                }
            }
            type->mMultipleTypes = true;
            
            type_name = type->mClass->mName;
        }
        
        string attribute = parse_struct_attribute(allow_end:false);
        
        if(type && type->mClass->mName === "lambda" && attribute !== "") {
            if(type->mMiddleAttribute != null && type->mMiddleAttribute !== "") {
                type->mMiddleAttribute = type->mMiddleAttribute + " " + attribute;
            }
            else {
                type->mMiddleAttribute = attribute;
            }
            attribute = s"";
        }
        
        if(!parse_variable_name) {
            append_attribute_to_type(type, attribute, false, info);
        }

        if(parse_variable_name) {
            var_name = parse_variable_name_fun(type, anonymous_name:anonymous_name, var_name_between_brace:var_name_between_brace, attribute);
        }
    }
    skip_spaces_and_lf();
    list<sNode*%>*% array_num_typedef = null;
    if(type->mArrayNum.length() > 0) {
        array_num_typedef = clone type->mArrayNum;
        type->mArrayNum.reset();
    }
    
    while(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf();
        
        bool array_static = false;
        bool array_restrict = false;
        while(1) {
            if(parsecmp("static")) {
                info->p += strlen("static");
                skip_spaces_and_lf();
                
                array_static = true;
            }
            else if(parsecmp("restrict")) {
                info->p += strlen("restrict");
                skip_spaces_and_lf();
                
                array_restrict = true;
            }
            else {
                break;
            }
        }
        
        skip_pointer_attribute();
        
        if(*info->p == ']') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mArrayPointerType = true;
            //type->mPointerNum++;
            break;
        }
        skip_spaces_and_lf();
        
        sNode*% node = expression();
        type.mArrayNum.push_back(node);
        type.mArrayStatic.push_back(array_static);
        type.mArrayRestrict.push_back(array_restrict);
        
        expected_next_character(']');
    }
    
    if(array_num_typedef) {
        type->mArrayNum.each {
            type->mVarNameArrayNum.add(clone it);
        }
        type->mArrayNum.reset();
        array_num_typedef.each {
            type.mArrayNum.add(clone it);
        }
    }
    var asm_name,attribute2 = parse_attribute();
    
    append_attribute_to_type(type, attribute2, parse_variable_name, info);
    
    type->mAsmName = asm_name;
    
    skip_spaces_and_lf();
    
    if(type->mChannel) {
        sType*% type_before = clone type;
        type = new sType(s"int");
        type->mArrayNum = [ create_int_node(s"2"@value, info) ];
        type->mChannelType = type_before;
        type->mChannel = true;
    }
    
    if(type && type->mClass->mName === "lambda" && attribute !== "") {
        if(type->mMiddleAttribute != null && type->mMiddleAttribute !== "") {
            type->mMiddleAttribute = type->mMiddleAttribute + " " + attribute;
        }
        else {
            type->mMiddleAttribute = attribute;
        }
        attribute = s"";
    }
    append_attribute_to_type(type, attribute, parse_variable_name, info);
    
    return t(type, var_name, true);
}
