#include "common.h"

class sForNode extends sNodeBase
{
    new(sNode*% expression_node, sNode*% expression_node2, sNode*% expression_node3, sBlock* block, sInfo* info, bool existance_result_value=false)
    {
        self.super();
    
        sNode*% self.mExpressionNode;
        if(expression_node) {
            self.mExpressionNode = clone expression_node;
        }
        else {
            self.mExpressionNode = null;
        }
        sNode*% self.mExpressionNode2;
        if(expression_node2) {
            self.mExpressionNode2 = clone expression_node2;
        }
        else {
            self.mExpressionNode2 = null;
        }
        sNode*% self.mExpressionNode3;
        if(expression_node3) {
            self.mExpressionNode3 = clone expression_node3;
        }
        else {
            self.mExpressionNode3 = null;
        }
    
        sBlock*% self.mBlock = clone block;
        bool self.existance_result_value = existance_result_value;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sForNode");
    }
    
    bool compile(sInfo* info)
    {
        sBlock* block = borrow self.mBlock;
        
        bool existance_result_value = self.existance_result_value;
        
        buffer*% loop_expression_buffer = clone info.loop_expression_buffer;
        string loop_result_value_name = clone info.loop_result_value_name;
        bool loop_result_value_name_defined = info.loop_result_value_name_defined;
        sType*% loop_result_type = clone info.loop_result_type;
        
        add_come_code(info, "for(");
        
        /// compile expression ///
        sNode* expression_node = borrow self.mExpressionNode;
        
        if(expression_node) {
            transpile_conditional_with_free_right_object_value(expression_node).elif {
                return false;
            }
            
            bool in_conditional = info->in_conditional;
            add_come_code(info, ";");
            info->in_conditional = true;
            info->in_conditional = in_conditional;
        }
        else {
            bool in_conditional = info->in_conditional;
            info->in_conditional = true;
            add_come_code(info, ";");
            info->in_conditional = in_conditional;
        }
        
        /// compile expression ///
        sNode* expression_node2 = borrow self.mExpressionNode2;
    
        if(expression_node2) {
            transpile_conditional_with_free_right_object_value(expression_node2).elif {
                return false;
            }
            
            bool in_conditional = info->in_conditional;
            info->in_conditional = true;
            add_come_code(info, ";");
            info->in_conditional = in_conditional;
        }
        else {
            bool in_conditional = info->in_conditional;
            info->in_conditional = true;
            add_come_code(info, ";");
            info->in_conditional = in_conditional;
        }
        
        sNode* expression_node3 = borrow self.mExpressionNode3;
        
        if(expression_node3) {
            transpile_conditional_with_free_right_object_value(expression_node3).elif {
                return false;
            }
        }
        
        bool in_conditional = info->in_conditional;
        info->in_conditional = true;
        add_come_code(info, "){\n");
        info->in_conditional = in_conditional;
    
        transpile_block(block, null, null, info, no_var_table:false, loop_block:true, loop_result_type:existance_result_value);
    
        add_come_code(info, "}\n");
        
        transpiler_clear_last_code(info);
        
        return true;
    }
};

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 11
{
    if(buf === "for") {
        expected_next_character('(');
        
        bool existance_result_value = false;
        
        /// expression ///
        skip_spaces_and_lf();
        sNode*% expression_node;
        if(*info->p.p == ';') {
            expression_node = null;
        }
        else {
            expression_node = expression();
        }
        expected_next_character(';');
        skip_spaces_and_lf();
        sNode*% expression_node2;
        if(*info->p.p == ';') {
            expression_node2 = null;
        }
        else {
            expression_node2 = expression();
        }
        expected_next_character(';');
        skip_spaces_and_lf();
        sNode*% expression_node3;
        if(*info->p.p == ')') {
            expression_node3 = null;
        }
        else {
            expression_node3 = expression();
        }
        expected_next_character(')');
        skip_spaces_and_lf();
        
        sBlock*% block = parse_block();
        
        if(!block.mOmitSemicolon) {
            existance_result_value = false;
        }
        
        return new sForNode(expression_node, expression_node2, expression_node3, block, info, existance_result_value) implements sNode;
    }
    else if(buf === "foreach") {
        bool existance_result_value = false;
        
        expected_next_character('(');
        skip_spaces_and_lf();
        
        string it_name = parse_word();
        
        expected_next_character(',');
        skip_spaces_and_lf();
        
        sNode*% exp = expression();
        
        expected_next_character(')');
        skip_spaces_and_lf();
        
        /// expression ///
        static int n = 0;
        n++;
        
        var o2_name = s"_o2_saved_" + n.to_string();
        
        sNode*% o2_saved = store_var(o2_name@name, null@multiple_assign, null@multiple_declare, null@type, true@alloc, exp, info);
        list<tuple2<string, sNode*%>*%>*% params  = new list<tuple2<string, sNode*%>*%>();
        params.add(t(s"self", create_load_var(o2_name)));
        sNode*% right_value =  create_method_call("begin", create_load_var(o2_name), params, null@method_block, -1@method_block_sline, null@method_generics_types, info);
        sNode*% o1_saved = store_var(it_name@name, null@multiple_assign, null@multiple_declare, null@type, true@alloc, right_value, info);
        sNode*% comma_ = create_comma_exp(o2_saved, o1_saved, info);
        sNode*% expression_node = comma_;
        
        list<tuple2<string, sNode*%>*%>*% params2 = new list<tuple2<string, sNode*%>*%>();
        params2.add(t(s"self", create_load_var(o2_name)));
        sNode*% right_value2 = create_method_call("end", create_load_var(o2_name), params2, null@method_block, -1@method_block_sline, null@method_generics_types, info);
        
        sNode*% expression_node2 = reverse_node(right_value2, info);
        
        list<tuple2<string, sNode*%>*%>*% params3 = new list<tuple2<string, sNode*%>*%>();
        params3.add(t(s"self", create_load_var(o2_name)));
        sNode*% right_value3 = create_method_call("next", create_load_var(o2_name), params3, null@method_block, -1@method_block_sline, null@method_generics_types, info);
        sNode*% expression_node3 = store_var(it_name@name, null@multiple_assign, null@multiple_declare, null@type, false@alloc, right_value3, info);
        
        sBlock*% block = parse_block();
        
        if(!block.mOmitSemicolon) {
            existance_result_value = false;
        }
        
        return new sForNode(expression_node, expression_node2, expression_node3, block, info, existance_result_value) implements sNode;
    }
    
    return inherit(buf, head,head_sline,info);
}
