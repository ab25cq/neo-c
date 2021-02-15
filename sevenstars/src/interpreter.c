#include "common.h"
#include <dirent.h>
#include <signal.h>

#ifdef HAVE_READLINE_H
#undef __GNUC__
#undef __clang__
#undef __clang__
//#undef __STDC__
#include <readline/readline.h>
#include <readline/history.h>
#endif

void sig_int_for_shell(int signal)
{
    gSigInt = 1;
    rl_reset_line_state();
    rl_replace_line("", 0);
    rl_point = 0;
    puts("");
    rl_redisplay();
}

int match_index;
list<string>*% matches;

static string line_buffer_from_head_to_cursor_point()
{
    string result = new char[strlen(rl_line_buffer)+1];
    memcpy(result, rl_line_buffer, rl_point);
    result[rl_point] = 0;

    return result;
}

void get_command_completion_cadidates(char* inputing_method_name)
{
    char* env = getenv("PATH");
    char path[PATH_MAX];
    char path2[PATH_MAX];
    struct stat stat_;

    char* p = path;
    int len = strlen(env);

    int i;
    for(i=0; i<len; i++) {
        if(env[i] == ':') {
            *p = '\0';

            if(access(path, F_OK) == 0) {
                if(stat(path, &stat_) == 0 && S_ISDIR(stat_.st_mode)) {
                    DIR* dir = opendir(path);

                    if(dir) {
                        while(1) {
                            struct dirent* entry = readdir(dir);

                            if(entry == NULL) {
                                break;
                            }

                            if(strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) 
                            {
                                xstrncpy(path2, path, PATH_MAX);

                                if(path[strlen(path)-1] != '/') {
                                    xstrncat(path2, "/", PATH_MAX);
                                }
                                xstrncat(path2, entry->d_name, PATH_MAX);

                                if(stat(path2, &stat_) == 0) {
                                    if(stat_.st_mode & S_IXUSR) 
                                    {
                                        if(strstr(entry->d_name, inputing_method_name) == entry->d_name)
                                        {
                                            matches.push_back(string(entry->d_name));
                                        }
                                    }
                                }
                            }
                        }

                        closedir(dir);
                    }
                }
            }

            p = path;
        }
        else {
            *p = env[i];
            p++;

            if(p - (char*)path >= PATH_MAX) {
                break;
            }
        }
    }

    sCLClass* system_class = gClasses.at("system", null);

    if(system_class) {
        system_class.mMethods.each {
            if(strstr(it, inputing_method_name) == it) {
                matches.push_back(string(it));
            }
        }
    }

    sCLClass* command_class = gClasses.at("command", null);

    if(command_class) {
        command_class.mMethods.each {
            if(strstr(it, inputing_method_name) == it) {
                matches.push_back(string(it));
            }
        }
    }
}

char* completion_generator(char* text, int state)
{
    if(state == 0) {
        matches.reset();
        match_index = 0;

        string current_line = line_buffer_from_head_to_cursor_point();

        bool all_space_line = true;
        char* p = current_line;
        while(*p) {
            if(*p != ' ') {
                all_space_line = false;
                break;
            }
        }

        bool inputing_method = true;

        p = current_line + strlen(current_line);

        string inputing_method_name = string("");

        while(true) {
            if(p == current_line) {
                if(strlen(current_line) > 0) {
                    inputing_method_name = string(p);
                }
                else {
                    inputing_method_name = string("");
                };
                *p = '\0';
                break;
            }
            else if(isalnum(*p) || *p == '_' || *p == '\0') {
                p--;
            }
            else if(*p == '.') {
                inputing_method_name = string(p+1);
                *p = '\0';
                break;
            }
            else if(*p == ' ' || *p == '{' || *p == '(') {
                inputing_method_name = string(p+1);
                *p = '\0';
                break;
            }
            else {
                inputing_method = false;
                break;
            }
        }

        sCLType* result_type = null;

        sParserInfo info;
        
        memset(&info, 0, sizeof(sParserInfo));
        
        info.p = current_line;
        xstrncpy(info.sname, "get type", PATH_MAX);
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
        cinfo.in_shell = true;
        
        cinfo.codes = borrow new buffer.initialize();

        if(all_space_line || strcmp(current_line, "") == 0) {
            result_type = create_type("command", info.types);
            inputing_method = true;
        }
        else {
            while(*info->p) {
                parse_comment(&info);

                int sline = info.sline;
                
                sCLNode* node = null;
                if(!expression(&node, &info)) {
                    result_type = create_type("command", info.types);
                    inputing_method = true;
                    break;
                }
                
                while(*info->p == ';') {
                    info->p++;
                    skip_spaces_and_lf(&info);
                }
                
                cinfo.sline = sline;
                
                if(!compile(node, &cinfo)) {
                    result_type = create_type("command", info.types);
                    inputing_method = true;
                    break;
                }
                
                if(cinfo.err_num > 0) {
                    result_type = create_type("command", info.types);
                    inputing_method = true;
                    break;
                }
                
                /// POP ///
                for(int i=0; i<cinfo.stack_num; i++) {
                    if(!cinfo.no_output) {
                        cinfo.codes.append_int(OP_POP);
                    }
                }
                
                cinfo.stack_num = 0;

                result_type = cinfo.type;
            }
        }
        
        if(info.err_num > 0) {
            result_type = create_type("command", info.types);
            inputing_method = true;
        }

        if(result_type != null && inputing_method) {
            if(type_identify_with_class_name(result_type, "command", &info) || type_identify_with_class_name(result_type, "void", &info))
            {
                get_command_completion_cadidates(inputing_method_name)
            }
            else {
                result_type.mClass.mMethods.each {
                    sCLMethod* method = it2;
                    char* method_name = method->mName;
                    
                    if(strstr(method_name, inputing_method_name) == method_name)
                    {
                        matches.push_back(string(method_name));
                    }
                }
            }
        }

        delete info.nodes;
        delete info.vtables;
        delete info.blocks;
        delete info.types;
        delete info.vars;
        delete cinfo.codes;
    }

    if(match_index >= matches.length()) {
        rl_completion_append_character = '(';
        return null;
    }

    rl_completion_append_character = '(';
    return strdup(matches.item(match_index++, null));
}

char** completer(char* text, int start, int end)
{
    string current_line = line_buffer_from_head_to_cursor_point();

    current_line = line_buffer_from_head_to_cursor_point();

    char* p = current_line;

    bool in_dquort = false;
    bool in_regex = false;
    while(*p) {
        if(!in_regex && *p == '"') {
            p++;
            in_dquort = !in_dquort;
        }
        else if(!in_dquort && *p == '/') {
            p++;
            in_regex = !in_regex;
        }
        else if(in_regex || in_dquort) {
            p++;
        }
        else {
            p++;
        }
    }

    p = current_line;

    bool in_shell = false;
    while(isalnum(*p) || *p == '-' || *p == '_') {
        p++;
    }

    if(*p == ' ') {
        in_shell = true;
    }

    p = current_line + strlen(current_line) - 1;

    bool inputing_method = true;
    while(p >= current_line) {
        if(isalnum(*p) || *p == '_') {
            p--;
        }
        else if(*p == '.') {
            break;
        }
        else if(*p == ' ') {
            while(*p == ' ') {
                p--;
            }
            inputing_method = false;
            break;
        }
        else if(*p == '{') {
            break;
        }
        else {
            inputing_method = false;
            break;
        }
    }

    /// is method completion ? ///
    if(!inputing_method || in_dquort || in_shell || in_regex) {
        rl_attempted_completion_over = 0;
        rl_completion_append_character = '\0';
        rl_completer_word_break_characters = " ({";

        return null;
    }
    else {
        rl_attempted_completion_over = 1;
        rl_completer_word_break_characters = " .({";

        return rl_completion_matches(text, completion_generator);
    }
}

void readline_insert_text(char* cmdline, int cursor_point)
{
    rl_replace_line(cmdline, 0);
    int n = cursor_point;

    if(n < 0) { n += strlen(rl_line_buffer) + 1; }
    if(n < 0) { n = 0; }
    if(n > strlen(rl_line_buffer)) { n = strlen(rl_line_buffer); }
    rl_point = n;
}

char* gCmdlineInitString;
int gCmdlineInitCursorPoint;

int readline_init_text()
{
    readline_insert_text(gCmdlineInitString, gCmdlineInitCursorPoint);
}

void shell(vector<sCLType*%>* types)
{
    rl_completer_quote_characters = "\"'";
    rl_completer_word_break_characters = " .({";
    rl_attempted_completion_function = completer;

    while(1) {
        gCmdlineInitString = "";
        gCmdlineInitCursorPoint = 0;

        rl_startup_hook = readline_init_text;

        char* line = readline("sevenstars lang > ");

        if(line == null) {
            break;
        }

        if(strcmp(line, "exit") == 0) {
            free(line);
            break;
        }

        CLVALUE result;
        (void)shell_eval_str(line, "sevenstars", true, types, &result);

        add_history(line);

        free(line);
    };
}

void shell_run_command(char* line, vector<sCLType*%>* types, CLVALUE* result)
{
    (void)shell_eval_str(line, "sevenstars", true, types, result);

    add_history(line);
}

void shell_commandline(char* line, int cursor_point, vector<sCLType*%>* types, CLVALUE* result)
{
    rl_completer_quote_characters = "\"'";
    rl_completer_word_break_characters = " .({";
    rl_attempted_completion_function = completer;

    gCmdlineInitString = line;
    gCmdlineInitCursorPoint = cursor_point;

    rl_startup_hook = readline_init_text;

    char* line2 = readline("sevenstars lang > ");

    if(line2 == null) {
        result->mObjectValue = 0;
        return;
    }

    if(strcmp(line2, "exit") == 0) {
        free(line2);
        return;
    }

    (void)shell_eval_str(line2, "sevenstars", true, types, result);

    add_history(line2);

    free(line2);
}

void shell_commandline_without_to_string(char* line, int cursor_point, vector<sCLType*%>* types, CLVALUE* result)
{
    rl_completer_quote_characters = "\"'";
    rl_completer_word_break_characters = " .({";
    rl_attempted_completion_function = completer;

    gCmdlineInitString = line;
    gCmdlineInitCursorPoint = cursor_point;

    rl_startup_hook = readline_init_text;

    char* line2 = readline("sevenstars lang > ");

    if(line2 == null) {
        result->mObjectValue = 0;
        return;
    }

    if(strcmp(line2, "exit") == 0) {
        free(line2);
        return;
    }

    (void)shell_eval_str(line2, "sevenstars", false, types, result);

    add_history(line2);

    free(line2);
}
