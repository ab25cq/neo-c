#include "common.h"

bool sevenstars_type_class_(CLVALUE** stack_ptr, sVMInfo* info)
{
    CLObject self = (*stack_ptr-1)->mObjectValue;

    /// check type ///
    if(!check_type(self, "type", info)) {
        vm_err_msg(stack_ptr, info, "type error on type.name");
        return false;
    }

    /// sevenstars to neo-c
    sCLTypeObject* self_type_data = CLTYPE(self);

    string name = create_type_name(self_type_data->mType2);

    /// go ///
    CLObject obj = create_class_object(name, info);

    (*stack_ptr)->mObjectValue = obj;
    (*stack_ptr)++;

    return true;
}

void native_init7()
{
    gNativeMethods.insert(string("type.class"), sevenstars_type_class_);
}
