// source head

// uniq global variable

// header function
void* come_calloc(int count, int size, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

void* memset(void* b, int c, long len);

char* __builtin_string(char* str);

void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

void* come_null_check(void* mem, char* sname, int sline, int id);

int main(int argc, char** argv);

// inline function

// body function
int main(int argc, char** argv){
void* __result_obj__;
int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
come_heap_init(0, 0, 0);
    int a_0=1;
    int b_1[]={a_0,a_0,a_0};
    __result1__ = 0;
    come_heap_final();
    return __result1__;
come_heap_final();
}

