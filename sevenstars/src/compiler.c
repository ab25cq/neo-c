#include "common.h"
#include <signal.h>
#include <dirent.h>

void compiler_init(bool no_load_fudamental_classes)
{
    match_index = 0;
    matches = borrow new list<string>.initialize();

    if(!no_load_fudamental_classes) {
        char path[PATH_MAX];

        char* system_path = PREFIX;
        snprintf(path, PATH_MAX, "%s/share/sevenstars/sevenstars.ss", system_path);

        if(access(path, R_OK) != 0) {
            char* home_path = getenv("HOME");

            snprintf(path, PATH_MAX, "%s/.sevenstars/sevenstars.ss", home_path);

            if(access(path, R_OK) != 0) {
                snprintf(path, PATH_MAX, "sevenstars.ss");
            }
        }

        FILE* f = fopen(path, "r");

        if(f) {
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

            string source = buf.to_string();

            heap_init(HEAP_INIT_SIZE, HEAP_HANDLE_INIT_SIZE);
            var types = new vector<sCLType*%>.initialize();
            CLVALUE result;
            if(!shell_eval_str(source, "load fundamental class", false, types, &result)) {
                fprintf(stderr, "no load fundamental class\n");
            }
            heap_final();
        }
    }
}

void compiler_final()
{
    delete dummy_heap matches;
}

void clover3_init(bool no_load_fudamental_classes)
{
    class_init();
    macro_init();
    native_init();
    native_init2();
    native_init3();
    native_init4();
    native_init5();
    native_init6();
    compiler_init(no_load_fudamental_classes);
    gSigInt = 0;
}

void clover3_final()
{
    compiler_final();
    native_final();
    class_final();
    macro_final();
}

void sig_int(int signal)
{
    gSigInt = 1;
}

void sig_tstp(int signal)
{
    gSigInt = 1; 
}

void sigchld_block(int block)
{
    sigset_t sigset;

    sigemptyset(&sigset);
    sigaddset(&sigset, SIGCHLD);

    if(sigprocmask(block?SIG_BLOCK:SIG_UNBLOCK, &sigset, NULL) != 0)
    {
        fprintf(stderr, "error\n");
        exit(1);
    }
}

void sigttou_block(int block)
{
    sigset_t sigset;

    sigemptyset(&sigset);
    sigaddset(&sigset, SIGTTOU);

    if(sigprocmask(block?SIG_BLOCK:SIG_UNBLOCK, &sigset, NULL) != 0)
    {
        fprintf(stderr, "error\n");
        exit(1);
    }
}

void sig_tstp_optc(int signum, siginfo_t* info, void* ctx)
{
    sigchld_block(1);
    killpg(0, SIGSTOP);
    sigchld_block(0);
}

void sig_cont_optc(int signal, siginfo_t* info, void* data)
{
    sigchld_block(1);
    sigchld_block(0);
}

void sig_int_optc(int signal)
{
    sigchld_block(1);
    gSigInt = 1; 
    sigchld_block(0);
}

void sigchld_action(int sig, siginfo_t *info, void *ctx)
{
}

void set_signal()
{
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = sigchld_action;
    sa.sa_flags = SA_RESTART|SA_SIGINFO;
    if(sigaction(SIGCHLD, &sa, NULL) < 0) {
        perror("sigaction1");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_flags = SA_SIGINFO;
    sa.sa_handler = sig_int;
    if(sigaction(SIGINT, &sa, NULL) < 0) {
        perror("sigaction2");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    if(sigaction(SIGCONT, &sa, NULL) < 0) {
        perror("sigaction3");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_DFL;
    if(sigaction(SIGWINCH, &sa, NULL) < 0) {
        perror("sigaction4");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGTTOU, &sa, NULL) < 0) {
        perror("sigaction5");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGTTIN, &sa, NULL) < 0) {
        perror("sigaction6");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = sig_tstp;
    sa.sa_flags = 0;
    if(sigaction(SIGTSTP, &sa, NULL) < 0) {
        perror("sigaction7");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGQUIT, &sa, NULL) < 0) {
        perror("sigaction8");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGPIPE, &sa, NULL) < 0) {
        perror("sigaction10");
        exit(1);
    }
}

void set_signal_optc()
{
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = sigchld_action;
    sa.sa_flags = SA_SIGINFO|SA_RESTART;
    if(sigaction(SIGCHLD, &sa, NULL) < 0) {
        perror("sigaction1");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = sig_int_optc;
    if(sigaction(SIGINT, &sa, NULL) < 0) {
        perror("sigaction2");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = sig_tstp_optc;
    sa.sa_flags = SA_RESTART;
    if(sigaction(SIGTSTP, &sa, NULL) < 0) {
        perror("sigaction7");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = sig_cont_optc;
    sa.sa_flags = SA_RESTART;
    if(sigaction(SIGCONT, &sa, NULL) < 0) {
        perror("sigaction3");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_DFL;
    if(sigaction(SIGWINCH, &sa, NULL) < 0) {
        perror("sigaction4");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGTTOU, &sa, NULL) < 0) {
        perror("sigaction5");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGTTIN, &sa, NULL) < 0) {
        perror("sigaction6");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGQUIT, &sa, NULL) < 0) {
        perror("sigaction8");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGPIPE, &sa, NULL) < 0) {
        perror("sigaction10");
        exit(1);
    }
}

void set_signal_shell()
{
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = sigchld_action;
    sa.sa_flags = SA_RESTART|SA_SIGINFO;
    if(sigaction(SIGCHLD, &sa, NULL) < 0) {
        perror("sigaction1");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_flags = SA_SIGINFO;
    sa.sa_handler = (sig_t)sig_int_for_shell;
    if(sigaction(SIGINT, &sa, NULL) < 0) {
        perror("sigaction2");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    if(sigaction(SIGCONT, &sa, NULL) < 0) {
        perror("sigaction3");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_DFL;
    if(sigaction(SIGWINCH, &sa, NULL) < 0) {
        perror("sigaction4");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGTTOU, &sa, NULL) < 0) {
        perror("sigaction5");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGTTIN, &sa, NULL) < 0) {
        perror("sigaction6");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = sig_tstp;
    sa.sa_flags = 0;
    if(sigaction(SIGTSTP, &sa, NULL) < 0) {
        perror("sigaction7");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGQUIT, &sa, NULL) < 0) {
        perror("sigaction8");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGPIPE, &sa, NULL) < 0) {
        perror("sigaction10");
        exit(1);
    }

/*
    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_DFL;
    sa.sa_flags = SA_RESTART;
    if(sigaction(SIGSTOP, &sa, NULL) < 0) {
        perror("sigaction11");
        exit(1);
    }
*/
}


/*
void set_signal_shell()
{
    sigset_t signal_set;

    sigemptyset(&signal_set);
    sigaddset(&signal_set, SIGTTOU);
    sigaddset(&signal_set, SIGTTIN);
    sigaddset(&signal_set, SIGPIPE);

    sigprocmask(SIG_BLOCK, &signal_set, NULL);

    sigaction sa;

    memset(&sa, 0, sizeof(sa));
    sa.sa_flags = SA_SIGINFO;
    sa.sa_handler = (sig_t)sig_int_for_shell;
    if(sigaction(SIGINT, &sa, null) < 0) {
        perror("sigaction2");
        exit(1);
    }
}
*/

bool shell_eval_str(char* str, char* fname, bool output, vector<sCLType*%>* types, CLVALUE* result)
{
    gSigInt = false;
    result->mObjectValue = 0;

    sParserInfo info;
    
    memset(&info, 0, sizeof(sParserInfo));

    string str2 = null;
    if(output) {
        str2 = xsprintf("{ %s }.to_string()", str);
    }
    else {
        str2 = xsprintf("%s", str);
    }
    
    info.p = str2;
    xstrncpy(info.sname, fname, PATH_MAX);
    info.sline = 1;
    
    info.err_output_num = 0;
    
    info.err_num = 0;
    
    info.nodes = borrow new vector<sCLNode*%>.initialize();
    info.vtables = borrow new vector<sVarTable*%>.initialize();
    info.blocks = borrow new vector<sCLNodeBlock*%>.initialize();
    info.types = types;
    info.vars = borrow new vector<sVar*%>.initialize();
    
    init_var_table(&info);

    sCompileInfo cinfo;
    
    memset(&cinfo, 0, sizeof(sCompileInfo));
    
    cinfo.pinfo = &info;
    xstrncpy(cinfo.sname, info.sname, PATH_MAX);
    
    cinfo.err_num = 0;
    
    cinfo.codes = borrow new buffer.initialize();

    cinfo.in_shell = true;
    
    while(*info->p) {
        parse_comment(&info);

        int sline = info.sline;
        
        sCLNode* node = null;
        if(!expression(&node, &info)) {
            delete info.nodes;
            delete info.vtables;
            delete info.blocks;
            delete info.vars;
            delete cinfo.codes;
            return false;
        }
        
        while(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(&info);
        }
        
        cinfo.sline = sline;
        
        if(!compile(node, &cinfo)) {
            delete info.nodes;
            delete info.vtables;
            delete info.blocks;
            delete info.vars;
            delete cinfo.codes;
            return false;
        }
        
        if(cinfo.err_num > 0) {
            fprintf(stderr, "Compile error\n");
            delete info.nodes;
            delete info.vtables;
            delete info.blocks;
            delete info.vars;
            delete cinfo.codes;
            return false;
        }
        
        skip_spaces_and_lf(&info);
        
        /// POP ///
        if(*info->p) {
            for(int i=0; i<cinfo.stack_num; i++) {
                if(!cinfo.no_output) {
                    cinfo.codes.append_int(OP_POP);
                }
            }
            
            cinfo.stack_num = 0;

            cinfo.type = create_type("void", info.types);
        }
    }
    
    if(info.err_num > 0) {
        fprintf(stderr, "Parser error. The error number is %d\n", info.err_num);
        delete info.nodes;
        delete info.vtables;
        delete info.blocks;
        delete info.vars;
        delete cinfo.codes;
        return false;
    }

    int var_num = get_var_num(info.vtables);

    if(var_num > info.max_var_num) {
        info.max_var_num = var_num;
    }

    var_num = info.max_var_num;

    sVMInfo vminfo;
    
    memset(&vminfo, 0, sizeof(sVMInfo));
    
    vminfo.pinfo = &info;
    vminfo.cinfo = &cinfo;
    vminfo.stack_frames = borrow new vector<sCLStackFrame>.initialize();
    
    if(!vm(cinfo.codes, NULL, 0, var_num, result, &vminfo)) {
        fprintf(stderr, "VM error.\n");
        CLObject obj = vminfo.thrown_object.mObjectValue;
        if(obj) {
            sCLObject* object_data = CLOBJECT(obj);

            sCLType* type = object_data->mType;
            if(type_identify_with_class_name(type, "string", &info))
            {
                char* str_data = get_string_mem(obj);
                fprintf(stderr, "%s", str_data);
            }
        }

        delete info.nodes;
        delete info.vtables;
        delete info.blocks;
        delete info.vars;
        delete cinfo.codes;
        delete vminfo.stack_frames;
        return false;
    }
    
    if(output) {
        CLObject result_obj = result->mObjectValue;

        if(result_obj) {
            sCLObject* object_data = CLOBJECT(result_obj);
            
            if(type_identify_with_class_name(object_data->mType, "string", &info)) {
                char* result_str = get_string_mem(result_obj);

                if(strcmp(result_str, "") != 0) {
                    printf("=> %s\n", result_str);
                }
            }
        }
    }

    delete info.nodes;
    delete info.vtables;
    delete info.blocks;
    delete info.vars;
    delete cinfo.codes;
    delete vminfo.stack_frames;

    return true;
}


bool read_source(char* fname, buffer* source)
{
    int f = open(fname, O_RDONLY);

    if(f < 0) {
        fprintf(stderr, "%s doesn't exist(2)\n", fname);
        return false;
    }

    while(1) {
        char buf[BUFSIZ+1];
        int size = read(f, buf, BUFSIZ);

        if(size == 0) {
            break;
        }
        else if(size < 0) {
            fprintf(stderr, "unexpected error\n");
            close(f);
            return false;
        }

        buf[size] = 0;
        source.append_str(buf);

        if(size < BUFSIZ) {
            break;
        }
    }

    close(f);

    return true;
}

bool compile_script(char* fname, buffer* source)
{
    sParserInfo info;
    
    memset(&info, 0, sizeof(sParserInfo));
    
    info.p = source.buf;
    xstrncpy(info.sname, fname, PATH_MAX);
    info.sline = 1;
    
    info.err_output_num = 0;
    
    info.err_num = 0;
    
    info.nodes = borrow new vector<sCLNode*%>.initialize();
    info.vtables = borrow new vector<sVarTable*%>.initialize();
    info.blocks = borrow new vector<sCLNodeBlock*%>.initialize();
    info.types = borrow new vector<sCLType*%>.initialize();
    info.vars = borrow new vector<sVar*%>.initialize();
    
    init_var_table(&info);

    sCompileInfo cinfo;
    
    memset(&cinfo, 0, sizeof(sCompileInfo));
    
    cinfo.pinfo = &info;
    xstrncpy(cinfo.sname, info.sname, PATH_MAX);
    
    cinfo.err_num = 0;
    
    cinfo.codes = borrow new buffer.initialize();
    
    while(*info->p) {
        parse_comment(&info);

        int sline = info.sline;
        
        sCLNode* node = null;
        if(!expression(&node, &info)) {
            delete info.nodes;
            delete info.vtables;
            delete info.blocks;
            delete info.types;
            delete info.vars;
            delete cinfo.codes;
            return false;
        }
        
        while(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(&info);
        }
        
        cinfo.sline = sline;
        
        if(!compile(node, &cinfo)) {
            delete info.nodes;
            delete info.vtables;
            delete info.blocks;
            delete info.types;
            delete info.vars;
            delete cinfo.codes;
            return false;
        }
        
        if(cinfo.err_num > 0) {
            fprintf(stderr, "Compile error\n");
            delete info.nodes;
            delete info.vtables;
            delete info.blocks;
            delete info.types;
            delete info.vars;
            delete cinfo.codes;
            return false;
        }
        
        /// POP ///
        for(int i=0; i<cinfo.stack_num; i++) {
            if(!cinfo.no_output) {
                cinfo.codes.append_int(OP_POP);
            }
        }
        
        cinfo.stack_num = 0;

        cinfo.type = create_type("void", info.types);
    }
    
    if(info.err_num > 0) {
        fprintf(stderr, "Parser error. The error number is %d\n", info.err_num);
        delete info.nodes;
        delete info.vtables;
        delete info.blocks;
        delete info.types;
        delete info.vars;
        delete cinfo.codes;
        return false;
    }

    int var_num = get_var_num(info.vtables);

    if(var_num > info.max_var_num) {
        info.max_var_num = var_num;
    }

    var_num = info.max_var_num;
    
    sVMInfo vminfo;

    memset(&vminfo, 0, sizeof(sVMInfo));
    
    vminfo.pinfo = &info;
    vminfo.cinfo = &cinfo;
    vminfo.stack_frames = borrow new vector<sCLStackFrame>.initialize();

    heap_init(HEAP_INIT_SIZE, HEAP_HANDLE_INIT_SIZE);

    CLVALUE result;
    if(!vm(cinfo.codes, NULL, 0, var_num, &result, &vminfo)) {
        fprintf(stderr, "VM error.\n");
        CLObject obj = vminfo.thrown_object.mObjectValue;
        if(obj) {
            sCLObject* object_data = CLOBJECT(obj);

            sCLType* type = object_data->mType;
            if(type_identify_with_class_name(type, "string", &info))
            {
                char* str_data = get_string_mem(obj);
                fprintf(stderr, "%s", str_data);
            }
        }
        heap_final();

        delete info.nodes;
        delete info.vtables;
        delete info.blocks;
        delete info.types;
        delete info.vars;
        delete cinfo.codes;
        delete vminfo.stack_frames;
        return false;
    }

    heap_final();
    
    delete info.nodes;
    delete info.vtables;
    delete info.blocks;
    delete info.types;
    delete info.vars;
    delete cinfo.codes;
    delete vminfo.stack_frames;
    
    return true;
}

bool compiler(char* fname)
{
    if(access(fname, F_OK) != 0) {
        fprintf(stderr, "%s doesn't exist\n", fname);
        return false;
    }

    var source = new buffer.initialize();
    if(!read_source(fname, source)) {
        return false;
    }

    if(!compile_script(fname, source)) {
        return false;
    }

    return true;
}

bool compiler2(buffer* source)
{
    char* fname = "opt-c";

    if(!compile_script(fname, source)) {
        return false;
    }

    return true;
}

