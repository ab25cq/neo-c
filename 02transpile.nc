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
    
    string output_file_name;
    if(info.output_file_name) {
        output_file_name = info.output_file_name + ".i";
    }
    else {
        output_file_name = info.sname + ".i";
    }
    
    FILE* out = fopen(output_file_name, "w");
    if(out == null) {
        puts(s"CAN'T OPEN CPP OUTPUT FILE \{output_file_name}");
        exit(1);
    }

    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
    int is_android = system("uname -a | grep Android 1> /dev/null 2>/dev/null") == 0;
    int is_arm64 = system("uname -a | grep arm64 1> /dev/null 2> /dev/null") == 0;
    int is_m5stack = info.m5stack_cpp; // M5Stack?
    int is_pico = info.pico_cpp; // PICO?
    int is_baremetal = info.baremetal_cpp; // BAREMETAL?
    int is_linux = 1;
    
    bool _32bit = false;
    FILE* f = fopen("/proc/cpuinfo", "r");
    int is_raspi;
    if(f) {
        fclose(f);
        is_raspi = system("cat /proc/cpuinfo | grep 'Model' | grep 'Raspberry Pi' > /dev/null 2> /dev/null ") == 0;
        if(is_raspi) {
            _32bit = system(" lscpu | grep armv7l > /dev/null 2> /dev/null ") == 0;
        }
    }
    else {
        is_raspi = 0;
    }
    
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
    
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
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

        info.source = xsprintf("%s.i", it).read();
        info.p = borrow info.source.buf;
        info.head = borrow info.source.buf;
        info.end = info.source.buf + info.source.len;
        
        info.output_file_name = null;
        
        transpile(&info);
        
        if(info.err_num > 0) {
            printf("transpile error number %d\n", info->err_num);
            
            exit(2);
        }
        
        output_source_file(&info).elif {
            printf("output source file faield\n");
            exit(2);
        }
        
        if(info.warning_num > 0) {
            printf("transpile warning number %d\n", info->warning_num);
        }
    }
    
    return 0;
}
