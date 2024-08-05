// source head
typedef unsigned long int size_t;
typedef long ssize_t;
typedef long off_t;
typedef struct _IO_FILE FILE;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __isoc_va_list;
union _G_fpos64_t
{
char __opaque[16];
long long __lldata;
double __align;
};
typedef union _G_fpos64_t fpos_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long (*cookie_read_function_t)(void*,char*,unsigned long int);
typedef long (*cookie_write_function_t)(void*,const char*,unsigned long int);
typedef int (*cookie_seek_function_t)(void*,long*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long int);
    long (*write)(void*,const char*,unsigned long int);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef unsigned int wchar_t;
struct anonymous_typeX1
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX1 div_t;
struct anonymous_typeX2
{
    long quot;
    long rem;
};
typedef struct anonymous_typeX2 ldiv_t;
struct anonymous_typeX3
{
    long long quot;
    long long rem;
};
typedef struct anonymous_typeX3 lldiv_t;
struct __locale_struct;
typedef struct __locale_struct* locale_t;
struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};
extern char* program_invocation_short_name;
extern char* program_invocation_name;
typedef void* any;
typedef char* string;
extern _Bool gComeGCLib;
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};
struct list$1voidp
{
    struct list_item$1voidp* head;
    struct list_item$1voidp* tail;
    int len;
    struct list_item$1voidp* it;
};
struct buffer
{
    char* buf;
    int len;
    int size;
};
struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};
struct smart_pointer$1short
{
    struct buffer* memory;
    short short* p;
};
struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};
struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};
struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};
struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};
struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};
struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};
struct list_item$1short
{
    short short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};
struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};
struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};
struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};
struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};
struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};
struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};
struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};
struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};
struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};
struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};
struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};
struct integer
{
    long value;
};
struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre;
struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre16;
struct real_pcre32;
typedef struct real_pcre32 pcre32;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct real_pcre16_jit_stack;
typedef struct real_pcre16_jit_stack pcre16_jit_stack;
struct real_pcre32_jit_stack;
typedef struct real_pcre32_jit_stack pcre32_jit_stack;
struct pcre_extra
{
    unsigned long int flags;
    void* study_data;
    unsigned long int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long int match_limit_recursion;
    unsigned char** mark;
    void* executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct pcre16_extra
{
    unsigned long int flags;
    void* study_data;
    unsigned long int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long int match_limit_recursion;
    unsigned short int** mark;
    void* executable_jit;
};
typedef struct pcre16_extra pcre16_extra;
struct pcre32_extra
{
    unsigned long int flags;
    void* study_data;
    unsigned long int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long int match_limit_recursion;
    unsigned int** mark;
    void* executable_jit;
};
typedef struct pcre32_extra pcre32_extra;
struct pcre_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const char* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned char* mark;
};
typedef struct pcre_callout_block pcre_callout_block;
struct pcre16_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned short int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned short int* mark;
};
typedef struct pcre16_callout_block pcre16_callout_block;
struct pcre32_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned int* mark;
};
typedef struct pcre32_callout_block pcre32_callout_block;
extern void* (*pcre_malloc)(unsigned long int);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(unsigned long int);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(struct pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(unsigned long int);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(unsigned long int);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(struct pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(unsigned long int);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(unsigned long int);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(struct pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);
typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);
typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);
typedef unsigned int wint_t;
typedef unsigned long int wctype_t;
struct __mbstate_t
{
    unsigned int __opaque1;
    unsigned int __opaque2;
};
typedef struct __mbstate_t mbstate_t;
struct tm;
typedef unsigned int* wstring;
struct come_regex
{
    char* str;
    struct real_pcre8_or_16* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    struct real_pcre8_or_16* re;
};
struct anonymous_typeX4
{
    long long __ll;
    long double __ld;
};
typedef struct anonymous_typeX4 max_align_t;
typedef long ptrdiff_t;
typedef void* GC_PTR;
typedef unsigned long int GC_word;
typedef long GC_signed_word;
extern unsigned long int GC_gc_no;
typedef void* (*GC_oom_func)(unsigned long int);
extern void* (*GC_oom_fn)(unsigned long int);
typedef void (*GC_on_heap_resize_proc)(unsigned long int);
extern void (*GC_on_heap_resize)(unsigned long int);
enum anonymous_typeY5 { GC_EVENT_START
,GC_EVENT_MARK_START
,GC_EVENT_MARK_END
,GC_EVENT_RECLAIM_START
,GC_EVENT_RECLAIM_END
,GC_EVENT_END
,GC_EVENT_PRE_STOP_WORLD
,GC_EVENT_POST_STOP_WORLD
,GC_EVENT_PRE_START_WORLD
,GC_EVENT_POST_START_WORLD
,GC_EVENT_THREAD_SUSPENDED
,GC_EVENT_THREAD_UNSUSPENDED
};
typedef enum anonymous_typeY5 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY5);
extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
typedef void (*GC_finalizer_notifier_proc)();
extern void (*GC_finalizer_notifier)();
extern int GC_dont_gc;
extern int GC_dont_expand;
extern int GC_use_entire_heap;
extern int GC_full_freq;
extern unsigned long int GC_non_gc_bytes;
extern int GC_no_dls;
extern unsigned long int GC_free_space_divisor;
extern unsigned long int GC_max_retries;
extern char* GC_stackbottom;
extern int GC_dont_precollect;
extern unsigned long int GC_time_limit;
struct GC_timeval_s
{
    unsigned long int tv_ms;
    unsigned long int tv_nsec;
};
typedef int (*GC_stop_func)();
struct GC_prof_stats_s
{
    unsigned long int heapsize_full;
    unsigned long int free_bytes_full;
    unsigned long int unmapped_bytes;
    unsigned long int bytes_allocd_since_gc;
    unsigned long int allocd_bytes_before_gc;
    unsigned long int non_gc_bytes;
    unsigned long int gc_no;
    unsigned long int markers_m1;
    unsigned long int bytes_reclaimed_since_gc;
    unsigned long int reclaimed_bytes_before_gc;
    unsigned long int expl_freed_bytes_since_gc;
    unsigned long int obtained_from_os_bytes;
};
typedef void (*GC_finalization_proc)(void*,void*);
enum anonymous_typeY6 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY6 GC_ToggleRefStatus;
typedef enum anonymous_typeY6 (*GC_toggleref_func)(void*);
typedef void (*GC_await_finalize_proc)(void*);
typedef void (*GC_warn_proc)(char*,unsigned long int);
typedef void (*GC_abort_func)(const char*);
typedef unsigned long int GC_hidden_pointer;
typedef void* (*GC_fn_type)(void*);
struct GC_stack_base
{
    void* mem_base;
};
typedef void* (*GC_stack_base_func)(struct GC_stack_base*,void*);
extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);
typedef int (*GC_has_static_roots_func)(const char*,void*,unsigned long int);

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
struct _IO_FILE* fopen(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2);
struct _IO_FILE* freopen(const char* anonymous_var_nameX3, const char* anonymous_var_nameX4, struct _IO_FILE* anonymous_var_nameX5);
int fclose(struct _IO_FILE* anonymous_var_nameX6);
int remove(const char* anonymous_var_nameX7);
int rename(const char* anonymous_var_nameX8, const char* anonymous_var_nameX9);
int feof(struct _IO_FILE* anonymous_var_nameX10);
int ferror(struct _IO_FILE* anonymous_var_nameX11);
int fflush(struct _IO_FILE* anonymous_var_nameX12);
void clearerr(struct _IO_FILE* anonymous_var_nameX13);
int fseek(struct _IO_FILE* anonymous_var_nameX14, long anonymous_var_nameX15, int anonymous_var_nameX16);
long ftell(struct _IO_FILE* anonymous_var_nameX17);
void rewind(struct _IO_FILE* anonymous_var_nameX18);
int fgetpos(struct _IO_FILE* anonymous_var_nameX19, union _G_fpos64_t* anonymous_var_nameX20);
int fsetpos(struct _IO_FILE* anonymous_var_nameX21, const union _G_fpos64_t* anonymous_var_nameX22);
unsigned long int fread(void* anonymous_var_nameX23, unsigned long int anonymous_var_nameX24, unsigned long int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);
unsigned long int fwrite(const void* anonymous_var_nameX27, unsigned long int anonymous_var_nameX28, unsigned long int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);
int fgetc(struct _IO_FILE* anonymous_var_nameX31);
int getc(struct _IO_FILE* anonymous_var_nameX32);
int getchar();
int ungetc(int anonymous_var_nameX33, struct _IO_FILE* anonymous_var_nameX34);
int fputc(int anonymous_var_nameX35, struct _IO_FILE* anonymous_var_nameX36);
int putc(int anonymous_var_nameX37, struct _IO_FILE* anonymous_var_nameX38);
int putchar(int anonymous_var_nameX39);
char* fgets(char* anonymous_var_nameX40, int anonymous_var_nameX41, struct _IO_FILE* anonymous_var_nameX42);
int fputs(const char* anonymous_var_nameX43, struct _IO_FILE* anonymous_var_nameX44);
int puts(const char* anonymous_var_nameX45);
int printf(const char* anonymous_var_nameX46, ...);
int fprintf(struct _IO_FILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);
int sprintf(char* anonymous_var_nameX49, const char* anonymous_var_nameX50, ...);
int snprintf(char* anonymous_var_nameX51, unsigned long int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);
int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);
int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);
int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);
int vsnprintf(char* anonymous_var_nameX62, unsigned long int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);
int scanf(const char* anonymous_var_nameX66, ...);
int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);
int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);
int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);
int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);
int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);
void perror(const char* anonymous_var_nameX79);
int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long int anonymous_var_nameX83);
void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);
char* tmpnam(char* anonymous_var_nameX86);
struct _IO_FILE* tmpfile();
struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long int anonymous_var_nameX88, const char* anonymous_var_nameX89);
struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long int* anonymous_var_nameX91);
struct _IO_FILE* fdopen(int anonymous_var_nameX92, const char* anonymous_var_nameX93);
struct _IO_FILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);
int pclose(struct _IO_FILE* anonymous_var_nameX96);
int fileno(struct _IO_FILE* anonymous_var_nameX97);
int fseeko(struct _IO_FILE* anonymous_var_nameX98, long anonymous_var_nameX99, int anonymous_var_nameX100);
long ftello(struct _IO_FILE* anonymous_var_nameX101);
int dprintf(int anonymous_var_nameX102, const char* anonymous_var_nameX103, ...);
int vdprintf(int anonymous_var_nameX104, const char* anonymous_var_nameX105, va_list anonymous_var_nameX106);
void flockfile(struct _IO_FILE* anonymous_var_nameX107);
int ftrylockfile(struct _IO_FILE* anonymous_var_nameX108);
void funlockfile(struct _IO_FILE* anonymous_var_nameX109);
int getc_unlocked(struct _IO_FILE* anonymous_var_nameX110);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX111, struct _IO_FILE* anonymous_var_nameX112);
int putchar_unlocked(int anonymous_var_nameX113);
long getdelim(char** anonymous_var_nameX114, unsigned long int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);
long getline(char** anonymous_var_nameX118, unsigned long int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);
int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);
char* ctermid(char* anonymous_var_nameX125);
char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);
char* cuserid(char* anonymous_var_nameX128);
void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);
void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long int anonymous_var_nameX132);
int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);
int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);
int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);
unsigned long int fread_unlocked(void* anonymous_var_nameX137, unsigned long int anonymous_var_nameX138, unsigned long int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);
unsigned long int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long int anonymous_var_nameX142, unsigned long int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);
void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);
int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);
int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);
int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);
int getw(struct _IO_FILE* anonymous_var_nameX149);
int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);
char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long int* anonymous_var_nameX153);
int asprintf(char** anonymous_var_nameX154, const char* anonymous_var_nameX155, ...);
int vasprintf(char** anonymous_var_nameX156, const char* anonymous_var_nameX157, va_list anonymous_var_nameX158);
char* fgets_unlocked(char* anonymous_var_nameX159, int anonymous_var_nameX160, struct _IO_FILE* anonymous_var_nameX161);
int fputs_unlocked(const char* anonymous_var_nameX162, struct _IO_FILE* anonymous_var_nameX163);
struct _IO_FILE* fopencookie(void* anonymous_var_nameX174, const char* anonymous_var_nameX175, struct _IO_cookie_io_functions_t anonymous_var_nameX176);
int atoi(const char* anonymous_var_nameX177);
long atol(const char* anonymous_var_nameX178);
long long atoll(const char* anonymous_var_nameX179);
double atof(const char* anonymous_var_nameX180);
float strtof(const char* anonymous_var_nameX181, char** anonymous_var_nameX182);
double strtod(const char* anonymous_var_nameX183, char** anonymous_var_nameX184);
long double strtold(const char* anonymous_var_nameX185, char** anonymous_var_nameX186);
long strtol(const char* anonymous_var_nameX187, char** anonymous_var_nameX188, int anonymous_var_nameX189);
unsigned long int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);
long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);
unsigned long long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);
int rand();
void srand(unsigned int anonymous_var_nameX199);
void* malloc(unsigned long int anonymous_var_nameX200);
void* calloc(unsigned long int anonymous_var_nameX201, unsigned long int anonymous_var_nameX202);
void* realloc(void* anonymous_var_nameX203, unsigned long int anonymous_var_nameX204);
void free(void* anonymous_var_nameX205);
void* aligned_alloc(unsigned long int anonymous_var_nameX206, unsigned long int anonymous_var_nameX207);
void abort();
int atexit(void (*anonymous_lambda_var_nameZ1)());
void exit(int anonymous_var_nameX208);
void _Exit(int anonymous_var_nameX209);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX210);
char* getenv(const char* anonymous_var_nameX211);
int system(const char* anonymous_var_nameX212);
void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long int anonymous_var_nameX215, unsigned long int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));
void qsort(void* anonymous_var_nameX219, unsigned long int anonymous_var_nameX220, unsigned long int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));
int abs(int anonymous_var_nameX224);
long labs(long anonymous_var_nameX225);
long long llabs(long long anonymous_var_nameX226);
struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);
struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);
struct anonymous_typeX3 lldiv(long long anonymous_var_nameX231, long long anonymous_var_nameX232);
int mblen(const char* anonymous_var_nameX233, unsigned long int anonymous_var_nameX234);
int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);
unsigned long int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long int anonymous_var_nameX242);
unsigned long int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long int anonymous_var_nameX245);
unsigned long int __ctype_get_mb_cur_max();
int posix_memalign(void** anonymous_var_nameX246, unsigned long int anonymous_var_nameX247, unsigned long int anonymous_var_nameX248);
int setenv(const char* anonymous_var_nameX249, const char* anonymous_var_nameX250, int anonymous_var_nameX251);
int unsetenv(const char* anonymous_var_nameX252);
int mkstemp(char* anonymous_var_nameX253);
int mkostemp(char* anonymous_var_nameX254, int anonymous_var_nameX255);
char* mkdtemp(char* anonymous_var_nameX256);
int getsubopt(char** anonymous_var_nameX257, char** anonymous_var_nameX258, char** anonymous_var_nameX259);
int rand_r(unsigned int* anonymous_var_nameX260);
char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);
long int random();
void srandom(unsigned int anonymous_var_nameX263);
char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long int anonymous_var_nameX266);
char* setstate(char* anonymous_var_nameX267);
int putenv(char* anonymous_var_nameX268);
int posix_openpt(int anonymous_var_nameX269);
int grantpt(int anonymous_var_nameX270);
int unlockpt(int anonymous_var_nameX271);
char* ptsname(int anonymous_var_nameX272);
char* l64a(long anonymous_var_nameX273);
long a64l(const char* anonymous_var_nameX274);
void setkey(const char* anonymous_var_nameX275);
double drand48();
double erand48(unsigned short int anonymous_var_nameX276[3]);
long int lrand48();
long int nrand48(unsigned short int anonymous_var_nameX277[3]);
long mrand48();
long jrand48(unsigned short int anonymous_var_nameX278[3]);
void srand48(long anonymous_var_nameX279);
unsigned short int* seed48(unsigned short int anonymous_var_nameX280[3]);
void lcong48(unsigned short int anonymous_var_nameX281[7]);
void* alloca(unsigned long int anonymous_var_nameX282);
char* mktemp(char* anonymous_var_nameX283);
int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);
int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);
void* valloc(unsigned long int anonymous_var_nameX289);
void* memalign(unsigned long int anonymous_var_nameX290, unsigned long int anonymous_var_nameX291);
int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);
int clearenv();
void* reallocarray(void* anonymous_var_nameX294, unsigned long int anonymous_var_nameX295, unsigned long int anonymous_var_nameX296);
void qsort_r(void* anonymous_var_nameX297, unsigned long int anonymous_var_nameX298, unsigned long int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);
int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long int anonymous_var_nameX306);
char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);
char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);
char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);
char* secure_getenv(const char* anonymous_var_nameX318);
float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);
double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);
long double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);
void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long int anonymous_var_nameX330);
void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long int anonymous_var_nameX333);
void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long int anonymous_var_nameX336);
int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long int anonymous_var_nameX339);
void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long int anonymous_var_nameX342);
char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);
char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long int anonymous_var_nameX347);
char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);
char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long int anonymous_var_nameX352);
int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);
int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long int anonymous_var_nameX357);
int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);
unsigned long int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long int anonymous_var_nameX362);
char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);
char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);
unsigned long int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);
unsigned long int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);
char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);
char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);
char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);
unsigned long int strlen(const char* anonymous_var_nameX377);
char* strerror(int anonymous_var_nameX378);
int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long int anonymous_var_nameX381);
void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long int anonymous_var_nameX384);
void bzero(void* anonymous_var_nameX385, unsigned long int anonymous_var_nameX386);
char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);
char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);
int ffs(int anonymous_var_nameX391);
int ffsl(long anonymous_var_nameX392);
int ffsll(long long anonymous_var_nameX393);
int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);
int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long int anonymous_var_nameX398);
int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);
int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);
char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);
int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long int anonymous_var_nameX411);
char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);
char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long int anonymous_var_nameX416);
unsigned long int strnlen(const char* anonymous_var_nameX417, unsigned long int anonymous_var_nameX418);
char* strdup(const char* anonymous_var_nameX419);
char* strndup(const char* anonymous_var_nameX420, unsigned long int anonymous_var_nameX421);
char* strsignal(int anonymous_var_nameX422);
char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);
int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);
unsigned long int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);
void* memmem(const void* anonymous_var_nameX432, unsigned long int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long int anonymous_var_nameX435);
void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long int anonymous_var_nameX439);
char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);
unsigned long int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long int anonymous_var_nameX444);
unsigned long int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long int anonymous_var_nameX447);
void explicit_bzero(void* anonymous_var_nameX448, unsigned long int anonymous_var_nameX449);
int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);
char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long int anonymous_var_nameX461);
char* setlocale(int anonymous_var_nameX462, const char* anonymous_var_nameX463);
struct lconv* localeconv();
struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX464);
void freelocale(struct __locale_struct* anonymous_var_nameX465);
struct __locale_struct* newlocale(int anonymous_var_nameX466, const char* anonymous_var_nameX467, struct __locale_struct* anonymous_var_nameX468);
struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX469);
int* __errno_location();
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void stackframe();
void come_save_stackframe(char* sname, int sline);
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_catch(int self, void* parent, void (*block)(void*));
int int_value(int self, void* parent, void (*block)(void*));
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_dynamic_typeof(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
char* __builtin_string(char* str);
struct buffer* buffer_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
void buffer_force_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size);
static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size);
static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size);
static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size);
static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size);
static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool int_equals(int self, int right);
_Bool short_equals(short short self, short short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, long right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short short self);
int int_clone(int self);
long int long_clone(long self);
unsigned long int size_t_clone(long self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswascii(unsigned int c);
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xisalpha(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_reverse(char* str);
char* string_reverse(char* str);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* string_split_char(char* self, char c);
struct list$1charph* charp_split_char(char* self, char c);
char* xbasename(char* path);
char* xextname(char* path);
char* xnoextname(char* path);
char* bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short short left, short short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int float_compare(float left, float right);
int double_compare(float left, float right);
int size_t_compare(long left, long right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
int FILE_write(struct _IO_FILE* f, char* str);
char* FILE_read(struct _IO_FILE* f);
int FILE_fclose(struct _IO_FILE* f);
int* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
char* string_read(char* file_name);
char* charp_puts(char* self);
char* string_puts(char* self);
int int_printf(int self, char* msg);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
char* charp_print(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
struct integer* integer_initialize(struct integer* self, long value);
struct integer* char_to_integer(char self);
struct integer* short_to_integer(short short self);
struct integer* int_to_integer(int self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
int integer_compare(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
struct integer* integer_operator_add(struct integer* left, struct integer* right);
struct integer* integer_operator_sub(struct integer* left, struct integer* right);
struct integer* integer_operator_mult(struct integer* left, struct integer* right);
struct integer* integer_operator_div(struct integer* left, struct integer* right);
struct integer* integer_operator_mod(struct integer* left, struct integer* right);
struct integer* integer_operator_lshift(struct integer* left, struct integer* right);
struct integer* integer_operator_rshift(struct integer* left, struct integer* right);
struct integer* integer_operator_gteq(struct integer* left, struct integer* right);
struct integer* integer_operator_lteq(struct integer* left, struct integer* right);
struct integer* integer_operator_lt(struct integer* left, struct integer* right);
struct integer* integer_operator_gt(struct integer* left, struct integer* right);
struct integer* integer_operator_and(struct integer* left, struct integer* right);
struct integer* integer_operator_xor(struct integer* left, struct integer* right);
struct integer* integer_operator_or(struct integer* left, struct integer* right);
struct integer* integer_operator_andand(struct integer* left, struct integer* right);
struct integer* integer_operator_oror(struct integer* left, struct integer* right);
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX583, int anonymous_var_nameX584, const char** anonymous_var_nameX585, int* anonymous_var_nameX586, const unsigned char* anonymous_var_nameX587);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX588, int anonymous_var_nameX589, const char** anonymous_var_nameX590, int* anonymous_var_nameX591, const unsigned char* anonymous_var_nameX592);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX593, int anonymous_var_nameX594, const char** anonymous_var_nameX595, int* anonymous_var_nameX596, const unsigned char* anonymous_var_nameX597);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX598, int anonymous_var_nameX599, int* anonymous_var_nameX600, const char** anonymous_var_nameX601, int* anonymous_var_nameX602, const unsigned char* anonymous_var_nameX603);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX604, int anonymous_var_nameX605, int* anonymous_var_nameX606, const char** anonymous_var_nameX607, int* anonymous_var_nameX608, const unsigned char* anonymous_var_nameX609);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX610, int anonymous_var_nameX611, int* anonymous_var_nameX612, const char** anonymous_var_nameX613, int* anonymous_var_nameX614, const unsigned char* anonymous_var_nameX615);
int pcre_config(int anonymous_var_nameX616, void* anonymous_var_nameX617);
int pcre16_config(int anonymous_var_nameX618, void* anonymous_var_nameX619);
int pcre32_config(int anonymous_var_nameX620, void* anonymous_var_nameX621);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX622, const char* anonymous_var_nameX623, int* anonymous_var_nameX624, int anonymous_var_nameX625, const char* anonymous_var_nameX626, char* anonymous_var_nameX627, int anonymous_var_nameX628);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX629, const unsigned short int* anonymous_var_nameX630, int* anonymous_var_nameX631, int anonymous_var_nameX632, const unsigned short int* anonymous_var_nameX633, unsigned short int* anonymous_var_nameX634, int anonymous_var_nameX635);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX636, const unsigned int* anonymous_var_nameX637, int* anonymous_var_nameX638, int anonymous_var_nameX639, const unsigned int* anonymous_var_nameX640, unsigned int* anonymous_var_nameX641, int anonymous_var_nameX642);
int pcre_copy_substring(const char* anonymous_var_nameX643, int* anonymous_var_nameX644, int anonymous_var_nameX645, int anonymous_var_nameX646, char* anonymous_var_nameX647, int anonymous_var_nameX648);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX649, int* anonymous_var_nameX650, int anonymous_var_nameX651, int anonymous_var_nameX652, unsigned short int* anonymous_var_nameX653, int anonymous_var_nameX654);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX655, int* anonymous_var_nameX656, int anonymous_var_nameX657, int anonymous_var_nameX658, unsigned int* anonymous_var_nameX659, int anonymous_var_nameX660);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX661, const struct pcre_extra* anonymous_var_nameX662, const char* anonymous_var_nameX663, int anonymous_var_nameX664, int anonymous_var_nameX665, int anonymous_var_nameX666, int* anonymous_var_nameX667, int anonymous_var_nameX668, int* anonymous_var_nameX669, int anonymous_var_nameX670);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX671, const struct pcre16_extra* anonymous_var_nameX672, const unsigned short int* anonymous_var_nameX673, int anonymous_var_nameX674, int anonymous_var_nameX675, int anonymous_var_nameX676, int* anonymous_var_nameX677, int anonymous_var_nameX678, int* anonymous_var_nameX679, int anonymous_var_nameX680);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX681, const struct pcre32_extra* anonymous_var_nameX682, const unsigned int* anonymous_var_nameX683, int anonymous_var_nameX684, int anonymous_var_nameX685, int anonymous_var_nameX686, int* anonymous_var_nameX687, int anonymous_var_nameX688, int* anonymous_var_nameX689, int anonymous_var_nameX690);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX691, const struct pcre_extra* anonymous_var_nameX692, const char* anonymous_var_nameX693, int anonymous_var_nameX694, int anonymous_var_nameX695, int anonymous_var_nameX696, int* anonymous_var_nameX697, int anonymous_var_nameX698);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX699, const struct pcre16_extra* anonymous_var_nameX700, const unsigned short int* anonymous_var_nameX701, int anonymous_var_nameX702, int anonymous_var_nameX703, int anonymous_var_nameX704, int* anonymous_var_nameX705, int anonymous_var_nameX706);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX707, const struct pcre32_extra* anonymous_var_nameX708, const unsigned int* anonymous_var_nameX709, int anonymous_var_nameX710, int anonymous_var_nameX711, int anonymous_var_nameX712, int* anonymous_var_nameX713, int anonymous_var_nameX714);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX715, const struct pcre_extra* anonymous_var_nameX716, const char* anonymous_var_nameX717, int anonymous_var_nameX718, int anonymous_var_nameX719, int anonymous_var_nameX720, int* anonymous_var_nameX721, int anonymous_var_nameX722, struct real_pcre_jit_stack* anonymous_var_nameX723);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX724, const struct pcre16_extra* anonymous_var_nameX725, const unsigned short int* anonymous_var_nameX726, int anonymous_var_nameX727, int anonymous_var_nameX728, int anonymous_var_nameX729, int* anonymous_var_nameX730, int anonymous_var_nameX731, struct real_pcre16_jit_stack* anonymous_var_nameX732);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX733, const struct pcre32_extra* anonymous_var_nameX734, const unsigned int* anonymous_var_nameX735, int anonymous_var_nameX736, int anonymous_var_nameX737, int anonymous_var_nameX738, int* anonymous_var_nameX739, int anonymous_var_nameX740, struct real_pcre32_jit_stack* anonymous_var_nameX741);
void pcre_free_substring(const char* anonymous_var_nameX742);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX743);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX744);
void pcre_free_substring_list(const char** anonymous_var_nameX745);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX746);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX747);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX748, const struct pcre_extra* anonymous_var_nameX749, int anonymous_var_nameX750, void* anonymous_var_nameX751);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX752, const struct pcre16_extra* anonymous_var_nameX753, int anonymous_var_nameX754, void* anonymous_var_nameX755);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX756, const struct pcre32_extra* anonymous_var_nameX757, int anonymous_var_nameX758, void* anonymous_var_nameX759);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX760, const char* anonymous_var_nameX761, int* anonymous_var_nameX762, int anonymous_var_nameX763, const char* anonymous_var_nameX764, const char** anonymous_var_nameX765);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX766, const unsigned short int* anonymous_var_nameX767, int* anonymous_var_nameX768, int anonymous_var_nameX769, const unsigned short int* anonymous_var_nameX770, const unsigned short int** anonymous_var_nameX771);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX772, const unsigned int* anonymous_var_nameX773, int* anonymous_var_nameX774, int anonymous_var_nameX775, const unsigned int* anonymous_var_nameX776, const unsigned int** anonymous_var_nameX777);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX778, const char* anonymous_var_nameX779);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX780, const unsigned short int* anonymous_var_nameX781);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX782, const unsigned int* anonymous_var_nameX783);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX784, const char* anonymous_var_nameX785, char** anonymous_var_nameX786, char** anonymous_var_nameX787);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX788, const unsigned short int* anonymous_var_nameX789, unsigned short int** anonymous_var_nameX790, unsigned short int** anonymous_var_nameX791);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX792, const unsigned int* anonymous_var_nameX793, unsigned int** anonymous_var_nameX794, unsigned int** anonymous_var_nameX795);
int pcre_get_substring(const char* anonymous_var_nameX796, int* anonymous_var_nameX797, int anonymous_var_nameX798, int anonymous_var_nameX799, const char** anonymous_var_nameX800);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX801, int* anonymous_var_nameX802, int anonymous_var_nameX803, int anonymous_var_nameX804, const unsigned short int** anonymous_var_nameX805);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX806, int* anonymous_var_nameX807, int anonymous_var_nameX808, int anonymous_var_nameX809, const unsigned int** anonymous_var_nameX810);
int pcre_get_substring_list(const char* anonymous_var_nameX811, int* anonymous_var_nameX812, int anonymous_var_nameX813, const char*** anonymous_var_nameX814);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX815, int* anonymous_var_nameX816, int anonymous_var_nameX817, const unsigned short int*** anonymous_var_nameX818);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX819, int* anonymous_var_nameX820, int anonymous_var_nameX821, const unsigned int*** anonymous_var_nameX822);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX823, int anonymous_var_nameX824);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX825, int anonymous_var_nameX826);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX827, int anonymous_var_nameX828);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX829, int anonymous_var_nameX830, const char** anonymous_var_nameX831);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX832, int anonymous_var_nameX833, const char** anonymous_var_nameX834);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX835, int anonymous_var_nameX836, const char** anonymous_var_nameX837);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX838);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX839);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX840);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX841, struct pcre_extra* anonymous_var_nameX842, const unsigned char* anonymous_var_nameX843);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX844, struct pcre16_extra* anonymous_var_nameX845, const unsigned char* anonymous_var_nameX846);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX847, struct pcre32_extra* anonymous_var_nameX848, const unsigned char* anonymous_var_nameX849);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX850, const unsigned short int* anonymous_var_nameX851, int anonymous_var_nameX852, int* anonymous_var_nameX853, int anonymous_var_nameX854);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX855, const unsigned int* anonymous_var_nameX856, int anonymous_var_nameX857, int* anonymous_var_nameX858, int anonymous_var_nameX859);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX860, int anonymous_var_nameX861);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX862, int anonymous_var_nameX863);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX864, int anonymous_var_nameX865);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX866);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX867);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX868);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX869, struct real_pcre_jit_stack* (*anonymous_var_nameX870)(void*), void* anonymous_var_nameX871);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX872, struct real_pcre16_jit_stack* (*anonymous_var_nameX873)(void*), void* anonymous_var_nameX874);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX875, struct real_pcre32_jit_stack* (*anonymous_var_nameX876)(void*), void* anonymous_var_nameX877);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
unsigned int* wcscpy(unsigned int* anonymous_var_nameX878, const unsigned int* anonymous_var_nameX879);
unsigned int* wcsncpy(unsigned int* anonymous_var_nameX880, const unsigned int* anonymous_var_nameX881, unsigned long int anonymous_var_nameX882);
unsigned int* wcscat(unsigned int* anonymous_var_nameX883, const unsigned int* anonymous_var_nameX884);
unsigned int* wcsncat(unsigned int* anonymous_var_nameX885, const unsigned int* anonymous_var_nameX886, unsigned long int anonymous_var_nameX887);
int wcscmp(const unsigned int* anonymous_var_nameX888, const unsigned int* anonymous_var_nameX889);
int wcsncmp(const unsigned int* anonymous_var_nameX890, const unsigned int* anonymous_var_nameX891, unsigned long int anonymous_var_nameX892);
int wcscoll(const unsigned int* anonymous_var_nameX893, const unsigned int* anonymous_var_nameX894);
unsigned long int wcsxfrm(unsigned int* anonymous_var_nameX895, const unsigned int* anonymous_var_nameX896, unsigned long int anonymous_var_nameX897);
unsigned int* wcschr(const unsigned int* anonymous_var_nameX898, unsigned int anonymous_var_nameX899);
unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX900, unsigned int anonymous_var_nameX901);
unsigned long int wcscspn(const unsigned int* anonymous_var_nameX902, const unsigned int* anonymous_var_nameX903);
unsigned long int wcsspn(const unsigned int* anonymous_var_nameX904, const unsigned int* anonymous_var_nameX905);
unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX906, const unsigned int* anonymous_var_nameX907);
unsigned int* wcstok(unsigned int* anonymous_var_nameX908, const unsigned int* anonymous_var_nameX909, unsigned int** anonymous_var_nameX910);
unsigned long int wcslen(const unsigned int* anonymous_var_nameX911);
unsigned int* wcsstr(const unsigned int* anonymous_var_nameX912, const unsigned int* anonymous_var_nameX913);
unsigned int* wcswcs(const unsigned int* anonymous_var_nameX914, const unsigned int* anonymous_var_nameX915);
unsigned int* wmemchr(const unsigned int* anonymous_var_nameX916, unsigned int anonymous_var_nameX917, unsigned long int anonymous_var_nameX918);
int wmemcmp(const unsigned int* anonymous_var_nameX919, const unsigned int* anonymous_var_nameX920, unsigned long int anonymous_var_nameX921);
unsigned int* wmemcpy(unsigned int* anonymous_var_nameX922, const unsigned int* anonymous_var_nameX923, unsigned long int anonymous_var_nameX924);
unsigned int* wmemmove(unsigned int* anonymous_var_nameX925, const unsigned int* anonymous_var_nameX926, unsigned long int anonymous_var_nameX927);
unsigned int* wmemset(unsigned int* anonymous_var_nameX928, unsigned int anonymous_var_nameX929, unsigned long int anonymous_var_nameX930);
unsigned int btowc(int anonymous_var_nameX931);
int wctob(unsigned int anonymous_var_nameX932);
int mbsinit(const struct __mbstate_t* anonymous_var_nameX933);
unsigned long int mbrtowc(unsigned int* anonymous_var_nameX934, const char* anonymous_var_nameX935, unsigned long int anonymous_var_nameX936, struct __mbstate_t* anonymous_var_nameX937);
unsigned long int wcrtomb(char* anonymous_var_nameX938, unsigned int anonymous_var_nameX939, struct __mbstate_t* anonymous_var_nameX940);
unsigned long int mbrlen(const char* anonymous_var_nameX941, unsigned long int anonymous_var_nameX942, struct __mbstate_t* anonymous_var_nameX943);
unsigned long int mbsrtowcs(unsigned int* anonymous_var_nameX944, const char** anonymous_var_nameX945, unsigned long int anonymous_var_nameX946, struct __mbstate_t* anonymous_var_nameX947);
unsigned long int wcsrtombs(char* anonymous_var_nameX948, const unsigned int** anonymous_var_nameX949, unsigned long int anonymous_var_nameX950, struct __mbstate_t* anonymous_var_nameX951);
float wcstof(const unsigned int* anonymous_var_nameX952, unsigned int** anonymous_var_nameX953);
double wcstod(const unsigned int* anonymous_var_nameX954, unsigned int** anonymous_var_nameX955);
long double wcstold(const unsigned int* anonymous_var_nameX956, unsigned int** anonymous_var_nameX957);
long wcstol(const unsigned int* anonymous_var_nameX958, unsigned int** anonymous_var_nameX959, int anonymous_var_nameX960);
unsigned long int wcstoul(const unsigned int* anonymous_var_nameX961, unsigned int** anonymous_var_nameX962, int anonymous_var_nameX963);
long long wcstoll(const unsigned int* anonymous_var_nameX964, unsigned int** anonymous_var_nameX965, int anonymous_var_nameX966);
unsigned long long wcstoull(const unsigned int* anonymous_var_nameX967, unsigned int** anonymous_var_nameX968, int anonymous_var_nameX969);
int fwide(struct _IO_FILE* anonymous_var_nameX970, int anonymous_var_nameX971);
int wprintf(const unsigned int* anonymous_var_nameX972, ...);
int fwprintf(struct _IO_FILE* anonymous_var_nameX973, const unsigned int* anonymous_var_nameX974, ...);
int swprintf(unsigned int* anonymous_var_nameX975, unsigned long int anonymous_var_nameX976, const unsigned int* anonymous_var_nameX977, ...);
int vwprintf(const unsigned int* anonymous_var_nameX978, va_list anonymous_var_nameX979);
int vfwprintf(struct _IO_FILE* anonymous_var_nameX980, const unsigned int* anonymous_var_nameX981, va_list anonymous_var_nameX982);
int vswprintf(unsigned int* anonymous_var_nameX983, unsigned long int anonymous_var_nameX984, const unsigned int* anonymous_var_nameX985, va_list anonymous_var_nameX986);
int wscanf(const unsigned int* anonymous_var_nameX987, ...);
int fwscanf(struct _IO_FILE* anonymous_var_nameX988, const unsigned int* anonymous_var_nameX989, ...);
int swscanf(const unsigned int* anonymous_var_nameX990, const unsigned int* anonymous_var_nameX991, ...);
int vwscanf(const unsigned int* anonymous_var_nameX992, va_list anonymous_var_nameX993);
int vfwscanf(struct _IO_FILE* anonymous_var_nameX994, const unsigned int* anonymous_var_nameX995, va_list anonymous_var_nameX996);
int vswscanf(const unsigned int* anonymous_var_nameX997, const unsigned int* anonymous_var_nameX998, va_list anonymous_var_nameX999);
unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1000);
unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1001);
unsigned int getwchar();
unsigned int fputwc(unsigned int anonymous_var_nameX1002, struct _IO_FILE* anonymous_var_nameX1003);
unsigned int putwc(unsigned int anonymous_var_nameX1004, struct _IO_FILE* anonymous_var_nameX1005);
unsigned int putwchar(unsigned int anonymous_var_nameX1006);
unsigned int* fgetws(unsigned int* anonymous_var_nameX1007, int anonymous_var_nameX1008, struct _IO_FILE* anonymous_var_nameX1009);
int fputws(const unsigned int* anonymous_var_nameX1010, struct _IO_FILE* anonymous_var_nameX1011);
unsigned int ungetwc(unsigned int anonymous_var_nameX1012, struct _IO_FILE* anonymous_var_nameX1013);
unsigned long int wcsftime(unsigned int* anonymous_var_nameX1014, unsigned long int anonymous_var_nameX1015, const unsigned int* anonymous_var_nameX1016, const struct tm* anonymous_var_nameX1017);
unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1018);
unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1019);
unsigned int getwchar_unlocked();
unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1020, struct _IO_FILE* anonymous_var_nameX1021);
unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1022, struct _IO_FILE* anonymous_var_nameX1023);
unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1024);
unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1025, int anonymous_var_nameX1026, struct _IO_FILE* anonymous_var_nameX1027);
int fputws_unlocked(const unsigned int* anonymous_var_nameX1028, struct _IO_FILE* anonymous_var_nameX1029);
unsigned long int wcsftime_l(unsigned int* anonymous_var_nameX1030, unsigned long int anonymous_var_nameX1031, const unsigned int* anonymous_var_nameX1032, const struct tm* anonymous_var_nameX1033, struct __locale_struct* anonymous_var_nameX1034);
struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1035, unsigned long int* anonymous_var_nameX1036);
unsigned long int mbsnrtowcs(unsigned int* anonymous_var_nameX1037, const char** anonymous_var_nameX1038, unsigned long int anonymous_var_nameX1039, unsigned long int anonymous_var_nameX1040, struct __mbstate_t* anonymous_var_nameX1041);
unsigned long int wcsnrtombs(char* anonymous_var_nameX1042, const unsigned int** anonymous_var_nameX1043, unsigned long int anonymous_var_nameX1044, unsigned long int anonymous_var_nameX1045, struct __mbstate_t* anonymous_var_nameX1046);
unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1047);
unsigned long int wcsnlen(const unsigned int* anonymous_var_nameX1048, unsigned long int anonymous_var_nameX1049);
unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1050, const unsigned int* anonymous_var_nameX1051);
unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1052, const unsigned int* anonymous_var_nameX1053, unsigned long int anonymous_var_nameX1054);
int wcscasecmp(const unsigned int* anonymous_var_nameX1055, const unsigned int* anonymous_var_nameX1056);
int wcscasecmp_l(const unsigned int* anonymous_var_nameX1057, const unsigned int* anonymous_var_nameX1058, struct __locale_struct* anonymous_var_nameX1059);
int wcsncasecmp(const unsigned int* anonymous_var_nameX1060, const unsigned int* anonymous_var_nameX1061, unsigned long int anonymous_var_nameX1062);
int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1063, const unsigned int* anonymous_var_nameX1064, unsigned long int anonymous_var_nameX1065, struct __locale_struct* anonymous_var_nameX1066);
int wcscoll_l(const unsigned int* anonymous_var_nameX1067, const unsigned int* anonymous_var_nameX1068, struct __locale_struct* anonymous_var_nameX1069);
unsigned long int wcsxfrm_l(unsigned int* anonymous_var_nameX1070, const unsigned int* anonymous_var_nameX1071, unsigned long int anonymous_var_nameX1072, struct __locale_struct* anonymous_var_nameX1073);
int wcwidth(unsigned int anonymous_var_nameX1074);
int wcswidth(const unsigned int* anonymous_var_nameX1075, unsigned long int anonymous_var_nameX1076);
int iswalnum(unsigned int anonymous_var_nameX1077);
int iswalpha(unsigned int anonymous_var_nameX1078);
int iswblank(unsigned int anonymous_var_nameX1079);
int iswcntrl(unsigned int anonymous_var_nameX1080);
int iswdigit(unsigned int anonymous_var_nameX1081);
int iswgraph(unsigned int anonymous_var_nameX1082);
int iswlower(unsigned int anonymous_var_nameX1083);
int iswprint(unsigned int anonymous_var_nameX1084);
int iswpunct(unsigned int anonymous_var_nameX1085);
int iswspace(unsigned int anonymous_var_nameX1086);
int iswupper(unsigned int anonymous_var_nameX1087);
int iswxdigit(unsigned int anonymous_var_nameX1088);
int iswctype(unsigned int anonymous_var_nameX1089, unsigned long int anonymous_var_nameX1090);
unsigned int towlower(unsigned int anonymous_var_nameX1091);
unsigned int towupper(unsigned int anonymous_var_nameX1092);
unsigned long int wctype(const char* anonymous_var_nameX1093);
char* dirname(char* anonymous_var_nameX1094);
char* basename(char* anonymous_var_nameX1095);
unsigned int GC_get_version();
unsigned long int GC_get_gc_no();
void GC_set_oom_fn(void* (*anonymous_var_nameX1097)(unsigned long int));
void* (*GC_get_oom_fn())(unsigned long int);
void GC_set_on_heap_resize(void (*anonymous_var_nameX1099)(unsigned long int));
void (*GC_get_on_heap_resize())(unsigned long int);
void GC_set_on_collection_event(void (*anonymous_var_nameX1101)(enum anonymous_typeY5));
void (*GC_get_on_collection_event())(enum anonymous_typeY5);
void GC_set_find_leak(int anonymous_var_nameX1102);
int GC_get_find_leak();
void GC_set_all_interior_pointers(int anonymous_var_nameX1103);
int GC_get_all_interior_pointers();
void GC_set_finalize_on_demand(int anonymous_var_nameX1104);
int GC_get_finalize_on_demand();
void GC_set_java_finalization(int anonymous_var_nameX1105);
int GC_get_java_finalization();
void GC_set_finalizer_notifier(void (*anonymous_var_nameX1106)());
void (*GC_get_finalizer_notifier())();
void GC_set_dont_expand(int anonymous_var_nameX1107);
int GC_get_dont_expand();
void GC_set_full_freq(int anonymous_var_nameX1108);
int GC_get_full_freq();
void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1109);
unsigned long int GC_get_non_gc_bytes();
void GC_set_no_dls(int anonymous_var_nameX1110);
int GC_get_no_dls();
void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1111);
unsigned long int GC_get_free_space_divisor();
void GC_set_max_retries(unsigned long int anonymous_var_nameX1112);
unsigned long int GC_get_max_retries();
void GC_set_dont_precollect(int anonymous_var_nameX1113);
int GC_get_dont_precollect();
void GC_set_time_limit(unsigned long int anonymous_var_nameX1114);
unsigned long int GC_get_time_limit();
void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1115);
struct GC_timeval_s GC_get_time_limit_tv();
void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1116);
unsigned long int GC_get_allocd_bytes_per_finalizer();
void GC_start_performance_measurement();
unsigned long int GC_get_full_gc_total_time();
void GC_set_pages_executable(int anonymous_var_nameX1117);
int GC_get_pages_executable();
void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX1118);
unsigned long int GC_get_min_bytes_allocd();
void GC_set_rate(int anonymous_var_nameX1119);
int GC_get_rate();
void GC_set_max_prior_attempts(int anonymous_var_nameX1120);
int GC_get_max_prior_attempts();
void GC_set_disable_automatic_collection(int anonymous_var_nameX1121);
int GC_get_disable_automatic_collection();
void GC_set_handle_fork(int anonymous_var_nameX1122);
void GC_atfork_prepare();
void GC_atfork_parent();
void GC_atfork_child();
void GC_init();
int GC_is_init_called();
void GC_deinit();
void* GC_malloc(unsigned long int anonymous_var_nameX1123);
void* GC_malloc_atomic(unsigned long int anonymous_var_nameX1124);
char* GC_strdup(const char* anonymous_var_nameX1125);
char* GC_strndup(const char* anonymous_var_nameX1126, unsigned long int anonymous_var_nameX1127);
void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX1128);
void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX1129);
void* GC_memalign(unsigned long int anonymous_var_nameX1130, unsigned long int anonymous_var_nameX1131);
int GC_posix_memalign(void** anonymous_var_nameX1132, unsigned long int anonymous_var_nameX1133, unsigned long int anonymous_var_nameX1134);
void GC_free(void* anonymous_var_nameX1135);
void GC_change_stubborn(const void* anonymous_var_nameX1136);
void GC_end_stubborn_change(const void* anonymous_var_nameX1137);
void* GC_base(void* anonymous_var_nameX1138);
int GC_is_heap_ptr(const void* anonymous_var_nameX1139);
unsigned long int GC_size(const void* anonymous_var_nameX1140);
void* GC_realloc(void* anonymous_var_nameX1141, unsigned long int anonymous_var_nameX1142);
int GC_expand_hp(unsigned long int anonymous_var_nameX1143);
void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1144);
void GC_exclude_static_roots(void* anonymous_var_nameX1145, void* anonymous_var_nameX1146);
void GC_clear_exclusion_table();
void GC_clear_roots();
void GC_add_roots(void* anonymous_var_nameX1147, void* anonymous_var_nameX1148);
void GC_remove_roots(void* anonymous_var_nameX1149, void* anonymous_var_nameX1150);
void GC_register_displacement(unsigned long int anonymous_var_nameX1151);
void GC_debug_register_displacement(unsigned long int anonymous_var_nameX1152);
void GC_gcollect();
void GC_gcollect_and_unmap();
int GC_try_to_collect(int (*anonymous_var_nameX1153)());
void GC_set_stop_func(int (*anonymous_var_nameX1154)());
int (*GC_get_stop_func())();
unsigned long int GC_get_heap_size();
unsigned long int GC_get_free_bytes();
unsigned long int GC_get_unmapped_bytes();
unsigned long int GC_get_bytes_since_gc();
unsigned long int GC_get_expl_freed_bytes_since_gc();
unsigned long int GC_get_total_bytes();
unsigned long int GC_get_obtained_from_os_bytes();
void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1155, unsigned long int* anonymous_var_nameX1156, unsigned long int* anonymous_var_nameX1157, unsigned long int* anonymous_var_nameX1158, unsigned long int* anonymous_var_nameX1159);
unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1160, unsigned long int anonymous_var_nameX1161);
unsigned long int GC_get_size_map_at(int i);
unsigned long int GC_get_memory_use();
void GC_disable();
int GC_is_disabled();
void GC_enable();
void GC_set_manual_vdb_allowed(int anonymous_var_nameX1162);
int GC_get_manual_vdb_allowed();
void GC_enable_incremental();
int GC_is_incremental_mode();
int GC_incremental_protection_needs();
void GC_start_incremental_collection();
int GC_collect_a_little();
void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1163);
void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1164);
void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1165);
void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1166, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc(unsigned long int anonymous_var_nameX1167, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX1168, unsigned long int ra, const char* s, int i);
char* GC_debug_strdup(const char* anonymous_var_nameX1169, unsigned long int ra, const char* s, int i);
char* GC_debug_strndup(const char* anonymous_var_nameX1170, unsigned long int anonymous_var_nameX1171, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX1172, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX1173, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1174, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1175, unsigned long int ra, const char* s, int i);
void GC_debug_free(void* anonymous_var_nameX1176);
void* GC_debug_realloc(void* anonymous_var_nameX1177, unsigned long int anonymous_var_nameX1178, unsigned long int ra, const char* s, int i);
void GC_debug_change_stubborn(const void* anonymous_var_nameX1179);
void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1180);
void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX1181);
void* GC_debug_realloc_replacement(void* anonymous_var_nameX1182, unsigned long int anonymous_var_nameX1183);
void GC_register_finalizer(void* anonymous_var_nameX1186, void (*anonymous_var_nameX1187)(void*,void*), void* anonymous_var_nameX1188, void (*anonymous_var_nameX1189)(void*,void*), void** anonymous_var_nameX1190);
void GC_debug_register_finalizer(void* anonymous_var_nameX1191, void (*anonymous_var_nameX1192)(void*,void*), void* anonymous_var_nameX1193, void (*anonymous_var_nameX1194)(void*,void*), void** anonymous_var_nameX1195);
void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1196, void (*anonymous_var_nameX1197)(void*,void*), void* anonymous_var_nameX1198, void (*anonymous_var_nameX1199)(void*,void*), void** anonymous_var_nameX1200);
void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1201, void (*anonymous_var_nameX1202)(void*,void*), void* anonymous_var_nameX1203, void (*anonymous_var_nameX1204)(void*,void*), void** anonymous_var_nameX1205);
void GC_register_finalizer_no_order(void* anonymous_var_nameX1206, void (*anonymous_var_nameX1207)(void*,void*), void* anonymous_var_nameX1208, void (*anonymous_var_nameX1209)(void*,void*), void** anonymous_var_nameX1210);
void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1211, void (*anonymous_var_nameX1212)(void*,void*), void* anonymous_var_nameX1213, void (*anonymous_var_nameX1214)(void*,void*), void** anonymous_var_nameX1215);
void GC_register_finalizer_unreachable(void* anonymous_var_nameX1216, void (*anonymous_var_nameX1217)(void*,void*), void* anonymous_var_nameX1218, void (*anonymous_var_nameX1219)(void*,void*), void** anonymous_var_nameX1220);
void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1221, void (*anonymous_var_nameX1222)(void*,void*), void* anonymous_var_nameX1223, void (*anonymous_var_nameX1224)(void*,void*), void** anonymous_var_nameX1225);
int GC_register_disappearing_link(void** anonymous_var_nameX1226);
int GC_general_register_disappearing_link(void** anonymous_var_nameX1227, const void* anonymous_var_nameX1228);
int GC_move_disappearing_link(void** anonymous_var_nameX1229, void** anonymous_var_nameX1230);
int GC_unregister_disappearing_link(void** anonymous_var_nameX1231);
int GC_register_long_link(void** anonymous_var_nameX1232, const void* anonymous_var_nameX1233);
int GC_move_long_link(void** anonymous_var_nameX1234, void** anonymous_var_nameX1235);
int GC_unregister_long_link(void** anonymous_var_nameX1236);
void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX1238)(void*));
enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);
int GC_toggleref_add(void* anonymous_var_nameX1239, int anonymous_var_nameX1240);
void GC_set_await_finalize_proc(void (*anonymous_var_nameX1242)(void*));
void (*GC_get_await_finalize_proc())(void*);
int GC_should_invoke_finalizers();
int GC_invoke_finalizers();
void GC_noop1(unsigned long int anonymous_var_nameX1243);
void GC_set_warn_proc(void (*anonymous_var_nameX1246)(char*,unsigned long int));
void (*GC_get_warn_proc())(char*,unsigned long int);
void GC_ignore_warn_proc(char* anonymous_var_nameX1247, unsigned long int anonymous_var_nameX1248);
void GC_set_log_fd(int anonymous_var_nameX1249);
void GC_set_abort_func(void (*anonymous_var_nameX1251)(const char*));
void (*GC_get_abort_func())(const char*);
void GC_abort_on_oom();
void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1253)(void*), void* anonymous_var_nameX1254);
void* GC_call_with_stack_base(void* (*anonymous_var_nameX1257)(struct GC_stack_base*,void*), void* anonymous_var_nameX1258);
void GC_start_mark_threads();
void* GC_do_blocking(void* (*anonymous_var_nameX1259)(void*), void* anonymous_var_nameX1260);
void* GC_call_with_gc_active(void* (*anonymous_var_nameX1261)(void*), void* anonymous_var_nameX1262);
int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1263);
void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1264);
void GC_set_stackbottom(void* anonymous_var_nameX1265, const struct GC_stack_base* anonymous_var_nameX1266);
void* GC_same_obj(void* anonymous_var_nameX1267, void* anonymous_var_nameX1268);
void* GC_pre_incr(void** anonymous_var_nameX1269, long anonymous_var_nameX1270);
void* GC_post_incr(void** anonymous_var_nameX1271, long anonymous_var_nameX1272);
void* GC_is_visible(void* anonymous_var_nameX1273);
void* GC_is_valid_displacement(void* anonymous_var_nameX1274);
void GC_dump();
void GC_dump_named(const char* anonymous_var_nameX1275);
void GC_dump_regions();
void GC_dump_finalization();
void GC_ptr_store_and_dirty(void* anonymous_var_nameX1276, const void* anonymous_var_nameX1277);
void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1278, const void* anonymous_var_nameX1279);
void* GC_malloc_many(unsigned long int anonymous_var_nameX1300);
void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1304)(const char*,void*,unsigned long int));
void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1305);
int GC_get_force_unmap_on_gcollect();
void GC_win32_free_heap();
void regex_finalizer(void* obj, void* client_data);
struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
void come_regex_finalize(struct come_regex* reg);
struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* come_regex_clone(struct come_regex* reg);
char* come_regex_to_string(struct come_regex* regex);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail);
unsigned int* __builtin_wstring(char* str);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, struct come_regex* reg, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);
struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);
char* charp_strip(char* self);
char* charp_printable(char* str);
char* wchar_tp_to_string(unsigned int* wstr);
unsigned int* charp_to_wstring(char* str);
int wchar_tp_length(unsigned int* str);
unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail);
int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value);
int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value);
unsigned int* wchar_tp_reverse(unsigned int* str);
unsigned int* wchar_tp_multiply(unsigned int* str, int n);
unsigned int* wchar_tp_printable(unsigned int* str);
_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
int wchar_tp_compare(unsigned int* left, unsigned int* right);
int wstring_compare(unsigned int* left, unsigned int* right);
unsigned int come_regex_get_hash_key(struct come_regex* reg);
_Bool wchar_tp_equals(unsigned int left, unsigned int right);
unsigned int* wchar_tp_operator_mult(unsigned int* str, int n);
unsigned int* wstring_operator_mult(unsigned int* str, int n);
_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);
_Bool wstring_operator_equals(unsigned int* left, unsigned int* right);
_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);
_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right);
_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);
_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);
unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right);
unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right);
int charp_index(char* str, char* search_str, int default_value);
int charp_index_regex(char* self, struct come_regex* reg, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
char* charp_sub(char* self, struct come_regex* reg, char* replace);
char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count);
struct list$1charph* charp_split_str(char* self, char* str);
struct list$1charph* charp_scan(char* self, struct come_regex* reg);
struct list$1charph* charp_split(char* self, struct come_regex* reg);
_Bool charp_match(char* self, struct come_regex* reg);
struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit);
int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value);
_Bool charp_match_count(char* self, struct come_regex* reg, int count);
char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
unsigned int wchar_tp_get_hash_key(unsigned int* value);
_Bool wstring_equals(unsigned int* left, unsigned int* right);
_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);
_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);
unsigned int wchar_t_get_hash_key(unsigned int value);
_Bool wchar_t_equals(unsigned int left, unsigned int right);
char* wchar_t_to_string(unsigned int wc);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* xdirname(char* path);
// uniq global variable
// source head3

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2111, "buffer"));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = __result_obj__ = result_0;
    return __result1__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_1;
struct buffer* __result2__;
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2118, "buffer"));
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result2__ = __result_obj__ = result_1;
    return __result2__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_2;
struct buffer* __result3__;
    result_2=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2125, "buffer"));
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result3__ = __result_obj__ = result_2;
    return __result3__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_3;
struct buffer* __result4__;
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2132, "buffer"));
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result4__ = __result_obj__ = result_3;
    return __result4__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_4;
struct buffer* __result5__;
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2139, "buffer"));
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result5__ = __result_obj__ = result_4;
    return __result5__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_5;
struct buffer* __result6__;
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2146, "buffer"));
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result6__ = __result_obj__ = result_5;
    return __result6__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* result_6;
struct smart_pointer$1char* __result7__;
    result_6=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2162, "smart_pointer$1char");
    result_6->memory=buffer_clone(self);
    result_6->p=result_6->memory->buf;
    __result7__ = __result_obj__ = result_6;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* result_7;
struct smart_pointer$1char* __result8__;
    result_7=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2172, "smart_pointer$1char");
    result_7->memory=buffer_clone(self);
    result_7->p=(char*)result_7->memory->buf;
    __result8__ = __result_obj__ = result_7;
    return __result8__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* result_8;
struct smart_pointer$1short* __result9__;
    result_8=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2182, "smart_pointer$1short");
    result_8->memory=buffer_clone(self);
    result_8->p=(short short*)result_8->memory->buf;
    __result9__ = __result_obj__ = result_8;
    return __result9__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* result_9;
struct smart_pointer$1int* __result10__;
    result_9=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2192, "smart_pointer$1int");
    result_9->memory=buffer_clone(self);
    result_9->p=(int*)result_9->memory->buf;
    __result10__ = __result_obj__ = result_9;
    return __result10__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* result_10;
struct smart_pointer$1long* __result11__;
    result_10=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2202, "smart_pointer$1long");
    result_10->memory=buffer_clone(self);
    result_10->p=(long*)result_10->memory->buf;
    __result11__ = __result_obj__ = result_10;
    return __result11__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result13__;
    __result13__ = __result_obj__ = smart_pointer$1char_initialize((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2373, "smart_pointer$1char"),self,len);
    return __result13__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result15__;
    __result15__ = __result_obj__ = smart_pointer$1short_initialize((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2378, "smart_pointer$1short"),self,len);
    return __result15__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result17__;
    __result17__ = __result_obj__ = smart_pointer$1int_initialize((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2383, "smart_pointer$1int"),self,len);
    return __result17__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result19__;
    __result19__ = __result_obj__ = smart_pointer$1long_initialize((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2388, "smart_pointer$1long"),self,len);
    return __result19__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1float* __result21__;
    __result21__ = __result_obj__ = smart_pointer$1float_initialize((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2393, "smart_pointer$1float"),self,len);
    return __result21__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1double* __result23__;
    __result23__ = __result_obj__ = smart_pointer$1double_initialize((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2398, "smart_pointer$1double"),self,len);
    return __result23__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1char* __result26__;
    __result26__ = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2403, "list$1char"),len,self);
    return __result26__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1short* __result29__;
    __result29__ = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2408, "list$1short"),len,self);
    return __result29__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1int* __result32__;
    __result32__ = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2413, "list$1int"),len,self);
    return __result32__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1long* __result35__;
    __result35__ = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2418, "list$1long"),len,self);
    return __result35__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1float* __result38__;
    __result38__ = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2423, "list$1float"),len,self);
    return __result38__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1double* __result41__;
    __result41__ = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2428, "list$1double"),len,self);
    return __result41__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
    return len;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
    return len;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
    return len;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
    return len;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
    return len;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result42__;
    __result42__ = __result_obj__ = xsprintf(msg,self);
    return __result42__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result43__;
    __result43__ = __result_obj__ = xsprintf(msg,self);
    return __result43__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result44__;
    __result44__ = __result_obj__ = xsprintf(msg,self);
    return __result44__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
unsigned int* __result45__;
    __result45__ = __result_obj__ = wchar_tp_substring(str,head,tail);
    return __result45__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
    return charp_index_count(str,search_str,count,default_value);
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_index_regex_count(self,reg,count,default_value);
}
static inline int string_rindex(char* str, char* search_str, int default_value){
    return charp_rindex(str,search_str,default_value);
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
    return charp_rindex_regex(self,reg,default_value);
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
    return charp_rindex_count(str,search_str,default_value,-1);
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result46__;
    __result46__ = __result_obj__ = charp_scan_block(self,reg,parent,block);
    return __result46__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result47__;
    __result47__ = __result_obj__ = charp_scan_block_count(self,reg,count,parent,block);
    return __result47__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result48__;
    __result48__ = __result_obj__ = charp_split_block(self,reg,parent,block);
    return __result48__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result49__;
    __result49__ = __result_obj__ = charp_split_block_count(self,reg,count,parent,block);
    return __result49__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
struct list$1charph* __result50__;
    __result50__ = __result_obj__ = charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex);
    return __result50__;
}
static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
char* __result51__;
    __result51__ = __result_obj__ = charp_strip(self);
    return __result51__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
char* __result52__;
    __result52__ = __result_obj__ = string_printable(str);
    return __result52__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result53__;
    __result53__ = __result_obj__ = charp_to_wstring(str);
    return __result53__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
char* __result54__;
    __result54__ = __result_obj__ = wchar_tp_to_string(wstr);
    return __result54__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
unsigned int* __result55__;
    __result55__ = __result_obj__ = string_to_wstring(xsprintf("%d",self));
    return __result55__;
}
static inline int wstring_length(unsigned int* str){
    return wchar_tp_length(str);
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
unsigned int* __result56__;
    __result56__ = __result_obj__ = wchar_tp_delete(str,head,tail);
    return __result56__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
    return wchar_tp_index(str,search_str,default_value);
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
    return wchar_tp_rindex(str,search_str,default_value);
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
unsigned int* __result57__;
    __result57__ = __result_obj__ = wchar_tp_reverse(str);
    return __result57__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
unsigned int* __result58__;
    __result58__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result58__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__=(void*)0;
unsigned int* __result59__;
    __result59__ = __result_obj__ = wchar_tp_printable(str);
    return __result59__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
    return wchar_tp_get_hash_key(value);
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
    return charp_match_group_strings(self,reg,count,group_strings);
}
static inline int string_index(char* str, char* search_str, int default_value){
    return charp_index(str,search_str,default_value);
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
    return charp_index_regex(self,reg,default_value);
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
char* __result60__;
    __result60__ = __result_obj__ = charp_replace(self,index,c);
    return __result60__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
char* __result61__;
    __result61__ = __result_obj__ = charp_multiply(str,n);
    return __result61__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
char* __result62__;
    __result62__ = __result_obj__ = charp_sub(self,reg,replace);
    return __result62__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
char* __result63__;
    __result63__ = __result_obj__ = charp_sub_count(self,reg,replace,count);
    return __result63__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* __result64__;
    __result64__ = __result_obj__ = charp_split_str(self,str);
    return __result64__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result65__;
    __result65__ = __result_obj__ = charp_scan(self,reg);
    return __result65__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result66__;
    __result66__ = __result_obj__ = charp_split(self,reg);
    return __result66__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
struct list$1charph* __result67__;
    __result67__ = __result_obj__ = charp_split_maxsplit(self,reg,maxsplit);
    return __result67__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_rindex_regex_count(self,reg,count,default_value);
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
    return charp_match_count(self,reg,count);
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result68__;
    __result68__ = __result_obj__ = charp_sub_block(self,reg,parent,block);
    return __result68__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result69__;
    __result69__ = __result_obj__ = charp_sub_block_count(self,reg,count,parent,block);
    return __result69__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
char* __result71__;
    __result71__ = __result_obj__ = string_chomp(str);
    return __result71__;
}

// body function













static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result12__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(char)*size);
    self->p=(char*)self->memory->buf;
    __result12__ = __result_obj__ = self;
    return __result12__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result14__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(short short)*size);
    self->p=(short short*)self->memory->buf;
    __result14__ = __result_obj__ = self;
    return __result14__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result16__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(int)*size);
    self->p=(int*)self->memory->buf;
    __result16__ = __result_obj__ = self;
    return __result16__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result18__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(long)*size);
    self->p=(long*)self->memory->buf;
    __result18__ = __result_obj__ = self;
    return __result18__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1float* __result20__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(float)*size);
    self->p=(float*)self->memory->buf;
    __result20__ = __result_obj__ = self;
    return __result20__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1double* __result22__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(double)*size);
    self->p=(double*)self->memory->buf;
    __result22__ = __result_obj__ = self;
    return __result22__;
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_11;
struct list$1char* __result25__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_11=0;    i_11<num_value;    i_11++    ){
        list$1char_push_back(self,values[i_11]);
    }
    __result25__ = __result_obj__ = self;
    return __result25__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
struct list_item$1char* litem_12;
struct list_item$1char* litem_13;
struct list_item$1char* litem_14;
struct list$1char* __result24__;
    if(self->len==0) {
        litem_12=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 219, "list_item$1char");
        litem_12->prev=((void*)0);
        litem_12->next=((void*)0);
        litem_12->item=item;
        self->tail=litem_12;
        self->head=litem_12;
    }
    else {
        if(self->len==1) {
            litem_13=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 229, "list_item$1char");
            litem_13->prev=self->head;
            litem_13->next=((void*)0);
            litem_13->item=item;
            self->tail=litem_13;
            self->head->next=litem_13;
        }
        else {
            litem_14=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 239, "list_item$1char");
            litem_14->prev=self->tail;
            litem_14->next=((void*)0);
            litem_14->item=item;
            self->tail->next=litem_14;
            self->tail=litem_14;
        }
    }
    self->len++;
    __result24__ = __result_obj__ = self;
    return __result24__;
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
int i_15;
struct list$1short* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        list$1short_push_back(self,values[i_15]);
    }
    __result28__ = __result_obj__ = self;
    return __result28__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__=(void*)0;
struct list_item$1short* litem_16;
struct list_item$1short* litem_17;
struct list_item$1short* litem_18;
struct list$1short* __result27__;
    if(self->len==0) {
        litem_16=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 219, "list_item$1short");
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else {
        if(self->len==1) {
            litem_17=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 229, "list_item$1short");
            litem_17->prev=self->head;
            litem_17->next=((void*)0);
            litem_17->item=item;
            self->tail=litem_17;
            self->head->next=litem_17;
        }
        else {
            litem_18=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 239, "list_item$1short");
            litem_18->prev=self->tail;
            litem_18->next=((void*)0);
            litem_18->item=item;
            self->tail->next=litem_18;
            self->tail=litem_18;
        }
    }
    self->len++;
    __result27__ = __result_obj__ = self;
    return __result27__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_19;
struct list$1int* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_19=0;    i_19<num_value;    i_19++    ){
        list$1int_push_back(self,values[i_19]);
    }
    __result31__ = __result_obj__ = self;
    return __result31__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
struct list_item$1int* litem_20;
struct list_item$1int* litem_21;
struct list_item$1int* litem_22;
struct list$1int* __result30__;
    if(self->len==0) {
        litem_20=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 219, "list_item$1int");
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail=litem_20;
        self->head=litem_20;
    }
    else {
        if(self->len==1) {
            litem_21=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 229, "list_item$1int");
            litem_21->prev=self->head;
            litem_21->next=((void*)0);
            litem_21->item=item;
            self->tail=litem_21;
            self->head->next=litem_21;
        }
        else {
            litem_22=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 239, "list_item$1int");
            litem_22->prev=self->tail;
            litem_22->next=((void*)0);
            litem_22->item=item;
            self->tail->next=litem_22;
            self->tail=litem_22;
        }
    }
    self->len++;
    __result30__ = __result_obj__ = self;
    return __result30__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_23;
struct list$1long* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1long_push_back(self,values[i_23]);
    }
    __result34__ = __result_obj__ = self;
    return __result34__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
struct list_item$1long* litem_24;
struct list_item$1long* litem_25;
struct list_item$1long* litem_26;
struct list$1long* __result33__;
    if(self->len==0) {
        litem_24=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 219, "list_item$1long");
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else {
        if(self->len==1) {
            litem_25=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 229, "list_item$1long");
            litem_25->prev=self->head;
            litem_25->next=((void*)0);
            litem_25->item=item;
            self->tail=litem_25;
            self->head->next=litem_25;
        }
        else {
            litem_26=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 239, "list_item$1long");
            litem_26->prev=self->tail;
            litem_26->next=((void*)0);
            litem_26->item=item;
            self->tail->next=litem_26;
            self->tail=litem_26;
        }
    }
    self->len++;
    __result33__ = __result_obj__ = self;
    return __result33__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1float* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1float_push_back(self,values[i_27]);
    }
    __result37__ = __result_obj__ = self;
    return __result37__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
struct list_item$1float* litem_28;
struct list_item$1float* litem_29;
struct list_item$1float* litem_30;
struct list$1float* __result36__;
    if(self->len==0) {
        litem_28=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 219, "list_item$1float");
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else {
        if(self->len==1) {
            litem_29=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 229, "list_item$1float");
            litem_29->prev=self->head;
            litem_29->next=((void*)0);
            litem_29->item=item;
            self->tail=litem_29;
            self->head->next=litem_29;
        }
        else {
            litem_30=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 239, "list_item$1float");
            litem_30->prev=self->tail;
            litem_30->next=((void*)0);
            litem_30->item=item;
            self->tail->next=litem_30;
            self->tail=litem_30;
        }
    }
    self->len++;
    __result36__ = __result_obj__ = self;
    return __result36__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_31;
struct list$1double* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_31=0;    i_31<num_value;    i_31++    ){
        list$1double_push_back(self,values[i_31]);
    }
    __result40__ = __result_obj__ = self;
    return __result40__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
struct list_item$1double* litem_32;
struct list_item$1double* litem_33;
struct list_item$1double* litem_34;
struct list$1double* __result39__;
    if(self->len==0) {
        litem_32=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 219, "list_item$1double");
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail=litem_32;
        self->head=litem_32;
    }
    else {
        if(self->len==1) {
            litem_33=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 229, "list_item$1double");
            litem_33->prev=self->head;
            litem_33->next=((void*)0);
            litem_33->item=item;
            self->tail=litem_33;
            self->head->next=litem_33;
        }
        else {
            litem_34=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 239, "list_item$1double");
            litem_34->prev=self->tail;
            litem_34->next=((void*)0);
            litem_34->item=item;
            self->tail->next=litem_34;
            self->tail=litem_34;
        }
    }
    self->len++;
    __result39__ = __result_obj__ = self;
    return __result39__;
}



















































void regex_finalizer(void* obj, void* client_data){
struct come_regex* self_35;
    self_35=obj;
    if(self_35&&self_35->re) {
        free(self_35->re);
    }
}

struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_36;
int erro_ofs_37;
int options_38;
struct come_regex* __result72__;
err_36 = (void*)0;
memset(&erro_ofs_37, 0, sizeof(int));
    options_38=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    self->str=__builtin_string(str);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_38;
    self->re=pcre_compile(str,options_38,&err_36,&erro_ofs_37,((void*)0));
    if(self->re==((void*)0)) {
        printf("regex error (%s)\n",str);
        stackframe();
        exit(1);
    }
    if(gComeGCLib) {
        GC_register_finalizer(self,regex_finalizer,((void*)0),((void*)0),((void*)0));
    }
    __result72__ = __result_obj__ = self;
    return __result72__;
}

void come_regex_finalize(struct come_regex* reg){
    if(reg&&reg->str) {
    }
    if(reg&&reg->re) {
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct come_regex* __result73__;
    __result73__ = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str-gc.c", 68, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    return __result73__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct come_regex* __result74__;
    __result74__ = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str-gc.c", 73, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    return __result74__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result75__;
struct come_regex* result_39;
const char* err_40;
int erro_ofs_41;
struct come_regex* __result76__;
err_40 = (void*)0;
memset(&erro_ofs_41, 0, sizeof(int));
    if(reg==((void*)0)) {
        __result75__ = __result_obj__ = ((void*)0);
        return __result75__;
    }
    result_39=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str-gc.c", 83, "come_regex");
    result_39->str=string_clone(reg->str);
    result_39->ignore_case=reg->ignore_case;
    result_39->multiline=reg->multiline;
    result_39->global=reg->global;
    result_39->extended=reg->extended;
    result_39->dotall=reg->dotall;
    result_39->anchored=reg->anchored;
    result_39->dollar_endonly=reg->dollar_endonly;
    result_39->ungreedy=reg->ungreedy;
    result_39->options=reg->options;
    result_39->re=pcre_compile(result_39->str,result_39->options,&err_40,&erro_ofs_41,((void*)0));
    if(result_39->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_39->str);
        stackframe();
        exit(1);
    }
    __result76__ = __result_obj__ = result_39;
    return __result76__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__=(void*)0;
char* __result77__;
    __result77__ = __result_obj__ = __builtin_string(regex->str);
    return __result77__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
char* result_42;
int i_43;
char* __result78__;
    result_42=__builtin_string(str);
    for(    i_43=0;    i_43<strlen(str);    i_43++    ){
        if(str[i_43]>=65&&str[i_43]<=90) {
            result_42[i_43]=str[i_43]-65+97;
        }
    }
    __result78__ = __result_obj__ = result_42;
    return __result78__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
char* result_44;
int i_45;
char* __result79__;
    result_44=__builtin_string(str);
    for(    i_45=0;    i_45<strlen(str);    i_45++    ){
        if(str[i_45]>=97&&str[i_45]<=122) {
            result_44[i_45]=str[i_45]-97+65;
        }
    }
    __result79__ = __result_obj__ = result_44;
    return __result79__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
unsigned int* __result80__;
int len_46;
unsigned int* __result81__;
unsigned int* __result82__;
unsigned int* __result83__;
unsigned int* result_47;
unsigned int* __result84__;
    if(str==((void*)0)) {
        __result80__ = __result_obj__ = __builtin_wstring("");
        return __result80__;
    }
    len_46=wcslen(str);
    if(head<0) {
        head+=len_46;
    }
    if(tail<0) {
        tail+=len_46+1;
    }
    if(head>tail) {
        __result81__ = __result_obj__ = __builtin_wstring("");
        return __result81__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_46) {
        tail=len_46;
    }
    if(head==tail) {
        __result82__ = __result_obj__ = __builtin_wstring("");
        return __result82__;
    }
    if(tail-head+1<1) {
        __result83__ = __result_obj__ = __builtin_wstring("");
        return __result83__;
    }
    result_47=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libneo-c-str-gc.c", 178, "int");
    memcpy(result_47,str+head,sizeof(unsigned int)*(tail-head));
    result_47[tail-head]=0;
    __result84__ = __result_obj__ = result_47;
    return __result84__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result85__;
int len_48;
unsigned int* wstr_49;
int ret_50;
unsigned int* __result86__;
    if(str==((void*)0)) {
        __result85__ = __result_obj__ = ((void*)0);
        return __result85__;
    }
    len_48=strlen(str);
    wstr_49=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_48+1)), "libneo-c-str-gc.c", 193, "int");
    ret_50=mbstowcs(wstr_49,str,len_48+1);
    wstr_49[ret_50]=0;
    if(ret_50<0) {
        wstr_49[0]=0;
    }
    __result86__ = __result_obj__ = wstr_49;
    return __result86__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_51;
int len_52;
int i_53;
int len2_54;
int j_55;
memset(&j_55, 0, sizeof(int));
    n_51=0;
    len_52=strlen(str);
    for(    i_53=0;    i_53<len_52;    i_53++    ){
        len2_54=strlen(search_str);
        for(        j_55=0;        j_55<len2_54;        j_55++        ){
            if(str[i_53+j_55]!=search_str[j_55]) {
                break;
            }
        }
        if(j_55==len2_54) {
            n_51++;
            if(n_51==count) {
                return i_53;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_56;
int result_60;
int offset_61;
const char* err_62;
int erro_ofs_63;
int options_64;
char* str_65;
struct real_pcre8_or_16* re_66;
int n_67;
int options_68;
int len_69;
int regex_result_70;
int i_71;
int i_72;
err_62 = (void*)0;
memset(&erro_ofs_63, 0, sizeof(int));
    ovec_max_56=16;
    int start_57[ovec_max_56];
    memset(&start_57, 0, sizeof(int)    *(ovec_max_56)    );
    int end_58[ovec_max_56];
    memset(&end_58, 0, sizeof(int)    *(ovec_max_56)    );
    int ovec_value_59[ovec_max_56*3];
    memset(&ovec_value_59, 0, sizeof(int)    *(ovec_max_56*3)    );
    result_60=default_value;
    offset_61=0;
    options_64=reg->options;
    str_65=reg->str;
    re_66=reg->re;
    n_67=0;
    while((_Bool)1) {
        options_68=2097152;
        len_69=strlen(self);
        regex_result_70=pcre_exec(re_66,(struct pcre_extra*)0,self,len_69,offset_61,options_68,ovec_value_59,ovec_max_56*3);
        for(        i_71=0;        i_71<ovec_max_56;        i_71++        ){
            start_57[i_71]=ovec_value_59[i_71*2];
        }
        for(        i_72=0;        i_72<ovec_max_56;        i_72++        ){
            end_58[i_72]=ovec_value_59[i_72*2+1];
        }
        if(regex_result_70>0) {
            n_67++;
            if(offset_61==end_58[0]) {
                offset_61++;
            }
            else {
                offset_61=end_58[0];
            }
            if(n_67==count) {
                result_60=start_57[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_60;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_73;
char* p_74;
    len_73=strlen(search_str);
    p_74=str+strlen(str)-len_73;
    while(p_74>=str) {
        if(strncmp(p_74,search_str,len_73)==0) {
            return p_74-str;
        }
        p_74--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_75;
int erro_ofs_76;
int options_77;
char* str_78;
struct real_pcre8_or_16* re_79;
char* self2_80;
int ovec_max_81;
int result_85;
int offset_86;
int options_87;
int len_88;
int regex_result_89;
int i_90;
int i_91;
err_75 = (void*)0;
memset(&erro_ofs_76, 0, sizeof(int));
    options_77=reg->options;
    str_78=reg->str;
    re_79=reg->re;
    self2_80=charp_reverse(self);
    ovec_max_81=16;
    int start_82[ovec_max_81];
    memset(&start_82, 0, sizeof(int)    *(ovec_max_81)    );
    int end_83[ovec_max_81];
    memset(&end_83, 0, sizeof(int)    *(ovec_max_81)    );
    int ovec_value_84[ovec_max_81*3];
    memset(&ovec_value_84, 0, sizeof(int)    *(ovec_max_81*3)    );
    result_85=default_value;
    offset_86=0;
    while((_Bool)1) {
        options_87=2097152;
        len_88=strlen(self2_80);
        regex_result_89=pcre_exec(re_79,(struct pcre_extra*)0,self2_80,len_88,offset_86,options_87,ovec_value_84,ovec_max_81*3);
        for(        i_90=0;        i_90<ovec_max_81;        i_90++        ){
            start_82[i_90]=ovec_value_84[i_90*2];
        }
        for(        i_91=0;        i_91<ovec_max_81;        i_91++        ){
            end_83[i_91]=ovec_value_84[i_91*2+1];
        }
        if(regex_result_89==1||regex_result_89>0) {
            result_85=strlen(self)-1-start_82[0];
            break;
        }
        {
            break;
        }
    }
    return result_85;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_92;
char* p_93;
int n_94;
    len_92=strlen(search_str);
    p_93=str+strlen(str)-len_92;
    n_94=0;
    while(p_93>=str) {
        if(strncmp(p_93,search_str,len_92)==0) {
            n_94++;
            if(n_94==count) {
                return p_93-str;
            }
        }
        p_93--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* result_95;
int offset_96;
int ovec_max_97;
const char* err_101;
int erro_ofs_102;
int options_103;
char* str_104;
struct real_pcre8_or_16* re_105;
int options_106;
int len_107;
int regex_result_108;
int i_109;
int i_110;
char* str_111;
struct list$1charph* group_strings_112;
char* str2_113;
char* str_117;
struct list$1charph* group_strings_118;
int i_119;
char* match_string_120;
char* str2_121;
struct list$1charph* __result89__;
err_101 = (void*)0;
memset(&erro_ofs_102, 0, sizeof(int));
    result_95=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 379, "list$1charph"));
    offset_96=0;
    ovec_max_97=16;
    int start_98[ovec_max_97];
    memset(&start_98, 0, sizeof(int)    *(ovec_max_97)    );
    int end_99[ovec_max_97];
    memset(&end_99, 0, sizeof(int)    *(ovec_max_97)    );
    int ovec_value_100[ovec_max_97*3];
    memset(&ovec_value_100, 0, sizeof(int)    *(ovec_max_97*3)    );
    options_103=reg->options;
    str_104=reg->str;
    re_105=reg->re;
    while((_Bool)1) {
        options_106=2097152;
        len_107=strlen(self);
        regex_result_108=pcre_exec(re_105,(struct pcre_extra*)0,self,len_107,offset_96,options_106,ovec_value_100,ovec_max_97*3);
        for(        i_109=0;        i_109<ovec_max_97;        i_109++        ){
            start_98[i_109]=ovec_value_100[i_109*2];
        }
        for(        i_110=0;        i_110<ovec_max_97;        i_110++        ){
            end_99[i_110]=ovec_value_100[i_110*2+1];
        }
        if(regex_result_108==1) {
            str_111=charp_substring(self,start_98[0],end_99[0]);
            group_strings_112=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 413, "list$1charph"));
            str2_113=block(parent,str_111,group_strings_112);
            list$1charph_push_back(result_95,str2_113);
            if(offset_96==end_99[0]) {
                offset_96++;
            }
            else {
                offset_96=end_99[0];
            }
        }
        else {
            if(regex_result_108>1) {
                str_117=charp_substring(self,start_98[0],end_99[0]);
                group_strings_118=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 430, "list$1charph"));
                for(                i_119=1;                i_119<regex_result_108;                i_119++                ){
                    match_string_120=charp_substring(self,start_98[i_119],end_99[i_119]);
                    list$1charph_push_back(group_strings_118,match_string_120);
                }
                str2_121=block(parent,str_117,group_strings_118);
                list$1charph_push_back(result_95,str2_121);
                if(offset_96==end_99[0]) {
                    offset_96++;
                }
                else {
                    offset_96=end_99[0];
                }
            }
            else {
                break;
            }
        }
    }
    __result89__ = __result_obj__ = result_95;
    return __result89__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result87__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result87__ = __result_obj__ = self;
    return __result87__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charph* litem_114;
struct list_item$1charph* litem_115;
struct list_item$1charph* litem_116;
struct list$1charph* __result88__;
    if(self->len==0) {
        litem_114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph");
        litem_114->prev=((void*)0);
        litem_114->next=((void*)0);
        litem_114->item=item;
        self->tail=litem_114;
        self->head=litem_114;
    }
    else {
        if(self->len==1) {
            litem_115=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph");
            litem_115->prev=self->head;
            litem_115->next=((void*)0);
            litem_115->item=item;
            self->tail=litem_115;
            self->head->next=litem_115;
        }
        else {
            litem_116=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph");
            litem_116->prev=self->tail;
            litem_116->next=((void*)0);
            litem_116->item=item;
            self->tail->next=litem_116;
            self->tail=litem_116;
        }
    }
    self->len++;
    __result88__ = __result_obj__ = self;
    return __result88__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* result_122;
int offset_123;
int ovec_max_124;
const char* err_128;
int erro_ofs_129;
int options_130;
char* str_131;
struct real_pcre8_or_16* re_132;
int n_133;
int options_134;
int len_135;
int regex_result_136;
int i_137;
int i_138;
char* str_139;
struct list$1charph* group_strings_140;
char* str2_141;
char* str_142;
struct list$1charph* group_strings_143;
int i_144;
char* match_string_145;
char* str2_146;
struct list$1charph* __result90__;
err_128 = (void*)0;
memset(&erro_ofs_129, 0, sizeof(int));
    result_122=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 460, "list$1charph"));
    offset_123=0;
    ovec_max_124=16;
    int start_125[ovec_max_124];
    memset(&start_125, 0, sizeof(int)    *(ovec_max_124)    );
    int end_126[ovec_max_124];
    memset(&end_126, 0, sizeof(int)    *(ovec_max_124)    );
    int ovec_value_127[ovec_max_124*3];
    memset(&ovec_value_127, 0, sizeof(int)    *(ovec_max_124*3)    );
    options_130=reg->options;
    str_131=reg->str;
    re_132=reg->re;
    n_133=0;
    while((_Bool)1) {
        options_134=2097152;
        len_135=strlen(self);
        regex_result_136=pcre_exec(re_132,(struct pcre_extra*)0,self,len_135,offset_123,options_134,ovec_value_127,ovec_max_124*3);
        for(        i_137=0;        i_137<ovec_max_124;        i_137++        ){
            start_125[i_137]=ovec_value_127[i_137*2];
        }
        for(        i_138=0;        i_138<ovec_max_124;        i_138++        ){
            end_126[i_138]=ovec_value_127[i_138*2+1];
        }
        if(regex_result_136==1) {
            str_139=charp_substring(self,start_125[0],end_126[0]);
            group_strings_140=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 496, "list$1charph"));
            str2_141=block(parent,str_139,group_strings_140);
            list$1charph_push_back(result_122,str2_141);
            if(offset_123==end_126[0]) {
                offset_123++;
            }
            else {
                offset_123=end_126[0];
            }
            n_133++;
            if(n_133==count) {
                break;
            }
        }
        else {
            if(regex_result_136>1) {
                str_142=charp_substring(self,start_125[0],end_126[0]);
                group_strings_143=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 518, "list$1charph"));
                for(                i_144=1;                i_144<regex_result_136;                i_144++                ){
                    match_string_145=charp_substring(self,start_125[i_144],end_126[i_144]);
                    list$1charph_push_back(group_strings_143,match_string_145);
                }
                str2_146=block(parent,str_142,group_strings_143);
                list$1charph_push_back(result_122,str2_146);
                if(offset_123==end_126[0]) {
                    offset_123++;
                }
                else {
                    offset_123=end_126[0];
                }
                n_133++;
                if(n_133==count) {
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    __result90__ = __result_obj__ = result_122;
    return __result90__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_147;
int erro_ofs_148;
int options_149;
char* str_150;
struct real_pcre8_or_16* re_151;
struct list$1charph* result_152;
int offset_153;
int ovec_max_154;
int options_158;
int len_159;
int regex_result_160;
int i_161;
int i_162;
char* str_163;
struct list$1charph* match_strings_164;
char* str2_165;
char* str_166;
struct list$1charph* match_strings_167;
int i_168;
char* match_str_169;
char* str2_170;
char* str_171;
struct list$1charph* match_strings_172;
char* str2_173;
struct list$1charph* __result91__;
err_147 = (void*)0;
memset(&erro_ofs_148, 0, sizeof(int));
    options_149=reg->options;
    str_150=reg->str;
    re_151=reg->re;
    result_152=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 560, "list$1charph"));
    offset_153=0;
    ovec_max_154=16;
    int start_155[ovec_max_154];
    memset(&start_155, 0, sizeof(int)    *(ovec_max_154)    );
    int end_156[ovec_max_154];
    memset(&end_156, 0, sizeof(int)    *(ovec_max_154)    );
    int ovec_value_157[ovec_max_154*3];
    memset(&ovec_value_157, 0, sizeof(int)    *(ovec_max_154*3)    );
    while((_Bool)1) {
        options_158=2097152;
        len_159=strlen(self);
        regex_result_160=pcre_exec(re_151,(struct pcre_extra*)0,self,len_159,offset_153,options_158,ovec_value_157,ovec_max_154*3);
        for(        i_161=0;        i_161<ovec_max_154;        i_161++        ){
            start_155[i_161]=ovec_value_157[i_161*2];
        }
        for(        i_162=0;        i_162<ovec_max_154;        i_162++        ){
            end_156[i_162]=ovec_value_157[i_162*2+1];
        }
        if(regex_result_160==1) {
            str_163=charp_substring(self,offset_153,start_155[0]);
            match_strings_164=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 587, "list$1charph"));
            str2_165=block(parent,str_163,match_strings_164);
            list$1charph_push_back(result_152,str2_165);
            if(offset_153==end_156[0]) {
                offset_153++;
            }
            else {
                offset_153=end_156[0];
            }
        }
        else {
            if(regex_result_160>1) {
                str_166=charp_substring(self,offset_153,start_155[0]);
                if(offset_153==end_156[0]) {
                    offset_153++;
                }
                else {
                    offset_153=end_156[0];
                }
                match_strings_167=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 610, "list$1charph"));
                for(                i_168=1;                i_168<regex_result_160;                i_168++                ){
                    match_str_169=charp_substring(self,start_155[i_168],end_156[i_168]);
                    list$1charph_push_back(match_strings_167,match_str_169);
                }
                str2_170=block(parent,str_166,match_strings_167);
                list$1charph_push_back(result_152,str2_170);
            }
            else {
                break;
            }
        }
    }
    if(offset_153<charp_length(self)) {
        str_171=charp_substring(self,offset_153,-1);
        match_strings_172=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 628, "list$1charph"));
        str2_173=block(parent,str_171,match_strings_172);
        list$1charph_push_back(result_152,str2_173);
    }
    __result91__ = __result_obj__ = result_152;
    return __result91__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_174;
int erro_ofs_175;
int options_176;
char* str_177;
struct real_pcre8_or_16* re_178;
struct list$1charph* result_179;
int offset_180;
int ovec_max_181;
int n_185;
int options_186;
int len_187;
int regex_result_188;
int i_189;
int i_190;
char* str_191;
struct list$1charph* match_strings_192;
char* str2_193;
char* str_194;
struct list$1charph* match_strings_195;
int i_196;
char* match_str_197;
char* str2_198;
struct list$1charph* __result92__;
err_174 = (void*)0;
memset(&erro_ofs_175, 0, sizeof(int));
    options_176=reg->options;
    str_177=reg->str;
    re_178=reg->re;
    result_179=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 647, "list$1charph"));
    offset_180=0;
    ovec_max_181=16;
    int start_182[ovec_max_181];
    memset(&start_182, 0, sizeof(int)    *(ovec_max_181)    );
    int end_183[ovec_max_181];
    memset(&end_183, 0, sizeof(int)    *(ovec_max_181)    );
    int ovec_value_184[ovec_max_181*3];
    memset(&ovec_value_184, 0, sizeof(int)    *(ovec_max_181*3)    );
    n_185=0;
    while((_Bool)1) {
        options_186=2097152;
        len_187=strlen(self);
        regex_result_188=pcre_exec(re_178,(struct pcre_extra*)0,self,len_187,offset_180,options_186,ovec_value_184,ovec_max_181*3);
        for(        i_189=0;        i_189<ovec_max_181;        i_189++        ){
            start_182[i_189]=ovec_value_184[i_189*2];
        }
        for(        i_190=0;        i_190<ovec_max_181;        i_190++        ){
            end_183[i_190]=ovec_value_184[i_190*2+1];
        }
        if(regex_result_188==1) {
            str_191=charp_substring(self,offset_180,start_182[0]);
            match_strings_192=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 676, "list$1charph"));
            str2_193=block(parent,str_191,match_strings_192);
            list$1charph_push_back(result_179,str2_193);
            if(offset_180==end_183[0]) {
                offset_180++;
            }
            else {
                offset_180=end_183[0];
            }
        }
        else {
            if(regex_result_188>1) {
                str_194=charp_substring(self,offset_180,start_182[0]);
                if(offset_180==end_183[0]) {
                    offset_180++;
                }
                else {
                    offset_180=end_183[0];
                }
                match_strings_195=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 699, "list$1charph"));
                for(                i_196=1;                i_196<regex_result_188;                i_196++                ){
                    match_str_197=charp_substring(self,start_182[i_196],end_183[i_196]);
                    list$1charph_push_back(match_strings_195,match_str_197);
                }
                str2_198=block(parent,str_194,match_strings_195);
                list$1charph_push_back(result_179,str2_198);
            }
            else {
                break;
            }
        }
        n_185++;
        if(n_185==count) {
            break;
        }
    }
    __result92__ = __result_obj__ = result_179;
    return __result92__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
    if(strcmp(left->str,right->str)!=0) {
        return (_Bool)0;
    }
    if(left->ignore_case!=right->ignore_case) {
        return (_Bool)0;
    }
    if(left->multiline!=right->multiline) {
        return (_Bool)0;
    }
    if(left->global!=right->global) {
        return (_Bool)0;
    }
    if(left->extended!=right->extended) {
        return (_Bool)0;
    }
    if(left->dotall!=right->dotall) {
        return (_Bool)0;
    }
    if(left->anchored!=right->anchored) {
        return (_Bool)0;
    }
    if(left->dollar_endonly!=right->dollar_endonly) {
        return (_Bool)0;
    }
    if(left->ungreedy!=right->ungreedy) {
        return (_Bool)0;
    }
    if(left->options!=right->options) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
struct list$1charph* result_199;
int offset_200;
int ovec_max_201;
const char* err_205;
int erro_ofs_206;
int options_207;
char* str_208;
struct real_pcre8_or_16* re_209;
int options_210;
int len_211;
int regex_result_212;
int i_213;
int i_214;
char* str_215;
char* str_216;
int i_217;
char* match_string_218;
struct list$1charph* __result93__;
err_205 = (void*)0;
memset(&erro_ofs_206, 0, sizeof(int));
    result_199=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 763, "list$1charph"));
    offset_200=0;
    ovec_max_201=16;
    int start_202[ovec_max_201];
    memset(&start_202, 0, sizeof(int)    *(ovec_max_201)    );
    int end_203[ovec_max_201];
    memset(&end_203, 0, sizeof(int)    *(ovec_max_201)    );
    int ovec_value_204[ovec_max_201*3];
    memset(&ovec_value_204, 0, sizeof(int)    *(ovec_max_201*3)    );
    options_207=reg->options;
    str_208=reg->str;
    re_209=reg->re;
    while((_Bool)1) {
        options_210=2097152;
        len_211=strlen(self);
        regex_result_212=pcre_exec(re_209,(struct pcre_extra*)0,self,len_211,offset_200,options_210,ovec_value_204,ovec_max_201*3);
        for(        i_213=0;        i_213<ovec_max_201;        i_213++        ){
            start_202[i_213]=ovec_value_204[i_213*2];
        }
        for(        i_214=0;        i_214<ovec_max_201;        i_214++        ){
            end_203[i_214]=ovec_value_204[i_214*2+1];
        }
        if(regex_result_212==1) {
            str_215=charp_substring(self,start_202[0],end_203[0]);
            list$1charph_push_back(result_199,str_215);
            if(offset_200==end_203[0]) {
                offset_200++;
            }
            else {
                offset_200=end_203[0];
            }
        }
        else {
            if(regex_result_212>1) {
                str_216=charp_substring(self,start_202[0],end_203[0]);
                list$1charph_push_back(result_199,str_216);
                if(offset_200==end_203[0]) {
                    offset_200++;
                }
                else {
                    offset_200=end_203[0];
                }
                *num_group_string_in_regex=regex_result_212-1;
                for(                i_217=1;                i_217<regex_result_212;                i_217++                ){
                    match_string_218=charp_substring(self,start_202[i_217],end_203[i_217]);
                    list$1charph_push_back(group_strings,match_string_218);
                }
            }
            else {
                break;
            }
        }
    }
    __result93__ = __result_obj__ = result_199;
    return __result93__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
char* result_219;
int len_220;
char* __result94__;
    result_219=__builtin_string(self);
    len_220=strlen(self);
    if(self[len_220-1]==10) {
        result_219[len_220-1]=0;
    }
    else {
        if(self[len_220-1]==13) {
            result_219[len_220-1]=0;
        }
        else {
            if(len_220>2&&self[len_220-2]==13&&self[len_220-1]==10) {
                result_219[len_220-2]=0;
            }
        }
    }
    __result94__ = __result_obj__ = result_219;
    return __result94__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_221;
char* result_222;
int n_223;
int i_224;
char c_225;
char* __result95__;
    len_221=charp_length(str);
    result_222=(char*)come_calloc(1, sizeof(char)*(1*(len_221*2+1)), "libneo-c-str-gc.c", 857, "char");
    n_223=0;
    for(    i_224=0;    i_224<len_221;    i_224++    ){
        c_225=str[i_224];
        if((c_225>=0&&c_225<32)||c_225==127) {
            result_222[n_223++]=94;
            result_222[n_223++]=c_225+65-1;
        }
        else {
            result_222[n_223++]=c_225;
        }
    }
    result_222[n_223]=0;
    __result95__ = __result_obj__ = result_222;
    return __result95__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
int len_226;
char* result_227;
char* __result96__;
    len_226=4*(wcslen(wstr)+1);
    result_227=(char*)come_calloc(1, sizeof(char)*(1*(len_226)), "libneo-c-str-gc.c", 883, "char");
    if(wcstombs(result_227,wstr,len_226)<0) {
        strncpy(result_227,"",len_226);
    }
    __result96__ = __result_obj__ = result_227;
    return __result96__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result97__;
    __result97__ = __result_obj__ = __builtin_wstring(str);
    return __result97__;
}

int wchar_tp_length(unsigned int* str){
    return wcslen(str);
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_228;
unsigned int* __result98__;
unsigned int* __result99__;
unsigned int* sub_str_229;
unsigned int* __result100__;
    len_228=wcslen(str);
    if(len_228==0) {
        __result98__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        return __result98__;
    }
    if(head<0) {
        head+=len_228;
    }
    if(tail<0) {
        tail+=len_228+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result99__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        return __result99__;
    }
    if(tail>=len_228) {
        tail=len_228;
    }
    sub_str_229=wchar_tp_substring(str,tail,-1);
    memcpy(str+head,sub_str_229,sizeof(unsigned int)*(wstring_length(sub_str_229)+1));
    __result100__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    return __result100__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
unsigned int* head_230;
    head_230=wcsstr(str,search_str);
    if(head_230==((void*)0)) {
        return default_value;
    }
    return head_230-str;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
int len_231;
unsigned int* p_232;
int len2_233;
_Bool result_234;
int i_235;
memset(&i_235, 0, sizeof(int));
    len_231=wcslen(search_str);
    p_232=str+wcslen(str)-len_231;
    while(p_232>=str) {
        len2_233=wcslen(p_232);
        result_234=(_Bool)1;
        for(        i_235=0;        i_235<len_231&&i_235<len2_233;        i_235++        ){
            if(p_232[i_235]!=search_str[i_235]) {
                result_234=(_Bool)0;
            }
        }
        if(result_234) {
            return (p_232-str);
        }
        p_232--;
    }
    return default_value;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
int len_236;
unsigned int* result_237;
int i_238;
unsigned int* __result101__;
    len_236=wcslen(str);
    result_237=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_236+1)), "libneo-c-str-gc.c", 983, "int");
    for(    i_238=0;    i_238<len_236;    i_238++    ){
        result_237[i_238]=str[len_236-i_238-1];
    }
    result_237[len_236]=0;
    __result101__ = __result_obj__ = result_237;
    return __result101__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
int len_239;
unsigned int* result_240;
int i_241;
unsigned int* __result102__;
    len_239=wcslen(str)*n+1;
    result_240=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_239)), "libneo-c-str-gc.c", 998, "int");
    result_240[0]=0;
    for(    i_241=0;    i_241<n;    i_241++    ){
        wcscat(result_240,str);
    }
    __result102__ = __result_obj__ = result_240;
    return __result102__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__=(void*)0;
int len_242;
unsigned int* result_243;
int n_244;
int i_245;
unsigned int c_246;
unsigned int* __result103__;
    len_242=wchar_tp_length(str);
    result_243=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_242*2+1)), "libneo-c-str-gc.c", 1012, "int");
    n_244=0;
    for(    i_245=0;    i_245<len_242;    i_245++    ){
        c_246=str[i_245];
        if((c_246>=0&&c_246<32)||c_246==127) {
            result_243[n_244++]=94;
            result_243[n_244++]=c_246+65-1;
        }
        else {
            result_243[n_244++]=c_246;
        }
    }
    result_243[n_244]=0;
    __result103__ = __result_obj__ = result_243;
    return __result103__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_247;
int ovec_max_248;
const char* err_252;
int erro_ofs_253;
int options_254;
char* str_255;
struct real_pcre8_or_16* re_256;
int n_257;
int options_258;
int len_259;
int regex_result_260;
int i_261;
int i_262;
int i_265;
char* match_string_266;
err_252 = (void*)0;
memset(&erro_ofs_253, 0, sizeof(int));
    offset_247=0;
    ovec_max_248=16;
    int start_249[ovec_max_248];
    memset(&start_249, 0, sizeof(int)    *(ovec_max_248)    );
    int end_250[ovec_max_248];
    memset(&end_250, 0, sizeof(int)    *(ovec_max_248)    );
    int ovec_value_251[ovec_max_248*3];
    memset(&ovec_value_251, 0, sizeof(int)    *(ovec_max_248*3)    );
    options_254=reg->options;
    str_255=reg->str;
    re_256=reg->re;
    n_257=0;
    while((_Bool)1) {
        options_258=2097152;
        len_259=strlen(self);
        regex_result_260=pcre_exec(re_256,(struct pcre_extra*)0,self,len_259,offset_247,options_258,ovec_value_251,ovec_max_248*3);
        for(        i_261=0;        i_261<ovec_max_248;        i_261++        ){
            start_249[i_261]=ovec_value_251[i_261*2];
        }
        for(        i_262=0;        i_262<ovec_max_248;        i_262++        ){
            end_250[i_262]=ovec_value_251[i_262*2+1];
        }
        if(regex_result_260==1||(group_strings==((void*)0)&&regex_result_260>0)) {
            n_257++;
            if(n_257==count) {
                return (_Bool)1;
            }
            if(offset_247==end_250[0]) {
                offset_247++;
            }
            else {
                offset_247=end_250[0];
            }
        }
        else {
            if(regex_result_260>1) {
                n_257++;
                list$1charph_reset(group_strings);
                for(                i_265=1;                i_265<regex_result_260;                i_265++                ){
                    match_string_266=charp_substring(self,start_249[i_265],end_250[i_265]);
                    list$1charph_push_back(group_strings,match_string_266);
                }
                if(n_257==count) {
                    return (_Bool)1;
                }
                if(offset_247==end_250[0]) {
                    offset_247++;
                }
                else {
                    offset_247=end_250[0];
                }
            }
            else {
                return (_Bool)0;
            }
        }
    }
    return (_Bool)0;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_263;
struct list_item$1charph* prev_it_264;
struct list$1charph* __result104__;
    it_263=self->head;
    while(it_263!=((void*)0)) {
        prev_it_264=it_263;
        it_263=it_263->next;
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result104__ = __result_obj__ = self;
    return __result104__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
    return wcscmp(left,right);
}

int wstring_compare(unsigned int* left, unsigned int* right){
    return wcscmp(left,right);
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
    return string_get_hash_key(reg->str);
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
    return left==right;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
unsigned int* __result105__;
    __result105__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result105__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
unsigned int* __result106__;
    __result106__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result106__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)!=0;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)!=0;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
    return come_regex_equals(left,right);
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
    return !come_regex_equals(left,right);
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
unsigned int* result_267;
unsigned int* __result107__;
    result_267=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libneo-c-str-gc.c", 1176, "int");
    wcscpy(result_267,left);
    wcscat(result_267,right);
    __result107__ = __result_obj__ = result_267;
    return __result107__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
unsigned int* result_268;
unsigned int* __result108__;
    result_268=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libneo-c-str-gc.c", 1186, "int");
    wcscpy(result_268,left);
    wcscat(result_268,right);
    __result108__ = __result_obj__ = result_268;
    return __result108__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_269;
    head_269=strstr(str,search_str);
    if(head_269==((void*)0)) {
        return default_value;
    }
    return head_269-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_270;
int result_274;
int offset_275;
const char* err_276;
int erro_ofs_277;
int options_278;
char* str_279;
struct real_pcre8_or_16* re_280;
int options_281;
int len_282;
int regex_result_283;
int i_284;
int i_285;
err_276 = (void*)0;
memset(&erro_ofs_277, 0, sizeof(int));
    ovec_max_270=16;
    int start_271[ovec_max_270];
    memset(&start_271, 0, sizeof(int)    *(ovec_max_270)    );
    int end_272[ovec_max_270];
    memset(&end_272, 0, sizeof(int)    *(ovec_max_270)    );
    int ovec_value_273[ovec_max_270*3];
    memset(&ovec_value_273, 0, sizeof(int)    *(ovec_max_270*3)    );
    result_274=default_value;
    offset_275=0;
    options_278=reg->options;
    str_279=reg->str;
    re_280=reg->re;
    while((_Bool)1) {
        options_281=2097152;
        len_282=strlen(self);
        regex_result_283=pcre_exec(re_280,(struct pcre_extra*)0,self,len_282,offset_275,options_281,ovec_value_273,ovec_max_270*3);
        for(        i_284=0;        i_284<ovec_max_270;        i_284++        ){
            start_271[i_284]=ovec_value_273[i_284*2];
        }
        for(        i_285=0;        i_285<ovec_max_270;        i_285++        ){
            end_272[i_285]=ovec_value_273[i_285*2+1];
        }
        if(regex_result_283==1||regex_result_283>0) {
            result_274=start_271[0];
            break;
        }
        {
            break;
        }
    }
    return result_274;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_286;
char* __result109__;
char* __result110__;
    len_286=strlen(self);
    if(strcmp(self,"")==0) {
        __result109__ = __result_obj__ = __builtin_string(self);
        return __result109__;
    }
    if(index<0) {
        index+=len_286;
    }
    if(index>=len_286) {
        index=len_286-1;
    }
    if(index<0) {
        index=0;
    }
    self[index]=c;
    __result110__ = __result_obj__ = __builtin_string(self);
    return __result110__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_287;
char* result_288;
int i_289;
char* __result111__;
    len_287=strlen(str)*n+1;
    result_288=(char*)come_calloc(1, sizeof(char)*(1*(len_287)), "libneo-c-str-gc.c", 1284, "char");
    result_288[0]=0;
    for(    i_289=0;    i_289<n;    i_289++    ){
        strcat(result_288,str);
    }
    __result111__ = __result_obj__ = result_288;
    return __result111__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
int offset_290;
int ovec_max_291;
const char* err_295;
int erro_ofs_296;
int options_297;
char* str_298;
struct real_pcre8_or_16* re_299;
struct buffer* result_300;
int options_301;
int len_302;
int regex_result_303;
int i_304;
int i_305;
char* str_306;
char* str_307;
char* str_308;
char* __result112__;
err_295 = (void*)0;
memset(&erro_ofs_296, 0, sizeof(int));
    offset_290=0;
    ovec_max_291=16;
    int start_292[ovec_max_291];
    memset(&start_292, 0, sizeof(int)    *(ovec_max_291)    );
    int end_293[ovec_max_291];
    memset(&end_293, 0, sizeof(int)    *(ovec_max_291)    );
    int ovec_value_294[ovec_max_291*3];
    memset(&ovec_value_294, 0, sizeof(int)    *(ovec_max_291*3)    );
    options_297=reg->options;
    str_298=reg->str;
    re_299=reg->re;
    result_300=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1312, "buffer"));
    while((_Bool)1) {
        options_301=2097152;
        len_302=strlen(self);
        regex_result_303=pcre_exec(re_299,(struct pcre_extra*)0,self,len_302,offset_290,options_301,ovec_value_294,ovec_max_291*3);
        for(        i_304=0;        i_304<ovec_max_291;        i_304++        ){
            start_292[i_304]=ovec_value_294[i_304*2];
        }
        for(        i_305=0;        i_305<ovec_max_291;        i_305++        ){
            end_293[i_305]=ovec_value_294[i_305*2+1];
        }
        if(regex_result_303==1) {
            str_306=charp_substring(self,offset_290,start_292[0]);
            buffer_append_str(result_300,str_306);
            buffer_append_str(result_300,replace);
            if(offset_290==end_293[0]) {
                offset_290++;
            }
            else {
                offset_290=end_293[0];
            }
            if(!reg->global) {
                str_307=charp_substring(self,offset_290,-1);
                buffer_append_str(result_300,str_307);
                break;
            }
        }
        else {
            str_308=charp_substring(self,offset_290,-1);
            buffer_append_str(result_300,str_308);
            break;
        }
    }
    __result112__ = __result_obj__ = buffer_to_string(result_300);
    return __result112__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
int offset_309;
int ovec_max_310;
const char* err_314;
int erro_ofs_315;
int options_316;
char* str_317;
struct real_pcre8_or_16* re_318;
struct buffer* result_319;
int n_320;
int options_321;
int len_322;
int regex_result_323;
int i_324;
int i_325;
char* str_326;
char* str_327;
char* str_328;
char* str_329;
char* __result113__;
err_314 = (void*)0;
memset(&erro_ofs_315, 0, sizeof(int));
    offset_309=0;
    ovec_max_310=16;
    int start_311[ovec_max_310];
    memset(&start_311, 0, sizeof(int)    *(ovec_max_310)    );
    int end_312[ovec_max_310];
    memset(&end_312, 0, sizeof(int)    *(ovec_max_310)    );
    int ovec_value_313[ovec_max_310*3];
    memset(&ovec_value_313, 0, sizeof(int)    *(ovec_max_310*3)    );
    options_316=reg->options;
    str_317=reg->str;
    re_318=reg->re;
    result_319=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1375, "buffer"));
    n_320=0;
    while((_Bool)1) {
        options_321=2097152;
        len_322=strlen(self);
        regex_result_323=pcre_exec(re_318,(struct pcre_extra*)0,self,len_322,offset_309,options_321,ovec_value_313,ovec_max_310*3);
        for(        i_324=0;        i_324<ovec_max_310;        i_324++        ){
            start_311[i_324]=ovec_value_313[i_324*2];
        }
        for(        i_325=0;        i_325<ovec_max_310;        i_325++        ){
            end_312[i_325]=ovec_value_313[i_325*2+1];
        }
        if(regex_result_323==1) {
            n_320++;
            str_326=charp_substring(self,offset_309,start_311[0]);
            buffer_append_str(result_319,str_326);
            buffer_append_str(result_319,replace);
            if(offset_309==end_312[0]) {
                offset_309++;
            }
            else {
                offset_309=end_312[0];
            }
            if(!reg->global) {
                str_327=charp_substring(self,offset_309,-1);
                buffer_append_str(result_319,str_327);
                break;
            }
            if(n_320==count) {
                str_328=charp_substring(self,offset_309,-1);
                buffer_append_str(result_319,str_328);
                break;
            }
        }
        else {
            str_329=charp_substring(self,offset_309,-1);
            buffer_append_str(result_319,str_329);
            break;
        }
    }
    __result113__ = __result_obj__ = buffer_to_string(result_319);
    return __result113__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* result_330;
struct buffer* buf_331;
int i_332;
struct list$1charph* __result114__;
    result_330=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1434, "list$1charph"));
    buf_331=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1436, "buffer"));
    for(    i_332=0;    i_332<charp_length(self);    i_332++    ){
        if(strstr(self+i_332,str)==self+i_332) {
            list$1charph_push_back(result_330,__builtin_string(buf_331->buf));
            buffer_reset(buf_331);
            i_332+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_331,self[i_332]);
        }
    }
    if(buffer_length(buf_331)!=0) {
        list$1charph_push_back(result_330,__builtin_string(buf_331->buf));
    }
    __result114__ = __result_obj__ = result_330;
    return __result114__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* result_333;
int offset_334;
int ovec_max_335;
const char* err_339;
int erro_ofs_340;
int options_341;
char* str_342;
struct real_pcre8_or_16* re_343;
int options_344;
int len_345;
int regex_result_346;
int i_347;
int i_348;
char* str_349;
char* str_350;
int i_351;
char* match_string_352;
struct list$1charph* __result115__;
err_339 = (void*)0;
memset(&erro_ofs_340, 0, sizeof(int));
    result_333=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1457, "list$1charph"));
    offset_334=0;
    ovec_max_335=16;
    int start_336[ovec_max_335];
    memset(&start_336, 0, sizeof(int)    *(ovec_max_335)    );
    int end_337[ovec_max_335];
    memset(&end_337, 0, sizeof(int)    *(ovec_max_335)    );
    int ovec_value_338[ovec_max_335*3];
    memset(&ovec_value_338, 0, sizeof(int)    *(ovec_max_335*3)    );
    options_341=reg->options;
    str_342=reg->str;
    re_343=reg->re;
    while((_Bool)1) {
        options_344=2097152;
        len_345=strlen(self);
        regex_result_346=pcre_exec(re_343,(struct pcre_extra*)0,self,len_345,offset_334,options_344,ovec_value_338,ovec_max_335*3);
        for(        i_347=0;        i_347<ovec_max_335;        i_347++        ){
            start_336[i_347]=ovec_value_338[i_347*2];
        }
        for(        i_348=0;        i_348<ovec_max_335;        i_348++        ){
            end_337[i_348]=ovec_value_338[i_348*2+1];
        }
        if(regex_result_346==1) {
            str_349=charp_substring(self,start_336[0],end_337[0]);
            list$1charph_push_back(result_333,str_349);
            if(offset_334==end_337[0]) {
                offset_334++;
            }
            else {
                offset_334=end_337[0];
            }
        }
        else {
            if(regex_result_346>1) {
                str_350=charp_substring(self,start_336[0],end_337[0]);
                list$1charph_push_back(result_333,str_350);
                if(offset_334==end_337[0]) {
                    offset_334++;
                }
                else {
                    offset_334=end_337[0];
                }
                for(                i_351=1;                i_351<regex_result_346;                i_351++                ){
                    match_string_352=charp_substring(self,start_336[i_351],end_337[i_351]);
                    list$1charph_push_back(result_333,match_string_352);
                }
            }
            else {
                break;
            }
        }
    }
    __result115__ = __result_obj__ = result_333;
    return __result115__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
const char* err_353;
int erro_ofs_354;
int options_355;
char* str_356;
struct real_pcre8_or_16* re_357;
struct list$1charph* result_358;
int offset_359;
int ovec_max_360;
int options_364;
int len_365;
int regex_result_366;
int i_367;
int i_368;
char* str_369;
char* str_370;
int i_371;
char* match_str_372;
char* str_373;
struct list$1charph* __result116__;
err_353 = (void*)0;
memset(&erro_ofs_354, 0, sizeof(int));
    options_355=reg->options;
    str_356=reg->str;
    re_357=reg->re;
    result_358=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1538, "list$1charph"));
    offset_359=0;
    ovec_max_360=16;
    int start_361[ovec_max_360];
    memset(&start_361, 0, sizeof(int)    *(ovec_max_360)    );
    int end_362[ovec_max_360];
    memset(&end_362, 0, sizeof(int)    *(ovec_max_360)    );
    int ovec_value_363[ovec_max_360*3];
    memset(&ovec_value_363, 0, sizeof(int)    *(ovec_max_360*3)    );
    while((_Bool)1) {
        options_364=2097152;
        len_365=strlen(self);
        regex_result_366=pcre_exec(re_357,(struct pcre_extra*)0,self,len_365,offset_359,options_364,ovec_value_363,ovec_max_360*3);
        for(        i_367=0;        i_367<ovec_max_360;        i_367++        ){
            start_361[i_367]=ovec_value_363[i_367*2];
        }
        for(        i_368=0;        i_368<ovec_max_360;        i_368++        ){
            end_362[i_368]=ovec_value_363[i_368*2+1];
        }
        if(regex_result_366==1) {
            str_369=charp_substring(self,offset_359,start_361[0]);
            list$1charph_push_back(result_358,str_369);
            if(offset_359==end_362[0]) {
                offset_359++;
            }
            else {
                offset_359=end_362[0];
            }
        }
        else {
            if(regex_result_366>1) {
                str_370=charp_substring(self,offset_359,start_361[0]);
                list$1charph_push_back(result_358,str_370);
                if(offset_359==end_362[0]) {
                    offset_359++;
                }
                else {
                    offset_359=end_362[0];
                }
                for(                i_371=1;                i_371<regex_result_366;                i_371++                ){
                    match_str_372=charp_substring(self,start_361[i_371],end_362[i_371]);
                    list$1charph_push_back(result_358,match_str_372);
                }
            }
            else {
                break;
            }
        }
    }
    if(offset_359<charp_length(self)) {
        str_373=charp_substring(self,offset_359,-1);
        list$1charph_push_back(result_358,str_373);
    }
    __result116__ = __result_obj__ = result_358;
    return __result116__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_374;
int ovec_max_375;
const char* err_379;
int erro_ofs_380;
int options_381;
char* str_382;
struct real_pcre8_or_16* re_383;
int options_384;
int len_385;
int regex_result_386;
int i_387;
int i_388;
err_379 = (void*)0;
memset(&erro_ofs_380, 0, sizeof(int));
    offset_374=0;
    ovec_max_375=16;
    int start_376[ovec_max_375];
    memset(&start_376, 0, sizeof(int)    *(ovec_max_375)    );
    int end_377[ovec_max_375];
    memset(&end_377, 0, sizeof(int)    *(ovec_max_375)    );
    int ovec_value_378[ovec_max_375*3];
    memset(&ovec_value_378, 0, sizeof(int)    *(ovec_max_375*3)    );
    options_381=reg->options;
    str_382=reg->str;
    re_383=reg->re;
    while((_Bool)1) {
        options_384=2097152;
        len_385=strlen(self);
        regex_result_386=pcre_exec(re_383,(struct pcre_extra*)0,self,len_385,offset_374,options_384,ovec_value_378,ovec_max_375*3);
        for(        i_387=0;        i_387<ovec_max_375;        i_387++        ){
            start_376[i_387]=ovec_value_378[i_387*2];
        }
        for(        i_388=0;        i_388<ovec_max_375;        i_388++        ){
            end_377[i_388]=ovec_value_378[i_388*2+1];
        }
        if(regex_result_386>0) {
            return (_Bool)1;
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
const char* err_389;
int erro_ofs_390;
int options_391;
char* str_392;
struct real_pcre8_or_16* re_393;
struct list$1charph* result_394;
int offset_395;
int ovec_max_396;
int n_400;
int options_401;
int len_402;
int regex_result_403;
int i_404;
int i_405;
char* str_406;
char* str_407;
int i_408;
char* match_str_409;
char* str_410;
struct list$1charph* __result117__;
err_389 = (void*)0;
memset(&erro_ofs_390, 0, sizeof(int));
    options_391=reg->options;
    str_392=reg->str;
    re_393=reg->re;
    result_394=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1660, "list$1charph"));
    offset_395=0;
    ovec_max_396=16;
    int start_397[ovec_max_396];
    memset(&start_397, 0, sizeof(int)    *(ovec_max_396)    );
    int end_398[ovec_max_396];
    memset(&end_398, 0, sizeof(int)    *(ovec_max_396)    );
    int ovec_value_399[ovec_max_396*3];
    memset(&ovec_value_399, 0, sizeof(int)    *(ovec_max_396*3)    );
    n_400=0;
    while((_Bool)1) {
        options_401=2097152;
        len_402=strlen(self);
        regex_result_403=pcre_exec(re_393,(struct pcre_extra*)0,self,len_402,offset_395,options_401,ovec_value_399,ovec_max_396*3);
        for(        i_404=0;        i_404<ovec_max_396;        i_404++        ){
            start_397[i_404]=ovec_value_399[i_404*2];
        }
        for(        i_405=0;        i_405<ovec_max_396;        i_405++        ){
            end_398[i_405]=ovec_value_399[i_405*2+1];
        }
        if(regex_result_403==1) {
            str_406=charp_substring(self,offset_395,start_397[0]);
            list$1charph_push_back(result_394,str_406);
            if(offset_395==end_398[0]) {
                offset_395++;
            }
            else {
                offset_395=end_398[0];
            }
        }
        else {
            if(regex_result_403>1) {
                str_407=charp_substring(self,offset_395,start_397[0]);
                list$1charph_push_back(result_394,str_407);
                if(offset_395==end_398[0]) {
                    offset_395++;
                }
                else {
                    offset_395=end_398[0];
                }
                for(                i_408=1;                i_408<regex_result_403;                i_408++                ){
                    match_str_409=charp_substring(self,start_397[i_408],end_398[i_408]);
                    list$1charph_push_back(result_394,match_str_409);
                }
            }
            else {
                break;
            }
        }
        n_400++;
        if(maxsplit==n_400) {
            break;
        }
    }
    if(offset_395<charp_length(self)) {
        str_410=charp_substring(self,offset_395,-1);
        list$1charph_push_back(result_394,str_410);
    }
    __result117__ = __result_obj__ = result_394;
    return __result117__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_411;
int erro_ofs_412;
int options_413;
char* str_414;
struct real_pcre8_or_16* re_415;
char* self2_416;
int ovec_max_417;
int result_421;
int offset_422;
int n_423;
int options_424;
int len_425;
int regex_result_426;
int i_427;
int i_428;
err_411 = (void*)0;
memset(&erro_ofs_412, 0, sizeof(int));
    options_413=reg->options;
    str_414=reg->str;
    re_415=reg->re;
    self2_416=charp_reverse(self);
    ovec_max_417=16;
    int start_418[ovec_max_417];
    memset(&start_418, 0, sizeof(int)    *(ovec_max_417)    );
    int end_419[ovec_max_417];
    memset(&end_419, 0, sizeof(int)    *(ovec_max_417)    );
    int ovec_value_420[ovec_max_417*3];
    memset(&ovec_value_420, 0, sizeof(int)    *(ovec_max_417*3)    );
    result_421=default_value;
    offset_422=0;
    n_423=0;
    while((_Bool)1) {
        options_424=2097152;
        len_425=strlen(self2_416);
        regex_result_426=pcre_exec(re_415,(struct pcre_extra*)0,self2_416,len_425,offset_422,options_424,ovec_value_420,ovec_max_417*3);
        for(        i_427=0;        i_427<ovec_max_417;        i_427++        ){
            start_418[i_427]=ovec_value_420[i_427*2];
        }
        for(        i_428=0;        i_428<ovec_max_417;        i_428++        ){
            end_419[i_428]=ovec_value_420[i_428*2+1];
        }
        if(regex_result_426>0) {
            n_423++;
            if(offset_422==end_419[0]) {
                offset_422++;
            }
            else {
                offset_422=end_419[0];
            }
            if(n_423==count) {
                result_421=strlen(self)-end_419[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_421;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_429;
int ovec_max_430;
const char* err_434;
int erro_ofs_435;
int options_436;
char* str_437;
struct real_pcre8_or_16* re_438;
int n_439;
int options_440;
int len_441;
int regex_result_442;
int i_443;
int i_444;
err_434 = (void*)0;
memset(&erro_ofs_435, 0, sizeof(int));
    offset_429=0;
    ovec_max_430=16;
    int start_431[ovec_max_430];
    memset(&start_431, 0, sizeof(int)    *(ovec_max_430)    );
    int end_432[ovec_max_430];
    memset(&end_432, 0, sizeof(int)    *(ovec_max_430)    );
    int ovec_value_433[ovec_max_430*3];
    memset(&ovec_value_433, 0, sizeof(int)    *(ovec_max_430*3)    );
    options_436=reg->options;
    str_437=reg->str;
    re_438=reg->re;
    n_439=0;
    while((_Bool)1) {
        options_440=2097152;
        len_441=strlen(self);
        regex_result_442=pcre_exec(re_438,(struct pcre_extra*)0,self,len_441,offset_429,options_440,ovec_value_433,ovec_max_430*3);
        for(        i_443=0;        i_443<ovec_max_430;        i_443++        ){
            start_431[i_443]=ovec_value_433[i_443*2];
        }
        for(        i_444=0;        i_444<ovec_max_430;        i_444++        ){
            end_432[i_444]=ovec_value_433[i_444*2+1];
        }
        if(regex_result_442>0) {
            n_439++;
            if(count==n_439) {
                return (_Bool)1;
            }
            if(offset_429==end_432[0]) {
                offset_429++;
            }
            else {
                offset_429=end_432[0];
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_445;
int ovec_max_446;
const char* err_450;
int erro_ofs_451;
int options_452;
char* str_453;
struct real_pcre8_or_16* re_454;
struct buffer* result_455;
int options_456;
int len_457;
int regex_result_458;
int i_459;
int i_460;
char* str_461;
struct list$1charph* group_strings_462;
char* match_string_463;
char* block_result_464;
char* str_465;
char* str_466;
struct list$1charph* group_strings_467;
int i_468;
char* match_string_469;
char* match_string_470;
char* block_result_471;
char* str_472;
char* str_473;
char* __result118__;
err_450 = (void*)0;
memset(&erro_ofs_451, 0, sizeof(int));
    offset_445=0;
    ovec_max_446=16;
    int start_447[ovec_max_446];
    memset(&start_447, 0, sizeof(int)    *(ovec_max_446)    );
    int end_448[ovec_max_446];
    memset(&end_448, 0, sizeof(int)    *(ovec_max_446)    );
    int ovec_value_449[ovec_max_446*3];
    memset(&ovec_value_449, 0, sizeof(int)    *(ovec_max_446*3)    );
    options_452=reg->options;
    str_453=reg->str;
    re_454=reg->re;
    result_455=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1872, "buffer"));
    while((_Bool)1) {
        options_456=2097152;
        len_457=strlen(self);
        regex_result_458=pcre_exec(re_454,(struct pcre_extra*)0,self,len_457,offset_445,options_456,ovec_value_449,ovec_max_446*3);
        for(        i_459=0;        i_459<ovec_max_446;        i_459++        ){
            start_447[i_459]=ovec_value_449[i_459*2];
        }
        for(        i_460=0;        i_460<ovec_max_446;        i_460++        ){
            end_448[i_460]=ovec_value_449[i_460*2+1];
        }
        if(regex_result_458==1) {
            str_461=charp_substring(self,offset_445,start_447[0]);
            buffer_append_str(result_455,str_461);
            group_strings_462=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1892, "list$1charph"));
            match_string_463=charp_substring(self,start_447[0],end_448[0]);
            list$1charph_push_back(group_strings_462,charp_substring(self,start_447[0],end_448[0]));
            block_result_464=block(parent,match_string_463,group_strings_462);
            buffer_append_str(result_455,block_result_464);
            if(offset_445==end_448[0]) {
                offset_445++;
            }
            else {
                offset_445=end_448[0];
            }
            if(!reg->global) {
                str_465=charp_substring(self,offset_445,-1);
                buffer_append_str(result_455,str_465);
                break;
            }
        }
        else {
            if(regex_result_458>1) {
                str_466=charp_substring(self,offset_445,start_447[0]);
                buffer_append_str(result_455,str_466);
                if(offset_445==end_448[0]) {
                    offset_445++;
                }
                else {
                    offset_445=end_448[0];
                }
                group_strings_467=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1927, "list$1charph"));
                for(                i_468=1;                i_468<regex_result_458;                i_468++                ){
                    match_string_469=charp_substring(self,start_447[i_468],end_448[i_468]);
                    list$1charph_push_back(group_strings_467,match_string_469);
                }
                match_string_470=charp_substring(self,start_447[0],end_448[0]);
                block_result_471=block(parent,match_string_470,group_strings_467);
                buffer_append_str(result_455,block_result_471);
                if(!reg->global) {
                    str_472=charp_substring(self,offset_445,-1);
                    buffer_append_str(result_455,str_472);
                    break;
                }
            }
            else {
                str_473=charp_substring(self,offset_445,-1);
                buffer_append_str(result_455,str_473);
                break;
            }
        }
    }
    __result118__ = __result_obj__ = buffer_to_string(result_455);
    return __result118__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_474;
int ovec_max_475;
const char* err_479;
int erro_ofs_480;
int options_481;
char* str_482;
struct real_pcre8_or_16* re_483;
struct buffer* result_484;
int n_485;
int options_486;
int len_487;
int regex_result_488;
int i_489;
int i_490;
char* str_491;
struct list$1charph* group_strings_492;
char* match_string_493;
char* block_result_494;
char* str_495;
char* str_496;
char* str_497;
struct list$1charph* group_strings_498;
int i_499;
char* match_string_500;
char* match_string_501;
char* block_result_502;
char* str_503;
char* str_504;
char* str_505;
char* __result119__;
err_479 = (void*)0;
memset(&erro_ofs_480, 0, sizeof(int));
    offset_474=0;
    ovec_max_475=16;
    int start_476[ovec_max_475];
    memset(&start_476, 0, sizeof(int)    *(ovec_max_475)    );
    int end_477[ovec_max_475];
    memset(&end_477, 0, sizeof(int)    *(ovec_max_475)    );
    int ovec_value_478[ovec_max_475*3];
    memset(&ovec_value_478, 0, sizeof(int)    *(ovec_max_475*3)    );
    options_481=reg->options;
    str_482=reg->str;
    re_483=reg->re;
    result_484=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1973, "buffer"));
    n_485=0;
    while((_Bool)1) {
        options_486=2097152;
        len_487=strlen(self);
        regex_result_488=pcre_exec(re_483,(struct pcre_extra*)0,self,len_487,offset_474,options_486,ovec_value_478,ovec_max_475*3);
        for(        i_489=0;        i_489<ovec_max_475;        i_489++        ){
            start_476[i_489]=ovec_value_478[i_489*2];
        }
        for(        i_490=0;        i_490<ovec_max_475;        i_490++        ){
            end_477[i_490]=ovec_value_478[i_490*2+1];
        }
        if(regex_result_488==1) {
            n_485++;
            str_491=charp_substring(self,offset_474,start_476[0]);
            buffer_append_str(result_484,str_491);
            group_strings_492=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1996, "list$1charph"));
            list$1charph_push_back(group_strings_492,charp_substring(self,start_476[0],end_477[0]));
            match_string_493=charp_substring(self,start_476[0],end_477[0]);
            block_result_494=block(parent,match_string_493,group_strings_492);
            buffer_append_str(result_484,block_result_494);
            if(offset_474==end_477[0]) {
                offset_474++;
            }
            else {
                offset_474=end_477[0];
            }
            if(!reg->global) {
                str_495=charp_substring(self,offset_474,-1);
                buffer_append_str(result_484,str_495);
                break;
            }
            if(n_485==count) {
                str_496=charp_substring(self,offset_474,-1);
                buffer_append_str(result_484,str_496);
                break;
            }
        }
        else {
            if(regex_result_488>1) {
                n_485++;
                str_497=charp_substring(self,offset_474,start_476[0]);
                buffer_append_str(result_484,str_497);
                if(offset_474==end_477[0]) {
                    offset_474++;
                }
                else {
                    offset_474=end_477[0];
                }
                group_strings_498=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 2039, "list$1charph"));
                for(                i_499=1;                i_499<regex_result_488;                i_499++                ){
                    match_string_500=charp_substring(self,start_476[i_499],end_477[i_499]);
                    list$1charph_push_back(group_strings_498,match_string_500);
                }
                match_string_501=charp_substring(self,start_476[0],end_477[0]);
                block_result_502=block(parent,match_string_501,group_strings_498);
                buffer_append_str(result_484,block_result_502);
                if(!reg->global) {
                    str_503=charp_substring(self,offset_474,-1);
                    buffer_append_str(result_484,str_503);
                    break;
                }
                if(n_485==count) {
                    str_504=charp_substring(self,offset_474,-1);
                    buffer_append_str(result_484,str_504);
                    break;
                }
            }
            else {
                str_505=charp_substring(self,offset_474,-1);
                buffer_append_str(result_484,str_505);
                break;
            }
        }
    }
    __result119__ = __result_obj__ = buffer_to_string(result_484);
    return __result119__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
int result_506;
unsigned int* p_507;
    result_506=0;
    p_507=value;
    while(*p_507) {
        result_506+=(*p_507);
        p_507++;
    }
    return result_506;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
    return left!=right;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
    return value;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
    return left==right;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__=(void*)0;
char* __result120__;
    __result120__ = __result_obj__ = xsprintf("%ls",wc);
    return __result120__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
char* result_508;
char* __result121__;
char* __result122__;
    result_508=__builtin_string(str);
    if(result_508[string_length(result_508)-1]==10) {
        __result121__ = __result_obj__ = string_substring(result_508,0,-2);
        return __result121__;
    }
    __result122__ = __result_obj__ = result_508;
    return __result122__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
char* __result123__;
char* result_509;
char* result2_510;
char* __result124__;
    if(path==((void*)0)) {
        __result123__ = __result_obj__ = __builtin_string("");
        return __result123__;
    }
    result_509=realpath(path,((void*)0));
    result2_510=__builtin_string(result_509);
    free(result_509);
    __result124__ = __result_obj__ = result2_510;
    return __result124__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
char* __result125__;
char* __result126__;
    if(path==((void*)0)) {
        __result125__ = __result_obj__ = __builtin_string("");
        return __result125__;
    }
    __result126__ = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    return __result126__;
}

