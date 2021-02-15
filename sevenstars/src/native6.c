#include "common.h"

bool sevenstars_map_initialize(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject obj = create_map_object(info);

    (*stack_ptr)->mObjectValue = obj;
    (*stack_ptr)++;

    return true;
}

bool sevenstars_map_insert(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject key = (*stack_ptr-2)->mObjectValue;
    CLObject item = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "map", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.insert");
        return false;
    }
    if(!check_type(key, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.insert");
        return false;
    }

    /// sevenstars to neo-c
    map<char*,int>* self_value = get_map_value(self);
    char* key_value = get_string_mem(key);
    int item_value = item;

    list<int>* keys_value = get_map_keys(self);

    /// go ///
    self_value.insert(key_value, item_value);
    keys_value.push_back(key);
    
    return true;
}

bool sevenstars_map_at(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject key = (*stack_ptr-2)->mObjectValue;
    CLObject default_value = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "map", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.at");
        return false;
    }
    if(!check_type(key, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.at");
        return false;
    }

    /// sevenstars to neo-c
    map<char*,int>* self_value = get_map_value(self);
    char* key_value = get_string_mem(key);
    int default_value_value = default_value;

    /// go ///
    int result = self_value.at(key_value, default_value_value);

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_map_keys(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "map", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.keys");
        return false;
    }

    /// sevenstars to neo-c
    map<char*,int>* self_value = get_map_value(self);
    list<int>* keys_value = get_map_keys(self);

    /// go ///
    (*stack_ptr)->mObjectValue = create_list_object(keys_value, info);
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_map_find(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject key = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "map", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.find");
        return false;
    }
    if(!check_type(key, "string", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.find");
        return false;
    }

    /// sevenstars to neo-c
    map<char*,int>* self_value = get_map_value(self);
    char* key_value = get_string_mem(key);

    /// go ///
    int value = self_value.find(key_value);

    CLObject result = create_bool_object(value, info);

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_map_length(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "map", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.length");
        return false;
    }

    /// sevenstars to neo-c
    map<char*,int>* self_value = get_map_value(self);

    /// go ///
    int value = self_value.length();

    CLObject result = create_int_object(value, info);

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_map_equal(CLVALUE** stack_ptr, sVMInfo* info)
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
    if(!check_type(self, "map", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.equal");
        return false;
    }
    if(!check_type(right, "map", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.equal");
        return false;
    }

    /// sevenstars to neo-c
    map<char*,int>* self_value = get_map_value(self);
    map<char*,int>* right_value = get_map_value(right);

    /// go ///
    bool value = false;
    
    if(self_value.len == right_value.len) {
        self_value.each {
            value = true;
            right_value.each {
                if(right_value.find(it)) {
                    int default_value = -1;
                    int item = right_value.at(it, default_value);
                    if(it2 != item) {
                        value = false;
                    }
                }
                else {
                    value = false;
                }
            }
        }
    }

    CLObject result = create_bool_object(value, info);

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;
    
    return true;
}

bool sevenstars_map_not_equal(CLVALUE** stack_ptr, sVMInfo* info)
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
    if(!check_type(self, "map", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.equal");
        return false;
    }
    if(!check_type(right, "map", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.equal");
        return false;
    }

    /// sevenstars to neo-c
    map<char*,int>* self_value = get_map_value(self);
    map<char*,int>* right_value = get_map_value(right);

    /// go ///
    bool value = false;
    
    if(self_value.len == right_value.len) {
        self_value.each {
            value = true;
            right_value.each {
                if(right_value.find(it)) {
                    int default_value = -1;
                    int item = right_value.at(it, default_value);
                    if(it2 != item) {
                        value = false;
                    }
                }
                else {
                    value = false;
                }
            }
        }
    }

    CLObject result = create_bool_object(!value, info);

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;
    
    return true;
}

bool vm_invoke_method(CLObject obj, char* method_name, int num_params, CLVALUE** stack_ptr, sVMInfo* info)
{
    sCLObject* object_data = CLOBJECT(obj);
    sCLType* generics_types = object_data->mType;

    sCLClass* klass = object_data->mType->mClass;
    if(klass == null) {
        vm_err_msg(stack_ptr, info, xsprintf("class not found(%s) on vm_invoke_method\n", klass->mName));
        return false;
    }

    char* klass_name = klass->mName;

    sCLMethod* method = null;
    while(klass) {
        method = klass.mMethods.at(method_name, null);

        if(method) {
            break;
        }

        klass = klass->mParent;
    }

    if(method == null) {
        vm_err_msg(stack_ptr, info, xsprintf("method not found(%s.%s)\n", klass_name, method_name));
        return false;
    }

    int var_num = method.mMaxVarNum;

    if(!param_check(method->mParams, method->mNumParams, *stack_ptr, generics_types, info))
    {
        vm_err_msg(stack_ptr, info, xsprintf("method parametor is invalid(%s.%s)\n", klass->mName, method_name));
        return false;
    }

    if(method.mByteCodes == null) {
        if(!invoke_native_method(klass, method, stack_ptr, info)) 
        {
            vm_err_msg(stack_ptr, info, xsprintf("native method error(%s.%s) 2\n", klass->mName, method_name));
            return false;
        }

        CLVALUE result_value = *(*stack_ptr-1);

        (*stack_ptr) -= num_params;
        bool result_existance = !type_identify_with_class_name(method->mResultType, "void", info.pinfo);

        if(result_existance) {
            (*stack_ptr)--;
            (*stack_ptr)->mObjectValue = result_value->mObjectValue;
            (*stack_ptr)++;
        }
        else {
            (*stack_ptr).mObjectValue = create_null_object(info);
            (*stack_ptr)++;
        }
    }
    else {
        buffer* codes = method.mByteCodes;

        int var_num = method.mMaxVarNum;

        CLVALUE result;
        if(!vm(codes, *stack_ptr, num_params, var_num, &result, info)) {
            return false;
        }

        (*stack_ptr) -= num_params;
        bool result_existance = !type_identify_with_class_name(method->mResultType, "void", info.pinfo);

        if(result_existance) {
            (*stack_ptr)->mObjectValue = result->mObjectValue;
            (*stack_ptr)++;
        }
        else {
            (*stack_ptr).mObjectValue = create_null_object(info);
            (*stack_ptr)++;
        }
    }

    return true;
}


bool sevenstars_map_to_string(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "map", info)) {
        vm_err_msg(stack_ptr, info, "type error on map.equal");
        return false;
    }

    /// sevenstars to neo-c
    map<char*,int>* self_value = get_map_value(self);

    /// go ///
    buffer*% buf = new buffer.initialize();

    bool return_false = false;
    
    int n = 0;
    self_value.each {
        CLObject obj = it2;

        char* method_name = "to_string";

        (*stack_ptr)->mObjectValue = obj;
        (*stack_ptr)++;

        int num_params = 1;
        if(!vm_invoke_method(obj, method_name, num_params, stack_ptr, info))
        {
            *it3 = true;
            return_false = true;
            return;
        }

        CLObject to_string_result = (*stack_ptr-1)->mObjectValue;
        (*stack_ptr)--;

        char* string_data = get_string_mem(to_string_result);

        buf.append_str(it);
        buf.append_str("\n");
        buf.append_str(string_data);

        buf.append_str("\n");

        n++;
    }
    buf.append_str(")");

    if(return_false) {
        return false;
    }

    CLObject result = create_string_object(buf.to_string(), info);

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;
    
    return true;
}

void native_init6()
{
    gNativeMethods.insert(string("map.insert"), sevenstars_map_insert);
    gNativeMethods.insert(string("map.at"), sevenstars_map_at);
    gNativeMethods.insert(string("map.find"), sevenstars_map_find);
    gNativeMethods.insert(string("map.length"), sevenstars_map_length);
    gNativeMethods.insert(string("map.equal"), sevenstars_map_equal);
    gNativeMethods.insert(string("map.not_equal"), sevenstars_map_not_equal);
    gNativeMethods.insert(string("map.to_string"), sevenstars_map_to_string);
    gNativeMethods.insert(string("map.keys"), sevenstars_map_keys);
    gNativeMethods.insert(string("map.initialize"), sevenstars_map_initialize);
}
