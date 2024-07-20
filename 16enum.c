#include "common.h"

class sEnumNode extends sNodeBase
{
    new(string type_name, list<tuple2<string,sNode*%>*%>* elements, bool output, sInfo* info)
    {
        self.super();
    
        string self.mTypeName = string(type_name);
        list<tuple2<string, sNode*%>*%>*% self.mElements = clone elements;
        
        bool self.mOutput = output;
        
        string self.mDeclareSName = string(info->sname);
    
        return self;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sEnumNode");
    }
    
    bool compile(sInfo* info)
    {
        string type_name = self.mTypeName;
        list<tuple2<string, sNode*%>*%>* elements = self.mElements;
        
        buffer*% buf = new buffer();
        
        if(type_name === "") {
            buf.append_str(xsprintf("enum { ", type_name));
        }
        else {
            buf.append_str(xsprintf("enum %s { ", type_name));
        }
        
        int i = 0;
        int n = 0;
        foreach(it, elements) {
            var name, value = it;
            
            if(info.gv_table.mVars.at(string(name), null) != null) {
                self.mOutput = false;
            }
            
            if(value == null) {
                buf.append_str(name);
                buf.append_str("\n");
                
                if(i != elements.length()-1) {
                    buf.append_str(",");
                }
                
                string c_value = xsprintf("%d", n);
                
                add_variable_to_global_table_with_int_value(name, new sType("int"), c_value, info);
            }
            else {
                if(!node_compile(value)) {
                    return false;
                }
                
                CVALUE*% right_value = get_value_from_stack(-1, info);
                dec_stack_ptr(1, info);
                
                add_variable_to_global_table_with_int_value(name, new sType("int"), right_value.c_value, info);
                
                buf.append_str(xsprintf("%s=%s", name, right_value.c_value));
                
                if(i != elements.length()-1) {
                    buf.append_str(",");
                }
                
                buf.append_str("\n");
                
                n = atoi(right_value.c_value);
            }
            
            i++;
            n++;
        }
        buf.append_str(xsprintf("};\n", type_name));
        
        if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
        }
        else {
            if(self.mOutput) {
                add_come_code_at_source_head(info, "%s", buf.to_string());
            }
        }
    
        return true;
    }
};

sNode*% parse_enum(string type_name, sInfo* info)
{
    sClass*% klass;
    bool output;
    if(info.classes.at(type_name, null) == null) {
        output = true;
        klass = new sClass(name:type_name, enum_:true);
        info.classes.insert(type_name, klass);
    }
    else {
        output = false;
        klass = clone info.classes.at(type_name, null);
    }
    
    expected_next_character('{');
    
    list<tuple2<string,sNode*%>*%>*% elements = new list<tuple2<string,sNode*%>*%>();
    
    while(true) {
        parse_sharp();

        string element_name = parse_word();

        parse_sharp();
        
        if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf();
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            sNode*% element_value = expression();
                
            info.no_comma = no_comma;
            
            if(!info.no_output_err) {
                elements.push_back((element_name, element_value));
            }
        }
        else {
            if(!info.no_output_err) {
                elements.push_back((element_name, null));
            }
        }

        parse_sharp();
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }

        parse_sharp();
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
    }
    
    return new sEnumNode(type_name, elements, output, info) implements sNode;
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 96
{
    if(buf === "enum") {
        char* source_head = info.p;
        
        bool output = true;
        
        string type_name = null;
        if(*info->p == '{') {
            type_name = string("");
        }
        else {
            if(info.classes.at(type_name, null) == null) {
            }
            else {
                output = false;
            }
            
            type_name = parse_word();
            
            info.classes.insert(type_name, new sClass(name:type_name, enum_:true));
        }
        
        expected_next_character('{');
        
        list<tuple2<string,sNode*%>*%>*% elements = new list<tuple2<string,sNode*%>*%>();
        
        while(true) {
            parse_sharp();
            string element_name = parse_word();
            parse_sharp();

            if(*info->p == '=') {
                info->p++;
                skip_spaces_and_lf();

                bool no_comma = info.no_comma;
                info.no_comma = true;
                sNode*% element_value = expression();
                
                info.no_comma = no_comma;
                
                elements.push_back((element_name, element_value));
            }
            else {
                elements.push_back((element_name, null));
            }
            parse_sharp();

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
            }
            parse_sharp();

            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
        }
        
        char* source_tail = info.p;
        
        buffer*% header = new buffer();
        header.append_str("enum ");
        header.append(source_head, source_tail - source_head);
        
        add_come_code_at_come_header(info, "%s;\n", header.to_string());
        
        return new sEnumNode(type_name, elements, output, info) implements sNode;
    }
    
    return inherit(buf, head, head_sline, info);
}
