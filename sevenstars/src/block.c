#include "common.h"

bool parse_block(sCLNodeBlock** node_block, int num_params, sCLParam* params, sParserInfo* info)
{
    info.blocks.push_back(new sCLNodeBlock);

    *node_block = info.blocks.item(-1, null);

    (*node_block)->nodes = new vector<sCLNode*>.initialize();
    (*node_block)->vtables = clone info.vtables;
    
    var vtables_before = info.vtables;
    info.vtables = (*node_block)->vtables;

    init_var_table(info);

    (*node_block)->head_params = get_var_num(info.vtables);

    for(int i=0; i<num_params; i++) {
        sCLParam param = params[i];
        check_already_added_variable(info, param.mName);
        add_variable_to_table(info, param.mName, param.mType, false);
    }
    
    while(*info->p) {
        parse_comment(info);

        if(*info->p == '}') {
            break;
        }

        int sline = info.sline;

        sCLNode* node = null;
        if(!expression(&node, info)) {
            info.vtables = vtables_before;
            return false;
        }

        node.sline = sline;
        
        (*node_block)->has_last_value = true;

        while(*info->p == ';') {
            (*node_block)->has_last_value = false;
            info->p++;
            skip_spaces_and_lf(info);
        }

        (*node_block).nodes.push_back(node);
    }

    if(*info->p == '\0') {
        (*node_block)->closed_block = false;
    }
    else {
        (*node_block)->closed_block = true;
    }
    
    if(info.err_num > 0) {
        fprintf(stderr, "Parser error. The error number is %d\n", info.err_num);
        info.vtables = vtables_before;
        return false;
    }

    int var_num = get_var_num(info.vtables);

    if(var_num > info.max_var_num) {
        info.max_var_num = var_num;
    }

    (*node_block)->mVarNum = info.max_var_num;
    (*node_block)->mNumParams = num_params;
    for(int i=0; i<num_params; i++) {
        (*node_block)->mParams[i] = params[i];
    }

    info.vtables = vtables_before;

    return true;
}

bool compile_block(sCLNodeBlock* node_block, sCompileInfo* info)
{
    var nodes = borrow node_block->nodes;
    var vtables = borrow node_block->vtables;
    var has_last_value = node_block.has_last_value;
    var closed_block = node_block.closed_block;

    var vtables_before = info.pinfo.vtables;
    info.pinfo.vtables = vtables;

    bool return_false = false;

    if(nodes.length() == 0) {
        info.type = create_type("void", info.pinfo.types);
    }

    nodes.each {
        int sline = it.sline;
    
        sCLNode* node = it;
        
        info.sline = sline;

        if(!compile(node, info)) {
            *it3 = true;
            return_false = true;
            return;
        }

        if(it2 != nodes.length() -1 || (!has_last_value && it2 == nodes.length()-1)) {
            /// POP ///
            for(int i=0; i<info.stack_num; i++) {
                if(!info.no_output) {
                    info.codes.append_int(OP_POP);
                }
            }
            
            info.stack_num = 0;

            if(closed_block) {
                info.type = create_type("void", info.pinfo.types);
            }
        }
    }

    if(return_false) {
        return false;
    }

    info.pinfo.vtables = vtables_before;
    
    return true;
}
