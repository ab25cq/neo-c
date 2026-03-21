#include "common.h"

bool gComeC = true;
bool gComeUniq = false;
bool gComePthread = false;
bool gComeDebug = false;
bool gComeOriginalSourcePosition = false;
bool gComeBareMetal = false;
bool gComeCPlusPlus = false;
bool gComelang = false;
bool gComeSafe = false;
bool gPortableC = false;
bool gComeLowMemory = false;
bool gComeKeepPreprocessedFile = false;

static bool gHostInfoInitialized = false;
static bool gHostIsMac = false;
static bool gHostIsAndroid = false;
static bool gHostIsRaspberryPi = false;
static bool gHostIs32BitCpu = false;

static bool host_file_contains(const char* path, const char* keyword)
{
    FILE* f = fopen(path, "r");
    if(f == null) {
        return false;
    }
    
    bool result = false;
    char buf[1024];
    
    while(fgets(buf, sizeof(buf), f)) {
        if(strstr(buf, keyword)) {
            result = true;
            break;
        }
    }
    
    fclose(f);
    
    return result;
}

static void init_host_info()
{
    if(gHostInfoInitialized) {
        return;
    }
    
#if defined(__APPLE__)
    gHostIsMac = true;
#endif

#if defined(__ANDROID__)
    gHostIsAndroid = true;
#endif

    gHostIs32BitCpu = sizeof(void*) == 4;
    gHostIsRaspberryPi = host_file_contains("/proc/device-tree/model", "Raspberry Pi")
        || host_file_contains("/proc/cpuinfo", "Raspberry Pi");
    
    gHostInfoInitialized = true;
}

static string get_cpp_output_file_name(sInfo* info)
{
    if(info.output_file_name) {
        return info.output_file_name + ".i";
    }
    
    return info.sname + ".i";
}

bool require_explicit_method_in_low_memory_mode(sType* type, const char* fun_name, sInfo* info=info)
{
    if(!gComeLowMemory || type == null || type->mClass == null) {
        return false;
    }
    
    sType* type2 = type;
    if(type->mNoSolvedGenericsType && type->mNoSolvedGenericsType.mClass) {
        type2 = borrow type->mNoSolvedGenericsType;
    }
    
    sClass* klass = type2->mClass;
    bool generated_automatically = type2->mPointerNum > 0 && !klass->mNumber;
    
    if(fun_name === "compare" || fun_name === "get_hash_key") {
        generated_automatically = generated_automatically && !klass->mProtocol;
    }
    else if(fun_name !== "equals" && fun_name !== "operator_equals"
        && fun_name !== "operator_not_equals" && fun_name !== "to_string")
    {
        generated_automatically = false;
    }
    
    if(!generated_automatically) {
        return false;
    }
    
    string type_name = make_type_name_string(type2, no_static:true);
    err_msg(info, "lowmem mode disables automatic %s generation for %s. Define %s explicitly or compile without -lowmem", fun_name, type_name, fun_name);
    
    return true;
}

static void write_source_file_position_to_source(sInfo* info=info)
{
    if(gComeOriginalSourcePosition) {
        if(info.writing_source_file_position) {
            add_come_code(info, s"# \{info->sline} \"\{info->sname}\"\n");
            info.writing_source_file_position = false;
        }
    }
}

bool node_compile(sNode* node, sInfo* info=info)
{
    string sname = string(info->sname);
    int sline = info->sline;
    int sline_real = info->sline_real;
    
    info->sname = string(node->sname());
    info->sline = node->sline();
    info->sline_real = node->sline_real();
    
    write_source_file_position_to_source();

    bool result = node->compile(info);

    info->sname = string(sname);
    info->sline = sline;
    info->sline_real = sline_real;
    
    return result;
}

bool transpile_conditional_with_free_right_object_value(sNode* node, sInfo* info=info)
{
    bool in_conditional = info->in_conditional;
    info->in_conditional = true;
    node_compile(node).elif {
        info->in_conditional = in_conditional;
        return false;
    }
    info->in_conditional = in_conditional;
    
    bool existance_right_value_object = existance_free_right_value_objects(info);
    
    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    
    add_last_code_to_source(info);
    
    bool already_defined = info->num_conditional < info->max_conditional;
    
    int num_conditional = info->num_conditional;
    
    if(!existance_right_value_object) {
    }
    else if(already_defined) {
        info->num_conditional++;
    }
    else {
        add_come_code_at_function_head(info, "_Bool _conditional_value_X%d;\n", info.num_conditional++);
    }
    
    if(info->num_conditional >= info->max_conditional) {
        info->max_conditional = info->num_conditional;
    }
    
    if(existance_right_value_object) {
        if(conditional_value.c_value !== "") {
            bool in_conditional = info->in_conditional;
            info->in_conditional = true;
            add_come_code(info, "({(_conditional_value_X%d=(%s));", num_conditional, conditional_value.c_value);
            info->in_conditional = in_conditional;
        }
        free_right_value_objects(info);
        if(conditional_value.c_value !== "") {
            bool in_conditional = info->in_conditional;
            info->in_conditional = true;
            add_come_code(info, "_conditional_value_X%d;})", num_conditional);
            info->in_conditional = in_conditional;
        }
    }
    else {
        bool in_conditional = info->in_conditional;
        info->in_conditional = true;
        add_come_code(info, "%s", conditional_value.c_value, in_conditional:true);
        info->in_conditional = in_conditional;
    }
    
    return true;
}

static bool cpp(sInfo* info)
{
    string input_file_name = info.sname;
    string output_file_name = get_cpp_output_file_name(info);
    FILE* out = null;
    char* source_data = null;
    size_t source_size = 0;
    bool use_memstream = false;

#if defined(__linux__) || defined(__ANDROID__)
    if(!gComeLowMemory) {
        out = open_memstream(&source_data, &source_size);
        use_memstream = out != null;
    }
#endif

    if(!use_memstream) {
        out = fopen(output_file_name, "w");
        if(out == null) {
            puts(s"CAN'T OPEN CPP OUTPUT FILE \{output_file_name}");
            exit(1);
        }
    }

    init_host_info();
    
    int is_mac = gHostIsMac;
    int is_android = gHostIsAndroid;
    int is_m5stack = info.m5stack_cpp; // M5Stack?
    int is_pico = info.pico_cpp; // PICO?
    int is_baremetal = info.baremetal_cpp; // BAREMETAL?
    
    bool _32bit = gHostIs32BitCpu;
    int is_raspi = gHostIsRaspberryPi;
    
    if(is_pico || is_m5stack) {
        _32bit = true;
    }
    
    if(_32bit) {
        set_macro("__32BIT_CPU__", "1");
    }
    
    if(is_m5stack) {
        set_macro("__M5STACK__", "1");
    }
    else if(is_pico) {
        set_macro("__PICO__", "1");
    }
    else if(gComeBareMetal) {
        set_macro("__BAREMETAL__", "1");
    }
    else if(is_mac) {
        set_macro("__APPLE__", "1");
    }
    else if(is_android) {
        set_macro("__ANDROID__", "1");
    }
    else if(is_raspi) {
        set_macro("__RASPBERRY_PI__", "1");
    }
    else {
        set_macro("__linux__", "1");
    }

    preprocess_file_neo_c(input_file_name, out);
    
    fclose(out);

    if(use_memstream) {
        info.source = source_data.to_buffer();
        
        if(gComeKeepPreprocessedFile) {
            source_data.write(output_file_name);
        }
        
        free(source_data);
    }
    else {
        info.source = output_file_name.read();
        
        if(!gComeKeepPreprocessedFile) {
            remove(output_file_name);
        }
    }
    
    return true;
}

static void init_classes(sInfo* info)
{
    info.classes.insert(string("int"), new sClass(s"int", number:true));
    info.classes.insert(string("short"), new sClass(s"short", number:true));
    info.classes.insert(string("long"), new sClass(s"long", number:true));
    info.classes.insert(string("char"), new sClass(s"char", number:true));
    info.classes.insert(string("bool"), new sClass(s"bool", number:true));
    info.classes.insert(string("_Bool"), new sClass(s"_Bool", number:true));
    info.classes.insert(string("void"), new sClass(s"void"));
    info.classes.insert(string("float"), new sClass(s"float", float_:true));
    info.classes.insert(string("double"), new sClass(s"double", float_:true));
    info.classes.insert(string("lambda"), new sClass(s"lambda"));
    info.classes.insert(string("_Float16"), new sClass(s"_Float16", float_:true));
    info.classes.insert(string("_Float128"), new sClass(s"_Float128", number:true));
    info.classes.insert(string("__float128"), new sClass(s"__float128", float_:true));
    info.classes.insert(string("__uint128_t"), new sClass(s"__uint128_t", number:true));
    info.classes.insert(string("__typename"), new sClass(s"__typename", typename:true));
    info.classes.insert(string("_Complex"), new sClass(s"_Complex", float_:true));
    info.classes.insert(string("__int128"), new sClass(s"__int128", number:true));
    info.classes.insert(string("__int128_t"), new sClass(s"__int128_t", number:true));
    info.classes.insert(string("iter_begin"), new sClass(s"iter_begin", iter_:true));
    info.classes.insert(string("iter_end"), new sClass(s"iter_end", iter_:true));
    info.classes.insert(string("iter"), new sClass(s"iter", iter_:true));
    for(int i=0; i<GENERICS_TYPE_MAX; i++) {
        string generics_type = xsprintf("__generics_type%d", i);
        info.classes.insert(generics_type, new sClass(generics_type, generics:true, generics_num:i));
    }
    for(int i=0; i<METHOD_GENERICS_TYPE_MAX; i++) {
        string generics_type = xsprintf("__mgenerics_type%d", i);
        info.classes.insert(generics_type, new sClass(generics_type, method_generics:true, method_generics_num:i));
    }
    
    //sType*% type__ = new sType(s"long");
    //type__->mUnsigned = true;
    //(void)add_typedef(s"uint64_t", type__, info);
    
    init_host_info();
    
    int is_mac = gHostIsMac;
    if(is_mac) {
        info.classes.insert(string("__builtin_va_list"), new sClass(s"__builtin_va_list", number:true));
        
        string type_name = string("__builtin_va_list");
        
        sType*% type = new sType(s"__builtin_va_list");
        type->mOriginalTypeName = string("__builtin_va_list");
        
        info.types.insert(string(type_name), type);
        
        sClass*% klass = new sClass(s"__gnuc_va_list", struct_:true);
        
        klass.mFields.push_back(t(string("v1"), new sType(s"char*")));
        klass.mFields.push_back(t(string("v2"), new sType(s"char*")));
        klass.mFields.push_back(t(string("v3"), new sType(s"char*")));
        klass.mFields.push_back(t(string("v4"), new sType(s"int")));
        klass.mFields.push_back(t(string("v5"), new sType(s"int")));
        
        (void)add_typedef(s"__gnuc_va_list", type, info);
    }
    else { // Other
        
        sClass*% klass = new sClass(s"__builtin_va_list", struct_:true);
        
        klass.mFields.push_back(t(string("v1"), new sType(s"char*")));
        klass.mFields.push_back(t(string("v2"), new sType(s"char*")));
        klass.mFields.push_back(t(string("v3"), new sType(s"char*")));
        klass.mFields.push_back(t(string("v4"), new sType(s"int")));
        klass.mFields.push_back(t(string("v5"), new sType(s"int")));
        
        info.classes.insert(string("__builtin_va_list"), klass);
        
        string type_name = string("__builtin_va_list");
        
        sType*% type = new sType(s"__builtin_va_list");
        type->mOriginalTypeName = string("__builtin_va_list");
        
/*
        sClass*% klass = new sClass(s"__gnuc_va_list", struct_:true);
        
        klass.mFields.push_back((string("v1"), new sType(s"char*")));
        klass.mFields.push_back((string("v2"), new sType(s"char*")));
        klass.mFields.push_back((string("v3"), new sType(s"char*")));
        klass.mFields.push_back((string("v4"), new sType(s"int")));
        klass.mFields.push_back((string("v5"), new sType(s"int")));
        
        info.classes.insert(string("__gnuc_va_list"), klass);
        
        sType*% type_ = new sType(s"__gnuc_va_list");
        output_struct(klass, s"", info);
*/
        (void)add_typedef(s"__gnuc_va_list", type, info);
        
        var type_ = new sType(s"long");
        type_->mUnsigned = true;
        (void)add_typedef(s"size_t", type_, info);
        
        if(!gComeCPlusPlus) {
            type_ = new sType(s"int");
            (void)add_typedef(s"wchar_t", type_, info);
        }
        
        (void)add_typedef(s"__gnuc_va_list", type, info);
    }
}

#module MEvalOptions(T)
{
    var files = new list<string>();
    for(int i=T; i<argc; i++) {
        string ext_name = xextname(argv[i]);
        
        if(argv[i] === "-cg") {
            gComeDebug = true;
        }
        else if(argv[i] === "-uniq") {
            gComeUniq = true; // output uniq function to the source
        }
        else if(argv[i] === "-cpp") {
            gComeCPlusPlus = true;
        }
        else if(argv[i] === "-portable-c") {
            gPortableC = true;
        }
        else if(argv[i] === "-lowmem") {
            gComeLowMemory = true;
        }
        else if(argv[i] === "-E") {
            gComeKeepPreprocessedFile = true;
        }
        else if(ext_name === "nc") {
            files.push_back(string(argv[i]));
        }
        else if(ext_name === "c") {
            puts(s"require .nc extension instead of .c extension \{argv[i]}");
            exit(1);
        }
    }
}

int come_main(int argc, char** argv)
{
    int start_num = 1;
    MEvalOptions(start_num);
    
    init_ccpp(argc, argv);
    
    foreach(it, files) {
        sInfo info;
        
        memset(&info, 0, sizeof(sInfo));
        
        fopen(it, "r").if {
            fclose(Value);
        }
        else {
            continue;
        }
        
        info.sname = string(it);
        info.sline = 1;
        info.sline_real = 1;
        info.err_num = 0;
        info.funcs = new map<string, sFun*%>();
        info.uniq_funcs = new map<string, sFun*%>();
        info.struct_definition = new map<string, buffer*%>();
        info.var_definition = new map<string, buffer*%>();
        info.uniq_definition = new map<string, string>();
        info.previous_struct_definition = new map<string, buffer*%>();
        info.c_include_definition = new map<string, buffer*%>();
        info.typedef_definition = new map<string, buffer*%>();
        info.named_child_struct = new map<string, sType*%>();
        info.reflection_vars = new map<string, string>();
        info.generics_funcs = new map<string, sGenericsFun*%>();
        info.classes = new map<string, sClass*%>();
        info.types = new map<string, sType*%>();
        info.module = new sModule();
        info.right_value_objects = new list<sRightValueObject*%>();
        info.stack = new list<CVALUE*%>();
        info.gv_table = new sVarTable(global:true, parent:null);
        sVarTable*% lv_table = new sVarTable(global:false, parent:null);
        info.lv_table = borrow lv_table;
        info.generics_type_names = new list<string>();
        info.method_generics_type_names = new list<string>();
        info.generics_classes = new map<string, sClass*%>();
        info.pragma_pack_stack = new list<string>();
        info.pragma = s"";
        
        init_classes(&info);
        
        cpp(&info).elif {
            printf("cpp failed\n");
            exit(2);
        }

        info.p = span borrow info.source;
        info.head = borrow info.source.buf;
        info.end = info.source.buf + info.source.len;
        
        info.output_file_name = null;
        
        transpile(&info);
        
        if(info.err_num > 0) {
            printf("transpile failed for %s: %d error(s). see diagnostics above.\n", it, info->err_num);
            
            exit(2);
        }
        
        output_source_file(&info).elif {
            printf("output source file failed\n");
            exit(2);
        }
        
        if(info.warning_num > 0) {
            printf("transpile completed for %s with %d warning(s).\n", it, info->warning_num);
        }
    }
    
    return 0;
}
