/// c_include definition ///
/// typedef definition ///
typedef char* string;

typedef unsigned char __u_char;

typedef unsigned short int __u_short;

typedef unsigned int __u_int;

typedef unsigned long  int __u_long;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short int __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long  int __int64_t;

typedef unsigned long  int __uint64_t;

typedef char  __int_least8_t  ;

typedef unsigned char  __uint_least8_t  ;

typedef short int  __int_least16_t  ;

typedef unsigned short int  __uint_least16_t  ;

typedef int  __int_least32_t  ;

typedef unsigned int  __uint_least32_t  ;

typedef long  int  __int_least64_t  ;

typedef unsigned long  int  __uint_least64_t  ;

typedef long  int __quad_t;

typedef unsigned long  int __u_quad_t;

typedef long  int __intmax_t;

typedef unsigned long  int __uintmax_t;

typedef unsigned long  int __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long  int __ino_t;

typedef unsigned long  int __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long  int __nlink_t;

typedef long  int __off_t;

typedef long  int __off64_t;

typedef int __pid_t;

typedef struct __fsid_t  __fsid_t  ;

typedef long  int __clock_t;

typedef unsigned long  int __rlim_t;

typedef unsigned long  int __rlim64_t;

typedef unsigned int __id_t;

typedef long  int __time_t;

typedef unsigned int __useconds_t;

typedef long  int __suseconds_t;

typedef long  int __suseconds64_t;

typedef int __daddr_t;

typedef int __key_t;

typedef int __clockid_t;

typedef void* __timer_t;

typedef long  int __blksize_t;

typedef long  int __blkcnt_t;

typedef long  int __blkcnt64_t;

typedef unsigned long  int __fsblkcnt_t;

typedef unsigned long  int __fsblkcnt64_t;

typedef unsigned long  int __fsfilcnt_t;

typedef unsigned long  int __fsfilcnt64_t;

typedef long  int __fsword_t;

typedef long  int __ssize_t;

typedef long  int __syscall_slong_t;

typedef unsigned long  int __syscall_ulong_t;

typedef long  int  __loff_t  ;

typedef char* __caddr_t;

typedef long  int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef char  int8_t  ;

typedef short int  int16_t  ;

typedef int  int32_t  ;

typedef long  int  int64_t  ;

typedef unsigned char  uint8_t  ;

typedef unsigned short int  uint16_t  ;

typedef unsigned int  uint32_t  ;

typedef unsigned long  int  uint64_t  ;

typedef char  int_least8_t  ;

typedef short int  int_least16_t  ;

typedef int  int_least32_t  ;

typedef long  int  int_least64_t  ;

typedef unsigned char  uint_least8_t  ;

typedef unsigned short int  uint_least16_t  ;

typedef unsigned int  uint_least32_t  ;

typedef unsigned long  int  uint_least64_t  ;

typedef char int_fast8_t;

typedef long  int int_fast16_t;

typedef long  int int_fast32_t;

typedef long  int int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned long  int uint_fast16_t;

typedef unsigned long  int uint_fast32_t;

typedef unsigned long  int uint_fast64_t;

typedef long  int intptr_t;

typedef unsigned long  int uintptr_t;

typedef long  int  intmax_t  ;

typedef unsigned long  int  uintmax_t  ;

typedef __builtin_va_list  __gnuc_va_list  ;

typedef __builtin_va_list  va_list  ;

typedef long ptrdiff_t;

typedef unsigned long  int size_t;

typedef int wchar_t;

typedef struct anonymous_typeX1 max_align_t;

typedef struct anonymous_typeX2 glob_t;

typedef struct mem_block  mem_block_t  ;

typedef struct anonymous_typeX3 __buf_ctx_t;

typedef struct anonymous_typeX4 __str_ctx_t;

typedef struct anonymous_typeX5 __fmt_out_t;

typedef int*  wstring  ;

/// previous struct definition ///
/// struct definition ///
struct __fsid_t
{
    int __val[2];
};

struct anonymous_typeX1
{
    long long __attribute__((__aligned__(__alignof__(long long)))) __clang_max_align_nonce1 __attribute__((__aligned__(__alignof__(long long))));
    long  double __attribute__((__aligned__(__alignof__(long double)))) __clang_max_align_nonce2 __attribute__((__aligned__(__alignof__(long double))));
};

struct anonymous_typeX2
{
    unsigned long  int  gl_pathc  ;
    char** gl_pathv;
};

struct mem_block
{
    unsigned long  int  size  ;
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

struct anonymous_typeX3
{
    char* p;
    unsigned long  int rem;
};

struct anonymous_typeX4
{
    char* p;
};

struct anonymous_typeX5
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

/// variable definition ///
extern int errno;

extern struct mem_block*  free_list  ;

void (*__atexit_funcs[32])();
extern int __atexit_count;

extern char* __strtok_save;

extern struct neo_frame*  neo_current_frame  ;

extern unsigned long  int neo_frame_id;

extern struct sMemHeader*  gAllocMem  ;

extern struct sMemHeader*  gFreeMem  ;

extern int gNumAlloc;

extern int gNumFree;

// source head

// header function
unsigned long  int  brk(unsigned long  int  size  );
void putchar(char c);
int charp_index_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
char*  string_chomp(const char* str);
int string_rindex_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
int string_index_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
_Bool charp_match(char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool ignore_case);
char*  string_sub(char* self, const char* reg, const char* replace, _Bool ignore_case);
struct list$1char$ph* string_scan(char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* string_split(char* self, const char* reg, _Bool ignore_case);
_Bool string_match(char* self, const char* reg, _Bool ignore_case);
char*  charp_sub(char* self, const char* reg, const char* replace, _Bool global, _Bool ignore_case);
char*  charp_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char*  string_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
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
_Bool wstring_operator_equals(const int*  left  , const int*  right  );
_Bool wstring_operator_not_equals(const int*  left  , const int*  right  );
int*  wchar_tp_operator_add(const int*  left  , const int*  right  );
int*  wstring_operator_add(const int*  left  , const int*  right  );
char*  charp_replace(char* self, int index, char c);
char*  charp_multiply(const char* str, int n);
struct list$1char$ph* charp_split_str(const char* self, const char* str);
unsigned int wchar_tp_get_hash_key(const int*  value  );
_Bool wstring_equals(const int*  left  , const int*  right  );
_Bool wchar_t_operator_equals(int  left  , int  right  );
_Bool wchar_t_operator_not_equals(int  left  , int  right  );
unsigned int wchar_t_get_hash_key(int  value  );
_Bool wchar_t_equals(int  left  , int  right  );
char*  wchar_t_to_string(int  wc  );
char*  xrealpath(const char* path);
char*  xdirname(const char* path);
unsigned long  int  xwcslen(const int*  wstr  );
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
_Bool wchar_tp_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_not_equals(const int*  left  , const int*  right  );
int main();
int __append_char(char** p, unsigned long  int* rem, char c);
void __append_str(char** p, unsigned long  int* rem, const char* s);
void exit(int status);
void* sbrk(long  increment  );
void* malloc(unsigned long  int  size  );
void free(void* ptr);
void* calloc(unsigned long  int  nmemb  , unsigned long  int  size  );
void* realloc(void* ptr, unsigned long  int  size  );
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memchr(const void* s, int c, unsigned long  int  n  );
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strncmp(const char* p, const char* q, unsigned int n);
char* strcpy(char* dest, const char* src);
char* strncpy(char* s, const char* t, int n);
int strlen(const char* s);
char* strchr(const char* s, int c);
char* strrchr(const char* s, int c);
char* strndup(const char* s, unsigned long  int  n  );
unsigned long  int  arg_file_capacity(const struct arg_file*  file  );
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
void arg_print_joined_option(char* buf, unsigned long  int  bufsz  , const struct arg_hdr*  hdr  );
void arg_print_syntax(void** argtable, const char* suffix);
void arg_print_glossary(void** argtable, const char* format);
void arg_print_errors(struct arg_end*  end  , const char* progname);
void arg_freetable(void** argtable, unsigned long  int  n  );
int isprint(int c);
int isspace(int c);
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int puts(const char* s);
char* strcat(char* dest, const char* src);
char* strncat(char* dest, const char* src, unsigned long  int  n  );
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, __builtin_va_list  ap  );
int __utoa_ull(char* dst, unsigned long  long v, int base, int lower);
void __fmt_num(char** p, unsigned long  int* rem, unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower);
void __fmt_putc(struct anonymous_typeX5*  o  , char c);
int __is_digit(char c);
void __emit_pad(struct anonymous_typeX5*  o  , char pad, int n);
void __emit_num(struct anonymous_typeX5*  o  , unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower, int left);
void __vformat(struct anonymous_typeX5*  o  , const char* fmt, __builtin_va_list  ap  );
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
long strtol(const char* nptr, char** endptr, int base);
long long strtoll(const char* nptr, char** endptr, int base);
long atol(const char* nptr);
int atoi(const char* nptr);
int __tolower(int c);
int strncasecmp(const char* a, const char* b, unsigned long  int  n  );
char* strerror(int errnum);
int ispunct(int c);
char* strtok(char* s, const char* delim);
int isxdigit(int c);
int __minux_isspace(int c);
int sscanf(const char* str, const char* fmt, ...);
_Bool neo_frame_is_alive(unsigned long  int frame_id);
void stackframe();
void stackframe2(void* mem);
_Bool die(const char* msg, char* sname, int sline);
void come_memleak_checker();
void* alloc_from_pages(unsigned long  int  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int  compiletime_size  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  int  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  int  count  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name);
_Bool come_is_alive(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name);
void* come_increment_ref_count(void* mem, char* sname, int sline, int id);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj, char* sname, int sline, int id);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id);
void xassert(const char* msg, _Bool test);
void* come_null_checker(void* mem, const char* sname, int sline, int id);
void* come_heap_checker(void* mem, const char* sname, int sline, int id);
char*  __builtin_string(const char* str, char* sname, int sline);
void stackframe_v2();
void* come_calloc_v2(unsigned long  int  count  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name);
void come_free_v2(void* mem);
struct buffer*  buffer_initialize(struct buffer*  self  );
struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  );
void buffer_finalize(struct buffer*  self  );
struct buffer*  buffer_clone(struct buffer*  self  );
_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  );
int buffer_length(struct buffer*  self  );
void buffer_reset(struct buffer*  self  );
void buffer_trim(struct buffer*  self  , int len);
struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  int  size  );
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
struct buffer*  chara_to_buffer(char* self, unsigned long  int  len  );
struct buffer*  charpa_to_buffer(char** self, unsigned long  int  len  );
struct buffer*  shorta_to_buffer(short* self, unsigned long  int  len  );
struct buffer*  inta_to_buffer(int* self, unsigned long  int  len  );
struct buffer*  longa_to_buffer(long* self, unsigned long  int  len  );
struct buffer*  floata_to_buffer(float* self, unsigned long  int  len  );
struct buffer*  doublea_to_buffer(double* self, unsigned long  int  len  );
char*  buffer_printable(struct buffer*  self  );
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* chara_to_list(char* self, unsigned long  int  len  );
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charpa_to_list(char** self, unsigned long  int  len  );
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shorta_to_list(short* self, unsigned long  int  len  );
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* inta_to_list(int* self, unsigned long  int  len  );
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longa_to_list(long* self, unsigned long  int  len  );
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floata_to_list(float* self, unsigned long  int  len  );
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublea_to_list(double* self, unsigned long  int  len  );
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int  self  , unsigned long  int  right  );
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(const char* self, const char* right);
_Bool string_equals(char* self, const char* right);
_Bool voidp_equals(void* self, void* right);
_Bool _Boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, const char* right);
_Bool charp_operator_equals(const char* self, const char* right);
_Bool chara_operator_equals(char* self, const char* right);
_Bool voidp_operator_equals(const char* self, const char* right);
_Bool voidp_operator_not_equals(const char* self, const char* right);
_Bool string_operator_not_equals(char* self, const char* right);
_Bool charp_operator_not_equals(const char* self, const char* right);
_Bool chara_operator_not_equals(char* self, const char* right);
char*  charp_operator_add(const char* self, const char* right);
char*  string_operator_add(char* self, const char* right);
char*  charp_operator_mult(const char* self, int right);
char*  string_operator_mult(const char* self, int right);
_Bool charpa_contained(const char* self[], unsigned long  int  len  , const char* str);
unsigned long  int  shorta_length(short* self, unsigned long  int  len  );
unsigned long  int  inta_length(int* self, unsigned long  int  len  );
unsigned long  int  longa_length(long* self, unsigned long  int  len  );
unsigned long  int  floata_length(float* self, unsigned long  int  len  );
unsigned long  int  doublea_length(double* self, unsigned long  int  len  );
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int  value  );
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(const char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int  size_t_clone(unsigned long  int  self  );
double double_clone(double self);
float float_clone(float self);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisspace(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
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
char*  _Bool_to_string(_Bool self);
char*  char_to_string(char self);
char*  short_to_string(short self);
char*  int_to_string(int self);
char*  long_to_string(long self);
char*  size_t_to_string(unsigned long  int  self  );
char*  float_to_string(float self);
char*  double_to_string(double self);
char*  string_to_string(char* self);
char*  charp_to_string(const char* self);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int  left  , unsigned long  int  right  );
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
int main()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "main"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int __result_obj__0;
        __result_obj__0 = 0;
    neo_current_frame = fr.prev;
    come_memleak_checker();
    return __result_obj__0;
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

void exit(int status)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "exit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(1) {
        ;
    }
    neo_current_frame = fr.prev;
}

void* sbrk(long  increment  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sbrk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    static unsigned long  int  cur  ;
    long now;
    void* __result_obj__0;
    unsigned long  int  want  ;
    long rc;
    long newer;
    void* old;
    memset(&cur, 0, sizeof(cur));
    memset(&now, 0, sizeof(now));
    memset(&want, 0, sizeof(want));
    memset(&rc, 0, sizeof(rc));
    memset(&newer, 0, sizeof(newer));
    memset(&old, 0, sizeof(old));
    static int inited=0;
    if(!inited) {
        now=brk(0);
        if(now<0) {
            errno=12;
                        __result_obj__0 = (void*)-1;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        cur=(unsigned long  int )now;
        inited=1;
    }
    if(increment==0) {
                __result_obj__0 = (void*)cur;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    want=cur+(long  int )increment;
    if((increment>0&&want<cur)||(increment<0&&want>cur)) {
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
    old=(void*)cur;
    cur=(unsigned long  int )newer;
        __result_obj__0 = old;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* malloc(unsigned long  int  size  )
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
    if(({ __typeof__(8) __neo_div_right1 = (8); if(__neo_div_right1 == 0) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (size) % __neo_div_right1; })!=0) {
        size+=8-(({ __typeof__(8) __neo_div_right2 = (8); if(__neo_div_right2 == 0) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (size) % __neo_div_right2; }));
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

void* calloc(unsigned long  int  nmemb  , unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "calloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  total_size  ;
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

void* realloc(void* ptr, unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "realloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    struct mem_block*  oldb  ;
    unsigned long  int  old_total  ;
    unsigned long  int  old_payload  ;
    void* np;
    unsigned long  int  tocopy  ;
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
    unsigned long  int  len  ;
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

void* memchr(const void* s, int c, unsigned long  int  n  )
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

char* strndup(const char* s, unsigned long  int  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strndup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  len  ;
    char* p;
    char* __result_obj__0;
    unsigned long  int  i  ;
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

unsigned long  int  arg_file_capacity(const struct arg_file*  file  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_file_capacity"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int maxc;
    memset(&maxc, 0, sizeof(maxc));
    maxc=file->hdr.maxcount /* uho */;
        neo_current_frame = fr.prev;
    return (((maxc>0))?((unsigned long  int )maxc):(1u));
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
    unsigned long  int  cap  ;
    unsigned long  int  i  ;
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
    unsigned long  int  cap  ;
    unsigned long  int  i  ;
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
    cap=(((maxcount>0))?((unsigned long  int )maxcount):(1u));
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
        end->errors=(struct arg_error* )malloc(sizeof(struct arg_error )*(unsigned long  int )maxerrors);
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
    unsigned long  int  namelen  ;
    unsigned long  int  len  ;
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
        len=(unsigned long  int )(p-start);
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
    unsigned long  int  cap  ;
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
        if((unsigned long  int )file->count<cap) {
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
    unsigned long  int  cap  ;
    memset(&cap, 0, sizeof(cap));
    if(!file) {
                neo_current_frame = fr.prev;
        return -1;
    }
    cap=arg_file_capacity(file);
    if((unsigned long  int )file->count>=cap&&cap>0) {
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
    unsigned long  int  len  ;
    unsigned long  int  k  ;
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
                    len=(unsigned long  int )(eq-name);
                    if(len>=sizeof(namebuf)) {
                        len=sizeof(namebuf)-1;
                    }
                    for(k=0                    ;k<len;++k){
                        ({ long long __neo_array_index1_0 = (long long)(k); if(__neo_array_index1_0 < 0 || __neo_array_index1_0 >= (long long)(64)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } namebuf[__neo_array_index1_0] = name[k]; });
                    }
                    ({ long long __neo_array_index2_0 = (long long)(len); if(__neo_array_index2_0 < 0 || __neo_array_index2_0 >= (long long)(64)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } namebuf[__neo_array_index2_0] = 0; });
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

void arg_print_joined_option(char* buf, unsigned long  int  bufsz  , const struct arg_hdr*  hdr  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_joined_option"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  pos  ;
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
        pos+=(unsigned long  int )wrote;
        if(pos>=bufsz) {
            pos=bufsz-1;
        }
        if(hdr->longopts&&hdr->longopts[0]&&pos+2<bufsz) {
            wrote=snprintf(buf+pos,bufsz-pos,", ");
            if(wrote<0) {
                wrote=0;
            }
            pos+=(unsigned long  int )wrote;
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
        pos+=(unsigned long  int )wrote_6;
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
            pos+=(unsigned long  int )wrote_7;
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
        ({ long long __neo_array_index3_0 = (long long)(0); if(__neo_array_index3_0 < 0 || __neo_array_index3_0 >= (long long)(64)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } optbuf[__neo_array_index3_0] = 0; });
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

void arg_freetable(void** argtable, unsigned long  int  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_freetable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  i  ;
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

char* strncat(char* dest, const char* src, unsigned long  int  n  )
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
        digit=({ __typeof__(base) __neo_div_right3 = (base); if(__neo_div_right3 == 0) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (val_) % __neo_div_right3; });
        ({ long long __neo_array_index4_0 = (long long)(i++); if(__neo_array_index4_0 < 0 || __neo_array_index4_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } tmp[__neo_array_index4_0] = (((digit<10))?(48+digit):(97+digit-10)); });
        val_/=base;
    } while(val_);
    if(negative) {
        *p++=45;
    }
    while(i--) {
        *p++=(*({ long long __neo_array_index5_0 = (long long)(i); if(__neo_array_index5_0 < 0 || __neo_array_index5_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &tmp[__neo_array_index5_0]; }));
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
            ({ long long __neo_array_index6_0 = (long long)(0); if(__neo_array_index6_0 < 0 || __neo_array_index6_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index6_0] = (char)__builtin_va_arg(ap,int); });
            ({ long long __neo_array_index7_0 = (long long)(1); if(__neo_array_index7_0 < 0 || __neo_array_index7_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index7_0] = 0; });
            s=buf;
            break;
            case 112:
            strncpy(buf,"0x",32);
            itoa(buf+2,(unsigned long  int)(unsigned long  int )__builtin_va_arg(ap,void*),16,0);
            s=buf;
            break;
            case 37:
            ({ long long __neo_array_index8_0 = (long long)(0); if(__neo_array_index8_0 < 0 || __neo_array_index8_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index8_0] = 37; });
            ({ long long __neo_array_index9_0 = (long long)(1); if(__neo_array_index9_0 < 0 || __neo_array_index9_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index9_0] = 0; });
            s=buf;
            break;
            default:
            ({ long long __neo_array_index10_0 = (long long)(0); if(__neo_array_index10_0 < 0 || __neo_array_index10_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index10_0] = 37; });
            ({ long long __neo_array_index11_0 = (long long)(1); if(__neo_array_index11_0 < 0 || __neo_array_index11_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index11_0] = *fmt; });
            ({ long long __neo_array_index12_0 = (long long)(2); if(__neo_array_index12_0 < 0 || __neo_array_index12_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index12_0] = 0; });
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
        ({ long long __neo_array_index13_0 = (long long)(i++); if(__neo_array_index13_0 < 0 || __neo_array_index13_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } tmp[__neo_array_index13_0] = D[({ __typeof__((unsigned int)base) __neo_div_right4 = ((unsigned int)base); if(__neo_div_right4 == 0) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (v) % __neo_div_right4; })]; });
        v/=(unsigned int)base;
    }
    int  n=i,  j=0;
    while(i--) {
        dst[j++]=(*({ long long __neo_array_index14_0 = (long long)(i); if(__neo_array_index14_0 < 0 || __neo_array_index14_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &tmp[__neo_array_index14_0]; }));
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

void __fmt_putc(struct anonymous_typeX5*  o  , char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__fmt_putc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX3*  b  ;
    struct anonymous_typeX4*  s  ;
    memset(&b, 0, sizeof(b));
    memset(&s, 0, sizeof(s));
    if(o->mode==0) {
        putchar(c);
    }
    else if(o->mode==1) {
        b=(struct anonymous_typeX3* )o->ctx;
        if(b->rem>1) {
            *(b->p)=c;
            b->p=b->p+1;
            b->rem--;
        }
    }
    else {
        s=(struct anonymous_typeX4* )o->ctx;
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

void __emit_pad(struct anonymous_typeX5*  o  , char pad, int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__emit_pad"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(n-->0) {
        __fmt_putc(o,pad);
    }
    neo_current_frame = fr.prev;
}

void __emit_num(struct anonymous_typeX5*  o  , unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower, int left)
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
        __fmt_putc(o,(*({ long long __neo_array_index15_0 = (long long)(i); if(__neo_array_index15_0 < 0 || __neo_array_index15_0 >= (long long)(64)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &buf[__neo_array_index15_0]; })));
    }
    if(left) {
        __emit_pad(o,32,(((width>total))?((width-total)):(0)));
    }
    neo_current_frame = fr.prev;
}

void __vformat(struct anonymous_typeX5*  o  , const char* fmt, __builtin_va_list  ap  )
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

int printf(const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    memset(&ap, 0, sizeof(ap));
    __builtin_va_start(ap,fmt);
    struct anonymous_typeX5  out  ={ 0, ((void*)0), 0 };
    __vformat(&out,fmt,ap);
    __builtin_va_end(ap);
        neo_current_frame = fr.prev;
    return out.count /* uho */;
    neo_current_frame = fr.prev;
}

void __buf_putc(void* ctx, char ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__buf_putc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX3*  b  ;
    memset(&b, 0, sizeof(b));
    b=(struct anonymous_typeX3* )ctx;
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
    struct anonymous_typeX4*  s  ;
    memset(&s, 0, sizeof(s));
    s=(struct anonymous_typeX4* )ctx;
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
    struct anonymous_typeX3  b  ={ out, out_size };
    struct anonymous_typeX5  o  ={ 1, &b, 0 };
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
    memset(&ap, 0, sizeof(ap));
    memset(&r, 0, sizeof(r));
    __builtin_va_start(ap,fmt);
    r=vsnprintf(out,out_size,fmt,ap);
    __builtin_va_end(ap);
        neo_current_frame = fr.prev;
    return r;
    neo_current_frame = fr.prev;
}

int vsprintf(char* out, const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "vsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!out) {
                neo_current_frame = fr.prev;
        return -1;
    }
    struct anonymous_typeX4  s  ={ out };
    struct anonymous_typeX5  o  ={ 2, &s, 0 };
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
    memset(&ap, 0, sizeof(ap));
    memset(&r, 0, sizeof(r));
    __builtin_va_start(ap,fmt);
    r=vsprintf(out,fmt,ap);
    __builtin_va_end(ap);
        neo_current_frame = fr.prev;
    return r;
    neo_current_frame = fr.prev;
}

int atexit(void (*func)())
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "atexit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(__atexit_count>=(int)(({ __typeof__(sizeof(__atexit_funcs[0])) __neo_div_right5 = (sizeof(__atexit_funcs[0])); if(__neo_div_right5 == 0) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (sizeof(__atexit_funcs)) / __neo_div_right5; }))) {
                neo_current_frame = fr.prev;
        return -1;
    }
    ({ long long __neo_array_index17_0 = (long long)(__atexit_count++); if(__neo_array_index17_0 < 0 || __neo_array_index17_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } __atexit_funcs[__neo_array_index17_0] = func; });
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
        if((*({ long long __neo_array_index18_0 = (long long)(i); if(__neo_array_index18_0 < 0 || __neo_array_index18_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &__atexit_funcs[__neo_array_index18_0]; }))) {
            ((*({ long long __neo_array_index19_0 = (long long)(i); if(__neo_array_index19_0 < 0 || __neo_array_index19_0 >= (long long)(32)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &__atexit_funcs[__neo_array_index19_0]; })))();
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
    val_=ip+(((scale>1.0)?(({ __typeof__(scale) __neo_div_right6 = (scale); if(__neo_div_right6 == 0) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (fp) / __neo_div_right6; })):(0.0)));
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
        val_=((esign)?((({ __typeof__(pow10) __neo_div_right7 = (pow10); if(__neo_div_right7 == 0) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (val_) / __neo_div_right7; }))):((val_*pow10)));
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

int strncasecmp(const char* a, const char* b, unsigned long  int  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncasecmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  i  ;
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
    int width;
    char length;
    char conv;
    char* out;
    int n;
    int neg;
    unsigned long  long val_;
    int digits;
    unsigned long  int* p;
    unsigned long  int*  p_13  ;
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
                                neo_current_frame = fr.prev;
                return assigned;
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
                                neo_current_frame = fr.prev;
                return assigned;
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
                                neo_current_frame = fr.prev;
                return assigned;
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
                                neo_current_frame = fr.prev;
                return assigned;
            }
            if(conv==117) {
                if(length==108) {
                    p=__builtin_va_arg(ap,unsigned long  int*);
                    *p=(unsigned long  int)val_;
                }
                else if(length==122) {
                    p_13=__builtin_va_arg(ap,unsigned long  int* );
                    *p_13=(unsigned long  int )val_;
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
                ({ long long __neo_array_index20_0 = (long long)((unsigned int)93); if(__neo_array_index20_0 < 0 || __neo_array_index20_0 >= (long long)(256)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index20_0] = 1; });
                f++;
            }
            while(*f&&*f!=93) {
                if(*(f+1)==45&&*(f+2)&&*(f+2)!=93) {
                    unsigned char  a=(unsigned char)*f,  b=(unsigned char)*(f+2);
                    if(a<=b) {
                        for(c=a                        ;c<=b;c++){
                            ({ long long __neo_array_index21_0 = (long long)(c); if(__neo_array_index21_0 < 0 || __neo_array_index21_0 >= (long long)(256)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index21_0] = 1; });
                        }
                    }
                    else {
                        for(c_18=b                        ;c_18<=a;c_18++){
                            ({ long long __neo_array_index22_0 = (long long)(c_18); if(__neo_array_index22_0 < 0 || __neo_array_index22_0 >= (long long)(256)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index22_0] = 1; });
                        }
                    }
                    f+=3;
                }
                else {
                    ({ long long __neo_array_index23_0 = (long long)((unsigned char)*f); if(__neo_array_index23_0 < 0 || __neo_array_index23_0 >= (long long)(256)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index23_0] = 1; });
                    f++;
                }
            }
            if(*f==93) {
                f++;
            }
            out_19=__builtin_va_arg(ap,char*);
            if(!out_19) {
                __builtin_va_end(ap);
                                neo_current_frame = fr.prev;
                return assigned;
            }
            n_20=0;
            while(*s&&(width==0||n_20<width)) {
                in=(*({ long long __neo_array_index24_0 = (long long)((unsigned char)*s); if(__neo_array_index24_0 < 0 || __neo_array_index24_0 >= (long long)(256)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &set[__neo_array_index24_0]; }));
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
                                neo_current_frame = fr.prev;
                return assigned;
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
                                neo_current_frame = fr.prev;
                return assigned;
            }
            assigned++;
        }
        else if(conv==37) {
            if(*s!=37) {
                __builtin_va_end(ap);
                                neo_current_frame = fr.prev;
                return assigned;
            }
            s++;
        }
        else {
            __builtin_va_end(ap);
                        neo_current_frame = fr.prev;
            return assigned;
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
        neo_current_frame = fr.prev;
    return assigned;
    neo_current_frame = fr.prev;
}

_Bool neo_frame_is_alive(unsigned long  int frame_id)
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
        it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
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

_Bool die(const char* msg, char* sname, int sline)
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 1));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 2));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 3));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 4));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 5));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 6));
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
    _Bool flag;
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
            printf("%p (%s) %s %d: ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long  int )+sizeof(unsigned long  int ),it->class_name,it->sname,it->sline);
        }
        for(i=0        ;i<8;i++){
            if((*({ long long __neo_array_index25_0 = (long long)(i); if(__neo_array_index25_0 < 0 || __neo_array_index25_0 >= (long long)(8)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &it->fun_name[__neo_array_index25_0]; }))) {
                printf("%s, ",(*({ long long __neo_array_index26_0 = (long long)(i); if(__neo_array_index26_0 < 0 || __neo_array_index26_0 >= (long long)(8)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &it->fun_name[__neo_array_index26_0]; })));
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

void* alloc_from_pages(unsigned long  int  size  )
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
    unsigned long  int  size  ;
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

void* come_alloc_mem_from_heap_pool(unsigned long  int  compiletime_size  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_alloc_mem_from_heap_pool"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  size2  ;
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
        ({ long long __neo_array_index27_0 = (long long)(n); if(__neo_array_index27_0 < 0 || __neo_array_index27_0 >= (long long)(8)) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } it->fun_name[__neo_array_index27_0] = fun_name; });
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
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe2(mem);
        exit(2);
    }
        __result_obj__0 = (char*)it->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  int  dynamic_sizeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "dynamic_sizeof"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    unsigned long  int  size  ;
    memset(&it, 0, sizeof(it));
    memset(&size, 0, sizeof(size));
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
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

void* come_calloc(unsigned long  int  count  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* mem;
    unsigned long  int*  ref_count  ;
    unsigned long  int*  size2  ;
    void* __result_obj__0;
    memset(&mem, 0, sizeof(mem));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&size2, 0, sizeof(size2));
    mem=come_alloc_mem_from_heap_pool(count*size,sizeof(unsigned long  int )+sizeof(unsigned long  int )+count*size,sname,sline,id,class_name);
    ref_count=(unsigned long  int* )mem;
    *ref_count=0;
    size2=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    *size2=size*count+sizeof(unsigned long  int )+sizeof(unsigned long  int );
        __result_obj__0 = mem+sizeof(unsigned long  int )+sizeof(unsigned long  int );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool come_is_alive(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_is_alive"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    memset(&it, 0, sizeof(it));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
        neo_current_frame = fr.prev;
    return it->alive;
    neo_current_frame = fr.prev;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
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
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
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
    unsigned long  int*  size_p  ;
    unsigned long  int  size  ;
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
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 510, 7));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 510, 8));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 510, 9));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 510, 10));
        stackframe2(block);
        exit(3);
    }
    mem=(char*)block-sizeof(unsigned long  int )-sizeof(unsigned long  int );
    size_p=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    size=*size_p-sizeof(unsigned long  int )-sizeof(unsigned long  int );
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
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 536, 11));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 536, 12));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 536, 13));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 536, 14));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    (*ref_count)++;
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_print_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long  int*  ref_count  ;
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
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    printf("ref_count %ld\n",*ref_count);
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
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
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
        neo_current_frame = fr.prev;
    return *ref_count;
    neo_current_frame = fr.prev;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj, char* sname, int sline, int id)
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
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 599, 15));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 599, 16));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 599, 17));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 599, 18));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
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
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 656, 19));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 656, 20));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 656, 21));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 656, 22));
            stackframe2(mem);
            exit(3);
        }
        ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
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

void xassert(const char* msg, _Bool test)
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 711, 23));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 711, 24));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 711, 25));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 711, 26));
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
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 723, 27));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 723, 28));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 723, 29));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 723, 30));
            stackframe_v2();
            exit(1);
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s \%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 729, 31));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 729, 32));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 729, 33));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 729, 34));
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
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 737, 35);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 737, 36));
        return __result_obj__0;
    }
    len=strlen(str)+1;
    result=come_calloc_v2(1,sizeof(char)*(len),sname,sline,0,"string");
    strncpy(result,str,len);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 746, 37);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 746, 38));
    return __result_obj__0;
}

void stackframe_v2()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe_v2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    stackframe();
    neo_current_frame = fr.prev;
}

void* come_calloc_v2(unsigned long  int  count  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name)
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
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4938, 39, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4938, 41);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4938, 40);
    ((char*)self->buf)[0]=0;
    self->len=0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4942, 42);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4942, 43);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4942, 44);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj2;
    struct buffer*  __result_obj__0  ;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4948, 45, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4948, 47);
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4948, 46);
    ((char*)self->buf)[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4954, 48);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4954, 49);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4954, 50);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self&&self->buf) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4959, 51));
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
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 4965, 52);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4965, 53);
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 4968, 54, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 4968, 55);
    result->size=self->size;
    __right_value0 = (void*)0;
    __dec_obj3=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4971, 56, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4971, 58);
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4971, 57);
    result->len=self->len;
    memcpy(result->buf,self->buf,self->len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 4975, 59);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4975, 60);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4975, 61);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool __result_obj__0;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        __result_obj__0 = string_equals(((char* )(__right_value0=buffer_to_string(left))),((char* )(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4987, 62));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4987, 63));
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

struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  int  size  )
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5029, 64, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5029, 65);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5033, 66, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5033, 68);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5033, 67);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5039, 69));
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5053, 70, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5053, 71);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+10+1)*2;
        __right_value0 = (void*)0;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5057, 72, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5057, 74);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5057, 73);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5063, 75));
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5080, 76, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5080, 77);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5083, 78, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5083, 80);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5083, 79);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5089, 81));
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
    mem=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",5112), "/home/ab25cq/neo-c/neo-c.h", 5112, 82);
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5117, 83, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5117, 84);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5120, 85, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5120, 87);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5120, 86);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5126, 88));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
    free(result);
        __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5132, 89));
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5183, 90, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5183, 91);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5186, 92, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5186, 94);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5186, 93);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5192, 95));
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5210, 96, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5210, 97);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5213, 98, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5213, 100);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5213, 99);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5219, 101));
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5236, 102, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5236, 103);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5239, 104, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5239, 106);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5239, 105);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5245, 107));
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5263, 108, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5263, 109);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5266, 110, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5266, 112);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5266, 111);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5272, 113));
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5290, 114, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5290, 115);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+1+1)*2;
        __right_value0 = (void*)0;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5293, 116, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5293, 118);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5293, 117);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5299, 119));
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5325, 120, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5325, 121)), "/home/ab25cq/neo-c/neo-c.h", 5325, 122);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5328, 123);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5328, 124);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5328, 125);
        return __result_obj__0;
    }
    buffer_append_str(result,self);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5333, 126);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5333, 127);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5333, 128);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5339))), "/home/ab25cq/neo-c/neo-c.h", 5339, 129);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5339, 130));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5339, 131));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"/home/ab25cq/neo-c/neo-c.h",5342))), "/home/ab25cq/neo-c/neo-c.h", 5342, 132);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5342, 133));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5342, 134));
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

struct buffer*  chara_to_buffer(char* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5355, 135, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5355, 136)), "/home/ab25cq/neo-c/neo-c.h", 5355, 137);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5357, 138);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5357, 139);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5357, 140);
        return __result_obj__0;
    }
    buffer_append(result,self,sizeof(char)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5360, 141);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5360, 142);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5360, 143);
    return __result_obj__0;
}

struct buffer*  charpa_to_buffer(char** self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5365, 144, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5365, 145)), "/home/ab25cq/neo-c/neo-c.h", 5365, 146);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5367, 147);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5367, 148);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5367, 149);
        return __result_obj__0;
    }
    for(i=0    ;i<len;i++){
        buffer_append(result,self[i],strlen(self[i]));
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5372, 150);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5372, 151);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5372, 152);
    return __result_obj__0;
}

struct buffer*  shorta_to_buffer(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5377, 153, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5377, 154)), "/home/ab25cq/neo-c/neo-c.h", 5377, 155);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5379, 156);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5379, 157);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5379, 158);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(short)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5382, 159);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5382, 160);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5382, 161);
    return __result_obj__0;
}

struct buffer*  inta_to_buffer(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5387, 162, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5387, 163)), "/home/ab25cq/neo-c/neo-c.h", 5387, 164);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5389, 165);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5389, 166);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5389, 167);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(int)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5392, 168);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5392, 169);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5392, 170);
    return __result_obj__0;
}

struct buffer*  longa_to_buffer(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5397, 171, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5397, 172)), "/home/ab25cq/neo-c/neo-c.h", 5397, 173);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5399, 174);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5399, 175);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5399, 176);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(long)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5402, 177);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5402, 178);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5402, 179);
    return __result_obj__0;
}

struct buffer*  floata_to_buffer(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5407, 180, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5407, 181)), "/home/ab25cq/neo-c/neo-c.h", 5407, 182);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5409, 183);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5409, 184);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5409, 185);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(float)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5412, 186);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5412, 187);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5412, 188);
    return __result_obj__0;
}

struct buffer*  doublea_to_buffer(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5417, 189, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5417, 190)), "/home/ab25cq/neo-c/neo-c.h", 5417, 191);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5419, 192);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5419, 193);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5419, 194);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(double)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5422, 195);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5422, 196);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5422, 197);
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
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 5428, 198, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5428, 199);
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5431, 200);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5431, 201));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5431, 202));
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
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5454, 203);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5454, 204));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5454, 205));
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
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1551, 213);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 2, 215);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 2, 216);
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
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1673, 207, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1673, 208);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_29=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1683, 209, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1683, 210);
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        __right_value0 = (void*)0;
        litem_30=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1693, 211, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1693, 212);
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
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1560, 214);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$* chara_to_list(char* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5479, 206, "struct list$1char$*"), "/home/ab25cq/neo-c/neo-c.h", 5479, 217),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5479, 218);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5479, 219);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5479, 220);
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
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1551, 228);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 230);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 231);
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
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1673, 222, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1673, 223);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_31=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1683, 224, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1683, 225);
        litem_31->prev=self->head;
        litem_31->next=((void*)0);
        litem_31->item=item;
        self->tail=litem_31;
        self->head->next=litem_31;
    }
    else {
        __right_value0 = (void*)0;
        litem_32=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1693, 226, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1693, 227);
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
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1560, 229);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$p* charpa_to_list(char** self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 5484, 221, "struct list$1char$p*"), "/home/ab25cq/neo-c/neo-c.h", 5484, 232),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5484, 233);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5484, 234);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5484, 235);
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
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1551, 243);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 245);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 246);
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
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1673, 237, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1673, 238);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_33=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1683, 239, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1683, 240);
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        litem_33->item=item;
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        __right_value0 = (void*)0;
        litem_34=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1693, 241, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1693, 242);
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
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1560, 244);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1short$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1short$* shorta_to_list(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5489, 236, "struct list$1short$*"), "/home/ab25cq/neo-c/neo-c.h", 5489, 247),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5489, 248);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5489, 249);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5489, 250);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1551, 258);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 260);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 261);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1673, 252, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1673, 253);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_35=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1683, 254, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1683, 255);
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        __right_value0 = (void*)0;
        litem_36=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1693, 256, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1693, 257);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1560, 259);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1int$* inta_to_list(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5494, 251, "struct list$1int$*"), "/home/ab25cq/neo-c/neo-c.h", 5494, 262),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5494, 263);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5494, 264);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5494, 265);
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
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1551, 273);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 275);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 276);
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
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1673, 267, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1673, 268);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_37=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1683, 269, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1683, 270);
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1693, 271, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1693, 272);
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
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1560, 274);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1long$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1long$* longa_to_list(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5499, 266, "struct list$1long$*"), "/home/ab25cq/neo-c/neo-c.h", 5499, 277),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5499, 278);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5499, 279);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5499, 280);
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
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1551, 288);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 290);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 291);
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
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1673, 282, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1673, 283);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_39=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1683, 284, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1683, 285);
        litem_39->prev=self->head;
        litem_39->next=((void*)0);
        litem_39->item=item;
        self->tail=litem_39;
        self->head->next=litem_39;
    }
    else {
        __right_value0 = (void*)0;
        litem_40=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1693, 286, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1693, 287);
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
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1560, 289);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1float$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1float$* floata_to_list(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5504, 281, "struct list$1float$*"), "/home/ab25cq/neo-c/neo-c.h", 5504, 292),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5504, 293);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5504, 294);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5504, 295);
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
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1551, 303);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 305);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 306);
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
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1673, 297, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1673, 298);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_41=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1683, 299, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1683, 300);
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        __right_value0 = (void*)0;
        litem_42=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1693, 301, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1693, 302);
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
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1560, 304);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1double$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1double$* doublea_to_list(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5509, 296, "struct list$1double$*"), "/home/ab25cq/neo-c/neo-c.h", 5509, 307),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5509, 308);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5509, 309);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5509, 310);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool size_t_equals(unsigned long  int  self  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool float_equals(float self, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool double_equals(double self, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool charp_equals(const char* self, const char* right)
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

_Bool string_equals(char* self, const char* right)
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

_Bool voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Boolp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool string_operator_equals(char* self, const char* right)
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

_Bool charp_operator_equals(const char* self, const char* right)
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

_Bool chara_operator_equals(char* self, const char* right)
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

_Bool voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool string_operator_not_equals(char* self, const char* right)
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

_Bool charp_operator_not_equals(const char* self, const char* right)
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

_Bool chara_operator_not_equals(char* self, const char* right)
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5752))), "/home/ab25cq/neo-c/neo-c.h", 5752, 311);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5752, 312));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5752, 313));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5756, 314, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5756, 315);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5761, 316);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5761, 317));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5761, 318));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5767))), "/home/ab25cq/neo-c/neo-c.h", 5767, 319);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5767, 320));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5767, 321));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5771, 322, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5771, 323);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5776, 324);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5776, 325));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5776, 326));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5782))), "/home/ab25cq/neo-c/neo-c.h", 5782, 327);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5782, 328));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5782, 329));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5784, 330, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5784, 331)), "/home/ab25cq/neo-c/neo-c.h", 5784, 332);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5790, 333);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5790, 334);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5790, 335));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5790, 336));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5796))), "/home/ab25cq/neo-c/neo-c.h", 5796, 337);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5796, 338));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5796, 339));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5798, 340, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5798, 341)), "/home/ab25cq/neo-c/neo-c.h", 5798, 342);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5804, 343);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5804, 344);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5804, 345));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5804, 346));
    return __result_obj__0;
}

_Bool charpa_contained(const char* self[], unsigned long  int  len  , const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
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

unsigned long  int  shorta_length(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  inta_length(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  longa_length(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  floata_length(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  doublea_length(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool value)
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

unsigned int size_t_get_hash_key(unsigned long  int  value  )
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

_Bool _Bool_clone(_Bool self)
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

unsigned long  int  size_t_clone(unsigned long  int  self  )
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

_Bool xisalpha(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xisblank(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xisdigit(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xisspace(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool xisalnum(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xisascii(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    result=(c>=32&&c<=126);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xispunct(char c)
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6056))), "/home/ab25cq/neo-c/neo-c.h", 6056, 347);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6056, 348));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6056, 349));
        return __result_obj__0;
    }
    len=strlen(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 6059, 350, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6059, 351);
    for(i=0    ;i<len;i++){
        result[i]=str[len-i-1];
    }
    result[len]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6067, 352);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6067, 353));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6067, 354));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6073))), "/home/ab25cq/neo-c/neo-c.h", 6073, 355);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6073, 356));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6073, 357));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6086, 358);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6086, 359));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6086, 360));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6086, 361));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6098))), "/home/ab25cq/neo-c/neo-c.h", 6098, 362);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6098, 363));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6098, 364));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6102))), "/home/ab25cq/neo-c/neo-c.h", 6102, 365);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6102, 366));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6102, 367));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6105, 368, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6105, 369);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6110, 370);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6110, 371));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6110, 372));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6116))), "/home/ab25cq/neo-c/neo-c.h", 6116, 373);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6116, 374));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6116, 375));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6129, 376);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6129, 377));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6129, 378));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6129, 379));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6141))), "/home/ab25cq/neo-c/neo-c.h", 6141, 380);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6141, 381));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6141, 382));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6145))), "/home/ab25cq/neo-c/neo-c.h", 6145, 383);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6145, 384));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6145, 385));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6148, 386, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6148, 387);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6153, 388);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6153, 389));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6153, 390));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6159))), "/home/ab25cq/neo-c/neo-c.h", 6159, 391);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6159, 392));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6159, 393));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6172, 394);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6172, 395));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6172, 396));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6172, 397));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6184))), "/home/ab25cq/neo-c/neo-c.h", 6184, 398);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6184, 399));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6184, 400));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6188))), "/home/ab25cq/neo-c/neo-c.h", 6188, 401);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6188, 402));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6188, 403));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6191, 404, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6191, 405);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6196, 406);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6196, 407));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6196, 408));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6202))), "/home/ab25cq/neo-c/neo-c.h", 6202, 409);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6202, 410));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6202, 411));
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6211))), "/home/ab25cq/neo-c/neo-c.h", 6211, 412);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6211, 413));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6211, 414));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",6214), "/home/ab25cq/neo-c/neo-c.h", 6214, 415);
    free(result);
        __result_obj__0 = (char* )come_increment_ref_count(result2, "/home/ab25cq/neo-c/neo-c.h", 6218, 416);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6218, 417));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6218, 418));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6224))), "/home/ab25cq/neo-c/neo-c.h", 6224, 419);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6224, 420));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6224, 421));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head>=len) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6230))), "/home/ab25cq/neo-c/neo-c.h", 6230, 422);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6230, 423));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6230, 424));
        return __result_obj__0;
    }
    if(strcmp(str,"")==0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6234))), "/home/ab25cq/neo-c/neo-c.h", 6234, 425);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6234, 426));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6234, 427));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6250))), "/home/ab25cq/neo-c/neo-c.h", 6250, 428);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6250, 429));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6250, 430));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len-(tail-head)+1)), "/home/ab25cq/neo-c/neo-c.h", 6257, 431, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6257, 432);
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    result[len-(tail-head)]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6264, 433);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6264, 434));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6264, 435));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1539, 437);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 440);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 441);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1560, 439);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 438));
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
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1669, 452));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1673, 453, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1673, 454);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj13=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1677, 456);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1677, 455);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_43=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1683, 457, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1683, 458);
        litem_43->prev=self->head;
        litem_43->next=((void*)0);
        __dec_obj14=litem_43->item,
        litem_43->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1687, 460);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1687, 459);
        self->tail=litem_43;
        self->head->next=litem_43;
    }
    else {
        __right_value0 = (void*)0;
        litem_44=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1693, 461, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1693, 462);
        litem_44->prev=self->tail;
        litem_44->next=((void*)0);
        __dec_obj15=litem_44->item,
        litem_44->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1697, 464);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1697, 463);
        self->tail->next=litem_44;
        self->tail=litem_44;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1705, 465));
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6270, 436, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6270, 442)))), "/home/ab25cq/neo-c/neo-c.h", 6270, 443);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6270, 444);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6270, 445);
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6273, 446, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6273, 447)), "/home/ab25cq/neo-c/neo-c.h", 6273, 448);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6275, 449, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6275, 450)), "/home/ab25cq/neo-c/neo-c.h", 6275, 451);
    self_len=charp_length(self);
    for(i=0    ;i<self_len;i++){
        if(self[i]==c) {
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6280), "/home/ab25cq/neo-c/neo-c.h", 6280, 466));
            buffer_reset(str);
        }
        else {
            buffer_append_char(str,self[i]);
        }
    }
    if(buffer_length(str)!=0) {
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6288), "/home/ab25cq/neo-c/neo-c.h", 6288, 467));
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6291, 468);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6291, 469);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6291, 470);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6291, 471);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6296, 472);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6296, 473));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6296, 474));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6301, 475);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6301, 476));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6301, 477));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6307))), "/home/ab25cq/neo-c/neo-c.h", 6307, 478);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6307, 479));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6307, 480));
        return __result_obj__0;
    }
    len=charp_length(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 6310, 481, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6310, 482);
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
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6329, 483);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6329, 484));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6329, 485));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "/home/ab25cq/neo-c/neo-c.h", 6334, 486);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6334, 487));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6334, 488));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6340))), "/home/ab25cq/neo-c/neo-c.h", 6340, 489);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6340, 490));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6340, 491));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6343, 492, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6343, 493)), "/home/ab25cq/neo-c/neo-c.h", 6343, 494);
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
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "/home/ab25cq/neo-c/neo-c.h", 6365, 495);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6365, 496);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6365, 497));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6365, 498));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6374))), "/home/ab25cq/neo-c/neo-c.h", 6374, 499);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6374, 500));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6374, 501));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6388))), "/home/ab25cq/neo-c/neo-c.h", 6388, 502);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6388, 503));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6388, 504));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6391))), "/home/ab25cq/neo-c/neo-c.h", 6391, 505);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6391, 506));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6391, 507));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6394))), "/home/ab25cq/neo-c/neo-c.h", 6394, 508);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6394, 509));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6394, 510));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6400))), "/home/ab25cq/neo-c/neo-c.h", 6400, 511);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6400, 512));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6400, 513));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "/home/ab25cq/neo-c/neo-c.h", 6402, 514);
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"/home/ab25cq/neo-c/neo-c.h",6416))), "/home/ab25cq/neo-c/neo-c.h", 6416, 515);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6416, 516));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6416, 517));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6416, 518));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "/home/ab25cq/neo-c/neo-c.h", 6419, 519);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6419, 520));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6419, 521));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6419, 522));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6422))), "/home/ab25cq/neo-c/neo-c.h", 6422, 523);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6422, 524));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6422, 525));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6422, 526));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6428))), "/home/ab25cq/neo-c/neo-c.h", 6428, 527);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6428, 528));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6428, 529));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6442))), "/home/ab25cq/neo-c/neo-c.h", 6442, 530);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6442, 531));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6442, 532));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6445))), "/home/ab25cq/neo-c/neo-c.h", 6445, 533);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6445, 534));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6445, 535));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6448))), "/home/ab25cq/neo-c/neo-c.h", 6448, 536);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6448, 537));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6448, 538));
    return __result_obj__0;
}

char*  _Bool_to_string(_Bool self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","/home/ab25cq/neo-c/neo-c.h",6467))), "/home/ab25cq/neo-c/neo-c.h", 6467, 539);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6467, 540));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6467, 541));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","/home/ab25cq/neo-c/neo-c.h",6470))), "/home/ab25cq/neo-c/neo-c.h", 6470, 542);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6470, 543));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6470, 544));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "/home/ab25cq/neo-c/neo-c.h", 6476, 545);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6476, 546));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6476, 547));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6481, 548);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6481, 549));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6481, 550));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6486, 551);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6486, 552));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6486, 553));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6491, 554);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6491, 555));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6491, 556));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  int  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6496, 557);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6496, 558));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6496, 559));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "/home/ab25cq/neo-c/neo-c.h", 6501, 560);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6501, 561));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6501, 562));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "/home/ab25cq/neo-c/neo-c.h", 6506, 563);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6506, 564));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6506, 565));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6512))), "/home/ab25cq/neo-c/neo-c.h", 6512, 566);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6512, 567));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6512, 568));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6514))), "/home/ab25cq/neo-c/neo-c.h", 6514, 569);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6514, 570));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6514, 571));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6520))), "/home/ab25cq/neo-c/neo-c.h", 6520, 572);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6520, 573));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6520, 574));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6522))), "/home/ab25cq/neo-c/neo-c.h", 6522, 575);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6522, 576));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6522, 577));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
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

int size_t_compare(unsigned long  int  left  , unsigned long  int  right  )
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6705))), "/home/ab25cq/neo-c/neo-c.h", 6705, 578);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6705, 579));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6705, 580));
        return __result_obj__0;
    }
    puts(self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6709))), "/home/ab25cq/neo-c/neo-c.h", 6709, 581);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6709, 582));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6709, 583));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6715))), "/home/ab25cq/neo-c/neo-c.h", 6715, 584);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6715, 585));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6715, 586));
        return __result_obj__0;
    }
    printf("%s",self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6719))), "/home/ab25cq/neo-c/neo-c.h", 6719, 587);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6719, 588));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6719, 589));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6726))), "/home/ab25cq/neo-c/neo-c.h", 6726, 590);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6726, 591));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6726, 592));
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
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6741))), "/home/ab25cq/neo-c/neo-c.h", 6741, 593);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6741, 594));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6741, 595));
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

