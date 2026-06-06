/// c_include definition ///
#ifndef __BAREMETAL__
#define __BAREMETAL__ 1
#endif

#ifndef __NEO_MICRO__
#define __NEO_MICRO__ 1
#endif


extern int errno;
extern void putchar(char c);

#ifndef NEO_MICRO_HEAP_SIZE
#define NEO_MICRO_HEAP_SIZE (64 * 1024)
#endif

static unsigned char __neo_micro_heap[NEO_MICRO_HEAP_SIZE];
static unsigned long __neo_micro_brk_offset = 0;

unsigned long brk(unsigned long addr)
{
    unsigned long base = (unsigned long)__neo_micro_heap;
    unsigned long limit = base + (unsigned long)NEO_MICRO_HEAP_SIZE;
    unsigned long request = (unsigned long)addr;

    if(addr == 0) {
        return base + __neo_micro_brk_offset;
    }
    if(request < base || request > limit) {
        errno = 12;
        return (unsigned long)-1;
    }

    __neo_micro_brk_offset = request - base;
    return addr;
}

void exit(int status)
{
    (void)status;
    for(;;) {
    }
}

/// typedef definition ///
typedef unsigned long size_t;

typedef __builtin_va_list __gnuc_va_list;

typedef char* string;

typedef __builtin_va_list va_list;

typedef unsigned long  long    ;

typedef long ptrdiff_t;

typedef unsigned long  int uintptr_t;

typedef long intptr_t;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef int wchar_t;

typedef _Bool bool;

typedef struct anonymous_typeX1 glob_t;

typedef struct mem_block  mem_block_t  ;

typedef struct anonymous_typeX2 __buf_ctx_t;

typedef struct anonymous_typeX3 __str_ctx_t;

typedef struct anonymous_typeX4 __fmt_out_t;

typedef int*  wstring  ;

typedef int  ER  ;

typedef int  ID  ;

typedef int  PRI  ;

typedef unsigned int  ATR  ;

typedef unsigned int  RELTIM  ;

typedef unsigned int  FLGPTN  ;

typedef long  INTEXINF  ;

typedef void (*FP)(long );

typedef struct anonymous_typeX5 T_CTSK;

typedef struct anonymous_typeX6 T_CSEM;

typedef struct anonymous_typeX7 T_CFLG;

typedef struct T_MSG  T_MSG  ;

typedef struct anonymous_typeX8 T_CMBX;

typedef enum anonymous_typeY9 task_state_t;

typedef struct anonymous_typeX10 tcb_t;

typedef struct anonymous_typeX11 sem_t;

typedef struct anonymous_typeX12 flg_t;

typedef struct anonymous_typeX13 mbx_t;

typedef struct anonymous_typeX14 demo_msg_t;

/// previous struct definition ///
/// struct definition ///
struct anonymous_typeX1
{
    unsigned long  gl_pathc  ;
    char** gl_pathv;
};

struct mem_block
{
    unsigned long  size  ;
    struct mem_block*  next  ;
};

enum  arg_kind { ARG_KIND_LIT=(1),
ARG_KIND_FILE=(2),
ARG_KIND_END=(3)
};

struct arg_hdr
{
    enum arg_kind  kind  ;
    const char* shortopts;
    const char* longopts;
    const char* datatype;
    const char* glossary;
    int mincount;
    int maxcount;
};

struct arg_lit
{
    struct arg_hdr  hdr  ;
    int count;
};

struct arg_file
{
    struct arg_hdr  hdr  ;
    int count;
    const char** filename;
};

struct arg_error
{
    const char* msg;
    const char* argval;
    const struct arg_hdr*  hdr  ;
};

struct arg_end
{
    struct arg_hdr  hdr  ;
    int count;
    int maxerrors;
    struct arg_error*  errors  ;
};

struct anonymous_typeX2
{
    char* p;
    unsigned long  int rem;
};

struct anonymous_typeX3
{
    char* p;
};

struct anonymous_typeX4
{
    int mode;
    void* ctx;
    int count;
};

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct neo_frame
{
    struct neo_frame*  prev  ;
    char* fun_name;
    unsigned long  int frame_id;
};

struct sMemHeader
{
    long size;
    long compiletime_size;
    long alloc_size;
    int allocated;
    int alive;
    struct sMemHeader*  next  ;
    struct sMemHeader*  prev  ;
    struct sMemHeader*  free_next  ;
    char* fun_name[8];
    const char* class_name;
    const char* sname;
    int sline;
    int id;
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
    char*  item  ;
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

struct anonymous_typeX5
{
    unsigned int  tskatr  ;
    long  exinf  ;
    void (*task)(long )  ;
    int  itskpri  ;
    void* stk;
    int  stksz  ;
};

struct anonymous_typeX6
{
    unsigned int  sematr  ;
    int  isemcnt  ;
    int  maxsem  ;
};

struct anonymous_typeX7
{
    unsigned int  flgatr  ;
    unsigned int  iflgptn  ;
};

struct T_MSG
{
    struct T_MSG*  next  ;
};

struct anonymous_typeX8
{
    unsigned int  mbxatr  ;
};

enum  anonymous_typeY9 { TS_DORMANT 
,TS_READY 
,TS_RUNNING 
,TS_EXITED 
};

struct anonymous_typeX10
{
    void (*task)(long )  ;
    long  exinf  ;
    int  pri  ;
    enum anonymous_typeY9  state  ;
};

struct anonymous_typeX11
{
    int  count  ;
    int  max  ;
    int used;
};

struct anonymous_typeX12
{
    unsigned int  pattern  ;
    int used;
};

struct anonymous_typeX13
{
    struct T_MSG*  head  ;
    struct T_MSG*  tail  ;
    int used;
};

struct anonymous_typeX14
{
    struct T_MSG  hdr  ;
    int value;
};

/// variable definition ///
extern int errno;

extern struct mem_block*  free_list  ;

extern unsigned long  int  __neo_sbrk_cur  ;

extern int __neo_sbrk_inited;

void (*__atexit_funcs[32])();
extern int __atexit_count;

extern char* __strtok_save;

extern struct neo_frame*  neo_current_frame  ;

extern unsigned long  int neo_frame_id;

extern struct sMemHeader*  gAllocMem  ;

extern struct sMemHeader*  gFreeMem  ;

extern int gNumAlloc;

extern int gNumFree;

extern unsigned int  __bss_start__  ;
extern unsigned int  __bss_end__  ;
static struct anonymous_typeX10  g_tasks[8]  ;
static struct anonymous_typeX11  g_sems[4]  ;
static struct anonymous_typeX12  g_flgs[4]  ;
static struct anonymous_typeX13  g_mbx[4]  ;
static unsigned int  g_tick  ;
static int  g_current_tid  ;
static int  g_sem  ;
static int  g_flag  ;
static int  g_mbox  ;
static int g_msg_value;
static int g_worker_sum;
static struct anonymous_typeX14  g_msg  ;
// source head

// header function
unsigned long  int brk(unsigned long  int addr);
void exit(int status);
int charp_index_regex(const char* self, const char* reg, int default_value, _Bool  ignore_case  );
int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool  ignore_case  );
char*  string_chomp(const char* str);
int string_rindex_regex(char* self, const char* reg, int default_value, _Bool  ignore_case  );
int string_index_regex(char* self, const char* reg, int default_value, _Bool  ignore_case  );
_Bool  charp_match(char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool  ignore_case  );
char*  string_sub(char* self, const char* reg, const char* replace, _Bool  ignore_case  );
struct list$1char$ph* string_scan(char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* string_split(char* self, const char* reg, _Bool  ignore_case  );
_Bool  string_match(char* self, const char* reg, _Bool  ignore_case  );
char*  charp_sub(char* self, const char* reg, const char* replace, _Bool  global  , _Bool  ignore_case  );
char*  charp_sub_block(char* self, const char* reg, _Bool  global  , _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char*  string_sub_block(char* self, const char* reg, _Bool  global  , _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
int*  __builtin_wstring(const char* str, char* sname, int sline);
int wchar_tp_length(const int*  str  );
int wchar_ta_length(const int*  str  );
int wstring_length(const int*  str  );
char*  string_lower_case(char* str);
char*  string_upper_case(char* str);
int*  wchar_tp_substring(const int*  str  , int head, int tail);
int charp_index_count(const char* str, const char* search_str, int count, int default_value);
int charp_rindex(const char* str, const char* search_str, int default_value);
int charp_rindex_count(const char* str, const char* search_str, int count, int default_value);
char*  charp_strip(const char* self);
char*  wchar_tp_to_string(const int*  wstr  );
char*  wchar_ta_to_string(const int*  wstr  );
int*  charp_to_wstring(const char* str);
int*  chara_to_wstring(char* str);
int*  wchar_tp_delete(int*  str  , int head, int tail);
int wchar_tp_index(const int*  str  , const int*  search_str  , int default_value);
int wchar_tp_rindex(const int*  str  , const int*  search_str  , int default_value);
int*  wchar_tp_reverse(const int*  str  );
int*  wchar_tp_multiply(const int*  str  , int n);
int*  wchar_tp_printable(const int*  str  );
int wchar_tp_compare(const int*  left  , int*  right  );
int wstring_compare(const int*  left  , const int*  right  );
int*  wchar_tp_operator_mult(const int*  str  , int n);
int*  wstring_operator_mult(const int*  str  , int n);
_Bool  wstring_operator_equals(const int*  left  , const int*  right  );
_Bool  wstring_operator_not_equals(const int*  left  , const int*  right  );
int*  wchar_tp_operator_add(const int*  left  , const int*  right  );
int*  wstring_operator_add(const int*  left  , const int*  right  );
char*  charp_replace(char* self, int index, char c);
char*  charp_multiply(const char* str, int n);
struct list$1char$ph* charp_split_str(const char* self, const char* str);
unsigned int wchar_tp_get_hash_key(const int*  value  );
_Bool  wstring_equals(const int*  left  , const int*  right  );
_Bool  wchar_t_operator_equals(int  left  , int  right  );
_Bool  wchar_t_operator_not_equals(int  left  , int  right  );
unsigned int wchar_t_get_hash_key(int  value  );
_Bool  wchar_t_equals(int  left  , int  right  );
char*  wchar_t_to_string(int  wc  );
char*  xrealpath(const char* path);
char*  xdirname(const char* path);
unsigned long  xwcslen(const int*  wstr  );
int*  wstring_substring(const int*  str  , int head, int tail);
int string_index_count(const char* str, const char* search_str, int count, int default_value);
int string_rindex(const char* str, const char* search_str, int default_value);
int string_rindex_count(const char* str, const char* search_str, int count, int default_value);
char*  string_strip(const char* self);
char*  wstring_to_string(const int*  wstr  );
int*  int_to_wstring(int self);
int*  wstring_delete(int*  str  , int head, int tail);
int wstring_index(const int*  str  , const int*  search_str  , int default_value);
int wstring_rindex(const int*  str  , const int*  search_str  , int default_value);
int*  wstring_reverse(const int*  str  );
int*  wstring_multiply(const int*  str  , int n);
int*  wstring_printable(const int*  str  );
unsigned int wstring_get_hash_key(const int*  value  );
char*  string_replace(char* self, int index, char c);
char*  string_multiply(const char* str, int n);
struct list$1char$ph* string_split_str(const char* self, const char* str);
int*  string_to_wstring(const char* str);
char*  charp_chomp(const char* str);
_Bool  wchar_tp_equals(const int*  left  , const int*  right  );
_Bool  wchar_tp_operator_equals(const int*  left  , const int*  right  );
_Bool  wchar_tp_operator_not_equals(const int*  left  , const int*  right  );
static void mmio_write32(unsigned int  addr  , unsigned int  value  );
void tk_putchar(int ch);
void putchar(char ch);
void tk_puts(const char* s);
void tk_puthex(unsigned int  value  );
void tk_kernel_exit(int code);
static int valid_task(int  id  );
static int valid_sem(int  id  );
static int valid_flg(int  id  );
static int valid_mbx(int  id  );
int  tk_cre_tsk(const struct anonymous_typeX5*  pk_ctsk  );
int  tk_sta_tsk(int  tskid  , long  stacd  );
void tk_ext_tsk();
void tk_dly_tsk(unsigned int  dlytim  );
unsigned int  tk_get_tick();
int  tk_get_tid();
int  tk_cre_sem(const struct anonymous_typeX6*  pk_csem  );
int  tk_sig_sem(int  semid  );
int  tk_wai_sem(int  semid  );
int  tk_cre_flg(const struct anonymous_typeX7*  pk_cflg  );
int  tk_set_flg(int  flgid  , unsigned int  setptn  );
int  tk_wai_flg(int  flgid  , unsigned int  waiptn  , unsigned int  wfmode  , unsigned int*  p_flgptn  );
int  tk_cre_mbx(const struct anonymous_typeX8*  pk_cmbx  );
int  tk_snd_mbx(int  mbxid  , struct T_MSG*  pk_msg  );
int  tk_rcv_mbx(int  mbxid  , struct T_MSG**  ppk_msg  );
static void tk_sta_ker();
static void producer_task(long  exinf  );
static void worker_task(long  exinf  );
static void monitor_task(long  exinf  );
static void tk_app_main();
static void T_CSEM_finalize(struct anonymous_typeX6*  self  );
static void T_CFLG_finalize(struct anonymous_typeX7*  self  );
static void T_CMBX_finalize(struct anonymous_typeX8*  self  );
static void T_CTSK_finalize(struct anonymous_typeX5*  self  );
void default_handler();
void reset_handler();
int __append_char(char** p, unsigned long  int* rem, char c);
void __append_str(char** p, unsigned long  int* rem, const char* s);
void* sbrk(long  increment  );
void* malloc(unsigned long  size  );
void free(void* ptr);
void* calloc(unsigned long  nmemb  , unsigned long  size  );
void* realloc(void* ptr, unsigned long  size  );
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memchr(const void* s, int c, unsigned long  n  );
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strncmp(const char* p, const char* q, unsigned int n);
char* strcpy(char* dest, const char* src);
char* strncpy(char* s, const char* t, int n);
int strlen(const char* s);
char* strchr(const char* s, int c);
char* strrchr(const char* s, int c);
char* strndup(const char* s, unsigned long  n  );
unsigned long  arg_file_capacity(const struct arg_file*  file  );
void arg_lit_reset(struct arg_lit*  lit  );
void arg_file_reset(struct arg_file*  file  );
void arg_end_reset(struct arg_end*  end  );
void arg_add_error(struct arg_end*  end  , const char* msg, const char* arg, const struct arg_hdr*  hdr  );
int arg_has_capacity(int count, int maxcount);
struct arg_lit*  arg_litn(const char* shortopts, const char* longopts, int mincount, int maxcount, const char* glossary);
struct arg_file*  arg_filen(const char* shortopts, const char* longopts, const char* datatype, int mincount, int maxcount, const char* glossary);
struct arg_end*  arg_end(int maxerrors);
int argtable_reset(void** argtable, struct arg_end**  end_out  );
int argtable_entries(void** argtable, struct arg_end**  end_out  );
int arg_long_match(const char* options, const char* name);
struct arg_hdr*  arg_find_short(void** argtable, int entries, char short_opt);
struct arg_hdr*  arg_find_long(void** argtable, int entries, const char* name);
struct arg_file*  arg_find_positional(void** argtable, int entries);
int arg_file_add(struct arg_file*  file  , const char* value, struct arg_end*  end  , const char* errmsg);
int arg_parse(int argc, char** argv, void** argtable);
void arg_print_joined_option(char* buf, unsigned long  bufsz  , const struct arg_hdr*  hdr  );
void arg_print_syntax(void** argtable, const char* suffix);
void arg_print_glossary(void** argtable, const char* format);
void arg_print_errors(struct arg_end*  end  , const char* progname);
void arg_freetable(void** argtable, unsigned long  n  );
int isprint(int c);
int isspace(int c);
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int puts(const char* s);
char* strcat(char* dest, const char* src);
char* strncat(char* dest, const char* src, unsigned long  n  );
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, __builtin_va_list  ap  );
int __utoa_ull(char* dst, unsigned long  long v, int base, int lower);
void __fmt_num(char** p, unsigned long  int* rem, unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower);
void __fmt_putc(struct anonymous_typeX4*  o  , char c);
int __is_digit(char c);
void __emit_pad(struct anonymous_typeX4*  o  , char pad, int n);
void __emit_num(struct anonymous_typeX4*  o  , unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower, int left);
void __vformat(struct anonymous_typeX4*  o  , const char* fmt, __builtin_va_list  ap  );
static void __builtin_va_list_finalize(__builtin_va_list*  self  );
int printf(const char* fmt, ...);
void __buf_putc(void* ctx, char ch);
void __str_putc(void* ctx, char ch);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, __builtin_va_list  ap  );
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsprintf(char* out, const char* fmt, __builtin_va_list  ap  );
int sprintf(char* out, const char* fmt, ...);
int atexit(void (*func)());
void __run_atexit();
double strtod(const char* nptr, char** endptr);
unsigned long  long __minux_parse_unsigned(const char* nptr, char** endptr, int base, int* neg_out, int* any_out);
unsigned long  int strtoul(const char* nptr, char** endptr, int base);
unsigned long  long strtoull(const char* nptr, char** endptr, int base);
long strtol(const char* nptr, char** endptr, int base);
long long strtoll(const char* nptr, char** endptr, int base);
long atol(const char* nptr);
int atoi(const char* nptr);
int __tolower(int c);
int strncasecmp(const char* a, const char* b, unsigned long  n  );
char* strerror(int errnum);
int ispunct(int c);
char* strtok(char* s, const char* delim);
int isxdigit(int c);
int __minux_isspace(int c);
int sscanf(const char* str, const char* fmt, ...);
_Bool  neo_frame_is_alive(unsigned long  int frame_id);
void stackframe();
void stackframe2(void* mem);
_Bool  die(const char* msg, char* sname, int sline);
void come_memleak_checker();
void* alloc_from_pages(unsigned long  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  compiletime_size  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
_Bool  come_is_alive(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name);
void* come_increment_ref_count(void* mem, char* sname, int sline, int id);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool  no_decrement  , _Bool  no_free  , void* result_obj, char* sname, int sline, int id);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id);
void xassert(const char* msg, _Bool  test  );
void* come_null_checker(void* mem, const char* sname, int sline, int id);
void* come_heap_checker(void* mem, const char* sname, int sline, int id);
char*  __builtin_string(const char* str, char* sname, int sline);
void stackframe_v2();
void* come_calloc_v2(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
void come_free_v2(void* mem);
struct buffer*  buffer_initialize(struct buffer*  self  );
struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  size  );
void buffer_finalize(struct buffer*  self  );
struct buffer*  buffer_clone(struct buffer*  self  );
_Bool  buffer_equals(struct buffer*  left  , struct buffer*  right  );
int buffer_length(struct buffer*  self  );
void buffer_reset(struct buffer*  self  );
void buffer_trim(struct buffer*  self  , int len);
struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  size  );
struct buffer*  buffer_append_char(struct buffer*  self  , char c);
struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem);
struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...);
struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem);
struct buffer*  buffer_append_int(struct buffer*  self  , int value);
struct buffer*  buffer_append_long(struct buffer*  self  , long value);
struct buffer*  buffer_append_short(struct buffer*  self  , short value);
struct buffer*  buffer_alignment(struct buffer*  self  );
int buffer_compare(struct buffer*  left  , struct buffer*  right  );
struct buffer*  charp_to_buffer(const char* self);
char*  buffer_to_string(struct buffer*  self  );
unsigned char* buffer_head_pointer(struct buffer*  self  );
struct buffer*  chara_to_buffer(char* self, unsigned long  len  );
struct buffer*  charpa_to_buffer(char** self, unsigned long  len  );
struct buffer*  shorta_to_buffer(short* self, unsigned long  len  );
struct buffer*  inta_to_buffer(int* self, unsigned long  len  );
struct buffer*  longa_to_buffer(long* self, unsigned long  len  );
struct buffer*  floata_to_buffer(float* self, unsigned long  len  );
struct buffer*  doublea_to_buffer(double* self, unsigned long  len  );
char*  buffer_printable(struct buffer*  self  );
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* chara_to_list(char* self, unsigned long  len  );
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charpa_to_list(char** self, unsigned long  len  );
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shorta_to_list(short* self, unsigned long  len  );
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* inta_to_list(int* self, unsigned long  len  );
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longa_to_list(long* self, unsigned long  len  );
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floata_to_list(float* self, unsigned long  len  );
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublea_to_list(double* self, unsigned long  len  );
_Bool  bool_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_equals(_Bool self, _Bool right);
_Bool  char_equals(char self, char right);
_Bool  short_equals(short self, short right);
_Bool  int_equals(int self, int right);
_Bool  long_equals(long self, long right);
_Bool  size_t_equals(unsigned long  self  , unsigned long  right  );
_Bool  float_equals(float self, float right);
_Bool  double_equals(double self, double right);
_Bool  bool_operator_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_operator_equals(_Bool  self  , _Bool  right  );
_Bool  char_operator_equals(char self, char right);
_Bool  short_operator_equals(short self, short right);
_Bool  int_operator_equals(int self, int right);
_Bool  long_operator_equals(long self, long right);
_Bool  bool_operator_not_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_operator_not_equals(_Bool  self  , _Bool  right  );
_Bool  char_operator_not_equals(char self, char right);
_Bool  short_operator_not_equals(short self, short right);
_Bool  int_operator_not_equals(int self, int right);
_Bool  long_operator_not_equals(long self, long right);
_Bool  charp_equals(const char* self, const char* right);
_Bool  string_equals(char* self, const char* right);
_Bool  voidp_equals(void* self, void* right);
_Bool  boolp_equals(_Bool*  self  , _Bool*  right  );
_Bool  string_operator_equals(char* self, const char* right);
_Bool  charp_operator_equals(const char* self, const char* right);
_Bool  chara_operator_equals(char* self, const char* right);
_Bool  voidp_operator_equals(const char* self, const char* right);
_Bool  voidp_operator_not_equals(const char* self, const char* right);
_Bool  string_operator_not_equals(char* self, const char* right);
_Bool  charp_operator_not_equals(const char* self, const char* right);
_Bool  chara_operator_not_equals(char* self, const char* right);
char*  charp_operator_add(const char* self, const char* right);
char*  string_operator_add(char* self, const char* right);
char*  charp_operator_mult(const char* self, int right);
char*  string_operator_mult(const char* self, int right);
_Bool  charpa_contained(const char* self[], unsigned long  len  , const char* str);
unsigned long  shorta_length(short* self, unsigned long  len  );
unsigned long  inta_length(int* self, unsigned long  len  );
unsigned long  longa_length(long* self, unsigned long  len  );
unsigned long  floata_length(float* self, unsigned long  len  );
unsigned long  doublea_length(double* self, unsigned long  len  );
unsigned int bool_get_hash_key(_Bool  value  );
unsigned int _Bool_get_hash_key(_Bool  value  );
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  value  );
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(const char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool  bool_clone(_Bool  self  );
_Bool  _Bool_clone(_Bool  self  );
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  size_t_clone(unsigned long  self  );
double double_clone(double self);
float float_clone(float self);
_Bool  xisalpha(char c);
_Bool  xisblank(char c);
_Bool  xisdigit(char c);
_Bool  xisspace(char c);
_Bool  xisalnum(char c);
_Bool  xisascii(char c);
_Bool  xispunct(char c);
int string_length(const char* str);
int charp_length(const char* str);
int chara_length(const char* str);
char*  charp_reverse(const char* str);
char*  string_operator_load_range_element(char* str, int head, int tail);
char*  charp_operator_load_range_element(char* str, int head, int tail);
char*  charp_substring(const char* str, int head, int tail);
char*  xsprintf(const char* msg, ...);
char*  charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
struct list$1char$ph* charp_split_char(char* self, char c);
char*  charp_xsprintf(char* self, const char* msg, ...);
char*  int_xsprintf(int self, const char* msg, ...);
char*  charp_printable(char* str);
char*  chara_printable(char* str);
char*  charp_sub_plain(char* self, char* str, char* replace);
char*  xbasename(char* path);
char*  xnoextname(char* path);
char*  xextname(char* path);
char*  bool_to_string(_Bool  self  );
char*  _Bool_to_string(_Bool  self  );
char*  char_to_string(char self);
char*  short_to_string(short self);
char*  int_to_string(int self);
char*  long_to_string(long self);
char*  size_t_to_string(unsigned long  self  );
char*  float_to_string(float self);
char*  double_to_string(double self);
char*  string_to_string(char* self);
char*  charp_to_string(const char* self);
int bool_compare(_Bool  left  , _Bool  right  );
int _Bool_compare(_Bool  left  , _Bool  right  );
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  left  , unsigned long  right  );
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char*  charp_puts(char* self);
char*  charp_print(char* self);
char*  charp_printf(char* self, ...);
int int_printf(int self, char* msg);
long long_printf(long self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int string_index(char* str, const char* search_str, int default_value);
int charp_index(const char* str, const char* search_str, int default_value);
// uniq global variable
const char _ctype_[1+256]={
     0,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 40, 40, 40, 40, 40, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
    32,-120, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4, 16, 16, 16, 16, 16,
    16, 16, 65, 65, 65, 65, 65, 65,  1,  1,  1,  1,  1,  1,  1,  1,
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 16, 16, 16, 16,
    16, 16, 66, 66, 66, 66, 66, 66,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 16, 16, 16, 16,
    32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0
};

int errno;

struct mem_block*  free_list  =((void*)0);

unsigned long  int  __neo_sbrk_cur  =0;

int __neo_sbrk_inited=0;

int __atexit_count=0;

char* __strtok_save;

struct neo_frame*  neo_current_frame  =(void*)0;

unsigned long  int neo_frame_id=0;

struct sMemHeader*  gAllocMem  =(void*)0;

struct sMemHeader*  gFreeMem  =(void*)0;

int gNumAlloc=0;

int gNumFree=0;

// inline function

// body function
static void mmio_write32(unsigned int  addr  , unsigned int  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "mmio_write32"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    volatile unsigned int*  p  ;
    memset(&p, 0, sizeof(p));
    p=(volatile unsigned int* )addr;
    *p=value;
    neo_current_frame = fr.prev;
}

void tk_putchar(int ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_putchar"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    volatile unsigned int*  uart  ;
    memset(&uart, 0, sizeof(uart));
    uart=(volatile unsigned int* )0x40034000u;
    *uart=(unsigned int )(unsigned char )ch;
    neo_current_frame = fr.prev;
}

void putchar(char ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "putchar"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    tk_putchar((int)ch);
    neo_current_frame = fr.prev;
}

void tk_puts(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_puts"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s!=0) {
        if(*s==10) {
            tk_putchar(13);
        }
        tk_putchar((int)*s);
        s++;
    }
    neo_current_frame = fr.prev;
}

void tk_puthex(unsigned int  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_puthex"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    static const char* hex="0123456789abcdef";
    tk_puts("0x");
    for(i=28    ;i>=0;i-=4){
        tk_putchar(hex[(value>>i)&0xfu]);
    }
    neo_current_frame = fr.prev;
}

void tk_kernel_exit(int code)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_kernel_exit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    mmio_write32(0x40000000u,(unsigned int )code);
    for(;;){
    }
    neo_current_frame = fr.prev;
}

static int valid_task(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=8&&(*({ long long __neo_array_index1_0 = (long long)(id-1); if(__neo_array_index1_0 < 0 || __neo_array_index1_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index1_0]; })).task /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_sem(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index2_0 = (long long)(id-1); if(__neo_array_index2_0 < 0 || __neo_array_index2_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index2_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_flg(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index3_0 = (long long)(id-1); if(__neo_array_index3_0 < 0 || __neo_array_index3_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index3_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_mbx(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index4_0 = (long long)(id-1); if(__neo_array_index4_0 < 0 || __neo_array_index4_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index4_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

int  tk_cre_tsk(const struct anonymous_typeX5*  pk_ctsk  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<8;i++){
        if((*({ long long __neo_array_index5_0 = (long long)(i); if(__neo_array_index5_0 < 0 || __neo_array_index5_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index5_0]; })).task /* uho */==0) {
            (*({ long long __neo_array_index6_0 = (long long)(i); if(__neo_array_index6_0 < 0 || __neo_array_index6_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index6_0]; })).task=pk_ctsk->task;
            (*({ long long __neo_array_index7_0 = (long long)(i); if(__neo_array_index7_0 < 0 || __neo_array_index7_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index7_0]; })).exinf=pk_ctsk->exinf;
            (*({ long long __neo_array_index8_0 = (long long)(i); if(__neo_array_index8_0 < 0 || __neo_array_index8_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index8_0]; })).pri=pk_ctsk->itskpri;
            (*({ long long __neo_array_index9_0 = (long long)(i); if(__neo_array_index9_0 < 0 || __neo_array_index9_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index9_0]; })).state=(0);
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_sta_tsk(int  tskid  , long  stacd  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_sta_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_task(tskid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    (*({ long long __neo_array_index10_0 = (long long)(tskid-1); if(__neo_array_index10_0 < 0 || __neo_array_index10_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index10_0]; })).exinf=stacd;
    (*({ long long __neo_array_index11_0 = (long long)(tskid-1); if(__neo_array_index11_0 < 0 || __neo_array_index11_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index11_0]; })).state=(1);
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void tk_ext_tsk()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_ext_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(valid_task(g_current_tid)) {
        (*({ long long __neo_array_index12_0 = (long long)(g_current_tid-1); if(__neo_array_index12_0 < 0 || __neo_array_index12_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index12_0]; })).state=(3);
    }
    neo_current_frame = fr.prev;
}

void tk_dly_tsk(unsigned int  dlytim  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_dly_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    g_tick+=dlytim;
    mmio_write32(0xe000e018u,g_tick);
    neo_current_frame = fr.prev;
}

unsigned int  tk_get_tick()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_get_tick"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return g_tick;
    neo_current_frame = fr.prev;
}

int  tk_get_tid()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_get_tid"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return g_current_tid;
    neo_current_frame = fr.prev;
}

int  tk_cre_sem(const struct anonymous_typeX6*  pk_csem  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index13_0 = (long long)(i); if(__neo_array_index13_0 < 0 || __neo_array_index13_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index13_0]; })).used /* uho */==0) {
            (*({ long long __neo_array_index14_0 = (long long)(i); if(__neo_array_index14_0 < 0 || __neo_array_index14_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index14_0]; })).used=1;
            (*({ long long __neo_array_index15_0 = (long long)(i); if(__neo_array_index15_0 < 0 || __neo_array_index15_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index15_0]; })).count=pk_csem->isemcnt;
            (*({ long long __neo_array_index16_0 = (long long)(i); if(__neo_array_index16_0 < 0 || __neo_array_index16_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index16_0]; })).max=pk_csem->maxsem;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_sig_sem(int  semid  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_sig_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX11*  sem  ;
    memset(&sem, 0, sizeof(sem));
    if(!valid_sem(semid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    sem=&g_sems[semid-1];
    if(sem->count<sem->max) {
        sem->count++;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_wai_sem(int  semid  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_wai_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX11*  sem  ;
    memset(&sem, 0, sizeof(sem));
    if(!valid_sem(semid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    sem=&g_sems[semid-1];
    if(sem->count<=0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    sem->count--;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_flg(const struct anonymous_typeX7*  pk_cflg  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index19_0 = (long long)(i); if(__neo_array_index19_0 < 0 || __neo_array_index19_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index19_0]; })).used /* uho */==0) {
            (*({ long long __neo_array_index20_0 = (long long)(i); if(__neo_array_index20_0 < 0 || __neo_array_index20_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index20_0]; })).used=1;
            (*({ long long __neo_array_index21_0 = (long long)(i); if(__neo_array_index21_0 < 0 || __neo_array_index21_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index21_0]; })).pattern=pk_cflg->iflgptn;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_set_flg(int  flgid  , unsigned int  setptn  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_set_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_flg(flgid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    (*({ long long __neo_array_index22_0 = (long long)(flgid-1); if(__neo_array_index22_0 < 0 || __neo_array_index22_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index22_0]; })).pattern /* uho */|=setptn;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_wai_flg(int  flgid  , unsigned int  waiptn  , unsigned int  wfmode  , unsigned int*  p_flgptn  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_wai_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX12*  flg  ;
    unsigned int  hit  ;
    memset(&flg, 0, sizeof(flg));
    memset(&hit, 0, sizeof(hit));
    if(!valid_flg(flgid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    flg=&g_flgs[flgid-1];
    if((wfmode&0x01)!=0) {
        hit=flg->pattern&waiptn;
    }
    else {
        hit=((((flg->pattern&waiptn)==waiptn))?(waiptn):(0));
    }
    if(hit==0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    *p_flgptn=flg->pattern;
    if((wfmode&0x10)!=0) {
        flg->pattern=0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_mbx(const struct anonymous_typeX8*  pk_cmbx  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    (void)pk_cmbx;
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index24_0 = (long long)(i); if(__neo_array_index24_0 < 0 || __neo_array_index24_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index24_0]; })).used /* uho */==0) {
            (*({ long long __neo_array_index25_0 = (long long)(i); if(__neo_array_index25_0 < 0 || __neo_array_index25_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index25_0]; })).used=1;
            (*({ long long __neo_array_index26_0 = (long long)(i); if(__neo_array_index26_0 < 0 || __neo_array_index26_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index26_0]; })).head=0;
            (*({ long long __neo_array_index27_0 = (long long)(i); if(__neo_array_index27_0 < 0 || __neo_array_index27_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index27_0]; })).tail=0;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_snd_mbx(int  mbxid  , struct T_MSG*  pk_msg  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_snd_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX13*  mbx  ;
    memset(&mbx, 0, sizeof(mbx));
    if(!valid_mbx(mbxid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mbx=&g_mbx[mbxid-1];
    pk_msg->next=0;
    if(mbx->tail!=0) {
        mbx->tail->next=pk_msg;
    }
    else {
        mbx->head=pk_msg;
    }
    mbx->tail=pk_msg;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_rcv_mbx(int  mbxid  , struct T_MSG**  ppk_msg  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_rcv_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX13*  mbx  ;
    memset(&mbx, 0, sizeof(mbx));
    if(!valid_mbx(mbxid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mbx=&g_mbx[mbxid-1];
    if(mbx->head==0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    *ppk_msg=mbx->head;
    mbx->head=mbx->head->next;
    if(mbx->head==0) {
        mbx->tail=0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

static void tk_sta_ker()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_sta_ker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int  best  ;
    int  best_pri  ;
    int i;
    void (*entry)(long )  ;
    long  exinf  ;
    memset(&best, 0, sizeof(best));
    memset(&best_pri, 0, sizeof(best_pri));
    memset(&i, 0, sizeof(i));
    memset(&entry, 0, sizeof(entry));
    memset(&exinf, 0, sizeof(exinf));
    for(;;){
        best=0;
        best_pri=0x7fffffff;
        for(i=0        ;i<8;i++){
            if((*({ long long __neo_array_index30_0 = (long long)(i); if(__neo_array_index30_0 < 0 || __neo_array_index30_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index30_0]; })).state /* uho */==(1)&&(*({ long long __neo_array_index31_0 = (long long)(i); if(__neo_array_index31_0 < 0 || __neo_array_index31_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index31_0]; })).pri /* uho */<best_pri) {
                best=i+1;
                best_pri=(*({ long long __neo_array_index32_0 = (long long)(i); if(__neo_array_index32_0 < 0 || __neo_array_index32_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index32_0]; })).pri /* uho */;
            }
        }
        if(best==0) {
            break;
        }
        g_current_tid=best;
        (*({ long long __neo_array_index33_0 = (long long)(best-1); if(__neo_array_index33_0 < 0 || __neo_array_index33_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index33_0]; })).state=(2);
        entry=(*({ long long __neo_array_index34_0 = (long long)(best-1); if(__neo_array_index34_0 < 0 || __neo_array_index34_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index34_0]; })).task /* uho */;
        exinf=(*({ long long __neo_array_index35_0 = (long long)(best-1); if(__neo_array_index35_0 < 0 || __neo_array_index35_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index35_0]; })).exinf /* uho */;
        entry(exinf);
        if((*({ long long __neo_array_index36_0 = (long long)(best-1); if(__neo_array_index36_0 < 0 || __neo_array_index36_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index36_0]; })).state /* uho */==(2)) {
            (*({ long long __neo_array_index37_0 = (long long)(best-1); if(__neo_array_index37_0 < 0 || __neo_array_index37_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index37_0]; })).state=(3);
        }
    }
    neo_current_frame = fr.prev;
}

static void producer_task(long  exinf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "producer_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    (void)exinf;
    tk_puts("task producer start\n");
    g_msg.value=42;
    g_msg_value=42;
    tk_snd_mbx(g_mbox,&g_msg.hdr /* uho */);
    tk_sig_sem(g_sem);
    tk_set_flg(g_flag,0x01);
    tk_dly_tsk(3);
    tk_puts("task producer done\n");
    tk_ext_tsk();
    neo_current_frame = fr.prev;
}

static void worker_task(long  exinf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "worker_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct T_MSG*  raw  ;
    struct anonymous_typeX14*  msg  ;
    memset(&raw, 0, sizeof(raw));
    memset(&msg, 0, sizeof(msg));
    (void)exinf;
    raw=0;
    tk_puts("task worker start\n");
    if(tk_wai_sem(g_sem)==0&&tk_rcv_mbx(g_mbox,&raw)==0) {
        msg=(struct anonymous_typeX14* )raw;
        g_worker_sum+=msg->value;
        tk_puts("task worker got message\n");
    }
    tk_set_flg(g_flag,0x02);
    tk_ext_tsk();
    neo_current_frame = fr.prev;
}

static void monitor_task(long  exinf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "monitor_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned int  pattern  ;
    memset(&pattern, 0, sizeof(pattern));
    (void)exinf;
    pattern=0;
    tk_puts("task monitor start\n");
    if(tk_wai_flg(g_flag,0x03,0x00|0x10,&pattern)!=0) {
        tk_puts("monitor flag wait failed\n");
        tk_kernel_exit(1);
    }
    tk_puts("monitor flags=");
    tk_puthex(pattern);
    tk_puts(" tick=");
    tk_puthex(tk_get_tick());
    tk_puts(" tid=");
    tk_puthex((unsigned int )tk_get_tid());
    tk_puts("\n");
    if(g_msg_value==42&&g_worker_sum==42&&pattern==0x03) {
        tk_puts("uT-Kernel demo PASS\n");
        tk_kernel_exit(0);
    }
    tk_puts("uT-Kernel demo FAIL\n");
    tk_kernel_exit(1);
    neo_current_frame = fr.prev;
}

static void tk_app_main()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_app_main"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX6  csem  ;
    struct anonymous_typeX7  cflg  ;
    struct anonymous_typeX8  cmbx  ;
    struct anonymous_typeX5  ctsk  ;
    int  producer  ;
    int  worker  ;
    int  monitor  ;
    memset(&csem, 0, sizeof(csem));
    memset(&cflg, 0, sizeof(cflg));
    memset(&cmbx, 0, sizeof(cmbx));
    memset(&ctsk, 0, sizeof(ctsk));
    memset(&producer, 0, sizeof(producer));
    memset(&worker, 0, sizeof(worker));
    memset(&monitor, 0, sizeof(monitor));
    tk_puts("uT-Kernel on neo-c Pico emulator\n");
    csem.sematr=0;
    csem.isemcnt=0;
    csem.maxsem=1;
    g_sem=tk_cre_sem(&csem);
    cflg.flgatr=0;
    cflg.iflgptn=0;
    g_flag=tk_cre_flg(&cflg);
    cmbx.mbxatr=0;
    g_mbox=tk_cre_mbx(&cmbx);
    ctsk.tskatr=0;
    ctsk.stk=0;
    ctsk.stksz=0;
    ctsk.exinf=0;
    ctsk.task=producer_task;
    ctsk.itskpri=1;
    producer=tk_cre_tsk(&ctsk);
    ctsk.task=worker_task;
    ctsk.itskpri=2;
    worker=tk_cre_tsk(&ctsk);
    ctsk.task=monitor_task;
    ctsk.itskpri=3;
    monitor=tk_cre_tsk(&ctsk);
    tk_sta_tsk(producer,0);
    tk_sta_tsk(worker,0);
    tk_sta_tsk(monitor,0);
    tk_sta_ker();
    tk_kernel_exit(2);
    come_call_finalizer(T_CSEM_finalize, (&csem), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 481, 1);
    come_call_finalizer(T_CFLG_finalize, (&cflg), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 481, 2);
    come_call_finalizer(T_CMBX_finalize, (&cmbx), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 481, 3);
    come_call_finalizer(T_CTSK_finalize, (&ctsk), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 481, 4);
    neo_current_frame = fr.prev;
}

static void T_CSEM_finalize(struct anonymous_typeX6*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CSEM_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CFLG_finalize(struct anonymous_typeX7*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CFLG_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CMBX_finalize(struct anonymous_typeX8*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CMBX_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CTSK_finalize(struct anonymous_typeX5*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CTSK_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

void default_handler()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "default_handler"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    tk_puts("default exception\n");
    tk_kernel_exit(3);
    neo_current_frame = fr.prev;
}

void reset_handler()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "reset_handler"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned int*  p  ;
    memset(&p, 0, sizeof(p));
    p=&__bss_start__;
    while(p<&__bss_end__) {
        *p=0;
        p++;
    }
    tk_app_main();
    tk_kernel_exit(4);
    neo_current_frame = fr.prev;
}

int __append_char(char** p, unsigned long  int* rem, char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__append_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(*rem>1) {
        **p=c;
        (*p)++;
        (*rem)--;
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void __append_str(char** p, unsigned long  int* rem, const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__append_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s&&*rem>1) {
        **p=*s++;
        (*p)++;
        (*rem)--;
    }
    neo_current_frame = fr.prev;
}

void* sbrk(long  increment  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sbrk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    long now;
    void* __result_obj__0;
    unsigned long  int  want  ;
    long rc;
    long newer;
    void* old;
    memset(&now, 0, sizeof(now));
    memset(&want, 0, sizeof(want));
    memset(&rc, 0, sizeof(rc));
    memset(&newer, 0, sizeof(newer));
    memset(&old, 0, sizeof(old));
    if(!__neo_sbrk_inited) {
        now=brk(0);
        if(now<0) {
            errno=12;
                        __result_obj__0 = (void*)-1;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __neo_sbrk_cur=(unsigned long  int )now;
        __neo_sbrk_inited=1;
    }
    if(increment==0) {
                __result_obj__0 = (void*)__neo_sbrk_cur;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    want=__neo_sbrk_cur+(long )increment;
    if((increment>0&&want<__neo_sbrk_cur)||(increment<0&&want>__neo_sbrk_cur)) {
        errno=12;
                __result_obj__0 = (void*)-1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    rc=brk((long)want);
    if(rc<0) {
        errno=12;
                __result_obj__0 = (void*)-1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    newer=brk(0);
    if(newer<0) {
        errno=12;
                __result_obj__0 = (void*)-1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    old=(void*)__neo_sbrk_cur;
    __neo_sbrk_cur=(unsigned long  int )newer;
        __result_obj__0 = old;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* malloc(unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "malloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    struct mem_block*  current  ;
    struct mem_block*  prev  ;
    struct mem_block*  new_mem  ;
    memset(&current, 0, sizeof(current));
    memset(&prev, 0, sizeof(prev));
    memset(&new_mem, 0, sizeof(new_mem));
    if(size==0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(({ __typeof__(8) __neo_div_right1 = (8); if(__neo_div_right1 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (size) % __neo_div_right1; })!=0) {
        size+=8-(({ __typeof__(8) __neo_div_right2 = (8); if(__neo_div_right2 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (size) % __neo_div_right2; }));
    }
    size+=sizeof(struct mem_block );
    current=free_list;
    prev=((void*)0);
    while(current!=((void*)0)) {
        if(current->size>=size) {
            if(prev==((void*)0)) {
                free_list=current->next;
            }
            else {
                prev->next=current->next;
            }
                        __result_obj__0 = (void*)(current+1);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        prev=current;
        current=current->next;
    }
    new_mem=(struct mem_block* )sbrk(size);
    if(new_mem==(void*)-1) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    new_mem->size=size;
    new_mem->next=((void*)0);
        __result_obj__0 = (void*)(new_mem+1);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void free(void* ptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "free"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct mem_block*  block  ;
    memset(&block, 0, sizeof(block));
    if(ptr==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    block=(struct mem_block* )ptr-1;
    block->next=free_list;
    free_list=block;
    neo_current_frame = fr.prev;
}

void* calloc(unsigned long  nmemb  , unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "calloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  total_size  ;
    void* __result_obj__0;
    void* ptr;
    memset(&total_size, 0, sizeof(total_size));
    memset(&ptr, 0, sizeof(ptr));
    total_size=nmemb*size;
    if(total_size==0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ptr=malloc(total_size);
    if(ptr!=((void*)0)) {
        memset(ptr,0,total_size);
    }
        __result_obj__0 = ptr;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* realloc(void* ptr, unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "realloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    struct mem_block*  oldb  ;
    unsigned long  old_total  ;
    unsigned long  old_payload  ;
    void* np;
    unsigned long  tocopy  ;
    memset(&oldb, 0, sizeof(oldb));
    memset(&old_total, 0, sizeof(old_total));
    memset(&old_payload, 0, sizeof(old_payload));
    memset(&np, 0, sizeof(np));
    memset(&tocopy, 0, sizeof(tocopy));
    if(ptr==0) {
                __result_obj__0 = malloc(size);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(size==0) {
        free(ptr);
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    oldb=(struct mem_block* )ptr-1;
    old_total=oldb->size;
    old_payload=(((old_total>sizeof(struct mem_block )))?((old_total-sizeof(struct mem_block ))):(0));
    np=malloc(size);
    if(!np) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    tocopy=((old_payload<size)?(old_payload):(size));
    memcpy(np,ptr,tocopy);
    free(ptr);
        __result_obj__0 = np;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strdup(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strdup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  len  ;
    char* p;
    char* __result_obj__0;
    memset(&len, 0, sizeof(len));
    memset(&p, 0, sizeof(p));
    const char* s2=s;
    len=strlen(s2)+1;
    p=malloc(len);
    if(p) {
        memcpy(p,s2,len);
    }
        __result_obj__0 = p;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int strcmp(const char* s1, const char* s2)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strcmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s1&&(*s1==*s2)) {
        s1++;
        s2++;
    }
        neo_current_frame = fr.prev;
    return (unsigned char)*s1-(unsigned char)*s2;
    neo_current_frame = fr.prev;
}

char* strstr(const char* haystack, const char* needle)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strstr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    if(!*needle) {
                __result_obj__0 = (char*)haystack;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    for(;*haystack;haystack++){
        const char* h=haystack;
        const char* n=needle;
        while(*h&&*n&&(*h==*n)) {
            h++;
            n++;
        }
        if(!*n) {
                        __result_obj__0 = (char*)haystack;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* memset(void* dst, int c, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* cdst;
    int i;
    void* __result_obj__0;
    cdst=(char*)dst;
    for(i=0    ;i<n;i++){
        cdst[i]=c;
    }
        __result_obj__0 = dst;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int memcmp(const void* v1, const void* v2, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memcmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    const unsigned char* s1;
    const unsigned char* s2;
    memset(&s1, 0, sizeof(s1));
    memset(&s2, 0, sizeof(s2));
    s1=v1;
    s2=v2;
    while(n-->0) {
        if(*s1!=*s2) {
                        neo_current_frame = fr.prev;
            return *s1-*s2;
        }
        s1++,s2++;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void* memchr(const void* s, int c, unsigned long  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memchr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned char target;
    void* __result_obj__0;
    memset(&target, 0, sizeof(target));
    const unsigned char* p=(const unsigned char*)s;
    target=(unsigned char)c;
    while(n--) {
        if(*p==target) {
                        __result_obj__0 = (void*)p;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        p++;
    }
        __result_obj__0 = (void*)0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* memmove(void* dst, const void* src, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memmove"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    const char* s;
    char* d;
    void* __result_obj__0;
    memset(&s, 0, sizeof(s));
    memset(&d, 0, sizeof(d));
    if(n==0) {
                __result_obj__0 = dst;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    s=src;
    d=dst;
    if(s<d&&s+n>d) {
        s+=n;
        d+=n;
        while(n-->0) {
            *--d=*--s;
        }
    }
    else {
        while(n-->0) {
            *d++=*s++;
        }
    }
        __result_obj__0 = dst;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* memcpy(void* dst, const void* src, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memcpy"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
        __result_obj__0 = memmove(dst,src,n);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int strncmp(const char* p, const char* q, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(n>0&&*p&&*p==*q) {
        n--,p++,q++;
    }
    if(n==0) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return (unsigned char)*p-(unsigned char)*q;
    neo_current_frame = fr.prev;
}

char* strcpy(char* dest, const char* src)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strcpy"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* d;
    char* __result_obj__0;
    memset(&d, 0, sizeof(d));
    d=dest;
    while((*d++=*src++)!=0) {
        ;
    }
        __result_obj__0 = dest;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strncpy(char* s, const char* t, int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncpy"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* os;
    char* __result_obj__0;
    memset(&os, 0, sizeof(os));
    os=s;
    while(n-->0&&(*s++=*t++)!=0) {
        ;
    }
    while(n-->0) {
        *s++=0;
    }
        __result_obj__0 = os;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int strlen(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strlen"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int n;
    memset(&n, 0, sizeof(n));
    for(n=0    ;s[n];n++){
        ;
    }
        neo_current_frame = fr.prev;
    return n;
    neo_current_frame = fr.prev;
}

char* strchr(const char* s, int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strchr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    while(*s) {
        if(*s==(char)c) {
                        __result_obj__0 = (char*)s;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        s++;
    }
        __result_obj__0 = (((c==0))?((char*)s):(0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strrchr(const char* s, int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strrchr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    const char* last=(const char*)0;
    do {
        if(*s==(char)c) {
            last=s;
        }
    } while(*s++);
        __result_obj__0 = (char*)last;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strndup(const char* s, unsigned long  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strndup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  len  ;
    char* p;
    char* __result_obj__0;
    unsigned long  i  ;
    memset(&len, 0, sizeof(len));
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    len=0;
    while(len<n&&s[len]) {
        len++;
    }
    p=(char*)malloc(len+1);
    if(!p) {
                __result_obj__0 = (char*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    for(i=0    ;i<len;i++){
        p[i]=s[i];
    }
    p[len]=0;
        __result_obj__0 = p;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  arg_file_capacity(const struct arg_file*  file  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_file_capacity"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int maxc;
    memset(&maxc, 0, sizeof(maxc));
    maxc=file->hdr.maxcount /* uho */;
        neo_current_frame = fr.prev;
    return (((maxc>0))?((unsigned long )maxc):(1u));
    neo_current_frame = fr.prev;
}

void arg_lit_reset(struct arg_lit*  lit  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_lit_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(lit) {
        lit->count=0;
    }
    neo_current_frame = fr.prev;
}

void arg_file_reset(struct arg_file*  file  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_file_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  cap  ;
    unsigned long  i  ;
    memset(&cap, 0, sizeof(cap));
    memset(&i, 0, sizeof(i));
    if(!file) {
                neo_current_frame = fr.prev;
        return;
    }
    file->count=0;
    cap=arg_file_capacity(file);
    for(i=0    ;i<cap;++i){
        file->filename[i]="";
    }
    neo_current_frame = fr.prev;
}

void arg_end_reset(struct arg_end*  end  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_end_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    end->count=0;
    if(!end->errors) {
                neo_current_frame = fr.prev;
        return;
    }
    for(i=0    ;i<end->maxerrors;++i){
        end->errors[i].msg=((void*)0);
        end->errors[i].argval=((void*)0);
        end->errors[i].hdr=((void*)0);
    }
    neo_current_frame = fr.prev;
}

void arg_add_error(struct arg_end*  end  , const char* msg, const char* arg, const struct arg_hdr*  hdr  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_add_error"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!end||end->maxerrors<=0) {
                neo_current_frame = fr.prev;
        return;
    }
    if(end->count>=end->maxerrors) {
                neo_current_frame = fr.prev;
        return;
    }
    end->errors[end->count].msg=msg;
    end->errors[end->count].argval=arg;
    end->errors[end->count].hdr=hdr;
    end->count++;
    neo_current_frame = fr.prev;
}

int arg_has_capacity(int count, int maxcount)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_has_capacity"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (maxcount<=0)||(count<maxcount);
    neo_current_frame = fr.prev;
}

struct arg_lit*  arg_litn(const char* shortopts, const char* longopts, int mincount, int maxcount, const char* glossary)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_litn"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_lit*  __result_obj__0  ;
    struct arg_lit*  lit  ;
    memset(&lit, 0, sizeof(lit));
    if(mincount<0||maxcount<0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    lit=(struct arg_lit* )malloc(sizeof(*lit));
    if(!lit) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    lit->hdr.kind=(1);
    lit->hdr.shortopts=shortopts;
    lit->hdr.longopts=longopts;
    lit->hdr.datatype=((void*)0);
    lit->hdr.glossary=glossary;
    lit->hdr.mincount=mincount;
    lit->hdr.maxcount=maxcount;
    lit->count=0;
        __result_obj__0 = lit;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_file*  arg_filen(const char* shortopts, const char* longopts, const char* datatype, int mincount, int maxcount, const char* glossary)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_filen"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_file*  __result_obj__0  ;
    struct arg_file*  file  ;
    unsigned long  cap  ;
    unsigned long  i  ;
    memset(&file, 0, sizeof(file));
    memset(&cap, 0, sizeof(cap));
    memset(&i, 0, sizeof(i));
    if(mincount<0||maxcount<0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    file=(struct arg_file* )malloc(sizeof(*file));
    if(!file) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    cap=(((maxcount>0))?((unsigned long )maxcount):(1u));
    file->filename=(const char**)malloc(sizeof(char*)*cap);
    if(!file->filename) {
        free(file);
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    file->hdr.kind=(2);
    file->hdr.shortopts=shortopts;
    file->hdr.longopts=longopts;
    file->hdr.datatype=datatype;
    file->hdr.glossary=glossary;
    file->hdr.mincount=mincount;
    file->hdr.maxcount=maxcount;
    file->count=0;
    for(i=0    ;i<cap;++i){
        file->filename[i]="";
    }
        __result_obj__0 = file;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_end*  arg_end(int maxerrors)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  __result_obj__0  ;
    struct arg_end*  end  ;
    memset(&end, 0, sizeof(end));
    if(maxerrors<0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    end=(struct arg_end* )malloc(sizeof(*end));
    if(!end) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    end->hdr.kind=(3);
    end->hdr.shortopts=((void*)0);
    end->hdr.longopts=((void*)0);
    end->hdr.datatype=((void*)0);
    end->hdr.glossary=((void*)0);
    end->hdr.mincount=0;
    end->hdr.maxcount=0;
    end->maxerrors=maxerrors;
    end->errors=((void*)0);
    if(maxerrors>0) {
        end->errors=(struct arg_error* )malloc(sizeof(struct arg_error )*(unsigned long )maxerrors);
        if(!end->errors) {
            free(end);
                        __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    arg_end_reset(end);
        __result_obj__0 = end;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int argtable_reset(void** argtable, struct arg_end**  end_out  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "argtable_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int count;
    struct arg_end*  end  ;
    struct arg_hdr*  hdr  ;
    memset(&count, 0, sizeof(count));
    memset(&end, 0, sizeof(end));
    memset(&hdr, 0, sizeof(hdr));
    count=0;
    end=((void*)0);
    while(argtable[count]) {
        hdr=(struct arg_hdr* )argtable[count];
        if(hdr->kind==(1)) {
            arg_lit_reset((struct arg_lit* )hdr);
        }
        else if(hdr->kind==(2)) {
            arg_file_reset((struct arg_file* )hdr);
        }
        else if(hdr->kind==(3)) {
            end=(struct arg_end* )hdr;
            arg_end_reset(end);
            count++;
            break;
        }
        count++;
    }
    if(end_out) {
        *end_out=end;
    }
        neo_current_frame = fr.prev;
    return count;
    neo_current_frame = fr.prev;
}

int argtable_entries(void** argtable, struct arg_end**  end_out  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "argtable_entries"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int count;
    struct arg_end*  end  ;
    struct arg_hdr*  hdr  ;
    memset(&count, 0, sizeof(count));
    memset(&end, 0, sizeof(end));
    memset(&hdr, 0, sizeof(hdr));
    count=0;
    end=((void*)0);
    while(argtable[count]) {
        hdr=(struct arg_hdr* )argtable[count];
        if(hdr->kind==(3)) {
            end=(struct arg_end* )hdr;
            break;
        }
        count++;
    }
    if(end_out) {
        *end_out=end;
    }
        neo_current_frame = fr.prev;
    return count;
    neo_current_frame = fr.prev;
}

int arg_long_match(const char* options, const char* name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_long_match"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  namelen  ;
    unsigned long  len  ;
    memset(&namelen, 0, sizeof(namelen));
    memset(&len, 0, sizeof(len));
    if(!options||!name) {
                neo_current_frame = fr.prev;
        return 0;
    }
    namelen=strlen(name);
    const char* p=options;
    while(*p) {
        const char* start=p;
        while(*p&&*p!=44&&*p!=124) {
            p++;
        }
        len=(unsigned long )(p-start);
        if(len==namelen&&strncmp(start,name,namelen)==0) {
                        neo_current_frame = fr.prev;
            return 1;
        }
        if(*p) {
            p++;
        }
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

struct arg_hdr*  arg_find_short(void** argtable, int entries, char short_opt)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_find_short"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct arg_hdr*  hdr  ;
    char c;
    struct arg_hdr*  __result_obj__0  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&c, 0, sizeof(c));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        const char* s=hdr->shortopts;
        while(s&&*s) {
            c=*s;
            if(c==short_opt) {
                                __result_obj__0 = hdr;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            s=s+1;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_hdr*  arg_find_long(void** argtable, int entries, const char* name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_find_long"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct arg_hdr*  hdr  ;
    struct arg_hdr*  __result_obj__0  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        if(arg_long_match(hdr->longopts,name)) {
                        __result_obj__0 = hdr;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_file*  arg_find_positional(void** argtable, int entries)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_find_positional"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct arg_hdr*  hdr  ;
    struct arg_file*  file  ;
    unsigned long  cap  ;
    struct arg_file*  __result_obj__0  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&file, 0, sizeof(file));
    memset(&cap, 0, sizeof(cap));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind!=(2)) {
            continue;
        }
        if((hdr->shortopts&&hdr->shortopts[0])||(hdr->longopts&&hdr->longopts[0])) {
            continue;
        }
        file=(struct arg_file* )hdr;
        cap=arg_file_capacity(file);
        if((unsigned long )file->count<cap) {
                        __result_obj__0 = file;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int arg_file_add(struct arg_file*  file  , const char* value, struct arg_end*  end  , const char* errmsg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_file_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  cap  ;
    memset(&cap, 0, sizeof(cap));
    if(!file) {
                neo_current_frame = fr.prev;
        return -1;
    }
    cap=arg_file_capacity(file);
    if((unsigned long )file->count>=cap&&cap>0) {
        arg_add_error(end,errmsg,value,&file->hdr);
                neo_current_frame = fr.prev;
        return -1;
    }
    file->filename[file->count]=((value)?(value):(""));
    file->count++;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int arg_parse(int argc, char** argv, void** argtable)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_parse"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  end  ;
    int total;
    int entries;
    struct arg_hdr*  hdr  ;
    int errors_before;
    int stop_opts;
    int i;
    char* arg;
    unsigned long  len  ;
    unsigned long  k  ;
    struct arg_hdr*  hdr_0  ;
    struct arg_lit*  lit  ;
    char short_opt;
    struct arg_hdr*  hdr_1  ;
    struct arg_lit*  lit_2  ;
    struct arg_file*  file  ;
    int i_4;
    struct arg_hdr*  hdr_5  ;
    int count;
    memset(&end, 0, sizeof(end));
    memset(&total, 0, sizeof(total));
    memset(&entries, 0, sizeof(entries));
    memset(&hdr, 0, sizeof(hdr));
    memset(&errors_before, 0, sizeof(errors_before));
    memset(&stop_opts, 0, sizeof(stop_opts));
    memset(&i, 0, sizeof(i));
    memset(&arg, 0, sizeof(arg));
    memset(&len, 0, sizeof(len));
    memset(&k, 0, sizeof(k));
    memset(&hdr_0, 0, sizeof(hdr_0));
    memset(&lit, 0, sizeof(lit));
    memset(&short_opt, 0, sizeof(short_opt));
    memset(&hdr_1, 0, sizeof(hdr_1));
    memset(&lit_2, 0, sizeof(lit_2));
    memset(&file, 0, sizeof(file));
    memset(&i_4, 0, sizeof(i_4));
    memset(&hdr_5, 0, sizeof(hdr_5));
    memset(&count, 0, sizeof(count));
    if(!argtable) {
                neo_current_frame = fr.prev;
        return 0;
    }
    end=((void*)0);
    total=argtable_reset(argtable,&end);
    if(!end) {
                neo_current_frame = fr.prev;
        return 0;
    }
    entries=0;
    while(entries<total&&argtable[entries]) {
        hdr=(struct arg_hdr* )argtable[entries];
        if(hdr->kind==(3)) {
            break;
        }
        entries++;
    }
    errors_before=end->count;
    stop_opts=0;
    for(i=1    ;i<argc;++i){
        arg=argv[i];
        if(!stop_opts&&arg[0]==45&&arg[1]!=0) {
            if(arg[1]==45&&arg[2]==0) {
                stop_opts=1;
                continue;
            }
            if(arg[1]==45) {
                const char* name=arg+2;
                const char* val_=((void*)0);
                const char* eq=strchr(name,61);
                char namebuf[64];
                memset(&namebuf, 0, sizeof(namebuf));
                if(eq) {
                    len=(unsigned long )(eq-name);
                    if(len>=sizeof(namebuf)) {
                        len=sizeof(namebuf)-1;
                    }
                    for(k=0                    ;k<len;++k){
                        ({ long long __neo_array_index38_0 = (long long)(k); if(__neo_array_index38_0 < 0 || __neo_array_index38_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } namebuf[__neo_array_index38_0] = name[k]; });
                    }
                    ({ long long __neo_array_index39_0 = (long long)(len); if(__neo_array_index39_0 < 0 || __neo_array_index39_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } namebuf[__neo_array_index39_0] = 0; });
                    name=namebuf;
                    val_=eq+1;
                }
                hdr_0=arg_find_long(argtable,entries,name);
                if(!hdr_0) {
                    arg_add_error(end,"unknown option",arg,((void*)0));
                    continue;
                }
                if(hdr_0->kind==(1)) {
                    if(val_&&*val_) {
                        arg_add_error(end,"option does not take a value",arg,hdr_0);
                        continue;
                    }
                    lit=(struct arg_lit* )hdr_0;
                    if(!arg_has_capacity(lit->count,hdr_0->maxcount)) {
                        arg_add_error(end,"option specified too many times",arg,hdr_0);
                        continue;
                    }
                    lit->count++;
                    continue;
                }
                if(hdr_0->kind==(2)) {
                    if(!val_) {
                        if(i+1<argc) {
                            val_=argv[++i];
                        }
                        else {
                            arg_add_error(end,"option requires a value",arg,hdr_0);
                            continue;
                        }
                    }
                    arg_file_add((struct arg_file* )hdr_0,val_,end,"option specified too many times");
                    continue;
                }
                arg_add_error(end,"unsupported option",arg,hdr_0);
                continue;
            }
            const char* p=arg+1;
            while(*p) {
                short_opt=*p;
                p=p+1;
                hdr_1=arg_find_short(argtable,entries,short_opt);
                if(!hdr_1) {
                    arg_add_error(end,"unknown option",arg,((void*)0));
                    continue;
                }
                if(hdr_1->kind==(1)) {
                    lit_2=(struct arg_lit* )hdr_1;
                    if(!arg_has_capacity(lit_2->count,hdr_1->maxcount)) {
                        arg_add_error(end,"option specified too many times",((void*)0),hdr_1);
                        continue;
                    }
                    lit_2->count++;
                    continue;
                }
                if(hdr_1->kind==(2)) {
                    const char* val__3=((void*)0);
                    if(*p) {
                        val__3=p;
                        p+=strlen(p);
                    }
                    else if(i+1<argc) {
                        val__3=argv[++i];
                    }
                    else {
                        arg_add_error(end,"option requires a value",arg,hdr_1);
                        break;
                    }
                    arg_file_add((struct arg_file* )hdr_1,val__3,end,"option specified too many times");
                    break;
                }
            }
            continue;
        }
        file=arg_find_positional(argtable,entries);
        if(!file) {
            arg_add_error(end,"unexpected argument",arg,((void*)0));
            continue;
        }
        arg_file_add(file,arg,end,"too many positional arguments");
    }
    for(i_4=0    ;i_4<entries;++i_4){
        hdr_5=(struct arg_hdr* )argtable[i_4];
        if(!hdr_5||hdr_5->kind==(3)) {
            continue;
        }
        count=0;
        if(hdr_5->kind==(1)) {
            count=((struct arg_lit* )hdr_5)->count;
        }
        else if(hdr_5->kind==(2)) {
            count=((struct arg_file* )hdr_5)->count;
        }
        if(hdr_5->mincount>0&&count<hdr_5->mincount) {
            if((hdr_5->shortopts&&hdr_5->shortopts[0])||(hdr_5->longopts&&hdr_5->longopts[0])) {
                arg_add_error(end,"missing required option",((hdr_5->longopts)?(hdr_5->longopts):(hdr_5->shortopts)),hdr_5);
            }
            else {
                arg_add_error(end,"missing required argument",hdr_5->datatype,hdr_5);
            }
        }
    }
    (void)errors_before;
        neo_current_frame = fr.prev;
    return end->count;
    neo_current_frame = fr.prev;
}

void arg_print_joined_option(char* buf, unsigned long  bufsz  , const struct arg_hdr*  hdr  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_joined_option"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  pos  ;
    int wrote;
    int wrote_6;
    int wrote_7;
    memset(&pos, 0, sizeof(pos));
    memset(&wrote, 0, sizeof(wrote));
    memset(&wrote_6, 0, sizeof(wrote_6));
    memset(&wrote_7, 0, sizeof(wrote_7));
    pos=0;
    if(!bufsz) {
                neo_current_frame = fr.prev;
        return;
    }
    buf[0]=0;
    if(hdr->shortopts&&hdr->shortopts[0]) {
        wrote=snprintf(buf+pos,bufsz-pos,"-%c",hdr->shortopts[0]);
        if(wrote<0) {
            wrote=0;
        }
        pos+=(unsigned long )wrote;
        if(pos>=bufsz) {
            pos=bufsz-1;
        }
        if(hdr->longopts&&hdr->longopts[0]&&pos+2<bufsz) {
            wrote=snprintf(buf+pos,bufsz-pos,", ");
            if(wrote<0) {
                wrote=0;
            }
            pos+=(unsigned long )wrote;
            if(pos>=bufsz) {
                pos=bufsz-1;
            }
        }
    }
    if(hdr->longopts&&hdr->longopts[0]) {
        wrote_6=snprintf(buf+pos,bufsz-pos,"--%s",hdr->longopts);
        if(wrote_6<0) {
            wrote_6=0;
        }
        pos+=(unsigned long )wrote_6;
        if(pos>=bufsz) {
            pos=bufsz-1;
        }
    }
    if((hdr->shortopts&&hdr->shortopts[0])||(hdr->longopts&&hdr->longopts[0])) {
        if(hdr->datatype&&hdr->datatype[0]&&pos+1<bufsz) {
            wrote_7=snprintf(buf+pos,bufsz-pos," %s",hdr->datatype);
            if(wrote_7<0) {
                wrote_7=0;
            }
            pos+=(unsigned long )wrote_7;
            if(pos>=bufsz) {
                pos=bufsz-1;
            }
        }
    }
    neo_current_frame = fr.prev;
}

void arg_print_syntax(void** argtable, const char* suffix)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_syntax"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  end  ;
    int entries;
    int i;
    struct arg_hdr*  hdr  ;
    int mandatory;
    int k;
    memset(&end, 0, sizeof(end));
    memset(&entries, 0, sizeof(entries));
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&mandatory, 0, sizeof(mandatory));
    memset(&k, 0, sizeof(k));
    if(!argtable) {
                neo_current_frame = fr.prev;
        return;
    }
    end=((void*)0);
    entries=argtable_entries(argtable,&end);
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        if((hdr->shortopts&&hdr->shortopts[0])||(hdr->longopts&&hdr->longopts[0])) {
            printf(" [");
            if(hdr->shortopts&&hdr->shortopts[0]) {
                printf("-%c",hdr->shortopts[0]);
                if(hdr->longopts&&hdr->longopts[0]) {
                    printf("|");
                }
            }
            if(hdr->longopts&&hdr->longopts[0]) {
                printf("--%s",hdr->longopts);
            }
            if(hdr->kind==(2)&&hdr->datatype&&hdr->datatype[0]) {
                printf(" %s",hdr->datatype);
            }
            printf("]");
        }
        else {
            const char* dt=((hdr->datatype)?(hdr->datatype):("<value>"));
            mandatory=(((hdr->mincount>0))?(hdr->mincount):(0));
            for(k=0            ;k<mandatory;++k){
                printf(" %s",dt);
            }
            if(hdr->maxcount==0||hdr->maxcount>mandatory) {
                printf(" [%s]",dt);
            }
        }
    }
    if(suffix) {
        printf("%s",suffix);
    }
    neo_current_frame = fr.prev;
}

void arg_print_glossary(void** argtable, const char* format)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_glossary"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  end  ;
    int entries;
    int i;
    struct arg_hdr*  hdr  ;
    memset(&end, 0, sizeof(end));
    memset(&entries, 0, sizeof(entries));
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    if(!argtable||!format) {
                neo_current_frame = fr.prev;
        return;
    }
    end=((void*)0);
    entries=argtable_entries(argtable,&end);
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    char optbuf[64];
    memset(&optbuf, 0, sizeof(optbuf));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        ({ long long __neo_array_index40_0 = (long long)(0); if(__neo_array_index40_0 < 0 || __neo_array_index40_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } optbuf[__neo_array_index40_0] = 0; });
        arg_print_joined_option(optbuf,sizeof(optbuf),hdr);
        const char* gloss=((hdr->glossary)?(hdr->glossary):(""));
        printf(format,optbuf,gloss);
    }
    neo_current_frame = fr.prev;
}

void arg_print_errors(struct arg_end*  end  , const char* progname)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_errors"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    const char* prog=((progname)?(progname):(""));
    for(i=0    ;i<end->count;++i){
        const struct arg_error*  err  =&end->errors[i];
        const char* msg=((err->msg)?(err->msg):("parse error"));
        if(err->argval&&err->argval[0]) {
            printf("%s: %s -- %s\n",prog,msg,err->argval);
        }
        else if(err->hdr&&err->hdr->datatype&&strcmp(msg,"missing required argument")==0) {
            printf("%s: %s %s\n",prog,msg,err->hdr->datatype);
        }
        else if(err->hdr&&err->hdr->longopts&&err->hdr->longopts[0]&&strcmp(msg,"missing required option")==0) {
            printf("%s: %s --%s\n",prog,msg,err->hdr->longopts);
        }
        else if(err->hdr&&err->hdr->shortopts&&err->hdr->shortopts[0]&&strcmp(msg,"missing required option")==0) {
            printf("%s: %s -%c\n",prog,msg,err->hdr->shortopts[0]);
        }
        else {
            printf("%s: %s\n",prog,msg);
        }
    }
    neo_current_frame = fr.prev;
}

void arg_freetable(void** argtable, unsigned long  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_freetable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  i  ;
    struct arg_hdr*  hdr  ;
    struct arg_file*  file  ;
    struct arg_end*  end  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&file, 0, sizeof(file));
    memset(&end, 0, sizeof(end));
    if(!argtable) {
                neo_current_frame = fr.prev;
        return;
    }
    for(i=0    ;i<n;++i){
        if(!argtable[i]) {
            continue;
        }
        hdr=(struct arg_hdr* )argtable[i];
        if(hdr->kind==(2)) {
            file=(struct arg_file* )hdr;
            free((void*)file->filename);
        }
        else if(hdr->kind==(3)) {
            end=(struct arg_end* )hdr;
            free(end->errors);
        }
        free(argtable[i]);
        argtable[i]=((void*)0);
    }
    neo_current_frame = fr.prev;
}

int isprint(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isprint"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((c>=0x20&&c<=0x7e))?(1):(0));
    neo_current_frame = fr.prev;
}

int isspace(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((c==32||c==9||c==10||c==13||c==11||c==12))?(1):(0));
    neo_current_frame = fr.prev;
}

int isalpha(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return ((((c>=65&&c<=90)||(c>=97&&c<=122)))?(1):(0));
    neo_current_frame = fr.prev;
}

int isdigit(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((c>=48&&c<=57))?(1):(0));
    neo_current_frame = fr.prev;
}

int isalnum(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((isalpha(c)||isdigit(c)))?(1):(0));
    neo_current_frame = fr.prev;
}

int puts(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "puts"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s) {
        putchar(*s++);
    }
    putchar(10);
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

char* strcat(char* dest, const char* src)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strcat"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* d;
    char* __result_obj__0;
    memset(&d, 0, sizeof(d));
    d=dest;
    while(*d) {
        d++;
    }
    while((*d++=*src++)!=0) {
        ;
    }
        __result_obj__0 = dest;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strncat(char* dest, const char* src, unsigned long  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncat"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* d;
    char* __result_obj__0;
    memset(&d, 0, sizeof(d));
    d=dest;
    while(*d) {
        d++;
    }
    while(n--&&*src) {
        *d++=*src++;
    }
    *d=0;
        __result_obj__0 = dest;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "itoa"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    int i;
    int negative;
    char* __result_obj__0;
    int digit;
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    memset(&negative, 0, sizeof(negative));
    memset(&digit, 0, sizeof(digit));
    p=buf;
    char tmp[32];
    memset(&tmp, 0, sizeof(tmp));
    i=0;
    negative=0;
    if(base<2||base>16) {
        *p=0;
                __result_obj__0 = p;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(is_signed&&(long)val_<0) {
        negative=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit=({ __typeof__(base) __neo_div_right3 = (base); if(__neo_div_right3 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (val_) % __neo_div_right3; });
        ({ long long __neo_array_index41_0 = (long long)(i++); if(__neo_array_index41_0 < 0 || __neo_array_index41_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } tmp[__neo_array_index41_0] = (((digit<10))?(48+digit):(97+digit-10)); });
        val_/=base;
    } while(val_);
    if(negative) {
        *p++=45;
    }
    while(i--) {
        *p++=(*({ long long __neo_array_index42_0 = (long long)(i); if(__neo_array_index42_0 < 0 || __neo_array_index42_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &tmp[__neo_array_index42_0]; }));
    }
    *p=0;
        __result_obj__0 = buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int vasprintf(char** out, const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "vasprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    const char* s;
    unsigned long  int remaining;
    memset(&p, 0, sizeof(p));
    memset(&s, 0, sizeof(s));
    memset(&remaining, 0, sizeof(remaining));
    char out2[512];
    memset(&out2, 0, sizeof(out2));
    p=out2;
    char buf[32];
    memset(&buf, 0, sizeof(buf));
    remaining=sizeof(out2);
    for(;*fmt&&remaining>1;fmt++){
        if(*fmt!=37) {
            *p++=*fmt;
            remaining--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf,__builtin_va_arg(ap,int),10,1);
            s=buf;
            break;
            case 117:
            itoa(buf,__builtin_va_arg(ap,unsigned int),10,0);
            s=buf;
            break;
            case 120:
            itoa(buf,__builtin_va_arg(ap,unsigned int),16,0);
            s=buf;
            break;
            case 115:
            s=__builtin_va_arg(ap,const char*);
            if(!s) {
                s="(null)";
            }
            break;
            case 99:
            ({ long long __neo_array_index43_0 = (long long)(0); if(__neo_array_index43_0 < 0 || __neo_array_index43_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index43_0] = (char)__builtin_va_arg(ap,int); });
            ({ long long __neo_array_index44_0 = (long long)(1); if(__neo_array_index44_0 < 0 || __neo_array_index44_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index44_0] = 0; });
            s=buf;
            break;
            case 112:
            strncpy(buf,"0x",32);
            itoa(buf+2,(unsigned long  int)(unsigned long  int )__builtin_va_arg(ap,void*),16,0);
            s=buf;
            break;
            case 37:
            ({ long long __neo_array_index45_0 = (long long)(0); if(__neo_array_index45_0 < 0 || __neo_array_index45_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index45_0] = 37; });
            ({ long long __neo_array_index46_0 = (long long)(1); if(__neo_array_index46_0 < 0 || __neo_array_index46_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index46_0] = 0; });
            s=buf;
            break;
            default:
            ({ long long __neo_array_index47_0 = (long long)(0); if(__neo_array_index47_0 < 0 || __neo_array_index47_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index47_0] = 37; });
            ({ long long __neo_array_index48_0 = (long long)(1); if(__neo_array_index48_0 < 0 || __neo_array_index48_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index48_0] = *fmt; });
            ({ long long __neo_array_index49_0 = (long long)(2); if(__neo_array_index49_0 < 0 || __neo_array_index49_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index49_0] = 0; });
            s=buf;
            break;
        }
        while(*s&&remaining>1) {
            *p++=*s++;
            remaining--;
        }
    }
    *p=0;
    *out=strdup(out2);
        neo_current_frame = fr.prev;
    return (int)(p-out2);
    neo_current_frame = fr.prev;
}

int __utoa_ull(char* dst, unsigned long  long v, int base, int lower)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__utoa_ull"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    static const char L[]="0123456789abcdef";
    static const char U[]="0123456789ABCDEF";
    const char* D=((lower)?(L):(U));
    char tmp[32];
    memset(&tmp, 0, sizeof(tmp));
    i=0;
    if(base<2||base>16) {
        dst[0]=48;
        dst[1]=0;
                neo_current_frame = fr.prev;
        return 1;
    }
    if(v==0) {
        dst[0]=48;
        dst[1]=0;
                neo_current_frame = fr.prev;
        return 1;
    }
    while(v) {
        ({ long long __neo_array_index50_0 = (long long)(i++); if(__neo_array_index50_0 < 0 || __neo_array_index50_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } tmp[__neo_array_index50_0] = D[({ __typeof__((unsigned int)base) __neo_div_right4 = ((unsigned int)base); if(__neo_div_right4 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (v) % __neo_div_right4; })]; });
        v/=(unsigned int)base;
    }
    int  n=i,  j=0;
    while(i--) {
        dst[j++]=(*({ long long __neo_array_index51_0 = (long long)(i); if(__neo_array_index51_0 < 0 || __neo_array_index51_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &tmp[__neo_array_index51_0]; }));
    }
    dst[j]=0;
        neo_current_frame = fr.prev;
    return n;
    neo_current_frame = fr.prev;
}

void __fmt_num(char** p, unsigned long  int* rem, unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__fmt_num"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int n;
    int total;
    memset(&n, 0, sizeof(n));
    memset(&total, 0, sizeof(total));
    char num[64];
    memset(&num, 0, sizeof(num));
    n=__utoa_ull(num,v,base,lower);
    total=n+(((neg)?(1):(0)));
    while(total<width) {
        __append_char(p,rem,pad);
        total++;
    }
    if(neg) {
        __append_char(p,rem,45);
    }
    __append_str(p,rem,num);
    neo_current_frame = fr.prev;
}

void __fmt_putc(struct anonymous_typeX4*  o  , char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__fmt_putc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX2*  b  ;
    struct anonymous_typeX3*  s  ;
    memset(&b, 0, sizeof(b));
    memset(&s, 0, sizeof(s));
    if(o->mode==0) {
        putchar(c);
    }
    else if(o->mode==1) {
        b=(struct anonymous_typeX2* )o->ctx;
        if(b->rem>1) {
            *(b->p)=c;
            b->p=b->p+1;
            b->rem--;
        }
    }
    else {
        s=(struct anonymous_typeX3* )o->ctx;
        *(s->p)=c;
        s->p=s->p+1;
    }
    o->count++;
    neo_current_frame = fr.prev;
}

int __is_digit(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__is_digit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c>=48&&c<=57;
    neo_current_frame = fr.prev;
}

void __emit_pad(struct anonymous_typeX4*  o  , char pad, int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__emit_pad"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(n-->0) {
        __fmt_putc(o,pad);
    }
    neo_current_frame = fr.prev;
}

void __emit_num(struct anonymous_typeX4*  o  , unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower, int left)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__emit_num"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int n;
    int total;
    int i;
    memset(&n, 0, sizeof(n));
    memset(&total, 0, sizeof(total));
    memset(&i, 0, sizeof(i));
    char buf[64];
    memset(&buf, 0, sizeof(buf));
    n=__utoa_ull(buf,v,base,lower);
    total=n+(((neg)?(1):(0)));
    if(!left) {
        __emit_pad(o,pad,(((width>total))?((width-total)):(0)));
    }
    if(neg) {
        __fmt_putc(o,45);
    }
    for(i=0    ;i<n;i++){
        __fmt_putc(o,(*({ long long __neo_array_index52_0 = (long long)(i); if(__neo_array_index52_0 < 0 || __neo_array_index52_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &buf[__neo_array_index52_0]; })));
    }
    if(left) {
        __emit_pad(o,32,(((width>total))?((width-total)):(0)));
    }
    neo_current_frame = fr.prev;
}

void __vformat(struct anonymous_typeX4*  o  , const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__vformat"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char pad;
    int left;
    int parsing_flags;
    int width;
    int lcount;
    char c;
    long long sv;
    int neg;
    unsigned long  long uv;
    int base;
    unsigned long  long uv_8;
    unsigned long  long uv_9;
    int hexlen;
    int total;
    int hexlen_10;
    int total_12;
    char ch;
    int len;
    memset(&pad, 0, sizeof(pad));
    memset(&left, 0, sizeof(left));
    memset(&parsing_flags, 0, sizeof(parsing_flags));
    memset(&width, 0, sizeof(width));
    memset(&lcount, 0, sizeof(lcount));
    memset(&c, 0, sizeof(c));
    memset(&sv, 0, sizeof(sv));
    memset(&neg, 0, sizeof(neg));
    memset(&uv, 0, sizeof(uv));
    memset(&base, 0, sizeof(base));
    memset(&uv_8, 0, sizeof(uv_8));
    memset(&uv_9, 0, sizeof(uv_9));
    memset(&hexlen, 0, sizeof(hexlen));
    memset(&total, 0, sizeof(total));
    memset(&hexlen_10, 0, sizeof(hexlen_10));
    memset(&total_12, 0, sizeof(total_12));
    memset(&ch, 0, sizeof(ch));
    memset(&len, 0, sizeof(len));
    while(*fmt) {
        if(*fmt!=37) {
            __fmt_putc(o,*fmt++);
            continue;
        }
        fmt++;
        pad=32;
        left=0;
        parsing_flags=1;
        while(parsing_flags) {
            if(*fmt==48) {
                pad=48;
                fmt++;
            }
            else if(*fmt==45) {
                left=1;
                pad=32;
                fmt++;
            }
            else {
                parsing_flags=0;
            }
        }
        width=0;
        while(*fmt>=48&&*fmt<=57) {
            width=width*10+(*fmt-48);
            fmt++;
        }
        lcount=0;
        while(*fmt==108) {
            lcount++;
            fmt++;
        }
        c=((*fmt)?(*fmt++):(0));
        switch (        c) {
            case 100:
            {
                if(lcount>=2) {
                    sv=__builtin_va_arg(ap,long  long);
                }
                else if(lcount==1) {
                    sv=__builtin_va_arg(ap,long);
                }
                else {
                    sv=__builtin_va_arg(ap,int);
                }
                neg=(sv<0);
                uv=((neg)?((unsigned long  long)(-sv)):((unsigned long  long)sv));
                __emit_num(o,uv,10,1,neg,width,pad,1,left);
                break;
            }
            case 117:
            case 120:
            {
                base=(((c==120))?(16):(10));
                if(lcount>=2) {
                    uv_8=__builtin_va_arg(ap,unsigned long  long);
                }
                else if(lcount==1) {
                    uv_8=__builtin_va_arg(ap,unsigned long  int);
                }
                else {
                    uv_8=(unsigned int)__builtin_va_arg(ap,unsigned int);
                }
                __emit_num(o,uv_8,base,0,0,width,pad,1,left);
                break;
            }
            case 112:
            {
                uv_9=(unsigned long  long)(unsigned long  int )__builtin_va_arg(ap,void*);
                if(!left) {
                    hexlen=0;
                    {
                        char tmp[64];
                        memset(&tmp, 0, sizeof(tmp));
                        hexlen=__utoa_ull(tmp,uv_9,16,1);
                    }
                    total=2+hexlen;
                    __emit_pad(o,pad,(((width>total))?((width-total)):(0)));
                }
                __fmt_putc(o,48);
                __fmt_putc(o,120);
                __emit_num(o,uv_9,16,0,0,0,32,1,0);
                if(left) {
                    hexlen_10=0;
                    {
                        char tmp_11[64];
                        memset(&tmp_11, 0, sizeof(tmp_11));
                        hexlen_10=__utoa_ull(tmp_11,uv_9,16,1);
                    }
                    total_12=2+hexlen_10;
                    __emit_pad(o,32,(((width>total_12))?((width-total_12)):(0)));
                }
                break;
            }
            case 99:
            {
                ch=(char)__builtin_va_arg(ap,int);
                if(!left) {
                    __emit_pad(o,pad,(((width>1))?((width-1)):(0)));
                }
                __fmt_putc(o,ch);
                if(left) {
                    __emit_pad(o,32,(((width>1))?((width-1)):(0)));
                }
                break;
            }
            case 115:
            {
                const char* s=__builtin_va_arg(ap,const char*);
                if(!s) {
                    s="(null)";
                }
                len=0;
                for(const char* t=s                ;*t;++t){
                    len++;
                }
                if(!left) {
                    __emit_pad(o,pad,(((width>len))?((width-len)):(0)));
                }
                while(*s) {
                    __fmt_putc(o,*s++);
                }
                if(left) {
                    __emit_pad(o,32,(((width>len))?((width-len)):(0)));
                }
                break;
            }
            case 37:
            __fmt_putc(o,37);
            break;
            default:
            __fmt_putc(o,37);
            if(c) {
                __fmt_putc(o,c);
            }
            break;
        }
    }
    neo_current_frame = fr.prev;
}

static void __builtin_va_list_finalize(__builtin_va_list*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_va_list_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

int printf(const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int __result_obj__0;
    memset(&ap, 0, sizeof(ap));
    __builtin_va_start(ap,fmt);
    struct anonymous_typeX4  out  ={ 0, ((void*)0), 0 };
    __vformat(&out,fmt,ap);
    __builtin_va_end(ap);
        __result_obj__0 = out.count /* uho */;
    come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2424, 5);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void __buf_putc(void* ctx, char ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__buf_putc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX2*  b  ;
    memset(&b, 0, sizeof(b));
    b=(struct anonymous_typeX2* )ctx;
    if(b->rem>1) {
        *(b->p)=ch;
        b->p=b->p+1;
        b->rem--;
    }
    neo_current_frame = fr.prev;
}

void __str_putc(void* ctx, char ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__str_putc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX3*  s  ;
    memset(&s, 0, sizeof(s));
    s=(struct anonymous_typeX3* )ctx;
    *(s->p)=ch;
    s->p=s->p+1;
    neo_current_frame = fr.prev;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "vsnprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!out||out_size==0) {
                neo_current_frame = fr.prev;
        return 0;
    }
    struct anonymous_typeX2  b  ={ out, out_size };
    struct anonymous_typeX4  o  ={ 1, &b, 0 };
    __vformat(&o,fmt,ap);
    if(b.rem /* uho */>0) {
        *(b.p /* uho */)=0;
    }
    else {
        out[out_size-1]=0;
    }
        neo_current_frame = fr.prev;
    return o.count /* uho */;
    neo_current_frame = fr.prev;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "snprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int r;
    int __result_obj__0;
    memset(&ap, 0, sizeof(ap));
    memset(&r, 0, sizeof(r));
    __builtin_va_start(ap,fmt);
    r=vsnprintf(out,out_size,fmt,ap);
    __builtin_va_end(ap);
        __result_obj__0 = r;
    come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2460, 6);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int vsprintf(char* out, const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "vsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!out) {
                neo_current_frame = fr.prev;
        return -1;
    }
    struct anonymous_typeX3  s  ={ out };
    struct anonymous_typeX4  o  ={ 2, &s, 0 };
    __vformat(&o,fmt,ap);
    *(s.p /* uho */)=0;
        neo_current_frame = fr.prev;
    return o.count /* uho */;
    neo_current_frame = fr.prev;
}

int sprintf(char* out, const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int r;
    int __result_obj__0;
    memset(&ap, 0, sizeof(ap));
    memset(&r, 0, sizeof(r));
    __builtin_va_start(ap,fmt);
    r=vsprintf(out,fmt,ap);
    __builtin_va_end(ap);
        __result_obj__0 = r;
    come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2478, 7);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int atexit(void (*func)())
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "atexit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(__atexit_count>=(int)(sizeof(__atexit_funcs) / sizeof(__atexit_funcs[0]))) {
                neo_current_frame = fr.prev;
        return -1;
    }
    ({ long long __neo_array_index54_0 = (long long)(__atexit_count++); if(__neo_array_index54_0 < 0 || __neo_array_index54_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } __atexit_funcs[__neo_array_index54_0] = func; });
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void __run_atexit()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__run_atexit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=__atexit_count-1    ;i>=0;i--){
        if((*({ long long __neo_array_index55_0 = (long long)(i); if(__neo_array_index55_0 < 0 || __neo_array_index55_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &__atexit_funcs[__neo_array_index55_0]; }))) {
            ((*({ long long __neo_array_index56_0 = (long long)(i); if(__neo_array_index56_0 < 0 || __neo_array_index56_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &__atexit_funcs[__neo_array_index56_0]; })))();
        }
    }
    neo_current_frame = fr.prev;
}

double strtod(const char* nptr, char** endptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtod"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    double ip;
    int any;
    double val_;
    int esign;
    int exp;
    double pow10;
    memset(&neg, 0, sizeof(neg));
    memset(&ip, 0, sizeof(ip));
    memset(&any, 0, sizeof(any));
    memset(&val_, 0, sizeof(val_));
    memset(&esign, 0, sizeof(esign));
    memset(&exp, 0, sizeof(exp));
    memset(&pow10, 0, sizeof(pow10));
    const char* s=nptr;
    while(isspace(*s)) {
        s++;
    }
    neg=0;
    if(*s==43||*s==45) {
        neg=(*s==45);
        s++;
    }
    ip=0.0;
    any=0;
    while(*s>=48&&*s<=57) {
        ip=ip*10.0+(*s-48);
        s++;
        any=1;
    }
    double  fp=0.0,  scale=1.0;
    if(*s==46) {
        s++;
        while(*s>=48&&*s<=57) {
            fp=fp*10.0+(*s-48);
            scale*=10.0;
            s++;
            any=1;
        }
    }
    val_=ip+(((scale>1.0)?(({ __typeof__(scale) __neo_div_right5 = (scale); if(__neo_div_right5 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (fp) / __neo_div_right5; })):(0.0)));
    if(*s==101||*s==69) {
        s++;
        esign=0;
        if(*s==43||*s==45) {
            esign=(*s==45);
            s++;
        }
        exp=0;
        while(*s>=48&&*s<=57) {
            exp=exp*10+(*s-48);
            s++;
        }
        pow10=1.0;
        while(exp-->0) {
            pow10*=10.0;
        }
        val_=((esign)?((({ __typeof__(pow10) __neo_div_right6 = (pow10); if(__neo_div_right6 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (val_) / __neo_div_right6; }))):((val_*pow10)));
        any=1;
    }
    if(endptr) {
        *endptr=(char*)(((any)?(s):(nptr)));
    }
        neo_current_frame = fr.prev;
    return ((neg)?(-val_):(val_));
    neo_current_frame = fr.prev;
}

unsigned long  long __minux_parse_unsigned(const char* nptr, char** endptr, int base, int* neg_out, int* any_out)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__minux_parse_unsigned"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    unsigned long  long val_;
    int any;
    int actual_base;
    int c;
    int d;
    memset(&neg, 0, sizeof(neg));
    memset(&val_, 0, sizeof(val_));
    memset(&any, 0, sizeof(any));
    memset(&actual_base, 0, sizeof(actual_base));
    memset(&c, 0, sizeof(c));
    memset(&d, 0, sizeof(d));
    const char* s=nptr;
    while(isspace(*s)) {
        s++;
    }
    neg=0;
    if(*s==43) {
        s++;
    }
    else if(*s==45) {
        neg=1;
        s++;
    }
    val_=0;
    any=0;
    actual_base=base;
    if(actual_base==0) {
        if(s[0]==48) {
            if(s[1]==120||s[1]==88) {
                actual_base=16;
                s+=2;
            }
            else {
                actual_base=8;
                s++;
                any=1;
            }
        }
        else {
            actual_base=10;
        }
    }
    else if(actual_base==16) {
        if(s[0]==48&&(s[1]==120||s[1]==88)) {
            s+=2;
        }
    }
    if(actual_base<2||actual_base>36) {
        if(endptr) {
            *endptr=(char*)nptr;
        }
        if(neg_out) {
            *neg_out=neg;
        }
        if(any_out) {
            *any_out=0;
        }
                neo_current_frame = fr.prev;
        return 0;
    }
    for(;;s++){
        c=*s;
        if(c>=48&&c<=57) {
            d=c-48;
        }
        else if(c>=97&&c<=122) {
            d=c-97+10;
        }
        else if(c>=65&&c<=90) {
            d=c-65+10;
        }
        else {
            break;
        }
        if(d>=actual_base) {
            break;
        }
        any=1;
        val_=val_*(unsigned long  long)actual_base+(unsigned long  long)d;
    }
    if(endptr) {
        *endptr=(char*)(((any)?(s):(nptr)));
    }
    if(neg_out) {
        *neg_out=neg;
    }
    if(any_out) {
        *any_out=any;
    }
        neo_current_frame = fr.prev;
    return val_;
    neo_current_frame = fr.prev;
}

unsigned long  int strtoul(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtoul"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    unsigned long  int val_;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    memset(&val_, 0, sizeof(val_));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    val_=(unsigned long  int)parsed;
    if(neg) {
        val_=(unsigned long  int)(-(long)val_);
    }
        neo_current_frame = fr.prev;
    return val_;
    neo_current_frame = fr.prev;
}

unsigned long  long strtoull(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtoull"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    if(neg) {
        parsed=(unsigned long  long)(-(long  long)parsed);
    }
        neo_current_frame = fr.prev;
    return parsed;
    neo_current_frame = fr.prev;
}

long strtol(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtol"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    long result;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    memset(&result, 0, sizeof(result));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=(long)parsed;
    if(neg) {
        result=-result;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

long long strtoll(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtoll"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    long long result;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    memset(&result, 0, sizeof(result));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=(long  long)parsed;
    if(neg) {
        result=-result;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

long atol(const char* nptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "atol"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return strtol(nptr,(char**)0,10);
    neo_current_frame = fr.prev;
}

int atoi(const char* nptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "atoi"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int)strtol(nptr,(char**)0,10);
    neo_current_frame = fr.prev;
}

int __tolower(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__tolower"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(c>=65&&c<=90) {
                neo_current_frame = fr.prev;
        return c-65+97;
    }
        neo_current_frame = fr.prev;
    return c;
    neo_current_frame = fr.prev;
}

int strncasecmp(const char* a, const char* b, unsigned long  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncasecmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  i  ;
    unsigned char ca;
    unsigned char cb;
    int da;
    int db;
    memset(&i, 0, sizeof(i));
    memset(&ca, 0, sizeof(ca));
    memset(&cb, 0, sizeof(cb));
    memset(&da, 0, sizeof(da));
    memset(&db, 0, sizeof(db));
    for(i=0    ;i<n;i++){
        ca=(unsigned char)a[i];
        cb=(unsigned char)b[i];
        if(ca==0||cb==0) {
                        neo_current_frame = fr.prev;
            return (int)ca-(int)cb;
        }
        da=__tolower(ca);
        db=__tolower(cb);
        if(da!=db) {
                        neo_current_frame = fr.prev;
            return da-db;
        }
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

char* strerror(int errnum)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strerror"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    switch (    errnum) {
        case 0:
                __result_obj__0 = "Success";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 1:
                __result_obj__0 = "Operation not permitted";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 2:
                __result_obj__0 = "No such file or directory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 5:
                __result_obj__0 = "I/O error";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 9:
                __result_obj__0 = "Bad file descriptor";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 12:
                __result_obj__0 = "Out of memory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 13:
                __result_obj__0 = "Permission denied";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 17:
                __result_obj__0 = "File exists";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 20:
                __result_obj__0 = "Not a directory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 21:
                __result_obj__0 = "Is a directory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 22:
                __result_obj__0 = "Invalid argument";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 32:
                __result_obj__0 = "Broken pipe";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 38:
                __result_obj__0 = "Function not implemented";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        default:
                __result_obj__0 = "Unknown error";
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

int ispunct(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "ispunct"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=0x21&&c<=0x7e)&&!isalnum(c);
    neo_current_frame = fr.prev;
}

char* strtok(char* s, const char* delim)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtok"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    const char* d;
    int isdelim;
    char* start;
    memset(&d, 0, sizeof(d));
    memset(&isdelim, 0, sizeof(isdelim));
    memset(&start, 0, sizeof(start));
    if(!s) {
        s=__strtok_save;
    }
    if(!s) {
                __result_obj__0 = (char*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    while(*s) {
        isdelim=0;
        for(d=delim        ;*d;d++){
            if(*d==*s) {
                isdelim=1;
                break;
            }
        }
        if(!isdelim) {
            break;
        }
        s++;
    }
    if(*s==0) {
        __strtok_save=(char*)0;
                __result_obj__0 = (char*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    start=s;
    while(*s) {
        for(d=delim        ;*d;d++){
            if(*d==*s) {
                *s=0;
                __strtok_save=s+1;
                                __result_obj__0 = start;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
        s++;
    }
    __strtok_save=(char*)0;
        __result_obj__0 = start;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int isxdigit(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isxdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57)||(c>=97&&c<=102)||(c>=65&&c<=70);
    neo_current_frame = fr.prev;
}

int __minux_isspace(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__minux_isspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==11||c==12;
    neo_current_frame = fr.prev;
}

int sscanf(const char* str, const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sscanf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int assigned;
    int __result_obj__0;
    int width;
    char length;
    char conv;
    char* out;
    int n;
    int neg;
    unsigned long  long val_;
    int digits;
    unsigned long  int* p;
    unsigned long*  p_13  ;
    unsigned int* p_14;
    long long sval;
    long* p_15;
    long  long* p_16;
    int* p_17;
    int invert;
    int c;
    int c_18;
    char* out_19;
    int n_20;
    int in;
    char* out_21;
    int n_22;
    int i;
    memset(&ap, 0, sizeof(ap));
    memset(&assigned, 0, sizeof(assigned));
    memset(&width, 0, sizeof(width));
    memset(&length, 0, sizeof(length));
    memset(&conv, 0, sizeof(conv));
    memset(&out, 0, sizeof(out));
    memset(&n, 0, sizeof(n));
    memset(&neg, 0, sizeof(neg));
    memset(&val_, 0, sizeof(val_));
    memset(&digits, 0, sizeof(digits));
    memset(&p, 0, sizeof(p));
    memset(&p_13, 0, sizeof(p_13));
    memset(&p_14, 0, sizeof(p_14));
    memset(&sval, 0, sizeof(sval));
    memset(&p_15, 0, sizeof(p_15));
    memset(&p_16, 0, sizeof(p_16));
    memset(&p_17, 0, sizeof(p_17));
    memset(&invert, 0, sizeof(invert));
    memset(&c, 0, sizeof(c));
    memset(&c_18, 0, sizeof(c_18));
    memset(&out_19, 0, sizeof(out_19));
    memset(&n_20, 0, sizeof(n_20));
    memset(&in, 0, sizeof(in));
    memset(&out_21, 0, sizeof(out_21));
    memset(&n_22, 0, sizeof(n_22));
    memset(&i, 0, sizeof(i));
    __builtin_va_start(ap,fmt);
    const char* s=str;
    const char* f=fmt;
    assigned=0;
    while(*f) {
        if(*f!=37) {
            if(__minux_isspace((unsigned char)*f)) {
                while(__minux_isspace((unsigned char)*f)) {
                    f++;
                }
                while(*s&&__minux_isspace((unsigned char)*s)) {
                    s++;
                }
                continue;
            }
            if(*s!=*f) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2713, 8);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            s++;
            f++;
            continue;
        }
        f++;
        width=0;
        while(*f>=48&&*f<=57) {
            width=width*10+(*f-48);
            f++;
        }
        length=0;
        if(*f==108||*f==122) {
            length=*f;
            f++;
            if(length==108&&*f==108) {
                f++;
            }
        }
        conv=*f++;
        if(conv==115) {
            out=__builtin_va_arg(ap,char*);
            if(!out) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2730, 9);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            while(*s&&__minux_isspace((unsigned char)*s)) {
                s++;
            }
            n=0;
            while(*s&&!__minux_isspace((unsigned char)*s)&&(width==0||n<width)) {
                out[n++]=*s++;
            }
            out[n]=0;
            if(n==0) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2735, 10);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            assigned++;
        }
        else if(conv==100||conv==105||conv==117) {
            while(*s&&__minux_isspace((unsigned char)*s)) {
                s++;
            }
            neg=0;
            if(*s==43||*s==45) {
                neg=(*s==45);
                s++;
            }
            val_=0;
            digits=0;
            while(*s>=48&&*s<=57&&(width==0||digits<width)) {
                val_=val_*10+(unsigned int)(*s-48);
                s++;
                digits++;
            }
            if(digits==0) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2742, 11);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            if(conv==117) {
                if(length==108) {
                    p=__builtin_va_arg(ap,unsigned long  int*);
                    *p=(unsigned long  int)val_;
                }
                else if(length==122) {
                    p_13=__builtin_va_arg(ap,unsigned long* );
                    *p_13=(unsigned long )val_;
                }
                else {
                    p_14=__builtin_va_arg(ap,unsigned int*);
                    *p_14=(unsigned int)val_;
                }
            }
            else {
                sval=((neg)?(-(long  long)val_):((long  long)val_));
                if(length==108) {
                    p_15=__builtin_va_arg(ap,long*);
                    *p_15=(long)sval;
                }
                else if(length==122) {
                    p_16=__builtin_va_arg(ap,long  long*);
                    *p_16=(long  long)sval;
                }
                else {
                    p_17=__builtin_va_arg(ap,int*);
                    *p_17=(int)sval;
                }
            }
            assigned++;
        }
        else if(conv==91) {
            invert=0;
            if(*f==94) {
                invert=1;
                f++;
            }
            char set[256]={0};
            if(*f==93) {
                ({ long long __neo_array_index57_0 = (long long)((unsigned int)93); if(__neo_array_index57_0 < 0 || __neo_array_index57_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index57_0] = 1; });
                f++;
            }
            while(*f&&*f!=93) {
                if(*(f+1)==45&&*(f+2)&&*(f+2)!=93) {
                    unsigned char  a=(unsigned char)*f,  b=(unsigned char)*(f+2);
                    if(a<=b) {
                        for(c=a                        ;c<=b;c++){
                            ({ long long __neo_array_index58_0 = (long long)(c); if(__neo_array_index58_0 < 0 || __neo_array_index58_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index58_0] = 1; });
                        }
                    }
                    else {
                        for(c_18=b                        ;c_18<=a;c_18++){
                            ({ long long __neo_array_index59_0 = (long long)(c_18); if(__neo_array_index59_0 < 0 || __neo_array_index59_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index59_0] = 1; });
                        }
                    }
                    f+=3;
                }
                else {
                    ({ long long __neo_array_index60_0 = (long long)((unsigned char)*f); if(__neo_array_index60_0 < 0 || __neo_array_index60_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index60_0] = 1; });
                    f++;
                }
            }
            if(*f==93) {
                f++;
            }
            out_19=__builtin_va_arg(ap,char*);
            if(!out_19) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2771, 12);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            n_20=0;
            while(*s&&(width==0||n_20<width)) {
                in=(*({ long long __neo_array_index61_0 = (long long)((unsigned char)*s); if(__neo_array_index61_0 < 0 || __neo_array_index61_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &set[__neo_array_index61_0]; }));
                if((in&&!invert)||(!in&&invert)) {
                    out_19[n_20++]=*s++;
                }
                else {
                    break;
                }
            }
            out_19[n_20]=0;
            if(n_20==0) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2779, 13);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            assigned++;
        }
        else if(conv==99) {
            out_21=__builtin_va_arg(ap,char*);
            n_22=(((width==0))?(1):(width));
            i=0;
            for(;i<n_22&&*s;i++){
                *out_21++=*s++;
            }
            if(i<n_22) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2785, 14);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            assigned++;
        }
        else if(conv==37) {
            if(*s!=37) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2788, 15);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            s++;
        }
        else {
            __builtin_va_end(ap);
                        __result_obj__0 = assigned;
            come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2791, 16);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        while(__minux_isspace((unsigned char)*f)) {
            while(__minux_isspace((unsigned char)*f)) {
                f++;
            }
            while(*s&&__minux_isspace((unsigned char)*s)) {
                s++;
            }
        }
    }
    __builtin_va_end(ap);
        __result_obj__0 = assigned;
    come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2800, 17);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool  neo_frame_is_alive(unsigned long  int frame_id)
{
    struct neo_frame*  f  ;
    memset(&f, 0, sizeof(f));
    f=neo_current_frame;
    while(f) {
        if(f->frame_id==frame_id) {
                        return (_Bool)1;
        }
        f=f->prev;
    }
        return (_Bool)0;
}

void stackframe()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    f=neo_current_frame;
    while(f) {
        fun_name=f->fun_name;
        printf("%s\n",fun_name);
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

void stackframe2(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&it, 0, sizeof(it));
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    if(come_is_alive(mem)&&mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
        printf("allocated at %s %d #%d. type is %s.\n",it->sname,it->sline,it->id,it->class_name);
    }
    f=neo_current_frame;
    while(f) {
        fun_name=f->fun_name;
        printf("%s\n",fun_name);
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

_Bool  die(const char* msg, char* sname, int sline)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "die"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    puts(((char* )(__right_value6=charp_operator_add(((char*)(__right_value5=xsprintf("\%s \%s : ",((char* )(__right_value3=charp_to_string(sname))),((char* )(__right_value4=int_to_string(sline)))))),msg))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 18));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 19));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 20));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 21));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 22));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 23));
    stackframe_v2();
    exit(4);
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

void come_memleak_checker()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_memleak_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    int n;
    _Bool  flag  ;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&n, 0, sizeof(n));
    memset(&flag, 0, sizeof(flag));
    memset(&i, 0, sizeof(i));
    it=gAllocMem;
    n=0;
    while(it) {
        n++;
        flag=(_Bool)0;
        printf("#%d ",n);
        if(it->class_name) {
            printf("%p (%s) %s %d: ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long )+sizeof(unsigned long ),it->class_name,it->sname,it->sline);
        }
        for(i=0        ;i<8;i++){
            if((*({ long long __neo_array_index62_0 = (long long)(i); if(__neo_array_index62_0 < 0 || __neo_array_index62_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &it->fun_name[__neo_array_index62_0]; }))) {
                printf("%s, ",(*({ long long __neo_array_index63_0 = (long long)(i); if(__neo_array_index63_0 < 0 || __neo_array_index63_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &it->fun_name[__neo_array_index63_0]; })));
                flag=(_Bool)1;
            }
        }
        if(flag) {
            puts("");
        }
        it=it->next;
    }
    if(n>0) {
        printf("%d memory leaks. %d alloc, %d free.\n",n,gNumAlloc,gNumFree);
    }
    neo_current_frame = fr.prev;
}

void* alloc_from_pages(unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "alloc_from_pages"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  it_prev  ;
    void* __result_obj__0;
    struct sMemHeader*  it_23  ;
    memset(&it, 0, sizeof(it));
    memset(&it_prev, 0, sizeof(it_prev));
    memset(&it_23, 0, sizeof(it_23));
    it=gFreeMem;
    it_prev=((void*)0);
    while(it) {
        if(size<=it->alloc_size) {
            if(it_prev==((void*)0)) {
                gFreeMem=((void*)0);
            }
            else {
                it_prev->free_next=it->free_next;
            }
            memset(it,0,size);
                        __result_obj__0 = it;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        it_prev=it;
        it=it->free_next;
    }
    it_23=(struct sMemHeader* )calloc(1,size);
    it_23->alloc_size=size;
        __result_obj__0 = it_23;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free_mem_of_heap_pool(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free_mem_of_heap_pool"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  prev_it  ;
    struct sMemHeader*  next_it  ;
    unsigned long  size  ;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&next_it, 0, sizeof(next_it));
    memset(&size, 0, sizeof(size));
    if(mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(struct sMemHeader ));
        if(it->allocated!=177783) {
                        neo_current_frame = fr.prev;
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
        it->free_next=gFreeMem;
        gFreeMem=it;
        it->alive=0;
        gNumFree++;
    }
    neo_current_frame = fr.prev;
}

void* come_alloc_mem_from_heap_pool(unsigned long  compiletime_size  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_alloc_mem_from_heap_pool"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  size2  ;
    void* result;
    struct sMemHeader*  it  ;
    int n;
    struct neo_frame*  f  ;
    char* fun_name;
    void* __result_obj__0;
    memset(&size2, 0, sizeof(size2));
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    memset(&n, 0, sizeof(n));
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    size2=size+sizeof(struct sMemHeader );
    size2=(size2+7&~0x7);
    result=alloc_from_pages(size2);
    it=result;
    it->allocated=177783;
    it->compiletime_size=compiletime_size;
    it->size=size2;
    it->free_next=((void*)0);
    it->alive=1;
    n=0;
    f=neo_current_frame;
    while(f&&n<8) {
        fun_name=f->fun_name;
        ({ long long __neo_array_index64_0 = (long long)(n); if(__neo_array_index64_0 < 0 || __neo_array_index64_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } it->fun_name[__neo_array_index64_0] = fun_name; });
        n++;
        f=f->prev;
    }
    it->next=gAllocMem;
    it->prev=((void*)0);
    it->class_name=class_name;
    it->sname=sname;
    it->sline=sline;
    it->id=id;
    if(gAllocMem) {
        gAllocMem->prev=it;
    }
    gAllocMem=it;
    gNumAlloc++;
        __result_obj__0 = (char*)result+sizeof(struct sMemHeader );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* come_dynamic_typeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_dynamic_typeof"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    char* __result_obj__0;
    memset(&it, 0, sizeof(it));
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe2(mem);
        exit(2);
    }
        __result_obj__0 = (char*)it->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  dynamic_sizeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "dynamic_sizeof"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    unsigned long  size  ;
    memset(&it, 0, sizeof(it));
    memset(&size, 0, sizeof(size));
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe2(mem);
        exit(2);
    }
    size=it->compiletime_size;
        neo_current_frame = fr.prev;
    return size;
    neo_current_frame = fr.prev;
}

void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* mem;
    unsigned long*  ref_count  ;
    unsigned long*  size2  ;
    void* __result_obj__0;
    memset(&mem, 0, sizeof(mem));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&size2, 0, sizeof(size2));
    mem=come_alloc_mem_from_heap_pool(count*size,sizeof(unsigned long )+sizeof(unsigned long )+count*size,sname,sline,id,class_name);
    ref_count=(unsigned long* )mem;
    *ref_count=0;
    size2=(unsigned long* )(mem+sizeof(unsigned long ));
    *size2=size*count+sizeof(unsigned long )+sizeof(unsigned long );
        __result_obj__0 = mem+sizeof(unsigned long )+sizeof(unsigned long );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool  come_is_alive(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_is_alive"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    memset(&it, 0, sizeof(it));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
        neo_current_frame = fr.prev;
    return it->alive;
    neo_current_frame = fr.prev;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    come_free_mem_of_heap_pool((char*)ref_count);
    neo_current_frame = fr.prev;
}

void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_memdup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    char* mem;
    unsigned long*  size_p  ;
    unsigned long  size  ;
    void* result;
    memset(&mem, 0, sizeof(mem));
    memset(&size_p, 0, sizeof(size_p));
    memset(&size, 0, sizeof(size));
    memset(&result, 0, sizeof(result));
    if(block==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(block)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 514, 24));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 514, 25));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 514, 26));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 514, 27));
        stackframe2(block);
        exit(3);
    }
    mem=(char*)block-sizeof(unsigned long )-sizeof(unsigned long );
    size_p=(unsigned long* )(mem+sizeof(unsigned long ));
    size=*size_p-sizeof(unsigned long )-sizeof(unsigned long );
    result=come_calloc_v2(1,size,sname,sline,id,class_name);
    memcpy(result,block,size);
        __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_increment_ref_count(void* mem, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_increment_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 540, 28));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 540, 29));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 540, 30));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 540, 31));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    (*ref_count)++;
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_print_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe_v2();
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    printf("ref_count %ld\n",*ref_count);
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe_v2();
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
        neo_current_frame = fr.prev;
    return *ref_count;
    neo_current_frame = fr.prev;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool  no_decrement  , _Bool  no_free  , void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_decrement_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer)(void*);
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer, 0, sizeof(finalizer));
    if(result_obj) {
        if(mem==result_obj) {
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(mem==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 603, 32));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 603, 33));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 603, 34));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 603, 35));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(long*)((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    if(!no_decrement) {
        (*ref_count)--;
    }
    count=*ref_count;
    if(!no_free&&count<=0) {
        if(protocol_obj&&protocol_fun) {
            finalizer=(void (*)(void*))protocol_fun;
            finalizer(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_call_finalizer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void (*finalizer)(void*);
    void (*finalizer_24)(void*);
    void (*finalizer_25)(void*);
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer_26)(void*);
    void (*finalizer_27)(void*);
    void (*finalizer_28)(void*);
    memset(&finalizer, 0, sizeof(finalizer));
    memset(&finalizer_24, 0, sizeof(finalizer_24));
    memset(&finalizer_25, 0, sizeof(finalizer_25));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer_26, 0, sizeof(finalizer_26));
    memset(&finalizer_27, 0, sizeof(finalizer_27));
    memset(&finalizer_28, 0, sizeof(finalizer_28));
    if(result_obj) {
        if(mem==result_obj) {
                        neo_current_frame = fr.prev;
            return;
        }
    }
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer=(void (*)(void*))protocol_fun;
                finalizer(protocol_obj);
            }
            finalizer_24=(void (*)(void*))fun;
            finalizer_24(mem);
        }
        else {
            if(protocol_obj&&protocol_fun) {
                finalizer_25=(void (*)(void*))protocol_fun;
                finalizer_25(protocol_obj);
            }
        }
    }
    else {
        if(!come_is_alive(mem)) {
            puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 660, 36));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 660, 37));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 660, 38));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 660, 39));
            stackframe2(mem);
            exit(3);
        }
        ref_count=(long*)((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
        if(!no_decrement) {
            (*ref_count)--;
        }
        count=*ref_count;
        if(!no_free&&count<=0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_26=(void (*)(void*))protocol_fun;
                        finalizer_26(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(fun) {
                        finalizer_27=(void (*)(void*))fun;
                        finalizer_27(mem);
                    }
                }
                else {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_28=(void (*)(void*))protocol_fun;
                        finalizer_28(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
    neo_current_frame = fr.prev;
}

void xassert(const char* msg, _Bool  test  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xassert"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    printf("%s...",msg);
    if(!test) {
        puts("false");
        stackframe_v2();
        exit(2);
    }
    puts("ok");
    neo_current_frame = fr.prev;
}

void* come_null_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_null_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    if(mem) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 40));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 41));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 42));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 43));
    stackframe_v2();
    exit(1);
    neo_current_frame = fr.prev;
}

void* come_heap_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_heap_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    if(mem) {
        if(come_is_alive(mem)) {
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else {
            puts(((char*)(__right_value3=xsprintf("heap pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 727, 44));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 727, 45));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 727, 46));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 727, 47));
            stackframe_v2();
            exit(1);
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s \%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 733, 48));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 733, 49));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 733, 50));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 733, 51));
    stackframe_v2();
    exit(1);
    neo_current_frame = fr.prev;
}

char*  __builtin_string(const char* str, char* sname, int sline)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 741, 52);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 741, 53));
        return __result_obj__0;
    }
    len=strlen(str)+1;
    result=come_calloc_v2(1,sizeof(char)*(len),sname,sline,0,"string");
    strncpy(result,str,len);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 750, 54);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 750, 55));
    return __result_obj__0;
}

void stackframe_v2()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe_v2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    stackframe();
    neo_current_frame = fr.prev;
}

void* come_calloc_v2(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc_v2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
        __result_obj__0 = come_calloc(count,size,sname,sline,id,class_name);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free_v2(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free_v2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    come_free(mem);
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj1;
    struct buffer*  __result_obj__0  ;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4942, 56, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4942, 58);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4942, 57);
    ((char*)self->buf)[0]=0;
    self->len=0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4946, 59);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4946, 60);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4946, 61);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj2;
    struct buffer*  __result_obj__0  ;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4952, 62, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4952, 64);
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4952, 63);
    ((char*)self->buf)[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4958, 65);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4958, 66);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4958, 67);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self&&self->buf) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4963, 68));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj3;
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 4969, 69);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4969, 70);
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 4972, 71, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 4972, 72);
    result->size=self->size;
    __right_value0 = (void*)0;
    __dec_obj3=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4975, 73, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4975, 75);
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4975, 74);
    result->len=self->len;
    memcpy(result->buf,self->buf,self->len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 4979, 76);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4979, 77);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4979, 78);
    return __result_obj__0;
}

_Bool  buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool  __result_obj__0  ;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        __result_obj__0 = string_equals(((char* )(__right_value0=buffer_to_string(left))),((char* )(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4991, 79));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4991, 80));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    ((char*)self->buf)[0]=0;
    self->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    self->len-=len;
    if(self->len>=0) {
        ((char*)self->buf)[self->len]=0;
    }
    else {
        self->len=0;
        ((char*)self->buf)[0]=0;
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj4;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5033, 81, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5033, 82);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5037, 83, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5037, 85);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5037, 84);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5043, 86));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_char(struct buffer*  self  , char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj5;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+1+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5057, 87, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5057, 88);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+10+1)*2;
        __right_value0 = (void*)0;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5061, 89, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5061, 91);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5061, 90);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5067, 92));
    }
    ((char*)self->buf)[self->len]=c;
    self->len++;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj6;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5084, 93, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5084, 94);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5087, 95, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5087, 97);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5087, 96);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5093, 98));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_format"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    __builtin_va_list  args  ;
    int len;
    void* __right_value0 = (void*)0;
    char*  mem  ;
    int size;
    int old_len;
    char* old_buf;
    int new_size;
    char* __dec_obj7;
    memset(&len, 0, sizeof(len));
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||msg==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    char result[128];
    memset(&result, 0, sizeof(result));
    __builtin_va_start(args,msg);
    vsnprintf(result,128,msg,args);
    __builtin_va_end(args);
    len=strlen(result);
    mem=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",5116), "/home/ab25cq/neo-c/neo-c.h", 5116, 99);
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5121, 100, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5121, 101);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5124, 102, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5124, 104);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5124, 103);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5130, 105));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
    free(result);
        __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5136, 106));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_nullterminated_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj8;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem)+1;
    if(self->len+size+1+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5187, 107, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5187, 108);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5190, 109, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5190, 111);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5190, 110);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5196, 112));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_int(struct buffer*  self  , int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_int"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj9;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(int);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5214, 113, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5214, 114);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5217, 115, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5217, 117);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5217, 116);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5223, 118));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_long(struct buffer*  self  , long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_long"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    long* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj10;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(long);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5240, 119, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5240, 120);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5243, 121, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5243, 123);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5243, 122);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5249, 124));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_short(struct buffer*  self  , short value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_short"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    short* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj11;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(short);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5267, 125, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5267, 126);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5270, 127, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5270, 129);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5270, 128);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5276, 130));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_alignment(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_alignment"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int len;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj12;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    len=self->len;
    len=(len+3)&~3;
    if(len>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5294, 131, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5294, 132);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+1+1)*2;
        __right_value0 = (void*)0;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5297, 133, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5297, 135);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5297, 134);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5303, 136));
    }
    for(i=self->len    ;i<len;i++){
        ((char*)self->buf)[i]=0;
    }
    self->len=len;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left->buf,right->buf);
    neo_current_frame = fr.prev;
}

struct buffer*  charp_to_buffer(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5329, 137, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5329, 138)), "/home/ab25cq/neo-c/neo-c.h", 5329, 139);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5332, 140);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5332, 141);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5332, 142);
        return __result_obj__0;
    }
    buffer_append_str(result,self);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5337, 143);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5337, 144);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5337, 145);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5343))), "/home/ab25cq/neo-c/neo-c.h", 5343, 146);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5343, 147));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5343, 148));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"/home/ab25cq/neo-c/neo-c.h",5346))), "/home/ab25cq/neo-c/neo-c.h", 5346, 149);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5346, 150));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5346, 151));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (unsigned char*)self->buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  chara_to_buffer(char* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5359, 152, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5359, 153)), "/home/ab25cq/neo-c/neo-c.h", 5359, 154);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5361, 155);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5361, 156);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5361, 157);
        return __result_obj__0;
    }
    buffer_append(result,self,sizeof(char)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5364, 158);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5364, 159);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5364, 160);
    return __result_obj__0;
}

struct buffer*  charpa_to_buffer(char** self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5369, 161, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5369, 162)), "/home/ab25cq/neo-c/neo-c.h", 5369, 163);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5371, 164);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5371, 165);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5371, 166);
        return __result_obj__0;
    }
    for(i=0    ;i<len;i++){
        buffer_append(result,self[i],strlen(self[i]));
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5376, 167);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5376, 168);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5376, 169);
    return __result_obj__0;
}

struct buffer*  shorta_to_buffer(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5381, 170, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5381, 171)), "/home/ab25cq/neo-c/neo-c.h", 5381, 172);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5383, 173);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5383, 174);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5383, 175);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(short)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5386, 176);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5386, 177);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5386, 178);
    return __result_obj__0;
}

struct buffer*  inta_to_buffer(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5391, 179, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5391, 180)), "/home/ab25cq/neo-c/neo-c.h", 5391, 181);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5393, 182);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5393, 183);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5393, 184);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(int)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5396, 185);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5396, 186);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5396, 187);
    return __result_obj__0;
}

struct buffer*  longa_to_buffer(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5401, 188, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5401, 189)), "/home/ab25cq/neo-c/neo-c.h", 5401, 190);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5403, 191);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5403, 192);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5403, 193);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(long)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5406, 194);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5406, 195);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5406, 196);
    return __result_obj__0;
}

struct buffer*  floata_to_buffer(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5411, 197, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5411, 198)), "/home/ab25cq/neo-c/neo-c.h", 5411, 199);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5413, 200);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5413, 201);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5413, 202);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(float)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5416, 203);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5416, 204);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5416, 205);
    return __result_obj__0;
}

struct buffer*  doublea_to_buffer(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5421, 206, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5421, 207)), "/home/ab25cq/neo-c/neo-c.h", 5421, 208);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5423, 209);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5423, 210);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5423, 211);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(double)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5426, 212);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5426, 213);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5426, 214);
    return __result_obj__0;
}

char*  buffer_printable(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int len;
    void* __right_value0 = (void*)0;
    char*  result  ;
    char*  __result_obj__0  ;
    int n;
    int i;
    unsigned char c;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&n, 0, sizeof(n));
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    len=self->len;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 5432, 215, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5432, 216);
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5435, 217);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5435, 218));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5435, 219));
        return __result_obj__0;
    }
    n=0;
    for(i=0    ;i<len;i++){
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
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5458, 220);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5458, 221));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5458, 222));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1char$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1char$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 230);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 232);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 233);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_29;
    struct list_item$1char$* litem_30;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_29, 0, sizeof(litem_29));
    memset(&litem_30, 0, sizeof(litem_30));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 224, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 225);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_29=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 226, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 227);
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        __right_value0 = (void*)0;
        litem_30=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 228, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 229);
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 231);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$* chara_to_list(char* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5483, 223, "struct list$1char$*"), "/home/ab25cq/neo-c/neo-c.h", 5483, 234),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5483, 235);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5483, 236);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5483, 237);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1char$p* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1char$p_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 245);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 247);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 248);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_31;
    struct list_item$1char$p* litem_32;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_31, 0, sizeof(litem_31));
    memset(&litem_32, 0, sizeof(litem_32));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 239, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 240);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_31=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 241, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 242);
        litem_31->prev=self->head;
        litem_31->next=((void*)0);
        litem_31->item=item;
        self->tail=litem_31;
        self->head->next=litem_31;
    }
    else {
        __right_value0 = (void*)0;
        litem_32=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 243, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 244);
        litem_32->prev=self->tail;
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail->next=litem_32;
        self->tail=litem_32;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 246);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$p* charpa_to_list(char** self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 5488, 238, "struct list$1char$p*"), "/home/ab25cq/neo-c/neo-c.h", 5488, 249),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5488, 250);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5488, 251);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5488, 252);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1short$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1short$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 260);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 262);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 263);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_33;
    struct list_item$1short$* litem_34;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_33, 0, sizeof(litem_33));
    memset(&litem_34, 0, sizeof(litem_34));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 254, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 255);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_33=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 256, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 257);
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        litem_33->item=item;
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        __right_value0 = (void*)0;
        litem_34=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 258, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 259);
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 261);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1short$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1short$* shorta_to_list(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5493, 253, "struct list$1short$*"), "/home/ab25cq/neo-c/neo-c.h", 5493, 264),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5493, 265);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5493, 266);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5493, 267);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1int$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1int$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 275);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 277);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 278);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_35;
    struct list_item$1int$* litem_36;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_35, 0, sizeof(litem_35));
    memset(&litem_36, 0, sizeof(litem_36));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 269, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 270);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_35=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 271, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 272);
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        __right_value0 = (void*)0;
        litem_36=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 273, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 274);
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 276);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1int$* inta_to_list(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5498, 268, "struct list$1int$*"), "/home/ab25cq/neo-c/neo-c.h", 5498, 279),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5498, 280);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5498, 281);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5498, 282);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1long$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1long$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 290);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 292);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 293);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_37;
    struct list_item$1long$* litem_38;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_37, 0, sizeof(litem_37));
    memset(&litem_38, 0, sizeof(litem_38));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 284, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 285);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_37=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 286, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 287);
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 288, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 289);
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 291);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1long$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1long$* longa_to_list(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5503, 283, "struct list$1long$*"), "/home/ab25cq/neo-c/neo-c.h", 5503, 294),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5503, 295);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5503, 296);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5503, 297);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1float$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1float$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 305);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 307);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 308);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_39;
    struct list_item$1float$* litem_40;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_39, 0, sizeof(litem_39));
    memset(&litem_40, 0, sizeof(litem_40));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 299, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 300);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_39=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 301, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 302);
        litem_39->prev=self->head;
        litem_39->next=((void*)0);
        litem_39->item=item;
        self->tail=litem_39;
        self->head->next=litem_39;
    }
    else {
        __right_value0 = (void*)0;
        litem_40=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 303, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 304);
        litem_40->prev=self->tail;
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail->next=litem_40;
        self->tail=litem_40;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 306);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1float$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1float$* floata_to_list(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5508, 298, "struct list$1float$*"), "/home/ab25cq/neo-c/neo-c.h", 5508, 309),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5508, 310);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5508, 311);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5508, 312);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1double$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1double$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 320);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 322);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 323);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_41;
    struct list_item$1double$* litem_42;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_41, 0, sizeof(litem_41));
    memset(&litem_42, 0, sizeof(litem_42));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 314, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 315);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_41=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 316, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 317);
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        __right_value0 = (void*)0;
        litem_42=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 318, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 319);
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 321);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1double$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1double$* doublea_to_list(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5513, 313, "struct list$1double$*"), "/home/ab25cq/neo-c/neo-c.h", 5513, 324),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5513, 325);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5513, 326);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5513, 327);
    return __result_obj__0;
}

_Bool  bool_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  char_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  short_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  int_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  long_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  size_t_equals(unsigned long  self  , unsigned long  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  float_equals(float self, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  double_equals(double self, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  bool_operator_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  _Bool_operator_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  bool_operator_not_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  _Bool_operator_not_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  boolp_equals(_Bool*  self  , _Bool*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "boolp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool  string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool  string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool  charp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool  chara_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

char*  charp_operator_add(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||right==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5756))), "/home/ab25cq/neo-c/neo-c.h", 5756, 328);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5756, 329));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5756, 330));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5760, 331, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5760, 332);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5765, 333);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5765, 334));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5765, 335));
    return __result_obj__0;
}

char*  string_operator_add(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||right==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5771))), "/home/ab25cq/neo-c/neo-c.h", 5771, 336);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5771, 337));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5771, 338));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5775, 339, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5775, 340);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5780, 341);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5780, 342));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5780, 343));
    return __result_obj__0;
}

char*  charp_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_mult"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5786))), "/home/ab25cq/neo-c/neo-c.h", 5786, 344);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5786, 345));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5786, 346));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5788, 347, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5788, 348)), "/home/ab25cq/neo-c/neo-c.h", 5788, 349);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5794, 350);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5794, 351);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5794, 352));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5794, 353));
    return __result_obj__0;
}

char*  string_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_mult"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5800))), "/home/ab25cq/neo-c/neo-c.h", 5800, 354);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5800, 355));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5800, 356));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5802, 357, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5802, 358)), "/home/ab25cq/neo-c/neo-c.h", 5802, 359);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5808, 360);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5808, 361);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5808, 362));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5808, 363));
    return __result_obj__0;
}

_Bool  charpa_contained(const char* self[], unsigned long  len  , const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  result  ;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(_Bool)0;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return result;
    }
    for(i=0    ;i<len;i++){
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            result=(_Bool)1;
            break;
        }
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  shorta_length(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  inta_length(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  longa_length(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  floata_length(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  doublea_length(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int bool_get_hash_key(_Bool  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    if(value==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    const char* p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int string_get_hash_key(char* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    char* p;
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    if(value==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int voidp_get_hash_key(void* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool  bool_clone(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool  _Bool_clone(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  size_t_clone(unsigned long  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool  xisalpha(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  result  ;
    memset(&result, 0, sizeof(result));
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool  xisblank(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool  xisdigit(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool  xisspace(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool  xisalnum(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool  xisascii(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  result  ;
    memset(&result, 0, sizeof(result));
    result=(c>=32&&c<=126);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool  xispunct(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int charp_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int chara_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

char*  charp_reverse(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_reverse"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6060))), "/home/ab25cq/neo-c/neo-c.h", 6060, 364);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6060, 365));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6060, 366));
        return __result_obj__0;
    }
    len=strlen(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 6063, 367, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6063, 368);
    for(i=0    ;i<len;i++){
        result[i]=str[len-i-1];
    }
    result[len]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6071, 369);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6071, 370));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6071, 371));
    return __result_obj__0;
}

char*  string_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_load_range_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6077))), "/home/ab25cq/neo-c/neo-c.h", 6077, 372);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6077, 373));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6077, 374));
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
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6090, 375);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6090, 376));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6090, 377));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6090, 378));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6102))), "/home/ab25cq/neo-c/neo-c.h", 6102, 379);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6102, 380));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6102, 381));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6106))), "/home/ab25cq/neo-c/neo-c.h", 6106, 382);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6106, 383));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6106, 384));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6109, 385, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6109, 386);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6114, 387);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6114, 388));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6114, 389));
    return __result_obj__0;
}

char*  charp_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_load_range_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6120))), "/home/ab25cq/neo-c/neo-c.h", 6120, 390);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6120, 391));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6120, 392));
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
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6133, 393);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6133, 394));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6133, 395));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6133, 396));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6145))), "/home/ab25cq/neo-c/neo-c.h", 6145, 397);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6145, 398));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6145, 399));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6149))), "/home/ab25cq/neo-c/neo-c.h", 6149, 400);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6149, 401));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6149, 402));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6152, 403, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6152, 404);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6157, 405);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6157, 406));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6157, 407));
    return __result_obj__0;
}

char*  charp_substring(const char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_substring"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6163))), "/home/ab25cq/neo-c/neo-c.h", 6163, 408);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6163, 409));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6163, 410));
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
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6176, 411);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6176, 412));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6176, 413));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6176, 414));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6188))), "/home/ab25cq/neo-c/neo-c.h", 6188, 415);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6188, 416));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6188, 417));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6192))), "/home/ab25cq/neo-c/neo-c.h", 6192, 418);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6192, 419));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6192, 420));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6195, 421, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6195, 422);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6200, 423);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6200, 424));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6200, 425));
    return __result_obj__0;
}

char*  xsprintf(const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __builtin_va_list  args  ;
    char* result;
    int len;
    char*  result2  ;
    memset(&result, 0, sizeof(result));
    memset(&len, 0, sizeof(len));
    memset(&result2, 0, sizeof(result2));
    if(msg==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6206))), "/home/ab25cq/neo-c/neo-c.h", 6206, 426);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6206, 427));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6206, 428));
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6215))), "/home/ab25cq/neo-c/neo-c.h", 6215, 429);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6215, 430));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6215, 431));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",6218), "/home/ab25cq/neo-c/neo-c.h", 6218, 432);
    free(result);
        __result_obj__0 = (char* )come_increment_ref_count(result2, "/home/ab25cq/neo-c/neo-c.h", 6222, 433);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6222, 434));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6222, 435));
    return __result_obj__0;
}

char*  charp_delete(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_delete"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6228))), "/home/ab25cq/neo-c/neo-c.h", 6228, 436);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6228, 437));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6228, 438));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head>=len) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6234))), "/home/ab25cq/neo-c/neo-c.h", 6234, 439);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6234, 440));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6234, 441));
        return __result_obj__0;
    }
    if(strcmp(str,"")==0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6238))), "/home/ab25cq/neo-c/neo-c.h", 6238, 442);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6238, 443));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6238, 444));
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
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6254))), "/home/ab25cq/neo-c/neo-c.h", 6254, 445);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6254, 446));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6254, 447));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len-(tail-head)+1)), "/home/ab25cq/neo-c/neo-c.h", 6261, 448, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6261, 449);
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    result[len-(tail-head)]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6268, 450);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6268, 451));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6268, 452));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1543, 454);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 457);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 458);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 456);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 455));
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj13  ;
    struct list_item$1char$ph* litem_43;
    char*  __dec_obj14  ;
    struct list_item$1char$ph* litem_44;
    char*  __dec_obj15  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_43, 0, sizeof(litem_43));
    memset(&litem_44, 0, sizeof(litem_44));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1673, 469));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 470, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 471);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj13=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1681, 473);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1681, 472);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_43=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 474, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 475);
        litem_43->prev=self->head;
        litem_43->next=((void*)0);
        __dec_obj14=litem_43->item,
        litem_43->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1691, 477);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1691, 476);
        self->tail=litem_43;
        self->head->next=litem_43;
    }
    else {
        __right_value0 = (void*)0;
        litem_44=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 478, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 479);
        litem_44->prev=self->tail;
        litem_44->next=((void*)0);
        __dec_obj15=litem_44->item,
        litem_44->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1701, 481);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1701, 480);
        self->tail->next=litem_44;
        self->tail=litem_44;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1709, 482));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct list$1char$ph* charp_split_char(char* self, char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer*  str  ;
    int self_len;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&str, 0, sizeof(str));
    memset(&self_len, 0, sizeof(self_len));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6274, 453, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6274, 459)))), "/home/ab25cq/neo-c/neo-c.h", 6274, 460);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6274, 461);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6274, 462);
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6277, 463, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6277, 464)), "/home/ab25cq/neo-c/neo-c.h", 6277, 465);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6279, 466, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6279, 467)), "/home/ab25cq/neo-c/neo-c.h", 6279, 468);
    self_len=charp_length(self);
    for(i=0    ;i<self_len;i++){
        if(self[i]==c) {
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6284), "/home/ab25cq/neo-c/neo-c.h", 6284, 483));
            buffer_reset(str);
        }
        else {
            buffer_append_char(str,self[i]);
        }
    }
    if(buffer_length(str)!=0) {
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6292), "/home/ab25cq/neo-c/neo-c.h", 6292, 484));
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6295, 485);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6295, 486);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6295, 487);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6295, 488);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6300, 489);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6300, 490));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6300, 491));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6305, 492);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6305, 493));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6305, 494));
    return __result_obj__0;
}

char*  charp_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char*  result  ;
    int n;
    int i;
    char c;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&n, 0, sizeof(n));
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6311))), "/home/ab25cq/neo-c/neo-c.h", 6311, 495);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6311, 496));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6311, 497));
        return __result_obj__0;
    }
    len=charp_length(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 6314, 498, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6314, 499);
    n=0;
    for(i=0    ;i<len;i++){
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
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6333, 500);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6333, 501));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6333, 502));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "/home/ab25cq/neo-c/neo-c.h", 6338, 503);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6338, 504));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6338, 505));
    return __result_obj__0;
}

char*  charp_sub_plain(char* self, char* str, char* replace)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub_plain"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char* p;
    char* p2;
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    memset(&p2, 0, sizeof(p2));
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6344))), "/home/ab25cq/neo-c/neo-c.h", 6344, 506);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6344, 507));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6344, 508));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6347, 509, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6347, 510)), "/home/ab25cq/neo-c/neo-c.h", 6347, 511);
    p=self;
    while((_Bool)1) {
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
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "/home/ab25cq/neo-c/neo-c.h", 6369, 512);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6369, 513);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6369, 514));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6369, 515));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6378))), "/home/ab25cq/neo-c/neo-c.h", 6378, 516);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6378, 517));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6378, 518));
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
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6392))), "/home/ab25cq/neo-c/neo-c.h", 6392, 519);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6392, 520));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6392, 521));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6395))), "/home/ab25cq/neo-c/neo-c.h", 6395, 522);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6395, 523));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6395, 524));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6398))), "/home/ab25cq/neo-c/neo-c.h", 6398, 525);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6398, 526));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6398, 527));
    return __result_obj__0;
}

char*  xnoextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xnoextname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  path2  ;
    char* p;
    memset(&path2, 0, sizeof(path2));
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6404))), "/home/ab25cq/neo-c/neo-c.h", 6404, 528);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6404, 529));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6404, 530));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "/home/ab25cq/neo-c/neo-c.h", 6406, 531);
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
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"/home/ab25cq/neo-c/neo-c.h",6420))), "/home/ab25cq/neo-c/neo-c.h", 6420, 532);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6420, 533));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6420, 534));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6420, 535));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "/home/ab25cq/neo-c/neo-c.h", 6423, 536);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6423, 537));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6423, 538));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6423, 539));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6426))), "/home/ab25cq/neo-c/neo-c.h", 6426, 540);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6426, 541));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6426, 542));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6426, 543));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6432))), "/home/ab25cq/neo-c/neo-c.h", 6432, 544);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6432, 545));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6432, 546));
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
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6446))), "/home/ab25cq/neo-c/neo-c.h", 6446, 547);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6446, 548));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6446, 549));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6449))), "/home/ab25cq/neo-c/neo-c.h", 6449, 550);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6449, 551));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6449, 552));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6452))), "/home/ab25cq/neo-c/neo-c.h", 6452, 553);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6452, 554));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6452, 555));
    return __result_obj__0;
}

char*  bool_to_string(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","/home/ab25cq/neo-c/neo-c.h",6461))), "/home/ab25cq/neo-c/neo-c.h", 6461, 556);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6461, 557));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6461, 558));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","/home/ab25cq/neo-c/neo-c.h",6464))), "/home/ab25cq/neo-c/neo-c.h", 6464, 559);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6464, 560));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6464, 561));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  _Bool_to_string(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","/home/ab25cq/neo-c/neo-c.h",6471))), "/home/ab25cq/neo-c/neo-c.h", 6471, 562);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6471, 563));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6471, 564));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","/home/ab25cq/neo-c/neo-c.h",6474))), "/home/ab25cq/neo-c/neo-c.h", 6474, 565);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6474, 566));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6474, 567));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "/home/ab25cq/neo-c/neo-c.h", 6480, 568);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6480, 569));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6480, 570));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6485, 571);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6485, 572));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6485, 573));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6490, 574);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6490, 575));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6490, 576));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6495, 577);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6495, 578));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6495, 579));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6500, 580);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6500, 581));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6500, 582));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "/home/ab25cq/neo-c/neo-c.h", 6505, 583);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6505, 584));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6505, 585));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "/home/ab25cq/neo-c/neo-c.h", 6510, 586);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6510, 587));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6510, 588));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6516))), "/home/ab25cq/neo-c/neo-c.h", 6516, 589);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6516, 590));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6516, 591));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6518))), "/home/ab25cq/neo-c/neo-c.h", 6518, 592);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6518, 593));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6518, 594));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6524))), "/home/ab25cq/neo-c/neo-c.h", 6524, 595);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6524, 596));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6524, 597));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6526))), "/home/ab25cq/neo-c/neo-c.h", 6526, 598);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6526, 599));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6526, 600));
    return __result_obj__0;
}

int bool_compare(_Bool  left  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!left&&right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int _Bool_compare(_Bool  left  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!left&&right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int char_compare(char left, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int short_compare(short left, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int int_compare(int left, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int long_compare(long left, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int size_t_compare(unsigned long  left  , unsigned long  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int float_compare(float left, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int double_compare(double left, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int string_compare(char* left, char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

int charp_compare(char* left, char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

char*  charp_puts(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6709))), "/home/ab25cq/neo-c/neo-c.h", 6709, 601);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6709, 602));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6709, 603));
        return __result_obj__0;
    }
    puts(self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6713))), "/home/ab25cq/neo-c/neo-c.h", 6713, 604);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6713, 605));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6713, 606));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6719))), "/home/ab25cq/neo-c/neo-c.h", 6719, 607);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6719, 608));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6719, 609));
        return __result_obj__0;
    }
    printf("%s",self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6723))), "/home/ab25cq/neo-c/neo-c.h", 6723, 610);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6723, 611));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6723, 612));
    return __result_obj__0;
}

char*  charp_printf(char* self, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    memset(&msg2, 0, sizeof(msg2));
    memset(&len, 0, sizeof(len));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6730))), "/home/ab25cq/neo-c/neo-c.h", 6730, 613);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6730, 614));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6730, 615));
        return __result_obj__0;
    }
    char msg2_45[128];
    memset(&msg2_45, 0, sizeof(msg2_45));
    __builtin_va_start(args,self);
    len=snprintf(msg2_45,128,self,args);
    __builtin_va_end(args);
    printf("%s",msg2_45);
    free(msg2_45);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6745))), "/home/ab25cq/neo-c/neo-c.h", 6745, 616);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6745, 617));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6745, 618));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long long_printf(long self, char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<self;i++){
        block(parent,i);
    }
    neo_current_frame = fr.prev;
}

int string_index(char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* head;
    memset(&head, 0, sizeof(head));
    if(str==((void*)0)||search_str==((void*)0)) {
                neo_current_frame = fr.prev;
        return default_value;
    }
    head=strstr(str,search_str);
    if(head==((void*)0)) {
                neo_current_frame = fr.prev;
        return default_value;
    }
        neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

