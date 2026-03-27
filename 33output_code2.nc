#include "common.h"

static bool is_portable_libc_symbol(const char* sym)
{
    return string(sym) === "fopen"
        || string(sym) === "freopen"
        || string(sym) === "fclose"
        || string(sym) === "fread"
        || string(sym) === "fwrite"
        || string(sym) === "fflush"
        || string(sym) === "fprintf"
        || string(sym) === "printf"
        || string(sym) === "snprintf"
        || string(sym) === "vsnprintf"
        || string(sym) === "vfprintf"
        || string(sym) === "puts"
        || string(sym) === "fputs"
        || string(sym) === "system"
        || string(sym) === "realpath"
        || string(sym) === "popen"
        || string(sym) === "pclose"
        || string(sym) === "remove"
        || string(sym) === "rename"
        || string(sym) === "unlink"
        || string(sym) === "access"
        || string(sym) === "stat"
        || string(sym) === "lstat"
        || string(sym) === "fstat"
        || string(sym) === "open"
        || string(sym) === "close"
        || string(sym) === "read"
        || string(sym) === "write"
        || string(sym) === "lseek"
        || string(sym) === "mkdir"
        || string(sym) === "rmdir"
        || string(sym) === "opendir"
        || string(sym) === "readdir"
        || string(sym) === "closedir"
        || string(sym) === "getcwd"
        || string(sym) === "chdir";
}

static bool should_strip_portable_asm_alias(const char* source, int* consumed)
{
    if(source == null || consumed == null) {
        return false;
    }
    if(strncmp(source, "__asm", 5) != 0) {
        return false;
    }

    const char* p = source + 5;
    while(*p == ' ' || *p == '\t' || *p == '\r' || *p == '\n') {
        p++;
    }
    if(*p != '(') {
        return false;
    }

    int nest = 1;
    p++;
    while(*p && nest > 0) {
        if(*p == '(') {
            nest++;
        }
        else if(*p == ')') {
            nest--;
        }
        p++;
    }
    if(nest != 0) {
        return false;
    }

    int len = p - source;
    char token[len+1];
    memcpy(token, source, len);
    token[len] = '\0';

    bool has_darwin_suffix = string(token).index("$", -1) >= 0;
    bool has_underscore_alias = string(token).index("\"_", -1) >= 0;
    if(!has_darwin_suffix && !has_underscore_alias) {
        return false;
    }

    *consumed = len;
    return true;
}

static string normalize_portable_c_source(char* source)
{
//    return string(source);
    if(source == null) {
        return string("");
    }
    if(!gPortableC) {
        return string(source);
    }

    buffer*% result = new buffer();

    const char* p = source;
    while(*p) {
        int asm_len = 0;
        if(should_strip_portable_asm_alias(p, &asm_len)) {
            p += asm_len;
            continue;
        }

        if(xisalpha(*p) || *p == '_' || *p == '$') {
            const char* head = p;
            while(xisalnum(*p) || *p == '_' || *p == '$') {
                p++;
            }

            int len = p - head;
            char token[len+1];
            memcpy(token, head, len);
            token[len] = '\0';

            char* out = token;
            int pos = string(token).index("$", -1);
            if(pos >= 0 && token[0] == '_' && token[1] != '_' && token[1] != '\0' && token[pos+1] >= 'A' && token[pos+1] <= 'Z') {
                token[pos] = '\0';
                out = token + 1;
            }
            else if(token[0] == '_' && token[1] != '_' && token[1] != '\0' && is_portable_libc_symbol(token+1)) {
                out = token + 1;
            }

            result.append_str(out);
        }
        else {
            result.append_char(*p);
            p++;
        }
    }

    return result.to_string();
}

static string make_lambda_type_name_string(sType* type, char* var_name, sInfo* info)
{
    var buf = new buffer();
    if(type->mResultType == null) {
        err_msg(info, "invalid lambda type");
        return string("");
    }
    
    if(type->mResultType && type->mResultType.mClass->mName === "lambda") 
    {
        buf.append_str("(*");
        buf.append_str(var_name);
        
        int result_array_num_len = type->mResultType->mArrayNum.length();
        if(result_array_num_len > 0) {
            for(int i=0; i<result_array_num_len; i++) {
                buf.append_str("[");
                sNode*% node = type->mArrayNum[i];
                
                node_compile(node).elif {
                    err_msg(info, "invalid array num");
                    exit(2);
                }
            
                CVALUE*% cvalue = get_value_from_stack(-1, info);
                
                buf.append_str(cvalue.c_value);
                buf.append_str("]");
            }
        }
        buf.append_str(")(");
        
        int param_types_len = type->mParamTypes.length();
        int i = 0;
        foreach(it, type->mParamTypes) {
            buf.append_str(make_come_type_name_string(it));
            if(i != param_types_len-1) {
                buf.append_str(",");
            }
            
            i++;
        }
        
        buf.append_str(")");
        
        if(type->mAttribute) {
            buf.append_str(" " + type->mAttribute);
        }
        
        return make_lambda_type_name_string(type->mResultType, buf.to_string(), info);
    }
    else {
        buf.append_str(make_type_name_string(type->mResultType, no_static:true));
        buf.append_str(" ");
        if(type->mMiddleAttribute != null && type->mMiddleAttribute !== "") {
            buf.append_str(type->mMiddleAttribute);
            buf.append_str(" ");
        }
        string pointer_attr = s"";
        if(type->mPointerAttribute != null && type->mPointerAttribute !== "") {
            pointer_attr = s" " + type->mPointerAttribute + " ";
        }
        if(type->mArrayPointerNum > 0) {
            for(int i=0; i<type->mArrayPointerNum+1; i++) {
                buf.append_str("(");
                buf.append_str("*");
            }
            buf.append_str(pointer_attr);
            buf.append_str(var_name);
            if(type->mArrayPointerType) {
                buf.append_str("[]");
            }
            for(int i=0; i<type->mArrayPointerNum; i++) {
                buf.append_str(")");
            }
        }
        else if(type->mFunctionPointerNum > 1) {
            buf.append_str("(");
            for(int i=0; i<type->mFunctionPointerNum; i++) {
                buf.append_str("*");
            }
            buf.append_str(pointer_attr);
            buf.append_str(var_name);
            if(type->mArrayPointerType) {
                buf.append_str("[]");
            }
        }
        else {
            buf.append_str("(*");
            buf.append_str(pointer_attr);
            buf.append_str(var_name);
            if(type->mArrayPointerType) {
                buf.append_str("[]");
            }
        }
        int array_num_len = type->mArrayNum.length();
        if(array_num_len > 0) {
            for(int i=0; i<array_num_len; i++) {
                buf.append_str("[");
                sNode*% node = type->mArrayNum[i];
                
                node_compile(node).elif {
                    err_msg(info, "invalid array num");
                    exit(2);
                }
            
                CVALUE*% cvalue = get_value_from_stack(-1, info);
                
                buf.append_str(cvalue.c_value);
                buf.append_str("]");
            }
        }
        buf.append_str(")(");
        
        int param_types_len = type->mParamTypes.length();
        int i = 0;
        foreach(it, type->mParamTypes) {
            buf.append_str(make_type_name_string(it, no_static:true));
            if(i != param_types_len-1) {
                buf.append_str(",");
            }
            
            i++;
        }
        
        buf.append_str(")");
        
        if(type->mAttribute) {
            buf.append_str(" " + type->mAttribute);
        }
        
        return buf.to_string();
    }
    
    return buf.to_string();
}

static string header_lambda(sType* lambda_type, string name, sInfo* info);


string output_function(sFun* fun, sInfo* info)
{
    var output = new buffer();
    if(fun->mResultType->mResultType) {
        var output2 = new buffer();
        
        output2.append_str(fun->mName);
        output2.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = borrow fun->mParamNames[i];
            
            var str = make_define_var(it, name, no_static:true);
            output2.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output2.append_str(", ...");
                }
            }
            else {
                output2.append_str(", ");
            }
            
            i++;
        }
        output2.append_str(")");
        
        string str = make_lambda_type_name_string(fun->mResultType, output2.to_string(), info);
        
        if(fun->mAttribute !== "") { // && gComeBareMetal) {
            output.append_str(s"\{fun->mAttribute} ");
        }
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        
        output.append_str(str);
        
        info.module.mSourceHead.append_str(output.to_string());
        // when declaring outputs function attribute
        if(fun->mFunAttribute !== "") { // && gComeBareMetal) {
            info.module.mSourceHead.append_str(s" \{fun->mFunAttribute};\n");
        }
        else {
            info.module.mSourceHead.append_str(";\n");
        }
    }
    else if(fun->mResultType->mArrayNum.length() > 0) {
        sType*% base_result_type = clone fun->mResultType;
        base_result_type.mArrayNum = new list<sNode*%>();
        
        string result_type_str = make_type_name_string(base_result_type, no_static:true);
        
        if(fun->mAttribute !== "") { // && gComeBareMetal) {
            output.append_str(s"\{fun->mAttribute} ");
        }
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        
        output.append_str(result_type_str);
        if(fun->mMiddleAttribute !== "") {
            output.append_str(" ");
            output.append_str(fun->mMiddleAttribute);
        }
        output.append_str(" (*");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = borrow fun->mParamNames[i];
            
            string str = make_define_var(it, name, no_static:true);
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            
            i++;
        }
        
        sNode* node = borrow fun->mResultType->mArrayNum[0];
        
        if(!node_compile(node)) {
            err_msg(info, "invalid array number");
            return string("");
        }
        CVALUE*% cvalue = get_value_from_stack(-1, info);
        
        output.append_str("))[");
        output.append_str(cvalue.c_value);
        output.append_str("]");
        
        info.module.mSourceHead.append_str(output.to_string());
        if(fun->mFunAttribute !== "") {// && gComeBareMetal) {
            info.module.mSourceHead.append_str(s" \{fun->mFunAttribute};\n");
        }
        else {
            info.module.mSourceHead.append_str(";\n");
        }
    }
    else {
        string result_type_str = make_type_name_string(fun->mResultType, no_static:true);
        
        if(fun->mAttribute !== "") {
            output.append_str(s"\{fun->mAttribute} ");
        }
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        
        output.append_str(result_type_str);
        if(fun->mMiddleAttribute !== "") {
            output.append_str(" ");
            output.append_str(fun->mMiddleAttribute);
        }
        output.append_str(" ");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = borrow fun->mParamNames[i];
            
            string str = make_define_var(it, name, no_static:true);
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            i++;
        }
        
        output.append_str(")");
        
        info.module.mSourceHead.append_str(output.to_string());
        if(fun->mFunAttribute !== "") { // && gComeBareMetal) {
            info.module.mSourceHead.append_str(s" \{fun->mFunAttribute};\n");
        }
        else {
            info.module.mSourceHead.append_str(";\n");
        }
    }
    
    output.append_str("\n{\n");
    
    output.append_str(fun->mSourceHead.to_string());
    output.append_str(fun->mSourceHead2.to_string());
    output.append_str(fun->mSource.to_string());
    
    output.append_str("}\n");
    
    return output.to_string();
}

bool is_gcc_builtin_float_type(sType* type, sInfo* info=info)
{
    return type.mClass.mName === "_Float128"
            || type.mClass.mName === "__float128";
}

string header_function(sFun* fun, sInfo* info)
{
    var output = new buffer();
    
    if(fun->mResultType->mResultType) {
        var output2 = new buffer();
        
        output2.append_str(fun->mName);
        output2.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = borrow fun->mParamNames[i];
            
            string str = make_define_var(it, name, no_static:true);
            output2.append_str(str);
            
            if(i != fun->mParamTypes.length()-1) {
                output2.append_str(", ");
            }
            i++;
        }
        output2.append_str(")");
        
        string str = make_lambda_type_name_string(fun->mResultType, output2.to_string(), info);
        
        if(fun->mAttribute !== "") {
            output.append_str(s"\{fun->mAttribute} ");
        }
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        output.append_str(str);
        
        if(fun->mFunAttribute !== "") {// && gComeBareMetal) {
            output.append_str(s" \{fun->mFunAttribute} ");
        }
        
        output.append_str(";\n");
    }
    else if(fun->mResultType->mArrayNum.length() > 0) {
        sType*% base_result_type = clone fun->mResultType;
        base_result_type->mArrayNum = new list<sNode*%>();
        
        string result_type_str = make_type_name_string(base_result_type, no_static:true);
        
        if(fun->mAttribute !== "") {
            output.append_str(s"\{fun->mAttribute} ");
        }
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        
        output.append_str(result_type_str);
        if(fun->mMiddleAttribute !== "") {
            output.append_str(" ");
            output.append_str(fun->mMiddleAttribute);
        }
        output.append_str(" (*");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = borrow fun->mParamNames[i];
            
            string str = make_define_var(it, name, no_static:true);
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            i++;
        }
        
        sNode* node = borrow fun->mResultType->mArrayNum[0];
        if(!node_compile(node)) {
            err_msg(info, "invalid array number");
            return string("");
        }
        CVALUE*% cvalue = get_value_from_stack(-1, info);
        
        output.append_str("))[");
        output.append_str(cvalue.c_value);
        output.append_str("]");
        output.append_str(";\n");
    }
    else {
        if(is_gcc_builtin_float_type(fun->mResultType)) {
            return s"";
        }
        string result_type_str = make_type_name_string(fun->mResultType, no_static:true);
        
        if(fun->mAttribute !== "") {
            output.append_str(s"\{fun->mAttribute} ");
        }
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        
        output.append_str(result_type_str);
        if(fun->mMiddleAttribute !== "") {
            output.append_str(" ");
            output.append_str(fun->mMiddleAttribute);
        }
        output.append_str(" ");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = borrow fun->mParamNames[i];
            
            if(is_gcc_builtin_float_type(it)) {
                return s"";
            }
            
            string str = make_define_var(it, name, no_static:true);
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            i++;
        }
        
        if(fun->mFunAttribute !== "") {// && gComeBareMetal) {
            output.append_str(s") \{fun->mFunAttribute};\n");
        }
        else {
            output.append_str(");\n");
        }
    }
    
    return output.to_string();
}

static string header_lambda(sType* lambda_type, string name, sInfo* info)
{
    var output = new buffer();
    
    string result_type_str = make_type_name_string(lambda_type->mResultType, no_static:true);
    
    output.append_str(result_type_str);
    output.append_str(" ");
    
    output.append_str(name);
    if(lambda_type->mArrayNum.length() > 0) {
        for(int i=0; i<lambda_type->mArrayNum.length(); i++) {
            output.append_str("[");
            sNode*% node = lambda_type->mArrayNum[i];
            
            node_compile(node).elif {
                err_msg(info, "invalid array num");
                exit(2);
            }
        
            CVALUE*% cvalue = get_value_from_stack(-1, info);
            
            output.append_str(cvalue.c_value);
            output.append_str("]");
        }
    }
    output.append_str("(");
    
    int i = 0;
    foreach(it, lambda_type->mParamTypes) {
        char* name = borrow lambda_type->mParamNames[i];
        
        string str = make_define_var(it, name, no_static:true);
        output.append_str(str);
        
        if(i == lambda_type->mParamTypes.length()-1) {
            if(lambda_type->mVarArgs) {
                output.append_str(", ...");
            }
        }
        else {
            output.append_str(", ");
        }
        i++;
    }
    
    if(lambda_type->mAttribute) {
        output.append_str(" " + lambda_type->mAttribute + ");\n");
    }
    else {
        output.append_str(");\n");
    }
    
    return output.to_string();
}

void add_come_code(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    buffer* output = null;
    
    if(info->if_expression_buffer) {
        if(!info.in_conditional) {
            int i;
            for(i=0; i<info->block_level; i++) {
                info.if_expression_buffer.append_str("    ");
            }
        }
        
        output = borrow info.if_expression_buffer;
    }
    else if(info->loop_expression_buffer) {
        if(!info.in_conditional) {
            int i;
            for(i=0; i<info->block_level; i++) {
                info.loop_expression_buffer.append_str("    ");
            }
        }
        
        output = borrow info.loop_expression_buffer;
    }
    else if(info->paren_block_buffer) {
        output = borrow info.paren_block_buffer;
    }
    else if(info->defer_block) {
        if(info->come_fun) {
            output = borrow info.come_fun.mSourceEnd;
        }
    }
    else if(info->come_fun) {
        if(!info.in_conditional) {
            int i;
            for(i=0; i<info->block_level; i++) {
                info.come_fun.mSource.append_str("    ");
            }
        }
        
        output = borrow info.come_fun.mSource;
    }
    else {
        output = borrow info.module.mSourceHead;
    }
    
    if(output == null) {
        return;
    }

    va_list/ args;
    va_start(args, msg);
    if(strchr(msg, '%') == NULL) {
        output.append_str(msg);
        va_end(args);
        return;
    }
    if(strcmp(msg, "%s") == 0) {
        char* msg2 = va_arg(args, char*);
        if(msg2) {
            output.append_str(msg2);
        }
        va_end(args);
        return;
    }
    if(strcmp(msg, "%s\n") == 0) {
        char* msg2 = va_arg(args, char*);
        if(msg2) {
            output.append_str(msg2);
        }
        output.append_str("\n");
        va_end(args);
        return;
    }
    if(strcmp(msg, "%s;\n") == 0) {
        char* msg2 = va_arg(args, char*);
        if(msg2) {
            output.append_str(msg2);
        }
        output.append_str(";\n");
        va_end(args);
        return;
    }
    
    char* msg2;
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    if(len < 0) {
        return;
    }
    
    output.append(msg2, len);
    
    free(msg2);
}

void add_come_code_no_indent(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    buffer* output = null;
    
    if(info->if_expression_buffer) {
        if(!info.in_conditional) {
            info.if_expression_buffer.append_str("    ");
        }
        
        output = borrow info.if_expression_buffer;
    }
    else if(info->loop_expression_buffer) {
        if(!info.in_conditional) {
            int i;
            for(i=0; i<info->block_level; i++) {
                info.loop_expression_buffer.append_str("    ");
            }
        }
        
        output = borrow info.loop_expression_buffer;
    }
    else if(info->paren_block_buffer) {
        output = borrow info.paren_block_buffer;
    }
    else if(info->defer_block) {
        if(info->come_fun) {
            output = borrow info.come_fun.mSourceEnd;
        }
    }
    else if(info->come_fun) {
        if(!info.in_conditional) {
            info.come_fun.mSource.append_str("    ");
        }
        
        output = borrow info.come_fun.mSource;
    }
    else {
        output = borrow info.module.mSourceHead;
    }
    
    if(output == null) {
        return;
    }

    va_list/ args;
    va_start(args, msg);
    if(strchr(msg, '%') == NULL) {
        output.append_str(msg);
        va_end(args);
        return;
    }
    if(strcmp(msg, "%s") == 0) {
        char* msg2 = va_arg(args, char*);
        if(msg2) {
            output.append_str(msg2);
        }
        va_end(args);
        return;
    }
    if(strcmp(msg, "%s\n") == 0) {
        char* msg2 = va_arg(args, char*);
        if(msg2) {
            output.append_str(msg2);
        }
        output.append_str("\n");
        va_end(args);
        return;
    }
    if(strcmp(msg, "%s;\n") == 0) {
        char* msg2 = va_arg(args, char*);
        if(msg2) {
            output.append_str(msg2);
        }
        output.append_str(";\n");
        va_end(args);
        return;
    }
    
    char* msg2;
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    if(len < 0) {
        return;
    }
    
    output.append(msg2, len);
    
    free(msg2);
}

bool is_contained_generics_funcstion(sFun* fun, sInfo* info=info)
{
    foreach(it, fun->mParamTypes) {
        sType* type_;
        if(it->mNoSolvedGenericsType) {
            type_ = borrow it->mNoSolvedGenericsType;
        }
        else {
            type_ = it;
        }
        if(is_contained_generics_class(type_, info)) {
            return true;
        }
    }
    sType*% result_type = clone fun->mResultType;
    
    sType*% result_type2;
    if(result_type->mNoSolvedGenericsType) {
        result_type2 = clone result_type->mNoSolvedGenericsType;
    }
    else {
        result_type2 = clone result_type;
    }
    
    if(is_contained_generics_class(result_type2, info)) {
        return true;
    }
    
    return false;
}

bool output_source_file(sInfo* info)
{
    sFun* main_fun = borrow info->funcs[s"main"];
    bool main_module = false;
    if(main_fun) {
        if(!main_fun->mExternal) {
            main_module = true;
        }
    }
    
    if(gComeUniq) {
        main_module = true;
    }
    
    if(main_module) {   // uniq function is compiled the last
        foreach(it, info.uniq_funcs) {
            sFun* it2 = borrow info.uniq_funcs[string(it)];
            sFun*% new_fun = compile_uniq_function(it2, info);
            
            if(new_fun == null) {
                err_msg(info, "compile %s failed");
                exit(3);
            }
            
            info.funcs.put(string(it), new_fun);
        }
    }
    
    /// go ///
    string output_file_name = xsprintf("%s.c", xnoextname(info.sname));
    
    FILE* f = fopen(output_file_name, "w");
    if(f == null) { die("fopen"); }
    
    fprintf(f, "/// c_include definition ///\n");
    foreach(it, info.c_include_definition) {
        buffer* buf = borrow info.c_include_definition[string(it)];
        fprintf(f, "%s\n", buf.to_string());
    }
    
    fprintf(f, "/// typedef definition ///\n");
    foreach(it, info.typedef_definition) {
        buffer* buf = borrow info.typedef_definition[string(it)];
        fprintf(f, "%s\n", buf.to_string());
    }
    
    fprintf(f, "/// previous struct definition ///\n");
    foreach(it, info.previous_struct_definition) {
        buffer* buf = borrow info.previous_struct_definition[string(it)];
        fprintf(f, "%s\n", buf.to_string());
    }
    
    fprintf(f, "/// struct definition ///\n");
    foreach(it, info.struct_definition) {
        buffer* buf = borrow info.struct_definition[string(it)];
        fprintf(f, "%s\n", buf.to_string());
    }
    
    fprintf(f, "/// variable definition ///\n");
    foreach(it, info.var_definition) {
        buffer* buf = borrow info.var_definition[string(it)];
        fprintf(f, "%s\n", buf.to_string());
    }
    
    fprintf(f, "// source head\n");
    fprintf(f, "%s\n", info.module.mSourceHead.to_string());
    
    fprintf(f, "// header function\n");
    foreach(it, info.funcs) {
        sFun* it2 = borrow info.funcs[string(it)];
        
        bool contained_generics = is_contained_generics_funcstion(it2);

        if(!contained_generics) {
            string header = header_function(it2, info);
            
            if(it2->mInline) {
            }
            else if(it !== "__builtin_va_start" && it !== "__builtin_va_end") {
                fprintf(f, "%s", header);
            }
        }
    }
    
    fprintf(f, "// uniq global variable\n");
    if(main_module) {
        foreach(it, info.uniq_definition) {
            char* str = borrow info.uniq_definition[string(it)];
            fprintf(f, "%s\n", str);
        }
    }
    
    fprintf(f, "// inline function\n");
    foreach(it, info.funcs) {
        sFun* it2 = borrow info.funcs[string(it)];
        bool contained_generics = is_contained_generics_funcstion(it2);

        if(contained_generics) {
        }
        else if(it2->mInline) {
            string output = output_function(it2, info);
            fprintf(f, "%s", output);
        }
    }
    
    fprintf(f, "\n");
    
    fprintf(f, "// body function\n");
    foreach(it, info.funcs) {
        sFun* it2 = borrow info.funcs[string(it)];
        
        bool contained_generics = is_contained_generics_funcstion(it2);

        if(contained_generics) {
        }
        else if(it2->mExternal) {
        }
        else if(!main_module && it2->mUniq) {
        }
        else if(it2->mInline) {
        }
        else {
            string output = output_function(it2, info);
            
            fprintf(f, "%s", output);
            
            fprintf(f, "\n");
        }
    }
    
    fclose(f);

    if(gPortableC) {
        buffer*% portable_source = output_file_name.read();
        string normalized = normalize_portable_c_source(portable_source.to_string());

        FILE* f2 = fopen(output_file_name, "w");
        if(f2 == null) { die("fopen"); }

        fwrite(normalized, 1, normalized.length(), f2);
        fclose(f2);
    }

    return true;
}

void add_come_code_at_function_head(sInfo* info, const char* code, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    if(!info.come_fun) {
        return;
    }

    va_list/ args;
    va_start(args, code);
    info->come_fun->mSourceHead.append_str("    ");
    if(strchr(code, '%') == NULL) {
        info->come_fun->mSourceHead.append_str(code);
        va_end(args);
        return;
    }
    if(strcmp(code, "%s") == 0) {
        char* msg2 = va_arg(args, char*);
        if(msg2) {
            info->come_fun->mSourceHead.append_str(msg2);
        }
        va_end(args);
        return;
    }
    
    char* msg2;
    int len = vasprintf(&msg2, code, args);
    va_end(args);
    if(len < 0) {
        return;
    }
    
    info->come_fun->mSourceHead.append(msg2, len);
    
    free(msg2);
}

void add_come_code_at_function_head2(sInfo* info, const char* code, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    if(!info.come_fun) {
        return;
    }

    va_list/ args;
    va_start(args, code);
    info->come_fun->mSourceHead2.append_str("    ");
    if(strchr(code, '%') == NULL) {
        info->come_fun->mSourceHead2.append_str(code);
        va_end(args);
        return;
    }
    if(strcmp(code, "%s") == 0) {
        char* msg2 = va_arg(args, char*);
        if(msg2) {
            info->come_fun->mSourceHead2.append_str(msg2);
        }
        va_end(args);
        return;
    }
    
    char* msg2;
    int len = vasprintf(&msg2, code, args);
    va_end(args);
    if(len < 0) {
        return;
    }
    
    info->come_fun->mSourceHead2.append(msg2, len);
    
    free(msg2);
}

void add_last_code_to_source(sInfo* info)
{
    if(info->no_output_come_code) {
        return;
    }
    if(info.module.mLastCode) {
       add_come_code(info, "%s;\n", info.module.mLastCode);
       info.module.mLastCode = null;
    }
    if(info.module.mLastCode2) {
       add_come_code(info, "%s;\n", info.module.mLastCode2);
       info.module.mLastCode2 = null;
    }
}

void add_come_last_code(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }

    va_list/ args;
    va_start(args, msg);
    if(strchr(msg, '%') == NULL) {
        info.module.mLastCode = string(msg);
        va_end(args);
        return;
    }
    if(strcmp(msg, "%s") == 0) {
        char* msg2 = va_arg(args, char*);
        info.module.mLastCode = msg2 ? string(msg2) : string("");
        va_end(args);
        return;
    }
    
    char* msg2;
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    if(len < 0) {
        return;
    }
    
    info.module.mLastCode = string(msg2);
    free(msg2);
}

void add_come_last_code2(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }

    va_list/ args;
    va_start(args, msg);
    if(strchr(msg, '%') == NULL) {
        info.module.mLastCode2 = string(msg);
        va_end(args);
        return;
    }
    if(strcmp(msg, "%s") == 0) {
        char* msg2 = va_arg(args, char*);
        info.module.mLastCode2 = msg2 ? string(msg2) : string("");
        va_end(args);
        return;
    }
    
    char* msg2;
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    if(len < 0) {
        return;
    }
    
    info.module.mLastCode2 = string(msg2);
    free(msg2);
}

void dec_stack_ptr(int value=1, sInfo* info=info)
{
    info.stack.delete(-value, -1);
}

CVALUE*% get_value_from_stack(int offset, sInfo* info)
{
    info.module.mLastCode = null;
//    info.module.mLastCode2 = null;
    CVALUE*% result = clone info.stack[offset];
    
    if(result == null) {
        err_msg(info, "invalid stack value");
        exit(2);
    }
    
    info.stack.delete(-1, -1);
    
    return result;
}

void transpiler_clear_last_code(sInfo* info)
{
    info.module.mLastCode = null;
    info.module.mLastCode2 = null;
}
