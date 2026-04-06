#include "common.h"

static string payload_enum_field_name(string variant_name, int field_index, int payload_num)
{
    if(payload_num <= 1) {
        return xsprintf("%s_value", variant_name);
    }
    
    return xsprintf("%s_value%d", variant_name, field_index+1);
}

static sType*% create_payload_enum_impl_type(string type_name, list<string>* generics_type_names, sInfo* info)
{
    sType*% type = new sType(type_name);
    
    for(int i=0; i<generics_type_names.length(); i++) {
        type->mGenericsTypes.push_back(new sType(xsprintf("__generics_type%d", i)));
    }
    
    return type;
}

static bool compile_generated_payload_enum_method(string fun_name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, string block_text, sInfo* info)
{
    if(info.funcs.at(fun_name, null)) {
        return true;
    }
    
    char* p = info.p;
    int sline = info.sline;
    int sline_real = info.sline_real;
    int sline_top = info.sline_top;
    string sname = info.sname;
    char* head = info.head;
    buffer*% source = info.source;
    
    info.source = block_text.to_buffer();
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.head = borrow info.source.buf;
    
    info.sline = sline;
    info.sline_real = sline;
    info.sline_top = sline;
    info.sname = string(sname);
    
    sBlock*% block = parse_block(in_function:true);
    
    info.head = head;
    info.source = source;
    if(info.p == null) {
        info.p = borrow info.source.buf;
    }
    info.p = borrow info.source.buf;
    info.p = p;
    info.sline = sline;
    info.sline_real = sline_real;
    info.sline_top = sline_top;
    info.sname = sname;
    
    list<string>*% param_default_parametors = new list<string>();
    
    sFun*% fun = new sFun(fun_name, result_type, param_types, param_names, param_default_parametors, false@external, false@var_args, block, false@static_, info, false@inline_, false@uniq_);
    
    info.funcs.insert(string(fun_name), fun);
    
    sNode*% node = new sFunNode(fun, info) implements sNode;
    
    return node_compile(node, info);
}

static void register_generated_payload_enum_generics_method(string fun_name_key, sType*% impl_type, list<string>*% generics_type_names, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, string block_text, sInfo* info)
{
    if(info.generics_funcs.at(fun_name_key, null)) {
        return;
    }
    
    list<string>*% method_generics_type_names = new list<string>();
    list<string>*% param_default_parametors = new list<string>();
    
    sGenericsFun*% fun = new sGenericsFun(impl_type, generics_type_names, method_generics_type_names, fun_name_key, result_type, param_types, param_names, param_default_parametors, false@var_args, block_text, info, string(info.sname), info.sline);
    
    info.generics_funcs.insert(string(fun_name_key), fun);
}

static bool generate_payload_enum_methods(string type_name, list<tuple2<string, list<sType*%>*%>*%>* variants, list<string>* generics_type_names, sInfo* info)
{
    sType*% impl_type = create_payload_enum_impl_type(type_name, generics_type_names, info);
    bool generic_enum = generics_type_names.length() > 0;
    string none_generics_name = get_none_generics_name(type_name);
    
    int tag_value = 1;
    foreach(it, variants) {
        var variant_name, payload_types = it;
        
        sType*% constructor_self_type = clone impl_type;
        constructor_self_type->mPointerNum = 1;
        constructor_self_type->mHeap = true;
        
        sType*% constructor_result_type = clone constructor_self_type;
        
        list<sType*%>*% constructor_param_types = new list<sType*%>();
        list<string>*% constructor_param_names = new list<string>();
        
        constructor_param_types.push_back(clone constructor_self_type);
        constructor_param_names.push_back(string("self"));
        
        buffer*% constructor_block = new buffer();
        constructor_block.append_str("{ ");
        constructor_block.append_format("self.tag = %d; ", tag_value);
        
        int i = 0;
        foreach(payload_type, payload_types) {
            string param_name = xsprintf("v%d", i+1);
            string field_name = payload_enum_field_name(variant_name, i, payload_types.length());
            
            constructor_param_types.push_back(clone payload_type);
            constructor_param_names.push_back(param_name);
            
            constructor_block.append_format("self.%s = %s; ", field_name, param_name);
            i++;
        }
        constructor_block.append_str("return self; }");
        
        if(generic_enum) {
            register_generated_payload_enum_generics_method(xsprintf("%s_%s", none_generics_name, variant_name), clone impl_type, clone generics_type_names, constructor_result_type, constructor_param_types, constructor_param_names, constructor_block.to_string(), info);
        }
        else {
            string fun_name = create_method_name(clone impl_type, false@no_pointer_name, variant_name, info);
            if(!compile_generated_payload_enum_method(fun_name, constructor_result_type, constructor_param_types, constructor_param_names, constructor_block.to_string(), info)) {
                return false;
            }
        }
        
        sType*% predicate_self_type = clone impl_type;
        predicate_self_type->mPointerNum = 1;
        
        sType*% predicate_result_type = new sType(s"_Bool");
        list<sType*%>*% predicate_param_types = [clone predicate_self_type];
        list<string>*% predicate_param_names = [string("self")];
        
        string predicate_name = xsprintf("is_%s", variant_name);
        string predicate_block = xsprintf("{ return self.tag == %d; }", tag_value);
        
        if(generic_enum) {
            register_generated_payload_enum_generics_method(xsprintf("%s_%s", none_generics_name, predicate_name), clone impl_type, clone generics_type_names, predicate_result_type, predicate_param_types, predicate_param_names, predicate_block, info);
        }
        else {
            string fun_name = create_method_name(clone impl_type, false@no_pointer_name, predicate_name, info);
            if(!compile_generated_payload_enum_method(fun_name, predicate_result_type, predicate_param_types, predicate_param_names, predicate_block, info)) {
                return false;
            }
        }
        
        if(payload_types.length() == 1) {
            sType*% getter_self_type = clone impl_type;
            getter_self_type->mPointerNum = 1;
            
            sType*% getter_result_type = clone payload_types[0];
            list<sType*%>*% getter_param_types = [clone getter_self_type];
            list<string>*% getter_param_names = [string("self")];
            
            string getter_name = xsprintf("get_%s", variant_name);
            string field_name = payload_enum_field_name(variant_name, 0, 1);
            string getter_block = xsprintf("{ return self.%s; }", field_name);
            
            if(generic_enum) {
                register_generated_payload_enum_generics_method(xsprintf("%s_%s", none_generics_name, getter_name), clone impl_type, clone generics_type_names, getter_result_type, getter_param_types, getter_param_names, getter_block, info);
            }
            else {
                string fun_name = create_method_name(clone impl_type, false@no_pointer_name, getter_name, info);
                if(!compile_generated_payload_enum_method(fun_name, getter_result_type, getter_param_types, getter_param_names, getter_block, info)) {
                    return false;
                }
            }
        }
        
        tag_value++;
    }
    
    return true;
}

class sEnumNode extends sNodeBase
{
    new(string type_name, list<tuple3<string, sNode*%, string>*%>*% elements, sType*% type_elements = null, string attribute = s"", sInfo* info)
    {
        self.super();
    
        string self.mTypeName = string(type_name);
        list<tuple3<string, sNode*%, string>*%>*% self.mElements = clone elements;
        
        sType*% self.mTypeElements = type_elements;
        string self.mAttribute = attribute;
    
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
        list<tuple3<string, sNode*%, string>*%>*% elements = self.mElements;
        string attribute = self.mAttribute;
        
        if(elements.length() == 0) {
            return true;
        }
        
        if(type_name !== "" && info.classes.at(type_name, null) == null) {
            info.classes.insert(string(type_name), new sClass(name:string(type_name), enum_:true));
        }
        
        buffer*% buf = new buffer();
        
        if(type_name === "") {
            if(self.mTypeElements) {
                if(attribute === "") {
                    buf.append_format("enum :%s { ", make_type_name_string(self.mTypeElements));
                }
                else {
                    buf.append_format("enum %s :%s { ", attribute, make_type_name_string(self.mTypeElements));
                }
            }
            else {
                if(attribute === "") {
                    buf.append_str("enum { ");
                }
                else {
                    buf.append_format("enum %s { ", attribute);
                }
            }
        }
        else if(self.mTypeElements) {
            buf.append_format("enum %s %s:%s { ", attribute, type_name, make_type_name_string(self.mTypeElements));
        }
        else {
            buf.append_format("enum %s %s { ", attribute, type_name);
        }
        
        int i = 0;
        int n = 0;
        string right_c_value = null;
        foreach(it, elements) {
            var name, value, attribute = it;
            
            if(value == null) {
                buf.append_str(name);
                buf.append_str(" ");
                buf.append_str(attribute);
                buf.append_str("\n");
                
                if(i != elements.length()-1) {
                    buf.append_str(",");
                }
                
                string c_value;
                if(right_c_value) {
                    c_value = xsprintf("(%s+%d)", right_c_value, n);
                }
                else {
                    c_value = xsprintf("(%d)", n);
                }
                
                add_variable_to_global_table_with_int_value(name, new sType(s"int"), c_value, info);
            }
            else {
                node_compile(value).elif {
                    return false;
                }
                
                CVALUE*% right_value = get_value_from_stack(-1, info);
                
                string c_value = xsprintf("(%s)", right_value.c_value);
                
                add_variable_to_global_table_with_int_value(name, new sType(s"int"), c_value, info);
                
                buf.append_format("%s=(%s)", name, right_value.c_value);
                
                if(i != elements.length()-1) {
                    buf.append_str(",");
                }
                
                buf.append_str("\n");
                
                right_c_value = clone right_value.c_value;
                n = 0;
            }
            
            i++;
            n++;
        }
        buf.append_format("};\n");
        
        if(info.struct_definition[string(type_name)] == null || type_name === "") {
            if(type_name === "") {
                static int type_name_num = 0;
                type_name_num++;
                type_name = xsprintf("__enum_type_name_X%d", type_name_num);
                info.struct_definition.insert(string(type_name), buf);
            }
            else {
                info.struct_definition.insert(string(type_name), buf);
            }
        }
    
        return true;
    }
};

class sPayloadEnumNode extends sNodeBase
{
    new(string type_name, list<tuple2<string, list<sType*%>*%>*%>*% variants, list<string>*% generics_type_names, string attribute, sInfo* info)
    {
        self.super();
        
        string self.mTypeName = string(type_name);
        list<tuple2<string, list<sType*%>*%>*%>*% self.mVariants = clone variants;
        list<string>*% self.mGenericsTypeNames = clone generics_type_names;
        string self.mAttribute = string(attribute);
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sPayloadEnumNode");
    }
    
    bool compile(sInfo* info)
    {
        string type_name = self.mTypeName;
        list<tuple2<string, list<sType*%>*%>*%>* variants = borrow self.mVariants;
        list<string>* generics_type_names = borrow self.mGenericsTypeNames;
        string attribute = self.mAttribute;
        
        if(type_name === "") {
            err_msg(info, "payload enum requires a type name");
            return false;
        }
        
        bool generic_enum = generics_type_names.length() > 0;
        
        if(generic_enum) {
            sClass*% generics_class = new sClass(name:type_name, struct_:true, generics:true, generics_num:generics_type_names.length());
            if(attribute !== "") {
                generics_class->mAttribute = string(attribute);
            }
            generics_class->mFields.push_back(t(string("tag"), new sType(s"int")));
            
            foreach(it, variants) {
                var variant_name, payload_types = it;
                
                int i = 0;
                foreach(payload_type, payload_types) {
                    string field_name = payload_enum_field_name(variant_name, i, payload_types.length());
                    generics_class->mFields.push_back(t(field_name, clone payload_type));
                    i++;
                }
            }
            
            info.generics_classes.insert(string(type_name), generics_class);
        }
        else {
            sClass*% klass = new sClass(name:type_name, struct_:true);
            if(attribute !== "") {
                klass->mAttribute = string(attribute);
            }
            klass->mFields.push_back(t(string("tag"), new sType(s"int")));
            
            foreach(it, variants) {
                var variant_name, payload_types = it;
                
                int i = 0;
                foreach(payload_type, payload_types) {
                    string field_name = payload_enum_field_name(variant_name, i, payload_types.length());
                    klass->mFields.push_back(t(field_name, clone payload_type));
                    i++;
                }
            }
            
            info.classes.insert(string(type_name), klass);
            info.types.insert(string(type_name), new sType(type_name));
            
            output_struct(klass, null, info);
        }
        
        return generate_payload_enum_methods(type_name, variants, generics_type_names, info);
    }
};

sNode*% parse_enum(string type_name, string attribute, sInfo* info)
{
    sType*% type_elements = null;
    list<string>*% generics_type_names = new list<string>();
    
    if(*info.p == '<') {
        info->p++;
        skip_spaces_and_lf();
        
        while(true) {
            string generics_name = parse_word();
            generics_type_names.push_back(generics_name);
            
            if(*info.p == '>') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            else if(*info.p == ',') {
                info->p++;
                skip_spaces_and_lf();
            }
            else {
                err_msg(info, "invalid payload enum generics definition");
                return null;
            }
        }
    }
    
    list<string>* generics_type_names_saved = borrow info.generics_type_names;
    info.generics_type_names = clone generics_type_names;
    
    if(*info.p == ':') {
        info->p++;
        skip_spaces_and_lf();
        
        var type,name,err = parse_type();
        
        type_elements = type;
    }
    
    string attribute_mid = parse_struct_attribute();
    if(attribute_mid !== "") {
        if(attribute === "") {
            attribute = attribute_mid;
        }
        else {
            attribute = attribute + " " + attribute_mid;
        }
    }
    
    expected_next_character('{');
    
    parse_struct_attribute();
    
    list<tuple3<string, sNode*%, string>*%>*% elements = new list<tuple3<string, sNode*%, string>*%>();
    list<tuple2<string, list<sType*%>*%>*%>*% payload_variants = new list<tuple2<string, list<sType*%>*%>*%>();
    bool payload_enum = false;
    
    while(true) {
        if(*info.p == '}') {
            info.p ++;
            skip_spaces_and_lf();
            break;
        }
            
        parse_struct_attribute();

        string element_name = parse_word();

        string attribute = parse_struct_attribute();
        
        if(*info.p == '(') {
            if(!payload_enum && elements.length() > 0) {
                foreach(it2, elements) {
                    var prev_name, prev_value, prev_attribute = it2;
                    
                    if(prev_value != null) {
                        err_msg(info, "payload enum doesn't support mixing payload variants and integer values");
                        info.generics_type_names = clone generics_type_names_saved;
                        return null;
                    }
                    
                    payload_variants.push_back(t(prev_name, new list<sType*%>()));
                }
                elements.reset();
            }
            
            payload_enum = true;
            
            info->p++;
            skip_spaces_and_lf();
            
            list<sType*%>*% payload_types = new list<sType*%>();
            
            while(*info.p != ')') {
                var payload_type, name, err = parse_type(parse_multiple_type:false);
                
                if(!err) {
                    info.generics_type_names = clone generics_type_names_saved;
                    return null;
                }
                
                payload_types.push_back(payload_type);
                
                if(*info.p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info.p == ')') {
                }
                else {
                    err_msg(info, "invalid payload enum variant");
                    info.generics_type_names = clone generics_type_names_saved;
                    return null;
                }
            }
            
            info->p++;
            skip_spaces_and_lf();
            
            payload_variants.push_back(t(element_name, payload_types));
        }
        else if(payload_enum) {
            if(*info.p == '=' && *(info->p+1) != '=') {
                err_msg(info, "payload enum doesn't support integer values");
                info.generics_type_names = clone generics_type_names_saved;
                return null;
            }
            
            payload_variants.push_back(t(element_name, new list<sType*%>()));
        }
        
        if(!payload_enum && *info.p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_struct_attribute();
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            sNode*% element_value = expression();
                
            info.no_comma = no_comma;
            
            elements.push_back(t(element_name, element_value, attribute));
        }
        else if(!payload_enum) {
            elements.push_back(t(element_name, (sNode*%)null, attribute));
        }

        parse_struct_attribute();
        
        if(*info.p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }

        parse_struct_attribute();
        
        if(*info.p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
    }
    
    info.generics_type_names = clone generics_type_names_saved;
    
    string attribute2 = parse_struct_attribute();
    
    if(attribute === "" && attribute2 === "") {
    }
    else if(attribute === "") {
        attribute = attribute2;
    }
    else if(attribute2 === "") {
    }
    else {
        attribute = attribute + " " + attribute2;
    }
    
    if(payload_enum) {
        if(type_elements != null) {
            err_msg(info, "payload enum doesn't support integer base type");
            return null;
        }
        if(generics_type_names.length() == 0 && payload_variants.length() == 0) {
            err_msg(info, "invalid payload enum");
            return null;
        }
        if(type_name !== "") {
            if(generics_type_names.length() > 0) {
                info.generics_classes.insert(string(type_name), new sClass(name:type_name, struct_:true, generics:true, generics_num:generics_type_names.length()));
            }
            else {
                info.classes.insert(string(type_name), new sClass(name:type_name, struct_:true));
                info.types.insert(string(type_name), new sType(type_name));
            }
        }
        
        return new sPayloadEnumNode(type_name, payload_variants, generics_type_names, attribute, info) implements sNode;
    }
    
    if(generics_type_names.length() > 0) {
        err_msg(info, "integer enum doesn't support generics");
        return null;
    }
    if(type_name !== "") {
        info.classes.insert(string(type_name), new sClass(name:string(type_name), enum_:true));
        info.types.insert(string(type_name), new sType(type_name));
    }
    
    return new sEnumNode(type_name, elements, type_elements, attribute, info) implements sNode;
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 96
{
    if(buf === "enum") {
        string attribute = parse_struct_attribute();
        
        string type_name = string("");
        if(*info.p != '{' && *info.p != ':') {
            string attribute_after_enum = parse_struct_attribute();
            if(attribute_after_enum !== "") {
                if(attribute === "") {
                    attribute = attribute_after_enum;
                }
                else {
                    attribute = attribute + " " + attribute_after_enum;
                }
            }
            
            if(*info.p != '{' && *info.p != ':') {
                type_name = parse_word();
            }
        }
        
        return parse_enum(type_name, attribute, info);
    }
    
    return inherit(buf, head, head_sline, info);
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 16
{
    /// backtrace ///
    bool define_enum = false;
    {
        char* p = info.p;
        int sline = info.sline;
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        if(buf === "enum") {
            if(xisalpha(*info.p) || *info.p == '_') {
                string type_name = parse_word();
                
                if(*info.p == '<') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    while(true) {
                        parse_word();
                        
                        if(*info.p == '>') {
                            info->p++;
                            skip_spaces_and_lf();
                            break;
                        }
                        else if(*info.p == ',') {
                            info->p++;
                            skip_spaces_and_lf();
                        }
                        else {
                            break;
                        }
                    }
                }
                
                (void)parse_struct_attribute();
                
                if(*info.p == ':' || *info.p == '{') {
                    if(*info.p == ':') {
                        info->p++;
                        skip_spaces_and_lf();
                        var type, name, err = parse_type();
                    }
                    
                    (void)parse_struct_attribute();
                }
                
                if(*info.p == '{') {
                    skip_block();
                    
                    if(*info.p == ';') {
                        define_enum = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
        info.no_output_come_code = no_output_come_code;
    }
    
    if(define_enum) {
        string struct_attribute = parse_struct_attribute();
        
        string type_name = parse_word();
        
        return parse_enum(type_name, struct_attribute, info);
    }
    
    return inherit(buf, head, head_sline, info);
}
