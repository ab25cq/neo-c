#include "common.h"
#include <assert.h>

bool free_object(CLObject self)
{
    sCLObject* object_data = CLOBJECT(self);
    sCLType* type = object_data->mType;

    if(object_data->mNumFields == -1) {
        if(type->mClass == gClasses.at("buffer", null)) {
            sCLBuffer* buffer_data = CLBUFFER(self);

            delete dummy_heap buffer_data->mBuffer;
        }
        else if(type->mClass == gClasses.at("string", null)) {
            sCLString* string_data = CLSTRING(self);

            delete dummy_heap string_data->mString;
        }
        else if(type->mClass == gClasses.at("regex", null)) {
            sCLRegexObject* reg_data = CLREGEX(self);

            delete dummy_heap reg_data->mRegex;
        }
        else if(type->mClass == gClasses.at("map", null)) {
            sCLMap* map_data = CLMAP(self);

            delete map_data->mMap;
            delete map_data->mKeys;
        }
        else if(type->mClass == gClasses.at("list", null)) {
            sCLListObject* list_data = CLLIST(self);

            delete dummy_heap list_data->mList;
        }
        else if(type->mClass == gClasses.at("job", null)) {
            sCLJob* job_data = CLJOB(self);

            delete dummy_heap job_data->mTermInfo;
        }
        else if(type->mClass == gClasses.at("command", null)) {
            sCLCommand* command_data = CLCOMMAND(self);

            delete dummy_heap command_data->mOutput;
            delete dummy_heap command_data->mErrOutput;
        }
    }
/*
    if(!call_finalize_method_on_free_object(klass, self)) {
        return FALSE;
    }
*/

    return true;
}

void mark_belong_objects(CLObject self, unsigned char* mark_flg, sVMInfo* info)
{
    sCLObject* object_data = CLOBJECT(self);
    sCLType* type = object_data->mType;
    int num_fields = object_data->mNumFields;
    
    if(num_fields == -1) {
        if(type->mClass == gClasses.at("map", null)) {
            sCLMap* map_data = CLMAP(self);

            map<char*, int>* map = map_data->mMap;
            map.each {
                CLObject obj = it2;
                mark_object(obj, mark_flg, info);
            }
            list<int>* keys = map_data->mKeys;
            
            keys.each {
                CLObject obj = it;
                mark_object(obj, mark_flg, info);
            }
        }
        else if(type->mClass == gClasses.at("list", null)) {
            sCLListObject* list_data = CLLIST(self);

            list<int>* list = list_data->mList;

            list.each {
                CLObject obj = it;
                mark_object(obj, mark_flg, info);
            }
        }
    }
    else {
        int i;
        for(i=0; i<object_data->mNumFields; i++) {
            mark_object(object_data->uValue.mFields[i].mObjectValue, mark_flg, info);
        }
    }
}

static cllong object_size(sCLClass* klass)
{
    cllong size = sizeof(sCLObject) - sizeof(CLVALUE) * DUMMY_ARRAY_SIZE;

    int sum = 0;
    sCLClass* it = klass;
    while(it) {
        sum += it->mFields.length();
        it = it->mParent;
    }
    size += (unsigned int)sizeof(CLVALUE) * sum;

    unsigned int size2 = size;

    alignment((unsigned int*)&size2);

    size = size2;

    return size;
}

CLObject create_object(sCLType* type, sVMInfo* info)
{
    unsigned int size = (unsigned int)object_size(type->mClass);


    CLObject obj = alloc_heap_mem(size, type, type->mClass->mFields.length(), info);

    return obj;
}

CLObject create_null_object(sVMInfo* info)
{
    sCLType* int_type = create_type("void", info.cinfo.pinfo.types);
    
    int size = sizeof(sCLInt);

    alignment(&size);

    int value = 0;

    CLObject obj = alloc_heap_mem(size, int_type, -1, info);

    sCLInt* object_data = CLINT(obj);

    object_data->mValue = value;

    return obj;
}

CLObject create_int_object(int value, sVMInfo* info)
{
    sCLType* int_type = create_type("int", info.cinfo.pinfo.types);
    
    int size = sizeof(sCLInt);

    alignment(&size);

    CLObject obj = alloc_heap_mem(size, int_type, -1, info);

    sCLInt* object_data = CLINT(obj);

    object_data->mValue = value;

    return obj;
}

CLObject create_bool_object(int value, sVMInfo* info)
{
    sCLType* int_type = create_type("bool", info.cinfo.pinfo.types);
    
    int size = sizeof(sCLInt);

    alignment(&size);

    CLObject obj = alloc_heap_mem(size, int_type, -1, info);

    sCLInt* object_data = CLINT(obj);

    object_data->mValue = value;

    return obj;
}

static cllong string_object_size()
{
    cllong size = sizeof(sCLString);

    unsigned int size2 = size;

    alignment((unsigned int*)&size2);

    size = size2;

    return size;
}

CLObject create_string_object(char* str, sVMInfo* info)
{
    unsigned int size = (unsigned int)string_object_size();

    alignment(&size);

    sCLType* string_type = create_type("string", info.cinfo.pinfo.types);

    CLObject obj = alloc_heap_mem(size, string_type, -1, info);

    sCLString* string_data = CLSTRING(obj);

    string_data->mString = borrow string(str);

    return obj;
}

char* get_string_mem(CLObject obj)
{
    sCLString* object_data = CLSTRING(obj);

    return object_data->mString;
}

nregex& get_regex_value(CLObject obj)
{
    sCLRegexObject* object_data = CLREGEX(obj);

    return object_data->mRegex;
}

list<int>* get_list_value(CLObject obj)
{
    sCLListObject* object_data = CLLIST(obj);

    return object_data->mList;
}


int get_int_value(CLObject obj)
{
    sCLInt* object_data = CLINT(obj);

    return object_data->mValue;
}

void set_int_value(CLObject obj, int value)
{
    sCLInt* object_data = CLINT(obj);

    object_data->mValue = value;
}

void set_string_value(CLObject obj, char* value)
{
    char* str = borrow string(value);

    sCLString* object_data = CLSTRING(obj);
    delete dummy_heap object_data->mString;
    object_data->mString = str;
}

void set_regex_value(CLObject obj, nregex& value)
{
    nregex& regex = borrow clone value;

    sCLRegexObject* object_data = CLREGEX(obj);
    delete dummy_heap object_data->mRegex;
    object_data->mRegex = regex;
}

void set_list_value(CLObject obj, list<int>* value)
{
    list<int>* list = borrow clone value;

    sCLListObject* object_data = CLLIST(obj);
    delete dummy_heap object_data->mList;
    object_data->mList = list;
}

buffer* get_buffer_value(CLObject obj)
{
    sCLBuffer* buffer_data = CLBUFFER(obj);

    return buffer_data->mBuffer;
}

map<char*,int>* get_map_value(CLObject obj)
{
    sCLMap* map_data = CLMAP(obj);

    return map_data->mMap;
}

list<int>* get_map_keys(CLObject obj)
{
    sCLMap* map_data = CLMAP(obj);

    return map_data->mKeys;
}

CLObject create_string_data_object(char* str, sVMInfo* info)
{
    int len = strlen(str);
    int size = sizeof(sCLObject) - sizeof(CLVALUE) * DUMMY_ARRAY_SIZE;
    size += len + 1;
    alignment(&size);

    sCLType* string_type = create_type("string", info.cinfo.pinfo.types);

    CLObject obj = alloc_heap_mem(size, string_type, -1, info);

    sCLObject* object_data = CLOBJECT(obj);

    strcpy(&object_data.uValue.mMem, str);

    return obj;
}

CLObject create_command_object(char* output, int output_len, char* err_output, int err_output_len, int rcode, bool first_command, sVMInfo* info)
{
    sCLType* command_type = create_type("command", info.cinfo.pinfo.types);
    
    int size = sizeof(sCLCommand);
    alignment(&size);

    CLObject obj = alloc_heap_mem(size, command_type, -1, info);

    sCLCommand* object_data = CLCOMMAND(obj);

    object_data.mRCode = rcode;

    object_data.mOutput = borrow new char[output_len+1];
    object_data.mOutputLen = output_len;
    memcpy(object_data.mOutput, output, output_len+1);

    object_data.mErrOutput = borrow new char[err_output_len+1];
    object_data.mErrOutputLen = err_output_len;
    memcpy(object_data.mErrOutput, err_output, err_output_len+1);

    object_data.mFirstCommand = first_command;

    return obj;
}

CLObject create_system_object(sVMInfo* info)
{
    sCLType* system_type = create_type("system", info.cinfo.pinfo.types);

    int size = object_size(system_type->mClass);
    
    CLObject obj = alloc_heap_mem(size, system_type, -1, info);

    return obj;
}

CLObject create_job_object(char* title, termios* tinfo, pid_t pgrp, sVMInfo* info)
{
    sCLType* job_type = create_type("job", info.cinfo.pinfo.types);
    
    int size = sizeof(sCLJob);

    CLObject obj = alloc_heap_mem(size, job_type, -1, info);

    sCLJob* object_data = CLJOB(obj);

    xstrncpy(object_data.mTitle, title, JOB_TITLE_MAX);
    object_data.mTermInfo = borrow new termios;
    *object_data.mTermInfo = *tinfo
    object_data.mPGrp = pgrp;

    return obj;
}

static cllong block_object_size()
{
    cllong size = sizeof(sCLBlock);

    unsigned int size2 = size;

    alignment((unsigned int*)&size2);

    size = size2;

    return size;
}

CLObject create_block_object(char* type_name, int* codes, int codes_len, int var_num, sVMInfo* info)
{
    unsigned int size = (unsigned int)block_object_size();

    alignment(&size);

    sCLType* lambda_type = parse_type_runtime(type_name, info.cinfo.pinfo, info.cinfo.pinfo.types);

    if(lambda_type == null) {
        fprintf(stderr, "unexpected error on parsing type\n");
        exit(1);
    }

    CLObject obj = alloc_heap_mem(size, lambda_type, -1, info);

    sCLBlock* block_data = CLBLOCK(obj);

    block_data->codes = codes;
    block_data->codes_len = codes_len;
    block_data->var_num = var_num;

    return obj;
}

static cllong buffer_object_size()
{
    cllong size = sizeof(sCLBuffer);

    unsigned int size2 = size;

    alignment((unsigned int*)&size2);

    size = size2;

    return size;
}

CLObject create_buffer_object(sVMInfo* info)
{
    unsigned int size = (unsigned int)buffer_object_size();

    alignment(&size);

    sCLType* buffer_type = create_type("buffer", info.cinfo.pinfo.types);

    CLObject obj = alloc_heap_mem(size, buffer_type, -1, info);

    sCLBuffer* buffer_data = CLBUFFER(obj);

    buffer_data->mBuffer = borrow new buffer.initialize();

    return obj;
}

static cllong map_object_size()
{
    cllong size = sizeof(sCLMap);

    unsigned int size2 = size;

    alignment((unsigned int*)&size2);

    size = size2;

    return size;
}

CLObject create_map_object(sVMInfo* info)
{
    unsigned int size = (unsigned int)map_object_size();

    alignment(&size);

    sCLType* map_type = create_type("map", info.cinfo.pinfo.types);

    CLObject obj = alloc_heap_mem(size, map_type, -1, info);

    sCLMap* map_data = CLMAP(obj);

    map_data->mMap = borrow new map<char*, int>.initialize();
    map_data->mKeys = borrow new list<int>.initialize();

    return obj;
}

static cllong class_object_size()
{
    cllong size = sizeof(sCLClassObject);

    unsigned int size2 = size;

    alignment((unsigned int*)&size2);

    size = size2;

    return size;
}

CLObject create_class_object(char* name, sVMInfo* info)
{
    unsigned int size = (unsigned int)class_object_size();

    alignment(&size);

    sCLType* class_type = create_type("class", info.cinfo.pinfo.types);

    CLObject obj = alloc_heap_mem(size, class_type, -1, info);

    sCLClassObject* class_data = CLCLASS(obj);

    class_data->mClass = gClasses.at(name, null);

    return obj;
}

static cllong method_object_size()
{
    cllong size = sizeof(sCLMethodObject);

    unsigned int size2 = size;

    alignment((unsigned int*)&size2);

    size = size2;

    return size;
}

CLObject create_method_object(sCLMethod* method, sVMInfo* info)
{
    unsigned int size = (unsigned int)method_object_size();

    alignment(&size);

    sCLType* method_type = create_type("method", info.cinfo.pinfo.types);

    CLObject obj = alloc_heap_mem(size, method_type, -1, info);

    sCLMethodObject* method_data = CLMETHOD(obj);

    method_data->mMethod = method;

    return obj;
}

static cllong field_object_size()
{
    cllong size = sizeof(sCLFieldObject);

    unsigned int size2 = size;

    alignment((unsigned int*)&size2);

    size = size2;

    return size;
}

CLObject create_field_object(sCLField* field, sVMInfo* info)
{
    unsigned int size = (unsigned int)field_object_size();

    alignment(&size);

    sCLType* field_type = create_type("field", info.cinfo.pinfo.types);

    CLObject obj = alloc_heap_mem(size, field_type, -1, info);

    sCLFieldObject* field_data = CLFIELD(obj);

    field_data->mField = field;

    return obj;
}

static cllong type_object_size()
{
    cllong size = sizeof(sCLTypeObject);

    unsigned int size2 = size;

    alignment((unsigned int*)&size2);

    size = size2;

    return size;
}

CLObject create_type_object(sCLType* type, sVMInfo* info)
{
    unsigned int size = (unsigned int)type_object_size();

    alignment(&size);

    sCLType* type_type = create_type("type", info.cinfo.pinfo.types);

    CLObject obj = alloc_heap_mem(size, type_type, -1, info);

    sCLTypeObject* type_data = CLTYPE(obj);

    type_data->mType2 = type;

    return obj;
}

static cllong regex_object_size()
{
    cllong size = sizeof(sCLRegexObject);

    unsigned int size2 = size;

    alignment((unsigned int*)&size2);

    size = size2;

    return size;
}

CLObject create_regex_object(nregex reg, sVMInfo* info)
{
    unsigned int size = (unsigned int)regex_object_size();

    alignment(&size);

    sCLType* regex_type = create_type("regex", info.cinfo.pinfo.types);

    CLObject obj = alloc_heap_mem(size, regex_type, -1, info);

    sCLRegexObject* reg_data = CLREGEX(obj);

    reg_data->mRegex = borrow clone reg;

    return obj;
}

static cllong list_object_size()
{
    cllong size = sizeof(sCLListObject);

    unsigned int size2 = size;

    alignment((unsigned int*)&size2);

    size = size2;

    return size;
}

CLObject create_list_object(list<int>* list, sVMInfo* info)
{
    unsigned int size = (unsigned int)list_object_size();

    alignment(&size);

    sCLType* list_type = create_type("list", info.cinfo.pinfo.types);

    CLObject obj = alloc_heap_mem(size, list_type, -1, info);

    sCLListObject* list_data = CLLIST(obj);

    list_data->mList = borrow clone list;

    return obj;
}
