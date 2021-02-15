#include "common.h"

map<string, sCLClass*%>* gClasses;
list<CLObject>* gJobs;

bool check_type(CLObject obj, char* type_name, sVMInfo* info)
{
    sCLType* type = parse_type_runtime(type_name, info.cinfo.pinfo, info.cinfo.pinfo.types);

    if(type == null) {
        return false;
    }

    sCLObject* object_data = CLOBJECT(obj);

    return substitution_posibility(type, object_data->mType);
}

void class_init()
{
    gClasses = borrow new map<string, sCLClass*%>.initialize();
    
    append_class("object");
    append_class("void");
    append_class("int");
    append_class("regex");
    append_class("system");
    append_class("bool");
    append_class("string");
    append_class("any");
    append_class("command");
    append_class("job");
    append_class("lambda");
    append_class("buffer");
    append_class("map");
    append_class("list");
    append_class("list_item");
    append_class("class");
    append_class("method");
    append_class("field");
    append_class("type");
    append_class("tuple1");
    append_class("tuple2");
    append_class("tuple3");
    append_class("tuple4");
    append_class("system");
    append_class("generics_type0");
    append_class("generics_type1");
    append_class("generics_type2");
    append_class("generics_type3");
    append_class("generics_type4");
    append_class("generics_type5");
    append_class("generics_type6");
    append_class("generics_type7");
    append_class("generics_type8");
    append_class("generics_type9");
    append_class("generics_type10");
    append_class("generics_type11");
    append_class("generics_type12");
    append_class("generics_type13");
    append_class("generics_type14");
    append_class("generics_type15");
    append_class("generics_type16");
    append_class("generics_type17");
    append_class("generics_type18");
    append_class("generics_type19");
    append_class("generics_type20");
    append_class("generics_type21");
    append_class("generics_type22");
    append_class("generics_type23");
    append_class("generics_type24");
    append_class("generics_type25");
    append_class("generics_type26");
    append_class("generics_type27");
    append_class("generics_type28");
    append_class("generics_type29");
    append_class("generics_type30");
    append_class("generics_type31");

    gJobs = borrow new list<CLObject>.initialize();
}

void class_final()
{
    delete gJobs;
    delete gClasses;
}

sCLClass*% alloc_class(char* name)
{
    sCLClass*% klass = new sCLClass;
    
    klass.mName = string(name);

    klass.mMethods = new map<string, sCLMethod*%>.initialize();
    klass.mFields = new map<string, sCLField*%>.initialize();

    if(strcmp(name, "object") == 0) {
        klass.mParent = NULL;
    }
    else {
        klass.mParent = gClasses.at("object", null);
    }

    klass.types = new vector<sCLType*%>.initialize();

    return klass;
}

void append_class(char* name)
{
    sCLClass*% klass = alloc_class(name);
    
    gClasses.insert(string(name), klass);
}

void append_field(sCLClass* klass, char* field_name, sCLType* field_type)
{
    sCLField*% field = new sCLField;

    field.mName = string(field_name);
    field.mResultType = field_type;
    field.mIndex = klass.mFields.length();

    klass.mFields.insert(string(field_name), field);
}

sCLMethod* append_method(sCLClass* klass, char* method_name, sCLType* method_type, int num_params, sCLParam* params, bool native)
{
    sCLMethod*% method = new sCLMethod;

    method.mNumParams = num_params;
    for(int i=0; i<num_params; i++) {
        method.mParams[i] = params[i];
    }

    method.mName = string(method_name);

    method.mResultType = method_type;

    method.mByteCodes = null;
    method.mNodeBlock = null;

    method.mMaxVarNum = 0;

    klass.mMethods.insert(string(method_name), method);

    return klass.mMethods.at(method_name, null);
}

bool eval_class(char* source, vector<sCLType*%>* types, char* sname, int sline)
{
    sParserInfo info;
    
    memset(&info, 0, sizeof(sParserInfo));

    xstrncpy(info.sname, sname, PATH_MAX);
    info.sline = sline;

    info.err_output_num = 0;

    info.err_num = 0;

    info.p = source;

    info.generics_type_names = borrow new vector<string>.initialize();

    info.nodes = borrow new vector<sCLNode*%>.initialize();
    info.vtables = null;
    info.blocks = borrow new vector<sCLNodeBlock*%>.initialize();
    info.types = types;
    info.vars = borrow new vector<sVar*%>.initialize();
    
    sCompileInfo cinfo;

    memset(&cinfo, 0, sizeof(sCompileInfo));

    xstrncpy(cinfo.sname, info.sname, PATH_MAX);
    cinfo.sline = info.sline;
    
    cinfo.err_num = 0;

    cinfo.stack_num = 0;

    cinfo.pinfo = &info;
    
    cinfo.codes = borrow new buffer.initialize();

    cinfo.in_shell = true;

    var tmp = parse_word(&info);

    if(strcmp(tmp, "class") != 0) {
        return false;
    }

    var name = parse_word(&info);

    if(gClasses.at(name, null) == null) {
        append_class(name);
    }

    if(*info->p == '<') {
        info->p++;
        skip_spaces_and_lf(&info);

        while(true) {
            string generics_name = parse_word(&info);

            if(strcmp(generics_name, "") != 0) {
                info.generics_type_names.push_back(clone generics_name);
            }

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(&info);
            }
            else if(*info->p == '\0') {
                fprintf(stderr, "unexpected the source end\n");
                exit(1);
            }
            else if(*info->p == '>') {
                info->p++;
                skip_spaces_and_lf(&info);
                break;
            }
        }
    }

    if(info.err_num > 0) {
        fprintf(stderr, "Parser error. The error number is %d\n", info.err_num);
        delete info.generics_type_names;
        delete info.nodes;
        delete info.blocks;
        delete info.vars;
        delete cinfo.codes;
        return false;
    }

    sCLClass* klass = gClasses.at(name, null);

    char* p_before = info.p;
    int sline_before = info.sline;

    var word = parse_word(&info);

    if(strcmp(word, "extends") == 0) {
        var parent_class_name = parse_word(&info);

        sCLClass* parent_class = gClasses.at(parent_class_name, null);
        
        if(parent_class == null) {
            parser_err_msg(&info, xsprintf("Invalid parent class name. class not found(%s)", parent_class_name));
        }

        sCLClass* it = klass;
        while(it) {
            if(it == parent_class) {
                parser_err_msg(&info, xsprintf("Invalid parent class name. recursive parent class(%s)", parent_class_name));
                break;
            }
            it = it->mParent;
        }

        klass->mParent = parent_class;
    }
    else {
        info.p = p_before = info.p;
        info.sline = info.sline;
    }

    expected_next_character('{', &info);

    while(*info.p) {
        if(*info.p == '}') {
            break;
        }

        var word = parse_word(&info);

        if(strcmp(word, "var") == 0) {
            var field_name = parse_word(&info);

            expected_next_character(':', &info);

            sCLType* field_type = null;
            if(!parse_type(&field_type, &info, info.types)) {
                delete info.generics_type_names;
                delete info.nodes;
                delete info.blocks;
                delete info.vars;
                delete cinfo.codes;
                return false;
            }

            if(*info.p == ';') {
                info.p++;
                skip_spaces_and_lf(&info);
            }


            append_field(klass, field_name, field_type);
        }
        else if(strcmp(word, "def") == 0) {
            info.vtables = borrow new vector<sVarTable*%>.initialize();

            var method_name = parse_word(&info);

            sCLParam params[PARAMS_MAX];
            int num_params = 1;
            xstrncpy(params[0].mName, "self", VAR_NAME_MAX);
            params[0].mType = create_type(name, info.types);

            if(!parse_params(params, &num_params, &info, info.types)) {
                delete info.vtables;
                delete info.generics_type_names;
                delete info.nodes;
                delete info.blocks;
                delete info.vars;
                delete cinfo.codes;
                return false;
            }

            expected_next_character(':', &info);

            sCLType* method_type = null;
            if(!parse_type(&method_type, &info, info.types)) {
                delete info.vtables;
                delete info.generics_type_names;
                delete info.nodes;
                delete info.blocks;
                delete info.vars;
                delete cinfo.codes;
                return false;
            }

            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(&info);


                append_method(klass, method_name, method_type, num_params, params, true);
            }
            else {
                expected_next_character('{', &info);

                sCLMethod* method = append_method(klass, method_name, method_type, num_params, params, false);

                sCLNodeBlock* node_block = null;
                int max_var_num = info.max_var_num;
                if(!parse_block(&node_block, num_params, params, &info)) {
                    info.max_var_num = max_var_num;
                    delete info.vtables;
                    delete info.generics_type_names;
                    delete info.nodes;
                    delete info.blocks;
                    delete info.vars;
                    delete cinfo.codes;
                    return false;
                }

                expected_next_character('}', &info);

                int method_max_var_num = info.max_var_num;
                info.max_var_num = max_var_num;

                sCompileInfo cinfo2 = cinfo;

                xstrncpy(cinfo2.sname, sname, PATH_MAX);
                cinfo2.sline = info.sline;

                cinfo2.err_num = 0;
                cinfo2.stack_num = 0;

                cinfo2.pinfo = &info;
                cinfo2.codes = borrow new buffer.initialize();

                cinfo2.type = null;

                cinfo2.no_output = false;

                if(!compile_block(node_block, &cinfo2)) {
                    delete cinfo2.codes;
                    delete info.vtables;
                    delete info.generics_type_names;
                    delete info.nodes;
                    delete info.blocks;
                    delete info.vars;
                    delete cinfo.codes;
                    return false;
                }

                if(!substitution_posibility(method_type, cinfo2.type)) {
                    compile_err_msg(&cinfo2, "Invalid method result type");
                    cinfo2.err_num++;
                }

                if(cinfo2.err_num > 0) {
                    fprintf(stderr, "Compile error\n");
                    delete cinfo2.codes;
                    delete info.vtables;
                    delete info.generics_type_names;
                    delete info.nodes;
                    delete info.blocks;
                    delete info.vars;
                    delete cinfo.codes;
                    return false;
                }

                method.mByteCodes = dummy_heap borrow cinfo2.codes;
                method.mNodeBlock = node_block;

                method.mMaxVarNum = method_max_var_num;
            }

            delete info.vtables;
        }
        else if(*info.p == '}') {
            break;
        }
        else {
            if(strcmp(word, "") == 0) {
                compile_err_msg(&cinfo, xsprintf("Require var or def keyword in the class. This is %c", *info.p));
                delete info.generics_type_names;
                delete info.nodes;
                delete info.blocks;
                delete info.vars;
                delete cinfo.codes;
                return false;
            }
            else {
                compile_err_msg(&cinfo, xsprintf("Require var or def keyword in the class. This is %s", word));
                delete info.generics_type_names;
                delete info.nodes;
                delete info.blocks;
                delete info.vars;
                delete cinfo.codes;
                return false;
            }
        }
    }

    if(info.err_num > 0) {
        fprintf(stderr, "Parser error. The error number is %d\n", info.err_num);
        delete info.generics_type_names;
        delete info.nodes;
        delete info.blocks;
        delete info.vars;
        delete cinfo.codes;
        return false;
    }

    delete info.generics_type_names;
    delete info.nodes;
    delete info.blocks;
    delete info.vars;
    delete cinfo.codes;

    return true;
}

static void save_nullterminated_str(buffer* buf, char* str) 
{
    buf.append_nullterminated_str(str);
    buf.alignment();
}

static void save_type(buffer* buf, sCLType* type)
{
    string str = create_type_name(type);
    
    buf.append_nullterminated_str(str);
    buf.alignment();
}

static bool save_field(buffer* buf, sCLClass* klass, sCLField* field) 
{
    save_nullterminated_str(buf, field->mName);

    save_type(buf, field->mResultType);
    buf.append_int(field->mIndex);

    return true;
}

static bool save_param(buffer* buf, sCLClass* klass, sCLParam* param)
{
    save_nullterminated_str(buf, param->mName);

    save_type(buf, param->mType);

    return true;
}

static bool save_buffer(buffer* buf, buffer* codes)
{
    if(codes == null) {
        buf.append_int(0);
    }
    else {
        buf.append_int(codes.len);
        buf.append(codes.buf, codes.len);
    }

    return true;
}

static bool save_node_block(buffer* buf, sCLNodeBlock* node_block)
{
    return true;
}

static bool save_method(buffer* buf, sCLClass* klass, sCLMethod* method)
{
    save_nullterminated_str(buf, method->mName);

    buf.append_int(method->mNumParams);

    for(int i=0; i<method->mNumParams; i++) {
        sCLParam param = method->mParams[i];
        if(!save_param(buf, klass, &param)) {
            return false;
        }
    }

    save_type(buf, method->mResultType);

    save_buffer(buf, method->mByteCodes);

    //save_node_block(buf, method->mNodeBlock);
    buf.append_int(method->mMaxVarNum);

    return true;
}

bool save_class(sCLClass* klass) 
{
    buffer*% buf = new buffer.initialize();

    save_nullterminated_str(buf, klass->mName);

    buf.append_int(klass.mMethods.length());

    bool return_false = false;
    klass.mMethods.each {
        sCLMethod* method = it2;

        if(!save_method(buf, klass, method)) {
            *it3 = true;
            return_false = true;
            return;
        }
    }

    if(return_false) {
        return false;
    }

    buf.append_int(klass.mFields.length());

    return_false = false;
    klass.mFields.each {
        sCLField* field = it2;

        if(!save_field(buf, klass, field)) {
            *it3 = true;
            return_false = true;
            return;
        }
    }

    if(return_false) {
        return false;
    }

    if(klass.mParent) {
        buf.append_int(1);
        save_nullterminated_str(buf, klass.mParent.mName);
    }
    else {
        buf.append_int(0);
    }

    char path[PATH_MAX];
    snprintf(path, PATH_MAX, "%s.ssc", klass.mName);

    FILE* f = fopen(path, "w");

    if(f == null) {
        return false;
    }

    int n = fwrite(buf.buf, buf.len, 1, f);

    if(n < 0) {
        return false;
    }

    fclose(f);

    return true;
}

static string load_nullterminated_str(int** p)
{
    char* str = (char*)*p;

    int len = strlen(str) + 1;

    alignment(&len);

    len = len / sizeof(int);

    (*p) += len;

    return string(str);
}

static sCLType* load_type(int** p, sParserInfo* info, vector<sCLType*%>* types)
{
    string type_name = load_nullterminated_str(p);
    sCLType* result =  parse_type_runtime(string(type_name), info, types);

    if(result == null) {
        fprintf(stderr, "unexpected error on parsing type name\n");
        exit(1);
    }

    return result;
}

static bool load_field(int** p, int* head, sCLClass* klass, sParserInfo* info)
{
    sCLField*% field = new sCLField;

    field->mName = load_nullterminated_str(p);
    field->mResultType = load_type(p, info, klass.types);
    field->mIndex = **p;
    (*p)++;

    klass->mFields->insert(string(field->mName), field);

    return true;
}

bool load_param(int** p, sCLClass* klass, sCLParam* param, sParserInfo* info)
{
    string name = load_nullterminated_str(p);
    xstrncpy(param->mName, name, VAR_NAME_MAX);

    param->mType = load_type(p, info, klass.types);

    return true;
}

buffer*% load_buffer(int** p)
{
    int len = **p;
    (*p)++;

    if(len == 0) {
        return null;
    }
    else {
        var result = new buffer.initialize();

        result.append((char*)*p, len);

        (*p) += len / sizeof(int);

        return result;
    }
}

sCLNodeBlock* load_node_block(int** p, sParserInfo* info)
{
    return null;
}

static bool load_method(int** p, sCLClass* klass, sParserInfo* info)
{
    sCLMethod%* method = new sCLMethod;

    method->mName = load_nullterminated_str(p);

    method->mNumParams = **p;
    (*p)++;

    for(int i=0; i<method->mNumParams; i++) {
        sCLParam param = method->mParams[i];
        if(!load_param(p, klass, method->mParams + i, info)) {
            return false;
        }
    }

    method->mResultType = load_type(p, info, klass.types);

    method->mByteCodes = load_buffer(p);

    method->mNodeBlock = null;

    method->mMaxVarNum = **p;
    (*p)++;

    klass->mMethods->insert(string(method->mName), method);

    return true;
}

bool load_class(char* name, sParserInfo* info)
{
    char path[PATH_MAX];
    
    char* system_path = PREFIX;
    snprintf(path, PATH_MAX, "%s/share/sevenstars/%s.ssc", system_path, name);

    if(access(path, R_OK) != 0) {
        char* home_path = getenv("HOME");

        snprintf(path, PATH_MAX, "%s/.sevenstars-c/%s.ssc", home_path, name);

        if(access(path, R_OK) != 0) {
            snprintf(path, PATH_MAX, "%s.ssc", name);
        }
    }

    FILE* f = fopen(path, "r");

    if(f == null) {
        return false;
    }

    buffer*% buf = new buffer.initialize();

    char buf2[BUFSIZ];

    while(true) {
        int n = fread(buf2, 1, BUFSIZ, f);

        if(n <= 0) {
            break;
        }

        buf.append(buf2, n);
    }

    fclose(f);

    int* p = (int*)buf.buf;

    string str = load_nullterminated_str(&p);

    sCLClass* klass = gClasses.at(name, null);

    if(klass == null) {
        klass = borrow alloc_class(name);

        gClasses.insert(string(name), dummy_heap klass);
    };
    
    klass->mName = string(str);

    int n = *p;
    p++;
    
    for(int i=0; i<n; i++) {
        if(!load_method(&p, klass, info)) {
            return false;
        }
    }

    n = *p;
    p++;

    for(int i=0; i<n; i++) {
        if(!load_field(&p, (int*)buf.buf, klass, info)) {
            return false;
        }
    }

    n = *p;
    p++;

    if(n) {
        string str = load_nullterminated_str(&p);

        klass->mParent = gClasses.at(str, null);
    }

    return true;
}
