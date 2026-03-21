#include "common.h"

sFun*,string create_cloner_automatically(sType* type, const char* fun_name, sInfo* info)
{
    if(type->mClass->mName === "void") {
        return t((sFun*)null, (string)null);
    }
    
    MSaveState;
    
    sFun* cloner = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
//    type->mHeap = true;
    
    sClass* klass = type->mClass;
    
    string fun_name2;
    
    if(type->mGenericsTypes.length() > 0) {
        string none_generics_name = get_none_generics_name(type.mClass.mName);
        
        sType*% obj_type = solve_generics(type, info.generics_type, info);
        
        fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
        string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
        
        sGenericsFun* generics_fun = borrow info.generics_funcs.at(fun_name3, null);
        
        if(generics_fun) {
            var name, err = create_generics_fun(string(fun_name2), generics_fun, obj_type, info);
            
            if(!err) {
                if(type->mClass->mName === "void") {
                    MRestoreState;
                    return t((sFun*)null, (string)null);
                }
            }
            
            cloner = borrow info->funcs[name];
        }
        else {
            cloner = borrow info->funcs[fun_name2];
        }
        
        real_fun_name = fun_name2;
    }
    else {
        fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
        
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
        
        real_fun_name = fun_name2;
    }
    
    if(cloner == null && !type->mClass->mNumber && type->mPointerNum > 0)
    {
        var source = new buffer();
        
        sType*% type2 = clone type;
        type2->mPointerNum = 0;
        
        source.append_str("{\n");
        source.append_str("\nusing unsafe;\n");
        source.append_str("if(self == (void*)0) { return (void*)0; }\n");
        source.append_format("var result = new %s;\n", make_type_name_string(type2));
        
        if(klass->mProtocol) {
            const char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            
            source.append_str(source2);
            
            klass = borrow info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(name === "_protocol_obj") {
                }
                else if(field_type->mArrayNum.length() > 0) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n", name, name, name);
                    
                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { result.%s = self.%s; }\n", name, name);
                    
                    source.append_str(source2);
                }
            }
        }
        else {
            klass = borrow info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(field_type->mHeap) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n", name, name, name);
                    
                    source.append_str(source2);
                }
                else if(field_type->mArrayNum.length() > 0) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n", name, name, name);
                    
                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { result.%s = self.%s; }\n", name, name);
                    
                    source.append_str(source2);
                }
            }
        }
        
        string user_real_fun_name = create_method_name(type, false@no_pointer_name, "user_clone", info);
        sFun* user_cloner = borrow info->funcs[user_real_fun_name];
        
/*
        if(user_cloner) {
            char source2[1024];
            snprintf(source2, 1024, "if(self != ((void*)0)) { %s(result, self); }\n", user_real_fun_name);
            
            source.append_str(source2);
        }
*/
        
        source.append_format("return result;");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        buffer*% source3 = info.source;
        char* head = info.head;
        
        info.source = source;
        if(info.p == null) {
            info.p = borrow info.source.buf;
        }
        info.p = borrow info.source.buf;
        info.head = borrow info.source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 1;
        
        sBlock*% block = parse_block();
        
        var result_type = clone type;
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        list<sType*%>*% param_types = [self_type];
        var param_names = [string("self")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        
        result_type->mStatic = false;
        result_type->mUniq = false;
        result_type->mInline = false;
        
        var fun2 = info.funcs[string(name)];
        
        if(fun2 == null || fun2.mExternal) {
            var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , info, false@inline_, false@uniq_);
            fun->mGenericsFun = true;
                        
            info.funcs.insert(string(name), fun);
            
            sNode*% node = new sFunNode(fun, info) implements sNode;
            
            node_compile(node).elif {
                err_msg(info, "compiling error(Y)");
                exit(2);
            }
            
            cloner = borrow fun;
        }
        else {
            cloner = borrow fun2;
        }
        
        info.sname = sname;
        info.sline = sline;
        
        info.source = source3;
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
        info.head = head;
        info.sline = sline;
    }
    
    MRestoreState;
    
    return t(cloner, real_fun_name);
}

sFun*,string create_to_string_automatically(sType* type, const char* fun_name, sInfo* info)
{
    MSaveState;
    
    sFun* cloner = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_str("{\n");
        source.append_str("var result = new buffer();\n");
        
        source.append_format("result.append_str(\"%s {\");\n", klass->mName);
        
        int i = 0;
        klass = borrow info.classes[klass->mName];
        foreach(it, klass->mFields) {
            var name, field_type = it;
            
            if(i == klass->mFields.length() -1) {
                char source2[1024];
                
                snprintf(source2, 1024, "result.append_str(\"%s:\");\n", name);
                
                source.append_str(source2);
                
                snprintf(source2, 1024, "result.append_str(self.%s.to_string());\n", name);
                
                source.append_str(source2);
            }
            else {
                char source2[1024];
                
                snprintf(source2, 1024, "result.append_str(\"%s:\");\n", name);
                
                source.append_str(source2);
                
                snprintf(source2, 1024, "result.append_str(self.%s.to_string());\n", name);
                
                source.append_str(source2);
                
                snprintf(source2, 1024, "result.append_str(\",\");\n");
                
                source.append_str(source2);
            }
            
            i++;
        }
        source.append_str("result.append_str(\"}\");\n");
        
        source.append_format("return result.to_string();\n");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        buffer*% source3 = info.source;
        char* head = info.head;
        
        info.source = source;
        if(info.p == null) {
            info.p = borrow info.source.buf;
        }
        info.p = borrow info.source.buf;
        info.head = borrow info.source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 1;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType(s"char*");
        result_type->mHeap = true;
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        list<sType*%>*% param_types = [self_type];
        var param_names = [string("self")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        
        result_type->mStatic = false;
        result_type->mUniq = false;
        result_type->mInline = false;
        
        var fun2 = info.funcs[string(name)];
        if(fun2 == null || fun2.mExternal) {
            var fun = new sFun(name, result_type, param_types, param_names
                            , param_default_parametors
                            , false@external, false@var_args, block
                            , true@static_
                            , info, false@inline_, false@uniq_);
            fun->mGenericsFun = true;
                            
            info.funcs.insert(string(name), fun);
            
            cloner = borrow fun;
            
            sNode*% node = new sFunNode(fun, info) implements sNode;
            
            node_compile(node).elif {
                err_msg(info, "compiling error(Y)");
                exit(2);
            }
        }
        else {
            cloner = borrow fun2;
        }
        
        info.sname = sname;
        info.sline = sline;
        
        info.source = source3;
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
        info.head = head;
        info.sline = sline;
    }
    
    MRestoreState;
    
    return t(cloner, real_fun_name);
}

sFun*,string create_get_hash_key_automatically(sType* type, const char* fun_name, sInfo* info)
{
    MSaveState;
    
    sFun* get_hash_key_fun = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
        
    if(type->mGenericsTypes.length() > 0) {
        get_hash_key_fun = borrow info->funcs[real_fun_name];
        
        if(get_hash_key_fun == null) {
            string none_generics_name = get_none_generics_name(type2.mClass.mName);
            
            string generics_fun_name = xsprintf("%s_%s", none_generics_name, fun_name);
            sGenericsFun* generics_fun = borrow info->generics_funcs[generics_fun_name];
            
            if(generics_fun) {
                var name, err = create_generics_fun(real_fun_name, generics_fun, type, info);
                
                if(!err)
                {
                    printf("%s %d: can't create generics get_hash_key_fun\n", info->sname, info->sline);
                    exit(2);
                }
                get_hash_key_fun = borrow info->funcs[name];
                //get_hash_key_fun = borrow info->funcs[real_fun_name];
            }
        }
    }
    else {
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", real_fun_name, i);
            get_hash_key_fun = borrow info->funcs[new_fun_name];
            
            if(get_hash_key_fun) {
                real_fun_name = string(new_fun_name);
                break;
            }
        }
        
        if(get_hash_key_fun == null) {
            get_hash_key_fun = borrow info->funcs[real_fun_name];
        }
    }
    
    if(get_hash_key_fun == null && type->mPointerNum > 0 && !klass->mNumber && !klass->mProtocol) {
        var source = new buffer();
        
        source.append_str("{\n");
        source.append_str("unsigned int result = 0;\n");
        
        int i = 0;
        klass = borrow info.classes[klass->mName];
        foreach(it, klass->mFields) {
            var name, field_type = it;
            
            char source2[1024];
            
            snprintf(source2, 1024, "result += ((int)self.%s).get_hash_key();\n", name);
            
            source.append_str(source2);
            
            i++;
        }
        
        source.append_format("return result;\n");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        buffer*% source3 = info.source;
        char* head = info.head;
        
        info.source = source;
        if(info.p == null) {
            info.p = borrow info.source.buf;
        }
        info.p = borrow info.source.buf;
        info.head = borrow info.source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 1;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType(s"int");
        result_type->mUnsigned = true;
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        list<sType*%>*% param_types = [self_type];
        var param_names = [string("self")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        
        result_type->mStatic = false;
        result_type->mUniq = false;
        result_type->mInline = false;
        
        var fun2 = info.funcs[string(name)];
        if(fun2 == null || fun2.mExternal) {
            var fun = new sFun(name, result_type, param_types, param_names
                            , param_default_parametors
                            , false@external, false@var_args, block
                            , true@static_
                            , info, false@inline_, false@uniq_);
            fun->mGenericsFun = true;
                            
            info.funcs.insert(string(name), fun);
            
            get_hash_key_fun = borrow fun;
            
            sNode*% node = new sFunNode(fun, info) implements sNode;
            
            node_compile(node).elif {
                err_msg(info, "compiling error(Y)");
                exit(2);
            }
        }
        else {
            get_hash_key_fun = borrow fun2;
        }
        
        info.sname = sname;
        info.sline = sline;
        
        info.source = source3;
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
        info.head = head;
        info.sline = sline;
    }
    
    MRestoreState;
    
    return t(get_hash_key_fun, real_fun_name);
}

sFun*,string create_compare_automatically(sType* type, const char* fun_name, sInfo* info)
{
    MSaveState;
    
    sFun* get_hash_key_fun = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
        
    if(type->mGenericsTypes.length() > 0) {
        get_hash_key_fun = borrow info->funcs[real_fun_name];
        
        if(get_hash_key_fun == null) {
            string none_generics_name = get_none_generics_name(type2.mClass.mName);
            
            string generics_fun_name = xsprintf("%s_%s", none_generics_name, fun_name);
            sGenericsFun* generics_fun = borrow info->generics_funcs[generics_fun_name];
            
            if(generics_fun) {
                var name, err = create_generics_fun(real_fun_name, generics_fun, type, info);
                
                if(!err)
                {
                    printf("%s %d: can't create generics get_hash_key_fun\n", info->sname, info->sline);
                    exit(2);
                }
                get_hash_key_fun = borrow info->funcs[name];
                //get_hash_key_fun = borrow info->funcs[real_fun_name];
            }
        }
    }
    else {
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", real_fun_name, i);
            get_hash_key_fun = borrow info->funcs[new_fun_name];
            
            if(get_hash_key_fun) {
                real_fun_name = string(new_fun_name);
                break;
            }
        }
        
        if(get_hash_key_fun == null) {
            get_hash_key_fun = borrow info->funcs[real_fun_name];
        }
    }
    
    if(get_hash_key_fun == null && type->mPointerNum > 0 && !klass->mNumber && !klass->mProtocol) {
        var source = new buffer();
        
        source.append_str("{\n");
        
        int i = 0;
        klass = borrow info.classes[klass->mName];
        if(klass->mFields.length() == 0) {
            err_msg(info, "require field");
            exit(1);
        }
        
        var name, field_type = klass->mFields[0];
        
        char source2[1024];
        
        snprintf(source2, 1024, "var result = self.%s.compare(right.%s);\n", name, name);
        
        source.append_str(source2);
        
        source.append_format("return result;\n");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        buffer*% source3 = info.source;
        char* head = info.head;
        
        info.source = source;
        if(info.p == null) {
            info.p = borrow info.source.buf;
        }
        info.p = borrow info.source.buf;
        info.head = borrow info.source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 1;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType(s"int");
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        list<sType*%>*% param_types = [self_type, right_type];
        var param_names = [string("self"), string("right")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        param_default_parametors.push_back(null);
        
        result_type->mStatic = false;
        result_type->mUniq = false;
        result_type->mInline = false;
        
        var fun2 = info.funcs[string(name)];
        if(fun2 == null || fun2.mExternal) {
            var fun = new sFun(name, result_type, param_types, param_names
                            , param_default_parametors
                            , false@external, false@var_args, block
                            , true@static_
                            , info, false@inline_, false@uniq_);
            fun->mGenericsFun = true;
                            
            info.funcs.insert(string(name), fun);
            
            get_hash_key_fun = borrow fun;
            
            sNode*% node = new sFunNode(fun, info) implements sNode;
            
            node_compile(node).elif {
                err_msg(info, "compiling error(Y)");
                exit(2);
            }
        }
        else {
            get_hash_key_fun = borrow fun2;
        }
        
        info.sname = sname;
        info.sline = sline;
        
        info.source = source3;
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
        info.head = head;
        info.sline = sline;
    }
    
    MRestoreState;
    
    return t(get_hash_key_fun, real_fun_name);
}

