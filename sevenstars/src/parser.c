#include "common.h"
#include <ctype.h>

void parser_err_msg(sParserInfo* info, char* msg)
{
    fprintf(stderr, "%s:%d: %s\n", info->sname, info->sline, msg);

    info->err_output_num++;
    info->err_num++;
}

bool xisdigit(char c) {
    return c >= '0' && c <= '9';
}

void parse_comment(sParserInfo* info)
{
    while(*info->p == '#') {
        info->p++;

        while(true) {
            if(*info->p == '\n') {
                info->p++;
                info->sline++;

                while(true) {
                    if(*info->p == ' ' || *info->p == '\t') {
                        info->p++;
                    }
                    else if(*info->p == '\n') {
                        info->p++;
                        info->sline++;
                    }
                    else {
                        break;
                    }
                }
                break;
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

void skip_spaces_and_lf(sParserInfo* info)
{
    parse_comment(info);

    while(true) {
        if(*info->p == ' ' || *info->p == '\t') {
            info->p++;
        }
        else if(*info->p == '\n') {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }

    parse_comment(info);
}

void skip_spaces(sParserInfo* info)
{
    parse_comment(info);
    while(*info->p == ' ' || *info->p == '\t') {
        info->p++;
    }
    parse_comment(info);
}


static bool get_number(bool minus, sCLNode** node, sParserInfo* info)
{
    const int buf_size = 128;
    char buf[128+1];
    char* p2 = buf;

    if(minus) {
        *p2 = '-';
        p2++;
    }

    if(xisdigit(*info->p)) {
        while(xisdigit(*info->p) || *info->p == '_') {
            if(*info->p ==  '_') {
                info->p++;
            }
            else {
                *p2++ = *info->p;
                info->p++;
            }

            if(p2 - (char*)buf >= buf_size) {
                parser_err_msg(info, xsprintf("overflow node of number %d", *info->p));
                return false;
            }
        };
        *p2 = 0;
        skip_spaces_and_lf(info);
        
        *node = sNodeTree_create_int_value(atoi(buf), info);
    }
    else {
        parser_err_msg(info, "require digits after + or -");

        *node = null;
    }

    return true;
}

string parse_word(sParserInfo* info)
{
    parse_comment(info);

    buffer*% result = new buffer.initialize();

    while(isalnum(*info->p) || *info->p == '_') {
        result.append_char(*info->p);
        info->p++;
    }

    skip_spaces_and_lf(info);

    
    return result.to_string();
}

string parse_word_for_shell(sParserInfo* info)
{
    parse_comment(info);

    buffer*% result = new buffer.initialize();

    while(isalnum(*info->p) || *info->p == '_' || *info->p == '-' || *info->p == '/' || *info->p == '.') {
        result.append_char(*info->p);
        info->p++;
    }

    skip_spaces_and_lf(info);

    
    return result.to_string();
}

void expected_next_character(char c, sParserInfo* info) 
{
    parse_comment(info);
    if(*info->p == '\0') {
        return;
    }
    if(*info->p == c) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    else {
        parser_err_msg(info, xsprintf("expects next character %c, but it is (character code %d)(%c)", c, *info->p, *info->p));

        info->p++;
        skip_spaces_and_lf(info);
    }
}

bool parse_if_expression(sCLNode** node, sParserInfo* info) 
{
    expected_next_character('(', info);

    sCLNode* exp = null;
    if(!expression(&exp, info)) {
        return false;
    };

    expected_next_character(')', info);
    expected_next_character('{', info);

    sCLNodeBlock* node_block = null;
    if(!parse_block(&node_block, 0, NULL, info)) {
        return false;
    }

    expected_next_character('}', info);

    char* p_before = info.p;
    int sline_before = info.sline;

    var word = parse_word(info);

    int num_elif = 0;
    sCLNode* elif_expressions[ELIF_MAX];
    sCLNodeBlock* elif_blocks[ELIF_MAX];

    if(strcmp(word, "elif") == 0) {
        while(true) {
            expected_next_character('(', info);

            sCLNode* exp = null;
            if(!expression(&exp, info)) {
                return false;
            };

            expected_next_character(')', info);
            expected_next_character('{', info);

            sCLNodeBlock* node_block = null;
            if(!parse_block(&node_block, 0, NULL, info)) {
                return false;
            }

            expected_next_character('}', info);

            elif_expressions[num_elif] = exp;
            elif_blocks[num_elif] = node_block;

            num_elif++;

            if(num_elif >= ELIF_MAX) {
                fprintf(stderr, "overflow elif number");
                exit(2);
            }

            char* p_before = info.p;
            int sline_before = info.sline;

            word = parse_word(info);

            if(strcmp(word, "else") == 0) {
                break;
            }
            else if(strcmp(word, "elif") != 0) {
                info.p = p_before;
                info.sline = sline_before;
                break;
            }
        }
    }
    else if(strcmp(word, "else") == 0) {
    }
    else {
        info.p = p_before;
        info.sline = sline_before;
    }

    p_before = info.p;
    sline_before = info.sline;

    sCLNodeBlock* else_block = null;

    if(strcmp(word, "else") == 0) {
        expected_next_character('{', info);

        sCLNodeBlock* node_block = null;
        if(!parse_block(&node_block, 0, NULL, info)) {
            return false;
        }

        expected_next_character('}', info);

        else_block = node_block;
    }
    else {
        info.p = p_before;
        info.sline = sline_before;
    };
    
    *node = sNodeTree_create_if_expression(exp, node_block, num_elif, elif_expressions, elif_blocks, else_block, info);

    return true;
}

bool parse_while_expression(sCLNode** node, sParserInfo* info) 
{
    expected_next_character('(', info);

    sCLNode* exp = null;
    if(!expression(&exp, info)) {
        return false;
    };

    expected_next_character(')', info);
    expected_next_character('{', info);

    sCLNodeBlock* node_block = null;
    if(!parse_block(&node_block, 0, NULL, info)) {
        return false;
    }

    expected_next_character('}', info);

    *node = sNodeTree_create_while_expression(exp, node_block, info);

    return true;
}

bool parse_try(sCLNode** node, sParserInfo* info) 
{
    expected_next_character('{', info);

    sCLNodeBlock* node_block = null;
    var vtables_before = info->vtables;
    info.vtables = borrow new vector<sVarTable*%>.initialize();
    int max_var_num = info.max_var_num;
    if(!parse_block(&node_block, 0, NULL, info)) {
        info.max_var_num = max_var_num;
        delete info.vtables;
        info.vtables = vtables_before;
        return false;
    }
    info.max_var_num = max_var_num;
    delete info.vtables;
    info.vtables = vtables_before;

    expected_next_character('}', info);

    string name = parse_word(info);

    expected_next_character('{', info);

    sCLParam params[PARAMS_MAX];
    int num_params = 0;

    xstrncpy(params[0].mName, "it", VAR_NAME_MAX);
    params[0].mType = create_type("any", info.types);

    num_params++;

    sCLNodeBlock* node_block2 = null;
    vtables_before = info->vtables;
    info.vtables = borrow new vector<sVarTable*%>.initialize();
     max_var_num = info.max_var_num;
    if(!parse_block(&node_block2, num_params, params, info)) {
        info.max_var_num = max_var_num;
        delete info.vtables;
        info.vtables = vtables_before;
        return false;
    }
    info.max_var_num = max_var_num;
    delete info.vtables;
    info.vtables = vtables_before;

    expected_next_character('}', info);

    *node = sNodeTree_create_try(node_block, node_block2, info);

    return true;
}

bool parse_break_expression(sCLNode** node, sParserInfo* info) 
{
    *node = sNodeTree_create_break(info);

    return true;
}

bool parse_throw(sCLNode** node, sParserInfo* info) 
{
    sCLNode* obj = null;
    if(!expression(&obj, info)) {
        return false;
    };

    *node = sNodeTree_create_throw_exception(obj, info);

    return true;
}

bool parse_type(sCLType** type, sParserInfo* info, vector<sCLType*%>* types)
{
    string name = parse_word(info);

    if(info.generics_type_names != null) {
        for(int i=0; i<info.generics_type_names.length(); i++) {
            if(strcmp(name, info.generics_type_names.item(i, null)) == 0) {
                char*% generics_type_name = xsprintf("generics_type%d", i);

                *type = create_type(generics_type_name, types);

                if(*info->p == '?') {
                    info->p++;
                    skip_spaces_and_lf(info);

                    (*type)->mNullable = true;
                }

                return true;
            }
        }
    };

    *type = create_type(name, types);

    if(strcmp(name, "lambda") == 0) {
        sCLParam params[PARAMS_MAX];
        int num_params = 0;
        if(!parse_params(params, &num_params, info, types)) {
            return false;
        }

        (*type)->mNumParams = num_params;
        for(int i=0; i<num_params; i++) {
            (*type)->mParams[i] = params[i];
        }

        expected_next_character(':', info);

        sCLType* result_type = NULL;
        if(!parse_type(&result_type, info, types)) {
            return false;
        }

        (*type)->mResultType = result_type;

        if((*type).mClass == null) {
            parser_err_msg(info, xsprintf("invalid type name(%s)", name));
        }

        return true;
    }

    (*type)->mNumGenericsTypes = 0;

    if(*info->p == '<') {
        info->p++;
        skip_spaces_and_lf(info);

        for(int i=0; i<GENERICS_TYPES_MAX; i++) {
            if(!parse_type((*type)->mGenericsTypes + i, info, types)) {
                return false;
            }
            (*type)->mNumGenericsTypes++;

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == '>') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
    }

    if(*info->p == '?') {
        info->p++;
        skip_spaces_and_lf(info);

        (*type)->mNullable = true;
    }

    return true;
}

bool parse_params(sCLParam* params, int* num_params, sParserInfo* info, vector<sCLType*%>* types)
{
    expected_next_character('(', info);

    while(true) {
        if(*info->p == ')') {
            break;
        }

        string var_name = parse_word(info);

        expected_next_character(':', info);

        sCLType* type = null;

        if(!parse_type(&type, info, types)) {
            return false;
        }

        xstrncpy(params[*num_params].mName, var_name, VAR_NAME_MAX);
        params[*num_params].mType = type;

        (*num_params)++;

        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p == ')') {
            break;
        }
        else if(*info->p == '\0') {
            break;
        }
    }

    expected_next_character(')', info);

    return true;
}

bool parse_lambda_expression(sCLNode** node, sParserInfo* info) 
{
    sCLParam params[PARAMS_MAX];
    int num_params = 0;

    if(!parse_params(params, &num_params, info, info.types)) {
        return false;
    }

    expected_next_character(':', info);

    sCLType* block_type = null;
    if(!parse_type(&block_type, info, info.types)) {
        return false;
    }

    expected_next_character('{', info);

    sCLNodeBlock* node_block = null;
    var vtables_before = info->vtables;
    info.vtables = borrow new vector<sVarTable*%>.initialize();
    int max_var_num = info.max_var_num;
    if(!parse_block(&node_block, num_params, params, info)) {
        delete info.vtables;
        info.vtables = vtables_before;
        info.max_var_num = max_var_num;
        return false;
    }
    info.max_var_num = max_var_num;
    delete info.vtables;
    info.vtables = vtables_before;

    expected_next_character('}', info);

    *node = sNodeTree_create_lambda(num_params, params, node_block, block_type, info);

    return true;
}

static bool get_block_text(buffer* buf, char begin, char end, sParserInfo* info)
{
    bool dquort = false;
    int nest = 0;
    while(true) {
        if(*info->p == '\0') {
            break;
        }
        else if(dquort && *info->p == '\\') {
            buf.append_char(*info->p);
            info->p++;
            if(*info->p == '\n') {
                info->sline++;
            }
            buf.append_char(*info->p);
            info->p++;
        }
        else if(!dquort && *info->p == '\'') {
            buf.append_char(*info->p);
            info->p++;
            if(*info->p == '\n') {
                info->sline++;
            }
            buf.append_char(*info->p);
            info->p++;
        }
        else if(*info->p == '"') {
            dquort = !dquort;
            buf.append_char(*info->p);
            info->p++;
        }
        else if(dquort) {
            if(*info->p == '\n') {
                info->sline++;
            }
            buf.append_char(*info->p);
            info->p++;
        }
        else if(*info->p == begin) {
            buf.append_char(*info->p);
            info->p++;

            nest++;
        }
        else if(*info->p == end) {
            buf.append_char(*info->p);
            info->p++;

            if(nest == 0) {
                skip_spaces_and_lf(info);
                break;
            }

            nest--;
        }
        else {
            if(*info->p == '\n') {
                info->sline++;
            }
            buf.append_char(*info->p);
            info->p++;
        }
    };

    return true;
}

bool parse_class(sCLNode** node, sParserInfo* info) 
{
    buffer*% block_text = new buffer.initialize();

    block_text.append_str("class ");

    int sline = info->sline;
    string name = parse_word(info);

    block_text.append_str(name);
    block_text.append_char(' ');

    if(*info->p == '<') {
        while(true) {
            block_text.append_char(*info->p);

            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == '>') {
                block_text.append_char(*info->p);

                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p == '\0') {
                parser_err_msg(info, "unexpexted the source end in generics type names");
                return false;
            }
        }
    }

    if(*info->p == 'e') {
        while(true) {
            if(*info->p == '{') {
                break;
            }
            else if(*info->p == '\0') {
                fprintf(stderr, "unexpected the source end\n");
                exit(2);
            }
            else {
                block_text.append_char(*info->p);
                info->p++;
            }
        }
    }

    block_text.append_char('\n');

    expected_next_character('{', info);
    block_text.append_char('{');

    if(!get_block_text(block_text, '{', '}', info)) {
        return false;
    };

    *node = sNodeTree_create_class(block_text.buf, info.sname, sline, info);

    return true;
}

bool parse_macro(sCLNode** node, sParserInfo* info) 
{
    string name = parse_word(info);

    expected_next_character('{', info);

    var block_text = new buffer.initialize();
    if(!get_block_text(block_text, '{', '}', info)) {
        return false;
    };

    *node = sNodeTree_create_macro(name, string(block_text.buf).substring(0,-2), info);

    return true;
}

bool parse_calling_params(int* num_params, sCLNode** params, bool* param_closed, sParserInfo* info) 
{
    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);

        while(true) {
            if(*info->p == '\0') {
                *param_closed = false;
                break;
            }
            if(*info->p == ')') {
                expected_next_character(')', info);
                *param_closed = true;
                break;
            }

            sCLNode* node = null;
            if(!expression(&node, info)) {
                return false;
            };

            params[*num_params] = node;
            (*num_params)++;

            if(*num_params >= PARAMS_MAX) {
                fprintf(stderr, "overflow pram number\n");
                exit(1);
            }

            if(*info->p == ')') {
                expected_next_character(')', info);
                *param_closed = true;
                break;
            }
            else if(*info->p == '\0') {
                *param_closed = false;
                break;
            }
            else if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }

    /// method block ///
    if(*info->p == '{') {
        int sline = info.sline;

        expected_next_character('{', info);

        var block_text = new buffer.initialize();
        if(!get_block_text(block_text, '{', '}', info)) {
            return false;
        }

        params[*num_params] = sNodeTree_create_method_block(info->sname, sline, block_text, info);
        (*num_params)++;

        if(*num_params >= PARAMS_MAX) {
            fprintf(stderr, "overflow pram number\n");
            exit(1);
        }
    }

    return true;
}

bool parse_shell_params(int* num_params, sCLNode** params, sParserInfo* info) 
{
    while(true) {
        if(*info->p == '\0') {
            break;
        }
        if(*info->p == ';') {
            expected_next_character(';', info);
            break;
        }
        if(*info->p == '}') {
            break;
        }
        
        buffer*% buf = new buffer.initialize();

        while(*info->p != '\0' && *info->p != ' ' && *info->p != '}' && *info->p != ';') {
            buf.append_char(*info->p);
            info->p++;
        }

        while(*info->p == ' ') {
            info->p++;
        }
        
        var str = buf.to_string();

        sCLNode* node = sNodeTree_create_string_value(str, info);

        params[*num_params] = node;
        (*num_params)++;

        if(*num_params >= PARAMS_MAX) {
            fprintf(stderr, "overflow pram number\n");
            exit(1);
        }

        if(*info->p == ';') {
            expected_next_character(';', info);
            break;
        }
        else if(*info->p == '\0') {
            break;
        }
        else if(*info->p == '}') {
            break;
        }
    }

    return true;
}

static bool postposition_operator(sCLNode** node, sParserInfo* info)
{
    if(*node == null) {
        return true;
    }

    while(*info->p) {
        if(*info->p == '.') {
            info->p++;
            skip_spaces_and_lf(info);

            var name = parse_word(info);

            /// method ///
            if(*info->p == '(' || *info->p == '{') {
                int num_params = 0;
                sCLNode* params[PARAMS_MAX];

                params[0] = *node;
                num_params = 1;

                bool param_closed = false;
                if(!parse_calling_params(&num_params, params, &param_closed, info)) 
                {
                    return false;
                };

                *node = sNodeTree_create_method_call(name, num_params, params, param_closed, info);
            }
            //// field ///
            else {
                if(*info->p == '=' && *(info->p+1) != '=') {
                    info->p++;
                    skip_spaces_and_lf(info);

                    sCLNode* exp = null;
                    if(!expression(&exp, info)) {
                        return false;
                    };

                    *node = sNodeTree_create_store_field(*node, name, exp, info);
                }
                else {
                    sCLNode* obj_node = *node;

                    *node = sNodeTree_create_load_field(*node, name, info);
                    if(*info->p == '+' && *(info->p+1) == '+') {
                        info->p+=2;
                        skip_spaces_and_lf(info);

                        sCLNode* right = sNodeTree_create_int_value(1, info);

                        sCLNode* exp = sNodeTree_create_plus(*node, right, info);

                        *node = sNodeTree_create_store_field(obj_node, name, exp, info);
                    }
                    else if(*info->p == '-' && *(info->p+1) == '-') {
                        info->p+=2;
                        skip_spaces_and_lf(info);

                        sCLNode* right = sNodeTree_create_int_value(1, info);

                        sCLNode* exp = sNodeTree_create_minus(*node, right, info);

                        *node = sNodeTree_create_store_field(obj_node, name, exp, info);
                    }
                    else if(*info->p == '+' && *(info->p+1) == '=') 
                    {
                        info->p+=2;
                        skip_spaces_and_lf(info);

                        sCLNode* right = null;
                        if(!expression(&right, info)) {
                            return false;
                        };

                        sCLNode* exp = sNodeTree_create_plus(*node, right, info);

                        *node = sNodeTree_create_store_field(obj_node, name, exp, info);
                    }
                    else if(*info->p == '-' && *(info->p+1) == '=') 
                    {
                        info->p+=2;
                        skip_spaces_and_lf(info);

                        sCLNode* right = null;
                        if(!expression(&right, info)) {
                            return false;
                        };

                        sCLNode* exp = sNodeTree_create_minus(*node, right, info);

                        *node = sNodeTree_create_store_field(obj_node, name, exp, info);
                    }
                }
            }
        }
        else if(*info->p == '(') {
            int num_params = 0;
            sCLNode* params[PARAMS_MAX];

            params[0] = *node;
            num_params = 1;

            bool param_closed = false;
            if(!parse_calling_params(&num_params, params, &param_closed, info)) 
            {
                return false;
            };

            *node = sNodeTree_create_block_object_call(num_params, params, info);
        }
        else {
            break;
        }
    }

    return true;
}

bool is_local_variable(char* word, sParserInfo* info)
{
    sVar* v = get_variable_from_table(info, word);

    return v != null;
}


bool parse_string(buffer* buf, sParserInfo* info) 
{
    while(true) {
        if(*info->p == '"') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        else if(*info->p == '\0') {
            parser_err_msg(info, "require close string value");
            break;
        }
        else if(*info->p == '\\') {
            info->p++;

            char c;
            switch(*info->p) {
                case 'n':
                    c = '\n';
                    info->p++;
                    break;

                case 't':
                    c = '\t';
                    info->p++;
                    break;

                case 'r':
                    c = '\r';
                    info->p++;
                    break;

                case 'a':
                    c = '\a';
                    info->p++;
                    break;

                case '\\':
                    c = '\\';
                    info->p++;
                    break;

                case '0':
                    c = '\0';
                    info->p++;
                    break;

                default:
                    c = *info->p;
                    info->p++;
                    break;
            }

            buf.append_char(c);
        }
        else if(*info->p == '\n') {
            info->sline++;

            buf.append_char(*info->p);
            info->p++;
        }
        else {
            buf.append_char(*info->p);
            info->p++;
        }
    }

    skip_spaces_and_lf(info);

    return true;
}

bool parse_regex(buffer* buf, bool* ignore_case, bool* global, sParserInfo* info) 
{
    while(true) {
        if(*info->p == '/') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        else if(*info->p == '\0') {
            parser_err_msg(info, "require close regex value");
            break;
        }
        else if(*info->p == '\\') {
            info->p++;

            char c;
            switch(*info->p) {
                case 'n':
                    c = '\n';
                    info->p++;
                    break;

                case 't':
                    c = '\t';
                    info->p++;
                    break;

                case 'r':
                    c = '\r';
                    info->p++;
                    break;

                case 'a':
                    c = '\a';
                    info->p++;
                    break;

                case '\\':
                    c = '\\';
                    info->p++;
                    break;

                case '0':
                    c = '\0';
                    info->p++;
                    break;

                default:
                    c = *info->p;
                    info->p++;
                    break;
            }

            buf.append_char(c);
        }
        else if(*info->p == '\n') {
            info->sline++;

            buf.append_char(*info->p);
            info->p++;
        }
        else {
            buf.append_char(*info->p);
            info->p++;
        }
    }

    while(true) {
        if(*info->p == 'g') {
            info->p++;
            *global = true;
        }
        else if(*info->p == 'i') {
            info->p++;
            *ignore_case = true;
        }
        else {
            break;
        }
    }

    skip_spaces_and_lf(info);

    return true;
}

static bool parse_list(sCLNode** elements, int* num_elements, sParserInfo* info)
{
    while(true) {
        if(*info->p == ']') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        else if(*info->p == '\0') {
            parser_err_msg(info, "require close list value");
            break;
        }
        else {
            sCLNode* exp = null;
            if(!expression(&exp, info)) {
                return false;
            };

            elements[*num_elements] = exp;

            (*num_elements)++;

            if(*num_elements >= LIST_ELEMENT_MAX) {
                fprintf(stderr, "overflow list element number\n");
                exit(2);
            }

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }

    return true;
}

bool read_stdin(buffer* buf)
{
    while(!feof(stdin)) {
        char buf2[BUFSIZ];

        fgets(buf2, BUFSIZ, stdin);

        buf.append_str(buf2);
    }

    return true;
}

bool is_system_method(char* method_name)
{
    sCLClass* system_class = gClasses.at("system", null);

    if(system_class == null) {
        return false;
    }

    return system_class->mMethods.at(method_name, null) != null;

}

static bool expression_node(sCLNode** node, sParserInfo* info)
{
    int num_method_chains = 0;

    /// number ///
    if((*info->p == '-' && *(info->p+1) != '=' && *(info->p+1) != '-' && *(info->p+1) != '>') || (*info->p == '+' && *(info->p+1) != '=' && *(info->p+1) != '+')) 
    {
        if(*info->p == '-') {
            info->p++;
            skip_spaces_and_lf(info);

            if(xisdigit(*info->p)) {
                if(!get_number(true, node, info)) {
                    return false;
                }
            }
            else {
                if(!expression_node(node, info)) {
                    return false;
                }

                if(*node == 0) {
                    parser_err_msg(info, "require right value for -");
                }

//                *node = sNodeTree_create_operand(kOpMinus, *node, 0, 0, info);
            }
        }
        else if(*info->p =='+') {
            info->p++;
            skip_spaces_and_lf(info);

            if(xisdigit(*info->p)) {
                if(!get_number(false, node, info)) {
                    return false;
                }
            }
            else {
                if(!expression_node(node, info)) {
                    return false;
                }

                if(*node == 0) {
                    parser_err_msg(info, "require right value for +");
                }
            }
        }
    }
    /// string ///
    else if(*info->p == '"') {
        info->p++;
        
        buffer*% buf = new buffer.initialize();

        if(!parse_string(buf, info)) {
            return false;
        }
        
        var str = buf.to_string();
        
        *node = sNodeTree_create_string_value(str, info);
    }
    /// regex ///
    else if(*info->p == '/') {
        info->p++;
        
        buffer*% buf = new buffer.initialize();

        bool ignore_case = false;
        bool global = false;
        if(!parse_regex(buf, &ignore_case, &global, info)) {
            return false;
        }
        
        var str = buf.to_string();
        
        *node = sNodeTree_create_regex_value(str, ignore_case, global, info);
    }
    /// list ///
    else if(*info->p == '[') {
        info->p++;

        sCLNode* elements[LIST_ELEMENT_MAX];
        int num_elements = 0;
        
        if(!parse_list(elements, &num_elements, info)) {
            return false;
        };
        
        *node = sNodeTree_create_list_value(num_elements, elements, info);
    }
    /// comment ///
    else if(*info->p == '#') {
        parse_comment(info);

        sCLNode* node2 = null;
        if(!expression(&node2, info)) {
            return false;
        };

        *node = node2;
    }
    else if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);

        if(!expression(node, info)) {
            return false;
        }
        skip_spaces_and_lf(info);

        if(*node == null) {
            parser_err_msg(info, "require expression as ( operand");
        }

        expected_next_character(')', info);
    }
    else if(*info->p == '!') {
        info->p++;
        skip_spaces_and_lf(info);

        if(!expression_node(node, info)) {
            return false;
        }

        if(*node == null) {
            parser_err_msg(info, "require value for !");
        };

        *node = sNodeTree_create_logical_denial(*node, info);
    }
    else if(*info->p == '{') {
        expected_next_character('{', info);

        var vtables_before = info->vtables;
        info.vtables = borrow new vector<sVarTable*%>.initialize();
        int max_var_num = info.max_var_num;
        sCLNodeBlock* node_block = null;
        if(!parse_block(&node_block, 0, NULL, info)) {
            info.max_var_num = max_var_num;
            delete info.vtables;
            info.vtables = vtables_before;
            return false;
        }
        info.max_var_num = max_var_num;
        delete info.vtables;
        info.vtables = vtables_before;

        expected_next_character('}', info);

        *node = sNodeTree_create_normal_block(node_block, info);
    }
    /// stdin ///
    else if(isatty(0) == 0 && *info->p == '.') {
        info->p++;
        skip_spaces_and_lf(info);

        var word = parse_word(info);

        if(*info->p == '(' || *info->p == '{') {
            sCLNode* params[PARAMS_MAX];

            buffer*% buf = new buffer.initialize();

            if(!read_stdin(buf))  {
                return false;
            }

            string str = buf.to_string();

            params[0] = sNodeTree_create_command_value(str, info);

            int num_params = 1;

            bool param_closed = false;
            if(!parse_calling_params(&num_params, params, &param_closed, info)) 
            {
                return false;
            };

            *node = sNodeTree_create_method_call(word, num_params, params, param_closed, info);
        }
        else {
            parser_err_msg(info, "require method call after . (reading stdin)");
            return false;
        }
    }
    /// alnum ///
    else if((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_')
    {
        char* p = info->p;
        int sline = info->sline;

        var word = parse_word(info);

        if(strcmp(word, "var") == 0) {
            if(isalpha(*info->p) || *info->p == '_') {
                var var_name = parse_word(info);
                sCLType* type = null;
                if(*info->p == ':') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(!parse_type(&type, info, info.types)) {
                        return false;
                    };
                }
                
                check_already_added_variable(info, var_name);
                add_variable_to_table(info, var_name, type, false);
                
                if(*info->p == '=') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    sCLNode* exp = null;
                    if(!expression(&exp, info)) {
                        return false;
                    };
                    
                    *node = sNodeTree_create_store_variable(var_name, exp, info);
                }
                else {
                    parser_err_msg(info, "require right value for the definition variable");
                }
            }
            else {
                parser_err_msg(info, "require var name");
            }
        }
        else if(strcmp(word, "true") == 0) {
            *node = sNodeTree_create_true_value(info);
        }
        else if(strcmp(word, "false") == 0) {
            *node = sNodeTree_create_false_value(info);
        }
        else if(strcmp(word, "null") == 0) {
            *node = sNodeTree_create_null_value(info);
        }
        else if(strcmp(word, "if") == 0) {
            if(!parse_if_expression(node, info)) {
                return false;
            }
        }
        else if(strcmp(word, "break") == 0) {
            if(!parse_break_expression(node, info)) {
                return false;
            }
        }
        else if(strcmp(word, "while") == 0) {
            if(!parse_while_expression(node, info)) {
                return false;
            }
        }
        else if(strcmp(word, "throw") == 0) {
            if(!parse_throw(node, info)) {
                return false;
            }
        }
        else if(strcmp(word, "try") == 0) {
            if(!parse_try(node, info)) {
                return false;
            }
        }
        else if(strcmp(word, "lambda") == 0) {
            if(!parse_lambda_expression(node, info)) {
                return false;
            }
        }
        else if(strcmp(word, "class") == 0) {
            if(!parse_class(node, info)) {
                return false;
            }
        }
        else if(strcmp(word, "macro") == 0) {
            if(!parse_macro(node, info)) {
                return false;
            }
        }
        else if(strcmp(word, "return") == 0) {
            if(!expression(node, info)) {
                return false;
            };
            
            *node = sNodeTree_create_return(*node, info);
        }
        else if(strcmp(word, "new") == 0) {
            sCLType* type = null;
            if(!parse_type(&type, info, info.types)) {
                return false;
            };

            *node = sNodeTree_create_object(type, info);

            /// method ///
            if(*info->p == '(' || *info->p == '{') {
                char* name = "initialize";

                int num_params = 0;
                sCLNode* params[PARAMS_MAX];

                params[0] = *node;
                num_params = 1;

                bool param_closed = false;
                if(!parse_calling_params(&num_params, params, &param_closed, info)) 
                {
                    return false;
                };

                *node = sNodeTree_create_method_call(name, num_params, params, param_closed, info);
            }
        }
        else if(strcmp(word, "save_class") == 0) {
            string klass_name = parse_word(info);

            sCLClass* klass = gClasses.at(klass_name, null);

            if(klass) {
                printf("saving %s class...", klass_name);
                if(!save_class(klass)) {
                    puts("error");
                }
                else {
                    puts("ok");
                }
            }
        }
        else if(strcmp(word, "load_class") == 0) {
            string klass_name = parse_word(info)

            //printf("loading %s class...", klass_name);
            if(!load_class(klass_name, info)) {
                //puts("error");
            }
            else {
                //puts("ok");
            }
        }
        else if(strcmp(word, "exit") == 0) {
            sCLNode* params[PARAMS_MAX];
            if(*node == 0) {
                params[0] = sNodeTree_create_system_value(info);
            }
            else {
                params[0] = *node;
            }

            int num_params = 1;

            bool param_closed = false;
            if(!parse_calling_params(&num_params, params, &param_closed, info)) 
            {
                return false;
            };

            *node = sNodeTree_create_method_call(word, num_params, params, param_closed, info);
        }
        else if(*info->p == '!' && *(info->p+1) == '(') {
            info->p+=2;

            var block_text = new buffer.initialize();
            if(!get_block_text(block_text, '(', ')', info)) {
                return false;
            };

            char* name = word;
            char* params = block_text.to_string().substring(0, -2);

            if(!call_macro(node, name, params, info))
            {
                return false;
            }
        }
        else {
            if(*info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf(info);
                
                sCLNode* exp = null;
                if(!expression(&exp, info)) {
                    return false;
                };
                
                *node = sNodeTree_create_store_variable(word, exp, info);
            }
            else if(!is_local_variable(word, info) && (*info->p == '(' || *info->p == '{')) {
                sCLNode* params[PARAMS_MAX];
                if(*node == 0) {
                    if(is_system_method(word)) {
                        params[0] = sNodeTree_create_system_value(info);
                    }
                    else {
                        params[0] = sNodeTree_create_command_value("", info);
                    }
                }
                else {
                    params[0] = *node;
                }

                int num_params = 1;

                bool param_closed = false;
                if(!parse_calling_params(&num_params, params, &param_closed, info)) 
                {
                    return false;
                };

                *node = sNodeTree_create_method_call(word, num_params, params, param_closed, info);
            }
            else if(is_local_variable(word, info)) {
                *node = sNodeTree_create_load_variable(word, info);

                if(*info->p == '+' && *(info->p+1) == '+') {
                    info->p+=2;
                    skip_spaces_and_lf(info);

                    sCLNode* right = sNodeTree_create_int_value(1, info);

                    sCLNode* exp = sNodeTree_create_plus(*node, right, info);

                    *node = sNodeTree_create_store_variable(word, exp, info);
                }
                else if(*info->p == '-' && *(info->p+1) == '-') {
                    info->p+=2;
                    skip_spaces_and_lf(info);

                    sCLNode* right = sNodeTree_create_int_value(1, info);

                    sCLNode* exp = sNodeTree_create_minus(*node, right, info);

                    *node = sNodeTree_create_store_variable(word, exp, info);
                }
                else if(*info->p == '+' && *(info->p+1) == '=') 
                {
                    info->p+=2;
                    skip_spaces_and_lf(info);

                    sCLNode* right = null;
                    if(!expression(&right, info)) {
                        return false;
                    };

                    sCLNode* exp = sNodeTree_create_plus(*node, right, info);

                    *node = sNodeTree_create_store_variable(word, exp, info);
                }
                else if(*info->p == '-' && *(info->p+1) == '=') 
                {
                    info->p+=2;
                    skip_spaces_and_lf(info);

                    sCLNode* right = null;
                    if(!expression(&right, info)) {
                        return false;
                    };

                    sCLNode* exp = sNodeTree_create_minus(*node, right, info);

                    *node = sNodeTree_create_store_variable(word, exp, info);
                }
            }
            else {
                info->p = p;
                info->sline = sline;

                var word = parse_word_for_shell(info);

                sCLNode* params[PARAMS_MAX];
                if(*node == 0) {
                    if(is_system_method(word)) {
                        params[0] = sNodeTree_create_system_value(info);
                    }
                    else {
                        params[0] = sNodeTree_create_command_value("", info);
                    }
                }
                else {
                    params[0] = *node;
                }

                int num_params = 1;

                if(!parse_shell_params(&num_params, params, info)) 
                {
                    return false;
                };

                /// put "" to params for method parametor number checking
                if(is_system_method(word)) {
                    int num_method_params = gClasses.at("system",null)->mMethods.at(word, null).mNumParams;

                    for(int i=num_params; i<num_method_params; i++) {
                        params[i] = sNodeTree_create_string_value("", info);
                        num_params++;
                    }
                }

                /// go ///
                bool param_closed = true;
                *node = sNodeTree_create_method_call(word, num_params, params, param_closed, info);
            }
        }
    }
    /// number ///
    else if(xisdigit(*info->p)) {
        if(!get_number(false, node, info)) {
            return false;
        }
    }
    else {
        parser_err_msg(info, xsprintf("unexpected character %c", *info->p));
        return false;
    }

    if(!postposition_operator(node, info)) {
        return false;
    }
    
    return true;
}

// from left to right order
static bool expression_mult_div(sCLNode** node, sParserInfo* info)
{
    if(!expression_node(node, info)) {
        return false;
    }
    if(*node == 0) {
        return true;
    }

    while(*info->p) {
        if(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_node(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator *");
            };

            *node = sNodeTree_create_mult(*node, right, info);
        }
        else if(*info->p == '\\' && *(info->p+1) == '*') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_node(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator \\*");
            };

            *node = sNodeTree_create_primitive_mult(*node, right, info);
        }
        else if(*info->p == '/') {
            info->p++;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_node(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator /");
            };

            *node = sNodeTree_create_div(*node, right, info);
        }
        else if(*info->p == '\\' && *(info->p+1) == '/') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_node(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator \\/");
            };

            *node = sNodeTree_create_primitive_div(*node, right, info);
        }
        else if(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_node(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator %");
            };

            *node = sNodeTree_create_mod(*node, right, info);
        }
        else if(*info->p == '\\' && *(info->p+1) == '%') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_node(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator \\%");
            };

            *node = sNodeTree_create_primitive_mod(*node, right, info);
        }
        else {
            break;
        }
    }

    return true;
}

// from left to right order
static bool expression_plus_minus(sCLNode** node, sParserInfo* info)
{
    if(!expression_mult_div(node, info)) {
        return false;
    }
    if(*node == 0) {
        return true;
    }

    while(*info->p) {
        if(*info->p == '+' && *(info->p+1) != '=' && *(info->p+1) != '+') {
            info->p++;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_mult_div(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator +");
            };

            *node = sNodeTree_create_plus(*node, right, info);
        }
        else if(*info->p == '\\' && *(info->p+1) == '+') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_mult_div(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator \\+");
            };

            *node = sNodeTree_create_primitive_plus(*node, right, info);
        }
        else if(*info->p == '-' && *(info->p+1) != '=' && *(info->p+1) != '-') {
            info->p++;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_mult_div(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator -");
            };

            *node = sNodeTree_create_minus(*node, right, info);
        }
        else if(*info->p == '\\' && *(info->p+1) == '-') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_mult_div(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator \\-");
            };

            *node = sNodeTree_create_primitive_minus(*node, right, info);
        }
        else {
            break;
        }
    }

    return true;
}

bool expression_comparison_operator(sCLNode** node, sParserInfo* info)
{
    if(!expression_plus_minus(node, info)) {
        return false;
    }

    if(*node == null) {
        return true;
    }

    while(*info->p) {
        if(*info->p == '>' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_plus_minus(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for >= operator");
                return true;
            };

            *node = sNodeTree_create_greater_equal(*node, right, info);
        }
        else if(*info->p == '\\' && *(info->p+1) == '>' && *(info->p+2) == '=') {
            info->p += 3;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_plus_minus(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for >= operator");
                return true;
            };

            *node = sNodeTree_create_primitive_greater_equal(*node, right, info);
        }
        else if(*info->p == '<' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_plus_minus(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for <= operator");
                return true;
            };

            *node = sNodeTree_create_lesser_equal(*node, right, info);
        }
        else if(*info->p == '\\' && *(info->p+1) == '<' && *(info->p+2) == '=') {
            info->p += 3;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_plus_minus(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for <= operator");
                return true;
            };

            *node = sNodeTree_create_primitive_lesser_equal(*node, right, info);
        }
        else if(*info->p == '>' && *(info->p+1) != '>') {
            info->p++;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_plus_minus(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for > operator");
                return true;
            };

            *node = sNodeTree_create_greater(*node, right, info);
        }
        else if(*info->p == '\\' && *(info->p+1) == '>' && *(info->p+2) != '>') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_plus_minus(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for > operator");
                return true;
            };

            *node = sNodeTree_create_primitive_greater(*node, right, info);
        }
        else if(*info->p == '<' && *(info->p+1) != '<') {
            info->p++;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_plus_minus(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for < operator");
                return true;
            };

            *node = sNodeTree_create_lesser(*node, right, info);
        }
        else if(*info->p == '\\' && *(info->p+1) == '<' && *(info->p+2) != '<') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_plus_minus(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for < operator");
                return true;
            };

            *node = sNodeTree_create_primitive_lesser(*node, right, info);
        }
        else {
            break;
        }
    }

    return true;
}

static bool expression_comparison_equal_operator(sCLNode** node, sParserInfo* info)
{
    if(!expression_comparison_operator(node, info)) {
        return false;
    }
    if(*node == null) {
        return true;
    }


    while(*info->p) {
        if(*info->p == '=' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_comparison_operator(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator +");
            };

            *node = sNodeTree_create_equal(*node, right, info);
        }
        else if(*info->p == '\\' && *(info->p+1) == '=' && *(info->p+2) == '=') {
            info->p += 3;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_comparison_operator(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator +");
            };

            *node = sNodeTree_create_primitive_equal(*node, right, info);
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_comparison_operator(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator +");
            };

            *node = sNodeTree_create_not_equal(*node, right, info);
        }
        else if(*info->p == '\\' && *(info->p+1) == '!' && *(info->p+2) == '=') 
        {
            info->p += 3;
            skip_spaces_and_lf(info);

            sCLNode* right = null;
            if(!expression_comparison_operator(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator +");
            };

            *node = sNodeTree_create_primitive_not_equal(*node, right, info);
        }
        else {
            break;
        }
    }

    return true;
}

static bool expression_and_and_or_or(sCLNode** node, sParserInfo* info)
{
    if(!expression_comparison_equal_operator(node, info)) {
        return false;
    }

    if(*node == null) {
        return true;
    }

    while(*info->p) {
        if(*info->p == '&' && *(info->p+1) == '&') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sCLNode* right = 0;
            if(!expression_comparison_equal_operator(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for && operator");
            };

            *node = sNodeTree_create_and_and(*node, right, info);
        }
        else if(*info->p == '|' && *(info->p+1) == '|') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sCLNode* right = 0;
            if(!expression_comparison_equal_operator(&right, info)) {
                return false;
            }

            if(right == null) {
                parser_err_msg(info, "require right value for operator ||");
            };

            *node = sNodeTree_create_or_or(*node, right, info);
        }
        else {
            break;
        }
    }

    return true;
}

bool expression(sCLNode** node, sParserInfo* info) 
{
    parse_comment(info);
    skip_spaces_and_lf(info);

    if(!expression_and_and_or_or(node, info)) {
        return false;
    }

    parse_comment(info);

    return true;
}
