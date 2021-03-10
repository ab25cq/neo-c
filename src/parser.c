#include "common.h"
#include <ctype.h>

BOOL gMainFunctionExistance = FALSE;

void parser_init()
{
}

void parser_final()
{
}

int parse_cmp(char* p, char* str)
{
    int len = strlen(str);

    int i;
    for(i=0; i<len; i++) {
        if(*p > *str) {
            return 1;
        }
        else if(*p < *str) {
            return -1;
        }

        p++;
        str++;
    }

    if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
    {
        return 1;
    }

    return 0;
}

void parser_err_msg(sParserInfo* info, char* msg)
{
    static int output_num = 0;

    if(output_num < PARSER_ERR_MSG_MAX) {
        puts(msg);
        fprintf(stderr, "%s:%d: %s\n", info->sname, info->sline, msg);
    }

    output_num++;
}

void skip_spaces_and_lf(sParserInfo* info)
{
    while(TRUE) {
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
}

void skip_spaces(sParserInfo* info)
{
    while(*info->p == ' ' || *info->p == '\t') {
        info->p++;
    }
}

BOOL parse_word(char* buf, int buf_size, sParserInfo* info, BOOL print_out_err_msg, BOOL no_skip_lf)
{
    while(*info->p == '#') {
        if(!parse_sharp(info)) {
            return FALSE;
        }
    }

    buf[0] = 0;

    char* p2 = buf;

    if(isalpha(*info->p) || *info->p == '_') {
        while(isalnum(*info->p) || *info->p == '_' || *info->p == '$') {
            if(p2 - buf < buf_size-1) {
                *p2++ = *info->p;
                info->p++;
            }
            else {
                parser_err_msg(info, "length of word is too long");
                return FALSE;
            }
        }
    };

    *p2 = 0;
    if(no_skip_lf) {
        skip_spaces(info);
    }
    else {
        skip_spaces_and_lf(info);
    }

    if(*info->p == 0 && buf[0] == 0) {
        if(print_out_err_msg) {
            parser_err_msg(info, "require word(alphabet or number). this is the end of source");
        }
        return FALSE;
    }

    if(buf[0] == 0) {
        if(print_out_err_msg) {
            char buf[1024];
            snprintf(buf, 1024, "require word(alphabet or _ or number). this is (%c)", *info->p);
            parser_err_msg(info, buf);
            info->err_num++;
        }

        if(*info->p == '\n') info->sline++;

        info->p++;
    }

    while(*info->p == '#') {
        if(!parse_sharp(info)) {
            return FALSE;
        }
    }


    return TRUE;
}

void expect_next_character_with_one_forward(char* characters, sParserInfo* info)
{
    skip_spaces_and_lf(info);

    while(*info->p == '#') {
        (void)parse_sharp(info);
    }

    BOOL found = FALSE;
    char* p2 = characters;
    while(*p2) {
        if(*info->p == *p2) {
            found = TRUE;
        }
        p2++;
    }

    if(found) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    else {
        char buf[1024];
        snprintf(buf, 1024, "expected that next character is (%s), but it is %c(%d)", characters, *info->p, *info->p);
        parser_err_msg(info, buf);
        info->err_num++;
        info->p++;
        skip_spaces_and_lf(info);
    }

    while(*info->p == '#') {
        (void)parse_sharp(info);
    }
}

BOOL parse_ruby_macro(unsigned int* node, sParserInfo* info, BOOL really_appended)
{
    char buf[VAR_NAME_MAX+1];
    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    }

    char* p = info->p + 1;

    if(!skip_block(info)) {
        return FALSE;
    }

    sBuf body;
    sBuf_init(&body);

    sBuf_append_str(&body, "ruby <<'NEOCRUBYMACO'\n");
    sBuf_append(&body, p, info->p-p-4);

    sBuf_append_str(&body, "\nNEOCRUBYMACO\n");

    if(really_appended) {
        append_macro(buf, body.mBuf);
    }

    free(body.mBuf);

    *node = sNodeTree_create_null(info);

    skip_spaces_and_lf(info);

    return TRUE;
}

BOOL parse_macro(unsigned int* node, sParserInfo* info)
{
    char buf[VAR_NAME_MAX+1];
    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    }

    char* p = info->p + 1;

    if(!skip_block(info)) {
        return FALSE;
    }

    sBuf body;
    sBuf_init(&body);

    sBuf_append(&body, p, info->p-p-3);

    if(info->parse_struct_phase) {
        append_macro(buf, body.mBuf);
    }

    free(body.mBuf);

    *node = sNodeTree_create_null(info);

    skip_spaces_and_lf(info);

    return TRUE;
}

static BOOL skip_paren(char head_char, char tail_char, sParserInfo* info)
{
    if(*info->p == head_char) {
        info->p++;

        BOOL dquort = FALSE;
        BOOL squort = FALSE;
        int sline = 0;
        int nest = 0;
        while(1) {
            if(dquort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        fprintf(stderr, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        return FALSE;
                    }
                    info->p++;
                }
                else if(*info->p == '"') {
                    info->p++;
                    dquort = !dquort;
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        fprintf(stderr, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        return FALSE;
                    }
                }
            }
            else if(squort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        fprintf(stderr, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        return FALSE;
                    }
                    info->p++;
                }
                else if(*info->p == '\'') {
                    info->p++;
                    squort = !squort;
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        fprintf(stderr, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        return FALSE;
                    }
                }
            }
            else if(*info->p == '\'') {
                sline = info->sline;
                info->p++;
                squort = !squort;
            }
            else if(*info->p == '"') {
                sline = info->sline;
                info->p++;
                dquort = !dquort;
            }
            else if(*info->p == head_char) {
                info->p++;

                nest++;
            }
            else if(*info->p == tail_char) {
                info->p++;

                if(nest == 0) {
                    skip_spaces_and_lf(info);
                    break;
                }

                nest--;
            }
            else if(*info->p == '\0') {
                char msg[1024];
                snprintf(msg, 1024, "The block requires %c character for closing block", tail_char);
                parser_err_msg(info, msg);
                info->err_num++;
                return TRUE;
            }
            else if(*info->p == '\n') {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }

    return TRUE;
}

BOOL parse_call_macro(unsigned int* node, char* name, sParserInfo* info)
{
    char name2[VAR_NAME_MAX];
    xstrncpy(name2, name, VAR_NAME_MAX);

    char* p = info->p + 1;

    if(*info->p == '(') {
        if(!skip_paren('(', ')', info)) {
            return FALSE;
        }
    }
    else if(*info->p == '{') {
        if(!skip_paren('{', '}', info)) {
            return FALSE;
        }
    }
    else if(*info->p == '[') {
        if(!skip_paren('[', ']', info)) {
            return FALSE;
        }
    }
    else if(*info->p == '<') {
        if(!skip_paren('<', '>', info)) {
            return FALSE;
        }
    }
    else {
        parser_err_msg(info, "Require (,{,[ or <");
        info->err_num++;
        return TRUE;
    }

    sBuf params;
    sBuf_init(&params);

    sBuf_append(&params, p, info->p-p-1);

    skip_spaces_and_lf(info);

    if(!call_macro(node, name2, params.mBuf, info)) {
        return FALSE;
    }

    free(params.mBuf);

    return TRUE;
}

static void parse_version(int* version, sParserInfo* info)
{
    if(parse_cmp(info->p, "version") == 0) {
        info->p += 7;
        skip_spaces_and_lf(info);

        *version = 0;
        while(isdigit(*info->p)) {
            *version = *version * 10 + (*info->p - '0');
            info->p++;
            skip_spaces_and_lf(info);
        }

        skip_spaces_and_lf(info);
    }
}

static BOOL write_to_automatically_header(sBuf* buf)
{
    char path[PATH_MAX];
    snprintf(path, PATH_MAX, "%s.h", gMainModulePath);

    FILE* f = fopen(path, "a");

    if(f == NULL) {
        fprintf(stderr, "can't open automatically header target file. %s\n", path);
        return FALSE;
    }

    fprintf(f, "%s", buf->mBuf);

    fclose(f);

    return TRUE;
}

BOOL get_number(BOOL minus, unsigned int* node, sParserInfo* info)
{
    const int buf_size = 128;
    char buf[128+1];
    char* p2 = buf;

    if(minus) {
        *p2 = '-';
        p2++;
    }

    if(isdigit(*info->p)) {
        while(isdigit(*info->p) || *info->p == '_') {
            if(*info->p ==  '_') {
                info->p++;
            }
            else {
                *p2++ = *info->p;
                info->p++;
            }

            if(p2 - buf >= buf_size) {
                parser_err_msg(info, "overflow node of number");
                return FALSE;
            }
        };
        *p2 = 0;
        skip_spaces_and_lf(info);

        if(*info->p == 'u' || *info->p == 'U')
        {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);

                if(*info->p == 'L' || *info->p == 'l')
                {
                    info->p++;
                    skip_spaces_and_lf(info);

                    *node = sNodeTree_create_ulong_value(atoll(buf), info);
                }
                else {
                    *node = sNodeTree_create_ulong_value(atoll(buf), info);
                }
            }
            else {
                *node = sNodeTree_create_uint_value(atoi(buf), info);
            }
        }
        else if(*info->p == 'L' || *info->p == 'l') {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);

                *node = sNodeTree_create_long_value(atoll(buf), info);
            }
            else if(*info->p == 'U' || *info->p == 'u')
            {
                info->p++;
                skip_spaces_and_lf(info);

                *node = sNodeTree_create_ulong_value(atoll(buf), info);
            }
            else {
                *node = sNodeTree_create_long_value(atoll(buf), info);
            }
        }
        else {
            *node = sNodeTree_create_int_value(atoi(buf), info);
        }
    }
    else {
        parser_err_msg(info, "require digits after + or -");
        info->err_num++;

        *node = 0;
    }

    return TRUE;
}

static void create_anoymous_struct_name(char* struct_name, int size_struct_name)
{
    static int anonymous_struct_num = 0;
    snprintf(struct_name, size_struct_name, "anon%d", anonymous_struct_num++);
}

static BOOL parse_type(sNodeType** result_type, sParserInfo* info, char* func_pointer_name, BOOL definition_llvm_type, BOOL definition_typedef, BOOL parse_only, BOOL* define_struct_only);

static BOOL parse_attribute(sParserInfo* info, char* asm_fname)
{
    asm_fname[0] = '\0';

    while(TRUE) {
        if(parse_cmp(info->p, "__attribute_pure__") == 0) {
            info->p += 18;
            skip_spaces_and_lf(info);
        }
        else if(parse_cmp(info->p, "__wur") == 0) {
            info->p += 5;
            skip_spaces_and_lf(info);
        }
        else if(parse_cmp(info->p, "__noreturn") == 0) {
            info->p += 10;
            skip_spaces_and_lf(info);
        }
        else if(parse_cmp(info->p, "__attribute__") == 0) {
            info->p += 13;
            skip_spaces_and_lf(info);

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

            skip_spaces_and_lf(info);
        }
        else if(parse_cmp(info->p, "__asm__") == 0) {
            info->p += 7;
            skip_spaces_and_lf(info);

            int len = 0;
            asm_fname[len] = '\0';

            BOOL in_dquort = FALSE;
            int brace_num = 0;
            while(*info->p) {
                if(*info->p == '"') {
                    info->p++;

                    in_dquort = !in_dquort;
                }
                else if(in_dquort) {
                    asm_fname[len++] = *info->p++;
                    asm_fname[len] = '\0';
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

            skip_spaces_and_lf(info);
        }
#ifdef __DARWIN__
        else if(parse_cmp(info->p, "__asm") == 0) {
            info->p += 5;
            skip_spaces_and_lf(info);
            int len = 0;
            asm_fname[len] = '\0';

            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf(info);
            }

            BOOL in_dquort = FALSE;
            BOOL first_underbar = TRUE;
            while(*info->p) {
                if(*info->p == '"') {
                    info->p++;

                    in_dquort = !in_dquort;
                }
                else if(in_dquort) {
                    if(first_underbar) {
                        info->p++;
                        first_underbar = FALSE;
                    }
                    else {
                        asm_fname[len++] = *info->p++;
                        asm_fname[len] = '\0';
                    }
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
#else
        else if(parse_cmp(info->p, "__asm") == 0) {
            info->p += 5;
            skip_spaces_and_lf(info);

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

            skip_spaces_and_lf(info);
        }
#endif
        else {
            break;
        }
    }

    return TRUE;
}

static BOOL parse_typedef_attribute(sParserInfo* info)
{
    while(TRUE) {
        if(parse_cmp(info->p, "__attribute__") == 0) {
            info->p += 13;
            skip_spaces_and_lf(info);

            int brace_num = 0;
            while(*info->p == '(') {
                info->p ++;
                skip_spaces_and_lf(info);
                brace_num++;
            }

            while(*info->p != ')') {
                info->p++;
            }

            while(*info->p == ')') {
                info->p ++;
                skip_spaces_and_lf(info);
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

static BOOL parse_variable_name(char* buf, int buf_size, sParserInfo* info, sNodeType* node_type, BOOL array_size_is_dynamic, BOOL param_in_function)
{
    if(*info->p == '#') {
        if(!parse_sharp(info)) {
            return FALSE;
        }
    }

    if(*info->p == '*') {
        int num_pointers = 0;
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);
            num_pointers++;
        }

        node_type->mPointerNum = num_pointers;
    }

    if(*info->p == '[') {
        buf[0] = '\0';
    }
    else if(*info->p == ':') {
        buf[0] = '\0';
    }
    else {
        if(!parse_word(buf, buf_size, info, TRUE, FALSE)) {
            return FALSE;
        }

        if(strcmp(buf, "const") == 0) {
            if(!parse_word(buf, buf_size, info, TRUE, FALSE)) {
                return FALSE;
            }
        }
    }

    if(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf(info);

        if(array_size_is_dynamic && info->mBlockLevel > 0) {
            if(isdigit(*info->p)) {
                if(*info->p != ']') {
                    unsigned int array_size_node = 0;

                    if(!expression(&array_size_node, info)) {
                        return FALSE;
                    }

                    int array_size = 0;
                    if(!get_const_value_from_node(&array_size, array_size_node, info))
                    {
                        parser_err_msg(info, "Require Consta Value for array size");
                        info->err_num++;
                        return TRUE;
                    }

                    if(param_in_function) {
                        expect_next_character_with_one_forward("]", info);

                        node_type->mPointerNum++;
                    }
                    else {
                        expect_next_character_with_one_forward("]", info);

                        node_type->mArrayDimentionNum = 1;
                        node_type->mArrayNum[0] = array_size;

                        while(*info->p == '[') {
                            info->p++;
                            skip_spaces_and_lf(info);

                            unsigned int array_size_node = 0;

                            if(!expression(&array_size_node, info)) {
                                return FALSE;
                            }

                            int array_size = 0;
                            if(!get_const_value_from_node(&array_size, array_size_node, info))
                            {
                                parser_err_msg(info, "Require Consta Value for array size");
                                info->err_num++;
                                return TRUE;
                            }

                            node_type->mArrayNum[node_type->mArrayDimentionNum] = array_size;
                            node_type->mArrayDimentionNum++;

                            if(node_type->mArrayDimentionNum >= ARRAY_DIMENTION_MAX) 
                            {
                                parser_err_msg(info, "overflow array dimetion number");
                                return FALSE;
                            }

                            expect_next_character_with_one_forward("]", info);
                        }
                    }

                    if(*info->p == '=') {
                        node_type->mDynamicArrayNum= -1;
                        node_type->mPointerNum++;
                        node_type->mArrayDimentionNum = 0;
                    }
                }
                else {
                    node_type->mDynamicArrayNum= -1;

                    node_type->mPointerNum++;

                    expect_next_character_with_one_forward("]", info);
                }
            }
            else {
                if(*info->p != ']') {
                    if(!expression(&node_type->mDynamicArrayNum, info)) 
                    {
                        return FALSE;
                    }
                }
                else {
                    node_type->mDynamicArrayNum= -1;
                }

                node_type->mPointerNum++;

                expect_next_character_with_one_forward("]", info);
            }
        }
        else {
            if(*info->p != ']') {
                unsigned int array_size_node = 0;

                if(!expression(&array_size_node, info)) {
                    return FALSE;
                }

                int array_size = 0;
                if(!get_const_value_from_node(&array_size, array_size_node, info))
                {
                    parser_err_msg(info, "Require Consta Value for array size");
                    info->err_num++;
                    return TRUE;
                }

                if(param_in_function) {
                    node_type->mPointerNum++;

                    expect_next_character_with_one_forward("]", info);

                    while(*info->p == '[') {
                        info->p++;
                        skip_spaces_and_lf(info);

                        unsigned int array_size_node = 0;

                        if(!expression(&array_size_node, info)) {
                            return FALSE;
                        }

                        node_type->mPointerNum++;

                        expect_next_character_with_one_forward("]", info);
                    }
                }
                else {
                    expect_next_character_with_one_forward("]", info);

                    node_type->mArrayDimentionNum = 1;
                    node_type->mArrayNum[0] = array_size;

                    while(*info->p == '[') {
                        info->p++;
                        skip_spaces_and_lf(info);

                        unsigned int array_size_node = 0;

                        if(!expression(&array_size_node, info)) {
                            return FALSE;
                        }

                        int array_size = 0;
                        if(!get_const_value_from_node(&array_size, array_size_node, info))
                        {
                            parser_err_msg(info, "Require Consta Value for array size");
                            info->err_num++;
                            return TRUE;
                        }

                        node_type->mArrayNum[node_type->mArrayDimentionNum] = array_size;
                        node_type->mArrayDimentionNum++;

                        if(node_type->mArrayDimentionNum >= ARRAY_DIMENTION_MAX) 
                        {
                            parser_err_msg(info, "overflow array dimetion number");
                            return FALSE;
                        }

                        expect_next_character_with_one_forward("]", info);
                    }
                }
            }
            else {
                expect_next_character_with_one_forward("]", info);

                if(*info->p == '=') {
                    node_type->mArrayDimentionNum = -1;
                }
                else {
                    node_type->mPointerNum++;
                    node_type->mArrayDimentionNum = 0;
                }
            }
        }
    }
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf(info);

        int n = 0;
        while(isdigit(*info->p)) {
            n = n * 10 + *info->p - '0';
            info->p++;
        }
        skip_spaces_and_lf(info);

        node_type->mSizeNum = n;
    }

    char asm_fname[VAR_NAME_MAX];
    if(!parse_attribute(info, asm_fname)) {
        return FALSE;
    }

    return TRUE;
}

BOOL parse_sharp(sParserInfo* info)
{
    skip_spaces_and_lf(info);

    if(*info->p == '#') {
        info->p++;
        skip_spaces_and_lf(info);

        if(isdigit(*info->p)) {
            int line = 0;
            char fname[PATH_MAX];

            while(isdigit(*info->p)) {
                line = line * 10 + (*info->p - '0');
                info->p++;
            }
            skip_spaces_and_lf(info);

            if(*info->p == '"') {
                info->p++;

                char* p = fname;

                while(*info->p != '"') {
                    *p++ = *info->p++;
                };
                *p = '\0';

                while(*info->p != '\n') {
                    info->p++;
                }
                info->p++;
            }

            info->sline = line;
            info->sline_top = line;
            xstrncpy(info->sname, fname, PATH_MAX);
            info->change_sline = TRUE;

            skip_spaces_and_lf(info);
        }
        else {
            while(TRUE) {
                if(*info->p == '\n') {
                    info->p++;
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

        skip_spaces_and_lf(info);
 
        info->sline_top = info->sline;
    }

    return TRUE;
}

static BOOL parse_struct(unsigned int* node, char* struct_name, int size_struct_name, BOOL* define_struct_only, sParserInfo* info) 
{
    *define_struct_only = FALSE;
    char* head_of_struct = info->p;

    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);

    int sline = info->sline;

    int num_fields = 0;
    char* field_names[STRUCT_FIELD_MAX];
    sNodeType* fields[STRUCT_FIELD_MAX];

    BOOL anonymous = FALSE;
    BOOL undefined_struct = FALSE;

    int version = 0;

    /// already get struct name ///
    if(strcmp(struct_name, "") != 0)
    {
    }
    /// anonymous struct ///
    else if(*info->p == '{') {
        anonymous = TRUE;
        create_anoymous_struct_name(struct_name, size_struct_name);
    }
    /// normal struct ///
    else {
        char buf[VAR_NAME_MAX];
        if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
            return FALSE;
        }

        xstrncpy(struct_name, buf, size_struct_name);

        info->mNumGenerics = 0;

        /// undefined struct ///
        if(*info->p == ';') {
            undefined_struct = TRUE;
        }
        else if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf(info);

            int num_generics = 0;

            while(TRUE) {
                char buf[VAR_NAME_MAX];
                if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
                    return FALSE;
                }

                info->mGenericsTypeNames[num_generics] = strdup(buf);
                num_generics++;

                if(num_generics >= GENERICS_TYPES_MAX)
                {
                    parser_err_msg(info, "overflow generics types");
                    return FALSE;
                }

                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    parser_err_msg(info, "require , or > character");
                    info->err_num++;
                    break;
                }
            }

            info->mNumGenerics = num_generics;
        }

        parse_version(&version, info);
    }

    if(undefined_struct) {
        sCLClass* struct_class = get_class(struct_name);

        if(struct_class == NULL) {
            struct_class = alloc_struct(struct_name, anonymous);

            if(info->parse_struct_phase) {
                if(version < struct_class->mVersion)
                {
                    char msg[1024];
                    snprintf(msg, 1024, "Redifineded the same struct version %s", struct_name);
                    parser_err_msg(info, msg);
                    info->err_num++;
                }
                else {
                    struct_class->mVersion = version;
                }
            }

            xstrncpy(info->parse_struct_name, struct_name, VAR_NAME_MAX);

            sNodeType* struct_type = create_node_type_with_class_pointer(struct_class);

            create_undefined_llvm_struct_type(struct_type);

            *node = sNodeTree_struct(struct_type, info, sname, sline, anonymous);
        }
        else {
            sNodeType* struct_type = create_node_type_with_class_pointer(struct_class);

            *node = sNodeTree_struct(struct_type, info, sname, sline, anonymous);
        }
    }
    else {
        expect_next_character_with_one_forward("{", info);

        sCLClass* struct_class = get_class(struct_name);

        if(struct_class == NULL) {
            struct_class = alloc_struct(struct_name, anonymous);
        }

        xstrncpy(info->parse_struct_name, struct_name, VAR_NAME_MAX);

        int n = 0;
        while(TRUE) {
            if(*info->p == '#') {
                if(!parse_sharp(info)) {
                    return FALSE;
                }
            }
            char asm_fname[VAR_NAME_MAX];
            if(!parse_attribute(info, asm_fname)) {
                return FALSE;
            }

            sNodeType* field = NULL;
            char buf[VAR_NAME_MAX];
            BOOL define_struct_only = FALSE;
            if(!parse_type(&field, info, buf, FALSE, FALSE, FALSE, &define_struct_only)) {
                return FALSE;
            }

            if(!parse_attribute(info, asm_fname)) {
                return FALSE;
            }

            char saved_buf[VAR_NAME_MAX];
            xstrncpy(saved_buf, buf, VAR_NAME_MAX);

            sNodeType* saved_field = clone_node_type(field);

            fields[num_fields] = field;

            if(field->mClass->mFlags & CLASS_FLAGS_ANONYMOUS_VAR_NAME)
            {
                create_anonymous_union_var_name(buf, VAR_NAME_MAX);
            }
            else if(buf[0] == '\0') {
                if(!parse_variable_name(buf, VAR_NAME_MAX, info, field, FALSE, FALSE))
                {
                    return FALSE;
                }
            }

            if(!parse_attribute(info, asm_fname)) {
                return FALSE;
            }

            field_names[num_fields] = strdup(buf);

            num_fields++;

            if(num_fields >= STRUCT_FIELD_MAX) {
                parser_err_msg(info, "overflow struct field");

                int i;
                for(i=0; i<num_fields; i++) {
                    free(field_names[i]);
                }
                return FALSE;
            }

            if(*info->p == ',') {
                while(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    char buf2[VAR_NAME_MAX];
                    xstrncpy(buf2, saved_buf, VAR_NAME_MAX);

                    sNodeType* field2 = clone_node_type(saved_field);

                    fields[num_fields] = field2;

                    if(field2->mClass->mFlags & CLASS_FLAGS_ANONYMOUS_VAR_NAME)
                    {
                        create_anonymous_union_var_name(buf2, VAR_NAME_MAX);
                    }
                    else if(buf2[0] == '\0') {
                        if(!parse_variable_name(buf2, VAR_NAME_MAX, info, field2, FALSE, FALSE))
                        {
                            int i;
                            for(i=0; i<num_fields; i++) {
                                free(field_names[i]);
                            }
                            return FALSE;
                        }
                    }

                    field_names[num_fields] = strdup(buf2);

                    num_fields++;

                    if(num_fields >= STRUCT_FIELD_MAX) {
                        parser_err_msg(info, "overflow struct field");
                        int i;
                        for(i=0; i<num_fields; i++) {
                            free(field_names[i]);
                        }
                        return FALSE;
                    }
                }
            }

            if(!parse_attribute(info, asm_fname)) {
                int i;
                for(i=0; i<num_fields; i++) {
                    free(field_names[i]);
                }
                return FALSE;
            }

            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            }

            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p == '#') {
                if(!parse_sharp(info)) {
                    int i;
                    for(i=0; i<num_fields; i++) {
                        free(field_names[i]);
                    }
                    return FALSE;
                }

                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
            }
        }

        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);

            *define_struct_only = TRUE;

            if(anonymous) {
                struct_class->mFlags |= CLASS_FLAGS_ANONYMOUS_VAR_NAME;
            }
        }

        undefined_struct = struct_class->mUndefinedStructType != NULL;

        if((info->parse_block || info->parse_struct_phase) && (struct_class->mNumFields == 0 || version > struct_class->mVersion))  
        {
            add_fields_to_struct(struct_class, num_fields, field_names, fields);
        }

        int i;
        for(i=0; i<num_fields; i++) {
            free(field_names[i]);
        }

        if(info->parse_struct_phase) {
            if(version < struct_class->mVersion)
            {
                char msg[1024];
                snprintf(msg, 1024, "Redifineded the same struct version %s", struct_name);
                parser_err_msg(info, msg);
                info->err_num++;
            }
            else {
                struct_class->mVersion = version;
            }
        }

        sNodeType* struct_type = create_node_type_with_class_pointer(struct_class);

        *node = sNodeTree_struct(struct_type, info, sname, sline, anonymous);

        sCLClass* checked_class[STRUCT_FIELD_MAX];
        int num_checked_class = 0;
        if(undefined_struct && !included_generics_type(struct_type, checked_class, &num_checked_class)) 
        {
            sCompileInfo cinfo;
            memset(&cinfo, 0, sizeof(sCompileInfo));

            new_right_value_objects_container(&cinfo);

            cinfo.no_output = TRUE;
            cinfo.pinfo = info;

            if(info->parse_block || info->parse_struct_phase) 
            {
                if(!create_llvm_struct_type(struct_type, struct_type, TRUE, &cinfo))
                {
                    parser_err_msg(info, "Can't create llvm struct from this node type");
                    show_node_type(struct_type);
                    return FALSE;
                }
            }
        }
    }

    char asm_fname[VAR_NAME_MAX];
    if(!parse_attribute(info, asm_fname)) {
        return FALSE;
    }

    info->mNumGenerics = 0;

    return TRUE;
}

static BOOL parse_union(unsigned int* node, char* union_name, int size_union_name, sParserInfo* info) 
{
    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);

    int sline = info->sline;

    int num_fields = 0;
    char* field_names[STRUCT_FIELD_MAX];
    sNodeType* fields[STRUCT_FIELD_MAX];

    BOOL anonymous = FALSE;
    BOOL undefined_struct = FALSE;

    /// anonymous union ///
    if(*info->p == '{') {
        anonymous = TRUE;
        create_anoymous_struct_name(union_name, size_union_name);
    }
    /// normal union ///
    else {
        char buf[VAR_NAME_MAX];
        if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
            return FALSE;
        }

        xstrncpy(union_name, buf, size_union_name);

        info->mNumGenerics = 0;

        /// undefined struct ///
        if(*info->p == ';') {
            undefined_struct = TRUE;
        }
    }

    if(undefined_struct) {
        sCLClass* union_class = get_class(union_name);

        if(union_class == NULL) {
            union_class = alloc_union(union_name, anonymous, FALSE);

            sNodeType* union_type = create_node_type_with_class_pointer(union_class);

            create_undefined_llvm_struct_type(union_type);

            *node = sNodeTree_union(union_type, info, sname, sline, anonymous);
        }
        else {
            sNodeType* union_type = create_node_type_with_class_pointer(union_class);

            *node = sNodeTree_union(union_type, info, sname, sline, anonymous);
        }
    }
    else {
        expect_next_character_with_one_forward("{", info);

        sCLClass* union_class = get_class(union_name);

        if(union_class == NULL) {
            union_class = alloc_union(union_name, anonymous, FALSE);
        }

        int n = 0;
        while(TRUE) {
            if(*info->p == '#') {
                if(!parse_sharp(info)) {
                    return FALSE;
                }
            }
            char asm_fname[VAR_NAME_MAX];
            if(!parse_attribute(info, asm_fname)) {
                return FALSE;
            }

            sNodeType* field = NULL;
            char buf[VAR_NAME_MAX];
            BOOL define_struct_only = FALSE;
            if(!parse_type(&field, info, buf, FALSE, FALSE, FALSE, &define_struct_only)) {
                return FALSE;
            }

            fields[num_fields] = field;

            if(!parse_attribute(info, asm_fname)) {
                return FALSE;
            }

            if(field->mClass->mFlags & CLASS_FLAGS_ANONYMOUS_VAR_NAME)
            {
                create_anonymous_union_var_name(buf, VAR_NAME_MAX);
            }
            else if(buf[0] == '\0') {
                if(!parse_variable_name(buf, VAR_NAME_MAX, info, field, FALSE, FALSE))
                {
                    return FALSE;
                }
            }

            field_names[num_fields] = strdup(buf);
            num_fields++;

            if(!parse_attribute(info, asm_fname)) {
                int i;
                for(i=0; i<num_fields; i++) {
                    free(field_names[i]);
                }
                return FALSE;
            }

            if(num_fields >= STRUCT_FIELD_MAX) {
                parser_err_msg(info, "overflow struct field");
                int i;
                for(i=0; i<num_fields; i++) {
                    free(field_names[i]);
                }
                return FALSE;
            }

            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            }

            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }

        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);

            if(anonymous) {
                union_class->mFlags |= CLASS_FLAGS_ANONYMOUS_VAR_NAME;
            }
        }

        undefined_struct = union_class->mUndefinedStructType != NULL;

        if(info->parse_struct_phase || info->mBlockLevel > 0) {
            add_fields_to_union(union_class, num_fields, field_names, fields);
        }

        int i;
        for(i=0; i<num_fields; i++) {
            free(field_names[i]);
        }

        sNodeType* union_type = create_node_type_with_class_pointer(union_class);

        *node = sNodeTree_union(union_type, info, sname, sline, anonymous);

        sCLClass* checked_class[STRUCT_FIELD_MAX];
        int num_checked_class = 0;
        if(undefined_struct && !included_generics_type(union_type, checked_class, &num_checked_class)) 
        {
            sCompileInfo cinfo;
            memset(&cinfo, 0, sizeof(sCompileInfo));
            cinfo.no_output = TRUE;

            new_right_value_objects_container(&cinfo);

            if(info->parse_block || info->parse_struct_phase) 
            {
                if(!create_llvm_union_type(union_type, union_type, &cinfo))
                {
                    parser_err_msg(info, "Can't create llvm union from this node type");
                    show_node_type(union_type);
                    return FALSE;
                }
            }
        }
    }

    return TRUE;
}

static BOOL parse_anonymous_enum(unsigned int* node, sParserInfo* info) 
{
    expect_next_character_with_one_forward("{", info);

    BOOL no_comma_operator = info->no_comma_operator;
    info->no_comma_operator = TRUE;

    int value = 0;

    while(TRUE) {
        char asm_fname[VAR_NAME_MAX];
        if(!parse_attribute(info, asm_fname)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];
        if(!parse_word(var_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
        {
            return FALSE;
        }

        if(!parse_attribute(info, asm_fname)) {
            return FALSE;
        }


        if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int node2;
            if(!expression(&node2, info)) {
                return FALSE;
            }

            if(!get_const_value_from_node(&value, node2, info))
            {
                return FALSE;
            }
        }

        sVar* var_ = get_variable_from_this_table_only(info->lv_table, var_name);

        if(var_ == NULL) {
            unsigned int right_node = sNodeTree_create_int_value(value, info);

            BOOL alloc_ = TRUE;
            *node = sNodeTree_create_store_variable(var_name, right_node, alloc_, info);

            sNodeType* result_type = create_node_type_with_class_name("int");
            result_type->mConstant = TRUE;

            check_already_added_variable(info->lv_table, var_name, info);
            BOOL readonly = TRUE;
            if(!add_variable_to_table(info->lv_table, var_name, result_type, readonly, NULL, -1, info->mBlockLevel == 0, result_type->mConstant))
            {
                fprintf(stderr, "overflow variable table\n");
                exit(2);
            }

            sCompileInfo cinfo;
            memset(&cinfo, 0, sizeof(sCompileInfo));

            new_right_value_objects_container(&cinfo);

            cinfo.pinfo = info;

            if(!compile(*node, &cinfo)) 
            {
                return FALSE;
            }

            dec_stack_ptr(1, &cinfo);
        }

        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }

        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }

        value++;
    }

    info->no_comma_operator = no_comma_operator;

    *node = sNodeTree_create_null(info);

    return TRUE;
}

BOOL parse_enum(unsigned int* node, char* name, sParserInfo* info) 
{
    expect_next_character_with_one_forward("{", info);

    BOOL no_comma_operator = info->no_comma_operator;
    info->no_comma_operator = TRUE;

    int value = 0;

    while(TRUE) {
        char asm_fname[VAR_NAME_MAX];
        if(!parse_attribute(info, asm_fname)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];
        if(!parse_word(var_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
        {
            return FALSE;
        }
        if(!parse_attribute(info, asm_fname)) {
            return FALSE;
        }


        if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int node2;
            if(!expression(&node2, info)) {
                return FALSE;
            }

            if(!get_const_value_from_node(&value, node2, info))
            {
                return FALSE;
            }
        }

        sVar* var_ = get_variable_from_this_table_only(info->lv_table, var_name);

        if(var_ == NULL) {
            unsigned int right_node = sNodeTree_create_int_value(value, info);

            BOOL alloc_ = TRUE;
            *node = sNodeTree_create_store_variable(var_name, right_node, alloc_, info);

            sNodeType* result_type = create_node_type_with_class_name("int");
            result_type->mConstant = TRUE;

            check_already_added_variable(info->lv_table, var_name, info);
            BOOL readonly = TRUE;
            if(!add_variable_to_table(info->lv_table, var_name, result_type, readonly, NULL, -1, info->mBlockLevel == 0, result_type->mConstant))
            {
                fprintf(stderr, "overflow variable table\n");
                exit(2);
            }

            sCompileInfo cinfo;
            memset(&cinfo, 0, sizeof(sCompileInfo));

            new_right_value_objects_container(&cinfo);

            cinfo.pinfo = info;

            if(!compile(*node, &cinfo)) 
            {
                return FALSE;
            }

            dec_stack_ptr(1, &cinfo);
        }

        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }

        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }

        value++;
    }

    if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf(info);
    };

    *node = sNodeTree_create_null(info);

    if(strcmp(name, "") != 0) {
        (void)alloc_enum(name);
    }

    info->no_comma_operator = no_comma_operator;

    return TRUE;
}

static BOOL is_type_name(char* buf, sParserInfo* info)
{
    if(strcmp(buf, "") == 0) {
        return FALSE;
    }

    sCLClass* klass = get_class(buf);
    sNodeType* node_type = get_typedef(buf);

    int i;
    BOOL generics_type_name = FALSE;
    for(i=0; i<info->mNumGenerics; i++) {
        if(strcmp(buf, info->mGenericsTypeNames[i]) == 0)
        {
            generics_type_name = TRUE;
        }
    }

    BOOL method_type_name = FALSE;
    for(i=0; i<info->mNumMethodGenericsTypes; i++) {
        if(strcmp(buf, info->mMethodGenericsTypeNames[i]) == 0)
        {
            method_type_name = TRUE;
        }
    }

    BOOL string_function = strcmp(buf, "string") == 0 && *info->p == '(';
    BOOL wstring_function = strcmp(buf, "wstring") == 0 && *info->p == '(';
    BOOL regex_function = strcmp(buf, "regex") == 0 && *info->p == '(';

    if(string_function || wstring_function || regex_function)
    {
        return FALSE;
    }

    return klass || node_type || generics_type_name || method_type_name || strcmp(buf, "const") == 0 || strcmp(buf, "static") == 0|| (strcmp(buf, "struct") == 0 && *info->p == '{') || (strcmp(buf, "struct") == 0) || (strcmp(buf, "union") == 0) || (strcmp(buf, "union") == 0 && *info->p == '{') || (strcmp(buf, "unsigned") == 0) || (strcmp(buf, "signed") == 0) || (strcmp(buf, "__signed") == 0) ||(strcmp(buf, "short") == 0) || (strcmp(buf, "long") == 0) || (strcmp(buf, "signed") == 0) || (strcmp(buf, "register") == 0) || (strcmp(buf, "volatile") == 0) || strcmp(buf, "enum") == 0 || strcmp(buf, "__signed__") == 0 || (strcmp(buf, "__extension__") == 0 && *info->p != '(') || (strcmp(buf, "__uniq__") == 0)|| strcmp(buf, "typeof") == 0|| strcmp(buf, "_Noreturn") == 0 || strcmp(buf, "_Alignas") == 0;
}

static BOOL is_premitive_type(char* buf, sParserInfo* info)
{
    sCLClass* klass = get_class(buf);

    if(klass == NULL) {
        return FALSE;
    }

    return klass->mFlags & CLASS_FLAGS_PRIMITIVE;
}

static BOOL parse_params(sParserParam* params, int* num_params, sParserInfo* info, int character_type, BOOL* var_arg);

static BOOL parse_type(sNodeType** result_type, sParserInfo* info, char* func_pointer_name, BOOL definition_llvm_type, BOOL definition_typedef, BOOL parse_only, BOOL* define_struct_only)
{
    if(func_pointer_name) {
        func_pointer_name[0] = '\0';
    }

    BOOL uniq = FALSE;

    if(parse_cmp(info->p, "__extension__") == 0)
    {
        info->p += 13;
        skip_spaces_and_lf(info);
    }
    if(parse_cmp(info->p, "__uniq__") == 0)
    {
        uniq = TRUE;
        info->p += 8;
        skip_spaces_and_lf(info);
    }

    if(parse_cmp(info->p, "_Noreturn") == 0)
    {
        info->p += 9;
        skip_spaces_and_lf(info);
    }
    if(parse_cmp(info->p, "_Alignas") == 0)
    {
        info->p += 8;
        skip_spaces_and_lf(info);

        expect_next_character_with_one_forward("(", info);
        while(isdigit(*info->p)) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        expect_next_character_with_one_forward(")", info);
    }


    char type_name[VAR_NAME_MAX];

    *result_type = NULL;

    BOOL heap = FALSE;
    BOOL nullable = FALSE;
    BOOL constant = FALSE;
    BOOL unsigned_ = FALSE;
    BOOL long_ = FALSE;
    BOOL short_ = FALSE;
    BOOL long_long = FALSE;
    BOOL register_ = FALSE;
    BOOL volatile_ = FALSE;
    BOOL static_ = FALSE;
    BOOL signed_ = FALSE;
    BOOL no_heap = FALSE;
    BOOL managed_ = FALSE;
    int pointer_num = 0;

    while(TRUE) {
        char* p_before = info->p;
        int sline_before = info->sline;

        if(!parse_word(type_name, VAR_NAME_MAX, info, FALSE, FALSE)) 
        {
            return FALSE;
        }

        if(strcmp(type_name, "const") == 0) {
            constant = TRUE;
        }
        else if(strcmp(type_name, "unsigned") == 0) {
            unsigned_ = TRUE;
        }
        else if(strcmp(type_name, "signed") == 0 || strcmp(type_name, "__signed__") == 0 || strcmp(type_name, "__signed") == 0) {
            unsigned_ = FALSE;
            signed_ = TRUE;
        }
        else if(strcmp(type_name, "register") == 0) {
            register_ = TRUE;
        }
        else if(strcmp(type_name, "volatile") == 0) {
            volatile_ = TRUE;
        }
        else if(strcmp(type_name, "static") == 0) {
            static_ = TRUE;
        }
        else {
            info->p = p_before;
            info->sline = sline_before;
            break;
        }
    }

    BOOL only_signed_unsigned = FALSE;
    if(unsigned_ || signed_) {
        char* p_before = info->p;
        int sline_before = info->sline;

        char buf[VAR_NAME_MAX+1];
        if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
        {
            return FALSE;
        }

        if(is_premitive_type(buf, info)) {
            info->p = p_before;
            info->sline = sline_before;

            if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
            {
                return FALSE;
            }
        }
        else {
            info->p = p_before;
            info->sline = sline_before;

            only_signed_unsigned = TRUE;
        }
    }
    else {
        if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
        {
            return FALSE;
        }
    }

    if(only_signed_unsigned) {
        *result_type = create_node_type_with_class_name("int");
    }
    else {
        BOOL define_struct = FALSE;
        BOOL define_union = FALSE;
        BOOL undefined_struct = FALSE;

        if(strcmp(type_name, "long") == 0) {
            if(parse_cmp(info->p, "unsigned") == 0)
            {
                long_ = TRUE;
                unsigned_ = TRUE;

                if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
                {
                    return FALSE;
                }

                if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
                {
                    return FALSE;
                }
            }
            else if(parse_cmp(info->p, "int") == 0 || parse_cmp(info->p, "double") == 0) 
            {
                long_ = TRUE;

                if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
                {
                    return FALSE;
                }
            }
            else if(parse_cmp(info->p, "long") == 0) {
                long_ = TRUE;

                if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
                {
                    return FALSE;
                }

                if(strcmp(type_name, "long") == 0) {
                    char* p = info->p;
                    int sline = info->sline;

                    if(!parse_word(type_name, VAR_NAME_MAX, info, FALSE, FALSE)) 
                    {
                        return FALSE;
                    }

                    long_long = TRUE;

                    if(strcmp(type_name, "int") == 0)
                    {
                        long_long = TRUE;
                    }
                    else if(!is_type_name(type_name, info))
                    {
                        info->p = p;
                        info->sline = sline;

                        *result_type = create_node_type_with_class_name("int");

                        long_long = TRUE;
                    }
                    else {
                        long_long = TRUE;
                        
                        *result_type = create_node_type_with_class_name("int");

                        info->p = p;
                        info->sline = sline;
                    }
                }
            }
        }
        else if(strcmp(type_name, "short") == 0)
        {
            char* p = info->p;
            int sline = info->sline;

            if(!parse_word(type_name, VAR_NAME_MAX, info, FALSE, FALSE)) 
            {
                return FALSE;
            }

            if(strcmp(type_name, "int") == 0)
            {
                short_ = TRUE;
            }
            else if(!is_type_name(type_name, info))
            {
                info->p = p;
                info->sline = sline;

                *result_type = create_node_type_with_class_name("int");

                short_ = TRUE;
            }
            else {
                info->p = p;
                info->sline = sline;

                *result_type = create_node_type_with_class_name("int");

                short_ = TRUE;
            }
        }
        else if(strcmp(type_name, "struct") == 0 && (isalpha(*info->p) || *info->p == '_')) 
        {
            char buf[VAR_NAME_MAX];

            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) 
            {
                return FALSE;
            }

            if(*info->p == '{') {
                define_struct = TRUE;

                xstrncpy(type_name, buf, VAR_NAME_MAX);
            }
            else {
                xstrncpy(type_name, buf, VAR_NAME_MAX);

                sCLClass* klass = get_class(type_name);

                char* p_before = info->p;
                int sline = info->sline;

                char buf2[VAR_NAME_MAX];
                parse_word(buf2, VAR_NAME_MAX, info, FALSE, FALSE);

                info->p = p_before;
                info->sline = sline;

                if(strcmp(buf2, "version") == 0)
                {
                    define_struct = FALSE;

                }
                if(klass == NULL && definition_typedef)
                {
                    undefined_struct = TRUE;
                }
                else if(klass == NULL && *info->p == '*' && strcmp(info->parse_struct_name, type_name) != 0 && !parse_only)
                {
                    undefined_struct = TRUE;
                }
            }
        }
        else if(strcmp(type_name, "union") == 0 && (isalpha(*info->p) || *info->p == '_'))
        {
            if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
            {
                return FALSE;
            }

            if(*info->p == '{') {
                define_union = TRUE;
            }
        }
        else if(strcmp(type_name, "enum") == 0 && (isalpha(*info->p) || *info->p == '_')) {
            if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
            {
                return FALSE;
            }
        }

        int i;
        for(i=0; i<info->mNumGenerics; i++) {
            if(strcmp(type_name, info->mGenericsTypeNames[i]) == 0)
            {
                char buf[VAR_NAME_MAX+1];
                snprintf(buf, VAR_NAME_MAX, "generics%d", i);

                *result_type = create_node_type_with_class_name(buf);
            }
        }

        if(define_struct) {
            char struct_name[VAR_NAME_MAX];

            xstrncpy(struct_name, type_name, VAR_NAME_MAX);

            sCLClass* struct_class = get_class(struct_name);

            if(struct_class == NULL) 
            {
                struct_class = alloc_struct(struct_name, FALSE);
            }

            xstrncpy(info->parse_struct_name, struct_name, VAR_NAME_MAX);

            sNodeType* struct_type = create_node_type_with_class_pointer(struct_class);

            unsigned int node = 0;

            if(!parse_struct(&node, type_name, VAR_NAME_MAX, define_struct_only, info)) {
                return FALSE;
            }
        }
        else if(define_union) {
            char struct_name[VAR_NAME_MAX];

            xstrncpy(struct_name, type_name, VAR_NAME_MAX);

            sCLClass* struct_class = get_class(struct_name);

            if(struct_class == NULL) 
            {
                struct_class = alloc_union(struct_name, FALSE, FALSE);
            }

            sNodeType* struct_type = create_node_type_with_class_pointer(struct_class);

            unsigned int node = 0;

            if(!parse_union(&node, type_name, VAR_NAME_MAX, info)) {
                return FALSE;
            }
        }
        else if(undefined_struct) {
            sCLClass* struct_class = get_class(type_name);

            if(struct_class == NULL) {
                struct_class = alloc_struct(type_name, FALSE);

                xstrncpy(info->parse_struct_name, type_name, VAR_NAME_MAX);

                sNodeType* struct_type = create_node_type_with_class_pointer(struct_class);

                create_undefined_llvm_struct_type(struct_type);
            }
            else {
                xstrncpy(info->parse_struct_name, type_name, VAR_NAME_MAX);
            }
        }
        else if(strcmp(type_name, "struct") == 0 && *info->p == '{') {
            unsigned int node = 0;

            type_name[0] = '\0';

            if(!parse_struct(&node, type_name, VAR_NAME_MAX, define_struct_only, info)) {
                return FALSE;
            }
        }
        else if(strcmp(type_name, "union") == 0 && *info->p == '{') {
            unsigned int node = 0;
            if(!parse_union(&node, type_name, VAR_NAME_MAX, info)) {
                return FALSE;
            }
        }
        else if(strcmp(type_name, "enum") == 0 && *info->p == '{') 
        {
            unsigned int anonymous_enum_node = 0;
            if(!parse_anonymous_enum(&anonymous_enum_node, info)) {
                return FALSE;
            }

            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            };

            *result_type = create_node_type_with_class_name("int");
        }

        if(*result_type == NULL) {
            for(i=0; i<info->mNumMethodGenerics; i++) {
                if(strcmp(type_name, info->mMethodGenericsTypeNames[i]) == 0)
                {
                    char buf[VAR_NAME_MAX+1];
                    snprintf(buf, VAR_NAME_MAX, "mgenerics%d", i);

                    *result_type = create_node_type_with_class_name(buf);
                }
            }
        }

        if(*result_type == NULL) {
            *result_type = get_typedef(type_name);

            if(*result_type != NULL) {
                if(strcmp(CLASS_NAME((*result_type)->mClass), "long") == 0)
                {
                    long_long = TRUE;
                }

                BOOL remove_heap_mark = FALSE;
                if(*info->p == '&') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    remove_heap_mark = TRUE;
                }

                heap = (*result_type)->mHeap;
                nullable = (*result_type)->mNullable;
                constant = (*result_type)->mConstant;
                unsigned_ = (*result_type)->mUnsigned;
                register_ = (*result_type)->mRegister;
                volatile_ = (*result_type)->mVolatile;
                //static_ = (*result_type)->mStatic;
                no_heap = (*result_type)->mNoHeap;
                pointer_num = (*result_type)->mPointerNum;

                if(remove_heap_mark) {
                   heap = FALSE; 
                }

                xstrncpy((*result_type)->mTypeName, type_name, VAR_NAME_MAX);
            }
        }

        if(*result_type == NULL) {
            sCLClass* klass = get_class(type_name);

            if(klass) {
                *result_type = create_node_type_with_class_name(type_name);
            }
        }
    }

    if(strcmp(type_name, "typeof") == 0 && *info->p == '(')
    {
        info->p++;
        skip_spaces_and_lf(info);

        unsigned int node = 0;
        if(!expression(&node, info)) {
            return FALSE;
        };

        *result_type = create_node_type_with_class_name("TYPEOF");

        expect_next_character_with_one_forward(")", info);

        (*result_type)->mTypeOfExpression = node;
    }

    if(*result_type == NULL || (*result_type)->mClass == NULL) {
        if(!parse_only) {
            char msg[1024];
            snprintf(msg, 1024, "%s is not defined class(2)", type_name);
            parser_err_msg(info, msg);
            info->err_num++;
            return FALSE;
        }
        else {
            *result_type = create_node_type_with_class_name("int");
        }
    }

#ifdef __ISH__
    if(!long_long && type_identify_with_class_name((*result_type), "long"))
    {
        *result_type = create_node_type_with_class_name("int");
    }
#endif

    if(long_long && type_identify_with_class_name((*result_type), "int"))
    {
        *result_type = create_node_type_with_class_name("long");
    }

    if(long_ && type_identify_with_class_name((*result_type), "int"))
    {
        if(sizeof(long int) == 4) {
            *result_type = create_node_type_with_class_name("int");
        }
        else {
            *result_type = create_node_type_with_class_name("long");
        }
    }

    if((long_ || long_long ) && type_identify_with_class_name((*result_type), "double"))
    {
        *result_type = create_node_type_with_class_name("long_double");
    }

    if(short_ && type_identify_with_class_name((*result_type), "int"))
    {
        *result_type = create_node_type_with_class_name("short");
    }

    if(definition_typedef && func_pointer_name) {
        if(isalpha(*info->p) || *info->p == '_' || *info->p == '*' || *info->p == '%' || *info->p == '(') 
        {
            char* p_before = info->p;
            int sline_before = info->sline;

            while(1) {
                if(*info->p == '*') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (*result_type)->mPointerNum++;
                }
                else if(*info->p == '%') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (*result_type)->mHeap = TRUE;
                }
                else {
                    break;
                }
            }

            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf(info);
            }

            if(*info->p == '^') {
                info->p++;
                skip_spaces_and_lf(info);
            }

            if(parse_cmp(info->p, "_Nullable") == 0) {
                char buf[VAR_NAME_MAX];
                if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
                {
                    return FALSE;
                }
            }
            if(parse_cmp(info->p, "_Nonnull") == 0) {
                char buf[VAR_NAME_MAX];
                if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
                {
                    return FALSE;
                }
            }

            if(*info->p == ')') {
                xstrncpy(func_pointer_name, "fun", VAR_NAME_MAX);
            }
            else {
                if(!parse_word(func_pointer_name, VAR_NAME_MAX, info, FALSE, FALSE))
                {
                    return FALSE;
                }
            }

            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
            }

            if(*info->p == '(') {
                sNodeType* node_type = clone_node_type(*result_type);

                *result_type = create_node_type_with_class_name("lambda");
                (*result_type)->mResultType = node_type;

                if(*info->p == '(') {
                    info->p++;
                    skip_spaces_and_lf(info);

                    if(parse_cmp(info->p, "void") == 0) {
                        char* p_before = info->p;
                        int sline_before = info->sline;

                        char buf[VAR_NAME_MAX];
                        if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
                        {
                            return FALSE;
                        }

                        if(*info->p == ')') {
                        }
                        else {
                            info->p = p_before;
                            info->sline = sline_before;
                        }
                    }

                    if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        while(1) {
                            sNodeType* node_type = NULL;
                            BOOL define_struct_only = FALSE;
                            if(!parse_type(&node_type, info, NULL, FALSE, FALSE, parse_only, &define_struct_only)) {
                                return FALSE;
                            }

                            (*result_type)->mParamTypes[(*result_type)->mNumParams] = node_type;

                            (*result_type)->mNumParams++;

                            if((*result_type)->mNumParams >= PARAMS_MAX) {
                                parser_err_msg(info, "oveflow type params");
                                return FALSE;
                            }

                            if(isalpha(*info->p) || *info->p == '_') {
                                char buf[VAR_NAME_MAX];

                                (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
                            }

                            if(*info->p == ')') {
                                info->p++;
                                skip_spaces_and_lf(info);
                                break;
                            }
                            else if(*info->p == ',') {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                char msg[1024];
                                snprintf(msg, 1024, "invalid character in lambda type name(%c)", *info->p);
                                parser_err_msg(info, msg);
                                break;
                            }
                        }
                    }
                }
            }
            else {
                info->p = p_before;
                info->sline = sline_before;
                func_pointer_name[0] = '\0';
            }
        }
    }
    else {
        char* p = info->p;
        int sline = info->sline;

        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == '*') {
                info->p++;
                skip_spaces_and_lf(info);

                if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf(info);

                    if(*info->p == '(') {
                        sNodeType* node_type = clone_node_type(*result_type);

                        *result_type = create_node_type_with_class_name("lambda");
                        (*result_type)->mResultType = node_type;
                        pointer_num++;

                        if(*info->p == '(') {
                            info->p++;
                            skip_spaces_and_lf(info);

                            if(parse_cmp(info->p, "void") == 0) {
                                char* p_before = info->p;
                                int sline_before = info->sline;

                                char buf[VAR_NAME_MAX];
                                if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
                                {
                                    return FALSE;
                                }

                                if(*info->p == ')') {
                                }
                                else {
                                    info->p = p_before;
                                    info->sline = sline_before;
                                }
                            }

                            if(*info->p == ')') {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while(1) {
                                    sNodeType* node_type = NULL;
                                    BOOL define_struct_only = FALSE;
                                    if(!parse_type(&node_type, info, NULL, FALSE, FALSE, parse_only, &define_struct_only)) {
                                        return FALSE;
                                    }

                                    (*result_type)->mParamTypes[(*result_type)->mNumParams] = node_type;

                                    (*result_type)->mNumParams++;

                                    if((*result_type)->mNumParams >= PARAMS_MAX) {
                                        parser_err_msg(info, "oveflow type params");
                                        return FALSE;
                                    }

                                    if(isalpha(*info->p) || *info->p == '_') {
                                        char buf[VAR_NAME_MAX];

                                        (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
                                    }

                                    if(*info->p == ')') {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        break;
                                    }
                                    else if(*info->p == ',') {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        char msg[1024];
                                        snprintf(msg, 1024, "invalid character in lambda type name(%c)", *info->p);
                                        parser_err_msg(info, msg);
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else {
                        info->p = p;
                        info->sline = sline;
                    }
                }
                else {
                    info->p = p;
                    info->sline = sline;
                }
            }
            else {
                info->p = p;
                info->sline = sline;
            }
        }
        else {
            info->p = p;
            info->sline = sline;
        }
    }

    /// generics ///
    if(*info->p == '<' && *(info->p+1) != '<' && *(info->p+1) != '=') 
    {
        info->p++;
        skip_spaces_and_lf(info);

        int generics_num = 0;

        while(1) {
            char tmp[VAR_NAME_MAX];
            BOOL define_struct_only = FALSE;
            if(!parse_type(&(*result_type)->mGenericsTypes[generics_num], info, tmp, FALSE, FALSE, parse_only, &define_struct_only)) {
                return FALSE;
            }

            generics_num++;

            if(generics_num >= GENERICS_TYPES_MAX) {
                parser_err_msg(info, "overflow generics parametor number");
                return FALSE;
            }

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == '>') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                char msg[1024];
                snprintf(msg, 1024, "invalid character(%c) in generics types", *info->p);
                parser_err_msg(info, msg);
                info->err_num++;
                break;
            }
        }

        (*result_type)->mNumGenericsTypes = generics_num;
    }

    /// pointer ///
    int parser_pointer_num = 0;

    while(1) {
        char* p_before = info->p;
        int sline_before = info->sline;

        char buf[VAR_NAME_MAX];
        (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
        if(strcmp(buf, "__restrict") == 0 || strcmp(buf, "restrict") == 0)
        {
        }
        else if(strcmp(buf, "const") == 0)
        {
        }
        else {
            info->p = p_before;
            info->sline = info->sline;
        }

        if(*info->p == '*') {
            pointer_num++;
            parser_pointer_num++;
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf(info);

            heap = TRUE;
        }
        else if(*info->p == '&') {
            info->p++;
            skip_spaces_and_lf(info);

            no_heap = TRUE;
        }
        else if(*info->p == '$') {
            info->p++;
            skip_spaces_and_lf(info);

            managed_ = TRUE;
        }
        else if(*info->p == '?') {
            info->p++;
            skip_spaces_and_lf(info);

            nullable = TRUE;
        }
        else {
            break;
        }
    }

    while(TRUE) {
        char* p_before = info->p;
        int sline_before = info->sline;

        if(!parse_word(type_name, VAR_NAME_MAX, info, FALSE, FALSE)) 
        {
            return FALSE;
        }

        if(strcmp(type_name, "const") == 0) {
            constant = TRUE;
        }
        else if(strcmp(type_name, "register") == 0) {
            register_ = TRUE;
        }
        else if(strcmp(type_name, "volatile") == 0) {
            volatile_ = TRUE;
        }
        else {
            info->p = p_before;
            info->sline = sline_before;
            break;
        }
    }

    (*result_type)->mPointerNum = pointer_num;
    (*result_type)->mHeap = heap;
    (*result_type)->mNullable = nullable;
    (*result_type)->mConstant = constant;
    (*result_type)->mUnsigned = unsigned_;
    (*result_type)->mRegister = register_;
    (*result_type)->mVolatile = volatile_;
    (*result_type)->mStatic = static_;
    (*result_type)->mUniq = uniq;
    (*result_type)->mNoHeap = no_heap;

    if(strcmp((*result_type)->mTypeName, "") != 0)
    {
        (*result_type)->mTypePointerNum = parser_pointer_num;
    }

    if(((*info->p == '(' && *(info->p+1) == '*') || (*info->p == '(' && *(info->p+1) == '^')) && func_pointer_name) {
        info->p += 2;
        skip_spaces_and_lf(info);

        if(parse_cmp(info->p, "_Nullable") == 0) {
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
            {
                return FALSE;
            }
        }
        if(parse_cmp(info->p, "_Nonnull") == 0) {
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
            {
                return FALSE;
            }
        }
        if(parse_cmp(info->p, "volatile") == 0) {
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
            {
                return FALSE;
            }
        }
        char* before_fun = info->p;
        int before_fun_sline = info->sline;

        if(*info->p == ')') {
            func_pointer_name[0] = '\0';
            before_fun = NULL;
        }
        else {
            if(!parse_word(func_pointer_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
            {
                return FALSE;
            }
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf(info);

                /// params ///
                sParserParam params[PARAMS_MAX];
                memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);
                int num_params = 0;

                /// parse_params ///
                BOOL var_arg = FALSE;
                if(!parse_params(params, &num_params, info, 0, &var_arg))
                {
                    return FALSE;
                }
            }
            else {
                before_fun = NULL;
            }
        }

        expect_next_character_with_one_forward(")", info);

        sNodeType* node_type = clone_node_type(*result_type);

        *result_type = create_node_type_with_class_name("lambda");
        (*result_type)->mResultType = node_type;

        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf(info);

            if(parse_cmp(info->p, "void") == 0) {
                char* p_before = info->p;
                int sline_before = info->sline;

                char buf[VAR_NAME_MAX];
                if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
                {
                    return FALSE;
                }

                if(*info->p == ')') {
                }
                else {
                    info->p = p_before;
                    info->sline = sline_before;
                }
            }

            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(1) {
                    sNodeType* node_type = NULL;
                    BOOL define_struct_only = FALSE;
                    if(!parse_type(&node_type, info, NULL, FALSE, FALSE, parse_only, &define_struct_only)) {
                        return FALSE;
                    }

                    (*result_type)->mParamTypes[(*result_type)->mNumParams] = node_type;

                    (*result_type)->mNumParams++;

                    if((*result_type)->mNumParams >= PARAMS_MAX) {
                        parser_err_msg(info, "oveflow type params");
                        return FALSE;
                    }

                    if(isalpha(*info->p) || *info->p == '_') {
                        char buf[VAR_NAME_MAX];

                        (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
                    }

                    if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    else if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        char msg[1024];
                        snprintf(msg, 1024, "invalid character in lambda type name(%c)", *info->p);
                        parser_err_msg(info, msg);
                        break;
                    }
                }
            }
        }

        if(before_fun) {
            func_pointer_name[0] = '\0';
            info->p = before_fun;
            info->sline = before_fun_sline;
        }
    }

    if(info->mNumMethodGenericsTypes > 0) {
        if(!solve_method_generics(result_type, info->mNumMethodGenericsTypes, info->mMethodGenericsTypes))
        {
            parser_err_msg(info, "Can't solve method generics type");
            show_node_type(*result_type);
            info->err_num++;
        }
    }

    if(info->mGenericsType && info->mGenericsType->mNumGenericsTypes > 0)
    {
        BOOL success_solve;
        if(!solve_generics(result_type, info->mGenericsType, &success_solve))
        {
            parser_err_msg(info, "Can't solve generics type");
            show_node_type(*result_type);
            show_node_type(info->mGenericsType);
            info->err_num++;
        }
    }

    sCLClass* checked_class[STRUCT_FIELD_MAX];
    int num_checked_class = 0;

    BOOL included_generics_type_result = included_generics_type(*result_type, checked_class, &num_checked_class);

    if(((*result_type)->mClass->mFlags & CLASS_FLAGS_STRUCT) && !included_generics_type_result && definition_llvm_type && (*result_type)->mClass->mUndefinedStructType == NULL)
    {
        sCompileInfo cinfo;
        memset(&cinfo, 0, sizeof(sCompileInfo));
        cinfo.no_output = TRUE;
        cinfo.pinfo = info;

        new_right_value_objects_container(&cinfo);

        if(info->parse_block || info->parse_struct_phase) 
        {
            if(!create_llvm_struct_type(*result_type, *result_type, FALSE, &cinfo))
            {
                parser_err_msg(info, "Can't create llvm struct from this node type");
                show_node_type(*result_type);
                info->err_num++;
            }
        }
    }
    else if(((*result_type)->mClass->mFlags & CLASS_FLAGS_UNION) && !included_generics_type_result && definition_llvm_type && (*result_type)->mClass->mUndefinedStructType == NULL)
    {
        sCompileInfo cinfo;
        memset(&cinfo, 0, sizeof(sCompileInfo));
        cinfo.no_output = TRUE;

        new_right_value_objects_container(&cinfo);

        if(info->parse_block || info->parse_struct_phase) 
        {
            if(!create_llvm_union_type(*result_type, *result_type, &cinfo))
            {
                parser_err_msg(info, "Can't create llvm union from this node type");
                show_node_type(*result_type);
                info->err_num++;
            }
        }
    }

    if((*result_type)->mClass->mFlags & CLASS_FLAGS_ENUM)
    {
        (*result_type)->mClass = get_class("int");
    }

    return TRUE;
}

static BOOL parse_var(unsigned int* node, sParserInfo* info, BOOL readonly)
{
    char buf[VAR_NAME_MAX];

    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
        return FALSE;
    }

    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf(info);
    }

    sNodeType* node_type;
    if(*info->p != '=') {
        BOOL define_struct_only = FALSE;
        if(!parse_type(&node_type, info, NULL, TRUE, FALSE, FALSE, &define_struct_only)) {
            return FALSE;
        }

        if(node_type->mClass == NULL) {
            *node = 0;
            return TRUE;
        }
        if(node_type) {
            check_already_added_variable(info->lv_table, buf, info);
            if(!add_variable_to_table(info->lv_table, buf, node_type, readonly, NULL, -1, info->mBlockLevel == 0, node_type->mConstant))
            {
                fprintf(stderr, "overflow variable table\n");
                exit(2);
            }
        }
    }
    else {
        node_type = NULL;
        check_already_added_variable(info->lv_table, buf, info);
        if(!add_variable_to_table(info->lv_table, buf, node_type, readonly, NULL, -1, info->mBlockLevel == 0, FALSE))
        {
            fprintf(stderr, "overflow variable table\n");
            exit(2);
        }
    }

    /// assign the value to a variable ///
    if(*info->p == '=' && *(info->p+1) != '=') {
        info->p++;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;

        if(!expression(&right_node, info)) {
            return FALSE;
        }

        if(right_node == 0) {
            parser_err_msg(info, "Require right value for =");
            info->err_num++;

            *node = 0;
        }
        else {
            *node = sNodeTree_create_store_variable(buf, right_node, TRUE, info);
        }
    }
    else {
        char msg[1024];
        snprintf(msg, 1024, "%s should be initialized", buf);
        parser_err_msg(info, msg);
        info->err_num++;

        *node = 0;
    }

    return TRUE;
}

static BOOL parse_return(unsigned int* node, sParserInfo* info)
{
    *node = 0;

    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);

        if(!expression(node, info)) {
            return FALSE;
        }

        expect_next_character_with_one_forward(")", info);
        expect_next_character_with_one_forward(";", info);
    }
    else if(*info->p != ';') {
        if(!expression(node, info)) {
            return FALSE;
        }
    };

    *node = sNodeTree_create_return(*node, info);

    return TRUE;
}

static BOOL parse_variable(unsigned int* node, sNodeType* result_type, char* name, BOOL extern_, sParserInfo* info, BOOL readonly)
{
    /// assign the value to a variable ///
    if(*info->p == '=' && *(info->p+1) != '=') {
        info->p++;
        skip_spaces_and_lf(info);

        if(result_type->mDynamicArrayNum == -1) {
            if(type_identify_with_class_name(result_type, "char*"))
            {
                unsigned int right_node = 0;

                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                if(right_node == 0) {
                    parser_err_msg(info, "Require right value for =");
                    info->err_num++;

                    *node = 0;
                }
                else {
                    if(gNodes[right_node].mNodeType != kNodeTypeCString)
                    {
                        parser_err_msg(info, "Invalid right value");
                        info->err_num++;

                        *node = 0;

                        return TRUE;
                    }

                    int string_len = strlen(gNodes[right_node].uValue.sString.mString) + 1;

                    result_type->mDynamicArrayNum = sNodeTree_create_int_value(string_len, info);

                    unsigned int initialize_array_values[INIT_ARRAY_MAX];
                    int num_initialize_array_value = 0;
                    memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);

                    initialize_array_values[0] = right_node;
                    num_initialize_array_value++;
                    *node = sNodeTree_create_define_variable(name, extern_, info);

                    *node = sNodeTree_create_array_with_initialization(name, num_initialize_array_value, initialize_array_values, *node, info);
                }
            }
            else {
                expect_next_character_with_one_forward("{", info);

                BOOL no_comma_operator = info->no_comma_operator;
                info->no_comma_operator = TRUE;

                unsigned int initialize_array_values[INIT_ARRAY_MAX];
                int num_initialize_array_value = 0;
                memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);

                while(TRUE) {
                    unsigned int right_node = 0;

                    if(!expression(&right_node, info)) {
                        return FALSE;
                    }

                    if(right_node == 0) {
                        parser_err_msg(info, "Require right value for {}");
                        info->err_num++;

                        *node = 0;
                    }
                    else {
                        initialize_array_values[num_initialize_array_value++] = right_node;
                    }

                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p == '\0') {
                        parser_err_msg(info, "In the array initialization, the parser has arraived at the source end");
                        return FALSE;
                    }
                    else if(*info->p == '}') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                }

                int array_len = num_initialize_array_value;

                result_type->mDynamicArrayNum = sNodeTree_create_int_value(array_len, info);
                result_type->mArrayInitializeNum = num_initialize_array_value;

                *node = sNodeTree_create_define_variable(name, extern_, info);

                *node = sNodeTree_create_array_with_initialization(name, num_initialize_array_value, initialize_array_values, *node, info);

                info->no_comma_operator = no_comma_operator;
            }
        }
        else if(info->mBlockLevel == 0 && result_type->mArrayDimentionNum > 0)
        {
            BOOL no_comma_operator = info->no_comma_operator;
            info->no_comma_operator = TRUE;

            if(type_identify_with_class_name(result_type, "char*"))
            {
                unsigned int right_node = 0;

                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                if(right_node == 0) {
                    parser_err_msg(info, "Require right value for =");
                    info->err_num++;

                    *node = 0;
                }
                else {
                    unsigned int initialize_array_values[INIT_ARRAY_MAX];
                    int num_initialize_array_value = 0;
                    memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);

                    initialize_array_values[0] = right_node;
                    num_initialize_array_value++;

                    *node = sNodeTree_create_define_variable(name, extern_, info);

                    *node = sNodeTree_create_array_with_initialization(name, num_initialize_array_value, initialize_array_values, *node, info);
                }
            }
            else {
                expect_next_character_with_one_forward("{", info);

                unsigned int initialize_array_values[INIT_ARRAY_MAX];
                int num_initialize_array_value = 0;
                memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);

                while(TRUE) {
                    unsigned int right_node = 0;

                    if(!expression(&right_node, info)) {
                        return FALSE;
                    }

                    if(right_node == 0) {
                        parser_err_msg(info, "Require right value for {}");
                        info->err_num++;

                        *node = 0;
                    }
                    else {
                        initialize_array_values[num_initialize_array_value++] = right_node;
                    }

                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p == '\0') {
                        parser_err_msg(info, "In the array initialization, the parser has arraived at the source end");
                        return FALSE;
                    }
                    else if(*info->p == '}') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                };


                *node = sNodeTree_create_define_variable(name, extern_, info);

                *node = sNodeTree_create_array_with_initialization(name, num_initialize_array_value, initialize_array_values, *node, info);
            }

            info->no_comma_operator = no_comma_operator;
        }
        else if(info->mBlockLevel == 0 && result_type->mArrayDimentionNum == -1)
        {
            if(type_identify_with_class_name(result_type, "char*"))
            {
                unsigned int right_node = 0;

                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                if(right_node == 0 || gNodes[right_node].mNodeType != kNodeTypeCString) {
                    parser_err_msg(info, "Require string for =");
                    info->err_num++;

                    *node = 0;
                }
                else {
                    char* str = gNodes[right_node].uValue.sString.mString;

                    int len = strlen(str);

                    result_type->mArrayDimentionNum = 1;
                    result_type->mArrayNum[0] = len + 1;

                    unsigned int initialize_array_values[INIT_ARRAY_MAX];
                    int num_initialize_array_value = 0;
                    memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);

                    initialize_array_values[0] = right_node;
                    num_initialize_array_value++;

                    *node = sNodeTree_create_define_variable(name, extern_, info);

                    *node = sNodeTree_create_array_with_initialization(name, num_initialize_array_value, initialize_array_values, *node, info);
                }
            }
            else {
                BOOL no_comma_operator = info->no_comma_operator;
                info->no_comma_operator = TRUE;

                expect_next_character_with_one_forward("{", info);

                unsigned int initialize_array_values[INIT_ARRAY_MAX];
                int num_initialize_array_value = 0;
                memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);

                while(TRUE) {
                    unsigned int right_node = 0;

                    if(!expression(&right_node, info)) {
                        return FALSE;
                    }

                    if(right_node == 0) {
                        parser_err_msg(info, "Require right value for {}");
                        info->err_num++;

                        *node = 0;
                    }
                    else {
                        initialize_array_values[num_initialize_array_value++] = right_node;
                    }

                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p == '\0') {
                        parser_err_msg(info, "In the array initialization, the parser has arraived at the source end");
                        return FALSE;
                    }
                    else if(*info->p == '}') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                }

                result_type->mArrayDimentionNum = 1;
                result_type->mArrayNum[0] = num_initialize_array_value;
                result_type->mArrayInitializeNum = num_initialize_array_value;

                *node = sNodeTree_create_define_variable(name, extern_, info);

                *node = sNodeTree_create_array_with_initialization(name, num_initialize_array_value, initialize_array_values, *node, info);

                info->no_comma_operator = no_comma_operator;
            }
        }
        else if(result_type->mDynamicArrayNum != 0) {
            if(type_identify_with_class_name(result_type, "char*"))
            {
                unsigned int right_node = 0;

                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                if(right_node == 0) {
                    parser_err_msg(info, "Require right value for =");
                    info->err_num++;

                    *node = 0;
                }
                else {
                    unsigned int initialize_array_values[INIT_ARRAY_MAX];
                    int num_initialize_array_value = 0;
                    memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);

                    initialize_array_values[0] = right_node;
                    num_initialize_array_value++;

                    *node = sNodeTree_create_define_variable(name, extern_, info);

                    *node = sNodeTree_create_array_with_initialization(name, num_initialize_array_value, initialize_array_values, *node, info);
                }
            }
            else {
                BOOL no_comma_operator = info->no_comma_operator;
                info->no_comma_operator = TRUE;

                expect_next_character_with_one_forward("{", info);

                unsigned int initialize_array_values[INIT_ARRAY_MAX];
                int num_initialize_array_value = 0;
                memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);

                while(TRUE) {
                    unsigned int right_node = 0;

                    if(!expression(&right_node, info)) {
                        return FALSE;
                    }

                    if(right_node == 0) {
                        parser_err_msg(info, "Require right value for {}");
                        info->err_num++;

                        *node = 0;
                    }
                    else {
                        initialize_array_values[num_initialize_array_value++] = right_node;
                    }

                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p == '\0') {
                        parser_err_msg(info, "In the array initialization, the parser has arraived at the source end");
                        return FALSE;
                    }
                    else if(*info->p == '}') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                }

                result_type->mArrayInitializeNum = num_initialize_array_value;

                *node = sNodeTree_create_define_variable(name, extern_, info);

                *node = sNodeTree_create_array_with_initialization(name, num_initialize_array_value, initialize_array_values, *node, info);

                info->no_comma_operator = no_comma_operator;
            }
        }
        else if((result_type->mClass->mFlags & CLASS_FLAGS_STRUCT) && *info->p == '{') {
            BOOL no_comma_operator = info->no_comma_operator;
            info->no_comma_operator = TRUE;

            expect_next_character_with_one_forward("{", info);

            unsigned int initialize_array_values[INIT_ARRAY_MAX];
            int num_initialize_array_value = 0;
            memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);

            while(TRUE) {
                unsigned int right_node = 0;

                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                if(right_node == 0) {
                    parser_err_msg(info, "Require right value for {}");
                    info->err_num++;

                    *node = 0;
                }
                else {
                    initialize_array_values[num_initialize_array_value++] = right_node;
                }

                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == '\0') {
                    parser_err_msg(info, "In the array initialization, the parser has arraived at the source end");
                    return FALSE;
                }
                else if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
            };

            *node = sNodeTree_create_define_variable(name, extern_, info);

            *node = sNodeTree_create_struct_with_initialization(name, num_initialize_array_value, initialize_array_values, *node, info);

            info->no_comma_operator = no_comma_operator;
        }
        else {
            unsigned int right_node = 0;

            if(!expression(&right_node, info)) {
                return FALSE;
            }

            if(right_node == 0) {
                parser_err_msg(info, "Require right value for =");
                info->err_num++;

                *node = 0;
            }
            else {
                *node = sNodeTree_create_store_variable(name, right_node, TRUE, info);
            }
        }
    }
    else {
        if(*info->p != ',' && *info->p != ';' && isascii(*info->p)) 
        {
            char msg[1024];
            snprintf(msg, 1024, "Require right value for , or ;. This is %c", *info->p);
            parser_err_msg(info, msg);
            info->err_num++;

            *node = 0;
        }
        else {
            *node = sNodeTree_create_define_variable(name, extern_, info);
        }
    }

    if((info->parse_struct_phase && info->mBlockLevel == 0) || (info->mBlockLevel > 0)) 
    {
        check_already_added_variable(info->lv_table, name, info);
        if(!add_variable_to_table(info->lv_table, name, result_type, readonly, NULL, -1, info->mBlockLevel == 0, result_type->mConstant))
        {
            fprintf(stderr, "overflow variable table\n");
            exit(2);
        }
    }

    return TRUE;
}

static BOOL parse_param(sParserParam* param, sParserInfo* info)
{
    BOOL define_struct_only = FALSE;
    if(!parse_type(&param->mType, info, param->mName, TRUE, FALSE, FALSE, &define_struct_only)) {
        return FALSE;
    }

    if(param->mName[0] == 0 && (*info->p == ',' || *info->p == ')')) {
        param->mName[0] = '\0';
    }
    else {
        if(param->mName[0] == '\0') {
            if(!parse_variable_name(param->mName, VAR_NAME_MAX, info, param->mType, FALSE, TRUE))
            {
                return FALSE;
            }
        }
    }

    return TRUE;
}

static BOOL get_block_text(sBuf* buf, sParserInfo* info, BOOL append_head_currly_brace, BOOL last_expresssion_is_self)
{
    if(append_head_currly_brace) {
        sBuf_append_str(buf, "{ ");
    }

    BOOL dquort = FALSE;
    BOOL squort = FALSE;

    int nest = 0;
    while(TRUE) {
        if(*info->p == '"') {
            sBuf_append_char(buf, *info->p);
            info->p++;
            dquort = !dquort;
        }
        else if(*info->p == '\'') {
            sBuf_append_char(buf, *info->p);
            info->p++;
            sBuf_append_char(buf, *info->p);
            info->p++;
            squort = !squort;
        }
        else if(dquort || squort) {
            if(*info->p == '\n') {
                info->sline++;
            }

            sBuf_append_char(buf, *info->p);
            info->p++;
        }
        else if(*info->p == '{') {
            sBuf_append_char(buf, *info->p);
            info->p++;

            nest++;
        }
        else if(*info->p == '#') {
            char* p = info->p;
            if(!parse_sharp(info)) {
                return FALSE;
            }
            sBuf_append(buf, p, info->p-p);
        }
        else if(*info->p == '}') {
            if(nest == 0) {
                if(last_expresssion_is_self) {
                    sBuf_append_str(buf, "\nself\n");
                }
                sBuf_append_str(buf, "}");
                info->p++;

                while(TRUE) {
                    if(*info->p == ' ' || *info->p == '\t') {
                        info->p++;
                    }
                    else if(*info->p == '\n') {
                        info->sline++;

                        info->p++;
                        sBuf_append_str(buf, "\n");
                    }
                    else {
                        break;
                    }
                }

                break;
            }
            else {
                sBuf_append_str(buf, "}");
                info->p++;

                while(TRUE) {
                    if(*info->p == ' ' || *info->p == '\t') {
                        info->p++;
                    }
                    else if(*info->p == '\n') {

                        info->sline++;
                        info->p++;
                        sBuf_append_str(buf, "\n");
                    }
                    else {
                        break;
                    }
                }
            }

            nest--;
        }
        else if(*info->p == '\n') {
            info->sline++;

            sBuf_append_char(buf, *info->p);
            info->p++;
        }
        else if(*info->p == '\0') {
            parser_err_msg(info, "require } before the source end");
            return FALSE;
        }
        else {
            sBuf_append_char(buf, *info->p);
            info->p++;
        }
    }

    return TRUE;
}

static BOOL parse_simple_lambda_params(unsigned int* node, int sline, sParserInfo* info)
{
    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);

    sBuf buf;
    sBuf_init(&buf);

    if(!get_block_text(&buf, info, TRUE, FALSE)) {
        free(buf.mBuf);
        return FALSE;
    };

    *node = sNodeTree_create_simple_lambda_param(MANAGED buf.mBuf, sname, sline, info);

    return TRUE;
}


/// character_type --> 0: () 1: ||
static BOOL parse_params(sParserParam* params, int* num_params, sParserInfo* info, int character_type, BOOL* var_arg)
{
    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX];
    if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE)) {
        return FALSE;
    }

    if(strcmp(buf, "void") == 0 && *info->p == ')') {
        info->p++;
        skip_spaces_and_lf(info);
        return TRUE;
    }
    else {
        info->p = p_before;
        info->sline = sline_before;
    }

    if((character_type == 0 && *info->p == ')') || (character_type == 1 && *info->p == '|')) {
        info->p++;
        skip_spaces_and_lf(info);

        return TRUE;
    };
     
    *var_arg = FALSE;

    while(1) {
        if(*info->p == '.' && *(info->p + 1) == '.' && *(info->p + 2) == '.') {
            info->p += 3;
            skip_spaces_and_lf(info);

            expect_next_character_with_one_forward(")", info);

            *var_arg = TRUE;
            break;
        }

        if(!parse_param(params + *num_params, info)) {
            return FALSE;
        }

        (*num_params)++;

        if(*num_params >= PARAMS_MAX) {
            parser_err_msg(info, "overflow params number");
            return FALSE;
        }

        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if((character_type == 0 && *info->p == ')') || (character_type == 1 && *info->p == '|')) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        else if(*info->p == '\0') {
            parser_err_msg(info, "It is required to ',' or ')' before the source end");
            info->err_num++;
            break;
        }
        else {
            char msg[1024];
            snprintf(msg, 1024, "Unexpected character(%c). It is required to ',' or ')' or '|' character", *info->p);
            parser_err_msg(info, msg);
            if(*info->p == '\n') {
                info->sline++;
            }
            info->p++;

            info->err_num++;
        }
    }

    return TRUE;
}



static BOOL parse_generics_function(unsigned int* node, sNodeType* result_type, char* fun_name, char* struct_name, sParserInfo* info)
{
    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);

    char* function_head = info->p;

    BOOL operator_fun = FALSE;

    expect_next_character_with_one_forward("(", info);

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);
    int num_params = 0;

    /// parse_params ///
    BOOL var_arg = FALSE;
    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    int i;
    for(i=0; i<num_params; i++) {
        char* name = params[i].mName;

        if(name[0] == '\0') {
            parser_err_msg(info, "Require parametor variable names");
            info->err_num++;
        }
    }

    char asm_fname[VAR_NAME_MAX];
    if(!parse_attribute(info, asm_fname)) {
        return FALSE;
    }

    int version = info->mImplVersion;
    parse_version(&version, info);
    info->mFunVersion = version;

    skip_spaces_and_lf(info);

    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);

    skip_spaces_and_lf(info);

    int sline = info->sline;

    if(info->parse_struct_phase) {
        if(!skip_block(info)) {
            return FALSE;
        };

        *node = sNodeTree_create_null(info);
    }
    else {
        if(*info->p == '{') {
            info->p++;
        }

        sBuf buf;
        sBuf_init(&buf);

        if(!get_block_text(&buf, info, TRUE, FALSE)) {
            free(buf.mBuf);
            return FALSE;
        };

        *node = sNodeTree_create_generics_function(fun_name, params, num_params, result_type, MANAGED buf.mBuf, struct_name, sname, sline, var_arg, version, info);

        //info->mNumMethodGenerics = 0;
    }

    return TRUE;
}

static BOOL parse_method_generics_function(unsigned int* node, char* struct_name, sParserInfo* info)
{
    char* function_head = info->p;

    /// method generics ///
    info->mNumMethodGenerics = 0;

    if(*info->p == '<') {
        info->p++;
        skip_spaces_and_lf(info);

        int num_generics = 0;

        while(TRUE) {
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
                return FALSE;
            }

            info->mMethodGenericsTypeNames[num_generics] = strdup(buf);
            num_generics++;

            if(num_generics >= GENERICS_TYPES_MAX)
            {
                parser_err_msg(info, "overflow generics types");
                return FALSE;
            }

            info->mNumMethodGenerics = num_generics;

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == '>') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                parser_err_msg(info, "require , or > character");
                info->err_num++;
                break;
            }
        }
    }

    sNodeType* result_type = NULL;
    BOOL define_struct_only = FALSE;
    if(!parse_type(&result_type, info, NULL, TRUE, FALSE, FALSE, &define_struct_only))
    {
        return FALSE;
    }

    char fun_name[VAR_NAME_MAX+1];
    if(!parse_word(fun_name, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    }

    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);

    BOOL operator_fun = FALSE;

    expect_next_character_with_one_forward("(", info);

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);
    int num_params = 0;

    /// parse_params ///
    BOOL var_arg = FALSE;
    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    int i;
    for(i=0; i<num_params; i++) {
        char* name = params[i].mName;

        if(name[0] == '\0') {
            parser_err_msg(info, "Require parametor variable names");
            info->err_num++;
        }
    }

    char asm_fname[VAR_NAME_MAX];
    if(!parse_attribute(info, asm_fname)) {
        return FALSE;
    }

    int version = info->mImplVersion;
    parse_version(&version, info);
    skip_spaces_and_lf(info);

    info->mFunVersion = version;

    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);

    skip_spaces_and_lf(info);

    int sline = info->sline;

    if(info->parse_struct_phase) {
        if(!skip_block(info)) {
            return FALSE;
        };

        *node = sNodeTree_create_null(info);
    }
    else {
        if(*info->p == '{') {
            info->p++;
        }

        sBuf buf;
        sBuf_init(&buf);

        if(!get_block_text(&buf, info, TRUE, FALSE)) {
            free(buf.mBuf);
            return FALSE;
        };

        *node = sNodeTree_create_generics_function(fun_name, params, num_params, result_type, MANAGED buf.mBuf, struct_name, sname, sline, var_arg, version, info);
    }

    return TRUE;
}




BOOL parse_function(unsigned int* node, sNodeType* result_type, char* fun_name, char* struct_name, sParserInfo* info)
{
    char* function_head = info->p;

    /// method generics ///
    info->mNumMethodGenerics = 0;

    BOOL operator_fun = FALSE;

    if(strcmp(fun_name, "operator") == 0) {
        operator_fun = TRUE;

        switch(*info->p) {
            case '+': 
                info->p++;
                skip_spaces_and_lf(info);
                xstrncpy(fun_name, "op_add", VAR_NAME_MAX);
                break;

            case '-': 
                info->p++;
                skip_spaces_and_lf(info);
                xstrncpy(fun_name, "op_sub", VAR_NAME_MAX);
                break;

            case '*': 
                info->p++;
                skip_spaces_and_lf(info);
                xstrncpy(fun_name, "op_mult", VAR_NAME_MAX);
                break;

            case '/': 
                info->p++;
                skip_spaces_and_lf(info);
                xstrncpy(fun_name, "op_div", VAR_NAME_MAX);
                break;

            case '%': 
                info->p++;
                skip_spaces_and_lf(info);
                xstrncpy(fun_name, "op_mod", VAR_NAME_MAX);
                break;
        }
    }

    expect_next_character_with_one_forward("(", info);

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);

    /// parse_params ///
    int num_params = 0;
    BOOL var_arg = FALSE;
    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    char asm_fname[VAR_NAME_MAX];
    if(!parse_attribute(info, asm_fname)) {
        return FALSE;
    }

    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);

    int version = info->mImplVersion;
    parse_version(&version, info);

    info->mFunVersion = version;
    
    /// remove function pointer params if the result is function pointer ///
    if(*info->p == ')') {
        info->p++;
        skip_spaces_and_lf(info);

        int nest = 0;
        while(*info->p) {
            if(*info->p == '(') {
                info->p++;
                nest++;
            }
            else if(*info->p == ')') {
                info->p++;
                
                if(nest <= 1) {
                    break;
                }
                else {
                    nest--;
                }
            }
            else {
                info->p++;
            }
        }
    }

    if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf(info);

        *node = sNodeTree_create_external_function(fun_name, asm_fname, params, num_params, var_arg, result_type, struct_name, operator_fun, version, info);
    }
    else {
        if(info->parse_struct_phase) {
            if(strcmp(fun_name, "main") == 0) {
                gMainFunctionExistance = TRUE;
            }
            if(!skip_block(info)) {
                return FALSE;
            };

            *node = sNodeTree_create_null(info);
        }
        else {
            int i;
            for(i=0; i<num_params; i++) {
                char* name = params[i].mName;

                if(name[0] == '\0') {
                    parser_err_msg(info, "Require parametor variable names");
                    info->err_num++;
                }
            }

            sNodeBlock* node_block = ALLOC sNodeBlock_alloc();
            expect_next_character_with_one_forward("{", info);
            sVarTable* old_table = info->lv_table;

            info->lv_table = init_block_vtable(old_table, FALSE);

            sVarTable* block_var_table = info->lv_table;

            for(i=0; i<num_params; i++) {
                sParserParam* param = params + i;

                BOOL readonly = FALSE;
                if(!add_variable_to_table(info->lv_table, param->mName, param->mType, readonly, NULL, -1, FALSE, param->mType->mConstant))
                {
                    return FALSE;
                }
            }

            if(!parse_block(node_block, FALSE, FALSE, info)) {
                sNodeBlock_free(node_block);
                return FALSE;
            }

            expect_next_character_with_one_forward("}", info);
            info->lv_table = old_table;

            BOOL lambda_ = FALSE;

            BOOL simple_lambda_param = FALSE;
            BOOL construct_fun = FALSE;

            *node = sNodeTree_create_function(fun_name, asm_fname, params, num_params, result_type, MANAGED node_block, lambda_, block_var_table, struct_name, operator_fun, construct_fun, simple_lambda_param, info, FALSE, var_arg, version, FALSE, -1, fun_name);
        }
    }

    info->mNumMethodGenerics = 0;

    return TRUE;
}

static BOOL parse_constructor(unsigned int* node, char* struct_name, sParserInfo* info, BOOL inline_) 
{
    char* function_head = info->p;

    /// method generics ///
    info->mNumMethodGenerics = 0;

    BOOL operator_fun = FALSE;

    char* fun_name = "initialize";
    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);


    expect_next_character_with_one_forward("(", info);

    /// result_type ///
    sNodeType* result_type = create_node_type_with_class_name(struct_name);

    if(result_type == NULL) {
        char msg[1024];
        snprintf(msg, 1024, "%s is undefined", struct_name);
        parser_err_msg(info, msg);
        info->err_num++;
        return TRUE;
    }

    result_type->mPointerNum++;
    result_type->mHeap = TRUE;

    if(inline_) {
        result_type->mStatic = TRUE;
    }

    int i;
    for(i=0; i<info->mNumGenerics; i++) {
        char class_name_[VAR_NAME_MAX+1];

        snprintf(class_name_, VAR_NAME_MAX, "generics%d", i);
        result_type->mGenericsTypes[i] = create_node_type_with_class_name(class_name_);
    }
    result_type->mNumGenericsTypes = info->mNumGenerics;

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);

    /// parse_params ///
    int num_params = 0;
    BOOL var_arg = FALSE;

    params[0].mType = clone_node_type(result_type);
    xstrncpy(params[0].mName, "self", VAR_NAME_MAX);

    num_params++;

    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    for(i=0; i<num_params; i++) {
        char* name = params[i].mName;

        if(name[0] == '\0') {
            parser_err_msg(info, "Require parametor variable names");
            info->err_num++;
        }
    }

    char asm_fname[VAR_NAME_MAX];
    if(!parse_attribute(info, asm_fname)) {
        return FALSE;
    }

    int version = info->mImplVersion;
    parse_version(&version, info);
    info->mFunVersion = version;

    if(info->mNumGenerics > 0) {
        char sname[PATH_MAX];
        xstrncpy(sname, info->sname, PATH_MAX);

        skip_spaces_and_lf(info);

        int sline = info->sline;

        if(info->parse_struct_phase) {
            if(!skip_block(info)) {
                return FALSE;
            };

            *node = sNodeTree_create_null(info);
        }
        else {
            if(*info->p == '{') {
                info->p++;
            }

            sBuf buf;
            sBuf_init(&buf);

            if(!get_block_text(&buf, info, TRUE, TRUE)) {
                free(buf.mBuf);
                return FALSE;
            };

            *node = sNodeTree_create_generics_function(fun_name, params, num_params, result_type, MANAGED buf.mBuf, struct_name, sname, sline, var_arg, version, info);
        }
    }
    else {
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);

            *node = sNodeTree_create_external_function(fun_name, "", params, num_params, var_arg, result_type, struct_name, operator_fun, version, info);
        }
        else {
            if(info->parse_struct_phase) {
                if(!skip_block(info)) {
                    return FALSE;
                };

                *node = sNodeTree_create_null(info);
            }
            else {
                sNodeBlock* node_block = ALLOC sNodeBlock_alloc();
                expect_next_character_with_one_forward("{", info);
                sVarTable* old_table = info->lv_table;

                info->lv_table = init_block_vtable(old_table, FALSE);

                sVarTable* block_var_table = info->lv_table;

                int i;
                for(i=0; i<num_params; i++) {
                    sParserParam* param = params + i;

                    BOOL readonly = FALSE;
                    if(!add_variable_to_table(info->lv_table, param->mName, param->mType, readonly, NULL, -1, FALSE, param->mType->mConstant))
                    {
                        return FALSE;
                    }
                }

                if(!parse_block(node_block, FALSE, FALSE, info)) {
                    sNodeBlock_free(node_block);
                    return FALSE;
                }

                int sline = info->sline;
                char sname[PATH_MAX];
                xstrncpy(sname, info->sname, PATH_MAX);

                unsigned int result_node = sNodeTree_create_load_variable("self", info);

                if(result_node == 0) {
                    parser_err_msg(info, "require an expression");
                    info->err_num++;
                }

                gNodes[result_node].mLine = sline;
                xstrncpy(gNodes[result_node].mSName, sname, PATH_MAX);

                append_node_to_node_block(node_block, result_node);

                node_block->mHasResult = TRUE;

                expect_next_character_with_one_forward("}", info);
                info->lv_table = old_table;

                BOOL lambda_ = FALSE;

                BOOL simple_lambda_param = FALSE;
                BOOL construct_fun = TRUE;

                BOOL generics_function = info->mNumGenerics > 0;

                *node = sNodeTree_create_function(fun_name, "", params, num_params, result_type, MANAGED node_block, lambda_, block_var_table, struct_name, operator_fun, construct_fun, simple_lambda_param, info, generics_function, FALSE, version, FALSE, -1, fun_name);
            }
        }
    }

    info->mNumMethodGenerics = 0;

    return TRUE;
}

BOOL parse_destructor(unsigned int* node, char* struct_name, sParserInfo* info, BOOL recursive, BOOL inline_) 
{
    char* function_head = info->p;

    /// method generics ///
    info->mNumMethodGenerics = 0;

    BOOL operator_fun = FALSE;

    char fun_name[BUFSIZ];
    if(recursive) {
        snprintf(fun_name, BUFSIZ, "finalize_%s", info->sname);
    }
    else {
        snprintf(fun_name, BUFSIZ, "finalize");
    }
    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);

    expect_next_character_with_one_forward("(", info);

    /// result_type ///
    sNodeType* result_type = create_node_type_with_class_name("void");

    if(inline_) {
        result_type->mStatic = TRUE;
    }

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);

    /// parse_params ///
    int num_params = 0;
    BOOL var_arg = FALSE;

    sNodeType* self_type = create_node_type_with_class_name(struct_name);

    if(self_type == NULL) {
        char msg[1024];
        snprintf(msg, 1024, "%s is undefined", struct_name);
        parser_err_msg(info, msg);
        info->err_num++;
        return TRUE;
    }

    self_type->mPointerNum++;
    self_type->mNullable = TRUE;

    int i;
    for(i=0; i<info->mNumGenerics; i++) {
        char class_name_[VAR_NAME_MAX+1];

        snprintf(class_name_, VAR_NAME_MAX, "generics%d", i);
        self_type->mGenericsTypes[i] = create_node_type_with_class_name(class_name_);
    }
    self_type->mNumGenericsTypes = info->mNumGenerics;

    params[0].mType = clone_node_type(self_type);
    xstrncpy(params[0].mName, "self", VAR_NAME_MAX);

    num_params++;

    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    for(i=0; i<num_params; i++) {
        char* name = params[i].mName;

        if(name[0] == '\0') {
            parser_err_msg(info, "Require parametor variable names");
            info->err_num++;
        }
    }

    char asm_fname[VAR_NAME_MAX];
    if(!parse_attribute(info, asm_fname)) {
        return FALSE;
    }

    int version = info->mImplVersion;
    parse_version(&version, info);
    info->mFunVersion = version;

    if(info->mNumGenerics > 0) {
        char sname[PATH_MAX];
        xstrncpy(sname, info->sname, PATH_MAX);

        skip_spaces_and_lf(info);

        int sline = info->sline;

        if(info->parse_struct_phase) {
            if(!skip_block(info)) {
                return FALSE;
            };

            *node = sNodeTree_create_null(info);
        }
        else {
            if(*info->p == '{') {
                info->p++;
            }

            sBuf buf;
            sBuf_init(&buf);

            sBuf_append_str(&buf, "{");

            sBuf_append_str(&buf, "\nif(self == null) { return; }\n");

            if(!get_block_text(&buf, info, FALSE, FALSE)) {
                free(buf.mBuf);
                return FALSE;
            };

            *node = sNodeTree_create_generics_function(fun_name, params, num_params, result_type, MANAGED buf.mBuf, struct_name, sname, sline, var_arg, version, info);
        }

        //info->mNumMethodGenerics = 0;
    }
    else {
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);

            *node = sNodeTree_create_external_function(fun_name, "", params, num_params, var_arg, result_type, struct_name, operator_fun, version, info);
        }
        else {
            if(info->parse_struct_phase) {
                if(!skip_block(info)) {
                    return FALSE;
                };

                *node = sNodeTree_create_null(info);
            }
            else {
                sNodeBlock* node_block = ALLOC sNodeBlock_alloc();
                expect_next_character_with_one_forward("{", info);
                sVarTable* old_table = info->lv_table;

                info->lv_table = init_block_vtable(old_table, FALSE);

                sVarTable* block_var_table = info->lv_table;

                int i;
                for(i=0; i<num_params; i++) {
                    sParserParam* param = params + i;

                    BOOL readonly = FALSE;
                    if(!add_variable_to_table(info->lv_table, param->mName, param->mType, readonly, NULL, -1, FALSE, param->mType->mConstant))
                    {
                        return FALSE;
                    }
                }

                unsigned int node2 = 0;

                skip_spaces_and_lf(info);

                int sline = info->sline;
                char* sname = info->sname;

                char* p_before = info->p;

                info->p = "if(self == null) { return; }";

                if(!expression(&node2, info)) {
                    return FALSE;
                }

                gNodes[node2].mLine = sline;
                xstrncpy(gNodes[node2].mSName, sname, PATH_MAX);

                if(info->err_num == 0) {
                    append_node_to_node_block(node_block, node2);
                }

                info->p = p_before;

                if(!parse_block(node_block, FALSE, FALSE, info)) {
                    sNodeBlock_free(node_block);
                    return FALSE;
                }

                expect_next_character_with_one_forward("}", info);
                info->lv_table = old_table;

                BOOL lambda_ = FALSE;

                BOOL simple_lambda_param = FALSE;
                BOOL construct_fun = TRUE;

                BOOL generics_function = info->mNumGenerics > 0;

                *node = sNodeTree_create_function(fun_name, "", params, num_params, result_type, MANAGED node_block, lambda_, block_var_table, struct_name, operator_fun, construct_fun, simple_lambda_param, info, generics_function, FALSE, version, TRUE, -1, fun_name);
            }
        }
    }

    info->mNumMethodGenerics = 0;

    return TRUE;
}

static BOOL parse_inline_function(unsigned int* node, char* struct_name, sParserInfo* info)
{
    BOOL operator_fun = FALSE;

    /// method generics ///
    info->mNumMethodGenerics = 0;

    if(*info->p == '<') {
        info->p++;
        skip_spaces_and_lf(info);

        int num_generics = 0;

        while(TRUE) {
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
                return FALSE;
            }

            info->mMethodGenericsTypeNames[num_generics] = strdup(buf);
            num_generics++;

            if(num_generics >= GENERICS_TYPES_MAX)
            {
                parser_err_msg(info, "overflow generics types");
                return FALSE;
            }

            info->mNumMethodGenerics = num_generics;

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == '>') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                parser_err_msg(info, "require , or > character");
                info->err_num++;
                break;
            }
        }
    }

    char asm_fname[VAR_NAME_MAX];
    if(!parse_attribute(info, asm_fname)) {
        return FALSE;
    }

    sNodeType* result_type = NULL;
    BOOL define_struct_only = FALSE;
    if(!parse_type(&result_type, info, NULL, TRUE, FALSE, FALSE, &define_struct_only))
    {
        return FALSE;
    }

    if(result_type == NULL) {
        return TRUE;
    }

    char fun_name[VAR_NAME_MAX+1];
    if(!parse_word(fun_name, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    }

    if(*info->p != '(') {
        parser_err_msg(info, "require function definition\n");
        info->err_num++;
        return TRUE;
    }

    expect_next_character_with_one_forward("(", info);

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);
    int num_params = 0;

    /// parse_params ///
    BOOL var_arg = FALSE;
    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    int i;
    for(i=0; i<num_params; i++) {
        char* name = params[i].mName;

        if(name[0] == '\0') {
            parser_err_msg(info, "Require parametor variable names");
            info->err_num++;
        }
    }

    if(!parse_attribute(info, asm_fname)) {
        return FALSE;
    }

    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);

    skip_spaces_and_lf(info);

    int sline = info->sline;

    if(info->parse_struct_phase) {
        if(!skip_block(info)) {
            return FALSE;
        };

        *node = sNodeTree_create_null(info);
    }
    else {
        if(*info->p == '{') {
            info->p++;
        }

        sBuf buf;
        sBuf_init(&buf);

        if(!get_block_text(&buf, info, TRUE, FALSE)) {
            free(buf.mBuf);
            return FALSE;
        };

        *node = sNodeTree_create_inline_function(fun_name, params, num_params, result_type, MANAGED buf.mBuf, struct_name, sname, sline, var_arg, info);
    }

    return TRUE;
}

static BOOL parse_funcation_call_params(int* num_params, unsigned int* params, sParserInfo* info)
{
    if(*info->p == '(') {
        BOOL no_comma_operator = info->no_comma_operator;
        info->no_comma_operator = TRUE;

        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            while(1) {
                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }

                unsigned int node = 0;
                if(!expression(&node, info)) {
                    return FALSE;
                }

                if(node == 0) {
                    parser_err_msg(info, "require expression");
                    info->err_num++;
                    break;
                }

                params[*num_params] = node;
                (*num_params)++;

                if(*num_params >= PARAMS_MAX) {
                    parser_err_msg(info, "overflow parametor number for method call");
                    return FALSE;
                }

                if(*info->p == '@') {
                    info->p++;
                    while(isalnum(*info->p) || *info->p == '_') {
                        info->p++;
                    }
                    skip_spaces_and_lf(info);
                }

                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }


                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*info->p == '\0') {
                    parser_err_msg(info, "unexpected the source end");
                    info->err_num++;
                    break;
                }
                else {
                    char msg[1024];
                    snprintf(msg, 1024, "neo-c requires , or ) for method call. it is %c", *info->p);
                    parser_err_msg(info, msg);
                    info->err_num++;
                    break;
                }
            }
        }

        info->no_comma_operator = no_comma_operator;
    }

    skip_spaces_and_lf(info);

    /// simple lambda params ///
    if(*info->p == '{') {
        info->p++;
        int sline = info->sline;

        unsigned int node = 0;
        if(!parse_simple_lambda_params(&node, sline, info))
        {
            return FALSE;
        }

        if(node == 0) {
            parser_err_msg(info, "require expression");
            info->err_num++;
            return TRUE;
        }

        params[*num_params] = node;
        (*num_params)++;

        if(*num_params >= PARAMS_MAX) {
            parser_err_msg(info, "overflow parametor number for function call");
            return FALSE;
        }
    }

    return TRUE;
}

static BOOL parse_if(unsigned int* node, sParserInfo* info)
{
    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);
    int sline = info->sline;

    expect_next_character_with_one_forward("(", info);

    /// expression ///
    unsigned int expression_node = 0;
    if(!expression(&expression_node, info)) {
        return FALSE;
    }

    if(expression_node == 0) {
        parser_err_msg(info, "require expression for if");
        info->err_num++;
        return TRUE;
    }

    expect_next_character_with_one_forward(")", info);

    sNodeBlock* if_node_block = NULL;
    if(!parse_block_easy(ALLOC &if_node_block, FALSE, info))
    {
        return FALSE;
    }

    unsigned int elif_expression_nodes[ELIF_NUM_MAX];
    memset(elif_expression_nodes, 0, sizeof(unsigned int)*ELIF_NUM_MAX);

    sNodeBlock* elif_node_blocks[ELIF_NUM_MAX];
    memset(elif_node_blocks, 0, sizeof(sNodeBlock*)*ELIF_NUM_MAX);

    int elif_num = 0;

    sNodeBlock* else_node_block = NULL;

    while(1) {
        char* saved_p = info->p;
        int saved_sline = info->sline;

        char buf[VAR_NAME_MAX];

        /// else ///
        if(!isalpha(*info->p)) {
            break;
        }
        if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
            return FALSE;
        }

        if(strcmp(buf, "else") == 0) {
            if(parse_cmp(info->p, "if") == 0) {
                info->p+=2;
                skip_spaces_and_lf(info);

                expect_next_character_with_one_forward("(", info);

                /// expression ///
                if(!expression(&elif_expression_nodes[elif_num], info)) {
                    return FALSE;
                }

                if(elif_expression_nodes[elif_num] == 0) {
                    parser_err_msg(info, "require elif expression");
                    info->err_num++;
                    return TRUE;
                }

                expect_next_character_with_one_forward(")", info);

                if(!parse_block_easy(ALLOC &elif_node_blocks[elif_num], FALSE, info))
                {
                    return FALSE;
                }

                elif_num++;
                if(elif_num >= ELIF_NUM_MAX) {
                    parser_err_msg(info, "overflow elif num");
                    info->err_num++;
                    return FALSE;
                }
            }
            else {
                if(!parse_block_easy(ALLOC &else_node_block, FALSE, info))
                {
                    return FALSE;
                }
                break;
            }
        }
        else {
            info->p = saved_p;
            info->sline = saved_sline;
            break;
        }
    };

    *node = sNodeTree_if_expression(expression_node, MANAGED if_node_block, elif_expression_nodes, elif_node_blocks, elif_num, MANAGED else_node_block, info, sname, sline);

    return TRUE;
}


static BOOL postposition_operator(unsigned int* node, BOOL enable_assginment, sParserInfo* info)
{
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        /// call method or access field ///
        if(*info->p == '.' || (*info->p == '-' && *(info->p+1) == '>'))
        {
            if(!parse_sharp(info)) {
                return FALSE;
            }
            if(*info->p == '-') {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            else {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(!parse_sharp(info)) {
                return FALSE;
            }

            if(isalpha(*info->p) || *info->p == '_') 
            {
                char buf[VAR_NAME_MAX];

                if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
                    return FALSE;
                }
                skip_spaces_and_lf(info);

                if(!parse_sharp(info)) {
                    return FALSE;
                }

                /// call methods ///
                if(*info->p == '(' || *info->p == '{') 
                {
                    char* fun_name = buf;

                    unsigned int params[PARAMS_MAX];
                    int num_params = 0;

                    params[0] = *node;
                    num_params++;

                    if(!parse_funcation_call_params(&num_params, params, info)) 
                    {
                        return FALSE;
                    };

                    *node = sNodeTree_create_function_call(fun_name, params, num_params, TRUE, FALSE, info->mFunVersion, info);
                }
                /// access fields ///
                else {
                    if(enable_assginment && *info->p == '=' && *(info->p +1) != '=') {
                        info->p++;
                        skip_spaces_and_lf(info);

                        char var_name[VAR_NAME_MAX];
                        xstrncpy(var_name, buf, VAR_NAME_MAX);

                        unsigned int right_node = 0;

                        if(!expression(&right_node, info)) {
                            return FALSE;
                        }

                        if(right_node == 0) {
                            parser_err_msg(info, "Require right value");
                            info->err_num++;

                            *node = 0;
                        }
                        else {
                            *node = sNodeTree_create_store_field(var_name, *node, right_node, info);
                        }
                    }
                    else {
                        unsigned int obj_node = *node;

                        if(*info->p == '+' && *(info->p+1) == '+')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            unsigned int right_node = sNodeTree_create_int_value(1, info);

                            *node = sNodeTree_create_add(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                            *node = sNodeTree_create_sub(*node, right_node, 0, info);
                        }
                        else if(*info->p == '-' && *(info->p+1) == '-')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            unsigned int right_node = sNodeTree_create_int_value(1, info);

                            *node = sNodeTree_create_sub(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                            *node = sNodeTree_create_add(*node, right_node, 0, info);
                        }
                        else if(enable_assginment && *info->p == '+' && *(info->p+1) == '=')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            unsigned int right_node = 0;
                            if(!expression(&right_node, info)) {
                                return FALSE;
                            }

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;

                            *node = sNodeTree_create_add(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                            *node = sNodeTree_create_sub(*node, right_node, 0, info);
                        }
                        else if(enable_assginment && *info->p == '-' && *(info->p+1) == '=')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            unsigned int right_node = 0;
                            if(!expression(&right_node, info)) {
                                return FALSE;
                            }

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;

                            *node = sNodeTree_create_sub(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                            *node = sNodeTree_create_add(*node, right_node, 0, info);
                        }
                        else if(enable_assginment && *info->p == '*' && *(info->p+1) == '=')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            unsigned int right_node = 0;
                            if(!expression(&right_node, info)) {
                                return FALSE;
                            }

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;

                            *node = sNodeTree_create_mult(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                        }
                        else if(enable_assginment && *info->p == '/' && *(info->p+1) == '=')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            unsigned int right_node = 0;
                            if(!expression(&right_node, info)) {
                                return FALSE;
                            }

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;

                            *node = sNodeTree_create_div(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                        }
                        else if(enable_assginment && *info->p == '%' && *(info->p+1) == '=')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            unsigned int right_node = 0;
                            if(!expression(&right_node, info)) {
                                return FALSE;
                            }

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;

                            *node = sNodeTree_create_mod(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                        }
                        else if(enable_assginment && *info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=')
                        {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            unsigned int right_node = 0;
                            if(!expression(&right_node, info)) {
                                return FALSE;
                            }

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;

                            *node = sNodeTree_create_left_shift(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                        }
                        else if(enable_assginment && *info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=')
                        {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            unsigned int right_node = 0;
                            if(!expression(&right_node, info)) {
                                return FALSE;
                            }

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;

                            *node = sNodeTree_create_right_shift(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                        }
                        else if(enable_assginment && *info->p == '&' && *(info->p+1) == '=')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            unsigned int right_node = 0;
                            if(!expression(&right_node, info)) {
                                return FALSE;
                            }

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;

                            *node = sNodeTree_create_and(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                        }
                        else if(enable_assginment && *info->p == '^' && *(info->p+1) == '=')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            unsigned int right_node = 0;
                            if(!expression(&right_node, info)) {
                                return FALSE;
                            }

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;

                            *node = sNodeTree_create_xor(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                        }
                        else if(enable_assginment && *info->p == '|' && *(info->p+1) == '=')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            unsigned int right_node = 0;
                            if(!expression(&right_node, info)) {
                                return FALSE;
                            }

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;

                            *node = sNodeTree_create_or(field_node, right_node, 0, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
                        }
                        else if(*info->p == '-' && *(info->p+1) == '>' && *(info->p+2) == '(')
                        {
                            info->p+=2;

                            unsigned int params[PARAMS_MAX];
                            int num_params = 0;

                            if(!parse_funcation_call_params(&num_params, params, info)) 
                            {
                                return FALSE;
                            };

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            *node = sNodeTree_create_lambda_call(*node, params, num_params, info);

                        }
                        else {
                            *node = sNodeTree_create_load_field(buf, obj_node, info);
                        }
                    }
                }
            }
            else {
                char msg[1024];
                snprintf(msg, 1024, "require method name or field name after . (%c)", *info->p);
                parser_err_msg(info, msg);
                info->err_num++;
                *node = 0;
                break;
            }
        }
        /// access element ///
        else if(*info->p == '[') {
            int num_dimention = 0;
            unsigned int index_node[ARRAY_DIMENTION_MAX];

            while(*info->p == '[') {
                info->p++;
                skip_spaces_and_lf(info);

                if(!expression(&index_node[num_dimention], info)) {
                    return FALSE;
                }

                if(index_node[num_dimention] == 0) {
                    parser_err_msg(info, "Require index value");
                    info->err_num++;

                    *node = 0;
                    break;
                }

                num_dimention++;

                if(num_dimention >= ARRAY_DIMENTION_MAX) {
                    parser_err_msg(info, "Ovewflow array dimetion");
                    return FALSE;
                }

                expect_next_character_with_one_forward("]", info);
            }

            if(enable_assginment && *info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;

                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                if(right_node == 0) {
                    parser_err_msg(info, "Require right value");
                    info->err_num++;

                    *node = 0;
                }
                else {
                    *node = sNodeTree_create_store_element(*node, index_node, num_dimention, right_node, info);
                }
            }
            else {
                *node = sNodeTree_create_load_array_element(*node, index_node, num_dimention, info);
            }
        }
        else if(*info->p == '+' && *(info->p+1) == '+')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            *node = sNodeTree_create_plus_plus(*node, info);
        }
        else if(*info->p == '-' && *(info->p+1) == '-')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            *node = sNodeTree_create_minus_minus(*node, info);
        }
        else if(enable_assginment && *info->p == '+' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, info)) {
                return FALSE;
            };

            *node  = sNodeTree_create_equal_plus(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '-' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, info)) {
                return FALSE;
            };

            *node = sNodeTree_create_equal_minus(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '*' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, info)) {
                return FALSE;
            };

            *node  = sNodeTree_create_equal_mult(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '/' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, info)) {
                return FALSE;
            };

            *node  = sNodeTree_create_equal_div(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '%' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, info)) {
                return FALSE;
            };

            *node  = sNodeTree_create_equal_mod(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=')
        {
            info->p+=3;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, info)) {
                return FALSE;
            };

            *node  = sNodeTree_create_equal_lshift(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=')
        {
            info->p+=3;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, info)) {
                return FALSE;
            };

            *node = sNodeTree_create_equal_rshift(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '&' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, info)) {
                return FALSE;
            };

            *node = sNodeTree_create_equal_and(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '^' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, info)) {
                return FALSE;
            };

            *node = sNodeTree_create_equal_xor(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '|' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, info)) {
                return FALSE;
            };

            *node = sNodeTree_create_equal_or(*node, right_node, info);
        }
        else {
            break;
        }
    }

    if(!parse_sharp(info)) {
        return FALSE;
    }

    return TRUE;
}

static BOOL parse_while(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);

    /// expression ///
    unsigned int expression_node = 0;
    if(!expression(&expression_node, info)) {
        return FALSE;
    }

    if(expression_node == 0) {
        parser_err_msg(info, "require expression for while");
        info->err_num++;
        return TRUE;
    }

    expect_next_character_with_one_forward(")", info);

    sNodeBlock* while_node_block = NULL;
    if(!parse_block_easy(ALLOC &while_node_block, FALSE, info))
    {
        return FALSE;
    };


    *node = sNodeTree_while_expression(expression_node, MANAGED while_node_block, info);

    return TRUE;
}

static BOOL parse_do(unsigned int* node, sParserInfo* info)
{
    sNodeBlock* while_node_block = NULL;
    if(!parse_block_easy(ALLOC &while_node_block, FALSE, info))
    {
        return FALSE;
    }
    
    char buf[VAR_NAME_MAX];
    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
        return FALSE;
    }

    if(strcmp(buf, "while") != 0) {
        parser_err_msg(info, "require while word");
        info->err_num++;
        return TRUE;
    }

    expect_next_character_with_one_forward("(", info);

    /// expression ///
    unsigned int expression_node = 0;
    if(!expression(&expression_node, info)) {
        return FALSE;
    }

    if(expression_node == 0) {
        parser_err_msg(info, "require expression for do while");
        info->err_num++;
        return TRUE;
    }

    expect_next_character_with_one_forward(")", info);

    *node = sNodeTree_do_while_expression(expression_node, MANAGED while_node_block, info);

    return TRUE;
}

static BOOL parse_for(unsigned int* node, sParserInfo* info)
{
    sVarTable* old_vtable = info->lv_table;
    info->lv_table = init_block_vtable(old_vtable, FALSE);
    
    expect_next_character_with_one_forward("(", info);

    /// expression1 ///
    unsigned int expression_node = 0;
    if(!expression(&expression_node, info)) {
        return FALSE;
    }

    if(expression_node == 0) {
        parser_err_msg(info, "require expression for \"for\"");
        info->err_num++;
        return TRUE;
    }

    if(*info->p == ';') {
        expect_next_character_with_one_forward(";", info);
    }
    else {
        *node = expression_node;
        return TRUE;
    }

    /// expression2 ///
    unsigned int expression_node2 = 0;
    if(!expression(&expression_node2, info)) {
        return FALSE;
    }

    if(expression_node2 == 0) {
        parser_err_msg(info, "require expression2 for \"for\"");
        info->err_num++;
        return TRUE;
    }

    if(*info->p == ';') {
        expect_next_character_with_one_forward(";", info);
    }
    else {
        *node = expression_node2;
        return TRUE;
    }

    /// expression3 ///
    unsigned int expression_node3 = 0;
    if(!expression(&expression_node3, info)) {
        return FALSE;
    }

    if(expression_node3 == 0) {
        parser_err_msg(info, "require expression3 for \"for\"");
        info->err_num++;
        return TRUE;
    }

    if(*info->p == ')') {
        expect_next_character_with_one_forward(")", info);
    }
    else {
        *node = expression_node3;
        return TRUE;
    }

    expect_next_character_with_one_forward("{", info);

    sNodeBlock* for_node_block = ALLOC sNodeBlock_alloc();
    if(!parse_block(for_node_block, FALSE, FALSE, info)) 
    {
        return FALSE;
    }

    expect_next_character_with_one_forward("}", info);

    *node = sNodeTree_for_expression(expression_node, expression_node2, expression_node3, MANAGED for_node_block, info);

    info->lv_table = old_vtable;

    return TRUE;
}

int gNumLambdaName = 0;

void create_lambda_name(char* lambda_name, size_t size_lambda_name, char* module_name)
{
    xstrncpy(lambda_name, module_name, size_lambda_name);
    xstrncat(lambda_name, "_", size_lambda_name);
    xstrncat(lambda_name, "lambda", size_lambda_name);

    char buf[128];
    snprintf(buf, 128, "%d", gNumLambdaName);

    xstrncat(lambda_name, buf, size_lambda_name);

    gNumLambdaName++;
}

static BOOL parse_lambda(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);
    int num_params = 0;

    /// parse_params ///
    BOOL var_arg = FALSE;
    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    sNodeType* result_type = NULL;
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf(info);

        BOOL define_struct_only = FALSE;
        if(!parse_type(&result_type, info, NULL, TRUE, FALSE, FALSE, &define_struct_only)) {
            return FALSE;
        }
    }
    else {
        result_type = create_node_type_with_class_name("void");
    }

    sNodeBlock* node_block = ALLOC sNodeBlock_alloc();
    expect_next_character_with_one_forward("{", info);
    sVarTable* old_table = info->lv_table;

    info->lv_table = init_block_vtable(old_table, FALSE);
    sVarTable* block_var_table = info->lv_table;

    int i;
    for(i=0; i<num_params; i++) {
        sParserParam* param = params + i;

        BOOL readonly = TRUE;
        if(!add_variable_to_table(info->lv_table, param->mName, param->mType, readonly, NULL, -1, FALSE, param->mType->mConstant))
        {
            return FALSE;
        }
    }

    if(info->parse_struct_phase) {
        if(!skip_block(info)) {
            return FALSE;
        };

        *node = sNodeTree_create_null(info);
    }
    else {
        if(!parse_block(node_block, FALSE, FALSE, info)) {
            sNodeBlock_free(node_block);
            return FALSE;
        }

        expect_next_character_with_one_forward("}", info);
        info->lv_table = old_table;

        char fun_name[VAR_NAME_MAX];
        create_lambda_name(fun_name, VAR_NAME_MAX, info->module_name);

        BOOL lambda_ = TRUE;
        BOOL simple_lambda_param = FALSE;
        BOOL construct_fun = FALSE;
        BOOL operator_fun = FALSE;

        *node = sNodeTree_create_function(fun_name, "", params, num_params, result_type, MANAGED node_block, lambda_, block_var_table, NULL, operator_fun, construct_fun, simple_lambda_param, info, FALSE, FALSE, 0, FALSE, -1, fun_name);
    }

    return TRUE;
}

static BOOL parse_new(unsigned int* node, sParserInfo* info)
{
    sNodeType* node_type = NULL;

    BOOL define_struct_only = FALSE;
    if(!parse_type(&node_type, info, NULL, TRUE, FALSE, FALSE, &define_struct_only)) {
        return FALSE;
    }

    sCLClass* klass = node_type->mClass;

    if(klass) {
        unsigned int object_num = 0;
        if(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf(info);

            if(!expression(&object_num, info)) {
                return FALSE;
            }

            expect_next_character_with_one_forward("]", info);
        }

        if(*info->p == '{') {
            BOOL no_comma_operator = info->no_comma_operator;
            info->no_comma_operator = TRUE;
            
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int initialize_array_values[INIT_ARRAY_MAX];
            int num_initialize_array_value = 0;
            memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);

            while(TRUE) {
                unsigned int right_node = 0;

                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                if(right_node == 0) {
                    parser_err_msg(info, "Require right value for {}");
                    info->err_num++;

                    *node = 0;
                }
                else {
                    initialize_array_values[num_initialize_array_value++] = right_node;
                }

                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == '\0') {
                    parser_err_msg(info, "In the array initialization, the parser has arraived at the source end");
                    return FALSE;
                }
                else if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
            }

            if(object_num > 0) {
                *node = sNodeTree_create_object(node_type, object_num, info->sname, info->sline, info);

                *node = sNodeTree_create_array_with_initialization("", num_initialize_array_value, initialize_array_values, *node, info);
            }
            else {
                *node = sNodeTree_create_object(node_type, object_num, info->sname, info->sline, info);

                *node = sNodeTree_create_struct_with_initialization("", num_initialize_array_value, initialize_array_values, *node, info);
            }

            info->no_comma_operator = no_comma_operator;
        }
        else {
            *node = sNodeTree_create_object(node_type, object_num, info->sname, info->sline, info);
        }
    }
    else {
        parser_err_msg(info, "Invalid type name");
        info->err_num++;
    }

    return TRUE;
}

BOOL parse_delete(unsigned int* node, sParserInfo* info)
{
    unsigned int object_node;
    if(!expression(&object_node, info)) {
        return FALSE;
    };

    *node = sNodeTree_create_delete(object_node, info);

    return TRUE;
}

BOOL parse_borrow(unsigned int* node, sParserInfo* info)
{
    unsigned int object_node;
    if(!expression(&object_node, info)) {
        return FALSE;
    };

    *node = sNodeTree_create_borrow(object_node, info);

    return TRUE;
}

BOOL parse_dummy_heap(unsigned int* node, sParserInfo* info)
{
    unsigned int object_node;
    if(!expression(&object_node, info)) {
        return FALSE;
    };

    *node = sNodeTree_create_dummy_heap(object_node, info);

    return TRUE;
}

BOOL parse_managed(unsigned int* node, sParserInfo* info)
{
    char buf[VAR_NAME_MAX+1];

    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    };

    *node = sNodeTree_create_managed(buf, info);

    return TRUE;
}

static BOOL parse_alloca(unsigned int* node, sParserInfo* info)
{
    sNodeType* node_type = NULL;

    BOOL define_struct_only = FALSE;
    if(!parse_type(&node_type, info, NULL, TRUE, FALSE, FALSE, &define_struct_only)) {
        return FALSE;
    }

    sCLClass* klass = node_type->mClass;

    if(klass) {
        unsigned int object_num = 0;
        if(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf(info);

            if(!expression(&object_num, info)) {
                return FALSE;
            }

            expect_next_character_with_one_forward("]", info);
        };

        *node = sNodeTree_create_stack_object(node_type, object_num, info->sname, info->sline, info);
    }
    else {
        parser_err_msg(info, "Invalid type name");
        info->err_num++;
    }

    return TRUE;
}

static BOOL parse_sizeof(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];
    (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);

    info->p = p_before;
    info->sline = sline_before;

    if(is_type_name(buf, info)) {
        sNodeType* node_type = NULL;

        BOOL define_struct_only = FALSE;
        if(!parse_type(&node_type, info, NULL, TRUE, FALSE, FALSE, &define_struct_only)) {
            return FALSE;
        }

        expect_next_character_with_one_forward(")", info);

        *node = sNodeTree_create_sizeof(node_type, info);
    }
    else {
        if(!expression(node, info)) {
            return FALSE;
        }

        expect_next_character_with_one_forward(")", info);

        *node = sNodeTree_create_sizeof_expression(*node, info);
    }

    return TRUE;
}

static BOOL parse_alignof(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];
    (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);

    info->p = p_before;
    info->sline = sline_before;

    if(is_type_name(buf, info)) {
        sNodeType* node_type = NULL;

        BOOL define_struct_only = FALSE;
        if(!parse_type(&node_type, info, NULL, TRUE, FALSE, FALSE, &define_struct_only)) {
            return FALSE;
        }

        expect_next_character_with_one_forward(")", info);

        *node = sNodeTree_create_alignof(node_type, info);
    }
    else {
        if(!expression(node, info)) {
            return FALSE;
        }

        expect_next_character_with_one_forward(")", info);

        *node = sNodeTree_create_alignof_expression(*node, info);
    }

    return TRUE;
}

BOOL parse_clone(unsigned int* node, sParserInfo* info)
{
    if(!expression(node, info)) {
        return FALSE;
    }

    if(*node == 0) {
        parser_err_msg(info, "Require expression for clone");
        info->err_num++;
        return TRUE;
    };

    *node = sNodeTree_create_clone(*node, info);

    return TRUE;
}

BOOL parse_class_name_expression(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];
    (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);

    info->p = p_before;
    info->sline = sline_before;

    if(is_type_name(buf, info)) {
        sNodeType* node_type = NULL;

        BOOL define_struct_only = FALSE;
        if(!parse_type(&node_type, info, NULL, TRUE, FALSE, FALSE, &define_struct_only)) {
            return FALSE;
        }

        expect_next_character_with_one_forward(")", info);

        *node = sNodeTree_create_class_name(node_type, info);
    }
    else {
        if(!expression(node, info)) {
            return FALSE;
        }

        expect_next_character_with_one_forward(")", info);

        *node = sNodeTree_create_class_name_expression(*node, info);
    }

    return TRUE;
}

BOOL parse_typedef(unsigned int* node, sParserInfo* info)
{
    unsigned int nodes[IMPL_DEF_MAX];
    memset(nodes, 0, sizeof(unsigned int)*IMPL_DEF_MAX);
    int num_nodes = 0;

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];

    if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
    {
        return FALSE;
    }

    unsigned int anonymous_enum_node = 0;

    if(strcmp(buf, "enum") == 0) {
        if(*info->p == '{') {
            if(!parse_anonymous_enum(&anonymous_enum_node, info)) {
                return FALSE;
            }
        }
    }

    info->p = p_before;
    info->sline = sline_before;

    if(anonymous_enum_node != 0)
    {
        nodes[0] = anonymous_enum_node;
        num_nodes++;
    }

    sNodeType* node_type = NULL;
    BOOL define_struct_only = FALSE;
    if(!parse_type(&node_type, info, buf, TRUE, TRUE, FALSE, &define_struct_only)) {
        return FALSE;
    }

    char asm_fname[VAR_NAME_MAX];
    if(!parse_attribute(info, asm_fname)) {
        return FALSE;
    }

    while(TRUE) {
        sNodeType* node_type2 = clone_node_type(node_type);

        if(buf[0] == '\0') {
            if(!parse_variable_name(buf, VAR_NAME_MAX, info, node_type2, FALSE, FALSE))
            {
                return FALSE;
            }
        }

        if(!parse_typedef_attribute(info))
        {
            return FALSE;
        };

        *node = sNodeTree_create_typedef(buf, node_type2, info);
        
        buf[0] = '\0';

        nodes[1] = *node;
        num_nodes++;

        if(*info->p++ == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }

    BOOL extern_ = FALSE;
    *node = sNodeTree_create_define_variables(nodes, num_nodes, extern_, info);

    return TRUE;
}


static BOOL parse_impl(unsigned int* node, sParserInfo* info)
{
    char struct_name[VAR_NAME_MAX];

    char buf[VAR_NAME_MAX];
    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
        return FALSE;
    }

    xstrncpy(struct_name, buf, VAR_NAME_MAX);

    while(*info->p == '*') {
        info->p++;
        xstrncat(struct_name, "*", VAR_NAME_MAX);
    }

    xstrncpy(info->impl_struct_name, struct_name, VAR_NAME_MAX);

    info->mNumGenerics = 0;

    if(*info->p == '<') {
        info->p++;
        skip_spaces_and_lf(info);

        int num_generics = 0;

        while(TRUE) {
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
                return FALSE;
            }

            info->mGenericsTypeNames[num_generics] = strdup(buf);
            num_generics++;

            if(num_generics >= GENERICS_TYPES_MAX)
            {
                parser_err_msg(info, "overflow generics types");
                return FALSE;
            }

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == '>') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                parser_err_msg(info, "require , or > character");
                info->err_num++;
                break;
            }
        }

        info->mNumGenerics = num_generics;
    }

    int version = 0;
    parse_version(&version, info);
    skip_spaces_and_lf(info);

    info->mImplVersion = version;

    expect_next_character_with_one_forward("{", info);

    if(!expression(node, info)) {
        return FALSE;
    }

    return TRUE;
}


static void parse_impl_end(sParserInfo* info)
{
    strcpy(info->impl_struct_name, "");
    info->mImplVersion = 0;
    info->mNumGenerics = 0;
}

static BOOL parse_switch(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);

    /// expression1 ///
    unsigned int expression_node = 0;
    if(!expression(&expression_node, info)) {
        return FALSE;
    }

    if(expression_node == 0) {
        parser_err_msg(info, "require expression for \"switch\"");
        info->err_num++;
        return TRUE;
    }

    expect_next_character_with_one_forward(")", info);
    expect_next_character_with_one_forward("{", info);

    int size_switch_expression = 16;
    int num_switch_expression = 0;
    unsigned int* switch_expression = (unsigned int*)xcalloc(1, sizeof(unsigned int)*size_switch_expression);
    info->switch_nest++;

    info->first_case = TRUE;
    info->case_after_return = FALSE;

    while(1) {
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            info->switch_nest--;
            break;
        }
        else {
            int sline = info->sline;

            if(!expression(switch_expression + num_switch_expression, info)) 
            {
                return FALSE;
            }

            if(gNodes[switch_expression[num_switch_expression]].mNodeType == kNodeTypeReturn) 
            {
                info->case_after_return = TRUE;
            }
            else if(gNodes[switch_expression[num_switch_expression]].mNodeType == kNodeTypeCase) 
            {
            }
            else {
                info->case_after_return = FALSE;
            }

            unsigned int node = switch_expression[num_switch_expression];
            
            gNodes[node].mLine = sline;

            if(gNodes[node].mNodeType == kNodeTypeCase) {
                gNodes[node].uValue.sCase.mFirstCase = info->first_case;
                info->first_case = FALSE;
            }
            else {
                info->first_case = TRUE;
            }

            num_switch_expression++;

            if(num_switch_expression >= size_switch_expression) 
            {
                size_switch_expression *= 2;
                switch_expression = xrealloc(switch_expression, sizeof(unsigned int)*size_switch_expression);
            }

            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    };

    *node = sNodeTree_switch_expression(expression_node, num_switch_expression, MANAGED switch_expression, info);

    return TRUE;
}

static BOOL parse_case(unsigned int* node, sParserInfo* info)
{
    BOOL in_case = info->in_case;
    info->in_case = TRUE;

    /// expression1 ///
    unsigned int expression_node = 0;
    if(!expression(&expression_node, info)) {
        info->in_case = in_case;
        return FALSE;
    }

    info->in_case = in_case;

    if(expression_node == 0) {
        parser_err_msg(info, "require expression for \"case\"");
        info->err_num++;
        return TRUE;
    }

    expect_next_character_with_one_forward(":", info);

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];
    if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
    {
        return FALSE;
    }

    BOOL last_case = strcmp(buf, "case") != 0;

    info->p = p_before;
    info->sline = sline_before;

    *node = sNodeTree_case_expression(expression_node, last_case, info->case_after_return, info);

    return TRUE;
}

static BOOL parse_default(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward(":", info);

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];
    if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
    {
        return FALSE;
    }

    BOOL last_case = strcmp(buf, "case") != 0;

    info->p = p_before;
    info->sline = sline_before;

    *node = sNodeTree_case_expression(0, last_case, info->case_after_return, info);

    return TRUE;
}

static BOOL parse_label(unsigned int* node, char* name, sParserInfo* info)
{
    expect_next_character_with_one_forward(":", info);

    *node = sNodeTree_label_expression(name, info);

    return TRUE;
}

static BOOL parse_goto(unsigned int* node, sParserInfo* info)
{
    char buf[VAR_NAME_MAX+1];
    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    };

    *node = sNodeTree_goto_expression(buf, info);

    return TRUE;
}
static BOOL parse_va_arg(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);

    /// expression1 ///
    if(!expression(node, info)) {
        return FALSE;
    }

    if(*node == 0) {
        parser_err_msg(info, "require expression for va_arg");
        info->err_num++;
        return TRUE;
    }

    expect_next_character_with_one_forward(",", info);

    sNodeType* node_type = NULL;
    BOOL define_struct_only = FALSE;
    if(!parse_type(&node_type, info, NULL, FALSE, FALSE, FALSE, &define_struct_only))
    {
        return FALSE;
    }

    expect_next_character_with_one_forward(")", info);

    *node = sNodeTree_create_va_arg(*node, node_type, info);

    return TRUE;
}

BOOL get_hex_number(unsigned int* node, sParserInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';
    *p++ = 'x';

    while((*info->p >= '0' && *info->p <= '9') || (*info->p >= 'a' && *info->p <= 'f') || (*info->p >= 'A' && *info->p <= 'F') || *info->p == '_') 
    {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p++ = *info->p;
            info->p++;
        }

        if(p - buf >= buf_size-1) {
            parser_err_msg(info, "overflow node of number");
            return FALSE;
        }
    };
    *p = 0;
    skip_spaces_and_lf(info);

    unsigned clint64 value = strtoll(buf, NULL, 0);

    if(*info->p == 'u' || *info->p == 'U')
    {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);

                *node = sNodeTree_create_ulong_value(value, info);
            }
            else {
                *node = sNodeTree_create_ulong_value(value, info);
            }
        }
        else {
            *node = sNodeTree_create_uint_value(value, info);
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            *node = sNodeTree_create_long_value(value, info);
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            info->p++;
            skip_spaces_and_lf(info);

            *node = sNodeTree_create_ulong_value(value, info);
        }
        else {
            *node = sNodeTree_create_long_value(value, info);
        }
    }
    else {
        *node = sNodeTree_create_int_value(value, info);
    }

    return TRUE;
}

BOOL get_oct_number(unsigned int* node, sParserInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';

    while((*info->p >= '0' && *info->p <= '7') || *info->p == '_') {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p++ = *info->p++;
        }

        if(p - buf >= buf_size-1) {
            parser_err_msg(info, "overflow node of number");
            return FALSE;
        }
    };

    *p = 0;
    skip_spaces_and_lf(info);

    unsigned clint64 value = strtoul(buf, NULL, 0);

    if(*info->p == 'u' || *info->p == 'U')
    {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);

                *node = sNodeTree_create_ulong_value(value, info);
            }
            else {
                *node = sNodeTree_create_ulong_value(value, info);
            }
        }
        else {
            *node = sNodeTree_create_uint_value(value, info);
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            *node = sNodeTree_create_long_value(value, info);
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            info->p++;
            skip_spaces_and_lf(info);

            *node = sNodeTree_create_ulong_value(value, info);
        }
        else {
            *node = sNodeTree_create_long_value(value, info);
        }
    }
    else {
        *node = sNodeTree_create_int_value(value, info);
    }

    return TRUE;
}

static BOOL parse_is_heap(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];
    (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);

    info->p = p_before;
    info->sline = sline_before;

    if(is_type_name(buf, info)) {
        sNodeType* node_type = NULL;

        BOOL define_struct_only = FALSE;
        if(!parse_type(&node_type, info, NULL, TRUE, FALSE, FALSE, &define_struct_only)) {
            return FALSE;
        }

        expect_next_character_with_one_forward(")", info);

        *node = sNodeTree_create_is_heap(node_type, info);
    }
    else {
        if(!expression(node, info)) {
            return FALSE;
        }

        expect_next_character_with_one_forward(")", info);

        *node = sNodeTree_create_is_heap_expression(*node, info);
    }

    return TRUE;
}

static BOOL parse_inherit(unsigned int* node, sParserInfo* info) 
{
    if(*info->p == '(') {
        char fun_name[VAR_NAME_MAX];

        xstrncpy(fun_name, info->fun_name, VAR_NAME_MAX);

        unsigned int params[PARAMS_MAX];
        int num_params = 0;

        if(!parse_funcation_call_params(&num_params, params, info)) 
        {
            return FALSE;
        }

        if(strcmp(fun_name, "va_start") == 0) {
            num_params = 1;
        };

        *node = sNodeTree_create_function_call(fun_name, params, num_params, TRUE, TRUE, info->mFunVersion, info);
    }

    return TRUE;
}


static BOOL expression_node(unsigned int* node, BOOL enable_assginment, sParserInfo* info)
{
    if(!parse_sharp(info)) {
        return FALSE;
    }

    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);

        char* p_before = info->p;
        int sline_before = info->sline;

        char buf[VAR_NAME_MAX+1];
        if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
        {
            return FALSE;
        }

        if(is_type_name(buf, info) && !get_variable_from_table(info->lv_table, buf)) {
            info->p = p_before;
            info->sline = sline_before;

            sNodeType* node_type = NULL;
            BOOL define_struct_only = FALSE;
            if(!parse_type(&node_type, info, NULL, TRUE, FALSE, FALSE, &define_struct_only))
            {
                return FALSE;
            }

            expect_next_character_with_one_forward(")", info);
            if(!expression_node(node, TRUE, info)) 
            {
                return FALSE;
            }

            if(*node == 0) {
                parser_err_msg(info, "require value for cast");
                info->err_num++;
            };

            *node = sNodeTree_create_cast(node_type, *node, info);
        }
        else {
            info->p = p_before;
            info->sline = sline_before;

            if(!expression(node, info)) {
                return FALSE;
            }
            skip_spaces_and_lf(info);

            if(*node == 0) {
                parser_err_msg(info, "require expression as ( operand");
                info->err_num++;
            }

            expect_next_character_with_one_forward(")", info);
        }
    }
    else if(*info->p == '{') {
        sNodeBlock* node_block = NULL;
        if(!parse_block_easy(ALLOC &node_block, FALSE, info))
        {
            return FALSE;
        };

        *node = sNodeTree_create_normal_block(node_block, info);
    }
    else if(*info->p == '}' && strcmp(info->impl_struct_name, "") != 0)
    {
        info->p++;
        skip_spaces_and_lf(info);

        parse_impl_end(info);

        *node = sNodeTree_create_null(info);
    }
    else if(*info->p == '*') {
        info->p++;
        skip_spaces_and_lf(info);

        if(!expression_node(node, FALSE, info)) 
        {
            return FALSE;
        }

        if(*node == 0) {
            parser_err_msg(info, "require value for *");
            info->err_num++;
        }

        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int node2 = 0;
            if(!expression(&node2, info)) 
            {
                return FALSE;
            }

            if(*node == 0) {
                parser_err_msg(info, "require value for *");
                info->err_num++;
            };

            *node = sNodeTree_create_store_value_to_address(*node, node2, info);
        }
        else {
            *node = sNodeTree_create_dereffernce(*node, info);
        }
    }
    else if(*info->p == '&') {
        info->p++;
        skip_spaces_and_lf(info);

        if(!expression_node(node, TRUE, info)) {
            return FALSE;
        }

        if(*node == 0) {
            parser_err_msg(info, "require value for &");
            info->err_num++;
        };

        *node = sNodeTree_create_reffernce(*node, info);
    }
    else if(*info->p == '!') {
        info->p++;
        skip_spaces_and_lf(info);

        if(!expression_node(node, TRUE, info)) {
            return FALSE;
        }

        if(*node == 0) {
            parser_err_msg(info, "require value for !");
            info->err_num++;
        };

        *node = sNodeTree_create_logical_denial(*node, 0, 0, info);
    }
    else if(*info->p == '~') {
        info->p++;
        skip_spaces_and_lf(info);

        if(!expression_node(node, TRUE, info))
        {
            return FALSE;
        }

        if(*node == 0) {
            parser_err_msg(info, "require value for operator ~");
            info->err_num++;
        };

        *node = sNodeTree_create_complement(*node, info);
    }
    else if(*info->p == '+' && *(info->p+1) == '+')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int exp = 0;
        if(!expression_node(&exp, TRUE, info)) {
            return FALSE;
        }

        if(gNodes[exp].mNodeType == kNodeTypeLoadVariable)
        {
            char var_name[VAR_NAME_MAX];

            xstrncpy(var_name, gNodes[exp].uValue.sLoadVariable.mVarName, VAR_NAME_MAX);

            unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

            unsigned int right_node = sNodeTree_create_int_value(1, info);

            *node = sNodeTree_create_add(left_node, right_node, 0, info);

            *node = sNodeTree_create_store_variable(var_name, *node, FALSE, info);
        }
        else if(gNodes[exp].mNodeType == kNodeTypeLoadField)
        {
            char var_name[VAR_NAME_MAX];
            xstrncpy(var_name, gNodes[exp].uValue.sLoadField.mVarName, VAR_NAME_MAX);

            unsigned int obj_node = gNodes[exp].mLeft;

            unsigned int right_node = sNodeTree_create_int_value(1, info);

            *node = sNodeTree_create_add(exp, right_node, 0, info);

            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
        }
        else {
            parser_err_msg(info, "Invalid node for ++");
            info->err_num++;

            *node = 0;
            return TRUE;
        }
    }
    else if(*info->p == '-' && *(info->p+1) == '-')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int exp = 0;
        if(!expression_node(&exp, TRUE, info)) {
            return FALSE;
        }

        if(gNodes[exp].mNodeType == kNodeTypeLoadVariable)
        {
            char var_name[VAR_NAME_MAX];

            xstrncpy(var_name, gNodes[exp].uValue.sLoadVariable.mVarName, VAR_NAME_MAX);

            unsigned int left_node = sNodeTree_create_load_variable(var_name, info);
            unsigned int right_node = sNodeTree_create_int_value(1, info);

            *node = sNodeTree_create_sub(left_node, right_node, 0, info);

            *node = sNodeTree_create_store_variable(var_name, *node, FALSE, info);
        }
        else if(gNodes[exp].mNodeType == kNodeTypeLoadField)
        {
            char var_name[VAR_NAME_MAX];

            xstrncpy(var_name, gNodes[exp].uValue.sLoadField.mVarName, VAR_NAME_MAX);

            unsigned int obj_node = gNodes[exp].mLeft;

            unsigned int right_node = sNodeTree_create_int_value(1, info);

            *node = sNodeTree_create_sub(exp, right_node, 0, info);

            *node = sNodeTree_create_store_field(var_name, obj_node, *node, info);
        }
        else {
            parser_err_msg(info, "Invalid node for ++");
            info->err_num++;

            *node = 0;
            return TRUE;
        }
    }
    else if(*info->p == '-' && !isdigit(*(info->p+1)))
    {
        info->p++;
        skip_spaces_and_lf(info);

        unsigned int zero_node = sNodeTree_create_int_value(0, info);

        unsigned int right_node = 0;
        if(!expression_node(&right_node, FALSE, info)) {
            return FALSE;
        };

        *node = sNodeTree_create_sub(zero_node, right_node, 0, info);
    }
    /// number ///
    else if((*info->p == '-' && *(info->p+1) != '=' && *(info->p+1) != '-' && *(info->p+1) != '>') || (*info->p == '+' && *(info->p+1) != '=' && *(info->p+1) != '+')) 
    {
        if(*info->p =='+') {
            info->p++;
            skip_spaces_and_lf(info);

            if(isdigit(*info->p)) {
                if(!get_number(FALSE, node, info)) {
                    return FALSE;
                }
            }
            else {
                if(!expression_node(node, TRUE, info)) {
                    return FALSE;
                }

                if(*node == 0) {
                    parser_err_msg(info, "require right value for -");
                    info->err_num++;
                }
            }
        }
        else if(*info->p =='-') {
            info->p++;
            skip_spaces_and_lf(info);

            if(isdigit(*info->p)) {
                if(!get_number(TRUE, node, info)) {
                    return FALSE;
                }
            }
            else {
                if(!expression_node(node, TRUE, info)) {
                    return FALSE;
                }

                if(*node == 0) {
                    parser_err_msg(info, "require right value for -");
                    info->err_num++;
                }
            }
        }
    }
    /// hex number ///
    else if(*info->p == '0' && *(info->p+1) == 'x') {
        info->p += 2;

        if(!get_hex_number(node, info)) {
            return FALSE;
        }
    }
    /// oct number ///
    else if(*info->p == '0' && isdigit(*(info->p+1))) {
        info->p++;

        if(!get_oct_number(node, info)) {
            return FALSE;
        }
    }
    /// number ///
    else if(isdigit(*info->p)) {
        if(!get_number(FALSE, node, info)) {
            return FALSE;
        }
    }
    /// c string ///
    else if(*info->p == '"') 
    {
        info->p++;

        int sline = info->sline;

        sBuf value;
        sBuf_init(&value);

        while(1) {
            if(*info->p == '"') {
                info->p++;
                break;
            }
            else if(*info->p == '\\') {
                info->p++;

                switch(*info->p) {
                    case '0':
                        sBuf_append_char(&value, '\0');
                        info->p++;
                        break;

                    case 'n':
                        sBuf_append_char(&value, '\n');
                        info->p++;
                        break;

                    case 't':
                        sBuf_append_char(&value, '\t');
                        info->p++;
                        break;

                    case 'r':
                        sBuf_append_char(&value, '\r');
                        info->p++;
                        break;

                    case 'a':
                        sBuf_append_char(&value, '\a');
                        info->p++;
                        break;

                    case '\\':
                        sBuf_append_char(&value, '\\');
                        info->p++;
                        break;

                    default:
                        sBuf_append_char(&value, *info->p);
                        info->p++;
                        break;
                }
            }
            else if(*info->p == '\0') {
                parser_err_msg(info, "close \" to make c string value");
                return FALSE;
            }
            else {
                if(*info->p == '\n') info->sline++;

                sBuf_append_char(&value, *info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf(info);

        *node = sNodeTree_create_c_string_value(MANAGED value.mBuf, value.mLen, sline, info);
    }
    /// chararacter ///
    else if(*info->p == '\'') {
        info->p++;

        char c;

        if(*info->p == '\\') {
            info->p++;

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
        }
        else {
            c = *info->p;
            info->p++;
        }

        if(*info->p != '\'') {
            parser_err_msg(info, "close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;

            skip_spaces_and_lf(info);

            *node = sNodeTree_create_character_value(c, info);
        }
    }
    else if(isalpha(*info->p) || *info->p == '_') {
        char* p_before = info->p;
        int sline_before = info->sline;

        char buf[VAR_NAME_MAX+1];
        if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
        {
            return FALSE;
        }

        BOOL define_struct = FALSE;
        BOOL define_union  = FALSE;
        BOOL define_enum = FALSE;
        BOOL static_inline = FALSE;
        unsigned int anonymous_enum_node = 0;
        BOOL define_anonymous_enum = FALSE;

        if(strcmp(buf, "__extension__") == 0 && *info->p != '(') {
            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
            {
                return FALSE;
            }
        }

        if(strcmp(buf, "__attribute__") == 0) {
            int brace_num = 0;
            while(*info->p == '(') {
                info->p ++;
                skip_spaces_and_lf(info);
                brace_num++;
            }

            while(*info->p != ')') {
                info->p++;
            }

            while(*info->p == ')') {
                info->p ++;
                skip_spaces_and_lf(info);
            }

            p_before = info->p;
            sline_before = info->sline;

            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
            {
                return FALSE;
            }
        }

        if(strcmp(buf, "struct") == 0) {
            char* p_before2 = info->p;
            int sline_before2 = info->sline;

            if(*info->p != '{') {
                char buf2[VAR_NAME_MAX];

                if(!parse_word(buf2, VAR_NAME_MAX, info, TRUE, FALSE))
                {
                    return FALSE;
                }

                char* p_before3 = info->p;
                int sline3 = info->sline;

                char buf3[VAR_NAME_MAX];
                parse_word(buf3, VAR_NAME_MAX, info, FALSE, FALSE);

                info->p = p_before3;
                info->sline = sline3;

                if(strcmp(buf3, "version") == 0)
                {
                    define_struct = TRUE;
                }
                else if(*info->p == '{')
                {
                    info->p++;
                    skip_spaces_and_lf(info);

                    while(TRUE) {
                        if(*info->p == '#') {
                            if(!parse_sharp(info)) {
                                return FALSE;
                            }
                        }

                        sNodeType* field = NULL;
                        char buf[VAR_NAME_MAX];
                        BOOL define_struct_only = FALSE;
                        if(!parse_type(&field, info, buf, FALSE, FALSE, TRUE, &define_struct_only)) {
                            return FALSE;
                        }

                        char saved_buf[VAR_NAME_MAX];
                        xstrncpy(saved_buf, buf, VAR_NAME_MAX);

                        sNodeType* saved_field = clone_node_type(field);

                        if(field->mClass->mFlags & CLASS_FLAGS_ANONYMOUS_VAR_NAME)
                        {
                            create_anonymous_union_var_name(buf, VAR_NAME_MAX);
                        }
                        else if(buf[0] == '\0') {
                            if(!parse_variable_name(buf, VAR_NAME_MAX, info, field, FALSE, FALSE))
                            {
                                return FALSE;
                            }
                        }

                        if(*info->p == ',')
                        {
                            while(*info->p == ',') {
                                info->p++;
                                skip_spaces_and_lf(info);
                                char buf2[VAR_NAME_MAX];
                                xstrncpy(buf2, saved_buf, VAR_NAME_MAX);

                                sNodeType* field2 = clone_node_type(saved_field);

                                if(field2->mClass->mFlags & CLASS_FLAGS_ANONYMOUS_VAR_NAME)
                                {
                                    create_anonymous_union_var_name(buf2, VAR_NAME_MAX);
                                }
                                else if(buf2[0] == '\0') {
                                    if(!parse_variable_name(buf2, VAR_NAME_MAX, info, field2, FALSE, FALSE))
                                    {
                                        return FALSE;
                                    }
                                }
                            }
                        }

                        if(*info->p == ';') {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }

                        if(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                            break;
                        }
                        else if(*info->p == '#') {
                            if(!parse_sharp(info)) {
                                return FALSE;
                            }

                            if(*info->p == '}') {
                                info->p++;
                                skip_spaces_and_lf(info);
                                break;
                            }
                        }
                    }

                    if(*info->p == ';') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        define_struct = TRUE;
                    }
                }
                else if(*info->p == '<' || *info->p == ';') 
                {
                    define_struct = TRUE;
                }
            }

            info->p = p_before2;
            info->sline = sline_before2;
        }
        else if(strcmp(buf, "union") == 0)
        {
            char* p_before2 = info->p;
            int sline_before2 = info->sline;

            if(*info->p != '{') {
                char buf2[VAR_NAME_MAX];

                if(!parse_word(buf2, VAR_NAME_MAX, info, TRUE, FALSE))
                {
                    return FALSE;
                }

                if(*info->p == '{')
                {
                    info->p++;
                    skip_spaces_and_lf(info);

                    while(TRUE) {
                        if(*info->p == '#') {
                            if(!parse_sharp(info)) {
                                return FALSE;
                            }
                        }

                        sNodeType* field = NULL;
                        char buf[VAR_NAME_MAX];
                        BOOL define_struct_only = FALSE;
                        if(!parse_type(&field, info, buf, FALSE, FALSE, TRUE, &define_struct_only)) {
                            return FALSE;
                        }

                        if(field->mClass->mFlags & CLASS_FLAGS_ANONYMOUS_VAR_NAME)
                        {
                            create_anonymous_union_var_name(buf, VAR_NAME_MAX);
                        }
                        else if(buf[0] == '\0') {
                            if(!parse_variable_name(buf, VAR_NAME_MAX, info, field, FALSE, FALSE))
                            {
                                return FALSE;
                            }
                        }

                        if(*info->p == ';') {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }

                        if(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                            break;
                        }
                        else if(*info->p == '#') {
                            if(!parse_sharp(info)) {
                                return FALSE;
                            }

                            if(*info->p == '}') {
                                info->p++;
                                skip_spaces_and_lf(info);
                                break;
                            }
                        }
                    }

                    if(*info->p == ';') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        define_union = TRUE;
                    }
                }
                else if(*info->p == ';') 
                {
                    define_union = TRUE;
                }
            }

            info->p = p_before2;
            info->sline = sline_before2;
        }
        else if(strcmp(buf, "enum") == 0) {
            char* p_before2 = info->p;
            int sline_before2 = info->sline;

            if(*info->p != '{') {
                char buf2[VAR_NAME_MAX];

                if(!parse_word(buf2, VAR_NAME_MAX, info, TRUE, FALSE))
                {
                    return FALSE;
                }

                if(*info->p == '{' || *info->p == '<' || *info->p == ';') {
                    define_enum = TRUE;
                }
            }
            else {
                if(!parse_anonymous_enum(&anonymous_enum_node, info)) {
                    return FALSE;
                }

                if(*info->p == ';') 
                {
                    define_anonymous_enum = TRUE;
                }
            }

            info->p = p_before2;
            info->sline = sline_before2;
        }
        else if(strcmp(buf, "static") == 0) {
            char* p_before2 = info->p;
            int sline_before2 = info->sline;

            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
            {
                return FALSE;
            }

            if(strcmp(buf, "inline") == 0 || strcmp(buf, "__inline") == 0 || strcmp(buf, "__inline__") == 0)
            {
                static_inline = TRUE;
            }
            else {
                info->p = p_before2;
                info->sline = sline_before2;
            }
        }

        if(strcmp(buf, "__extension__") == 0 && *info->p == '(') {
            if(!expression(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "__PRETTY_FUNCTION__") == 0) {
            *node = sNodeTree_create_c_string_value(MANAGED xstrdup(info->fun_name), strlen(info->fun_name), info->sline, info);
        }
        else if(strcmp(buf, "lambda") == 0) {
            if(!parse_lambda(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "return") == 0) {
            if(!parse_return(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "__builtin_va_arg") == 0) {
            if(!parse_va_arg(node, info))
            {
                return FALSE;
            }
        }
        else if(strcmp(buf, "var") == 0) {
            if(!parse_var(node, info, FALSE)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "struct") == 0 && *info->p != '{' && define_struct) {
            char struct_name[VAR_NAME_MAX];

            xstrncpy(struct_name, "", VAR_NAME_MAX);

            BOOL define_struct_only = FALSE;
            if(!parse_struct(node, struct_name, VAR_NAME_MAX, &define_struct_only, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "union") == 0 && *info->p != '{' && define_union ) {
            char union_name[VAR_NAME_MAX];
            xstrncpy(union_name, "", VAR_NAME_MAX);

            if(!parse_union(node, union_name, VAR_NAME_MAX, info)) {
                return FALSE;
            }
        }
        else if(anonymous_enum_node && define_anonymous_enum) 
        {
            expect_next_character_with_one_forward("{", info);

            while(TRUE) {
                char var_name[VAR_NAME_MAX];
                if(!parse_word(var_name, VAR_NAME_MAX, info, FALSE, FALSE)) 
                {
                    return FALSE;
                }

                unsigned int right_node;

                if(*info->p == '=') {
                    info->p++;
                    skip_spaces_and_lf(info);

                    if(!expression(&right_node, info)) {
                        return FALSE;
                    }
                }

                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }

                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
            }

            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            };

            *node = anonymous_enum_node;
        }
        else if(strcmp(buf, "enum") == 0 && *info->p != '{' && define_enum) {
            char name[VAR_NAME_MAX];
            if(!parse_word(name, VAR_NAME_MAX, info, TRUE, FALSE)) 
            {
                return FALSE;
            }

            if(!parse_enum(node, name, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "val") == 0) {
            if(!parse_var(node, info, TRUE)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "switch") == 0) {
            if(!parse_switch(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "case") == 0) {
            if(!parse_case(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "default") == 0) {
            if(!parse_default(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "if") == 0) {
            if(!parse_if(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "while") == 0) {
            if(!parse_while(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "do") == 0) {
            if(!parse_do(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "for") == 0) {
            if(!parse_for(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "true") == 0) {
            *node = sNodeTree_create_true(info);
        }
        else if(strcmp(buf, "false") == 0) {
            *node = sNodeTree_create_false(info);
        }
        else if(strcmp(buf, "null") == 0) {
            *node = sNodeTree_create_null(info);
        }
        else if(strcmp(buf, "new") == 0) {
            if(!parse_new(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "clone") == 0) {
            if(!parse_clone(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "delete") == 0) {
            if(!parse_delete(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "borrow") == 0) {
            if(!parse_borrow(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "dummy_heap") == 0) {
            if(!parse_dummy_heap(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "managed") == 0) {
            if(!parse_managed(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "alloca") == 0 || strcmp(buf, "__builtin_alloca") == 0) {
            if(!parse_alloca(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "sizeof") == 0 && *info->p == '(') 
        {
            if(!parse_sizeof(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "__func__") == 0) 
        {
            *node = sNodeTree_create_func_name(info);
        }
        else if(strcmp(buf, "__alignof__") == 0 && *info->p == '(') 
        {
            if(!parse_alignof(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "clone") == 0) {
            if(!parse_clone(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "isheap") == 0) {
            if(!parse_is_heap(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "class_name") == 0) {
            if(!parse_class_name_expression(node, info)) {
                return FALSE;
            }
        }
        else if(info->mBlockLevel == 0 && strcmp(buf, "impl") == 0) {
            if(!parse_impl(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "inherit") == 0 && *info->p == '(') {
            if(!parse_inherit(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "typedef") == 0) {
            if(!parse_typedef(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "break") == 0) {
            *node = sNodeTree_create_break_expression(info);
        }
        else if(strcmp(buf, "continue") == 0) {
            *node = sNodeTree_create_continue_expression(info);
        }
        else if(strcmp(buf, "macro") == 0) {
            if(!parse_macro(node, info))
            {
                return FALSE;
            }
        }
        else if(strcmp(buf, "ruby_macro") == 0) {
            if(!parse_ruby_macro(node, info, TRUE)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "template") == 0) {
            char struct_name[VAR_NAME_MAX];

            if(strcmp(info->impl_struct_name, "") == 0)
            {
                if(!parse_method_generics_function(node, NULL, info)) {
                    return FALSE;
                }
            }
            else {
                if(!parse_method_generics_function(node, info->impl_struct_name, info)) {
                    return FALSE;
                }
            }
        }
        else if(strcmp(info->impl_struct_name, "") != 0 && strcmp(buf, "initialize") == 0) 
        
        {
            char* struct_name = info->impl_struct_name;
            BOOL inline_ = FALSE;
            if(!parse_constructor(node, struct_name, info, inline_)) {
                return FALSE;
            }
        }
        else if(strcmp(info->impl_struct_name, "") != 0 && strcmp(buf, "finalize") == 0) 
        
        {
            char* struct_name = info->impl_struct_name;
            BOOL inline_ = FALSE;
            if(!parse_destructor(node, struct_name, info, FALSE, inline_)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "extern") == 0) {
            //info->mNumGenerics = 0;

            sNodeType* result_type = NULL;
            char name[VAR_NAME_MAX+1];
            BOOL define_struct_only = FALSE;
            if(!parse_type(&result_type, info, name, TRUE, FALSE, FALSE, &define_struct_only))
            {
                return FALSE;
            }

            if(name[0] != '\0') {
                BOOL extern_ = TRUE;
                if(!parse_variable(node, result_type, name, extern_, info, FALSE)) 
                {
                    return FALSE;
                }
            }
            else {
                unsigned int nodes[IMPL_DEF_MAX];
                memset(nodes, 0, sizeof(unsigned int)*IMPL_DEF_MAX);
                int num_nodes = 0;

                while(TRUE) {
                    sNodeType* result_type2 = clone_node_type(result_type);

                    if(!parse_variable_name(name, VAR_NAME_MAX, info, result_type2, TRUE, FALSE))
                    {
                        return FALSE;
                    }

                    if(strcmp(name, "operator") == 0)
                    {
                        if(!parse_function(node, result_type2, name, NULL, info)) {
                            return FALSE;
                        }
                    }
                    else if(*info->p == '(') {
                        char* struct_name = NULL;
                        if(strcmp(info->impl_struct_name, "") != 0)
                        {
                            struct_name = info->impl_struct_name;
                        }

                        if(info->mNumGenerics > 0) {
                            if(!parse_generics_function(node, result_type2, name, struct_name, info)) {
                                return FALSE;
                            }
                        }
                        else {
                            if(!parse_function(node, result_type2, name, struct_name, info)) {
                                return FALSE;
                            }
                        }
                    }
                    else {
                        BOOL extern_ = TRUE;
                        if(!parse_variable(node, result_type2, name, extern_, info, FALSE)) {
                            return FALSE;
                        }
                    }

                    nodes[num_nodes++] = *node;

                    if(num_nodes >= IMPL_DEF_MAX) {
                        fprintf(stderr, "overflow define variable max");
                        return FALSE;
                    }

                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        break;
                    }
                }

                if(num_nodes > 1) {
                    BOOL extern_ = TRUE;
                    *node = sNodeTree_create_define_variables(nodes, num_nodes, extern_, info);
                }
            }
        }
        else if(static_inline || strcmp(buf, "inline") == 0 || strcmp(buf, "__inline") == 0 || strcmp(buf, "__inline__") == 0) 
        {
            if(strcmp(info->impl_struct_name, "") == 0)
            {
                if(!parse_inline_function(node, NULL, info)) 
                {
                    return FALSE;
                }
            }
            else {
                if(!parse_inline_function(node, info->impl_struct_name, info)) {
                    return FALSE;
                }
            }
        }
        else if(strcmp(buf, "goto") == 0) {
            if(!parse_goto(node, info)) {
                return FALSE;
            }
        }
        else if(*info->p == ':' && !info->in_case) {
            if(!parse_label(node, buf, info)) {
                return FALSE;
            }
        }
        else if(*info->p == '!' && (*(info->p+1) == '(' || *(info->p+1) == '{' || *(info->p+1) == '[' || *(info->p+1) == '<'))
        {
            info->p++;
            skip_spaces_and_lf(info);

            if(!parse_call_macro(node, buf, info)) {
                return FALSE;
            }
        }
        /// local variable ///
        else if(get_variable_from_table(info->lv_table, buf))
        {
            if(enable_assginment && *info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;

                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                if(right_node == 0) {
                    parser_err_msg(info, "Require right value for =");
                    info->err_num++;

                    *node = 0;
                }
                else {
                    *node = sNodeTree_create_store_variable(buf, right_node, FALSE, info);
                }
            }
            else if(*info->p == '+' && *(info->p+1) == '+')
            {
                info->p+=2;
                skip_spaces_and_lf(info);

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

                unsigned int right_node = sNodeTree_create_int_value(1, info);

                *node = sNodeTree_create_add(left_node, right_node, 0, info);

                unsigned int left_node2 = sNodeTree_create_store_variable(var_name, *node, FALSE, info);

                unsigned int right_node2 = sNodeTree_create_int_value(1, info);

                *node = sNodeTree_create_sub(left_node2, right_node2, 0, info);
            }
            else if(*info->p == '-' && *(info->p+1) == '-')
            {
                info->p+=2;
                skip_spaces_and_lf(info);

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);
                sVar* var_ = get_variable_from_table(info->lv_table, var_name);

                if(var_ && var_->mReadOnly) {
                    parser_err_msg(info, "This is readonly variable.");
                    info->err_num++;

                    *node = 0;
                    return TRUE;
                }

                unsigned int right_node = sNodeTree_create_int_value(1, info);

                *node = sNodeTree_create_sub(left_node, right_node, 0, info);

                unsigned int left_node2 = sNodeTree_create_store_variable(var_name, *node, FALSE, info);

                unsigned int right_node2 = sNodeTree_create_int_value(1, info);

                *node = sNodeTree_create_add(left_node2, right_node2, 0, info);
            }
            else if(*info->p == '+' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;
                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

                *node = sNodeTree_create_add(left_node, right_node, 0, info);

                unsigned int left_node2 = sNodeTree_create_store_variable(var_name, *node, FALSE, info);

                *node = sNodeTree_create_sub(left_node2, right_node, 0, info);
            }
            else if(*info->p == '-' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;
                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

                *node = sNodeTree_create_sub(left_node, right_node, 0, info);

                unsigned int left_node2 = sNodeTree_create_store_variable(var_name, *node, FALSE, info);

                *node = sNodeTree_create_add(left_node2, right_node, 0, info);
            }
            else if(*info->p == '*' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;
                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

                *node = sNodeTree_create_mult(left_node, right_node, 0, info);

                *node = sNodeTree_create_store_variable(var_name, *node, FALSE, info);
            }
            else if(*info->p == '/' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;
                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

                *node = sNodeTree_create_div(left_node, right_node, 0, info);

                *node = sNodeTree_create_store_variable(var_name, *node, FALSE, info);
            }
            else if(*info->p == '%' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;
                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

                *node = sNodeTree_create_mod(left_node, right_node, 0, info);

                *node = sNodeTree_create_store_variable(var_name, *node, FALSE, info);
            }
            else if(*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=')
            {
                info->p+=3;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;
                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

                *node = sNodeTree_create_left_shift(left_node, right_node, 0, info);

                *node = sNodeTree_create_store_variable(var_name, *node, FALSE, info);
            }
            else if(*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=')
            {
                info->p+=3;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;
                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

                *node = sNodeTree_create_right_shift(left_node, right_node, 0, info);

                *node = sNodeTree_create_store_variable(var_name, *node, FALSE, info);
            }
            else if(*info->p == '&' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;
                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

                *node = sNodeTree_create_and(left_node, right_node, 0, info);

                *node = sNodeTree_create_store_variable(var_name, *node, FALSE, info);
            }
            else if(*info->p == '^' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;
                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

                *node = sNodeTree_create_xor(left_node, right_node, 0, info);

                *node = sNodeTree_create_store_variable(var_name, *node, FALSE, info);
            }
            else if(*info->p == '|' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;
                if(!expression(&right_node, info)) {
                    return FALSE;
                }

                char var_name[VAR_NAME_MAX];

                xstrncpy(var_name, buf, VAR_NAME_MAX);

                unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

                *node = sNodeTree_create_or(left_node, right_node, 0, info);

                *node = sNodeTree_create_store_variable(var_name, *node, FALSE, info);
            }
            else if(*info->p == '(')
            {
                unsigned int params[PARAMS_MAX];
                int num_params = 0;

                if(!parse_funcation_call_params(&num_params, params, info)) 
                {
                    return FALSE;
                };

                *node = sNodeTree_create_load_variable(buf, info);

                *node = sNodeTree_create_lambda_call(*node, params, num_params, info);
            }
            else {
                *node = sNodeTree_create_load_variable(buf, info);
            }
        }
        else if((is_type_name(buf, info) && (*info->p != '(' || (*info->p == '(' && *(info->p+1) == '*'))) || strcmp(buf, "typeof") == 0) 
        {
            info->p = p_before;
            info->sline = sline_before;

            sNodeType* result_type = NULL;
            char name[VAR_NAME_MAX+1];
            BOOL define_struct_only = FALSE;
            if(!parse_type(&result_type, info, name, TRUE, FALSE, FALSE, &define_struct_only))
            {
                return FALSE;
            }

            if(name[0] != '\0') {
                BOOL extern_ = FALSE;
                if(!parse_variable(node, result_type, name, extern_, info, FALSE)) 
                {
                    return FALSE;
                }
            }
            else {
                unsigned int nodes[IMPL_DEF_MAX];
                memset(nodes, 0, sizeof(unsigned int)*IMPL_DEF_MAX);
                int num_nodes = 0;

                if(anonymous_enum_node != 0)
                {
                    nodes[0] = anonymous_enum_node;
                    num_nodes++;
                }

                while(TRUE) {
                    sNodeType* result_type2 = clone_node_type(result_type);
                    if(!parse_variable_name(name, VAR_NAME_MAX, info, result_type2, TRUE, FALSE))
                    {
                        return FALSE;
                    }

                    if(strcmp(name, "operator") == 0)
                    {
                        if(!parse_function(node, result_type2, name, NULL, info)) {
                            return FALSE;
                        }
                    }
                    else if(*info->p == '(') {
                        char* struct_name = NULL;
                        if(strcmp(info->impl_struct_name, "") != 0)
                        {
                            struct_name = info->impl_struct_name;
                        }


                        if(info->mNumGenerics > 0) {
                            if(!parse_generics_function(node, result_type2, name, struct_name, info)) {
                                return FALSE;
                            }
                        }
                        else {
                            if(!parse_function(node, result_type2, name, struct_name, info)) {
                                return FALSE;
                            }
                        }
                    }
                    else {
                        BOOL extern_ = FALSE;
                        if(!parse_variable(node, result_type2, name, extern_, info, FALSE)) {
                            return FALSE;
                        }
                    }

                    nodes[num_nodes++] = *node;

                    if(num_nodes >= IMPL_DEF_MAX) {
                        fprintf(stderr, "overflow define variable max");
                        return FALSE;
                    }

                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        break;
                    }
                }

                if(num_nodes > 1) {
                    BOOL extern_ = FALSE;
                    *node = sNodeTree_create_define_variables(nodes, num_nodes, extern_, info);
                }
            }
        }
        else {
            if(*info->p == '(') {
                char* fun_name = buf;

                unsigned int params[PARAMS_MAX];
                int num_params = 0;

                if(!parse_funcation_call_params(&num_params, params, info)) 
                {
                    return FALSE;
                }

                if(strcmp(fun_name, "va_start") == 0) {
                    num_params = 1;
                };

                *node = sNodeTree_create_function_call(fun_name, params, num_params, FALSE, FALSE, info->mFunVersion, info);
            }
            else {
                *node = sNodeTree_create_load_function(buf, info);
            }
        }
    }
    else if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);

        if(!expression(node, info)) {
            return FALSE;
        }
        skip_spaces_and_lf(info);

        if(*node == 0) {
            parser_err_msg(info, "require expression as ( operand");
            info->err_num++;
        }

        expect_next_character_with_one_forward(")", info);
    }
    else {
        char msg[1024];
        snprintf(msg, 1024, "invalid character (character code %d) (%c)", *info->p, *info->p);
        parser_err_msg(info, msg);

        if(*info->p == '\n') info->sline++;
        info->p++;
        skip_spaces_and_lf(info);

        info->err_num++;

        *node = 0;
    }

    /// post position expression ///
    if(!postposition_operator(node, enable_assginment, info))
    {
        return FALSE;
    }

    if(!parse_sharp(info)) {
        return FALSE;
    }

    return TRUE;
}

// from left to right order
static BOOL expression_mult_div(unsigned int* node, sParserInfo* info)
{
    if(!expression_node(node, TRUE, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        if(*info->p == '*' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_node(&right, TRUE, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator *");
                info->err_num++;
            };

            *node = sNodeTree_create_mult(*node, right, 0, info);
        }
        else if(*info->p == '/' && *(info->p+1) != '=' && *(info->p+1) != '*') 
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_node(&right, TRUE, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator /");
                info->err_num++;
            };

            *node = sNodeTree_create_div(*node, right, 0, info);
        }
        else if(*info->p == '%' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_node(&right, TRUE, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator ^");
                info->err_num++;
            };

            *node = sNodeTree_create_mod(*node, right, 0, info);
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
static BOOL expression_add_sub(unsigned int* node, sParserInfo* info)
{
    if(!expression_mult_div(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        if(*info->p == '+' && *(info->p+1) != '=' && *(info->p+1) != '+') 
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_mult_div(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator +");
                info->err_num++;
            };

            *node = sNodeTree_create_add(*node, right, 0, info);
        }
        else if(*info->p == '-' && *(info->p+1) != '=' && *(info->p+1) != '-' && *(info->p+1) != '>') 
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_mult_div(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator -");
                info->err_num++;
            };

            *node = sNodeTree_create_sub(*node, right, 0, info);
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
static BOOL expression_shift(unsigned int* node, sParserInfo* info)
{
    if(!expression_add_sub(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        if(*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) != '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_add_sub(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator <<");
                info->err_num++;
            };

            *node = sNodeTree_create_left_shift(*node, right, 0, info);
        }
        else if(*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) != '=') {
            info->p+=2;
            skip_spaces_and_lf(info);
            
            unsigned int right = 0;
            if(!expression_add_sub(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator >>");
                info->err_num++;
            };

            *node = sNodeTree_create_right_shift(*node, right, 0, info);
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
static BOOL expression_comparison(unsigned int* node, sParserInfo* info)
{
    if(!expression_shift(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        if(*info->p == '>' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_shift(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for >= operator");
                info->err_num++;
            };

            *node = sNodeTree_create_gteq(*node, right, 0, info);
        }
        else if(*info->p == '<' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_shift(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for <= operator");
                info->err_num++;
            };

            *node = sNodeTree_create_leeq(*node, right, 0, info);
        }
        else if(*info->p == '>' && *(info->p+1) != '>') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_shift(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for > operator");
                info->err_num++;
            };

            *node = sNodeTree_create_gt(*node, right, 0, info);
        }
        else if(*info->p == '<' && *(info->p+1) != '<') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_shift(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for < operator");
                info->err_num++;
            };

            *node = sNodeTree_create_le(*node, right, 0, info);
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
static BOOL expression_equal(unsigned int* node, sParserInfo* info)
{
    if(!expression_comparison(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        if(*info->p == '=' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_equal(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for == operator");
                info->err_num++;
            };

            *node = sNodeTree_create_equals(*node, right, 0, info);
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_equal(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for != operator");
                info->err_num++;
            };

            *node = sNodeTree_create_not_equals(*node, right, 0, info);
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
static BOOL expression_and(unsigned int* node, sParserInfo* info)
{
    if(!expression_equal(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        if(*info->p == '&' && *(info->p+1) != '&' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_equal(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for & operator");
                info->err_num++;
            };

            *node = sNodeTree_create_and(*node, right, 0, info);
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
static BOOL expression_xor(unsigned int* node, sParserInfo* info)
{
    if(!expression_and(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        if(*info->p == '^' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_and(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for ^ operator");
                info->err_num++;
            };

            *node = sNodeTree_create_xor(*node, right, 0, info);
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
static BOOL expression_or(unsigned int* node, sParserInfo* info)
{
    if(!expression_xor(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        if(*info->p == '|' && *(info->p+1) != '=' && *(info->p+1) != '|') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_xor(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for | operator");
                info->err_num++;
            };

            *node = sNodeTree_create_or(*node, right, 0, info);
        }
        else {
            break;
        }
    }

    return TRUE;
}

static BOOL expression_and_and_or_or(unsigned int* node, sParserInfo* info)
{
    if(!expression_or(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }


    while(*info->p) {
        if(*info->p == '&' && *(info->p+1) == '&') {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_or(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for && operator");
                info->err_num++;
            };

            *node = sNodeTree_create_and_and(*node, right, info);
        }
        else if(*info->p == '|' && *(info->p+1) == '|') {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_or(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator ||");
                info->err_num++;
            };

            *node = sNodeTree_create_or_or(*node, right, info);
        }
        else {
            break;
        }
    }

    return TRUE;
}

static BOOL expression_conditional_operator(unsigned int* node, sParserInfo* info)
{
    if(!expression_and_and_or_or(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        if(*info->p == '?') {
            info->p++;
            skip_spaces_and_lf(info);

            while(TRUE) {
                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }
                else {
                    break;
                }
            }

            unsigned int value1 = 0;
            if(!expression_and_and_or_or(&value1, info)) {
                return FALSE;
            }

            while(TRUE) {
                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }
                else {
                    break;
                }
            }

            if(value1 == 0) {
                parser_err_msg(info, "require right value for ? operator");
                info->err_num++;
            }

            expect_next_character_with_one_forward(":", info);

            unsigned int value2 = 0;
            if(!expression_and_and_or_or(&value2, info)) {
                return FALSE;
            }

            while(TRUE) {
                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }
                else {
                    break;
                }
            }

            if(value2 == 0) {
                parser_err_msg(info, "require right value for ? operator");
                info->err_num++;
            };

            *node = sNodeTree_create_conditional(*node, value1, value2, info);
        }
        else {
            break;
        }
    }

    return TRUE;
}

static BOOL expression_comma_operator(unsigned int* node, sParserInfo* info)
{
    if(!expression_conditional_operator(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        if(!info->no_comma_operator && *info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int node2 = 0;
            if(!expression_conditional_operator(&node2, info)) {
                return FALSE;
            }

            if(node2 == 0) {
                parser_err_msg(info, "require right value for , operator");
                info->err_num++;
            };

            *node = sNodeTree_create_comma(*node, node2, info);
        }
        else {
            break;
        }
    }

    return TRUE;
}

BOOL expression(unsigned int* node, sParserInfo* info) 
{
    while(TRUE) {
        if(parse_cmp(info->p, "__extension__") == 0)
        {
            info->p += 13;
            skip_spaces_and_lf(info);
        }
        else if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }
    char asm_fname[VAR_NAME_MAX];
    if(!parse_attribute(info, asm_fname)) {
        return FALSE;
    }
    
    if(!expression_comma_operator(node, info)) {
        return FALSE;
    }

    while(TRUE) {
        if(parse_cmp(info->p, "__extension__") == 0)
        {
            info->p += 13;
            skip_spaces_and_lf(info);
        }
        else if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }
    

    return TRUE;
}
