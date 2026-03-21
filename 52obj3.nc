#include "common.h"

 sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 21
{
    if(!gComeC && buf === "new") {
        var type, name, err = parse_type();
        if(!err) {
            err_msg(info, "parse_type failed");
            exit(2);
        }
        
        if(*info.p == '(') {
            if(type->mClass->mNumber) {
                info->p++;
                skip_spaces_and_lf();
                sNode*% exp = expression();
                
                expected_next_character(')');
                
                return create_new_node(type, null, exp, info);
            }
            else {
                sNode*% obj = create_new_node(type, null, null, info);
                string fun_name = string("initialize");
                
                return parse_method_call(clone obj, string(fun_name), info);
            }
        }
        else if(*info.p == '{') {
            info->p++;
            skip_spaces_and_lf();
            
            list<tuple2<string, sNode*%>*%>*% initializer = new list<tuple2<string, sNode*%>*%>();
            
            while(true) {
                string word = parse_word();
                
                if(*info.p == ':') {
                    info->p++
                    skip_spaces_and_lf();
                    
                    bool no_comma = info->no_comma;
                    info->no_comma = true;
                    sNode*% exp = expression();
                    info->no_comma = no_comma;
                    
                    initializer.add(t(word, exp));
                }
                else if(*info.p == ',') {
                    sNode*% exp = create_load_var(word);
                    
                    initializer.add(t(word, exp));
                }
                else {
                    err_msg(info, "invalid character(21) %c", *info.p);
                    exit(2);
                }
                
                if(*info.p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info.p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    err_msg(info, "invalid character(30) %c", *info.p);
                    exit(2);
                }
            }
            return create_new_node(type, initializer, null, info);
        }
        else {
            return create_new_node(type, null, null, info);
        }
    }
    else if(buf === "true") {
        return create_true_object(info);
    }
    else if(buf === "defer") {
        sBlock*% block = parse_block();
        
        return create_defer_node(block, info);
    }
    else if(buf === "false") {
        return create_false_object(info);
    }
    else if(!gComeC && buf === "delete" && *info.p != '(') {
         sNode*% node = expression();
         
         return create_delete_node(node, info);
    }
    else if(!gComeC && buf === "borrow" && *info.p != '(') {
         sNode*% node = expression();
         
         return create_borrow_node(node, info);
    }
    else if(!gComeC && buf === "clone" && *info.p != '(') {
         sNode*% node = expression();
         
         return create_clone_node(node, info);
    }
    else if(!gComeC && buf === "dupe") {
         sNode*% node = expression();
         
         return create_dupe_node(node, info);
    }
    else if(!gComeC && buf === "dummy_heap") {
         sNode*% node = expression();
         
         return create_dummy_heap_node(node, info);
    }
    else if(!gComeC && buf === "gc_inc" && *info.p == '(') {
         info->p++;
         skip_spaces_and_lf();
         
         sNode*% node = expression();
         
         expected_next_character(')');
         
         return create_gc_inc_node(node, info);
    }
    else if(!gComeC && buf === "gc_dec" && *info.p == '(') {
         info->p++;
         skip_spaces_and_lf();
         
         sNode*% node = expression();
         
         expected_next_character(')');
         
         return create_gc_dec_node(node, info);
    }
    else if(!gComeC && buf === "gc_dec_nofree" && *info.p == '(') {
         info->p++;
         skip_spaces_and_lf();
         
         sNode*% node = expression();
         
         expected_next_character(')');
         
         return create_gc_dec_nofree_node(node, info);
    }
    else if(!gComeC && buf === "lock" && *info.p == '(') {
         info->p++;
         skip_spaces_and_lf();
         
         sNode*% node = expression();
         
         expected_next_character(')');
         
         return create_gc_dec_nofree_node(node, info);
    }
    else if(!gComeC && buf === "isheap" && *info.p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        var param_type, param_name,err = parse_type();
        if(!err) {
            err_msg(info, "parse_type failed");
            exit(2);
        }
        
        var type2_ = solve_generics(param_type, info->generics_type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        expected_next_character(')');
        
        return create_is_heap_node(type2, info);
    }
    else if(buf === "ispointer" && *info.p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        var param_type, param_name,err = parse_type();
        if(!err) {
            err_msg(info, "parse_type failed");
            exit(2);
        }
        
        var type2_ = solve_generics(param_type, info->generics_type, info);
        sType*% type2 = solve_method_generics(type2_, info);
        
        expected_next_character(')');
        
        return create_is_pointer_node(type2, info);
    }
    else if(!gComeC && buf === "opt" && *info.p != '<') {
        
        sNode*% node = expression();
        
        return create_optional_node(node, info);
    }
    else if(!gComeC && buf === "ref" && *info.p != '<') {
        sNode*% node = expression();
        
        return create_ref_node(node, info);
    }
    else if(!gComeC && buf === "span" && *info.p != '<') {
        sNode*% node = expression();
        
        return create_span_node(node, info);
    }
    else if(buf === "using") {
       if(parsecmp("neo-c-pthread")) {
            info->p += strlen("neo-c-pthread");
            skip_spaces_and_lf();
            
            gComePthread = true;
        
            return create_nothing_node();
        }
        else if(parsecmp("comelang")) {
            info->p += strlen("comelang");
            skip_spaces_and_lf();
            
            gComelang = true;
        
            return create_nothing_node();
        }
        else if(parsecmp("neo-c-net")) {
            info->p += strlen("neo-c-net");
            skip_spaces_and_lf();
            
            return create_nothing_node();
        }
        else if(parsecmp("neo-c")) {
            info->p += strlen("neo-c");
            skip_spaces_and_lf();
            
            gComeC = false;
        
            return create_nothing_node();
        }
        else if(parsecmp("c") || parsecmp("C")) {
            info->p += strlen("c");
            skip_spaces_and_lf();
            
            bool come_c = gComeC;
            gComeC = true;
            
            if(*info.p == '{') {
                sNode*% node = parse_normal_block(clang:true);
                
                gComeC = come_c;
                
                return node;
            }
            else {
                return create_nothing_node();
            }
        }
        else if(parsecmp("unsafe")) {
            info->p += strlen("unsafe");
            skip_spaces_and_lf();
            
            bool come_safe = gComeSafe;
            gComeSafe = false;
            
            if(*info.p == '{') {
                sNode*% node = parse_normal_block(unsafe_block:true);
                
                gComeSafe = come_safe;
                
                return node;
            }
            else {
                return create_nothing_node();
            }
        }
        else if(parsecmp("safe")) {
            info->p += strlen("safe");
            skip_spaces_and_lf();
            
            bool come_safe = gComeSafe;
            gComeSafe = true;
            
            if(*info.p == '{') {
                sNode*% node = parse_normal_block();
                
                gComeSafe = come_safe;
                
                return node;
            }
            else {
                return create_nothing_node();
            }
        }
        else {
            err_msg(info, "invalid using");
            exit(2);
        }
    }
    else if(buf === "_Generic" && *info.p == '(') {
        info->p ++;
        skip_spaces_and_lf();
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        sNode*% exp = expression();
        info.no_comma = no_comma;
        
        expected_next_character(',');
        
        list<sType*%>*% types = new list<sType*%>();
        list<sNode*%>*% exps = new list<sNode*%>();
        sNode*% default_exp = null;
        
        while(1) {
            if (strncmp(info->p, "default", strlen("default")) == 0) {
                info->p += strlen("default");
                skip_spaces_and_lf();
                
                expected_next_character(':');
                
                bool no_comma = info.no_comma;
                info.no_comma = true;
                default_exp = expression();
                info.no_comma = no_comma;
            }
            else {
                var type, name, err = parse_type(parse_multiple_type:false);
                
                types.add(type);
                
                expected_next_character(':');
                
                bool no_comma = info.no_comma;
                info.no_comma = true;
                sNode*% node = expression();
                info.no_comma = no_comma;
                
                exps.add(node);
            }
            
            if(*info.p == ',')  {
                info->p++;
                skip_spaces_and_lf();
            }
            else if(*info.p == '\0') {
                err_msg(info, "invalid source end");
                exit(2);
            }
            else if(*info.p == ')') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
        }
        
        return create_generic_node(exp, types, exps, default_exp, info);
    }
    else if(buf === "offsetof" || buf === "__builtin_offsetof") {
        expected_next_character('(');
        
        info.in_offsetof = true;
        var type, name, err = parse_type(parse_multiple_type:false);
        info.in_offsetof = false;
        
        if(!err) {
            err_msg(info, "parse type");
            exit(2);
        }
        
        expected_next_character(',');
        
        string word = parse_word();
        
        expected_next_character(')');
        
        return create_offsetof_node(type, word, info);
    }
    else if(buf === "sizeof") {
        bool paren = false;
        if(*info.p == '(') {
            info->p++;
            skip_spaces_and_lf();
            paren = true;
        }
        //expected_next_character('(');
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info.p) || *info.p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            if(paren && *info.p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            //expected_next_character(')');
            
            return create_sizeof_node(type, info);
        }
        else {
            sNode*% exp;
            if(!paren) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                exp = expression_node();
                info.no_comma = no_comma;
            }
            else {
                exp = expression();
            }
            
            if(paren && *info.p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            //expected_next_character(')');
            
            return create_sizeof_exp_node(exp, info);
        }
    }
/*
    else if(buf === "typeof") {
        //expected_next_character('(');
        
        bool paren = false;
        if(*info.p == '(') {
            info->p++;
            skip_spaces_and_lf();
            paren = true;
        }
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info.p) || *info.p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            //expected_next_character(')');
            
            if(paren && *info.p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            return new sTypeOfNode(type, info) implements sNode;
        }
        else {
            sNode*% exp;
            if(!paren) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                exp = expression_node();
                info.no_comma = no_comma;
            }
            else {
                exp = expression();
            }
            
            //expected_next_character(')');
            
            if(paren && *info.p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            return new sTypeOfExpNode(exp, info) implements sNode;
        }
    }
*/
    else if(buf === "dynamic_typeof") {
        //expected_next_character('(');
        
        bool paren = false;
        if(*info.p == '(') {
            info->p++;
            skip_spaces_and_lf();
            paren = true;
        }
        
        sNode*% exp;
        if(!paren) {
            bool no_comma = info.no_comma;
            info.no_comma = true;
            exp = expression_node();
            info.no_comma = no_comma;
        }
        else {
            exp = expression();
        }
        
        //expected_next_character(')');
        
        if(paren && *info.p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        return create_dynamic_typeof_node(exp, info);
    }
    else if(buf === "dynamic_sizeof") {
        //expected_next_character('(');
        
        bool paren = false;
        if(*info.p == '(') {
            info->p++;
            skip_spaces_and_lf();
            paren = true;
        }
        
        sNode*% exp;
        if(!paren) {
            bool no_comma = info.no_comma;
            info.no_comma = true;
            exp = expression_node();
            info.no_comma = no_comma;
        }
        else {
            exp = expression();
        }
        
        //expected_next_character(')');
        
        if(paren && *info.p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        return create_dynamic_sizeof_exp_node(exp, info);
    }
    else if(buf === "_Alignof") {
        bool paren = false;
        if(*info.p == '(') {
            paren = true;
            info->p++;
            skip_spaces_and_lf();
        }
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info.p) || *info.p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            if(paren && *info.p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            return create_alignof_node(type, info);
        }
        else {
            sNode*% exp;
            if(!paren) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                exp = expression_node();
                info.no_comma = no_comma;
            }
            else {
                exp = expression();
            }
            
            return create_alignof_exp_node(exp, info);
        }
    }
    else if(buf === "__alignof__") {
        bool paren = false;
        if(*info.p == '(') {
            paren = true;
            info->p++;
            skip_spaces_and_lf();
        }
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info.p) || *info.p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            if(paren && *info.p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            return create_alignof_node2(type, info);
        }
        else {
            sNode*% exp;
            if(!paren) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                exp = expression_node();
                info.no_comma = no_comma;
            }
            else {
                exp = expression();
            }
            
            return create_alignof_exp_node2(exp, info);
        }
    }
/*
    else if(buf === "_Alignas") {
        expected_next_character('(');
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info.p) || *info.p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            expected_next_character(')');
            
            return new sAlignAsNode(type, info) implements sNode;
        }
        else {
            var exp = expression();
            
            expected_next_character(')');
            
            return new sAlignAsExpNode(exp, info) implements sNode;
        }
    }
*/
    
    return inherit(buf, head, head_sline, info);
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 94
{
   if(buf === "using") {
        if(parsecmp("neo-c-pthread")) {
            info->p += strlen("neo-c-pthread");
            skip_spaces_and_lf();
            
            gComePthread = true;
        
            return create_nothing_node();
        }
        else if(parsecmp("comelang")) {
            info->p += strlen("comelang");
            skip_spaces_and_lf();
            
            gComelang = true;
        
            return create_nothing_node();
        }
        else if(parsecmp("neo-c-net")) {
            info->p += strlen("neo-c-net");
            skip_spaces_and_lf();
            
            return create_nothing_node();
        }
        else if(parsecmp("neo-c")) {
            info->p += strlen("neo-c");
            skip_spaces_and_lf();
            
            gComeC = false;
        }
        else if(parsecmp("c") || parsecmp("C")) {
            info->p += strlen("c");
            skip_spaces_and_lf();
            
            if(*info.p == '{') {
                info->p++;
                skip_spaces_and_lf(info);
                
                bool come_c = gComeC;
                gComeC = true;
                
                transpile_toplevel(true);
                
                gComeC = come_c;
            }
            else {
                gComeC = true;
            }
        }
        else if(parsecmp("unsafe")) {
            info->p += strlen("unsafe");
            skip_spaces_and_lf();
            
            if(*info.p == '{') {
                info->p++;
                skip_spaces_and_lf(info);
                
                bool come_safe = gComeSafe;
                gComeSafe = false;
                
                transpile_toplevel(true);
                
                gComeSafe = come_safe;
            }
            else {
                gComeSafe = false;
            }
        }
        else if(parsecmp("safe")) {
            info->p += strlen("safe");
            skip_spaces_and_lf();
            
            if(*info.p == '{') {
                info->p++;
                skip_spaces_and_lf(info);
                
                bool come_safe = gComeSafe;
                gComeSafe = true;
                
                transpile_toplevel(true);
                
                gComeSafe = come_safe;
            }
            else {
                gComeSafe = true;
            }
        }
        else {
            err_msg(info, "invalid using");
            exit(2);
        }
        
        return create_nothing_node();
    }
    
    return inherit(buf, head, head_sline, info);
}
