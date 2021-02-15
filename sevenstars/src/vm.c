#include "common.h"
#include <assert.h>
#include <sys/types.h>
#include <sys/wait.h>

int gSigInt;

void vm_err_msg(CLVALUE** stack_ptr, sVMInfo* info, char* msg)
{
    char buf[128];
    snprintf(buf, 128, "%s %d: %s", info.sname, info.sline, msg);

    CLObject obj = create_string_object(buf, info);

    (*stack_ptr).mObjectValue = obj;
    (*stack_ptr)++;

    info->thrown_object.mObjectValue = obj;
}

void show_contents(sCLObject* object_data, CLObject obj)
{
    if(object_data->mType.mClass == gClasses.at("int", null)) {
        sCLInt* object_data2 = (sCLInt*)object_data;
        
        printf("value %d ", object_data2->mValue);
    }
    else if(object_data->mType.mClass == gClasses.at("bool", null)) {
        sCLInt* object_data2 = (sCLInt*)object_data;
        
        printf("value %d ", object_data2->mValue);
    }
    else if(object_data->mType.mClass == gClasses.at("string", null)) {
        char* value = get_string_mem(obj);
        
        printf("value %s ", value);
    }
}

void print_stack(CLVALUE* stack, CLVALUE* stack_ptr, int var_num)
{
    CLVALUE* p = stack;
    
    while(p < stack_ptr) {
        int index = (p-stack) / sizeof(CLVALUE);
        
        if(index < var_num) {
            fprintf(stderr, "v[%d] %d ", index, p.mObjectValue);
            if(p.mObjectValue) {
                sCLObject* object_data = CLOBJECT(p.mObjectValue);
                show_contents(object_data, p.mObjectValue);
                show_type(object_data->mType);
            }
            else {
                puts("");
            }
        }
        else {
            fprintf(stderr, " [%d] %d ", index, p.mObjectValue);
            if(p.mObjectValue) {
                sCLObject* object_data = CLOBJECT(p.mObjectValue);
                show_contents(object_data, p.mObjectValue);
                show_type(object_data->mType);
            }
            else {
                puts("");
            }
        }
        
        p++;
    }
}

void print_method(sCLClass* klass, sCLMethod* method, int num_params, int var_num)
{
    printf("invoke method %s.%s num_params %d var_num %d\n", klass.mName, method.mName, num_params, var_num);
}

void print_method_end(sCLClass* klass, sCLMethod* method, CLVALUE result)
{
    printf("invoked method %s.%s result %d\n", klass.mName, method.mName, result.mObjectValue);
}

void print_block(int num_params, int var_num)
{
    printf("invoke block num_params %d var_num %d\n", num_params, var_num);
}

void print_block_end(CLVALUE result)
{
    printf("invoked block result %d\n", result.mObjectValue);
}

void print_op(int op, FILE* f)
{
    switch(op) {
        case OP_ANDAND:
            fprintf(f, "OP_ANDAND\n");
            break;

        case OP_OROR: 
            fprintf(f, "OP_OROR\n");
            break;

        case OP_NOTEQ: 
            fprintf(f, "OP_NOTEQ\n");
            break;

        case OP_EQ: 
            fprintf(f, "OP_EQ\n");
            break;
            
        case OP_POP:
            fprintf(f, "OP_POP\n");
            break;

        case OP_THROW:
            fprintf(f, "OP_THROW\n");
            break;

        case OP_LIST_VALUE:
            fprintf(f, "OP_LIST_VALUE\n");
            break;

        case OP_RETURN:
            fprintf(f, "OP_RETURN\n");
            break;
            
        case OP_INT_VALUE:
            fprintf(f, "OP_INT_VALUE\n");
            break;
            
        case OP_STRING_VALUE:
            fprintf(f, "OP_STRING_VALUE\n");
            break;

        case OP_REGEX_VALUE:
            fprintf(f, "OP_REGEX_VALUE\n");
            break;

        case OP_LIST_VALUE:
            fprintf(f, "OP_LIST_VALUE\n");
            break;
            
        case OP_IADD:
            fprintf(f, "OP_IADD\n");
            break;

        case OP_ISUB:
            fprintf(f, "OP_ISUB\n");
            break;
            
        case OP_IMULT:
            fprintf(f, "OP_IMULT\n");
            break;

        case OP_IDIV:
            fprintf(f, "OP_IDIV\n");
            break;

        case OP_STORE_VARIABLE:
            fprintf(f, "OP_STORE_VARIABLE\n");
            break;
            
        case OP_LOAD_VARIABLE:
            fprintf(f, "OP_LOAD_VARIABLE\n");
            break;

        case OP_TRY: 
            fprintf(f, "OP_TRY\n");
            break;

        case OP_IEQ:
            fprintf(f, "OP_IEQ\n");
            break;
            
        case OP_INOTEQ:
            fprintf(f, "OP_INOTEQ\n");
            break;

        case OP_ILT:
            fprintf(f, "OP_ILT\n");
            break;
            
        case OP_IGT:
            fprintf(f, "OP_IGT\n");
            break;

        case OP_ILE:
            fprintf(f, "OP_ILE\n");
            break;
            
        case OP_IGE:
            fprintf(f, "OP_IGE\n");
            break;
                
        case OP_COND_JUMP: 
            fprintf(f, "OP_COND_JUMP\n");
            break;

        case OP_COND_NOT_JUMP: 
            fprintf(f, "OP_COND_NOT_JUMP\n");
            break;

        case OP_GOTO: 
            fprintf(f, "OP_GOTO\n");
            break;

        case OP_CREATE_OBJECT: 
            fprintf(f, "OP_CREATE_OBJECT\n");
            break;

        case OP_INVOKE_METHOD: 
            fprintf(f, "OP_INVOKE_METHOD\n");
            break;

        case OP_TRUE_VALUE: 
            fprintf(f, "OP_TRUE_VALUE\n");
            break;

        case OP_FALSE_VALUE: 
            fprintf(f, "OP_FALSE_VALUE\n");
            break;

        case OP_CREATE_BLOCK_OBJECT:
            fprintf(f, "OP_CREATE_BLOCK_OBJECT\n");
            break;

        case OP_INVOKE_BLOCK_OBJECT:
            fprintf(f, "OP_INVOKE_BLOCK_OBJECT\n");
            break;

        case OP_STORE_FIELD: 
            fprintf(f, "OP_STORE_FIELD\n");
            break;

        case OP_LOAD_FIELD: 
            fprintf(f, "OP_LOAD_FIELD\n");
            break;

        case OP_NULL_VALUE: 
            fprintf(f, "OP_NULL_VALUE\n");
            break;

        case OP_COMMAND_VALUE: 
            fprintf(f, "OP_COMMAND_VALUE\n");
            break;

        case OP_SYSTEM_VALUE: 
            fprintf(f, "OP_SYSTEM_VALUE\n");
            break;

        case OP_LOGICAL_DENIAL:
            fprintf(f, "OP_LOGICAL_DENIAL\n");
            break;

        default:
            fprintf(f,"OP %d\n", op);
            break;
    }
}

bool invoke_command_with_control_terminal(char* name, char** argv, int num_params, CLVALUE** stack_ptr, sVMInfo* info)
{
    pid_t pid = fork();
    
    if(pid == 0) {
        pid = getpid();

        setpgid(0, 0);
        tcsetpgrp(0, pid);

        if(execvp(name, argv) < 0) {
           exit(64);
        }

        exit(0);
    }

    setpgid(pid, pid);
    tcsetpgrp(0, pid);

    int status = 0;

    pid_t pid2 = waitpid(pid, &status, WUNTRACED);

    if(WEXITSTATUS(status) == 64) {
        setpgid(getpid(), getpid());
        tcsetpgrp(0, getpid());

        vm_err_msg(stack_ptr, info, xsprintf("command not found(%s)\n", name));
        return false;
    }

    if(WIFSTOPPED(status)) {
        int rcode = WSTOPSIG(status) +128;

        char title[JOB_TITLE_MAX];
        xstrncpy(title, name, JOB_TITLE_MAX);

        for(int i=1; i<num_params; i++) {
            xstrncat(title, " ", JOB_TITLE_MAX);
            xstrncat(title, argv[i], JOB_TITLE_MAX);
        }

        termios tinfo;
        if(tcgetattr(0, &tinfo) < 0) {
            return false;
        }

        int pgrp = pid;

        CLObject job = create_job_object(title, &tinfo, pgrp, info);

        gJobs.push_back(job);

        setpgid(getpid(), getpid());
        tcsetpgrp(0, getpid());

        int rcode2 = WEXITSTATUS(status);

        (*stack_ptr) -= num_params;

        (*stack_ptr)->mObjectValue = create_command_object("", 1, "", 1, rcode2, false, info);
        (*stack_ptr)++;
    }
    else if(WIFSIGNALED(status)) {
        gSigInt = 1;

        setpgid(getpid(), getpid());
        tcsetpgrp(0, getpid());

        int rcode = WEXITSTATUS(status);

        (*stack_ptr) -= num_params;

        (*stack_ptr)->mObjectValue = create_command_object("", 1, "", 1, rcode, false, info);
        (*stack_ptr)++;
    }
    else {
        setpgid(getpid(), getpid());
        tcsetpgrp(0, getpid());

        int rcode = WEXITSTATUS(status);

        (*stack_ptr) -= num_params;

        (*stack_ptr)->mObjectValue = create_command_object("", 1, "", 1, rcode, false, info);
        (*stack_ptr)++;
    }

    return true;
}

bool invoke_command(char* name, char** argv, CLVALUE** stack_ptr, int num_params, sVMInfo* info)
{
    int child2parent_write_fd = 0;
    int child2parent_read_fd = 0;
    int parent2child_write_fd = 0;
    int parent2child_read_fd = 0;
    int child2parent_read_fd_err = 0;
    int child2parent_write_fd_err = 0;

    int pipes[2];

    pipe(pipes);
    child2parent_read_fd = pipes[0];
    child2parent_write_fd = pipes[1];
    pipe(pipes);
    parent2child_read_fd = pipes[0];
    parent2child_write_fd = pipes[1];
    pipe(pipes);
    child2parent_read_fd_err = pipes[0];
    child2parent_write_fd_err = pipes[1];

    pid_t pid = fork();
    
    if(pid == 0) {
        close(parent2child_write_fd);
        close(child2parent_read_fd);
        close(child2parent_read_fd_err);

        dup2(parent2child_read_fd, 0);
        dup2(child2parent_write_fd, 1);
        dup2(child2parent_write_fd_err, 2);

        close(parent2child_read_fd);
        close(child2parent_write_fd);
        close(child2parent_write_fd_err);

        if(execvp(name, argv) < 0) {
            exit(64);
        }

        exit(2);
    }

    close(parent2child_read_fd);
    close(child2parent_write_fd);
    close(child2parent_write_fd_err);
    close(parent2child_write_fd);

    buffer*% child_output = new buffer.initialize();
    buffer*% child_output_error = new buffer.initialize();
    
    while(true) {
        char pipe_data[128];
        int readed_byte = read(child2parent_read_fd, pipe_data, 128);

        char pipe_data_err[128];
        int readed_byte_err = read(child2parent_read_fd_err, pipe_data_err, 128);

        if(readed_byte <= 0 && readed_byte_err <= 0) {
            break;
        }

        if(readed_byte >= 0) {
            child_output.append(pipe_data, readed_byte);
        }
        if(readed_byte_err >= 0) {
            child_output_error.append(pipe_data_err, readed_byte_err);
        }
    }

    close(child2parent_read_fd);
    close(child2parent_read_fd_err);

    int status = 0;

    pid_t pid2 = waitpid(pid, &status, WUNTRACED);

    if(WEXITSTATUS(status) == 64) {
        vm_err_msg(stack_ptr, info, xsprintf("command not found(%s)\n", name));
        return false;
    }

    (*stack_ptr) -= num_params;

    int rcode = WEXITSTATUS(status);

    (*stack_ptr)->mObjectValue = create_command_object(child_output.buf, child_output.len, child_output_error.buf, child_output_error.len, rcode, false, info);
    (*stack_ptr)++;

    if(WIFSIGNALED(status)) {
        gSigInt = 1;
    }

    return true;
}

bool invoke_command_with_control_terminal_and_pipe(CLObject parent_obj, char* name, char** argv, int num_params, CLVALUE** stack_ptr, sVMInfo* info)
{
    int parent2child_write_fd = 0;
    int parent2child_read_fd = 0;

    int pipes[2];

    if(pipe(pipes) < 0) {
        return false;
    }

    parent2child_read_fd = pipes[0];
    parent2child_write_fd = pipes[1];

    pid_t pid = fork() 
    
    if(pid == 0) {
        close(parent2child_write_fd);

        pid_t pid = getpid();

        setpgid(0, 0);
        tcsetpgrp(0, pid);

        if(dup2(parent2child_read_fd, 0) < 0) {
            fprintf(stderr, "dup2 error\n");
            exit(1);
        }
        close(parent2child_read_fd);

        if(execvp(name, argv) < 0) {
            exit(64);
        }

        exit(0);
    }

    setpgid(pid, pid);
    tcsetpgrp(0, pid);

    close(parent2child_read_fd);
    
    CLObject obj = (*stack_ptr-num_params)->mObjectValue;
    sCLCommand* command_data = CLCOMMAND(obj);

    if(write(parent2child_write_fd, command_data->mOutput, command_data->mOutputLen) < 0) {
        return false;
    }
    close(parent2child_write_fd);

    int status = 0;

    pid_t pid2 = waitpid(pid, &status, WUNTRACED);

    if(WEXITSTATUS(status) == 64) {
        setpgid(getpid(), getpid());
        tcsetpgrp(0, getpid());

        vm_err_msg(stack_ptr, info, xsprintf("command not found(%s)\n", name));
        return false;
    }

    if(WIFSTOPPED(status)) {
        int rcode = WSTOPSIG(status) +128;

        char title[JOB_TITLE_MAX];
        xstrncpy(title, name, JOB_TITLE_MAX);

        for(int i=1; i<num_params; i++) {
            xstrncat(title, " ", JOB_TITLE_MAX);
            xstrncat(title, argv[i], JOB_TITLE_MAX);
        }

        termios tinfo;
        if(tcgetattr(0, &tinfo) < 0) {
            return false;
        }

        int pgrp = pid;

        CLObject job = create_job_object(title, &tinfo, pgrp, info);

        gJobs.push_back(job);

        setpgid(getpid(), getpid());
        tcsetpgrp(0, getpid());

        int rcode2 = WEXITSTATUS(status);

        (*stack_ptr) -= num_params;

        (*stack_ptr)->mObjectValue = create_command_object("", 1, "", 1, rcode2, false, info);
        (*stack_ptr)++;
    }
    else if(WIFSIGNALED(status)) {
        gSigInt = 1;

        setpgid(getpid(), getpid());
        tcsetpgrp(0, getpid());

        int rcode = WEXITSTATUS(status);

        (*stack_ptr) -= num_params;

        (*stack_ptr)->mObjectValue = create_command_object("", 1, "", 1, rcode, false, info);
        (*stack_ptr)++;
    }
    else {
        setpgid(getpid(), getpid());
        tcsetpgrp(0, getpid());

        int rcode = WEXITSTATUS(status);

        (*stack_ptr) -= num_params;

        (*stack_ptr)->mObjectValue = create_command_object("", 1, "", 1, rcode, false, info);
        (*stack_ptr)++;
    }

    return true;
}

bool invoke_command_with_pipe(CLObject parent_obj, char* name, char** argv, CLVALUE** stack_ptr, int num_params, sVMInfo* info)
{
    int child2parent_write_fd = 0;
    int child2parent_read_fd = 0;
    int parent2child_write_fd = 0;
    int parent2child_read_fd = 0;
    int child2parent_read_fd_err = 0;
    int child2parent_write_fd_err = 0;

    int pipes[2];

    pipe(pipes);
    child2parent_read_fd = pipes[0];
    child2parent_write_fd = pipes[1];
    pipe(pipes);
    parent2child_read_fd = pipes[0];
    parent2child_write_fd = pipes[1];
    pipe(pipes);
    child2parent_read_fd_err = pipes[0];
    child2parent_write_fd_err = pipes[1];

    pid_t pid = fork();
    
    if(pid == 0) {
        close(parent2child_write_fd);
        close(child2parent_read_fd);
        close(child2parent_read_fd_err);

        dup2(parent2child_read_fd, 0);
        dup2(child2parent_write_fd, 1);
        dup2(child2parent_write_fd_err, 2);

        close(parent2child_read_fd);
        close(child2parent_write_fd);
        close(child2parent_write_fd_err);

        if(execvp(name, argv) < 0) {
            exit(64);
        }

        exit(2);
    }

    close(parent2child_read_fd);
    close(child2parent_write_fd);
    close(child2parent_write_fd_err);

    CLObject obj = (*stack_ptr-num_params)->mObjectValue;
    sCLCommand* command_data = CLCOMMAND(obj);

    if(write(parent2child_write_fd, command_data->mOutput, command_data->mOutputLen) < 0) {
        return false;
    }
    close(parent2child_write_fd);

    buffer*% child_output = new buffer.initialize();
    buffer*% child_output_error = new buffer.initialize();
    
    while(true) {
        char pipe_data[128];
        int readed_byte = read(child2parent_read_fd, pipe_data, 128);

        char pipe_data_err[128];
        int readed_byte_err = read(child2parent_read_fd_err, pipe_data_err, 128);

        if(readed_byte <= 0 && readed_byte_err <= 0) {
            break;
        }

        if(readed_byte >= 0) {
            child_output.append(pipe_data, readed_byte);
        }
        if(readed_byte_err >= 0) {
            child_output_error.append(pipe_data_err, readed_byte_err);
        }
    }

    close(child2parent_read_fd);
    close(child2parent_read_fd_err);

    int status = 0;

    pid_t pid2 = waitpid(pid, &status, WUNTRACED);

    if(WEXITSTATUS(status) == 64) {
        vm_err_msg(stack_ptr, info, xsprintf("command not found(%s)\n", name));
        return false;
    }

    (*stack_ptr) -= num_params;

    int rcode = WEXITSTATUS(status);
    (*stack_ptr)->mObjectValue = create_command_object(child_output.buf, child_output.len, child_output_error.buf, child_output_error.len, rcode, false, info);
    (*stack_ptr)++;

    if(WIFSIGNALED(status)) {
        gSigInt = 1;
    }

    return true;
}

bool param_check(sCLParam* method_params, int num_params, CLVALUE* stack_ptr, sCLType * generics_types, sVMInfo* info)
{
    for(int i=0; i<num_params; i++) {
        CLObject obj = (stack_ptr-num_params+i)->mObjectValue;

        sCLObject* object_data = CLOBJECT(obj);

        sCLType* stack_param = object_data->mType;

        sCLParam* param = method_params + i;
        sCLType* type = solve_generics(param->mType, generics_types, info.cinfo.pinfo);

        if(!substitution_posibility(type, stack_param)) {
            return false;
        }
    }

    return true;
}

void ready_for_vm_stack(CLVALUE* stack, CLVALUE* parent_stack_ptr, int num_params, int var_num, sVMInfo* info)
{
    if(num_params > 0) {
        for(int i=0; i<num_params; i++) {
            stack[i] = parent_stack_ptr[i-num_params];
        }

        if(info->thrown_object.mObjectValue) {
            stack[0] = info->thrown_object;
        }
    }
}

bool invoke_block(int block_object, int result_existance, int num_params, CLVALUE** stack_ptr, sVMInfo* info)
{
    sCLBlock* block_data = CLBLOCK(block_object);

    int* codes = block_data->codes;
    int codes_len = block_data->codes_len;
    int var_num = block_data->var_num;

    buffer*% buffer = new buffer.initialize();

    buffer.append((char*)codes, codes_len);

    CLVALUE result;
    if(!vm(buffer, *stack_ptr, num_params, var_num, &result, info)) {
        return false;
    }

    (*stack_ptr) -= num_params + 1;

    if(result_existance) {
        (*stack_ptr)->mObjectValue = result.mObjectValue;
        (*stack_ptr)++;
    }
    else {
        (*stack_ptr)->mObjectValue = create_null_object(info);
        (*stack_ptr)++;
    }

    return true;
}

bool vm(buffer* codes, CLVALUE* parent_stack_ptr, int num_params, int var_num, CLVALUE* result, sVMInfo* info)
{
    sCLStackFrame null_parent_stack_frame;
    memset(&null_parent_stack_frame, 0, sizeof(sCLStackFrame));

    CLVALUE stack[VM_STACK_MAX];
    sCLStackFrame stack_frame;

    memset(stack, 0, sizeof(CLVALUE) * VM_STACK_MAX);
    
    CLVALUE* stack_ptr = (CLVALUE*)stack + var_num;

    int* head_codes = (int*)codes.buf;
    int* p = (int*)codes.buf;

    stack_frame.stack = stack;
    stack_frame.stack_ptr = &stack_ptr;
    stack_frame.var_num = var_num;
    stack_frame.index = info.stack_frames.length();

    info.stack_frames.push_back(stack_frame);

    ready_for_vm_stack(stack, parent_stack_ptr, num_params, var_num, info);
    
    while(p - head_codes < codes.len) {
        int op = *p;
        p++;
        
        if(gSigInt) {
            gSigInt = 0;
            vm_err_msg(&stack_ptr, info, "signal interrupt\n");
            info.stack_frames.pop_back(null_parent_stack_frame);
            return false;
        }
        
//print_op(op, stdout);
        switch(op) {
            case OP_POP: {
                stack_ptr--;
                }
                break;
                
            case OP_INT_VALUE: {
                stack_ptr.mObjectValue = create_int_object(*p, info);
                p++;
                
                stack_ptr++;
                }
                break;
                
            case OP_TRUE_VALUE: {
                stack_ptr.mObjectValue = create_bool_object(1, info);
                
                stack_ptr++;
                }
                break;
                
            case OP_FALSE_VALUE: {
                stack_ptr.mObjectValue = create_bool_object(0, info);
                stack_ptr++;
                }
                break;

            case OP_NULL_VALUE: {
                CLObject obj = create_null_object(info);
                stack_ptr.mObjectValue = obj;
                
                stack_ptr++;
                }
                break;

            case OP_COMMAND_VALUE: {
                char* str = (char*)p;
                int len = strlen(str) + 1;

                alignment(&len);

                len = len / sizeof(int);

                p += len;

                if(strlen(str) == 0) {
                    CLObject obj = create_command_object("", 1, "", 1, 0, true, info);
                    stack_ptr.mObjectValue = obj;
                    
                    stack_ptr++;
                }
                else {
                    CLObject obj = create_command_object(str, strlen(str)+1, "", 1, 0, false, info);
                    stack_ptr.mObjectValue = obj;
                    
                    stack_ptr++;
                }
                }
                break;

            case OP_SYSTEM_VALUE: {
                CLObject obj = create_system_object(info);

                stack_ptr.mObjectValue = obj;
                
                stack_ptr++;
                }
                break;
                
            case OP_STRING_VALUE: {
                char* str = (char*)p;
                int len = strlen(str) + 1;

                alignment(&len);

                len = len / sizeof(int);

                p += len;

                int obj = create_string_object(str, info);
                
                stack_ptr.mObjectValue = obj;
                stack_ptr++;
                }
                break;

            case OP_REGEX_VALUE: {
                char* str = (char*)p;
                int len = strlen(str) + 1;

                alignment(&len);

                len = len / sizeof(int);

                p += len;

                int ignore_case = *p;
                p++;

                int global = *p;
                p++;

                nregex reg = regex(str, ignore_case, false, global, false, false, false, false, false);

                CLObject obj = create_regex_object(reg, info);
                
                stack_ptr.mObjectValue = obj;
                stack_ptr++;
                }
                break;

            case OP_LIST_VALUE: {
                int num_elements = *p;
                p++;

                list<int>*% list = new list<int>.initialize();

                for(int i=0; i<num_elements; i++) {
                    CLObject element = (stack_ptr-num_elements+i).mObjectValue;

                    list.push_back(element);
                }

                CLObject obj = create_list_object(list, info);

                stack_ptr -= num_elements;
                
                stack_ptr.mObjectValue = obj;
                stack_ptr++;
                }
                break;

            case OP_CREATE_OBJECT: {
                char* type_name = (char*)p;

                int len = strlen(type_name) + 1;

                alignment(&len);

                len = len / sizeof(int);

                p += len;

                sCLType* type = parse_type_runtime(type_name, info.cinfo.pinfo, info.cinfo.pinfo.types);

                if(type == null) {
                    vm_err_msg(&stack_ptr, info, xsprintf("class not found on OP_CREATE_OBJECT (%s)\n", type_name));
                    info.stack_frames.pop_back(null_parent_stack_frame);
                    return false;
                }

                int obj = create_object(type, info);

                stack_ptr.mObjectValue = obj;
                stack_ptr++;
                }
                break;

            case OP_CREATE_BLOCK_OBJECT: {
                char* type_name = (char*)p;

                int len = strlen(type_name) + 1;

                alignment(&len);

                len = len / sizeof(int);

                p += len;

                int codes_len = *p;
                p++;

                int* codes = p;

                p += codes_len / sizeof(int);

                int var_num = *p;
                p++;

                int obj = create_block_object(type_name, codes, codes_len,  var_num, info);

                stack_ptr.mObjectValue = obj;
                stack_ptr++;
                }
                break;
                
            case OP_IADD: {
                int lvalue = (stack_ptr-2).mObjectValue;
                int rvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);
                sCLInt* rvalue_data = CLINT(rvalue);

                int value = lvalue_data->mValue + rvalue_data->mValue;
                CLObject new_obj = create_int_object(value, info);

                stack_ptr -= 2;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;
                
            case OP_ISUB: {
                int lvalue = (stack_ptr-2).mObjectValue;
                int rvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);
                sCLInt* rvalue_data = CLINT(rvalue);

                int value = lvalue_data->mValue - rvalue_data->mValue;
                CLObject new_obj = create_int_object(value, info);

                stack_ptr -= 2;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;
                
            case OP_IMULT: {
                int lvalue = (stack_ptr-2).mObjectValue;
                int rvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);
                sCLInt* rvalue_data = CLINT(rvalue);

                int value = lvalue_data->mValue * rvalue_data->mValue;
                CLObject new_obj = create_int_object(value, info);

                stack_ptr -= 2;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;
                
            case OP_IDIV: {
                int lvalue = (stack_ptr-2).mObjectValue;
                int rvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);
                sCLInt* rvalue_data = CLINT(rvalue);

                if(rvalue_data->mValue == 0) {
                    vm_err_msg(&stack_ptr, info, xsprintf("0 div"));
                    info.stack_frames.pop_back(null_parent_stack_frame);
                    return false;
                }

                int value = lvalue_data->mValue / rvalue_data->mValue;
                CLObject new_obj = create_int_object(value, info);

                stack_ptr -= 2;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;

            case OP_IMOD: {
                int lvalue = (stack_ptr-2).mObjectValue;
                int rvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);
                sCLInt* rvalue_data = CLINT(rvalue);

                if(rvalue_data->mValue == 0) {
                    vm_err_msg(&stack_ptr, info, xsprintf("0 mod"));
                    info.stack_frames.pop_back(null_parent_stack_frame);
                    return false;
                }

                int value = lvalue_data->mValue % rvalue_data->mValue;
                CLObject new_obj = create_int_object(value, info);

                stack_ptr -= 2;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;

            case OP_IEQ: {
                CLObject lvalue = (stack_ptr-2).mObjectValue;
                CLObject rvalue = (stack_ptr-1).mObjectValue;

                if(check_type(lvalue, "void", info) || check_type(rvalue, "void", info))
                {
                    int value = check_type(lvalue, "void", info) == check_type(rvalue, "void", info);
                    
                    CLObject obj = create_bool_object(value, info);

                    stack_ptr -= 2;
                    stack_ptr->mObjectValue = obj;
                    stack_ptr++;
                }
                else {
                    sCLInt* lvalue_data = CLINT(lvalue);
                    sCLInt* rvalue_data = CLINT(rvalue);

                    int value = lvalue_data->mValue == rvalue_data->mValue;
                    CLObject new_obj = create_bool_object(value, info);

                    stack_ptr -= 2;
                    stack_ptr.mObjectValue = new_obj;
                    stack_ptr++;
                }
                }
                
                break;

            case OP_EQ: {
                CLObject lvalue = (stack_ptr-2).mObjectValue;
                CLObject rvalue = (stack_ptr-1).mObjectValue;

                if(check_type(lvalue, "void", info) || check_type(rvalue, "void", info))
                {
                    int value = check_type(lvalue, "void", info) == check_type(rvalue, "void", info);
                    
                    CLObject obj = create_bool_object(value, info);

                    stack_ptr -= 2;
                    stack_ptr->mObjectValue = obj;
                    stack_ptr++;
                }
                else {
                    sCLObject* left_data = CLOBJECT(lvalue);
                    sCLObject* right_data = CLOBJECT(rvalue);

                    if(!type_identify(left_data->mType
                                        , right_data->mType))
                    {
                        vm_err_msg(&stack_ptr, info, xsprintf("invalid equal type. The difference left object type with right object type."));
                        info.stack_frames.pop_back(null_parent_stack_frame);
                        return false;
                    }

                    int value = lvalue == rvalue;
                    CLObject new_obj = create_bool_object(value, info);

                    stack_ptr -= 2;
                    stack_ptr.mObjectValue = new_obj;
                    stack_ptr++;
                }
                }
                
                break;
                
            case OP_INOTEQ: {
                CLObject lvalue = (stack_ptr-2).mObjectValue;
                CLObject rvalue = (stack_ptr-1).mObjectValue;

                if(check_type(lvalue, "void", info) || check_type(rvalue, "void", info))
                {
                    int value = check_type(lvalue, "void", info) != check_type(rvalue, "void", info);
                    
                    CLObject obj = create_bool_object(value, info);

                    stack_ptr -= 2;
                    stack_ptr->mObjectValue = obj;
                    stack_ptr++;
                }
                else {
                    sCLInt* lvalue_data = CLINT(lvalue);
                    sCLInt* rvalue_data = CLINT(rvalue);

                    int value = lvalue_data->mValue != rvalue_data->mValue;
                    CLObject new_obj = create_bool_object(value, info);

                    stack_ptr -= 2;
                    stack_ptr.mObjectValue = new_obj;
                    stack_ptr++;
                }
                }
                
                break;

            case OP_NOTEQ: {
                CLObject lvalue = (stack_ptr-2).mObjectValue;
                CLObject rvalue = (stack_ptr-1).mObjectValue;

                if(check_type(lvalue, "void", info) || check_type(rvalue, "void", info))
                {
                    int value = check_type(lvalue, "void", info) != check_type(rvalue, "void", info);
                    
                    CLObject obj = create_bool_object(value, info);

                    stack_ptr -= 2;
                    stack_ptr->mObjectValue = obj;
                    stack_ptr++;
                }
                else {
                    int value = lvalue != rvalue;
                    CLObject new_obj = create_bool_object(value, info);

                    stack_ptr -= 2;
                    stack_ptr.mObjectValue = new_obj;
                    stack_ptr++;
                }
                }
                
                break;

            case OP_ANDAND: {
                int lvalue = (stack_ptr-2).mObjectValue;
                int rvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);
                sCLInt* rvalue_data = CLINT(rvalue);

                int value = lvalue_data->mValue && rvalue_data->mValue;
                CLObject new_obj = create_bool_object(value, info);

                stack_ptr -= 2;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;

            case OP_OROR: {
                int lvalue = (stack_ptr-2).mObjectValue;
                int rvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);
                sCLInt* rvalue_data = CLINT(rvalue);

                int value = lvalue_data->mValue || rvalue_data->mValue;
                CLObject new_obj = create_bool_object(value, info);

                stack_ptr -= 2;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;

            case OP_LOGICAL_DENIAL: {
                int lvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);

                int value = !lvalue_data->mValue;
                CLObject new_obj = create_bool_object(value, info);

                stack_ptr --;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;

                
            case OP_ILT: {
                int lvalue = (stack_ptr-2).mObjectValue;
                int rvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);
                sCLInt* rvalue_data = CLINT(rvalue);

                int value = lvalue_data->mValue < rvalue_data->mValue;
                CLObject new_obj = create_bool_object(value, info);

                stack_ptr -= 2;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;

            case OP_IGT: {
                int lvalue = (stack_ptr-2).mObjectValue;
                int rvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);
                sCLInt* rvalue_data = CLINT(rvalue);

                int value = lvalue_data->mValue > rvalue_data->mValue;
                CLObject new_obj = create_bool_object(value, info);

                stack_ptr -= 2;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;

            case OP_ILE: {
                int lvalue = (stack_ptr-2).mObjectValue;
                int rvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);
                sCLInt* rvalue_data = CLINT(rvalue);

                int value = lvalue_data->mValue <= rvalue_data->mValue;
                CLObject new_obj = create_bool_object(value, info);

                stack_ptr -= 2;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;

            case OP_IGE: {
                int lvalue = (stack_ptr-2).mObjectValue;
                int rvalue = (stack_ptr-1).mObjectValue;

                sCLInt* lvalue_data = CLINT(lvalue);
                sCLInt* rvalue_data = CLINT(rvalue);

                int value = lvalue_data->mValue >= rvalue_data->mValue;
                CLObject new_obj = create_bool_object(value, info);

                stack_ptr -= 2;
                stack_ptr.mObjectValue = new_obj;
                stack_ptr++;
                }
                
                break;

            case OP_STORE_VARIABLE: {
                int var_index = *p;
                p++;

                stack[var_index] = *(stack_ptr-1);
                }
                break;
                
            case OP_LOAD_VARIABLE: {
                int var_index = *p;
                p++;

                *stack_ptr = stack[var_index];
                stack_ptr++;
                }
                break;

            case OP_COND_JUMP: {
                int jump_size = *p;
                p++;

                CLObject conditional = (stack_ptr-1).mObjectValue;
                sCLInt* conditional_data = CLINT(conditional);

                int value = conditional_data->mValue;
                stack_ptr--;

                if(value) {
                    p += jump_size;
                }
                }
                break;

            case OP_COND_NOT_JUMP: {
                int jump_size = *p;
                p++;

                CLObject conditional = (stack_ptr-1).mObjectValue;
                sCLInt* conditional_data = CLINT(conditional);

                int value = conditional_data->mValue;
                stack_ptr--;

                if(!value) {
                    p += jump_size;
                }
                }
                break;

            case OP_GOTO: {
                int goto_point = *p;
                p++;

                p = (int*)(((char*)head_codes) + goto_point);
                }
                break;


            case OP_INVOKE_METHOD: { 
                char* method_name = (char*)p;

                int len = strlen(method_name) + 1;

                alignment(&len);

                len = len / sizeof(int);

                p += len;

                int num_params = *p;
                p++;

                int last_method_chain = *p;
                p++;

                CLObject obj = (stack_ptr-num_params)->mObjectValue;

                if(obj == 0) {
                    vm_err_msg(&stack_ptr, info, xsprintf("Object Null pointer Exception. Invoking method is (%s)\n", method_name));
                    info.stack_frames.pop_back(null_parent_stack_frame);
                    return false;
                }

                sCLObject* object_data = CLOBJECT(obj);
                sCLType* generics_types = object_data->mType;

                sCLClass* klass = object_data->mType->mClass;
                if(klass == null) {
                    vm_err_msg(&stack_ptr, info, xsprintf("class not found on OP_INVOKE_METHOD(%s)\n", klass->mName));
                    info.stack_frames.pop_back(null_parent_stack_frame);
                    return false;
                }

                char* klass_name = klass->mName;

                sCLMethod* method = null;
                while(klass) {
                    method = klass.mMethods.at(method_name, null);

                    if(method) {
                        break;
                    }

                    klass = klass->mParent;
                }

                if(method == null &&strcmp(klass_name, "command") == 0)
                {
                    CLObject parent_obj = obj;

                    sCLCommand* command_obj = CLCOMMAND(parent_obj);

                    bool first_method_chain = command_obj->mFirstCommand;

                    char* argv[PARAMS_MAX];

                    argv[0] = method_name;

                    for(int i=1; i<num_params; i++) {
                        CLObject obj = (stack_ptr-num_params+i)->mObjectValue;

                        sCLObject* object_data = CLOBJECT(obj);

                        sCLType* string_type = create_type("string", info.cinfo.pinfo.types);
                        if(!substitution_posibility(string_type, object_data->mType))
                        {
                            vm_err_msg(&stack_ptr, info, xsprintf("type error command parametor. invalid class(%s). method name (%s)\n", object_data->mType->mClass->mName, method_name));
                            info.stack_frames.pop_back(null_parent_stack_frame);
                            return false;
                        }

                        argv[i] = get_string_mem(obj);
                    }
                    argv[num_params] = null;

                    if(first_method_chain) {
                        if(last_method_chain) {
                            if(!invoke_command_with_control_terminal(method_name, argv, num_params, &stack_ptr, info))
                            {
                                setpgid(getpid(), getpid());
                                tcsetpgrp(0, getpid());

                                vm_err_msg(&stack_ptr, info, xsprintf("invoke command error(%s)", method_name));
                                info.stack_frames.pop_back(null_parent_stack_frame);
                                return false;
                            }
                        }
                        else {
                            if(!invoke_command(method_name, argv, &stack_ptr, num_params, info))
                            {
                                setpgid(getpid(), getpid());
                                tcsetpgrp(0, getpid());

                                vm_err_msg(&stack_ptr, info, xsprintf("invoke command error(%s)", method_name));
                                info.stack_frames.pop_back(null_parent_stack_frame);
                                return false;
                            }
                        }
                    }
                    else {
                        if(last_method_chain) {
                            if(!invoke_command_with_control_terminal_and_pipe(parent_obj, method_name, argv, num_params, &stack_ptr, info))
                            {
                                setpgid(getpid(), getpid());
                                tcsetpgrp(0, getpid());

                                vm_err_msg(&stack_ptr, info, xsprintf("invoke command error(%s)", method_name));
                                info.stack_frames.pop_back(null_parent_stack_frame);
                                info.stack_frames.pop_back(null_parent_stack_frame);
                                return false;
                            }
                        }
                        else {
                            if(!invoke_command_with_pipe(parent_obj, method_name, argv, &stack_ptr, num_params, info))
                            {
                                setpgid(getpid(), getpid());
                                tcsetpgrp(0, getpid());

                                vm_err_msg(&stack_ptr, info, xsprintf("invoke command error(%s)", method_name));
                                info.stack_frames.pop_back(null_parent_stack_frame);
                                return false;
                            }
                        }
                    }
                }
                else {
                    if(method == null) {
                        vm_err_msg(&stack_ptr, info, xsprintf("method not found(%s.%s)\n", klass_name, method_name));
                        info.stack_frames.pop_back(null_parent_stack_frame);
                        return false;
                    }

                    int var_num = method.mMaxVarNum;
//print_method(klass, method, num_params, var_num);

                    if(!param_check(method->mParams, method->mNumParams, stack_ptr, generics_types, info))
                    {
                        vm_err_msg(&stack_ptr, info, xsprintf("method parametor is invalid(%s.%s)\n", klass->mName, method_name));
                        info.stack_frames.pop_back(null_parent_stack_frame);
                        return false;
                    }

                    if(method.mByteCodes == null) {
                        if(!invoke_native_method(klass, method, &stack_ptr, info)) 
                        {
                            info.stack_frames.pop_back(null_parent_stack_frame);
                            return false;
                        }

                        CLVALUE result_value = *(stack_ptr-1);

                        stack_ptr -= num_params;

                        bool result_existance = !type_identify_with_class_name(method->mResultType, "void", info.pinfo);

                        if(result_existance) {
                            stack_ptr--;
                            *stack_ptr = result_value;
                            stack_ptr++;
                        }
                        else {
                            (*stack_ptr).mObjectValue = create_null_object(info);
                            stack_ptr++;
                        }
                    }
                    else {
                        buffer* codes = method.mByteCodes;

                        int var_num = method.mMaxVarNum;

                        CLVALUE result;
                        if(!vm(codes, stack_ptr, num_params, var_num, &result, info)) {
                            info.stack_frames.pop_back(null_parent_stack_frame);
                            return false;
                        }

                        stack_ptr -= num_params;
                        bool result_existance = !type_identify_with_class_name(method->mResultType, "void", info.pinfo);

                        if(result_existance) {
                            *stack_ptr = result;
                            stack_ptr++;
                        }
                        else {
                            (*stack_ptr).mObjectValue = create_null_object(info);
                            stack_ptr++;
                        }
//print_method_end(klass, method, result);
                    }
                }

                }
                break;

            case OP_INVOKE_BLOCK_OBJECT: {
                int num_params = *p;
                p++;

                int result_existance = *p;
                p++;

                int block_object = (*(stack_ptr-num_params-1)).mObjectValue;

                if(!invoke_block(block_object, result_existance, num_params, &stack_ptr, info))
                {
                    info.stack_frames.pop_back(null_parent_stack_frame);
                    return false;
                }

                }
                break;

            case OP_STORE_FIELD: {
                int field_index = *p;
                p++;
                
                CLObject obj =  (stack_ptr-2)->mObjectValue;

                if(obj == 0) {
                    vm_err_msg(&stack_ptr, info, xsprintf("Object Null pointer Exception. Storing field index is (%d)\n", field_index));
                    info.stack_frames.pop_back(null_parent_stack_frame);
                    return false;
                }

                CLVALUE value =  *(stack_ptr-1);

                if(value.mObjectValue == 0) {
                    vm_err_msg(&stack_ptr, info, xsprintf("Object Null pointer Exception. Storing field index is (%d)\n", field_index));
                    info.stack_frames.pop_back(null_parent_stack_frame);
                    return false;
                }

                sCLObject* object_data = CLOBJECT(obj);

                if(field_index < 0 || field_index >= object_data->mNumFields)
                {
                    vm_err_msg(&stack_ptr, info, xsprintf("Out of range field index number(%d)\n", field_index));
                    info.stack_frames.pop_back(null_parent_stack_frame);
                    return false;
                }

                object_data->uValue.mFields[field_index] = value;

                stack_ptr -= 2;
                *stack_ptr = value;
                stack_ptr++;
                }
                break;

            case OP_LOAD_FIELD: {
                int field_index = *p;
                p++;
                
                CLObject obj =  (stack_ptr-1)->mObjectValue;
                sCLObject* object_data = CLOBJECT(obj);

                stack_ptr --;

                *stack_ptr = object_data->uValue.mFields[field_index];
                stack_ptr++;
                }
                break;

            case OP_TRY: {
                int try_codes_len = *p;
                p++;

                int* try_head_codes = p;

                p += try_codes_len / sizeof(int);

                int try_var_num = *p;
                p++;

                int catch_codes_len = *p;
                p++;

                int* catch_head_codes = p;

                p += catch_codes_len / sizeof(int);

                int catch_var_num = *p;
                p++;

                buffer*% try_codes = new buffer.initialize();
                try_codes.append((char*)try_head_codes, try_codes_len);

                int num_params = 0;
                int var_num = try_var_num;

                CLVALUE result_obj;
                info->thrown_object.mObjectValue = 0;
                bool result = vm(try_codes, stack_ptr, num_params, var_num, &result_obj, info);

                if(!result) {
                    buffer*% catch_codes = new buffer.initialize();
                    catch_codes.append((char*)catch_head_codes, catch_codes_len);

                    int num_params = 1;
                    int var_num = catch_var_num;

                    CLVALUE result_obj;
                    if(!vm(catch_codes, stack_ptr, num_params, var_num, &result_obj, info))
                    {
                        info.stack_frames.pop_back(null_parent_stack_frame);
                        return false;
                    }
                }
                info->thrown_object.mObjectValue = 0;

                }
                
                break;

            case OP_RETURN: {
                *result = *(stack_ptr-1);
    
                }
                info.stack_frames.pop_back(null_parent_stack_frame);
                return true;

            case OP_THROW: 
                info->thrown_object = *(stack_ptr-1);
                stack_ptr--;

                info.stack_frames.pop_back(null_parent_stack_frame);
                return false;
                break;

        }
//puts("end");
//print_stack(stack, stack_ptr, var_num);
    };

    *result = *(stack_ptr-1);

    info.stack_frames.pop_back(null_parent_stack_frame);

    return true;
}

