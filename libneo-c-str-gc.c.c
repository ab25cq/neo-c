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

// uniq global variable
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

char* basename();

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

char* xrealpath(char* path);

char* xbasename(char* path);

char* xextname(char* path);

char* xdirname(char* path);

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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX571, int anonymous_var_nameX572, const char** anonymous_var_nameX573, int* anonymous_var_nameX574, const unsigned char* anonymous_var_nameX575);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX576, int anonymous_var_nameX577, const char** anonymous_var_nameX578, int* anonymous_var_nameX579, const unsigned char* anonymous_var_nameX580);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX581, int anonymous_var_nameX582, const char** anonymous_var_nameX583, int* anonymous_var_nameX584, const unsigned char* anonymous_var_nameX585);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX586, int anonymous_var_nameX587, int* anonymous_var_nameX588, const char** anonymous_var_nameX589, int* anonymous_var_nameX590, const unsigned char* anonymous_var_nameX591);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX592, int anonymous_var_nameX593, int* anonymous_var_nameX594, const char** anonymous_var_nameX595, int* anonymous_var_nameX596, const unsigned char* anonymous_var_nameX597);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX598, int anonymous_var_nameX599, int* anonymous_var_nameX600, const char** anonymous_var_nameX601, int* anonymous_var_nameX602, const unsigned char* anonymous_var_nameX603);

int pcre_config(int anonymous_var_nameX604, void* anonymous_var_nameX605);

int pcre16_config(int anonymous_var_nameX606, void* anonymous_var_nameX607);

int pcre32_config(int anonymous_var_nameX608, void* anonymous_var_nameX609);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX610, const char* anonymous_var_nameX611, int* anonymous_var_nameX612, int anonymous_var_nameX613, const char* anonymous_var_nameX614, char* anonymous_var_nameX615, int anonymous_var_nameX616);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX617, const unsigned short int* anonymous_var_nameX618, int* anonymous_var_nameX619, int anonymous_var_nameX620, const unsigned short int* anonymous_var_nameX621, unsigned short int* anonymous_var_nameX622, int anonymous_var_nameX623);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX624, const unsigned int* anonymous_var_nameX625, int* anonymous_var_nameX626, int anonymous_var_nameX627, const unsigned int* anonymous_var_nameX628, unsigned int* anonymous_var_nameX629, int anonymous_var_nameX630);

int pcre_copy_substring(const char* anonymous_var_nameX631, int* anonymous_var_nameX632, int anonymous_var_nameX633, int anonymous_var_nameX634, char* anonymous_var_nameX635, int anonymous_var_nameX636);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX637, int* anonymous_var_nameX638, int anonymous_var_nameX639, int anonymous_var_nameX640, unsigned short int* anonymous_var_nameX641, int anonymous_var_nameX642);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX643, int* anonymous_var_nameX644, int anonymous_var_nameX645, int anonymous_var_nameX646, unsigned int* anonymous_var_nameX647, int anonymous_var_nameX648);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX649, const struct pcre_extra* anonymous_var_nameX650, const char* anonymous_var_nameX651, int anonymous_var_nameX652, int anonymous_var_nameX653, int anonymous_var_nameX654, int* anonymous_var_nameX655, int anonymous_var_nameX656, int* anonymous_var_nameX657, int anonymous_var_nameX658);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX659, const struct pcre16_extra* anonymous_var_nameX660, const unsigned short int* anonymous_var_nameX661, int anonymous_var_nameX662, int anonymous_var_nameX663, int anonymous_var_nameX664, int* anonymous_var_nameX665, int anonymous_var_nameX666, int* anonymous_var_nameX667, int anonymous_var_nameX668);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX669, const struct pcre32_extra* anonymous_var_nameX670, const unsigned int* anonymous_var_nameX671, int anonymous_var_nameX672, int anonymous_var_nameX673, int anonymous_var_nameX674, int* anonymous_var_nameX675, int anonymous_var_nameX676, int* anonymous_var_nameX677, int anonymous_var_nameX678);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX679, const struct pcre_extra* anonymous_var_nameX680, const char* anonymous_var_nameX681, int anonymous_var_nameX682, int anonymous_var_nameX683, int anonymous_var_nameX684, int* anonymous_var_nameX685, int anonymous_var_nameX686);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX687, const struct pcre16_extra* anonymous_var_nameX688, const unsigned short int* anonymous_var_nameX689, int anonymous_var_nameX690, int anonymous_var_nameX691, int anonymous_var_nameX692, int* anonymous_var_nameX693, int anonymous_var_nameX694);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX695, const struct pcre32_extra* anonymous_var_nameX696, const unsigned int* anonymous_var_nameX697, int anonymous_var_nameX698, int anonymous_var_nameX699, int anonymous_var_nameX700, int* anonymous_var_nameX701, int anonymous_var_nameX702);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX703, const struct pcre_extra* anonymous_var_nameX704, const char* anonymous_var_nameX705, int anonymous_var_nameX706, int anonymous_var_nameX707, int anonymous_var_nameX708, int* anonymous_var_nameX709, int anonymous_var_nameX710, struct real_pcre_jit_stack* anonymous_var_nameX711);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX712, const struct pcre16_extra* anonymous_var_nameX713, const unsigned short int* anonymous_var_nameX714, int anonymous_var_nameX715, int anonymous_var_nameX716, int anonymous_var_nameX717, int* anonymous_var_nameX718, int anonymous_var_nameX719, struct real_pcre16_jit_stack* anonymous_var_nameX720);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX721, const struct pcre32_extra* anonymous_var_nameX722, const unsigned int* anonymous_var_nameX723, int anonymous_var_nameX724, int anonymous_var_nameX725, int anonymous_var_nameX726, int* anonymous_var_nameX727, int anonymous_var_nameX728, struct real_pcre32_jit_stack* anonymous_var_nameX729);

void pcre_free_substring(const char* anonymous_var_nameX730);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX731);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX732);

void pcre_free_substring_list(const char** anonymous_var_nameX733);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX734);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX735);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX736, const struct pcre_extra* anonymous_var_nameX737, int anonymous_var_nameX738, void* anonymous_var_nameX739);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX740, const struct pcre16_extra* anonymous_var_nameX741, int anonymous_var_nameX742, void* anonymous_var_nameX743);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX744, const struct pcre32_extra* anonymous_var_nameX745, int anonymous_var_nameX746, void* anonymous_var_nameX747);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX748, const char* anonymous_var_nameX749, int* anonymous_var_nameX750, int anonymous_var_nameX751, const char* anonymous_var_nameX752, const char** anonymous_var_nameX753);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX754, const unsigned short int* anonymous_var_nameX755, int* anonymous_var_nameX756, int anonymous_var_nameX757, const unsigned short int* anonymous_var_nameX758, const unsigned short int** anonymous_var_nameX759);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX760, const unsigned int* anonymous_var_nameX761, int* anonymous_var_nameX762, int anonymous_var_nameX763, const unsigned int* anonymous_var_nameX764, const unsigned int** anonymous_var_nameX765);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX766, const char* anonymous_var_nameX767);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX768, const unsigned short int* anonymous_var_nameX769);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX770, const unsigned int* anonymous_var_nameX771);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX772, const char* anonymous_var_nameX773, char** anonymous_var_nameX774, char** anonymous_var_nameX775);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX776, const unsigned short int* anonymous_var_nameX777, unsigned short int** anonymous_var_nameX778, unsigned short int** anonymous_var_nameX779);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX780, const unsigned int* anonymous_var_nameX781, unsigned int** anonymous_var_nameX782, unsigned int** anonymous_var_nameX783);

int pcre_get_substring(const char* anonymous_var_nameX784, int* anonymous_var_nameX785, int anonymous_var_nameX786, int anonymous_var_nameX787, const char** anonymous_var_nameX788);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX789, int* anonymous_var_nameX790, int anonymous_var_nameX791, int anonymous_var_nameX792, const unsigned short int** anonymous_var_nameX793);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX794, int* anonymous_var_nameX795, int anonymous_var_nameX796, int anonymous_var_nameX797, const unsigned int** anonymous_var_nameX798);

int pcre_get_substring_list(const char* anonymous_var_nameX799, int* anonymous_var_nameX800, int anonymous_var_nameX801, const char*** anonymous_var_nameX802);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX803, int* anonymous_var_nameX804, int anonymous_var_nameX805, const unsigned short int*** anonymous_var_nameX806);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX807, int* anonymous_var_nameX808, int anonymous_var_nameX809, const unsigned int*** anonymous_var_nameX810);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX811, int anonymous_var_nameX812);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX813, int anonymous_var_nameX814);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX815, int anonymous_var_nameX816);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX817, int anonymous_var_nameX818, const char** anonymous_var_nameX819);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX820, int anonymous_var_nameX821, const char** anonymous_var_nameX822);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX823, int anonymous_var_nameX824, const char** anonymous_var_nameX825);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX826);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX827);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX828);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX829, struct pcre_extra* anonymous_var_nameX830, const unsigned char* anonymous_var_nameX831);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX832, struct pcre16_extra* anonymous_var_nameX833, const unsigned char* anonymous_var_nameX834);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX835, struct pcre32_extra* anonymous_var_nameX836, const unsigned char* anonymous_var_nameX837);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX838, const unsigned short int* anonymous_var_nameX839, int anonymous_var_nameX840, int* anonymous_var_nameX841, int anonymous_var_nameX842);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX843, const unsigned int* anonymous_var_nameX844, int anonymous_var_nameX845, int* anonymous_var_nameX846, int anonymous_var_nameX847);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX848, int anonymous_var_nameX849);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX850, int anonymous_var_nameX851);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX852, int anonymous_var_nameX853);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX854);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX855);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX856);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX857, struct real_pcre_jit_stack* (*anonymous_var_nameX858)(void*), void* anonymous_var_nameX859);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX860, struct real_pcre16_jit_stack* (*anonymous_var_nameX861)(void*), void* anonymous_var_nameX862);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX863, struct real_pcre32_jit_stack* (*anonymous_var_nameX864)(void*), void* anonymous_var_nameX865);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

unsigned int* wcscpy(unsigned int* anonymous_var_nameX866, const unsigned int* anonymous_var_nameX867);

unsigned int* wcsncpy(unsigned int* anonymous_var_nameX868, const unsigned int* anonymous_var_nameX869, unsigned long int anonymous_var_nameX870);

unsigned int* wcscat(unsigned int* anonymous_var_nameX871, const unsigned int* anonymous_var_nameX872);

unsigned int* wcsncat(unsigned int* anonymous_var_nameX873, const unsigned int* anonymous_var_nameX874, unsigned long int anonymous_var_nameX875);

int wcscmp(const unsigned int* anonymous_var_nameX876, const unsigned int* anonymous_var_nameX877);

int wcsncmp(const unsigned int* anonymous_var_nameX878, const unsigned int* anonymous_var_nameX879, unsigned long int anonymous_var_nameX880);

int wcscoll(const unsigned int* anonymous_var_nameX881, const unsigned int* anonymous_var_nameX882);

unsigned long int wcsxfrm(unsigned int* anonymous_var_nameX883, const unsigned int* anonymous_var_nameX884, unsigned long int anonymous_var_nameX885);

unsigned int* wcschr(const unsigned int* anonymous_var_nameX886, unsigned int anonymous_var_nameX887);

unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX888, unsigned int anonymous_var_nameX889);

unsigned long int wcscspn(const unsigned int* anonymous_var_nameX890, const unsigned int* anonymous_var_nameX891);

unsigned long int wcsspn(const unsigned int* anonymous_var_nameX892, const unsigned int* anonymous_var_nameX893);

unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX894, const unsigned int* anonymous_var_nameX895);

unsigned int* wcstok(unsigned int* anonymous_var_nameX896, const unsigned int* anonymous_var_nameX897, unsigned int** anonymous_var_nameX898);

unsigned long int wcslen(const unsigned int* anonymous_var_nameX899);

unsigned int* wcsstr(const unsigned int* anonymous_var_nameX900, const unsigned int* anonymous_var_nameX901);

unsigned int* wcswcs(const unsigned int* anonymous_var_nameX902, const unsigned int* anonymous_var_nameX903);

unsigned int* wmemchr(const unsigned int* anonymous_var_nameX904, unsigned int anonymous_var_nameX905, unsigned long int anonymous_var_nameX906);

int wmemcmp(const unsigned int* anonymous_var_nameX907, const unsigned int* anonymous_var_nameX908, unsigned long int anonymous_var_nameX909);

unsigned int* wmemcpy(unsigned int* anonymous_var_nameX910, const unsigned int* anonymous_var_nameX911, unsigned long int anonymous_var_nameX912);

unsigned int* wmemmove(unsigned int* anonymous_var_nameX913, const unsigned int* anonymous_var_nameX914, unsigned long int anonymous_var_nameX915);

unsigned int* wmemset(unsigned int* anonymous_var_nameX916, unsigned int anonymous_var_nameX917, unsigned long int anonymous_var_nameX918);

unsigned int btowc(int anonymous_var_nameX919);

int wctob(unsigned int anonymous_var_nameX920);

int mbsinit(const struct __mbstate_t* anonymous_var_nameX921);

unsigned long int mbrtowc(unsigned int* anonymous_var_nameX922, const char* anonymous_var_nameX923, unsigned long int anonymous_var_nameX924, struct __mbstate_t* anonymous_var_nameX925);

unsigned long int wcrtomb(char* anonymous_var_nameX926, unsigned int anonymous_var_nameX927, struct __mbstate_t* anonymous_var_nameX928);

unsigned long int mbrlen(const char* anonymous_var_nameX929, unsigned long int anonymous_var_nameX930, struct __mbstate_t* anonymous_var_nameX931);

unsigned long int mbsrtowcs(unsigned int* anonymous_var_nameX932, const char** anonymous_var_nameX933, unsigned long int anonymous_var_nameX934, struct __mbstate_t* anonymous_var_nameX935);

unsigned long int wcsrtombs(char* anonymous_var_nameX936, const unsigned int** anonymous_var_nameX937, unsigned long int anonymous_var_nameX938, struct __mbstate_t* anonymous_var_nameX939);

float wcstof(const unsigned int* anonymous_var_nameX940, unsigned int** anonymous_var_nameX941);

double wcstod(const unsigned int* anonymous_var_nameX942, unsigned int** anonymous_var_nameX943);

long double wcstold(const unsigned int* anonymous_var_nameX944, unsigned int** anonymous_var_nameX945);

long wcstol(const unsigned int* anonymous_var_nameX946, unsigned int** anonymous_var_nameX947, int anonymous_var_nameX948);

unsigned long int wcstoul(const unsigned int* anonymous_var_nameX949, unsigned int** anonymous_var_nameX950, int anonymous_var_nameX951);

long long wcstoll(const unsigned int* anonymous_var_nameX952, unsigned int** anonymous_var_nameX953, int anonymous_var_nameX954);

unsigned long long wcstoull(const unsigned int* anonymous_var_nameX955, unsigned int** anonymous_var_nameX956, int anonymous_var_nameX957);

int fwide(struct _IO_FILE* anonymous_var_nameX958, int anonymous_var_nameX959);

int wprintf(const unsigned int* anonymous_var_nameX960, ...);

int fwprintf(struct _IO_FILE* anonymous_var_nameX961, const unsigned int* anonymous_var_nameX962, ...);

int swprintf(unsigned int* anonymous_var_nameX963, unsigned long int anonymous_var_nameX964, const unsigned int* anonymous_var_nameX965, ...);

int vwprintf(const unsigned int* anonymous_var_nameX966, va_list anonymous_var_nameX967);

int vfwprintf(struct _IO_FILE* anonymous_var_nameX968, const unsigned int* anonymous_var_nameX969, va_list anonymous_var_nameX970);

int vswprintf(unsigned int* anonymous_var_nameX971, unsigned long int anonymous_var_nameX972, const unsigned int* anonymous_var_nameX973, va_list anonymous_var_nameX974);

int wscanf(const unsigned int* anonymous_var_nameX975, ...);

int fwscanf(struct _IO_FILE* anonymous_var_nameX976, const unsigned int* anonymous_var_nameX977, ...);

int swscanf(const unsigned int* anonymous_var_nameX978, const unsigned int* anonymous_var_nameX979, ...);

int vwscanf(const unsigned int* anonymous_var_nameX980, va_list anonymous_var_nameX981);

int vfwscanf(struct _IO_FILE* anonymous_var_nameX982, const unsigned int* anonymous_var_nameX983, va_list anonymous_var_nameX984);

int vswscanf(const unsigned int* anonymous_var_nameX985, const unsigned int* anonymous_var_nameX986, va_list anonymous_var_nameX987);

unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX988);

unsigned int getwc(struct _IO_FILE* anonymous_var_nameX989);

unsigned int getwchar();

unsigned int fputwc(unsigned int anonymous_var_nameX990, struct _IO_FILE* anonymous_var_nameX991);

unsigned int putwc(unsigned int anonymous_var_nameX992, struct _IO_FILE* anonymous_var_nameX993);

unsigned int putwchar(unsigned int anonymous_var_nameX994);

unsigned int* fgetws(unsigned int* anonymous_var_nameX995, int anonymous_var_nameX996, struct _IO_FILE* anonymous_var_nameX997);

int fputws(const unsigned int* anonymous_var_nameX998, struct _IO_FILE* anonymous_var_nameX999);

unsigned int ungetwc(unsigned int anonymous_var_nameX1000, struct _IO_FILE* anonymous_var_nameX1001);

unsigned long int wcsftime(unsigned int* anonymous_var_nameX1002, unsigned long int anonymous_var_nameX1003, const unsigned int* anonymous_var_nameX1004, const struct tm* anonymous_var_nameX1005);

unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1006);

unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1007);

unsigned int getwchar_unlocked();

unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1008, struct _IO_FILE* anonymous_var_nameX1009);

unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1010, struct _IO_FILE* anonymous_var_nameX1011);

unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1012);

unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1013, int anonymous_var_nameX1014, struct _IO_FILE* anonymous_var_nameX1015);

int fputws_unlocked(const unsigned int* anonymous_var_nameX1016, struct _IO_FILE* anonymous_var_nameX1017);

unsigned long int wcsftime_l(unsigned int* anonymous_var_nameX1018, unsigned long int anonymous_var_nameX1019, const unsigned int* anonymous_var_nameX1020, const struct tm* anonymous_var_nameX1021, struct __locale_struct* anonymous_var_nameX1022);

struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1023, unsigned long int* anonymous_var_nameX1024);

unsigned long int mbsnrtowcs(unsigned int* anonymous_var_nameX1025, const char** anonymous_var_nameX1026, unsigned long int anonymous_var_nameX1027, unsigned long int anonymous_var_nameX1028, struct __mbstate_t* anonymous_var_nameX1029);

unsigned long int wcsnrtombs(char* anonymous_var_nameX1030, const unsigned int** anonymous_var_nameX1031, unsigned long int anonymous_var_nameX1032, unsigned long int anonymous_var_nameX1033, struct __mbstate_t* anonymous_var_nameX1034);

unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1035);

unsigned long int wcsnlen(const unsigned int* anonymous_var_nameX1036, unsigned long int anonymous_var_nameX1037);

unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1038, const unsigned int* anonymous_var_nameX1039);

unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1040, const unsigned int* anonymous_var_nameX1041, unsigned long int anonymous_var_nameX1042);

int wcscasecmp(const unsigned int* anonymous_var_nameX1043, const unsigned int* anonymous_var_nameX1044);

int wcscasecmp_l(const unsigned int* anonymous_var_nameX1045, const unsigned int* anonymous_var_nameX1046, struct __locale_struct* anonymous_var_nameX1047);

int wcsncasecmp(const unsigned int* anonymous_var_nameX1048, const unsigned int* anonymous_var_nameX1049, unsigned long int anonymous_var_nameX1050);

int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1051, const unsigned int* anonymous_var_nameX1052, unsigned long int anonymous_var_nameX1053, struct __locale_struct* anonymous_var_nameX1054);

int wcscoll_l(const unsigned int* anonymous_var_nameX1055, const unsigned int* anonymous_var_nameX1056, struct __locale_struct* anonymous_var_nameX1057);

unsigned long int wcsxfrm_l(unsigned int* anonymous_var_nameX1058, const unsigned int* anonymous_var_nameX1059, unsigned long int anonymous_var_nameX1060, struct __locale_struct* anonymous_var_nameX1061);

int wcwidth(unsigned int anonymous_var_nameX1062);

int wcswidth(const unsigned int* anonymous_var_nameX1063, unsigned long int anonymous_var_nameX1064);

int iswalnum(unsigned int anonymous_var_nameX1065);

int iswalpha(unsigned int anonymous_var_nameX1066);

int iswblank(unsigned int anonymous_var_nameX1067);

int iswcntrl(unsigned int anonymous_var_nameX1068);

int iswdigit(unsigned int anonymous_var_nameX1069);

int iswgraph(unsigned int anonymous_var_nameX1070);

int iswlower(unsigned int anonymous_var_nameX1071);

int iswprint(unsigned int anonymous_var_nameX1072);

int iswpunct(unsigned int anonymous_var_nameX1073);

int iswspace(unsigned int anonymous_var_nameX1074);

int iswupper(unsigned int anonymous_var_nameX1075);

int iswxdigit(unsigned int anonymous_var_nameX1076);

int iswctype(unsigned int anonymous_var_nameX1077, unsigned long int anonymous_var_nameX1078);

unsigned int towlower(unsigned int anonymous_var_nameX1079);

unsigned int towupper(unsigned int anonymous_var_nameX1080);

unsigned long int wctype(const char* anonymous_var_nameX1081);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX1083)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX1085)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX1087)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX1088);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX1089);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX1090);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX1091);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX1092)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX1093);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX1094);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1095);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX1096);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1097);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX1098);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX1099);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX1100);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1101);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1102);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX1103);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX1104);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX1105);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX1106);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX1107);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX1108);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX1109);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX1110);

char* GC_strdup(const char* anonymous_var_nameX1111);

char* GC_strndup(const char* anonymous_var_nameX1112, unsigned long int anonymous_var_nameX1113);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX1114);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX1115);

void* GC_memalign(unsigned long int anonymous_var_nameX1116, unsigned long int anonymous_var_nameX1117);

int GC_posix_memalign(void** anonymous_var_nameX1118, unsigned long int anonymous_var_nameX1119, unsigned long int anonymous_var_nameX1120);

void GC_free(void* anonymous_var_nameX1121);

void GC_change_stubborn(const void* anonymous_var_nameX1122);

void GC_end_stubborn_change(const void* anonymous_var_nameX1123);

void* GC_base(void* anonymous_var_nameX1124);

int GC_is_heap_ptr(const void* anonymous_var_nameX1125);

unsigned long int GC_size(const void* anonymous_var_nameX1126);

void* GC_realloc(void* anonymous_var_nameX1127, unsigned long int anonymous_var_nameX1128);

int GC_expand_hp(unsigned long int anonymous_var_nameX1129);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1130);

void GC_exclude_static_roots(void* anonymous_var_nameX1131, void* anonymous_var_nameX1132);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX1133, void* anonymous_var_nameX1134);

void GC_remove_roots(void* anonymous_var_nameX1135, void* anonymous_var_nameX1136);

void GC_register_displacement(unsigned long int anonymous_var_nameX1137);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX1138);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX1139)());

void GC_set_stop_func(int (*anonymous_var_nameX1140)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1141, unsigned long int* anonymous_var_nameX1142, unsigned long int* anonymous_var_nameX1143, unsigned long int* anonymous_var_nameX1144, unsigned long int* anonymous_var_nameX1145);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1146, unsigned long int anonymous_var_nameX1147);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX1148);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1149);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1150);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1151);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1152, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX1153, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX1154, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX1155, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX1156, unsigned long int anonymous_var_nameX1157, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX1158, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX1159, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1160, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1161, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX1162);

void* GC_debug_realloc(void* anonymous_var_nameX1163, unsigned long int anonymous_var_nameX1164, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX1165);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1166);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX1167);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX1168, unsigned long int anonymous_var_nameX1169);

void GC_register_finalizer(void* anonymous_var_nameX1172, void (*anonymous_var_nameX1173)(void*,void*), void* anonymous_var_nameX1174, void (*anonymous_var_nameX1175)(void*,void*), void** anonymous_var_nameX1176);

void GC_debug_register_finalizer(void* anonymous_var_nameX1177, void (*anonymous_var_nameX1178)(void*,void*), void* anonymous_var_nameX1179, void (*anonymous_var_nameX1180)(void*,void*), void** anonymous_var_nameX1181);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1182, void (*anonymous_var_nameX1183)(void*,void*), void* anonymous_var_nameX1184, void (*anonymous_var_nameX1185)(void*,void*), void** anonymous_var_nameX1186);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1187, void (*anonymous_var_nameX1188)(void*,void*), void* anonymous_var_nameX1189, void (*anonymous_var_nameX1190)(void*,void*), void** anonymous_var_nameX1191);

void GC_register_finalizer_no_order(void* anonymous_var_nameX1192, void (*anonymous_var_nameX1193)(void*,void*), void* anonymous_var_nameX1194, void (*anonymous_var_nameX1195)(void*,void*), void** anonymous_var_nameX1196);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1197, void (*anonymous_var_nameX1198)(void*,void*), void* anonymous_var_nameX1199, void (*anonymous_var_nameX1200)(void*,void*), void** anonymous_var_nameX1201);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX1202, void (*anonymous_var_nameX1203)(void*,void*), void* anonymous_var_nameX1204, void (*anonymous_var_nameX1205)(void*,void*), void** anonymous_var_nameX1206);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1207, void (*anonymous_var_nameX1208)(void*,void*), void* anonymous_var_nameX1209, void (*anonymous_var_nameX1210)(void*,void*), void** anonymous_var_nameX1211);

int GC_register_disappearing_link(void** anonymous_var_nameX1212);

int GC_general_register_disappearing_link(void** anonymous_var_nameX1213, const void* anonymous_var_nameX1214);

int GC_move_disappearing_link(void** anonymous_var_nameX1215, void** anonymous_var_nameX1216);

int GC_unregister_disappearing_link(void** anonymous_var_nameX1217);

int GC_register_long_link(void** anonymous_var_nameX1218, const void* anonymous_var_nameX1219);

int GC_move_long_link(void** anonymous_var_nameX1220, void** anonymous_var_nameX1221);

int GC_unregister_long_link(void** anonymous_var_nameX1222);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX1224)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX1225, int anonymous_var_nameX1226);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX1228)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX1229);

void GC_set_warn_proc(void (*anonymous_var_nameX1232)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX1233, unsigned long int anonymous_var_nameX1234);

void GC_set_log_fd(int anonymous_var_nameX1235);

void GC_set_abort_func(void (*anonymous_var_nameX1237)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1239)(void*), void* anonymous_var_nameX1240);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX1243)(struct GC_stack_base*,void*), void* anonymous_var_nameX1244);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX1245)(void*), void* anonymous_var_nameX1246);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX1247)(void*), void* anonymous_var_nameX1248);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1249);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1250);

void GC_set_stackbottom(void* anonymous_var_nameX1251, const struct GC_stack_base* anonymous_var_nameX1252);

void* GC_same_obj(void* anonymous_var_nameX1253, void* anonymous_var_nameX1254);

void* GC_pre_incr(void** anonymous_var_nameX1255, long anonymous_var_nameX1256);

void* GC_post_incr(void** anonymous_var_nameX1257, long anonymous_var_nameX1258);

void* GC_is_visible(void* anonymous_var_nameX1259);

void* GC_is_valid_displacement(void* anonymous_var_nameX1260);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX1261);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX1262, const void* anonymous_var_nameX1263);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1264, const void* anonymous_var_nameX1265);

void* GC_malloc_many(unsigned long int anonymous_var_nameX1286);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1290)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1291);

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

// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("./neo-c.h", 51,0),perror(msg),come_pop_stackframe());
    (come_push_stackframe("./neo-c.h", 52,1),stackframe(),come_pop_stackframe());
    (come_push_stackframe("./neo-c.h", 53,2),exit(4),come_pop_stackframe());
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b1;
struct buffer* result_0;
struct buffer* __exception_result_var_b2;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(come_push_stackframe("./neo-c.h", 1903, 4),__exception_result_var_b1=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1903, "buffer"), "./neo-c.h", 1903, 3))), come_pop_stackframe(), __exception_result_var_b1);
    (come_push_stackframe("./neo-c.h", 1904, 7),__exception_result_var_b2=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_0, "./neo-c.h", 1904, 5)), "./neo-c.h", 1904, 6)),self,sizeof(char)*len), come_pop_stackframe(), __exception_result_var_b2);
    __result2__ = __result_obj__ = result_0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b3;
struct buffer* result_1;
struct buffer* __exception_result_var_b4;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(come_push_stackframe("./neo-c.h", 1910, 9),__exception_result_var_b3=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1910, "buffer"), "./neo-c.h", 1910, 8))), come_pop_stackframe(), __exception_result_var_b3);
    (come_push_stackframe("./neo-c.h", 1911, 12),__exception_result_var_b4=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_1, "./neo-c.h", 1911, 10)), "./neo-c.h", 1911, 11)),(char*)self,sizeof(short short)*len), come_pop_stackframe(), __exception_result_var_b4);
    __result3__ = __result_obj__ = result_1;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b5;
struct buffer* result_2;
struct buffer* __exception_result_var_b6;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(come_push_stackframe("./neo-c.h", 1917, 14),__exception_result_var_b5=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1917, "buffer"), "./neo-c.h", 1917, 13))), come_pop_stackframe(), __exception_result_var_b5);
    (come_push_stackframe("./neo-c.h", 1918, 17),__exception_result_var_b6=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_2, "./neo-c.h", 1918, 15)), "./neo-c.h", 1918, 16)),(char*)self,sizeof(int)*len), come_pop_stackframe(), __exception_result_var_b6);
    __result4__ = __result_obj__ = result_2;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b7;
struct buffer* result_3;
struct buffer* __exception_result_var_b8;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(come_push_stackframe("./neo-c.h", 1924, 19),__exception_result_var_b7=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1924, "buffer"), "./neo-c.h", 1924, 18))), come_pop_stackframe(), __exception_result_var_b7);
    (come_push_stackframe("./neo-c.h", 1925, 22),__exception_result_var_b8=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_3, "./neo-c.h", 1925, 20)), "./neo-c.h", 1925, 21)),(char*)self,sizeof(long)*len), come_pop_stackframe(), __exception_result_var_b8);
    __result5__ = __result_obj__ = result_3;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b9;
struct buffer* result_4;
struct buffer* __exception_result_var_b10;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(come_push_stackframe("./neo-c.h", 1931, 24),__exception_result_var_b9=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1931, "buffer"), "./neo-c.h", 1931, 23))), come_pop_stackframe(), __exception_result_var_b9);
    (come_push_stackframe("./neo-c.h", 1932, 27),__exception_result_var_b10=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_4, "./neo-c.h", 1932, 25)), "./neo-c.h", 1932, 26)),(char*)self,sizeof(float)*len), come_pop_stackframe(), __exception_result_var_b10);
    __result6__ = __result_obj__ = result_4;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b11;
struct buffer* result_5;
struct buffer* __exception_result_var_b12;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(come_push_stackframe("./neo-c.h", 1938, 29),__exception_result_var_b11=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1938, "buffer"), "./neo-c.h", 1938, 28))), come_pop_stackframe(), __exception_result_var_b11);
    (come_push_stackframe("./neo-c.h", 1939, 32),__exception_result_var_b12=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_5, "./neo-c.h", 1939, 30)), "./neo-c.h", 1939, 31)),(char*)self,sizeof(double)*len), come_pop_stackframe(), __exception_result_var_b12);
    __result7__ = __result_obj__ = result_5;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_6;
struct buffer* __exception_result_var_b13;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
    result_6=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1954, "smart_pointer$1char");
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1956, 33)), "./neo-c.h", 1956, 34))->memory=(come_push_stackframe("./neo-c.h", 1956, 35),__exception_result_var_b13=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b13);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 36)), "./neo-c.h", 1957, 37))->p=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 38)), "./neo-c.h", 1957, 39))->memory, "./neo-c.h", 1957, 40)), "./neo-c.h", 1957, 41))->buf;
    __result8__ = __result_obj__ = result_6;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_7;
struct buffer* __exception_result_var_b14;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
    result_7=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1964, "smart_pointer$1char");
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1966, 42)), "./neo-c.h", 1966, 43))->memory=(come_push_stackframe("./neo-c.h", 1966, 44),__exception_result_var_b14=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b14);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 45)), "./neo-c.h", 1967, 46))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 47)), "./neo-c.h", 1967, 48))->memory, "./neo-c.h", 1967, 49)), "./neo-c.h", 1967, 50))->buf;
    __result9__ = __result_obj__ = result_7;
    return __result9__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1short* result_8;
struct buffer* __exception_result_var_b15;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
    result_8=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1974, "smart_pointer$1short");
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1976, 51)), "./neo-c.h", 1976, 52))->memory=(come_push_stackframe("./neo-c.h", 1976, 53),__exception_result_var_b15=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b15);
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 54)), "./neo-c.h", 1977, 55))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 56)), "./neo-c.h", 1977, 57))->memory, "./neo-c.h", 1977, 58)), "./neo-c.h", 1977, 59))->buf;
    __result10__ = __result_obj__ = result_8;
    return __result10__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1int* result_9;
struct buffer* __exception_result_var_b16;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
    result_9=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1984, "smart_pointer$1int");
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1986, 60)), "./neo-c.h", 1986, 61))->memory=(come_push_stackframe("./neo-c.h", 1986, 62),__exception_result_var_b16=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b16);
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 63)), "./neo-c.h", 1987, 64))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 65)), "./neo-c.h", 1987, 66))->memory, "./neo-c.h", 1987, 67)), "./neo-c.h", 1987, 68))->buf;
    __result11__ = __result_obj__ = result_9;
    return __result11__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1long* result_10;
struct buffer* __exception_result_var_b17;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
    result_10=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1994, "smart_pointer$1long");
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1996, 69)), "./neo-c.h", 1996, 70))->memory=(come_push_stackframe("./neo-c.h", 1996, 71),__exception_result_var_b17=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b17);
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 72)), "./neo-c.h", 1997, 73))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 74)), "./neo-c.h", 1997, 75))->memory, "./neo-c.h", 1997, 76)), "./neo-c.h", 1997, 77))->buf;
    __result12__ = __result_obj__ = result_10;
    return __result12__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1char* __exception_result_var_b20;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    __result14__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2165, 94),__exception_result_var_b20=smart_pointer$1char_initialize(((struct smart_pointer$1char*)come_null_check((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2165, "smart_pointer$1char"), "./neo-c.h", 2165, 78)),self,len), come_pop_stackframe(), __exception_result_var_b20);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1short* __exception_result_var_b23;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    __result16__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2170, 111),__exception_result_var_b23=smart_pointer$1short_initialize(((struct smart_pointer$1short*)come_null_check((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2170, "smart_pointer$1short"), "./neo-c.h", 2170, 95)),self,len), come_pop_stackframe(), __exception_result_var_b23);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1int* __exception_result_var_b26;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    __result18__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2175, 128),__exception_result_var_b26=smart_pointer$1int_initialize(((struct smart_pointer$1int*)come_null_check((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2175, "smart_pointer$1int"), "./neo-c.h", 2175, 112)),self,len), come_pop_stackframe(), __exception_result_var_b26);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1long* __exception_result_var_b29;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    __result20__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2180, 145),__exception_result_var_b29=smart_pointer$1long_initialize(((struct smart_pointer$1long*)come_null_check((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2180, "smart_pointer$1long"), "./neo-c.h", 2180, 129)),self,len), come_pop_stackframe(), __exception_result_var_b29);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1float* __exception_result_var_b32;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    __result22__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2185, 162),__exception_result_var_b32=smart_pointer$1float_initialize(((struct smart_pointer$1float*)come_null_check((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2185, "smart_pointer$1float"), "./neo-c.h", 2185, 146)),self,len), come_pop_stackframe(), __exception_result_var_b32);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1double* __exception_result_var_b35;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    __result24__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2190, 179),__exception_result_var_b35=smart_pointer$1double_initialize(((struct smart_pointer$1double*)come_null_check((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2190, "smart_pointer$1double"), "./neo-c.h", 2190, 163)),self,len), come_pop_stackframe(), __exception_result_var_b35);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
struct list$1char* __exception_result_var_b37;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    __result27__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2195, 236),__exception_result_var_b37=list$1char_initialize_with_values(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2195, "list$1char"), "./neo-c.h", 2195, 180)), "./neo-c.h", 2195, 181)),len,self), come_pop_stackframe(), __exception_result_var_b37);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
struct list$1short* __exception_result_var_b39;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    __result30__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2200, 293),__exception_result_var_b39=list$1short_initialize_with_values(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2200, "list$1short"), "./neo-c.h", 2200, 237)), "./neo-c.h", 2200, 238)),len,self), come_pop_stackframe(), __exception_result_var_b39);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
struct list$1int* __exception_result_var_b41;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    __result33__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2205, 350),__exception_result_var_b41=list$1int_initialize_with_values(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2205, "list$1int"), "./neo-c.h", 2205, 294)), "./neo-c.h", 2205, 295)),len,self), come_pop_stackframe(), __exception_result_var_b41);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
struct list$1long* __exception_result_var_b43;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    __result36__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2210, 407),__exception_result_var_b43=list$1long_initialize_with_values(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2210, "list$1long"), "./neo-c.h", 2210, 351)), "./neo-c.h", 2210, 352)),len,self), come_pop_stackframe(), __exception_result_var_b43);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
struct list$1float* __exception_result_var_b45;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    __result39__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2215, 464),__exception_result_var_b45=list$1float_initialize_with_values(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2215, "list$1float"), "./neo-c.h", 2215, 408)), "./neo-c.h", 2215, 409)),len,self), come_pop_stackframe(), __exception_result_var_b45);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
struct list$1double* __exception_result_var_b47;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    __result42__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2220, 521),__exception_result_var_b47=list$1double_initialize_with_values(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2220, "list$1double"), "./neo-c.h", 2220, 465)), "./neo-c.h", 2220, 466)),len,self), come_pop_stackframe(), __exception_result_var_b47);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __exception_result_var_b48;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    __result49__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2336, 522),__exception_result_var_b48=xsprintf(msg,self), come_pop_stackframe(), __exception_result_var_b48);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __exception_result_var_b49;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    __result50__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2341, 523),__exception_result_var_b49=xsprintf(msg,self), come_pop_stackframe(), __exception_result_var_b49);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
char* __exception_result_var_b50;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
    __result51__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2346, 524),__exception_result_var_b50=xsprintf(msg,self), come_pop_stackframe(), __exception_result_var_b50);
    return __result51__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
unsigned int* __exception_result_var_b51;
unsigned int* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    __result52__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 47, 525),__exception_result_var_b51=wchar_tp_substring(str,head,tail), come_pop_stackframe(), __exception_result_var_b51);
    return __result52__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __exception_result_var_b52;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = (come_push_stackframe("./neo-c-str.h", 53, 526),__exception_result_var_b52=charp_index_count(str,search_str,count,default_value), come_pop_stackframe(), __exception_result_var_b52);
    return __result53__;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __exception_result_var_b53;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = (come_push_stackframe("./neo-c-str.h", 59, 527),__exception_result_var_b53=charp_index_regex_count(self,reg,count,default_value), come_pop_stackframe(), __exception_result_var_b53);
    return __result54__;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int __exception_result_var_b54;
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    __result55__ = (come_push_stackframe("./neo-c-str.h", 65, 528),__exception_result_var_b54=charp_rindex(str,search_str,default_value), come_pop_stackframe(), __exception_result_var_b54);
    return __result55__;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __exception_result_var_b55;
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    __result56__ = (come_push_stackframe("./neo-c-str.h", 71, 529),__exception_result_var_b55=charp_rindex_regex(self,reg,default_value), come_pop_stackframe(), __exception_result_var_b55);
    return __result56__;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __exception_result_var_b56;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    __result57__ = (come_push_stackframe("./neo-c-str.h", 77, 530),__exception_result_var_b56=charp_rindex_count(str,search_str,default_value,-1), come_pop_stackframe(), __exception_result_var_b56);
    return __result57__;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __exception_result_var_b57;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    __result58__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 83, 531),__exception_result_var_b57=charp_scan_block(self,reg,parent,block), come_pop_stackframe(), __exception_result_var_b57);
    return __result58__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __exception_result_var_b58;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    __result59__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 89, 532),__exception_result_var_b58=charp_scan_block_count(self,reg,count,parent,block), come_pop_stackframe(), __exception_result_var_b58);
    return __result59__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __exception_result_var_b59;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    __result60__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 95, 533),__exception_result_var_b59=charp_split_block(self,reg,parent,block), come_pop_stackframe(), __exception_result_var_b59);
    return __result60__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __exception_result_var_b60;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    __result61__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 101, 534),__exception_result_var_b60=charp_split_block_count(self,reg,count,parent,block), come_pop_stackframe(), __exception_result_var_b60);
    return __result61__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
struct list$1charph* __exception_result_var_b61;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    __result62__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 107, 535),__exception_result_var_b61=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex), come_pop_stackframe(), __exception_result_var_b61);
    return __result62__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
char* __exception_result_var_b62;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
    __result63__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 113, 536),__exception_result_var_b62=charp_strip(self), come_pop_stackframe(), __exception_result_var_b62);
    return __result63__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
char* __exception_result_var_b63;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    __result64__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 119, 537),__exception_result_var_b63=string_printable(str), come_pop_stackframe(), __exception_result_var_b63);
    return __result64__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__;
unsigned int* __exception_result_var_b64;
unsigned int* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    __result65__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 125, 538),__exception_result_var_b64=charp_to_wstring(str), come_pop_stackframe(), __exception_result_var_b64);
    return __result65__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__;
char* __exception_result_var_b65;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    __result66__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 133, 539),__exception_result_var_b65=wchar_tp_to_string(wstr), come_pop_stackframe(), __exception_result_var_b65);
    return __result66__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__;
char* __exception_result_var_b66;
unsigned int* __exception_result_var_b67;
unsigned int* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    __result67__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 138, 543),__exception_result_var_b67=string_to_wstring(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("./neo-c-str.h", 138, 540),__exception_result_var_b66=xsprintf("%d",self), come_pop_stackframe(), __exception_result_var_b66), "./neo-c-str.h", 138, 541)), "./neo-c-str.h", 138, 542))), come_pop_stackframe(), __exception_result_var_b67);
    return __result67__;
}
static inline int wstring_length(unsigned int* str){
void* __result_obj__;
int __exception_result_var_b68;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    __result68__ = (come_push_stackframe("./neo-c-str.h", 144, 544),__exception_result_var_b68=wchar_tp_length(str), come_pop_stackframe(), __exception_result_var_b68);
    return __result68__;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
unsigned int* __exception_result_var_b69;
unsigned int* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
    __result69__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 150, 545),__exception_result_var_b69=wchar_tp_delete(str,head,tail), come_pop_stackframe(), __exception_result_var_b69);
    return __result69__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __exception_result_var_b70;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    __result70__ = (come_push_stackframe("./neo-c-str.h", 156, 546),__exception_result_var_b70=wchar_tp_index(str,search_str,default_value), come_pop_stackframe(), __exception_result_var_b70);
    return __result70__;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __exception_result_var_b71;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    __result71__ = (come_push_stackframe("./neo-c-str.h", 162, 547),__exception_result_var_b71=wchar_tp_rindex(str,search_str,default_value), come_pop_stackframe(), __exception_result_var_b71);
    return __result71__;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__;
unsigned int* __exception_result_var_b72;
unsigned int* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    __result72__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 168, 548),__exception_result_var_b72=wchar_tp_reverse(str), come_pop_stackframe(), __exception_result_var_b72);
    return __result72__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __exception_result_var_b73;
unsigned int* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    __result73__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 174, 549),__exception_result_var_b73=wchar_tp_multiply(str,n), come_pop_stackframe(), __exception_result_var_b73);
    return __result73__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__;
unsigned int* __exception_result_var_b74;
unsigned int* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    __result74__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 180, 550),__exception_result_var_b74=wchar_tp_printable(str), come_pop_stackframe(), __exception_result_var_b74);
    return __result74__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
void* __result_obj__;
unsigned int __exception_result_var_b75;
unsigned int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    __result75__ = (come_push_stackframe("./neo-c-str.h", 202, 551),__exception_result_var_b75=wchar_tp_get_hash_key(value), come_pop_stackframe(), __exception_result_var_b75);
    return __result75__;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __exception_result_var_b76;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    __result76__ = (come_push_stackframe("./neo-c-str.h", 214, 552),__exception_result_var_b76=charp_match_group_strings(self,reg,count,group_strings), come_pop_stackframe(), __exception_result_var_b76);
    return __result76__;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
int __exception_result_var_b77;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = (come_push_stackframe("./neo-c-str.h", 220, 553),__exception_result_var_b77=charp_index(str,search_str,default_value), come_pop_stackframe(), __exception_result_var_b77);
    return __result77__;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __exception_result_var_b78;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = (come_push_stackframe("./neo-c-str.h", 226, 554),__exception_result_var_b78=charp_index_regex(self,reg,default_value), come_pop_stackframe(), __exception_result_var_b78);
    return __result78__;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
char* __exception_result_var_b79;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    __result79__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 233, 555),__exception_result_var_b79=charp_replace(self,index,c), come_pop_stackframe(), __exception_result_var_b79);
    return __result79__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
char* __exception_result_var_b80;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 239, 556),__exception_result_var_b80=charp_multiply(str,n), come_pop_stackframe(), __exception_result_var_b80);
    return __result80__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
char* __exception_result_var_b81;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 245, 557),__exception_result_var_b81=charp_sub(self,reg,replace), come_pop_stackframe(), __exception_result_var_b81);
    return __result81__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
char* __exception_result_var_b82;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    __result82__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 251, 558),__exception_result_var_b82=charp_sub_count(self,reg,replace,count), come_pop_stackframe(), __exception_result_var_b82);
    return __result82__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
struct list$1charph* __exception_result_var_b83;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 257, 559),__exception_result_var_b83=charp_split_str(self,str), come_pop_stackframe(), __exception_result_var_b83);
    return __result83__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
struct list$1charph* __exception_result_var_b84;
struct list$1charph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    __result84__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 263, 560),__exception_result_var_b84=charp_scan(self,reg), come_pop_stackframe(), __exception_result_var_b84);
    return __result84__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
struct list$1charph* __exception_result_var_b85;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    __result85__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 269, 561),__exception_result_var_b85=charp_split(self,reg), come_pop_stackframe(), __exception_result_var_b85);
    return __result85__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __exception_result_var_b86;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = (come_push_stackframe("./neo-c-str.h", 275, 562),__exception_result_var_b86=charp_match(self,reg), come_pop_stackframe(), __exception_result_var_b86);
    return __result86__;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
struct list$1charph* __exception_result_var_b87;
struct list$1charph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    __result87__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 281, 563),__exception_result_var_b87=charp_split_maxsplit(self,reg,maxsplit), come_pop_stackframe(), __exception_result_var_b87);
    return __result87__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __exception_result_var_b88;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = (come_push_stackframe("./neo-c-str.h", 287, 564),__exception_result_var_b88=charp_rindex_regex_count(self,reg,count,default_value), come_pop_stackframe(), __exception_result_var_b88);
    return __result88__;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __exception_result_var_b89;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = (come_push_stackframe("./neo-c-str.h", 293, 565),__exception_result_var_b89=charp_match_count(self,reg,count), come_pop_stackframe(), __exception_result_var_b89);
    return __result89__;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
char* __exception_result_var_b90;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 299, 566),__exception_result_var_b90=charp_sub_block(self,reg,parent,block), come_pop_stackframe(), __exception_result_var_b90);
    return __result90__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
char* __exception_result_var_b91;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    __result91__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 305, 567),__exception_result_var_b91=charp_sub_block_count(self,reg,count,parent,block), come_pop_stackframe(), __exception_result_var_b91);
    return __result91__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
char* __exception_result_var_b93;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 323, 569),__exception_result_var_b93=string_chomp(str), come_pop_stackframe(), __exception_result_var_b93);
    return __result93__;
}

// body function













static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b18;
struct buffer* __exception_result_var_b19;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2006, 79)), "./neo-c.h", 2006, 80))->memory=(come_push_stackframe("./neo-c.h", 2006, 82),__exception_result_var_b18=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 81))), come_pop_stackframe(), __exception_result_var_b18);
        (come_push_stackframe("./neo-c.h", 2008, 87),__exception_result_var_b19=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2008, 83)), "./neo-c.h", 2008, 84))->memory, "./neo-c.h", 2008, 85)), "./neo-c.h", 2008, 86)),memory,sizeof(char)*size), come_pop_stackframe(), __exception_result_var_b19);
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 88)), "./neo-c.h", 2010, 89))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 90)), "./neo-c.h", 2010, 91))->memory, "./neo-c.h", 2010, 92)), "./neo-c.h", 2010, 93))->buf;
        __result13__ = __result_obj__ = self;
        return __result13__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b21;
struct buffer* __exception_result_var_b22;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2006, 96)), "./neo-c.h", 2006, 97))->memory=(come_push_stackframe("./neo-c.h", 2006, 99),__exception_result_var_b21=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 98))), come_pop_stackframe(), __exception_result_var_b21);
        (come_push_stackframe("./neo-c.h", 2008, 104),__exception_result_var_b22=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2008, 100)), "./neo-c.h", 2008, 101))->memory, "./neo-c.h", 2008, 102)), "./neo-c.h", 2008, 103)),memory,sizeof(short short)*size), come_pop_stackframe(), __exception_result_var_b22);
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 105)), "./neo-c.h", 2010, 106))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 107)), "./neo-c.h", 2010, 108))->memory, "./neo-c.h", 2010, 109)), "./neo-c.h", 2010, 110))->buf;
        __result15__ = __result_obj__ = self;
        return __result15__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b24;
struct buffer* __exception_result_var_b25;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2006, 113)), "./neo-c.h", 2006, 114))->memory=(come_push_stackframe("./neo-c.h", 2006, 116),__exception_result_var_b24=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 115))), come_pop_stackframe(), __exception_result_var_b24);
        (come_push_stackframe("./neo-c.h", 2008, 121),__exception_result_var_b25=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2008, 117)), "./neo-c.h", 2008, 118))->memory, "./neo-c.h", 2008, 119)), "./neo-c.h", 2008, 120)),memory,sizeof(int)*size), come_pop_stackframe(), __exception_result_var_b25);
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 122)), "./neo-c.h", 2010, 123))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 124)), "./neo-c.h", 2010, 125))->memory, "./neo-c.h", 2010, 126)), "./neo-c.h", 2010, 127))->buf;
        __result17__ = __result_obj__ = self;
        return __result17__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b27;
struct buffer* __exception_result_var_b28;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2006, 130)), "./neo-c.h", 2006, 131))->memory=(come_push_stackframe("./neo-c.h", 2006, 133),__exception_result_var_b27=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 132))), come_pop_stackframe(), __exception_result_var_b27);
        (come_push_stackframe("./neo-c.h", 2008, 138),__exception_result_var_b28=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2008, 134)), "./neo-c.h", 2008, 135))->memory, "./neo-c.h", 2008, 136)), "./neo-c.h", 2008, 137)),memory,sizeof(long)*size), come_pop_stackframe(), __exception_result_var_b28);
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 139)), "./neo-c.h", 2010, 140))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 141)), "./neo-c.h", 2010, 142))->memory, "./neo-c.h", 2010, 143)), "./neo-c.h", 2010, 144))->buf;
        __result19__ = __result_obj__ = self;
        return __result19__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b30;
struct buffer* __exception_result_var_b31;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2006, 147)), "./neo-c.h", 2006, 148))->memory=(come_push_stackframe("./neo-c.h", 2006, 150),__exception_result_var_b30=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 149))), come_pop_stackframe(), __exception_result_var_b30);
        (come_push_stackframe("./neo-c.h", 2008, 155),__exception_result_var_b31=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2008, 151)), "./neo-c.h", 2008, 152))->memory, "./neo-c.h", 2008, 153)), "./neo-c.h", 2008, 154)),memory,sizeof(float)*size), come_pop_stackframe(), __exception_result_var_b31);
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 156)), "./neo-c.h", 2010, 157))->p=(float*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 158)), "./neo-c.h", 2010, 159))->memory, "./neo-c.h", 2010, 160)), "./neo-c.h", 2010, 161))->buf;
        __result21__ = __result_obj__ = self;
        return __result21__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b33;
struct buffer* __exception_result_var_b34;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2006, 164)), "./neo-c.h", 2006, 165))->memory=(come_push_stackframe("./neo-c.h", 2006, 167),__exception_result_var_b33=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 166))), come_pop_stackframe(), __exception_result_var_b33);
        (come_push_stackframe("./neo-c.h", 2008, 172),__exception_result_var_b34=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2008, 168)), "./neo-c.h", 2008, 169))->memory, "./neo-c.h", 2008, 170)), "./neo-c.h", 2008, 171)),memory,sizeof(double)*size), come_pop_stackframe(), __exception_result_var_b34);
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 173)), "./neo-c.h", 2010, 174))->p=(double*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 175)), "./neo-c.h", 2010, 176))->memory, "./neo-c.h", 2010, 177)), "./neo-c.h", 2010, 178))->buf;
        __result23__ = __result_obj__ = self;
        return __result23__;
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __exception_result_var_b36;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 109, 182)), "./neo-c.h", 109, 183))->head=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 110, 184)), "./neo-c.h", 110, 185))->tail=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 111, 186)), "./neo-c.h", 111, 187))->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            (come_push_stackframe("./neo-c.h", 114, 235),__exception_result_var_b36=list$1char_push_back(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 114, 188)), "./neo-c.h", 114, 189)),((char*)come_null_check(values, "./neo-c.h", 114, 234))[i_11]), come_pop_stackframe(), __exception_result_var_b36);
        }
        __result26__ = __result_obj__ = self;
        return __result26__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__;
_Bool _if_conditional1;
struct list_item$1char* litem_12;
_Bool _if_conditional2;
struct list_item$1char* litem_13;
struct list_item$1char* litem_14;
struct list$1char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1char*));
memset(&litem_13, 0, sizeof(struct list_item$1char*));
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                if(_if_conditional1=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 222, 190)), "./neo-c.h", 222, 191))->len==0,                _if_conditional1) {
                    litem_12=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 223, "list_item$1char");
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 225, 192)), "./neo-c.h", 225, 193))->prev=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 226, 194)), "./neo-c.h", 226, 195))->next=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 227, 196)), "./neo-c.h", 227, 197))->item=item;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 229, 198)), "./neo-c.h", 229, 199))->tail=litem_12;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 230, 200)), "./neo-c.h", 230, 201))->head=litem_12;
                }
                else {
                    if(_if_conditional2=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 232, 202)), "./neo-c.h", 232, 203))->len==1,                    _if_conditional2) {
                        litem_13=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 233, "list_item$1char");
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 235, 204)), "./neo-c.h", 235, 205))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 235, 206)), "./neo-c.h", 235, 207))->head;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 236, 208)), "./neo-c.h", 236, 209))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 237, 210)), "./neo-c.h", 237, 211))->item=item;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 239, 212)), "./neo-c.h", 239, 213))->tail=litem_13;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 240, 214)), "./neo-c.h", 240, 215))->head, "./neo-c.h", 240, 216)), "./neo-c.h", 240, 217))->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 243, "list_item$1char");
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 245, 218)), "./neo-c.h", 245, 219))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 245, 220)), "./neo-c.h", 245, 221))->tail;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 246, 222)), "./neo-c.h", 246, 223))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 247, 224)), "./neo-c.h", 247, 225))->item=item;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 249, 226)), "./neo-c.h", 249, 227))->tail, "./neo-c.h", 249, 228)), "./neo-c.h", 249, 229))->next=litem_14;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 250, 230)), "./neo-c.h", 250, 231))->tail=litem_14;
                    }
                }
                ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 253, 232)), "./neo-c.h", 253, 233))->len++;
                __result25__ = __result_obj__ = self;
                return __result25__;
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_15;
struct list$1short* __exception_result_var_b38;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_15, 0, sizeof(int));
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 109, 239)), "./neo-c.h", 109, 240))->head=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 110, 241)), "./neo-c.h", 110, 242))->tail=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 111, 243)), "./neo-c.h", 111, 244))->len=0;
        for(        i_15=0;        i_15<num_value;        i_15++        ){
            (come_push_stackframe("./neo-c.h", 114, 292),__exception_result_var_b38=list$1short_push_back(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 114, 245)), "./neo-c.h", 114, 246)),((short short*)come_null_check(values, "./neo-c.h", 114, 291))[i_15]), come_pop_stackframe(), __exception_result_var_b38);
        }
        __result29__ = __result_obj__ = self;
        return __result29__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__;
_Bool _if_conditional3;
struct list_item$1short* litem_16;
_Bool _if_conditional4;
struct list_item$1short* litem_17;
struct list_item$1short* litem_18;
struct list$1short* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1short*));
memset(&litem_17, 0, sizeof(struct list_item$1short*));
memset(&litem_18, 0, sizeof(struct list_item$1short*));
                if(_if_conditional3=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 222, 247)), "./neo-c.h", 222, 248))->len==0,                _if_conditional3) {
                    litem_16=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 223, "list_item$1short");
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_16, "./neo-c.h", 225, 249)), "./neo-c.h", 225, 250))->prev=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_16, "./neo-c.h", 226, 251)), "./neo-c.h", 226, 252))->next=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_16, "./neo-c.h", 227, 253)), "./neo-c.h", 227, 254))->item=item;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 229, 255)), "./neo-c.h", 229, 256))->tail=litem_16;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 230, 257)), "./neo-c.h", 230, 258))->head=litem_16;
                }
                else {
                    if(_if_conditional4=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 232, 259)), "./neo-c.h", 232, 260))->len==1,                    _if_conditional4) {
                        litem_17=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 233, "list_item$1short");
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_17, "./neo-c.h", 235, 261)), "./neo-c.h", 235, 262))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 235, 263)), "./neo-c.h", 235, 264))->head;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_17, "./neo-c.h", 236, 265)), "./neo-c.h", 236, 266))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_17, "./neo-c.h", 237, 267)), "./neo-c.h", 237, 268))->item=item;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 239, 269)), "./neo-c.h", 239, 270))->tail=litem_17;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 240, 271)), "./neo-c.h", 240, 272))->head, "./neo-c.h", 240, 273)), "./neo-c.h", 240, 274))->next=litem_17;
                    }
                    else {
                        litem_18=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 243, "list_item$1short");
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 245, 275)), "./neo-c.h", 245, 276))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 245, 277)), "./neo-c.h", 245, 278))->tail;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 246, 279)), "./neo-c.h", 246, 280))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 247, 281)), "./neo-c.h", 247, 282))->item=item;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 249, 283)), "./neo-c.h", 249, 284))->tail, "./neo-c.h", 249, 285)), "./neo-c.h", 249, 286))->next=litem_18;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 250, 287)), "./neo-c.h", 250, 288))->tail=litem_18;
                    }
                }
                ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 253, 289)), "./neo-c.h", 253, 290))->len++;
                __result28__ = __result_obj__ = self;
                return __result28__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_19;
struct list$1int* __exception_result_var_b40;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_19, 0, sizeof(int));
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 109, 296)), "./neo-c.h", 109, 297))->head=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 110, 298)), "./neo-c.h", 110, 299))->tail=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 111, 300)), "./neo-c.h", 111, 301))->len=0;
        for(        i_19=0;        i_19<num_value;        i_19++        ){
            (come_push_stackframe("./neo-c.h", 114, 349),__exception_result_var_b40=list$1int_push_back(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 114, 302)), "./neo-c.h", 114, 303)),((int*)come_null_check(values, "./neo-c.h", 114, 348))[i_19]), come_pop_stackframe(), __exception_result_var_b40);
        }
        __result32__ = __result_obj__ = self;
        return __result32__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__;
_Bool _if_conditional5;
struct list_item$1int* litem_20;
_Bool _if_conditional6;
struct list_item$1int* litem_21;
struct list_item$1int* litem_22;
struct list$1int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1int*));
memset(&litem_21, 0, sizeof(struct list_item$1int*));
memset(&litem_22, 0, sizeof(struct list_item$1int*));
                if(_if_conditional5=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 222, 304)), "./neo-c.h", 222, 305))->len==0,                _if_conditional5) {
                    litem_20=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 223, "list_item$1int");
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_20, "./neo-c.h", 225, 306)), "./neo-c.h", 225, 307))->prev=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_20, "./neo-c.h", 226, 308)), "./neo-c.h", 226, 309))->next=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_20, "./neo-c.h", 227, 310)), "./neo-c.h", 227, 311))->item=item;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 229, 312)), "./neo-c.h", 229, 313))->tail=litem_20;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 230, 314)), "./neo-c.h", 230, 315))->head=litem_20;
                }
                else {
                    if(_if_conditional6=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 232, 316)), "./neo-c.h", 232, 317))->len==1,                    _if_conditional6) {
                        litem_21=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 233, "list_item$1int");
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_21, "./neo-c.h", 235, 318)), "./neo-c.h", 235, 319))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 235, 320)), "./neo-c.h", 235, 321))->head;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_21, "./neo-c.h", 236, 322)), "./neo-c.h", 236, 323))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_21, "./neo-c.h", 237, 324)), "./neo-c.h", 237, 325))->item=item;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 239, 326)), "./neo-c.h", 239, 327))->tail=litem_21;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 240, 328)), "./neo-c.h", 240, 329))->head, "./neo-c.h", 240, 330)), "./neo-c.h", 240, 331))->next=litem_21;
                    }
                    else {
                        litem_22=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 243, "list_item$1int");
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_22, "./neo-c.h", 245, 332)), "./neo-c.h", 245, 333))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 245, 334)), "./neo-c.h", 245, 335))->tail;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_22, "./neo-c.h", 246, 336)), "./neo-c.h", 246, 337))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_22, "./neo-c.h", 247, 338)), "./neo-c.h", 247, 339))->item=item;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 249, 340)), "./neo-c.h", 249, 341))->tail, "./neo-c.h", 249, 342)), "./neo-c.h", 249, 343))->next=litem_22;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 250, 344)), "./neo-c.h", 250, 345))->tail=litem_22;
                    }
                }
                ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 253, 346)), "./neo-c.h", 253, 347))->len++;
                __result31__ = __result_obj__ = self;
                return __result31__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_23;
struct list$1long* __exception_result_var_b42;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 109, 353)), "./neo-c.h", 109, 354))->head=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 110, 355)), "./neo-c.h", 110, 356))->tail=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 111, 357)), "./neo-c.h", 111, 358))->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            (come_push_stackframe("./neo-c.h", 114, 406),__exception_result_var_b42=list$1long_push_back(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 114, 359)), "./neo-c.h", 114, 360)),((long*)come_null_check(values, "./neo-c.h", 114, 405))[i_23]), come_pop_stackframe(), __exception_result_var_b42);
        }
        __result35__ = __result_obj__ = self;
        return __result35__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__;
_Bool _if_conditional7;
struct list_item$1long* litem_24;
_Bool _if_conditional8;
struct list_item$1long* litem_25;
struct list_item$1long* litem_26;
struct list$1long* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1long*));
memset(&litem_25, 0, sizeof(struct list_item$1long*));
memset(&litem_26, 0, sizeof(struct list_item$1long*));
                if(_if_conditional7=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 222, 361)), "./neo-c.h", 222, 362))->len==0,                _if_conditional7) {
                    litem_24=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 223, "list_item$1long");
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_24, "./neo-c.h", 225, 363)), "./neo-c.h", 225, 364))->prev=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_24, "./neo-c.h", 226, 365)), "./neo-c.h", 226, 366))->next=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_24, "./neo-c.h", 227, 367)), "./neo-c.h", 227, 368))->item=item;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 229, 369)), "./neo-c.h", 229, 370))->tail=litem_24;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 230, 371)), "./neo-c.h", 230, 372))->head=litem_24;
                }
                else {
                    if(_if_conditional8=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 232, 373)), "./neo-c.h", 232, 374))->len==1,                    _if_conditional8) {
                        litem_25=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 233, "list_item$1long");
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_25, "./neo-c.h", 235, 375)), "./neo-c.h", 235, 376))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 235, 377)), "./neo-c.h", 235, 378))->head;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_25, "./neo-c.h", 236, 379)), "./neo-c.h", 236, 380))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_25, "./neo-c.h", 237, 381)), "./neo-c.h", 237, 382))->item=item;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 239, 383)), "./neo-c.h", 239, 384))->tail=litem_25;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 240, 385)), "./neo-c.h", 240, 386))->head, "./neo-c.h", 240, 387)), "./neo-c.h", 240, 388))->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 243, "list_item$1long");
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_26, "./neo-c.h", 245, 389)), "./neo-c.h", 245, 390))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 245, 391)), "./neo-c.h", 245, 392))->tail;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_26, "./neo-c.h", 246, 393)), "./neo-c.h", 246, 394))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_26, "./neo-c.h", 247, 395)), "./neo-c.h", 247, 396))->item=item;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 249, 397)), "./neo-c.h", 249, 398))->tail, "./neo-c.h", 249, 399)), "./neo-c.h", 249, 400))->next=litem_26;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 250, 401)), "./neo-c.h", 250, 402))->tail=litem_26;
                    }
                }
                ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 253, 403)), "./neo-c.h", 253, 404))->len++;
                __result34__ = __result_obj__ = self;
                return __result34__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_27;
struct list$1float* __exception_result_var_b44;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_27, 0, sizeof(int));
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 109, 410)), "./neo-c.h", 109, 411))->head=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 110, 412)), "./neo-c.h", 110, 413))->tail=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 111, 414)), "./neo-c.h", 111, 415))->len=0;
        for(        i_27=0;        i_27<num_value;        i_27++        ){
            (come_push_stackframe("./neo-c.h", 114, 463),__exception_result_var_b44=list$1float_push_back(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 114, 416)), "./neo-c.h", 114, 417)),((float*)come_null_check(values, "./neo-c.h", 114, 462))[i_27]), come_pop_stackframe(), __exception_result_var_b44);
        }
        __result38__ = __result_obj__ = self;
        return __result38__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__;
_Bool _if_conditional9;
struct list_item$1float* litem_28;
_Bool _if_conditional10;
struct list_item$1float* litem_29;
struct list_item$1float* litem_30;
struct list$1float* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1float*));
memset(&litem_29, 0, sizeof(struct list_item$1float*));
memset(&litem_30, 0, sizeof(struct list_item$1float*));
                if(_if_conditional9=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 222, 418)), "./neo-c.h", 222, 419))->len==0,                _if_conditional9) {
                    litem_28=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 223, "list_item$1float");
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_28, "./neo-c.h", 225, 420)), "./neo-c.h", 225, 421))->prev=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_28, "./neo-c.h", 226, 422)), "./neo-c.h", 226, 423))->next=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_28, "./neo-c.h", 227, 424)), "./neo-c.h", 227, 425))->item=item;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 229, 426)), "./neo-c.h", 229, 427))->tail=litem_28;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 230, 428)), "./neo-c.h", 230, 429))->head=litem_28;
                }
                else {
                    if(_if_conditional10=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 232, 430)), "./neo-c.h", 232, 431))->len==1,                    _if_conditional10) {
                        litem_29=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 233, "list_item$1float");
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_29, "./neo-c.h", 235, 432)), "./neo-c.h", 235, 433))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 235, 434)), "./neo-c.h", 235, 435))->head;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_29, "./neo-c.h", 236, 436)), "./neo-c.h", 236, 437))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_29, "./neo-c.h", 237, 438)), "./neo-c.h", 237, 439))->item=item;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 239, 440)), "./neo-c.h", 239, 441))->tail=litem_29;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 240, 442)), "./neo-c.h", 240, 443))->head, "./neo-c.h", 240, 444)), "./neo-c.h", 240, 445))->next=litem_29;
                    }
                    else {
                        litem_30=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 243, "list_item$1float");
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_30, "./neo-c.h", 245, 446)), "./neo-c.h", 245, 447))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 245, 448)), "./neo-c.h", 245, 449))->tail;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_30, "./neo-c.h", 246, 450)), "./neo-c.h", 246, 451))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_30, "./neo-c.h", 247, 452)), "./neo-c.h", 247, 453))->item=item;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 249, 454)), "./neo-c.h", 249, 455))->tail, "./neo-c.h", 249, 456)), "./neo-c.h", 249, 457))->next=litem_30;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 250, 458)), "./neo-c.h", 250, 459))->tail=litem_30;
                    }
                }
                ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 253, 460)), "./neo-c.h", 253, 461))->len++;
                __result37__ = __result_obj__ = self;
                return __result37__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_31;
struct list$1double* __exception_result_var_b46;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_31, 0, sizeof(int));
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 109, 467)), "./neo-c.h", 109, 468))->head=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 110, 469)), "./neo-c.h", 110, 470))->tail=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 111, 471)), "./neo-c.h", 111, 472))->len=0;
        for(        i_31=0;        i_31<num_value;        i_31++        ){
            (come_push_stackframe("./neo-c.h", 114, 520),__exception_result_var_b46=list$1double_push_back(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 114, 473)), "./neo-c.h", 114, 474)),((double*)come_null_check(values, "./neo-c.h", 114, 519))[i_31]), come_pop_stackframe(), __exception_result_var_b46);
        }
        __result41__ = __result_obj__ = self;
        return __result41__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__;
_Bool _if_conditional11;
struct list_item$1double* litem_32;
_Bool _if_conditional12;
struct list_item$1double* litem_33;
struct list_item$1double* litem_34;
struct list$1double* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1double*));
memset(&litem_33, 0, sizeof(struct list_item$1double*));
memset(&litem_34, 0, sizeof(struct list_item$1double*));
                if(_if_conditional11=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 222, 475)), "./neo-c.h", 222, 476))->len==0,                _if_conditional11) {
                    litem_32=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 223, "list_item$1double");
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_32, "./neo-c.h", 225, 477)), "./neo-c.h", 225, 478))->prev=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_32, "./neo-c.h", 226, 479)), "./neo-c.h", 226, 480))->next=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_32, "./neo-c.h", 227, 481)), "./neo-c.h", 227, 482))->item=item;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 229, 483)), "./neo-c.h", 229, 484))->tail=litem_32;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 230, 485)), "./neo-c.h", 230, 486))->head=litem_32;
                }
                else {
                    if(_if_conditional12=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 232, 487)), "./neo-c.h", 232, 488))->len==1,                    _if_conditional12) {
                        litem_33=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 233, "list_item$1double");
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_33, "./neo-c.h", 235, 489)), "./neo-c.h", 235, 490))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 235, 491)), "./neo-c.h", 235, 492))->head;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_33, "./neo-c.h", 236, 493)), "./neo-c.h", 236, 494))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_33, "./neo-c.h", 237, 495)), "./neo-c.h", 237, 496))->item=item;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 239, 497)), "./neo-c.h", 239, 498))->tail=litem_33;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 240, 499)), "./neo-c.h", 240, 500))->head, "./neo-c.h", 240, 501)), "./neo-c.h", 240, 502))->next=litem_33;
                    }
                    else {
                        litem_34=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 243, "list_item$1double");
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_34, "./neo-c.h", 245, 503)), "./neo-c.h", 245, 504))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 245, 505)), "./neo-c.h", 245, 506))->tail;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_34, "./neo-c.h", 246, 507)), "./neo-c.h", 246, 508))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_34, "./neo-c.h", 247, 509)), "./neo-c.h", 247, 510))->item=item;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 249, 511)), "./neo-c.h", 249, 512))->tail, "./neo-c.h", 249, 513)), "./neo-c.h", 249, 514))->next=litem_34;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 250, 515)), "./neo-c.h", 250, 516))->tail=litem_34;
                    }
                }
                ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 253, 517)), "./neo-c.h", 253, 518))->len++;
                __result40__ = __result_obj__ = self;
                return __result40__;
}



















































void regex_finalizer(void* obj, void* client_data){
void* __result_obj__;
struct come_regex* self_35;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&self_35, 0, sizeof(struct come_regex*));
    self_35=obj;
    if(_if_conditional13=self_35&&((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self_35, "libneo-c-str-gc.c", 10, 570)), "libneo-c-str-gc.c", 10, 571))->re,    _if_conditional13) {
        (come_push_stackframe("libneo-c-str-gc.c", 11,574),free(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self_35, "libneo-c-str-gc.c", 11, 572)), "libneo-c-str-gc.c", 11, 573))->re),come_pop_stackframe());
    }
}

struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
const char* err_36;
int erro_ofs_37;
int options_38;
char* __exception_result_var_b94;
struct real_pcre8_or_16* __exception_result_var_b95;
_Bool _if_conditional14;
int __exception_result_var_b96;
_Bool _if_conditional15;
struct come_regex* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_36, 0, sizeof(const char*));
memset(&erro_ofs_37, 0, sizeof(int));
memset(&options_38, 0, sizeof(int));
    options_38=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str-gc.c", 22, 575)), "libneo-c-str-gc.c", 22, 576))->str=(come_push_stackframe("libneo-c-str-gc.c", 22, 577),__exception_result_var_b94=__builtin_string(str), come_pop_stackframe(), __exception_result_var_b94);
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str-gc.c", 24, 578)), "libneo-c-str-gc.c", 24, 579))->ignore_case=ignore_case;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str-gc.c", 25, 580)), "libneo-c-str-gc.c", 25, 581))->multiline=multiline;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str-gc.c", 26, 582)), "libneo-c-str-gc.c", 26, 583))->global=global;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str-gc.c", 27, 584)), "libneo-c-str-gc.c", 27, 585))->extended=extended;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str-gc.c", 28, 586)), "libneo-c-str-gc.c", 28, 587))->dotall=dotall;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str-gc.c", 29, 588)), "libneo-c-str-gc.c", 29, 589))->anchored=anchored;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str-gc.c", 30, 590)), "libneo-c-str-gc.c", 30, 591))->dollar_endonly=dollar_endonly;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str-gc.c", 32, 594)), "libneo-c-str-gc.c", 32, 595))->options=options_38;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str-gc.c", 34, 596)), "libneo-c-str-gc.c", 34, 597))->re=(come_push_stackframe("libneo-c-str-gc.c", 34, 598),__exception_result_var_b95=pcre_compile(str,options_38,&err_36,&erro_ofs_37,((void*)0)), come_pop_stackframe(), __exception_result_var_b95);
    if(_if_conditional14=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str-gc.c", 36, 599)), "libneo-c-str-gc.c", 36, 600))->re==((void*)0),    _if_conditional14) {
        (come_push_stackframe("libneo-c-str-gc.c", 37, 601),__exception_result_var_b96=printf("regex error (%s)\n",str), come_pop_stackframe(), __exception_result_var_b96);
        (come_push_stackframe("libneo-c-str-gc.c", 38,602),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c-str-gc.c", 39,603),exit(1),come_pop_stackframe());
    }
    if(gComeGCLib) {
        (come_push_stackframe("libneo-c-str-gc.c", 43,604),GC_register_finalizer(self,regex_finalizer,((void*)0),((void*)0),((void*)0)),come_pop_stackframe());
    }
    __result94__ = __result_obj__ = self;
    return __result94__;
}

void come_regex_finalize(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional16;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional16=reg&&((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 51, 605)), "libneo-c-str-gc.c", 51, 606))->str,    _if_conditional16) {
    }
    if(_if_conditional17=reg&&((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 54, 609)), "libneo-c-str-gc.c", 54, 610))->re,    _if_conditional17) {
        (come_push_stackframe("libneo-c-str-gc.c", 55,613),free(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 55, 611)), "libneo-c-str-gc.c", 55, 612))->re),come_pop_stackframe());
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
struct come_regex* __exception_result_var_b97;
struct come_regex* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 61, 615),__exception_result_var_b97=come_regex_initialize(((struct come_regex*)come_null_check((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str-gc.c", 61, "come_regex"), "libneo-c-str-gc.c", 61, 614)),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy), come_pop_stackframe(), __exception_result_var_b97);
    return __result95__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
struct come_regex* __exception_result_var_b98;
struct come_regex* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    __result96__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 66, 617),__exception_result_var_b98=come_regex_initialize(((struct come_regex*)come_null_check((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str-gc.c", 66, "come_regex"), "libneo-c-str-gc.c", 66, 616)),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy), come_pop_stackframe(), __exception_result_var_b98);
    return __result96__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional18;
struct come_regex* __result97__;
struct come_regex* result_39;
char* __exception_result_var_b99;
const char* err_40;
int erro_ofs_41;
struct real_pcre8_or_16* __exception_result_var_b100;
_Bool _if_conditional19;
int __exception_result_var_b101;
struct come_regex* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_39, 0, sizeof(struct come_regex*));
memset(&err_40, 0, sizeof(const char*));
memset(&erro_ofs_41, 0, sizeof(int));
    if(_if_conditional18=reg==((void*)0),    _if_conditional18) {
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    result_39=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str-gc.c", 76, "come_regex");
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 78, 618)), "libneo-c-str-gc.c", 78, 619))->str=(come_push_stackframe("libneo-c-str-gc.c", 78, 622),__exception_result_var_b99=string_clone(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 78, 620)), "libneo-c-str-gc.c", 78, 621))->str), come_pop_stackframe(), __exception_result_var_b99);
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 80, 623)), "libneo-c-str-gc.c", 80, 624))->ignore_case=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 80, 625)), "libneo-c-str-gc.c", 80, 626))->ignore_case;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 81, 627)), "libneo-c-str-gc.c", 81, 628))->multiline=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 81, 629)), "libneo-c-str-gc.c", 81, 630))->multiline;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 82, 631)), "libneo-c-str-gc.c", 82, 632))->global=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 82, 633)), "libneo-c-str-gc.c", 82, 634))->global;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 83, 635)), "libneo-c-str-gc.c", 83, 636))->extended=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 83, 637)), "libneo-c-str-gc.c", 83, 638))->extended;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 84, 639)), "libneo-c-str-gc.c", 84, 640))->dotall=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 84, 641)), "libneo-c-str-gc.c", 84, 642))->dotall;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 85, 643)), "libneo-c-str-gc.c", 85, 644))->anchored=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 85, 645)), "libneo-c-str-gc.c", 85, 646))->anchored;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 86, 647)), "libneo-c-str-gc.c", 86, 648))->dollar_endonly=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 86, 649)), "libneo-c-str-gc.c", 86, 650))->dollar_endonly;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 87, 651)), "libneo-c-str-gc.c", 87, 652))->ungreedy=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 87, 653)), "libneo-c-str-gc.c", 87, 654))->ungreedy;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 89, 655)), "libneo-c-str-gc.c", 89, 656))->options=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 89, 657)), "libneo-c-str-gc.c", 89, 658))->options;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 94, 659)), "libneo-c-str-gc.c", 94, 660))->re=(come_push_stackframe("libneo-c-str-gc.c", 94, 665),__exception_result_var_b100=pcre_compile(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 94, 661)), "libneo-c-str-gc.c", 94, 662))->str,((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 94, 663)), "libneo-c-str-gc.c", 94, 664))->options,&err_40,&erro_ofs_41,((void*)0)), come_pop_stackframe(), __exception_result_var_b100);
    if(_if_conditional19=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 96, 666)), "libneo-c-str-gc.c", 96, 667))->re==((void*)0),    _if_conditional19) {
        (come_push_stackframe("libneo-c-str-gc.c", 97, 670),__exception_result_var_b101=printf("regex compile error(%s)\n",((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_39, "libneo-c-str-gc.c", 97, 668)), "libneo-c-str-gc.c", 97, 669))->str), come_pop_stackframe(), __exception_result_var_b101);
        (come_push_stackframe("libneo-c-str-gc.c", 98,671),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c-str-gc.c", 99,672),exit(1),come_pop_stackframe());
    }
    __result98__ = __result_obj__ = result_39;
    return __result98__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
char* __exception_result_var_b102;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
    __result99__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 107, 675),__exception_result_var_b102=__builtin_string(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(regex, "libneo-c-str-gc.c", 107, 673)), "libneo-c-str-gc.c", 107, 674))->str), come_pop_stackframe(), __exception_result_var_b102);
    return __result99__;
}

char* string_lower_case(char* str){
void* __result_obj__;
char* __exception_result_var_b103;
char* result_42;
int i_43;
unsigned long int __exception_result_var_b104;
_Bool _if_conditional20;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_42, 0, sizeof(char*));
memset(&i_43, 0, sizeof(int));
    result_42=(come_push_stackframe("libneo-c-str-gc.c", 112, 676),__exception_result_var_b103=__builtin_string(str), come_pop_stackframe(), __exception_result_var_b103);
    for(    i_43=0;    i_43<(come_push_stackframe("libneo-c-str-gc.c", 113, 677),__exception_result_var_b104=strlen(str), come_pop_stackframe(), __exception_result_var_b104);    i_43++    ){
        if(_if_conditional20=((char*)come_null_check(str, "libneo-c-str-gc.c", 114, 678))[i_43]>=65&&((char*)come_null_check(str, "libneo-c-str-gc.c", 114, 679))[i_43]<=90,        _if_conditional20) {
            ((char*)come_null_check(result_42, "libneo-c-str-gc.c", 115, 680))[i_43]=((char*)come_null_check(str, "libneo-c-str-gc.c", 115, 681))[i_43]-65+97;
        }
    }
    __result100__ = __result_obj__ = result_42;
    return __result100__;
}

char* string_upper_case(char* str){
void* __result_obj__;
char* __exception_result_var_b105;
char* result_44;
int i_45;
unsigned long int __exception_result_var_b106;
_Bool _if_conditional21;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_44, 0, sizeof(char*));
memset(&i_45, 0, sizeof(int));
    result_44=(come_push_stackframe("libneo-c-str-gc.c", 124, 682),__exception_result_var_b105=__builtin_string(str), come_pop_stackframe(), __exception_result_var_b105);
    for(    i_45=0;    i_45<(come_push_stackframe("libneo-c-str-gc.c", 125, 683),__exception_result_var_b106=strlen(str), come_pop_stackframe(), __exception_result_var_b106);    i_45++    ){
        if(_if_conditional21=((char*)come_null_check(str, "libneo-c-str-gc.c", 126, 684))[i_45]>=97&&((char*)come_null_check(str, "libneo-c-str-gc.c", 126, 685))[i_45]<=122,        _if_conditional21) {
            ((char*)come_null_check(result_44, "libneo-c-str-gc.c", 127, 686))[i_45]=((char*)come_null_check(str, "libneo-c-str-gc.c", 127, 687))[i_45]-97+65;
        }
    }
    __result101__ = __result_obj__ = result_44;
    return __result101__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional22;
unsigned int* __exception_result_var_b107;
unsigned int* __result102__;
unsigned long int __exception_result_var_b108;
int len_46;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
unsigned int* __exception_result_var_b109;
unsigned int* __result103__;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
unsigned int* __exception_result_var_b110;
unsigned int* __result104__;
_Bool _if_conditional29;
unsigned int* __exception_result_var_b111;
unsigned int* __result105__;
unsigned int* result_47;
void* __exception_result_var_b112;
unsigned int* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_46, 0, sizeof(int));
memset(&result_47, 0, sizeof(unsigned int*));
    if(_if_conditional22=str==((void*)0),    _if_conditional22) {
        __result102__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 139, 688),__exception_result_var_b107=__builtin_wstring(""), come_pop_stackframe(), __exception_result_var_b107);
        return __result102__;
    }
    len_46=(come_push_stackframe("libneo-c-str-gc.c", 142, 689),__exception_result_var_b108=wcslen(str), come_pop_stackframe(), __exception_result_var_b108);
    if(_if_conditional23=head<0,    _if_conditional23) {
        head+=len_46;
    }
    if(_if_conditional24=tail<0,    _if_conditional24) {
        tail+=len_46+1;
    }
    if(_if_conditional25=head>tail,    _if_conditional25) {
        __result103__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 152, 690),__exception_result_var_b109=__builtin_wstring(""), come_pop_stackframe(), __exception_result_var_b109);
        return __result103__;
    }
    if(_if_conditional26=head<0,    _if_conditional26) {
        head=0;
    }
    if(_if_conditional27=tail>=len_46,    _if_conditional27) {
        tail=len_46;
    }
    if(_if_conditional28=head==tail,    _if_conditional28) {
        __result104__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 164, 691),__exception_result_var_b110=__builtin_wstring(""), come_pop_stackframe(), __exception_result_var_b110);
        return __result104__;
    }
    if(_if_conditional29=tail-head+1<1,    _if_conditional29) {
        __result105__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 168, 692),__exception_result_var_b111=__builtin_wstring(""), come_pop_stackframe(), __exception_result_var_b111);
        return __result105__;
    }
    result_47=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libneo-c-str-gc.c", 171, "int");
    (come_push_stackframe("libneo-c-str-gc.c", 173, 693),__exception_result_var_b112=memcpy(result_47,str+head,sizeof(unsigned int)*(tail-head)), come_pop_stackframe(), __exception_result_var_b112);
    ((unsigned int*)come_null_check(result_47, "libneo-c-str-gc.c", 174, 694))[tail-head]=0;
    __result106__ = __result_obj__ = result_47;
    return __result106__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool _if_conditional30;
unsigned int* __result107__;
unsigned long int __exception_result_var_b113;
int len_48;
unsigned int* wstr_49;
unsigned long int __exception_result_var_b114;
int ret_50;
_Bool _if_conditional31;
unsigned int* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_48, 0, sizeof(int));
memset(&wstr_49, 0, sizeof(unsigned int*));
memset(&ret_50, 0, sizeof(int));
    if(_if_conditional30=str==((void*)0),    _if_conditional30) {
        __result107__ = __result_obj__ = ((void*)0);
        return __result107__;
    }
    len_48=(come_push_stackframe("libneo-c-str-gc.c", 184, 695),__exception_result_var_b113=strlen(str), come_pop_stackframe(), __exception_result_var_b113);
    wstr_49=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_48+1)), "libneo-c-str-gc.c", 186, "int");
    ret_50=(come_push_stackframe("libneo-c-str-gc.c", 188, 696),__exception_result_var_b114=mbstowcs(wstr_49,str,len_48+1), come_pop_stackframe(), __exception_result_var_b114);
    ((unsigned int*)come_null_check(wstr_49, "libneo-c-str-gc.c", 189, 697))[ret_50]=0;
    if(_if_conditional31=ret_50<0,    _if_conditional31) {
        ((unsigned int*)come_null_check(wstr_49, "libneo-c-str-gc.c", 192, 698))[0]=0;
    }
    __result108__ = __result_obj__ = wstr_49;
    return __result108__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int n_51;
unsigned long int __exception_result_var_b115;
int len_52;
int i_53;
unsigned long int __exception_result_var_b116;
int len2_54;
int j_55;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
int __result109__;
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_51, 0, sizeof(int));
memset(&len_52, 0, sizeof(int));
memset(&i_53, 0, sizeof(int));
memset(&len2_54, 0, sizeof(int));
memset(&j_55, 0, sizeof(int));
    n_51=0;
    len_52=(come_push_stackframe("libneo-c-str-gc.c", 201, 699),__exception_result_var_b115=strlen(str), come_pop_stackframe(), __exception_result_var_b115);
    for(    i_53=0;    i_53<len_52;    i_53++    ){
        len2_54=(come_push_stackframe("libneo-c-str-gc.c", 203, 700),__exception_result_var_b116=strlen(search_str), come_pop_stackframe(), __exception_result_var_b116);
        for(        j_55=0;        j_55<len2_54;        j_55++        ){
            if(_if_conditional32=((char*)come_null_check(str, "libneo-c-str-gc.c", 206, 701))[i_53+j_55]!=((char*)come_null_check(search_str, "libneo-c-str-gc.c", 206, 702))[j_55],            _if_conditional32) {
                break;
            }
        }
        if(_if_conditional33=j_55==len2_54,        _if_conditional33) {
            n_51++;
            if(_if_conditional34=n_51==count,            _if_conditional34) {
                __result109__ = i_53;
                return __result109__;
            }
        }
    }
    __result110__ = default_value;
    return __result110__;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int ovec_max_56;
int result_60;
int offset_61;
const char* err_62;
int erro_ofs_63;
int options_64;
char* str_65;
struct real_pcre8_or_16* re_66;
int n_67;
_Bool _while_condtional1;
int options_68;
unsigned long int __exception_result_var_b117;
int len_69;
int __exception_result_var_b118;
int regex_result_70;
int i_71;
int i_72;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_56, 0, sizeof(int));
memset(&result_60, 0, sizeof(int));
memset(&offset_61, 0, sizeof(int));
memset(&err_62, 0, sizeof(const char*));
memset(&erro_ofs_63, 0, sizeof(int));
memset(&options_64, 0, sizeof(int));
memset(&str_65, 0, sizeof(char*));
memset(&re_66, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_67, 0, sizeof(int));
memset(&options_68, 0, sizeof(int));
memset(&len_69, 0, sizeof(int));
memset(&regex_result_70, 0, sizeof(int));
memset(&i_71, 0, sizeof(int));
memset(&i_72, 0, sizeof(int));
    ovec_max_56=16;
    int start_57[ovec_max_56];
    memset(&start_57, 0, sizeof(int)    *(ovec_max_56)    );
    int end_58[ovec_max_56];
    memset(&end_58, 0, sizeof(int)    *(ovec_max_56)    );
    int ovec_value_59[ovec_max_56*3];
    memset(&ovec_value_59, 0, sizeof(int)    *(ovec_max_56*3)    );
    result_60=default_value;
    offset_61=0;
    options_64=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 237, 703)), "libneo-c-str-gc.c", 237, 704))->options;
    str_65=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 238, 705)), "libneo-c-str-gc.c", 238, 706))->str;
    re_66=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 240, 707)), "libneo-c-str-gc.c", 240, 708))->re;
    n_67=0;
    while(_while_condtional1=(_Bool)1,    _while_condtional1) {
        options_68=2097152;
        len_69=(come_push_stackframe("libneo-c-str-gc.c", 246, 709),__exception_result_var_b117=strlen(self), come_pop_stackframe(), __exception_result_var_b117);
        regex_result_70=(come_push_stackframe("libneo-c-str-gc.c", 247, 710),__exception_result_var_b118=pcre_exec(re_66,(struct pcre_extra*)0,self,len_69,offset_61,options_68,ovec_value_59,ovec_max_56*3), come_pop_stackframe(), __exception_result_var_b118);
        for(        i_71=0;        i_71<ovec_max_56;        i_71++        ){
            (come_range_check(&((int*)come_null_check(start_57, "libneo-c-str-gc.c", 250, 711))[i_71],((int*)come_null_check(start_57, "libneo-c-str-gc.c", 250, 711)),((int*)come_null_check(start_57, "libneo-c-str-gc.c", 250, 711))+(ovec_max_56), "libneo-c-str-gc.c", 250), ((int*)come_null_check(start_57, "libneo-c-str-gc.c", 250, 711))[i_71]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_59, "libneo-c-str-gc.c", 250, 712))[i_71*2],((int*)come_null_check(ovec_value_59, "libneo-c-str-gc.c", 250, 712)),((int*)come_null_check(ovec_value_59, "libneo-c-str-gc.c", 250, 712))+(ovec_max_56*3), "libneo-c-str-gc.c", 250));
        }
        for(        i_72=0;        i_72<ovec_max_56;        i_72++        ){
            (come_range_check(&((int*)come_null_check(end_58, "libneo-c-str-gc.c", 253, 713))[i_72],((int*)come_null_check(end_58, "libneo-c-str-gc.c", 253, 713)),((int*)come_null_check(end_58, "libneo-c-str-gc.c", 253, 713))+(ovec_max_56), "libneo-c-str-gc.c", 253), ((int*)come_null_check(end_58, "libneo-c-str-gc.c", 253, 713))[i_72]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_59, "libneo-c-str-gc.c", 253, 714))[i_72*2+1],((int*)come_null_check(ovec_value_59, "libneo-c-str-gc.c", 253, 714)),((int*)come_null_check(ovec_value_59, "libneo-c-str-gc.c", 253, 714))+(ovec_max_56*3), "libneo-c-str-gc.c", 253));
        }
        if(_if_conditional35=regex_result_70>0,        _if_conditional35) {
            n_67++;
            if(_if_conditional36=offset_61==*(int*)come_range_check(&((int*)come_null_check(end_58, "libneo-c-str-gc.c", 260, 715))[0],((int*)come_null_check(end_58, "libneo-c-str-gc.c", 260, 715)),((int*)come_null_check(end_58, "libneo-c-str-gc.c", 260, 715))+(ovec_max_56), "libneo-c-str-gc.c", 260),            _if_conditional36) {
                offset_61++;
            }
            else {
                offset_61=*(int*)come_range_check(&((int*)come_null_check(end_58, "libneo-c-str-gc.c", 264, 716))[0],((int*)come_null_check(end_58, "libneo-c-str-gc.c", 264, 716)),((int*)come_null_check(end_58, "libneo-c-str-gc.c", 264, 716))+(ovec_max_56), "libneo-c-str-gc.c", 264);
            }
            if(_if_conditional37=n_67==count,            _if_conditional37) {
                result_60=*(int*)come_range_check(&((int*)come_null_check(start_57, "libneo-c-str-gc.c", 268, 717))[0],((int*)come_null_check(start_57, "libneo-c-str-gc.c", 268, 717)),((int*)come_null_check(start_57, "libneo-c-str-gc.c", 268, 717))+(ovec_max_56), "libneo-c-str-gc.c", 268);
                break;
            }
        }
        else {
            break;
        }
    }
    __result111__ = result_60;
    return __result111__;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
unsigned long int __exception_result_var_b119;
int len_73;
unsigned long int __exception_result_var_b120;
char* p_74;
_Bool _while_condtional2;
int __exception_result_var_b121;
_Bool _if_conditional38;
int __result112__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_73, 0, sizeof(int));
memset(&p_74, 0, sizeof(char*));
    len_73=(come_push_stackframe("libneo-c-str-gc.c", 285, 718),__exception_result_var_b119=strlen(search_str), come_pop_stackframe(), __exception_result_var_b119);
    p_74=str+(come_push_stackframe("libneo-c-str-gc.c", 286, 719),__exception_result_var_b120=strlen(str), come_pop_stackframe(), __exception_result_var_b120)-len_73;
    while(_while_condtional2=p_74>=str,    _while_condtional2) {
        if(_if_conditional38=(come_push_stackframe("libneo-c-str-gc.c", 289, 720),__exception_result_var_b121=strncmp(p_74,search_str,len_73), come_pop_stackframe(), __exception_result_var_b121)==0,        _if_conditional38) {
            __result112__ = p_74-str;
            return __result112__;
        }
        p_74--;
    }
    __result113__ = default_value;
    return __result113__;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
const char* err_75;
int erro_ofs_76;
int options_77;
char* str_78;
struct real_pcre8_or_16* re_79;
char* __exception_result_var_b122;
char* self2_80;
int ovec_max_81;
int result_85;
int offset_86;
_Bool _while_condtional3;
int options_87;
unsigned long int __exception_result_var_b123;
int len_88;
int __exception_result_var_b124;
int regex_result_89;
int i_90;
int i_91;
_Bool _if_conditional39;
unsigned long int __exception_result_var_b125;
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_75, 0, sizeof(const char*));
memset(&erro_ofs_76, 0, sizeof(int));
memset(&options_77, 0, sizeof(int));
memset(&str_78, 0, sizeof(char*));
memset(&re_79, 0, sizeof(struct real_pcre8_or_16*));
memset(&self2_80, 0, sizeof(char*));
memset(&ovec_max_81, 0, sizeof(int));
memset(&result_85, 0, sizeof(int));
memset(&offset_86, 0, sizeof(int));
memset(&options_87, 0, sizeof(int));
memset(&len_88, 0, sizeof(int));
memset(&regex_result_89, 0, sizeof(int));
memset(&i_90, 0, sizeof(int));
memset(&i_91, 0, sizeof(int));
    options_77=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 304, 721)), "libneo-c-str-gc.c", 304, 722))->options;
    str_78=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 305, 723)), "libneo-c-str-gc.c", 305, 724))->str;
    re_79=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 307, 725)), "libneo-c-str-gc.c", 307, 726))->re;
    self2_80=(come_push_stackframe("libneo-c-str-gc.c", 309, 729),__exception_result_var_b122=charp_reverse(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 309, 727)), "libneo-c-str-gc.c", 309, 728))), come_pop_stackframe(), __exception_result_var_b122);
    ovec_max_81=16;
    int start_82[ovec_max_81];
    memset(&start_82, 0, sizeof(int)    *(ovec_max_81)    );
    int end_83[ovec_max_81];
    memset(&end_83, 0, sizeof(int)    *(ovec_max_81)    );
    int ovec_value_84[ovec_max_81*3];
    memset(&ovec_value_84, 0, sizeof(int)    *(ovec_max_81*3)    );
    result_85=default_value;
    offset_86=0;
    while(_while_condtional3=(_Bool)1,    _while_condtional3) {
        options_87=2097152;
        len_88=(come_push_stackframe("libneo-c-str-gc.c", 322, 730),__exception_result_var_b123=strlen(self2_80), come_pop_stackframe(), __exception_result_var_b123);
        regex_result_89=(come_push_stackframe("libneo-c-str-gc.c", 323, 731),__exception_result_var_b124=pcre_exec(re_79,(struct pcre_extra*)0,self2_80,len_88,offset_86,options_87,ovec_value_84,ovec_max_81*3), come_pop_stackframe(), __exception_result_var_b124);
        for(        i_90=0;        i_90<ovec_max_81;        i_90++        ){
            (come_range_check(&((int*)come_null_check(start_82, "libneo-c-str-gc.c", 326, 732))[i_90],((int*)come_null_check(start_82, "libneo-c-str-gc.c", 326, 732)),((int*)come_null_check(start_82, "libneo-c-str-gc.c", 326, 732))+(ovec_max_81), "libneo-c-str-gc.c", 326), ((int*)come_null_check(start_82, "libneo-c-str-gc.c", 326, 732))[i_90]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_84, "libneo-c-str-gc.c", 326, 733))[i_90*2],((int*)come_null_check(ovec_value_84, "libneo-c-str-gc.c", 326, 733)),((int*)come_null_check(ovec_value_84, "libneo-c-str-gc.c", 326, 733))+(ovec_max_81*3), "libneo-c-str-gc.c", 326));
        }
        for(        i_91=0;        i_91<ovec_max_81;        i_91++        ){
            (come_range_check(&((int*)come_null_check(end_83, "libneo-c-str-gc.c", 329, 734))[i_91],((int*)come_null_check(end_83, "libneo-c-str-gc.c", 329, 734)),((int*)come_null_check(end_83, "libneo-c-str-gc.c", 329, 734))+(ovec_max_81), "libneo-c-str-gc.c", 329), ((int*)come_null_check(end_83, "libneo-c-str-gc.c", 329, 734))[i_91]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_84, "libneo-c-str-gc.c", 329, 735))[i_91*2+1],((int*)come_null_check(ovec_value_84, "libneo-c-str-gc.c", 329, 735)),((int*)come_null_check(ovec_value_84, "libneo-c-str-gc.c", 329, 735))+(ovec_max_81*3), "libneo-c-str-gc.c", 329));
        }
        if(_if_conditional39=regex_result_89==1||regex_result_89>0,        _if_conditional39) {
            result_85=(come_push_stackframe("libneo-c-str-gc.c", 335, 736),__exception_result_var_b125=strlen(self), come_pop_stackframe(), __exception_result_var_b125)-1-*(int*)come_range_check(&((int*)come_null_check(start_82, "libneo-c-str-gc.c", 335, 737))[0],((int*)come_null_check(start_82, "libneo-c-str-gc.c", 335, 737)),((int*)come_null_check(start_82, "libneo-c-str-gc.c", 335, 737))+(ovec_max_81), "libneo-c-str-gc.c", 335);
            break;
        }
        {
            break;
        }
    }
    __result114__ = result_85;
    return __result114__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
unsigned long int __exception_result_var_b126;
int len_92;
unsigned long int __exception_result_var_b127;
char* p_93;
int n_94;
_Bool _while_condtional4;
int __exception_result_var_b128;
_Bool _if_conditional40;
_Bool _if_conditional41;
int __result115__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_92, 0, sizeof(int));
memset(&p_93, 0, sizeof(char*));
memset(&n_94, 0, sizeof(int));
    len_92=(come_push_stackframe("libneo-c-str-gc.c", 351, 738),__exception_result_var_b126=strlen(search_str), come_pop_stackframe(), __exception_result_var_b126);
    p_93=str+(come_push_stackframe("libneo-c-str-gc.c", 352, 739),__exception_result_var_b127=strlen(str), come_pop_stackframe(), __exception_result_var_b127)-len_92;
    n_94=0;
    while(_while_condtional4=p_93>=str,    _while_condtional4) {
        if(_if_conditional40=(come_push_stackframe("libneo-c-str-gc.c", 357, 740),__exception_result_var_b128=strncmp(p_93,search_str,len_92), come_pop_stackframe(), __exception_result_var_b128)==0,        _if_conditional40) {
            n_94++;
            if(_if_conditional41=n_94==count,            _if_conditional41) {
                __result115__ = p_93-str;
                return __result115__;
            }
        }
        p_93--;
    }
    __result116__ = default_value;
    return __result116__;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __exception_result_var_b129;
struct list$1charph* result_95;
int offset_96;
int ovec_max_97;
const char* err_101;
int erro_ofs_102;
int options_103;
char* str_104;
struct real_pcre8_or_16* re_105;
_Bool _while_condtional5;
int options_106;
unsigned long int __exception_result_var_b130;
int len_107;
int __exception_result_var_b131;
int regex_result_108;
int i_109;
int i_110;
_Bool _if_conditional42;
char* __exception_result_var_b132;
char* str_111;
struct list$1charph* __exception_result_var_b133;
struct list$1charph* group_strings_112;
char* str2_113;
struct list$1charph* __exception_result_var_b134;
_Bool _if_conditional45;
_Bool _if_conditional46;
char* __exception_result_var_b135;
char* str_117;
struct list$1charph* __exception_result_var_b136;
struct list$1charph* group_strings_118;
int i_119;
char* __exception_result_var_b137;
char* match_string_120;
struct list$1charph* __exception_result_var_b138;
char* str2_121;
struct list$1charph* __exception_result_var_b139;
_Bool _if_conditional47;
struct list$1charph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_95, 0, sizeof(struct list$1charph*));
memset(&offset_96, 0, sizeof(int));
memset(&ovec_max_97, 0, sizeof(int));
memset(&err_101, 0, sizeof(const char*));
memset(&erro_ofs_102, 0, sizeof(int));
memset(&options_103, 0, sizeof(int));
memset(&str_104, 0, sizeof(char*));
memset(&re_105, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_106, 0, sizeof(int));
memset(&len_107, 0, sizeof(int));
memset(&regex_result_108, 0, sizeof(int));
memset(&i_109, 0, sizeof(int));
memset(&i_110, 0, sizeof(int));
memset(&str_111, 0, sizeof(char*));
memset(&group_strings_112, 0, sizeof(struct list$1charph*));
memset(&str2_113, 0, sizeof(char*));
memset(&str_117, 0, sizeof(char*));
memset(&group_strings_118, 0, sizeof(struct list$1charph*));
memset(&i_119, 0, sizeof(int));
memset(&match_string_120, 0, sizeof(char*));
memset(&str2_121, 0, sizeof(char*));
    result_95=(come_push_stackframe("libneo-c-str-gc.c", 372, 749),__exception_result_var_b129=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 372, "list$1charph"), "libneo-c-str-gc.c", 372, 741)), "libneo-c-str-gc.c", 372, 742))), come_pop_stackframe(), __exception_result_var_b129);
    offset_96=0;
    ovec_max_97=16;
    int start_98[ovec_max_97];
    memset(&start_98, 0, sizeof(int)    *(ovec_max_97)    );
    int end_99[ovec_max_97];
    memset(&end_99, 0, sizeof(int)    *(ovec_max_97)    );
    int ovec_value_100[ovec_max_97*3];
    memset(&ovec_value_100, 0, sizeof(int)    *(ovec_max_97*3)    );
    options_103=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 384, 750)), "libneo-c-str-gc.c", 384, 751))->options;
    str_104=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 385, 752)), "libneo-c-str-gc.c", 385, 753))->str;
    re_105=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 387, 754)), "libneo-c-str-gc.c", 387, 755))->re;
    while(_while_condtional5=(_Bool)1,    _while_condtional5) {
        options_106=2097152;
        len_107=(come_push_stackframe("libneo-c-str-gc.c", 391, 756),__exception_result_var_b130=strlen(self), come_pop_stackframe(), __exception_result_var_b130);
        regex_result_108=(come_push_stackframe("libneo-c-str-gc.c", 392, 757),__exception_result_var_b131=pcre_exec(re_105,(struct pcre_extra*)0,self,len_107,offset_96,options_106,ovec_value_100,ovec_max_97*3), come_pop_stackframe(), __exception_result_var_b131);
        for(        i_109=0;        i_109<ovec_max_97;        i_109++        ){
            (come_range_check(&((int*)come_null_check(start_98, "libneo-c-str-gc.c", 395, 758))[i_109],((int*)come_null_check(start_98, "libneo-c-str-gc.c", 395, 758)),((int*)come_null_check(start_98, "libneo-c-str-gc.c", 395, 758))+(ovec_max_97), "libneo-c-str-gc.c", 395), ((int*)come_null_check(start_98, "libneo-c-str-gc.c", 395, 758))[i_109]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_100, "libneo-c-str-gc.c", 395, 759))[i_109*2],((int*)come_null_check(ovec_value_100, "libneo-c-str-gc.c", 395, 759)),((int*)come_null_check(ovec_value_100, "libneo-c-str-gc.c", 395, 759))+(ovec_max_97*3), "libneo-c-str-gc.c", 395));
        }
        for(        i_110=0;        i_110<ovec_max_97;        i_110++        ){
            (come_range_check(&((int*)come_null_check(end_99, "libneo-c-str-gc.c", 398, 760))[i_110],((int*)come_null_check(end_99, "libneo-c-str-gc.c", 398, 760)),((int*)come_null_check(end_99, "libneo-c-str-gc.c", 398, 760))+(ovec_max_97), "libneo-c-str-gc.c", 398), ((int*)come_null_check(end_99, "libneo-c-str-gc.c", 398, 760))[i_110]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_100, "libneo-c-str-gc.c", 398, 761))[i_110*2+1],((int*)come_null_check(ovec_value_100, "libneo-c-str-gc.c", 398, 761)),((int*)come_null_check(ovec_value_100, "libneo-c-str-gc.c", 398, 761))+(ovec_max_97*3), "libneo-c-str-gc.c", 398));
        }
        if(_if_conditional42=regex_result_108==1,        _if_conditional42) {
            str_111=(come_push_stackframe("libneo-c-str-gc.c", 404, 766),__exception_result_var_b132=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 404, 762)), "libneo-c-str-gc.c", 404, 763)),*(int*)come_range_check(&((int*)come_null_check(start_98, "libneo-c-str-gc.c", 404, 764))[0],((int*)come_null_check(start_98, "libneo-c-str-gc.c", 404, 764)),((int*)come_null_check(start_98, "libneo-c-str-gc.c", 404, 764))+(ovec_max_97), "libneo-c-str-gc.c", 404),*(int*)come_range_check(&((int*)come_null_check(end_99, "libneo-c-str-gc.c", 404, 765))[0],((int*)come_null_check(end_99, "libneo-c-str-gc.c", 404, 765)),((int*)come_null_check(end_99, "libneo-c-str-gc.c", 404, 765))+(ovec_max_97), "libneo-c-str-gc.c", 404)), come_pop_stackframe(), __exception_result_var_b132);
            group_strings_112=(come_push_stackframe("libneo-c-str-gc.c", 406, 769),__exception_result_var_b133=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 406, "list$1charph"), "libneo-c-str-gc.c", 406, 767)), "libneo-c-str-gc.c", 406, 768))), come_pop_stackframe(), __exception_result_var_b133);
            str2_113=block(parent,str_111,group_strings_112);
            (come_push_stackframe("libneo-c-str-gc.c", 410, 816),__exception_result_var_b134=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_95, "libneo-c-str-gc.c", 410, 770)), "libneo-c-str-gc.c", 410, 771)),str2_113), come_pop_stackframe(), __exception_result_var_b134);
            if(_if_conditional45=offset_96==*(int*)come_range_check(&((int*)come_null_check(end_99, "libneo-c-str-gc.c", 412, 817))[0],((int*)come_null_check(end_99, "libneo-c-str-gc.c", 412, 817)),((int*)come_null_check(end_99, "libneo-c-str-gc.c", 412, 817))+(ovec_max_97), "libneo-c-str-gc.c", 412),            _if_conditional45) {
                offset_96++;
            }
            else {
                offset_96=*(int*)come_range_check(&((int*)come_null_check(end_99, "libneo-c-str-gc.c", 416, 818))[0],((int*)come_null_check(end_99, "libneo-c-str-gc.c", 416, 818)),((int*)come_null_check(end_99, "libneo-c-str-gc.c", 416, 818))+(ovec_max_97), "libneo-c-str-gc.c", 416);
            }
        }
        else {
            if(_if_conditional46=regex_result_108>1,            _if_conditional46) {
                str_117=(come_push_stackframe("libneo-c-str-gc.c", 421, 823),__exception_result_var_b135=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 421, 819)), "libneo-c-str-gc.c", 421, 820)),*(int*)come_range_check(&((int*)come_null_check(start_98, "libneo-c-str-gc.c", 421, 821))[0],((int*)come_null_check(start_98, "libneo-c-str-gc.c", 421, 821)),((int*)come_null_check(start_98, "libneo-c-str-gc.c", 421, 821))+(ovec_max_97), "libneo-c-str-gc.c", 421),*(int*)come_range_check(&((int*)come_null_check(end_99, "libneo-c-str-gc.c", 421, 822))[0],((int*)come_null_check(end_99, "libneo-c-str-gc.c", 421, 822)),((int*)come_null_check(end_99, "libneo-c-str-gc.c", 421, 822))+(ovec_max_97), "libneo-c-str-gc.c", 421)), come_pop_stackframe(), __exception_result_var_b135);
                group_strings_118=(come_push_stackframe("libneo-c-str-gc.c", 423, 826),__exception_result_var_b136=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 423, "list$1charph"), "libneo-c-str-gc.c", 423, 824)), "libneo-c-str-gc.c", 423, 825))), come_pop_stackframe(), __exception_result_var_b136);
                for(                i_119=1;                i_119<regex_result_108;                i_119++                ){
                    match_string_120=(come_push_stackframe("libneo-c-str-gc.c", 425, 831),__exception_result_var_b137=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 425, 827)), "libneo-c-str-gc.c", 425, 828)),*(int*)come_range_check(&((int*)come_null_check(start_98, "libneo-c-str-gc.c", 425, 829))[i_119],((int*)come_null_check(start_98, "libneo-c-str-gc.c", 425, 829)),((int*)come_null_check(start_98, "libneo-c-str-gc.c", 425, 829))+(ovec_max_97), "libneo-c-str-gc.c", 425),*(int*)come_range_check(&((int*)come_null_check(end_99, "libneo-c-str-gc.c", 425, 830))[i_119],((int*)come_null_check(end_99, "libneo-c-str-gc.c", 425, 830)),((int*)come_null_check(end_99, "libneo-c-str-gc.c", 425, 830))+(ovec_max_97), "libneo-c-str-gc.c", 425)), come_pop_stackframe(), __exception_result_var_b137);
                    (come_push_stackframe("libneo-c-str-gc.c", 426, 834),__exception_result_var_b138=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_118, "libneo-c-str-gc.c", 426, 832)), "libneo-c-str-gc.c", 426, 833)),match_string_120), come_pop_stackframe(), __exception_result_var_b138);
                }
                str2_121=block(parent,str_117,group_strings_118);
                (come_push_stackframe("libneo-c-str-gc.c", 431, 837),__exception_result_var_b139=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_95, "libneo-c-str-gc.c", 431, 835)), "libneo-c-str-gc.c", 431, 836)),str2_121), come_pop_stackframe(), __exception_result_var_b139);
                if(_if_conditional47=offset_96==*(int*)come_range_check(&((int*)come_null_check(end_99, "libneo-c-str-gc.c", 433, 838))[0],((int*)come_null_check(end_99, "libneo-c-str-gc.c", 433, 838)),((int*)come_null_check(end_99, "libneo-c-str-gc.c", 433, 838))+(ovec_max_97), "libneo-c-str-gc.c", 433),                _if_conditional47) {
                    offset_96++;
                }
                else {
                    offset_96=*(int*)come_range_check(&((int*)come_null_check(end_99, "libneo-c-str-gc.c", 437, 839))[0],((int*)come_null_check(end_99, "libneo-c-str-gc.c", 437, 839)),((int*)come_null_check(end_99, "libneo-c-str-gc.c", 437, 839))+(ovec_max_97), "libneo-c-str-gc.c", 437);
                }
            }
            else {
                break;
            }
        }
    }
    __result119__ = __result_obj__ = result_95;
    return __result119__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 743)), "./neo-c.h", 101, 744))->head=((void*)0);
        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 745)), "./neo-c.h", 102, 746))->tail=((void*)0);
        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 747)), "./neo-c.h", 103, 748))->len=0;
        __result117__ = __result_obj__ = self;
        return __result117__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional43;
struct list_item$1charph* litem_114;
_Bool _if_conditional44;
struct list_item$1charph* litem_115;
struct list_item$1charph* litem_116;
struct list$1charph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_114, 0, sizeof(struct list_item$1charph*));
memset(&litem_115, 0, sizeof(struct list_item$1charph*));
memset(&litem_116, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional43=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 222, 772)), "./neo-c.h", 222, 773))->len==0,                _if_conditional43) {
                    litem_114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 223, "list_item$1charph");
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_114, "./neo-c.h", 225, 774)), "./neo-c.h", 225, 775))->prev=((void*)0);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_114, "./neo-c.h", 226, 776)), "./neo-c.h", 226, 777))->next=((void*)0);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_114, "./neo-c.h", 227, 778)), "./neo-c.h", 227, 779))->item=item;
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 229, 780)), "./neo-c.h", 229, 781))->tail=litem_114;
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 230, 782)), "./neo-c.h", 230, 783))->head=litem_114;
                }
                else {
                    if(_if_conditional44=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 232, 784)), "./neo-c.h", 232, 785))->len==1,                    _if_conditional44) {
                        litem_115=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 233, "list_item$1charph");
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_115, "./neo-c.h", 235, 786)), "./neo-c.h", 235, 787))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 235, 788)), "./neo-c.h", 235, 789))->head;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_115, "./neo-c.h", 236, 790)), "./neo-c.h", 236, 791))->next=((void*)0);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_115, "./neo-c.h", 237, 792)), "./neo-c.h", 237, 793))->item=item;
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 239, 794)), "./neo-c.h", 239, 795))->tail=litem_115;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 240, 796)), "./neo-c.h", 240, 797))->head, "./neo-c.h", 240, 798)), "./neo-c.h", 240, 799))->next=litem_115;
                    }
                    else {
                        litem_116=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 243, "list_item$1charph");
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_116, "./neo-c.h", 245, 800)), "./neo-c.h", 245, 801))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 245, 802)), "./neo-c.h", 245, 803))->tail;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_116, "./neo-c.h", 246, 804)), "./neo-c.h", 246, 805))->next=((void*)0);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_116, "./neo-c.h", 247, 806)), "./neo-c.h", 247, 807))->item=item;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 249, 808)), "./neo-c.h", 249, 809))->tail, "./neo-c.h", 249, 810)), "./neo-c.h", 249, 811))->next=litem_116;
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 250, 812)), "./neo-c.h", 250, 813))->tail=litem_116;
                    }
                }
                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 253, 814)), "./neo-c.h", 253, 815))->len++;
                __result118__ = __result_obj__ = self;
                return __result118__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __exception_result_var_b140;
struct list$1charph* result_122;
int offset_123;
int ovec_max_124;
const char* err_128;
int erro_ofs_129;
int options_130;
char* str_131;
struct real_pcre8_or_16* re_132;
int n_133;
_Bool _while_condtional6;
int options_134;
unsigned long int __exception_result_var_b141;
int len_135;
int __exception_result_var_b142;
int regex_result_136;
int i_137;
int i_138;
_Bool _if_conditional48;
char* __exception_result_var_b143;
char* str_139;
struct list$1charph* __exception_result_var_b144;
struct list$1charph* group_strings_140;
char* str2_141;
struct list$1charph* __exception_result_var_b145;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
char* __exception_result_var_b146;
char* str_142;
struct list$1charph* __exception_result_var_b147;
struct list$1charph* group_strings_143;
int i_144;
char* __exception_result_var_b148;
char* match_string_145;
struct list$1charph* __exception_result_var_b149;
char* str2_146;
struct list$1charph* __exception_result_var_b150;
_Bool _if_conditional52;
_Bool _if_conditional53;
struct list$1charph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_122, 0, sizeof(struct list$1charph*));
memset(&offset_123, 0, sizeof(int));
memset(&ovec_max_124, 0, sizeof(int));
memset(&err_128, 0, sizeof(const char*));
memset(&erro_ofs_129, 0, sizeof(int));
memset(&options_130, 0, sizeof(int));
memset(&str_131, 0, sizeof(char*));
memset(&re_132, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_133, 0, sizeof(int));
memset(&options_134, 0, sizeof(int));
memset(&len_135, 0, sizeof(int));
memset(&regex_result_136, 0, sizeof(int));
memset(&i_137, 0, sizeof(int));
memset(&i_138, 0, sizeof(int));
memset(&str_139, 0, sizeof(char*));
memset(&group_strings_140, 0, sizeof(struct list$1charph*));
memset(&str2_141, 0, sizeof(char*));
memset(&str_142, 0, sizeof(char*));
memset(&group_strings_143, 0, sizeof(struct list$1charph*));
memset(&i_144, 0, sizeof(int));
memset(&match_string_145, 0, sizeof(char*));
memset(&str2_146, 0, sizeof(char*));
    result_122=(come_push_stackframe("libneo-c-str-gc.c", 453, 842),__exception_result_var_b140=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 453, "list$1charph"), "libneo-c-str-gc.c", 453, 840)), "libneo-c-str-gc.c", 453, 841))), come_pop_stackframe(), __exception_result_var_b140);
    offset_123=0;
    ovec_max_124=16;
    int start_125[ovec_max_124];
    memset(&start_125, 0, sizeof(int)    *(ovec_max_124)    );
    int end_126[ovec_max_124];
    memset(&end_126, 0, sizeof(int)    *(ovec_max_124)    );
    int ovec_value_127[ovec_max_124*3];
    memset(&ovec_value_127, 0, sizeof(int)    *(ovec_max_124*3)    );
    options_130=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 465, 843)), "libneo-c-str-gc.c", 465, 844))->options;
    str_131=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 466, 845)), "libneo-c-str-gc.c", 466, 846))->str;
    re_132=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 468, 847)), "libneo-c-str-gc.c", 468, 848))->re;
    n_133=0;
    while(_while_condtional6=(_Bool)1,    _while_condtional6) {
        options_134=2097152;
        len_135=(come_push_stackframe("libneo-c-str-gc.c", 474, 849),__exception_result_var_b141=strlen(self), come_pop_stackframe(), __exception_result_var_b141);
        regex_result_136=(come_push_stackframe("libneo-c-str-gc.c", 475, 850),__exception_result_var_b142=pcre_exec(re_132,(struct pcre_extra*)0,self,len_135,offset_123,options_134,ovec_value_127,ovec_max_124*3), come_pop_stackframe(), __exception_result_var_b142);
        for(        i_137=0;        i_137<ovec_max_124;        i_137++        ){
            (come_range_check(&((int*)come_null_check(start_125, "libneo-c-str-gc.c", 478, 851))[i_137],((int*)come_null_check(start_125, "libneo-c-str-gc.c", 478, 851)),((int*)come_null_check(start_125, "libneo-c-str-gc.c", 478, 851))+(ovec_max_124), "libneo-c-str-gc.c", 478), ((int*)come_null_check(start_125, "libneo-c-str-gc.c", 478, 851))[i_137]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_127, "libneo-c-str-gc.c", 478, 852))[i_137*2],((int*)come_null_check(ovec_value_127, "libneo-c-str-gc.c", 478, 852)),((int*)come_null_check(ovec_value_127, "libneo-c-str-gc.c", 478, 852))+(ovec_max_124*3), "libneo-c-str-gc.c", 478));
        }
        for(        i_138=0;        i_138<ovec_max_124;        i_138++        ){
            (come_range_check(&((int*)come_null_check(end_126, "libneo-c-str-gc.c", 481, 853))[i_138],((int*)come_null_check(end_126, "libneo-c-str-gc.c", 481, 853)),((int*)come_null_check(end_126, "libneo-c-str-gc.c", 481, 853))+(ovec_max_124), "libneo-c-str-gc.c", 481), ((int*)come_null_check(end_126, "libneo-c-str-gc.c", 481, 853))[i_138]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_127, "libneo-c-str-gc.c", 481, 854))[i_138*2+1],((int*)come_null_check(ovec_value_127, "libneo-c-str-gc.c", 481, 854)),((int*)come_null_check(ovec_value_127, "libneo-c-str-gc.c", 481, 854))+(ovec_max_124*3), "libneo-c-str-gc.c", 481));
        }
        if(_if_conditional48=regex_result_136==1,        _if_conditional48) {
            str_139=(come_push_stackframe("libneo-c-str-gc.c", 487, 859),__exception_result_var_b143=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 487, 855)), "libneo-c-str-gc.c", 487, 856)),*(int*)come_range_check(&((int*)come_null_check(start_125, "libneo-c-str-gc.c", 487, 857))[0],((int*)come_null_check(start_125, "libneo-c-str-gc.c", 487, 857)),((int*)come_null_check(start_125, "libneo-c-str-gc.c", 487, 857))+(ovec_max_124), "libneo-c-str-gc.c", 487),*(int*)come_range_check(&((int*)come_null_check(end_126, "libneo-c-str-gc.c", 487, 858))[0],((int*)come_null_check(end_126, "libneo-c-str-gc.c", 487, 858)),((int*)come_null_check(end_126, "libneo-c-str-gc.c", 487, 858))+(ovec_max_124), "libneo-c-str-gc.c", 487)), come_pop_stackframe(), __exception_result_var_b143);
            group_strings_140=(come_push_stackframe("libneo-c-str-gc.c", 489, 862),__exception_result_var_b144=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 489, "list$1charph"), "libneo-c-str-gc.c", 489, 860)), "libneo-c-str-gc.c", 489, 861))), come_pop_stackframe(), __exception_result_var_b144);
            str2_141=block(parent,str_139,group_strings_140);
            (come_push_stackframe("libneo-c-str-gc.c", 493, 865),__exception_result_var_b145=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_122, "libneo-c-str-gc.c", 493, 863)), "libneo-c-str-gc.c", 493, 864)),str2_141), come_pop_stackframe(), __exception_result_var_b145);
            if(_if_conditional49=offset_123==*(int*)come_range_check(&((int*)come_null_check(end_126, "libneo-c-str-gc.c", 495, 866))[0],((int*)come_null_check(end_126, "libneo-c-str-gc.c", 495, 866)),((int*)come_null_check(end_126, "libneo-c-str-gc.c", 495, 866))+(ovec_max_124), "libneo-c-str-gc.c", 495),            _if_conditional49) {
                offset_123++;
            }
            else {
                offset_123=*(int*)come_range_check(&((int*)come_null_check(end_126, "libneo-c-str-gc.c", 499, 867))[0],((int*)come_null_check(end_126, "libneo-c-str-gc.c", 499, 867)),((int*)come_null_check(end_126, "libneo-c-str-gc.c", 499, 867))+(ovec_max_124), "libneo-c-str-gc.c", 499);
            }
            n_133++;
            if(_if_conditional50=n_133==count,            _if_conditional50) {
                break;
            }
        }
        else {
            if(_if_conditional51=regex_result_136>1,            _if_conditional51) {
                str_142=(come_push_stackframe("libneo-c-str-gc.c", 509, 872),__exception_result_var_b146=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 509, 868)), "libneo-c-str-gc.c", 509, 869)),*(int*)come_range_check(&((int*)come_null_check(start_125, "libneo-c-str-gc.c", 509, 870))[0],((int*)come_null_check(start_125, "libneo-c-str-gc.c", 509, 870)),((int*)come_null_check(start_125, "libneo-c-str-gc.c", 509, 870))+(ovec_max_124), "libneo-c-str-gc.c", 509),*(int*)come_range_check(&((int*)come_null_check(end_126, "libneo-c-str-gc.c", 509, 871))[0],((int*)come_null_check(end_126, "libneo-c-str-gc.c", 509, 871)),((int*)come_null_check(end_126, "libneo-c-str-gc.c", 509, 871))+(ovec_max_124), "libneo-c-str-gc.c", 509)), come_pop_stackframe(), __exception_result_var_b146);
                group_strings_143=(come_push_stackframe("libneo-c-str-gc.c", 511, 875),__exception_result_var_b147=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 511, "list$1charph"), "libneo-c-str-gc.c", 511, 873)), "libneo-c-str-gc.c", 511, 874))), come_pop_stackframe(), __exception_result_var_b147);
                for(                i_144=1;                i_144<regex_result_136;                i_144++                ){
                    match_string_145=(come_push_stackframe("libneo-c-str-gc.c", 513, 880),__exception_result_var_b148=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 513, 876)), "libneo-c-str-gc.c", 513, 877)),*(int*)come_range_check(&((int*)come_null_check(start_125, "libneo-c-str-gc.c", 513, 878))[i_144],((int*)come_null_check(start_125, "libneo-c-str-gc.c", 513, 878)),((int*)come_null_check(start_125, "libneo-c-str-gc.c", 513, 878))+(ovec_max_124), "libneo-c-str-gc.c", 513),*(int*)come_range_check(&((int*)come_null_check(end_126, "libneo-c-str-gc.c", 513, 879))[i_144],((int*)come_null_check(end_126, "libneo-c-str-gc.c", 513, 879)),((int*)come_null_check(end_126, "libneo-c-str-gc.c", 513, 879))+(ovec_max_124), "libneo-c-str-gc.c", 513)), come_pop_stackframe(), __exception_result_var_b148);
                    (come_push_stackframe("libneo-c-str-gc.c", 514, 883),__exception_result_var_b149=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_143, "libneo-c-str-gc.c", 514, 881)), "libneo-c-str-gc.c", 514, 882)),match_string_145), come_pop_stackframe(), __exception_result_var_b149);
                }
                str2_146=block(parent,str_142,group_strings_143);
                (come_push_stackframe("libneo-c-str-gc.c", 519, 886),__exception_result_var_b150=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_122, "libneo-c-str-gc.c", 519, 884)), "libneo-c-str-gc.c", 519, 885)),str2_146), come_pop_stackframe(), __exception_result_var_b150);
                if(_if_conditional52=offset_123==*(int*)come_range_check(&((int*)come_null_check(end_126, "libneo-c-str-gc.c", 521, 887))[0],((int*)come_null_check(end_126, "libneo-c-str-gc.c", 521, 887)),((int*)come_null_check(end_126, "libneo-c-str-gc.c", 521, 887))+(ovec_max_124), "libneo-c-str-gc.c", 521),                _if_conditional52) {
                    offset_123++;
                }
                else {
                    offset_123=*(int*)come_range_check(&((int*)come_null_check(end_126, "libneo-c-str-gc.c", 525, 888))[0],((int*)come_null_check(end_126, "libneo-c-str-gc.c", 525, 888)),((int*)come_null_check(end_126, "libneo-c-str-gc.c", 525, 888))+(ovec_max_124), "libneo-c-str-gc.c", 525);
                }
                n_133++;
                if(_if_conditional53=n_133==count,                _if_conditional53) {
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    __result120__ = __result_obj__ = result_122;
    return __result120__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_147;
int erro_ofs_148;
int options_149;
char* str_150;
struct real_pcre8_or_16* re_151;
struct list$1charph* __exception_result_var_b151;
struct list$1charph* result_152;
int offset_153;
int ovec_max_154;
_Bool _while_condtional7;
int options_158;
unsigned long int __exception_result_var_b152;
int len_159;
int __exception_result_var_b153;
int regex_result_160;
int i_161;
int i_162;
_Bool _if_conditional54;
char* __exception_result_var_b154;
char* str_163;
struct list$1charph* __exception_result_var_b155;
struct list$1charph* match_strings_164;
char* str2_165;
struct list$1charph* __exception_result_var_b156;
_Bool _if_conditional55;
_Bool _if_conditional56;
char* __exception_result_var_b157;
char* str_166;
_Bool _if_conditional57;
struct list$1charph* __exception_result_var_b158;
struct list$1charph* match_strings_167;
int i_168;
char* __exception_result_var_b159;
char* match_str_169;
struct list$1charph* __exception_result_var_b160;
char* str2_170;
struct list$1charph* __exception_result_var_b161;
int __exception_result_var_b162;
_Bool _if_conditional58;
char* __exception_result_var_b163;
char* str_171;
struct list$1charph* __exception_result_var_b164;
struct list$1charph* match_strings_172;
char* str2_173;
struct list$1charph* __exception_result_var_b165;
struct list$1charph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_147, 0, sizeof(const char*));
memset(&erro_ofs_148, 0, sizeof(int));
memset(&options_149, 0, sizeof(int));
memset(&str_150, 0, sizeof(char*));
memset(&re_151, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_152, 0, sizeof(struct list$1charph*));
memset(&offset_153, 0, sizeof(int));
memset(&ovec_max_154, 0, sizeof(int));
memset(&options_158, 0, sizeof(int));
memset(&len_159, 0, sizeof(int));
memset(&regex_result_160, 0, sizeof(int));
memset(&i_161, 0, sizeof(int));
memset(&i_162, 0, sizeof(int));
memset(&str_163, 0, sizeof(char*));
memset(&match_strings_164, 0, sizeof(struct list$1charph*));
memset(&str2_165, 0, sizeof(char*));
memset(&str_166, 0, sizeof(char*));
memset(&match_strings_167, 0, sizeof(struct list$1charph*));
memset(&i_168, 0, sizeof(int));
memset(&match_str_169, 0, sizeof(char*));
memset(&str2_170, 0, sizeof(char*));
memset(&str_171, 0, sizeof(char*));
memset(&match_strings_172, 0, sizeof(struct list$1charph*));
memset(&str2_173, 0, sizeof(char*));
    options_149=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 548, 889)), "libneo-c-str-gc.c", 548, 890))->options;
    str_150=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 549, 891)), "libneo-c-str-gc.c", 549, 892))->str;
    re_151=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 551, 893)), "libneo-c-str-gc.c", 551, 894))->re;
    result_152=(come_push_stackframe("libneo-c-str-gc.c", 553, 897),__exception_result_var_b151=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 553, "list$1charph"), "libneo-c-str-gc.c", 553, 895)), "libneo-c-str-gc.c", 553, 896))), come_pop_stackframe(), __exception_result_var_b151);
    offset_153=0;
    ovec_max_154=16;
    int start_155[ovec_max_154];
    memset(&start_155, 0, sizeof(int)    *(ovec_max_154)    );
    int end_156[ovec_max_154];
    memset(&end_156, 0, sizeof(int)    *(ovec_max_154)    );
    int ovec_value_157[ovec_max_154*3];
    memset(&ovec_value_157, 0, sizeof(int)    *(ovec_max_154*3)    );
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        options_158=2097152;
        len_159=(come_push_stackframe("libneo-c-str-gc.c", 564, 898),__exception_result_var_b152=strlen(self), come_pop_stackframe(), __exception_result_var_b152);
        regex_result_160=(come_push_stackframe("libneo-c-str-gc.c", 566, 899),__exception_result_var_b153=pcre_exec(re_151,(struct pcre_extra*)0,self,len_159,offset_153,options_158,ovec_value_157,ovec_max_154*3), come_pop_stackframe(), __exception_result_var_b153);
        for(        i_161=0;        i_161<ovec_max_154;        i_161++        ){
            (come_range_check(&((int*)come_null_check(start_155, "libneo-c-str-gc.c", 569, 900))[i_161],((int*)come_null_check(start_155, "libneo-c-str-gc.c", 569, 900)),((int*)come_null_check(start_155, "libneo-c-str-gc.c", 569, 900))+(ovec_max_154), "libneo-c-str-gc.c", 569), ((int*)come_null_check(start_155, "libneo-c-str-gc.c", 569, 900))[i_161]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_157, "libneo-c-str-gc.c", 569, 901))[i_161*2],((int*)come_null_check(ovec_value_157, "libneo-c-str-gc.c", 569, 901)),((int*)come_null_check(ovec_value_157, "libneo-c-str-gc.c", 569, 901))+(ovec_max_154*3), "libneo-c-str-gc.c", 569));
        }
        for(        i_162=0;        i_162<ovec_max_154;        i_162++        ){
            (come_range_check(&((int*)come_null_check(end_156, "libneo-c-str-gc.c", 572, 902))[i_162],((int*)come_null_check(end_156, "libneo-c-str-gc.c", 572, 902)),((int*)come_null_check(end_156, "libneo-c-str-gc.c", 572, 902))+(ovec_max_154), "libneo-c-str-gc.c", 572), ((int*)come_null_check(end_156, "libneo-c-str-gc.c", 572, 902))[i_162]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_157, "libneo-c-str-gc.c", 572, 903))[i_162*2+1],((int*)come_null_check(ovec_value_157, "libneo-c-str-gc.c", 572, 903)),((int*)come_null_check(ovec_value_157, "libneo-c-str-gc.c", 572, 903))+(ovec_max_154*3), "libneo-c-str-gc.c", 572));
        }
        if(_if_conditional54=regex_result_160==1,        _if_conditional54) {
            str_163=(come_push_stackframe("libneo-c-str-gc.c", 578, 907),__exception_result_var_b154=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 578, 904)), "libneo-c-str-gc.c", 578, 905)),offset_153,*(int*)come_range_check(&((int*)come_null_check(start_155, "libneo-c-str-gc.c", 578, 906))[0],((int*)come_null_check(start_155, "libneo-c-str-gc.c", 578, 906)),((int*)come_null_check(start_155, "libneo-c-str-gc.c", 578, 906))+(ovec_max_154), "libneo-c-str-gc.c", 578)), come_pop_stackframe(), __exception_result_var_b154);
            match_strings_164=(come_push_stackframe("libneo-c-str-gc.c", 580, 910),__exception_result_var_b155=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 580, "list$1charph"), "libneo-c-str-gc.c", 580, 908)), "libneo-c-str-gc.c", 580, 909))), come_pop_stackframe(), __exception_result_var_b155);
            str2_165=block(parent,str_163,match_strings_164);
            (come_push_stackframe("libneo-c-str-gc.c", 583, 913),__exception_result_var_b156=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_152, "libneo-c-str-gc.c", 583, 911)), "libneo-c-str-gc.c", 583, 912)),str2_165), come_pop_stackframe(), __exception_result_var_b156);
            if(_if_conditional55=offset_153==*(int*)come_range_check(&((int*)come_null_check(end_156, "libneo-c-str-gc.c", 585, 914))[0],((int*)come_null_check(end_156, "libneo-c-str-gc.c", 585, 914)),((int*)come_null_check(end_156, "libneo-c-str-gc.c", 585, 914))+(ovec_max_154), "libneo-c-str-gc.c", 585),            _if_conditional55) {
                offset_153++;
            }
            else {
                offset_153=*(int*)come_range_check(&((int*)come_null_check(end_156, "libneo-c-str-gc.c", 589, 915))[0],((int*)come_null_check(end_156, "libneo-c-str-gc.c", 589, 915)),((int*)come_null_check(end_156, "libneo-c-str-gc.c", 589, 915))+(ovec_max_154), "libneo-c-str-gc.c", 589);
            }
        }
        else {
            if(_if_conditional56=regex_result_160>1,            _if_conditional56) {
                str_166=(come_push_stackframe("libneo-c-str-gc.c", 594, 919),__exception_result_var_b157=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 594, 916)), "libneo-c-str-gc.c", 594, 917)),offset_153,*(int*)come_range_check(&((int*)come_null_check(start_155, "libneo-c-str-gc.c", 594, 918))[0],((int*)come_null_check(start_155, "libneo-c-str-gc.c", 594, 918)),((int*)come_null_check(start_155, "libneo-c-str-gc.c", 594, 918))+(ovec_max_154), "libneo-c-str-gc.c", 594)), come_pop_stackframe(), __exception_result_var_b157);
                if(_if_conditional57=offset_153==*(int*)come_range_check(&((int*)come_null_check(end_156, "libneo-c-str-gc.c", 596, 920))[0],((int*)come_null_check(end_156, "libneo-c-str-gc.c", 596, 920)),((int*)come_null_check(end_156, "libneo-c-str-gc.c", 596, 920))+(ovec_max_154), "libneo-c-str-gc.c", 596),                _if_conditional57) {
                    offset_153++;
                }
                else {
                    offset_153=*(int*)come_range_check(&((int*)come_null_check(end_156, "libneo-c-str-gc.c", 600, 921))[0],((int*)come_null_check(end_156, "libneo-c-str-gc.c", 600, 921)),((int*)come_null_check(end_156, "libneo-c-str-gc.c", 600, 921))+(ovec_max_154), "libneo-c-str-gc.c", 600);
                }
                match_strings_167=(come_push_stackframe("libneo-c-str-gc.c", 603, 924),__exception_result_var_b158=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 603, "list$1charph"), "libneo-c-str-gc.c", 603, 922)), "libneo-c-str-gc.c", 603, 923))), come_pop_stackframe(), __exception_result_var_b158);
                for(                i_168=1;                i_168<regex_result_160;                i_168++                ){
                    match_str_169=(come_push_stackframe("libneo-c-str-gc.c", 605, 929),__exception_result_var_b159=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 605, 925)), "libneo-c-str-gc.c", 605, 926)),*(int*)come_range_check(&((int*)come_null_check(start_155, "libneo-c-str-gc.c", 605, 927))[i_168],((int*)come_null_check(start_155, "libneo-c-str-gc.c", 605, 927)),((int*)come_null_check(start_155, "libneo-c-str-gc.c", 605, 927))+(ovec_max_154), "libneo-c-str-gc.c", 605),*(int*)come_range_check(&((int*)come_null_check(end_156, "libneo-c-str-gc.c", 605, 928))[i_168],((int*)come_null_check(end_156, "libneo-c-str-gc.c", 605, 928)),((int*)come_null_check(end_156, "libneo-c-str-gc.c", 605, 928))+(ovec_max_154), "libneo-c-str-gc.c", 605)), come_pop_stackframe(), __exception_result_var_b159);
                    (come_push_stackframe("libneo-c-str-gc.c", 606, 932),__exception_result_var_b160=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(match_strings_167, "libneo-c-str-gc.c", 606, 930)), "libneo-c-str-gc.c", 606, 931)),match_str_169), come_pop_stackframe(), __exception_result_var_b160);
                }
                str2_170=block(parent,str_166,match_strings_167);
                (come_push_stackframe("libneo-c-str-gc.c", 610, 935),__exception_result_var_b161=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_152, "libneo-c-str-gc.c", 610, 933)), "libneo-c-str-gc.c", 610, 934)),str2_170), come_pop_stackframe(), __exception_result_var_b161);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional58=offset_153<(come_push_stackframe("libneo-c-str-gc.c", 619, 938),__exception_result_var_b162=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 619, 936)), "libneo-c-str-gc.c", 619, 937))), come_pop_stackframe(), __exception_result_var_b162),    _if_conditional58) {
        str_171=(come_push_stackframe("libneo-c-str-gc.c", 620, 941),__exception_result_var_b163=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 620, 939)), "libneo-c-str-gc.c", 620, 940)),offset_153,-1), come_pop_stackframe(), __exception_result_var_b163);
        match_strings_172=(come_push_stackframe("libneo-c-str-gc.c", 621, 944),__exception_result_var_b164=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 621, "list$1charph"), "libneo-c-str-gc.c", 621, 942)), "libneo-c-str-gc.c", 621, 943))), come_pop_stackframe(), __exception_result_var_b164);
        str2_173=block(parent,str_171,match_strings_172);
        (come_push_stackframe("libneo-c-str-gc.c", 624, 947),__exception_result_var_b165=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_152, "libneo-c-str-gc.c", 624, 945)), "libneo-c-str-gc.c", 624, 946)),str2_173), come_pop_stackframe(), __exception_result_var_b165);
    }
    __result121__ = __result_obj__ = result_152;
    return __result121__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_174;
int erro_ofs_175;
int options_176;
char* str_177;
struct real_pcre8_or_16* re_178;
struct list$1charph* __exception_result_var_b166;
struct list$1charph* result_179;
int offset_180;
int ovec_max_181;
int n_185;
_Bool _while_condtional8;
int options_186;
unsigned long int __exception_result_var_b167;
int len_187;
int __exception_result_var_b168;
int regex_result_188;
int i_189;
int i_190;
_Bool _if_conditional59;
char* __exception_result_var_b169;
char* str_191;
struct list$1charph* __exception_result_var_b170;
struct list$1charph* match_strings_192;
char* str2_193;
struct list$1charph* __exception_result_var_b171;
_Bool _if_conditional60;
_Bool _if_conditional61;
char* __exception_result_var_b172;
char* str_194;
_Bool _if_conditional62;
struct list$1charph* __exception_result_var_b173;
struct list$1charph* match_strings_195;
int i_196;
char* __exception_result_var_b174;
char* match_str_197;
struct list$1charph* __exception_result_var_b175;
char* str2_198;
struct list$1charph* __exception_result_var_b176;
_Bool _if_conditional63;
struct list$1charph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_174, 0, sizeof(const char*));
memset(&erro_ofs_175, 0, sizeof(int));
memset(&options_176, 0, sizeof(int));
memset(&str_177, 0, sizeof(char*));
memset(&re_178, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_179, 0, sizeof(struct list$1charph*));
memset(&offset_180, 0, sizeof(int));
memset(&ovec_max_181, 0, sizeof(int));
memset(&n_185, 0, sizeof(int));
memset(&options_186, 0, sizeof(int));
memset(&len_187, 0, sizeof(int));
memset(&regex_result_188, 0, sizeof(int));
memset(&i_189, 0, sizeof(int));
memset(&i_190, 0, sizeof(int));
memset(&str_191, 0, sizeof(char*));
memset(&match_strings_192, 0, sizeof(struct list$1charph*));
memset(&str2_193, 0, sizeof(char*));
memset(&str_194, 0, sizeof(char*));
memset(&match_strings_195, 0, sizeof(struct list$1charph*));
memset(&i_196, 0, sizeof(int));
memset(&match_str_197, 0, sizeof(char*));
memset(&str2_198, 0, sizeof(char*));
    options_176=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 635, 948)), "libneo-c-str-gc.c", 635, 949))->options;
    str_177=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 636, 950)), "libneo-c-str-gc.c", 636, 951))->str;
    re_178=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 638, 952)), "libneo-c-str-gc.c", 638, 953))->re;
    result_179=(come_push_stackframe("libneo-c-str-gc.c", 640, 956),__exception_result_var_b166=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 640, "list$1charph"), "libneo-c-str-gc.c", 640, 954)), "libneo-c-str-gc.c", 640, 955))), come_pop_stackframe(), __exception_result_var_b166);
    offset_180=0;
    ovec_max_181=16;
    int start_182[ovec_max_181];
    memset(&start_182, 0, sizeof(int)    *(ovec_max_181)    );
    int end_183[ovec_max_181];
    memset(&end_183, 0, sizeof(int)    *(ovec_max_181)    );
    int ovec_value_184[ovec_max_181*3];
    memset(&ovec_value_184, 0, sizeof(int)    *(ovec_max_181*3)    );
    n_185=0;
    while(_while_condtional8=(_Bool)1,    _while_condtional8) {
        options_186=2097152;
        len_187=(come_push_stackframe("libneo-c-str-gc.c", 653, 957),__exception_result_var_b167=strlen(self), come_pop_stackframe(), __exception_result_var_b167);
        regex_result_188=(come_push_stackframe("libneo-c-str-gc.c", 655, 958),__exception_result_var_b168=pcre_exec(re_178,(struct pcre_extra*)0,self,len_187,offset_180,options_186,ovec_value_184,ovec_max_181*3), come_pop_stackframe(), __exception_result_var_b168);
        for(        i_189=0;        i_189<ovec_max_181;        i_189++        ){
            (come_range_check(&((int*)come_null_check(start_182, "libneo-c-str-gc.c", 658, 959))[i_189],((int*)come_null_check(start_182, "libneo-c-str-gc.c", 658, 959)),((int*)come_null_check(start_182, "libneo-c-str-gc.c", 658, 959))+(ovec_max_181), "libneo-c-str-gc.c", 658), ((int*)come_null_check(start_182, "libneo-c-str-gc.c", 658, 959))[i_189]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_184, "libneo-c-str-gc.c", 658, 960))[i_189*2],((int*)come_null_check(ovec_value_184, "libneo-c-str-gc.c", 658, 960)),((int*)come_null_check(ovec_value_184, "libneo-c-str-gc.c", 658, 960))+(ovec_max_181*3), "libneo-c-str-gc.c", 658));
        }
        for(        i_190=0;        i_190<ovec_max_181;        i_190++        ){
            (come_range_check(&((int*)come_null_check(end_183, "libneo-c-str-gc.c", 661, 961))[i_190],((int*)come_null_check(end_183, "libneo-c-str-gc.c", 661, 961)),((int*)come_null_check(end_183, "libneo-c-str-gc.c", 661, 961))+(ovec_max_181), "libneo-c-str-gc.c", 661), ((int*)come_null_check(end_183, "libneo-c-str-gc.c", 661, 961))[i_190]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_184, "libneo-c-str-gc.c", 661, 962))[i_190*2+1],((int*)come_null_check(ovec_value_184, "libneo-c-str-gc.c", 661, 962)),((int*)come_null_check(ovec_value_184, "libneo-c-str-gc.c", 661, 962))+(ovec_max_181*3), "libneo-c-str-gc.c", 661));
        }
        if(_if_conditional59=regex_result_188==1,        _if_conditional59) {
            str_191=(come_push_stackframe("libneo-c-str-gc.c", 667, 966),__exception_result_var_b169=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 667, 963)), "libneo-c-str-gc.c", 667, 964)),offset_180,*(int*)come_range_check(&((int*)come_null_check(start_182, "libneo-c-str-gc.c", 667, 965))[0],((int*)come_null_check(start_182, "libneo-c-str-gc.c", 667, 965)),((int*)come_null_check(start_182, "libneo-c-str-gc.c", 667, 965))+(ovec_max_181), "libneo-c-str-gc.c", 667)), come_pop_stackframe(), __exception_result_var_b169);
            match_strings_192=(come_push_stackframe("libneo-c-str-gc.c", 669, 969),__exception_result_var_b170=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 669, "list$1charph"), "libneo-c-str-gc.c", 669, 967)), "libneo-c-str-gc.c", 669, 968))), come_pop_stackframe(), __exception_result_var_b170);
            str2_193=block(parent,str_191,match_strings_192);
            (come_push_stackframe("libneo-c-str-gc.c", 672, 972),__exception_result_var_b171=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_179, "libneo-c-str-gc.c", 672, 970)), "libneo-c-str-gc.c", 672, 971)),str2_193), come_pop_stackframe(), __exception_result_var_b171);
            if(_if_conditional60=offset_180==*(int*)come_range_check(&((int*)come_null_check(end_183, "libneo-c-str-gc.c", 674, 973))[0],((int*)come_null_check(end_183, "libneo-c-str-gc.c", 674, 973)),((int*)come_null_check(end_183, "libneo-c-str-gc.c", 674, 973))+(ovec_max_181), "libneo-c-str-gc.c", 674),            _if_conditional60) {
                offset_180++;
            }
            else {
                offset_180=*(int*)come_range_check(&((int*)come_null_check(end_183, "libneo-c-str-gc.c", 678, 974))[0],((int*)come_null_check(end_183, "libneo-c-str-gc.c", 678, 974)),((int*)come_null_check(end_183, "libneo-c-str-gc.c", 678, 974))+(ovec_max_181), "libneo-c-str-gc.c", 678);
            }
        }
        else {
            if(_if_conditional61=regex_result_188>1,            _if_conditional61) {
                str_194=(come_push_stackframe("libneo-c-str-gc.c", 683, 978),__exception_result_var_b172=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 683, 975)), "libneo-c-str-gc.c", 683, 976)),offset_180,*(int*)come_range_check(&((int*)come_null_check(start_182, "libneo-c-str-gc.c", 683, 977))[0],((int*)come_null_check(start_182, "libneo-c-str-gc.c", 683, 977)),((int*)come_null_check(start_182, "libneo-c-str-gc.c", 683, 977))+(ovec_max_181), "libneo-c-str-gc.c", 683)), come_pop_stackframe(), __exception_result_var_b172);
                if(_if_conditional62=offset_180==*(int*)come_range_check(&((int*)come_null_check(end_183, "libneo-c-str-gc.c", 685, 979))[0],((int*)come_null_check(end_183, "libneo-c-str-gc.c", 685, 979)),((int*)come_null_check(end_183, "libneo-c-str-gc.c", 685, 979))+(ovec_max_181), "libneo-c-str-gc.c", 685),                _if_conditional62) {
                    offset_180++;
                }
                else {
                    offset_180=*(int*)come_range_check(&((int*)come_null_check(end_183, "libneo-c-str-gc.c", 689, 980))[0],((int*)come_null_check(end_183, "libneo-c-str-gc.c", 689, 980)),((int*)come_null_check(end_183, "libneo-c-str-gc.c", 689, 980))+(ovec_max_181), "libneo-c-str-gc.c", 689);
                }
                match_strings_195=(come_push_stackframe("libneo-c-str-gc.c", 692, 983),__exception_result_var_b173=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 692, "list$1charph"), "libneo-c-str-gc.c", 692, 981)), "libneo-c-str-gc.c", 692, 982))), come_pop_stackframe(), __exception_result_var_b173);
                for(                i_196=1;                i_196<regex_result_188;                i_196++                ){
                    match_str_197=(come_push_stackframe("libneo-c-str-gc.c", 694, 988),__exception_result_var_b174=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 694, 984)), "libneo-c-str-gc.c", 694, 985)),*(int*)come_range_check(&((int*)come_null_check(start_182, "libneo-c-str-gc.c", 694, 986))[i_196],((int*)come_null_check(start_182, "libneo-c-str-gc.c", 694, 986)),((int*)come_null_check(start_182, "libneo-c-str-gc.c", 694, 986))+(ovec_max_181), "libneo-c-str-gc.c", 694),*(int*)come_range_check(&((int*)come_null_check(end_183, "libneo-c-str-gc.c", 694, 987))[i_196],((int*)come_null_check(end_183, "libneo-c-str-gc.c", 694, 987)),((int*)come_null_check(end_183, "libneo-c-str-gc.c", 694, 987))+(ovec_max_181), "libneo-c-str-gc.c", 694)), come_pop_stackframe(), __exception_result_var_b174);
                    (come_push_stackframe("libneo-c-str-gc.c", 695, 991),__exception_result_var_b175=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(match_strings_195, "libneo-c-str-gc.c", 695, 989)), "libneo-c-str-gc.c", 695, 990)),match_str_197), come_pop_stackframe(), __exception_result_var_b175);
                }
                str2_198=block(parent,str_194,match_strings_195);
                (come_push_stackframe("libneo-c-str-gc.c", 700, 994),__exception_result_var_b176=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_179, "libneo-c-str-gc.c", 700, 992)), "libneo-c-str-gc.c", 700, 993)),str2_198), come_pop_stackframe(), __exception_result_var_b176);
            }
            else {
                break;
            }
        }
        n_185++;
        if(_if_conditional63=n_185==count,        _if_conditional63) {
            break;
        }
    }
    __result122__ = __result_obj__ = result_179;
    return __result122__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
int __exception_result_var_b177;
_Bool _if_conditional64;
_Bool __result123__;
_Bool _if_conditional65;
_Bool __result124__;
_Bool _if_conditional66;
_Bool __result125__;
_Bool _if_conditional67;
_Bool __result126__;
_Bool _if_conditional68;
_Bool __result127__;
_Bool _if_conditional69;
_Bool __result128__;
_Bool _if_conditional70;
_Bool __result129__;
_Bool _if_conditional71;
_Bool __result130__;
_Bool _if_conditional72;
_Bool __result131__;
_Bool _if_conditional73;
_Bool __result132__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional64=(come_push_stackframe("libneo-c-str-gc.c", 719, 999),__exception_result_var_b177=strcmp(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 719, 995)), "libneo-c-str-gc.c", 719, 996))->str,((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str-gc.c", 719, 997)), "libneo-c-str-gc.c", 719, 998))->str), come_pop_stackframe(), __exception_result_var_b177)!=0,    _if_conditional64) {
        __result123__ = (_Bool)0;
        return __result123__;
    }
    if(_if_conditional65=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 723, 1000)), "libneo-c-str-gc.c", 723, 1001))->ignore_case!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str-gc.c", 723, 1002)), "libneo-c-str-gc.c", 723, 1003))->ignore_case,    _if_conditional65) {
        __result124__ = (_Bool)0;
        return __result124__;
    }
    if(_if_conditional66=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 726, 1004)), "libneo-c-str-gc.c", 726, 1005))->multiline!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str-gc.c", 726, 1006)), "libneo-c-str-gc.c", 726, 1007))->multiline,    _if_conditional66) {
        __result125__ = (_Bool)0;
        return __result125__;
    }
    if(_if_conditional67=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 729, 1008)), "libneo-c-str-gc.c", 729, 1009))->global!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str-gc.c", 729, 1010)), "libneo-c-str-gc.c", 729, 1011))->global,    _if_conditional67) {
        __result126__ = (_Bool)0;
        return __result126__;
    }
    if(_if_conditional68=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 732, 1012)), "libneo-c-str-gc.c", 732, 1013))->extended!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str-gc.c", 732, 1014)), "libneo-c-str-gc.c", 732, 1015))->extended,    _if_conditional68) {
        __result127__ = (_Bool)0;
        return __result127__;
    }
    if(_if_conditional69=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 735, 1016)), "libneo-c-str-gc.c", 735, 1017))->dotall!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str-gc.c", 735, 1018)), "libneo-c-str-gc.c", 735, 1019))->dotall,    _if_conditional69) {
        __result128__ = (_Bool)0;
        return __result128__;
    }
    if(_if_conditional70=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 738, 1020)), "libneo-c-str-gc.c", 738, 1021))->anchored!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str-gc.c", 738, 1022)), "libneo-c-str-gc.c", 738, 1023))->anchored,    _if_conditional70) {
        __result129__ = (_Bool)0;
        return __result129__;
    }
    if(_if_conditional71=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 741, 1024)), "libneo-c-str-gc.c", 741, 1025))->dollar_endonly!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str-gc.c", 741, 1026)), "libneo-c-str-gc.c", 741, 1027))->dollar_endonly,    _if_conditional71) {
        __result130__ = (_Bool)0;
        return __result130__;
    }
    if(_if_conditional72=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 744, 1028)), "libneo-c-str-gc.c", 744, 1029))->ungreedy!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str-gc.c", 744, 1030)), "libneo-c-str-gc.c", 744, 1031))->ungreedy,    _if_conditional72) {
        __result131__ = (_Bool)0;
        return __result131__;
    }
    if(_if_conditional73=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 747, 1032)), "libneo-c-str-gc.c", 747, 1033))->options!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str-gc.c", 747, 1034)), "libneo-c-str-gc.c", 747, 1035))->options,    _if_conditional73) {
        __result132__ = (_Bool)0;
        return __result132__;
    }
    __result133__ = (_Bool)1;
    return __result133__;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
struct list$1charph* __exception_result_var_b178;
struct list$1charph* result_199;
int offset_200;
int ovec_max_201;
const char* err_205;
int erro_ofs_206;
int options_207;
char* str_208;
struct real_pcre8_or_16* re_209;
_Bool _while_condtional9;
int options_210;
unsigned long int __exception_result_var_b179;
int len_211;
int __exception_result_var_b180;
int regex_result_212;
int i_213;
int i_214;
_Bool _if_conditional74;
char* __exception_result_var_b181;
char* str_215;
struct list$1charph* __exception_result_var_b182;
_Bool _if_conditional75;
_Bool _if_conditional76;
char* __exception_result_var_b183;
char* str_216;
struct list$1charph* __exception_result_var_b184;
_Bool _if_conditional77;
int i_217;
char* __exception_result_var_b185;
char* match_string_218;
struct list$1charph* __exception_result_var_b186;
struct list$1charph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_199, 0, sizeof(struct list$1charph*));
memset(&offset_200, 0, sizeof(int));
memset(&ovec_max_201, 0, sizeof(int));
memset(&err_205, 0, sizeof(const char*));
memset(&erro_ofs_206, 0, sizeof(int));
memset(&options_207, 0, sizeof(int));
memset(&str_208, 0, sizeof(char*));
memset(&re_209, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_210, 0, sizeof(int));
memset(&len_211, 0, sizeof(int));
memset(&regex_result_212, 0, sizeof(int));
memset(&i_213, 0, sizeof(int));
memset(&i_214, 0, sizeof(int));
memset(&str_215, 0, sizeof(char*));
memset(&str_216, 0, sizeof(char*));
memset(&i_217, 0, sizeof(int));
memset(&match_string_218, 0, sizeof(char*));
    result_199=(come_push_stackframe("libneo-c-str-gc.c", 756, 1038),__exception_result_var_b178=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 756, "list$1charph"), "libneo-c-str-gc.c", 756, 1036)), "libneo-c-str-gc.c", 756, 1037))), come_pop_stackframe(), __exception_result_var_b178);
    offset_200=0;
    ovec_max_201=16;
    int start_202[ovec_max_201];
    memset(&start_202, 0, sizeof(int)    *(ovec_max_201)    );
    int end_203[ovec_max_201];
    memset(&end_203, 0, sizeof(int)    *(ovec_max_201)    );
    int ovec_value_204[ovec_max_201*3];
    memset(&ovec_value_204, 0, sizeof(int)    *(ovec_max_201*3)    );
    options_207=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 768, 1039)), "libneo-c-str-gc.c", 768, 1040))->options;
    str_208=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 769, 1041)), "libneo-c-str-gc.c", 769, 1042))->str;
    re_209=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 771, 1043)), "libneo-c-str-gc.c", 771, 1044))->re;
    while(_while_condtional9=(_Bool)1,    _while_condtional9) {
        options_210=2097152;
        len_211=(come_push_stackframe("libneo-c-str-gc.c", 777, 1045),__exception_result_var_b179=strlen(self), come_pop_stackframe(), __exception_result_var_b179);
        regex_result_212=(come_push_stackframe("libneo-c-str-gc.c", 778, 1046),__exception_result_var_b180=pcre_exec(re_209,(struct pcre_extra*)0,self,len_211,offset_200,options_210,ovec_value_204,ovec_max_201*3), come_pop_stackframe(), __exception_result_var_b180);
        for(        i_213=0;        i_213<ovec_max_201;        i_213++        ){
            (come_range_check(&((int*)come_null_check(start_202, "libneo-c-str-gc.c", 781, 1047))[i_213],((int*)come_null_check(start_202, "libneo-c-str-gc.c", 781, 1047)),((int*)come_null_check(start_202, "libneo-c-str-gc.c", 781, 1047))+(ovec_max_201), "libneo-c-str-gc.c", 781), ((int*)come_null_check(start_202, "libneo-c-str-gc.c", 781, 1047))[i_213]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_204, "libneo-c-str-gc.c", 781, 1048))[i_213*2],((int*)come_null_check(ovec_value_204, "libneo-c-str-gc.c", 781, 1048)),((int*)come_null_check(ovec_value_204, "libneo-c-str-gc.c", 781, 1048))+(ovec_max_201*3), "libneo-c-str-gc.c", 781));
        }
        for(        i_214=0;        i_214<ovec_max_201;        i_214++        ){
            (come_range_check(&((int*)come_null_check(end_203, "libneo-c-str-gc.c", 784, 1049))[i_214],((int*)come_null_check(end_203, "libneo-c-str-gc.c", 784, 1049)),((int*)come_null_check(end_203, "libneo-c-str-gc.c", 784, 1049))+(ovec_max_201), "libneo-c-str-gc.c", 784), ((int*)come_null_check(end_203, "libneo-c-str-gc.c", 784, 1049))[i_214]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_204, "libneo-c-str-gc.c", 784, 1050))[i_214*2+1],((int*)come_null_check(ovec_value_204, "libneo-c-str-gc.c", 784, 1050)),((int*)come_null_check(ovec_value_204, "libneo-c-str-gc.c", 784, 1050))+(ovec_max_201*3), "libneo-c-str-gc.c", 784));
        }
        if(_if_conditional74=regex_result_212==1,        _if_conditional74) {
            str_215=(come_push_stackframe("libneo-c-str-gc.c", 790, 1055),__exception_result_var_b181=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 790, 1051)), "libneo-c-str-gc.c", 790, 1052)),*(int*)come_range_check(&((int*)come_null_check(start_202, "libneo-c-str-gc.c", 790, 1053))[0],((int*)come_null_check(start_202, "libneo-c-str-gc.c", 790, 1053)),((int*)come_null_check(start_202, "libneo-c-str-gc.c", 790, 1053))+(ovec_max_201), "libneo-c-str-gc.c", 790),*(int*)come_range_check(&((int*)come_null_check(end_203, "libneo-c-str-gc.c", 790, 1054))[0],((int*)come_null_check(end_203, "libneo-c-str-gc.c", 790, 1054)),((int*)come_null_check(end_203, "libneo-c-str-gc.c", 790, 1054))+(ovec_max_201), "libneo-c-str-gc.c", 790)), come_pop_stackframe(), __exception_result_var_b181);
            (come_push_stackframe("libneo-c-str-gc.c", 791, 1058),__exception_result_var_b182=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_199, "libneo-c-str-gc.c", 791, 1056)), "libneo-c-str-gc.c", 791, 1057)),str_215), come_pop_stackframe(), __exception_result_var_b182);
            if(_if_conditional75=offset_200==*(int*)come_range_check(&((int*)come_null_check(end_203, "libneo-c-str-gc.c", 793, 1059))[0],((int*)come_null_check(end_203, "libneo-c-str-gc.c", 793, 1059)),((int*)come_null_check(end_203, "libneo-c-str-gc.c", 793, 1059))+(ovec_max_201), "libneo-c-str-gc.c", 793),            _if_conditional75) {
                offset_200++;
            }
            else {
                offset_200=*(int*)come_range_check(&((int*)come_null_check(end_203, "libneo-c-str-gc.c", 797, 1060))[0],((int*)come_null_check(end_203, "libneo-c-str-gc.c", 797, 1060)),((int*)come_null_check(end_203, "libneo-c-str-gc.c", 797, 1060))+(ovec_max_201), "libneo-c-str-gc.c", 797);
            }
        }
        else {
            if(_if_conditional76=regex_result_212>1,            _if_conditional76) {
                str_216=(come_push_stackframe("libneo-c-str-gc.c", 802, 1065),__exception_result_var_b183=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 802, 1061)), "libneo-c-str-gc.c", 802, 1062)),*(int*)come_range_check(&((int*)come_null_check(start_202, "libneo-c-str-gc.c", 802, 1063))[0],((int*)come_null_check(start_202, "libneo-c-str-gc.c", 802, 1063)),((int*)come_null_check(start_202, "libneo-c-str-gc.c", 802, 1063))+(ovec_max_201), "libneo-c-str-gc.c", 802),*(int*)come_range_check(&((int*)come_null_check(end_203, "libneo-c-str-gc.c", 802, 1064))[0],((int*)come_null_check(end_203, "libneo-c-str-gc.c", 802, 1064)),((int*)come_null_check(end_203, "libneo-c-str-gc.c", 802, 1064))+(ovec_max_201), "libneo-c-str-gc.c", 802)), come_pop_stackframe(), __exception_result_var_b183);
                (come_push_stackframe("libneo-c-str-gc.c", 803, 1068),__exception_result_var_b184=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_199, "libneo-c-str-gc.c", 803, 1066)), "libneo-c-str-gc.c", 803, 1067)),str_216), come_pop_stackframe(), __exception_result_var_b184);
                if(_if_conditional77=offset_200==*(int*)come_range_check(&((int*)come_null_check(end_203, "libneo-c-str-gc.c", 805, 1069))[0],((int*)come_null_check(end_203, "libneo-c-str-gc.c", 805, 1069)),((int*)come_null_check(end_203, "libneo-c-str-gc.c", 805, 1069))+(ovec_max_201), "libneo-c-str-gc.c", 805),                _if_conditional77) {
                    offset_200++;
                }
                else {
                    offset_200=*(int*)come_range_check(&((int*)come_null_check(end_203, "libneo-c-str-gc.c", 809, 1070))[0],((int*)come_null_check(end_203, "libneo-c-str-gc.c", 809, 1070)),((int*)come_null_check(end_203, "libneo-c-str-gc.c", 809, 1070))+(ovec_max_201), "libneo-c-str-gc.c", 809);
                }
                *((int*)come_null_check(num_group_string_in_regex, "libneo-c-str-gc.c", 812, 1071))=regex_result_212-1;
                for(                i_217=1;                i_217<regex_result_212;                i_217++                ){
                    match_string_218=(come_push_stackframe("libneo-c-str-gc.c", 814, 1076),__exception_result_var_b185=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 814, 1072)), "libneo-c-str-gc.c", 814, 1073)),*(int*)come_range_check(&((int*)come_null_check(start_202, "libneo-c-str-gc.c", 814, 1074))[i_217],((int*)come_null_check(start_202, "libneo-c-str-gc.c", 814, 1074)),((int*)come_null_check(start_202, "libneo-c-str-gc.c", 814, 1074))+(ovec_max_201), "libneo-c-str-gc.c", 814),*(int*)come_range_check(&((int*)come_null_check(end_203, "libneo-c-str-gc.c", 814, 1075))[i_217],((int*)come_null_check(end_203, "libneo-c-str-gc.c", 814, 1075)),((int*)come_null_check(end_203, "libneo-c-str-gc.c", 814, 1075))+(ovec_max_201), "libneo-c-str-gc.c", 814)), come_pop_stackframe(), __exception_result_var_b185);
                    (come_push_stackframe("libneo-c-str-gc.c", 815, 1079),__exception_result_var_b186=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings, "libneo-c-str-gc.c", 815, 1077)), "libneo-c-str-gc.c", 815, 1078)),match_string_218), come_pop_stackframe(), __exception_result_var_b186);
                }
            }
            else {
                break;
            }
        }
    }
    __result134__ = __result_obj__ = result_199;
    return __result134__;
}

char* charp_strip(char* self){
void* __result_obj__;
char* __exception_result_var_b187;
char* result_219;
unsigned long int __exception_result_var_b188;
int len_220;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_219, 0, sizeof(char*));
memset(&len_220, 0, sizeof(int));
    result_219=(come_push_stackframe("libneo-c-str-gc.c", 830, 1080),__exception_result_var_b187=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b187);
    len_220=(come_push_stackframe("libneo-c-str-gc.c", 832, 1081),__exception_result_var_b188=strlen(self), come_pop_stackframe(), __exception_result_var_b188);
    if(_if_conditional78=((char*)come_null_check(self, "libneo-c-str-gc.c", 834, 1082))[len_220-1]==10,    _if_conditional78) {
        ((char*)come_null_check(result_219, "libneo-c-str-gc.c", 835, 1083))[len_220-1]=0;
    }
    else {
        if(_if_conditional79=((char*)come_null_check(self, "libneo-c-str-gc.c", 837, 1084))[len_220-1]==13,        _if_conditional79) {
            ((char*)come_null_check(result_219, "libneo-c-str-gc.c", 838, 1085))[len_220-1]=0;
        }
        else {
            if(_if_conditional80=len_220>2&&((char*)come_null_check(self, "libneo-c-str-gc.c", 840, 1086))[len_220-2]==13&&((char*)come_null_check(self, "libneo-c-str-gc.c", 840, 1087))[len_220-1]==10,            _if_conditional80) {
                ((char*)come_null_check(result_219, "libneo-c-str-gc.c", 841, 1088))[len_220-2]=0;
            }
        }
    }
    __result135__ = __result_obj__ = result_219;
    return __result135__;
}

char* charp_printable(char* str){
void* __result_obj__;
int __exception_result_var_b189;
int len_221;
char* result_222;
int n_223;
int i_224;
char c_225;
_Bool _if_conditional81;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_221, 0, sizeof(int));
memset(&result_222, 0, sizeof(char*));
memset(&n_223, 0, sizeof(int));
memset(&i_224, 0, sizeof(int));
memset(&c_225, 0, sizeof(char));
    len_221=(come_push_stackframe("libneo-c-str-gc.c", 849, 1091),__exception_result_var_b189=charp_length(((char*)come_null_check(((char*)come_null_check(str, "libneo-c-str-gc.c", 849, 1089)), "libneo-c-str-gc.c", 849, 1090))), come_pop_stackframe(), __exception_result_var_b189);
    result_222=(char*)come_calloc(1, sizeof(char)*(1*(len_221*2+1)), "libneo-c-str-gc.c", 850, "char");
    n_223=0;
    for(    i_224=0;    i_224<len_221;    i_224++    ){
        c_225=((char*)come_null_check(str, "libneo-c-str-gc.c", 854, 1092))[i_224];
        if(_if_conditional81=(c_225>=0&&c_225<32)||c_225==127,        _if_conditional81) {
            ((char*)come_null_check(result_222, "libneo-c-str-gc.c", 859, 1093))[n_223++]=94;
            ((char*)come_null_check(result_222, "libneo-c-str-gc.c", 860, 1094))[n_223++]=c_225+65-1;
        }
        else {
            ((char*)come_null_check(result_222, "libneo-c-str-gc.c", 863, 1095))[n_223++]=c_225;
        }
    }
    ((char*)come_null_check(result_222, "libneo-c-str-gc.c", 869, 1096))[n_223]=0;
    __result136__ = __result_obj__ = result_222;
    return __result136__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__;
unsigned long int __exception_result_var_b190;
int len_226;
char* result_227;
unsigned long int __exception_result_var_b191;
_Bool _if_conditional82;
char* __exception_result_var_b192;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_226, 0, sizeof(int));
memset(&result_227, 0, sizeof(char*));
    len_226=4*((come_push_stackframe("libneo-c-str-gc.c", 874, 1097),__exception_result_var_b190=wcslen(wstr), come_pop_stackframe(), __exception_result_var_b190)+1);
    result_227=(char*)come_calloc(1, sizeof(char)*(1*(len_226)), "libneo-c-str-gc.c", 876, "char");
    if(_if_conditional82=(come_push_stackframe("libneo-c-str-gc.c", 878, 1098),__exception_result_var_b191=wcstombs(result_227,wstr,len_226), come_pop_stackframe(), __exception_result_var_b191)<0,    _if_conditional82) {
        (come_push_stackframe("libneo-c-str-gc.c", 880, 1099),__exception_result_var_b192=strncpy(result_227,"",len_226), come_pop_stackframe(), __exception_result_var_b192);
    }
    __result137__ = __result_obj__ = result_227;
    return __result137__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__;
unsigned int* __exception_result_var_b193;
unsigned int* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    __result138__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 888, 1100),__exception_result_var_b193=__builtin_wstring(str), come_pop_stackframe(), __exception_result_var_b193);
    return __result138__;
}

int wchar_tp_length(unsigned int* str){
void* __result_obj__;
unsigned long int __exception_result_var_b194;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    __result139__ = (come_push_stackframe("libneo-c-str-gc.c", 893, 1101),__exception_result_var_b194=wcslen(str), come_pop_stackframe(), __exception_result_var_b194);
    return __result139__;
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
unsigned long int __exception_result_var_b195;
int len_228;
_Bool _if_conditional83;
char* __exception_result_var_b196;
unsigned int* __exception_result_var_b197;
unsigned int* __result140__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
char* __exception_result_var_b198;
unsigned int* __exception_result_var_b199;
unsigned int* __result141__;
_Bool _if_conditional88;
unsigned int* __exception_result_var_b200;
unsigned int* sub_str_229;
int __exception_result_var_b201;
void* __exception_result_var_b202;
char* __exception_result_var_b203;
unsigned int* __exception_result_var_b204;
unsigned int* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_228, 0, sizeof(int));
memset(&sub_str_229, 0, sizeof(unsigned int*));
    len_228=(come_push_stackframe("libneo-c-str-gc.c", 900, 1102),__exception_result_var_b195=wcslen(str), come_pop_stackframe(), __exception_result_var_b195);
    if(_if_conditional83=len_228==0,    _if_conditional83) {
        __result140__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 903, 1108),__exception_result_var_b197=string_to_wstring(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c-str-gc.c", 903, 1105),__exception_result_var_b196=wchar_tp_to_string(((unsigned int*)come_null_check(((unsigned int*)come_null_check(str, "libneo-c-str-gc.c", 903, 1103)), "libneo-c-str-gc.c", 903, 1104))), come_pop_stackframe(), __exception_result_var_b196), "libneo-c-str-gc.c", 903, 1106)), "libneo-c-str-gc.c", 903, 1107))), come_pop_stackframe(), __exception_result_var_b197);
        return __result140__;
    }
    if(_if_conditional84=head<0,    _if_conditional84) {
        head+=len_228;
    }
    if(_if_conditional85=tail<0,    _if_conditional85) {
        tail+=len_228+1;
    }
    if(_if_conditional86=head<0,    _if_conditional86) {
        head=0;
    }
    if(_if_conditional87=tail<0,    _if_conditional87) {
        __result141__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 919, 1114),__exception_result_var_b199=string_to_wstring(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c-str-gc.c", 919, 1111),__exception_result_var_b198=wchar_tp_to_string(((unsigned int*)come_null_check(((unsigned int*)come_null_check(str, "libneo-c-str-gc.c", 919, 1109)), "libneo-c-str-gc.c", 919, 1110))), come_pop_stackframe(), __exception_result_var_b198), "libneo-c-str-gc.c", 919, 1112)), "libneo-c-str-gc.c", 919, 1113))), come_pop_stackframe(), __exception_result_var_b199);
        return __result141__;
    }
    if(_if_conditional88=tail>=len_228,    _if_conditional88) {
        tail=len_228;
    }
    sub_str_229=(come_push_stackframe("libneo-c-str-gc.c", 926, 1117),__exception_result_var_b200=wchar_tp_substring(((unsigned int*)come_null_check(((unsigned int*)come_null_check(str, "libneo-c-str-gc.c", 926, 1115)), "libneo-c-str-gc.c", 926, 1116)),tail,-1), come_pop_stackframe(), __exception_result_var_b200);
    (come_push_stackframe("libneo-c-str-gc.c", 928, 1121),__exception_result_var_b202=memcpy(str+head,sub_str_229,sizeof(unsigned int)*((come_push_stackframe("libneo-c-str-gc.c", 928, 1120),__exception_result_var_b201=wstring_length(((unsigned int*)come_null_check(((unsigned int*)come_null_check(sub_str_229, "libneo-c-str-gc.c", 928, 1118)), "libneo-c-str-gc.c", 928, 1119))), come_pop_stackframe(), __exception_result_var_b201)+1)), come_pop_stackframe(), __exception_result_var_b202);
    __result142__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 930, 1127),__exception_result_var_b204=string_to_wstring(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c-str-gc.c", 930, 1124),__exception_result_var_b203=wchar_tp_to_string(((unsigned int*)come_null_check(((unsigned int*)come_null_check(str, "libneo-c-str-gc.c", 930, 1122)), "libneo-c-str-gc.c", 930, 1123))), come_pop_stackframe(), __exception_result_var_b203), "libneo-c-str-gc.c", 930, 1125)), "libneo-c-str-gc.c", 930, 1126))), come_pop_stackframe(), __exception_result_var_b204);
    return __result142__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
unsigned int* __exception_result_var_b205;
unsigned int* head_230;
_Bool _if_conditional89;
int __result143__;
int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_230, 0, sizeof(unsigned int*));
    head_230=(come_push_stackframe("libneo-c-str-gc.c", 937, 1128),__exception_result_var_b205=wcsstr(str,search_str), come_pop_stackframe(), __exception_result_var_b205);
    if(_if_conditional89=head_230==((void*)0),    _if_conditional89) {
        __result143__ = default_value;
        return __result143__;
    }
    __result144__ = head_230-str;
    return __result144__;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
unsigned long int __exception_result_var_b206;
int len_231;
unsigned long int __exception_result_var_b207;
unsigned int* p_232;
_Bool _while_condtional10;
unsigned long int __exception_result_var_b208;
int len2_233;
_Bool result_234;
int i_235;
_Bool _if_conditional90;
_Bool _if_conditional91;
int __result145__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_231, 0, sizeof(int));
memset(&p_232, 0, sizeof(unsigned int*));
memset(&len2_233, 0, sizeof(int));
memset(&result_234, 0, sizeof(_Bool));
memset(&i_235, 0, sizeof(int));
    len_231=(come_push_stackframe("libneo-c-str-gc.c", 950, 1129),__exception_result_var_b206=wcslen(search_str), come_pop_stackframe(), __exception_result_var_b206);
    p_232=str+(come_push_stackframe("libneo-c-str-gc.c", 952, 1130),__exception_result_var_b207=wcslen(str), come_pop_stackframe(), __exception_result_var_b207)-len_231;
    while(_while_condtional10=p_232>=str,    _while_condtional10) {
        len2_233=(come_push_stackframe("libneo-c-str-gc.c", 955, 1131),__exception_result_var_b208=wcslen(p_232), come_pop_stackframe(), __exception_result_var_b208);
        result_234=(_Bool)1;
        for(        i_235=0;        i_235<len_231&&i_235<len2_233;        i_235++        ){
            if(_if_conditional90=((unsigned int*)come_null_check(p_232, "libneo-c-str-gc.c", 959, 1132))[i_235]!=((unsigned int*)come_null_check(search_str, "libneo-c-str-gc.c", 959, 1133))[i_235],            _if_conditional90) {
                result_234=(_Bool)0;
            }
        }
        if(result_234) {
            __result145__ = (p_232-str);
            return __result145__;
        }
        p_232--;
    }
    __result146__ = default_value;
    return __result146__;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__;
unsigned long int __exception_result_var_b209;
int len_236;
unsigned int* result_237;
int i_238;
unsigned int* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_236, 0, sizeof(int));
memset(&result_237, 0, sizeof(unsigned int*));
memset(&i_238, 0, sizeof(int));
    len_236=(come_push_stackframe("libneo-c-str-gc.c", 975, 1134),__exception_result_var_b209=wcslen(str), come_pop_stackframe(), __exception_result_var_b209);
    result_237=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_236+1)), "libneo-c-str-gc.c", 976, "int");
    for(    i_238=0;    i_238<len_236;    i_238++    ){
        ((unsigned int*)come_null_check(result_237, "libneo-c-str-gc.c", 979, 1135))[i_238]=((unsigned int*)come_null_check(str, "libneo-c-str-gc.c", 979, 1136))[len_236-i_238-1];
    }
    ((unsigned int*)come_null_check(result_237, "libneo-c-str-gc.c", 982, 1137))[len_236]=0;
    __result147__ = __result_obj__ = result_237;
    return __result147__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__;
unsigned long int __exception_result_var_b210;
int len_239;
unsigned int* result_240;
int i_241;
unsigned int* __exception_result_var_b211;
unsigned int* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_239, 0, sizeof(int));
memset(&result_240, 0, sizeof(unsigned int*));
memset(&i_241, 0, sizeof(int));
    len_239=(come_push_stackframe("libneo-c-str-gc.c", 989, 1138),__exception_result_var_b210=wcslen(str), come_pop_stackframe(), __exception_result_var_b210)*n+1;
    result_240=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_239)), "libneo-c-str-gc.c", 991, "int");
    ((unsigned int*)come_null_check(result_240, "libneo-c-str-gc.c", 993, 1139))[0]=0;
    for(    i_241=0;    i_241<n;    i_241++    ){
        (come_push_stackframe("libneo-c-str-gc.c", 996, 1140),__exception_result_var_b211=wcscat(result_240,str), come_pop_stackframe(), __exception_result_var_b211);
    }
    __result148__ = __result_obj__ = result_240;
    return __result148__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__;
int __exception_result_var_b212;
int len_242;
unsigned int* result_243;
int n_244;
int i_245;
unsigned int c_246;
_Bool _if_conditional92;
unsigned int* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_242, 0, sizeof(int));
memset(&result_243, 0, sizeof(unsigned int*));
memset(&n_244, 0, sizeof(int));
memset(&i_245, 0, sizeof(int));
memset(&c_246, 0, sizeof(unsigned int));
    len_242=(come_push_stackframe("libneo-c-str-gc.c", 1004, 1143),__exception_result_var_b212=wchar_tp_length(((unsigned int*)come_null_check(((unsigned int*)come_null_check(str, "libneo-c-str-gc.c", 1004, 1141)), "libneo-c-str-gc.c", 1004, 1142))), come_pop_stackframe(), __exception_result_var_b212);
    result_243=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_242*2+1)), "libneo-c-str-gc.c", 1005, "int");
    n_244=0;
    for(    i_245=0;    i_245<len_242;    i_245++    ){
        c_246=((unsigned int*)come_null_check(str, "libneo-c-str-gc.c", 1009, 1144))[i_245];
        if(_if_conditional92=(c_246>=0&&c_246<32)||c_246==127,        _if_conditional92) {
            ((unsigned int*)come_null_check(result_243, "libneo-c-str-gc.c", 1014, 1145))[n_244++]=94;
            ((unsigned int*)come_null_check(result_243, "libneo-c-str-gc.c", 1015, 1146))[n_244++]=c_246+65-1;
        }
        else {
            ((unsigned int*)come_null_check(result_243, "libneo-c-str-gc.c", 1018, 1147))[n_244++]=c_246;
        }
    }
    ((unsigned int*)come_null_check(result_243, "libneo-c-str-gc.c", 1024, 1148))[n_244]=0;
    __result149__ = __result_obj__ = result_243;
    return __result149__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
int offset_247;
int ovec_max_248;
const char* err_252;
int erro_ofs_253;
int options_254;
char* str_255;
struct real_pcre8_or_16* re_256;
int n_257;
_Bool _while_condtional11;
int options_258;
unsigned long int __exception_result_var_b213;
int len_259;
int __exception_result_var_b214;
int regex_result_260;
int i_261;
int i_262;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool __result150__;
_Bool _if_conditional95;
_Bool _if_conditional96;
struct list$1charph* __exception_result_var_b215;
int i_265;
char* __exception_result_var_b216;
char* match_string_266;
struct list$1charph* __exception_result_var_b217;
_Bool _if_conditional97;
_Bool __result152__;
_Bool _if_conditional98;
_Bool __result153__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_247, 0, sizeof(int));
memset(&ovec_max_248, 0, sizeof(int));
memset(&err_252, 0, sizeof(const char*));
memset(&erro_ofs_253, 0, sizeof(int));
memset(&options_254, 0, sizeof(int));
memset(&str_255, 0, sizeof(char*));
memset(&re_256, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_257, 0, sizeof(int));
memset(&options_258, 0, sizeof(int));
memset(&len_259, 0, sizeof(int));
memset(&regex_result_260, 0, sizeof(int));
memset(&i_261, 0, sizeof(int));
memset(&i_262, 0, sizeof(int));
memset(&i_265, 0, sizeof(int));
memset(&match_string_266, 0, sizeof(char*));
    offset_247=0;
    ovec_max_248=16;
    int start_249[ovec_max_248];
    memset(&start_249, 0, sizeof(int)    *(ovec_max_248)    );
    int end_250[ovec_max_248];
    memset(&end_250, 0, sizeof(int)    *(ovec_max_248)    );
    int ovec_value_251[ovec_max_248*3];
    memset(&ovec_value_251, 0, sizeof(int)    *(ovec_max_248*3)    );
    options_254=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1039, 1149)), "libneo-c-str-gc.c", 1039, 1150))->options;
    str_255=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1040, 1151)), "libneo-c-str-gc.c", 1040, 1152))->str;
    re_256=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1042, 1153)), "libneo-c-str-gc.c", 1042, 1154))->re;
    n_257=0;
    while(_while_condtional11=(_Bool)1,    _while_condtional11) {
        options_258=2097152;
        len_259=(come_push_stackframe("libneo-c-str-gc.c", 1048, 1155),__exception_result_var_b213=strlen(self), come_pop_stackframe(), __exception_result_var_b213);
        regex_result_260=(come_push_stackframe("libneo-c-str-gc.c", 1050, 1156),__exception_result_var_b214=pcre_exec(re_256,(struct pcre_extra*)0,self,len_259,offset_247,options_258,ovec_value_251,ovec_max_248*3), come_pop_stackframe(), __exception_result_var_b214);
        for(        i_261=0;        i_261<ovec_max_248;        i_261++        ){
            (come_range_check(&((int*)come_null_check(start_249, "libneo-c-str-gc.c", 1053, 1157))[i_261],((int*)come_null_check(start_249, "libneo-c-str-gc.c", 1053, 1157)),((int*)come_null_check(start_249, "libneo-c-str-gc.c", 1053, 1157))+(ovec_max_248), "libneo-c-str-gc.c", 1053), ((int*)come_null_check(start_249, "libneo-c-str-gc.c", 1053, 1157))[i_261]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_251, "libneo-c-str-gc.c", 1053, 1158))[i_261*2],((int*)come_null_check(ovec_value_251, "libneo-c-str-gc.c", 1053, 1158)),((int*)come_null_check(ovec_value_251, "libneo-c-str-gc.c", 1053, 1158))+(ovec_max_248*3), "libneo-c-str-gc.c", 1053));
        }
        for(        i_262=0;        i_262<ovec_max_248;        i_262++        ){
            (come_range_check(&((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1056, 1159))[i_262],((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1056, 1159)),((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1056, 1159))+(ovec_max_248), "libneo-c-str-gc.c", 1056), ((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1056, 1159))[i_262]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_251, "libneo-c-str-gc.c", 1056, 1160))[i_262*2+1],((int*)come_null_check(ovec_value_251, "libneo-c-str-gc.c", 1056, 1160)),((int*)come_null_check(ovec_value_251, "libneo-c-str-gc.c", 1056, 1160))+(ovec_max_248*3), "libneo-c-str-gc.c", 1056));
        }
        if(_if_conditional93=regex_result_260==1||(group_strings==((void*)0)&&regex_result_260>0),        _if_conditional93) {
            n_257++;
            if(_if_conditional94=n_257==count,            _if_conditional94) {
                __result150__ = (_Bool)1;
                return __result150__;
            }
            if(_if_conditional95=offset_247==*(int*)come_range_check(&((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1068, 1161))[0],((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1068, 1161)),((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1068, 1161))+(ovec_max_248), "libneo-c-str-gc.c", 1068),            _if_conditional95) {
                offset_247++;
            }
            else {
                offset_247=*(int*)come_range_check(&((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1072, 1162))[0],((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1072, 1162)),((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1072, 1162))+(ovec_max_248), "libneo-c-str-gc.c", 1072);
            }
        }
        else {
            if(_if_conditional96=regex_result_260>1,            _if_conditional96) {
                n_257++;
                (come_push_stackframe("libneo-c-str-gc.c", 1079, 1175),__exception_result_var_b215=list$1charph_reset(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings, "libneo-c-str-gc.c", 1079, 1163)), "libneo-c-str-gc.c", 1079, 1164))), come_pop_stackframe(), __exception_result_var_b215);
                for(                i_265=1;                i_265<regex_result_260;                i_265++                ){
                    match_string_266=(come_push_stackframe("libneo-c-str-gc.c", 1081, 1180),__exception_result_var_b216=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1081, 1176)), "libneo-c-str-gc.c", 1081, 1177)),*(int*)come_range_check(&((int*)come_null_check(start_249, "libneo-c-str-gc.c", 1081, 1178))[i_265],((int*)come_null_check(start_249, "libneo-c-str-gc.c", 1081, 1178)),((int*)come_null_check(start_249, "libneo-c-str-gc.c", 1081, 1178))+(ovec_max_248), "libneo-c-str-gc.c", 1081),*(int*)come_range_check(&((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1081, 1179))[i_265],((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1081, 1179)),((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1081, 1179))+(ovec_max_248), "libneo-c-str-gc.c", 1081)), come_pop_stackframe(), __exception_result_var_b216);
                    (come_push_stackframe("libneo-c-str-gc.c", 1082, 1183),__exception_result_var_b217=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings, "libneo-c-str-gc.c", 1082, 1181)), "libneo-c-str-gc.c", 1082, 1182)),match_string_266), come_pop_stackframe(), __exception_result_var_b217);
                }
                if(_if_conditional97=n_257==count,                _if_conditional97) {
                    __result152__ = (_Bool)1;
                    return __result152__;
                }
                if(_if_conditional98=offset_247==*(int*)come_range_check(&((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1089, 1184))[0],((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1089, 1184)),((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1089, 1184))+(ovec_max_248), "libneo-c-str-gc.c", 1089),                _if_conditional98) {
                    offset_247++;
                }
                else {
                    offset_247=*(int*)come_range_check(&((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1093, 1185))[0],((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1093, 1185)),((int*)come_null_check(end_250, "libneo-c-str-gc.c", 1093, 1185))+(ovec_max_248), "libneo-c-str-gc.c", 1093);
                }
            }
            else {
                __result153__ = (_Bool)0;
                return __result153__;
            }
        }
    }
    __result154__ = (_Bool)0;
    return __result154__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_263;
_Bool _while_condtional12;
struct list_item$1charph* prev_it_264;
struct list$1charph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_263, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_264, 0, sizeof(struct list_item$1charph*));
                    it_263=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 426, 1165)), "./neo-c.h", 426, 1166))->head;
                    while(_while_condtional12=it_263!=((void*)0),                    _while_condtional12) {
                        prev_it_264=it_263;
                        it_263=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_263, "./neo-c.h", 429, 1167)), "./neo-c.h", 429, 1168))->next;
                    }
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 433, 1169)), "./neo-c.h", 433, 1170))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 434, 1171)), "./neo-c.h", 434, 1172))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 436, 1173)), "./neo-c.h", 436, 1174))->len=0;
                    __result151__ = __result_obj__ = self;
                    return __result151__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b218;
int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = (come_push_stackframe("libneo-c-str-gc.c", 1108, 1186),__exception_result_var_b218=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b218);
    return __result155__;
}

int wstring_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b219;
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = (come_push_stackframe("libneo-c-str-gc.c", 1113, 1187),__exception_result_var_b219=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b219);
    return __result156__;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
void* __result_obj__;
unsigned int __exception_result_var_b220;
unsigned int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = (come_push_stackframe("libneo-c-str-gc.c", 1118, 1192),__exception_result_var_b220=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1118, 1188)), "libneo-c-str-gc.c", 1118, 1189))->str, "libneo-c-str-gc.c", 1118, 1190)), "libneo-c-str-gc.c", 1118, 1191))), come_pop_stackframe(), __exception_result_var_b220);
    return __result157__;
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    __result158__ = left==right;
    return __result158__;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __exception_result_var_b221;
unsigned int* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 1129, 1193),__exception_result_var_b221=wchar_tp_multiply(str,n), come_pop_stackframe(), __exception_result_var_b221);
    return __result159__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __exception_result_var_b222;
unsigned int* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    __result160__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 1134, 1194),__exception_result_var_b222=wchar_tp_multiply(str,n), come_pop_stackframe(), __exception_result_var_b222);
    return __result160__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b223;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = (come_push_stackframe("libneo-c-str-gc.c", 1139, 1195),__exception_result_var_b223=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b223)==0;
    return __result161__;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b224;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = (come_push_stackframe("libneo-c-str-gc.c", 1144, 1196),__exception_result_var_b224=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b224)==0;
    return __result162__;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b225;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = (come_push_stackframe("libneo-c-str-gc.c", 1149, 1197),__exception_result_var_b225=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b225)!=0;
    return __result163__;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b226;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = (come_push_stackframe("libneo-c-str-gc.c", 1154, 1198),__exception_result_var_b226=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b226)!=0;
    return __result164__;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __exception_result_var_b227;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    __result165__ = (come_push_stackframe("libneo-c-str-gc.c", 1159, 1201),__exception_result_var_b227=come_regex_equals(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 1159, 1199)), "libneo-c-str-gc.c", 1159, 1200)),right), come_pop_stackframe(), __exception_result_var_b227);
    return __result165__;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __exception_result_var_b228;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = !(come_push_stackframe("libneo-c-str-gc.c", 1164, 1204),__exception_result_var_b228=come_regex_equals(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str-gc.c", 1164, 1202)), "libneo-c-str-gc.c", 1164, 1203)),right), come_pop_stackframe(), __exception_result_var_b228);
    return __result166__;
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
unsigned long int __exception_result_var_b229;
unsigned long int __exception_result_var_b230;
unsigned int* result_267;
unsigned int* __exception_result_var_b231;
unsigned int* __exception_result_var_b232;
unsigned int* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_267, 0, sizeof(unsigned int*));
    result_267=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*((come_push_stackframe("libneo-c-str-gc.c", 1169, 1205),__exception_result_var_b229=wcslen(left), come_pop_stackframe(), __exception_result_var_b229)+(come_push_stackframe("libneo-c-str-gc.c", 1169, 1206),__exception_result_var_b230=wcslen(right), come_pop_stackframe(), __exception_result_var_b230)+1)), "libneo-c-str-gc.c", 1169, "int");
    (come_push_stackframe("libneo-c-str-gc.c", 1171, 1207),__exception_result_var_b231=wcscpy(result_267,left), come_pop_stackframe(), __exception_result_var_b231);
    (come_push_stackframe("libneo-c-str-gc.c", 1172, 1208),__exception_result_var_b232=wcscat(result_267,right), come_pop_stackframe(), __exception_result_var_b232);
    __result167__ = __result_obj__ = result_267;
    return __result167__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
unsigned long int __exception_result_var_b233;
unsigned long int __exception_result_var_b234;
unsigned int* result_268;
unsigned int* __exception_result_var_b235;
unsigned int* __exception_result_var_b236;
unsigned int* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_268, 0, sizeof(unsigned int*));
    result_268=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*((come_push_stackframe("libneo-c-str-gc.c", 1179, 1209),__exception_result_var_b233=wcslen(left), come_pop_stackframe(), __exception_result_var_b233)+(come_push_stackframe("libneo-c-str-gc.c", 1179, 1210),__exception_result_var_b234=wcslen(right), come_pop_stackframe(), __exception_result_var_b234)+1)), "libneo-c-str-gc.c", 1179, "int");
    (come_push_stackframe("libneo-c-str-gc.c", 1181, 1211),__exception_result_var_b235=wcscpy(result_268,left), come_pop_stackframe(), __exception_result_var_b235);
    (come_push_stackframe("libneo-c-str-gc.c", 1182, 1212),__exception_result_var_b236=wcscat(result_268,right), come_pop_stackframe(), __exception_result_var_b236);
    __result168__ = __result_obj__ = result_268;
    return __result168__;
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
char* __exception_result_var_b237;
char* head_269;
_Bool _if_conditional99;
int __result169__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_269, 0, sizeof(char*));
    head_269=(come_push_stackframe("libneo-c-str-gc.c", 1191, 1213),__exception_result_var_b237=strstr(str,search_str), come_pop_stackframe(), __exception_result_var_b237);
    if(_if_conditional99=head_269==((void*)0),    _if_conditional99) {
        __result169__ = default_value;
        return __result169__;
    }
    __result170__ = head_269-str;
    return __result170__;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int ovec_max_270;
int result_274;
int offset_275;
const char* err_276;
int erro_ofs_277;
int options_278;
char* str_279;
struct real_pcre8_or_16* re_280;
_Bool _while_condtional13;
int options_281;
unsigned long int __exception_result_var_b238;
int len_282;
int __exception_result_var_b239;
int regex_result_283;
int i_284;
int i_285;
_Bool _if_conditional100;
int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_270, 0, sizeof(int));
memset(&result_274, 0, sizeof(int));
memset(&offset_275, 0, sizeof(int));
memset(&err_276, 0, sizeof(const char*));
memset(&erro_ofs_277, 0, sizeof(int));
memset(&options_278, 0, sizeof(int));
memset(&str_279, 0, sizeof(char*));
memset(&re_280, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_281, 0, sizeof(int));
memset(&len_282, 0, sizeof(int));
memset(&regex_result_283, 0, sizeof(int));
memset(&i_284, 0, sizeof(int));
memset(&i_285, 0, sizeof(int));
    ovec_max_270=16;
    int start_271[ovec_max_270];
    memset(&start_271, 0, sizeof(int)    *(ovec_max_270)    );
    int end_272[ovec_max_270];
    memset(&end_272, 0, sizeof(int)    *(ovec_max_270)    );
    int ovec_value_273[ovec_max_270*3];
    memset(&ovec_value_273, 0, sizeof(int)    *(ovec_max_270*3)    );
    result_274=default_value;
    offset_275=0;
    options_278=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1215, 1214)), "libneo-c-str-gc.c", 1215, 1215))->options;
    str_279=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1216, 1216)), "libneo-c-str-gc.c", 1216, 1217))->str;
    re_280=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1218, 1218)), "libneo-c-str-gc.c", 1218, 1219))->re;
    while(_while_condtional13=(_Bool)1,    _while_condtional13) {
        options_281=2097152;
        len_282=(come_push_stackframe("libneo-c-str-gc.c", 1222, 1220),__exception_result_var_b238=strlen(self), come_pop_stackframe(), __exception_result_var_b238);
        regex_result_283=(come_push_stackframe("libneo-c-str-gc.c", 1223, 1221),__exception_result_var_b239=pcre_exec(re_280,(struct pcre_extra*)0,self,len_282,offset_275,options_281,ovec_value_273,ovec_max_270*3), come_pop_stackframe(), __exception_result_var_b239);
        for(        i_284=0;        i_284<ovec_max_270;        i_284++        ){
            (come_range_check(&((int*)come_null_check(start_271, "libneo-c-str-gc.c", 1226, 1222))[i_284],((int*)come_null_check(start_271, "libneo-c-str-gc.c", 1226, 1222)),((int*)come_null_check(start_271, "libneo-c-str-gc.c", 1226, 1222))+(ovec_max_270), "libneo-c-str-gc.c", 1226), ((int*)come_null_check(start_271, "libneo-c-str-gc.c", 1226, 1222))[i_284]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_273, "libneo-c-str-gc.c", 1226, 1223))[i_284*2],((int*)come_null_check(ovec_value_273, "libneo-c-str-gc.c", 1226, 1223)),((int*)come_null_check(ovec_value_273, "libneo-c-str-gc.c", 1226, 1223))+(ovec_max_270*3), "libneo-c-str-gc.c", 1226));
        }
        for(        i_285=0;        i_285<ovec_max_270;        i_285++        ){
            (come_range_check(&((int*)come_null_check(end_272, "libneo-c-str-gc.c", 1229, 1224))[i_285],((int*)come_null_check(end_272, "libneo-c-str-gc.c", 1229, 1224)),((int*)come_null_check(end_272, "libneo-c-str-gc.c", 1229, 1224))+(ovec_max_270), "libneo-c-str-gc.c", 1229), ((int*)come_null_check(end_272, "libneo-c-str-gc.c", 1229, 1224))[i_285]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_273, "libneo-c-str-gc.c", 1229, 1225))[i_285*2+1],((int*)come_null_check(ovec_value_273, "libneo-c-str-gc.c", 1229, 1225)),((int*)come_null_check(ovec_value_273, "libneo-c-str-gc.c", 1229, 1225))+(ovec_max_270*3), "libneo-c-str-gc.c", 1229));
        }
        if(_if_conditional100=regex_result_283==1||regex_result_283>0,        _if_conditional100) {
            result_274=*(int*)come_range_check(&((int*)come_null_check(start_271, "libneo-c-str-gc.c", 1235, 1226))[0],((int*)come_null_check(start_271, "libneo-c-str-gc.c", 1235, 1226)),((int*)come_null_check(start_271, "libneo-c-str-gc.c", 1235, 1226))+(ovec_max_270), "libneo-c-str-gc.c", 1235);
            break;
        }
        {
            break;
        }
    }
    __result171__ = result_274;
    return __result171__;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
unsigned long int __exception_result_var_b240;
int len_286;
int __exception_result_var_b241;
_Bool _if_conditional101;
char* __exception_result_var_b242;
char* __result172__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
char* __exception_result_var_b243;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_286, 0, sizeof(int));
    len_286=(come_push_stackframe("libneo-c-str-gc.c", 1250, 1227),__exception_result_var_b240=strlen(self), come_pop_stackframe(), __exception_result_var_b240);
    if(_if_conditional101=(come_push_stackframe("libneo-c-str-gc.c", 1252, 1228),__exception_result_var_b241=strcmp(self,""), come_pop_stackframe(), __exception_result_var_b241)==0,    _if_conditional101) {
        __result172__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 1253, 1229),__exception_result_var_b242=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b242);
        return __result172__;
    }
    if(_if_conditional102=index<0,    _if_conditional102) {
        index+=len_286;
    }
    if(_if_conditional103=index>=len_286,    _if_conditional103) {
        index=len_286-1;
    }
    if(_if_conditional104=index<0,    _if_conditional104) {
        index=0;
    }
    ((char*)come_null_check(self, "libneo-c-str-gc.c", 1268, 1230))[index]=c;
    __result173__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 1270, 1231),__exception_result_var_b243=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b243);
    return __result173__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
unsigned long int __exception_result_var_b244;
int len_287;
char* result_288;
int i_289;
char* __exception_result_var_b245;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_287, 0, sizeof(int));
memset(&result_288, 0, sizeof(char*));
memset(&i_289, 0, sizeof(int));
    len_287=(come_push_stackframe("libneo-c-str-gc.c", 1275, 1232),__exception_result_var_b244=strlen(str), come_pop_stackframe(), __exception_result_var_b244)*n+1;
    result_288=(char*)come_calloc(1, sizeof(char)*(1*(len_287)), "libneo-c-str-gc.c", 1277, "char");
    ((char*)come_null_check(result_288, "libneo-c-str-gc.c", 1279, 1233))[0]=0;
    for(    i_289=0;    i_289<n;    i_289++    ){
        (come_push_stackframe("libneo-c-str-gc.c", 1282, 1234),__exception_result_var_b245=strcat(result_288,str), come_pop_stackframe(), __exception_result_var_b245);
    }
    __result174__ = __result_obj__ = result_288;
    return __result174__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
int offset_290;
int ovec_max_291;
const char* err_295;
int erro_ofs_296;
int options_297;
char* str_298;
struct real_pcre8_or_16* re_299;
struct buffer* __exception_result_var_b246;
struct buffer* result_300;
_Bool _while_condtional14;
int options_301;
unsigned long int __exception_result_var_b247;
int len_302;
int __exception_result_var_b248;
int regex_result_303;
int i_304;
int i_305;
_Bool _if_conditional105;
char* __exception_result_var_b249;
char* str_306;
struct buffer* __exception_result_var_b250;
struct buffer* __exception_result_var_b251;
_Bool _if_conditional106;
_Bool _if_conditional107;
char* __exception_result_var_b252;
char* str_307;
struct buffer* __exception_result_var_b253;
char* __exception_result_var_b254;
char* str_308;
struct buffer* __exception_result_var_b255;
char* __exception_result_var_b256;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_290, 0, sizeof(int));
memset(&ovec_max_291, 0, sizeof(int));
memset(&err_295, 0, sizeof(const char*));
memset(&erro_ofs_296, 0, sizeof(int));
memset(&options_297, 0, sizeof(int));
memset(&str_298, 0, sizeof(char*));
memset(&re_299, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_300, 0, sizeof(struct buffer*));
memset(&options_301, 0, sizeof(int));
memset(&len_302, 0, sizeof(int));
memset(&regex_result_303, 0, sizeof(int));
memset(&i_304, 0, sizeof(int));
memset(&i_305, 0, sizeof(int));
memset(&str_306, 0, sizeof(char*));
memset(&str_307, 0, sizeof(char*));
memset(&str_308, 0, sizeof(char*));
    offset_290=0;
    ovec_max_291=16;
    int start_292[ovec_max_291];
    memset(&start_292, 0, sizeof(int)    *(ovec_max_291)    );
    int end_293[ovec_max_291];
    memset(&end_293, 0, sizeof(int)    *(ovec_max_291)    );
    int ovec_value_294[ovec_max_291*3];
    memset(&ovec_value_294, 0, sizeof(int)    *(ovec_max_291*3)    );
    options_297=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1300, 1235)), "libneo-c-str-gc.c", 1300, 1236))->options;
    str_298=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1301, 1237)), "libneo-c-str-gc.c", 1301, 1238))->str;
    re_299=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1303, 1239)), "libneo-c-str-gc.c", 1303, 1240))->re;
    result_300=(come_push_stackframe("libneo-c-str-gc.c", 1305, 1243),__exception_result_var_b246=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1305, "buffer"), "libneo-c-str-gc.c", 1305, 1241)), "libneo-c-str-gc.c", 1305, 1242))), come_pop_stackframe(), __exception_result_var_b246);
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        options_301=2097152;
        len_302=(come_push_stackframe("libneo-c-str-gc.c", 1309, 1244),__exception_result_var_b247=strlen(self), come_pop_stackframe(), __exception_result_var_b247);
        regex_result_303=(come_push_stackframe("libneo-c-str-gc.c", 1310, 1245),__exception_result_var_b248=pcre_exec(re_299,(struct pcre_extra*)0,self,len_302,offset_290,options_301,ovec_value_294,ovec_max_291*3), come_pop_stackframe(), __exception_result_var_b248);
        for(        i_304=0;        i_304<ovec_max_291;        i_304++        ){
            (come_range_check(&((int*)come_null_check(start_292, "libneo-c-str-gc.c", 1313, 1246))[i_304],((int*)come_null_check(start_292, "libneo-c-str-gc.c", 1313, 1246)),((int*)come_null_check(start_292, "libneo-c-str-gc.c", 1313, 1246))+(ovec_max_291), "libneo-c-str-gc.c", 1313), ((int*)come_null_check(start_292, "libneo-c-str-gc.c", 1313, 1246))[i_304]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_294, "libneo-c-str-gc.c", 1313, 1247))[i_304*2],((int*)come_null_check(ovec_value_294, "libneo-c-str-gc.c", 1313, 1247)),((int*)come_null_check(ovec_value_294, "libneo-c-str-gc.c", 1313, 1247))+(ovec_max_291*3), "libneo-c-str-gc.c", 1313));
        }
        for(        i_305=0;        i_305<ovec_max_291;        i_305++        ){
            (come_range_check(&((int*)come_null_check(end_293, "libneo-c-str-gc.c", 1316, 1248))[i_305],((int*)come_null_check(end_293, "libneo-c-str-gc.c", 1316, 1248)),((int*)come_null_check(end_293, "libneo-c-str-gc.c", 1316, 1248))+(ovec_max_291), "libneo-c-str-gc.c", 1316), ((int*)come_null_check(end_293, "libneo-c-str-gc.c", 1316, 1248))[i_305]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_294, "libneo-c-str-gc.c", 1316, 1249))[i_305*2+1],((int*)come_null_check(ovec_value_294, "libneo-c-str-gc.c", 1316, 1249)),((int*)come_null_check(ovec_value_294, "libneo-c-str-gc.c", 1316, 1249))+(ovec_max_291*3), "libneo-c-str-gc.c", 1316));
        }
        if(_if_conditional105=regex_result_303==1,        _if_conditional105) {
            str_306=(come_push_stackframe("libneo-c-str-gc.c", 1322, 1253),__exception_result_var_b249=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1322, 1250)), "libneo-c-str-gc.c", 1322, 1251)),offset_290,*(int*)come_range_check(&((int*)come_null_check(start_292, "libneo-c-str-gc.c", 1322, 1252))[0],((int*)come_null_check(start_292, "libneo-c-str-gc.c", 1322, 1252)),((int*)come_null_check(start_292, "libneo-c-str-gc.c", 1322, 1252))+(ovec_max_291), "libneo-c-str-gc.c", 1322)), come_pop_stackframe(), __exception_result_var_b249);
            (come_push_stackframe("libneo-c-str-gc.c", 1324, 1256),__exception_result_var_b250=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_300, "libneo-c-str-gc.c", 1324, 1254)), "libneo-c-str-gc.c", 1324, 1255)),str_306), come_pop_stackframe(), __exception_result_var_b250);
            (come_push_stackframe("libneo-c-str-gc.c", 1325, 1259),__exception_result_var_b251=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_300, "libneo-c-str-gc.c", 1325, 1257)), "libneo-c-str-gc.c", 1325, 1258)),replace), come_pop_stackframe(), __exception_result_var_b251);
            if(_if_conditional106=offset_290==*(int*)come_range_check(&((int*)come_null_check(end_293, "libneo-c-str-gc.c", 1327, 1260))[0],((int*)come_null_check(end_293, "libneo-c-str-gc.c", 1327, 1260)),((int*)come_null_check(end_293, "libneo-c-str-gc.c", 1327, 1260))+(ovec_max_291), "libneo-c-str-gc.c", 1327),            _if_conditional106) {
                offset_290++;
            }
            else {
                offset_290=*(int*)come_range_check(&((int*)come_null_check(end_293, "libneo-c-str-gc.c", 1331, 1261))[0],((int*)come_null_check(end_293, "libneo-c-str-gc.c", 1331, 1261)),((int*)come_null_check(end_293, "libneo-c-str-gc.c", 1331, 1261))+(ovec_max_291), "libneo-c-str-gc.c", 1331);
            }
            if(_if_conditional107=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1334, 1262)), "libneo-c-str-gc.c", 1334, 1263))->global,            _if_conditional107) {
                str_307=(come_push_stackframe("libneo-c-str-gc.c", 1335, 1266),__exception_result_var_b252=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1335, 1264)), "libneo-c-str-gc.c", 1335, 1265)),offset_290,-1), come_pop_stackframe(), __exception_result_var_b252);
                (come_push_stackframe("libneo-c-str-gc.c", 1336, 1269),__exception_result_var_b253=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_300, "libneo-c-str-gc.c", 1336, 1267)), "libneo-c-str-gc.c", 1336, 1268)),str_307), come_pop_stackframe(), __exception_result_var_b253);
                break;
            }
        }
        else {
            str_308=(come_push_stackframe("libneo-c-str-gc.c", 1342, 1272),__exception_result_var_b254=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1342, 1270)), "libneo-c-str-gc.c", 1342, 1271)),offset_290,-1), come_pop_stackframe(), __exception_result_var_b254);
            (come_push_stackframe("libneo-c-str-gc.c", 1343, 1275),__exception_result_var_b255=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_300, "libneo-c-str-gc.c", 1343, 1273)), "libneo-c-str-gc.c", 1343, 1274)),str_308), come_pop_stackframe(), __exception_result_var_b255);
            break;
        }
    }
    __result175__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 1348, 1278),__exception_result_var_b256=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_300, "libneo-c-str-gc.c", 1348, 1276)), "libneo-c-str-gc.c", 1348, 1277))), come_pop_stackframe(), __exception_result_var_b256);
    return __result175__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
int offset_309;
int ovec_max_310;
const char* err_314;
int erro_ofs_315;
int options_316;
char* str_317;
struct real_pcre8_or_16* re_318;
struct buffer* __exception_result_var_b257;
struct buffer* result_319;
int n_320;
_Bool _while_condtional15;
int options_321;
unsigned long int __exception_result_var_b258;
int len_322;
int __exception_result_var_b259;
int regex_result_323;
int i_324;
int i_325;
_Bool _if_conditional108;
char* __exception_result_var_b260;
char* str_326;
struct buffer* __exception_result_var_b261;
struct buffer* __exception_result_var_b262;
_Bool _if_conditional109;
_Bool _if_conditional110;
char* __exception_result_var_b263;
char* str_327;
struct buffer* __exception_result_var_b264;
_Bool _if_conditional111;
char* __exception_result_var_b265;
char* str_328;
struct buffer* __exception_result_var_b266;
char* __exception_result_var_b267;
char* str_329;
struct buffer* __exception_result_var_b268;
char* __exception_result_var_b269;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_309, 0, sizeof(int));
memset(&ovec_max_310, 0, sizeof(int));
memset(&err_314, 0, sizeof(const char*));
memset(&erro_ofs_315, 0, sizeof(int));
memset(&options_316, 0, sizeof(int));
memset(&str_317, 0, sizeof(char*));
memset(&re_318, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_319, 0, sizeof(struct buffer*));
memset(&n_320, 0, sizeof(int));
memset(&options_321, 0, sizeof(int));
memset(&len_322, 0, sizeof(int));
memset(&regex_result_323, 0, sizeof(int));
memset(&i_324, 0, sizeof(int));
memset(&i_325, 0, sizeof(int));
memset(&str_326, 0, sizeof(char*));
memset(&str_327, 0, sizeof(char*));
memset(&str_328, 0, sizeof(char*));
memset(&str_329, 0, sizeof(char*));
    offset_309=0;
    ovec_max_310=16;
    int start_311[ovec_max_310];
    memset(&start_311, 0, sizeof(int)    *(ovec_max_310)    );
    int end_312[ovec_max_310];
    memset(&end_312, 0, sizeof(int)    *(ovec_max_310)    );
    int ovec_value_313[ovec_max_310*3];
    memset(&ovec_value_313, 0, sizeof(int)    *(ovec_max_310*3)    );
    options_316=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1363, 1279)), "libneo-c-str-gc.c", 1363, 1280))->options;
    str_317=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1364, 1281)), "libneo-c-str-gc.c", 1364, 1282))->str;
    re_318=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1366, 1283)), "libneo-c-str-gc.c", 1366, 1284))->re;
    result_319=(come_push_stackframe("libneo-c-str-gc.c", 1368, 1287),__exception_result_var_b257=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1368, "buffer"), "libneo-c-str-gc.c", 1368, 1285)), "libneo-c-str-gc.c", 1368, 1286))), come_pop_stackframe(), __exception_result_var_b257);
    n_320=0;
    while(_while_condtional15=(_Bool)1,    _while_condtional15) {
        options_321=2097152;
        len_322=(come_push_stackframe("libneo-c-str-gc.c", 1374, 1288),__exception_result_var_b258=strlen(self), come_pop_stackframe(), __exception_result_var_b258);
        regex_result_323=(come_push_stackframe("libneo-c-str-gc.c", 1375, 1289),__exception_result_var_b259=pcre_exec(re_318,(struct pcre_extra*)0,self,len_322,offset_309,options_321,ovec_value_313,ovec_max_310*3), come_pop_stackframe(), __exception_result_var_b259);
        for(        i_324=0;        i_324<ovec_max_310;        i_324++        ){
            (come_range_check(&((int*)come_null_check(start_311, "libneo-c-str-gc.c", 1378, 1290))[i_324],((int*)come_null_check(start_311, "libneo-c-str-gc.c", 1378, 1290)),((int*)come_null_check(start_311, "libneo-c-str-gc.c", 1378, 1290))+(ovec_max_310), "libneo-c-str-gc.c", 1378), ((int*)come_null_check(start_311, "libneo-c-str-gc.c", 1378, 1290))[i_324]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_313, "libneo-c-str-gc.c", 1378, 1291))[i_324*2],((int*)come_null_check(ovec_value_313, "libneo-c-str-gc.c", 1378, 1291)),((int*)come_null_check(ovec_value_313, "libneo-c-str-gc.c", 1378, 1291))+(ovec_max_310*3), "libneo-c-str-gc.c", 1378));
        }
        for(        i_325=0;        i_325<ovec_max_310;        i_325++        ){
            (come_range_check(&((int*)come_null_check(end_312, "libneo-c-str-gc.c", 1381, 1292))[i_325],((int*)come_null_check(end_312, "libneo-c-str-gc.c", 1381, 1292)),((int*)come_null_check(end_312, "libneo-c-str-gc.c", 1381, 1292))+(ovec_max_310), "libneo-c-str-gc.c", 1381), ((int*)come_null_check(end_312, "libneo-c-str-gc.c", 1381, 1292))[i_325]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_313, "libneo-c-str-gc.c", 1381, 1293))[i_325*2+1],((int*)come_null_check(ovec_value_313, "libneo-c-str-gc.c", 1381, 1293)),((int*)come_null_check(ovec_value_313, "libneo-c-str-gc.c", 1381, 1293))+(ovec_max_310*3), "libneo-c-str-gc.c", 1381));
        }
        if(_if_conditional108=regex_result_323==1,        _if_conditional108) {
            n_320++;
            str_326=(come_push_stackframe("libneo-c-str-gc.c", 1388, 1297),__exception_result_var_b260=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1388, 1294)), "libneo-c-str-gc.c", 1388, 1295)),offset_309,*(int*)come_range_check(&((int*)come_null_check(start_311, "libneo-c-str-gc.c", 1388, 1296))[0],((int*)come_null_check(start_311, "libneo-c-str-gc.c", 1388, 1296)),((int*)come_null_check(start_311, "libneo-c-str-gc.c", 1388, 1296))+(ovec_max_310), "libneo-c-str-gc.c", 1388)), come_pop_stackframe(), __exception_result_var_b260);
            (come_push_stackframe("libneo-c-str-gc.c", 1390, 1300),__exception_result_var_b261=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_319, "libneo-c-str-gc.c", 1390, 1298)), "libneo-c-str-gc.c", 1390, 1299)),str_326), come_pop_stackframe(), __exception_result_var_b261);
            (come_push_stackframe("libneo-c-str-gc.c", 1391, 1303),__exception_result_var_b262=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_319, "libneo-c-str-gc.c", 1391, 1301)), "libneo-c-str-gc.c", 1391, 1302)),replace), come_pop_stackframe(), __exception_result_var_b262);
            if(_if_conditional109=offset_309==*(int*)come_range_check(&((int*)come_null_check(end_312, "libneo-c-str-gc.c", 1393, 1304))[0],((int*)come_null_check(end_312, "libneo-c-str-gc.c", 1393, 1304)),((int*)come_null_check(end_312, "libneo-c-str-gc.c", 1393, 1304))+(ovec_max_310), "libneo-c-str-gc.c", 1393),            _if_conditional109) {
                offset_309++;
            }
            else {
                offset_309=*(int*)come_range_check(&((int*)come_null_check(end_312, "libneo-c-str-gc.c", 1397, 1305))[0],((int*)come_null_check(end_312, "libneo-c-str-gc.c", 1397, 1305)),((int*)come_null_check(end_312, "libneo-c-str-gc.c", 1397, 1305))+(ovec_max_310), "libneo-c-str-gc.c", 1397);
            }
            if(_if_conditional110=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1400, 1306)), "libneo-c-str-gc.c", 1400, 1307))->global,            _if_conditional110) {
                str_327=(come_push_stackframe("libneo-c-str-gc.c", 1401, 1310),__exception_result_var_b263=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1401, 1308)), "libneo-c-str-gc.c", 1401, 1309)),offset_309,-1), come_pop_stackframe(), __exception_result_var_b263);
                (come_push_stackframe("libneo-c-str-gc.c", 1402, 1313),__exception_result_var_b264=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_319, "libneo-c-str-gc.c", 1402, 1311)), "libneo-c-str-gc.c", 1402, 1312)),str_327), come_pop_stackframe(), __exception_result_var_b264);
                break;
            }
            if(_if_conditional111=n_320==count,            _if_conditional111) {
                str_328=(come_push_stackframe("libneo-c-str-gc.c", 1406, 1316),__exception_result_var_b265=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1406, 1314)), "libneo-c-str-gc.c", 1406, 1315)),offset_309,-1), come_pop_stackframe(), __exception_result_var_b265);
                (come_push_stackframe("libneo-c-str-gc.c", 1407, 1319),__exception_result_var_b266=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_319, "libneo-c-str-gc.c", 1407, 1317)), "libneo-c-str-gc.c", 1407, 1318)),str_328), come_pop_stackframe(), __exception_result_var_b266);
                break;
            }
        }
        else {
            str_329=(come_push_stackframe("libneo-c-str-gc.c", 1413, 1322),__exception_result_var_b267=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1413, 1320)), "libneo-c-str-gc.c", 1413, 1321)),offset_309,-1), come_pop_stackframe(), __exception_result_var_b267);
            (come_push_stackframe("libneo-c-str-gc.c", 1414, 1325),__exception_result_var_b268=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_319, "libneo-c-str-gc.c", 1414, 1323)), "libneo-c-str-gc.c", 1414, 1324)),str_329), come_pop_stackframe(), __exception_result_var_b268);
            break;
        }
    }
    __result176__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 1419, 1328),__exception_result_var_b269=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_319, "libneo-c-str-gc.c", 1419, 1326)), "libneo-c-str-gc.c", 1419, 1327))), come_pop_stackframe(), __exception_result_var_b269);
    return __result176__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
struct list$1charph* __exception_result_var_b270;
struct list$1charph* result_330;
struct buffer* __exception_result_var_b271;
struct buffer* buf_331;
int i_332;
int __exception_result_var_b272;
char* __exception_result_var_b273;
_Bool _if_conditional112;
char* __exception_result_var_b274;
struct list$1charph* __exception_result_var_b275;
unsigned long int __exception_result_var_b276;
struct buffer* __exception_result_var_b277;
int __exception_result_var_b278;
_Bool _if_conditional113;
char* __exception_result_var_b279;
struct list$1charph* __exception_result_var_b280;
struct list$1charph* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_330, 0, sizeof(struct list$1charph*));
memset(&buf_331, 0, sizeof(struct buffer*));
memset(&i_332, 0, sizeof(int));
    result_330=(come_push_stackframe("libneo-c-str-gc.c", 1427, 1331),__exception_result_var_b270=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1427, "list$1charph"), "libneo-c-str-gc.c", 1427, 1329)), "libneo-c-str-gc.c", 1427, 1330))), come_pop_stackframe(), __exception_result_var_b270);
    buf_331=(come_push_stackframe("libneo-c-str-gc.c", 1429, 1334),__exception_result_var_b271=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1429, "buffer"), "libneo-c-str-gc.c", 1429, 1332)), "libneo-c-str-gc.c", 1429, 1333))), come_pop_stackframe(), __exception_result_var_b271);
    for(    i_332=0;    i_332<(come_push_stackframe("libneo-c-str-gc.c", 1431, 1337),__exception_result_var_b272=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1431, 1335)), "libneo-c-str-gc.c", 1431, 1336))), come_pop_stackframe(), __exception_result_var_b272);    i_332++    ){
        if(_if_conditional112=(come_push_stackframe("libneo-c-str-gc.c", 1432, 1338),__exception_result_var_b273=strstr(self+i_332,str), come_pop_stackframe(), __exception_result_var_b273)==self+i_332,        _if_conditional112) {
            (come_push_stackframe("libneo-c-str-gc.c", 1433, 1344),__exception_result_var_b275=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_330, "libneo-c-str-gc.c", 1433, 1339)), "libneo-c-str-gc.c", 1433, 1340)),(come_push_stackframe("libneo-c-str-gc.c", 1433, 1343),__exception_result_var_b274=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_331, "libneo-c-str-gc.c", 1433, 1341)), "libneo-c-str-gc.c", 1433, 1342))->buf), come_pop_stackframe(), __exception_result_var_b274)), come_pop_stackframe(), __exception_result_var_b275);
            (come_push_stackframe("libneo-c-str-gc.c", 1434,1347),buffer_reset(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_331, "libneo-c-str-gc.c", 1434, 1345)), "libneo-c-str-gc.c", 1434, 1346))),come_pop_stackframe());
            i_332+=(come_push_stackframe("libneo-c-str-gc.c", 1435, 1348),__exception_result_var_b276=strlen(str), come_pop_stackframe(), __exception_result_var_b276)-1;
        }
        else {
            (come_push_stackframe("libneo-c-str-gc.c", 1438, 1352),__exception_result_var_b277=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_331, "libneo-c-str-gc.c", 1438, 1349)), "libneo-c-str-gc.c", 1438, 1350)),((char*)come_null_check(self, "libneo-c-str-gc.c", 1438, 1351))[i_332]), come_pop_stackframe(), __exception_result_var_b277);
        }
    }
    if(_if_conditional113=(come_push_stackframe("libneo-c-str-gc.c", 1441, 1355),__exception_result_var_b278=buffer_length(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_331, "libneo-c-str-gc.c", 1441, 1353)), "libneo-c-str-gc.c", 1441, 1354))), come_pop_stackframe(), __exception_result_var_b278)!=0,    _if_conditional113) {
        (come_push_stackframe("libneo-c-str-gc.c", 1442, 1361),__exception_result_var_b280=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_330, "libneo-c-str-gc.c", 1442, 1356)), "libneo-c-str-gc.c", 1442, 1357)),(come_push_stackframe("libneo-c-str-gc.c", 1442, 1360),__exception_result_var_b279=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_331, "libneo-c-str-gc.c", 1442, 1358)), "libneo-c-str-gc.c", 1442, 1359))->buf), come_pop_stackframe(), __exception_result_var_b279)), come_pop_stackframe(), __exception_result_var_b280);
    }
    __result177__ = __result_obj__ = result_330;
    return __result177__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
struct list$1charph* __exception_result_var_b281;
struct list$1charph* result_333;
int offset_334;
int ovec_max_335;
const char* err_339;
int erro_ofs_340;
int options_341;
char* str_342;
struct real_pcre8_or_16* re_343;
_Bool _while_condtional16;
int options_344;
unsigned long int __exception_result_var_b282;
int len_345;
int __exception_result_var_b283;
int regex_result_346;
int i_347;
int i_348;
_Bool _if_conditional114;
char* __exception_result_var_b284;
char* str_349;
struct list$1charph* __exception_result_var_b285;
_Bool _if_conditional115;
_Bool _if_conditional116;
char* __exception_result_var_b286;
char* str_350;
struct list$1charph* __exception_result_var_b287;
_Bool _if_conditional117;
int i_351;
char* __exception_result_var_b288;
char* match_string_352;
struct list$1charph* __exception_result_var_b289;
struct list$1charph* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_333, 0, sizeof(struct list$1charph*));
memset(&offset_334, 0, sizeof(int));
memset(&ovec_max_335, 0, sizeof(int));
memset(&err_339, 0, sizeof(const char*));
memset(&erro_ofs_340, 0, sizeof(int));
memset(&options_341, 0, sizeof(int));
memset(&str_342, 0, sizeof(char*));
memset(&re_343, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_344, 0, sizeof(int));
memset(&len_345, 0, sizeof(int));
memset(&regex_result_346, 0, sizeof(int));
memset(&i_347, 0, sizeof(int));
memset(&i_348, 0, sizeof(int));
memset(&str_349, 0, sizeof(char*));
memset(&str_350, 0, sizeof(char*));
memset(&i_351, 0, sizeof(int));
memset(&match_string_352, 0, sizeof(char*));
    result_333=(come_push_stackframe("libneo-c-str-gc.c", 1450, 1364),__exception_result_var_b281=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1450, "list$1charph"), "libneo-c-str-gc.c", 1450, 1362)), "libneo-c-str-gc.c", 1450, 1363))), come_pop_stackframe(), __exception_result_var_b281);
    offset_334=0;
    ovec_max_335=16;
    int start_336[ovec_max_335];
    memset(&start_336, 0, sizeof(int)    *(ovec_max_335)    );
    int end_337[ovec_max_335];
    memset(&end_337, 0, sizeof(int)    *(ovec_max_335)    );
    int ovec_value_338[ovec_max_335*3];
    memset(&ovec_value_338, 0, sizeof(int)    *(ovec_max_335*3)    );
    options_341=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1462, 1365)), "libneo-c-str-gc.c", 1462, 1366))->options;
    str_342=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1463, 1367)), "libneo-c-str-gc.c", 1463, 1368))->str;
    re_343=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1465, 1369)), "libneo-c-str-gc.c", 1465, 1370))->re;
    while(_while_condtional16=(_Bool)1,    _while_condtional16) {
        options_344=2097152;
        len_345=(come_push_stackframe("libneo-c-str-gc.c", 1470, 1371),__exception_result_var_b282=strlen(self), come_pop_stackframe(), __exception_result_var_b282);
        regex_result_346=(come_push_stackframe("libneo-c-str-gc.c", 1471, 1372),__exception_result_var_b283=pcre_exec(re_343,(struct pcre_extra*)0,self,len_345,offset_334,options_344,ovec_value_338,ovec_max_335*3), come_pop_stackframe(), __exception_result_var_b283);
        for(        i_347=0;        i_347<ovec_max_335;        i_347++        ){
            (come_range_check(&((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1474, 1373))[i_347],((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1474, 1373)),((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1474, 1373))+(ovec_max_335), "libneo-c-str-gc.c", 1474), ((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1474, 1373))[i_347]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_338, "libneo-c-str-gc.c", 1474, 1374))[i_347*2],((int*)come_null_check(ovec_value_338, "libneo-c-str-gc.c", 1474, 1374)),((int*)come_null_check(ovec_value_338, "libneo-c-str-gc.c", 1474, 1374))+(ovec_max_335*3), "libneo-c-str-gc.c", 1474));
        }
        for(        i_348=0;        i_348<ovec_max_335;        i_348++        ){
            (come_range_check(&((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1477, 1375))[i_348],((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1477, 1375)),((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1477, 1375))+(ovec_max_335), "libneo-c-str-gc.c", 1477), ((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1477, 1375))[i_348]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_338, "libneo-c-str-gc.c", 1477, 1376))[i_348*2+1],((int*)come_null_check(ovec_value_338, "libneo-c-str-gc.c", 1477, 1376)),((int*)come_null_check(ovec_value_338, "libneo-c-str-gc.c", 1477, 1376))+(ovec_max_335*3), "libneo-c-str-gc.c", 1477));
        }
        if(_if_conditional114=regex_result_346==1,        _if_conditional114) {
            str_349=(come_push_stackframe("libneo-c-str-gc.c", 1483, 1381),__exception_result_var_b284=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1483, 1377)), "libneo-c-str-gc.c", 1483, 1378)),*(int*)come_range_check(&((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1483, 1379))[0],((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1483, 1379)),((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1483, 1379))+(ovec_max_335), "libneo-c-str-gc.c", 1483),*(int*)come_range_check(&((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1483, 1380))[0],((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1483, 1380)),((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1483, 1380))+(ovec_max_335), "libneo-c-str-gc.c", 1483)), come_pop_stackframe(), __exception_result_var_b284);
            (come_push_stackframe("libneo-c-str-gc.c", 1485, 1384),__exception_result_var_b285=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_333, "libneo-c-str-gc.c", 1485, 1382)), "libneo-c-str-gc.c", 1485, 1383)),str_349), come_pop_stackframe(), __exception_result_var_b285);
            if(_if_conditional115=offset_334==*(int*)come_range_check(&((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1487, 1385))[0],((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1487, 1385)),((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1487, 1385))+(ovec_max_335), "libneo-c-str-gc.c", 1487),            _if_conditional115) {
                offset_334++;
            }
            else {
                offset_334=*(int*)come_range_check(&((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1491, 1386))[0],((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1491, 1386)),((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1491, 1386))+(ovec_max_335), "libneo-c-str-gc.c", 1491);
            }
        }
        else {
            if(_if_conditional116=regex_result_346>1,            _if_conditional116) {
                str_350=(come_push_stackframe("libneo-c-str-gc.c", 1496, 1391),__exception_result_var_b286=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1496, 1387)), "libneo-c-str-gc.c", 1496, 1388)),*(int*)come_range_check(&((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1496, 1389))[0],((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1496, 1389)),((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1496, 1389))+(ovec_max_335), "libneo-c-str-gc.c", 1496),*(int*)come_range_check(&((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1496, 1390))[0],((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1496, 1390)),((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1496, 1390))+(ovec_max_335), "libneo-c-str-gc.c", 1496)), come_pop_stackframe(), __exception_result_var_b286);
                (come_push_stackframe("libneo-c-str-gc.c", 1497, 1394),__exception_result_var_b287=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_333, "libneo-c-str-gc.c", 1497, 1392)), "libneo-c-str-gc.c", 1497, 1393)),str_350), come_pop_stackframe(), __exception_result_var_b287);
                if(_if_conditional117=offset_334==*(int*)come_range_check(&((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1499, 1395))[0],((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1499, 1395)),((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1499, 1395))+(ovec_max_335), "libneo-c-str-gc.c", 1499),                _if_conditional117) {
                    offset_334++;
                }
                else {
                    offset_334=*(int*)come_range_check(&((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1503, 1396))[0],((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1503, 1396)),((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1503, 1396))+(ovec_max_335), "libneo-c-str-gc.c", 1503);
                }
                for(                i_351=1;                i_351<regex_result_346;                i_351++                ){
                    match_string_352=(come_push_stackframe("libneo-c-str-gc.c", 1507, 1401),__exception_result_var_b288=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1507, 1397)), "libneo-c-str-gc.c", 1507, 1398)),*(int*)come_range_check(&((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1507, 1399))[i_351],((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1507, 1399)),((int*)come_null_check(start_336, "libneo-c-str-gc.c", 1507, 1399))+(ovec_max_335), "libneo-c-str-gc.c", 1507),*(int*)come_range_check(&((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1507, 1400))[i_351],((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1507, 1400)),((int*)come_null_check(end_337, "libneo-c-str-gc.c", 1507, 1400))+(ovec_max_335), "libneo-c-str-gc.c", 1507)), come_pop_stackframe(), __exception_result_var_b288);
                    (come_push_stackframe("libneo-c-str-gc.c", 1508, 1404),__exception_result_var_b289=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_333, "libneo-c-str-gc.c", 1508, 1402)), "libneo-c-str-gc.c", 1508, 1403)),match_string_352), come_pop_stackframe(), __exception_result_var_b289);
                }
            }
            else {
                break;
            }
        }
    }
    __result178__ = __result_obj__ = result_333;
    return __result178__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__;
const char* err_353;
int erro_ofs_354;
int options_355;
char* str_356;
struct real_pcre8_or_16* re_357;
struct list$1charph* __exception_result_var_b290;
struct list$1charph* result_358;
int offset_359;
int ovec_max_360;
_Bool _while_condtional17;
int options_364;
unsigned long int __exception_result_var_b291;
int len_365;
int __exception_result_var_b292;
int regex_result_366;
int i_367;
int i_368;
_Bool _if_conditional118;
char* __exception_result_var_b293;
char* str_369;
struct list$1charph* __exception_result_var_b294;
_Bool _if_conditional119;
_Bool _if_conditional120;
char* __exception_result_var_b295;
char* str_370;
struct list$1charph* __exception_result_var_b296;
_Bool _if_conditional121;
int i_371;
char* __exception_result_var_b297;
char* match_str_372;
struct list$1charph* __exception_result_var_b298;
int __exception_result_var_b299;
_Bool _if_conditional122;
char* __exception_result_var_b300;
char* str_373;
struct list$1charph* __exception_result_var_b301;
struct list$1charph* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_353, 0, sizeof(const char*));
memset(&erro_ofs_354, 0, sizeof(int));
memset(&options_355, 0, sizeof(int));
memset(&str_356, 0, sizeof(char*));
memset(&re_357, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_358, 0, sizeof(struct list$1charph*));
memset(&offset_359, 0, sizeof(int));
memset(&ovec_max_360, 0, sizeof(int));
memset(&options_364, 0, sizeof(int));
memset(&len_365, 0, sizeof(int));
memset(&regex_result_366, 0, sizeof(int));
memset(&i_367, 0, sizeof(int));
memset(&i_368, 0, sizeof(int));
memset(&str_369, 0, sizeof(char*));
memset(&str_370, 0, sizeof(char*));
memset(&i_371, 0, sizeof(int));
memset(&match_str_372, 0, sizeof(char*));
memset(&str_373, 0, sizeof(char*));
    options_355=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1526, 1405)), "libneo-c-str-gc.c", 1526, 1406))->options;
    str_356=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1527, 1407)), "libneo-c-str-gc.c", 1527, 1408))->str;
    re_357=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1529, 1409)), "libneo-c-str-gc.c", 1529, 1410))->re;
    result_358=(come_push_stackframe("libneo-c-str-gc.c", 1531, 1413),__exception_result_var_b290=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1531, "list$1charph"), "libneo-c-str-gc.c", 1531, 1411)), "libneo-c-str-gc.c", 1531, 1412))), come_pop_stackframe(), __exception_result_var_b290);
    offset_359=0;
    ovec_max_360=16;
    int start_361[ovec_max_360];
    memset(&start_361, 0, sizeof(int)    *(ovec_max_360)    );
    int end_362[ovec_max_360];
    memset(&end_362, 0, sizeof(int)    *(ovec_max_360)    );
    int ovec_value_363[ovec_max_360*3];
    memset(&ovec_value_363, 0, sizeof(int)    *(ovec_max_360*3)    );
    while(_while_condtional17=(_Bool)1,    _while_condtional17) {
        options_364=2097152;
        len_365=(come_push_stackframe("libneo-c-str-gc.c", 1542, 1414),__exception_result_var_b291=strlen(self), come_pop_stackframe(), __exception_result_var_b291);
        regex_result_366=(come_push_stackframe("libneo-c-str-gc.c", 1544, 1415),__exception_result_var_b292=pcre_exec(re_357,(struct pcre_extra*)0,self,len_365,offset_359,options_364,ovec_value_363,ovec_max_360*3), come_pop_stackframe(), __exception_result_var_b292);
        for(        i_367=0;        i_367<ovec_max_360;        i_367++        ){
            (come_range_check(&((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1547, 1416))[i_367],((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1547, 1416)),((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1547, 1416))+(ovec_max_360), "libneo-c-str-gc.c", 1547), ((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1547, 1416))[i_367]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_363, "libneo-c-str-gc.c", 1547, 1417))[i_367*2],((int*)come_null_check(ovec_value_363, "libneo-c-str-gc.c", 1547, 1417)),((int*)come_null_check(ovec_value_363, "libneo-c-str-gc.c", 1547, 1417))+(ovec_max_360*3), "libneo-c-str-gc.c", 1547));
        }
        for(        i_368=0;        i_368<ovec_max_360;        i_368++        ){
            (come_range_check(&((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1550, 1418))[i_368],((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1550, 1418)),((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1550, 1418))+(ovec_max_360), "libneo-c-str-gc.c", 1550), ((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1550, 1418))[i_368]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_363, "libneo-c-str-gc.c", 1550, 1419))[i_368*2+1],((int*)come_null_check(ovec_value_363, "libneo-c-str-gc.c", 1550, 1419)),((int*)come_null_check(ovec_value_363, "libneo-c-str-gc.c", 1550, 1419))+(ovec_max_360*3), "libneo-c-str-gc.c", 1550));
        }
        if(_if_conditional118=regex_result_366==1,        _if_conditional118) {
            str_369=(come_push_stackframe("libneo-c-str-gc.c", 1556, 1423),__exception_result_var_b293=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1556, 1420)), "libneo-c-str-gc.c", 1556, 1421)),offset_359,*(int*)come_range_check(&((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1556, 1422))[0],((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1556, 1422)),((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1556, 1422))+(ovec_max_360), "libneo-c-str-gc.c", 1556)), come_pop_stackframe(), __exception_result_var_b293);
            (come_push_stackframe("libneo-c-str-gc.c", 1557, 1426),__exception_result_var_b294=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_358, "libneo-c-str-gc.c", 1557, 1424)), "libneo-c-str-gc.c", 1557, 1425)),str_369), come_pop_stackframe(), __exception_result_var_b294);
            if(_if_conditional119=offset_359==*(int*)come_range_check(&((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1559, 1427))[0],((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1559, 1427)),((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1559, 1427))+(ovec_max_360), "libneo-c-str-gc.c", 1559),            _if_conditional119) {
                offset_359++;
            }
            else {
                offset_359=*(int*)come_range_check(&((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1563, 1428))[0],((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1563, 1428)),((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1563, 1428))+(ovec_max_360), "libneo-c-str-gc.c", 1563);
            }
        }
        else {
            if(_if_conditional120=regex_result_366>1,            _if_conditional120) {
                str_370=(come_push_stackframe("libneo-c-str-gc.c", 1568, 1432),__exception_result_var_b295=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1568, 1429)), "libneo-c-str-gc.c", 1568, 1430)),offset_359,*(int*)come_range_check(&((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1568, 1431))[0],((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1568, 1431)),((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1568, 1431))+(ovec_max_360), "libneo-c-str-gc.c", 1568)), come_pop_stackframe(), __exception_result_var_b295);
                (come_push_stackframe("libneo-c-str-gc.c", 1569, 1435),__exception_result_var_b296=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_358, "libneo-c-str-gc.c", 1569, 1433)), "libneo-c-str-gc.c", 1569, 1434)),str_370), come_pop_stackframe(), __exception_result_var_b296);
                if(_if_conditional121=offset_359==*(int*)come_range_check(&((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1571, 1436))[0],((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1571, 1436)),((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1571, 1436))+(ovec_max_360), "libneo-c-str-gc.c", 1571),                _if_conditional121) {
                    offset_359++;
                }
                else {
                    offset_359=*(int*)come_range_check(&((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1575, 1437))[0],((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1575, 1437)),((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1575, 1437))+(ovec_max_360), "libneo-c-str-gc.c", 1575);
                }
                for(                i_371=1;                i_371<regex_result_366;                i_371++                ){
                    match_str_372=(come_push_stackframe("libneo-c-str-gc.c", 1579, 1442),__exception_result_var_b297=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1579, 1438)), "libneo-c-str-gc.c", 1579, 1439)),*(int*)come_range_check(&((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1579, 1440))[i_371],((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1579, 1440)),((int*)come_null_check(start_361, "libneo-c-str-gc.c", 1579, 1440))+(ovec_max_360), "libneo-c-str-gc.c", 1579),*(int*)come_range_check(&((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1579, 1441))[i_371],((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1579, 1441)),((int*)come_null_check(end_362, "libneo-c-str-gc.c", 1579, 1441))+(ovec_max_360), "libneo-c-str-gc.c", 1579)), come_pop_stackframe(), __exception_result_var_b297);
                    (come_push_stackframe("libneo-c-str-gc.c", 1580, 1445),__exception_result_var_b298=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_358, "libneo-c-str-gc.c", 1580, 1443)), "libneo-c-str-gc.c", 1580, 1444)),match_str_372), come_pop_stackframe(), __exception_result_var_b298);
                }
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional122=offset_359<(come_push_stackframe("libneo-c-str-gc.c", 1590, 1448),__exception_result_var_b299=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1590, 1446)), "libneo-c-str-gc.c", 1590, 1447))), come_pop_stackframe(), __exception_result_var_b299),    _if_conditional122) {
        str_373=(come_push_stackframe("libneo-c-str-gc.c", 1591, 1451),__exception_result_var_b300=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1591, 1449)), "libneo-c-str-gc.c", 1591, 1450)),offset_359,-1), come_pop_stackframe(), __exception_result_var_b300);
        (come_push_stackframe("libneo-c-str-gc.c", 1592, 1454),__exception_result_var_b301=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_358, "libneo-c-str-gc.c", 1592, 1452)), "libneo-c-str-gc.c", 1592, 1453)),str_373), come_pop_stackframe(), __exception_result_var_b301);
    }
    __result179__ = __result_obj__ = result_358;
    return __result179__;
}

_Bool charp_match(char* self, struct come_regex* reg){
void* __result_obj__;
int offset_374;
int ovec_max_375;
const char* err_379;
int erro_ofs_380;
int options_381;
char* str_382;
struct real_pcre8_or_16* re_383;
_Bool _while_condtional18;
int options_384;
unsigned long int __exception_result_var_b302;
int len_385;
int __exception_result_var_b303;
int regex_result_386;
int i_387;
int i_388;
_Bool _if_conditional123;
_Bool __result180__;
_Bool __result181__;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_374, 0, sizeof(int));
memset(&ovec_max_375, 0, sizeof(int));
memset(&err_379, 0, sizeof(const char*));
memset(&erro_ofs_380, 0, sizeof(int));
memset(&options_381, 0, sizeof(int));
memset(&str_382, 0, sizeof(char*));
memset(&re_383, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_384, 0, sizeof(int));
memset(&len_385, 0, sizeof(int));
memset(&regex_result_386, 0, sizeof(int));
memset(&i_387, 0, sizeof(int));
memset(&i_388, 0, sizeof(int));
    offset_374=0;
    ovec_max_375=16;
    int start_376[ovec_max_375];
    memset(&start_376, 0, sizeof(int)    *(ovec_max_375)    );
    int end_377[ovec_max_375];
    memset(&end_377, 0, sizeof(int)    *(ovec_max_375)    );
    int ovec_value_378[ovec_max_375*3];
    memset(&ovec_value_378, 0, sizeof(int)    *(ovec_max_375*3)    );
    options_381=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1610, 1455)), "libneo-c-str-gc.c", 1610, 1456))->options;
    str_382=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1611, 1457)), "libneo-c-str-gc.c", 1611, 1458))->str;
    re_383=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1613, 1459)), "libneo-c-str-gc.c", 1613, 1460))->re;
    while(_while_condtional18=(_Bool)1,    _while_condtional18) {
        options_384=2097152;
        len_385=(come_push_stackframe("libneo-c-str-gc.c", 1617, 1461),__exception_result_var_b302=strlen(self), come_pop_stackframe(), __exception_result_var_b302);
        regex_result_386=(come_push_stackframe("libneo-c-str-gc.c", 1619, 1462),__exception_result_var_b303=pcre_exec(re_383,(struct pcre_extra*)0,self,len_385,offset_374,options_384,ovec_value_378,ovec_max_375*3), come_pop_stackframe(), __exception_result_var_b303);
        for(        i_387=0;        i_387<ovec_max_375;        i_387++        ){
            (come_range_check(&((int*)come_null_check(start_376, "libneo-c-str-gc.c", 1622, 1463))[i_387],((int*)come_null_check(start_376, "libneo-c-str-gc.c", 1622, 1463)),((int*)come_null_check(start_376, "libneo-c-str-gc.c", 1622, 1463))+(ovec_max_375), "libneo-c-str-gc.c", 1622), ((int*)come_null_check(start_376, "libneo-c-str-gc.c", 1622, 1463))[i_387]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_378, "libneo-c-str-gc.c", 1622, 1464))[i_387*2],((int*)come_null_check(ovec_value_378, "libneo-c-str-gc.c", 1622, 1464)),((int*)come_null_check(ovec_value_378, "libneo-c-str-gc.c", 1622, 1464))+(ovec_max_375*3), "libneo-c-str-gc.c", 1622));
        }
        for(        i_388=0;        i_388<ovec_max_375;        i_388++        ){
            (come_range_check(&((int*)come_null_check(end_377, "libneo-c-str-gc.c", 1625, 1465))[i_388],((int*)come_null_check(end_377, "libneo-c-str-gc.c", 1625, 1465)),((int*)come_null_check(end_377, "libneo-c-str-gc.c", 1625, 1465))+(ovec_max_375), "libneo-c-str-gc.c", 1625), ((int*)come_null_check(end_377, "libneo-c-str-gc.c", 1625, 1465))[i_388]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_378, "libneo-c-str-gc.c", 1625, 1466))[i_388*2+1],((int*)come_null_check(ovec_value_378, "libneo-c-str-gc.c", 1625, 1466)),((int*)come_null_check(ovec_value_378, "libneo-c-str-gc.c", 1625, 1466))+(ovec_max_375*3), "libneo-c-str-gc.c", 1625));
        }
        if(_if_conditional123=regex_result_386>0,        _if_conditional123) {
            __result180__ = (_Bool)1;
            return __result180__;
        }
        else {
            __result181__ = (_Bool)0;
            return __result181__;
        }
    }
    __result182__ = (_Bool)0;
    return __result182__;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
const char* err_389;
int erro_ofs_390;
int options_391;
char* str_392;
struct real_pcre8_or_16* re_393;
struct list$1charph* __exception_result_var_b304;
struct list$1charph* result_394;
int offset_395;
int ovec_max_396;
int n_400;
_Bool _while_condtional19;
int options_401;
unsigned long int __exception_result_var_b305;
int len_402;
int __exception_result_var_b306;
int regex_result_403;
int i_404;
int i_405;
_Bool _if_conditional124;
char* __exception_result_var_b307;
char* str_406;
struct list$1charph* __exception_result_var_b308;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* __exception_result_var_b309;
char* str_407;
struct list$1charph* __exception_result_var_b310;
_Bool _if_conditional127;
int i_408;
char* __exception_result_var_b311;
char* match_str_409;
struct list$1charph* __exception_result_var_b312;
_Bool _if_conditional128;
int __exception_result_var_b313;
_Bool _if_conditional129;
char* __exception_result_var_b314;
char* str_410;
struct list$1charph* __exception_result_var_b315;
struct list$1charph* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_389, 0, sizeof(const char*));
memset(&erro_ofs_390, 0, sizeof(int));
memset(&options_391, 0, sizeof(int));
memset(&str_392, 0, sizeof(char*));
memset(&re_393, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_394, 0, sizeof(struct list$1charph*));
memset(&offset_395, 0, sizeof(int));
memset(&ovec_max_396, 0, sizeof(int));
memset(&n_400, 0, sizeof(int));
memset(&options_401, 0, sizeof(int));
memset(&len_402, 0, sizeof(int));
memset(&regex_result_403, 0, sizeof(int));
memset(&i_404, 0, sizeof(int));
memset(&i_405, 0, sizeof(int));
memset(&str_406, 0, sizeof(char*));
memset(&str_407, 0, sizeof(char*));
memset(&i_408, 0, sizeof(int));
memset(&match_str_409, 0, sizeof(char*));
memset(&str_410, 0, sizeof(char*));
    options_391=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1648, 1467)), "libneo-c-str-gc.c", 1648, 1468))->options;
    str_392=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1649, 1469)), "libneo-c-str-gc.c", 1649, 1470))->str;
    re_393=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1651, 1471)), "libneo-c-str-gc.c", 1651, 1472))->re;
    result_394=(come_push_stackframe("libneo-c-str-gc.c", 1653, 1475),__exception_result_var_b304=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1653, "list$1charph"), "libneo-c-str-gc.c", 1653, 1473)), "libneo-c-str-gc.c", 1653, 1474))), come_pop_stackframe(), __exception_result_var_b304);
    offset_395=0;
    ovec_max_396=16;
    int start_397[ovec_max_396];
    memset(&start_397, 0, sizeof(int)    *(ovec_max_396)    );
    int end_398[ovec_max_396];
    memset(&end_398, 0, sizeof(int)    *(ovec_max_396)    );
    int ovec_value_399[ovec_max_396*3];
    memset(&ovec_value_399, 0, sizeof(int)    *(ovec_max_396*3)    );
    n_400=0;
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        options_401=2097152;
        len_402=(come_push_stackframe("libneo-c-str-gc.c", 1666, 1476),__exception_result_var_b305=strlen(self), come_pop_stackframe(), __exception_result_var_b305);
        regex_result_403=(come_push_stackframe("libneo-c-str-gc.c", 1668, 1477),__exception_result_var_b306=pcre_exec(re_393,(struct pcre_extra*)0,self,len_402,offset_395,options_401,ovec_value_399,ovec_max_396*3), come_pop_stackframe(), __exception_result_var_b306);
        for(        i_404=0;        i_404<ovec_max_396;        i_404++        ){
            (come_range_check(&((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1671, 1478))[i_404],((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1671, 1478)),((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1671, 1478))+(ovec_max_396), "libneo-c-str-gc.c", 1671), ((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1671, 1478))[i_404]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_399, "libneo-c-str-gc.c", 1671, 1479))[i_404*2],((int*)come_null_check(ovec_value_399, "libneo-c-str-gc.c", 1671, 1479)),((int*)come_null_check(ovec_value_399, "libneo-c-str-gc.c", 1671, 1479))+(ovec_max_396*3), "libneo-c-str-gc.c", 1671));
        }
        for(        i_405=0;        i_405<ovec_max_396;        i_405++        ){
            (come_range_check(&((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1674, 1480))[i_405],((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1674, 1480)),((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1674, 1480))+(ovec_max_396), "libneo-c-str-gc.c", 1674), ((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1674, 1480))[i_405]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_399, "libneo-c-str-gc.c", 1674, 1481))[i_405*2+1],((int*)come_null_check(ovec_value_399, "libneo-c-str-gc.c", 1674, 1481)),((int*)come_null_check(ovec_value_399, "libneo-c-str-gc.c", 1674, 1481))+(ovec_max_396*3), "libneo-c-str-gc.c", 1674));
        }
        if(_if_conditional124=regex_result_403==1,        _if_conditional124) {
            str_406=(come_push_stackframe("libneo-c-str-gc.c", 1680, 1485),__exception_result_var_b307=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1680, 1482)), "libneo-c-str-gc.c", 1680, 1483)),offset_395,*(int*)come_range_check(&((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1680, 1484))[0],((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1680, 1484)),((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1680, 1484))+(ovec_max_396), "libneo-c-str-gc.c", 1680)), come_pop_stackframe(), __exception_result_var_b307);
            (come_push_stackframe("libneo-c-str-gc.c", 1681, 1488),__exception_result_var_b308=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_394, "libneo-c-str-gc.c", 1681, 1486)), "libneo-c-str-gc.c", 1681, 1487)),str_406), come_pop_stackframe(), __exception_result_var_b308);
            if(_if_conditional125=offset_395==*(int*)come_range_check(&((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1683, 1489))[0],((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1683, 1489)),((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1683, 1489))+(ovec_max_396), "libneo-c-str-gc.c", 1683),            _if_conditional125) {
                offset_395++;
            }
            else {
                offset_395=*(int*)come_range_check(&((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1687, 1490))[0],((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1687, 1490)),((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1687, 1490))+(ovec_max_396), "libneo-c-str-gc.c", 1687);
            }
        }
        else {
            if(_if_conditional126=regex_result_403>1,            _if_conditional126) {
                str_407=(come_push_stackframe("libneo-c-str-gc.c", 1692, 1494),__exception_result_var_b309=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1692, 1491)), "libneo-c-str-gc.c", 1692, 1492)),offset_395,*(int*)come_range_check(&((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1692, 1493))[0],((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1692, 1493)),((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1692, 1493))+(ovec_max_396), "libneo-c-str-gc.c", 1692)), come_pop_stackframe(), __exception_result_var_b309);
                (come_push_stackframe("libneo-c-str-gc.c", 1693, 1497),__exception_result_var_b310=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_394, "libneo-c-str-gc.c", 1693, 1495)), "libneo-c-str-gc.c", 1693, 1496)),str_407), come_pop_stackframe(), __exception_result_var_b310);
                if(_if_conditional127=offset_395==*(int*)come_range_check(&((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1695, 1498))[0],((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1695, 1498)),((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1695, 1498))+(ovec_max_396), "libneo-c-str-gc.c", 1695),                _if_conditional127) {
                    offset_395++;
                }
                else {
                    offset_395=*(int*)come_range_check(&((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1699, 1499))[0],((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1699, 1499)),((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1699, 1499))+(ovec_max_396), "libneo-c-str-gc.c", 1699);
                }
                for(                i_408=1;                i_408<regex_result_403;                i_408++                ){
                    match_str_409=(come_push_stackframe("libneo-c-str-gc.c", 1703, 1504),__exception_result_var_b311=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1703, 1500)), "libneo-c-str-gc.c", 1703, 1501)),*(int*)come_range_check(&((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1703, 1502))[i_408],((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1703, 1502)),((int*)come_null_check(start_397, "libneo-c-str-gc.c", 1703, 1502))+(ovec_max_396), "libneo-c-str-gc.c", 1703),*(int*)come_range_check(&((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1703, 1503))[i_408],((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1703, 1503)),((int*)come_null_check(end_398, "libneo-c-str-gc.c", 1703, 1503))+(ovec_max_396), "libneo-c-str-gc.c", 1703)), come_pop_stackframe(), __exception_result_var_b311);
                    (come_push_stackframe("libneo-c-str-gc.c", 1704, 1507),__exception_result_var_b312=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_394, "libneo-c-str-gc.c", 1704, 1505)), "libneo-c-str-gc.c", 1704, 1506)),match_str_409), come_pop_stackframe(), __exception_result_var_b312);
                }
            }
            else {
                break;
            }
        }
        n_400++;
        if(_if_conditional128=maxsplit==n_400,        _if_conditional128) {
            break;
        }
    }
    if(_if_conditional129=offset_395<(come_push_stackframe("libneo-c-str-gc.c", 1720, 1510),__exception_result_var_b313=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1720, 1508)), "libneo-c-str-gc.c", 1720, 1509))), come_pop_stackframe(), __exception_result_var_b313),    _if_conditional129) {
        str_410=(come_push_stackframe("libneo-c-str-gc.c", 1721, 1513),__exception_result_var_b314=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1721, 1511)), "libneo-c-str-gc.c", 1721, 1512)),offset_395,-1), come_pop_stackframe(), __exception_result_var_b314);
        (come_push_stackframe("libneo-c-str-gc.c", 1722, 1516),__exception_result_var_b315=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_394, "libneo-c-str-gc.c", 1722, 1514)), "libneo-c-str-gc.c", 1722, 1515)),str_410), come_pop_stackframe(), __exception_result_var_b315);
    }
    __result183__ = __result_obj__ = result_394;
    return __result183__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
const char* err_411;
int erro_ofs_412;
int options_413;
char* str_414;
struct real_pcre8_or_16* re_415;
char* __exception_result_var_b316;
char* self2_416;
int ovec_max_417;
int result_421;
int offset_422;
int n_423;
_Bool _while_condtional20;
int options_424;
unsigned long int __exception_result_var_b317;
int len_425;
int __exception_result_var_b318;
int regex_result_426;
int i_427;
int i_428;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
unsigned long int __exception_result_var_b319;
int __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_411, 0, sizeof(const char*));
memset(&erro_ofs_412, 0, sizeof(int));
memset(&options_413, 0, sizeof(int));
memset(&str_414, 0, sizeof(char*));
memset(&re_415, 0, sizeof(struct real_pcre8_or_16*));
memset(&self2_416, 0, sizeof(char*));
memset(&ovec_max_417, 0, sizeof(int));
memset(&result_421, 0, sizeof(int));
memset(&offset_422, 0, sizeof(int));
memset(&n_423, 0, sizeof(int));
memset(&options_424, 0, sizeof(int));
memset(&len_425, 0, sizeof(int));
memset(&regex_result_426, 0, sizeof(int));
memset(&i_427, 0, sizeof(int));
memset(&i_428, 0, sizeof(int));
    options_413=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1733, 1517)), "libneo-c-str-gc.c", 1733, 1518))->options;
    str_414=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1734, 1519)), "libneo-c-str-gc.c", 1734, 1520))->str;
    re_415=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1736, 1521)), "libneo-c-str-gc.c", 1736, 1522))->re;
    self2_416=(come_push_stackframe("libneo-c-str-gc.c", 1738, 1525),__exception_result_var_b316=charp_reverse(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1738, 1523)), "libneo-c-str-gc.c", 1738, 1524))), come_pop_stackframe(), __exception_result_var_b316);
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
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        options_424=2097152;
        len_425=(come_push_stackframe("libneo-c-str-gc.c", 1753, 1526),__exception_result_var_b317=strlen(self2_416), come_pop_stackframe(), __exception_result_var_b317);
        regex_result_426=(come_push_stackframe("libneo-c-str-gc.c", 1754, 1527),__exception_result_var_b318=pcre_exec(re_415,(struct pcre_extra*)0,self2_416,len_425,offset_422,options_424,ovec_value_420,ovec_max_417*3), come_pop_stackframe(), __exception_result_var_b318);
        for(        i_427=0;        i_427<ovec_max_417;        i_427++        ){
            (come_range_check(&((int*)come_null_check(start_418, "libneo-c-str-gc.c", 1757, 1528))[i_427],((int*)come_null_check(start_418, "libneo-c-str-gc.c", 1757, 1528)),((int*)come_null_check(start_418, "libneo-c-str-gc.c", 1757, 1528))+(ovec_max_417), "libneo-c-str-gc.c", 1757), ((int*)come_null_check(start_418, "libneo-c-str-gc.c", 1757, 1528))[i_427]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_420, "libneo-c-str-gc.c", 1757, 1529))[i_427*2],((int*)come_null_check(ovec_value_420, "libneo-c-str-gc.c", 1757, 1529)),((int*)come_null_check(ovec_value_420, "libneo-c-str-gc.c", 1757, 1529))+(ovec_max_417*3), "libneo-c-str-gc.c", 1757));
        }
        for(        i_428=0;        i_428<ovec_max_417;        i_428++        ){
            (come_range_check(&((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1760, 1530))[i_428],((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1760, 1530)),((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1760, 1530))+(ovec_max_417), "libneo-c-str-gc.c", 1760), ((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1760, 1530))[i_428]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_420, "libneo-c-str-gc.c", 1760, 1531))[i_428*2+1],((int*)come_null_check(ovec_value_420, "libneo-c-str-gc.c", 1760, 1531)),((int*)come_null_check(ovec_value_420, "libneo-c-str-gc.c", 1760, 1531))+(ovec_max_417*3), "libneo-c-str-gc.c", 1760));
        }
        if(_if_conditional130=regex_result_426>0,        _if_conditional130) {
            n_423++;
            if(_if_conditional131=offset_422==*(int*)come_range_check(&((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1768, 1532))[0],((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1768, 1532)),((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1768, 1532))+(ovec_max_417), "libneo-c-str-gc.c", 1768),            _if_conditional131) {
                offset_422++;
            }
            else {
                offset_422=*(int*)come_range_check(&((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1772, 1533))[0],((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1772, 1533)),((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1772, 1533))+(ovec_max_417), "libneo-c-str-gc.c", 1772);
            }
            if(_if_conditional132=n_423==count,            _if_conditional132) {
                result_421=(come_push_stackframe("libneo-c-str-gc.c", 1776, 1534),__exception_result_var_b319=strlen(self), come_pop_stackframe(), __exception_result_var_b319)-*(int*)come_range_check(&((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1776, 1535))[0],((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1776, 1535)),((int*)come_null_check(end_419, "libneo-c-str-gc.c", 1776, 1535))+(ovec_max_417), "libneo-c-str-gc.c", 1776);
                break;
            }
        }
        else {
            break;
        }
    }
    __result184__ = result_421;
    return __result184__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
int offset_429;
int ovec_max_430;
const char* err_434;
int erro_ofs_435;
int options_436;
char* str_437;
struct real_pcre8_or_16* re_438;
int n_439;
_Bool _while_condtional21;
int options_440;
unsigned long int __exception_result_var_b320;
int len_441;
int __exception_result_var_b321;
int regex_result_442;
int i_443;
int i_444;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool __result185__;
_Bool _if_conditional135;
_Bool __result186__;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_429, 0, sizeof(int));
memset(&ovec_max_430, 0, sizeof(int));
memset(&err_434, 0, sizeof(const char*));
memset(&erro_ofs_435, 0, sizeof(int));
memset(&options_436, 0, sizeof(int));
memset(&str_437, 0, sizeof(char*));
memset(&re_438, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_439, 0, sizeof(int));
memset(&options_440, 0, sizeof(int));
memset(&len_441, 0, sizeof(int));
memset(&regex_result_442, 0, sizeof(int));
memset(&i_443, 0, sizeof(int));
memset(&i_444, 0, sizeof(int));
    offset_429=0;
    ovec_max_430=16;
    int start_431[ovec_max_430];
    memset(&start_431, 0, sizeof(int)    *(ovec_max_430)    );
    int end_432[ovec_max_430];
    memset(&end_432, 0, sizeof(int)    *(ovec_max_430)    );
    int ovec_value_433[ovec_max_430*3];
    memset(&ovec_value_433, 0, sizeof(int)    *(ovec_max_430*3)    );
    options_436=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1802, 1536)), "libneo-c-str-gc.c", 1802, 1537))->options;
    str_437=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1803, 1538)), "libneo-c-str-gc.c", 1803, 1539))->str;
    re_438=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1805, 1540)), "libneo-c-str-gc.c", 1805, 1541))->re;
    n_439=0;
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        options_440=2097152;
        len_441=(come_push_stackframe("libneo-c-str-gc.c", 1811, 1542),__exception_result_var_b320=strlen(self), come_pop_stackframe(), __exception_result_var_b320);
        regex_result_442=(come_push_stackframe("libneo-c-str-gc.c", 1813, 1543),__exception_result_var_b321=pcre_exec(re_438,(struct pcre_extra*)0,self,len_441,offset_429,options_440,ovec_value_433,ovec_max_430*3), come_pop_stackframe(), __exception_result_var_b321);
        for(        i_443=0;        i_443<ovec_max_430;        i_443++        ){
            (come_range_check(&((int*)come_null_check(start_431, "libneo-c-str-gc.c", 1816, 1544))[i_443],((int*)come_null_check(start_431, "libneo-c-str-gc.c", 1816, 1544)),((int*)come_null_check(start_431, "libneo-c-str-gc.c", 1816, 1544))+(ovec_max_430), "libneo-c-str-gc.c", 1816), ((int*)come_null_check(start_431, "libneo-c-str-gc.c", 1816, 1544))[i_443]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_433, "libneo-c-str-gc.c", 1816, 1545))[i_443*2],((int*)come_null_check(ovec_value_433, "libneo-c-str-gc.c", 1816, 1545)),((int*)come_null_check(ovec_value_433, "libneo-c-str-gc.c", 1816, 1545))+(ovec_max_430*3), "libneo-c-str-gc.c", 1816));
        }
        for(        i_444=0;        i_444<ovec_max_430;        i_444++        ){
            (come_range_check(&((int*)come_null_check(end_432, "libneo-c-str-gc.c", 1819, 1546))[i_444],((int*)come_null_check(end_432, "libneo-c-str-gc.c", 1819, 1546)),((int*)come_null_check(end_432, "libneo-c-str-gc.c", 1819, 1546))+(ovec_max_430), "libneo-c-str-gc.c", 1819), ((int*)come_null_check(end_432, "libneo-c-str-gc.c", 1819, 1546))[i_444]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_433, "libneo-c-str-gc.c", 1819, 1547))[i_444*2+1],((int*)come_null_check(ovec_value_433, "libneo-c-str-gc.c", 1819, 1547)),((int*)come_null_check(ovec_value_433, "libneo-c-str-gc.c", 1819, 1547))+(ovec_max_430*3), "libneo-c-str-gc.c", 1819));
        }
        if(_if_conditional133=regex_result_442>0,        _if_conditional133) {
            n_439++;
            if(_if_conditional134=count==n_439,            _if_conditional134) {
                __result185__ = (_Bool)1;
                return __result185__;
            }
            if(_if_conditional135=offset_429==*(int*)come_range_check(&((int*)come_null_check(end_432, "libneo-c-str-gc.c", 1831, 1548))[0],((int*)come_null_check(end_432, "libneo-c-str-gc.c", 1831, 1548)),((int*)come_null_check(end_432, "libneo-c-str-gc.c", 1831, 1548))+(ovec_max_430), "libneo-c-str-gc.c", 1831),            _if_conditional135) {
                offset_429++;
            }
            else {
                offset_429=*(int*)come_range_check(&((int*)come_null_check(end_432, "libneo-c-str-gc.c", 1835, 1549))[0],((int*)come_null_check(end_432, "libneo-c-str-gc.c", 1835, 1549)),((int*)come_null_check(end_432, "libneo-c-str-gc.c", 1835, 1549))+(ovec_max_430), "libneo-c-str-gc.c", 1835);
            }
        }
        else {
            __result186__ = (_Bool)0;
            return __result186__;
        }
    }
    __result187__ = (_Bool)0;
    return __result187__;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_445;
int ovec_max_446;
const char* err_450;
int erro_ofs_451;
int options_452;
char* str_453;
struct real_pcre8_or_16* re_454;
struct buffer* __exception_result_var_b322;
struct buffer* result_455;
_Bool _while_condtional22;
int options_456;
unsigned long int __exception_result_var_b323;
int len_457;
int __exception_result_var_b324;
int regex_result_458;
int i_459;
int i_460;
_Bool _if_conditional136;
char* __exception_result_var_b325;
char* str_461;
struct buffer* __exception_result_var_b326;
struct list$1charph* __exception_result_var_b327;
struct list$1charph* group_strings_462;
char* __exception_result_var_b328;
char* match_string_463;
char* __exception_result_var_b329;
struct list$1charph* __exception_result_var_b330;
char* block_result_464;
struct buffer* __exception_result_var_b331;
_Bool _if_conditional137;
_Bool _if_conditional138;
char* __exception_result_var_b332;
char* str_465;
struct buffer* __exception_result_var_b333;
_Bool _if_conditional139;
char* __exception_result_var_b334;
char* str_466;
struct buffer* __exception_result_var_b335;
_Bool _if_conditional140;
struct list$1charph* __exception_result_var_b336;
struct list$1charph* group_strings_467;
int i_468;
char* __exception_result_var_b337;
char* match_string_469;
struct list$1charph* __exception_result_var_b338;
char* __exception_result_var_b339;
char* match_string_470;
char* block_result_471;
struct buffer* __exception_result_var_b340;
_Bool _if_conditional141;
char* __exception_result_var_b341;
char* str_472;
struct buffer* __exception_result_var_b342;
char* __exception_result_var_b343;
char* str_473;
struct buffer* __exception_result_var_b344;
char* __exception_result_var_b345;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_445, 0, sizeof(int));
memset(&ovec_max_446, 0, sizeof(int));
memset(&err_450, 0, sizeof(const char*));
memset(&erro_ofs_451, 0, sizeof(int));
memset(&options_452, 0, sizeof(int));
memset(&str_453, 0, sizeof(char*));
memset(&re_454, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_455, 0, sizeof(struct buffer*));
memset(&options_456, 0, sizeof(int));
memset(&len_457, 0, sizeof(int));
memset(&regex_result_458, 0, sizeof(int));
memset(&i_459, 0, sizeof(int));
memset(&i_460, 0, sizeof(int));
memset(&str_461, 0, sizeof(char*));
memset(&group_strings_462, 0, sizeof(struct list$1charph*));
memset(&match_string_463, 0, sizeof(char*));
memset(&block_result_464, 0, sizeof(char*));
memset(&str_465, 0, sizeof(char*));
memset(&str_466, 0, sizeof(char*));
memset(&group_strings_467, 0, sizeof(struct list$1charph*));
memset(&i_468, 0, sizeof(int));
memset(&match_string_469, 0, sizeof(char*));
memset(&match_string_470, 0, sizeof(char*));
memset(&block_result_471, 0, sizeof(char*));
memset(&str_472, 0, sizeof(char*));
memset(&str_473, 0, sizeof(char*));
    offset_445=0;
    ovec_max_446=16;
    int start_447[ovec_max_446];
    memset(&start_447, 0, sizeof(int)    *(ovec_max_446)    );
    int end_448[ovec_max_446];
    memset(&end_448, 0, sizeof(int)    *(ovec_max_446)    );
    int ovec_value_449[ovec_max_446*3];
    memset(&ovec_value_449, 0, sizeof(int)    *(ovec_max_446*3)    );
    options_452=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1860, 1550)), "libneo-c-str-gc.c", 1860, 1551))->options;
    str_453=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1861, 1552)), "libneo-c-str-gc.c", 1861, 1553))->str;
    re_454=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1863, 1554)), "libneo-c-str-gc.c", 1863, 1555))->re;
    result_455=(come_push_stackframe("libneo-c-str-gc.c", 1865, 1558),__exception_result_var_b322=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1865, "buffer"), "libneo-c-str-gc.c", 1865, 1556)), "libneo-c-str-gc.c", 1865, 1557))), come_pop_stackframe(), __exception_result_var_b322);
    while(_while_condtional22=(_Bool)1,    _while_condtional22) {
        options_456=2097152;
        len_457=(come_push_stackframe("libneo-c-str-gc.c", 1869, 1559),__exception_result_var_b323=strlen(self), come_pop_stackframe(), __exception_result_var_b323);
        regex_result_458=(come_push_stackframe("libneo-c-str-gc.c", 1870, 1560),__exception_result_var_b324=pcre_exec(re_454,(struct pcre_extra*)0,self,len_457,offset_445,options_456,ovec_value_449,ovec_max_446*3), come_pop_stackframe(), __exception_result_var_b324);
        for(        i_459=0;        i_459<ovec_max_446;        i_459++        ){
            (come_range_check(&((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1873, 1561))[i_459],((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1873, 1561)),((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1873, 1561))+(ovec_max_446), "libneo-c-str-gc.c", 1873), ((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1873, 1561))[i_459]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_449, "libneo-c-str-gc.c", 1873, 1562))[i_459*2],((int*)come_null_check(ovec_value_449, "libneo-c-str-gc.c", 1873, 1562)),((int*)come_null_check(ovec_value_449, "libneo-c-str-gc.c", 1873, 1562))+(ovec_max_446*3), "libneo-c-str-gc.c", 1873));
        }
        for(        i_460=0;        i_460<ovec_max_446;        i_460++        ){
            (come_range_check(&((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1876, 1563))[i_460],((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1876, 1563)),((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1876, 1563))+(ovec_max_446), "libneo-c-str-gc.c", 1876), ((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1876, 1563))[i_460]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_449, "libneo-c-str-gc.c", 1876, 1564))[i_460*2+1],((int*)come_null_check(ovec_value_449, "libneo-c-str-gc.c", 1876, 1564)),((int*)come_null_check(ovec_value_449, "libneo-c-str-gc.c", 1876, 1564))+(ovec_max_446*3), "libneo-c-str-gc.c", 1876));
        }
        if(_if_conditional136=regex_result_458==1,        _if_conditional136) {
            str_461=(come_push_stackframe("libneo-c-str-gc.c", 1881, 1568),__exception_result_var_b325=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1881, 1565)), "libneo-c-str-gc.c", 1881, 1566)),offset_445,*(int*)come_range_check(&((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1881, 1567))[0],((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1881, 1567)),((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1881, 1567))+(ovec_max_446), "libneo-c-str-gc.c", 1881)), come_pop_stackframe(), __exception_result_var_b325);
            (come_push_stackframe("libneo-c-str-gc.c", 1883, 1571),__exception_result_var_b326=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_455, "libneo-c-str-gc.c", 1883, 1569)), "libneo-c-str-gc.c", 1883, 1570)),str_461), come_pop_stackframe(), __exception_result_var_b326);
            group_strings_462=(come_push_stackframe("libneo-c-str-gc.c", 1885, 1574),__exception_result_var_b327=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1885, "list$1charph"), "libneo-c-str-gc.c", 1885, 1572)), "libneo-c-str-gc.c", 1885, 1573))), come_pop_stackframe(), __exception_result_var_b327);
            match_string_463=(come_push_stackframe("libneo-c-str-gc.c", 1887, 1579),__exception_result_var_b328=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1887, 1575)), "libneo-c-str-gc.c", 1887, 1576)),*(int*)come_range_check(&((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1887, 1577))[0],((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1887, 1577)),((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1887, 1577))+(ovec_max_446), "libneo-c-str-gc.c", 1887),*(int*)come_range_check(&((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1887, 1578))[0],((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1887, 1578)),((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1887, 1578))+(ovec_max_446), "libneo-c-str-gc.c", 1887)), come_pop_stackframe(), __exception_result_var_b328);
            (come_push_stackframe("libneo-c-str-gc.c", 1889, 1587),__exception_result_var_b330=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_462, "libneo-c-str-gc.c", 1889, 1580)), "libneo-c-str-gc.c", 1889, 1581)),(come_push_stackframe("libneo-c-str-gc.c", 1889, 1586),__exception_result_var_b329=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1889, 1582)), "libneo-c-str-gc.c", 1889, 1583)),*(int*)come_range_check(&((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1889, 1584))[0],((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1889, 1584)),((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1889, 1584))+(ovec_max_446), "libneo-c-str-gc.c", 1889),*(int*)come_range_check(&((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1889, 1585))[0],((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1889, 1585)),((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1889, 1585))+(ovec_max_446), "libneo-c-str-gc.c", 1889)), come_pop_stackframe(), __exception_result_var_b329)), come_pop_stackframe(), __exception_result_var_b330);
            block_result_464=block(parent,match_string_463,group_strings_462);
            (come_push_stackframe("libneo-c-str-gc.c", 1893, 1590),__exception_result_var_b331=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_455, "libneo-c-str-gc.c", 1893, 1588)), "libneo-c-str-gc.c", 1893, 1589)),block_result_464), come_pop_stackframe(), __exception_result_var_b331);
            if(_if_conditional137=offset_445==*(int*)come_range_check(&((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1895, 1591))[0],((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1895, 1591)),((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1895, 1591))+(ovec_max_446), "libneo-c-str-gc.c", 1895),            _if_conditional137) {
                offset_445++;
            }
            else {
                offset_445=*(int*)come_range_check(&((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1899, 1592))[0],((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1899, 1592)),((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1899, 1592))+(ovec_max_446), "libneo-c-str-gc.c", 1899);
            }
            if(_if_conditional138=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1902, 1593)), "libneo-c-str-gc.c", 1902, 1594))->global,            _if_conditional138) {
                str_465=(come_push_stackframe("libneo-c-str-gc.c", 1903, 1597),__exception_result_var_b332=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1903, 1595)), "libneo-c-str-gc.c", 1903, 1596)),offset_445,-1), come_pop_stackframe(), __exception_result_var_b332);
                (come_push_stackframe("libneo-c-str-gc.c", 1904, 1600),__exception_result_var_b333=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_455, "libneo-c-str-gc.c", 1904, 1598)), "libneo-c-str-gc.c", 1904, 1599)),str_465), come_pop_stackframe(), __exception_result_var_b333);
                break;
            }
        }
        else {
            if(_if_conditional139=regex_result_458>1,            _if_conditional139) {
                str_466=(come_push_stackframe("libneo-c-str-gc.c", 1910, 1604),__exception_result_var_b334=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1910, 1601)), "libneo-c-str-gc.c", 1910, 1602)),offset_445,*(int*)come_range_check(&((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1910, 1603))[0],((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1910, 1603)),((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1910, 1603))+(ovec_max_446), "libneo-c-str-gc.c", 1910)), come_pop_stackframe(), __exception_result_var_b334);
                (come_push_stackframe("libneo-c-str-gc.c", 1911, 1607),__exception_result_var_b335=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_455, "libneo-c-str-gc.c", 1911, 1605)), "libneo-c-str-gc.c", 1911, 1606)),str_466), come_pop_stackframe(), __exception_result_var_b335);
                if(_if_conditional140=offset_445==*(int*)come_range_check(&((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1913, 1608))[0],((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1913, 1608)),((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1913, 1608))+(ovec_max_446), "libneo-c-str-gc.c", 1913),                _if_conditional140) {
                    offset_445++;
                }
                else {
                    offset_445=*(int*)come_range_check(&((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1917, 1609))[0],((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1917, 1609)),((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1917, 1609))+(ovec_max_446), "libneo-c-str-gc.c", 1917);
                }
                group_strings_467=(come_push_stackframe("libneo-c-str-gc.c", 1920, 1612),__exception_result_var_b336=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1920, "list$1charph"), "libneo-c-str-gc.c", 1920, 1610)), "libneo-c-str-gc.c", 1920, 1611))), come_pop_stackframe(), __exception_result_var_b336);
                for(                i_468=1;                i_468<regex_result_458;                i_468++                ){
                    match_string_469=(come_push_stackframe("libneo-c-str-gc.c", 1923, 1617),__exception_result_var_b337=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1923, 1613)), "libneo-c-str-gc.c", 1923, 1614)),*(int*)come_range_check(&((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1923, 1615))[i_468],((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1923, 1615)),((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1923, 1615))+(ovec_max_446), "libneo-c-str-gc.c", 1923),*(int*)come_range_check(&((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1923, 1616))[i_468],((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1923, 1616)),((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1923, 1616))+(ovec_max_446), "libneo-c-str-gc.c", 1923)), come_pop_stackframe(), __exception_result_var_b337);
                    (come_push_stackframe("libneo-c-str-gc.c", 1924, 1620),__exception_result_var_b338=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_467, "libneo-c-str-gc.c", 1924, 1618)), "libneo-c-str-gc.c", 1924, 1619)),match_string_469), come_pop_stackframe(), __exception_result_var_b338);
                }
                match_string_470=(come_push_stackframe("libneo-c-str-gc.c", 1927, 1625),__exception_result_var_b339=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1927, 1621)), "libneo-c-str-gc.c", 1927, 1622)),*(int*)come_range_check(&((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1927, 1623))[0],((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1927, 1623)),((int*)come_null_check(start_447, "libneo-c-str-gc.c", 1927, 1623))+(ovec_max_446), "libneo-c-str-gc.c", 1927),*(int*)come_range_check(&((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1927, 1624))[0],((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1927, 1624)),((int*)come_null_check(end_448, "libneo-c-str-gc.c", 1927, 1624))+(ovec_max_446), "libneo-c-str-gc.c", 1927)), come_pop_stackframe(), __exception_result_var_b339);
                block_result_471=block(parent,match_string_470,group_strings_467);
                (come_push_stackframe("libneo-c-str-gc.c", 1931, 1628),__exception_result_var_b340=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_455, "libneo-c-str-gc.c", 1931, 1626)), "libneo-c-str-gc.c", 1931, 1627)),block_result_471), come_pop_stackframe(), __exception_result_var_b340);
                if(_if_conditional141=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1933, 1629)), "libneo-c-str-gc.c", 1933, 1630))->global,                _if_conditional141) {
                    str_472=(come_push_stackframe("libneo-c-str-gc.c", 1934, 1633),__exception_result_var_b341=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1934, 1631)), "libneo-c-str-gc.c", 1934, 1632)),offset_445,-1), come_pop_stackframe(), __exception_result_var_b341);
                    (come_push_stackframe("libneo-c-str-gc.c", 1935, 1636),__exception_result_var_b342=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_455, "libneo-c-str-gc.c", 1935, 1634)), "libneo-c-str-gc.c", 1935, 1635)),str_472), come_pop_stackframe(), __exception_result_var_b342);
                    break;
                }
            }
            else {
                str_473=(come_push_stackframe("libneo-c-str-gc.c", 1941, 1639),__exception_result_var_b343=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1941, 1637)), "libneo-c-str-gc.c", 1941, 1638)),offset_445,-1), come_pop_stackframe(), __exception_result_var_b343);
                (come_push_stackframe("libneo-c-str-gc.c", 1942, 1642),__exception_result_var_b344=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_455, "libneo-c-str-gc.c", 1942, 1640)), "libneo-c-str-gc.c", 1942, 1641)),str_473), come_pop_stackframe(), __exception_result_var_b344);
                break;
            }
        }
    }
    __result188__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 1946, 1645),__exception_result_var_b345=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_455, "libneo-c-str-gc.c", 1946, 1643)), "libneo-c-str-gc.c", 1946, 1644))), come_pop_stackframe(), __exception_result_var_b345);
    return __result188__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_474;
int ovec_max_475;
const char* err_479;
int erro_ofs_480;
int options_481;
char* str_482;
struct real_pcre8_or_16* re_483;
struct buffer* __exception_result_var_b346;
struct buffer* result_484;
int n_485;
_Bool _while_condtional23;
int options_486;
unsigned long int __exception_result_var_b347;
int len_487;
int __exception_result_var_b348;
int regex_result_488;
int i_489;
int i_490;
_Bool _if_conditional142;
char* __exception_result_var_b349;
char* str_491;
struct buffer* __exception_result_var_b350;
struct list$1charph* __exception_result_var_b351;
struct list$1charph* group_strings_492;
char* __exception_result_var_b352;
struct list$1charph* __exception_result_var_b353;
char* __exception_result_var_b354;
char* match_string_493;
char* block_result_494;
struct buffer* __exception_result_var_b355;
_Bool _if_conditional143;
_Bool _if_conditional144;
char* __exception_result_var_b356;
char* str_495;
struct buffer* __exception_result_var_b357;
_Bool _if_conditional145;
char* __exception_result_var_b358;
char* str_496;
struct buffer* __exception_result_var_b359;
_Bool _if_conditional146;
char* __exception_result_var_b360;
char* str_497;
struct buffer* __exception_result_var_b361;
_Bool _if_conditional147;
struct list$1charph* __exception_result_var_b362;
struct list$1charph* group_strings_498;
int i_499;
char* __exception_result_var_b363;
char* match_string_500;
struct list$1charph* __exception_result_var_b364;
char* __exception_result_var_b365;
char* match_string_501;
char* block_result_502;
struct buffer* __exception_result_var_b366;
_Bool _if_conditional148;
char* __exception_result_var_b367;
char* str_503;
struct buffer* __exception_result_var_b368;
_Bool _if_conditional149;
char* __exception_result_var_b369;
char* str_504;
struct buffer* __exception_result_var_b370;
char* __exception_result_var_b371;
char* str_505;
struct buffer* __exception_result_var_b372;
char* __exception_result_var_b373;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_474, 0, sizeof(int));
memset(&ovec_max_475, 0, sizeof(int));
memset(&err_479, 0, sizeof(const char*));
memset(&erro_ofs_480, 0, sizeof(int));
memset(&options_481, 0, sizeof(int));
memset(&str_482, 0, sizeof(char*));
memset(&re_483, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_484, 0, sizeof(struct buffer*));
memset(&n_485, 0, sizeof(int));
memset(&options_486, 0, sizeof(int));
memset(&len_487, 0, sizeof(int));
memset(&regex_result_488, 0, sizeof(int));
memset(&i_489, 0, sizeof(int));
memset(&i_490, 0, sizeof(int));
memset(&str_491, 0, sizeof(char*));
memset(&group_strings_492, 0, sizeof(struct list$1charph*));
memset(&match_string_493, 0, sizeof(char*));
memset(&block_result_494, 0, sizeof(char*));
memset(&str_495, 0, sizeof(char*));
memset(&str_496, 0, sizeof(char*));
memset(&str_497, 0, sizeof(char*));
memset(&group_strings_498, 0, sizeof(struct list$1charph*));
memset(&i_499, 0, sizeof(int));
memset(&match_string_500, 0, sizeof(char*));
memset(&match_string_501, 0, sizeof(char*));
memset(&block_result_502, 0, sizeof(char*));
memset(&str_503, 0, sizeof(char*));
memset(&str_504, 0, sizeof(char*));
memset(&str_505, 0, sizeof(char*));
    offset_474=0;
    ovec_max_475=16;
    int start_476[ovec_max_475];
    memset(&start_476, 0, sizeof(int)    *(ovec_max_475)    );
    int end_477[ovec_max_475];
    memset(&end_477, 0, sizeof(int)    *(ovec_max_475)    );
    int ovec_value_478[ovec_max_475*3];
    memset(&ovec_value_478, 0, sizeof(int)    *(ovec_max_475*3)    );
    options_481=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1961, 1646)), "libneo-c-str-gc.c", 1961, 1647))->options;
    str_482=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1962, 1648)), "libneo-c-str-gc.c", 1962, 1649))->str;
    re_483=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 1964, 1650)), "libneo-c-str-gc.c", 1964, 1651))->re;
    result_484=(come_push_stackframe("libneo-c-str-gc.c", 1966, 1654),__exception_result_var_b346=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1966, "buffer"), "libneo-c-str-gc.c", 1966, 1652)), "libneo-c-str-gc.c", 1966, 1653))), come_pop_stackframe(), __exception_result_var_b346);
    n_485=0;
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        options_486=2097152;
        len_487=(come_push_stackframe("libneo-c-str-gc.c", 1972, 1655),__exception_result_var_b347=strlen(self), come_pop_stackframe(), __exception_result_var_b347);
        regex_result_488=(come_push_stackframe("libneo-c-str-gc.c", 1973, 1656),__exception_result_var_b348=pcre_exec(re_483,(struct pcre_extra*)0,self,len_487,offset_474,options_486,ovec_value_478,ovec_max_475*3), come_pop_stackframe(), __exception_result_var_b348);
        for(        i_489=0;        i_489<ovec_max_475;        i_489++        ){
            (come_range_check(&((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1976, 1657))[i_489],((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1976, 1657)),((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1976, 1657))+(ovec_max_475), "libneo-c-str-gc.c", 1976), ((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1976, 1657))[i_489]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_478, "libneo-c-str-gc.c", 1976, 1658))[i_489*2],((int*)come_null_check(ovec_value_478, "libneo-c-str-gc.c", 1976, 1658)),((int*)come_null_check(ovec_value_478, "libneo-c-str-gc.c", 1976, 1658))+(ovec_max_475*3), "libneo-c-str-gc.c", 1976));
        }
        for(        i_490=0;        i_490<ovec_max_475;        i_490++        ){
            (come_range_check(&((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1979, 1659))[i_490],((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1979, 1659)),((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1979, 1659))+(ovec_max_475), "libneo-c-str-gc.c", 1979), ((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1979, 1659))[i_490]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_478, "libneo-c-str-gc.c", 1979, 1660))[i_490*2+1],((int*)come_null_check(ovec_value_478, "libneo-c-str-gc.c", 1979, 1660)),((int*)come_null_check(ovec_value_478, "libneo-c-str-gc.c", 1979, 1660))+(ovec_max_475*3), "libneo-c-str-gc.c", 1979));
        }
        if(_if_conditional142=regex_result_488==1,        _if_conditional142) {
            n_485++;
            str_491=(come_push_stackframe("libneo-c-str-gc.c", 1985, 1664),__exception_result_var_b349=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1985, 1661)), "libneo-c-str-gc.c", 1985, 1662)),offset_474,*(int*)come_range_check(&((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1985, 1663))[0],((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1985, 1663)),((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1985, 1663))+(ovec_max_475), "libneo-c-str-gc.c", 1985)), come_pop_stackframe(), __exception_result_var_b349);
            (come_push_stackframe("libneo-c-str-gc.c", 1987, 1667),__exception_result_var_b350=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_484, "libneo-c-str-gc.c", 1987, 1665)), "libneo-c-str-gc.c", 1987, 1666)),str_491), come_pop_stackframe(), __exception_result_var_b350);
            group_strings_492=(come_push_stackframe("libneo-c-str-gc.c", 1989, 1670),__exception_result_var_b351=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1989, "list$1charph"), "libneo-c-str-gc.c", 1989, 1668)), "libneo-c-str-gc.c", 1989, 1669))), come_pop_stackframe(), __exception_result_var_b351);
            (come_push_stackframe("libneo-c-str-gc.c", 1991, 1678),__exception_result_var_b353=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_492, "libneo-c-str-gc.c", 1991, 1671)), "libneo-c-str-gc.c", 1991, 1672)),(come_push_stackframe("libneo-c-str-gc.c", 1991, 1677),__exception_result_var_b352=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1991, 1673)), "libneo-c-str-gc.c", 1991, 1674)),*(int*)come_range_check(&((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1991, 1675))[0],((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1991, 1675)),((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1991, 1675))+(ovec_max_475), "libneo-c-str-gc.c", 1991),*(int*)come_range_check(&((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1991, 1676))[0],((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1991, 1676)),((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1991, 1676))+(ovec_max_475), "libneo-c-str-gc.c", 1991)), come_pop_stackframe(), __exception_result_var_b352)), come_pop_stackframe(), __exception_result_var_b353);
            match_string_493=(come_push_stackframe("libneo-c-str-gc.c", 1993, 1683),__exception_result_var_b354=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 1993, 1679)), "libneo-c-str-gc.c", 1993, 1680)),*(int*)come_range_check(&((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1993, 1681))[0],((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1993, 1681)),((int*)come_null_check(start_476, "libneo-c-str-gc.c", 1993, 1681))+(ovec_max_475), "libneo-c-str-gc.c", 1993),*(int*)come_range_check(&((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1993, 1682))[0],((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1993, 1682)),((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1993, 1682))+(ovec_max_475), "libneo-c-str-gc.c", 1993)), come_pop_stackframe(), __exception_result_var_b354);
            block_result_494=block(parent,match_string_493,group_strings_492);
            (come_push_stackframe("libneo-c-str-gc.c", 1997, 1686),__exception_result_var_b355=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_484, "libneo-c-str-gc.c", 1997, 1684)), "libneo-c-str-gc.c", 1997, 1685)),block_result_494), come_pop_stackframe(), __exception_result_var_b355);
            if(_if_conditional143=offset_474==*(int*)come_range_check(&((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1999, 1687))[0],((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1999, 1687)),((int*)come_null_check(end_477, "libneo-c-str-gc.c", 1999, 1687))+(ovec_max_475), "libneo-c-str-gc.c", 1999),            _if_conditional143) {
                offset_474++;
            }
            else {
                offset_474=*(int*)come_range_check(&((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2003, 1688))[0],((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2003, 1688)),((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2003, 1688))+(ovec_max_475), "libneo-c-str-gc.c", 2003);
            }
            if(_if_conditional144=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 2006, 1689)), "libneo-c-str-gc.c", 2006, 1690))->global,            _if_conditional144) {
                str_495=(come_push_stackframe("libneo-c-str-gc.c", 2007, 1693),__exception_result_var_b356=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 2007, 1691)), "libneo-c-str-gc.c", 2007, 1692)),offset_474,-1), come_pop_stackframe(), __exception_result_var_b356);
                (come_push_stackframe("libneo-c-str-gc.c", 2008, 1696),__exception_result_var_b357=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_484, "libneo-c-str-gc.c", 2008, 1694)), "libneo-c-str-gc.c", 2008, 1695)),str_495), come_pop_stackframe(), __exception_result_var_b357);
                break;
            }
            if(_if_conditional145=n_485==count,            _if_conditional145) {
                str_496=(come_push_stackframe("libneo-c-str-gc.c", 2013, 1699),__exception_result_var_b358=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 2013, 1697)), "libneo-c-str-gc.c", 2013, 1698)),offset_474,-1), come_pop_stackframe(), __exception_result_var_b358);
                (come_push_stackframe("libneo-c-str-gc.c", 2014, 1702),__exception_result_var_b359=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_484, "libneo-c-str-gc.c", 2014, 1700)), "libneo-c-str-gc.c", 2014, 1701)),str_496), come_pop_stackframe(), __exception_result_var_b359);
                break;
            }
        }
        else {
            if(_if_conditional146=regex_result_488>1,            _if_conditional146) {
                n_485++;
                str_497=(come_push_stackframe("libneo-c-str-gc.c", 2022, 1706),__exception_result_var_b360=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 2022, 1703)), "libneo-c-str-gc.c", 2022, 1704)),offset_474,*(int*)come_range_check(&((int*)come_null_check(start_476, "libneo-c-str-gc.c", 2022, 1705))[0],((int*)come_null_check(start_476, "libneo-c-str-gc.c", 2022, 1705)),((int*)come_null_check(start_476, "libneo-c-str-gc.c", 2022, 1705))+(ovec_max_475), "libneo-c-str-gc.c", 2022)), come_pop_stackframe(), __exception_result_var_b360);
                (come_push_stackframe("libneo-c-str-gc.c", 2023, 1709),__exception_result_var_b361=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_484, "libneo-c-str-gc.c", 2023, 1707)), "libneo-c-str-gc.c", 2023, 1708)),str_497), come_pop_stackframe(), __exception_result_var_b361);
                if(_if_conditional147=offset_474==*(int*)come_range_check(&((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2025, 1710))[0],((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2025, 1710)),((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2025, 1710))+(ovec_max_475), "libneo-c-str-gc.c", 2025),                _if_conditional147) {
                    offset_474++;
                }
                else {
                    offset_474=*(int*)come_range_check(&((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2029, 1711))[0],((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2029, 1711)),((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2029, 1711))+(ovec_max_475), "libneo-c-str-gc.c", 2029);
                }
                group_strings_498=(come_push_stackframe("libneo-c-str-gc.c", 2032, 1714),__exception_result_var_b362=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 2032, "list$1charph"), "libneo-c-str-gc.c", 2032, 1712)), "libneo-c-str-gc.c", 2032, 1713))), come_pop_stackframe(), __exception_result_var_b362);
                for(                i_499=1;                i_499<regex_result_488;                i_499++                ){
                    match_string_500=(come_push_stackframe("libneo-c-str-gc.c", 2035, 1719),__exception_result_var_b363=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 2035, 1715)), "libneo-c-str-gc.c", 2035, 1716)),*(int*)come_range_check(&((int*)come_null_check(start_476, "libneo-c-str-gc.c", 2035, 1717))[i_499],((int*)come_null_check(start_476, "libneo-c-str-gc.c", 2035, 1717)),((int*)come_null_check(start_476, "libneo-c-str-gc.c", 2035, 1717))+(ovec_max_475), "libneo-c-str-gc.c", 2035),*(int*)come_range_check(&((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2035, 1718))[i_499],((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2035, 1718)),((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2035, 1718))+(ovec_max_475), "libneo-c-str-gc.c", 2035)), come_pop_stackframe(), __exception_result_var_b363);
                    (come_push_stackframe("libneo-c-str-gc.c", 2036, 1722),__exception_result_var_b364=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_498, "libneo-c-str-gc.c", 2036, 1720)), "libneo-c-str-gc.c", 2036, 1721)),match_string_500), come_pop_stackframe(), __exception_result_var_b364);
                }
                match_string_501=(come_push_stackframe("libneo-c-str-gc.c", 2039, 1727),__exception_result_var_b365=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 2039, 1723)), "libneo-c-str-gc.c", 2039, 1724)),*(int*)come_range_check(&((int*)come_null_check(start_476, "libneo-c-str-gc.c", 2039, 1725))[0],((int*)come_null_check(start_476, "libneo-c-str-gc.c", 2039, 1725)),((int*)come_null_check(start_476, "libneo-c-str-gc.c", 2039, 1725))+(ovec_max_475), "libneo-c-str-gc.c", 2039),*(int*)come_range_check(&((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2039, 1726))[0],((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2039, 1726)),((int*)come_null_check(end_477, "libneo-c-str-gc.c", 2039, 1726))+(ovec_max_475), "libneo-c-str-gc.c", 2039)), come_pop_stackframe(), __exception_result_var_b365);
                block_result_502=block(parent,match_string_501,group_strings_498);
                (come_push_stackframe("libneo-c-str-gc.c", 2043, 1730),__exception_result_var_b366=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_484, "libneo-c-str-gc.c", 2043, 1728)), "libneo-c-str-gc.c", 2043, 1729)),block_result_502), come_pop_stackframe(), __exception_result_var_b366);
                if(_if_conditional148=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str-gc.c", 2045, 1731)), "libneo-c-str-gc.c", 2045, 1732))->global,                _if_conditional148) {
                    str_503=(come_push_stackframe("libneo-c-str-gc.c", 2046, 1735),__exception_result_var_b367=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 2046, 1733)), "libneo-c-str-gc.c", 2046, 1734)),offset_474,-1), come_pop_stackframe(), __exception_result_var_b367);
                    (come_push_stackframe("libneo-c-str-gc.c", 2047, 1738),__exception_result_var_b368=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_484, "libneo-c-str-gc.c", 2047, 1736)), "libneo-c-str-gc.c", 2047, 1737)),str_503), come_pop_stackframe(), __exception_result_var_b368);
                    break;
                }
                if(_if_conditional149=n_485==count,                _if_conditional149) {
                    str_504=(come_push_stackframe("libneo-c-str-gc.c", 2052, 1741),__exception_result_var_b369=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 2052, 1739)), "libneo-c-str-gc.c", 2052, 1740)),offset_474,-1), come_pop_stackframe(), __exception_result_var_b369);
                    (come_push_stackframe("libneo-c-str-gc.c", 2053, 1744),__exception_result_var_b370=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_484, "libneo-c-str-gc.c", 2053, 1742)), "libneo-c-str-gc.c", 2053, 1743)),str_504), come_pop_stackframe(), __exception_result_var_b370);
                    break;
                }
            }
            else {
                str_505=(come_push_stackframe("libneo-c-str-gc.c", 2059, 1747),__exception_result_var_b371=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str-gc.c", 2059, 1745)), "libneo-c-str-gc.c", 2059, 1746)),offset_474,-1), come_pop_stackframe(), __exception_result_var_b371);
                (come_push_stackframe("libneo-c-str-gc.c", 2060, 1750),__exception_result_var_b372=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_484, "libneo-c-str-gc.c", 2060, 1748)), "libneo-c-str-gc.c", 2060, 1749)),str_505), come_pop_stackframe(), __exception_result_var_b372);
                break;
            }
        }
    }
    __result189__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 2065, 1753),__exception_result_var_b373=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_484, "libneo-c-str-gc.c", 2065, 1751)), "libneo-c-str-gc.c", 2065, 1752))), come_pop_stackframe(), __exception_result_var_b373);
    return __result189__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
void* __result_obj__;
int result_506;
unsigned int* p_507;
_Bool _while_condtional24;
unsigned int __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_506, 0, sizeof(int));
memset(&p_507, 0, sizeof(unsigned int*));
    result_506=0;
    p_507=value;
    while(_while_condtional24=*((unsigned int*)come_null_check(p_507, "libneo-c-str-gc.c", 2074, 1754)),    _while_condtional24) {
        result_506+=(*((unsigned int*)come_null_check(p_507, "libneo-c-str-gc.c", 2075, 1755)));
        p_507++;
    }
    __result190__ = result_506;
    return __result190__;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b375;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    __result192__ = (come_push_stackframe("libneo-c-str-gc.c", 2089, 1757),__exception_result_var_b375=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b375)==0;
    return __result192__;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
    __result194__ = left==right;
    return __result194__;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
    __result195__ = left!=right;
    return __result195__;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
void* __result_obj__;
unsigned int __result196__;
memset(&__result_obj__, 0, sizeof(void*));
    __result196__ = value;
    return __result196__;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result197__;
memset(&__result_obj__, 0, sizeof(void*));
    __result197__ = left==right;
    return __result197__;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__;
char* __exception_result_var_b377;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
    __result198__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 2119, 1763),__exception_result_var_b377=xsprintf("%ls",wc), come_pop_stackframe(), __exception_result_var_b377);
    return __result198__;
}

char* string_chomp(char* str){
void* __result_obj__;
char* __exception_result_var_b378;
char* result_508;
int __exception_result_var_b379;
_Bool _if_conditional150;
char* __exception_result_var_b380;
char* __result199__;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_508, 0, sizeof(char*));
    result_508=(come_push_stackframe("libneo-c-str-gc.c", 2124, 1764),__exception_result_var_b378=__builtin_string(str), come_pop_stackframe(), __exception_result_var_b378);
    if(_if_conditional150=((char*)come_null_check(result_508, "libneo-c-str-gc.c", 2126, 1765))[(come_push_stackframe("libneo-c-str-gc.c", 2126, 1768),__exception_result_var_b379=string_length(((char*)come_null_check(((char*)come_null_check(result_508, "libneo-c-str-gc.c", 2126, 1766)), "libneo-c-str-gc.c", 2126, 1767))), come_pop_stackframe(), __exception_result_var_b379)-1]==10,    _if_conditional150) {
        __result199__ = __result_obj__ = (come_push_stackframe("libneo-c-str-gc.c", 2127, 1771),__exception_result_var_b380=string_substring(((char*)come_null_check(((char*)come_null_check(result_508, "libneo-c-str-gc.c", 2127, 1769)), "libneo-c-str-gc.c", 2127, 1770)),0,-2), come_pop_stackframe(), __exception_result_var_b380);
        return __result199__;
    }
    __result200__ = __result_obj__ = result_508;
    return __result200__;
}

