#include "common.h"

sNode*% comelang_top_level(char* buf, char* head, int head_sline, sInfo* info)
{
    info.in_top_level = true;
    
    info.p = head;
    info.sline = head_sline;
    
    sNode*% node = null;
    
    string buf2 = parse_word();
    
    /// function ///
    if(buf2 === "fn") {
        info.in_top_level = false;
        node = parse_come_function();
    }
    /// var ///
    else if(buf2 === "val") {
        node = parse_come_gval();
    }
    else if(buf2 === "var") {
        node = parse_come_gvar();
    }
    else if(buf === "using") {
        if(parsecmp("neo-c")) {
            info->p += strlen("neo-c");
            skip_spaces_and_lf();
            
            gComelang = false;
            gComeC = false;
        
            return create_nothing_node();
        }
        return create_nothing_node();
    }
    
    return node;
}
