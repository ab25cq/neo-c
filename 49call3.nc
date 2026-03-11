#include "common.h"

class sFunCallNode extends sNodeBase
{
    new(char* fun_name, list<tuple2<string, sNode*%>*%>* params, list<sType*%>*% method_generics_types, buffer*% method_block, int method_block_sline, sInfo* info)
    {
        self.super();
        
        string self.fun_name = string(fun_name);
        list<tuple2<string, sNode*%>*%>*% self.params = clone params;
        list<sType*%>*% self.method_generics_types = method_generics_types;
        buffer*% self.method_block = method_block;
        int self.method_block_sline = method_block_sline;
    }
    
    string kind()
    {
        return string("sFunCallNode");
    }
    
    bool terminated()
    {
        if(self.method_block) {
            return true;
        }
        else {
            return false;
        }
    }
    
    bool compile(sInfo* info)
    {
        string fun_name = self.fun_name;
        list<tuple2<string, sNode*%>*%>* params = borrow self.params;
        buffer* method_block = borrow self.method_block;
        int method_block_sline = self.method_block_sline;
        
        info.caller_sname = string(info->sname);
        info.caller_line = info->sline;
        
        sVar* var_ = get_variable_from_table(info.lv_table, fun_name);
        
        if(var_ == null) {
            var_ = get_variable_from_table(info.gv_table, fun_name);
        }
        
        /// lambda call //
        if(var_) {
            sType* lambda_type = borrow var_->mType;
            
            if(lambda_type->mClass->mName !== "lambda") {
                err_msg(info, "%s is not lambda, can't call", fun_name);
                return true;
            }
            
            sType*% result_type = clone lambda_type->mResultType;
            if(result_type) {
                result_type->mStatic = false;
            }
            
            list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            
            if(lambda_type.mParamTypes.length() != params.length() && !lambda_type.mVarArgs) {
                err_msg(info, "invalid param number(%s). function param number is %d. caller param number is %d", fun_name, lambda_type.mParamTypes.length(), params.length());
                return true;
            }
            
            int i = 0;
            foreach(it, params) {
                var label, node = it;
                
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                sType*% type_ = clone come_value.type;
                sType*% type2_ = solve_generics(type_, info->generics_type, info);
                come_value.type = solve_method_generics(type2_, info);
                
                if(lambda_type.mVarArgs && lambda_type.mParamTypes[i] == null) {
                }
                else {
                    check_assign_type(s"\{fun_name} calling param #\{i}", lambda_type.mParamTypes[i], come_value.type, come_value);
                    
                    if(lambda_type.mParamTypes[i].mHeap && come_value.type.mHeap) {
                        std_move(lambda_type.mParamTypes[i], come_value.type, come_value);
                    }
                }
                
                come_params.push_back(come_value);
                
                i++;
            }
            
            buffer*% buf = new buffer();
            
            buf.append_str(var_->mCValueName);
            buf.append_str("(");
            
            int j = 0;
            foreach(it, come_params) {
                buf.append_str(it.c_value);
                
                if(j != come_params.length()-1) {
                    buf.append_str(",");
                }
                
                j++;
            }
            buf.append_str(")");
            
            CVALUE*% come_value = new CVALUE();
            come_value.c_value = buf.to_string();
            come_value.type = clone result_type;
            if(come_value.type) {
                come_value.type->mStatic = false;
            }
            come_value.var = null;
            
            if(lambda_type->mResultType.mHeap) {
                append_object_to_right_values(come_value, lambda_type->mResultType, info);
            }
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
            
            info.calling_fun = null;
            
            return true;
        }
        sGenericsFun* generics_fun = borrow info.generics_funcs.at(string(fun_name), null);
        bool method_generics = false;
        if(generics_fun) {
            method_generics = generics_fun.mMethodGenericsTypeNames.length() > 0;
        }
        if((self.method_generics_types && self.method_generics_types.length() > 0) || method_generics) {
            if(self.method_generics_types.length() == 0) {
                list<sType*%>*% method_generics_types = new list<sType*%>();
                var name, gfun = make_method_generics_function(fun_name, method_generics_types, info);
                string generics_fun_name = name;
                
                sFun* fun = borrow info.funcs.at(generics_fun_name, null);
                
                if(method_block) {
                    list<CVALUE*%>*% come_params = new list<CVALUE*%>();
                    
                    sFun* fun = borrow info.funcs.at(generics_fun_name, null);
                    
                    bool no_output_come_code = info->no_output_come_code;
                    info->no_output_come_code = true;
                    if(!compile_method_block(method_block, come_params, fun, fun_name, method_block_sline, info, true)) {
                        return false;
                    }
                    info->no_output_come_code = no_output_come_code;
                    CVALUE* method_block_node = borrow come_params[-1];
                    
                    sType*% method_block_lambda_type = clone method_block_node.type;
                    sType*% method_block_result_type = clone info.come_method_block_function_result_type;
                    
                    sType* generics_fun_method_block_lambda_type = borrow generics_fun.mParamTypes[-1];
                    sType* generics_fun_method_block_result_type = borrow generics_fun_method_block_lambda_type.mResultType;
                    
                    if(generics_fun_method_block_result_type.mClass.mMethodGenerics) {
                        int method_generics_num = generics_fun_method_block_result_type.mClass.mMethodGenericsNum;
                        method_generics_types[method_generics_num] = clone method_block_result_type;
                    }
                    int n = 0;
                    foreach(it, generics_fun_method_block_lambda_type.mParamTypes) {
                        if(it.mClass.mMethodGenerics) {
                            int method_generics_num = it.mClass.mMethodGenericsNum;
                            method_generics_types[method_generics_num] = clone method_block_lambda_type.mParamTypes[n];
                        }
                        n++;
                    }
                }
                
                list<CVALUE*%>*% come_params = new list<CVALUE*%>();
                
                int i = 0;
                sType*% result_type = null;
                foreach(it, params) {
                    var label, node = it;
                    
                    node_compile(node).elif {
                        return false;
                    }
                    
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    
                    sType*% type_ = clone come_value.type;
                    sType*% type2_ = solve_generics(type_, info->generics_type, info);
                    sType*% type3_ = solve_method_generics(type2_, info);
                    come_value.type = type3_;
                    
                    come_params.add(come_value);
                }
                
                if(generics_fun.mResultType.mClass.mMethodGenerics) {
                    int method_generics_num = generics_fun.mResultType.mClass.mMethodGenericsNum;
        
                    if(info->function_result_type) {
                        method_generics_types[method_generics_num] = clone info->function_result_type;
                    }
                }
                int n = 0;
                foreach(it, generics_fun.mParamTypes) {
                    if(it.mClass.mMethodGenerics) {
                        int method_generics_num = it.mClass.mMethodGenericsNum;
                        if(n < come_params.length()) {
                            method_generics_types[method_generics_num] = clone come_params[n].type;
                        }
                    }
                    n++;
                }
                
                info.funcs.remove(generics_fun_name);
                
                var name, gfun = make_method_generics_function(fun_name, method_generics_types, info);
                fun_name = name;
            }
            else {
                var name, gfun = make_method_generics_function(fun_name, self.method_generics_types, info);
                fun_name = name;
            }
        }
        
        /// builtin ///
        if(fun_name === "__builtin_types_compatible_p") {
            if(params.length() != 2) {
                err_msg(info, "__builtin_types_compatible_p params error");
                return false;
            }
            
            list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            foreach(it, params) {
                var label, node = it;
                
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
                come_value.type = solve_method_generics(type_, info);
                
                come_params.push_back(come_value);
            }
            
            string type1 = come_params[0].c_value;
            string type2 = come_params[1].c_value;
            
            if(type1 === type2) {
                CVALUE*% come_value = new CVALUE();
                
                come_value.c_value = s"1";
                come_value.type = new sType(s"int");
                come_value.var = null;
                
                add_come_last_code(info, "%s", come_value.c_value);
                
                info.stack.push_back(come_value);
                
                return true;
            }
            else {
                CVALUE*% come_value = new CVALUE();
                
                come_value.c_value = s"0";
                come_value.type = new sType(s"void");
                come_value.var = null;
                
                add_come_last_code(info, "%s", come_value.c_value);
                
                info.stack.push_back(come_value);
                
                return true;
            }
        }
        else if(fun_name === "__builtin_va_arg") {
            list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            
            int i = 0;
            sType*% result_type = null;
            foreach(it, params) {
                var label, node = it;
                
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
                come_value.type = solve_method_generics(type_, info);
                
                come_params.add(come_value);
                
                result_type = come_value.type;
            }
            
            buffer*% buf = new buffer();
            
            buf.append_str(fun_name);
            buf.append_str("(");
            
            int j = 0;
            foreach(it, come_params) {
                buf.append_str(it.c_value);
                
                if(j != come_params.length()-1) {
                    buf.append_str(",");
                }
                
                j++;
            }
            buf.append_str(")");
            
            CVALUE*% come_value = new CVALUE();
            come_value.c_value = buf.to_string();
            come_value.type = result_type;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
            
            return true;
        }
        else if(fun_name === "__builtin_va_copy") {
            list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            
            int i = 0;
            foreach(it, params) {
                var label, node = it;
                
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                sType*% type_ solve_generics(come_value.type, info->generics_type, info);
                come_value.type = solve_method_generics(type_, info);
                
                come_params.add(come_value);
            }
            
            buffer*% buf = new buffer();
            
            buf.append_str(fun_name);
            buf.append_str("(");
            
            int j = 0;
            foreach(it, come_params) {
                buf.append_str(it.c_value);
                
                if(j != come_params.length()-1) {
                    buf.append_str(",");
                }
                
                j++;
            }
            buf.append_str(")");
            
            sType*% result_type = new sType(s"void");
            
            CVALUE*% come_value = new CVALUE();
            come_value.c_value = buf.to_string();
            come_value.type = result_type;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
            
            return true;
        }
        else if((strlen(fun_name) > strlen("__c11_atomic_") && memcmp(fun_name, "__c11_atomic_", strlen("__c11_atomic")) == 0) || (strlen(fun_name) > strlen("__builtin_") && memcmp(fun_name, "__builtin_", strlen("__builtin")) == 0))
        {
            list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            
            int i = 0;
            sType*% result_type = null;
            foreach(it, params) {
                var label, node = it;
                
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
                come_value.type = solve_method_generics(type_, info);
                
                come_params.add(come_value);
                
                result_type = come_value.type;
            }
            
            buffer*% buf = new buffer();
            
            buf.append_str(fun_name);
            buf.append_str("(");
            
            int j = 0;
            foreach(it, come_params) {
                buf.append_str(it.c_value);
                
                if(j != come_params.length()-1) {
                    buf.append_str(",");
                }
                
                j++;
            }
            buf.append_str(")");
            
            CVALUE*% come_value = new CVALUE();
            come_value.c_value = buf.to_string();
            
            bool atomic_builtin = strlen(fun_name) > strlen("__c11_atomic_")
                && memcmp(fun_name, "__c11_atomic_", strlen("__c11_atomic_")) == 0;
            
            if(atomic_builtin) {
                if(fun_name === "__c11_atomic_thread_fence"
                    || fun_name === "__c11_atomic_signal_fence"
                    || fun_name === "__c11_atomic_store"
                    || fun_name === "__c11_atomic_store_explicit"
                    || fun_name === "__c11_atomic_init")
                {
                    come_value.type = new sType(s"void");
                }
                else if(string(fun_name).index("compare_exchange", -1) >= 0
                    || fun_name === "__c11_atomic_is_lock_free")
                {
                    come_value.type = new sType(s"bool");
                }
                else if(come_params.length() > 0) {
                    sType*% t;
                    bool use_value_param = string(fun_name).index("fetch_", -1) >= 0
                        || (string(fun_name).index("atomic_exchange", -1) >= 0
                            && string(fun_name).index("compare_exchange", -1) < 0);
                    
                    if(use_value_param && come_params.length() > 1) {
                        t = clone come_params[1].type;
                    }
                    else {
                        t = clone come_params[0].type;
                        
                        if(t->mPointerNum > 0) {
                            t->mPointerNum--;
                        }
                        else if(t->mArrayPointerNum > 0) {
                            t->mArrayPointerNum--;
                            if(t->mArrayPointerNum == 0) {
                                t->mArrayPointerType = false;
                            }
                        }
                        else if(t->mArrayPointerType) {
                            t->mArrayPointerType = false;
                        }
                    }
                    
                    t->mAtomic = false;
                    come_value.type = t;
                }
                else {
                    come_value.type = new sType(s"int");
                }
            }
            else {
                come_value.type = new sType(s"int");
            }
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
            
            return true;
        }
        
        else if(fun_name === "string") {
            fun_name = string("__builtin_string");
        }
        else if(fun_name === "wstring") {
            fun_name = string("__builtin_wstring");
        }
        else if(fun_name === "inherit") {
            char* p = borrow info.come_fun.mName;
    
            int version = 0;
            while(*p) {
                if(*p == '_' && *(p+1) == 'v' && xisdigit(*(p+2))) {
                    char* p2 = p + 2;
                    version = 0;
                    while(xisdigit(*p2)) {
                        version = version * 10 + (*p2 - '0');
                        p2++;
                    }
                    break;
                }
                else {
                    p++;
                }
            }
    
            char real_fun_name[2048];
            memcpy(real_fun_name, info.come_fun.mName, p - info.come_fun.mName);
            real_fun_name[p-info.come_fun.mName] = '\0';
            
            int i;
            for(i=version-1; i>=1; i--) {
                string new_fun_name = xsprintf("%s_v%d", real_fun_name, i);
                
                if(info.funcs[new_fun_name]) {
                    fun_name = string(new_fun_name);
                    break;
                }
            }
            
            if(i==0) {
                string new_fun_name = xsprintf("%s", real_fun_name);
                
                if(info.funcs[new_fun_name]) {
                    fun_name = string(new_fun_name);
                }
                
                if(fun_name === info.come_fun.mName) {
                    err_msg(info, "invalid inherit");
                    return true;
                }
            }
        }
        else {
            for(int i=FUN_VERSION_MAX; i>=1; i--) {
                string new_fun_name = xsprintf("%s_v%d", fun_name, i);
            
                if(info.funcs[new_fun_name]) {
                    fun_name = string(new_fun_name);
                    break;
                }
            }
        }
        
        /// normal function call ///
        sFun* fun = borrow info.funcs.at(fun_name, null);
        
        if(fun == null) {
            printf("%s %d: function not found(%s) at function call(1), so no check types and no heap management\n", info.sname, info.sline, fun_name);
            
            list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            
            int i = 0;
            sType*% result_type = null;
            foreach(it, params) {
                var label, node = it;
                
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
                come_value.type = solve_method_generics(type_, info);
                
                come_params.add(come_value);
                
                result_type = come_value.type;
            }
            
            buffer*% buf = new buffer();
            
            buf.append_str(fun_name);
            buf.append_str("(");
            
            int j = 0;
            foreach(it, come_params) {
                buf.append_str(it.c_value);
                
                if(j != come_params.length()-1) {
                    buf.append_str(",");
                }
                
                j++;
            }
            buf.append_str(")");
            
            CVALUE*% come_value = new CVALUE();
            come_value.c_value = buf.to_string();
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
            
            return true;
        }
        
        sType*% result_type = clone fun.mResultType;
        result_type->mStatic = false;
        
        list<sType*%>*% param_types = new list<sType*%>();
        foreach(it, fun.mParamTypes) {
            sType*% it2_ = solve_generics(clone it, info.generics_type, info);
            sType*% it2 = solve_method_generics(it2_, info);
            param_types.push_back(clone it2);
        }
        
        sType*% result_type_ = solve_generics(result_type, info.generics_type, info);
        result_type = solve_method_generics(result_type_, info);
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        for(int i=0; i<fun.mParamTypes.length()-(method_block?2:0); i++) {
            come_params.add(null);
        }
        
        foreach(it, params) {
            var label, node = it;
            
            if(fun.mVarArgs || fun_name === "__builtin_va_start") {
            }
            else if(label) {
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
                come_value.type = solve_method_generics(type_, info);
                
                bool check = false;
                int n = 0;
                foreach(it, fun.mParamNames) {
                    if(label === it) {
                        check = true;
                        break;
                    }
                    
                    n++;
                }
                
                if(!check) {
                    err_msg(info, "invalid label name(%s)", label);
                }
                
                if(param_types[n]) {
                    check_assign_type(s"\{fun_name} param num \{n} is assinged to", param_types[n], come_value.type, come_value);
                }
                if(param_types[n] && param_types[n].mHeap && come_value.type.mHeap) {
                    std_move(param_types[n], come_value.type, come_value);
                }
                
                come_params.replace(n, come_value);
            }
        }
        
        int i = 0;
        foreach(it, params) {
            var label, node = it;
            
            if(fun.mVarArgs || fun_name === "__builtin_va_start") {
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
                come_value.type = solve_method_generics(type_, info);
                
                while(true) {
                    if(come_params[i] == null) {
                        break;
                    }
                    else {
                        i++;
                    }
                }
                
                if(param_types[i]) {
                    check_assign_type(s"\{fun_name} param num \{i} is assinged to", param_types[i], come_value.type, come_value);
                }
                
                come_params.replace(i, come_value);
                i++;
            }
            else if(label) {
            }
            else {
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
                come_value.type = solve_method_generics(type_, info);
                
                while(true) {
                    if(come_params[i] == null) {
                        break;
                    }
                    else {
                        i++;
                    }
                }
                
                if(param_types[i]) {
                    check_assign_type(s"\{fun_name} param num \{i} is assinged to", param_types[i], come_value.type, come_value);
                }
                if(param_types[i] && param_types[i].mHeap && come_value.type.mHeap) {
                    std_move(param_types[i], come_value.type, come_value);
                }
                
                come_params.replace(i, come_value);
                i++;
            }
        }
        
        while(true) {
            if(come_params[i] == null) {
                break;
            }
            else {
                i++;
            }
        }
        
        if(params.length() < fun.mParamTypes.length())
        {
            for(; i<fun.mParamTypes.length()-(method_block?2:0); i++) {
                string default_param = clone fun.mParamDefaultParametors[i];
                char* param_name = borrow fun.mParamNames[i];
                
                if(default_param && default_param !== "" && come_params[i] == null) {
                    buffer*% source = info.source;
                    char* p = info.p.p;
                    char* head = info.head;
                    int sline = info.sline;
                    
                    info.source = default_param.to_buffer();
                    if(info.p == null) {
                        info.p = span borrow info.source;
                    }
                    info.p.memory = borrow info.source.buf;
                    info.p.len = info.source.len+2;
                    info.p.p = borrow info.source.buf;
                    info.head = borrow info.source.buf;
                    
                    bool no_output_come_code = info.no_output_come_code;
                    info.no_output_come_code = true;
                    
                    sNode*% node = expression();
                    
                    node_compile(node).elif {
                        return false;
                    }
                    
                    info.no_output_come_code = no_output_come_code;
                    
                    info.source = source;
    if(info.p == null) {
        info.p = span borrow info.source;
    }
    info.p.memory = borrow info.source.buf;
    info.p.len = info.source.len+2;
    info.p.p = borrow info.source.buf;
    info.p.p = p;
                    info.head = head;
                    info.sline = sline;
            
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    
                    sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
                    come_value.type = solve_method_generics(type_, info);
                    
                    if(param_types[i]) {
                        check_assign_type(s"\{fun_name} param num \{i} is assinged to", param_types[i], come_value.type, come_value);
                    }
                    if(param_types[i] && param_types[i].mHeap && come_value.type.mHeap) {
                        std_move(param_types[i], come_value.type, come_value);
                    }
                    come_params.replace(i, come_value);
                }
                else {
                    if(come_params[i] == null) {
                        err_msg(info, "require parametor(%s)(1) %d", fun.mName,i);
                        return true;
                    }
                }
            }
        }
        
        if(fun.mParamTypes.length() - (method_block?2:0)!= come_params.length() && !fun.mVarArgs && fun_name !== "__builtin_va_start" && fun_name !== "__builtin_va_end") 
        {
            err_msg(info, "invalid param number(%s). function param number is %d. caller param number is %d", fun_name, fun.mParamTypes.length(), params.length());
            return true;
        }
        
        if(method_block) {
            sNode*% current_stack_frame_node = new sCurrentNode(info) implements sNode;
            
            node_compile(current_stack_frame_node).elif {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
            come_value.type = solve_method_generics(type_, info);
            come_params.push_back(come_value);
            
            buffer*% method_block2 = new buffer();
            sType*% method_block_type = clone fun.mParamTypes[-1];
            
            string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
            
            method_block_type.mParamTypes[0].mClass = borrow info.classes[class_name];
            sClass* current_stack_frame_struct = info.current_stack_frame_struct;
            info->current_stack_frame_struct = borrow info.classes[class_name];
            
            info->num_method_block++;
            
            int num_method_block = info->num_method_block;
            
            if(method_block_type.mClass.mName !== "lambda") {
                err_msg(info, "This function does not have method block(%s)", fun_name);
                return true;
            }
            
            sType*% result_type = clone method_block_type->mResultType;
            result_type->mStatic = false;
            sType*% result_type2_ = solve_generics(result_type, info->generics_type, info);
            sType*% result_type2 = solve_method_generics(result_type2_, info);
            list<sType*%>*% param_types = clone method_block_type->mParamTypes;
            list<string>* param_names = borrow method_block_type->mParamNames;
            
            buffer*% all_alhabet_sname = new buffer();
            {
                char* p = borrow info->sname;
                while(*p) {
                    if(xisalnum(*p)) {
                        all_alhabet_sname.append_char(*p++);
                    }
                    else {
                        p++;
                    }
                }
            }
            
            method_block2.append_format("%s fun_block%d_%s(", make_come_type_name_string(result_type2), num_method_block, all_alhabet_sname.to_string());
            
            i = 0;
            foreach(it, param_types) {
                sType*% param_type = dummy_heap it;
                
                if(i == 0) {
                    string param_name = xsprintf("parent");
                    
                    method_block2.append_format("%s", make_come_define_var(param_type, param_name));
                }
                else if(i == 1) {
                    string param_name = xsprintf("it");
                    
                    sType*% param_type2_ = solve_generics(param_type, info->generics_type, info);
                    sType*% param_type2 = solve_method_generics(param_type2_, info);
                    
                    method_block2.append_format("%s", make_come_define_var(param_type2, param_name));
                }
                else {
                    string param_name = xsprintf("it%d", i);
                    
                    sType*% param_type2_ = solve_generics(param_type, info->generics_type, info);
                    sType*% param_type2 = solve_method_generics(param_type2_, info);
                    
                    method_block2.append_format("%s", make_come_define_var(param_type2, param_name));
                }
                
                if(i != param_types.length() - 1) {
                    method_block2.append_str(",");
                }
                
                i++;
            }
            method_block2.append_str(")\n");
            
            method_block2.append_str(method_block.to_string());
            
            buffer*% source3 = info.source;
            char* p = info.p.p;
            char* head = info.head;
            int sline = info.sline;
            
            info.source = method_block2;
            if(info.p == null) {
                info.p = span borrow info.source;
            }
            info.p.memory = borrow info.source.buf;
            info.p.len = info.source.len+2;
            info.p.p = borrow info.source.buf;
            info.head = borrow info.source.buf;
            info.sline = method_block_sline;
           
            sNode*% node = parse_function(info);
            
            node_compile(node).elif {
                return false;
            }
            
            char*% method_block_name = xsprintf("fun_block%d_%s", num_method_block, all_alhabet_sname.to_string());
            
            CVALUE*% come_value2 = new CVALUE();
            
            sFun* fun2 = borrow info.funcs.at(string(method_block_name), null);
            
            if(fun2 == null) {
                err_msg(info, "method block function not found(%s)", method_block_name);
                return true;
            }
            
            sType* method_block_type2 = borrow fun2.mLambdaType;
            
            come_value2.c_value = xsprintf("(void*)%s", method_block_name);
            come_value2.type = clone method_block_type2;
            come_value2.var = null;
            
            come_params.push_back(come_value2);
            
            info.source = source3;
    if(info.p == null) {
        info.p = span borrow info.source;
    }
    info.p.memory = borrow info.source.buf;
    info.p.len = info.source.len+2;
    info.p.p = borrow info.source.buf;
    info.p.p = p;
            info.head = head;
            info.sline = sline;
            
            info->current_stack_frame_struct = current_stack_frame_struct;
        }
        
        buffer*% buf = new buffer();
        
        if(fun_name === "__isoc23_strtoll") {
            fun_name = s"strtoll";
        }
        else if(fun_name === "__isoc23_strtoul") {
            fun_name = s"strtoul";
        }
        else if(fun_name === "__isoc23_strtoull") {
            fun_name = s"strtoull";
        }
        
#ifdef __MAC__
/*
        if(fun.mAsmFun !== s"") {
            buf.append_str(fun.mAsmFun.substring);
        }
        else {
            buf.append_str(fun_name);
        }
*/
        buf.append_str(fun_name);
#else
        buf.append_str(fun_name);
#endif
        buf.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            buf.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                buf.append_str(",");
            }
            
            j++;
        }
        buf.append_str(")");
        
        CVALUE*% come_value = new CVALUE();
        come_value.c_value = buf.to_string();
        come_value.type = clone result_type;
        if(come_value.type) {
            come_value.type->mStatic = false;
        }
        come_value.var = null;
            
        if(fun.mResultType->mHeap) {
            append_object_to_right_values(come_value, result_type, info);
        }
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        info.calling_fun = fun;
        
        return true;
    }
};

sNode*% parse_function_call(char* fun_name, sInfo* info, bool come_=false)
{
    list<sType*%>*% method_generics_types = new list<sType*%>();
    
    if(*info->p.p == '<') {
        info->p.p++;
        skip_spaces_and_lf();
        
        while(true) {
            if(*info->p.p == '\0') {
                err_msg(info, "unexpected source end");
                exit(2);
            }
            else if(*info->p.p == '>') {
                info->p.p++;
                skip_spaces_and_lf();
                break;
            }
            else if(*info->p.p == ',') {
                info->p.p++;
                skip_spaces_and_lf();
            }
            else {
                var type, name, err = parse_type(parse_variable_name:false, parse_multiple_type:false);
                
                if(!err) {
                    err_msg(info, "invalid method generics paramtor type");
                    exit(2);
                }
                
                method_generics_types.push_back(clone type);
            }
        }
    }
    
    expected_next_character('(');
    
    skip_spaces_and_lf();
    
    list<tuple2<string, sNode*%>*%>*% params = new list<tuple2<string, sNode*%>*%>();
    
    bool _va_arg = info->va_arg;
    if(fun_name === "__builtin_va_arg") {
        info->va_arg = true;
    }
    
    while(true) {
        if(*info->p.p == ')') {
            info->p.p++;
            skip_spaces_and_lf();
            break;
        }
        
        char* p = info.p.p;
        int sline = info.sline;
        
        bool err_flag = false;
        string label = string("");
        if(xisalpha(*info->p.p) || *info->p.p == '_') {
            label = parse_word();
            err_flag = true;
        }
        
        if(err_flag == true && *info->p.p == ':') {
            info->p.p++;
            skip_spaces_and_lf();
        }
        else {
            label = null;
            
            info->p.p = p;
            info->sline = sline;
        }
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        
        bool in_fun_param = info.in_fun_param;
        info.in_fun_param = true;
        
        bool type_name_exp = false;
        
        if(fun_name === "__builtin_types_compatible_p") {
            type_name_exp = true;
        }
        
        sNode*% node = expression(type_name_exp:type_name_exp);
        
        node = post_position_operator(node, info);
        
        info.no_comma = no_comma;
        info.in_fun_param = in_fun_param;
        
        params.push_back(t(label, node));
        
        skip_spaces_and_lf();
        
        if(*info->p.p == ',') {
            info->p.p++;
            skip_spaces_and_lf();
        }
        else if(*info->p.p == ')') {
            info->p.p++;
            skip_spaces_and_lf();
            
            break;
        }
    }
    
    info->va_arg = _va_arg;
    
    skip_spaces_and_lf();
    
    buffer*% method_block = null;
    int method_block_sline = 0;
    if(*info->p.p == '{') {
        char* head = info.p.p;
        method_block_sline = info.sline;
        
        skip_block(info);
        
        char* tail = info.p.p;
        
        method_block = new buffer();
        
        int len = tail - head;
        char*% mem = new char[len+1];
        memcpy(mem, head, len);
        mem[len] = '\0';
        
        method_block.append_str(mem);
        method_block.append_str("\n");
    }
    
    skip_spaces_and_lf();
    
    sNode*% node = new sFunCallNode(fun_name, params, method_generics_types, method_block, method_block_sline, info) implements sNode;
        
    node = post_position_operator(node, info);
    
    skip_spaces_and_lf();
    
    return node;
}

sNode*% create_funcall(const char* fun_name, list<tuple2<string, sNode*%>*%>* params, buffer*% method_block, int method_block_sline, list<sType*%>*% method_generics_types, sInfo* info, bool arrow_=false)
{
    sNode*% node = new sFunCallNode((char*)fun_name, params, method_generics_types, method_block, method_block_sline, info) implements sNode;
    return node;
}
