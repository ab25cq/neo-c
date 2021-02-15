#include "common.h"

bool sevenstars_string_index(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject search_str = (*stack_ptr-2)->mObjectValue;
    CLObject default_value = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.index");
        return false;
    }
    if(!check_type(search_str, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.index");
        return false;
    }
    if(!check_type(default_value, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.index");
        return false;
    }

    /// sevenstars to neo-c
    char* self_value = get_string_mem(self);
    char* search_str_value = get_string_mem(search_str);
    int default_value_value = get_int_value(default_value);

    /// go ///
    int result = string(self_value).index(search_str_value, default_value_value);

    (*stack_ptr)->mObjectValue = create_int_object(result, info);
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_string_rindex(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject search_str = (*stack_ptr-2)->mObjectValue;
    CLObject default_value = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.rindex");
        return false;
    }
    if(!check_type(search_str, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.rindex");
        return false;
    }
    if(!check_type(default_value, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.rindex");
        return false;
    }

    /// sevenstars to neo-c
    char* self_value = get_string_mem(self);
    char* search_str_value = get_string_mem(search_str);
    int default_value_value = get_int_value(default_value);

    /// go ///
    int result = string(self_value).rindex(search_str_value, default_value_value);

    (*stack_ptr)->mObjectValue = create_int_object(result, info);
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_string_index_regex(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject search_str = (*stack_ptr-2)->mObjectValue;
    CLObject default_value = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.index_regex");
        return false;
    }
    if(!check_type(search_str, "regex", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.index_regex");
        return false;
    }
    if(!check_type(default_value, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.index_regex");
        return false;
    }

    /// sevenstars to neo-c
    char* self_value = get_string_mem(self);
    nregex& search_str_value = get_regex_value(search_str);
    int default_value_value = get_int_value(default_value);

    /// go ///
    int result = string(self_value).index_regex(clone search_str_value, default_value_value);

    (*stack_ptr)->mObjectValue = create_int_object(result, info);
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_string_rindex_regex(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject search_str = (*stack_ptr-2)->mObjectValue;
    CLObject default_value = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.rindex_regex");
        return false;
    }
    if(!check_type(search_str, "regex", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.rindex_regex");
        return false;
    }
    if(!check_type(default_value, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.rindex_regex");
        return false;
    }

    /// sevenstars to neo-c
    char* self_value = get_string_mem(self);
    nregex& search_str_value = get_regex_value(search_str);
    int default_value_value = get_int_value(default_value);

    /// go ///
    int result = string(self_value).rindex_regex(clone search_str_value, default_value_value);

    (*stack_ptr)->mObjectValue = create_int_object(result, info);
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_string_sub(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject regex = (*stack_ptr-2)->mObjectValue;
    CLObject replace = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.sub");
        return false;
    }
    if(!check_type(regex, "regex", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.sub");
        return false;
    }
    if(!check_type(replace, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.sub");
        return false;
    }

    /// sevenstars to neo-c
    char* self_value = get_string_mem(self);
    nregex& regex_value = get_regex_value(regex);
    char* replace_value = get_string_mem(replace);

    /// go ///
    string result = string(self_value).sub(clone regex_value, string(replace_value), null);

    (*stack_ptr)->mObjectValue = create_string_object(result, info);
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_string_match(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject regex = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.match");
        return false;
    }
    if(!check_type(regex, "regex", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.match");
        return false;
    }

    /// sevenstars to neo-c
    char* self_value = get_string_mem(self);
    nregex& regex_value = get_regex_value(regex);

    /// go ///
    int result = string(self_value).match(clone regex_value, null);

    (*stack_ptr)->mObjectValue = create_bool_object(result, info);
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_string_reverse(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.reverse");
        return false;
    }

    /// sevenstars to neo-c
    char* self_value = get_string_mem(self);

    /// go ///
    string result = string(self_value).reverse();

    (*stack_ptr)->mObjectValue = create_string_object(result, info);
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_string_replace(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject index = (*stack_ptr-2)->mObjectValue;
    CLObject c = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.replace");
        return false;
    }
    if(!check_type(index, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.replace");
        return false;
    }
    if(!check_type(c, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.replace");
        return false;
    }

    /// sevenstars to neo-c
    char* self_value = get_string_mem(self);
    int index_value = get_int_value(index);
    char* c_value = get_string_mem(c);

    /// go ///
    string(self_value).replace(index_value, c_value[0]);

    return true;
}

bool sevenstars_string_substring(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject head = (*stack_ptr-2)->mObjectValue;
    CLObject tail = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.substring");
        return false;
    }
    if(!check_type(head, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.substring");
        return false;
    }
    if(!check_type(tail, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.substring");
        return false;
    }

    /// convert sevenstars to neo-c ///
    char* self_value = get_string_mem(self);
    int head_value = get_int_value(head);
    int tail_value = get_int_value(tail);

    /// go ///
    string result_value = string(self_value).substring(head_value, tail_value);

    CLObject result = create_string_object(result_value, info);

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;

    return true;
}

bool sevenstars_string_compare(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject right = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.compare");
        return false;
    }
    if(!check_type(right, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.compare");
        return false;
    }

    /// sevenstars to neo-c
    char* self_value = get_string_mem(self);
    char* right_value = get_string_mem(right);

    /// go ///
    int result = self_value.compare(right_value);

    CLObject obj = create_int_object(result, info);

    (*stack_ptr)->mObjectValue = obj;
    (*stack_ptr)++;
    
    return true;
}

bool string_set_value(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject value = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.set_value");
        return false;
    }
    if(!check_type(value, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.set_value");
        return false;
    }

    /// convert sevenstars to neo-c ///
    char* value_value = get_string_mem(value);

    /// go ///
    set_string_value(self, value_value);

    return true;
}

bool string_to_command(CLVALUE** stack_ptr, sVMInfo* info)
{ CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.to_command");
        return false;
    }

    /// convert sevenstars to neo-c ///
    char* self_value = get_string_mem(self);

    /// go ///
    
    CLObject obj = create_command_object(self_value, strlen(self_value), "", 0, 0, false, info);

    (*stack_ptr)->mObjectValue = obj;
    (*stack_ptr)++;

    return true;
}

bool string_equal(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject right = (*stack_ptr-1)->mObjectValue;

    if(check_type(self, "void", info) || check_type(right, "void", info))
    {
        int value = check_type(self, "void", info) == check_type(right, "void", info);
        
        CLObject obj = create_bool_object(value, info);

        (*stack_ptr)->mObjectValue = obj;
        (*stack_ptr)++;

        return true;
    }

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.equal");
        return false;
    }
    if(!check_type(right, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.equal");
        return false;
    }

    /// convert sevenstars to neo-c ///
    char* self_value = get_string_mem(self);
    char* right_value = get_string_mem(right);

    /// go ///
    int value = strcmp(self_value, right_value) == 0;
    
    CLObject obj = create_bool_object(value, info);

    (*stack_ptr)->mObjectValue = obj;
    (*stack_ptr)++;

    return true;
}

bool string_not_equal(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject right = (*stack_ptr-1)->mObjectValue;

    if(check_type(self, "void", info) || check_type(right, "void", info))
    {
        int value = check_type(self, "void", info) != check_type(right, "void", info);
        
        CLObject obj = create_bool_object(value, info);

        (*stack_ptr)->mObjectValue = obj;
        (*stack_ptr)++;

        return true;
    }

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.not_equal");
        return false;
    }
    if(!check_type(right, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.not_equal");
        return false;
    }

    /// convert sevenstars to neo-c ///
    char* self_value = get_string_mem(self);
    char* right_value = get_string_mem(right);

    /// go ///
    int value = strcmp(self_value, right_value) != 0;
    
    CLObject obj = create_bool_object(value, info);

    (*stack_ptr)->mObjectValue = obj;
    (*stack_ptr)++;

    return true;
}

bool string_write(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject file_name = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.write");
        return false;
    }
    if(!check_type(file_name, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.write");
        return false;
    }

    /// convert sevenstars to neo-c ///
    char* self_value = get_string_mem(self);
    char* file_name_value = get_string_mem(file_name);

    /// go ///
    FILE* f = fopen(file_name_value, "w");

    if(f == null) {
        vm_err_msg(stack_ptr, info, xsprintf("file open error(%s)", file_name_value));
        return false;
    }

    if(fwrite(self_value, strlen(self_value), 1, f) < 0) {
        vm_err_msg(stack_ptr, info, xsprintf("file write error(%s)", file_name_value));
        return false;
    }

    fclose(f);

    return true;
}

bool string_append(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject file_name = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.append");
        return false;
    }
    if(!check_type(file_name, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.append");
        return false;
    }

    /// convert sevenstars to neo-c ///
    char* self_value = get_string_mem(self);
    char* file_name_value = get_string_mem(file_name);

    /// go ///
    FILE* f = fopen(file_name_value, "a");

    if(f == null) {
        vm_err_msg(stack_ptr, info, xsprintf("file open error(%s)", file_name_value));
        return false;
    }

    if(fwrite(self_value, strlen(self_value), 1, f) < 0) {
        vm_err_msg(stack_ptr, info, xsprintf("file write error(%s)", file_name_value));
        return false;
    }

    fclose(f);

    return true;
}

bool sevenstars_string_scan(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject reg = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.scan");
        return false;
    }
    if(!check_type(reg, "regex", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.scan");
        return false;
    }

    /// convert sevenstars to neo-c ///
    char* self_value = get_string_mem(self);
    nregex& reg_value = get_regex_value(reg);

    /// go ///
    list<string>*% list_ = string(self_value).scan(clone reg_value);
    list<int>*% list2_ = new list<int>.initialize();

    list_.each {
        CLObject obj = create_string_object(it, info);
        (*stack_ptr)->mObjectValue = obj;
        (*stack_ptr)++;
        list2_.push_back(obj);
    }

    CLObject result = create_list_object(list2_, info);

    (*stack_ptr) -=list_.length();

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;

    return true;
}

bool sevenstars_string_split(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject reg = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.split");
        return false;
    }
    if(!check_type(reg, "regex", info)) {
        vm_err_msg(stack_ptr, info, "type error on string.split");
        return false;
    }

    /// convert sevenstars to neo-c ///
    char* self_value = get_string_mem(self);
    nregex& reg_value = get_regex_value(reg);

    /// go ///
    list<string>*% list_ = string(self_value).split(clone reg_value);
    list<int>*% list2_ = new list<int>.initialize();

    list_.each {
        CLObject obj = create_string_object(it, info);
        (*stack_ptr)->mObjectValue = obj;
        (*stack_ptr)++;
        list2_.push_back(obj);
    }

    CLObject result = create_list_object(list2_, info);

    (*stack_ptr) -=list_.length();

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;

    return true;
}

void native_init5()
{
    gNativeMethods.insert(string("string.write"), string_write);
    gNativeMethods.insert(string("string.append"), string_append);
    gNativeMethods.insert(string("string.substring"), sevenstars_string_substring);
    gNativeMethods.insert(string("string.compare"), sevenstars_string_compare);
    gNativeMethods.insert(string("string.set_value"), string_set_value);
    gNativeMethods.insert(string("string.to_command"), string_to_command);
    gNativeMethods.insert(string("string.equal"), string_equal);
    gNativeMethods.insert(string("string.not_equal"), string_not_equal);
    gNativeMethods.insert(string("string.compare"), sevenstars_string_compare);
    gNativeMethods.insert(string("string.index"), sevenstars_string_index);
    gNativeMethods.insert(string("string.rindex"), sevenstars_string_rindex);
    gNativeMethods.insert(string("string.index_regex"), sevenstars_string_index_regex);
    gNativeMethods.insert(string("string.rindex_regex"), sevenstars_string_rindex_regex);
    gNativeMethods.insert(string("string.sub"), sevenstars_string_sub);
    gNativeMethods.insert(string("string.match"), sevenstars_string_match);
    gNativeMethods.insert(string("string.reverse"), sevenstars_string_reverse);
    gNativeMethods.insert(string("string.replace"), sevenstars_string_replace);
    gNativeMethods.insert(string("string.scan"), sevenstars_string_scan);
    gNativeMethods.insert(string("string.split"), sevenstars_string_split);
}
