#include "common.h"

sFun*,string create_finalizer_automatically(sType* type, const char* fun_name, sInfo* info)
{
    MSaveState;
    
    string real_fun_name = null;
    sFun* finalizer = null;
    
    sType*% type_before = clone type;
        
    sType*% type2 = clone type;
    type2->mHeap = false;
    
    string fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
        
    sType*% type_ = get_no_solved_type2(type);
        
    if(type_->mGenericsTypes.length() > 0) {
        finalizer = borrow info->funcs[fun_name2];
        
        if(finalizer == null) {
            string none_generics_name = get_none_generics_name(type2.mClass.mName);
            
            string generics_fun_name = xsprintf("%s_%s", none_generics_name, fun_name);
            sGenericsFun* generics_fun = borrow info->generics_funcs[generics_fun_name];
            
            if(generics_fun) {
                var name, err = create_generics_fun(fun_name2, generics_fun, type_, info);
                
                if(!err) 
                {
                    printf("%s %d: can't create generics finalizer\n", info->sname, info->sline);
                    exit(2);
                }
                
                finalizer = borrow info->funcs[name];
                //finalizer = borrow info->funcs[fun_name2];
            }
        }
        
        real_fun_name = fun_name2;
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
        
        if(finalizer == null) {
            finalizer = borrow info->funcs[fun_name2];
        }
        
        real_fun_name = fun_name2;
    }
    
    if(finalizer == null) {
        type_ = type_before;
        
        real_fun_name = create_method_name(type_, false@no_pointer_name, fun_name, info);
        
        string user_real_fun_name = create_method_name(type_, false@no_pointer_name, "user_finalize", info);
        sFun* user_finalizer = borrow info->funcs[user_real_fun_name];
        
        sType*% type2 = solve_generics(type_, type_, info);
        
        type_ = type2;
        
        sClass* klass = type_->mClass;
        
        if(type_->mPointerNum > 0 && klass->mStruct || type_->mAllocaValue) {
            var source = new buffer();
            
            source.append_char('{');
            
            source.append_str("\nusing unsafe;\n");
            
/*
            if(user_finalizer) {
                char source2[1024];
                snprintf(source2, 1024, "if(self != ((void*)0) && come_get_ref_count(self) == 0) { %s(self); }\n", user_real_fun_name);
                
                source.append_str(source2);
            }
*/
            
            klass = borrow info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;

                bool weak_field = field_type->mWeak;
                field_type->mNoSolvedGenericsType.if {
                    if(Value.mWeak) {
                        weak_field = true;
                    }
                }

                bool owned_cycle = false;
                if(!weak_field) {
                    if(is_owned_main(type_, klass, clone field_type, clone type_)) {
                        owned_cycle = true;
                    }

                    field_type->mNoSolvedGenericsType.if {
                        Value.mGenericsTypes.each {
                            if(is_owned_main(type_, klass, clone it, clone type_)) {
                                owned_cycle = true;
                            }
                        }
                    }
                }

                if(owned_cycle) {
                    warning_msg(info, "Cyclic ownership detected involving %s. Don't use heap to break cycle, but sometimes it works. If you need no check this to use _weak attribute to the fields.", field_type->mClass->mName);
                }
                
                if(field_type->mHeap) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n", name, name, name,name);
                    
                    source.append_str(source2);
                }
                else if(field_type->mChannel) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0) && self.%s[0] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[0]); }", name, name);
                    source.append_str(source2);
                    
                    snprintf(source2, 1024, "if(self != ((void*)0) && self.%s[1] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[1]); }", name, name);
                    
                    source.append_str(source2);
                }
            }
            
            source.append_char('}');
            
            char* p = info.p;
            int sline = info.sline;
            string sname = info.sname;
            char* head = info.head;
            buffer*% source3 = info.source;
            
            info.source = source;
            if(info.p == null) {
                info.p = borrow info.source.buf;
            }
            info.p = borrow info.source.buf;
            info.head = borrow source.buf;
            
            info.sname = string(real_fun_name);
            info.sline = 0;
            
            sBlock*% block = parse_block();
            
            var result_type = new sType(s"void");
            var name = clone real_fun_name;
            var self_type = clone type_;
            self_type->mHeap = false;
            if(self_type->mPointerNum == 0) {
                self_type->mPointerNum = 1;
            }
            if(self_type->mPointerNum > 1) {
                self_type->mPointerNum = 1;
            }
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
                
                finalizer = borrow fun;
                
                sNode*% node = new sFunNode(fun, info) implements sNode;
                
                node_compile(node).elif {
                    printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
                    exit(2);
                }
            }
            else {
                finalizer = borrow fun2;
            }
            
            info.source = source3;
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
            info.head = head;
            info.sline = sline;
            info.sname = sname;
        }
    }
        
    MRestoreState;
    
    return t(finalizer, real_fun_name);
}


sFun*,string create_equals_automatically(sType* type, const char* fun_name, sInfo* info)
{
    MSaveState;
    
    
    sFun* equaler = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            const char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return left.%s.equals(right.%s);\n", name, name);
            source.append_str(source2);
        }
        else {
            klass = borrow info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                char source2[1024];
                snprintf(source2, 1024, "if(!left.%s.equals(right.%s)) { return false; }\n", name, name, name);
                
                source.append_str(source2);
            }
        }
        
        source.append_str("return true;");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        if(info.p == null) {
            info.p = borrow info.source.buf;
        }
        info.p = borrow info.source.buf;
        info.head = borrow source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 0;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType(s"bool");
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        list<sType*%>*% param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
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
        
            sNode*% node = new sFunNode(fun, info) implements sNode;
            
            node_compile(node).elif {
                err_msg(info, "compiling error");
                exit(2);
            }
            
            equaler = borrow fun;
        }
        else {
            equaler = borrow fun2;
        }
        
        info.source = source3;
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
        info.head = head;
        info.sline = sline;
        info.sname = sname;
    }
    
    MRestoreState;
    
    return t(equaler, real_fun_name);
}

sFun*,string create_operator_not_equals_automatically(sType* type, const char* fun_name, sInfo* info)
{
    MSaveState;
    
    sFun* equaler = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            const char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return left.%s !== right.%s;\n", name, name);
            source.append_str(source2);
        }
        else {
            char source2[1024];
            snprintf(source2, 1024, "return !(");
            
            source.append_str(source2);
            
            snprintf(source2, 1024, "( ");
            source.append_str(source2);
            
            int i = 0;
            klass = borrow info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                char source2[1024];
                snprintf(source2, 1024, "(left.%s === right.%s)", name, name, name);
                source.append_str(source2);
                
                if(i == klass->mFields.length()-1) {
                    char source2[1024];
                    snprintf(source2, 1024, "));");
                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, " && ");
                    source.append_str(source2);
                }
                
                i++;
            }
        }
        
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        if(info.p == null) {
            info.p = borrow info.source.buf;
        }
        info.p = borrow info.source.buf;
        info.head = borrow source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 0;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType(s"bool");
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        list<sType*%>*% param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
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
        
            sNode*% node = new sFunNode(fun, info) implements sNode;
            
            node_compile(node).elif {
                err_msg(info, "compiling error");
                exit(2);
            }
            
            equaler = borrow fun;
        }
        else {
            equaler = borrow fun2;
        }
        
        info.source = source3;
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
        info.head = head;
        info.sline = sline;
        info.sname = sname;
    }
    
    MRestoreState;
    
    return t(equaler, real_fun_name);
}

sFun*,string create_not_equals_automatically(sType* type, const char* fun_name, sInfo* info)
{
    MSaveState;
    
    sFun* equaler = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            const char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return !left.%s.equals(right.%s);\n", name, name);
            source.append_str(source2);
        }
        else {
            char source2[1024];
            snprintf(source2, 1024, "return !(");
            
            source.append_str(source2);
            
            int i = 0;
            klass = borrow info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                char source2[1024];
                snprintf(source2, 1024, "left.%s.equals(right.%s)", name, name);
                source.append_str(source2);
                
                if(i == klass->mFields.length()-1) {
                    char source2[1024];
                    snprintf(source2, 1024, ");");
                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, " && ");
                    source.append_str(source2);
                }
                
                i++;
            }
        }
        
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        if(info.p == null) {
            info.p = borrow info.source.buf;
        }
        info.p = borrow info.source.buf;
        info.head = borrow source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 0;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType(s"bool");
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        list<sType*%>*% param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
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
        
            sNode*% node = new sFunNode(fun, info) implements sNode;
            
            node_compile(node).elif {
                err_msg(info, "compiling error");
                exit(2);
            }
            
            equaler = borrow fun;
        }
        else {
            equaler = borrow fun2;
        }
        
        info.source = source3;
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
        info.head = head;
        info.sline = sline;
        info.sname = sname;
    }
    
    MRestoreState;
    
    return t(equaler, real_fun_name);
}

sFun*,string create_operator_equals_automatically(sType* type, const char* fun_name, sInfo* info)
{
    MSaveState;
    
    sFun* equaler = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            const char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return left.%s === right.%s;\n", name, name);
            source.append_str(source2);
        }
        else {
            char source2[1024];
            
            klass = borrow info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                char source2[1024];
                snprintf(source2, 1024, "if(left.%s !== right.%s) { return false; }\n", name, name, name);
                
                source.append_str(source2);
            }
        }
        
        source.append_str("return true;\n");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        if(info.p == null) {
            info.p = borrow info.source.buf;
        }
        info.p = borrow info.source.buf;
        info.head = borrow source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 0;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType(s"bool");
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        list<sType*%>*% param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
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
        
            sNode*% node = new sFunNode(fun, info) implements sNode;
            
            node_compile(node).elif {
                err_msg(info, "compiling error(X)");
                exit(2);
            }
        
            equaler = borrow fun;
        }
        else {
            equaler = borrow fun2;
        }
        
        info.source = source3;
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
        info.head = head;
        info.sline = sline;
        info.sname = sname;
    }
    
    MRestoreState;
    
    return t(equaler, real_fun_name);
}

