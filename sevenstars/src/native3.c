#include "common.h"

bool sevenstars_list_initialize(CLVALUE** stack_ptr, sVMInfo* info)
{
    list<int>*% list_ = new list<int>.initialize();

    CLObject obj = create_list_object(list_, info);

    (*stack_ptr)->mObjectValue = obj;
    (*stack_ptr)++;

    return true;
}

bool sevenstars_list_length(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.length");
        return false;
    }

    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);

    /// go ///
    CLObject obj = create_int_object(self_value.length(), info);

    (*stack_ptr)->mObjectValue = obj;
    (*stack_ptr)++;

    return true;
}

bool sevenstars_list_item(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject position = (*stack_ptr-2)->mObjectValue;
    CLObject default_value = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.item");
        return false;
    }
    if(!check_type(position, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.item");
        return false;
    }

    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);
    int position_value = get_int_value(position);
    CLObject default_value_value = default_value;

    /// go ///
    CLObject result = self_value.item(position_value, default_value_value);
    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;

    return true;
}

bool sevenstars_list_set_value(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject right = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.set_value");
        return false;
    }
    if(!check_type(right, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.set_value");
        return false;
    }

    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);
    list<int>* right_value = get_list_value(right);

    /// go ///
    set_list_value(self, right_value);

    return true;
}

bool sevenstars_list_push_back(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject item = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.push_back");
        return false;
    }

    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);
    CLObject item_value = item;

    /// go ///
    self_value.push_back(item_value);

    return true;
}

bool sevenstars_list_reset(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.reset");
        return false;
    }

    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);

    /// go ///
    self_value.reset();

    return true;
}

bool sevenstars_list_insert(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject position = (*stack_ptr-2)->mObjectValue;
    CLObject item = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.insert");
        return false;
    }
    if(!check_type(position, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.insert");
        return false;
    }


    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);
    int position_value = get_int_value(position);
    CLObject item_value = item;

    /// go ///
    self_value.insert(position_value, item_value);

    return true;
}

bool sevenstars_list_delete(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject position = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.delete");
        return false;
    }
    if(!check_type(position, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.delete");
        return false;
    }

    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);
    int position_value = get_int_value(position);

    /// go ///
    self_value.delete(position_value);

    return true;
}

bool sevenstars_list_replace(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject position = (*stack_ptr-2)->mObjectValue;
    CLObject item = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.replace");
        return false;
    }
    if(!check_type(position, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.replace");
        return false;
    }

    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);
    int position_value = get_int_value(position);
    CLObject item_value = item;

    /// go ///
    self_value.replace(position_value, item_value);

    return true;
}

bool sevenstars_list_delete_range(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject head = (*stack_ptr-2)->mObjectValue;
    CLObject tail = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.delete_range");
        return false;
    }
    if(!check_type(head, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.delete_range");
        return false;
    }
    if(!check_type(tail, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.delete_range");
        return false;
    }

    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);
    int head_value = get_int_value(head);
    int tail_value = get_int_value(tail);

    /// go ///
    self_value.delete_range(head_value, tail_value);

    return true;
}

bool sevenstars_list_sublist(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-3)->mObjectValue;
    CLObject head = (*stack_ptr-2)->mObjectValue;
    CLObject tail = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.sublist");
        return false;
    }
    if(!check_type(head, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.sublist");
        return false;
    }
    if(!check_type(tail, "int", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.sublist");
        return false;
    }

    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);
    int head_value = get_int_value(head);
    int tail_value = get_int_value(tail);

    /// go ///
    list<int>*% list_ = self_value.sublist(head_value, tail_value);

    CLObject result = create_list_object(list_, info);

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;


    return true;
}

bool sevenstars_list_reverse(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.reverse");
        return false;
    }

    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);

    /// go ///
    list<int>*% list_ = self_value.reverse();

    CLObject result = create_list_object(list_, info);

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;

    return true;
}

bool sevenstars_list_sort(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-2)->mObjectValue;
    CLObject compare = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "list", info)) {
        vm_err_msg(stack_ptr, info, "type error on list.sort");
        return false;
    }

    /// convert sevenstars to neo-c ///
    list<int>* self_value = get_list_value(self);
    CLObject compare_value = compare

    /// go ///
    bool result_false = false;
    list<int>*% list_ = self_value.sort_block {
        CLObject block_object = compare_value;
        CLObject left_obj = it;
        CLObject right_obj = it2;

        (*stack_ptr)->mObjectValue = block_object;
        (*stack_ptr)++;
        (*stack_ptr)->mObjectValue = left_obj;
        (*stack_ptr)++;
        (*stack_ptr)->mObjectValue = right_obj;
        (*stack_ptr)++;

        if(!invoke_block(block_object, true, 2, stack_ptr, info))
        {
            result_false = true;
        }

        CLObject result_object = (*stack_ptr-1)->mObjectValue;
        (*stack_ptr)--;

        get_int_value(result_object)
    }

    if(result_false) {
        return false;
    }

    CLObject result = create_list_object(list_, info);

    (*stack_ptr)->mObjectValue = result;
    (*stack_ptr)++;

    return true;
}



void native_init3()
{
    gNativeMethods.insert(string("list.length"), sevenstars_list_length);
    gNativeMethods.insert(string("list.initialize"), sevenstars_list_initialize);
    gNativeMethods.insert(string("list.item"), sevenstars_list_item);
    gNativeMethods.insert(string("list.set_value"), sevenstars_list_set_value);
    gNativeMethods.insert(string("list.push_back"), sevenstars_list_push_back);
    gNativeMethods.insert(string("list.reset"), sevenstars_list_reset);
    gNativeMethods.insert(string("list.insert"), sevenstars_list_insert);
    gNativeMethods.insert(string("list.delete"), sevenstars_list_delete);
    gNativeMethods.insert(string("list.replace"), sevenstars_list_replace);
    gNativeMethods.insert(string("list.delete_range"), sevenstars_list_delete_range);
    gNativeMethods.insert(string("list.sublist"), sevenstars_list_sublist);
    gNativeMethods.insert(string("list.reverse"), sevenstars_list_reverse);
    gNativeMethods.insert(string("list.sort"), sevenstars_list_sort);
}
