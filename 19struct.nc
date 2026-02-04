#include "common.h"

void child_output_struct(sType* type, string struct_name, buffer* buf, bool* existance_generics, string name, int indent, sInfo* info, bool* named_child)
{
    sClass* klass = type->mClass;
    
    if(struct_name !== "") {
        if(klass.mStruct) {
            buf.append_str("    " * indent);
            buf.append_format("struct %s {\n", struct_name);
        }
        else if(klass.mUnion) {
            buf.append_str("    " * indent);
            buf.append_format("union %s {\n", struct_name);
        }
    }
    else {
        if(klass.mStruct) {
            buf.append_str("    " * indent);
            buf.append_str("struct {\n");
        }
        else if(klass.mUnion) {
            buf.append_str("    " * indent);
            buf.append_str("union {\n");
        }
    }
            
    indent++;
    foreach(it, klass.mFields) {
        var name2, type2 = it;
            
        if(is_contained_generics_class(type2, info)) {
            *existance_generics = true;
        }
        
        type2->mStatic = false;
        
        sClass* klass = type2->mClass;
        
        if(type2->mAnonymous) {
        //if(type2->mAnonymous && name !== name2) {
            //info.struct_definition.remove(type2->mAnonymousName);
            child_output_struct(type2, s"", buf, existance_generics, name2, indent, info, named_child);
        }
        else if(type2->mInnerStruct) {
            sType*% already_defined_child_type = info.named_child_struct[type2->mInnerStructName];
            
            if(already_defined_child_type && ((already_defined_child_type->mClass->mStruct && type2->mClass->mStruct) || (already_defined_child_type->mClass->mUnion && type2->mClass->mUnion)))
            {
            //    info.struct_definition.remove(type2->mInnerStructName);
                buf.append_str("    " * indent);
                if(type2->mClass->mStruct) {
                    buf.append_str("struct " + type2->mInnerStructName);
                }
                else {
                    buf.append_str("union " + type2->mInnerStructName);
                }
                
                buf.append_str(" " + name2);
                
                buf.append_str(";\n");
            }
            else {
                info.named_child_struct.insert(string(type2->mInnerStructName), clone type2);
                info.struct_definition.remove(type2->mInnerStructName);
                child_output_struct(type2, type2->mInnerStructName, buf, existance_generics, name2, indent, info, named_child);
            }
            
            *named_child = true;
        }
        else {
            buf.append_str("    " * indent);
            buf.append_str(make_define_var(type2, name2));
            buf.append_str(";\n");
        }
    }
            
    if(type->mAnonymousVarName) {
        buf.append_str("    " * (indent-1));
        buf.append_format("};\n");
    }
    else {
        buf.append_str("    " * (indent-1));
        buf.append_format("} %s;\n", name);
    }
}

void output_struct(sClass* klass, string pragma, sInfo* info, bool anonymous=false)
{
    if(klass->mFields.length() == 0) {
        return;
    }
    
    char* name = klass.mName;
    bool current_stack = strlen(name) > strlen("__current_stack") && memcmp(name,"__current_stack", strlen("__current_stack")) == 0;
    
    buffer*% buf = new buffer();
        
    if(pragma) {
        buf.append_str(pragma);
    }
    buf.append_format("struct %s\n{\n", klass.mName);
            
    bool existance_generics = false;
    bool named_child = false;
    foreach(it, klass.mFields) {
        var name, type = it;
            
        if(is_contained_generics_class(type, info)) {
            existance_generics = true;
        }
        
        type->mStatic = false;
        
        if(type->mAnonymous && !current_stack) {
            //info.struct_definition.remove(type->mAnonymousName);
            child_output_struct(type, s"", buf, &existance_generics, name, 1, info, &named_child);
        }
        else if(type->mInnerStruct && !current_stack) {
            sType*% already_defined_child_type = info.named_child_struct[type->mInnerStructName];
            
            if(already_defined_child_type && ((already_defined_child_type->mClass->mStruct && type->mClass->mStruct) || (already_defined_child_type->mClass->mUnion && type->mClass->mUnion)))
            {
 //               info.struct_definition.remove(type->mInnerStructName);
                buf.append_str("    ");
                if(type->mClass->mStruct) {
                    buf.append_str("struct " + type->mInnerStructName);
                }
                else {
                    buf.append_str("union " + type->mInnerStructName);
                }
                
                buf.append_str(" " + name);
                
                buf.append_str(";\n");
            }
            else {
                info.named_child_struct.insert(string(type->mInnerStructName), clone type);
                info.struct_definition.remove(type->mInnerStructName);
                child_output_struct(type, type->mInnerStructName, buf, &existance_generics, name, 1, info, &named_child);
            }
            named_child = true;
        }
        else {
            buf.append_str("    ");
            buf.append_str(make_define_var(type, name));
            buf.append_str(";\n");
        }
    }
            
    if(klass->mAttribute == null) {
        buf.append_str("};\n");
    }
    else {
        buf.append_format("} %s;\n", klass->mAttribute);
    }
    if(pragma) {
        buf.append_str("#pragma pack(pop)");
    }
    
    if(anonymous && named_child) return;
            
    if(info.struct_definition[string(name)] == null && !existance_generics) {
        info.struct_definition.insert(string(name), buf);
    }
}

bool output_generics_struct(sType* type, sType* generics_type, sInfo* info)
{
    string new_name = create_generics_name(type, info);
    
    if(!info.classes.find(new_name)) {
        sClass*% generics_class = info.generics_classes[string(type.mClass.mName)];
        
        if(generics_class == null) {
            err_msg(info, "generics_class(%s) is null", type.mClass.mName);
            return false;
        }
        
        info.classes.insert(string(new_name), new sClass(name:new_name, struct_:true));
        
        sClass* new_class = borrow info.classes.at(string(new_name), null);
        
        int i = 0;
        foreach(it, generics_class.mFields) {
            var name, type = it;
            
            sType*% new_type_ = solve_generics(type, generics_type, info);
            sType*% new_type = solve_method_generics(new_type_, info);
            
            new_class.mFields.push_back(t(clone name, clone new_type));
        }
        
        type->mNoSolvedGenericsType = clone type;
        type->mNoSolvedGenericsType.mPointerNum = type->mPointerNum;
        
        type->mClass = new_class;
        type->mGenericsTypes.reset();
        
        output_struct(new_class, null, info);
    }
    else { 
        if(type->mNoSolvedGenericsType == null && type->mGenericsTypes.length() > 0) {
            type->mNoSolvedGenericsType = clone type;
            type->mNoSolvedGenericsType.mPointerNum = type->mPointerNum;
        }
        type->mClass = borrow info.classes[string(new_name)];
        type->mGenericsTypes.reset();
    }
    
    return true;
}

class sStructNode extends sNodeBase
{
    new(string name, sClass* klass, sInfo* info, bool anonymous=false)
    {
        self.super();
    
        string self.mName = string(name);
        sClass* self.mClass = klass;
        string self.pragma = info.pragma;
        bool self.anonymous = anonymous;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sStructNode");
    }
    
    bool compile(sInfo* info)
    {
        sClass* klass = self.mClass;
        string name = string(self.mName);
        string pragma = self.pragma;
        bool anonymous = self.anonymous;
        
        output_struct(klass, pragma, info, anonymous);
    
        return true;
    }
};

class sStructNobodyNode extends sNodeBase
{
    new(string name, sInfo* info)
    {
        self.super();
    
        string self.mName = name;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sStructNobodyNode");
    }
    
    bool compile(sInfo* info)
    {
        string name = self.mName;
        
        info.previous_struct_definition.insert(string(name), xsprintf("struct %s;\n", name).to_buffer());
    
        return true;
    }
};


sNode*% create_nothing_node(sInfo* info=info)
{
    return new sNothingNode(info) implements sNode;
}

class sClassNode extends sNodeBase
{
    new(string name, sClass*% klass, list<sNode*%>*% methods, sInfo* info)
    {
        self.super();
    
        string self.mName = string(name);
        sClass*% self.mClass = clone klass;
        
        list<sNode*%>*% self.mMethods = methods;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sClassNode");
    }
    
    bool compile(sInfo* info)
    {
        sClass*% klass = self.mClass;
        string name = string(self.mName);
        
        if(info.classes.at(name, null) == null) {
            info.classes.insert(name, clone klass);
        }
        
        if(info.classes.at(name, null) && info.classes.at(name, null).mFields.length() == 0) {
            sClass*% klass2 = info.classes.at(name, null);
            klass2.mFields = clone klass.mFields;
        }
        
        sType*% type = new sType(name);
        sType* override_ = borrow info.types.at(string(name), null);
        if(override_) {
            if(override_->mTypedef) {
                type->mTypedef = true;
            }
        }
        info.types.insert(string(name), clone type);
        
        output_struct(klass, null, info);
        
        foreach(it, self.mMethods) {
            node_compile(it).elif {
                return false;
            }
        }
        
        return true;
    }
};

sNode*% parse_struct(string type_name, string struct_attribute, sInfo* info, bool anonymous=false)
{
    info.parse_struct_recursive_count++;
    
    sClass* klass;
    if(info.classes.at(type_name, null) == null) {
        sClass*% klass_ = new sClass(name:type_name, struct_:true);
        info.classes.insert(string(type_name), klass_);
        
        klass = borrow info.classes[string(type_name)];
    }
    else {
        klass = borrow info.classes.at(type_name, null);
        klass.mFields.reset();
    }
    
    sType*% type = new sType(type_name);
    if(info.parse_struct_recursive_count >= 2) {
        type->mInnerStruct = true;
        type->mInnerStructName = string(type_name);
    }
    sType* override_ = borrow info.types.at(type_name, null);
    if(override_) {
        if(override_->mTypedef) {
            type->mTypedef = true;
        }
    }
    info.types.insert(type_name, clone type);
    
    sClass* parent_class = null;
    if(parsecmp("extends")) {
        parse_word();
        
        string parent_class_name = parse_word();
        
        parent_class = borrow info.classes[parent_class_name];
        
        if(parent_class == null) {
            err_msg(info, "invalid class name(%s)", parent_class_name);
            exit(1);
        }
    }
    
    expected_next_character('{');
    
    while(true) {
        skip_spaces_and_lf();
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        
        skip_spaces_and_lf();
        
        bool multiple_declare = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            var type, name, err = backtrace_parse_type(parse_variable_name:true);
            
            if(err && *info->p == ',') {
                multiple_declare = true;
            }
                
            info.p = p;
            info.sline = sline;
        }
        
        if(multiple_declare) {
            var base_type, name, err = parse_type();
            
            var type2, name2 = parse_variable_name_on_multiple_declare(base_type, true@first, info);
            
            klass.mFields.push_back(t(name2, type2));
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                var type2, name2 = parse_variable_name_on_multiple_declare(base_type, false@first, info);
                
                klass.mFields.push_back(t(name2, type2));
            }
        }
        else {
            skip_spaces_and_lf();
            var type2, name, err = parse_type(parse_variable_name:true);
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            
            klass.mFields.push_back(t(name, type2));
        }
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        skip_spaces_and_lf();
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        skip_spaces_and_lf();
    }
    
    string struct_attribute2 = parse_struct_attribute();
    
    if(parent_class) {
        klass->mParentClassName = clone parent_class->mName;
        //info.classes.insert(string(klass->mName), clone klass);
    }
    
    if(struct_attribute === "" && struct_attribute2 === "") {
    }
    else if(struct_attribute === "") {
        klass->mAttribute = struct_attribute2;
    }
    else if(struct_attribute2 === "") {
        klass->mAttribute = struct_attribute;
    }
    else {
        klass->mAttribute = struct_attribute + " " + struct_attribute2;
    }
    
    sNode*% node = new sStructNode(string(type_name), klass, info, anonymous) implements sNode;
    
    node_compile(node, info).elif {
        info.parse_struct_recursive_count--;
        return null;
    }
    
    info.parse_struct_recursive_count--;
    return new sNothingNode(info) implements sNode;
}


sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 98
{
    if(buf === "struct") {
        info.parse_struct_recursive_count++;
        char* source_head = head;
        
        string struct_attribute = parse_struct_attribute();
        
        string type_name = parse_word();
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
            
            sClass*% struct_class;
            if(info.classes.at(type_name, null) == null) {
                struct_class = new sClass(name:type_name, struct_:true);
                
                info.classes.insert(type_name, new sClass(name:type_name, struct_:true));
            }
            else {
                struct_class = info.classes.at(type_name, null);
            }
            sType*% type = new sType(type_name);
            if(info.parse_struct_recursive_count >= 2) {
                type->mInnerStruct = true;
                type->mInnerStructName = string(type_name);
            }
            sType* override_ = borrow info.types.at(type_name, null);
            if(override_) {
                if(override_->mTypedef) {
                    type->mTypedef = true;
                }
            }
            info.types.insert(type_name, type);
            
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append(source_head, source_tail - source_head);
            
            info.parse_struct_recursive_count--;
            return new sStructNobodyNode(string(type_name), info) implements sNode;
        }
        else if(*info->p == '<') {
            info.generics_type_names.reset();
            
            info->p++;
            skip_spaces_and_lf();
            
            while(true) {
                var T = parse_word() ;
                info.generics_type_names.push_back(clone T);
                
                if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else {
                    err_msg(info, "invalid generics struct definition");
                    exit(2);
                }
            }
            
            if(info.generics_classes.at(string(type_name), null) != null) {
                err_msg(info, "redefined generics struct(%s)", type_name);
                exit(2);
            }
            
            sClass*% generics_class = new sClass(name:type_name, struct_:true);
            
            info.generics_classes.insert(string(type_name), generics_class);
            
            expected_next_character('{') ;
            
            while(true) {
                skip_spaces_and_lf();
                
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
        
                skip_spaces_and_lf();
                
                var type2, name, err = parse_type(parse_variable_name:true);
                
                if(!err) {
                    printf("%s %d: parse_type failed\n", info->sname, info->sline);
                    exit(2);
                }
                
                if(*info->p == ',') {
                    generics_class.mFields.push_back(t(name, type2));
                    
                    while(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        string name2 = parse_word();
                        
                        var type3 = clone type2;
                        
                        if(*info->p == ':') {
                            info->p++;
                            skip_spaces_and_lf();
                            
                            bool no_comma = info->no_comma;
                            info->no_comma = true;
                            sNode*% node = expression();
                            info->no_comma = no_comma;
                            
                            type3->mSizeNum = node;
                        }
                        
                        generics_class.mFields.push_back(t(name2, type3));
                    }
                }
                else {
                    generics_class.mFields.push_back(t(name, type2));
                }
                
                if(*info->p == ';') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                
                skip_spaces_and_lf();
                
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                skip_spaces_and_lf();
            }
            
            skip_spaces_and_lf();
            
            info.generics_type_names.reset();
            
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append_str("struct ");
            header.append(source_head, source_tail - source_head);
            
            info.parse_struct_recursive_count--;
            return new sNothingNode(info) implements sNode;
        }
        else {
            sClass*% struct_class;
            if(info.classes.at(type_name, null) == null) {
                struct_class = new sClass(name:type_name, struct_:true);
                info.classes.insert(string(type_name), struct_class);
            }
            else {
                struct_class = info.classes.at(type_name, null);
                struct_class.mFields.reset();
            }
            
            sType*% type = new sType(type_name);
            if(info.parse_struct_recursive_count >= 2) {
                type->mInnerStruct = true;
                type->mInnerStructName = string(type_name);
            }
            sType* override_ = borrow info.types.at(type_name, null);
            if(override_) {
                if(override_->mTypedef) {
                    type->mTypedef = true;
                }
            }
            info.types.insert(type_name, type);
            
            sClass* parent_class = null;
            if(parsecmp("extends")) {
                parse_word();
                
                string parent_class_name = parse_word();
                
                parent_class = borrow info.classes[parent_class_name];
                
                if(parent_class == null) {
                    err_msg(info, "invalid class name(%s)", parent_class_name);
                    exit(1);
                }
            }
            
            expected_next_character('{') ;
           
            while(true) {
                skip_spaces_and_lf();
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                skip_spaces_and_lf();
                    
                bool multiple_declare = false;
                {
                    char* p = info.p;
                    int sline = info.sline;
                    
                    var type, name, err = backtrace_parse_type(parse_variable_name:true);
                    
                    if(err && *info->p == ',') {
                        multiple_declare = true;
                    }
                        
                    info.p = p;
                    info.sline = sline;
                }
                
                if(multiple_declare) {
                    var base_type, name, err = parse_type();
                    
                    var type2,name2 = parse_variable_name_on_multiple_declare(base_type, true@first, info);
                    
                    struct_class.mFields.push_back(t(name2, type2));
                    
                    while(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        var type2, name2 = parse_variable_name_on_multiple_declare(base_type, false@first, info);
                        
                        struct_class.mFields.push_back(t(name2, type2));
                    }
                }
                else {
                    var type2, name, err = parse_type(parse_variable_name:true);
                    if(!err) {
                        printf("%s %d: parse_type failed\n", info->sname, info->sline);
                        exit(2);
                    }
                    
                    struct_class.mFields.push_back(t(name, type2));
                }
                
                if(*info->p == ';') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                //expected_next_character(';') ;
                
                skip_spaces_and_lf();
                
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                skip_spaces_and_lf();
            }
            
            string struct_attribute2 = parse_struct_attribute();
            
            info.generics_type_names.reset();
            
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append(source_head, source_tail - source_head);
            
            if(struct_attribute === "" && struct_attribute2 === "") {
            }
            else if(struct_attribute === "") {
                struct_class->mAttribute = struct_attribute2;
            }
            else if(struct_attribute2 === "") {
                struct_class->mAttribute = struct_attribute;
            }
            else {
                struct_class->mAttribute = struct_attribute + " " + struct_attribute2;
            }
            if(parent_class) {
                struct_class->mParentClassName = clone parent_class->mName;
            }
            
            info.parse_struct_recursive_count--;
            return new sStructNode(string(type_name), struct_class, info) implements sNode;
        }
    }
    else if(!gComeC && ((buf === "uniq" && info.p.substring(0, strlen("class")) === "class")
        || buf === "class") )
    {
        info.parse_struct_recursive_count++;
        bool uniq_class = false;
        if(buf === "uniq")  {
            parse_word();
            uniq_class = true;
        }
        
        char* source_head = head;
        
        string type_name = parse_word();
        
        sClass* parent_class = null;
        if(parsecmp("extends")) {
            parse_word();
            
            string parent_class_name = parse_word();
            
            parent_class = borrow info.classes[parent_class_name];
            
            if(parent_class == null) {
                err_msg(info, "invalid class name(%s)", parent_class_name);
                exit(1);
            }
        }
        
        list<sClass*>*% parent_classes = new list<sClass*>();
        
        sClass* parent_class2 = parent_class;
        while(parent_class2) {
            parent_classes.add(parent_class2);
            if(parent_class->mParentClassName) {
                parent_class2 = borrow info.classes[string(parent_class->mParentClassName)];
            }
            else {
                parent_class2 = null;
            }
        }
        
        sClass*% struct_class = new sClass(name:type_name, struct_:true, uniq_:uniq_class);
        
        if(parent_class) {
            struct_class->mParentClassName = clone parent_class->mName;
        }
        
        sClass* defining_class = info.defining_class;
        info.defining_class = struct_class;
        
        if(info.classes.at(type_name, null) == null) {
            info.classes.insert(type_name, clone struct_class);
        }
        else {
            info.classes[type_name].mUniq = uniq_class;
        }
        foreach(parent, parent_classes.reverse()) {
            foreach(it, parent.mFields) {
                struct_class->mFields.add(clone it);
            }
        }
        
        expected_next_character('{') ;
        
        char* head = info.p;
       
        list<sNode*%>*% methods = new list<sNode*%>();
        while(true) {
            skip_spaces_and_lf();
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            skip_spaces_and_lf();
            
            bool include_ = parsecmp("include");
                
            bool multiple_declare = false;
            if(include_ == false)
            {
                char* p = info.p;
                int sline = info.sline;
                
                if((info->end - info->p) >= strlen("new(") && memcmp(info.p, "new(", 4) != 0) {
                    var type, name, err = backtrace_parse_type(parse_variable_name:true);
                    
                    if(err && *info->p == ',') {
                        multiple_declare = true;
                    }
                }
                    
                info.p = p;
                info.sline = sline;
            }
            bool define_function_flag = false;
            if(include_ == false)
            {
                char* p = info.p;
                int sline = info.sline;
                
                if((info->end - info->p) >= strlen("new(") && memcmp(info.p, "new(", 4) == 0) {
                    define_function_flag = true;
                }
                else {
                    bool invalid_type = false;
                    if(xisalpha(*info->p) || *info->p == '_') {
                        var result_type, fun_name, err = backtrace_parse_type();
                    }
                    
                    string word = null;
                    if(xisalnum(*info.p) || *info->p == '_') {
                        while(xisalnum(*info.p) || *info->p == '_') {
                            word = parse_word();
                        }
                    }
                    else {
                        word = null;
                    }
                    
                    if(word) {
                        if(is_type_name(word)) {
                            while(*info->p == '*') {
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            while(*info->p == '%') {
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            if(*info->p == '[' && *(info->p+1) == ']') {
                                info->p += 2;
                                skip_spaces_and_lf();
                            }
                            if(*info->p == ':') {
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            if(*info->p == ':') {
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            if(xisalnum(*info.p) || *info->p == '_') {
                                word = parse_word();
                            }
                        }
                        
                        /// fun name ///
                        if(strlen(word) > 0 && (*info->p == '(' || (*info->p == ':' && *(info->p+1) == ':'))) {
                            define_function_flag = true;
                        }
                    }
                }
                
                info.p = p;
                info.sline = sline;
            }
            
            if(define_function_flag) {
                char* tail = info.p;
                
                int pointer_num = 1;
        
                info->class_type = new sType(type_name);
                info->class_type->mPointerNum = pointer_num;
                
                info->in_class = true;
                
                sNode*% method = parse_function(info);
                
                info->class_type = null;
                info->in_class = false;
                
                methods.push_back(method);
            }
            else if(multiple_declare) {
                var base_type, name, err = parse_type();
                
                var type2,name2 = parse_variable_name_on_multiple_declare(base_type, true@first, info);
                
                struct_class.mFields.push_back(t(name2, type2));
                
                while(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    var type2, name2 = parse_variable_name_on_multiple_declare(base_type, false@first, info);
                    
                    struct_class.mFields.push_back(t(name2, type2));
                }
                expected_next_character(';') ;
            }
            else {
                var type2, name, err = parse_type(parse_variable_name:true);
                if(!err) {
                    printf("%s %d: parse_type failed\n", info->sname, info->sline);
                    exit(2);
                }
                
                struct_class.mFields.push_back(t(name, type2));
                
                if(*info->p == ';') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                //expected_next_character(';') ;
            }
            
            skip_spaces_and_lf();
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            skip_spaces_and_lf();
        }
        
        info.generics_type_names.reset();
        
        info.defining_class = defining_class;
        
        info.parse_struct_recursive_count--;
        return new sClassNode(string(type_name), struct_class, methods, info) implements sNode;
    }
    
    return inherit(buf, head, head_sline, info) ;
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 14
{
    /// backtrace ///
    bool define_struct = false;
    {
        char* p = info.p;
        int sline = info.sline;
        bool no_output_come_code = info.no_output_come_code;
        info.no_output_come_code = true;
        
        if(buf === "struct") {
            if(xisalpha(*info->p) || *info->p == '_') {
                string type_name = parse_word();
                
                if(parsecmp("extends")) {
                    parse_word();
                    parse_word();
                }
                
                if(*info->p == '{') {
                    skip_block();
                    
                    if(*info->p == ';') {
                        define_struct = true;
                    }
                }
            }
        }
        
        info.no_output_come_code = no_output_come_code;
        info.p = p;
        info.sline = sline;
    }
    
    if(define_struct) {
        string struct_attribute = parse_struct_attribute();
        
        string type_name = parse_word();
        
        return parse_struct(type_name, struct_attribute, info);
    }
    
    return inherit(buf, head, head_sline, info);
}
