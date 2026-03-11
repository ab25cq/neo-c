#include "common.h"

#if defined(__linux__) || defined(__APPLE__) || defined(__ANDROID__)
#include <poll.h>
#endif

class sLambdaCall extends sNodeBase
{
    new(sNode*% node, list<tuple2<string, sNode*%>*%>* params, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = node;
        list<tuple2<string, sNode*%>*%>*% self.params = clone params;
    }
    
    string kind()
    {
        return string("sLambdaCall");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        list<tuple2<string, sNode*%>*%>* params = borrow self.params;
        
        node_compile(node, info).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType* lambda_type = borrow come_value.type;
        
        if(lambda_type->mResultType == null) {
            printf("no type check lambda type\n");
            list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            int i = 0;
            foreach(it, params) {
                var label, node = it;
                
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                come_params.push_back(come_value);
                
                i++;
            }
            
            buffer*% buf = new buffer();
            
            buf.append_str("(");
            buf.append_str(come_value.c_value);
            buf.append_str(")");
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
            
            CVALUE*% come_value2 = new CVALUE();
            come_value2.c_value = buf.to_string();
            
            come_value2.type = new sType(s"void");
            come_value2.type.mPointerNum = 1;
            if(come_value2.type) {
                come_value2.type->mStatic = false;
            }
            come_value2.var = null;
            
            add_come_last_code(info, "%s", come_value2.c_value);
            
            info.stack.push_back(come_value2);
            return true;
        }
        
        sType*% result_type = clone lambda_type->mResultType;
        result_type->mStatic = false;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(lambda_type.mParamTypes.length() != params.length() && !lambda_type.mVarArgs) {
            err_msg(info, "invalid param number. function param number is %d. caller param number is %d", lambda_type.mParamTypes.length(), params.length());
            return true;
        }
        
        int i = 0;
        foreach(it, params) {
            var label, node = it;
            
            node_compile(node).elif {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            
            sType*% type_ = solve_generics(come_value.type, info->generics_type, info);
            come_value.type = solve_method_generics(type_, info);
            if(lambda_type.mVarArgs && lambda_type.mParamTypes[i] == null) {
            }
            else {
                check_assign_type(s"calling param #\{i}", lambda_type.mParamTypes[i], come_value.type, come_value);
                if(lambda_type.mParamTypes[i].mHeap && come_value.type.mHeap) {
                    std_move(lambda_type.mParamTypes[i], come_value.type, come_value);
                }
            }
            
            come_params.push_back(come_value);
            
            i++;
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str("(");
        buf.append_str(come_value.c_value);
        buf.append_str(")");
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
        
        CVALUE*% come_value2 = new CVALUE();
        come_value2.c_value = buf.to_string();
        
        if(lambda_type->mResultType.mHeap) {
            append_object_to_right_values(come_value2, lambda_type->mResultType, info);
        }
        
        come_value2.type = clone result_type;
        if(come_value2.type) {
            come_value2.type->mStatic = false;
        }
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

sNode*% expression(sInfo* info=info) version 5
{
    return expression_node(info);
}

static sNode*% post_position_operator_of_statment(sNode*% node, sInfo* info)
{
    if(!node->terminated() && parsecmp("or")) {
        info->p.p += strlen("or");
        skip_spaces_and_lf();
        
        node = parse_or_statment(clone node, info);
        
        return node;
    }
    else if(!node->terminated() && parsecmp("and")) {
        info->p.p += strlen("and");
        skip_spaces_and_lf();
        
        node = parse_and_statment(clone node, info);
        
        return node;
    }
    
    return node;
}

sNode*% statment(sInfo* info=info)
{
    sNode*% node = expression(info);
    
    node = post_position_operator_of_statment(node, info);
    
    return node;
}

string get_none_generics_name(char* class_name)
{
    char* p = class_name;
    while(*p) {
        if(*p == '$') {
            return string(class_name).substring(0, p -class_name);
        }
        else {
            p++;
        }
    }
    
    return string(class_name);
}

string create_generics_name(sType* generics_type, sInfo* info)
{
    buffer*% buf = new buffer();
    
    sClass* klass = generics_type->mClass;
    
    string class_name = klass->mName;
    
    buf.append_str(class_name);
    
    if(generics_type->mGenericsTypes.length() > 0) {
        buf.append_char('$');
        buf.append_char(generics_type->mGenericsTypes.length()+'0');
        
        for(int i=0; i<generics_type->mGenericsTypes.length(); i++) {
            sType* type = borrow generics_type->mGenericsTypes[i];
            string type_name = create_generics_name(type, info);
            
            buf.append_str(type_name);

            buf.append_char('$');
            for(int i=0; i<type->mPointerNum; i++) {
                buf.append_char('p');
            }
        
            if(type->mHeap) {
                buf.append_str("h");
            }
        }
    }
    
    return buf.to_string();
}

string create_method_name(sType* obj_type, bool no_pointer_name, const char* fun_name, sInfo* info, bool array_equal_pointer=true)
{
    string struct_name;
    buffer*% buf = new buffer();
    if(obj_type->mOriginalTypeName !== "") {
        struct_name = string(obj_type->mOriginalTypeName);
        if(struct_name === "_Bool" ) {
            struct_name = s"bool";
        }
        if(!obj_type->mClass->mStruct) {
            if(obj_type->mGenericsTypes.length() > 0 && obj_type->mTypedefOriginalType && obj_type->mTypedefOriginalType.mPointerNum > 0) {
                buf.append_str("$");
            }
            if(obj_type->mOriginalTypePointerNum)
            {
                buf.append_str("p");
            }
        }
    }
    else if(obj_type->mClass->mStruct || obj_type->mClass->mProtocol) {
        struct_name = string(obj_type->mClass->mName);
        if(struct_name === "_Bool" ) {
            struct_name = s"bool";
        }
    }
    else {
        struct_name = create_generics_name(obj_type, info);
        if(obj_type->mGenericsTypes.length() > 0 && obj_type->mPointerNum > 0) {
            buf.append_str("$");
        }
        for(int i=0; i<obj_type->mPointerNum; i++)
        {
            buf.append_str("p");
        }
        for(int i=0; i<obj_type->mArrayPointerNum; i++)
        {
            buf.append_str("p");
        }
    }
    
    if(obj_type->mArrayPointerType) {
        buf.append_str("a");
    }
    else if(!array_equal_pointer && obj_type->mArrayNum.length() > 0) {
        buf.append_str("a");
    }
    
    return xsprintf("%s%s_%s", struct_name, buf.to_string(), fun_name);
}

string create_method_name_original_obj_type(sType* obj_type, bool no_pointer_name, const char* fun_name, sInfo* info, bool array_equal_pointer=true)
{
    string struct_name;
    buffer*% buf = new buffer();
    if(obj_type->mClass->mStruct || obj_type->mClass->mProtocol) {
        struct_name = string(obj_type->mClass->mName);
        if(struct_name === "_Bool" ) {
            struct_name = s"bool";
        }
    }
    else {
        struct_name = create_generics_name(obj_type, info);
        if(obj_type->mGenericsTypes.length() > 0 && obj_type->mPointerNum > 0) {
            buf.append_str("$");
        }
        for(int i=0; i<obj_type->mPointerNum; i++)
        {
            buf.append_str("p");
        }
    }
    
    if(obj_type->mArrayPointerType) {
        buf.append_str("a");
    }
    
    if(!array_equal_pointer && obj_type->mArrayNum.length() > 0) {
        buf.append_str("pa");
    }
    
    return xsprintf("%s%s_%s", struct_name, buf.to_string(), fun_name);
}

string create_non_method_name(sType* obj_type, bool no_pointer_name, const char* fun_name, sInfo* info, bool array_equal_pointer=true)
{
    string struct_name;
    buffer*% buf = new buffer();
    if(obj_type->mOriginalTypeName !== "") {
        struct_name = string(obj_type->mOriginalTypeName);
        if(struct_name === "_Bool" ) {
            struct_name = s"bool";
        }
        if(!obj_type->mClass->mStruct) {
            if(obj_type->mTypedefOriginalType) {
                if(obj_type->mGenericsTypes.length() > 0 && obj_type->mTypedefOriginalType.mPointerNum > 0) {
                    buf.append_str("$");
                }
                for(int i=0; i<obj_type->mTypedefOriginalType.mPointerNum; i++)
                {
                    buf.append_str("p");
                }
            }
        }
    }
    else if(obj_type->mClass->mStruct || obj_type->mClass->mProtocol) {
        struct_name = string(obj_type->mClass->mName);
        if(struct_name === "_Bool" ) {
            struct_name = s"bool";
        }
    }
    else {
        struct_name = create_generics_name(obj_type, info);
        if(obj_type->mGenericsTypes.length() > 0 && obj_type->mPointerNum > 0) {
            buf.append_str("$");
        }
        for(int i=0; i<obj_type->mPointerNum; i++)
        {
            buf.append_str("p");
        }
    }
    
    if(obj_type->mArrayPointerType) {
        buf.append_str("a");
    }
    
    if(!array_equal_pointer && obj_type->mArrayNum.length() > 0) {
        buf.append_str("pa");
    }
    
    char none_method_name[fun_name.length()+1];
    
    int len = struct_name.length() + buf.to_string().length();
    memcpy(none_method_name, fun_name + len + 1, fun_name.length() - len -1);
    none_method_name[fun_name.length() - len-1] = '\0';
    
    return string(none_method_name);
}

string create_method_name_using_class(sClass* obj_class, const char* fun_name, sInfo* info)
{
    string struct_name = string(obj_class->mName);
    if(struct_name === "_Bool" ) {
        struct_name = s"bool";
    }
    
    return xsprintf("%s_%s", struct_name, fun_name);
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 1
{
    err_msg(info, "unexpected word(%s)(2)", buf);
    exit(2);
    
    return (sNode*%)null;
}

sNode*% post_position_operator(sNode*% node, sInfo* info)
{
    skip_spaces_and_lf();
    
    if(!node->terminated() && *info->p.p == '(') {
        info->p.p++;
        skip_spaces_and_lf(info);
        
        skip_spaces_and_lf();
        
        list<tuple2<string, sNode*%>*%>*% params = new list<tuple2<string, sNode*%>*%>();
        
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
            
            sNode*% node = expression();
            
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
        
        skip_spaces_and_lf();

        return new sLambdaCall(node, params, info) implements sNode;
    }
    else {
        return (sNode*%)null;
    }
}
