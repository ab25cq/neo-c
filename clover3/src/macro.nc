#include "common.h"
#include <stdlib.h>
#include <limits.h>
#include <locale.h>
#include <unistd.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

map<string, string>* gMacros;

void macro_init()
{
    gMacros = borrow new map<string, string>.initialize();
}

void macro_final()
{
    delete gMacros;
}

void append_macro(char* name, char* body)
{
    gMacros.insert(string(name), string(body));
}

static char* get_macro(char* name)
{
    return gMacros.at(name, null);
}

static bool get_command_result(buffer* command_result, char* macro_name, char* cmdline, char* params)
{
    FILE* f;
    char buf[BUFSIZ];

    setenv("PARAMS", params, 1);

    f = popen(cmdline, "r");
    if(f == NULL) {
        fprintf(stderr, "popen(2) is failed at %s\n", macro_name);
        return false;
    }
    while(1) {
        int size;

        size = fread(buf, 1, BUFSIZ, f);
        command_result.append(buf, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    if(pclose(f) < 0) {
        fprintf(stderr, "pclose(2) is failed at %s\n", macro_name);
        return false;
    }

    return true;
}

bool call_macro(sCLNode** node, char* name, char* params, sParserInfo* info)
{
    char* cmdline = get_macro(name);

    if(cmdline == NULL) {
        fprintf(stderr, "invalid macro. %s\n", name);
        return false;
    }

    buffer*% command_result = new buffer.initialize();

    if(!get_command_result(command_result, name, cmdline, params))
    {
        return false;
    }

    char* p_before = info.p;
    info.p = command_result.buf;

    char sname_before[PATH_MAX];
    xstrncpy(sname_before, info.sname, PATH_MAX);
    xstrncpy(info.sname, name, PATH_MAX);

    int sline_before = info.sline;
    info.sline = 1;

    sCLNodeBlock* node_block = null;
    if(!parse_block(&node_block, 0, NULL, info))
    {
        info.p = p_before;
        xstrncpy(info.sname, sname_before, PATH_MAX);
        info.sline = sline_before;

        return false;
    };

    expected_next_character('}', info);

    info.p = p_before;
    xstrncpy(info.sname, sname_before, PATH_MAX);
    info.sline = sline_before;

    *node = node_block.nodes.item(-1, null);
    
    return true;
}

