#include "common.h"

void compile_err_msg(sCompileInfo* info, char* msg)
{
    fprintf(stderr, "%s %d: %s\n", info.sname, info.sline, msg);
    
    info.err_num++;

    info.type = create_type("int", info.pinfo.types);
}

sCLNode* alloc_node(sParserInfo* info)
{
    sCLNode* result = borrow new sCLNode;
    
    info.nodes.push_back(dummy_heap result);
    
    return result;
}

sCLNode* sNodeTree_create_int_value(int value, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeInt;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.uValue.mIntValue = value;

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_int_value(sCLNode* node, sCompileInfo* info)
{
    if(!info.no_output) {
        info.codes.append_int(OP_INT_VALUE);
        info.codes.append_int(node.uValue.mIntValue);
    }
    
    info.type = create_type("int", info.pinfo.types);
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_string_value(char* value, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeString;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.mStringValue = string(value);

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_strig_value(sCLNode* node, sCompileInfo* info)
{
    char* str_value = borrow node.mStringValue;
    
    if(!info.no_output) {
        info.codes.append_int(OP_STRING_VALUE);
        info.codes.append_nullterminated_str(str_value);

        info.codes.alignment();
    }
    
    info.type = create_type("string", info.pinfo.types);
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_regex_value(char* value, bool ignore_case, bool global, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeRegex;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.mStringValue = string(value);

    result.uValue.uRegex.mIgnoreCase = ignore_case;
    result.uValue.uRegex.mGlobal = global;

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_regex_value(sCLNode* node, sCompileInfo* info)
{
    char* str_value = borrow node.mStringValue;
    bool ignore_case = node.uValue.uRegex.mIgnoreCase;
    bool global = node.uValue.uRegex.mGlobal;

    if(!info.no_output) {
        info.codes.append_int(OP_REGEX_VALUE);
        info.codes.append_nullterminated_str(str_value);

        info.codes.alignment();
        info.codes.append_int(ignore_case);
        info.codes.append_int(global);
    }
    
    info.type = create_type("regex", info.pinfo.types);
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_list_value(int num_elements, sCLNode** elements, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeList;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    for(int i=0; i<num_elements; i++) {
        result.uValue.uList.mElements[i] = elements[i];
    }
    result.uValue.uList.mNumElements = num_elements;

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_list_value(sCLNode* node, sCompileInfo* info)
{
    sCLNode* elements[LIST_ELEMENT_MAX];
    int num_elements = node.uValue.uList.mNumElements;
    for(int i=0; i<num_elements; i++) {
        elements[i] = node.uValue.uList.mElements[i];
    }

    sCLType* element_type = create_type("void", info.pinfo.types);
    for(int i=0; i<num_elements; i++) {
        if(!compile(elements[i], info)) {
            return false;
        }

        element_type = info.type;
    }

    if(!info.no_output) {
        info.codes.append_int(OP_LIST_VALUE);
        info.codes.append_int(num_elements);
    }
    
    info.type = create_type("list", info.pinfo.types);

    info.type.mNumGenericsTypes = 1;
    info.type.mGenericsTypes[0] = element_type;

    info.stack_num-=num_elements;
    info.stack_num++;
    
    return true;
}

static bool invoke_method(char* method_name, int num_params, sCLNode** params, sCompileInfo* info)
{
    sCLNode* first_node = params[0];

    if(!compile(first_node, info)) {
        return false;
    }
    
    sCLType* generics_types = info.type;

    if(type_identify_with_class_name(info.type, "any", info.pinfo)
        || is_generics_type(info.type))
    {
        sCLClass* klass = info.type.mClass;

        char* klass_name = klass->mName;

        sCLMethod* method = null;
        while(klass) {
            method = klass.mMethods.at(method_name, null);

            if(method) {
                break;
            }

            klass = klass->mParent;
        }

        if(method == null) { 
            for(int i=1; i<num_params; i++) {
                if(!compile(params[i], info)) {
                    return false;
                }
            }

            info->type = create_type("any", info.pinfo.types);
        }
        else {
            /// compile parametors ///
            if(method->mNumParams != num_params) {
                compile_err_msg(info, xsprintf("invalid method prametor number.  invalid %d number instead of %d(%s.%s)", num_params, method->mNumParams, klass.mName, method_name));
                return true;
            }

            for(int i=1; i<num_params; i++) {
                if(!compile(params[i], info)) {
                    return false;
                }
            }

            info->type = method->mResultType;
        }
    }
    else {
        sCLClass* klass = info.type.mClass;

        char* klass_name = klass->mName;

        sCLMethod* method = null;
        while(klass) {
            method = klass.mMethods.at(method_name, null);

            if(method) {
                break;
            }

            klass = klass->mParent;
        }

        if(method == null) { 
            compile_err_msg(info, xsprintf("method not found. (%s.%s)", klass_name, method_name));
            return true;
        }

        /// compile parametors ///
        if(method->mNumParams != num_params) {
            compile_err_msg(info, xsprintf("invalid method prametor number.  invalid %d number instead of %d(%s.%s)", num_params, method->mNumParams, klass.mName, method_name));
            return true;
        }

        sCLType* param_types[PARAMS_MAX];
        for(int i=1; i<num_params; i++) {
            if(!compile(params[i], info)) {
                return false;
            }

            param_types[i] = info.type;

            sCLType* type = solve_generics(method->mParams[i].mType, generics_types, info.pinfo);

            if(!substitution_posibility(type, param_types[i])) {
                if(!info.in_shell) {
                    compile_err_msg(info, xsprintf("method param error #%d. (%s.%s) 1", i, klass.mName, method_name));
                    show_type(type);
                    show_type(param_types[i]);
                }
                return true;
            }
        }
        info->type = method->mResultType;
    }

    /// go ///
    if(!info.no_output) {
        info.codes.append_int(OP_INVOKE_METHOD);

        info.codes.append_nullterminated_str(method_name);

        info.codes.alignment();

        info.codes.append_int(num_params);

        bool last_method_chain = true;
        info.codes.append_int(last_method_chain);
    }

    info.stack_num -= num_params;

    info.stack_num++;

    return true;
}

sCLNode* sNodeTree_create_plus(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePlus;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_plus(sCLNode* node, sCompileInfo* info)
{
    sCLNode* params[PARAMS_MAX];
    int num_params = 0;

    params[num_params] = node.left;
    num_params++;
    params[num_params] = node.right;
    num_params++;

    if(!invoke_method("plus", num_params, params, info)) {
        return false;
    }
    
    return true;
}

sCLNode* sNodeTree_create_primitive_plus(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePrimitivePlus;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_primitive_plus(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;

    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(!type_identify(left_type, right_type)) {
        compile_err_msg(info, "The different type between left type and rigt type at + operator");
        puts("left type -->");
        show_type(left_type);
        puts("right type -->");
        show_type(right_type);
        
        return true;
    }
    

    if(type_identify_with_class_name(left_type, "int", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_IADD);
        }
        
        info.type = create_type("int", info.pinfo.types);
    }
    else {
        compile_err_msg(info, "This type is invalid for operator + ");
        show_type(left_type);
        
        return true;
    }
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_minus(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeMinus;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_minus(sCLNode* node, sCompileInfo* info)
{
    sCLNode* params[PARAMS_MAX];
    int num_params = 0;

    params[num_params] = node.left;
    num_params++;
    params[num_params] = node.right;
    num_params++;

    if(!invoke_method("minus", num_params, params, info)) {
        return false;
    }
    
    return true;
}

sCLNode* sNodeTree_create_primitive_minus(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePrimitiveMinus;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_primitive_minus(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;

    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(!type_identify(left_type, right_type)) {
        compile_err_msg(info, "The different type between left type and rigt type at - operator");
        puts("left type -->");
        show_type(left_type);
        puts("right type -->");
        show_type(right_type);
        
        return true;
    }
    

    if(type_identify_with_class_name(left_type, "int", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_ISUB);
        }
        
        info.type = create_type("int", info.pinfo.types);
    }
    else {
        compile_err_msg(info, "This type is invalid for operator - ");
        show_type(left_type);
        
        return true;
    }
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_mult(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeMult;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_mult(sCLNode* node, sCompileInfo* info)
{
    sCLNode* params[PARAMS_MAX];
    int num_params = 0;

    params[num_params] = node.left;
    num_params++;
    params[num_params] = node.right;
    num_params++;

    if(!invoke_method("mult", num_params, params, info)) {
        return false;
    }
    
    return true;
}

sCLNode* sNodeTree_create_primitive_mult(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePrimitiveMult;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_primitive_mult(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;

    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(!type_identify(left_type, right_type)) {
        compile_err_msg(info, "The different type between left type and rigt type at * operator");
        puts("left type -->");
        show_type(left_type);
        puts("right type -->");
        show_type(right_type);
        
        return true;
    }
    

    if(type_identify_with_class_name(left_type, "int", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_IMULT);
        }
        
        info.type = create_type("int", info.pinfo.types);
    }
    else {
        compile_err_msg(info, "This type is invalid for operator * ");
        show_type(left_type);
        
        return true;
    }
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_div(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeDiv;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_div(sCLNode* node, sCompileInfo* info)
{
    sCLNode* params[PARAMS_MAX];
    int num_params = 0;

    params[num_params] = node.left;
    num_params++;
    params[num_params] = node.right;
    num_params++;

    if(!invoke_method("div", num_params, params, info)) {
        return false;
    }
    
    return true;
}

sCLNode* sNodeTree_create_primitive_div(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePrimitiveDiv;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_primitive_div(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;

    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(!type_identify(left_type, right_type)) {
        compile_err_msg(info, "The different type between left type and rigt type at / operator");
        puts("left type -->");
        show_type(left_type);
        puts("right type -->");
        show_type(right_type);
        
        return true;
    }
    

    if(type_identify_with_class_name(left_type, "int", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_IDIV);
        }
        
        info.type = create_type("int", info.pinfo.types);
    }
    else {
        compile_err_msg(info, "This type is invalid for operator / ");
        show_type(left_type);
        
        return true;
    }
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_mod(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeMod;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_mod(sCLNode* node, sCompileInfo* info)
{
    sCLNode* params[PARAMS_MAX];
    int num_params = 0;

    params[num_params] = node.left;
    num_params++;
    params[num_params] = node.right;
    num_params++;

    if(!invoke_method("mod", num_params, params, info)) {
        return false;
    }
    
    return true;
}

sCLNode* sNodeTree_create_primitive_mod(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePrimitiveMod;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_primitive_mod(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;

    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(!type_identify(left_type, right_type)) {
        compile_err_msg(info, "The different type between left type and rigt type at % operator");
        puts("left type -->");
        show_type(left_type);
        puts("right type -->");
        show_type(right_type);
        
        return true;
    }
    

    if(type_identify_with_class_name(left_type, "int", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_IMOD);
        }
        
        info.type = create_type("int", info.pinfo.types);
    }
    else {
        compile_err_msg(info, "This type is invalid for operator % ");
        show_type(left_type);
        
        return true;
    }
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_and_and(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeAndAnd;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_and_and(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;

    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(!type_identify(left_type, right_type)) {
        compile_err_msg(info, "The different type between left type and rigt type at && operator");
        puts("left type -->");
        show_type(left_type);
        puts("right type -->");
        show_type(right_type);
        
        return true;
    }
    

    if(type_identify_with_class_name(left_type, "bool", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_ANDAND);
        }
        
        info.type = create_type("bool", info.pinfo.types);
    }
    else {
        compile_err_msg(info, "This type is invalid for operator && ");
        show_type(left_type);
        
        return true;
    }
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_or_or(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeOrOr;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_or_or(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;

    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(!type_identify(left_type, right_type)) {
        compile_err_msg(info, "The different type between left type and rigt type at || operator");
        puts("left type -->");
        show_type(left_type);
        puts("right type -->");
        show_type(right_type);
        
        return true;
    }

    if(type_identify_with_class_name(left_type, "bool", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_OROR);
        }
        
        info.type = create_type("bool", info.pinfo.types);
    }
    else {
        compile_err_msg(info, "This type is invalid for operator || ");
        show_type(left_type);
        
        return true;
    }
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_store_variable(char* var_name, sCLNode* exp, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeStoreVariable;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.mStringValue = string(var_name);
    
    result.left = exp;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_store_variable(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }

    sCLType* right_value_type = borrow info.type;

    char* var_name = borrow node.mStringValue;
    
    sVar* v = get_variable_from_table(info.pinfo, var_name);

    if(v == null) {
        compile_err_msg(info, xsprintf("The variable named %s is not defined", var_name));
        return true;
    }

    if(v.mType == null) {
        v.mType = right_value_type;
    }
    else {
        if(!substitution_posibility(v.mType, right_value_type)) {
            compile_err_msg(info, "Type error on the asignment a variabe..");
            return true;
        }
    }
    
    if(!info.no_output) {
        info.codes.append_int(OP_STORE_VARIABLE);
        info.codes.append_int(v.mIndex);
    }
    
    return true;
}

sCLNode* sNodeTree_create_load_variable(char* var_name, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeLoadVariable;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.mStringValue = string(var_name);
    
    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_load_variable(sCLNode* node, sCompileInfo* info)
{
    char* var_name = borrow node.mStringValue;
    
    sVar* v = get_variable_from_table(info.pinfo, var_name);

    if(v == null) {
        compile_err_msg(info, xsprintf("The variable named %s is not defined", var_name));
        return true;
    }
    
    if(!info.no_output) {
        info.codes.append_int(OP_LOAD_VARIABLE);
        info.codes.append_int(v.mIndex);
    }
    
    info.stack_num++;

    info.type = v.mType;

    return true;
}

sCLNode* sNodeTree_create_primitive_equal(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePrimitiveEqual;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_primitive_equal(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;
    
    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(type_identify_with_class_name(left_type, "int", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_IEQ);
        }
        
        info.type = create_type("bool", info.pinfo.types);
    }
    else {
        if(!info.no_output) {
            info.codes.append_int(OP_EQ);
        }
        
        info.type = create_type("bool", info.pinfo.types);
    }
    
    info.stack_num -= 2;
    info.stack_num++;

    info->type = create_type("bool", info.pinfo.types);
    
    return true;
}

sCLNode* sNodeTree_create_primitive_not_equal(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePrimitiveNotEqual;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_primitive_not_equal(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;
    
    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(type_identify_with_class_name(left_type, "int", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_INOTEQ);
        }
        
        info.type = create_type("bool", info.pinfo.types);
    }
    else {
        if(!info.no_output) {
            info.codes.append_int(OP_NOTEQ);
        }
        
        info.type = create_type("bool", info.pinfo.types);
    }
    
    info.stack_num -= 2;
    info.stack_num++;

    info->type = create_type("bool", info.pinfo.types);
    
    return true;
}

sCLNode* sNodeTree_create_primitive_greater(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePrimitiveGreater;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_primitive_greater(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;
    
    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(!type_identify(left_type, right_type)) {
        compile_err_msg(info, "The different type between left type and rigt type at + operator");
        puts("left type -->");
        show_type(left_type);
        puts("right type -->");
        show_type(right_type);
        
        return true;
    }
    
    if(type_identify_with_class_name(left_type, "int", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_IGT);
        }
        
        info.type = create_type("bool", info.pinfo.types);
    }
    else {
        compile_err_msg(info, "This type is invalid for operator + ");
        show_type(left_type);
        
        return true;
    }
    
    info.stack_num -= 2;
    info.stack_num++;

    info->type = create_type("bool", info.pinfo.types);
    
    return true;
}

sCLNode* sNodeTree_create_primitive_lesser(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePrimitiveLesser;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_primitive_lesser(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;
    
    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(!type_identify(left_type, right_type)) {
        compile_err_msg(info, "The different type between left type and rigt type at + operator");
        puts("left type -->");
        show_type(left_type);
        puts("right type -->");
        show_type(right_type);
        
        return true;
    }
    
    if(type_identify_with_class_name(left_type, "int", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_ILT);
        }
    }
    else {
        compile_err_msg(info, "This type is invalid for operator + ");
        show_type(left_type);
        
        return true;
    }
    
    info.stack_num -= 2;
    info.stack_num++;

    info->type = create_type("bool", info.pinfo.types);
    
    return true;
}

sCLNode* sNodeTree_create_primitive_lesser_equal(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePrimitiveLesserEqual;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_primitive_lesser_equal(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;
    
    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(!type_identify(left_type, right_type)) {
        compile_err_msg(info, "The different type between left type and rigt type at + operator");
        puts("left type -->");
        show_type(left_type);
        puts("right type -->");
        show_type(right_type);
        
        return true;
    }
    
    if(type_identify_with_class_name(left_type, "int", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_ILE);
        }
        
        info.type = create_type("bool", info.pinfo.types);
    }
    else {
        compile_err_msg(info, "This type is invalid for operator + ");
        show_type(left_type);
        
        return true;
    }
    
    info.stack_num -= 2;
    info.stack_num++;

    info->type = create_type("bool", info.pinfo.types);
    
    return true;
}

sCLNode* sNodeTree_create_primitive_greater_equal(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypePrimitiveGreaterEqual;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_primitive_greater_equal(sCLNode* node, sCompileInfo* info)
{
    if(!compile(node.left, info)) {
        return false;
    }
    
    sCLType* left_type = info.type;
    
    if(!compile(node.right, info)) {
        return false;
    }
    
    sCLType* right_type = info.type;
    
    if(!type_identify(left_type, right_type)) {
        compile_err_msg(info, "The different type between left type and rigt type at + operator");
        puts("left type -->");
        show_type(left_type);
        puts("right type -->");
        show_type(right_type);
        
        return true;
    }
    
    if(type_identify_with_class_name(left_type, "int", info.pinfo)) {
        if(!info.no_output) {
            info.codes.append_int(OP_IGE);
        }
        
        info.type = create_type("bool", info.pinfo.types);
    }
    else {
        compile_err_msg(info, "This type is invalid for operator + ");
        show_type(left_type);
        
        return true;
    }
    
    info.stack_num -= 2;
    info.stack_num++;

    info->type = create_type("bool", info.pinfo.types);
    
    return true;
}

sCLNode* sNodeTree_create_equal(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeEqual;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_equal(sCLNode* node, sCompileInfo* info)
{
    sCLNode* params[PARAMS_MAX];
    int num_params = 0;

    params[num_params] = node.left;
    num_params++;
    params[num_params] = node.right;
    num_params++;

    if(!invoke_method("equal", num_params, params, info)) {
        return false;
    }
    
    return true;
}

sCLNode* sNodeTree_create_not_equal(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeNotEqual;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_not_equal(sCLNode* node, sCompileInfo* info)
{
    sCLNode* params[PARAMS_MAX];
    int num_params = 0;

    params[num_params] = node.left;
    num_params++;
    params[num_params] = node.right;
    num_params++;

    if(!invoke_method("not_equal", num_params, params, info)) {
        return false;
    }
    
    return true;
}

sCLNode* sNodeTree_create_greater(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeGreater;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_greater(sCLNode* node, sCompileInfo* info)
{
    sCLNode* params[PARAMS_MAX];
    int num_params = 0;

    params[num_params] = node.left;
    num_params++;
    params[num_params] = node.right;
    num_params++;

    if(!invoke_method("greater", num_params, params, info)) {
        return false;
    }
    
    return true;
}

sCLNode* sNodeTree_create_lesser(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeLesser;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_lesser(sCLNode* node, sCompileInfo* info)
{
    sCLNode* params[PARAMS_MAX];
    int num_params = 0;

    params[num_params] = node.left;
    num_params++;
    params[num_params] = node.right;
    num_params++;

    if(!invoke_method("lesser", num_params, params, info)) {
        return false;
    }
    
    return true;
}

sCLNode* sNodeTree_create_lesser_equal(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeLesserEqual;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_lesser_equal(sCLNode* node, sCompileInfo* info)
{
    sCLNode* params[PARAMS_MAX];
    int num_params = 0;

    params[num_params] = node.left;
    num_params++;
    params[num_params] = node.right;
    num_params++;

    if(!invoke_method("lesser_equal", num_params, params, info)) {
        return false;
    }
    
    return true;
}

sCLNode* sNodeTree_create_greater_equal(sCLNode* left, sCLNode* right, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeGreaterEqual;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = left;
    result.right = right;
    result.middle = null;

    return result;
}

static bool compile_greater_equal(sCLNode* node, sCompileInfo* info)
{
    sCLNode* params[PARAMS_MAX];
    int num_params = 0;

    params[num_params] = node.left;
    num_params++;
    params[num_params] = node.right;
    num_params++;

    if(!invoke_method("greater_equal", num_params, params, info)) {
        return false;
    }
    
    return true;
}

sCLNode* sNodeTree_create_true_value(sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeTrue;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_true_value(sCLNode* node, sCompileInfo* info)
{
    if(!info.no_output) {
        info.codes.append_int(OP_TRUE_VALUE);
    }

    info.type = create_type("bool", info.pinfo.types);
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_false_value(sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeFalse;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_false_value(sCLNode* node, sCompileInfo* info)
{
    if(!info.no_output) {
        info.codes.append_int(OP_FALSE_VALUE);
    }

    info.type = create_type("bool", info.pinfo.types);
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_null_value(sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeNull;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;
    
    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_null_value(sCLNode* node, sCompileInfo* info)
{
    if(!info.no_output) {
        info.codes.append_int(OP_NULL_VALUE);
    }

    info.type = create_type("void", info.pinfo.types);
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_command_value(char* data, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeCommand;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.mStringValue = string(data);
    
    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_command(sCLNode* node, sCompileInfo* info)
{
    char* str = node.mStringValue;

    if(!info.no_output) {
        info.codes.append_int(OP_COMMAND_VALUE);

        info.codes.append_nullterminated_str(str);

        info.codes.alignment();
    }

    info.type = create_type("command", info.pinfo.types);
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_system_value(sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeSystem;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_system(sCLNode* node, sCompileInfo* info)
{
    if(!info.no_output) {
        info.codes.append_int(OP_SYSTEM_VALUE);
    }

    info.type = create_type("system", info.pinfo.types);
    info.stack_num++;
    
    return true;
}

sCLNode* sNodeTree_create_if_expression(sCLNode* if_expression, sCLNodeBlock* if_node_block, int num_elif, sCLNode** elif_expressions, sCLNodeBlock** elif_blocks, sCLNodeBlock* else_block, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeIf;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.uValue.uIfExpression.mIfExpression = if_expression;
    result.uValue.uIfExpression.mIfNodeBlock = if_node_block;
    result.uValue.uIfExpression.mNumElif = num_elif;
    for(int i=0; i<num_elif; i++) {
        result.uValue.uIfExpression.mElifExpressions[i] = elif_expressions[i];
        result.uValue.uIfExpression.mElifBlocks[i] = elif_blocks[i];
    }
    result.uValue.uIfExpression.mElseBlock = else_block;

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_if_expression(sCLNode* node, sCompileInfo* info)
{
    var if_expression = node.uValue.uIfExpression.mIfExpression;
    var if_node_block = node.uValue.uIfExpression.mIfNodeBlock;
    var num_elif = node.uValue.uIfExpression.mNumElif;
    sCLNode** elif_expressions = (sCLNode**)node.uValue.uIfExpression.mElifExpressions;
    sCLNodeBlock** elif_blocks = (sCLNodeBlock**)node.uValue.uIfExpression.mElifBlocks;
    sCLNodeBlock* else_block = node.uValue.uIfExpression.mElseBlock;

    if(!compile(if_expression, info)) {
        return false;
    }

    if(!type_identify_with_class_name(info.type, "bool", info.pinfo)) {
        if(!info.in_shell) {
            compile_err_msg(info, "The condition expression of if requires bool type");
            show_type(info.type);
        }
        return true;
    }

    int len = 0;
    if(!info.no_output) {
        info.codes.append_int(OP_COND_JUMP);
        info.codes.append_int(2);

        info.codes.append_int(OP_GOTO);
        len = info.codes.len;
        info.codes.append_int(0);
    }

    info.stack_num--;

    bool closed_block = true;
    if(!compile_block(if_node_block, info)) {
        return false;
    }

    if(!if_node_block->closed_block) {
        closed_block = false;
    }

    int end_points[ELIF_MAX+1];
    memset(end_points, 0, sizeof(int)*(ELIF_MAX+1));

    if(!info.no_output) {
        info.codes.append_int(OP_GOTO);
        end_points[0] = info.codes.len;
        info.codes.append_int(0);
    }

    if(num_elif > 0) {
        for(int i=0; i<num_elif; i++) {
            if(!info.no_output) {
                int* p = (int*)(info.codes.buf + len);
                *p = info.codes.len;
            }

            sCLNode* expression = elif_expressions[i];
            sCLNodeBlock* node_block = elif_blocks[i];

            if(!compile(expression, info)) {
                return false;
            }

            if(!type_identify_with_class_name(info.type, "bool", info.pinfo)) {
                if(!info.in_shell) {
                    compile_err_msg(info, "The condition expression of elif requires bool type");
                }
                return true;
            }

            if(!info.no_output) {
                info.codes.append_int(OP_COND_JUMP);
                info.codes.append_int(2);

                info.codes.append_int(OP_GOTO);
                len = info.codes.len;
                info.codes.append_int(0);
            }

            info.stack_num--;

            if(!compile_block(node_block, info)) {
                return false;
            }

            if(!info.no_output) {
                int* p = (int*)(info.codes.buf + len);
                *p = info.codes.len;
            }

            if(!info.no_output) {
                info.codes.append_int(OP_GOTO);
                end_points[1+i] = info.codes.len;
                info.codes.append_int(0);
            }

            if(!node_block->closed_block) {
                closed_block = false;
            }
        }

        if(!info.no_output) {
            int* p = (int*)(info.codes.buf + len);
            *p = info.codes.len;
        }
    }
    else {
        if(!info.no_output) {
            int* p = (int*)(info.codes.buf + len);
            *p = info.codes.len;
        }
    }

    if(else_block) {
        if(!compile_block(else_block, info)) {
            return false;
        }

        if(!else_block->closed_block) {
            closed_block = false;
        }
    }

    for(int i=0; i<num_elif+1; i++) {
        int* p = (int*)(info.codes.buf + end_points[i]);
        *p = info.codes.len;
    }
    if(closed_block) {
        info.type = create_type("void", info.pinfo.types);
    }

    return true;
}

sCLNode* sNodeTree_create_while_expression(sCLNode* expression, sCLNodeBlock* node_block, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeWhile;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.uValue.uWhileExpression.mExpression = expression;
    result.uValue.uWhileExpression.mNodeBlock = node_block;

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_while_expression(sCLNode* node, sCompileInfo* info)
{
    var expression = node.uValue.uWhileExpression.mExpression;
    var node_block = node.uValue.uWhileExpression.mNodeBlock;

    int head_while = info.codes.len;

    if(!compile(expression, info)) {
        return false;
    }

    if(!type_identify_with_class_name(info.type, "bool", info.pinfo)) {
        if(!info.in_shell) {
            compile_err_msg(info, "The condition expression of while requires bool type");
        }
        return true;
    }

    int len = 0;
    if(!info.no_output) {
        info.codes.append_int(OP_COND_JUMP);
        info.codes.append_int(2);

        info.codes.append_int(OP_GOTO);
        len = info.codes.len;
        info.codes.append_int(0);
    }

    info.stack_num--;

    sCLNode* while_node_beore = info->while_node;
    info->while_node = node;

    node.uValue.uWhileExpression.mNumBreakGotoPoints = 0;

    if(!compile_block(node_block, info)) {
        info->while_node = while_node_beore;
        return false;
    }
    info->while_node = while_node_beore;

    if(!info.no_output) {
        info.codes.append_int(OP_GOTO);
        info.codes.append_int(head_while);

        int* p = (int*)(info.codes.buf + len);
        *p = info.codes.len;

        for(int i=0; i<node.uValue.uWhileExpression.mNumBreakGotoPoints; i++) {
            int len = node.uValue.uWhileExpression.mBreakGotoPoints[i];

            int* p = (int*)(info.codes.buf + len);
            *p = info.codes.len;
        }
    }

    if(node_block->closed_block) {
        info.type = create_type("void", info.pinfo.types);
    }

    return true;
}

sCLNode* sNodeTree_create_break(sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeBreak;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_break(sCLNode* node, sCompileInfo* info)
{
    if(info->while_node == null) {
        compile_err_msg(info, "Invalid break. Not in the while loop.");
        return true;
    }

    info.codes.append_int(OP_GOTO);
    int len = info.codes.len;
    info.codes.append_int(0);

    int n = info->while_node.uValue.uWhileExpression.mNumBreakGotoPoints;

    info->while_node.uValue.uWhileExpression.mBreakGotoPoints[n]= len;
    info->while_node.uValue.uWhileExpression.mNumBreakGotoPoints++;

    if(info->while_node.uValue.uWhileExpression.mNumBreakGotoPoints >= BREAK_MAX) {
        fprintf(stderr, "overflow break number.");
        exit(2);
    }

    info->type = create_type("void", info.pinfo.types);

    return true;
}

sCLNode* sNodeTree_create_class(char* source, char* sname, int sline, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeClass;
    
    xstrncpy(result.sname, sname, PATH_MAX);
    result.sline = sline;

    result.mStringValue = string(source);

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_class(sCLNode* node, sCompileInfo* info)
{
    char* sname = node.sname;
    int sline = node.sline;

    char* source = node.mStringValue;

    if(!eval_class(source, info.pinfo.types, sname, sline)) {
        return false;
    }

    info.type = create_type("void", info.pinfo.types);

    return true;
}

sCLNode* sNodeTree_create_lambda(int num_params, sCLParam* params, sCLNodeBlock* node_block, sCLType* block_type, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeLambda;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.uValue.uLambda.mNumParams = num_params;
    for(int i=0; i<num_params; i++) {
        result.uValue.uLambda.mParams[i] = params[i];
    }

    result.uValue.uLambda.mNodeBlock = node_block;
    result.uValue.uLambda.mResultType = block_type;

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_lambda(sCLNode* node, sCompileInfo* info)
{
    char* sname = node.sname;
    int sline = node.sline;

    sCLNodeBlock* node_block = node.uValue.uLambda.mNodeBlock;
    int num_params = node.uValue.uLambda.mNumParams;
    sCLParam* params = node.uValue.uLambda.mParams;
    sCLType* result_type = node.uValue.uLambda.mResultType;

    sCompileInfo cinfo2 = *info;

    xstrncpy(cinfo2.sname, sname, PATH_MAX);
    cinfo2.sline = sline;

    cinfo2.codes = borrow new buffer.initialize();
    cinfo2.type = null;
    cinfo2.no_output = false;
    cinfo2.stack_num = 0;

    if(!compile_block(node_block, &cinfo2)) {
        delete cinfo2.codes;
        return false;
    }

    if(!node_block->closed_block) {
        info->type = cinfo2.type;
        delete cinfo2.codes;
        return true;
    }

    if(cinfo2.err_num > 0) {
        delete cinfo2.codes;
        return false;
    }

    if(!substitution_posibility(result_type, cinfo2.type))
    {
        if(!info.in_shell) {
            compile_err_msg(&cinfo2, "block result error");
        }
        delete cinfo2.codes;
        return true;
    }

    node_block.codes = dummy_heap cinfo2.codes;
    node_block->mResultType = result_type;

    info.type = create_type("lambda", info.pinfo.types);
    if(!type_identify_with_class_name(result_type, "any", info.pinfo)) {
        info.type.mResultType = result_type;
    }
    else {
        info.type.mResultType = cinfo2.type;
    }
    info.type.mNumParams = node_block->mNumParams;
    for(int i=0; i<node_block->mNumParams; i++) 
    {
        info.type.mParams[i] = node_block->mParams[i];
    }
    info.type.mVarNum = node_block->mVarNum;

    if(!info.no_output) {
        info.codes.append_int(OP_CREATE_BLOCK_OBJECT);

        string block_type_name = create_type_name(info.type);

        info.codes.append_nullterminated_str(block_type_name);

        info.codes.alignment();

        info.codes.append_int(node_block->codes.len);
        info.codes.append(node_block->codes.buf, node_block->codes.len);
        info.codes.append_int(node_block->mVarNum);
    }

    info.stack_num++;

    return true;
}

sCLNode* sNodeTree_create_method_block(char* sname, int sline, buffer*% block_text, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeMethodBlock;
    
    xstrncpy(result.sname, sname, PATH_MAX);
    result.sline = sline;

    result.mBufferValue = block_text;

    result.uValue.uLambda.mNumParams = 0;

    result.uValue.uLambda.mNodeBlock = null;
    result.uValue.uLambda.mResultType = null;

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

sCLNode* sNodeTree_create_object(sCLType* type, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeCreateObject;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.mType = type;

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_create_object(sCLNode* node, sCompileInfo* info)
{
    sCLType* type = node.mType;

    if(!info.no_output) {
        info.codes.append_int(OP_CREATE_OBJECT);

        string type_name = create_type_name(type);
        info.codes.append_nullterminated_str(type_name);

        info.codes.alignment();
    }

    info.type = type;
    info.stack_num++;

    return true;
}

sCLNode* sNodeTree_create_method_call(char* name, int num_params, sCLNode** params, bool param_closed, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeMethodCall;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.mStringValue = string(name);

    result.uValue.uMethodCall.mNumParams = num_params;
    for(int i=0; i<num_params; i++) {
        result.uValue.uMethodCall.mParams[i] = params[i];
    }
    result.uValue.uMethodCall.mLastMethodChain = true;
    result.uValue.uMethodCall.mParamClosed = param_closed;

    if(num_params > 0 && (params[0].type == kNodeTypeCommandCall || params[0].type == kNodeTypeMethodCall))
    {
        params[0].uValue.uMethodCall.mLastMethodChain = false;
    }

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

bool compile_method_call(sCLNode* node, sCompileInfo* info)
{
    char* method_name = node.mStringValue;
    int last_method_chain = node.uValue.uMethodCall.mLastMethodChain;
    bool param_closed = node.uValue.uMethodCall.mParamClosed;

    int num_params = node.uValue.uMethodCall.mNumParams;
    sCLNode* params[PARAMS_MAX];
    for(int i=0; i<num_params; i++) {
        params[i] = node.uValue.uMethodCall.mParams[i];
    }

    sCLNode* first_node = params[0];

    if(!compile(first_node, info)) {
        return false;
    }

    sCLType* generics_types = info.type;

    sCLClass* klass = info.type.mClass;

    if(klass == null) {
        compile_err_msg(info, xsprintf("class not found on invoking method(%s)", method_name));
        return true;
    }

    char* klass_name = klass->mName;

    sCLMethod* method = null;
    while(klass) {
        method = klass.mMethods.at(method_name, null);

        if(method) {
            break;
        }

        klass = klass->mParent;
    }

    /// case any or generics, invoke dynamically, type checking on the running time  ///
    if(type_identify_with_class_name(info.type, "any", info.pinfo) || is_generics_type(info.type))
    {
        sCLType* obj_type = info.type;

        for(int i=1; i<num_params; i++) {
            if(params[i].type == kNodeTypeMethodBlock) {
                compile_err_msg(info, xsprintf("can't get method block for any or generics type. because of no determining to invoke method(%s)", method_name));
                return true;
                
            }
            else {
                if(!compile(params[i], info)) {
                    return false;
                }
            }
        }

        if(param_closed) {
            info->type = obj_type;
        }
    }
    /// case command ///
    else if(type_identify_with_class_name(info.type, "command", info.pinfo)) {
        if(method == null) {
            /// invoke dynamically, type checking on the running time  ///
            if(type_identify_with_class_name(info.type, "any", info.pinfo)
                || is_generics_type(info.type) || type_identify_with_class_name(info.type, "command", info.pinfo))
            {
                sCLType* obj_type = info.type;

                for(int i=1; i<num_params; i++) {
                    if(params[i].type == kNodeTypeMethodBlock) {
                        compile_err_msg(info, xsprintf("can't get method block for any or generics type. because of no determining to invoke method(%s)", method_name));
                        return true;
                        
                    }
                    else {
                        if(!compile(params[i], info)) {
                            return false;
                        }
                    }
                }

                if(param_closed) {
                    info->type = obj_type;
                }
            }
            else {
                compile_err_msg(info, xsprintf("method not found. (%s.%s)", klass_name, method_name));
                return true;
            }
        }
        else {
            /// compile parametors ///
            if(method->mNumParams != num_params) {
                compile_err_msg(info, xsprintf("invalid method prametor number.  invalid %d number instead of %d(%s.%s)", num_params, method->mNumParams, klass.mName, method_name));
                return true;
            }

            sCLType* param_types[PARAMS_MAX];
            for(int i=1; i<num_params; i++) {
                if(params[i].type == kNodeTypeMethodBlock) {
                    sCLNode* node = params[i];

                    sCLType* method_param_type = method->mParams[i].mType;

                    node.uValue.uLambda.mNumParams = method_param_type->mNumParams;
                    for(int j=0; j<method_param_type->mNumParams; j++) {
                        node.uValue.uLambda.mParams[j] = method_param_type->mParams[j];
                        node.uValue.uLambda.mParams[j].mType = solve_generics(method_param_type->mParams[j].mType, generics_types, info.pinfo);
                    }

                    node.uValue.uLambda.mResultType = solve_generics(method_param_type->mResultType, generics_types, info.pinfo);

                    char* p_before = info->pinfo->p;
                    int sline_before = info->pinfo->sline;
                    info->pinfo->p = node.mBufferValue.buf;
                    info->pinfo->sline = node.sline;

                    sCLNodeBlock* node_block = null;
                    int max_var_num = info->pinfo.max_var_num;
                    var vtables_before = info->pinfo->vtables;
                    info.pinfo.vtables = borrow new vector<sVarTable*%>.initialize();
                    if(!parse_block(&node_block, method_param_type->mNumParams, node.uValue.uLambda.mParams, info->pinfo))
                    {
                        info->pinfo.max_var_num = max_var_num;
                        info->pinfo->p = p_before;
                        info->pinfo->sline = sline_before;
                        delete info.pinfo.vtables;
                        info.pinfo.vtables = vtables_before;
                        return false;
                    }

                    expected_next_character('}', info->pinfo);

                    delete info.pinfo.vtables;
                    info.pinfo.vtables = vtables_before;
                    info->pinfo.max_var_num = max_var_num;
                    info->pinfo->p = p_before;
                    info->pinfo->sline = sline_before;

                    node.uValue.uLambda.mNodeBlock = node_block;

                    if(!compile(params[i], info)) {
                        return false;
                    }

                    param_types[i] = info.type;

                    sCLType* type = solve_generics(method->mParams[i].mType, generics_types, info.pinfo);

                    if(!substitution_posibility(type, param_types[i])) {
                        if(!info.in_shell) {
                            compile_err_msg(info, xsprintf("method param error #%d. (%s.%s) 2", i, klass.mName, method_name));
                            show_type(type);
                            show_type(param_types[i]);
                        }
                        return true;
                    }
                }
                else {
                    if(!compile(params[i], info)) {
                        return false;
                    }

                    param_types[i] = info.type;

                    sCLType* type = solve_generics(method->mParams[i].mType, generics_types, info.pinfo);

                    if(!substitution_posibility(type, param_types[i])) {
                        if(!info.in_shell) {
                            compile_err_msg(info, xsprintf("method param error #%d. (%s.%s) 3", i, klass.mName, method_name));
                            show_type(type);
                            show_type(param_types[i]);
                        }
                        return true;
                    }
                }
            }

            if(param_closed) {
                info.type = solve_generics(method.mResultType, generics_types, info.pinfo);
            }
        }
    }
    else {
        if(klass == null) {
            compile_err_msg(info, xsprintf("class not found(%s)\n", klass_name));
            return true;
        }
        if(method == null) {
            compile_err_msg(info, xsprintf("method not found(%s.%s)\n", klass.mName, method_name));
            return true;
        }

        /// compile parametors ///
        if(method->mNumParams != num_params) {
            compile_err_msg(info, xsprintf("invalid method prametor number.  invalid %d number instead of %d(%s.%s)", num_params, method->mNumParams, klass.mName, method_name));
            return true;
        }

        sCLType* param_types[PARAMS_MAX];
        for(int i=1; i<num_params; i++) {
            if(params[i].type == kNodeTypeMethodBlock) {
                sCLNode* node = params[i];

                sCLType* method_param_type = method->mParams[i].mType;

                node.uValue.uLambda.mNumParams = method_param_type->mNumParams;
                for(int j=0; j<method_param_type->mNumParams; j++) {
                    node.uValue.uLambda.mParams[j] = method_param_type->mParams[j];
                    node.uValue.uLambda.mParams[j].mType = solve_generics(method_param_type->mParams[j].mType, generics_types, info.pinfo);
                }

                node.uValue.uLambda.mResultType = solve_generics(method_param_type->mResultType, generics_types, info.pinfo);

                char* p_before = info->pinfo->p;
                int sline_before = info->pinfo->sline;
                info->pinfo->p = node.mBufferValue.buf;
                info->pinfo->sline = node.sline;

                sCLNodeBlock* node_block = null;
                int max_var_num = info->pinfo.max_var_num;
                var vtables_before = info->pinfo->vtables;
                info.pinfo.vtables = borrow new vector<sVarTable*%>.initialize();
                if(!parse_block(&node_block, method_param_type->mNumParams, node.uValue.uLambda.mParams, info->pinfo))
                {
                    info->pinfo.max_var_num = max_var_num;
                    info->pinfo->p = p_before;
                    info->pinfo->sline = sline_before;
                    delete info.pinfo.vtables;
                    info.pinfo.vtables = vtables_before;
                    return false;
                }

                expected_next_character('}', info->pinfo);

                delete info.pinfo.vtables;
                info.pinfo.vtables = vtables_before;
                info->pinfo.max_var_num = max_var_num;
                info->pinfo->p = p_before;
                info->pinfo->sline = sline_before;

                node.uValue.uLambda.mNodeBlock = node_block;

                if(!compile(params[i], info)) {
                    return false;
                }

                param_types[i] = info.type;

                sCLType* type = solve_generics(method->mParams[i].mType, generics_types, info.pinfo);

                if(!substitution_posibility(type, param_types[i])) {
                    if(!info.in_shell) {
                        compile_err_msg(info, xsprintf("method param error #%d. (%s.%s) 2", i, klass.mName, method_name));
                        show_type(type);
                        show_type(param_types[i]);
                    }
                    return true;
                }
            }
            else {
                if(!compile(params[i], info)) {
                    return false;
                }

                param_types[i] = info.type;

                sCLType* type = solve_generics(method->mParams[i].mType, generics_types, info.pinfo);

                if(!substitution_posibility(type, param_types[i])) {
                    if(!info.in_shell) {
                        compile_err_msg(info, xsprintf("method param error #%d. (%s.%s) 3", i, klass.mName, method_name));
                        show_type(type);
                        show_type(param_types[i]);
                    }
                    return true;
                }
            }
        }

        if(param_closed) {
            info.type = solve_generics(method.mResultType, generics_types, info.pinfo);
        }
    }

    /// go ///
    if(!info.no_output) {
        info.codes.append_int(OP_INVOKE_METHOD);

        info.codes.append_nullterminated_str(method_name);

        info.codes.alignment();

        info.codes.append_int(num_params);

        info.codes.append_int(last_method_chain);
    }

    info.stack_num -= num_params;

    info.stack_num++;

    return true;
}

sCLNode* sNodeTree_create_block_object_call(int num_params, sCLNode** params, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeBlockObjectCall;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.uValue.uMethodCall.mNumParams = num_params;
    for(int i=0; i<num_params; i++) {
        result.uValue.uMethodCall.mParams[i] = params[i];
    }

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

bool compile_block_object_call(sCLNode* node, sCompileInfo* info)
{
    int num_params = node.uValue.uMethodCall.mNumParams;
    sCLNode* params[PARAMS_MAX];
    for(int i=0; i<num_params; i++) {
        params[i] = node.uValue.uMethodCall.mParams[i];
    }

    if(!compile(params[0], info)) {
        return false;
    }

    if(!type_identify_with_class_name(info.type, "lambda", info.pinfo)) {
        compile_err_msg(info, "Invalid block call. Type error");
        return true;
    }

    sCLType* block_type = info.type;

    if(block_type->mNumParams != num_params-1) {
        compile_err_msg(info, xsprintf("invalid block param parametor number. valid is %d. This is %d", block_type->mNumParams, num_params-1));
        return true;
    }

    /// compile parametors ///
    sCLType* param_types[PARAMS_MAX];
    for(int i=1; i<num_params; i++) {
        if(!compile(params[i], info)) {
            return false;
        }

        param_types[i] = info.type;

        if(!substitution_posibility(block_type.mParams[i-1].mType, param_types[i])) 
        {
            compile_err_msg(info, xsprintf("block param error #%d.", i));
            return true;
        }
    }

    /// go ///
    bool result_existance = !type_identify_with_class_name(block_type->mResultType, "void", info.pinfo);

    if(!info.no_output) {
        info.codes.append_int(OP_INVOKE_BLOCK_OBJECT);

        info.codes.append_int(num_params-1);

        info.codes.append_int(result_existance);
    }

    info.stack_num -= num_params;
    info.stack_num++;

    info.type = block_type->mResultType;

    return true;
}

sCLNode* sNodeTree_create_store_field(sCLNode* obj, char* name, sCLNode* exp, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeStoreField;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.mStringValue = string(name);

    result.left = obj;
    result.right = exp;
    result.middle = null;

    return result;
}

bool compile_store_field(sCLNode* node, sCompileInfo* info)
{
    sCLNode* obj_node = node.left;
    char* name = node.mStringValue;
    sCLNode* exp_node = node.right;

    if(!compile(obj_node, info)) {
        return false;
    }

    sCLType* obj_type = info.type;

    sCLType* generics_types = info.type;

    sCLClass* klass = obj_type.mClass;

    char* klass_name = klass->mName;

    sCLField* field = null; 

    while(klass) {
        field = klass.mFields.at(name, null);

        if(field) {
            break;
        }

        klass = klass->mParent;
    }

    if(klass == null) {
        compile_err_msg(info, xsprintf("There is no field named %s in class %s", name, klass_name));
        return false;
    }

    int sum = 0;
    sCLClass* it = klass->mParent;
    while(it) {
        sum += it->mFields.length();
        it = it->mParent;
    }

    if(field == null) {
        compile_err_msg(info, xsprintf("There is no field named %s in class %s", name, klass_name));
        return false;
    }

    sCLType* field_type = field.mResultType;

    field_type = solve_generics(field_type, generics_types, info.pinfo);

    int field_index = sum + field.mIndex;

    if(!compile(exp_node, info)) {
        return false;
    }

    sCLType* exp_type = info.type;



    if(!substitution_posibility(field_type, exp_type)) {
        compile_err_msg(info, xsprintf("Invalid type storing field %s", name));

        return true;
    }

    if(!info.no_output) {
        info.codes.append_int(OP_STORE_FIELD);
        info.codes.append_int(field_index);
    }
    
    info->stack_num -= 2;
    info->stack_num++;

    info->type = field_type;

    return true;
}

sCLNode* sNodeTree_create_load_field(sCLNode* obj, char* name, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeLoadField;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.mStringValue = string(name);

    result.left = obj;
    result.right = null;
    result.middle = null;

    return result;
}

bool compile_load_field(sCLNode* node, sCompileInfo* info)
{
    sCLNode* obj_node = node.left;
    char* name = node.mStringValue;

    if(!compile(obj_node, info)) {
        return false;
    }

    sCLType* obj_type = info.type;

    sCLType* generics_types = info.type;

    sCLClass* klass = obj_type.mClass;

    char* klass_name = klass->mName;

    sCLField* field = null; 
    while(klass) {
        field = klass.mFields.at(name, null);

        if(field) {
            break;
        }

        klass = klass->mParent;
    }

    if(klass == null) {
        compile_err_msg(info, xsprintf("There is no field named %s in class %s", name, klass_name));
        return false;
    }

    int sum = 0;
    sCLClass* it = klass->mParent;
    while(it) {
        sum += it->mFields.length();
        it = it->mParent;
    }

    if(field == null) {
        compile_err_msg(info, xsprintf("There is no field named %s in class %s", name, klass_name));
        return false;
    }

    sCLType* field_type = field.mResultType;

    sCLType* solved_field_type = solve_generics(field_type, generics_types, info.pinfo);

    int field_index = sum + field.mIndex;

    if(!info.no_output) {
        info.codes.append_int(OP_LOAD_FIELD);
        info.codes.append_int(field_index);
    }
    
    info->type = solved_field_type;

    return true;
}

sCLNode* sNodeTree_create_throw_exception(sCLNode* obj, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeThrow;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = obj;
    result.right = null;
    result.middle = null;

    return result;
}

bool compile_throw_exception(sCLNode* node, sCompileInfo* info)
{
    sCLNode* obj_node = node.left;

    if(!compile(obj_node, info)) {
        return false;
    }

    sCLType* obj_type = info.type;

    if(!info->no_output) {
        info.codes.append_int(OP_THROW);
    }

    info->type = obj_type;

    return true;
}

sCLNode* sNodeTree_create_return(sCLNode* obj, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeReturn;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = obj;
    result.right = null;
    result.middle = null;

    return result;
}

bool compile_return(sCLNode* node, sCompileInfo* info)
{
    sCLNode* obj_node = node.left;

    if(!compile(obj_node, info)) {
        return false;
    }

    sCLType* obj_type = info.type;

    if(!info->no_output) {
        info.codes.append_int(OP_RETURN);
    }

    info->type = create_type("void", info.pinfo.types);

    return true;
}

sCLNode* sNodeTree_create_try(sCLNodeBlock* node_block, sCLNodeBlock* node_block2, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeTry;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.uValue.uTry.mNodeBlock = node_block;
    result.uValue.uTry.mNodeBlock2 = node_block2;

    result.left = null;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_try_expression(sCLNode* node, sCompileInfo* info)
{
    var node_block = node.uValue.uTry.mNodeBlock;
    var node_block2 = node.uValue.uTry.mNodeBlock2;

    char* sname = node.sname;
    int sline = node.sline;

    sCompileInfo cinfo2 = *info;

    xstrncpy(cinfo2.sname, sname, PATH_MAX);
    cinfo2.sline = sline;

    cinfo2.codes = borrow new buffer.initialize();
    cinfo2.type = null;
    cinfo2.no_output = false;
    cinfo2.stack_num = 0;

    if(!compile_block(node_block, &cinfo2)) {
        delete cinfo2.codes;
        return false;
    }

    if(cinfo2.err_num > 0) {
        delete cinfo2.codes;
        return false;
    }

    if(!node_block->closed_block) {
        info->type = cinfo2.type;
        delete cinfo2.codes;
        return true;
    }

    if(!substitution_posibility(create_type("void", info.pinfo.types), cinfo2.type))
    {
        if(!info.in_shell) {
            compile_err_msg(&cinfo2, "block result error");
        }
        delete cinfo2.codes;
        return true;
    }

    node_block.codes = dummy_heap cinfo2.codes;

    cinfo2 = *info;

    xstrncpy(cinfo2.sname, sname, PATH_MAX);
    cinfo2.sline = sline;

    cinfo2.codes = borrow new buffer.initialize();
    cinfo2.type = null;
    cinfo2.no_output = false;
    cinfo2.stack_num = 0;

    if(!compile_block(node_block2, &cinfo2)) {
        delete cinfo2.codes;
        return false;
    }

    if(!node_block2->closed_block) {
        info->type = cinfo2.type;
        delete cinfo2.codes;
        return true;
    }

    if(!substitution_posibility(create_type("void", info.pinfo.types), cinfo2.type))
    {
        if(!info.in_shell) {
            compile_err_msg(&cinfo2, "block result error");
        }
        delete cinfo2.codes;
        return true;
    }

    node_block2.codes = dummy_heap cinfo2.codes;

    if(!info->no_output) {
        info.codes.append_int(OP_TRY);

        info.codes.append_int(node_block->codes.len);

        info.codes.append(node_block->codes.buf, node_block->codes.len);

        info.codes.append_int(node_block->mVarNum);

        info.codes.append_int(node_block2->codes.len);

        info.codes.append(node_block2->codes.buf, node_block2->codes.len);

        info.codes.append_int(node_block2->mVarNum);
    }

    info.type = create_type("void", info.pinfo.types);

    return true;
}

sCLNode* sNodeTree_create_logical_denial(sCLNode* exp, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeLogicalDenial;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = exp;
    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_logical_denial(sCLNode* node, sCompileInfo* info)
{
    sCLNode* left_node = node.left;

    if(!compile(left_node, info)) {
        return false;
    }

    if(!type_identify_with_class_name(info->type, "bool", info.pinfo)
        && !is_generics_type(info->type)
        && !type_identify_with_class_name(info->type, "any", info.pinfo))
    {
        compile_err_msg(info, "Require bool type for logical denial");
        return true;
    }

    if(!info.no_output) {
        info.codes.append_int(OP_LOGICAL_DENIAL);
    }

    info->type = create_type("bool", info.pinfo.types);

    info->stack_num--;
    info->stack_num++

    return true;
}

sCLNode* sNodeTree_create_normal_block(sCLNodeBlock* node_block, sParserInfo* info)
{
    sCLType* block_type = create_type("any", info.types);
    sCLNode* left_node = sNodeTree_create_lambda(0, NULL, node_block, block_type, info);

    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeNormalBlock;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.left = left_node;

    result.right = null;
    result.middle = null;

    return result;
}

static bool compile_normal_block(sCLNode* node, sCompileInfo* info)
{
    sCLNode* left_node = node.left;

    if(!compile(left_node, info)) {
        return false;
    }

    sCLType* block_type = info.type;

    int num_params = 1;

    /// go ///
    bool result_existance = !type_identify_with_class_name(block_type->mResultType, "void", info.pinfo);

    if(!info.no_output) {
        info.codes.append_int(OP_INVOKE_BLOCK_OBJECT);

        info.codes.append_int(num_params-1);

        info.codes.append_int(result_existance);
    }

    info.stack_num -= num_params;
    info.stack_num++;

    info.type = block_type->mResultType;

    return true;
}

sCLNode* sNodeTree_create_macro(char* name, char* block_text, sParserInfo* info)
{
    sCLNode* result = alloc_node(info);
    
    result.type = kNodeTypeMacro;
    
    xstrncpy(result.sname, info.sname, PATH_MAX);
    result.sline = info.sline;

    result.mStringValue = string(name);
    result.mStringValue2 = string(block_text);

    result.left = null;
    result.right = null;
    result.middle = null;

    append_macro(name, block_text);

    return result;
}

static bool compile_macro(sCLNode* node, sCompileInfo* info)
{
    return true;
}

bool compile(sCLNode* node, sCompileInfo* info) 
{
    if(node == null) {
        return true;
    }
    switch(node.type) {
        case kNodeTypeInt:
            if(!compile_int_value(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypePlus:
            if(!compile_plus(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypePrimitivePlus:
            if(!compile_primitive_plus(node, info)) {
                return false;
            }
            break;

        case kNodeTypeMinus:
            if(!compile_minus(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypePrimitiveMinus:
            if(!compile_primitive_minus(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypeMult:
            if(!compile_mult(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypePrimitiveMult:
            if(!compile_primitive_mult(node, info)) {
                return false;
            }
            break;

        case kNodeTypeDiv:
            if(!compile_div(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypePrimitiveDiv:
            if(!compile_primitive_div(node, info)) {
                return false;
            }
            break;

        case kNodeTypeMod:
            if(!compile_mod(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypePrimitiveMod:
            if(!compile_primitive_mod(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypeStoreVariable:
            if(!compile_store_variable(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypeLoadVariable:
            if(!compile_load_variable(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypeEqual:
            if(!compile_equal(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypeNotEqual:
            if(!compile_not_equal(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypeGreater:
            if(!compile_greater(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypeGreaterEqual:
            if(!compile_greater_equal(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypeLesser:
            if(!compile_lesser(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypeLesserEqual:
            if(!compile_lesser_equal(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypePrimitiveEqual:
            if(!compile_primitive_equal(node, info)) {
                return false;
            }
            break;

        case kNodeTypePrimitiveNotEqual:
            if(!compile_primitive_not_equal(node, info)) {
                return false;
            }
            break;

        case kNodeTypePrimitiveLesser:
            if(!compile_primitive_lesser(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypePrimitiveLesserEqual:
            if(!compile_primitive_lesser_equal(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypePrimitiveGreater:
            if(!compile_primitive_greater(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypePrimitiveGreaterEqual:
            if(!compile_primitive_greater_equal(node, info)) {
                return false;
            }
            break;

        case kNodeTypeString:
            if(!compile_strig_value(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypeTrue:
            if(!compile_true_value(node, info)) {
                return false;
            }
            break;
            
        case kNodeTypeFalse:
            if(!compile_false_value(node, info)) {
                return false;
            }
            break;

        case kNodeTypeNull:
            if(!compile_null_value(node, info)) {
                return false;
            }
            break;
    
        case kNodeTypeIf:
            if(!compile_if_expression(node, info)) {
                return false;
            }
            break;

        case kNodeTypeWhile:
            if(!compile_while_expression(node, info)) {
                return false;
            }
            break;

        case kNodeTypeLambda:
            if(!compile_lambda(node, info)) {
                return false;
            }
            break;

        case kNodeTypeMethodBlock:
            if(!compile_lambda(node, info)) {
                return false;
            }
            break;

        case kNodeTypeClass:
            if(!compile_class(node, info)) {
                return false;
            }
            break;

        case kNodeTypeCreateObject: {
            if(!compile_create_object(node, info)) {
                return false;
            }
            }
            break;

        case kNodeTypeMethodCall: {
            if(!compile_method_call(node, info)) {
                return false;
            }
            }
            break;

/*
        case kNodeTypeCommandCall: {
            if(!compile_command_call(node, info)) {
                return false;
            }
            }
            break;
*/

        case kNodeTypeBlockObjectCall: {
            if(!compile_block_object_call(node, info)) {
                return false;
            }
            }
            break;

        case kNodeTypeLoadField:
            if(!compile_load_field(node, info)) {
                return false;
            }
            break;

        case kNodeTypeStoreField:
            if(!compile_store_field(node, info)) {
                return false;
            }
            break;

        case kNodeTypeThrow: {
            if(!compile_throw_exception(node, info)) {
                return false;
            }
            }
            break;

        case kNodeTypeBreak: {
            if(!compile_break(node, info)) {
                return false;
            }
            }
            break;
    
        case kNodeTypeTry:
            if(!compile_try_expression(node, info)) {
                return false;
            }
            break;
    
        case kNodeTypeReturn:
            if(!compile_return(node, info)) {
                return false;
            }
            break;
    
        case kNodeTypeAndAnd:
            if(!compile_and_and(node, info)) {
                return false;
            }
            break;
    
        case kNodeTypeOrOr:
            if(!compile_or_or(node, info)) {
                return false;
            }
            break;

        case kNodeTypeLogicalDenial:
            if(!compile_logical_denial(node, info)) {
                return false;
            }
            break;

        case kNodeTypeNormalBlock:
            if(!compile_normal_block(node, info)) {
                return false;
            }
            break;

        case kNodeTypeMacro:
            if(!compile_macro(node, info)) {
                return false;
            }
            break;

        case kNodeTypeCommand:
            if(!compile_command(node, info)) {
                return false;
            }
            break;

        case kNodeTypeSystem:
            if(!compile_system(node, info)) {
                return false;
            }
            break;

        case kNodeTypeRegex:
            if(!compile_regex_value(node, info)) {
                return false;
            }
            break;

        case kNodeTypeList:
            if(!compile_list_value(node, info)) {
                return false;
            }
            break;

        default:
            compile_err_msg(info, xsprintf("unexpected node type. No. %d", node.type));
            return false;
            break;
    }
    
    return true;
}
