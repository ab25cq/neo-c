#line 1 "main.nc"
#line 1 "/usr/local/include/neo-c.h"
#line 3 "/usr/local/include/neo-c.h"

#line 6 "/usr/local/include/neo-c.h"

#line 8 "/usr/local/include/neo-c.h"

#line 14 "/usr/local/include/neo-c.h"

#line 16 "/usr/local/include/neo-c.h"

#line 18 "/usr/local/include/neo-c.h"

#line 20 "/usr/local/include/neo-c.h"
typedef char*% string;

#line 27 "/usr/local/include/neo-c.h"
var UNIX=0
#line 31 "/usr/local/include/neo-c.h"




#line 36 "/usr/local/include/neo-c.h"
    c_include {#define _GNU_SOURCE}
    c_include {#include "stdarg.h"}
    c_include {#include "stdlib.h"}
    c_include {#include "stdint.h"}
    c_include {#include "string.h"}
    c_include {#include "stdio.h"}
    c_include {#include "ctype.h"}
    c_include {#include "wchar.h"}
    c_include {#include "pico/stdlib.h"}
    c_include {#include "pico/stdio.h"}
    c_include {#include "pico/time.h"}
    c_include {#include "hardware/irq.h"}
    c_include {#include "hardware/timer.h"}
    c_include {#include "hardware/uart.h"}
    
    c_include {#include "pico/mutex.h"}
    c_include {#include "pico/multicore.h"}

#line 56 "/usr/local/include/neo-c.h"

    typedef __builtin_va_list va_list;

    using neo-c;




#line 88 "/usr/local/include/neo-c.h"





struct buffer 
{
    char*% buf;
    int len;
    int size;
};

uniq buffer*% buffer*::initialize(buffer*% self);
uniq void buffer*::finalize(buffer* self);
uniq buffer*% buffer*::clone(buffer* self);
uniq bool buffer*::equals(buffer* left, buffer* right);
uniq buffer* buffer*::append_str(buffer* self, char* mem);
uniq buffer* buffer*::append(buffer* self, char* mem, size_t size);
uniq string xsprintf(char* msg, ...);
uniq string char*::to_string(char* self);
uniq string int::to_string(int self);
uniq unsigned int bool::get_hash_key(bool value);
uniq unsigned int _Bool::get_hash_key(bool value);
uniq unsigned int char::get_hash_key(char value);
uniq unsigned int short::get_hash_key(short int value);
uniq unsigned int int::get_hash_key(int value);
uniq unsigned int long::get_hash_key(long value);
uniq unsigned int size_t::get_hash_key(size_t value);
uniq unsigned int float::get_hash_key(float value);
uniq unsigned int double::get_hash_key(double value);
uniq unsigned int char*::get_hash_key(char* value);
uniq unsigned int string::get_hash_key(char* value);
uniq unsigned int void*::get_hash_key(void* value);
uniq string char*::substring(char* str, int head, int tail);
uniq buffer* buffer*::append_format(buffer* self, char* msg, ...);
uniq string __builtin_string(char* str);
uniq string buffer*::to_string(buffer* self);
uniq string char*::to_string(char* self);
uniq string double::to_string(double self);
uniq string float::to_string(float self);
uniq string size_t::to_string(size_t self);
uniq string long::to_string(long self);
uniq string int::to_string(int self);
uniq string short::to_string(short self);
uniq string char::to_string(char self);
uniq string bool::to_string(bool self);
uniq string _Bool::to_string(bool self);
uniq bool string::equals(char* self, char* right);


#line 140 "/usr/local/include/neo-c.h"

if($UNIX == 0) {
    uniq void come_push_stackframe(char* sname, int sline, int id)
    {
    }
    
    uniq void come_pop_stackframe()
    {
    }
    
    uniq void come_save_stackframe(char* sname, int sline)
    {
    }
    
    uniq void stackframe()
    {
    }
    
    uniq string come_get_stackframe()
    {
        return string("");
    }
    
    uniq bool die(char* msg)
    {
        puts(msg);
        exit(4);
        
        return 0;
    }
}
else  {
    uniq char* gComeStackFrameSName[128];
    uniq int gComeStackFrameSLine[128];
    uniq int gComeStackFrameID[128];
    uniq int gNumComeStackFrame = 0;
    
    uniq char* gComeStackFrameBuffer = ((void*)0);
    
    uniq void come_push_stackframe(char* sname, int sline, int id)
    {
        if(gNumComeStackFrame < 128) {
            gComeStackFrameSName[gNumComeStackFrame] = sname;  
            gComeStackFrameSLine[gNumComeStackFrame] = sline;
            gComeStackFrameID[gNumComeStackFrame] = id;
        
            gNumComeStackFrame++;
        }
    }
    
    uniq void come_pop_stackframe()
    {
        if(gNumComeStackFrame > 0) {
            gNumComeStackFrame--;
        }
    }
    
    uniq void come_save_stackframe(char* sname, int sline)
    {
        buffer*% buf = new buffer();
        buf.append_format("%s %d\n", sname, sline);
        for(int i=gNumComeStackFrame-2; i>=0; i--) {
            buf.append_format("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]);
        }
        
        if(gComeStackFrameBuffer) {
            free(gComeStackFrameBuffer);
        }
        gComeStackFrameBuffer = strdup(buf.to_string());
    }
    
    uniq void stackframe()
    {
        for(int i=gNumComeStackFrame-1; i>=0; i--) {
            printf("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]);
        }
    }
    
    uniq string come_get_stackframe()
    {
        return string(gComeStackFrameBuffer);
    }
    
    record uniq bool die(char* msg)
    {
        perror(msg);
        stackframe();
        exit(4);
        
        return 0;
    }
}




struct sMemHeaderTiny
{
    long size;
    int allocated;   
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

if($UNIX == 1) {
    struct sMemHeader
    {
        long size;
        int allocated;            
        struct sMemHeader* next;
        struct sMemHeader* prev;
        struct sMemHeader* free_next;
        
        char* sname[16];
        int sline[16];
        int id[16];
        
        char* class_name;
    };
    
    uniq sMemHeader* gAllocMem;
    
    uniq void come_heap_init(int come_debug)
    {
        gComeDebugLib = come_debug
        
        gComeStackFrameBuffer = ((void*)0);
        memset(gComeStackFrameSName, 0, sizeof(char*)*128);
        memset(gComeStackFrameSLine, 0, sizeof(int)*128);
        memset(gComeStackFrameID, 0, sizeof(int)*128);
        
        gAllocMem = ((void*)0);
    }
    
    uniq void come_heap_final()
    {
        if(gComeStackFrameBuffer) {
            free(gComeStackFrameBuffer);
        }
        
        if(gComeDebugLib) {
            sMemHeader* it = gAllocMem;
            int n = 0;
            while(it) {
                n++;
                
                bool flag = 0;
                printf("#%d ", n);
                if(it->class_name) {
                    printf("%p (%s): ", (char*)it + sizeof(sMemHeader) + sizeof(size_t) + sizeof(size_t), it->class_name);
                }
                for(int i=0; i<16; i++) {
                    if(it->sname[i]) {
                        printf("%s %d #%d, ", it->sname[i], it->sline[i], it->id[i]);
                        flag = 1;
                    }
                }
                if(flag) {
                    puts("");
                }
                it = it->next;
            }
            printf("%d memory leaks. %d alloc, %d free.\n", n, gNumAlloc, gNumFree);
        }
        else {
            sMemHeaderTiny* it = (sMemHeaderTiny*)gAllocMem;
            int n = 0;
            while(it) {
                n++;
                if(it->class_name) {
                    printf("#%d %p (%s) %s %d\n", n, (char*)it + sizeof(sMemHeader) + sizeof(size_t) + sizeof(size_t), it->class_name, it->sname , it->sline);
                }
                it = it->next;
            }
            if(n > 0) {
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n", n, gNumAlloc, gNumFree);
            }
        }
    }
    
    uniq void* alloc_from_pages(size_t size)
    {
        return calloc(1, size);
    }
    
    uniq void come_free_mem_of_heap_pool(void* mem)
    {
        if(mem) {
            if(gComeDebugLib) {
                sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(sMemHeader));
                
                if(it->allocated != 177783) {
                    return;
                }
                
                it->allocated = 0;
                
                sMemHeader* prev_it = it->prev;
                sMemHeader* next_it = it->next;
                
                if(gAllocMem == it) {
                    gAllocMem = next_it;
                    
                    if(gAllocMem) {
                        gAllocMem->prev = null;
                    }
                }
                else {
                    if(prev_it) {
                        prev_it->next = next_it;
                    }
                    if(next_it) {
                        next_it->prev = prev_it;
                    }
                }
                
                size_t size = it->size;
                
                free(it);
                
                gNumFree++;
            }
            else {
                sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(sMemHeaderTiny));
                
                if(it->allocated != 177783) {
                    return;
                }
                
                it->allocated = 0;
                
                sMemHeaderTiny* prev_it = it->prev;
                sMemHeaderTiny* next_it = it->next;
                
                if(gAllocMem == it) {
                    gAllocMem = (sMemHeader*)next_it;
                    
                    if(gAllocMem) {
                        gAllocMem->prev = null;
                    }
                }
                else {
                    if(prev_it) {
                        prev_it->next = next_it;
                    }
                    if(next_it) {
                        next_it->prev = prev_it;
                    }
                }
                
                size_t size = it->size;
                
                free(it);
                
                gNumFree++;
            }
        }
    }

    uniq void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0, char* class_name="")
    {
        if(gComeDebugLib) {
            size_t size2 = size + sizeof(sMemHeader);
#line 410 "/usr/local/include/neo-c.h"
            size2 = (size2 + 7 & ~0x7);
#line 412 "/usr/local/include/neo-c.h"
            void* result = alloc_from_pages(size2);
            
            sMemHeader* it = result;
            
            it->allocated = 177783;
            
            it->size = size2;
            it->free_next = ((void*)0);
            
            come_push_stackframe(sname, sline, 0);
    
            if(gNumComeStackFrame < 16) {
                int i;
                for(i=0; i<gNumComeStackFrame; i++) {
                    it.sname[i] = gComeStackFrameSName[i];
                    it.sline[i] = gComeStackFrameSLine[i];
                    it.id[i] = gComeStackFrameID[i];
                }
            }
            else {
                int i;
                for(i=0; i<16; i++) {
                    it.sname[i] = gComeStackFrameSName[gNumComeStackFrame -1 - i];
                    it.sline[i] = gComeStackFrameSLine[gNumComeStackFrame -1 - i];
                    it.id[i] = gComeStackFrameID[gNumComeStackFrame -1 - i];
                }
            }
            
            come_pop_stackframe();
            
            it->next = gAllocMem;
            it->prev = null;
            
            it->class_name = class_name; 
            
            if(gAllocMem) {
                gAllocMem->prev = it;
            }
            
            gAllocMem = it;
            
            gNumAlloc++;
            
            return (char*)result + sizeof(sMemHeader);
        }
        else {
            size_t size2 = size + sizeof(sMemHeaderTiny);
#line 462 "/usr/local/include/neo-c.h"
            size2 = (size2 + 7 & ~0x7);
#line 464 "/usr/local/include/neo-c.h"
            
            void* result = alloc_from_pages(size2);
            
            sMemHeaderTiny* it = result;
            
            it->allocated = 177783;
            
            it->class_name = class_name; 
            
            it->sname = sname;
            it->sline = sline;
            
            it->size = size2;
            it->free_next = ((void*)0);
            
            it->next = (sMemHeaderTiny*)gAllocMem;
            it->prev = null;
            
            if(gAllocMem) {
                ((sMemHeaderTiny*)gAllocMem)->prev = it;
            }
            
            gAllocMem = (sMemHeader*)it;
            
            gNumAlloc++;
            
            return (char*)result + sizeof(sMemHeaderTiny);
        }
    }
    
    uniq char* come_dynamic_typeof(void* mem)
    {
        if(gComeDebugLib) {
            sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeader));
            
            if(it->allocated != 177783) {
                printf("invalid heap object(%p)(1)\n", it);
                exit(2);
            }
            
            return it->class_name;
        }
        else {
            sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeaderTiny));
            
            if(it->allocated != 177783) {
                printf("invalid heap object(%p)(2)\n", it);
                exit(2);
            }
            
            return it->class_name;
        }
    }
}
else {
    uniq sMemHeaderTiny* gAllocMem;
    
    uniq void come_heap_init(int come_debug)
    {
        gComeDebugLib = come_debug
        
        gAllocMem = ((void*)0);
    }
    
    uniq void come_heap_final()
    {
        sMemHeaderTiny* it = (sMemHeaderTiny*)gAllocMem;
        int n = 0;
        while(it) {
            n++;
            if(it->class_name) {
                printf("#%d %p (%s) %s %d\n", n, (char*)it + sizeof(sMemHeaderTiny) + sizeof(size_t) + sizeof(size_t), it->class_name, it->sname , it->sline);
            }
            it = it->next;
        }
        if(n > 0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n", n, gNumAlloc, gNumFree);
        }
    }

    uniq void* alloc_from_pages(size_t size)
    {
        return calloc(1, size);
    }
    
    uniq void come_free_mem_of_heap_pool(void* mem)
    {
        if(mem) {
            sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(sMemHeaderTiny));
            
            if(it->allocated != 177783) {
                return;
            }
            
            it->allocated = 0;
            
            sMemHeaderTiny* prev_it = it->prev;
            sMemHeaderTiny* next_it = it->next;
            
            if(gAllocMem == it) {
                gAllocMem = next_it;
                
                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }
            
            size_t size = it->size;
            
            free(it);
            
            gNumFree++;
        }
    }
    
    uniq void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0, char* class_name="")
    {
        size_t size2 = size + sizeof(sMemHeaderTiny);
#line 593 "/usr/local/include/neo-c.h"
        size2 = (size2 + 7 & ~0x7);
#line 595 "/usr/local/include/neo-c.h"
        
        void* result = alloc_from_pages(size2);
        
        sMemHeaderTiny* it = result;
        
        it->allocated = 177783;
        
        it->class_name = class_name; 
        
        it->sname = sname;
        it->sline = sline;
        
        it->size = size2;
        it->free_next = ((void*)0);
        
        it->next = (sMemHeaderTiny*)gAllocMem;
        it->prev = null;
        
        if(gAllocMem) {
            ((sMemHeaderTiny*)gAllocMem)->prev = it;
        }
        
        gAllocMem = it;
        
        gNumAlloc++;
        
        return (char*)result + sizeof(sMemHeaderTiny);
    }
    
    uniq char* come_dynamic_typeof(void* mem)
    {
        sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeaderTiny));
        
        if(it->allocated != 177783) {
            printf("invalid heap object(%p)(2)\n", it);
            exit(2);
        }
        
        return it->class_name;
    }
}

uniq int gComeDebugLib = 0;

uniq int gNumAlloc = 0;
uniq int gNumFree = 0;

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="")
{
    char* mem = come_alloc_mem_from_heap_pool(sizeof(size_t)+sizeof(size_t)+count*size, sname, sline, class_name);
    
    size_t* ref_count = (size_t*)mem;

    *ref_count = 0;
    
    size_t* size2 = (size_t*)(mem + sizeof(size_t));
    
    *size2 = size*count + sizeof(size_t) + sizeof(size_t);
    
    return mem + sizeof(size_t) + sizeof(size_t);
}

uniq void come_free(void* mem)
{
    if(mem == ((void*)0)) {
        return;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    come_free_mem_of_heap_pool((char*)ref_count);
}

uniq void* come_memdup(void* block, char* sname=null, int sline=0, char* class_name=null)
{
    if(!block) {
        return null;
    }

    char* mem = (char*)block - sizeof(size_t) - sizeof(size_t);
    
    size_t* size_p = (size_t*)(mem + sizeof(size_t));

    size_t size = *size_p - sizeof(size_t) - sizeof(size_t);
    
    void* result = come_calloc(1, size, sname, sline, class_name);

    memcpy(result, block, size);
    
    return result;
}

uniq void* come_increment_ref_count(void* mem)
{
    if(mem == ((void*)0)) {
        return mem;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    (*ref_count)++;
    
    return mem;
}

uniq void* come_print_ref_count(void* mem)
{
    if(mem == ((void*)0)) {
        return mem;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    printf("ref_count %ld\n", *ref_count);
    
    return mem;
}

uniq int come_get_ref_count(void* mem)
{
    if(mem == ((void*)0)) {
        return 0;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    return *ref_count;
}

uniq void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return mem;
        }
    }
    if(mem == ((void*)0)) {
        return ((void*)0);
    }
    
    long* ref_count = (long*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    if(!no_decrement) {
        (*ref_count)--;
    }
    
    long count = *ref_count;
    if(!no_free && count <= 0) {
        if(protocol_obj && protocol_fun) {
            void (*finalizer)(void*) = protocol_fun;
            finalizer(protocol_obj);
            
            come_free(protocol_obj);
        }
        come_free(mem);
        return ((void*)0);
    }
    
    return mem;
}

uniq void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return;
        }
    }
    if(mem == ((void*)0)) {
        return;
    }
    
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
        else {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
        }
    }
    else {
        long* ref_count = (long*)((char*)mem - sizeof(size_t) - sizeof(size_t));
        
        if(!no_decrement) {
            (*ref_count)--;
        }
        
        long count = *ref_count;
        if(!no_free && count <= 0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj && protocol_fun) {
                        void (*finalizer)(void*) = protocol_fun;
                        finalizer(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(fun) {
                        void (*finalizer)(void*) = fun;
                        finalizer(mem);
                    }
                }
                else {
                    if(protocol_obj && protocol_fun) {
                        void (*finalizer)(void*) = protocol_fun;
                        finalizer(protocol_obj);
                        come_free(protocol_obj);
                    }
                }
                come_free(mem);
            }
        }
    }
}

uniq void xassert(char* msg, bool test)
{
    printf("%s...", msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

uniq string __builtin_string(char* str)
{
    if(str == null) {
        return null;
    }
    int len = strlen(str) + 1;
    
    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

if($UNIX == 0)
{
    uniq void come_push_stackframe(char* sname, int sline, int id) version 2
    {
        inherit(sname, sline, id);
    }
    
    uniq void come_pop_stackframe() version 2
    {
        inherit();
    }
    
    uniq void come_save_stackframe(char* sname, int sline) version 2
    {
        inherit(sname, sline);
    }
    
    uniq void stackframe() version 2
    {
        inherit();
    }
    
    uniq string come_get_stackframe() version 2
    {
        return inherit();
    }
    
    uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="") version 2
    {
        return inherit(count, size, sname, sline, class_name);
    }
    
    uniq void come_free(void* mem) version 2
    {
        inherit(mem);
    }
}




struct list_item<T>
{
    T item;
    list_item<T>* prev;
    list_item<T>* next;
};

struct list<T>
{
    list_item<T>* head;
    list_item<T>* tail;
    int len;

    list_item<T>* it;
};

impl list <T>
{
    list<T>*% initialize(list<T>*% self) {
        self.head = null;
        self.tail = null;
        self.len = 0;

        return self;
    }
    list<T>*% initialize_with_values(list<T>*% self, int num_value, T&* values) 
    {
        self.head = null;
        self.tail = null;
        self.len = 0;
        
        for(int i=0; i<num_value; i++) {
            self.push_back(dummy_heap values[i]);
        }

        return self;
    }
    void finalize(list<T>* self) {
        if(self == null) return;
        
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }
    }
    list<T>*% clone(list<T>* self) {
        if(self == null) {
            return null;
        }
        var result = new list<T>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            if(isheap(T)) {
                result.add(clone it.item);
            }
            else {
                result.add(dummy_heap dupe it.item);
            }

            it = it.next;
        }

        return result;
    }
    list<T>* add(list<T>* self, T item)
    {
        if(self == null) return self;
        
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);
            
            litem.prev = null;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;
            
            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
        
        return self;
    }
    T pop_front(list<T>* self) {
        T result;

        if(self == null) { return result; }
        
        if(self.len == 1) {
            result = self.head.item;
            
            list_item<T>* litem = self.head;
            self.head = null;
            self.tail = null;
            
            delete borrow litem;
            
            self.len--;
        }
        else if(self.len == 2) {
            list_item<T>* litem = self.head;
            
            result = self.head.item;
            
            self.head = self.head.next;
            self.head.prev = null;
            self.head.next = null;
            self.tail = self.head;
            
            delete borrow litem;
            
            self.len--;
        }
        else if(self.len >= 3) {
            list_item<T>* litem = self.head;
            
            result = self.head.item;
            
            self.head = litem.next;
            self.head.prev = null;
            
            delete borrow litem;
            
            self.len--;
        }
        return result;
    }
    list<T>* push_back(list<T>* self, T item)
    {
        if(self == null) {
            return self;
        }
        
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);
            
            litem.prev = null;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;
            
            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
        
        return self;
    }
    
    string to_string(list<T>* self)
    {
        if(self == null) {
            return string("");
        }
        
        buffer*% result = new buffer();
        
        result.append_str("[");
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            result.append_str(it.item.to_string());
            it = it.next;
            
            i++;
            
            if(i != self.length()) {
                result.append_str(",");
            }
        }
        
        result.append_str("]");
        
        return result.to_string();
    }
    
    T& begin(list<T>* self) {
        if(self == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.it = self.head;

        if(self.it) {
            return self.it.item;
        }
        
        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(list<T>* self) {
        if(self == null || self.it == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        
        self.it = self.it.next;

        if(self.it) {
            return self.it.item;
        }
        
        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(list<T>* self) {
        return self == null || self.it == null;
    }
    list<T>* each(list<T>* self, void* parent, void (*block)(void*, T,int,bool*)) 
    {
        if(self == null) {
            return null;
        }
        
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            bool end_flag = 0;
            block(parent, it.item, i, &end_flag);

            if(end_flag == 1) {
                break;
            }
            it = it.next;
            i++;
        }
        
        return self;
    }
    T item(list<T>* self, int position, T& default_value) 
    {
        if(self == null) {
            return dummy_heap default_value;
        }
        
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        return dummy_heap default_value;
    }

    int length(list<T>* self)
    {
        if(self == null) {
            return 0;
        }
        return self.len;
    }
    
    list<T>* insert(list<T>* self, int position, T item)
    {
        if(self == null) {
            return null;
        }
        if(position < 0) {
            position += self.len + 1;
        }
        if(position < 0) {
            position = 0;
        }
        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        if(position == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = self.head;
            litem.item = item;
            
            self.head.prev = litem;
            self.head = litem;

            self.len++;
        }
        else if(self.len == 1) {
            var litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = self.tail;
            litem.item = item;
            
            self.tail.prev = litem;
            self.head.next = litem;

            self.len++;
        }
        else {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(position == i) {
                    list_item<T>* litem = borrow gc_inc(new list_item<T>);

                    litem.prev = it.prev;
                    litem.next = it;
                    litem.item = item;

                    it.prev.next = litem;
                    it.prev = litem;

                    self.len++;
                }

                it = it.next;
                i++;
            }
        }
        
        return self;
    }
    list<T>* reset(list<T>* self) {
        if(self == null) {
            return self;
        }
        
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;
        
        return self;
    }
    list<T>* remove(list<T>* self, T& item) {
        if(self == null) {
            return self;
        }
        
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;
            
            it = it.next;
        }
        
        return self;
    }
    list<T>* remove_by_pointer(list<T>* self, T& item) {
        if(self == null) {
            return self;
        }
        
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it->item == item) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;
            
            it = it.next;
        }
        
        return self;
    }
    list<T>* delete(list<T>* self, int head, int tail)
    {
        if(self == null) {
            return self;
        }
        
        if(head < 0) {
            head += self.len;
        }
        if(tail < 0) {
            tail += self.len + 1;
        }

        if(head > tail) {
            int tmp = tail;
            tail = head;
            head = tmp;
        }

        if(head < 0) {
            head = 0;
        }

        if(tail > self.len) {
            tail = self.len;
        }
        
        if(head >= self.len) {
            return self;
        }

        if(head == tail) {
            return self;
        }
        
        if(head == 0 && tail == self.len) 
        {
            self.reset();
        }
        else if(head == 0) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i < tail) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else if(i == tail) {
                    self.head = it;
                    self.head.prev = null;
                    break;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else if(tail == self.len) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i == head) {
                    self.tail = it.prev;
                    self.tail.next = null;
                }

                if(i >= head) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else {
            list_item<T>* it = self.head;

            list_item<T>* head_prev_it = null;
            list_item<T>* tail_it = null;


            int i = 0;
            while(it != null) {
                if(i == head) {
                    head_prev_it = it.prev;
                }
                if(i == tail) {
                    tail_it = it;
                }

                if(i >= head && i < tail) 
                {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }

            if(head_prev_it != null) {
                head_prev_it.next = tail_it;
            }
            if(tail_it != null) {
                tail_it.prev = head_prev_it;
            }
        }
        
        return self;
    }
    list<T>* replace(list<T>* self, int position, T item)
    {
        if(self == null) {
            return self;
        }
        
        if(position < 0) {
            position += self.len;
        }
        if(position < 0) {
            position = 0;
        }
        
        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(position == i) {
                it.item = item;
                break;
            }
            it = it.next;
            i++;
        }
        
        return self;
    }

    int find(list<T>* self, T& item, int default_value) {
        if(self == null) {
            return default_value;
        }
        
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                return it2;
            }
            it2++;
            
            it = it.next;
        }

        return default_value;
    }
    int find_by_pointer(list<T>* self, T& item, int default_value) {
        if(self == null) {
            return default_value;
        }
        
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item == item) {
                return it2;
            }
            it2++;
            
            it = it.next;
        }

        return default_value;
    }
    bool equals(list<T>* left, list<T>* right)
    {
        if(left == null && right == null) {
            return 1;
        }
        else if(left == null || right == null) {
            return 0;
        }
        
        if(left.len != right.len) {
            return 0;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!it.item.equals(it2.item)) {
                return 0;
            }

            it = it.next;
            it2 = it2.next;
        }

        return 1;
    }
    list<T>*% sublist(list<T>* self, int begin, int tail) {
        if(self == null) {
            return self;
        }
        
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }
        
        if(begin >= self.len) {
            return new list<T>();
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    void operator_store_element(list<T>* self, int position, T item) {
        self.replace(position, item);
    }
    T operator_load_element(list<T>* self, int position) {
        if(self == null) {
            T` default_value;
            memset(&default_value, 0, sizeof(T));
            return default_value;
        }
        
        if(position < 0) {
            position += self.len;
        }
        
        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        T` default_value;
        memset(&default_value, 0, sizeof(T));
        return default_value;
    }
    list<T>*% operator_load_range_element(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();
        
        if(self == null) {
            return result;
        }

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }
        
        if(begin >= self.len) {
            return result;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    bool operator_equals(list<T>* left, list<T>* right) 
    {
        if(left == null && right == null) {
            return 1;
        }
        else if(left == null || right == null) {
            return 0;
        }
        
        if(left.len != right.len) {
            return 0;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!(it.item === it2.item)) {
                return 0;
            }

            it = it.next;
            it2 = it2.next;
        }

        return 1;
    }
    bool operator_not_equals(list<T>* left, list<T>* right) {
        return !left.operator_equals(right);
    }
    bool contained(list<T>* self, T& item) {
        if(self == null) {
            return 0;
        }
        
        for(var it = self.begin(); !self.end(); it = self.next()) {
            if(it.equals(item)) {
                return 1;
            }
        }
        
        return 0;
    }
    bool contained_by_pointer(list<T>* self, T& item) {
        if(self == null) {
            return 0;
        }
        for(var it = self.begin(); !self.end(); it = self.next()) {
            if(it == item) {
                return 1;
            }
        }
        
        return 0;
    }
    list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T&,T&)) {
        auto result = new list<T>.initialize();

        list_item<T>* it = left.head;
        list_item<T>* it2= right.head;

        while(1) {
            if(it && it2) {
                if(it.item == null) {
                    it = it.next;
                }
                else if(it2.item == null) {
                    it2 = it2.next;
                }
                else if(compare(it.item, it2.item) <= 0) 
                {
                    if(isheap(T)) {
                        result.push_back(clone it.item);
                    }
                    else {
                        result.push_back(dummy_heap dupe it.item);
                    }

                    it = it.next;
                }
                else {
                    if(isheap(T)) {
                        result.push_back(clone it2.item);
                    }
                    else {
                        result.push_back(dummy_heap dupe it2.item);
                    }


                    it2 = it2.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        if(isheap(T)) {
                            result.push_back(clone it2.item);
                        }
                        else {
                            result.push_back(dummy_heap dupe it2.item);
                        }

                        it2 = it2.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        if(isheap(T)) {
                            result.push_back(clone it.item);
                        }
                        else {
                            result.push_back(dummy_heap dupe it.item);
                        }

                        it = it.next;
                    }
                }
                break;
            }
        }

        return result;
    }
    list<T>*% merge_sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        if(self.head == null) {
            return clone self;
        }
        if(self.head.next == null) {
            return clone self;
        }

        auto list1 = new list<T>.initialize();
        auto list2 = new list<T>.initialize();

        list_item<T>* it = self.head;

        while(1) {
            list1.push_back(dupe it.item);
            list2.push_back(dupe it.next.item);

            if(it.next.next == null) {
                break;
            }

            it = it.next.next;

            if(it.next == null) {
                if(isheap(T)) {
                    list1.push_back(clone it.item);
                }
                else {
                    list1.push_back(dummy_heap dupe it.item);
                }
                break;
            }
        }
        
        auto left_list = list1.merge_sort_with_lambda(compare);
        auto right_list = list2.merge_sort_with_lambda(compare);
        
        return left_list.merge_list_with_lambda(right_list, compare);
    }
    list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        if(self == null) {
            return new list<T>();
        }
        return self.merge_sort_with_lambda(compare);
    }
    list<T>*% sort(list<T>* self) {
        if(self == null) {
            return new list<T>();
        }
        return self.merge_sort_with_lambda(int lambda(T& left, T& right) { return left.compare(right); });
    }
    
    template<R> list<R>*% map(list<T>* self, void* parent, R (*block)(void*, T))
    {
        if(self == null) {
            return new list<R>();
        }
        auto result = new list<R>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            R item = block(parent, it.item);
            result.push_back(item);

            it = it.next;
        }

        return result;
    }
    list<T>*% reverse(list<T>* self) {
        list<T>%* result = new list<T>();
        
        if(self == null) { 
            return result;
        }

        list_item<T>* it = self.tail;
        while(it != null) {
            result.push_back(dupe it.item);
            it = it.prev;
        };

        return result;
    }
    list<T>*% uniq(list<T>* self) {
        list<T>*% result = new list<T>.initialize();
        
        if(self == null) {
            return result;
        }

        if(self.length() > 0) {
            T item_before = self.head.item;

            result.push_back(dupe item_before);

            list_item<T>* it = self.head;
            it = it.next;
            while(it != null) {
                if(!it.item.equals(item_before)) {
                    result.push_back(dupe it.item);
                }

                item_before = it.item;
                
                it = it.next;
            }
        }

        return result;
    }
    list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T))
    {
        list<T>*% result = new list<T>();
        
        if(self == null) {
            return result;
        }

        list_item<T>* it = self.head;
        while(it != null) {
            if(block(parent, it.item)) {
                result.push_back(dupe it.item);
            }

            it = it.next;
        }

        return result;
    } 
    
    list<T>*% operator_add(list<T>*% left, list<T>*% right) {
        list<T>*% result = new list<T>();
        
        if(left == null || right == null) {
            return result;
        }

        list_item<T>* it = left.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        it = right.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        return result;
    }
    list<T>*% operator_mult(list<T>* left, int right) {
        list<T>*% result = new list<T>();
        
        if(left == null) {
            return result;
        }

        for(int i=0; i<right; i++) {
            list_item<T>* it = left.head;
            while(it != null) {
                result.push_back(dupe it.item);
    
                it = it.next;
            }
        }

        return result;
    }
    string join(list<T>* self, char* sep=" ") {
        if(self == null) {
            return string("");
        }
        
        buffer*% buf = new buffer();
        
        int n = 0;
        for(var it = self.begin(); !self.end(); it = self.next()) {
            buf.append_str(it);
            
            if(n < self.length()-1) {
                buf.append_str(sep);
            }
            
            n++;
        }
        
        return buf.to_string();
    }
}




struct map<T, T2>
{
    T*& keys;
    bool* item_existance;
    T2*& items;
    int size;
    int len;
    
    list<T>*% key_list;

    int it;
};

#line 1995 "/usr/local/include/neo-c.h"

impl map <T, T2>
{
    map<T,T2>*% initialize(map<T,T2>*% self) {
        self.keys = borrow gc_inc(new T[128]);
        self.items = borrow gc_inc(new T2[128]);
        self.item_existance = borrow gc_inc(new bool[128]);

        for(int i=0; i<128; i++)
        {
            self.item_existance[i] = 0;
        }

        self.size = 128;
        self.len = 0;
        
        self.key_list = new list<T>();

        self.it = 0;

        return self;
    }
    map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T&* keys, T2&* values) 
    {
        self.keys = borrow gc_inc(new T[128]);
        self.items = borrow gc_inc(new T2[128]);
        self.item_existance = borrow gc_inc(new bool[128]);

        for(int i=0; i<128; i++)
        {
            self.item_existance[i] = 0;
        }

        self.size = 128;
        self.len = 0;

        self.it = 0;
        
        self.key_list = new list<T>();
        
        for(int i=0; i<num_keys; i++) {
            self.insert(dummy_heap keys\[i], dummy_heap values[i]);
        }

        return self;
    }
    void finalize(map<T,T2>* self) {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    delete self.items\[i];
                }
            }
        }
        come_free((char*)self.items);

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    delete self.keys\[i];
                }
            }
        }
        come_free((char*)self.keys);
        
        delete borrow self.key_list;

        delete borrow self.item_existance;
    }
    map<T, T2>*% clone(map<T, T2>* self)
    {
        if(self == null) {
            return null;
        }
        
        var result = new map<T,T2>();
        
        result.key_list = new list<T>();

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            
            var it2 = self.at(it, default_value);

            if(isheap(T) && isheap(T2)) {
                result.put(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.put(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.put(dummy_heap dupe it, clone it2);
            }
            else {
                result.put(dummy_heap dupe it, dummy_heap dupe it2);
            }
        }

        return result;
    }
    
    string to_string(map<T,T2>* self)
    {
        if(self == null) {
            return string("");
        }
        
        buffer*% result = new buffer();
        
        result.append_str("[");
        
        list_item<T>* it = self.key_list.head;
        while(it) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it.item, default_value);
            
            result.append_str(it.item.to_string());
            result.append_str(":");
            result.append_str(it2.to_string());
            
            it = it.next;
            
            if(it != null) {
                result.append_str(",");
            }
        }
        
        result.append_str("]");
        
        return result.to_string();
    }
    
    T2 at(map<T, T2>* self, T& key, T2 default_value) {
        if(self == null) {
            return default_value;
        }
        
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(1) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return dummy_heap self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }
    map<T,T2>* remove(map<T, T2>* self, T key) {
        if(self == null) {
            return self;
        }
        
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(1) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    self.key_list.remove(self.keys\[it]);
                    
                    self.item_existance[it] = 0;
                    if(isheap(T)) {
                        delete borrow self.keys\[it];
                    }
                    self.keys\[it] = null;
   
                    if(isheap(T2)) {
                        delete borrow self.items\[it];
                    }
                    memset(self.items + it, 0, sizeof(T2));
                    
                    self.len--;
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    break;
                }
            }
            else {
                break;
            }
        }
        
        return self;
    }
    map<T,T2>* remove_by_pointer(map<T, T2>* self, T& key) {
        if(self == null) {
            return self;
        }
        
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(1) {
            if(self.item_existance[it])
            {
                if(self.keys\[it] == key) 
                {
                    self.key_list.remove(self.keys\[it]);
                    
                    self.item_existance[it] = 0;
                    if(isheap(T)) {
                        delete borrow self.keys\[it];
                    }
                    self.keys\[it] = null;
                    if(isheap(T2)) {
                        delete borrow self.items\[it];
                    }
                    memset(self.items + it, 0, sizeof(T2));
                    
                    self.len--;
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    break;
                }
            }
            else {
                break;
            }
        }
        
        return self;
    }
    int length(map<T, T2>* self) {
        if(self == null) {
            return 0;
        }
        return self.len;
    }
    
    T& begin(map<T, T2>* self) {
        if(self == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.head;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }
        
        T`& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(map<T, T2>* self) {
        if(self == null || self.key_list.it == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.it.next;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }
        
        T`& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(map<T, T2>* self) {
        return self == null || self.key_list == null || self.key_list.it == null;
    }
    
    void rehash(map<T,T2>* self) {
        int size = self.size * 10;
        T&* keys = borrow gc_inc(new T[size]);
        T2&* items = borrow gc_inc(new T2[size]);
        bool* item_existance = borrow gc_inc(new bool[size]);

        int len = 0;

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = borrow self.at(it, default_value);
            unsigned int hash = ((T)it).get_hash_key() % size;
            int n = hash;

            while(1) {
                if(item_existance[n])
                {
                    n++;

                    if(n >= size) {
                        n = 0;
                    }
                    else if(n == hash) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
                else {
                    item_existance[n] = 1;
                    keys\[n] = it;
                    T2` default_value;
                    memset(&default_value, 0, sizeof(T2));
                    items\[n] = borrow self.at(it, default_value);

                    len++;
                    break;
                }
            }
        }

        come_free((char*)self.items);
        delete borrow self.item_existance;
        come_free((char*)self.keys);

        self.keys = keys;
        self.items = items;
        self.item_existance = item_existance;

        self.size = size;
        self.len = len;
    }

    void show_map(map<T, T2>* self) {
        if(self == null) {
            return;
        }
        
        for(var it = self.begin(); !self.end(); it = self.next()) {
            puts("key " + it.to_string());
            
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            
            var item = self.at(it, default_value);
            if(item) {
                puts("item " + item.to_string());
            }
        }
    }
    
    map<T,T2>* insert(map<T,T2>* self, T key, T2 item) {
        if(self == null) {
            return self;
        }
        
        if(self.len*10 >= self.size) {
            self.rehash();
        }
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(1) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key)) 
                {
                    if(isheap(T)) {
                        self.key_list.remove(self.keys\[it]);
                        delete self.keys\[it];
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = 1;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }
        
        bool same_key_exist = 0;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next()) {
            if(it2.equals(key)) {
                same_key_exist = 1;
            }
        }
        
        if(!same_key_exist) {
            self.key_list.push_back(key);
        }
        
        return self;
    }
    map<T,T2>* put(map<T,T2>* self, T key, T2 item) {
        if(self == null) {
            return self;
        }
        
        if(self.len*2 >= self.size) {
            self.rehash();
        }
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(1) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key)) 
                {
                    if(isheap(T)) {
                        delete self.keys\[it];
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = 1;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }
        
        bool same_key_exist = 0;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next()) {
            if(it2.equals(key)) {
                same_key_exist = 1;
            }
        }
        
        if(!same_key_exist) {
            self.key_list.push_back(key);
        }
        
        return self;
    }
    T2 operator_load_element(map<T, T2>* self, T& key) {
        T2` default_value;
        memset(&default_value, 0, sizeof(T2));
        
        if(self == null) {
            return default_value;
        }
        
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(1) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return dummy_heap self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }
    
    void operator_store_element(map<T, T2>* self, T key, T2 item) {
        if(self == null) {
            return ;
        }
        self.insert(key, item);
    }
    
    bool equals(map<T, T2>* left, map<T, T2>* right)
    {
        if(left == null && right == null) {
            return 1;
        }
        else if(left == null || right == null) {
            return 0;
        }
        
        if(left.len != right.len) {
            return 0;
        }

        int n = 0;
        bool result = 1;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T` default_value;
            memset(&default_value, 0, sizeof(T));
            T it2 = right.key_list.item(n, default_value);
            
            if(it.equals(it2)) {
                T2` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2 item = left.at(it, default_value2);
                T2 item2 = right.at(it2, default_value2);
                
                if(!item.equals(item2)) {
                    result = 0;
                }
            }
            else {
                result = 0;
            }
            
            n++;
        }

        return result;
    }
    
    bool operator_equals(map<T, T2>* left, map<T,T2>* right) {
        if(left == null && right == null) {
            return 1;
        }
        else if(left == null || right == null) {
            return 0;
        }
        if(left.len != right.len) {
            return 0;
        }

        int n = 0;
        bool result = 1;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T` default_value;
            memset(&default_value, 0, sizeof(T));
            T& it2 = right.key_list.item(n, default_value);
            
            if(it === it2) {
                T2` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = right.at(it2, default_value2);
                
                if(!(item === item2)) {
                    result = 0;
                }
            }
            else {
                result = 0;
            }
            
            n++;
        }

        return result;
    }
    
    bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) {
        if(left == null && right == null) {
            return 0;
        }
        else if(left == null || right == null) {
            return 1;
        }
        
        return !(left.operator_equals(right));
    }
    
    bool find(map<T, T2>* self, T& key) {
        if(self == null) {
            return 0;
        }
        
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(1) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return 1;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return 0;
                }
            }
            else {
                return 0;
            }
        }

        return 0;
    }
    map<T,T2>*% operator_add(map<T,T2>* left, map<T,T2>* right) {
        map<T,T2>*% result = new map<T,T2>();
        
        if(left == null || right == null) {
            return result;
        }

        int n = 0;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2 it2 = left.at(it, default_value);
            
            if(isheap(T) && isheap(T2)) {
                result.insert(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.insert(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.insert(dummy_heap dupe it, clone it2);
            }
            else {
                result.insert(dummy_heap dupe it, dummy_heap dupe it2);
            }
            n++;
        }

        n=0;
        for(var it = right.key_list.begin(); !right.key_list.end(); it = right.key_list.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2 it2 = left.at(it, default_value);
            
            if(isheap(T) && isheap(T2)) {
                result.insert(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.insert(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.insert(dummy_heap dupe it, clone it2);
            }
            else {
                result.insert(dummy_heap dupe it, dummy_heap dupe it2);
            }
            n++;
        }

        return result;
    }
    map<T,T2>*% operator_mult(map<T,T2>* left, int right) {
        map<T,T2>*% result = new map<T,T2>();
        
        if(left == null || right == null) {
            return result;
        }

        for(int i=0; i<right; i++ ) {
            int n = 0;
            for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
                T2` default_value;
                memset(&default_value, 0, sizeof(T2));
                
                T2 it2 = left.at(it, default_value);
                
                if(isheap(T) && isheap(T2)) {
                    result.insert(clone it, clone it2);
                }
                else if(isheap(T)) {
                    result.insert(clone it, dummy_heap dupe it2);
                }
                else if(isheap(T2)) {
                    result.insert(dummy_heap dupe it, clone it2);
                }
                else {
                    result.insert(dummy_heap dupe it, dummy_heap dupe it2);
                }
                n++;
            }
        }

        return result;
    }
    list<T>*% keys(map<T, T2>* self) {
        var result = new list<T>();
        
        if(self == null) {
            return result;
        }
        
        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) {
            if(isheap(T)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap dupe it);
            }
        }
        
        return result;
    }
    
    list<T2>*% values(map<T, T2>* self) {
        var result = new list<T2>();
        
        if(self == null) {
            return result;
        }
        
        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) { 
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
        
            var it2 = self.at(it, default_value);
            
            if(isheap(T2)) {
                result.push_back(clone it2);
            }
            else {
                result.push_back(dummy_heap dupe it2);
            }
        }
        
        return result;
    }
}




struct tuple1<T>
{
    T v1;
};

impl tuple1 <T>
{
    tuple1<T>*% initialize(tuple1<T>*% self, T v1)
    {
        self.v1 = v1;
        
        return self;
    }
    
    bool equals(tuple1<T>* self, tuple1<T>* right)
    {
        if(self == null && right == null) {
            return 1;
        }
        else if(self == null || right == null) {
            return 0;
        }
        if(!self.v1.equals(right.v1)) {
            return 0;
        }
        
        return 1;
    }
    bool operator_equals(tuple1<T>* self, tuple1<T>* right) 
    {
        if(self == null && right == null) {
            return 1;
        }
        else if(self == null || right == null) {
            return 0;
        }
        if(!(self.v1 === right.v1)) {
            return 0;
        }
        
        return 1;
    }
    bool operator_not_equals(tuple1<T>* left, tuple1<T>* right) {
        return !left.operator_equals(right);
    }
    
    string to_string(tuple1<T>* self)
    {
        if(self == null) {
            return string("");
        }
        return "(" + self.v1.to_string() + ")";
    }
}

struct tuple2<T, T2>
{
    T v1;
    T2 v2;
};

impl tuple2 <T, T2>
{
    tuple2<T, T2>*% initialize(tuple2<T, T2>*% self, T v1, T2 v2)
    {
        self.v1 = v1;
        self.v2 = v2;
        
        return self;
    }
    
    string to_string(tuple2<T, T2>* self)
    {
        if(self == null) {
            return string("");
        }
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + ")";
    }
    bool equals(tuple2<T,T2>* self, tuple2<T,T2>* right)
    {
        if(self == null && right == null) {
            return 1;
        }
        else if(self == null || right == null) {
            return 0;
        }
        if(!self.v1.equals(right.v1)) {
            return 0;
        }
        if(!self.v2.equals(right.v2)) {
            return 0;
        }
        
        return 1;
    }
    bool operator_equals(tuple2<T,T2>* self, tuple2<T,T2>* right) 
    {
        if(self == null && right == null) {
            return 1;
        }
        else if(self == null || right == null) {
            return 0;
        }
        if(!(self.v1 === right.v1)) {
            return 0;
        }
        if(!(self.v2 === right.v2)) {
            return 0;
        }
        
        return 1;
    }
    bool operator_not_equals(tuple2<T,T2>* left, tuple2<T,T2>* right) {
        return !left.operator_equals(right);
    }
}


struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
};

impl tuple3 <T, T2, T3>
{
    tuple3<T, T2, T3>*% initialize(tuple3<T, T2, T3>*% self, T v1, T2 v2, T3 v3)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        
        return self;
    }
    
    string to_string(tuple3<T, T2, T3>* self)
    {
        if(self == null) {
            return string("");
        }
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + ")";
    }
    bool equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right)
    {
        if(self == null && right == null) {
            return 1;
        }
        else if(self == null || right == null) {
            return 0;
        }
        if(!self.v1.equals(right.v1)) {
            return 0;
        }
        if(!self.v2.equals(right.v2)) {
            return 0;
        }
        if(!self.v3.equals(right.v3)) {
            return 0;
        }
        
        return 1;
    }
    bool operator_equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right) 
    {
        if(self == null && right == null) {
            return 1;
        }
        else if(self == null || right == null) {
            return 0;
        }
        if(!(self.v1 === right.v1)) {
            return 0;
        }
        if(!(self.v2 === right.v2)) {
            return 0;
        }
        if(!(self.v3 === right.v3)) {
            return 0;
        }
        
        return 1;
    }
    bool operator_not_equals(tuple3<T,T2,T3>* left, tuple3<T,T2,T3>* right) {
        return !left.operator_equals(right);
    }
}

struct tuple4<T, T2, T3, T4>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
};

impl tuple4 <T, T2, T3, T4>
{
    tuple4<T, T2, T3, T4>*% initialize(tuple4<T, T2, T3, T4>*% self, T v1, T2 v2, T3 v3, T4 v4)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        
        return self;
    }
    
    string to_string(tuple4<T, T2, T3, T4>* self)
    {
        if(self == null) {
            return string("");
        }
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + ")";
    }
    bool equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right)
    {
        if(self == null && right == null) {
            return 1;
        }
        else if(self == null || right == null) {
            return 0;
        }
        if(!self.v1.equals(right.v1)) {
            return 0;
        }
        if(!self.v2.equals(right.v2)) {
            return 0;
        }
        if(!self.v3.equals(right.v3)) {
            return 0;
        }
        if(!self.v4.equals(right.v4)) {
            return 0;
        }
        
        return 1;
    }
    bool operator_equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right) 
    {
        if(self == null && right == null) {
            return 1;
        }
        else if(self == null || right == null) {
            return 0;
        }
        if(!(self.v1 === right.v1)) {
            return 0;
        }
        if(!(self.v2 === right.v2)) {
            return 0;
        }
        if(!(self.v3 === right.v3)) {
            return 0;
        }
        if(!(self.v4 === right.v4)) {
            return 0;
        }
        
        return 1;
    }
    bool operator_not_equals(tuple4<T,T2,T3,T4>* left, tuple4<T,T2,T3,T4>* right) {
        return !left.operator_equals(right);
    }
}

struct tuple5<T, T2, T3, T4, T5>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
    T5 v5;
};

impl tuple5 <T, T2, T3, T4, T5>
{
    tuple5<T, T2, T3, T4, T5>*% initialize(tuple5<T, T2, T3, T4, T5>*% self, T v1, T2 v2, T3 v3, T4 v4, T5 v5)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        self.v5 = v5;
        
        return self;
    }
    
    string to_string(tuple5<T, T2, T3, T4, T5>* self)
    {
        if(self == null) {
            return string("");
        }
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + "," + self.v5.to_string() + ")";
    }
    bool equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right)
    {
        if(self == null && right == null) {
            return 1;
        }
        else if(self == null || right == null) {
            return 0;
        }
        if(!self.v1.equals(right.v1)) {
            return 0;
        }
        if(!self.v2.equals(right.v2)) {
            return 0;
        }
        if(!self.v3.equals(right.v3)) {
            return 0;
        }
        if(!self.v4.equals(right.v4)) {
            return 0;
        }
        if(!self.v5.equals(right.v5)) {
            return 0;
        }
        
        return 1;
    }
    bool operator_equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right) 
    {
        if(self == null && right == null) {
            return 1;
        }
        else if(self == null || right == null) {
            return 0;
        }
        if(!(self.v1 === right.v1)) {
            return 0;
        }
        if(!(self.v2 === right.v2)) {
            return 0;
        }
        if(!(self.v3 === right.v3)) {
            return 0;
        }
        if(!(self.v4 === right.v4)) {
            return 0;
        }
        if(!(self.v5 === right.v5)) {
            return 0;
        }
        
        return 1;
    }
    bool operator_not_equals(tuple5<T,T2,T3,T4,T5>* left, tuple5<T,T2,T3,T4,T5>* right) {
        return !left.operator_equals(right);
    }
}




uniq buffer*% buffer*::initialize(buffer*% self) 
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    return self;
}

uniq buffer*% buffer*::initialize_with_value(buffer*% self, char* mem, size_t size) 
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;
    
    self.append(mem, size);

    return self;
}

uniq void buffer*::finalize(buffer* self)
{
    if(self && self.buf) delete borrow self.buf;
}

uniq buffer*% buffer*::clone(buffer* self)
{
    if(self == null) {
        return null;
    }
    
    var result = new buffer;
    
    result.size = self.size;
    result.buf = new char[self.size];
    result.len = self.len;
    memcpy(result.buf, self.buf, self.len);
    
    return result;
}

uniq bool buffer*::equals(buffer* left, buffer* right)
{
    if(left == null && right == null) {
        return 1;
    }
    else if(left == null || right == null) {
        return 0;
    }
    
    return left.to_string().equals(right.to_string());
}

uniq int buffer*::length(buffer* self) 
{
    if(self == null) {
        return 0;
    }
    return self.len;
}

uniq void buffer*::reset(buffer* self)
{
    if(self == null) {
        return;
    }
    self.buf[0] = '\0';
    self.len = 0;
}

uniq void buffer*::trim(buffer* self, int len)
{
    if(self == null) {
        return;
    }
    self.len -= len;
    if(self.len >= 0) {
        self.buf[self.len] = '\0';
    }
    else {
        self.len = 0;
        self.buf[0] = '\0';
    }
}

uniq buffer* buffer*::append(buffer* self, char* mem, size_t size)
{
    if(self == null || mem == null) {
        return self;
    }
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_char(buffer* self, char c)
{
    if(self == null) {
        return null;
    }
    if(self.len + 1 + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        
        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    self.buf[self.len] = c;
    self.len++;

    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }
    
    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

if($UNIX == 0) {
    uniq buffer* buffer*::append_format(buffer* self, char* msg, ...)
    {
        if(self == null || msg == null) {
            return self;
        }
        
        char result[128];
        
        va_list` args;
        __builtin_va_start(args,msg);
        vsnprintf(result, 128, msg, args);
        __builtin_va_end(args);
        
        int len = strlen(result);
        
        string mem = string(result);
        
        int size = strlen(mem);
        if(self.len + size + 1 + 1 >= self.size) {
            char*% old_buf = new char[self.size];
            memcpy(old_buf, self.buf, self.size);
            int old_len = self.len;
            int new_size = (self.size + size + 1) * 2;
            self.buf = new char[new_size];
            memcpy(self.buf, old_buf, old_len);
            self.buf[old_len] = '\0';
            self.size = new_size;
        }
    
        memcpy(self.buf + self.len, mem, size);
        self.len += size;
        self.buf[self.len] = '\0';
        
        free(result);
        
        return self;
    }
}
else {
    uniq buffer* buffer*::append_format(buffer* self, char* msg, ...)
    {
        if(self == null || msg == null) {
            return self;
        }
        
        va_list` args;
        __builtin_va_start(args,msg);
        char* result;
        int len = vasprintf(&result, msg, args);
        __builtin_va_end(args);
        
        if(len < 0) {
            return self;
        }
        
        string mem = string(result);
        
        int size = strlen(mem);
        if(self.len + size + 1 + 1 >= self.size) {
            char*% old_buf = new char[self.size];
            memcpy(old_buf, self.buf, self.size);
            int old_len = self.len;
            int new_size = (self.size + size + 1) * 2;
            self.buf = new char[new_size];
            memcpy(self.buf, old_buf, old_len);
            self.buf[old_len] = '\0';
            self.size = new_size;
        }
    
        memcpy(self.buf + self.len, mem, size);
        self.len += size;
        self.buf[self.len] = '\0';
        
        free(result);
        
        return self;
    }
}

uniq buffer* buffer*::append_nullterminated_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }
    int size = strlen(mem) + 1;
    if(self.len + size + 1 + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    self.len++;
    
    return self;
}

uniq buffer* buffer*::append_int(buffer* self, int value) 
{
    if(self == null) {
        return null;
    }
    int* mem = &value;
    int size = sizeof(int);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_long(buffer* self, long value) 
{
    if(self == null) {
        return null;
    }
    long* mem = &value;
    int size = sizeof(long);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_short(buffer* self, short value) 
{
    if(self == null) {
        return null;
    }
    
    short* mem = &value;
    int size = sizeof(short);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::alignment(buffer* self) 
{
    if(self == null) {
        return null;
    }
    
    int len = self.len;
    len = (len + 3) & ~3;
    
    if(len >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + 1 + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    for(int i=self.len; i<len; i++) {
        self.buf[i] = '\0';
    }
    
    self.len = len;
    
    return self;
}

uniq int buffer*::compare(buffer* left, buffer* right) 
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }
    
    return strcmp(left.buf, right.buf);
}

uniq buffer*% char*::to_buffer(char* self) 
{
    var result = new buffer.initialize();
    
    if(self == null) {
        return result;
    }

    result.append_str(self);

    return result;
}

uniq string buffer*::to_string(buffer* self)
{
    if(self == null) {
        return string("");
    }
    
    return string(self.buf);
}

uniq unsigned char* buffer*::head_pointer(buffer* self)
{
    if(self == null) {
        return null;
    }
    return self.buf;
}

uniq buffer*% char[]::to_buffer(char* self, size_t len) 
{
    var result = new buffer();
    if(self == null) {
        return result;
    }
    result.append(self, sizeof(char)*len);
    return result;
}

uniq buffer*% char*[]::to_buffer(char** self, size_t len) 
{
    var result = new buffer();
    if(self == null) {
        return result;
    }
    for(int i=0; i<len; i++) {
        result.append(self[i], strlen(self[i]));
    }
    return result;
}

uniq buffer*% short[]::to_buffer(short* self, size_t len) 
{
    var result = new buffer();
    if(self == null) {
        return result;
    }
    result.append((char*)self, sizeof(short)*len);
    return result;
}

uniq buffer*% int[]::to_buffer(int* self, size_t len) 
{
    var result = new buffer();
    if(self == null) {
        return result;
    }
    result.append((char*)self, sizeof(int)*len);
    return result;
}

uniq buffer*% long[]::to_buffer(long* self, size_t len) 
{
    var result = new buffer();
    if(self == null) {
        return result;
    }
    result.append((char*)self, sizeof(long)*len);
    return result;
}

uniq buffer*% float[]::to_buffer(float* self, size_t len) 
{
    var result = new buffer();
    if(self == null) {
        return result;
    }
    result.append((char*)self, sizeof(float)*len);
    return result;
}

uniq buffer*% double[]::to_buffer(double* self, size_t len) 
{
    var result = new buffer();
    if(self == null) {
        return result;
    }
    result.append((char*)self, sizeof(double)*len);
    return result;
}

uniq string buffer*::printable(buffer* self)
{
    int len = self.len;
    string result = new char[len*2+1];
    
    if(self == null) {
        return result;
    }

    int n = 0;
    for(int i=0; i<len; i++) {
        unsigned char c = self.buf[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else if(c > 127) {
            result[n++] = '?';
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

impl list <T>
{
    buffer*% to_buffer(list<T>* self) {
        var result = new buffer();
        if(self == null) {
            return result;
        }
        for(var it = self.begin(); !self.end(); it = self.next()) {
            result.append((char*)&it, sizeof(T));
        }
        return result;
    }
}




uniq list<char>*% char[]::to_list(char* self, size_t len) 
{
    return new list<char>.initialize_with_values(len, self);
}

uniq list<char*>*% char*[]::to_list(char** self, size_t len) 
{
    return new list<char*>.initialize_with_values(len, self);
}

uniq list<short>*% short[]::to_list(short* self, size_t len) 
{
    return new list<short>.initialize_with_values(len, self);
}

uniq list<int>*% int[]::to_list(int* self, size_t len) 
{
    return new list<int>.initialize_with_values(len, self);
}

uniq list<long>*% long[]::to_list(long* self, size_t len) 
{
    return new list<long>.initialize_with_values(len, self);
}

uniq list<float>*% float[]::to_list(float* self, size_t len) 
{
    return new list<float>.initialize_with_values(len, self);
}

uniq list<double>*% double[]::to_list(double* self, size_t len) 
{
    return new list<double>.initialize_with_values(len, self);
}




uniq bool bool::equals(bool self, bool right) 
{
    return self == right;
}

uniq bool _Bool::equals(_Bool self, _Bool right) 
{
    return self == right;
}

uniq bool char::equals(char self, char right) 
{
    return self == right;
}

uniq bool short::equals(short self, short right) 
{
    return self == right;
}

uniq bool int::equals(int self, int right) 
{
    return self == right;
}

uniq bool long::equals(long self, long right) 
{
    return self == right;
}

uniq bool size_t::equals(size_t self, size_t right) 
{
    return self == right;
}

uniq bool float::equals(float self, float right) 
{
    return self == right;
}

uniq bool double::equals(double self, double right) 
{
    return self == right;
}

uniq bool bool::operator_equals(bool self, bool right)
{
    return self == right;
}

uniq bool _Bool::operator_equals(bool self, bool right)
{
    return self == right;
}

uniq bool char::operator_equals(char self, char right)
{
    return self == right;
}

uniq bool short::operator_equals(short self, short right)
{
    return self == right;
}

uniq bool int::operator_equals(int self, int right)
{
    return self == right;
}

uniq bool long::operator_equals(long self, long right)
{
    return self == right;
}

uniq bool bool::operator_not_equals(bool self, bool right)
{
    return !(self == right);
}

uniq bool _Bool::operator_not_equals(bool self, bool right)
{
    return !(self == right);
}

uniq bool char::operator_not_equals(char self, char right)
{
    return !(self == right);
}

uniq bool short::operator_not_equals(short self, short right)
{
    return !(self == right);
}

uniq bool int::operator_not_equals(int self, int right)
{
    return !(self == right);
}

uniq bool long::operator_not_equals(long self, long right)
{
    return !(self == right);
}

uniq bool char*::equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return 1;
    }
    else if(self == null || right == null) {
        return 0;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool string::equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return 1;
    }
    else if(self == null || right == null) {
        return 0;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool void*::equals(void* self, void* right) 
{
    return self == right;
}

uniq bool bool*::equals(bool* self, bool* right) 
{
    return *self == *right;
}

uniq bool string::operator_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return 1;
    }
    else if(self == null || right == null) {
        return 0;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool char*::operator_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return 1;
    }
    else if(self == null || right == null) {
        return 0;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool void*::operator_equals(char* self, char* right) 
{
    return self == right;
}

uniq bool void*::operator_not_equals(char* self, char* right) 
{
    return !self.operator_equals(right);
}

uniq bool string::operator_not_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return 0;
    }
    else if(self == null || right == null) {
        return 1;
    }
    
    return strcmp(self, right) != 0;
}

uniq bool char*::operator_not_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return 0;
    }
    else if(self == null || right == null) {
        return 1;
    }
    
    return strcmp(self, right) != 0;
}


uniq string char*::operator_add(char* self, char* right) 
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);
   
    char*% result = new char[len+1];
    
    strncpy(result, self, len+1);
    strncat(result, right, len+1);
    
    return result;
}

uniq string string::operator_add(char* self, char* right) 
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);
   
    char*% result = new char[len+1];
    
    strncpy(result, self, len+1);
    strncat(result, right, len+1);
    
    return result;
}

uniq string char*::operator_mult(char* self, int right) 
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();
    
    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }
    
    return buf.to_string();
}

uniq string string::operator_mult(char* self, int right) 
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();
    
    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }
    
    return buf.to_string();
}

uniq size_t char[]::length(char* self, size_t len) 
{
    return len;
}

uniq bool char*[]::contained(char** self, size_t len, char* str) 
{
    bool result = 0;
    if(self == null) {
        return result;
    }
    for(int i=0; i<len; i++) {
        if(strncmp(self[i], str, strlen(self[i])) == 0) {
            result = 1;
            break;
        }
    }
    return result;
}

uniq size_t short[]::length(short* self, size_t len) 
{
    return len;
}

uniq size_t int[]::length(int* self, size_t len) 
{
    return len;
}

uniq size_t long[]::length(long* self, size_t len) 
{
    return len;
}

uniq size_t float[]::length(float* self, size_t len) 
{
    return len;
}

uniq size_t double[]::length(double* self, size_t len) 
{
    return len;
}




uniq unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

uniq unsigned int _Bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

uniq unsigned int char::get_hash_key(char value)
{
    return value;
}

uniq unsigned int short::get_hash_key(short int value)
{
    return value;
}

uniq unsigned int int::get_hash_key(int value)
{
    return value;
}

uniq unsigned int long::get_hash_key(long value)
{
    return value;
}

uniq unsigned int size_t::get_hash_key(size_t value)
{
    return value;
}

uniq unsigned int float::get_hash_key(float value)
{
    return (unsigned int)value;
}

uniq unsigned int double::get_hash_key(double value)
{
    return (unsigned int)value;
}

uniq unsigned int char*::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq unsigned int string::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq unsigned int void*::get_hash_key(void* value)
{
    return (((int)value).get_hash_key());
}




uniq bool bool::clone(bool self)
{
    return self;
}

uniq bool _Bool::clone(bool self)
{
    return self;
}

uniq char char::clone(char self)
{
    return self;
}

uniq short int short::clone(short self)
{
    return self;
}

uniq int int::clone(int self)
{
    return self;
}

uniq long int long::clone(long self)
{
    return self;
}

uniq size_t size_t::clone(size_t self)
{
    return self;
}

uniq double double::clone(double self)
{
    return self;
}

uniq float float::clone(float self)
{
    return self;
}





uniq bool xisalpha(char c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

uniq bool xisblank(char c)
{
    return c == ' ' || c == '\t';
}

uniq bool xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

uniq bool xisspace(char c)
{
    return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == 28 || c == 11;
}

uniq bool xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

uniq bool xisascii(char c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

uniq bool xispunct(char c) {
    return (c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~');
 }




uniq int string::length(char* str)
{
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq int char*::length(char* str) {
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq int char[]::length(char* str) {
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq string char*::reverse(char* str) 
{
    if(str == null) {
        return string("");
    }
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

uniq string string::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string char*::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string char*::substring(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string xsprintf(char* msg, ...)
{
    if(msg == null) {
        return string("");
    }
    va_list` args;
    __builtin_va_start(args,msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    __builtin_va_end(args);
    
    if(len < 0) {
        return string("");
    }
    
    string result2 = string(result);
    
    free(result);
    
    return result2;
}

uniq string char*::delete(char* str, int head, int tail) 
{
    if(str == null) {
        return string("");
    }
    
    int len = strlen(str);
    
    if(head >= len) {
        return string(str);
    }

    if(strcmp(str, "") == 0) {
        return string(str);
    }
    
    if(head < 0) {
       head += len;
    }
    
    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return string(str);
    }

    if(tail >= len) {
        tail = len;
    }
    
    char*% result = new char[len-(tail-head)+1];
    
    memcpy(result, str, head);
    memcpy(result + head, str + tail, len-tail);
    
    result[len -(tail-head)] = '\0';

    return result;
}

uniq list<string>*% char*::split_char(char* self, char c) 
{
    if(self == null) {
        return new list<string>();
    }
    
    auto result = new list<string>.initialize();

    auto str = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(self[i] == c) {
            result.push_back(string(str.buf));
            str.reset();
        }
        else {
            str.append_char(self[i]);
        }
    }
    if(str.length() != 0) {
        result.push_back(string(str.buf));
    }

    return result;
}

uniq string char*::xsprintf(char* self, char* msg, ...)
{
    return xsprintf(msg, self);
}

uniq string int::xsprintf(int self, char* msg, ...)
{
    return xsprintf(msg, self);
}


uniq string char*::printable(char* str)
{
    if(str == null) { return string(""); }
    
    int len = str.length();
    string result = new char[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        char c = str[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

uniq string char[]::printable(char* str)
{
    return char*::printable(str);
}

uniq string char*::sub_plain(char* self, char* str, char* replace)
{
    if(self == null || str == null || replace == null) {
        return string(self);
    }

    auto result = new buffer.initialize();
    
    char* p = self;
    
    while(1) {
        char* p2 = strstr(p, str);
        
        if(p2 == null) {
            p2 = p;
            while(*p2) {
                p2++;
            }
            result.append(p, p2 - p);
            break;
        }
        
        result.append(p, p2 - p);
        result.append_str(replace);
        
        p = p2 + strlen(str);
    }

    return result.to_string();
}




uniq string xbasename(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '/') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
    
    return string("");
}

uniq string xnoextname(char* path)
{
    if(path == null) {
        return string("");
    }
    string path2 = xbasename(path);
    
    char* p = path2 + strlen(path2);
    
    while(p >= path2) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path2) {
        return string(path2);
    }
    else {
        return path2.substring(0, p - path2);
    }
    
    return string("");
}

uniq string xextname(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
    
    return string("");
}




uniq string bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

uniq string _Bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

uniq string char::to_string(char self)
{
    return xsprintf("%c", self);
}

uniq string short::to_string(short self)
{
    return xsprintf("%d", self);
}

uniq string int::to_string(int self)
{
    return xsprintf("%d", self);
}

uniq string long::to_string(long self)
{
    return xsprintf("%ld", self);
}

uniq string size_t::to_string(size_t self)
{
    return xsprintf("%ld", self);
}

uniq string float::to_string(float self)
{
    return xsprintf("%f", self);
}

uniq string double::to_string(double self)
{
    return xsprintf("%lf", self);
}

uniq string string::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

uniq string char*::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}




uniq int bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1;
    }
    else if(left && right) {
        return 0;
    }
    else if(!left && !right) {
        return 0;
    }
    else {
        return 1;
    }
    
    return 0;
}

uniq int _Bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1;
    }
    else if(left && right) {
        return 0;
    }
    else if(!left && !right) {
        return 0;
    }
    else {
        return 1;
    }
    
    return 0;
}

uniq int char::compare(char left, char right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int short::compare(short left, short right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int int::compare(int left, int right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int long::compare(long left, long right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int size_t::compare(size_t left, size_t right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int float::compare(float left, float right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int double::compare(double left, double right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int string::compare(char* left, char* right) 
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }
    
    return strcmp(left,right);
}

uniq int char*::compare(char* left, char* right) 
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }
    
    return strcmp(left,right);
}




uniq string char*::puts(char* self)
{
    if(self == null) {
        return string("");
    }
    puts(self);
    
    return string(self);
}

uniq string char*::print(char* self)
{
    if(self == null) {
        return string("");
    }
    printf("%s", self);
    
    return string(self);
}

if($UNIX == 0) {
    uniq string char*::printf(char* self, ...)
    {
        if(self == null) {
            return string("");
        }
        char* msg2;
    
        char msg2[128];
        
        va_list` args;
        __builtin_va_start(args,self);
        int len = snprintf(msg2, 128, self, args);
        __builtin_va_end(args);
        
        printf("%s", msg2);
    
        free(msg2);
        
        return string(self);
    }
}
else {
    uniq string char*::printf(char* self, ...)
    {
        if(self == null) {
            return string("");
        }
        char* msg2;
    
        va_list` args;
        __builtin_va_start(args,self);
        vasprintf(&msg2,self,args);
        __builtin_va_end(args);
        
        printf("%s", msg2);
    
        free(msg2);
        
        return string(self);
    }
}

uniq int int::printf(int self, char* msg)
{
    if(self == null) {
        return self;
    }
    printf(msg, self);
    
    return self;
}

uniq long long::printf(long self, char* msg)
{
    if(self == null) {
        return self;
    }
    printf(msg, self);
    
    return self;
}

uniq void int::times(int self, void* parent, void (*block)(void* parent, int it))
{
    for(int i = 0; i < self; i++) {
        block(parent, i);
    }
}
































#line 5022 "/usr/local/include/neo-c.h"

#line 5025 "/usr/local/include/neo-c.h"


struct re_program;
typedef struct re_program* re_t;


typedef struct re_capture
{
  int start;
  int length;
} re_capture;




#line 5043 "/usr/local/include/neo-c.h"

enum
{
  RE_UNUSED,
  RE_DOT,
  RE_BEGIN,
  RE_END,
  RE_QUESTIONMARK,
  RE_STAR,
  RE_PLUS,
  RE_CHAR,
  RE_CHAR_CLASS,
  RE_INV_CHAR_CLASS,
  RE_DIGIT,
  RE_NOT_DIGIT,
  RE_ALPHA,
  RE_NOT_ALPHA,
  RE_WHITESPACE,
  RE_NOT_WHITESPACE,
  RE_GROUP,
  RE_GROUP_END
};


typedef struct regex_t regex_t;

struct regex_t
{
  unsigned char type;   
  union
  {
    unsigned char  ch;      
    unsigned char* ccl;     
    struct
    {
      regex_t* first;       
      regex_t* last;        
      int      id;          
    } group;
  } u;
  regex_t* next;            
};


typedef struct re_program
{
  regex_t*       start;
  int            group_count;
} regex_program_t;


typedef struct
{
  regex_t*        pool;
  int             pool_capacity;
  int             pool_size;
  unsigned char*  ccl_buf;
  int             ccl_capacity;
  int             ccl_idx;
  int             group_count;
} compiler_state;


typedef struct
{
  const char* base;
  re_capture* captures;
  int         capture_capacity;   
  int         total_groups;       
  bool        ignore_case;
} match_context;




uniq int re_matchp_ex(re_t pattern, const char* text, int* matchlength, re_capture* captures, int max_captures, bool ignore_case)
{
  *matchlength = 0;
  if (pattern == 0)
  {
    return -1;
  }

  regex_program_t* program = (regex_program_t*) pattern;
  regex_t* start = program->start;
  if (start == 0)
  {
    return -1;
  }

  match_context ctx;
  ctx.base = text;
  ctx.captures = (captures != 0 && max_captures > 0) ? captures : 0;
  ctx.capture_capacity = (captures != 0 && max_captures > 0) ? max_captures : 0;
  if (ctx.capture_capacity > 64)
  {
    ctx.capture_capacity = 64;
  }
  ctx.total_groups = program->group_count;
  ctx.ignore_case = ignore_case;

  if (ctx.captures != 0)
  {
    clear_captures(&ctx);
  }

  if (start->type == RE_BEGIN)
  {
    const char* end = matchpattern(start->next, text, &ctx);
    if (end != 0)
    {
      *matchlength = (int)(end - text);
      if (ctx.captures != 0)
      {
        
      }
      return 0;
    }
    return -1;
  }
  else
  {
    const char* cursor = text;
    while (1)
    {
      if (ctx.captures != 0)
      {
        clear_captures(&ctx);
      }
      const char* end = matchpattern(start, cursor, &ctx);
      if (end != 0)
      {
        if (*cursor == '\0' && cursor != text)
        {
          return -1; 
        }
        *matchlength = (int)(end - cursor);
        return (int)(cursor - text);
      }

      if (*cursor == '\0')
      {
        break;
      }
      cursor += 1;
    }
  }

  return -1;
}

uniq int re_matchp(re_t pattern, const char* text, int* matchlength, re_capture* captures, int max_captures)
{
  return re_matchp_ex(pattern, text, matchlength, captures, max_captures, 0);
}

uniq int re_match(const char* pattern, const char* text, int* matchlength)
{
  return re_matchp(re_compile(pattern), text, matchlength, (re_capture*)0, 0);
}

uniq re_t re_compile(const char* pattern)
{
  static regex_t        re_compiled[64];
  static unsigned char  ccl_buf[40];
  static regex_program_t program;

  compiler_state state;
  state.pool = re_compiled;
  state.pool_capacity = 64;
  state.pool_size = 0;
  state.ccl_buf = ccl_buf;
  state.ccl_capacity = 40;
  state.ccl_idx = 1; 
  state.group_count = 0;

  if (state.ccl_capacity > 0)
  {
    state.ccl_buf[0] = 0;
  }

  int pos = 0;
  regex_t* head = compile_sequence(&state, pattern, &pos, 0);
  if ((head == 0) || (pattern[pos] != '\0'))
  {
    return ((void*)0);
  }

  program.start = head;
  program.group_count = state.group_count;
  return (re_t) &program;
}


uniq void re_print(re_t pattern)
{
  if (pattern == 0)
  {
    return;
  }

  regex_program_t* program = (regex_program_t*) pattern;
  if (program->start == 0)
  {
    return;
  }

  re_print_internal(program->start, 0);
}



uniq void clear_captures(match_context* ctx)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  for (int i = 0; i < ctx->capture_capacity; ++i)
  {
    ctx->captures[i].start = -1;
    ctx->captures[i].length = 0;
  }
}

uniq void snapshot_captures(const match_context* ctx, re_capture* buffer_)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  memcpy(buffer_, ctx->captures, sizeof(re_capture) * ctx->capture_capacity);
}

uniq void restore_captures(match_context* ctx, const re_capture* buffer_)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  memcpy(ctx->captures, buffer_, sizeof(re_capture) * ctx->capture_capacity);
}


uniq regex_t* new_token(compiler_state* st)
{
  if (st->pool_size >= st->pool_capacity)
  {
    return ((void*)0);
  }

  regex_t* token = &st->pool[st->pool_size++];
  token->type = RE_UNUSED;
  token->u.ccl = 0;
  token->next = 0;
  token->u.group.first = 0;
  token->u.group.last = 0;
  token->u.group.id = 0;
  return token;
}

uniq int append_token(regex_t** head, regex_t** tail, regex_t* token)
{
  if (token == 0)
  {
    return 0;
  }

  if (*head == 0)
  {
    *head = token;
  }
  else
  {
    (*tail)->next = token;
  }
  *tail = token;
  return 1;
}

uniq regex_t* compile_sequence(compiler_state* st, const char* pattern, int* pos, int in_group)
{
  regex_t* head = (regex_t*)0;
  regex_t* tail = (regex_t*)0;

  while (pattern[*pos] != '\0')
  {
    char c = pattern[*pos];

    if (in_group && (c == ')'))
    {
      break;
    }

    regex_t* token = (regex_t*)0;

    switch (c)
    {
      case '^':
      {
        token = new_token(st);
        if (token == 0) return ((void*)0);
        token->type = RE_BEGIN;
        (*pos)++;
      } break;

      case '$':
      {
        token = new_token(st);
        if (token == 0) return ((void*)0);
        token->type = RE_END;
        (*pos)++;
      } break;

      case '.':
      {
        token = new_token(st);
        if (token == 0) return ((void*)0);
        token->type = RE_DOT;
        (*pos)++;
      } break;

      case '*':
      {
        token = new_token(st);
        if (token == 0) return ((void*)0);
        token->type = RE_STAR;
        (*pos)++;
      } break;

      case '+':
      {
        token = new_token(st);
        if (token == 0) return ((void*)0);
        token->type = RE_PLUS;
        (*pos)++;
      } break;

      case '?':
      {
        token = new_token(st);
        if (token == 0) return ((void*)0);
        token->type = RE_QUESTIONMARK;
        (*pos)++;
      } break;

      case '\\':
      {
        (*pos)++;
        if (pattern[*pos] == '\0')
        {
          return ((void*)0);
        }

        token = new_token(st);
        if (token == 0) return ((void*)0);

        switch (pattern[*pos])
        {
          case 'd': token->type = RE_DIGIT;          break;
          case 'D': token->type = RE_NOT_DIGIT;      break;
          case 'w': token->type = RE_ALPHA;          break;
          case 'W': token->type = RE_NOT_ALPHA;      break;
          case 's': token->type = RE_WHITESPACE;     break;
          case 'S': token->type = RE_NOT_WHITESPACE; break;
          default:
          {
            token->type = RE_CHAR;
            token->u.ch = (unsigned char)pattern[*pos];
          } break;
        }
        (*pos)++;
      } break;

      case '[':
      {
        int buf_begin = st->ccl_idx;
        int negated = 0;
        (*pos)++;

        if (pattern[*pos] == '^')
        {
          negated = 1;
          (*pos)++;
          if (pattern[*pos] == '\0')
          {
            return ((void*)0);
          }
        }

        if (pattern[*pos] == '\0')
        {
          return ((void*)0);
        }

        while ((pattern[*pos] != '\0') && (pattern[*pos] != ']'))
        {
          if (pattern[*pos] == '\\')
          {
            if (st->ccl_idx >= (st->ccl_capacity - 1))
            {
              return ((void*)0);
            }
            st->ccl_buf[st->ccl_idx++] = '\\';
            (*pos)++;
            if (pattern[*pos] == '\0')
            {
              return ((void*)0);
            }
          }

          if (st->ccl_idx >= st->ccl_capacity)
          {
            return ((void*)0);
          }
          st->ccl_buf[st->ccl_idx++] = (unsigned char)pattern[*pos];
          (*pos)++;
        }

        if (pattern[*pos] != ']')
        {
          return ((void*)0);
        }

        if (st->ccl_idx >= st->ccl_capacity)
        {
          return ((void*)0);
        }
        st->ccl_buf[st->ccl_idx++] = 0;

        token = new_token(st);
        if (token == 0) return ((void*)0);
        token->type = negated ? RE_INV_CHAR_CLASS : RE_CHAR_CLASS;
        token->u.ccl = &st->ccl_buf[buf_begin];

        (*pos)++;
      } break;

      case '(':
      {
        (*pos)++;
        regex_t* inner = compile_sequence(st, pattern, pos, 1);
        if (inner == 0)
        {
          return ((void*)0);
        }
        if (pattern[*pos] != ')')
        {
          return ((void*)0);
        }

        regex_t* tail = inner;
        while ((tail != 0) && (tail->type != RE_UNUSED))
        {
          tail = tail->next;
        }
        if (tail == 0)
        {
          return ((void*)0);
        }

        token = new_token(st);
        if (token == 0) return ((void*)0);
        token->type = RE_GROUP;
        token->u.group.first = inner;
        token->u.group.last = tail;
        token->u.group.id = ++st->group_count;

        tail->type = RE_GROUP_END;
        tail->u.group.first = token;

        (*pos)++;
      } break;

      case ')':
      {
        token = new_token(st);
        if (token == 0) return ((void*)0);
        token->type = RE_CHAR;
        token->u.ch = (unsigned char)c;
        (*pos)++;
      } break;

      default:
      {
        token = new_token(st);
        if (token == 0) return ((void*)0);
        token->type = RE_CHAR;
        token->u.ch = (unsigned char)c;
        (*pos)++;
      } break;
    }

    if (!append_token(&head, &tail, token))
    {
      return ((void*)0);
    }
  }

  regex_t* sentinel = new_token(st);
  if (sentinel == 0)
  {
    return ((void*)0);
  }
  sentinel->type = RE_UNUSED;
  sentinel->next = 0;

  if (head == 0)
  {
    head = sentinel;
  }
  else
  {
    tail->next = sentinel;
  }

  return head;
}

uniq const char* matchpattern(regex_t* pattern, const char* text, match_context* ctx)
{
  if (pattern == 0)
  {
    return text;
  }

  if (pattern->type == RE_UNUSED)
  {
    return text;
  }

  re_capture snapshot[64];
  snapshot_captures(ctx, snapshot);

  regex_t* current = pattern;
  const char* cursor = text;

  while (current != 0 && current->type != RE_UNUSED)
  {
    regex_t* next = current->next;

    if (current->type == RE_GROUP_END)
    {
      regex_t* owner = current->u.group.first;
      if ((owner != 0) && (owner->u.group.id > 0) && (ctx->captures != 0))
      {
        int idx = owner->u.group.id - 1;
        if (idx < ctx->capture_capacity)
        {
          int start = ctx->captures[idx].start;
          if (start >= 0)
          {
            ctx->captures[idx].length = (int)(cursor - ctx->base) - start;
            if (ctx->captures[idx].length < 0)
            {
              ctx->captures[idx].length = 0;
            }
          }
        }
      }
      current = current->next;
      continue;
    }

    if ((next != 0) && (next->type == RE_QUESTIONMARK))
    {
      const char* result = matchquestion(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return ((void*)0);
    }
    else if ((next != 0) && (next->type == RE_STAR))
    {
      const char* result = matchstar(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return ((void*)0);
    }
    else if ((next != 0) && (next->type == RE_PLUS))
    {
      const char* result = matchplus(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return ((void*)0);
    }
    else if (current->type == RE_GROUP)
    {
      const char* result = matchgroup(current, next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return ((void*)0);
    }
    else if (current->type == RE_END)
    {
      if (*cursor != '\0')
      {
        restore_captures(ctx, snapshot);
        return ((void*)0);
      }
      current = current->next;
    }
    else
    {
      const char* after = matchtoken(current, cursor, ctx);
      if (after == 0)
      {
        restore_captures(ctx, snapshot);
        return ((void*)0);
      }
      cursor = after;
      current = current->next;
    }
  }

  return cursor;
}

uniq const char* matchgroup(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[64];
  snapshot_captures(ctx, snapshot_entry);

  regex_t* end_token = token->u.group.last;
  regex_t* saved_next = end_token != 0 ? end_token->next : 0;
  if (end_token != 0)
  {
    end_token->next = rest;
  }

  if (token->u.group.id > 0 && ctx->captures != 0)
  {
    int idx = token->u.group.id - 1;
    if (idx < ctx->capture_capacity)
    {
      ctx->captures[idx].start = (int)(text - ctx->base);
      ctx->captures[idx].length = 0;
    }
  }

  const char* result = matchpattern(token->u.group.first, text, ctx);

  if (end_token != 0)
  {
    end_token->next = saved_next;
  }

  if (result == 0)
  {
    restore_captures(ctx, snapshot_entry);
  }

  return result;
}

uniq const char* matchstar(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[64];
  snapshot_captures(ctx, snapshot_entry);

  const char* consume = matchtoken(token, text, ctx);
  while ((consume != 0) && (consume != text))
  {
    re_capture snapshot_after_token[64];
    snapshot_captures(ctx, snapshot_after_token);

    const char* recursive = matchstar(token, rest, consume, ctx);
    if (recursive != 0)
    {
      return recursive;
    }

    restore_captures(ctx, snapshot_after_token);
    consume = matchtoken(token, consume, ctx);
  }

  restore_captures(ctx, snapshot_entry);
  return matchpattern(rest, text, ctx);
}

uniq const char* matchplus(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[64];
  snapshot_captures(ctx, snapshot_entry);

  const char* first = matchtoken(token, text, ctx);
  if ((first == 0) || (first == text))
  {
    restore_captures(ctx, snapshot_entry);
    return ((void*)0);
  }

  const char* result = matchstar(token, rest, first, ctx);
  if (result != 0)
  {
    return result;
  }

  restore_captures(ctx, snapshot_entry);
  return ((void*)0);
}

uniq const char* matchquestion(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[64];
  snapshot_captures(ctx, snapshot_entry);

  const char* skipped = matchpattern(rest, text, ctx);
  if (skipped != 0)
  {
    return skipped;
  }

  restore_captures(ctx, snapshot_entry);

  const char* consumed = matchtoken(token, text, ctx);
  if ((consumed == 0) || (consumed == text))
  {
    restore_captures(ctx, snapshot_entry);
    return ((void*)0);
  }

  const char* with = matchpattern(rest, consumed, ctx);
  if (with != 0)
  {
    return with;
  }

  restore_captures(ctx, snapshot_entry);
  return ((void*)0);
}

uniq unsigned char re_fold_char(unsigned char c, bool ignore_case)
{
  if (ignore_case && c >= 'A' && c <= 'Z')
  {
    return (unsigned char)(c - 'A' + 'a');
  }
  return c;
}

uniq const char* matchtoken(regex_t* token, const char* text, match_context* ctx)
{
  switch (token->type)
  {
    case RE_DOT:
      return (*text != '\0' && matchdot(*text)) ? text + 1 : 0;

    case RE_CHAR:
      return (*text != '\0'
        && re_fold_char(token->u.ch, ctx->ignore_case) == re_fold_char((unsigned char)*text, ctx->ignore_case))
        ? text + 1 : 0;

    case RE_CHAR_CLASS:
      return (*text != '\0' && matchcharclass(*text, (const char*)token->u.ccl, ctx->ignore_case)) ? text + 1 : 0;

    case RE_INV_CHAR_CLASS:
      return (*text != '\0' && !matchcharclass(*text, (const char*)token->u.ccl, ctx->ignore_case)) ? text + 1 : 0;

    case RE_DIGIT:
      return (*text != '\0' && matchdigit(*text)) ? text + 1 : 0;

    case RE_NOT_DIGIT:
      return (*text != '\0' && !matchdigit(*text)) ? text + 1 : 0;

    case RE_ALPHA:
      return (*text != '\0' && matchalphanum(*text)) ? text + 1 : 0;

    case RE_NOT_ALPHA:
      return (*text != '\0' && !matchalphanum(*text)) ? text + 1 : 0;

    case RE_WHITESPACE:
      return (*text != '\0' && matchwhitespace(*text)) ? text + 1 : 0;

    case RE_NOT_WHITESPACE:
      return (*text != '\0' && !matchwhitespace(*text)) ? text + 1 : 0;

    case RE_GROUP:
      return matchgroup(token, (regex_t*)0, text, ctx);

    case RE_BEGIN:
      return (text == ctx->base) ? text : 0;

    case RE_END:
      return (*text == '\0') ? text : 0;

    default:
      break;
  }

  return (const char*)0;
}


uniq int matchdigit(char c)
{
  return xisdigit((unsigned char)c);
}
uniq int matchalpha(char c)
{
  return xisalpha((unsigned char)c);
}
uniq int matchwhitespace(char c)
{
  return xisspace((unsigned char)c);
}
uniq int matchalphanum(char c)
{
  return ((c == '_') || matchalpha(c) || matchdigit(c));
}
uniq int matchrange(char c, const char* str, bool ignore_case)
{
  unsigned char needle = (unsigned char)c;
  unsigned char start = (unsigned char)str[0];
  unsigned char end = (unsigned char)str[2];
  if (ignore_case)
  {
    needle = re_fold_char(needle, 1);
    start = re_fold_char(start, 1);
    end = re_fold_char(end, 1);
  }
  return (    (needle != '-')
           && (str[0] != '\0')
           && (str[0] != '-')
           && (str[1] == '-')
           && (str[2] != '\0')
           && (    (needle >= start)
                && (needle <= end)));
}
uniq int matchdot(char c)
{
#line 5892 "/usr/local/include/neo-c.h"
  return c != '\n' && c != '\r';
#line 5894 "/usr/local/include/neo-c.h"
}
uniq int ismetachar(char c)
{
  return ((c == 's') || (c == 'S') || (c == 'w') || (c == 'W') || (c == 'd') || (c == 'D'));
}

uniq int matchmetachar(char c, const char* str)
{
  switch (str[0])
  {
    case 'd': return  matchdigit(c);
    case 'D': return !matchdigit(c);
    case 'w': return  matchalphanum(c);
    case 'W': return !matchalphanum(c);
    case 's': return  matchwhitespace(c);
    case 'S': return !matchwhitespace(c);
    default:  return (c == str[0]);
  }
}

uniq int matchcharclass(char c, const char* str, bool ignore_case)
{
  unsigned char needle = re_fold_char((unsigned char)c, ignore_case);
  do
  {
    if (matchrange((char)needle, str, ignore_case))
    {
      return 1;
    }
    else if (str[0] == '\\')
    {
      str += 1;
      if (matchmetachar((char)needle, str))
      {
        return 1;
      }
      else if ((needle == re_fold_char((unsigned char)str[0], ignore_case)) && !ismetachar((char)needle))
      {
        return 1;
      }
    }
    else if (needle == re_fold_char((unsigned char)str[0], ignore_case))
    {
      if (needle == '-')
      {
        return ((str[-1] == '\0') || (str[1] == '\0'));
      }
      else
      {
        return 1;
      }
    }
  }
  while (*str++ != '\0');

  return 0;
}

uniq void re_print_internal(regex_t* pattern, int depth)
{
  const char* types[] =
  {
    "RE_UNUSED", "RE_DOT", "RE_BEGIN", "RE_END", "RE_QUESTIONMARK", "RE_STAR", "RE_PLUS", "RE_CHAR",
    "RE_CHAR_CLASS", "RE_INV_CHAR_CLASS", "RE_DIGIT", "RE_NOT_DIGIT", "RE_ALPHA", "RE_NOT_ALPHA",
    "RE_WHITESPACE", "RE_NOT_WHITESPACE", "RE_GROUP", "RE_GROUP_END"
  };

  while (pattern != 0 && pattern->type != RE_UNUSED)
  {
    for (int i = 0; i < depth; ++i)
    {
      putchar(' ');
    }
    printf("type: %s", types[pattern->type]);

    if ((pattern->type == RE_CHAR_CLASS) || (pattern->type == RE_INV_CHAR_CLASS))
    {
      printf(" [");
      const unsigned char* ccl = pattern->u.ccl;
      while (*ccl != '\0' && *ccl != ']')
      {
        printf("%c", *ccl);
        ++ccl;
      }
      printf("]");
    }
    else if (pattern->type == RE_CHAR)
    {
      printf(" '%c'", pattern->u.ch);
    }
    else if (pattern->type == RE_GROUP)
    {
      printf(" id=%d\n", pattern->u.group.id);
      re_print_internal(pattern->u.group.first, depth + 2);
      pattern = pattern->next;
      continue;
    }

    printf("\n");
    pattern = pattern->next;
  }
}

uniq int re_get_group_count(re_t pattern)
{
  if (pattern == 0)
  {
    return 0;
  }

  regex_program_t* program = (regex_program_t*) pattern;
  return program->group_count;
}

#line 6011 "/usr/local/include/neo-c.h"

uniq string string::lower_case(char* str)
{
    if(str == null) {
        return string("");
    }
    
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] - 'A' + 'a';
        }
    }
    
    return result;
}

uniq string string::upper_case(char* str)
{
    if(str == null) {
        return string("");
    }
    
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result[i] = str[i] - 'a' + 'A';
        }
    }
    
    return result;
}

uniq int char*::index_regex(char* self, char* reg, int default_value, bool ignore_case=0)
{
    if(self == null || reg == null) {
        return default_value;
    }
    
    re_t re = re_compile(reg);
    
    if(re == ((void*)0)) {
        return default_value;
    }
    
    int result = default_value;
    
    int offset = 0;

    int n = 0;
    
    int result = default_value;

    while(1) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp_ex(re, self, &matchlength, captures, max_captures, ignore_case);

        
        if(regex_result >= 0) 
        {
            result = regex_result;
            break;
        }
        
        {
            break;
        }
    }

    return result;
}

uniq int char*::rindex(char* str, char* search_str, int default_value)
{
    if(str == null || search_str == null) {
        return default_value;
    }
    
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            return p - str;
        }

        p--;
    }

    return default_value;
}

uniq int char*::rindex_regex(char* self, char* reg, int default_value, bool ignore_case=0)
{
    if(self == null || reg == null) {
        return default_value;
    }
    
    re_t re = re_compile(reg);
    
    if(re == ((void*)0)) {
        return default_value;
    }
    
    int result = default_value;
    
    int offset = 0;

    int n = 0;
    
    string self2 = self.reverse();

    int result = default_value;

    while(1) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp_ex(re, self2, &matchlength, captures, max_captures, ignore_case);

        
        if(regex_result >= 0) 
        {
            result = strlen(self) -matchlength;
            break;
        }
        
        {
            break;
        }
    }

    return result;
}

uniq string char*::strip(char* self)
{
    if(self == null) {
        return string("");
    }
    string result = string(self);
    
    int len = strlen(self);
    
    if(self[len-1] == '\n') {
        result[len-1] = '\0';
    }
    else if(self[len-1] == '\r') {
        result[len-1] = '\0';
    }
    else if(len > 2 && self[len-2] == '\r' && self[len-1] == '\n') {
        result[len-2] = '\0';
    }
    
    return result;
}

uniq int char*::index(char* str, char* search_str, int default_value)
{
    if(str == null || search_str == null) {
        return default_value;
    }
    
    char* head = strstr(str, search_str);

    if(head == null) {
        return default_value;
    }

    return head - str;
}

uniq string string::chomp(char* str)
{
    if(str == null) {
        return string("");
    }
    string result = string(str);
    
    if(result[result.length()-1] == '\n') {
        return result.substring(0, -2);
    }
    
    return result;
}

if($UNIX == 1) {
    uniq string xrealpath(char* path)
    {
        if(path == null) {
            return string("");
        }
        char* result = realpath(path, null);
    
        string result2 = string(result);
    
        free(result);
    
        return result2;
    }
}

uniq string char*::replace(char* self, int index, char c)
{
    if(self == null) {
        return string("");
    }
    
    int len = strlen(self);

    if(strcmp(self, "") == 0) {
        return string(self);
    }
    
    if(index < 0) {
       index += len;
    }

    if(index >= len) {
        index = len-1;
    }

    if(index < 0) {
        index = 0;
    }
    
    self[index] = c;
    
    return string(self);
}

uniq string char*::multiply(char* str, int n)
{
    if(str == null) {
        return string("");
    }
    
    int len = strlen(str) * n + 1;

    char*% result = new char[len];

    result[0] = '\0';

    for(int i=0; i<n; i++) {
        strncat(result, str, len);
    }

    return result;
}

uniq list<string>*% char*::split_str(char* self, char* str) 
{
    if(self == null || str == null) {
        return new list<string>();
    }
    
    auto result = new list<string>.initialize();

    auto buf = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(strstr(self + i, str) == self + i) {
            result.push_back(string(buf.buf));
            buf.reset();
            i += strlen(str)-1;
        }
        else {
            buf.append_char(self[i]);
        }
    }
    if(buf.length() != 0) {
        result.push_back(string(buf.buf));
    }

    return result;
}

uniq int string::rindex(char* str, char* search_str, int default_value=-1) 
{
    return char*::rindex(str, search_str, default_value);
}

uniq int string::rindex_regex(char* self, char* reg, int default_value=-1, bool ignore_case=0)
{
    return char*::rindex_regex(self, reg, default_value, ignore_case);
}

uniq string string::strip(char* self)
{
    return char*::strip(self);
}

uniq int string::index(char* str, char* search_str, int default_value=-1)
{
    return char*::index(str, search_str, default_value);
}

uniq int string::index_regex(char* self, char* reg, int default_value=-1, bool ignore_case=0)
{
    return char*::index_regex(self, reg, default_value, ignore_case);
}

uniq string string::replace(char* self, int index, char c)
{
    return char*::replace(self, index, c);
}

uniq string string::multiply(char* str, int n)
{
    return char*::multiply(str, n);
}

uniq bool char*::match(char* self, char* reg, bool ignore_case=0)
{
    if(self == null || reg == null) {
        return 0;
    }
    
    re_t re = re_compile(reg);
    
    if(re == ((void*)0)) {
        return 0;
    }
    
    int offset = 0;

    int n = 0;
    
    int matchlength = 0;
    int max_captures = 8;
    re_capture captures[max_captures];
    int regex_result = re_matchp_ex(re, self, &matchlength, captures, max_captures, ignore_case);

    
    if(regex_result >= 0)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}

uniq list<string>*% char*::scan(char* self, char* reg, bool ignore_case=0)
{
    if(self == null || reg == null) {
        return new list<string>();
    }
    auto result = new list<string>();
    
    re_t re = re_compile(reg);
    
    if(re == ((void*)0)) {
        return new list<string>();
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(1) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp_ex(re, self + offset, &matchlength, captures, max_captures, ignore_case);

        
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset + regex_result, offset + regex_result + matchlength);

            result.add(str);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        
        else if(regex_result >= 0 && group_count > 0) {
            for(int i=0; i<group_count; i++) {
                re_capture cp = captures[i];
                auto match_string = (self + offset).substring(cp.start, cp.start + cp.length);
                result.push_back(match_string);
            }
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        
        else {
            break;
        }
    }

    return result;
}

uniq list<string>*% char*::split(char* self, char* reg, bool ignore_case=0)
{
    if(self == null || reg == null) {
        return new list<string>();
    }
    
    auto result = new list<string>();
    
    re_t re = re_compile(reg);
    
    if(re == ((void*)0)) {
        return new list<string>();
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(1) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp_ex(re, self + offset, &matchlength, captures, max_captures, ignore_case);

        
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset, offset + regex_result);

            result.add(str);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        
        else
        {
            break;
        }
    }

    if(offset < self.length()) {
        string str = self.substring(offset, -1);
        result.push_back(str);
    }

    return result;
}

uniq string string::sub(char* self, char* reg, char* replace, bool ignore_case=0)
{
    return char*::sub(self, reg, replace, 1, ignore_case);
}

uniq list<string>*% string::split_str(char* self, char* str)
{
    return char*::split_str(self, str);
}

uniq list<string>*% string::scan(char* self, char* reg, bool ignore_case=0)
{
    return char*::scan(self, reg, ignore_case);
}

uniq list<string>*% string::split(char* self, char* reg, bool ignore_case=0)
{
    return char*::split(self, reg, ignore_case);
}

uniq bool string::match(char* self, char* reg, bool ignore_case=0)
{
    return char*::match(self, reg, ignore_case);
}

uniq string char*::sub(char* self, char* reg, char* replace, bool global=1, bool ignore_case=0)
{
    if(self == null || reg == null) {
        return string("");
    }
    
    re_t re = re_compile(reg);
    
    if(re == ((void*)0)) {
        return string("");
    }
    
    int offset = 0;

    int n = 0;
    
    auto result = new buffer.initialize();
    
    int group_count = re_get_group_count(re);

    while(1) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp_ex(re, self + offset, &matchlength, captures, max_captures, ignore_case);

        
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset, offset + regex_result);

            result.append_str(str);
            result.append_str(replace);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
            
            if(!global) {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
        }
        
        else {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }
    }

    return result.to_string();
}

uniq string char*::sub_block(char* self, char* reg, bool global=1, bool ignore_case=0, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    if(self == null || reg == null) {
        return string("");
    }
    
    auto result = new buffer();
    
    re_t re = re_compile(reg);
    
    if(re == ((void*)0)) {
        return string("");
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(1) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp_ex(re, self + offset, &matchlength, captures, max_captures, ignore_case);

        
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset, offset + regex_result);

            result.append_str(str);
            
            list<string>*% group_strings = new list<string>.initialize();
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.append_str(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
            
            if(!global) {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
        }

        
        else if(regex_result >= 0 && group_count > 0) {
            string str = self.substring(offset, offset + regex_result);

            result.append_str(str);

            list<string>*% group_strings = new list<string>.initialize();

            for(int i=0; i<group_count; i++) {
                re_capture cp = captures[i];
                auto match_string = (self + offset).substring(cp.start, cp.start + cp.length);
                group_strings.push_back(match_string);
            }
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.append_str(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        
        else {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }
    }
    return result.to_string();
}

uniq list<string>*% char*::scan_block(char* self, char* reg, bool ignore_case=0, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    if(self == null || reg == null) {
        return new list<string>();
    }
    auto result = new list<string>();
    
    re_t re = re_compile(reg);
    
    if(re == ((void*)0)) {
        return new list<string>();
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(1) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp_ex(re, self + offset, &matchlength, captures, max_captures, ignore_case);

        
        if(regex_result >= 0 && group_count == 0)
        {
            list<string>*% group_strings = new list<string>.initialize();
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.add(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        
        else if(regex_result >= 0 && group_count > 0) {
            list<string>*% group_strings = new list<string>.initialize();

            for(int i=0; i<group_count; i++) {
                re_capture cp = captures[i];
                auto match_string = (self + offset).substring(cp.start, cp.start + cp.length);
                group_strings.push_back(match_string);
            }
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.add(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        
        else {
            break;
        }
    }

    return result;
}

uniq string string::sub_block(char* self, char* reg, bool global=1, bool ignore_case=0, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::sub_block(self, reg, global, ignore_case, parent, block);
}

#line 6734 "/usr/local/include/neo-c.h"

if($UNIX == 1) {
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wchar.h"


































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"


































































#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


































































#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"



#line 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"








#line 118 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"








#line 168 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 173 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 178 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"






#line 212 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"











#line 224 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 230 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 236 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 238 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 249 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 251 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 257 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 267 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 292 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 302 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"







#line 314 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"






#line 325 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 335 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 348 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"






#line 357 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

















#line 386 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 395 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 410 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"









#line 423 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 425 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 429 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 433 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 437 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 441 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 446 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 450 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 454 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 458 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 470 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"














#line 491 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"
























































































#line 596 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"








































#line 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"



















#line 691 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 713 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 723 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 727 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 737 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 747 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 757 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 763 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 770 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 772 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 781 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 787 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 790 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 115 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 121 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 127 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 133 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 139 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 145 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 163 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 169 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 175 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 181 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 193 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 211 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 217 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 229 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 235 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 241 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 253 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 259 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 265 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 271 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 277 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 283 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 289 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 295 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 301 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 307 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 313 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 319 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 325 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 331 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 337 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 343 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 349 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 355 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 361 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 373 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 379 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 385 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 391 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 397 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 403 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 409 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 415 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 421 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 427 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 433 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 439 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 445 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 451 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 457 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 463 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 469 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 475 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 481 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 487 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 493 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 499 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 505 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 511 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 517 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 523 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 529 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 535 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 541 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 547 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 553 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 559 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 565 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 571 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 577 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 583 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 589 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 595 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 601 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 607 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 613 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 619 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 625 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 631 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 637 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 643 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 655 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 661 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 667 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 673 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 679 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 685 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 691 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 697 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 703 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 709 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 721 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 727 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 733 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 739 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 745 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 751 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 757 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 763 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 769 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 775 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 781 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 787 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 793 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 799 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 805 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 811 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 817 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 823 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 829 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 835 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 841 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 847 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 853 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 859 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 865 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 871 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 877 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 883 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 889 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 895 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 901 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 907 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 913 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 919 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 925 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 931 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 937 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 943 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 949 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 955 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 961 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 967 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 973 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 979 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 985 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 991 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 997 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 1003 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 1009 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 1015 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 1021 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 1027 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"
#line 795 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 803 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"























#line 830 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 836 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 850 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 858 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"
#line 861 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 863 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"







#line 872 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 880 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 888 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"






#line 899 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"









#line 911 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"







#line 921 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 929 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 937 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 945 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"








#line 954 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"






#line 962 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 970 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"









#line 12 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"




#line 21 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 27 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 149 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 157 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"


#line 161 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"






#line 169 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"


#line 174 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"


#line 177 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 179 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 289 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"






#line 296 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"



#line 303 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 305 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"





#line 312 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"



#line 317 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 319 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"
#line 973 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"
#line 1026 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 1030 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 1038 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 1049 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"



#line 1053 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 1061 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 1067 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"







#line 1085 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"



#line 1091 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"



#line 1109 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"
#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"




























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"



#line 6 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 8 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 14 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 21 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"






#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef signed char           __int8_t;
#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef unsigned char           __uint8_t;
typedef short                   __int16_t;
typedef unsigned short          __uint16_t;
typedef int                     __int32_t;
typedef unsigned int            __uint32_t;
typedef long long               __int64_t;
typedef unsigned long long      __uint64_t;

typedef long                    __darwin_intptr_t;
typedef unsigned int            __darwin_natural_t;



















typedef int                     __darwin_ct_rune_t;     





typedef union {
	char            __mbstate8[128];
	long long       _mbstateL;                      
} __mbstate_t;

typedef __mbstate_t             __darwin_mbstate_t;     

#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef long        __darwin_ptrdiff_t;     
#line 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef unsigned long           __darwin_size_t;        
#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef __builtin_va_list       __darwin_va_list;       
#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef int          __darwin_wchar_t;       
#line 107 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

typedef __darwin_wchar_t        __darwin_rune_t;        

#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef unsigned int           __darwin_wint_t;        
#line 115 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

typedef unsigned long           __darwin_clock_t;       
typedef __uint32_t              __darwin_socklen_t;     
typedef long                    __darwin_ssize_t;       
typedef long                    __darwin_time_t;        

#line 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 124 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"
#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"
#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"







#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

typedef __int64_t       __darwin_blkcnt_t;      
typedef __int32_t       __darwin_blksize_t;     
typedef __int32_t       __darwin_dev_t;         
typedef unsigned int    __darwin_fsblkcnt_t;    
typedef unsigned int    __darwin_fsfilcnt_t;    
typedef __uint32_t      __darwin_gid_t;         
typedef __uint32_t      __darwin_id_t;          
typedef __uint64_t      __darwin_ino64_t;       
#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"
typedef __darwin_ino64_t __darwin_ino_t;        
#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"
typedef __darwin_natural_t __darwin_mach_port_name_t; 
typedef __darwin_mach_port_name_t __darwin_mach_port_t; 
typedef __uint16_t      __darwin_mode_t;        
typedef __int64_t       __darwin_off_t;         
typedef __int32_t       __darwin_pid_t;         
typedef __uint32_t      __darwin_sigset_t;      
typedef __int32_t       __darwin_suseconds_t;   
typedef __uint32_t      __darwin_uid_t;         
typedef __uint32_t      __darwin_useconds_t;    
typedef unsigned char   __darwin_uuid_t[16];
typedef char    __darwin_uuid_string_t[37];

#line 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"




























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"


#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"

struct __darwin_pthread_handler_rec {
	void (*__routine)(void *);	
	void *__arg;			
	struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_cond_t {
	long __sig;
	char __opaque[40];
};

struct _opaque_pthread_condattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_mutex_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_once_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
	long __sig;
	char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
	long __sig;
	char __opaque[16];
};

struct _opaque_pthread_t {
	long __sig;
	struct __darwin_pthread_handler_rec  *__cleanup_stack;
	char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
#line 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"



#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"

typedef	int		__darwin_nl_item;
typedef	int		__darwin_wctrans_t;
#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"
typedef	__uint32_t	__darwin_wctype_t;
#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"

#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"

#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"
#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
 







































































































 
#line 134 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
 
#line 141 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 154 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 161 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 168 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"



#line 174 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 181 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 183 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 189 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"



#line 193 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"






















 
#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 102 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 257 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 319 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 358 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 384 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 401 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"







#line 409 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 411 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"





#line 417 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 493 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 495 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 497 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 499 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"
#line 197 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"





























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"






















 
#line 497 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 499 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"
#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"



#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 124 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"


#line 127 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 141 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 225 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 233 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"






#line 515 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"












 
#line 534 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 536 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"


#line 539 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"
#line 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"






























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"





























#line 536 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"


#line 539 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"
#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"

#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"

#line 2828 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"

#line 4345 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"
#line 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 253 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"


#line 270 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"



#line 285 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 287 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"




#line 298 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 302 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 306 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 310 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"


#line 315 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"


#line 327 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 331 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 335 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 339 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 343 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"



#line 356 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 360 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 364 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 368 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 372 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"



#line 385 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 389 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 393 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 397 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 401 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"


#line 409 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 413 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 417 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"















#line 512 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"





#line 520 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 524 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 528 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 532 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 536 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 540 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 544 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 548 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 552 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 556 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 560 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 564 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 568 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 572 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 576 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 580 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 584 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 588 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"





#line 596 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 600 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 604 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 608 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 612 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"
#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"
typedef __darwin_size_t        size_t;
#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mbstate_t.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"






























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"









































#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"


#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h"
typedef signed char           int8_t;
#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h"
typedef short                   int16_t;
#line 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h"
typedef int                     int32_t;
#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h"
typedef long long               int64_t;
#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h"
typedef unsigned char           u_int8_t;
#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h"
typedef unsigned short                  u_int16_t;
#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h"
typedef unsigned int            u_int32_t;
#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h"
typedef unsigned long long      u_int64_t;
#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
typedef int64_t                 register_t;
#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h"

typedef __darwin_intptr_t       intptr_t;
#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h"

#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h"
typedef unsigned long           uintptr_t;
#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h"
#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
typedef u_int64_t               user_addr_t;
typedef u_int64_t               user_size_t;
typedef int64_t                 user_ssize_t;
typedef int64_t                 user_long_t;
typedef u_int64_t               user_ulong_t;
typedef int64_t                 user_time_t;
typedef int64_t                 user_off_t;
#line 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"


#line 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"


#line 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"


#line 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
typedef u_int64_t               syscall_arg_t;
#line 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"
#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"
#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mbstate_t.h"
typedef __darwin_mbstate_t mbstate_t;
#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ct_rune_t.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ct_rune_t.h"
typedef __darwin_ct_rune_t ct_rune_t;
#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rune_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rune_t.h"
typedef __darwin_rune_t rune_t;
#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"




























#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"

#line 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"
typedef __darwin_wchar_t wchar_t;
#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"

#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"
#line 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

#line 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

#line 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"





















#line 37 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"



#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_header_macro.h"








#line 44 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"
#line 45 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg___gnuc_va_list.h"









#line 12 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg___gnuc_va_list.h"
typedef __builtin_va_list __gnuc_va_list;
#line 48 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"
#line 50 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_list.h"









#line 12 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_list.h"
typedef __builtin_va_list va_list;
#line 53 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"
#line 55 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_arg.h"









#line 11 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_arg.h"

#line 16 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_arg.h"

#line 21 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_arg.h"
#line 58 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"
#line 60 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg___va_copy.h"








#line 63 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"
#line 65 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_copy.h"








#line 68 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"
#line 70 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"
#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"




























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"




























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"

#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"
typedef __darwin_va_list va_list;
#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"

#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"
#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"
#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"




























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"

#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"



int     renameat(int, const char *, int, const char *) ;

#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"

int renamex_np(const char *, const char *, unsigned int)    ;
int renameatx_np(int, const char *, int, const char *, unsigned int)    ;

#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"



#line 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"
#line 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h"





int	 printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));


#line 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"



typedef __darwin_off_t		fpos_t;

#line 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"








struct __sbuf {
	unsigned char *	_base;
	int		_size;
};


struct __sFILEX;



























typedef	struct __sFILE {
	unsigned char *	_p;	
	int	_r;		
	int	_w;		
	short	_flags;		
	short	_file;		
	struct	__sbuf _bf;	
	int	_lbfsize;	

	
	void	*_cookie;	
	int	(*  _close)(void *);
	int	(*  _read) (void *, char *, int __n);
	fpos_t	(*  _seek) (void *, fpos_t, int);
	int	(*  _write)(void *, const char *, int __n);

	
	struct	__sbuf _ub;	
	struct __sFILEX *_extra; 
	int	_ur;		

	
	unsigned char _ubuf[3];	
	unsigned char _nbuf[1];	

	
	struct	__sbuf _lb;	

	
	int	_blksize;	
	fpos_t	_offset;	
} FILE;

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"




























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"


#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"

#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"

#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"
#line 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


extern FILE *__stdinp ;
extern FILE *__stdoutp ;
extern FILE *__stderrp ;


#line 176 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
	
#line 189 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"










#line 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

				
#line 209 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


#line 216 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 220 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"




void	 clearerr(FILE *);
int	 fclose(FILE *);
int	 feof(FILE *);
int	 ferror(FILE *);
int	 fflush(FILE *);
int	 fgetc(FILE *);
int	 fgetpos(FILE * restrict, fpos_t *);
char *	fgets(char * restrict , int __size, FILE *);
#line 241 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
FILE	*fopen(const char * restrict __filename, const char * restrict __mode) __asm("_" "fopen" "$DARWIN_EXTSN");
#line 245 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
int	 fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int	 fputc(int, FILE *);
int	 fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t	 fread(void * restrict  __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE	*freopen(const char * restrict, const char * restrict,
				 FILE * restrict) __asm("_" "freopen" );
int	 fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int	 fseek(FILE *, long, int);
int	 fsetpos(FILE *, const fpos_t *);
long	 ftell(FILE *);
size_t	 fwrite(const void * restrict  __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "fwrite" );
int	 getc(FILE *);
int	 getchar(void);

#line 262 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
char *	gets(char *) ;

void	 perror(const char *) ;
int	 putc(int, FILE *);
int	 putchar(int);
int	 puts(const char *);
int	 remove(const char *);
int	 rename (const char *__old, const char *__new);
void	 rewind(FILE *);
int	 scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void	 setbuf(FILE * restrict, char * restrict );
int	 setvbuf(FILE * restrict, char * restrict , int, size_t __size);



#line 280 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
int	 sprintf(char * restrict , const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) ;

int	 sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE	*tmpfile(void);


#line 289 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
char *	tmpnam(char *);

int	 ungetc(int, FILE *);
int	 vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int	 vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));



#line 300 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
int	 vsprintf(char * restrict , const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) ;








#line 310 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 314 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"

#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"





char *	ctermid(char *);


#line 316 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"



#line 320 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
FILE	*fdopen(int, const char *) __asm("_" "fdopen" "$DARWIN_EXTSN");
#line 324 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
int	 fileno(FILE *);

#line 327 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"






#line 334 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

int	 pclose(FILE *) ;
#line 337 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
FILE	*popen(const char *, const char *) __asm("_" "popen" "$DARWIN_EXTSN") ;
#line 341 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 343 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"







#line 351 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"



int	__srget(FILE *);
int	__svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int	__swbuf(int, FILE *);






#line 365 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
	if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
		return (*_p->_p++ = _c);
	else
		return (__swbuf(_c, _p));
}
#line 377 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 382 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


void	 flockfile(FILE *);
int	 ftrylockfile(FILE *);
void	 funlockfile(FILE *);
int	 getc_unlocked(FILE *);
int	 getchar_unlocked(void);
int	 putc_unlocked(int, FILE *);
int	 putchar_unlocked(int);


#line 397 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


#line 402 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
char *	tempnam(const char *__dir, const char *__prefix) __asm("_" "tempnam" );


#line 409 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 413 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"








#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"
typedef __darwin_off_t          off_t;
#line 423 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


int	 fseeko(FILE * __stream, off_t __offset, int __whence);
off_t	 ftello(FILE * __stream);

#line 429 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 431 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

int	 snprintf(char * restrict  __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int	 vfscanf(FILE * restrict __stream, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int	 vscanf(const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int	 vsnprintf(char * restrict  __str, size_t __size, const char * restrict __format, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int	 vsscanf(const char * restrict __str, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));

#line 439 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"







#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"
typedef __darwin_ssize_t        ssize_t;
#line 448 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


int	dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int	vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
ssize_t getdelim(char * *restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) ;
ssize_t getline(char * *restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) ;
FILE *fmemopen(void * restrict __buf , size_t __size, const char * restrict __mode) ;
FILE *open_memstream(char * *__bufp, size_t *__sizep) ;

#line 458 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"





#line 464 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

extern const int sys_nerr;		
extern const char *const sys_errlist[];

int	 asprintf(char * *restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *	ctermid_r(char *);
char *	fgetln(FILE *, size_t *__len);
const char *fmtcheck(const char *, const char *) __attribute__((format_arg(2)));
int	 fpurge(FILE *);
void	 setbuffer(FILE *, char *, int __size);
int	 setlinebuf(FILE *);
int	 vasprintf(char * *restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));





FILE	*funopen(const void *,
				 int (* )(void *, char *, int __n),
				 int (* )(void *, const char *, int __n),
				 fpos_t (* )(void *, fpos_t, int),
				 int (* )(void *));

#line 489 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 494 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 496 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


#line 499 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"























#line 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"

#line 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"

#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"
#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"



#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

extern int __snprintf_chk (char * restrict , size_t __maxlen, int, size_t,
			  const char * restrict, ...);
extern int __vsnprintf_chk (char * restrict , size_t __maxlen, int, size_t,
			  const char * restrict, va_list);

extern int __sprintf_chk (char * restrict , int, size_t,
			  const char * restrict, ...);
extern int __vsprintf_chk (char * restrict , int, size_t,
			  const char * restrict, va_list);

#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"


#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"


#line 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"



#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 118 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"
#line 501 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 502 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"
#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"






























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"






























































#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_clock_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_clock_t.h"
typedef __darwin_clock_t        clock_t;
#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"
#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"
typedef __darwin_time_t         time_t;
#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"

struct timespec
{
	__darwin_time_t tv_sec;
	long            tv_nsec;
};
#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"



struct tm {
	int	tm_sec;		
	int	tm_min;		
	int	tm_hour;	
	int	tm_mday;	
	int	tm_mon;		
	int	tm_year;	
	int	tm_wday;	
	int	tm_yday;	
	int	tm_isdst;	
	long	tm_gmtoff;	
	char	*	tm_zone;	
};

#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
extern char *	tzname[];
#line 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

extern int getdate_err;
#line 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
extern long timezone __asm("_" "timezone" );
#line 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
extern int daylight;


char *	asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *	ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t __maxsize, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *	strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);

#line 124 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
void tzset(void);
#line 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"


char * asctime_r(const struct tm * restrict, char * restrict );
char * ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);

#line 134 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
time_t posix2time(time_t);
#line 138 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);
#line 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 145 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) __asm("_" "nanosleep"  );
#line 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

typedef enum {
_CLOCK_REALTIME  = 0,
#line 159 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_MONOTONIC  = 6,
#line 162 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_MONOTONIC_RAW  = 4,
#line 164 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_MONOTONIC_RAW_APPROX  = 5,
#line 166 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_UPTIME_RAW  = 8,
#line 168 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_UPTIME_RAW_APPROX  = 9,
#line 171 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_PROCESS_CPUTIME_ID  = 12,
#line 173 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_THREAD_CPUTIME_ID  = 16
#line 175 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
} clockid_t;


int clock_getres(clockid_t __clock_id, struct timespec *__res);


int clock_gettime(clockid_t __clock_id, struct timespec *__tp);

#line 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);
#line 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

 
 
int clock_settime(clockid_t __clock_id, const struct timespec *__tp);

#line 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 197 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

int timespec_get(struct timespec *ts, int base);
#line 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"


#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"
#line 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__wctype.h"






































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"





















































#line 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wint_t.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wint_t.h"
typedef __darwin_wint_t wint_t;
#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_wctype_t.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_wctype_t.h"
typedef __darwin_wctype_t wctype_t;
#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"



#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"

#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ctype.h"

































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

































































#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"






































#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"



#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ct_rune_t.h"



























#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rune_t.h"


























#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"




























#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"

#line 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"


#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"

#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"
#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wint_t.h"



























#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"

#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"

#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"




typedef struct {
	__darwin_rune_t	__min;		
	__darwin_rune_t	__max;		
	__darwin_rune_t	__map;		
	__uint32_t *	__types;	
} _RuneEntry;

typedef struct {
	int		__nranges;	
	_RuneEntry *	__ranges;	
} _RuneRange;

typedef struct {
	char		__name[14];	
	__uint32_t	__mask;		
} _RuneCharClass;

typedef struct {
	char		__magic[8];	
	char		__encoding[32];	

	__darwin_rune_t	(*__sgetrune)(const char * __string, __darwin_size_t __n, char const *  *);
	int		(*__sputrune)(__darwin_rune_t, char * __string, __darwin_size_t __n, char *  *);
	__darwin_rune_t	__invalid_rune;	

	__uint32_t	__runetype[(1 <<8 )];
	__darwin_rune_t	__maplower[(1 <<8 )];
	__darwin_rune_t	__mapupper[(1 <<8 )];

	




	_RuneRange	__runetype_ext;
	_RuneRange	__maplower_ext;
	_RuneRange	__mapupper_ext;

	void *	__variable;	
	int		__variable_len;	

	


	int		__ncharclasses;
	_RuneCharClass *	__charclasses;
} _RuneLocale;

#line 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"


extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"



#line 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

#line 120 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

#line 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

#line 124 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"





#line 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"



unsigned long		___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t	___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t	___toupper(__darwin_ct_rune_t);


inline int
isascii(int _c)
{
	return ((_c & ~0x7F) == 0);
}

#line 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

int             	__maskrune(__darwin_ct_rune_t, unsigned long);

#line 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

inline int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{
#line 162 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
	return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
		: !!__maskrune(_c, _f));
#line 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
}

inline __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{
#line 173 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
	return (_c < 0 || _c >= (1 <<8 )) ? 0 :
		!!(_DefaultRuneLocale.__runetype[_c] & _f);
#line 176 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
}

#line 191 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

__darwin_ct_rune_t	__toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t	__tolower(__darwin_ct_rune_t);

#line 196 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

inline int
__wcwidth(__darwin_ct_rune_t _c)
{
	unsigned int _x;

	if (_c == 0)
		return (0);
	_x = (unsigned int)__maskrune(_c, 0xe0000000L|0x00040000L);
	if ((_x & 0xe0000000L) != 0)
		return ((_x & 0xe0000000L) >> 30);
	return ((_x & 0x00040000L) != 0 ? 1 : -1);
}

#line 211 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

#line 214 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

inline int
isalnum(int _c)
{
	return (__istype(_c, 0x00000100L|0x00000400L));
}

inline int
isalpha(int _c)
{
	return (__istype(_c, 0x00000100L));
}

inline int
isblank(int _c)
{
	return (__istype(_c, 0x00020000L));
}

inline int
iscntrl(int _c)
{
	return (__istype(_c, 0x00000200L));
}


inline int
isdigit(int _c)
{
	return (__isctype(_c, 0x00000400L));
}

inline int
isgraph(int _c)
{
	return (__istype(_c, 0x00000800L));
}

inline int
islower(int _c)
{
	return (__istype(_c, 0x00001000L));
}

inline int
isprint(int _c)
{
	return (__istype(_c, 0x00040000L));
}

inline int
ispunct(int _c)
{
	return (__istype(_c, 0x00002000L));
}

inline int
isspace(int _c)
{
	return (__istype(_c, 0x00004000L));
}

inline int
isupper(int _c)
{
	return (__istype(_c, 0x00008000L));
}


inline int
isxdigit(int _c)
{
	return (__isctype(_c, 0x00010000L));
}

inline int
toascii(int _c)
{
	return (_c & 0x7F);
}

inline int
tolower(int _c)
{
        return (__tolower(_c));
}

inline int
toupper(int _c)
{
        return (__toupper(_c));
}

#line 308 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
inline int
digittoint(int _c)
{
	return (__maskrune(_c, 0x0F));
}

inline int
ishexnumber(int _c)
{
	return (__istype(_c, 0x00010000L));
}

inline int
isideogram(int _c)
{
	return (__istype(_c, 0x00080000L));
}

inline int
isnumber(int _c)
{
	return (__istype(_c, 0x00000400L));
}

inline int
isphonogram(int _c)
{
	return (__istype(_c, 0x00200000L));
}

inline int
isrune(int _c)
{
	return (__istype(_c, 0xFFFFFFF0L));
}

inline int
isspecial(int _c)
{
	return (__istype(_c, 0x00100000L));
}
#line 351 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"

#line 386 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ctype.h"
#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"




#line 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"

inline int
iswalnum(wint_t _wc)
{
	return (__istype(_wc, 0x00000100L|0x00000400L));
}

inline int
iswalpha(wint_t _wc)
{
	return (__istype(_wc, 0x00000100L));
}

inline int
iswcntrl(wint_t _wc)
{
	return (__istype(_wc, 0x00000200L));
}

inline int
iswctype(wint_t _wc, wctype_t _charclass)
{
	return (__istype(_wc, _charclass));
}

inline int
iswdigit(wint_t _wc)
{
	return (__isctype(_wc, 0x00000400L));
}

inline int
iswgraph(wint_t _wc)
{
	return (__istype(_wc, 0x00000800L));
}

inline int
iswlower(wint_t _wc)
{
	return (__istype(_wc, 0x00001000L));
}

inline int
iswprint(wint_t _wc)
{
	return (__istype(_wc, 0x00040000L));
}

inline int
iswpunct(wint_t _wc)
{
	return (__istype(_wc, 0x00002000L));
}

inline int
iswspace(wint_t _wc)
{
	return (__istype(_wc, 0x00004000L));
}

inline int
iswupper(wint_t _wc)
{
	return (__istype(_wc, 0x00008000L));
}

inline int
iswxdigit(wint_t _wc)
{
	return (__isctype(_wc, 0x00010000L));
}

inline wint_t
towlower(wint_t _wc)
{
		return (__tolower(_wc));
}

inline wint_t
towupper(wint_t _wc)
{
		return (__toupper(_wc));
}

#line 186 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"


wctype_t
	wctype(const char *);

#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__wctype.h"
#line 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"





wint_t	btowc(int);
wint_t	fgetwc(FILE *);
wchar_t	*
	fgetws(wchar_t * restrict , int __n,
		FILE * restrict);
wint_t	fputwc(wchar_t, FILE *);
int	fputws(const wchar_t * restrict, FILE * restrict);
int	fwide(FILE *, int);
int	fwprintf(FILE * restrict, const wchar_t * restrict, ...);
int	fwscanf(FILE * restrict, const wchar_t * restrict, ...);
wint_t	getwc(FILE *);
wint_t	getwchar(void);
size_t	mbrlen(const char * restrict , size_t __n,
		mbstate_t * restrict);
size_t	mbrtowc(wchar_t * restrict, const char * restrict ,
	    size_t __n, mbstate_t * restrict);
int	mbsinit(const mbstate_t *);
size_t	mbsrtowcs(wchar_t * restrict ,
		const char ** restrict, size_t __len, mbstate_t * restrict);
wint_t	putwc(wchar_t, FILE *);
wint_t	putwchar(wchar_t);
int	swprintf(wchar_t * restrict , size_t __maxlen,
		const wchar_t * restrict, ...);
int	swscanf(const wchar_t * restrict, const wchar_t * restrict, ...);
wint_t	ungetwc(wint_t, FILE *);
int	vfwprintf(FILE * restrict, const wchar_t * restrict,
	    __darwin_va_list);
int	vswprintf(wchar_t * restrict , size_t __maxlen,
		const wchar_t * restrict, __darwin_va_list);
int	vwprintf(const wchar_t * restrict, __darwin_va_list);
size_t	wcrtomb(char * restrict, wchar_t, mbstate_t * restrict);
wchar_t	*wcscat(wchar_t * restrict, const wchar_t * restrict);
wchar_t	*wcschr(const wchar_t *, wchar_t);
int	wcscmp(const wchar_t *, const wchar_t *);
int	wcscoll(const wchar_t *, const wchar_t *);
wchar_t	*wcscpy(wchar_t * restrict ,
		const wchar_t * restrict) ;
size_t	wcscspn(const wchar_t *, const wchar_t *);
size_t	wcsftime(wchar_t * restrict , size_t __maxlen,
		const wchar_t * restrict, const struct tm * restrict)
		__asm("_" "wcsftime" );
size_t	wcslen(const wchar_t *);
wchar_t	*
		wcsncat(wchar_t * restrict ,
		const wchar_t * restrict , size_t __n)
		;
int	wcsncmp(const wchar_t *,
		const wchar_t *, size_t);
wchar_t	*
		wcsncpy(wchar_t * restrict ,
		const wchar_t * restrict , size_t __n)
		;
wchar_t	*wcspbrk(const wchar_t *, const wchar_t *);
wchar_t	*wcsrchr(const wchar_t *, wchar_t);
size_t	wcsrtombs(char * restrict ,
		const wchar_t ** restrict, size_t __len, mbstate_t * restrict);
size_t	wcsspn(const wchar_t *, const wchar_t *);
wchar_t	*wcsstr(const wchar_t * restrict, const wchar_t * restrict);
size_t	wcsxfrm(wchar_t * restrict ,
		const wchar_t * restrict, size_t __n);
int	wctob(wint_t);
double	wcstod(const wchar_t * restrict, wchar_t ** restrict);
wchar_t	*
		wcstok(wchar_t * restrict , const wchar_t * restrict,
	    wchar_t * * restrict);
long	 wcstol(const wchar_t * restrict, wchar_t * * restrict,
		int);
unsigned long
	 wcstoul(const wchar_t * restrict, wchar_t * * restrict, int);
wchar_t	* 
		wmemchr(const wchar_t * , wchar_t, size_t __n);
int	wmemcmp(const wchar_t *, const wchar_t *,
		size_t __n);
wchar_t	*
		wmemcpy(wchar_t * restrict ,
		const wchar_t * restrict , size_t __n);
wchar_t	*
		wmemmove(wchar_t *, const wchar_t *,
		size_t __n);
wchar_t	*
		wmemset(wchar_t *, wchar_t, size_t __n);
int	wprintf(const wchar_t * restrict, ...);
int	wscanf(const wchar_t * restrict, ...);
int	wcswidth(const wchar_t *, size_t __n);
int	wcwidth(wchar_t);









#line 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

int	vfwscanf(FILE * restrict, const wchar_t * restrict,
	    __darwin_va_list);
int	vswscanf(const wchar_t * restrict, const wchar_t * restrict,
	    __darwin_va_list);
int	vwscanf(const wchar_t * restrict, __darwin_va_list);
float	wcstof(const wchar_t * restrict, wchar_t * * restrict);
long double
	wcstold(const wchar_t * restrict, wchar_t * * restrict);
#line 204 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
long long
	wcstoll(const wchar_t * restrict, wchar_t * * restrict, int);
unsigned long long
	wcstoull(const wchar_t * restrict, wchar_t * * restrict, int);
#line 209 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

#line 211 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"







#line 219 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

size_t  mbsnrtowcs(wchar_t * restrict ,
		const char ** restrict, size_t, size_t __len,
		mbstate_t * restrict);
wchar_t *	wcpcpy(
		wchar_t * restrict ,
		const wchar_t * restrict) 
		
		;
wchar_t *	wcpncpy(
		wchar_t * restrict ,
		const wchar_t * restrict , size_t __n)
		
		;
wchar_t * wcsdup(const wchar_t *)
		;
int     wcscasecmp(const wchar_t *, const wchar_t *) ;
int     wcsncasecmp(const wchar_t *, const wchar_t *, size_t n) ;
size_t  wcsnlen(const wchar_t *, size_t __n)  ;
size_t  wcsnrtombs(char * restrict , const wchar_t ** restrict, size_t,
            size_t __len, mbstate_t * restrict);
FILE *open_wmemstream(wchar_t * * __bufp, size_t * __sizep) ;

#line 243 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"





#line 249 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

wchar_t *
		fgetwln(FILE * restrict, size_t *__len) ;
size_t	wcslcat(wchar_t *, const wchar_t *, size_t __len);
size_t	wcslcpy(wchar_t *, const wchar_t *, size_t __len);

#line 256 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"



#line 262 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wchar.h"
#line 6737 "/usr/local/include/neo-c.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"






























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"





#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"

char *	basename(char *);
char *	dirname(char *);

#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"



























































#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/limits.h"




#line 7 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/limits.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"






































#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_limits.h"



#line 6 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_limits.h"

#line 8 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_limits.h"

#line 10 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_limits.h"

#line 12 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_limits.h"
#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"











#line 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 88 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 121 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 124 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 133 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"

#line 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"
#line 12 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/limits.h"
#line 15 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/limits.h"
#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"
































































#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"

#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"


#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"






#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"




#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"

#line 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"

#line 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"

#line 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"

#line 119 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"
                                        
                                        
                                        
#line 127 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"


#line 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"
#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 120 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 134 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"


#line 145 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"


#line 150 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 162 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"

#line 164 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"


#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"



char *	basename_r(const char *, char *)
		 
		 ;

char *	dirname_r(const char *, char *)
		 
		 ;



#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"
#line 6738 "/usr/local/include/neo-c.h"
    
    typedef wchar_t*% wstring;
    
    uniq wstring __builtin_wstring(char* str)
    {
        if(str == null) {
            return null;
        }
        int len = strlen(str);
    
        wstring wstr = new wchar_t[len+1];
    
        int ret = mbstowcs(wstr, str, len+1);
        wstr[ret] = '\0';
    
        if(ret < 0) {
            wstr[0] = 0;
        }
    
        return wstr;
    }
    
    uniq int wchar_t*::length(wchar_t* str)
    {
        if(str == null) {
            return 0;
        }
        return wcslen(str);
    }
    
    uniq int wchar_t[]::length(wchar_t* str)
    {
        if(str == null) {
            return 0;
        }
        return wcslen(str);
    }
    
    uniq int wstring::length(wchar_t* str)
    {
        return wchar_t*::length(str);
    }
    
    uniq string string::lower_case(char* str)
    {
        if(str == null) {
            return string("");
        }
        string result = string(str);
        for(int i=0; i<strlen(str); i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                result[i] = str[i] - 'A' + 'a';
            }
        }
        
        return result;
    }
    
    uniq string string::upper_case(char* str)
    {
        if(str == null) {
            return string("");
        }
        string result = string(str);
        for(int i=0; i<strlen(str); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                result[i] = str[i] - 'a' + 'A';
            }
        }
        
        return result;
    }
    
    uniq wstring wchar_t*::substring(wchar_t* str, int head, int tail)
    {
        if(str == null) {
            return wstring("");
        }
    
        int len = wcslen(str);
    
        if(head < 0) {
            head += len;
        }
        if(tail < 0) {
            tail += len + 1;
        }
    
        if(head > tail) {
            return wstring("");
        }
    
        if(head < 0) {
            head = 0;
        }
    
        if(tail >= len) {
            tail = len;
        }
        
        if(head >= len) {
            return wstring("");
        }
    
        if(head == tail) {
            return wstring("");
        }
    
        if(tail-head+1 < 1) {
            return wstring("");
        }
    
        wstring result = new wchar_t[tail-head+1];
    
        memcpy(result, str + head, sizeof(wchar_t)*(tail-head));
        result[tail-head] = '\0';
    
        return result;
    }
    
    uniq int char*::index_count(char* str, char* search_str, int count, int default_value)
    {
        if(str == null || search_str == null) {
            return default_value;
        }
        
        int n = 0;
        int len = strlen(str);
        for(int i=0; i<len; i++) {
            int len2 = strlen(search_str);
            int j;
            for(j=0; j<len2; j++) {
                if(str[i+j] != search_str[j]) {
                    break;
                }
            }
            
            if(j == len2) {
                n++;
                
                if(n == count) {
                    return i;
                }
            }
        }
        
        return default_value;
    }
    
    
    uniq int char*::rindex(char* str, char* search_str, int default_value)
    {
        if(str == null || search_str == null) {
            return default_value;
        }
        int len = strlen(search_str);
        char* p = str + strlen(str) - len;
    
        while(p >= str) {
            if(strncmp(p, search_str, len) == 0) {
                return p - str;
            }
    
            p--;
        }
    
        return default_value;
    }
    
    
    uniq int char*::rindex_count(char* str, char* search_str, int count, int default_value)
    {
        if(str == null || search_str == null) {
            return default_value;
        }
        int len = strlen(search_str);
        char* p = str + strlen(str) - len;
        
        int n = 0;
    
        while(p >= str) {
            if(strncmp(p, search_str, len) == 0) {
                n++;
                if(n == count) {
                    return p - str;
                }
            }
    
            p--;
        }
    
        return default_value;
    }
    
    uniq string char*::strip(char* self)
    {
        if(self == null) {
            return string("");
        }
        
        string result = string(self);
        
        int len = strlen(self);
        
        if(self[len-1] == '\n') {
            result[len-1] = '\0';
        }
        else if(self[len-1] == '\r') {
            result[len-1] = '\0';
        }
        else if(len > 2 && self[len-2] == '\r' && self[len-1] == '\n') {
            result[len-2] = '\0';
        }
        
        return result;
    }
    
    uniq string wchar_t*::to_string(wchar_t* wstr)
    {
        if(wstr == null) {
            return string("");
        }
        
        int len = 6*(wcslen(wstr)+1);
    
        string result = new char[len];
    
        if(wcstombs(result, wstr, len) < 0) 
        {
            strncpy(result, "", len);
        }
    
        return result;
    }
    
    uniq string wchar_t[]::to_string(wchar_t* wstr)
    {
        if(wstr == null) {
            return string("");
        }
        return wchar_t*::to_string(wstr);
    }
    
    uniq wstring char*::to_wstring(char* str)
    {
        if(str == null) {
            return wstring("");
        }
        return wstring(str);
    }
    
    uniq wstring char[]::to_wstring(char* str)
    {
        if(str == null) {
            return wstring("");
        }
        return wstring(str);
    }
    
    uniq wstring wchar_t*::delete(wchar_t* str, int head, int tail) 
    {
        if(str == null) {
            return wstring("");
        }
        int len = wcslen(str);
    
        if(len == 0) {
            return str.to_string().to_wstring();
        }
        
        if(head < 0) {
           head += len;
        }
        
        if(tail < 0) {
           tail += len + 1;
        }
    
        if(head < 0) {
            head = 0;
        }
    
        if(tail < 0) {
            return str.to_string().to_wstring();
        }
    
        if(tail >= len) {
            tail = len;
        }
        
        wstring sub_str = str.substring(tail, -1);
    
        memcpy(str + head, sub_str, sizeof(wchar_t)*(sub_str.length()+1));
    
        return str.to_string().to_wstring();
    }
    
    uniq int wchar_t*::index(wchar_t* str, wchar_t* search_str, int default_value)
    {
        if(str == null || search_str == null) {
            return default_value;
        }
        
        wchar_t* head = wcsstr(str, search_str);
    
        if(head == null) {
            return default_value;
        }
    
        return head - str;
    }
    
    uniq int wchar_t*::rindex(wchar_t* str, wchar_t* search_str, int default_value)
    {
        if(str == null || search_str == null) {
            return default_value;
        }
        
        int len = wcslen(search_str);
    
        wchar_t* p = str + wcslen(str) - len;
    
        while(p >= str) {
            int len2 = wcslen(p);
            bool result = 1;
            int i;
            for(i=0; i<len && i < len2; i++) {
                if(p[i] != search_str[i]) {
                    result = 0;
                }
            }
            if(result) {
                return (p - str);
            }
    
            p--;
        }
    
        return default_value;
    }
    
    uniq wstring wchar_t*::reverse(wchar_t* str) 
    {
        if(str == null) {
            return wstring("");
        }
        
        int len = wcslen(str);
        wstring result = new wchar_t[len + 1];
    
        for(int i=0; i<len; i++) {
            result[i] = str[len-i-1];
        }
    
        result[len] = '\0';
    
        return result;
    }
    
    uniq wstring wchar_t*::multiply(wchar_t* str, int n)
    {
        if(str == null) {
            return wstring("");
        }
        
        int len = wcslen(str) * n + 1;
    
        wstring result = new wchar_t[len];
    
        result[0] = '\0';
    
        for(int i=0; i<n; i++) {
            wcscat(result, str);
        }
    
        return result;
    }
    
    uniq wstring wchar_t*::printable(wchar_t* str)
    {
        if(str == null) {
            return wstring("");
        }
        int len = str.length();
        wstring result = new wchar_t[len*2+1];
    
        int n = 0;
        for(int i=0; i<len; i++) {
            wchar_t c = str[i];
    
            if((c >= 0 && c < ' ') 
                || c == 127)
            {
                result[n++] = '^';
                result[n++] = c + 'A' - 1;
            }
            else {
                result[n++] = c;
            }
        }
    
        result[n] = '\0'
    
        return result;
    }
    
    
    uniq int wchar_t*::compare(wchar_t* left, wchar_t* right)
    {
        if(left == null) {
            if(right == null) {
                return 0;
            }
            else {
                return 1;
            }
        }
        else if(right == null) {
            if(left == null) {
                return 0;
            }
            else {
                return -1;
            }
        }
        return wcscmp(left, right);
    }
    
    uniq int wstring::compare(wchar_t* left, wchar_t* right)
    {
        if(left == null) {
            if(right == null) {
                return 0;
            }
            else {
                return 1;
            }
        }
        else if(right == null) {
            if(left == null) {
                return 0;
            }
            else {
                return -1;
            }
        }
        return wcscmp(left, right);
    }
    
    
    uniq bool wchar_t*::equals(wchar_t left, wchar_t right)
    {
        return left == right;
    }
    
    
    uniq wstring wchar_t*::operator_mult(wchar_t* str, int n)
    {
        return wchar_t*::multiply(str, n);
    }
    
    uniq wstring wstring::operator_mult(wchar_t* str, int n)
    {
        return wchar_t*::multiply(str, n);
    }
    
    uniq bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right)
    {
        return wcscmp(left, right) == 0;
    }
    
    uniq bool wstring::operator_equals(wchar_t* left, wchar_t* right)
    {
        return wcscmp(left, right) == 0;
    }
    
    uniq bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right)
    {
        return wcscmp(left, right) != 0;
    }
    
    uniq bool wstring::operator_not_equals(wchar_t* left, wchar_t* right)
    {
        return wcscmp(left, right) != 0;
    }
    
    
    uniq wstring wchar_t*::operator_add(wchar_t* left, wchar_t* right)
    {
        if(left == null || right == null) {
            return wstring("");
        }
        wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
        
        wcscpy(result, left);
        wcscat(result, right);
        
        return result;
    }
    
    uniq wstring wstring::operator_add(wchar_t* left, wchar_t* right)
    {
        if(left == null || right == null) {
            return wstring("");
        }
        wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
        
        wcscpy(result, left);
        wcscat(result, right);
        
        return result;
    }
    
    uniq int char*::index(char* str, char* search_str, int default_value)
    {
        if(str == null || search_str == null) {
            return default_value;
        }
        char* head = strstr(str, search_str);
    
        if(head == null) {
            return default_value;
        }
    
        return head - str;
    }
    
    uniq string char*::replace(char* self, int index, char c)
    {
        if(self == null) {
            return string("");
        }
        int len = strlen(self);
    
        if(strcmp(self, "") == 0) {
            return string(self);
        }
        
        if(index < 0) {
           index += len;
        }
    
        if(index >= len) {
            index = len-1;
        }
    
        if(index < 0) {
            index = 0;
        }
        
        self[index] = c;
        
        return string(self);
    }
    
    uniq string char*::multiply(char* str, int n)
    {
        if(str == null) {
            return string("");
        }
        int len = strlen(str) * n + 1;
    
        char*% result = new char[len];
    
        result[0] = '\0';
    
        for(int i=0; i<n; i++) {
            strcat(result, str);
        }
    
        return result;
    }
    
    uniq list<string>*% char*::split_str(char* self, char* str) 
    {
        if(self == null || str == null) {
            return new list<string>();
        }
        auto result = new list<string>.initialize();
    
        auto buf = new buffer.initialize();
    
        for(int i=0; i<self.length(); i++) {
            if(strstr(self + i, str) == self + i) {
                result.push_back(string(buf.buf));
                buf.reset();
                i += strlen(str)-1;
            }
            else {
                buf.append_char(self[i]);
            }
        }
        if(buf.length() != 0) {
            result.push_back(string(buf.buf));
        }
    
        return result;
    }
    
    uniq unsigned int wchar_t*::get_hash_key(wchar_t* value)
    {
        if(value == null) {
            return 0;
        }
        int result = 0;
        wchar_t* p = value;
        while(*p) {
            result += (*p);
            p++;
        }
        return result;
    }
    
    uniq bool wchar_t*::equals(wchar_t* left, wchar_t* right)
    {
        if(left == null && right == null) {
            return 1;
        }
        else if(left == null || right == null) {
            return 0;
        }
        return wcscmp(left, right) == 0;
    }
    
    uniq bool wstring::equals(wchar_t* left, wchar_t* right)
    {
        if(left == null && right == null) {
            return 1;
        }
        else if(left == null || right == null) {
            return 0;
        }
        return wcscmp(left, right) == 0;
    }
    
    
    uniq bool wchar_t::operator_equals(wchar_t left, wchar_t right)
    {
        return left == right;
    }
    
    uniq bool wchar_t::operator_not_equals(wchar_t left, wchar_t right)
    {
        return left != right;
    }
    
    uniq unsigned int wchar_t::get_hash_key(wchar_t value)
    {
        return value;
    }
    
    uniq bool wchar_t::equals(wchar_t left, wchar_t right)
    {
        return left == right;
    }
    
    uniq string wchar_t::to_string(wchar_t wc)
    {
        return xsprintf("%ls", wc);
    }
    
    uniq string xrealpath(char* path)
    {
        if(path == null) {
            return string("");
        }
        char* result = realpath(path, null);
    
        string result2 = string(result);
    
        free(result);
    
        return result2;
    }
    
    uniq string xdirname(char* path)
    {
        if(path == null) {
            return string("");
        }
        return string(dirname(string(path)));
    }
    
    uniq size_t xwcslen(wchar_t* wstr)
    {
        if(wstr == null) {
            return 0;
        }
        wchar_t* p = wstr;
        
        size_t len = 0;
        while(*p) {
            p++;
            len++;
        }
        
        return len;
    }
    
    uniq wstring wstring::substring(wchar_t* str, int head, int tail) 
    {
        return wchar_t*::substring(str, head, tail);
    }
    
    uniq int string::index_count(char* str, char* search_str, int count=1, int default_value=-1)
    {
        return char*::index_count(str, search_str, count, default_value);
    }
    
    
    uniq int string::rindex(char* str, char* search_str, int default_value=-1) 
    {
        return char*::rindex(str, search_str, default_value);
    }
    
    uniq int string::rindex_count(char* str, char* search_str, int count=1, int default_value=-1)
    {
        return char*::rindex_count(str, search_str, count, default_value);
    }
    
    uniq string string::strip(char* self)
    {
        return char*::strip(self);
    }
    
    uniq wstring string::to_wstring(char* str)
    {
        return char*::to_wstring(str);
    }
    
    uniq string wstring::to_string(wchar_t* wstr)
    {
        return wchar_t*::to_string(wstr);
    }
    
    uniq wstring int::to_wstring(int self)
    {
        return xsprintf("%d", self).to_wstring();
    }
    
    uniq wstring wstring::delete(wchar_t* str, int head, int tail)
    {
        return wchar_t*::delete(str, head, tail);
    }
    
    uniq int wstring::index(wchar_t* str, wchar_t* search_str, int default_value=1)
    {
        return wchar_t*::index(str, search_str, default_value);
    }
    
    uniq int wstring::rindex(wchar_t* str, wchar_t* search_str, int default_value=-1)
    {
        return wchar_t*::rindex(str, search_str, default_value);
    }
    
    uniq wstring wstring::reverse(wchar_t* str)
    {
        return wchar_t*::reverse(str);
    }
    
    uniq wstring wstring::multiply(wchar_t* str, int n)
    {
        return wchar_t*::multiply(str, n);
    }
    
    uniq wstring wstring::printable(wchar_t* str)
    {
        return wchar_t*::printable(str);
    }
    
    uniq unsigned int wstring::get_hash_key(wchar_t* value)
    {
        return wchar_t*::get_hash_key(value);
    }
    
    
    uniq int string::index(char* str, char* search_str, int default_value=-1)
    {
        return char*::index(str, search_str, default_value);
    }
    
    uniq string string::replace(char* self, int index, char c)
    {
        return char*::replace(self, index, c);
    }
    
    uniq string string::multiply(char* str, int n)
    {
        return char*::multiply(str, n);
    }
    
    uniq list<string>*% string::split_str(char* self, char* str)
    {
        return char*::split_str(self, str);
    }
    
    uniq wstring string::to_wstring(char* str)
    {
        return char*::to_wstring(str);
    }
    
    uniq string char*::chomp(char* str)
    {
        return string::chomp(str);
    }
    
    uniq bool wchar_t*::equals(wchar_t* left, wchar_t* right)
    {
        return wcscmp(left, right) == 0;
    }
    
    uniq bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right)
    {
        return wcscmp(left, right) == 0;
    }
    
    uniq bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right)
    {
        return wcscmp(left, right) != 0;
    }
}




if($UNIX == 1) {
    uniq string FILE*::read(FILE* f)
    {
        if(f == null) {
            return string("");
        }
        buffer*% buf = new buffer.initialize();
        
        while(1) {
            char buf2[1024];
            
            int size = fread(buf2, 1, 1024, f);
            
            buf.append(buf2, size);
    
            if(size < 1024) {
                break;
            }
        }
        
        return buf.to_string();
    }
    
    uniq int FILE*::write(FILE* f, char* str)
    {
        if(f == null || str == null) {
            return -1;
        }
        
        return fwrite(str, strlen(str), 1, f);
    }
    
    uniq int FILE*::fclose(FILE* f) 
    {
        if(f == null) {
            return -1;
        }
        
        int result = fclose(f);
        
        if(result < 0) {
            return result;
        }
        
        return result;
    }
    
    uniq FILE* FILE*::fprintf(FILE* f, const char* msg, ...)
    {
        if(f == null || msg == null) {
            return f;
        }
        char msg2[1024*2*2*2];
    
        va_list` args;
        __builtin_va_start(args, msg);
        vsnprintf(msg2, 1024*2*2*2, msg, args);
        __builtin_va_end(args);
    
        int result = fprintf(f, "%s", msg2);
        
        if(result < 0) {
            return f;
        }
        
        return f;
    }
    
    uniq int char*::write(char* self, char* file_name, bool append=0) 
    {
        if(self == null || file_name == null) {
            return -1;
        }
        
        FILE* f;
        if(append) {
           f = fopen(file_name, "a");
        }
        else {
           f = fopen(file_name, "w");
        }
        
        if(f == ((void*)0)) {
            return -1;
        }
        
        int result = fwrite(self, strlen(self), 1, f);
        
        if(result != 1) {
            return result;
        }
        
        int result2 = fclose(f)
        
        if(result2 < 0) {
            return result2;
        }
        
        return result;
    }
    
    uniq string char*::read(char* file_name) 
    {
        if(file_name == null) {
            return string("");
        }
        
        FILE* f = fopen(file_name, "r");
        
        if(f == ((void*)0)) {
            return string("");
        }
        
        buffer*% buf = new buffer.initialize();
        
        while(1) {
            char buf2[1024];
            
            int size = fread(buf2, 1, 1024, f);
            
            buf.append(buf2, size);
    
            if(size < 1024) {
                break;
            }
        }
        
        string result = buf.to_string();
        
        int result2 = fclose(f)
        
        if(result2 < 0) {
            return string("");
        }
        
        return result;
    }
    
    uniq list<string>*% FILE*::readlines(FILE* f)
    {
        list<string>*% result = new list<string>.initialize();
        
        if(f == null) {
            return result;
        }
        
        while(1) {
            char buf[1024];
            
            if(fgets(buf, 1024, f) == ((void*)0)) {
                break;
            }
            
            result.push_back(string(buf));
        }
        
        return result;
    }
    
    uniq bool xiswalpha(wchar_t c)
    {
        bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
        return result;
    }
    
    uniq bool xiswblank(wchar_t c)
    {
        return c == ' ' || c == '\t';
    }
    
    uniq bool xiswdigit(wchar_t c)
    {
        return (c >= '0' && c <= '9');
    }
    
    uniq bool xiswalnum(wchar_t c)
    {
        return xiswalpha(c) || xiswdigit(c);
    }
    
    uniq bool xiswascii(wchar_t c)
    {
        bool result = (c >= ' ' && c <= '~');
        return result;
    }
}
#line 2 "main.nc"

#line 4 "main.nc"

volatile uint32_t SP,PC, R4, R5, R6, R7, R8, R9, R10, R11;
volatile uint32_t *O, *P, *Q;

/*
void putchar(char c)
{
    char buf[2];
    buf[0] = c;
    buf[1] = '\0';
    
    puts(buf);
}
*/

struct sTask
{
    uint32_t sp;
    uint32_t pc;
    uint32_t r4;
    uint32_t r5;
    uint32_t r6;
    uint32_t r7;
    uint32_t r8;
    uint32_t r9;
    uint32_t r10;
    uint32_t r11;
};

list<sTask*%>*% gTasks;
int gCurrentTask = 0;

void init_task(void (*fun)())
{
    uint32_t* stack = (uint32_t*)calloc(1, sizeof(uint32_t)*1024);
    volatile uint32_t* stack_end = (uint32_t*)(&stack[1024-1]);

    *(--stack_end) = 0x01000000;  // xPSR
    *(--stack_end) = (uint32_t)fun; // PC
    *(--stack_end) = 0xFFFFFFFD;  // LR (例外リターン)
    int i;
    for (i = 0; i < 5; i++) {
        *(--stack_end) = 0;
    }
    
    sTask*% task = new sTask;
    task.sp = (uint32_t)stack_end;
    
    gTasks.add(task);
}

void save_context(sTask* task)
{
    asm volatile (
        "ldr r0, =R4; \n"
        "str r4, [r0];\n"
        :
        :
        : "r0", "r4"
    );
    task.r4 = R4; 
    asm volatile (
        "ldr r0, =R5; \n"
        "str r5, [r0];\n"
        :
        :
        : "r0", "r5"
    );
    task.r5 = R5; 
    asm volatile (
        "ldr r0, =R6; \n"
        "str r6, [r0];\n"
        :
        :
        : "r0", "r6"
    );
    task.r6 = R6; 
    asm volatile (
        "ldr r0, =R7; \n"
        "str r7, [r0];\n"
        :
        :
        : "r0", "r7"
    );
    task.r7 = R7; 
    asm volatile (
        "ldr r0, =R8; \n"
        "mov r3, r8;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r8"
    );
    task.r8 = R8; 
    asm volatile (
        "ldr r0, =R9; \n"
        "mov r3, r9;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r9"
    );
    task.r9 = R9; 
    asm volatile (
        "ldr r0, =R10; \n"
        "mov r3, r10;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r10"
    );
    task.r10 = R10; 
    asm volatile (
        "ldr r0, =R11; \n"
        "mov r3, r11;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r11"
    );
    task.r11 = R11; 
    
    asm volatile (
        "mrs r1, psp\n"
        "ldr r0, =SP; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1"
    );
    
    task.sp = SP; 
}
    
void restore_context(sTask* task)
{
    SP = task.sp;
    
    PC = *((uint32_t*)SP +6);
    
    asm volatile (
        "ldr r0, =SP; \n"
        "ldr r3, [r0]; \n"
        "msr psp, r3; \n"
        :
        :
        : "r0", "r3"
    );
    R11 = task.r11;
    asm volatile (
        "ldr r0, =R11; \n"
        "ldr r4, [r0];\n"
        "mov r11, r4;\n"
        :
        :
        : "r0", "r4", "r11"
    );
    R10 = task.r10;
    asm volatile (
        "ldr r0, =R10; \n"
        "ldr r4, [r0];\n"
        "mov r10, r4;\n"
        :
        :
        : "r0", "r4", "r10"
    );
    R9 = task.r9;
    asm volatile (
        "ldr r0, =R9; \n"
        "ldr r4, [r0];\n"
        "mov r9, r4;\n"
        :
        :
        : "r0", "r4", "r9"
    );
    R8 = task.r8;
    asm volatile (
        "ldr r0, =R8; \n"
        "ldr r4, [r0];\n"
        "mov r8, r4;\n"
        :
        :
        : "r0", "r4", "r8"
    );
    R7 = task.r7;
    asm volatile (
        "ldr r0, =R7; \n"
        "ldr r7, [r0];\n"
        :
        :
        : "r0", "r7"
    );
    R6 = task.r6;
    asm volatile (
        "ldr r0, =R6; \n"
        "ldr r6, [r0];\n"
        :
        :
        : "r0", "r6"
    );
    R5 = task.r5;
    asm volatile (
        "ldr r0, =R5; \n"
        "ldr r5, [r0];\n"
        :
        :
        : "r0", "r5"
    );
    R4 = task.r4;
    asm volatile (
        "ldr r0, =R4; \n"
        "ldr r4, [r0];\n"
        :
        :
        : "r0", "r4"
    );
}

bool timer_callback(struct repeating_timer *t) 
{
    save_context(gTasks[gCurrentTask]);
     
    gCurrentTask = (gCurrentTask + 1) % gTasks.length();
    
    restore_context(gTasks[gCurrentTask]);
    
    return 1;
}

void task1()
{
    while(1) {
        puts("TASK1" + " BY NEO-C");
        sleep_ms(1000);
        puts("TASK1-2" + " BY NEO-C");
        sleep_ms(1000);
    }
}

void task2()
{
    while(1) {
        puts("TASK2" + " BY NEO-C");
        sleep_ms(1000);
        puts("TASK2-2" + " BY NEO-C");
        sleep_ms(1000);
    }
}

int main() 
{
    stdio_init_all();
    sleep_ms(5000);
    
    gTasks = new list<sTask*%>();
    
    init_task(task1);
    init_task(task2);
    
    SP = gTasks[gCurrentTask].sp;
    
    struct repeating_timer timer;
    add_repeating_timer_ms(1000, timer_callback, ((void*)0), &timer);

    asm volatile (
        "ldr r0, =SP; \n"
        "ldr r4, [r0]; \n"
        "msr psp, r4\n"
        "mov r0, #0x02\n"
        "msr CONTROL, r0\n"
        "isb\n"
        :
        : 
        : "r0","r4"            // 使用するレジスタ
    );
    
    task1();
    

/*
リンクレジスタ（LR）の内容 割り込み時に LR には特別な値が設定されます：

EXC_RETURN と呼ばれる特別な値で、割り込みから復帰するための情報を含みます。
一般的な値：
0xFFFFFFF9: メインスタックポインタ（MSP）を使用して復帰
0xFFFFFFFD: プロセススタックポインタ（PSP）を使用して復帰
このため、割り込み発生時点の PC（呼び出し元のアドレス） は、スタックに保存されますが、LR には保存されません。
割り込みが発生すると、スタックには次のようにデータが保存されます（スタックトップから順に）：
R0
R1
R2
R3
R12
LR（呼び出し元の戻りアドレス）
PC（割り込み発生時のプログラムカウンタ）
xPSR
*/
    
    while (1) {
    }
    
    return 0;
}
