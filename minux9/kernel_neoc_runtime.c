#include "common.h"

struct neo_frame
{
    struct neo_frame* prev;
    char* fun_name;
    unsigned long frame_id;
};

struct neo_frame* neo_current_frame = NULL;
unsigned long neo_frame_id = 0;

bool neo_frame_is_alive(unsigned long frame_id)
{
    struct neo_frame* frame = neo_current_frame;

    while(frame != NULL) {
        if(frame->frame_id == frame_id) {
            return true;
        }

        frame = frame->prev;
    }

    return false;
}

bool int_equals(int self, int right)
{
    return self == right;
}

bool charp_equals(const char* self, const char* right)
{
    if(self == right) {
        return true;
    }
    if(self == NULL || right == NULL) {
        return false;
    }

    return strcmp((char*)self, (char*)right) == 0;
}

void* come_calloc(size_t count, size_t size, const char* sname, int sline, int id, const char* class_name)
{
    (void)sname;
    (void)sline;
    (void)id;
    (void)class_name;

    return calloc(count, size);
}

void* come_increment_ref_count(void* mem, char* sname, int sline, int id)
{
    (void)sname;
    (void)sline;
    (void)id;

    return mem;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id)
{
    (void)protocol_fun;
    (void)protocol_obj;
    (void)call_finalizer_only;
    (void)no_decrement;
    (void)sname;
    (void)sline;
    (void)id;

    if(mem == NULL || mem == result_obj) {
        return;
    }

    if(fun != NULL) {
        ((void (*)(void*))fun)(mem);
    }

    if(!no_free) {
        free(mem);
    }
}
