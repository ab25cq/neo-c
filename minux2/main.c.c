/// typedef definition ///
typedef __builtin_va_list __gnuc_va_list;

typedef char* string;

typedef __builtin_va_list va_list  ;

typedef struct re_program* re_t  ;

typedef struct re_capture re_capture  ;

typedef struct regex_t regex_t;

typedef struct re_program regex_program_t  ;

typedef struct anonymous_typeX5 compiler_state;

typedef struct anonymous_typeX6 match_context;

/// previous struct definition ///
#define _GNU_SOURCE
#include "stdarg.h"
#include "stdlib.h"
#include "stdint.h"
#include "string.h"
#include "stdio.h"
#include "ctype.h"
#include "wchar.h"
#include "pico/stdlib.h"
#include "pico/stdio.h"
#include "pico/time.h"
#include "hardware/irq.h"
#include "hardware/timer.h"
#include "hardware/uart.h"
#include "pico/mutex.h"
#include "pico/multicore.h"
struct re_program;

/// struct definition ///
struct buffer
{
    char* buf;
    int len;
    int size;
};

struct sMemHeaderTiny
{
    long size;
    int allocated;
    struct sMemHeaderTiny* next  ;
    struct sMemHeaderTiny* prev  ;
    struct sMemHeaderTiny* free_next  ;
    char* class_name;
    char* sname;
    int sline;
};

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char* item  ;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

struct re_capture
{
    int start;
    int length;
};

enum { RE_UNUSED 
,RE_DOT 
,RE_BEGIN 
,RE_END 
,RE_QUESTIONMARK 
,RE_STAR 
,RE_PLUS 
,RE_CHAR 
,RE_CHAR_CLASS 
,RE_INV_CHAR_CLASS 
,RE_DIGIT 
,RE_NOT_DIGIT 
,RE_ALPHA 
,RE_NOT_ALPHA 
,RE_WHITESPACE 
,RE_NOT_WHITESPACE 
,RE_GROUP 
,RE_GROUP_END 
};

struct anonymous_typeX2
{
    struct regex_t* first  ;
    struct regex_t* last  ;
    int id;
};

union anonymous_typeZ1
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t* first  ;
        struct regex_t* last  ;
        int id;
    } group;
};

struct anonymous_typeX4
{
    struct regex_t* first  ;
    struct regex_t* last  ;
    int id;
};

union anonymous_typeZ3
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t* first  ;
        struct regex_t* last  ;
        int id;
    } group;
};

struct regex_t
{
    unsigned char type;
    union {
        unsigned char ch;
        unsigned char* ccl;
        struct {
            struct regex_t* first  ;
            struct regex_t* last  ;
            int id;
        } group;
    } u;
    struct regex_t* next  ;
};

struct re_program
{
    struct regex_t* start  ;
    int group_count;
};

struct anonymous_typeX5
{
    struct regex_t* pool  ;
    int pool_capacity;
    int pool_size;
    unsigned char* ccl_buf;
    int ccl_capacity;
    int ccl_idx;
    int group_count;
};

struct anonymous_typeX6
{
    const char* base;
    struct re_capture* captures  ;
    int capture_capacity;
    int total_groups;
    _Bool ignore_case;
};

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

struct list_item$1sTask$ph
{
    struct sTask* item  ;
    struct list_item$1sTask$ph* prev;
    struct list_item$1sTask$ph* next;
};

struct list$1sTask$ph
{
    struct list_item$1sTask$ph* head;
    struct list_item$1sTask$ph* tail;
    int len;
    struct list_item$1sTask$ph* it;
};

/// variable definition ///
extern struct sMemHeaderTiny* gAllocMem  ;

extern int gComeDebugLib;

extern int gNumAlloc;

extern int gNumFree;

uint32_t SP;
uint32_t PC;
uint32_t R4;
uint32_t R5;
uint32_t R6;
uint32_t R7;
uint32_t R8;
uint32_t R9;
uint32_t R10;
uint32_t R11;
uint32_t* O;
uint32_t** P;
uint32_t** Q;
struct list$1sTask$ph* gTasks;
int gCurrentTask=0;
// source head

// header function
void init_task(void (*fun)());
static struct list$1sTask$ph* list$1sTask$ph_add(struct list$1sTask$ph* self, struct sTask* item  );
static void sTask_finalize(struct sTask* self  );
void save_context(struct sTask* task  );
void restore_context(struct sTask* task  );
_Bool timer_callback(struct repeating_timer* t);
static struct sTask* list$1sTask$ph$p_operator_load_element(struct list$1sTask$ph* self, int position);
static struct sTask* list$1sTask$ph_operator_load_element(struct list$1sTask$ph* self, int position);
static int list$1sTask$ph_length(struct list$1sTask$ph* self);
void task1();
void task2();
int main();
static struct list$1sTask$ph* list$1sTask$ph_initialize(struct list$1sTask$ph* self);
static void list$1sTask$ph$p_finalize(struct list$1sTask$ph* self);
static void list_item$1sTask$ph$p_finalize(struct list_item$1sTask$ph* self);
static void list$1sTask$ph_finalize(struct list$1sTask$ph* self);
static void repeating_timer_finalize(struct repeating_timer* self);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
_Bool die(char* msg);
int assert_v2(int exp);
void come_heap_init(int come_debug);
void come_heap_final();
void* alloc_from_pages(size_t size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(size_t size, char* sname, int sline, char* class_name);
char* come_dynamic_typeof(void* mem);
void* come_calloc(size_t count, size_t size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
void xassert(char* msg, _Bool test);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(size_t count, size_t size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
struct buffer* buffer_initialize(struct buffer* self  );
struct buffer* buffer_initialize_with_value(struct buffer* self  , char* mem, size_t size);
void buffer_finalize(struct buffer* self  );
struct buffer* buffer_clone(struct buffer* self  );
_Bool buffer_equals(struct buffer* left  , struct buffer* right  );
int buffer_length(struct buffer* self  );
void buffer_reset(struct buffer* self  );
void buffer_trim(struct buffer* self  , int len);
struct buffer* buffer_append(struct buffer* self  , char* mem, size_t size);
struct buffer* buffer_append_char(struct buffer* self  , char c);
struct buffer* buffer_append_str(struct buffer* self  , char* mem);
struct buffer* buffer_append_format(struct buffer* self  , char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self  , char* mem);
struct buffer* buffer_append_int(struct buffer* self  , int value);
struct buffer* buffer_append_long(struct buffer* self  , long value);
struct buffer* buffer_append_short(struct buffer* self  , short value);
struct buffer* buffer_alignment(struct buffer* self  );
int buffer_compare(struct buffer* left  , struct buffer* right  );
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self  );
unsigned char* buffer_head_pointer(struct buffer* self  );
struct buffer* chara_to_buffer(char* self, size_t len);
struct buffer* charpa_to_buffer(char** self, size_t len);
struct buffer* shorta_to_buffer(short* self, size_t len);
struct buffer* inta_to_buffer(int* self, size_t len);
struct buffer* longa_to_buffer(long* self, size_t len);
struct buffer* floata_to_buffer(float* self, size_t len);
struct buffer* doublea_to_buffer(double* self, size_t len);
char* buffer_printable(struct buffer* self  );
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* chara_to_list(char* self, size_t len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charpa_to_list(char** self, size_t len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shorta_to_list(short* self, size_t len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* inta_to_list(int* self, size_t len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longa_to_list(long* self, size_t len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floata_to_list(float* self, size_t len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublea_to_list(double* self, size_t len);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(size_t self, size_t right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
_Bool charpa_contained(char** self, size_t len, char* str);
size_t shorta_length(short* self, size_t len);
size_t inta_length(int* self, size_t len);
size_t longa_length(long* self, size_t len);
size_t floata_length(float* self, size_t len);
size_t doublea_length(double* self, size_t len);
unsigned int bool_get_hash_key(_Bool value);
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(size_t value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool bool_clone(_Bool self);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
size_t size_t_clone(size_t self);
double double_clone(double self);
float float_clone(float self);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisspace(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
int chara_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  );
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* chara_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* _Bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(size_t self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(size_t left, size_t right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
long long_printf(long self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
static void match_context_finalize(struct anonymous_typeX6* self  );
int re_matchp_ex(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures, _Bool ignore_case);
int re_matchp(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures);
int re_match(const char* pattern, const char* text, int* matchlength);
static void regex_program_t_finalize(struct re_program* self  );
static void compiler_state_finalize(struct anonymous_typeX5* self  );
struct re_program* re_compile(const char* pattern);
void re_print(struct re_program* pattern  );
void clear_captures(struct anonymous_typeX6* ctx  );
void snapshot_captures(const struct anonymous_typeX6* ctx  , struct re_capture* buffer_  );
void restore_captures(struct anonymous_typeX6* ctx  , const struct re_capture* buffer_  );
struct regex_t* new_token(struct anonymous_typeX5* st  );
int append_token(struct regex_t** head  , struct regex_t** tail  , struct regex_t* token  );
struct regex_t* compile_sequence(struct anonymous_typeX5* st  , const char* pattern, int* pos, int in_group);
const char* matchpattern(struct regex_t* pattern  , const char* text, struct anonymous_typeX6* ctx  );
const char* matchgroup(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX6* ctx  );
const char* matchstar(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX6* ctx  );
const char* matchplus(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX6* ctx  );
const char* matchquestion(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX6* ctx  );
unsigned char re_fold_char(unsigned char c, _Bool ignore_case);
const char* matchtoken(struct regex_t* token  , const char* text, struct anonymous_typeX6* ctx  );
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str, _Bool ignore_case);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str, _Bool ignore_case);
void re_print_internal(struct regex_t* pattern  , int depth);
int re_get_group_count(struct re_program* pattern  );
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int charp_index_regex(char* self, char* reg, int default_value, _Bool ignore_case);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, char* reg, int default_value, _Bool ignore_case);
char* charp_strip(char* self);
int charp_index(char* str, char* search_str, int default_value);
char* string_chomp(char* str);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
struct list$1char$ph* charp_split_str(char* self, char* str);
int string_rindex(char* str, char* search_str, int default_value);
int string_rindex_regex(char* self, char* reg, int default_value, _Bool ignore_case);
char* string_strip(char* self);
int string_index(char* str, char* search_str, int default_value);
int string_index_regex(char* self, char* reg, int default_value, _Bool ignore_case);
char* string_replace(char* self, int index, char c);
char* string_multiply(char* str, int n);
_Bool charp_match(char* self, char* reg, _Bool ignore_case);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item  );
struct list$1char$ph* charp_scan(char* self, char* reg, _Bool ignore_case);
struct list$1char$ph* charp_split(char* self, char* reg, _Bool ignore_case);
char* string_sub(char* self, char* reg, char* replace, _Bool ignore_case);
struct list$1char$ph* string_split_str(char* self, char* str);
struct list$1char$ph* string_scan(char* self, char* reg, _Bool ignore_case);
struct list$1char$ph* string_split(char* self, char* reg, _Bool ignore_case);
_Bool string_match(char* self, char* reg, _Bool ignore_case);
char* charp_sub(char* self, char* reg, char* replace, _Bool global, _Bool ignore_case);
char* charp_sub_block(char* self, char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(char* self, char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char* string_sub_block(char* self, char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
// uniq global variable
struct sMemHeaderTiny* gAllocMem  ;

int gComeDebugLib=0;

int gNumAlloc=0;

int gNumFree=0;

// inline function

// body function
void init_task(void (*fun)())
{
    uint32_t* stack;
    uint32_t* stack_end;
    int i;
    void* __right_value0 = (void*)0;
    struct sTask* task  ;
    stack=(uint32_t*)calloc(1,sizeof(uint32_t)*1024);
    stack_end=(uint32_t*)(&stack[1024-1]);
    *(--stack_end)=0x01000000;
    *(--stack_end)=(uint32_t)fun;
    *(--stack_end)=0xFFFFFFFD;
    for(i=0;i<5;i++){
        *(--stack_end)=0;
    }
    task=(struct sTask*)come_increment_ref_count((struct sTask*)come_calloc_v2(1, sizeof(struct sTask)*(1), "main.c", 48, "struct sTask*"));
    task->sp=(uint32_t)stack_end;
    list$1sTask$ph_add(gTasks,(struct sTask*)come_increment_ref_count(task));
    come_call_finalizer(sTask_finalize, task, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sTask$ph* list$1sTask$ph_add(struct list$1sTask$ph* self, struct sTask* item  )
{
    struct list$1sTask$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sTask$ph* litem;
    struct sTask* __dec_obj1  ;
    struct list_item$1sTask$ph* litem_0;
    struct sTask* __dec_obj2  ;
    struct list_item$1sTask$ph* litem_1;
    struct sTask* __dec_obj3  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sTask_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sTask$ph*)come_increment_ref_count(((struct list_item$1sTask$ph*)(__right_value0=(struct list_item$1sTask$ph*)come_calloc_v2(1, sizeof(struct list_item$1sTask$ph)*(1), "/usr/local/include/neo-c.h", 900, "struct list_item$1sTask$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(struct sTask*)come_increment_ref_count(item);
        come_call_finalizer(sTask_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_0=(struct list_item$1sTask$ph*)come_increment_ref_count(((struct list_item$1sTask$ph*)(__right_value0=(struct list_item$1sTask$ph*)come_calloc_v2(1, sizeof(struct list_item$1sTask$ph)*(1), "/usr/local/include/neo-c.h", 910, "struct list_item$1sTask$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj2=litem_0->item,
        litem_0->item=(struct sTask*)come_increment_ref_count(item);
        come_call_finalizer(sTask_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sTask$ph*)come_increment_ref_count(((struct list_item$1sTask$ph*)(__right_value0=(struct list_item$1sTask$ph*)come_calloc_v2(1, sizeof(struct list_item$1sTask$ph)*(1), "/usr/local/include/neo-c.h", 920, "struct list_item$1sTask$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj3=litem_1->item,
        litem_1->item=(struct sTask*)come_increment_ref_count(item);
        come_call_finalizer(sTask_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sTask_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sTask_finalize(struct sTask* self  )
{
}

void save_context(struct sTask* task  )
{
    __asm volatile("ldr r0, =R4; \n"
        "str r4, [r0];\n"
        :
        :
        : "r0", "r4"
    );
    task->r4=R4;
    __asm volatile("ldr r0, =R5; \n"
        "str r5, [r0];\n"
        :
        :
        : "r0", "r5"
    );
    task->r5=R5;
    __asm volatile("ldr r0, =R6; \n"
        "str r6, [r0];\n"
        :
        :
        : "r0", "r6"
    );
    task->r6=R6;
    __asm volatile("ldr r0, =R7; \n"
        "str r7, [r0];\n"
        :
        :
        : "r0", "r7"
    );
    task->r7=R7;
    __asm volatile("ldr r0, =R8; \n"
        "mov r3, r8;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r8"
    );
    task->r8=R8;
    __asm volatile("ldr r0, =R9; \n"
        "mov r3, r9;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r9"
    );
    task->r9=R9;
    __asm volatile("ldr r0, =R10; \n"
        "mov r3, r10;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r10"
    );
    task->r10=R10;
    __asm volatile("ldr r0, =R11; \n"
        "mov r3, r11;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r11"
    );
    task->r11=R11;
    __asm volatile("mrs r1, psp\n"
        "ldr r0, =SP; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1"
    );
    task->sp=SP;
}

void restore_context(struct sTask* task  )
{
    SP=task->sp;
    PC=*((uint32_t*)SP+6);
    __asm volatile("ldr r0, =SP; \n"
        "ldr r3, [r0]; \n"
        "msr psp, r3; \n"
        :
        :
        : "r0", "r3"
    );
    R11=task->r11;
    __asm volatile("ldr r0, =R11; \n"
        "ldr r4, [r0];\n"
        "mov r11, r4;\n"
        :
        :
        : "r0", "r4", "r11"
    );
    R10=task->r10;
    __asm volatile("ldr r0, =R10; \n"
        "ldr r4, [r0];\n"
        "mov r10, r4;\n"
        :
        :
        : "r0", "r4", "r10"
    );
    R9=task->r9;
    __asm volatile("ldr r0, =R9; \n"
        "ldr r4, [r0];\n"
        "mov r9, r4;\n"
        :
        :
        : "r0", "r4", "r9"
    );
    R8=task->r8;
    __asm volatile("ldr r0, =R8; \n"
        "ldr r4, [r0];\n"
        "mov r8, r4;\n"
        :
        :
        : "r0", "r4", "r8"
    );
    R7=task->r7;
    __asm volatile("ldr r0, =R7; \n"
        "ldr r7, [r0];\n"
        :
        :
        : "r0", "r7"
    );
    R6=task->r6;
    __asm volatile("ldr r0, =R6; \n"
        "ldr r6, [r0];\n"
        :
        :
        : "r0", "r6"
    );
    R5=task->r5;
    __asm volatile("ldr r0, =R5; \n"
        "ldr r5, [r0];\n"
        :
        :
        : "r0", "r5"
    );
    R4=task->r4;
    __asm volatile("ldr r0, =R4; \n"
        "ldr r4, [r0];\n"
        :
        :
        : "r0", "r4"
    );
}

_Bool timer_callback(struct repeating_timer* t)
{
    void* __right_value0 = (void*)0;
    save_context(((struct sTask*)(__right_value0=list$1sTask$ph_operator_load_element(gTasks,gCurrentTask))));
    come_call_finalizer(sTask_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gCurrentTask=(gCurrentTask+1)%list$1sTask$ph_length(gTasks);
    restore_context(((struct sTask*)(__right_value0=list$1sTask$ph_operator_load_element(gTasks,gCurrentTask))));
    come_call_finalizer(sTask_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return 1;
}

static struct sTask* list$1sTask$ph$p_operator_load_element(struct list$1sTask$ph* self, int position)
{
    struct sTask* default_value  ;
    struct sTask* __result_obj__0  ;
    struct list_item$1sTask$ph* it;
    int i;
    struct sTask* default_value_2  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sTask*));
        __result_obj__0 = (struct sTask*)come_increment_ref_count(default_value);
        come_call_finalizer(sTask_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(sTask_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sTask*)come_increment_ref_count(it->item);
            come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_2,0,sizeof(struct sTask*));
    __result_obj__0 = (struct sTask*)come_increment_ref_count(default_value_2);
    come_call_finalizer(sTask_finalize, default_value_2, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sTask* list$1sTask$ph_operator_load_element(struct list$1sTask$ph* self, int position)
{
    struct sTask* default_value  ;
    struct sTask* __result_obj__0  ;
    struct list_item$1sTask$ph* it;
    int i;
    struct sTask* default_value_3  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sTask*));
        __result_obj__0 = (struct sTask*)come_increment_ref_count(default_value);
        come_call_finalizer(sTask_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(sTask_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sTask*)come_increment_ref_count(it->item);
            come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_3,0,sizeof(struct sTask*));
    __result_obj__0 = (struct sTask*)come_increment_ref_count(default_value_3);
    come_call_finalizer(sTask_finalize, default_value_3, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static int list$1sTask$ph_length(struct list$1sTask$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void task1()
{
    while(1) {
        puts("TASK1");
        sleep_ms(1000);
        puts("TASK1-2");
        sleep_ms(1000);
    }
}

void task2()
{
    while(1) {
        puts("TASK2");
        sleep_ms(1000);
        puts("TASK2-2");
        sleep_ms(1000);
    }
}

int main()
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sTask$ph* __dec_obj4;
    struct repeating_timer timer;
    int __result_obj__0;
    come_heap_init(0);
    stdio_init_all();
    sleep_ms(5000);
    __dec_obj4=gTasks,
    gTasks=(struct list$1sTask$ph*)come_increment_ref_count(list$1sTask$ph_initialize((struct list$1sTask$ph*)come_increment_ref_count((struct list$1sTask$ph*)come_calloc_v2(1, sizeof(struct list$1sTask$ph)*(1), "main.c", 257, "struct list$1sTask$ph*"))));
    come_call_finalizer(list$1sTask$ph_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    init_task(task1);
    init_task(task2);
    SP=((struct sTask*)(__right_value0=list$1sTask$ph_operator_load_element(gTasks,gCurrentTask)))->sp;
    come_call_finalizer(sTask_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    add_repeating_timer_ms(1000,timer_callback,((void*)0),&timer);
    __asm volatile("ldr r0, =SP; \n"
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
    while(1) {
    }
    __result_obj__0 = 0;
    come_call_finalizer(repeating_timer_finalize, (&timer), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer(list$1sTask$ph$p_finalize, gTasks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result_obj__0;
}

static struct list$1sTask$ph* list$1sTask$ph_initialize(struct list$1sTask$ph* self)
{
    struct list$1sTask$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sTask$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sTask$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sTask$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1sTask$ph$p_finalize(struct list$1sTask$ph* self)
{
    struct list_item$1sTask$ph* it;
    struct list_item$1sTask$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sTask$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTask$ph$p_finalize(struct list_item$1sTask$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sTask_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sTask$ph_finalize(struct list$1sTask$ph* self)
{
    struct list_item$1sTask$ph* it;
    struct list_item$1sTask$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sTask$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void repeating_timer_finalize(struct repeating_timer* self)
{
}

void come_push_stackframe(char* sname, int sline, int id)
{
}

void come_pop_stackframe()
{
}

void come_save_stackframe(char* sname, int sline)
{
}

void stackframe()
{
}

char* come_get_stackframe()
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool die(char* msg)
{
    puts(msg);
    exit(4);
    return 0;
}

int assert_v2(int exp)
{
    if(exp) {
    }
    else {
        puts("assert failure");
        stackframe_v2();
        exit(2);
    }
}

void come_heap_init(int come_debug)
{
    gComeDebugLib=come_debug;
    gAllocMem=((void*)0);
}

void come_heap_final()
{
    struct sMemHeaderTiny* it  ;
    int n;
    it=(struct sMemHeaderTiny*)gAllocMem;
    n=0;
    while(it) {
        n++;
        if(it->class_name) {
            printf("#%d %p (%s) %s %d\n",n,(char*)it+sizeof(struct sMemHeaderTiny)+sizeof(size_t)+sizeof(size_t),it->class_name,it->sname,it->sline);
        }
        it=it->next;
    }
    if(n>0) {
        printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n,gNumAlloc,gNumFree);
    }
}

void* alloc_from_pages(size_t size)
{
    void* __result_obj__0;
    __result_obj__0 = calloc(1,size);
    return __result_obj__0;
}

void come_free_mem_of_heap_pool(void* mem)
{
    struct sMemHeaderTiny* it  ;
    struct sMemHeaderTiny* prev_it  ;
    struct sMemHeaderTiny* next_it  ;
    size_t size;
    if(mem) {
        it=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
        if(it->allocated!=177783) {
            return;
        }
        it->allocated=0;
        prev_it=it->prev;
        next_it=it->next;
        if(gAllocMem==it) {
            gAllocMem=next_it;
            if(gAllocMem) {
                gAllocMem->prev=((void*)0);
            }
        }
        else {
            if(prev_it) {
                prev_it->next=next_it;
            }
            if(next_it) {
                next_it->prev=prev_it;
            }
        }
        size=it->size;
        free(it);
        gNumFree++;
    }
}

void* come_alloc_mem_from_heap_pool(size_t size, char* sname, int sline, char* class_name)
{
    size_t size2;
    void* result;
    struct sMemHeaderTiny* it  ;
    void* __result_obj__0;
    size2=size+sizeof(struct sMemHeaderTiny);
    size2=(size2+3&~0x3);
    result=alloc_from_pages(size2);
    it=result;
    it->allocated=177783;
    it->class_name=class_name;
    it->sname=sname;
    it->sline=sline;
    it->size=size2;
    it->free_next=((void*)0);
    it->next=(struct sMemHeaderTiny*)gAllocMem;
    it->prev=((void*)0);
    if(gAllocMem) {
        ((struct sMemHeaderTiny*)gAllocMem)->prev=it;
    }
    gAllocMem=it;
    gNumAlloc++;
    __result_obj__0 = (char*)result+sizeof(struct sMemHeaderTiny);
    return __result_obj__0;
}

char* come_dynamic_typeof(void* mem)
{
    struct sMemHeaderTiny* it  ;
    char* __result_obj__0;
    it=(struct sMemHeaderTiny*)((char*)mem-sizeof(size_t)-sizeof(size_t)-sizeof(struct sMemHeaderTiny));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(2)\n",it);
        exit(2);
    }
    __result_obj__0 = it->class_name;
    return __result_obj__0;
}

void* come_calloc(size_t count, size_t size, char* sname, int sline, char* class_name)
{
    char* mem;
    size_t* ref_count;
    size_t* size2;
    void* __result_obj__0;
    mem=come_alloc_mem_from_heap_pool(sizeof(size_t)+sizeof(size_t)+count*size,sname,sline,class_name);
    ref_count=(size_t*)mem;
    *ref_count=0;
    size2=(size_t*)(mem+sizeof(size_t));
    *size2=size*count+sizeof(size_t)+sizeof(size_t);
    __result_obj__0 = mem+sizeof(size_t)+sizeof(size_t);
    return __result_obj__0;
}

void come_free(void* mem)
{
    size_t* ref_count;
    if(mem==((void*)0)) {
        return;
    }
    ref_count=(size_t*)((char*)mem-sizeof(size_t)-sizeof(size_t));
    come_free_mem_of_heap_pool((char*)ref_count);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name)
{
    void* __result_obj__0;
    char* mem;
    size_t* size_p;
    size_t size;
    void* result;
    if(!block) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    mem=(char*)block-sizeof(size_t)-sizeof(size_t);
    size_p=(size_t*)(mem+sizeof(size_t));
    size=*size_p-sizeof(size_t)-sizeof(size_t);
    result=come_calloc_v2(1,size,sname,sline,class_name);
    memcpy(result,block,size);
    __result_obj__0 = result;
    return __result_obj__0;
}

void* come_increment_ref_count(void* mem)
{
    void* __result_obj__0;
    size_t* ref_count;
    if(mem==((void*)0)) {
        __result_obj__0 = mem;
        return __result_obj__0;
    }
    ref_count=(size_t*)((char*)mem-sizeof(size_t)-sizeof(size_t));
    (*ref_count)++;
    __result_obj__0 = mem;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    void* __result_obj__0;
    size_t* ref_count;
    if(mem==((void*)0)) {
        __result_obj__0 = mem;
        return __result_obj__0;
    }
    ref_count=(size_t*)((char*)mem-sizeof(size_t)-sizeof(size_t));
    printf("ref_count %ld\n",*ref_count);
    __result_obj__0 = mem;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    size_t* ref_count;
    if(mem==((void*)0)) {
        return 0;
    }
    ref_count=(size_t*)((char*)mem-sizeof(size_t)-sizeof(size_t));
    return *ref_count;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj)
{
    void* __result_obj__0;
    long* ref_count;
    long count;
    void (*finalizer)(void*);
    if(result_obj) {
        if(mem==result_obj) {
            __result_obj__0 = mem;
            return __result_obj__0;
        }
    }
    if(mem==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    ref_count=(long*)((char*)mem-sizeof(size_t)-sizeof(size_t));
    if(!no_decrement) {
        (*ref_count)--;
    }
    count=*ref_count;
    if(!no_free&&count<=0) {
        if(protocol_obj&&protocol_fun) {
            finalizer=protocol_fun;
            finalizer(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    __result_obj__0 = mem;
    return __result_obj__0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj)
{
    void (*finalizer)(void*);
    void (*finalizer_4)(void*);
    void (*finalizer_5)(void*);
    long* ref_count;
    long count;
    void (*finalizer_6)(void*);
    void (*finalizer_7)(void*);
    void (*finalizer_8)(void*);
    if(result_obj) {
        if(mem==result_obj) {
            return;
        }
    }
    if(mem==((void*)0)) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer=protocol_fun;
                finalizer(protocol_obj);
            }
            finalizer_4=fun;
            finalizer_4(mem);
        }
        else {
            if(protocol_obj&&protocol_fun) {
                finalizer_5=protocol_fun;
                finalizer_5(protocol_obj);
            }
        }
    }
    else {
        ref_count=(long*)((char*)mem-sizeof(size_t)-sizeof(size_t));
        if(!no_decrement) {
            (*ref_count)--;
        }
        count=*ref_count;
        if(!no_free&&count<=0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_6=protocol_fun;
                        finalizer_6(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(fun) {
                        finalizer_7=fun;
                        finalizer_7(mem);
                    }
                }
                else {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_8=protocol_fun;
                        finalizer_8(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

void xassert(char* msg, _Bool test)
{
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

char* __builtin_string(char* str)
{
    char* __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    char* result;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str)+1;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len)), "/usr/local/include/neo-c.h", 784, "char*"));
    strncpy(result,str,len);
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void come_push_stackframe_v2(char* sname, int sline, int id)
{
    come_push_stackframe(sname,sline,id);
}

void come_pop_stackframe_v2()
{
    come_pop_stackframe();
}

void come_save_stackframe_v2(char* sname, int sline)
{
    come_save_stackframe(sname,sline);
}

void stackframe_v2()
{
    stackframe();
}

char* come_get_stackframe_v2()
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=come_get_stackframe())));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void* come_calloc_v2(size_t count, size_t size, char* sname, int sline, char* class_name)
{
    void* __result_obj__0;
    __result_obj__0 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__0;
}

void come_free_v2(void* mem)
{
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self  )
{
    void* __right_value0 = (void*)0;
    char* __dec_obj5;
    struct buffer* __result_obj__0  ;
    self->size=128;
    __dec_obj5=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3127, "char*"));
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__0 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* buffer_initialize_with_value(struct buffer* self  , char* mem, size_t size)
{
    void* __right_value0 = (void*)0;
    char* __dec_obj6;
    struct buffer* __result_obj__0  ;
    self->size=128;
    __dec_obj6=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3137, "char*"));
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void buffer_finalize(struct buffer* self  )
{
    if(self&&self->buf) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self  )
{
    struct buffer* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer* result  ;
    char* __dec_obj7;
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3157, "struct buffer*"));
    result->size=self->size;
    __dec_obj7=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3160, "char*"));
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0);
    result->len=self->len;
    memcpy(result->buf,self->buf,self->len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer* left  , struct buffer* right  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool __result_obj__0;
    if(left==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        return 0;
    }
    __result_obj__0 = string_equals(((char*)(__right_value0=buffer_to_string(left))),((char*)(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    return __result_obj__0;
}

int buffer_length(struct buffer* self  )
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self  )
{
    if(self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self  , int len)
{
    if(self==((void*)0)) {
        return;
    }
    self->len-=len;
    if(self->len>=0) {
        self->buf[self->len]=0;
    }
    else {
        self->len=0;
        self->buf[0]=0;
    }
}

struct buffer* buffer_append(struct buffer* self  , char* mem, size_t size)
{
    struct buffer* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj8;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3217, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3222, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_char(struct buffer* self  , char c)
{
    struct buffer* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj9;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    if(self->len+1+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3241, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+10+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3246, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_str(struct buffer* self  , char* mem)
{
    struct buffer* __result_obj__0  ;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj10;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3268, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3272, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_format(struct buffer* self  , char* msg, ...)
{
    struct buffer* __result_obj__0  ;
    __builtin_va_list args  ;
    int len;
    void* __right_value0 = (void*)0;
    char* mem  ;
    int size;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj11;
    if(self==((void*)0)||msg==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    char result[128];
    __builtin_va_start(args,msg);
    vsnprintf(result,128,msg,args);
    __builtin_va_end(args);
    len=strlen(result);
    mem=(char*)come_increment_ref_count(__builtin_string(result));
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3305, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3309, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    free(result);
    __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self  , char* mem)
{
    struct buffer* __result_obj__0  ;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj12;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    size=strlen(mem)+1;
    if(self->len+size+1+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3372, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3376, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_int(struct buffer* self  , int value)
{
    struct buffer* __result_obj__0  ;
    int* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj13;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(int);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3399, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3403, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_long(struct buffer* self  , long value)
{
    struct buffer* __result_obj__0  ;
    long* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj14;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(long);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3425, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3429, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_short(struct buffer* self  , short value)
{
    struct buffer* __result_obj__0  ;
    short* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj15;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(short);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3452, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3456, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_alignment(struct buffer* self  )
{
    struct buffer* __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj16;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    len=self->len;
    len=(len+3)&~3;
    if(len>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3479, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+1+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3483, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    for(i=self->len;i<len;i++){
        self->buf[i]=0;
    }
    self->len=len;
    __result_obj__0 = self;
    return __result_obj__0;
}

int buffer_compare(struct buffer* left  , struct buffer* right  )
{
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(left==((void*)0)) {
        return -1;
    }
    else if(right==((void*)0)) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3515, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append_str(result,self);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* buffer_to_string(struct buffer* self  )
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self->buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer* self  )
{
    unsigned char* __result_obj__0;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    __result_obj__0 = self->buf;
    return __result_obj__0;
}

struct buffer* chara_to_buffer(char* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3545, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,self,sizeof(char)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* charpa_to_buffer(char** self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    int i;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3555, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    for(i=0;i<len;i++){
        buffer_append(result,self[i],strlen(self[i]));
    }
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* shorta_to_buffer(short* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3567, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(short)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* inta_to_buffer(int* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3577, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(int)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* longa_to_buffer(long* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3587, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(long)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* floata_to_buffer(float* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3597, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(float)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* doublea_to_buffer(double* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3607, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(double)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* buffer_printable(struct buffer* self  )
{
    int len;
    void* __right_value0 = (void*)0;
    char* result  ;
    char* __result_obj__0  ;
    int n;
    int i;
    unsigned char c;
    len=self->len;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/neo-c.h", 3618, "char*"));
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(result);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    n=0;
    for(i=0;i<len;i++){
        c=self->buf[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else if(c>127) {
            result[n++]=63;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    int i;
    struct list$1char$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1char$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_9;
    struct list_item$1char$* litem_10;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 985, "struct list_item$1char$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_9=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 995, "struct list_item$1char$*"))));
        litem_9->prev=self->head;
        litem_9->next=((void*)0);
        litem_9->item=item;
        self->tail=litem_9;
        self->head->next=litem_9;
    }
    else {
        litem_10=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1005, "struct list_item$1char$*"))));
        litem_10->prev=self->tail;
        litem_10->next=((void*)0);
        litem_10->item=item;
        self->tail->next=litem_10;
        self->tail=litem_10;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
}

struct list$1char$* chara_to_list(char* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
    __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/neo-c.h", 3666, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    int i;
    struct list$1char$p* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1char$p_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_11;
    struct list_item$1char$p* litem_12;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 985, "struct list_item$1char$p*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_11=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 995, "struct list_item$1char$p*"))));
        litem_11->prev=self->head;
        litem_11->next=((void*)0);
        litem_11->item=item;
        self->tail=litem_11;
        self->head->next=litem_11;
    }
    else {
        litem_12=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1005, "struct list_item$1char$p*"))));
        litem_12->prev=self->tail;
        litem_12->next=((void*)0);
        litem_12->item=item;
        self->tail->next=litem_12;
        self->tail=litem_12;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
}

struct list$1char$p* charpa_to_list(char** self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
    __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/neo-c.h", 3671, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    int i;
    struct list$1short$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1short$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_13;
    struct list_item$1short$* litem_14;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 985, "struct list_item$1short$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_13=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 995, "struct list_item$1short$*"))));
        litem_13->prev=self->head;
        litem_13->next=((void*)0);
        litem_13->item=item;
        self->tail=litem_13;
        self->head->next=litem_13;
    }
    else {
        litem_14=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1005, "struct list_item$1short$*"))));
        litem_14->prev=self->tail;
        litem_14->next=((void*)0);
        litem_14->item=item;
        self->tail->next=litem_14;
        self->tail=litem_14;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
}

struct list$1short$* shorta_to_list(short* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
    __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/neo-c.h", 3676, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    int i;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1int$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_15;
    struct list_item$1int$* litem_16;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 985, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_15=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 995, "struct list_item$1int$*"))));
        litem_15->prev=self->head;
        litem_15->next=((void*)0);
        litem_15->item=item;
        self->tail=litem_15;
        self->head->next=litem_15;
    }
    else {
        litem_16=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1005, "struct list_item$1int$*"))));
        litem_16->prev=self->tail;
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail->next=litem_16;
        self->tail=litem_16;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
}

struct list$1int$* inta_to_list(int* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 3681, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    int i;
    struct list$1long$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1long$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_17;
    struct list_item$1long$* litem_18;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 985, "struct list_item$1long$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_17=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 995, "struct list_item$1long$*"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1005, "struct list_item$1long$*"))));
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
}

struct list$1long$* longa_to_list(long* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
    __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/neo-c.h", 3686, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    int i;
    struct list$1float$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1float$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_19;
    struct list_item$1float$* litem_20;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 985, "struct list_item$1float$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_19=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 995, "struct list_item$1float$*"))));
        litem_19->prev=self->head;
        litem_19->next=((void*)0);
        litem_19->item=item;
        self->tail=litem_19;
        self->head->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1005, "struct list_item$1float$*"))));
        litem_20->prev=self->tail;
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail->next=litem_20;
        self->tail=litem_20;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
}

struct list$1float$* floata_to_list(float* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
    __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/neo-c.h", 3691, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    int i;
    struct list$1double$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1double$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_21;
    struct list_item$1double$* litem_22;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 985, "struct list_item$1double$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_21=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 995, "struct list_item$1double$*"))));
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        litem_21->item=item;
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1005, "struct list_item$1double$*"))));
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
}

struct list$1double$* doublea_to_list(double* self, size_t len)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
    __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/neo-c.h", 3696, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool bool_equals(_Bool self, _Bool right)
{
    return self==right;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    return self==right;
}

_Bool char_equals(char self, char right)
{
    return self==right;
}

_Bool short_equals(short self, short right)
{
    return self==right;
}

_Bool int_equals(int self, int right)
{
    return self==right;
}

_Bool long_equals(long self, long right)
{
    return self==right;
}

_Bool size_t_equals(size_t self, size_t right)
{
    return self==right;
}

_Bool float_equals(float self, float right)
{
    return self==right;
}

_Bool double_equals(double self, double right)
{
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right)
{
    return self==right;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    return self==right;
}

_Bool char_operator_equals(char self, char right)
{
    return self==right;
}

_Bool short_operator_equals(short self, short right)
{
    return self==right;
}

_Bool int_operator_equals(int self, int right)
{
    return self==right;
}

_Bool long_operator_equals(long self, long right)
{
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right)
{
    return !(self==right);
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right)
{
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right)
{
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right)
{
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right)
{
    return !(self==right);
}

_Bool charp_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right)
{
    return self==right;
}

_Bool boolp_equals(_Bool* self, _Bool* right)
{
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right)
{
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right)
{
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    if(self==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 3907, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_operator_add(char* self, char* right)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    if(self==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 3922, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_operator_mult(char* self, int right)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3935, "struct buffer*"))));
    for(i=0;i<right;i++){
        buffer_append_str(buf,self);
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_operator_mult(char* self, int right)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3949, "struct buffer*"))));
    for(i=0;i<right;i++){
        buffer_append_str(buf,self);
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool charpa_contained(char** self, size_t len, char* str)
{
    _Bool result;
    int i;
    result=0;
    if(self==((void*)0)) {
        return result;
    }
    for(i=0;i<len;i++){
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            result=1;
            break;
        }
    }
    return result;
}

size_t shorta_length(short* self, size_t len)
{
    size_t __result_obj__0;
    __result_obj__0 = len;
    return __result_obj__0;
}

size_t inta_length(int* self, size_t len)
{
    size_t __result_obj__0;
    __result_obj__0 = len;
    return __result_obj__0;
}

size_t longa_length(long* self, size_t len)
{
    size_t __result_obj__0;
    __result_obj__0 = len;
    return __result_obj__0;
}

size_t floata_length(float* self, size_t len)
{
    size_t __result_obj__0;
    __result_obj__0 = len;
    return __result_obj__0;
}

size_t doublea_length(double* self, size_t len)
{
    size_t __result_obj__0;
    __result_obj__0 = len;
    return __result_obj__0;
}

unsigned int bool_get_hash_key(_Bool value)
{
    return (int_get_hash_key(((int)value)));
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value)
{
    return value;
}

unsigned int short_get_hash_key(short int value)
{
    return value;
}

unsigned int int_get_hash_key(int value)
{
    return value;
}

unsigned int long_get_hash_key(long value)
{
    return value;
}

unsigned int size_t_get_hash_key(size_t value)
{
    return value;
}

unsigned int float_get_hash_key(float value)
{
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value)
{
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value)
{
    int result;
    char* p;
    if(value==((void*)0)) {
        return 0;
    }
    result=0;
    p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
    return result;
}

unsigned int string_get_hash_key(char* value)
{
    int result;
    char* p;
    if(value==((void*)0)) {
        return 0;
    }
    result=0;
    p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
    return result;
}

unsigned int voidp_get_hash_key(void* value)
{
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self)
{
    return self;
}

_Bool _Bool_clone(_Bool self)
{
    return self;
}

char char_clone(char self)
{
    return self;
}

short int short_clone(short self)
{
    return self;
}

int int_clone(int self)
{
    return self;
}

long  int long_clone(long self)
{
    return self;
}

size_t size_t_clone(size_t self)
{
    size_t __result_obj__0;
    __result_obj__0 = self;
    return __result_obj__0;
}

double double_clone(double self)
{
    return self;
}

float float_clone(float self)
{
    return self;
}

_Bool xisalpha(char c)
{
    _Bool result;
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result;
}

_Bool xisblank(char c)
{
    return c==32||c==9;
}

_Bool xisdigit(char c)
{
    return (c>=48&&c<=57);
}

_Bool xisspace(char c)
{
    return c==32||c==9||c==10||c==13||c==28||c==11;
}

_Bool xisalnum(char c)
{
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c)
{
    _Bool result;
    result=(c>=32&&c<=126);
    return result;
}

_Bool xispunct(char c)
{
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
}

int string_length(char* str)
{
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str)
{
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int chara_length(char* str)
{
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 4203, "char*"));
    for(i=0;i<len;i++){
        result[i]=str[len-i-1];
    }
    result[len]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_operator_load_range_element(char* str, int head, int tail)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value1=charp_reverse(((char*)(__right_value0=charp_substring(str,tail,head)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 4249, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_operator_load_range_element(char* str, int head, int tail)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value1=charp_reverse(((char*)(__right_value0=charp_substring(str,tail,head)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 4292, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_substring(char* str, int head, int tail)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value1=charp_reverse(((char*)(__right_value0=charp_substring(str,tail,head)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 4335, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xsprintf(char* msg, ...)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __builtin_va_list args  ;
    char* result;
    int len;
    char* result2  ;
    if(msg==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result2=(char*)come_increment_ref_count(__builtin_string(result));
    free(result);
    __result_obj__0 = (char*)come_increment_ref_count(result2);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_delete(char* str, int head, int tail)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head>=len) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(strcmp(str,"")==0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len-(tail-head)+1)), "/usr/local/include/neo-c.h", 4401, "char*"));
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    result[len-(tail-head)]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  )
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj17  ;
    struct list_item$1char$ph* litem_23;
    char* __dec_obj18  ;
    struct list_item$1char$ph* litem_24;
    char* __dec_obj19  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 985, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj17=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_23=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 995, "struct list_item$1char$ph*"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        __dec_obj18=litem_23->item,
        litem_23->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1005, "struct list_item$1char$ph*"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        __dec_obj19=litem_24->item,
        litem_24->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_split_char(char* self, char c)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer* str  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 4414, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 4417, "struct list$1char$ph*"))));
    str=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 4419, "struct buffer*"))));
    for(i=0;i<charp_length(self);i++){
        if(self[i]==c) {
            list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(str->buf)));
            buffer_reset(str);
        }
        else {
            buffer_append_char(str,self[i]);
        }
    }
    if(buffer_length(str)!=0) {
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(str->buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* charp_xsprintf(char* self, char* msg, ...)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf(msg,self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* int_xsprintf(int self, char* msg, ...)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf(msg,self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_printable(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result  ;
    int n;
    int i;
    char c;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=charp_length(str);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/neo-c.h", 4453, "char*"));
    n=0;
    for(i=0;i<len;i++){
        c=str[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* chara_printable(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_printable(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_sub_plain(char* self, char* str, char* replace)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    char* p;
    char* p2;
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 4486, "struct buffer*"))));
    p=self;
    while(1) {
        p2=strstr(p,str);
        if(p2==((void*)0)) {
            p2=p;
            while(*p2) {
                p2++;
            }
            buffer_append(result,p,p2-p);
            break;
        }
        buffer_append(result,p,p2-p);
        buffer_append_str(result,replace);
        p=p2+strlen(str);
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xbasename(char* path)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==47) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(path))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(p+1))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xnoextname(char* path)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* path2  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    path2=(char*)come_increment_ref_count(xbasename(path));
    p=path2+strlen(path2);
    while(p>=path2) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path2) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(path2))));
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_substring(path2,0,p-path2))));
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xextname(char* path)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(path))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(p+1))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* bool_to_string(_Bool self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("true"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("false"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
}

char* _Bool_to_string(_Bool self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("true"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("false"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
}

char* char_to_string(char self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%c",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* short_to_string(short self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%d",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* int_to_string(int self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%d",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* long_to_string(long self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%ld",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* size_t_to_string(size_t self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%ld",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* float_to_string(float self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%f",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* double_to_string(double self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%lf",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_to_string(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_to_string(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int bool_compare(_Bool left, _Bool right)
{
    if(!left&&right) {
        return -1;
    }
    else if(left&&right) {
        return 0;
    }
    else if(!left&&!right) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    if(!left&&right) {
        return -1;
    }
    else if(left&&right) {
        return 0;
    }
    else if(!left&&!right) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(size_t left, size_t right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right)
{
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(left==((void*)0)) {
        return -1;
    }
    else if(right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right)
{
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(left==((void*)0)) {
        return -1;
    }
    else if(right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

char* charp_puts(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    puts(self);
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_print(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    printf("%s",self);
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_printf(char* self, ...)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* msg2;
    __builtin_va_list args  ;
    int len;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    char msg2_25[128];
    __builtin_va_start(args,self);
    len=snprintf(msg2_25,128,self,args);
    __builtin_va_end(args);
    printf("%s",msg2_25);
    free(msg2_25);
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    if(self==((void*)0)) {
        return self;
    }
    printf(msg,self);
    return self;
}

long long_printf(long self, char* msg)
{
    if(self==((void*)0)) {
        return self;
    }
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    int i;
    for(i=0;i<self;i++){
        block(parent,i);
    }
}

static void match_context_finalize(struct anonymous_typeX6* self  )
{
}

int re_matchp_ex(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures, _Bool ignore_case)
{
    struct re_program* program  ;
    struct regex_t* start  ;
    struct anonymous_typeX6 ctx  ;
    int __result_obj__0;
    *matchlength=0;
    if(pattern==0) {
        return -1;
    }
    program=(struct re_program*)pattern;
    start=program->start;
    if(start==0) {
        return -1;
    }
    ctx.base=text;
    ctx.captures=(((captures!=0&&max_captures>0))?(captures):(0));
    ctx.capture_capacity=(((captures!=0&&max_captures>0))?(max_captures):(0));
    if(ctx.capture_capacity>64) {
        ctx.capture_capacity=64;
    }
    ctx.total_groups=program->group_count;
    ctx.ignore_case=ignore_case;
    if(ctx.captures!=0) {
        clear_captures(&ctx);
    }
    if(start->type==(2)) {
        const char* end=matchpattern(start->next,text,&ctx);
        if(end!=0) {
            *matchlength=(int)(end-text);
            if(ctx.captures!=0) {
            }
            __result_obj__0 = 0;
            come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
            return __result_obj__0;
        }
        __result_obj__0 = -1;
        come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        return __result_obj__0;
    }
    else {
        const char* cursor=text;
        while(1) {
            if(ctx.captures!=0) {
                clear_captures(&ctx);
            }
            const char* end_26=matchpattern(start,cursor,&ctx);
            if(end_26!=0) {
                if(*cursor==0&&cursor!=text) {
                    __result_obj__0 = -1;
                    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    return __result_obj__0;
                }
                *matchlength=(int)(end_26-cursor);
                __result_obj__0 = (int)(cursor-text);
                come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
                return __result_obj__0;
            }
            if(*cursor==0) {
                break;
            }
            cursor+=1;
        }
    }
    __result_obj__0 = -1;
    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    return __result_obj__0;
}

int re_matchp(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures)
{
    return re_matchp_ex(pattern,text,matchlength,captures,max_captures,0);
}

int re_match(const char* pattern, const char* text, int* matchlength)
{
    return re_matchp(re_compile(pattern),text,matchlength,(struct re_capture*)0,0);
}

static void regex_program_t_finalize(struct re_program* self  )
{
}

static void compiler_state_finalize(struct anonymous_typeX5* self  )
{
}

struct re_program* re_compile(const char* pattern)
{
    static struct re_program program  ;
    struct anonymous_typeX5 state  ;
    int pos;
    struct regex_t* head  ;
    struct re_program* __result_obj__0  ;
    static struct regex_t re_compiled[64]  ;
    static unsigned char ccl_buf[40];
    state.pool=re_compiled;
    state.pool_capacity=64;
    state.pool_size=0;
    state.ccl_buf=ccl_buf;
    state.ccl_capacity=40;
    state.ccl_idx=1;
    state.group_count=0;
    if(state.ccl_capacity>0) {
        state.ccl_buf[0]=0;
    }
    pos=0;
    head=compile_sequence(&state,pattern,&pos,0);
    if((head==0)||(pattern[pos]!=0)) {
        __result_obj__0 = ((void*)0);
        come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        return __result_obj__0;
    }
    program.start=head;
    program.group_count=state.group_count;
    __result_obj__0 = (struct re_program*)&program;
    come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    return __result_obj__0;
}

void re_print(struct re_program* pattern  )
{
    struct re_program* program  ;
    if(pattern==0) {
        return;
    }
    program=(struct re_program*)pattern;
    if(program->start==0) {
        return;
    }
    re_print_internal(program->start,0);
}

void clear_captures(struct anonymous_typeX6* ctx  )
{
    int i;
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        return;
    }
    for(i=0;i<ctx->capture_capacity;++i){
        ctx->captures[i].start=-1;
        ctx->captures[i].length=0;
    }
}

void snapshot_captures(const struct anonymous_typeX6* ctx  , struct re_capture* buffer_  )
{
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        return;
    }
    memcpy(buffer_,ctx->captures,sizeof(struct re_capture)*ctx->capture_capacity);
}

void restore_captures(struct anonymous_typeX6* ctx  , const struct re_capture* buffer_  )
{
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        return;
    }
    memcpy(ctx->captures,buffer_,sizeof(struct re_capture)*ctx->capture_capacity);
}

struct regex_t* new_token(struct anonymous_typeX5* st  )
{
    struct regex_t* __result_obj__0  ;
    struct regex_t* token  ;
    if(st->pool_size>=st->pool_capacity) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    token=&st->pool[st->pool_size++];
    token->type=(0);
    token->u.ccl=0;
    token->next=0;
    token->u.group.first=0;
    token->u.group.last=0;
    token->u.group.id=0;
    __result_obj__0 = token;
    return __result_obj__0;
}

int append_token(struct regex_t** head  , struct regex_t** tail  , struct regex_t* token  )
{
    if(token==0) {
        return 0;
    }
    if(*head==0) {
        *head=token;
    }
    else {
        (*tail)->next=token;
    }
    *tail=token;
    return 1;
}

struct regex_t* compile_sequence(struct anonymous_typeX5* st  , const char* pattern, int* pos, int in_group)
{
    struct regex_t* head  ;
    struct regex_t* tail  ;
    char c;
    struct regex_t* token  ;
    struct regex_t* __result_obj__0  ;
    int buf_begin;
    int negated;
    struct regex_t* inner  ;
    struct regex_t* tail_27  ;
    struct regex_t* sentinel  ;
    head=(struct regex_t*)0;
    tail=(struct regex_t*)0;
    while(pattern[*pos]!=0) {
        c=pattern[*pos];
        if(in_group&&(c==41)) {
            break;
        }
        token=(struct regex_t*)0;
        switch (        c) {
            case 94:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token->type=(2);
                (*pos)++;
            }
            break;
            case 36:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token->type=(3);
                (*pos)++;
            }
            break;
            case 46:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token->type=(1);
                (*pos)++;
            }
            break;
            case 42:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token->type=(5);
                (*pos)++;
            }
            break;
            case 43:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token->type=(6);
                (*pos)++;
            }
            break;
            case 63:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token->type=(4);
                (*pos)++;
            }
            break;
            case 92:
            {
                (*pos)++;
                if(pattern[*pos]==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                switch (                pattern[*pos]) {
                    case 100:
                    token->type=(10);
                    break;
                    case 68:
                    token->type=(11);
                    break;
                    case 119:
                    token->type=(12);
                    break;
                    case 87:
                    token->type=(13);
                    break;
                    case 115:
                    token->type=(14);
                    break;
                    case 83:
                    token->type=(15);
                    break;
                    default:
                    {
                        token->type=(7);
                        token->u.ch=(unsigned char)pattern[*pos];
                    }
                    break;
                }
                (*pos)++;
            }
            break;
            case 91:
            {
                buf_begin=st->ccl_idx;
                negated=0;
                (*pos)++;
                if(pattern[*pos]==94) {
                    negated=1;
                    (*pos)++;
                    if(pattern[*pos]==0) {
                        __result_obj__0 = ((void*)0);
                        return __result_obj__0;
                    }
                }
                if(pattern[*pos]==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                while((pattern[*pos]!=0)&&(pattern[*pos]!=93)) {
                    if(pattern[*pos]==92) {
                        if(st->ccl_idx>=(st->ccl_capacity-1)) {
                            __result_obj__0 = ((void*)0);
                            return __result_obj__0;
                        }
                        st->ccl_buf[st->ccl_idx++]=92;
                        (*pos)++;
                        if(pattern[*pos]==0) {
                            __result_obj__0 = ((void*)0);
                            return __result_obj__0;
                        }
                    }
                    if(st->ccl_idx>=st->ccl_capacity) {
                        __result_obj__0 = ((void*)0);
                        return __result_obj__0;
                    }
                    st->ccl_buf[st->ccl_idx++]=(unsigned char)pattern[*pos];
                    (*pos)++;
                }
                if(pattern[*pos]!=93) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                if(st->ccl_idx>=st->ccl_capacity) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                st->ccl_buf[st->ccl_idx++]=0;
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token->type=((negated)?((9)):((8)));
                token->u.ccl=&st->ccl_buf[buf_begin];
                (*pos)++;
            }
            break;
            case 40:
            {
                (*pos)++;
                inner=compile_sequence(st,pattern,pos,1);
                if(inner==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                if(pattern[*pos]!=41) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                tail_27=inner;
                while((tail_27!=0)&&(tail_27->type!=(0))) {
                    tail_27=tail_27->next;
                }
                if(tail_27==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token->type=(16);
                token->u.group.first=inner;
                token->u.group.last=tail_27;
                token->u.group.id=++st->group_count;
                tail_27->type=(17);
                tail_27->u.group.first=token;
                (*pos)++;
            }
            break;
            case 41:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token->type=(7);
                token->u.ch=(unsigned char)c;
                (*pos)++;
            }
            break;
            default:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    return __result_obj__0;
                }
                token->type=(7);
                token->u.ch=(unsigned char)c;
                (*pos)++;
            }
            break;
        }
        if(!append_token(&head,&tail,token)) {
            __result_obj__0 = ((void*)0);
            return __result_obj__0;
        }
    }
    sentinel=new_token(st);
    if(sentinel==0) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    sentinel->type=(0);
    sentinel->next=0;
    if(head==0) {
        head=sentinel;
    }
    else {
        tail->next=sentinel;
    }
    __result_obj__0 = head;
    return __result_obj__0;
}

const char* matchpattern(struct regex_t* pattern  , const char* text, struct anonymous_typeX6* ctx  )
{
    const char* __result_obj__0;
    struct regex_t* current  ;
    struct regex_t* next  ;
    struct regex_t* owner  ;
    int idx;
    int start;
    if(pattern==0) {
        __result_obj__0 = text;
        return __result_obj__0;
    }
    if(pattern->type==(0)) {
        __result_obj__0 = text;
        return __result_obj__0;
    }
    struct re_capture snapshot[64]  ;
    snapshot_captures(ctx,snapshot);
    current=pattern;
    const char* cursor=text;
    while(current!=0&&current->type!=(0)) {
        next=current->next;
        if(current->type==(17)) {
            owner=current->u.group.first;
            if((owner!=0)&&(owner->u.group.id>0)&&(ctx->captures!=0)) {
                idx=owner->u.group.id-1;
                if(idx<ctx->capture_capacity) {
                    start=ctx->captures[idx].start;
                    if(start>=0) {
                        ctx->captures[idx].length=(int)(cursor-ctx->base)-start;
                        if(ctx->captures[idx].length<0) {
                            ctx->captures[idx].length=0;
                        }
                    }
                }
            }
            current=current->next;
            continue;
        }
        if((next!=0)&&(next->type==(4))) {
            const char* result=matchquestion(current,next->next,cursor,ctx);
            if(result!=0) {
                __result_obj__0 = result;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            return __result_obj__0;
        }
        else if((next!=0)&&(next->type==(5))) {
            const char* result_28=matchstar(current,next->next,cursor,ctx);
            if(result_28!=0) {
                __result_obj__0 = result_28;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            return __result_obj__0;
        }
        else if((next!=0)&&(next->type==(6))) {
            const char* result_29=matchplus(current,next->next,cursor,ctx);
            if(result_29!=0) {
                __result_obj__0 = result_29;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            return __result_obj__0;
        }
        else if(current->type==(16)) {
            const char* result_30=matchgroup(current,next,cursor,ctx);
            if(result_30!=0) {
                __result_obj__0 = result_30;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            return __result_obj__0;
        }
        else if(current->type==(3)) {
            if(*cursor!=0) {
                restore_captures(ctx,snapshot);
                __result_obj__0 = ((void*)0);
                return __result_obj__0;
            }
            current=current->next;
        }
        else {
            const char* after=matchtoken(current,cursor,ctx);
            if(after==0) {
                restore_captures(ctx,snapshot);
                __result_obj__0 = ((void*)0);
                return __result_obj__0;
            }
            cursor=after;
            current=current->next;
        }
    }
    __result_obj__0 = cursor;
    return __result_obj__0;
}

const char* matchgroup(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX6* ctx  )
{
    struct regex_t* end_token  ;
    struct regex_t* saved_next  ;
    int idx;
    const char* __result_obj__0;
    struct re_capture snapshot_entry[64]  ;
    snapshot_captures(ctx,snapshot_entry);
    end_token=token->u.group.last;
    saved_next=((end_token!=0)?(end_token->next):(0));
    if(end_token!=0) {
        end_token->next=rest;
    }
    if(token->u.group.id>0&&ctx->captures!=0) {
        idx=token->u.group.id-1;
        if(idx<ctx->capture_capacity) {
            ctx->captures[idx].start=(int)(text-ctx->base);
            ctx->captures[idx].length=0;
        }
    }
    const char* result=matchpattern(token->u.group.first,text,ctx);
    if(end_token!=0) {
        end_token->next=saved_next;
    }
    if(result==0) {
        restore_captures(ctx,snapshot_entry);
    }
    __result_obj__0 = result;
    return __result_obj__0;
}

const char* matchstar(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX6* ctx  )
{
    const char* __result_obj__0;
    struct re_capture snapshot_entry[64]  ;
    snapshot_captures(ctx,snapshot_entry);
    const char* consume=matchtoken(token,text,ctx);
    while((consume!=0)&&(consume!=text)) {
        struct re_capture snapshot_after_token[64]  ;
        snapshot_captures(ctx,snapshot_after_token);
        const char* recursive=matchstar(token,rest,consume,ctx);
        if(recursive!=0) {
            __result_obj__0 = recursive;
            return __result_obj__0;
        }
        restore_captures(ctx,snapshot_after_token);
        consume=matchtoken(token,consume,ctx);
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = matchpattern(rest,text,ctx);
    return __result_obj__0;
}

const char* matchplus(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX6* ctx  )
{
    const char* __result_obj__0;
    struct re_capture snapshot_entry[64]  ;
    snapshot_captures(ctx,snapshot_entry);
    const char* first=matchtoken(token,text,ctx);
    if((first==0)||(first==text)) {
        restore_captures(ctx,snapshot_entry);
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    const char* result=matchstar(token,rest,first,ctx);
    if(result!=0) {
        __result_obj__0 = result;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = ((void*)0);
    return __result_obj__0;
}

const char* matchquestion(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX6* ctx  )
{
    const char* __result_obj__0;
    struct re_capture snapshot_entry[64]  ;
    snapshot_captures(ctx,snapshot_entry);
    const char* skipped=matchpattern(rest,text,ctx);
    if(skipped!=0) {
        __result_obj__0 = skipped;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    const char* consumed=matchtoken(token,text,ctx);
    if((consumed==0)||(consumed==text)) {
        restore_captures(ctx,snapshot_entry);
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    const char* with=matchpattern(rest,consumed,ctx);
    if(with!=0) {
        __result_obj__0 = with;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = ((void*)0);
    return __result_obj__0;
}

unsigned char re_fold_char(unsigned char c, _Bool ignore_case)
{
    if(ignore_case&&c>=65&&c<=90) {
        return (unsigned char)(c-65+97);
    }
    return c;
}

const char* matchtoken(struct regex_t* token  , const char* text, struct anonymous_typeX6* ctx  )
{
    const char* __result_obj__0;
    switch (    token->type) {
        case (1):
        __result_obj__0 = (((*text!=0&&matchdot(*text)))?(text+1):(0));
        return __result_obj__0;
        case (7):
        __result_obj__0 = (((*text!=0&&re_fold_char(token->u.ch,ctx->ignore_case)==re_fold_char((unsigned char)*text,ctx->ignore_case)))?(text+1):(0));
        return __result_obj__0;
        case (8):
        __result_obj__0 = (((*text!=0&&matchcharclass(*text,(const char*)token->u.ccl,ctx->ignore_case)))?(text+1):(0));
        return __result_obj__0;
        case (9):
        __result_obj__0 = (((*text!=0&&!matchcharclass(*text,(const char*)token->u.ccl,ctx->ignore_case)))?(text+1):(0));
        return __result_obj__0;
        case (10):
        __result_obj__0 = (((*text!=0&&matchdigit(*text)))?(text+1):(0));
        return __result_obj__0;
        case (11):
        __result_obj__0 = (((*text!=0&&!matchdigit(*text)))?(text+1):(0));
        return __result_obj__0;
        case (12):
        __result_obj__0 = (((*text!=0&&matchalphanum(*text)))?(text+1):(0));
        return __result_obj__0;
        case (13):
        __result_obj__0 = (((*text!=0&&!matchalphanum(*text)))?(text+1):(0));
        return __result_obj__0;
        case (14):
        __result_obj__0 = (((*text!=0&&matchwhitespace(*text)))?(text+1):(0));
        return __result_obj__0;
        case (15):
        __result_obj__0 = (((*text!=0&&!matchwhitespace(*text)))?(text+1):(0));
        return __result_obj__0;
        case (16):
        __result_obj__0 = matchgroup(token,(struct regex_t*)0,text,ctx);
        return __result_obj__0;
        case (2):
        __result_obj__0 = (((text==ctx->base))?(text):(0));
        return __result_obj__0;
        case (3):
        __result_obj__0 = (((*text==0))?(text):(0));
        return __result_obj__0;
        default:
        break;
    }
    __result_obj__0 = (const char*)0;
    return __result_obj__0;
}

int matchdigit(char c)
{
    return xisdigit((unsigned char)c);
}

int matchalpha(char c)
{
    return xisalpha((unsigned char)c);
}

int matchwhitespace(char c)
{
    return xisspace((unsigned char)c);
}

int matchalphanum(char c)
{
    return ((c==95)||matchalpha(c)||matchdigit(c));
}

int matchrange(char c, const char* str, _Bool ignore_case)
{
    unsigned char needle;
    unsigned char start;
    unsigned char end;
    needle=(unsigned char)c;
    start=(unsigned char)str[0];
    end=(unsigned char)str[2];
    if(ignore_case) {
        needle=re_fold_char(needle,1);
        start=re_fold_char(start,1);
        end=re_fold_char(end,1);
    }
    return ((needle!=45)&&(str[0]!=0)&&(str[0]!=45)&&(str[1]==45)&&(str[2]!=0)&&((needle>=start)&&(needle<=end)));
}

int matchdot(char c)
{
    return c!=10&&c!=13;
}

int ismetachar(char c)
{
    return ((c==115)||(c==83)||(c==119)||(c==87)||(c==100)||(c==68));
}

int matchmetachar(char c, const char* str)
{
    switch (    str[0]) {
        case 100:
        return matchdigit(c);
        case 68:
        return !matchdigit(c);
        case 119:
        return matchalphanum(c);
        case 87:
        return !matchalphanum(c);
        case 115:
        return matchwhitespace(c);
        case 83:
        return !matchwhitespace(c);
        default:
        return (c==str[0]);
    }
}

int matchcharclass(char c, const char* str, _Bool ignore_case)
{
    unsigned char needle;
    needle=re_fold_char((unsigned char)c,ignore_case);
    do {
        if(matchrange((char)needle,str,ignore_case)) {
            return 1;
        }
        else if(str[0]==92) {
            str+=1;
            if(matchmetachar((char)needle,str)) {
                return 1;
            }
            else if((needle==re_fold_char((unsigned char)str[0],ignore_case))&&!ismetachar((char)needle)) {
                return 1;
            }
        }
        else if(needle==re_fold_char((unsigned char)str[0],ignore_case)) {
            if(needle==45) {
                return ((str[-1]==0)||(str[1]==0));
            }
            else {
                return 1;
            }
        }
    } while(*str++!=0);
    return 0;
}

void re_print_internal(struct regex_t* pattern  , int depth)
{
    int i;
    const char* types[]={
    "RE_UNUSED", "RE_DOT", "RE_BEGIN", "RE_END", "RE_QUESTIONMARK", "RE_STAR", "RE_PLUS", "RE_CHAR",
    "RE_CHAR_CLASS", "RE_INV_CHAR_CLASS", "RE_DIGIT", "RE_NOT_DIGIT", "RE_ALPHA", "RE_NOT_ALPHA",
    "RE_WHITESPACE", "RE_NOT_WHITESPACE", "RE_GROUP", "RE_GROUP_END"
  };
    while(pattern!=0&&pattern->type!=(0)) {
        for(i=0;i<depth;++i){
            putchar(32);
        }
        printf("type: %s",types[pattern->type]);
        if((pattern->type==(8))||(pattern->type==(9))) {
            printf(" [");
            const unsigned char* ccl=pattern->u.ccl;
            while(*ccl!=0&&*ccl!=93) {
                printf("%c",*ccl);
                ++ccl;
            }
            printf("]");
        }
        else if(pattern->type==(7)) {
            printf(" '%c'",pattern->u.ch);
        }
        else if(pattern->type==(16)) {
            printf(" id=%d\n",pattern->u.group.id);
            re_print_internal(pattern->u.group.first,depth+2);
            pattern=pattern->next;
            continue;
        }
        printf("\n");
        pattern=pattern->next;
    }
}

int re_get_group_count(struct re_program* pattern  )
{
    struct re_program* program  ;
    if(pattern==0) {
        return 0;
    }
    program=(struct re_program*)pattern;
    return program->group_count;
}

char* string_lower_case(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count(__builtin_string(str));
    for(i=0;i<strlen(str);i++){
        if(str[i]>=65&&str[i]<=90) {
            result[i]=str[i]-65+97;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_upper_case(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count(__builtin_string(str));
    for(i=0;i<strlen(str);i++){
        if(str[i]>=97&&str[i]<=122) {
            result[i]=str[i]-97+65;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int charp_index_regex(char* self, char* reg, int default_value, _Bool ignore_case)
{
    struct re_program* re  ;
    int result;
    int offset;
    int n;
    int result_31;
    int matchlength;
    int max_captures;
    int regex_result;
    if(self==((void*)0)||reg==((void*)0)) {
        return default_value;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        return default_value;
    }
    result=default_value;
    offset=0;
    n=0;
    result_31=default_value;
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        regex_result=re_matchp_ex(re,self,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0) {
            result_31=regex_result;
            break;
        }
        {
            break;
        }
    }
    return result_31;
}

int charp_rindex(char* str, char* search_str, int default_value)
{
    int len;
    char* p;
    if(str==((void*)0)||search_str==((void*)0)) {
        return default_value;
    }
    len=strlen(search_str);
    p=str+strlen(str)-len;
    while(p>=str) {
        if(strncmp(p,search_str,len)==0) {
            return p-str;
        }
        p--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, char* reg, int default_value, _Bool ignore_case)
{
    struct re_program* re  ;
    int result;
    int offset;
    int n;
    void* __right_value0 = (void*)0;
    char* self2  ;
    int result_32;
    int matchlength;
    int max_captures;
    int regex_result;
    int __result_obj__0;
    if(self==((void*)0)||reg==((void*)0)) {
        return default_value;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        return default_value;
    }
    result=default_value;
    offset=0;
    n=0;
    self2=(char*)come_increment_ref_count(charp_reverse(self));
    result_32=default_value;
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        regex_result=re_matchp_ex(re,self2,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0) {
            result_32=strlen(self)-matchlength;
            break;
        }
        {
            break;
        }
    }
    __result_obj__0 = result_32;
    (self2 = come_decrement_ref_count(self2, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

char* charp_strip(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    int len;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count(__builtin_string(self));
    len=strlen(self);
    if(self[len-1]==10) {
        result[len-1]=0;
    }
    else if(self[len-1]==13) {
        result[len-1]=0;
    }
    else if(len>2&&self[len-2]==13&&self[len-1]==10) {
        result[len-2]=0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int charp_index(char* str, char* search_str, int default_value)
{
    char* head;
    if(str==((void*)0)||search_str==((void*)0)) {
        return default_value;
    }
    head=strstr(str,search_str);
    if(head==((void*)0)) {
        return default_value;
    }
    return head-str;
}

char* string_chomp(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count(__builtin_string(str));
    if(result[string_length(result)-1]==10) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_substring(result,0,-2))));
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_replace(char* self, int index, char c)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self);
    if(strcmp(self,"")==0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(index<0) {
        index+=len;
    }
    if(index>=len) {
        index=len-1;
    }
    if(index<0) {
        index=0;
    }
    self[index]=c;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_multiply(char* str, int n)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str)*n+1;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len)), "/usr/local/include/neo-c.h", 6187, "char*"));
    result[0]=0;
    for(i=0;i<n;i++){
        strncat(result,str,len);
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_split_str(char* self, char* str)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer* buf  ;
    int i;
    if(self==((void*)0)||str==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6201, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6204, "struct list$1char$ph*"))));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 6206, "struct buffer*"))));
    for(i=0;i<charp_length(self);i++){
        if(strstr(self+i,str)==self+i) {
            list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(buf->buf)));
            buffer_reset(buf);
            i+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf,self[i]);
        }
    }
    if(buffer_length(buf)!=0) {
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(buf->buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

int string_rindex(char* str, char* search_str, int default_value)
{
    return charp_rindex(str,search_str,default_value);
}

int string_rindex_regex(char* self, char* reg, int default_value, _Bool ignore_case)
{
    return charp_rindex_regex(self,reg,default_value,ignore_case);
}

char* string_strip(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_strip(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int string_index(char* str, char* search_str, int default_value)
{
    return charp_index(str,search_str,default_value);
}

int string_index_regex(char* self, char* reg, int default_value, _Bool ignore_case)
{
    return charp_index_regex(self,reg,default_value,ignore_case);
}

char* string_replace(char* self, int index, char c)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_replace(self,index,c))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_multiply(char* str, int n)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool charp_match(char* self, char* reg, _Bool ignore_case)
{
    struct re_program* re  ;
    int offset;
    int n;
    int matchlength;
    int max_captures;
    int regex_result;
    _Bool __result_obj__0;
    if(self==((void*)0)||reg==((void*)0)) {
        return 0;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        return 0;
    }
    offset=0;
    n=0;
    matchlength=0;
    max_captures=8;
    struct re_capture captures[max_captures]  ;
    regex_result=re_matchp_ex(re,self,&matchlength,captures,max_captures,ignore_case);
    if(regex_result>=0) {
        __result_obj__0 = 1;
        return __result_obj__0;
    }
    else {
        __result_obj__0 = 0;
        return __result_obj__0;
    }
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item  )
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj20  ;
    struct list_item$1char$ph* litem_33;
    char* __dec_obj21  ;
    struct list_item$1char$ph* litem_34;
    char* __dec_obj22  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 900, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj20=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_33=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 910, "struct list_item$1char$ph*"))));
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        __dec_obj21=litem_33->item,
        litem_33->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 920, "struct list_item$1char$ph*"))));
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        __dec_obj22=litem_34->item,
        litem_34->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_scan(char* self, char* reg, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program* re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char* str  ;
    int i;
    struct re_capture cp  ;
    char* match_string  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6296, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6298, "struct list$1char$ph*"))));
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6303, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            list$1char$ph_add(result,(char*)come_increment_ref_count(str));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(regex_result>=0&&group_count>0) {
            for(i=0;i<group_count;i++){
                cp=captures[i];
                match_string=(char*)come_increment_ref_count(charp_substring((self+offset),cp.start,cp.start+cp.length));
                list$1char$ph_push_back(result,(char*)come_increment_ref_count(match_string));
                (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
        }
        else {
            break;
        }
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct list$1char$ph* charp_split(char* self, char* reg, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program* re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char* str  ;
    char* str_35  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6359, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6362, "struct list$1char$ph*"))));
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6367, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            list$1char$ph_add(result,(char*)come_increment_ref_count(str));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    if(offset<charp_length(self)) {
        str_35=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(str_35));
        (str_35 = come_decrement_ref_count(str_35, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* string_sub(char* self, char* reg, char* replace, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_sub(self,reg,replace,1,ignore_case))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* string_split_str(char* self, char* str)
{
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_split_str(self,str))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct list$1char$ph* string_scan(char* self, char* reg, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_scan(self,reg,ignore_case))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct list$1char$ph* string_split(char* self, char* reg, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_split(self,reg,ignore_case))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool string_match(char* self, char* reg, _Bool ignore_case)
{
    return charp_match(self,reg,ignore_case);
}

char* charp_sub(char* self, char* reg, char* replace, _Bool global, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    struct re_program* re  ;
    int offset;
    int n;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char* str  ;
    char* str_36  ;
    char* str_37  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    offset=0;
    n=0;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 6452, "struct buffer*"))));
    group_count=re_get_group_count(re);
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            buffer_append_str(result,str);
            buffer_append_str(result,replace);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            if(!global) {
                str_36=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
                buffer_append_str(result,str_36);
                (str_36 = come_decrement_ref_count(str_36, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (str_36 = come_decrement_ref_count(str_36, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_37=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
            buffer_append_str(result,str_37);
            (str_37 = come_decrement_ref_count(str_37, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_37 = come_decrement_ref_count(str_37, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_sub_block(char* self, char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct re_program* re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char* str  ;
    struct list$1char$ph* group_strings;
    char* match_string  ;
    char* block_result  ;
    char* str_38  ;
    char* str_39  ;
    struct list$1char$ph* group_strings_40;
    int i;
    struct re_capture cp  ;
    char* match_string_41  ;
    char* match_string_42  ;
    char* block_result_43  ;
    char* str_44  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 6500, "struct buffer*"))));
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            buffer_append_str(result,str);
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6527, "struct list$1char$ph*"))));
            match_string=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            buffer_append_str(result,block_result);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            if(!global) {
                str_38=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
                buffer_append_str(result,str_38);
                (str_38 = come_decrement_ref_count(str_38, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
                (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (str_38 = come_decrement_ref_count(str_38, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(regex_result>=0&&group_count>0) {
            str_39=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            buffer_append_str(result,str_39);
            group_strings_40=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6555, "struct list$1char$ph*"))));
            for(i=0;i<group_count;i++){
                cp=captures[i];
                match_string_41=(char*)come_increment_ref_count(charp_substring((self+offset),cp.start,cp.start+cp.length));
                list$1char$ph_push_back(group_strings_40,(char*)come_increment_ref_count(match_string_41));
                (match_string_41 = come_decrement_ref_count(match_string_41, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_42=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result_43=(char*)come_increment_ref_count(block(parent,match_string_42,group_strings_40));
            buffer_append_str(result,block_result_43);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str_39 = come_decrement_ref_count(str_39, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_42 = come_decrement_ref_count(match_string_42, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_43 = come_decrement_ref_count(block_result_43, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_44=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
            buffer_append_str(result,str_44);
            (str_44 = come_decrement_ref_count(str_44, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_44 = come_decrement_ref_count(str_44, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_scan_block(char* self, char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program* re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    struct list$1char$ph* group_strings;
    char* match_string  ;
    char* block_result  ;
    struct list$1char$ph* group_strings_45;
    int i;
    struct re_capture cp  ;
    char* match_string_46  ;
    char* match_string_47  ;
    char* block_result_48  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6589, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6591, "struct list$1char$ph*"))));
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6596, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6614, "struct list$1char$ph*"))));
            match_string=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            list$1char$ph_add(result,(char*)come_increment_ref_count(block_result));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(regex_result>=0&&group_count>0) {
            group_strings_45=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6631, "struct list$1char$ph*"))));
            for(i=0;i<group_count;i++){
                cp=captures[i];
                match_string_46=(char*)come_increment_ref_count(charp_substring((self+offset),cp.start,cp.start+cp.length));
                list$1char$ph_push_back(group_strings_45,(char*)come_increment_ref_count(match_string_46));
                (match_string_46 = come_decrement_ref_count(match_string_46, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_47=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result_48=(char*)come_increment_ref_count(block(parent,match_string_47,group_strings_45));
            list$1char$ph_add(result,(char*)come_increment_ref_count(block_result_48));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_47 = come_decrement_ref_count(match_string_47, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_48 = come_decrement_ref_count(block_result_48, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* string_sub_block(char* self, char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_sub_block(self,reg,global,ignore_case,parent,block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

