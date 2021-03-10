#include "common.h"
#include <libgen.h>

BOOL gNCDebug = FALSE;
BOOL gNCDebugHeapCompiler = FALSE;

static void compiler_init()
{
    init_macro();
    init_typedef();
    parser_init();
    init_node_types();
    class_init();
    init_nodes();
    llvm_init();
    init_vtable();
}

static void compiler_final()
{
    finalize_macro();
    final_vtable();
    llvm_final();
    free_nodes();
    class_final();
    free_node_types();
    parser_final();
}

static BOOL compiler(char* fname, BOOL optimize, sVarTable* module_var_table, BOOL neo_c_header)
{
    if(access(fname, F_OK) != 0) {
        fprintf(stderr, "%s doesn't exist\n", fname);
        return FALSE;
    }
    
    sBuf source;
    sBuf_init(&source);

    char fname2[PATH_MAX];

    char* cflags = getenv("CFLAGS");

    xstrncpy(fname2, fname, PATH_MAX);
    xstrncat(fname2, ".i", PATH_MAX);

    char cmd[1024];
#ifdef __DARWIN__
    if(cflags) {
        snprintf(cmd, 1024, "clang -E %s -U__GNUC__ -I/opt/local/include %s > %s", cflags, fname, fname2);
    }
    else {
        snprintf(cmd, 1024, "clang -U__GNUC__ -I/opt/local/include -E %s.c > %s", fname, fname2);
    }
#else
    if(cflags) {
        snprintf(cmd, 1024, "cpp %s -U__GNUC__ -C %s > %s", cflags, fname, fname2);
    }
    else {
        snprintf(cmd, 1024, "cpp -U__GNUC__ -C %s > %s", fname, fname2);
    }
#endif

    int rc = system(cmd);
    if(rc != 0) {
        char cmd[1024];
        if(cflags) {
            snprintf(cmd, 1024, "cpp %s -C %s > %s", cflags, fname, fname2);
        } else {
            snprintf(cmd, 1024, "cpp -C %s > %s", fname, fname2);
        }

        rc = system(cmd);

        if(rc != 0) {
            fprintf(stderr, "failed to cpp(2)\n");
            exit(2);
        }
    }

    if(!read_source(fname2, &source)) {
        free(source.mBuf);
        return FALSE;
    }

    sBuf source2;
    sBuf_init(&source2);

    if(!delete_comment(&source, &source2)) {
        free(source.mBuf);
        free(source2.mBuf);
        return FALSE;
    }

    if(!compile_source(fname, source2.mBuf, optimize, module_var_table)) 
    {
        free(source.mBuf);
        free(source2.mBuf);
        return FALSE;
    }

    free(source.mBuf);
    free(source2.mBuf);

    return TRUE;
}

int gARGC;
char** gARGV;
char* gVersion = "2.0.0";

char gMainModulePath[PATH_MAX];

int main(int argc, char** argv)
{
    gARGC = argc;
    gARGV = argv;

    char sname[PATH_MAX];
    sname[0] = '\0';

    BOOL output_object_file = FALSE;
    BOOL optimize = FALSE;

    char throw_to_cflags[1024*2*2];
    throw_to_cflags[0] = '\0';

    const int max_c_include_path = 1024*2*2*2;
    char c_include_path[max_c_include_path];
    snprintf(c_include_path, max_c_include_path, "%s/include/", PREFIX);

    char program_name[PATH_MAX];
    program_name[0] = '\0';

    char throw_to_cpp_flags[1024];

    throw_to_cpp_flags[0] = '\0';

    int i;
    for(i=1; i<argc; i++) {
        if(strcmp(argv[i], "--version") == 0 || strcmp(argv[i], "-version") == 0 || strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "-V") == 0)
        {
            printf("neo-c version %s\n", gVersion);
            exit(0);
        }
        else if(strcmp(argv[i], "-c") == 0)
        {
            output_object_file = TRUE;
        }
        else if(strcmp(argv[i], "-O") == 0 || strcmp(argv[i], "-O1") == 0|| strcmp(argv[i], "-O2") == 0|| strcmp(argv[i], "-O3") == 0|| strcmp(argv[i], "-O4") == 0)
        {
            optimize = TRUE;
        }
        else if(strcmp(argv[i], "-g") == 0)
        {
            gNCDebug = TRUE;
        }
        else if(strstr(argv[i], "-D") == argv[i])
        {
            char* p = argv[i];
            while(*p) {
                if(*p == '"') {
                    xstrncat(throw_to_cpp_flags, "\\\"", 1024);
                    p++;
                }
                else {
                    char str[16];
                    str[0] = *p;
                    str[1] = '\0';
                    xstrncat(throw_to_cpp_flags, str, 1024);
                    p++;
                }
            }
            xstrncat(throw_to_cpp_flags, " ", 1024);
        }
        else if(strcmp(argv[i], "-gm") == 0)
        {
            gNCDebugHeapCompiler = TRUE;
        }
        else if(strstr(argv[i], "-I") == argv[i])
        {
            xstrncat(c_include_path, ":", max_c_include_path);
            xstrncat(c_include_path, argv[i]+2, max_c_include_path);
        }
        else if(strcmp(argv[i], "-I") == 0)
        {
            if(i + 1 < argc) {
                xstrncat(c_include_path, ":", max_c_include_path);
                xstrncat(c_include_path, argv[i+1], max_c_include_path);
                i++;
            }
        }
        else if(strcmp(argv[i], "-L") == 0) {
            if(i+1 < argc) {
                xstrncat(throw_to_cflags, "-L ", 1024*2*2);
                xstrncat(throw_to_cflags, argv[i+1], 1024*2*2);
                xstrncat(throw_to_cflags, " ", 1024*2*2);
                i++;
            }
            else {
                xstrncat(throw_to_cflags, "-L ", 1024*2*2);
            }
        }
        else if(strcmp(argv[i], "-o") == 0)
        {
            if(i + 1 < argc) {
                xstrncpy(program_name, argv[i+1], PATH_MAX);
                i++;
            }
        }
        else if(*argv[i] != '-' && sname[0] == '\0') {
            xstrncpy(sname, argv[i], PATH_MAX);
        }
        else {
            xstrncat(throw_to_cflags, argv[i], 1024*2*2);
            xstrncat(throw_to_cflags, " ", 1024*2*2);
        }
    }
    
    if(throw_to_cpp_flags[0] != '\0') {
        setenv("CFLAGS", throw_to_cpp_flags, 1);
    }

    setenv("C_INCLUDE_PATH", c_include_path, 1);

    char* p = sname + strlen(sname);

    while(p >= sname) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }

    if(p < sname) {
        fprintf(stderr, "Require extention name\n");
        exit(2);
    }

    char main_module_name[PATH_MAX];
    memcpy(main_module_name, sname, p-sname);
    main_module_name[p-sname] = '\0';

    xstrncpy(gMainModulePath, main_module_name, PATH_MAX);

    if(strcmp(program_name, "") == 0) {
        xstrncpy(program_name, main_module_name, PATH_MAX);
    }

    char ext_name[PATH_MAX];
    xstrncpy(ext_name, p+1, PATH_MAX);

    compiler_init();

    sVarTable* module_var_table = init_var_table();

    start_to_make_native_code(sname);

    if(!compiler(sname, optimize, module_var_table, FALSE))
    {
        fprintf(stderr, "neo-c can't compile(2) %s\n", sname);
        compiler_final();
        return 1;
    }

    output_native_code(sname, optimize, throw_to_cflags);

    int result = 0;
    if(output_object_file) {
        char command[4096*2];

        snprintf(command, 4096*2, "clang -o %s.o -c %s.ll %s", program_name, sname, throw_to_cflags);
        puts(command);

        int rc = system(command);
        if(rc != 0) {
            fprintf(stderr, "failed to compile(3)\n");
            exit(2);
        }

        result = WEXITSTATUS(rc);
    }
    else {
        char command[4096*2];

        snprintf(command, 4096*2, "clang %s -o %s %s.ll -lpcre -lneo-c", throw_to_cflags, program_name, sname);
        puts(command);

        int rc = system(command);
        if(rc != 0) {
            fprintf(stderr, "failed to compile(3)\n");
            exit(2);
        }

        result = WEXITSTATUS(rc);
    }

    compiler_final();

    return result;
}
