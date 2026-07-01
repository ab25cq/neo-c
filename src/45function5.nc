#include "common.h"

int transpile_block(sBlock* block, list<sType*%>* param_types, list<string>* param_names, sInfo* info, bool no_var_table=false, bool loop_block=false, bool if_result_value=false, bool iter_=false, bool loop_result_type=false)
{
    bool inhibits_output_code = info->inhibits_output_code;
    info->inhibits_output_code = false;
    
    bool omit_semicolon = block.mOmitSemicolon;
    
    sVarTable* old_table = info->lv_table;
    if(!no_var_table) {
        block->mVarTable = new sVarTable(false@global, old_table);
        info->lv_table = borrow block->mVarTable;
    }

    sVarTable* current_loop_vtable = info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable = borrow block->mVarTable;
    }
    
    if(param_types && param_names) {
        int i;
        foreach(name, param_names) {
            sType*% type = param_types[i];
            type->mAllocaValue = false;
            add_variable_to_table(name, clone type, info, true@function_param);
            i++;
        }
    }
    
    int block_level = info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    
    if(block->mNodes.length() == 0) {
    }
    else {
        int i;
        foreach(node, block->mNodes) {
            int num_conditional = info->num_conditional;
            if(info->block_level == 1) info->num_conditional = 0;
            
            var right_value_objects = info.right_value_objects;
            info.right_value_objects = new list<sRightValueObject*%>();
            
            info.module.mLastCode = null;
            info.module.mLastCode2 = null;
            
            int stack_num_before = info->stack.length();
            info.writing_source_file_position = true;
            
            int sline = info.sline;
            int sline_real = info.sline_real;
            string sname = string(info.sname);
            
            info->last_statment_is_return = false;
            
            info.sline = node.sline();
            info.sline_real = node.sline_real();
            info.sname = node.sname();
            
            node_compile(node).elif {
                if(gComeDebug) {
                    puts(node.kind());
                    printf("%s %d: compiling is failed(5)\n", info->sname, info->sline);
                }
                return false;
            }
            
            info.sline = sline;
            info.sline_real = sline_real;
            info.sname = string(sname);
    
            /// return if result value
            if(omit_semicolon && if_result_value && i == block.mNodes.length()-1) {
                //add_last_code_to_source(info);
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                sType*% right_type__ = clone come_value.type;
                var right_type_ = solve_generics(right_type__, info->generics_type, info);
                var right_type2 = solve_method_generics(right_type_, info);
                
                if(!info.if_result_value_name_defined) {
                    info.if_result_value_name_defined = true;
                    string var_name = info.if_result_value_name;
                    sType*% result_type = clone come_value.type;
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(result_type, var_name));
                    if(info.come_fun.mName !== "memset" && info.funcs[s"memset"]) {
                        add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_name, var_name);
                    }
                    add_variable_to_table(var_name, result_type, info, false@function_param, to_function_table:true);
                    
                    info.if_result_type = clone result_type;
                }
                else {
                    sType*% result_type = clone come_value.type;
                    check_assign_type("invalid if result type", info.if_result_type, result_type, come_value, info);
                }
                if(come_value.type.mHeap) {
                    sType*% left_type = clone right_type2
                    std_move(left_type, right_type2, come_value);
                }
                add_come_code(info, s"\{info.if_result_value_name} = %s;\n", come_value.c_value);
            }
            else if(iter_ && i == block.mNodes.length()-1) {
            }
            else if(omit_semicolon && loop_result_type && i == block.mNodes.length()-1) {
                //add_last_code_to_source(info);
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                sType*% right_type__ = clone come_value.type;
                var right_type_ = solve_generics(right_type__, info->generics_type, info);
                var right_type2 = solve_method_generics(right_type_, info);
                
                if(!info.loop_result_value_name_defined) {
                    info.loop_result_value_name_defined = true;
                    string var_name = info.loop_result_value_name;
                    sType*% result_type = clone come_value.type;
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(result_type, var_name));
                    if(info.come_fun.mName !== "memset" && info.funcs[s"memset"]) {
                        add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_name, var_name);
                    }
                    add_variable_to_table(var_name, result_type, info, false@function_param, to_function_table:true);
                    
                    info.loop_result_type = clone result_type;
                }
                else {
                    sType*% result_type = clone come_value.type;
                    check_assign_type("invalid loop result type", info.loop_result_type, result_type, come_value, info);
                }
                if(come_value.type.mHeap) {
                    sType*% left_type = clone right_type2
                    std_move(left_type, right_type2, come_value);
                }
                add_come_code(info, s"\{info.loop_result_value_name} = %s;\n", come_value.c_value);
            }
            else {
                add_last_code_to_source(info);
                
                arrange_stack(info, stack_num_before);
            }

            free_right_value_objects(info);
            
            if(info.right_value_objects) info.right_value_objects.reset();
            info.right_value_objects = right_value_objects;
            i++;
            if(info->block_level == 1) info->num_conditional = num_conditional;
        }
    }

    if(!no_var_table && !info.inhibits_output_code) {
        free_objects(info->lv_table, null, info);
        
        if(info->match_it_var && block_level == 0) {
            foreach(it, info->match_it_var) {
                free_object(clone it->mType, it->mCValueName, false@no_decrement, false@no_free, info);
            }
            info->match_it_var = null;
        }
    }
    
    info->lv_table = old_table;
    info->block_level = block_level;
    
    info->inhibits_output_code2 = info->inhibits_output_code;

    info->current_loop_vtable = current_loop_vtable;
    info->inhibits_output_code = inhibits_output_code;
    
    return 0;
}
