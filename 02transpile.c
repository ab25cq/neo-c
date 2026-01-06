#include "common.h"

bool gComeC = true;
bool gComeNet = false;
bool gComePthread = false;
bool gComeDebug = false;
bool gComeOriginalSourcePosition = true;
int gComeDebugStackFrameID = 0;
bool gComeBareMetal = false;

char* CC="clang";

static char* RM = "rm -rf";

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

#ifndef __MINUX__
static void clear_tmp_file(sInfo* info)
{
    string input_file_name = info.sname;
    
    if(input_file_name != null && input_file_name !== "") {
        (void)system(xsprintf("%s \"%s\".*", RM, input_file_name));
    }
}

static void clear_tmp_file_without_object_file(sInfo* info)
{
    string input_file_name = info.sname;
    
    if(input_file_name != null && input_file_name !== "") {
        (void)system(xsprintf("%s \"%s\".i* \"%s\".c*", RM, input_file_name, input_file_name));
    }
}

static void clear_tmp_file_without_object_file_and_ccfile(sInfo* info)
{
    string input_file_name = info.sname;
    
    if(input_file_name != null && input_file_name !== "") {
        (void)system(xsprintf("%s \"%s\".i* \"%s\".c.out", RM, input_file_name, input_file_name));
    }
}
#else
static void clear_tmp_file(sInfo* info)
{
}

static void clear_tmp_file_without_object_file(sInfo* info)
{
}

static void clear_tmp_file_without_object_file_and_ccfile(sInfo* info)
{
}
#endif

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
    
#ifndef __MINUX__
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
    int is_android = system("uname -a | grep Android 1> /dev/null 2>/dev/null") == 0;
    int is_linux = 1;
    int is_arm64 = system("uname -a | grep arm64 1> /dev/null 2> /dev/null") == 0;
    int is_m5stack = info.m5stack_cpp; // M5Stack?
    int is_pico = info.pico_cpp; // PICO?
    int is_emb = info.emb_cpp; // EMBBEDED
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
        info.cpp_option = info.cpp_option + s" -D__32BIT_CPU__ ";
    }
    
    /// Android ///
    if(is_android) {
        string cmd3 = xsprintf("cpp %s -lang-c %s -I. -I\"%s\"/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ \"%s\" > \"%s\" 2> \"%s\".cpp.out", (info.remove_comment ? "": " -C"), info.cpp_option, getenv("HOME"), PREFIX, PREFIX, input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        string command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            printf("cpp failed(%s)\n", command2);
            exit(2);
        }
    }
    else if(is_m5stack) {
        string cmd2 = xsprintf("xtensa-esp-elf-cpp -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -DNEO_C -D__M5STACK__ \"%s\" > \"%s\" 2> \"%s\".cpp.out", info.remove_comment ? "":" -C", info.cpp_option, PREFIX, PREFIX, input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd2);
        
        int rc = system(cmd2);
        
        string command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            printf("failed to cpp(2) (%s)\n", cmd2);
            exit(5);
        }
        
        var command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
    }
    else if(is_pico) {
        string cmd2 = xsprintf("arm-none-eabi-gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -DNEO_C -D__PICO__ \"%s\" > \"%s\" 2> \"%s\".cpp.out", info.remove_comment ? "":" -C", info.cpp_option, PREFIX, PREFIX, input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd2);
        
        string command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        int rc = system(cmd2);
        
        if(rc != 0) {
            printf("failed to cpp(2) (%s)\n", cmd2);
            exit(5);
        }
        
        var command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
    }
    /// Mac ///
    else if(is_mac) {
        string cmd2 = xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include \"%s\" > \"%s\" 2> \"%s\".cpp.out", (info.remove_comment ? "":" -C"), info.cpp_option, PREFIX, PREFIX, input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd2);
        
        string command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        int rc = system(cmd2);
        
        if(rc != 0) {
            printf("failed to cpp(2) (%s)\n", cmd2);
            exit(5);
        }
        
        var command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
    }
    /// EMBBEDED ///
    else if(is_emb) {
        string cmd3 = xsprintf("clang -E %s -lang-c %s -I. -I\"%s\"/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -D__EMB__ \"%s\" > \"%s\" 2> \"%s\".cpp.out", (info->remove_comment ? "":" -C"), info.cpp_option, getenv("HOME"), PREFIX, PREFIX, input_file_name, output_file_name, output_file_name);

        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        var command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            string cmd4 = xsprintf("clang -E %s -I. %s -DPREFIX=\"%s\" -I\"%s\"/include -D__EMB__ \"%s\" > \"%s\" 2> \"%s\".cpp.out", info->remove_comment ? "": " -C", info.cpp_option, PREFIX, PREFIX, input_file_name, output_file_name, output_file_name);

            
            var command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
            
            if(info.verbose) puts(command2);
            (void)system(command2);
            
            if(rc != 0) {
                printf("failed to cpp(2) (%s)\n", cmd4);
                exit(5);
            }
        }
    }
    /// __RASPIBERRY_PI__ ///
    else if(is_raspi) {
        string cmd3 = xsprintf("cpp %s -lang-c %s -I. -I\"%s\"/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -D__RASPBERRY_PI__ \"%s\" > \"%s\" 2> \"%s\".cpp.out", (info->remove_comment ? "":" -C"), info.cpp_option, getenv("HOME"), PREFIX, PREFIX, input_file_name, output_file_name, output_file_name);

        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        var command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            string cmd4 = xsprintf("cpp %s -I. %s -DPREFIX=\"%s\" -I\"%s\"/include -D__RASPBERRY_PI__ \"%s\" > \"%s\" 2> \"%s\".cpp.out", info->remove_comment ? "": " -C", info.cpp_option, PREFIX, PREFIX, input_file_name, output_file_name, output_file_name);
            
            var command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
            
            if(info.verbose) puts(command2);
            (void)system(command2);
            
            if(rc != 0) {
                printf("failed to cpp(2) (%s)\n", cmd4);
                exit(5);
            }
        }
    }
    else if(is_linux) {
        if(is_arm64) {
            info.cpp_option = info.cpp_option; // + " -march=armv8-a+sve";
        }
        string cmd3 = xsprintf("clang -E %s -lang-c %s -I. -I\"%s\"/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -D__LINUX__ \"%s\" > \"%s\" 2> \"%s\".cpp.out", (info->remove_comment ? "":" -C"), info.cpp_option, getenv("HOME"), PREFIX, PREFIX, input_file_name, output_file_name, output_file_name);

        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        var command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            string cmd4 = xsprintf("cpp %s -I. %s -DPREFIX=\"%s\" -I\"%s\"/include -D__LINUX__ \"%s\" > \"%s\" 2> \"%s\".cpp.out", info->remove_comment ? "": " -C", info.cpp_option, PREFIX, PREFIX, input_file_name, output_file_name, output_file_name);

            var command2 = xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null", output_file_name);
            
            if(info.verbose) puts(command2);
            (void)system(command2);
            
            if(rc != 0) {
                printf("failed to cpp(2) (%s)\n", cmd4);
                exit(5);
            }
        }
    }
#endif
    
    return true;
}

static bool compile(sInfo* info, bool output_object_file, list<string>* object_files)
{
    string input_file_name = info.sname + ".c";
    
    string output_file_name;
    if(info.output_file_name && output_object_file) {
        output_file_name = string(info.output_file_name);
    }
    else {
        output_file_name = info.sname + ".o";
    }
    
#ifndef __MINUX__
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
    int is_arm64 = system("uname -a | grep arm64 1> /dev/null 2> /dev/null") == 0;
    
    if(is_mac) {
        info.clang_option = info.clang_option + " -std=gnu17 ";
    }
    if(is_arm64) {
        info.clang_option = info.clang_option; // + " -march=armv8-a+sve";
    }
    
    var command = xsprintf("%s -o \"%s\" -c \"%s\" %s >> %s.out 2>&1", CC, output_file_name, input_file_name, info.clang_option, input_file_name);
    
    if(info.verbose) puts(command);
    int rc = system(command);
    
    if(rc != 0) {
    /*
        string command = xsprintf("%s -o \"%s\" -c %s \"%s\" >> \"%s\".out 2>&1", "gcc", output_file_name, input_file_name, info.clang_option, input_file_name);
        
        if(info.verbose) puts(command);
        int rc = system(command);
        
        if(rc != 0) {
        */
            printf("%s is faild\n", CC);
            
            var command2 = xsprintf("grep error\\: \"%s\".out 2>/dev/null", input_file_name);
            
            if(info.verbose) puts(command2);
            (void)system(command2);
            exit(2);
   //     }
    }
    
    if(!output_object_file) {
        object_files.insert(0, string(output_file_name));
    }
#endif    
    
    return true;
}

static bool linker(sInfo* info, list<string>* object_files)
{
    string output_file_name = null;
    if(info.output_file_name) {
        output_file_name = string(info.output_file_name);
    }
    else {
        output_file_name = xnoextname(info.sname);
    }
    
#ifndef __MINUX__
    var command = new buffer();
    
    command.append_format("%s -o \"%s\" ", CC, output_file_name);
    
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
    if(is_mac) {
        info.linker_option = info.linker_option + s" -std=gnu17 ";
    }
    
    command.append_str(" " + info.linker_option +" ");
    
    foreach(it, object_files) {
        command.append_format("%s ", it);
    }
    
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
    if(is_mac) {
        command.append_str(" -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    
    string cmd = xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"); // /usr/local/lib?
    int rc = system(cmd);
    if(rc == 0) {
        command.append_str(" -L. -L/usr/local/lib ");
    }
    
    string cmd = xsprintf("ls \"%s\"/lib 1> /dev/null 2>/dev/null", getenv("HOME")); // $HOME/lib?
    int rc = system(cmd);
    if(rc == 0) {
        command.append_format(" -L\"%s\"/lib ", getenv("HOME"));
    }
    
    string cmd = xsprintf("ls \"%s\"/lib 1> /dev/null 2>/dev/null", PREFIX); // PREFIX/lib?
    int rc = system(cmd);
    if(rc == 0) {
        command.append_format(" -L\"%s\"/lib ", PREFIX);
    }
    
    command.append_str(" " + info.linker_option2 +" ");
    
    command.append_format(" %s ", info.clang_option);
    
    if(gComePthread) {
        command.append_str(" -lpthread ");
    }
    if(gComeNet) {
        command.append_str(" -lssl ");
    }

    int is_mac2 = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
    if(!is_mac2) {
        command.append_str(" -latomic ");
    }
    
    if(info.verbose) puts(command.to_string());
    
    system(command.to_string()).if {
        int is_mac3 = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
        if(!is_mac3) {
            buffer*% retry = new buffer();
            retry.append_str(command.to_string());
            retry.append_str(" -latomic ");
            
            if(info.verbose) puts(retry.to_string());
            
            system(retry.to_string()).if {
            }
            else {
                return true;
            }
        }
        string str = s"gcc" + command.to_string().substring(strlen(CC), -1);
        
        system(str).if { 
            if(!is_mac3) {
                string str2 = str + s" -latomic ";
                
                if(info.verbose) puts(str2);
                
                system(str2).if {
                    printf("%s is failed\n", CC);
                    return false;
                }
                else {
                    return true;
                }
            }
            
            printf("%s is failed\n", CC);
            return false;
        }
    }
#endif
    
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
    info.classes.insert(string("_Float16"), new sClass(s"_Float16", float_:true));
    info.classes.insert(string("lambda"), new sClass(s"lambda"));
    info.classes.insert(string("__uint128_t"), new sClass(s"__uint128_t", number:true));
    info.classes.insert(string("_Float128"), new sClass(s"_Float128", number:true));
    info.classes.insert(string("__float128"), new sClass(s"__float128", float_:true));
    info.classes.insert(string("__typename"), new sClass(s"__typename", typename:true));
    info.classes.insert(string("_Complex"), new sClass(s"_Complex", float_:true));
    info.classes.insert(string("__int128"), new sClass(s"__int128", number:true));
    for(int i=0; i<GENERICS_TYPE_MAX; i++) {
        string generics_type = xsprintf("__generics_type%d", i);
        info.classes.insert(generics_type, new sClass(generics_type, generics:true, generics_num:i));
    }
    for(int i=0; i<METHOD_GENERICS_TYPE_MAX; i++) {
        string generics_type = xsprintf("__mgenerics_type%d", i);
        info.classes.insert(generics_type, new sClass(generics_type, method_generics:true, method_generics_num:i));
    }
    
#ifndef __MINUX__
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
    if(is_mac) {
        info.classes.insert(string("__builtin_va_list"), new sClass(s"__builtin_va_list", number:true));
        
        string type_name = string("__builtin_va_list");
        
        sType*% type = new sType(s"__builtin_va_list");
        type->mOriginalTypeName = string("__builtin_va_list");
        
        info.types.insert(string(type_name), type);
    }
    else { // Other
        sClass*% klass = new sClass(s"__builtin_va_list", struct_:true);
        
        klass.mFields.push_back((string("v1"), new sType(s"char*")));
        klass.mFields.push_back((string("v2"), new sType(s"char*")));
        klass.mFields.push_back((string("v3"), new sType(s"char*")));
        klass.mFields.push_back((string("v4"), new sType(s"int")));
        klass.mFields.push_back((string("v5"), new sType(s"int")));
        
        info.classes.insert(string("__builtin_va_list"), klass);
    }
#else
    sClass*% klass = new sClass(s"__builtin_va_list", struct_:true);
    
    klass.mFields.push_back((string("v1"), new sType(s"char*")));
    klass.mFields.push_back((string("v2"), new sType(s"char*")));
    klass.mFields.push_back((string("v3"), new sType(s"char*")));
    klass.mFields.push_back((string("v4"), new sType(s"int")));
    klass.mFields.push_back((string("v5"), new sType(s"int")));
    
    info.classes.insert(string("__builtin_va_list"), klass);
#endif
}

void create_pico_version_header()
{
#ifndef __MINUX__
    if(getenv("PICO_SDK_PATH")) {
        (getenv("PICO_SDK_PATH") + "/pico_sdk_version.cmake").read().if {
            int version_major = 0;
            char* p = strstr(Value, "set(PICO_SDK_VERSION_MAJOR");
            if(p) {
                p += strlen("set(PICO_SDK_VERSION_MAJOR");
                
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                while(xisdigit(*p)) {
                    version_major = version_major*10 + (*p - '0');
                    p++;
                }
            }
            int version_miner = 0;
            char* p = strstr(Value, "set(PICO_SDK_VERSION_MINOR");
            if(p) {
                p += strlen("set(PICO_SDK_VERSION_MINOR");
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                while(xisdigit(*p)) {
                    version_miner = version_miner*10 + *p - '0';
                    p++;
                }
            }
            int version_revision = 0;
            char* p = strstr(Value, "set(PICO_SDK_VERSION_REVISION");
            if(p) {
                p += strlen("set(PICO_SDK_VERSION_REVISION");
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                while(xisdigit(*p)) {
                    version_revision = version_revision*10 + *p - '0';
                    p++;
                }
            }
            
            string version_string = s"\{version_major}.\{version_miner}.\{version_revision}";
            
            system("mkdir -p pico").elif {
                """
\#ifndef _PICO_VERSION_H
\#define _PICO_VERSION_H

\#define PICO_SDK_VERSION_MAJOR    \{version_major}
\#define PICO_SDK_VERSION_MINOR    \{version_miner}
\#define PICO_SDK_VERSION_REVISION \{version_revision}
\#define PICO_SDK_VERSION_STRING   "\{version_string}"

\#endif
""".write("pico/version.h");
            }
        }
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
#endif
}

module MEvalOptions<T, T2>
{
    var clang_option = new buffer();
    //clang_option.append_str(" -std=c99 ");
    clang_option.append_str(" -std=c11 ");
    var linker_option = new buffer();
    var linker_option2 = new buffer();
    var cpp_option = new buffer();
    cpp_option.append_str("-U__GNUC__");
    cpp_option.append_str(" -std=c11 ");
    var files = new list<string>();
    var object_files = new list<string>();
    bool output_object_file = false;
    bool output_cpp_file = false;
    bool output_source_file_flag = false;
    bool output_object_file_flag = true;
    string output_file_name = T2;
    bool verbose = false;
    bool come_debug = false;
    bool m5stack_cpp = false;
    bool pico_cpp = false;
    bool emb_cpp = false;
    bool gcc_compiler = false;
    for(int i=T; i<argc; i++) {
        string ext_name = xextname(argv[i]);
        
        if(argv[i] === "-o" && i+1 < argc) {
            output_file_name = string(argv[i+1]);
            i++;
        }
        else if(argv[i] === "-e" && i+1 < argc) {
            linker_option.append_str(s" -e \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-Bstatic" || argv[i] === "-Bdynamic" || argv[i] === "-Bsymbolic" || argv[i] === "-Bsymbolic-functions") {
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-B" && i+1 < argc) {
            clang_option.append_str(s" -B\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) >= 2 && memcmp(argv[i], "-B", strlen("-B")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-L" && i+1 < argc) {
            linker_option.append_str(s" -L\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) >= 2 && memcmp(argv[i], "-L", strlen("-L")) == 0) {
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-l" && i+1 < argc) {
            linker_option2.append_str(s" -l\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) >= 2 && memcmp(argv[i], "-l", strlen("-l")) == 0) {
            linker_option2.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= 4 && memcmp(argv[i], "-Wl,", strlen("-Wl,")) == 0) {
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-Xlinker" && i+1 < argc) {
            linker_option.append_str(s" -Xlinker \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-rpath" && i+1 < argc) {
            linker_option.append_str(s" -Wl,-rpath,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-rpath-link" && i+1 < argc) {
            linker_option.append_str(s" -Wl,-rpath-link,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-u" && i+1 < argc) {
            linker_option.append_str(s" -u \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-Map" && i+1 < argc) {
            linker_option.append_str(s" -Wl,-Map,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-z" && i+1 < argc) {
            linker_option.append_str(s" -Wl,-z,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-soname" && i+1 < argc) {
            linker_option.append_str(s" -Wl,-soname,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "--soname" && i+1 < argc) {
            linker_option.append_str(s" -Wl,--soname,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "--version-script" && i+1 < argc) {
            linker_option.append_str(s" -Wl,--version-script,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "--dynamic-list" && i+1 < argc) {
            linker_option.append_str(s" -Wl,--dynamic-list,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "--defsym" && i+1 < argc) {
            linker_option.append_str(s" -Wl,--defsym,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "--wrap" && i+1 < argc) {
            linker_option.append_str(s" -Wl,--wrap,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "--exclude-libs" && i+1 < argc) {
            linker_option.append_str(s" -Wl,--exclude-libs,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "--export-dynamic" || argv[i] === "-export-dynamic") {
            linker_option.append_str(" -Wl,--export-dynamic ");
        }
        else if(argv[i] === "--print-gc-sections") {
            linker_option.append_str(" -Wl,--print-gc-sections ");
        }
        else if(argv[i] === "--strip-all" || argv[i] === "--strip-debug") {
            linker_option.append_str(s" -Wl,\{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("--soname") && memcmp(argv[i], "--soname", strlen("--soname")) == 0) {
            linker_option.append_str(s" -Wl,\{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("--version-script") && memcmp(argv[i], "--version-script", strlen("--version-script")) == 0) {
            linker_option.append_str(s" -Wl,\{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("--dynamic-list") && memcmp(argv[i], "--dynamic-list", strlen("--dynamic-list")) == 0) {
            linker_option.append_str(s" -Wl,\{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("--defsym") && memcmp(argv[i], "--defsym", strlen("--defsym")) == 0) {
            linker_option.append_str(s" -Wl,\{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("--wrap") && memcmp(argv[i], "--wrap", strlen("--wrap")) == 0) {
            linker_option.append_str(s" -Wl,\{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("--exclude-libs") && memcmp(argv[i], "--exclude-libs", strlen("--exclude-libs")) == 0) {
            linker_option.append_str(s" -Wl,\{argv[i]} ");
        }
        else if(argv[i] === "-r") {
            linker_option.append_str(" -r ");
        }
        else if(argv[i] === "--gc-sections" || argv[i] === "--no-undefined" || argv[i] === "-dead_strip" || argv[i] === "--start-group" || argv[i] === "--end-group" || argv[i] === "--whole-archive" || argv[i] === "--no-whole-archive" || argv[i] === "--as-needed" || argv[i] === "--no-as-needed") {
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= strlen("--build-id") && memcmp(argv[i], "--build-id", strlen("--build-id")) == 0) {
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-framework" && i+1 < argc) {
            linker_option.append_str(s" -framework \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-dynamiclib" || argv[i] === "-bundle") {
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-install_name" && i+1 < argc) {
            linker_option.append_str(s" -Wl,-install_name,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-compatibility_version" && i+1 < argc) {
            linker_option.append_str(s" -Wl,-compatibility_version,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-current_version" && i+1 < argc) {
            linker_option.append_str(s" -Wl,-current_version,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-exported_symbols_list" && i+1 < argc) {
            linker_option.append_str(s" -Wl,-exported_symbols_list,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-unexported_symbols_list" && i+1 < argc) {
            linker_option.append_str(s" -Wl,-unexported_symbols_list,\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-dead_strip_dylibs") {
            linker_option.append_str(" -Wl,-dead_strip_dylibs ");
        }
        else if(argv[i] === "-shared") {
            linker_option.append_str(" -shared ");
        }
        else if(argv[i] === "-static") {
            linker_option.append_str(" -static ");
        }
        else if(argv[i] === "-rdynamic") {
            linker_option.append_str(" -rdynamic ");
        }
        else if(argv[i] === "-pie") {
            linker_option.append_str(" -pie ");
        }
        else if(argv[i] === "-no-pie") {
            linker_option.append_str(" -no-pie ");
        }
        else if(argv[i] === "-static-libgcc") {
            linker_option.append_str(" -static-libgcc ");
        }
        else if(argv[i] === "-static-libstdc++") {
            linker_option.append_str(" -static-libstdc++ ");
        }
        else if(argv[i] === "-nostdlib") {
            clang_option.append_str(" -nostdlib ");
            linker_option.append_str(" -nostdlib ");
        }
        else if(argv[i] === "-nostartfiles") {
            clang_option.append_str(" -nostartfiles ");
            linker_option.append_str(" -nostartfiles ");
        }
        else if(argv[i] === "-nodefaultlibs") {
            clang_option.append_str(" -nodefaultlibs ");
            linker_option.append_str(" -nodefaultlibs ");
        }
        else if(argv[i] === "-stdlib" && i+1 < argc) {
            clang_option.append_str(s" -stdlib=\{argv[i+1]} ");
            linker_option.append_str(s" -stdlib=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) >= 8 && memcmp(argv[i], "-stdlib", strlen("-stdlib")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-pthread") {
            gComePthread = true;
            cpp_option.append_str(" -pthread ");
            clang_option.append_str(" -pthread ");
            linker_option.append_str(" -pthread ");
        }
        else if(argv[i] === "-gcc") {
            gcc_compiler = true;
            CC="gcc";
        }
        else if(argv[i] === "-riscv") {
            gcc_compiler = true;
            output_object_file_flag = false;
            CC="riscv64-unknown-elf-gcc"
            cpp_option.append_format(s" -D__BARE_METAL__ -D__RISCV__ ");
            clang_option.append_str(s" -nostdlib -ffreestanding -D__RISCV__");
            gComeBareMetal = true;
        }
        else if(argv[i] === "-bare") {
            output_source_file_flag = true;
            gcc_compiler = true;
            output_object_file_flag = false;
            gComeOriginalSourcePosition = false;
            CC="gcc";
            gComeBareMetal = true;
            cpp_option.append_format(s" -D__BARE_METAL__ ");
            clang_option.append_str(s" -nostdlib -ffreestanding ");
        }
#ifndef __MINUX__
        else if(argv[i] === "-pico") {
            output_source_file_flag = true;
            output_object_file_flag = false;
            gComeOriginalSourcePosition = false;
            char* env = getenv("PICO_SDK_PATH");
            cpp_option = new buffer();
            cpp_option.append_format(s" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \{env}/src/rp2_common/hardware_sync/include \$(find \{env} -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__");
            create_pico_version_header();
            pico_cpp = true;
        }
#endif
        else if(argv[i] === "-emb") {
            output_source_file_flag = true;
            output_object_file_flag = false;
            gComeOriginalSourcePosition = false;
            emb_cpp = true;
        }
#ifndef __MINUX__
        else if(argv[i] === "-m5stack") {
            m5stack_cpp = true;
            output_source_file_flag = true;
            output_object_file_flag = false;
            gComeOriginalSourcePosition = false;
            char* env = getenv("IDF_PATH");
            cpp_option = new buffer();
            cpp_option.append_format(s" -I\{getenv("HOME")}/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\{env}/components/freertos/include -I\{env}/components/esp32/include -I\{env}/components/driver/include -I\{env}/components/lwip/include -I\{env}/components/freertos/FreeRTOS-Kernel/include -I\{env}/components/freertos/config/include/freertos -I\{env}/components/freertos/config/xtensa/include -I\{env}/components/xtensa/include -I\{env}/components/xtensa/esp32/include -I\{env}/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\{env}/components/esp_hw_support/include -I\{env}/components/soc/esp32/include/ -I\{env}/components/esp_common/include/components $(find \{env}/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\{env}/components/esp_common/include/ -I\{env}/components/soc/esp32/register/soc/ -I\{env}/components/soc/esp32/register -I\{env}/components/heap/include -I\{env}/components/hal/include -I\{env}/components/newlib/platform_include -D__M5STACK__", PREFIX);
        }
#endif
        else if(i + 1 < argc && argv[i] === "-target") {
            clang_option.append_str(s" -target \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-x" && i+1 < argc) {
            cpp_option.append_str(s" -x \{argv[i+1]} ");
            clang_option.append_str(s" -x \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-std" && i+1 < argc) {
            cpp_option.append_str(s" \{argv[i]} \{argv[i+1]} ");
            clang_option.append_str(s" \{argv[i]} \{argv[i+1]} ");
            i++;
        }
        else if(argv[i][0..4] === "-std") {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]}");
        }
        else if(i + 1 < argc && argv[i] === "-T") {
            clang_option.append_str(s" -T \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-net") {
            gComeNet = true;
        }
        else if(argv[i] === "-cg") {
            come_debug = true;
            clang_option.append_str(" -g ");
        }
        else if(argv[i] === "-cg2") {
            clang_option.append_str(" -fsanitize=address,undefined -g ");
            linker_option.append_str(" -fsanitize=address,undefined -g ");
        }
        else if(argv[i] === "-C") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-M") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-MM") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-MD" || argv[i] === "-MMD" || argv[i] === "-MP" || argv[i] === "-MG") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-MF" && i+1 < argc) {
            cpp_option.append_str(s"-MF \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-MT" && i+1 < argc) {
            cpp_option.append_str(s"-MT \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-MQ" && i+1 < argc) {
            cpp_option.append_str(s"-MQ \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-MJ" && i+1 < argc) {
            clang_option.append_str(s" -MJ \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-dM") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-dD") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-dI") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-traditional-cpp") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-trigraphs") {
            cpp_option.append_str(s"\{argv[i]} ");
            clang_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-H") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-P") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-fdirectives-only") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-frewrite-includes") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-fworking-directory" || argv[i] === "-fno-working-directory") {
            cpp_option.append_str(s"\{argv[i]} ");
            clang_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-finput-charset" && i+1 < argc) {
            cpp_option.append_str(s" -finput-charset=\{argv[i+1]} ");
            clang_option.append_str(s" -finput-charset=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-fexec-charset" && i+1 < argc) {
            cpp_option.append_str(s" -fexec-charset=\{argv[i+1]} ");
            clang_option.append_str(s" -fexec-charset=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-fwide-exec-charset" && i+1 < argc) {
            cpp_option.append_str(s" -fwide-exec-charset=\{argv[i+1]} ");
            clang_option.append_str(s" -fwide-exec-charset=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) > strlen("-finput-charset") && memcmp(argv[i], "-finput-charset", strlen("-finput-charset")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-fexec-charset") && memcmp(argv[i], "-fexec-charset", strlen("-fexec-charset")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-fwide-exec-charset") && memcmp(argv[i], "-fwide-exec-charset", strlen("-fwide-exec-charset")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-nostdinc") {
            cpp_option.append_str(s"\{argv[i]} ");
            clang_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-nostdinc++") {
            cpp_option.append_str(s"\{argv[i]} ");
            clang_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-nobuiltininc" || argv[i] === "-nostdlibinc") {
            cpp_option.append_str(s"\{argv[i]} ");
            clang_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-CC") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(strlen(argv[i]) >= 4 && memcmp(argv[i], "-Wp,", strlen("-Wp,")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-Xpreprocessor" && i+1 < argc) {
            cpp_option.append_str(s" -Xpreprocessor \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-Xassembler" && i+1 < argc) {
            clang_option.append_str(s" -Xassembler \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-Xclang" && i+1 < argc) {
            clang_option.append_str(s" -Xclang \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-mllvm" && i+1 < argc) {
            clang_option.append_str(s" -mllvm \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-resource-dir" && i+1 < argc) {
            clang_option.append_str(s" -resource-dir \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-target") {
            clang_option.append_str(s" -target \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-include") {
            cpp_option.append_str(s" -include \{argv[i+1]} ");
            clang_option.append_str(s" -include \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-include-pch") {
            cpp_option.append_str(s" -include-pch \{argv[i+1]} ");
            clang_option.append_str(s" -include-pch \{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) > strlen("-include-pch") && memcmp(argv[i], "-include-pch", strlen("-include-pch")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fpch-preprocess") {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-Winvalid-pch") {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fmodules") {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-fmodules-cache-path") {
            cpp_option.append_str(s" -fmodules-cache-path=\{argv[i+1]} ");
            clang_option.append_str(s" -fmodules-cache-path=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) > strlen("-fmodules-cache-path") && memcmp(argv[i], "-fmodules-cache-path", strlen("-fmodules-cache-path")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-fmodule-map-file") {
            cpp_option.append_str(s" -fmodule-map-file=\{argv[i+1]} ");
            clang_option.append_str(s" -fmodule-map-file=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) > strlen("-fmodule-map-file") && memcmp(argv[i], "-fmodule-map-file", strlen("-fmodule-map-file")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-fmodule-name") {
            cpp_option.append_str(s" -fmodule-name=\{argv[i+1]} ");
            clang_option.append_str(s" -fmodule-name=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) > strlen("-fmodule-name") && memcmp(argv[i], "-fmodule-name", strlen("-fmodule-name")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-imacro") {
            cpp_option.append_str(s" -imacros \{argv[i+1]} ");
            clang_option.append_str(s" -imacros \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-imacros") {
            cpp_option.append_str(s" -imacros \{argv[i+1]} ");
            clang_option.append_str(s" -imacros \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-idirafter") {
            cpp_option.append_str(s" -idirafter \{argv[i+1]} ");
            clang_option.append_str(s" -idirafter \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-isystem") {
            cpp_option.append_str(s" -isystem \{argv[i+1]} ");
            clang_option.append_str(s" -isystem \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-iquote") {
            cpp_option.append_str(s" -iquote \{argv[i+1]} ");
            clang_option.append_str(s" -iquote \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-iprefix") {
            cpp_option.append_str(s" -iprefix \{argv[i+1]} ");
            clang_option.append_str(s" -iprefix \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-iwithprefix") {
            cpp_option.append_str(s" -iwithprefix \{argv[i+1]} ");
            clang_option.append_str(s" -iwithprefix \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-iwithprefixbefore") {
            cpp_option.append_str(s" -iwithprefixbefore \{argv[i+1]} ");
            clang_option.append_str(s" -iwithprefixbefore \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-iframework") {
            cpp_option.append_str(s" -iframework \{argv[i+1]} ");
            clang_option.append_str(s" -iframework \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-F" && i+1 < argc) {
            cpp_option.append_str(s" -F\{argv[i+1]} ");
            clang_option.append_str(s" -F\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) >= 2 && memcmp(argv[i], "-F", strlen("-F")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-isysroot") {
            cpp_option.append_str(s" -isysroot \{argv[i+1]} ");
            clang_option.append_str(s" -isysroot \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-sysroot") {
            cpp_option.append_str(s" -sysroot \{argv[i+1]} ");
            clang_option.append_str(s" -sysroot \{argv[i+1]} ");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "--sysroot") {
            cpp_option.append_str(s" --sysroot=\{argv[i+1]} ");
            clang_option.append_str(s" --sysroot=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) >= 10 && memcmp(argv[i], "--sysroot", strlen("--sysroot")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-T") {
            clang_option.append_str(s" -T \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-original-position") {
            gComeOriginalSourcePosition = false;
        }
        else if(argv[i][0..2] === "-O") {
            clang_option.append_str(s" \{argv[i]} ");
            come_debug = false;
        }
        else if(argv[i] === "-D" && i+1 < argc) {
            cpp_option.append_str(s" -D\{argv[i+1]} ");
            clang_option.append_str(s" -D\{argv[i+1]} ");
            i++;
        }
        else if(argv[i][0..2] === "-D") {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-U" && i+1 < argc) {
            cpp_option.append_str(s" -U\{argv[i+1]} ");
            clang_option.append_str(s" -U\{argv[i+1]} ");
            i++;
        }
        else if(argv[i][0..2] === "-U") {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-undef") {
            cpp_option.append_str(" -undef ");
            clang_option.append_str(" -undef ");
        }
        else if(argv[i] === "-fdiagnostics-color" || argv[i] === "-fno-diagnostics-color") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= 20 && memcmp(argv[i], "-fdiagnostics-color", strlen("-fdiagnostics-color")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fcolor-diagnostics" || argv[i] === "-fno-color-diagnostics") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-pipe") {
            clang_option.append_str(" -pipe ");
        }
        else if(argv[i] === "-march" && i+1 < argc) {
            cpp_option.append_str(s" -march=\{argv[i+1]} ");
            clang_option.append_str(s" -march=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-mtune" && i+1 < argc) {
            cpp_option.append_str(s" -mtune=\{argv[i+1]} ");
            clang_option.append_str(s" -mtune=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-mcpu" && i+1 < argc) {
            cpp_option.append_str(s" -mcpu=\{argv[i+1]} ");
            clang_option.append_str(s" -mcpu=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-mabi" && i+1 < argc) {
            cpp_option.append_str(s" -mabi=\{argv[i+1]} ");
            clang_option.append_str(s" -mabi=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-mfloat-abi" && i+1 < argc) {
            cpp_option.append_str(s" -mfloat-abi=\{argv[i+1]} ");
            clang_option.append_str(s" -mfloat-abi=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-mfpu" && i+1 < argc) {
            cpp_option.append_str(s" -mfpu=\{argv[i+1]} ");
            clang_option.append_str(s" -mfpu=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-mcmodel" && i+1 < argc) {
            cpp_option.append_str(s" -mcmodel=\{argv[i+1]} ");
            clang_option.append_str(s" -mcmodel=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) >= strlen("-mabi") && memcmp(argv[i], "-mabi", strlen("-mabi")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= strlen("-mfloat-abi") && memcmp(argv[i], "-mfloat-abi", strlen("-mfloat-abi")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= strlen("-mfpu") && memcmp(argv[i], "-mfpu", strlen("-mfpu")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= strlen("-mcmodel") && memcmp(argv[i], "-mcmodel", strlen("-mcmodel")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= 2 && (memcmp(argv[i], "-march", strlen("-march")) == 0 || memcmp(argv[i], "-mtune", strlen("-mtune")) == 0 || memcmp(argv[i], "-mcpu", strlen("-mcpu")) == 0)) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-m32" || argv[i] === "-m64") {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fPIC" || argv[i] === "-fpic" || argv[i] === "-fPIE" || argv[i] === "-fpie") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fno-pic" || argv[i] === "-fno-pie") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-ffunction-sections" || argv[i] === "-fdata-sections") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= 13 && memcmp(argv[i], "-fvisibility", strlen("-fvisibility")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fno-common" || argv[i] === "-fcommon") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fwrapv" || argv[i] === "-fno-wrapv") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fstrict-aliasing" || argv[i] === "-fno-strict-aliasing") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fstack-protector" || argv[i] === "-fstack-protector-strong" || argv[i] === "-fstack-protector-all") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fno-stack-protector") {
            clang_option.append_str(" -fno-stack-protector ");
        }
        else if(strlen(argv[i]) >= 12 && memcmp(argv[i], "-fno-builtin", strlen("-fno-builtin")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-fmacro-prefix-map") {
            cpp_option.append_str(s" -fmacro-prefix-map=\{argv[i+1]} ");
            clang_option.append_str(s" -fmacro-prefix-map=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) > strlen("-fmacro-prefix-map") && memcmp(argv[i], "-fmacro-prefix-map", strlen("-fmacro-prefix-map")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-ffile-prefix-map") {
            cpp_option.append_str(s" -ffile-prefix-map=\{argv[i+1]} ");
            clang_option.append_str(s" -ffile-prefix-map=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) > strlen("-ffile-prefix-map") && memcmp(argv[i], "-ffile-prefix-map", strlen("-ffile-prefix-map")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-fdebug-prefix-map") {
            cpp_option.append_str(s" -fdebug-prefix-map=\{argv[i+1]} ");
            clang_option.append_str(s" -fdebug-prefix-map=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) > strlen("-fdebug-prefix-map") && memcmp(argv[i], "-fdebug-prefix-map", strlen("-fdebug-prefix-map")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-ftrack-macro-expansion") {
            cpp_option.append_str(s" -ftrack-macro-expansion=\{argv[i+1]} ");
            clang_option.append_str(s" -ftrack-macro-expansion=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) > strlen("-ftrack-macro-expansion") && memcmp(argv[i], "-ftrack-macro-expansion", strlen("-ftrack-macro-expansion")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-fmacro-backtrace-limit") {
            cpp_option.append_str(s" -fmacro-backtrace-limit=\{argv[i+1]} ");
            clang_option.append_str(s" -fmacro-backtrace-limit=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) > strlen("-fmacro-backtrace-limit") && memcmp(argv[i], "-fmacro-backtrace-limit", strlen("-fmacro-backtrace-limit")) == 0) {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fprofile-use" && i+1 < argc) {
            clang_option.append_str(s" -fprofile-use=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-fprofile-instr-use" && i+1 < argc) {
            clang_option.append_str(s" -fprofile-instr-use=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-fprofile-dir" && i+1 < argc) {
            clang_option.append_str(s" -fprofile-dir=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-fdebug-compilation-dir" && i+1 < argc) {
            clang_option.append_str(s" -fdebug-compilation-dir=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-serialize-diagnostics" && i+1 < argc) {
            clang_option.append_str(s" -serialize-diagnostics \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-fsanitize-blacklist" && i+1 < argc) {
            clang_option.append_str(s" -fsanitize-blacklist=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-fsanitize-ignorelist" && i+1 < argc) {
            clang_option.append_str(s" -fsanitize-ignorelist=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) > strlen("-fprofile-use") && memcmp(argv[i], "-fprofile-use", strlen("-fprofile-use")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-fprofile-instr-use") && memcmp(argv[i], "-fprofile-instr-use", strlen("-fprofile-instr-use")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-fprofile-dir") && memcmp(argv[i], "-fprofile-dir", strlen("-fprofile-dir")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-fdebug-compilation-dir") && memcmp(argv[i], "-fdebug-compilation-dir", strlen("-fdebug-compilation-dir")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-serialize-diagnostics") && memcmp(argv[i], "-serialize-diagnostics", strlen("-serialize-diagnostics")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-fsanitize-blacklist") && memcmp(argv[i], "-fsanitize-blacklist", strlen("-fsanitize-blacklist")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-fsanitize-ignorelist") && memcmp(argv[i], "-fsanitize-ignorelist", strlen("-fsanitize-ignorelist")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fno-plt") {
            clang_option.append_str(" -fno-plt ");
        }
        else if(argv[i] === "-fno-exceptions" || argv[i] === "-fno-unwind-tables" || argv[i] === "-fno-asynchronous-unwind-tables") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fuse-ld" && i+1 < argc) {
            clang_option.append_str(s" -fuse-ld=\{argv[i+1]} ");
            i++;
        }
        else if(strlen(argv[i]) >= 8 && memcmp(argv[i], "-fuse-ld", strlen("-fuse-ld")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fanalyzer") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-Xanalyzer" && i+1 < argc) {
            clang_option.append_str(s" -Xanalyzer \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-analyzer-config" && i+1 < argc) {
            clang_option.append_str(s" -analyzer-config=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-analyzer-output" && i+1 < argc) {
            clang_option.append_str(s" -analyzer-output=\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-analyzer-checker" && i+1 < argc) {
            clang_option.append_str(s" -analyzer-checker \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-analyzer-disable-checker" && i+1 < argc) {
            clang_option.append_str(s" -analyzer-disable-checker \{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-analyzer-checker-help" || argv[i] === "-analyzer-checker-help-alpha" || argv[i] === "-analyzer-checker-help-developer" || argv[i] === "-analyzer-config-help") {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-analyzer-config") && memcmp(argv[i], "-analyzer-config", strlen("-analyzer-config")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-analyzer-output") && memcmp(argv[i], "-analyzer-output", strlen("-analyzer-output")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-analyzer-checker") && memcmp(argv[i], "-analyzer-checker", strlen("-analyzer-checker")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) > strlen("-analyzer-disable-checker") && memcmp(argv[i], "-analyzer-disable-checker", strlen("-analyzer-disable-checker")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "--analyze" || argv[i] === "-analyze") {
            clang_option.append_str(s" \{argv[i]} ");
            output_object_file = true;
        }
        else if(argv[i] === "-fsyntax-only") {
            clang_option.append_str(" -fsyntax-only ");
            output_object_file = true;
        }
        else if(strlen(argv[i]) >= 10 && memcmp(argv[i], "-fsanitize", strlen("-fsanitize")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= 14 && memcmp(argv[i], "-fno-sanitize", strlen("-fno-sanitize")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= 20 && memcmp(argv[i], "-fsanitize-recover", strlen("-fsanitize-recover")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= 22 && memcmp(argv[i], "-fno-sanitize-recover", strlen("-fno-sanitize-recover")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= 13 && memcmp(argv[i], "-fsanitize-trap", strlen("-fsanitize-trap")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fprofile-arcs" || argv[i] === "-ftest-coverage" || argv[i] === "-coverage") {
            clang_option.append_str(s" \{argv[i]} ");
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fprofile-instr-generate" || argv[i] === "-fcoverage-mapping") {
            clang_option.append_str(s" \{argv[i]} ");
            linker_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= 5 && memcmp(argv[i], "-flto", strlen("-flto")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(strlen(argv[i]) >= 9 && memcmp(argv[i], "-fno-lto", strlen("-fno-lto")) == 0) {
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-fomit-frame-pointer") {
            clang_option.append_str(" -fomit-frame-pointer ");
        }
        else if(argv[i] === "-fno-omit-frame-pointer") {
            clang_option.append_str(" -fno-omit-frame-pointer ");
        }
        else if(argv[i] === "-ffast-math") {
            clang_option.append_str(" -ffast-math ");
        }
        else if(argv[i] === "-fno-fast-math") {
            clang_option.append_str(" -fno-fast-math ");
        }
        else if(argv[i] === "-g") {
            clang_option.append_str(" -g ");
        }
        else if(argv[i] === "-v") {
            clang_option.append_str(" -v ");
            cpp_option.append_str(" -v ");
            verbose = true;
        }
        else if(argv[i] === "-I" && i+1 < argc) {
            cpp_option.append_str(s" -I\{argv[i+1]} ");
            clang_option.append_str(s" -I\{argv[i+1]} ");
            i++;
        }
        else if(argv[i] === "-I-") {
            cpp_option.append_str(" -I- ");
            clang_option.append_str(" -I- ");
        }
        else if(strlen(argv[i]) >= 2 && memcmp(argv[i], "-I", strlen("-I")) == 0) {
            cpp_option.append_str(" " + argv[i] + " ");
            clang_option.append_str(" " + argv[i] + " ");
        }
        else if(argv[i] === "-gdwarf-4") {
            clang_option.append_str(" -gdwarf-4 ");
        }
        else if(argv[i] === "-S") {
            output_source_file_flag = true;
            output_object_file_flag = false;
            gComeOriginalSourcePosition = false;
        }
        else if(argv[i] === "-Sc") {
            output_source_file_flag = true;
            output_object_file_flag = true;
            gComeOriginalSourcePosition = false;
            linker_option.append_str(" -s ");
        }
        else if(argv[i] === "-s") {
            linker_option.append_str(" -s ");
        }
        else if(argv[i] === "-c") {
            output_object_file = true;
        }
        else if(argv[i] === "-E") {
            output_cpp_file = true;
        }
        else if(argv[i][0] == '-') {
            clang_option.append_str(argv[i] + " ");
        }
        else if(strlen(argv[i]) > 2 && memcmp(argv[i] + strlen(argv[i]) -2, ".o", 2) == 0) {
            object_files.push_back(string(argv[i]));
        }
        else if(strlen(argv[i]) > 2 && memcmp(argv[i] + strlen(argv[i]) -2, ".a", 2) == 0) {
            object_files.push_back(string(argv[i]));
        }
        else if(ext_name === "c") {
            files.push_back(string(argv[i]));
        }
        else {
            clang_option.append_str(argv[i] + " ");
        }
    }
    if(gcc_compiler) {
#if defined(__MAC__) || defined(__APPLE__)
        // On macOS, "gcc" is usually clang; keep __clang__ defined.
#else
        cpp_option.append_str(" -U__clang__ ");
#endif
    }
    else {
        cpp_option.append_str(" -D__clang__ ");
    }
#ifdef __MAC__ // for lldb
    output_source_file_flag = true;
    gComeOriginalSourcePosition = false;
#endif
        
    gComeDebug = come_debug;
}

int come_main(int argc, char** argv)
{
    int start_num = 1;
    string output_file_name_str = null;
    include MEvalOptions<start_num, output_file_name_str>;
    
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
        info.err_num = 0;
        info.clang_option = clang_option.to_string();
        info.cpp_option = cpp_option.to_string();
        info.linker_option = linker_option.to_string();
        info.linker_option2 = linker_option2.to_string();
        info.funcs = new map<string, sFun*%>();
        info.uniq_funcs = new map<string, sFun*%>();
        info.struct_definition = new map<string, buffer*%>();
        info.uniq_definition = new map<string, string>();
        info.previous_struct_definition = new map<string, buffer*%>();
        info.typedef_definition = new map<string, buffer*%>();
        info.reflection_vars = new map<string, string>();
        info.generics_funcs = new map<string, sGenericsFun*%>();
        info.classes = new map<string, sClass*%>();
        info.modules = new map<string, sClassModule*%>();
        info.types = new map<string, sType*%>();
        info.module = new sModule();
        info.right_value_objects = new list<sRightValueObject*%>();
        info.stack = new list<CVALUE*%>();
        info.gv_table = new sVarTable(global:true, parent:null);
        sVarTable*% lv_table = new sVarTable(global:false, parent:null);
        info.lv_table = lv_table;
        info.generics_type_names = new list<string>();
        info.method_generics_type_names = new list<string>();
        info.generics_classes = new map<string, sClass*%>();
        info.verbose = verbose;
        info.m5stack_cpp = m5stack_cpp;
        info.pico_cpp = pico_cpp;
        info.emb_cpp = emb_cpp;
        info.gcc_compiler = gcc_compiler;
        
        init_classes(&info);
        
        clear_tmp_file(&info);
        
        cpp(&info).elif {
            printf("transpile failed\n");
            exit(2);
        }
        

#ifndef __MINUX__
        info.source = xsprintf("%s.i", it).read().to_buffer();
#else
        info.source = xsprintf("%s", it).read().to_buffer();
#endif
        info.p = info.source.buf;
        info.head = info.source.buf;
        info.end = info.source.buf + info.source.len;
        
        if(output_file_name) {
            info.output_file_name = string(output_file_name);
        }
        else {
            info.output_file_name = null;
        }
        
        output_cpp_file.elif {
            transpile(&info);
            
            output_source_file(&info).elif {
                printf("output source file faield\n");
                exit(2);
            }
            
            if(info.err_num > 0) {
                printf("transpile error. err num %d\n", info->err_num);
                
                exit(2);
            }
            
            output_object_file_flag.if {
                compile(&info, output_object_file, object_files).elif {
                    printf("compile faield\n");
                    exit(27);
                }
            }
        }
        
        if(output_cpp_file){
        }
        else if(info.err_num > 0) {
        }
        else if(output_source_file_flag) {
            clear_tmp_file_without_object_file_and_ccfile(&info);
        }
        else {
            clear_tmp_file_without_object_file(&info);
        }
    }
    
    if(!output_object_file && !output_cpp_file && (files.length() > 0 || object_files.length() > 0)) {
        sInfo info;
        
        memset(&info, 0, sizeof(sInfo));
        
        info.sname = clone files[0];
        info.clang_option = clang_option.to_string();
        info.linker_option = linker_option.to_string();
        info.linker_option2 = linker_option2.to_string();
        info.verbose = verbose;
        
        if(output_file_name) {
            info.output_file_name = string(output_file_name);
        }
        else {
            info.output_file_name = null;
        }
        
        if(output_object_file_flag) {
            linker(&info, object_files).elif {
                printf("linker faield\n");
                exit(13);
            }
        }
        
        if(!output_cpp_file && !output_source_file_flag) {
            clear_tmp_file(&info);
        }
    }
    
    return 0;
}
