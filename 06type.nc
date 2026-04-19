#include "common.h"

#define MATCH_TYPE_KEYWORD(keyword) (len == (sizeof(keyword)-1) && memcmp(buf, keyword, sizeof(keyword)-1) == 0)

bool is_type_name(char* buf, sInfo* info=info)
{
    sClass* klass = null;
    sType* type = null;
    sClass* generics_class = null;
    bool generics_type_name = false;
    bool mgenerics_type_name = false;
    int len = strlen(buf);
    
    if(gComeC) {
        switch(buf[0]) {
            case '_':
                if(MATCH_TYPE_KEYWORD("_Thread_local")
                    || MATCH_TYPE_KEYWORD("__thread")
                    || MATCH_TYPE_KEYWORD("_Complex")
                    || MATCH_TYPE_KEYWORD("__volatile__")
                    || MATCH_TYPE_KEYWORD("__extension__")
                    || MATCH_TYPE_KEYWORD("_Noreturn")
                    || MATCH_TYPE_KEYWORD("__noreturn")
                    || MATCH_TYPE_KEYWORD("_noreturn")
                    || MATCH_TYPE_KEYWORD("__typeof__")
                    || MATCH_TYPE_KEYWORD("_Nullable")
                    || MATCH_TYPE_KEYWORD("_Alignas")
                    || MATCH_TYPE_KEYWORD("_Atomic")
                    || MATCH_TYPE_KEYWORD("__type__"))
                {
                    return true;
                }
                if(info->in_top_level
                    && (MATCH_TYPE_KEYWORD("__inline")
                        || MATCH_TYPE_KEYWORD("__always_inline")
                        || MATCH_TYPE_KEYWORD("__inline__")
                        || MATCH_TYPE_KEYWORD("__forceinline")))
                {
                    return true;
                }
                if(MATCH_TYPE_KEYWORD("__attribute__")) {
                    return *info.p == '(' || (*info.p == '[' && *(info->p+1) == '[');
                }
                if(MATCH_TYPE_KEYWORD("__declspec")) {
                    return *info.p == '(';
                }
                break;

            case 'c':
                if(MATCH_TYPE_KEYWORD("const")) {
                    return true;
                }
                break;

            case 'e':
                if(MATCH_TYPE_KEYWORD("enum") || MATCH_TYPE_KEYWORD("extern")) {
                    return true;
                }
                break;

            case 'i':
                if(info->in_top_level && MATCH_TYPE_KEYWORD("inline")) {
                    return true;
                }
                break;

            case 'r':
                if(MATCH_TYPE_KEYWORD("register") || MATCH_TYPE_KEYWORD("restrict")) {
                    return true;
                }
                break;

            case 's':
                if(MATCH_TYPE_KEYWORD("static")
                    || MATCH_TYPE_KEYWORD("signed")
                    || MATCH_TYPE_KEYWORD("struct"))
                {
                    return true;
                }
                break;

            case 't':
                if(MATCH_TYPE_KEYWORD("typeof")) {
                    return true;
                }
                break;

            case 'u':
                if(MATCH_TYPE_KEYWORD("unsigned") || MATCH_TYPE_KEYWORD("union")) {
                    return true;
                }
                break;

            case 'v':
                if(MATCH_TYPE_KEYWORD("volatile") || MATCH_TYPE_KEYWORD("void")) {
                    return true;
                }
                break;
        }

        klass = borrow info.classes[buf];
        type = borrow info.types[buf];

        return (type && type->mTypedef) 
            || (klass && klass->mNumber) 
            || (klass && klass->mFloat);
    }
    else {
        switch(buf[0]) {
            case '_':
                if(MATCH_TYPE_KEYWORD("_Thread_local")
                    || MATCH_TYPE_KEYWORD("_norecord")
                    || MATCH_TYPE_KEYWORD("__thread")
                    || MATCH_TYPE_KEYWORD("_Complex")
                    || MATCH_TYPE_KEYWORD("__volatile__")
                    || MATCH_TYPE_KEYWORD("__extension__")
                    || MATCH_TYPE_KEYWORD("__typeof__")
                    || MATCH_TYPE_KEYWORD("_Nullable")
                    || MATCH_TYPE_KEYWORD("_Alignas")
                    || MATCH_TYPE_KEYWORD("_Atomic")
                    || MATCH_TYPE_KEYWORD("__type__")
                    || MATCH_TYPE_KEYWORD("_weak"))
                {
                    return true;
                }
                if(info->in_top_level
                    && (MATCH_TYPE_KEYWORD("_Noreturn")
                        || MATCH_TYPE_KEYWORD("__noreturn")
                        || MATCH_TYPE_KEYWORD("_noreturn")
                        || MATCH_TYPE_KEYWORD("__inline")
                        || MATCH_TYPE_KEYWORD("__always_inline")
                        || MATCH_TYPE_KEYWORD("__inline__")
                        || MATCH_TYPE_KEYWORD("__forceinline")))
                {
                    return true;
                }
                if(MATCH_TYPE_KEYWORD("__attribute__")) {
                    return *info.p == '(' || (*info.p == '[' && *(info->p+1) == '[');
                }
                if(MATCH_TYPE_KEYWORD("__declspec")) {
                    return *info.p == '(';
                }
                break;

            case 'c':
                if(MATCH_TYPE_KEYWORD("const")) {
                    return true;
                }
                break;

            case 'e':
                if(MATCH_TYPE_KEYWORD("enum") || MATCH_TYPE_KEYWORD("extern")) {
                    return true;
                }
                break;

            case 'i':
                if(info->in_top_level && MATCH_TYPE_KEYWORD("inline")) {
                    return true;
                }
                break;

            case 'r':
                if(MATCH_TYPE_KEYWORD("register") || MATCH_TYPE_KEYWORD("restrict")) {
                    return true;
                }
                break;

            case 's':
                if(MATCH_TYPE_KEYWORD("static")
                    || MATCH_TYPE_KEYWORD("signed")
                    || MATCH_TYPE_KEYWORD("struct"))
                {
                    return true;
                }
                break;

            case 't':
                if(MATCH_TYPE_KEYWORD("typeof")) {
                    return true;
                }
                if(MATCH_TYPE_KEYWORD("tup")) {
                    return *info.p == ':' || *info.p == '(';
                }
                break;

            case 'u':
                if(MATCH_TYPE_KEYWORD("unsigned")
                    || MATCH_TYPE_KEYWORD("union")
                    || (info.in_top_level && MATCH_TYPE_KEYWORD("uniq")))
                {
                    return true;
                }
                break;

            case 'v':
                if(MATCH_TYPE_KEYWORD("volatile")) {
                    return true;
                }
                break;
        }

        klass = borrow info.classes[buf];
        type = borrow info.types[buf];
        generics_class = borrow info.generics_classes[buf];
        generics_type_name = info.generics_type_names.contained(buf);
        mgenerics_type_name = info.method_generics_type_names.contained(buf);

        return generics_class || generics_type_name || mgenerics_type_name || klass || type;
    }
}

#undef MATCH_TYPE_KEYWORD

bool is_contained_generics_class(sType* type, sInfo* info)
{
    sType* type2;
    if(type->mNoSolvedGenericsType) {
        type2 = borrow type->mNoSolvedGenericsType;
    }
    else {
        type2 = type;
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

bool is_contained_generics_placeholder(sType* type, sInfo* info)
{
    sType* type2;
    if(type->mNoSolvedGenericsType) {
        type2 = borrow type->mNoSolvedGenericsType;
    }
    else {
        type2 = type;
    }

    foreach(it, type2->mGenericsTypes) {
        if(is_contained_generics_placeholder(it, info)) {
            return true;
        }
    }

    if(type2->mClass == null || type2->mClass->mName == null) {
        return false;
    }

    string class_name = string(type2->mClass->mName);
    return class_name.index("__generics_type", -1) >= 0
        || class_name.index("__mgenerics_type", -1) >= 0;
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
        
        if(parsecmp_forward("void")) {
            skip_spaces_and_lf();
            
            if(*info.p == ')') {
                void_param = true;
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    if(void_param) {
        if(parsecmp_forward("void")) {
            skip_spaces_and_lf();
            
            if(*info.p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
        }
    }
    else {
        while(true) {
            if(*info.p == ')') {
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
            
            if(*info.p == '=' && *(info->p+1) != '=' && *(info->p+1) != '>') {
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
            
            if(*info.p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                if(parsecmp_forward("...")) {
                    skip_spaces_and_lf();
                    var_args = true;
                    
                    expected_next_character(')');
                    break;
                }
            }
            else if(*info.p == ')') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
        }
    }
    
    return t(param_types, param_names, param_default_parametors, var_args);
}
bool parse_common_attribute_keyword(buffer* result, sInfo* info=info, bool allow_end=true);

string parse_square_attribute(sInfo* info=info)
{
    skip_spaces_and_lf();
    if(!(*info.p == '[' && *(info->p+1) == '[')) {
        return s"";
    }
    
    info->p += 2;
    skip_spaces_and_lf();
    
    buffer*% result = new buffer();
    
    while(*info.p) {
        if(*info.p == ']' && *(info->p+1) == ']') {
            info->p += 2;
            skip_spaces_and_lf();
            break;
        }
        
        if(!(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_')) {
            info->p++;
            continue;
        }
        
        string ns = s"";
        string keyword = parse_word();
        
        if(*info.p == ':' && *(info->p+1) == ':') {
            ns = keyword;
            info->p += 2;
            skip_spaces_and_lf();
            
            if(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_') {
                keyword = parse_word();
            }
            else {
                break;
            }
        }
        
        char* arg_head = null;
        char* arg_tail = null;
        if(*info.p == '(') {
            arg_head = info.p;
            skip_paren(info);
            arg_tail = info.p;
        }
        
        bool gnu_ns = ns === "gnu" || ns === "__gnu__";
        bool mapped = false;
        
        if(keyword === "maybe_unused" || keyword === "unused") {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_str("__attribute__((unused))");
            mapped = true;
        }
        else if(keyword === "deprecated") {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_str("__attribute__((deprecated");
            if(arg_head && arg_tail && arg_tail > arg_head) {
                result.append(arg_head, arg_tail-arg_head);
            }
            result.append_str("))");
            mapped = true;
        }
        else if(keyword === "nodiscard" || keyword === "warn_unused_result") {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_str("__attribute__((warn_unused_result))");
            mapped = true;
        }
        else if(keyword === "noreturn") {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_str("__attribute__((noreturn))");
            mapped = true;
        }
        else if(keyword === "fallthrough") {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_str("__attribute__((fallthrough))");
            mapped = true;
        }
        else if(keyword === "aligned") {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_str("__attribute__((aligned");
            if(arg_head && arg_tail && arg_tail > arg_head) {
                result.append(arg_head, arg_tail-arg_head);
            }
            result.append_str("))");
            mapped = true;
        }
        else if(keyword === "packed") {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_str("__attribute__((packed))");
            mapped = true;
        }
        else if(keyword === "noinline") {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_str("__attribute__((noinline))");
            mapped = true;
        }
        else if(gnu_ns) {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_str("__attribute__((");
            result.append_str(keyword);
            if(arg_head && arg_tail && arg_tail > arg_head) {
                result.append(arg_head, arg_tail-arg_head);
            }
            result.append_str("))");
            mapped = true;
        }
        
        if(!mapped) {
            // ignore unsupported standard/vendor attributes
        }
        
        skip_spaces_and_lf();
        if(*info.p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }
    }
    
    return result.to_string();
}

string parse_declspec_attribute(sInfo* info=info)
{
    char* p = info.p;
    int sline = info.sline;
    
    if(parsecmp_forward("__declspec")) {
        skip_spaces_and_lf();
    }
    
    if(*info.p != '(') {
        info.p = p;
        info.sline = sline;
        return s"";
    }
    
    info->p++;
    skip_spaces_and_lf();
    
    buffer*% result = new buffer();
    
    while(*info.p && *info.p != ')') {
        if(!(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_')) {
            info->p++;
            continue;
        }
        
        string keyword = parse_word();
        skip_spaces_and_lf();
        
        if(keyword === "align") {
            if(*info.p == '(') {
                char* arg_head = info.p;
                skip_paren(info);
                char* arg_tail = info.p;
                
                if(result.length() > 0) {
                    result.append_str(" ");
                }
                result.append_str("__attribute__((aligned");
                result.append(arg_head, arg_tail-arg_head);
                result.append_str("))");
            }
            else {
                if(result.length() > 0) {
                    result.append_str(" ");
                }
                result.append_str("__attribute__((aligned))");
            }
        }
        else if(keyword === "noinline"
            || keyword === "noreturn"
            || keyword === "used"
            || keyword === "unused")
        {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_format("__attribute__((%s))", keyword);
            
            if(*info.p == '(') {
                skip_paren(info);
            }
        }
        else if(keyword === "deprecated") {
            if(result.length() > 0) {
                result.append_str(" ");
            }
            result.append_str("__attribute__((deprecated");
            
            if(*info.p == '(') {
                char* arg_head = info.p;
                skip_paren(info);
                char* arg_tail = info.p;
                result.append(arg_head, arg_tail-arg_head);
            }
            
            result.append_str("))");
        }
        else {
            if(*info.p == '(') {
                skip_paren(info);
            }
        }
        
        skip_spaces_and_lf();
        
        if(*info.p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }
    }
    
    if(*info.p == ')') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    return result.to_string();
}

string,string parse_attribute(sInfo* info=info)
{
    buffer*% asm_fun_name = new buffer();
    buffer*% attribute = new buffer();
    
    while(true) {
        if(parsecmp_forward("__attribute_pure__")) {
            skip_spaces_and_lf();
        }
        else if(parsecmp_forward("__malloc_like")) {
            skip_spaces_and_lf();
        }
        else if(parsecmp_forward("__result_use_check")) {
            skip_spaces_and_lf();
        }
        else if(parsecmp_forward("__alloc_size2")) {
            skip_spaces_and_lf();
            
            if(*info.p == '(') {
                int nest = 0;
                while(1) {
                    if(*info.p == '(') {
                        info->p++;
                        skip_spaces_and_lf();
                        nest++;
                    }
                    else if(*info.p == ')') {
                        info->p++
                        skip_spaces_and_lf();
                        
                        nest--;
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info.p == '\0') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(parsecmp_forward("__alloc_size")) {
            skip_spaces_and_lf();
            
            if(*info.p == '(') {
                int nest = 0;
                while(1) {
                    if(*info.p == '(') {
                        info->p++;
                        skip_spaces_and_lf();
                        nest++;
                    }
                    else if(*info.p == ')') {
                        info->p++
                        skip_spaces_and_lf();
                        
                        nest--;
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info.p == '\0') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(parsecmp_forward("__nonnull")) {
            skip_spaces_and_lf();
            
            if(*info.p == '(') {
                int nest = 0;
                while(1) {
                    if(*info.p == '(') {
                        info->p++;
                        skip_spaces_and_lf();
                        nest++;
                    }
                    else if(*info.p == ')') {
                        info->p++
                        skip_spaces_and_lf();
                        
                        nest--;
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info.p == '\0') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(parsecmp_forward("_Nonnull")) {
            skip_spaces_and_lf();
            
            if(*info.p == '(') {
                int nest = 0;
                while(1) {
                    if(*info.p == '(') {
                        info->p++;
                        skip_spaces_and_lf();
                        nest++;
                    }
                    else if(*info.p == ')') {
                        info->p++
                        skip_spaces_and_lf();
                        
                        nest--;
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info.p == '\0') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(parsecmp_forward("__alloc_align")) {
            skip_spaces_and_lf();
            
            if(*info.p == '(') {
                int nest = 0;
                while(1) {
                    if(*info.p == '(') {
                        info->p++;
                        skip_spaces_and_lf();
                        nest++;
                    }
                    else if(*info.p == ')') {
                        info->p++
                        skip_spaces_and_lf();
                        
                        nest--;
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info.p == '\0') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(parsecmp_forward("__attribute_malloc__")) {
            skip_spaces_and_lf();
        }
        else if(parsecmp_forward("__attr_dealloc_fclose")) {
            skip_spaces_and_lf();
        }
        else if(parsecmp_forward("__wur")) {
            skip_spaces_and_lf();
        }
        else if(parsecmp_forward("__pure2")) {
            skip_spaces_and_lf();
        }
        else if(parsecmp_forward("__pure")) {
            skip_spaces_and_lf();
        }
        else if(parsecmp_forward("__noreturn")) {
            skip_spaces_and_lf();
        }
        else if(parsecmp("__attribute__")) {
            string attr = parse_struct_attribute();
            if(attr !== "") {
                attribute.append_str(attr);
            }
        }
        else if(parsecmp_forward("__declspec")) {
            string attr = parse_declspec_attribute();
            if(attr !== "") {
                if(attribute.length() > 0) {
                    attribute.append_str(" ");
                }
                attribute.append_str(attr);
            }
        }
        else if(*info.p == '[' && *(info->p+1) == '[') {
            string attr = parse_square_attribute();
            if(attr !== "") {
                if(attribute.length() > 0) {
                    attribute.append_str(" ");
                }
                attribute.append_str(attr);
            }
        }
        else if(parsecmp_forward("__asm__")) {
            skip_spaces_and_lf();
            
            if(parsecmp_forward("__ASMNAME")) {
                skip_spaces_and_lf();
            }

            int len = 0;

            if(*info.p == '(') {
                bool in_dquort = false;
                int brace_num = 0;
                while(*info.p) {
                    if(*info.p == '"') {
                        info->p++;
    
                        in_dquort = !in_dquort;
                    }
                    else if(in_dquort) {
                        asm_fun_name.append_char(*info.p);
                        info->p++;
                    }
                    else if(*info.p == '(') {
                        info->p++;
                        brace_num++;
                    }
                    else if(*info.p == ')') {
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
        else if(parsecmp_forward("__asm")) {
            skip_spaces_and_lf();

            if(*info.p == '(') {
                int brace_num = 0;
                while(*info.p) {
                    if(*info.p == '(') {
                        info->p++;
                        brace_num++;
                    }
                    else if(*info.p == ')') {
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
    if(*info.p == '(') {
        int nest = 0;
        while(1) {
            if(*info.p == '(') {
                info->p++;
                skip_spaces_and_lf();
                nest++;
            }
            else if(*info.p == ')') {
                info->p++
                skip_spaces_and_lf();
                
                nest--;
                if(nest == 0) {
                    break;
                }
            }
            else if(*info.p == '\0') {
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
    char* p = parsecmp_tail(keyword);
    if(p) {
        char* tail_keyword = p;
        while(*p == ' ' || *p == '\t' || *p == '\n' || *p == '\r') {
            p++;
        }
        if(!allow_end && *p != '(') {
            if(*p == ';' || *p == ',' || *p == ')' || *p == ']' || *p == '=' || *p == ':' || *p == '[') {
                return false;
            }
        }
        
        char* head = info.p;
        info->p = tail_keyword;
        
        parse_struct_attribute_skip_paren(info);
        
        char* tail = info.p;
        result.append(head, tail-head);
        
        return true;
    }
    
    return false;
}

bool parse_common_attribute_keyword(buffer* result, sInfo* info=info, bool allow_end=true)
{
    int keyword_len = match_common_attribute_keyword_len(info.p);
    if(keyword_len == 0) {
        return false;
    }
    
    char* p = info.p + keyword_len;
    while(*p == ' ' || *p == '\t' || *p == '\n' || *p == '\r') {
        p++;
    }
    if(!allow_end && *p != '(') {
        if(*p == ';' || *p == ',' || *p == ')' || *p == ']' || *p == '=' || *p == ':' || *p == '[') {
            return false;
        }
    }
    
    char* head = info.p;
    info->p += keyword_len;
    
    parse_struct_attribute_skip_paren(info);
    
    char* tail = info.p;
    result.append(head, tail-head);
    
    return true;
}

string parse_struct_attribute(sInfo* info=info, bool allow_end=true)
{
    skip_spaces_and_lf();
    buffer*% result = new buffer();
    while(1) {
        if(parse_attribute_keyword(result, "__attribute__", allow_end)) {
        }
        else if(parsecmp_forward("__declspec")) {
            string attr = parse_declspec_attribute();
            
            if(attr !== "") {
                if(result.length() > 0) {
                    result.append_str(" ");
                }
                result.append_str(attr);
            }
        }
        else if(*info.p == '[' && *(info->p+1) == '[') {
            string attr = parse_square_attribute();
            
            if(attr !== "") {
                if(result.length() > 0) {
                    result.append_str(" ");
                }
                result.append_str(attr);
            }
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

string merge_tag_attribute(string current, string attribute)
{
    if(attribute === "") {
        return current;
    }
    if(current === "") {
        return attribute;
    }
    return current + " " + attribute;
}

tuple2<sType*%, string>*% parse_variable_name_on_multiple_declare(sType* base_type_name, bool first, sInfo* info)
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
    
        if(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_') {
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
        
        if(*info.p == '(') {
            info->p++;
            skip_spaces_and_lf();
            
            if(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_') {
                string word = parse_word();
                
                if(is_type_name(word)) {
                }
                else if(*info.p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info.p != '(') {
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
        
        if(*info.p == '(') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info.p == '*') {
                info->p++
                skip_spaces_and_lf();
                
                if(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_') {
                    string word = parse_word();
                    
                    if(is_type_name(word)) {
                    }
                    else if(*info.p == '[') {
                        lambda_ = true;
                    }
                    else if(*info.p == ')') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        if(*info.p == '(') {
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
    while(*info.p == '*') {
        info->p++;
        skip_spaces_and_lf();
        
        skip_pointer_attribute();
        
        result_type->mPointerNum++;
    }
    skip_spaces_and_lf();
    
    if(between_brace && *info.p == '(') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    if(lambda_) {
        expected_next_character('(');
        expected_next_character('*');
            
        var_name = parse_word();
        
        sType*% result_type2 = new sType(s"lambda");
        
        if(*info.p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% node = expression();
            
            result_type2.mArrayNum.add(node);
            
            expected_next_character(']');
        }
        
        expected_next_character(')');
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
        result_type2->mResultType = result_type;
        result_type2->mParamTypes = param_types;
        result_type2->mParamNames = param_names;
        result_type2->mVarArgs = var_args;
        
        result_type = result_type2;
    }
    else if(NEO_IS_ASCII_ALNUM(*info.p) || *info.p == '_') {
        var_name = parse_word();
    }
    else {
        static int num_anonymous_var_name = 0;
        num_anonymous_var_name++;
        var_name = xsprintf("anonymous_var_nameYYY%d", num_anonymous_var_name);
    }
    
    if(between_brace && *info.p == ')') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    if(*info.p == ':') {
        info->p++;
        skip_spaces_and_lf();
        
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% node = expression();
        info->no_comma = no_comma;
        
        result_type->mSizeNum = node;
    }
    
    while(*info.p == '[') {
        info->p++;
        skip_spaces_and_lf();
        
        {
            char* p = info.p;
            int sline = info.sline;
        
            if(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_') {
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
        
        if(*info.p == ']') {
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
    
    if(*info.p == '[' && *(info->p+1) == '[') {
        (void)parse_square_attribute();
        return true;
    }

    if(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_') {
        string word = parse_word();
        
        if((word === "__attribute" || word === "__attribute__") && *info.p == '(') {
            int nest = 0;
            while(1) {
                if(*info.p == '(') {
                    info->p++;
                    skip_spaces_and_lf();
                    nest++;
                }
                else if(*info.p == ')') {
                    info->p++
                    skip_spaces_and_lf();
                    
                    nest--;
                    if(nest == 0) {
                        break;
                    }
                }
                else if(*info.p == '\0') {
                    break;
                }
                else {
                    info->p++;
                }
            }
            
            return true;
        }
        else if(word === "__declspec" && *info.p == '(') {
            skip_paren(info);
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
        if(*info.p == '[' && *(info->p+1) == '[') {
            (void)parse_square_attribute();
            continue;
        }
        
        if(!(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_')) {
            break;
        }
        
        char* p = info.p;
        int sline = info.sline;
        
        string word = parse_word();
        
        if((word === "__attribute" || word === "__attribute__") && *info.p == '(') {
            int nest = 0;
            while(1) {
                if(*info.p == '(') {
                    info->p++;
                    skip_spaces_and_lf();
                    nest++;
                }
                else if(*info.p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    nest--;
                    if(nest == 0) {
                        break;
                    }
                }
                else if(*info.p == '\0') {
                    break;
                }
                else {
                    info->p++;
                }
            }
            continue;
        }
        else if(word === "__declspec" && *info.p == '(') {
            skip_paren(info);
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
    int sline = info.sline;
    bool no_output_come_code = info.no_output_come_code;
    info.no_output_come_code = true;
    var type, name, err = parse_type(parse_variable_name:parse_variable_name);
    info.no_output_come_code = no_output_come_code;
    if(!err) {
        info.sline = sline;
    }
    
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
        
        if(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_') {
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
        
        if(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_') {
            string struct_name = parse_word();
        }
        else {
            anonymous_name = true;
        }
        
        parse_attribute();
        
        if(*info.p == '<') {
            int nest = 0;
            while(true) {
                if(*info.p == '<') {
                    info->p++;
                    skip_spaces_and_lf();
                    nest++;
                }
                else if(*info.p == '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    nest--;
                    if(nest == 0) {
                        break;
                    }
                }
                else if(*info.p == '\0') {
                    err_msg(info, "unexpected source end");
                    exit(1);
                }
                else {
                    *info.p++;
                    skip_spaces_and_lf();
                }
            }
        }
        
        parse_attribute();
        
        if(*info.p == '{') {
            skip_block(info);
            
            parse_attribute();
            
            if(*info.p == ';') {
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

sType*% parse_pointer_attribute(sType*% type, sInfo* info=info)
{
    sType*% tmp_ = null;
    while(1) {
        if(*info.p == '*') {
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
        else if(*info.p == '%') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mHeap = true;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mHeap = true;
            }
        }
        else if(*info.p == '@') {
            info->p++;
            while(NEO_IS_ASCII_ALNUM(*info.p) || *info.p == '_') {
                info->p++;
            }
            skip_spaces_and_lf();
        }
        else if(*info.p == '^') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mNoHeap = true;
            
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mNoHeap = false;
            }
        }
        else if(*info.p == ']') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mMinusPointerNum++;
            
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mMinusPointerNum++;
            }
        }
        else if(*info.p == '&') {
            info->p++;
            skip_spaces_and_lf();
          
            // `T&` wraps an addressable view of `T`.
            // Keep one more pointer level and drop ownership on the wrapped side.
            type->mPointerNum = 1;
            type->mHeap = false;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mPointerNum = 1;
                type->mNoSolvedGenericsType.mHeap = false;
            }
            
            sType*% generics_type = new sType(s"ref");
            generics_type->mGenericsTypes.add(clone type);
            
            sType*% type = new sType(s"ref");
            type->mGenericsTypes.add(new sType(s"__generics_type0"));
            type->mPointerNum++;
            type->mHeap = true;
            
            sType*% type2 = solve_generics(type, generics_type, info);
            
            type2->mPointerNum = 1;
            tmp_ = type2;
        }
        else if(*info.p == '?') {
            info->p++;
            skip_spaces_and_lf();
            
            if(tmp_) {
                err_msg(info, "invalid type name");
                return type;
                //type = tmp_;
            }
          
            type->mPointerNum = 1;
            type->mHeap = true;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mPointerNum = 1;
                type->mNoSolvedGenericsType.mHeap = true;
            }
            
            sType*% generics_type = new sType(s"optional");
            generics_type->mGenericsTypes.add(clone type);
            
            sType*% type = new sType(s"optional");
            type->mGenericsTypes.add(new sType(s"__generics_type0"));
            type->mPointerNum++;
            type->mHeap = true;
            
            sType*% type2 = solve_generics(type, generics_type, info);
            
            type2->mPointerNum = 1;
            type2->mHeap = true;
            
            tmp_ = type2;
        }
        else if(memcmp(info->p, "{}", 2) == 0) {
            info->p+=2;
            skip_spaces_and_lf();
            
            if(tmp_) {
                //type = tmp_;
                err_msg(info, "invalid type name");
                return type;
            }
            
            type->mPointerNum = 1;
            type->mHeap = false;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mPointerNum = 1;
                type->mNoSolvedGenericsType.mHeap = false;
            }
            
            sType*% generics_type = new sType(s"span");
            generics_type->mGenericsTypes.add(clone type);
            
            sType*% type = new sType(s"span");
            type->mGenericsTypes.add(new sType(s"__generics_type0"));
            type->mPointerNum++;
            type->mHeap = true;
            
            sType*% type2 = solve_generics(type, generics_type, info);
            
            type2->mPointerNum = 1;
            type2->mHeap = true;
            
            tmp_ = type2;
        }
        else if(*info.p == '/') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mNoCallingDestructor = true;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mNoCallingDestructor = true;
            }
        }
        else if(gComePthread && *info.p == '|') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mChannel = true;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mChannel = true;
            }
        }
        else if(*info.p == '~') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mDefferRightValue = true;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType.mDefferRightValue = true;
            }
        }
        else if(NEO_IS_ASCII_ALPHA(*info.p) || *info.p == '_') {
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
    
    if(tmp_) {
        return tmp_;
    }
    
    return type;
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

void apply_type_qualifiers(
    sType* type,
    bool constant,
    bool complex_,
    bool atomic_,
    bool thread_local,
    bool thread_,
    bool alignas_double,
    bool register_,
    bool unsigned_,
    bool noreturn_,
    bool volatile_,
    bool uniq_,
    bool static_,
    bool extern_,
    bool inline_,
    bool restrict_,
    bool long_long,
    bool long_,
    bool short_,
    bool norecord,
    bool weak_
    )
{
    type->mConstant = type->mConstant || constant;
    type->mComplex = type->mComplex || complex_;
    type->mAtomic = type->mAtomic || atomic_;
    type->mThreadLocal = type->mThreadLocal || thread_local;
    type->mThread = type->mThread || thread_;
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
    type->mNorecord = type->mNorecord || norecord;
    type->mWeak = type->mWeak || weak_;
}


void merge_pointer_attribute_to_type(sType* type, string pointer_attribute)
{
    if(pointer_attribute === "") {
        return;
    }

    if(type->mPointerAttribute == null || type->mPointerAttribute === "") {
        type->mPointerAttribute = pointer_attribute;
    }
    else {
        type->mPointerAttribute = type->mPointerAttribute + " " + pointer_attribute;
    }
}

string parse_variable_name_fun(sType* type, bool anonymous_name, bool var_name_between_brace, string attribute, sInfo* info=info)
{
    string var_name = s"";
    if(var_name_between_brace && *info.p == '(') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    if(*info.p == ':') {
        var_name = string("");
    }
    else if(anonymous_name) {
        static int num_anonymous_var_name = 0;
        num_anonymous_var_name++;
        var_name = xsprintf("anonymous_var_nameXYZ%d", num_anonymous_var_name);
        type->mAnonymousVarName = true;
    }
    else if(NEO_IS_ASCII_ALNUM(*info.p) || *info.p == '_') {
        var_name = parse_word();
    }
    else {
        static int num_anonymous_var_name = 0;
        num_anonymous_var_name++;
        var_name = xsprintf("anonymous_var_nameY%d", num_anonymous_var_name);
        type->mAnonymousVarName = true;
    }
            
    if(var_name_between_brace && *info.p == ')') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    if(*info.p == ':') {
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


void show_type(sType* type, sInfo* info=info)
{
    puts(make_come_type_name_string(type));
}

bool is_pointer_type(sType* type, sInfo* info=info)
{
    return type->mPointerNum > 0 || type->mArrayPointerNum > 0 || type->mArrayPointerType;
}

bool is_arithmetic_type(sType* type, sInfo* info=info)
{
    return type->mClass->mNumber || type->mClass->mFloat || type->mClass->mEnum;
}

bool is_integer_type(sType* type, sInfo* info=info)
{
    return (type->mClass->mNumber && !type->mClass->mFloat) || type->mClass->mEnum;
}

bool is_null_pointer_constant(CVALUE* come_value, sInfo* info=info)
{
    if(come_value == null || come_value.c_value == null) {
        return false;
    }
    string s = string(come_value.c_value);
    if(s === "0" || s === "NULL" || s === "nullptr") {
        return true;
    }
    if(s.index("(void*)0", -1) != -1 || s.index("((void*)0)", -1) != -1) {
        return true;
    }
    if(s.index("NULL", -1) != -1) {
        return true;
    }
    if(s.index("0x0", -1) != -1) {
        return true;
    }
    return false;
}

bool is_generic_void_pointer_compatible(sType* left_type, sType* right_type, sInfo* info=info)
{
    if(left_type == null || right_type == null) {
        return false;
    }
    string left_type_name = make_come_type_name_string(left_type);
    string right_type_name = make_come_type_name_string(right_type);

    int left_generic_pos = left_type_name.index("<", -1);
    int right_generic_pos = right_type_name.index("<", -1);
    if(left_generic_pos <= 0 || right_generic_pos <= 0) {
        return false;
    }

    string left_wrapper = left_type_name.substring(0, left_generic_pos);
    string right_wrapper = right_type_name.substring(0, right_generic_pos);
    if(left_wrapper !== right_wrapper) {
        return false;
    }

    bool left_void_generic = left_type_name.index("<void", -1) >= 0;
    bool right_void_generic = right_type_name.index("<void", -1) >= 0;
    
    return left_void_generic || right_void_generic;
}

bool is_span_class_name(const char* class_name, sInfo* info=info)
{
    if(class_name == null) {
        return false;
    }
    return class_name === "span"
        || (strlen(class_name) > 5 && memcmp(class_name, "span$", 5) == 0);
}

bool is_generic_placeholder_class_name(const char* class_name, sInfo* info=info)
{
    if(class_name == null) {
        return false;
    }
    string name = string(class_name);
    return name.index("__generics_type", -1) >= 0
        || name.index("__mgenerics_type", -1) >= 0;
}
bool is_generic_placeholder_type(sType* type, sInfo* info=info)
{
    return type != null
        && type->mClass != null
        && is_generic_placeholder_class_name(type->mClass->mName);
}

bool is_span_wrapper_compatible(sType* left_type, sType* right_type, sInfo* info=info)
{
    if(left_type == null || right_type == null
        || left_type->mClass == null || right_type->mClass == null)
    {
        return false;
    }
    return is_span_class_name(left_type->mClass->mName)
        && is_span_class_name(right_type->mClass->mName);
}

bool is_transparent_union_type(sType* type, sInfo* info=info)
{
    if(type == null || type->mClass == null || !type->mClass->mUnion) {
        return false;
    }
    if(type->mClass->mAttribute == null) {
        return false;
    }
    string attr = string(type->mClass->mAttribute);
    return attr.index("transparent_union", -1) >= 0;
}

bool pointer_attr_has_word(sType* type, const char* word, sInfo* info=info)
{
    if(type == null || type->mPointerAttribute == null || type->mPointerAttribute === "") {
        return false;
    }
    string s = string(type->mPointerAttribute);
    return s.index(word, -1) != -1;
}

bool pointer_attr_has_restrict(sType* type, sInfo* info=info)
{
    return pointer_attr_has_word(type, "restrict");
}

bool pointer_attr_has_const(sType* type, sInfo* info=info)
{
    return pointer_attr_has_word(type, "const");
}

bool pointer_attr_has_volatile(sType* type, sInfo* info=info)
{
    return pointer_attr_has_word(type, "volatile");
}

bool is_empty_attribute(string attr, sInfo* info=info)
{
    return attr == null || attr === "";
}

bool is_same_attribute(string left_attr, string right_attr, sInfo* info=info)
{
    if(is_empty_attribute(left_attr) && is_empty_attribute(right_attr)) {
        return true;
    }
    if(is_empty_attribute(left_attr) || is_empty_attribute(right_attr)) {
        return false;
    }
    return left_attr === right_attr;
}

sType*% normalize_loadvar_type_for_compare(sType* type, sInfo* info=info)
{
    if(type == null) {
        return null;
    }
    if(type->mOriginalLoadVarType) {
        bool use_original = type->mArrayPointerNum > 0
            && type->mArrayNum.length() == 0
            && type->mPointerNum == 0;
        if(use_original) {
            return clone type->mOriginalLoadVarType;
        }
    }
    
    return clone type;
}

sType*% expand_typedef_for_assign(sType*% type, sInfo* info=info)
{
    sType*% result = type;
    int guard = 0;
    while(result->mTypedefOriginalType && guard < 16) {
        sType*% orig = clone result->mTypedefOriginalType;
        
        int ptr = result->mPointerNum;
        bool suppress_ptr_restore = result->mOriginalLoadVarType != null && result->mPointerNum == 0;
        bool suppress_array_restore = result->mOriginalLoadVarType != null
            && result->mPointerNum == 0
            && result->mArrayPointerNum == 0
            && !result->mArrayPointerType
            && result->mArrayNum.length() == 0;
        if(!suppress_ptr_restore && ptr == 0 && orig->mPointerNum > 0) {
            ptr = orig->mPointerNum;
        }
        orig->mPointerNum = ptr;
        
        int array_ptr = result->mArrayPointerNum;
        if(!suppress_array_restore && array_ptr == 0 && orig->mArrayPointerNum > 0) {
            array_ptr = orig->mArrayPointerNum;
        }
        orig->mArrayPointerNum = array_ptr;
        
        if(result->mArrayPointerType) {
            orig->mArrayPointerType = true;
        }
        else if(suppress_array_restore) {
            orig->mArrayPointerType = false;
        }
        if(result->mArrayNum.length() > 0) {
            orig->mArrayNum = clone result->mArrayNum;
        }
        else if(suppress_array_restore) {
            orig->mArrayNum.reset();
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
        orig->mHeap = result->mHeap;
        orig->mNoHeap = result->mNoHeap;
        orig->mRefference = result->mRefference;
        orig->mOptional = result->mOptional;
        orig->mDefferRightValue = result->mDefferRightValue;
        
        orig->mPointerAttribute = result->mPointerAttribute;
        orig->mAttribute = result->mAttribute;
        orig->mVarAttribute = result->mVarAttribute;
        
        if(result->mGenericsTypes.length() > 0) {
            orig->mGenericsTypes = clone result->mGenericsTypes;
        }
        if(result->mNoSolvedGenericsType) {
            orig->mNoSolvedGenericsType = clone result->mNoSolvedGenericsType;
        }
        
        result = orig;
        guard++;
    }
    
    return result;
}

bool is_parent_class_of(sClass* parent, sClass* child, sInfo* info=info)
{
    if(parent == null || child == null) {
        return false;
    }
    sClass* klass = child;
    while(klass) {
        if(klass->mName === parent->mName) {
            return true;
        }
        if(klass->mParentClassName) {
            klass = borrow info.classes[klass->mParentClassName];
        }
        else {
            klass = null;
        }
    }
    return false;
}

bool is_same_type_ignoring_qualifier(sType* left_type, sType* right_type, sInfo* info=info);

static bool is_same_type_ignoring_qualifier_core(sType*% left_type2, sType*% right_type2, sInfo* info=info)
{
    if(left_type2 == null || right_type2 == null) {
        return false;
    }
    
    left_type2 = expand_typedef_for_assign(left_type2);
    right_type2 = expand_typedef_for_assign(right_type2);

    // Method/generic placeholders are wildcard-like during precompile checks.
    if(is_generic_placeholder_type(left_type2) || is_generic_placeholder_type(right_type2)) {
        return true;
    }
    
    // Normalize decayed-array pointer representation so equivalent pointer
    // types compare the same in generic arguments.
    if(left_type2->mArrayNum.length() == 0) {
        if(left_type2->mArrayPointerType) {
            left_type2->mPointerNum++;
            left_type2->mArrayPointerType = false;
        }
        if(left_type2->mPointerNum == 0 && left_type2->mArrayPointerNum > 0) {
            left_type2->mPointerNum = left_type2->mArrayPointerNum;
            left_type2->mArrayPointerNum = 0;
        }
    }
    if(right_type2->mArrayNum.length() == 0) {
        if(right_type2->mArrayPointerType) {
            right_type2->mPointerNum++;
            right_type2->mArrayPointerType = false;
        }
        if(right_type2->mPointerNum == 0 && right_type2->mArrayPointerNum > 0) {
            right_type2->mPointerNum = right_type2->mArrayPointerNum;
            right_type2->mArrayPointerNum = 0;
        }
    }
    
    if(left_type2->mClass->mName !== right_type2->mClass->mName) {
        return false;
    }
    
    if(left_type2->mPointerNum != right_type2->mPointerNum) {
        return false;
    }
    if(left_type2->mArrayPointerNum != right_type2->mArrayPointerNum) {
        return false;
    }
    if(left_type2->mArrayPointerType != right_type2->mArrayPointerType) {
        return false;
    }
    
    if(left_type2->mUnsigned != right_type2->mUnsigned) {
        return false;
    }
    if(left_type2->mShort != right_type2->mShort) {
        return false;
    }
    if(left_type2->mLong != right_type2->mLong) {
        return false;
    }
    if(left_type2->mLongLong != right_type2->mLongLong) {
        return false;
    }
    if(left_type2->mComplex != right_type2->mComplex) {
        return false;
    }
    if(left_type2->mAtomic != right_type2->mAtomic) {
        return false;
    }
    
    if(left_type2->mGenericsTypes.length() != right_type2->mGenericsTypes.length()) {
        return false;
    }
    for(int i=0; i<left_type2->mGenericsTypes.length(); i++) {
        sType* left_g = borrow left_type2->mGenericsTypes[i];
        sType* right_g = borrow right_type2->mGenericsTypes[i];
        if(!is_same_type_ignoring_qualifier(left_g, right_g)) {
            return false;
        }
    }
    
    if(left_type2->mClass->mName === "lambda") {
        if(left_type2->mVarArgs != right_type2->mVarArgs) {
            return false;
        }
        if(left_type2->mParamTypes.length() != right_type2->mParamTypes.length()) {
            return false;
        }
        if(!is_same_type_ignoring_qualifier(left_type2->mResultType, right_type2->mResultType)) {
            return false;
        }
        for(int i=0; i<left_type2->mParamTypes.length(); i++) {
            sType* lparam = borrow left_type2->mParamTypes[i];
            sType* rparam = borrow right_type2->mParamTypes[i];
            if(!is_same_type_ignoring_qualifier(lparam, rparam)) {
                return false;
            }
        }
        if(left_type2->mFunctionPointerNum != right_type2->mFunctionPointerNum) {
            return false;
        }
    }
    
    return true;
}

bool is_same_type_ignoring_qualifier(sType* left_type, sType* right_type, sInfo* info=info)
{
    if(left_type == null || right_type == null) {
        return false;
    }
    
    sType*% left_type2 = normalize_loadvar_type_for_compare(left_type);
    sType*% right_type2 = normalize_loadvar_type_for_compare(right_type);
    
    return is_same_type_ignoring_qualifier_core(left_type2, right_type2);
}

bool is_same_base_type_ignoring_qualifier(sType* left_type, sType* right_type, sInfo* info=info)
{
    sType*% left_type2 = normalize_loadvar_type_for_compare(left_type);
    sType*% right_type2 = normalize_loadvar_type_for_compare(right_type);
    
    left_type2->mPointerNum = 0;
    left_type2->mArrayPointerNum = 0;
    left_type2->mArrayPointerType = false;
    left_type2->mArrayNum.reset();
    left_type2->mConstant = false;
    left_type2->mVolatile = false;
    left_type2->mRestrict = false;
    
    right_type2->mPointerNum = 0;
    right_type2->mArrayPointerNum = 0;
    right_type2->mArrayPointerType = false;
    right_type2->mArrayNum.reset();
    right_type2->mConstant = false;
    right_type2->mVolatile = false;
    right_type2->mRestrict = false;
    
    return is_same_type_ignoring_qualifier_core(left_type2, right_type2);
}

bool check_assign_type_safe(const char* msg, sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info)
{
    if(left_type == null || right_type == null) {
        warning_msg(info, "invalid assign type(type is null). %s", msg);
        return false;
    }
    if(left_type->mClass == null || right_type->mClass == null) {
        warning_msg(info, "invalid assign type(class is null). %s", msg);
        return false;
    }

    sType*% left_type2 = normalize_loadvar_type_for_compare(left_type);
    sType*% right_type2 = normalize_loadvar_type_for_compare(right_type);
    left_type2 = expand_typedef_for_assign(left_type2);
    right_type2 = expand_typedef_for_assign(right_type2);
    
    if(left_type2->mClass == null || right_type2->mClass == null) {
        warning_msg(info, "invalid assign type(expanded class is null). %s", msg);
        return false;
    }
    if(left_type2->mHeap && !right_type2->mHeap && !(right_type2->mPointerNum == 1 && right_type2->mClass->mName === "void")) {
        err_msg(info, "invalid heap assignment");
        show_type(left_type2);
        show_type(right_type2);
    }
    
    bool left_lambda = left_type2->mClass->mName === "lambda";
    bool right_lambda = right_type2->mClass->mName === "lambda";
    
    if(left_lambda || right_lambda) {
        // Allow broad lambda assign compatibility to avoid noisy warnings
        // for value/ref parameter inference and generic lambda conversions.
        return true;
    }
    
    if(is_transparent_union_type(left_type2)
        && !right_type2->mClass->mStruct
        && !right_type2->mClass->mUnion)
    {
        return true;
    }

    
    bool left_ptr = is_pointer_type(left_type2);
    bool right_ptr = is_pointer_type(right_type2);
    bool left_array = left_type2->mArrayNum.length() > 0
        && left_type2->mPointerNum == 0
        && left_type2->mArrayPointerNum == 0;
    bool right_array = right_type2->mArrayNum.length() > 0
        && right_type2->mPointerNum == 0
        && right_type2->mArrayPointerNum == 0;
    
    if(left_array && right_array) {
        if(is_same_base_type_ignoring_qualifier(left_type2, right_type2)) {
            return true;
        }
        err_msg(info, "invalid array base type. %s", msg);
        show_type(left_type2);
        show_type(right_type2);
        return false;
    }
    
    if(left_ptr || right_ptr || right_array) {
        if(left_ptr && (right_ptr || right_array)) {
            int left_ptr_num = left_type2->mPointerNum
                + (left_type2->mPointerNum == 0 ? left_type2->mArrayPointerNum : 0)
                + (left_type2->mArrayPointerType ? 1 : 0);
            int right_ptr_num = right_type2->mPointerNum
                + (right_type2->mPointerNum == 0 ? right_type2->mArrayPointerNum : 0)
                + (right_type2->mArrayPointerType ? 1 : 0)
                + (right_array ? 1 : 0);
            
            bool left_void = left_type2->mClass->mName === "void";
            bool right_void = right_type2->mClass->mName === "void";
            bool explicit_cast_value = come_value != null && come_value.mCastValue;
            
            bool left_void_ptr = left_void && left_ptr_num == 1;
            bool right_void_ptr = right_void && right_ptr_num == 1;
            if(left_ptr_num != right_ptr_num && !(left_void_ptr || right_void_ptr)) {
                warning_msg(info, "invalid pointer level. %s", msg);
                show_type(left_type2);
                show_type(right_type2);
                return false;
            }
            
            if(!explicit_cast_value) {
                bool right_const = right_type2->mConstant || pointer_attr_has_const(right_type2);
                bool left_const = left_type2->mConstant || pointer_attr_has_const(left_type2);
                if(right_const && !left_const) {
                    warning_msg(info, "invalid const pointer assign. %s", msg);
                    show_type(left_type2);
                    show_type(right_type2);
                    return false;
                }
                bool right_volatile = right_type2->mVolatile || pointer_attr_has_volatile(right_type2);
                bool left_volatile = left_type2->mVolatile || pointer_attr_has_volatile(left_type2);
                if(right_volatile && !left_volatile) {
                    warning_msg(info, "invalid volatile pointer assign. %s", msg);
                    show_type(left_type2);
                    show_type(right_type2);
                    return false;
                }
                bool right_restrict = right_type2->mRestrict || pointer_attr_has_restrict(right_type2);
                bool left_restrict = left_type2->mRestrict || pointer_attr_has_restrict(left_type2);
                if(right_restrict && !left_restrict) {
                    warning_msg(info, "invalid restrict pointer assign. %s", msg);
                    show_type(left_type2);
                    show_type(right_type2);
                    return false;
                }
            }
            /*
            if(!is_same_attribute(left_type2->mPointerAttribute, right_type2->mPointerAttribute)) {
                warning_msg(info, "invalid pointer attribute assign. %s", msg);
                show_type(left_type2);
                show_type(right_type2);
                return false;
            }
            if(!is_same_attribute(left_type2->mAttribute, right_type2->mAttribute)) {
                warning_msg(info, "invalid type attribute assign. %s", msg);
                show_type(left_type2);
                show_type(right_type2);
                return false;
            }
            if(!is_same_attribute(left_type2->mVarAttribute, right_type2->mVarAttribute)) {
                warning_msg(info, "invalid variable attribute assign. %s", msg);
                show_type(left_type2);
                show_type(right_type2);
                return false;
            }
            */
            
            if(left_void || right_void) {
                return true;
            }
            
            bool parent_class = false;
            if(left_type2->mClass->mName !== right_type2->mClass->mName) {
                sClass* klass = right_type2->mClass;
                while(klass) {
                    if(klass->mName === left_type2->mClass->mName) {
                        parent_class = true;
                        break;
                    }
                    if(klass->mParentClassName) {
                        klass = borrow info.classes[klass->mParentClassName];
                    }
                    else {
                        klass = null;
                    }
                }
            }
            
            if(parent_class) {
                if(left_ptr_num > 1) {
                    warning_msg(info, "invalid pointer level. %s", msg);
                    show_type(left_type2);
                    show_type(right_type2);
                    return false;
                }
                return true;
            }
            
            if(!is_same_base_type_ignoring_qualifier(left_type2, right_type2)) {
                if(is_span_wrapper_compatible(left_type2, right_type2)) {
                    return true;
                }
/*
                if(!is_generic_void_pointer_compatible(left_type2, right_type2)) {
                    err_msg(info, "invalid pointer base type. %s", msg);
                    show_type(left_type2);
                    show_type(right_type2);
                    return false;
                }
*/
            }
            return true;
        }
        else if(left_ptr && !(right_ptr || right_array)) {
            int left_ptr_num = left_type2->mPointerNum
                + (left_type2->mPointerNum == 0 ? left_type2->mArrayPointerNum : 0)
                + (left_type2->mArrayPointerType ? 1 : 0);
            bool right_heap_pointer = right_type2->mHeap
                && right_type2->mPointerNum == 0
                && right_type2->mArrayPointerNum == 0
                && !right_type2->mArrayPointerType
                && right_type2->mArrayNum.length() == 0;
            if(right_heap_pointer
                && left_ptr_num == 1
                && is_same_base_type_ignoring_qualifier(left_type2, right_type2))
            {
                return true;
            }
            if(is_integer_type(right_type2) && is_null_pointer_constant(come_value)) {
                return true;
            }
            warning_msg(info, "invalid assign pointer from non-pointer. %s", msg);
            show_type(left_type2);
            show_type(right_type2);
            return false;
        }
        else if(!left_ptr && (right_ptr || right_array)) {
            bool return_type_check = string(msg).index("result type", -1) == 0;
            bool typedef_array_decay_scalar = return_type_check
                && left_type2->mPointerNum == 0
                && left_type2->mArrayPointerNum == 0
                && left_type2->mArrayNum.length() == 0
                && right_type2->mPointerNum == 0
                && right_type2->mArrayPointerNum > 0
                && right_type2->mArrayNum.length() == 0
                && !right_type2->mArrayPointerType
                && right_type2->mOriginalTypeName != null
                && right_type2->mOriginalTypeName !== ""
                && is_same_base_type_ignoring_qualifier(left_type2, right_type2);
            if(typedef_array_decay_scalar) {
                return true;
            }
            if(left_type2->mArrayNum.length() > 0 && right_type2->mArrayNum.length() > 0) {
                if(is_same_base_type_ignoring_qualifier(left_type2, right_type2)) {
                    return true;
                }
            }
            warning_msg(info, "invalid assign non-pointer from pointer. %s", msg);
            show_type(left_type2);
            show_type(right_type2);
            return false;
        }
    }
    
    /*
    if(!is_same_attribute(left_type2->mAttribute, right_type2->mAttribute)) {
        warning_msg(info, "invalid type attribute assign. %s", msg);
        show_type(left_type2);
        show_type(right_type2);
        return false;
    }
    if(!is_same_attribute(left_type2->mPointerAttribute, right_type2->mPointerAttribute)) {
        warning_msg(info, "invalid pointer attribute assign. %s", msg);
        show_type(left_type2);
        show_type(right_type2);
        return false;
    }
    if(!is_same_attribute(left_type2->mVarAttribute, right_type2->mVarAttribute)) {
        warning_msg(info, "invalid variable attribute assign. %s", msg);
        show_type(left_type2);
        show_type(right_type2);
        return false;
    }
    */
    
    if(is_arithmetic_type(left_type2) && is_arithmetic_type(right_type2)) {
        return true;
    }
    
    if(!left_ptr && !right_ptr && left_type2->mArrayNum.length() == 0 && right_type2->mArrayNum.length() == 0) {
        if(left_type2->mClass->mStruct && right_type2->mClass->mStruct) {
            if(is_parent_class_of(left_type2->mClass, right_type2->mClass)) {
                return true;
            }
        }
    }
    
    if(is_same_type_ignoring_qualifier(left_type2, right_type2)) {
        return true;
    }
    
    warning_msg(info, "invalid assign type. %s", msg);
    show_type(left_type2);
    show_type(right_type2);
    return false;
}

bool check_assign_type(const char* msg, sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info)
{
    if(info->no_output_come_code) {
        return true;
    }
    if(left_type && left_type->mClass && left_type->mClass->mMethodGenerics) { // precompile
        return true;
    }
    return check_assign_type_safe(msg, left_type, right_type, come_value, info);
}

void cast_type(sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info)
{
}
