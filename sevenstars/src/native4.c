#include "common.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

bool system_getenv(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject name = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.getenv");
        return false;
    }
    if(!check_type(name, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.getenv");
        return false;
    }

    /// sevenstars to neo-c
    char* name_value = get_string_mem(name);

    /// go ///
    char* str = getenv(name_value);
    
    if(str == null) {
        str = "";
    }

    CLObject new_obj = create_string_object(str, info);

    (*stack_ptr).mObjectValue = new_obj;
    (*stack_ptr)++;
    
    return true;
}

bool system_setenv(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject name = (*stack_ptr-2)->mObjectValue;
    CLObject value = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.setenv");
        return false;
    }
    if(!check_type(name, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.setenv");
        return false;
    }
    if(!check_type(value, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.setenv");
        return false;
    }

    /// sevenstars to neo-c
    char* name_value = get_string_mem(name);
    char* value_value = get_string_mem(value);

    /// go ///
    if(setenv(name_value, value_value, 1) < 0) {
        return false;
    }
    
    return true;
}

bool system_cd(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject path = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.cd");
        return false;
    }
    if(!check_type(path, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.cd");
        return false;
    }

    /// sevenstars to neo-c
    char* path_value = get_string_mem(path);

    /// go ///
    if(path_value[0] == '/') {
        string path = string(path_value);

        if(chdir(path) < 0) {
            vm_err_msg(stack_ptr, info, "chdir is failed");
            return false;
        }
        setenv("PWD", path, 1);
    }
    else if(strcmp(path_value, "") == 0) {
        string path = xrealpath(string(getenv("HOME")));

        if(chdir(path) < 0) {
            vm_err_msg(stack_ptr, info, "chdir is failed");
            return false;
        }
        setenv("PWD", path, 1);
    }
    else {
        string path = xrealpath(string(getenv("PWD")) + string("/") + string(path_value));

        if(chdir(path) < 0) {
            vm_err_msg(stack_ptr, info, "chdir is failed");
            return false;
        }
        setenv("PWD", path, 1);
    }
    
    return true;
}

bool eval_str(char* str, char* fname, CLVALUE* result_value, sVMInfo* parent_vminfo)
{
    sParserInfo info;
    
    memset(&info, 0, sizeof(sParserInfo));
    
    info.p = str;
    xstrncpy(info.sname, fname, PATH_MAX);
    info.sline = 1;
    
    info.err_output_num = 0;
    
    info.err_num = 0;
    
    info.nodes = borrow new vector<sCLNode*%>.initialize();
    info.vtables = borrow new vector<sVarTable*%>.initialize();
    info.blocks = borrow new vector<sCLNodeBlock*%>.initialize();
    info.types = parent_vminfo.cinfo.pinfo.types;
    info.vars = borrow new vector<sVar*%>.initialize();
    
    init_var_table(&info);

    sCompileInfo cinfo;
    
    memset(&cinfo, 0, sizeof(sCompileInfo));
    
    cinfo.pinfo = &info;
    xstrncpy(cinfo.sname, info.sname, PATH_MAX);
    
    cinfo.err_num = 0;
    
    cinfo.codes = borrow new buffer.initialize();

    cinfo.in_shell = false;
    
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
        
        if(*info->p) {
            /// POP ///
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
    
    if(!vm(cinfo.codes, NULL, 0, var_num, result_value, &vminfo)) {
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

    delete info.nodes;
    delete info.vtables;
    delete info.blocks;
    delete info.vars;
    delete cinfo.codes;
    delete vminfo.stack_frames;

    return true;
}

bool system_eval(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject cmd = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.eval");
        return false;
    }
    if(!check_type(cmd, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.eval");
        return false;
    }

    /// sevenstars to neo-c
    char* cmd_value = get_string_mem(cmd);

    /// go ///
    CLVALUE result_value;
    if(!eval_str(cmd_value, "eval", &result_value, info)) {
        vm_err_msg(stack_ptr, info, xsprintf("eval str"));
        return false;
    }

    (*stack_ptr).mObjectValue = result_value.mObjectValue;
    (*stack_ptr)++;
    
    return true;
}

void jobs(sVMInfo* info)
{
    gJobs.each {
        sCLJob* job_data = CLJOB(it);

        char title[JOB_TITLE_MAX];

        xstrncpy(title, job_data->mTitle, JOB_TITLE_MAX);

        printf("job %d %s\n", it2, title);
    }
}

bool system_jobs(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.jobs");
        return false;
    }

    jobs(info);
    
    return true;
}

bool forground_job(int job_num)
{
    CLObject job_object = gJobs.item(job_num, -1);

    if(job_object != -1) {
        sCLJob* job_data = CLJOB(job_object);

        char title[JOB_TITLE_MAX];
        xstrncpy(title, job_data.mTitle, JOB_TITLE_MAX);

        termios* tinfo = job_data.mTermInfo;
        pid_t pgrp = job_data.mPGrp;

        termios tinfo2;
        if(tcgetattr(0, &tinfo2) < 0) {
            return false;
        }

        tcsetattr(0, TCSANOW, tinfo);
        if(tcsetpgrp(0, pgrp) < 0) {
            return false;
        }

        if(kill(pgrp, SIGCONT) < 0) {
            return false;
        }

        int status = 0;
        pid_t pid2 = waitpid(pgrp, &status, WUNTRACED);

        if(WIFSTOPPED(status)) {
            tcsetattr(0, TCSANOW, &tinfo2);
            tcsetpgrp(0, getpid());
        }
        else if(WIFSIGNALED(status)) {
            gJobs.replace(job_num, 9999);
            printf("Job<%s> is done.\n", title);

            tcsetattr(0, TCSANOW, &tinfo2);
            tcsetpgrp(0, getpid());
        }
        else {
            gJobs.delete(job_num);

            tcsetattr(0, TCSANOW, &tinfo2);
            tcsetpgrp(0, getpid());
        }
    }

    return true;
}

bool system_fg(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject job_num = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.fg");
        return false;
    }
    if(!check_type(job_num, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.fg");
        return false;
    }

    /// sevenstars to neo-c ///
    char* job_num_value = get_string_mem(job_num);

    if(!forground_job(atoi(job_num_value))) {
        return false;
    }
    
    return true;
}

bool system_exit(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject exit_code = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.exit");
        return false;
    }
    if(!check_type(exit_code, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.exit");
        return false;
    }

    /// sevenstars to neo-c ///
    int exit_code_value = get_int_value(exit_code);

    exit(exit_code_value);
    
    return true;
}

bool system_save_class(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject klass_name = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "system", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.save_class");
        return false;
    }
    if(!check_type(klass_name, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on system.save_class");
        return false;
    }

    /// sevenstars to neo-c ///
    char* klass_name_value = get_string_mem(klass_name);

    /// go ///
    sCLClass* klass = gClasses.at(klass_name_value, null);

    if(klass) {
        printf("saving %s class...", klass_name_value);
        if(!save_class(klass)) {
            puts("error");
        }
        else {
            puts("ok");
        }
    }
    
    return true;
}

void native_init4()
{
    gNativeMethods.insert(string("system.getenv"), system_getenv);
    gNativeMethods.insert(string("system.setenv"), system_setenv);
    gNativeMethods.insert(string("system.cd"), system_cd);
    gNativeMethods.insert(string("system.eval"), system_eval);
    gNativeMethods.insert(string("system.jobs"), system_jobs);
    gNativeMethods.insert(string("system.fg"), system_fg);
    gNativeMethods.insert(string("system.exit"), system_exit);
    gNativeMethods.insert(string("system.save_class"), system_save_class);
}
