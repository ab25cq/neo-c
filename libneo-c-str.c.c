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

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size);
static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size);
static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size);
static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size);
static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list_item$1charp_finalize(struct list_item$1char* self);
static void list$1charp_finalize(struct list$1char* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static void list$1shortp_finalize(struct list$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list_item$1intp_finalize(struct list_item$1int* self);
static void list$1intp_finalize(struct list$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list_item$1longp_finalize(struct list_item$1long* self);
static void list$1longp_finalize(struct list$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static void list$1floatp_finalize(struct list$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static void list$1doublep_finalize(struct list$1double* self);
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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX595, int anonymous_var_nameX596, const char** anonymous_var_nameX597, int* anonymous_var_nameX598, const unsigned char* anonymous_var_nameX599);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX600, int anonymous_var_nameX601, const char** anonymous_var_nameX602, int* anonymous_var_nameX603, const unsigned char* anonymous_var_nameX604);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX605, int anonymous_var_nameX606, const char** anonymous_var_nameX607, int* anonymous_var_nameX608, const unsigned char* anonymous_var_nameX609);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX610, int anonymous_var_nameX611, int* anonymous_var_nameX612, const char** anonymous_var_nameX613, int* anonymous_var_nameX614, const unsigned char* anonymous_var_nameX615);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX616, int anonymous_var_nameX617, int* anonymous_var_nameX618, const char** anonymous_var_nameX619, int* anonymous_var_nameX620, const unsigned char* anonymous_var_nameX621);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX622, int anonymous_var_nameX623, int* anonymous_var_nameX624, const char** anonymous_var_nameX625, int* anonymous_var_nameX626, const unsigned char* anonymous_var_nameX627);

int pcre_config(int anonymous_var_nameX628, void* anonymous_var_nameX629);

int pcre16_config(int anonymous_var_nameX630, void* anonymous_var_nameX631);

int pcre32_config(int anonymous_var_nameX632, void* anonymous_var_nameX633);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX634, const char* anonymous_var_nameX635, int* anonymous_var_nameX636, int anonymous_var_nameX637, const char* anonymous_var_nameX638, char* anonymous_var_nameX639, int anonymous_var_nameX640);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX641, const unsigned short int* anonymous_var_nameX642, int* anonymous_var_nameX643, int anonymous_var_nameX644, const unsigned short int* anonymous_var_nameX645, unsigned short int* anonymous_var_nameX646, int anonymous_var_nameX647);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX648, const unsigned int* anonymous_var_nameX649, int* anonymous_var_nameX650, int anonymous_var_nameX651, const unsigned int* anonymous_var_nameX652, unsigned int* anonymous_var_nameX653, int anonymous_var_nameX654);

int pcre_copy_substring(const char* anonymous_var_nameX655, int* anonymous_var_nameX656, int anonymous_var_nameX657, int anonymous_var_nameX658, char* anonymous_var_nameX659, int anonymous_var_nameX660);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX661, int* anonymous_var_nameX662, int anonymous_var_nameX663, int anonymous_var_nameX664, unsigned short int* anonymous_var_nameX665, int anonymous_var_nameX666);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX667, int* anonymous_var_nameX668, int anonymous_var_nameX669, int anonymous_var_nameX670, unsigned int* anonymous_var_nameX671, int anonymous_var_nameX672);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX673, const struct pcre_extra* anonymous_var_nameX674, const char* anonymous_var_nameX675, int anonymous_var_nameX676, int anonymous_var_nameX677, int anonymous_var_nameX678, int* anonymous_var_nameX679, int anonymous_var_nameX680, int* anonymous_var_nameX681, int anonymous_var_nameX682);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX683, const struct pcre16_extra* anonymous_var_nameX684, const unsigned short int* anonymous_var_nameX685, int anonymous_var_nameX686, int anonymous_var_nameX687, int anonymous_var_nameX688, int* anonymous_var_nameX689, int anonymous_var_nameX690, int* anonymous_var_nameX691, int anonymous_var_nameX692);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX693, const struct pcre32_extra* anonymous_var_nameX694, const unsigned int* anonymous_var_nameX695, int anonymous_var_nameX696, int anonymous_var_nameX697, int anonymous_var_nameX698, int* anonymous_var_nameX699, int anonymous_var_nameX700, int* anonymous_var_nameX701, int anonymous_var_nameX702);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX703, const struct pcre_extra* anonymous_var_nameX704, const char* anonymous_var_nameX705, int anonymous_var_nameX706, int anonymous_var_nameX707, int anonymous_var_nameX708, int* anonymous_var_nameX709, int anonymous_var_nameX710);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX711, const struct pcre16_extra* anonymous_var_nameX712, const unsigned short int* anonymous_var_nameX713, int anonymous_var_nameX714, int anonymous_var_nameX715, int anonymous_var_nameX716, int* anonymous_var_nameX717, int anonymous_var_nameX718);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX719, const struct pcre32_extra* anonymous_var_nameX720, const unsigned int* anonymous_var_nameX721, int anonymous_var_nameX722, int anonymous_var_nameX723, int anonymous_var_nameX724, int* anonymous_var_nameX725, int anonymous_var_nameX726);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX727, const struct pcre_extra* anonymous_var_nameX728, const char* anonymous_var_nameX729, int anonymous_var_nameX730, int anonymous_var_nameX731, int anonymous_var_nameX732, int* anonymous_var_nameX733, int anonymous_var_nameX734, struct real_pcre_jit_stack* anonymous_var_nameX735);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX736, const struct pcre16_extra* anonymous_var_nameX737, const unsigned short int* anonymous_var_nameX738, int anonymous_var_nameX739, int anonymous_var_nameX740, int anonymous_var_nameX741, int* anonymous_var_nameX742, int anonymous_var_nameX743, struct real_pcre16_jit_stack* anonymous_var_nameX744);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX745, const struct pcre32_extra* anonymous_var_nameX746, const unsigned int* anonymous_var_nameX747, int anonymous_var_nameX748, int anonymous_var_nameX749, int anonymous_var_nameX750, int* anonymous_var_nameX751, int anonymous_var_nameX752, struct real_pcre32_jit_stack* anonymous_var_nameX753);

void pcre_free_substring(const char* anonymous_var_nameX754);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX755);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX756);

void pcre_free_substring_list(const char** anonymous_var_nameX757);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX758);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX759);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX760, const struct pcre_extra* anonymous_var_nameX761, int anonymous_var_nameX762, void* anonymous_var_nameX763);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX764, const struct pcre16_extra* anonymous_var_nameX765, int anonymous_var_nameX766, void* anonymous_var_nameX767);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX768, const struct pcre32_extra* anonymous_var_nameX769, int anonymous_var_nameX770, void* anonymous_var_nameX771);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX772, const char* anonymous_var_nameX773, int* anonymous_var_nameX774, int anonymous_var_nameX775, const char* anonymous_var_nameX776, const char** anonymous_var_nameX777);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX778, const unsigned short int* anonymous_var_nameX779, int* anonymous_var_nameX780, int anonymous_var_nameX781, const unsigned short int* anonymous_var_nameX782, const unsigned short int** anonymous_var_nameX783);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX784, const unsigned int* anonymous_var_nameX785, int* anonymous_var_nameX786, int anonymous_var_nameX787, const unsigned int* anonymous_var_nameX788, const unsigned int** anonymous_var_nameX789);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX790, const char* anonymous_var_nameX791);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX792, const unsigned short int* anonymous_var_nameX793);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX794, const unsigned int* anonymous_var_nameX795);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX796, const char* anonymous_var_nameX797, char** anonymous_var_nameX798, char** anonymous_var_nameX799);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX800, const unsigned short int* anonymous_var_nameX801, unsigned short int** anonymous_var_nameX802, unsigned short int** anonymous_var_nameX803);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX804, const unsigned int* anonymous_var_nameX805, unsigned int** anonymous_var_nameX806, unsigned int** anonymous_var_nameX807);

int pcre_get_substring(const char* anonymous_var_nameX808, int* anonymous_var_nameX809, int anonymous_var_nameX810, int anonymous_var_nameX811, const char** anonymous_var_nameX812);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX813, int* anonymous_var_nameX814, int anonymous_var_nameX815, int anonymous_var_nameX816, const unsigned short int** anonymous_var_nameX817);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX818, int* anonymous_var_nameX819, int anonymous_var_nameX820, int anonymous_var_nameX821, const unsigned int** anonymous_var_nameX822);

int pcre_get_substring_list(const char* anonymous_var_nameX823, int* anonymous_var_nameX824, int anonymous_var_nameX825, const char*** anonymous_var_nameX826);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX827, int* anonymous_var_nameX828, int anonymous_var_nameX829, const unsigned short int*** anonymous_var_nameX830);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX831, int* anonymous_var_nameX832, int anonymous_var_nameX833, const unsigned int*** anonymous_var_nameX834);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX835, int anonymous_var_nameX836);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX837, int anonymous_var_nameX838);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX839, int anonymous_var_nameX840);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX841, int anonymous_var_nameX842, const char** anonymous_var_nameX843);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX844, int anonymous_var_nameX845, const char** anonymous_var_nameX846);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX847, int anonymous_var_nameX848, const char** anonymous_var_nameX849);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX850);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX851);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX852);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX853, struct pcre_extra* anonymous_var_nameX854, const unsigned char* anonymous_var_nameX855);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX856, struct pcre16_extra* anonymous_var_nameX857, const unsigned char* anonymous_var_nameX858);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX859, struct pcre32_extra* anonymous_var_nameX860, const unsigned char* anonymous_var_nameX861);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX862, const unsigned short int* anonymous_var_nameX863, int anonymous_var_nameX864, int* anonymous_var_nameX865, int anonymous_var_nameX866);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX867, const unsigned int* anonymous_var_nameX868, int anonymous_var_nameX869, int* anonymous_var_nameX870, int anonymous_var_nameX871);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX872, int anonymous_var_nameX873);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX874, int anonymous_var_nameX875);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX876, int anonymous_var_nameX877);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX878);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX879);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX880);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX881, struct real_pcre_jit_stack* (*anonymous_var_nameX882)(void*), void* anonymous_var_nameX883);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX884, struct real_pcre16_jit_stack* (*anonymous_var_nameX885)(void*), void* anonymous_var_nameX886);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX887, struct real_pcre32_jit_stack* (*anonymous_var_nameX888)(void*), void* anonymous_var_nameX889);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

unsigned int* wcscpy(unsigned int* anonymous_var_nameX890, const unsigned int* anonymous_var_nameX891);

unsigned int* wcsncpy(unsigned int* anonymous_var_nameX892, const unsigned int* anonymous_var_nameX893, unsigned long int anonymous_var_nameX894);

unsigned int* wcscat(unsigned int* anonymous_var_nameX895, const unsigned int* anonymous_var_nameX896);

unsigned int* wcsncat(unsigned int* anonymous_var_nameX897, const unsigned int* anonymous_var_nameX898, unsigned long int anonymous_var_nameX899);

int wcscmp(const unsigned int* anonymous_var_nameX900, const unsigned int* anonymous_var_nameX901);

int wcsncmp(const unsigned int* anonymous_var_nameX902, const unsigned int* anonymous_var_nameX903, unsigned long int anonymous_var_nameX904);

int wcscoll(const unsigned int* anonymous_var_nameX905, const unsigned int* anonymous_var_nameX906);

unsigned long int wcsxfrm(unsigned int* anonymous_var_nameX907, const unsigned int* anonymous_var_nameX908, unsigned long int anonymous_var_nameX909);

unsigned int* wcschr(const unsigned int* anonymous_var_nameX910, unsigned int anonymous_var_nameX911);

unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX912, unsigned int anonymous_var_nameX913);

unsigned long int wcscspn(const unsigned int* anonymous_var_nameX914, const unsigned int* anonymous_var_nameX915);

unsigned long int wcsspn(const unsigned int* anonymous_var_nameX916, const unsigned int* anonymous_var_nameX917);

unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX918, const unsigned int* anonymous_var_nameX919);

unsigned int* wcstok(unsigned int* anonymous_var_nameX920, const unsigned int* anonymous_var_nameX921, unsigned int** anonymous_var_nameX922);

unsigned long int wcslen(const unsigned int* anonymous_var_nameX923);

unsigned int* wcsstr(const unsigned int* anonymous_var_nameX924, const unsigned int* anonymous_var_nameX925);

unsigned int* wcswcs(const unsigned int* anonymous_var_nameX926, const unsigned int* anonymous_var_nameX927);

unsigned int* wmemchr(const unsigned int* anonymous_var_nameX928, unsigned int anonymous_var_nameX929, unsigned long int anonymous_var_nameX930);

int wmemcmp(const unsigned int* anonymous_var_nameX931, const unsigned int* anonymous_var_nameX932, unsigned long int anonymous_var_nameX933);

unsigned int* wmemcpy(unsigned int* anonymous_var_nameX934, const unsigned int* anonymous_var_nameX935, unsigned long int anonymous_var_nameX936);

unsigned int* wmemmove(unsigned int* anonymous_var_nameX937, const unsigned int* anonymous_var_nameX938, unsigned long int anonymous_var_nameX939);

unsigned int* wmemset(unsigned int* anonymous_var_nameX940, unsigned int anonymous_var_nameX941, unsigned long int anonymous_var_nameX942);

unsigned int btowc(int anonymous_var_nameX943);

int wctob(unsigned int anonymous_var_nameX944);

int mbsinit(const struct __mbstate_t* anonymous_var_nameX945);

unsigned long int mbrtowc(unsigned int* anonymous_var_nameX946, const char* anonymous_var_nameX947, unsigned long int anonymous_var_nameX948, struct __mbstate_t* anonymous_var_nameX949);

unsigned long int wcrtomb(char* anonymous_var_nameX950, unsigned int anonymous_var_nameX951, struct __mbstate_t* anonymous_var_nameX952);

unsigned long int mbrlen(const char* anonymous_var_nameX953, unsigned long int anonymous_var_nameX954, struct __mbstate_t* anonymous_var_nameX955);

unsigned long int mbsrtowcs(unsigned int* anonymous_var_nameX956, const char** anonymous_var_nameX957, unsigned long int anonymous_var_nameX958, struct __mbstate_t* anonymous_var_nameX959);

unsigned long int wcsrtombs(char* anonymous_var_nameX960, const unsigned int** anonymous_var_nameX961, unsigned long int anonymous_var_nameX962, struct __mbstate_t* anonymous_var_nameX963);

float wcstof(const unsigned int* anonymous_var_nameX964, unsigned int** anonymous_var_nameX965);

double wcstod(const unsigned int* anonymous_var_nameX966, unsigned int** anonymous_var_nameX967);

long double wcstold(const unsigned int* anonymous_var_nameX968, unsigned int** anonymous_var_nameX969);

long wcstol(const unsigned int* anonymous_var_nameX970, unsigned int** anonymous_var_nameX971, int anonymous_var_nameX972);

unsigned long int wcstoul(const unsigned int* anonymous_var_nameX973, unsigned int** anonymous_var_nameX974, int anonymous_var_nameX975);

long long wcstoll(const unsigned int* anonymous_var_nameX976, unsigned int** anonymous_var_nameX977, int anonymous_var_nameX978);

unsigned long long wcstoull(const unsigned int* anonymous_var_nameX979, unsigned int** anonymous_var_nameX980, int anonymous_var_nameX981);

int fwide(struct _IO_FILE* anonymous_var_nameX982, int anonymous_var_nameX983);

int wprintf(const unsigned int* anonymous_var_nameX984, ...);

int fwprintf(struct _IO_FILE* anonymous_var_nameX985, const unsigned int* anonymous_var_nameX986, ...);

int swprintf(unsigned int* anonymous_var_nameX987, unsigned long int anonymous_var_nameX988, const unsigned int* anonymous_var_nameX989, ...);

int vwprintf(const unsigned int* anonymous_var_nameX990, va_list anonymous_var_nameX991);

int vfwprintf(struct _IO_FILE* anonymous_var_nameX992, const unsigned int* anonymous_var_nameX993, va_list anonymous_var_nameX994);

int vswprintf(unsigned int* anonymous_var_nameX995, unsigned long int anonymous_var_nameX996, const unsigned int* anonymous_var_nameX997, va_list anonymous_var_nameX998);

int wscanf(const unsigned int* anonymous_var_nameX999, ...);

int fwscanf(struct _IO_FILE* anonymous_var_nameX1000, const unsigned int* anonymous_var_nameX1001, ...);

int swscanf(const unsigned int* anonymous_var_nameX1002, const unsigned int* anonymous_var_nameX1003, ...);

int vwscanf(const unsigned int* anonymous_var_nameX1004, va_list anonymous_var_nameX1005);

int vfwscanf(struct _IO_FILE* anonymous_var_nameX1006, const unsigned int* anonymous_var_nameX1007, va_list anonymous_var_nameX1008);

int vswscanf(const unsigned int* anonymous_var_nameX1009, const unsigned int* anonymous_var_nameX1010, va_list anonymous_var_nameX1011);

unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1012);

unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1013);

unsigned int getwchar();

unsigned int fputwc(unsigned int anonymous_var_nameX1014, struct _IO_FILE* anonymous_var_nameX1015);

unsigned int putwc(unsigned int anonymous_var_nameX1016, struct _IO_FILE* anonymous_var_nameX1017);

unsigned int putwchar(unsigned int anonymous_var_nameX1018);

unsigned int* fgetws(unsigned int* anonymous_var_nameX1019, int anonymous_var_nameX1020, struct _IO_FILE* anonymous_var_nameX1021);

int fputws(const unsigned int* anonymous_var_nameX1022, struct _IO_FILE* anonymous_var_nameX1023);

unsigned int ungetwc(unsigned int anonymous_var_nameX1024, struct _IO_FILE* anonymous_var_nameX1025);

unsigned long int wcsftime(unsigned int* anonymous_var_nameX1026, unsigned long int anonymous_var_nameX1027, const unsigned int* anonymous_var_nameX1028, const struct tm* anonymous_var_nameX1029);

unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1030);

unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1031);

unsigned int getwchar_unlocked();

unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1032, struct _IO_FILE* anonymous_var_nameX1033);

unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1034, struct _IO_FILE* anonymous_var_nameX1035);

unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1036);

unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1037, int anonymous_var_nameX1038, struct _IO_FILE* anonymous_var_nameX1039);

int fputws_unlocked(const unsigned int* anonymous_var_nameX1040, struct _IO_FILE* anonymous_var_nameX1041);

unsigned long int wcsftime_l(unsigned int* anonymous_var_nameX1042, unsigned long int anonymous_var_nameX1043, const unsigned int* anonymous_var_nameX1044, const struct tm* anonymous_var_nameX1045, struct __locale_struct* anonymous_var_nameX1046);

struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1047, unsigned long int* anonymous_var_nameX1048);

unsigned long int mbsnrtowcs(unsigned int* anonymous_var_nameX1049, const char** anonymous_var_nameX1050, unsigned long int anonymous_var_nameX1051, unsigned long int anonymous_var_nameX1052, struct __mbstate_t* anonymous_var_nameX1053);

unsigned long int wcsnrtombs(char* anonymous_var_nameX1054, const unsigned int** anonymous_var_nameX1055, unsigned long int anonymous_var_nameX1056, unsigned long int anonymous_var_nameX1057, struct __mbstate_t* anonymous_var_nameX1058);

unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1059);

unsigned long int wcsnlen(const unsigned int* anonymous_var_nameX1060, unsigned long int anonymous_var_nameX1061);

unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1062, const unsigned int* anonymous_var_nameX1063);

unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1064, const unsigned int* anonymous_var_nameX1065, unsigned long int anonymous_var_nameX1066);

int wcscasecmp(const unsigned int* anonymous_var_nameX1067, const unsigned int* anonymous_var_nameX1068);

int wcscasecmp_l(const unsigned int* anonymous_var_nameX1069, const unsigned int* anonymous_var_nameX1070, struct __locale_struct* anonymous_var_nameX1071);

int wcsncasecmp(const unsigned int* anonymous_var_nameX1072, const unsigned int* anonymous_var_nameX1073, unsigned long int anonymous_var_nameX1074);

int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1075, const unsigned int* anonymous_var_nameX1076, unsigned long int anonymous_var_nameX1077, struct __locale_struct* anonymous_var_nameX1078);

int wcscoll_l(const unsigned int* anonymous_var_nameX1079, const unsigned int* anonymous_var_nameX1080, struct __locale_struct* anonymous_var_nameX1081);

unsigned long int wcsxfrm_l(unsigned int* anonymous_var_nameX1082, const unsigned int* anonymous_var_nameX1083, unsigned long int anonymous_var_nameX1084, struct __locale_struct* anonymous_var_nameX1085);

int wcwidth(unsigned int anonymous_var_nameX1086);

int wcswidth(const unsigned int* anonymous_var_nameX1087, unsigned long int anonymous_var_nameX1088);

int iswalnum(unsigned int anonymous_var_nameX1089);

int iswalpha(unsigned int anonymous_var_nameX1090);

int iswblank(unsigned int anonymous_var_nameX1091);

int iswcntrl(unsigned int anonymous_var_nameX1092);

int iswdigit(unsigned int anonymous_var_nameX1093);

int iswgraph(unsigned int anonymous_var_nameX1094);

int iswlower(unsigned int anonymous_var_nameX1095);

int iswprint(unsigned int anonymous_var_nameX1096);

int iswpunct(unsigned int anonymous_var_nameX1097);

int iswspace(unsigned int anonymous_var_nameX1098);

int iswupper(unsigned int anonymous_var_nameX1099);

int iswxdigit(unsigned int anonymous_var_nameX1100);

int iswctype(unsigned int anonymous_var_nameX1101, unsigned long int anonymous_var_nameX1102);

unsigned int towlower(unsigned int anonymous_var_nameX1103);

unsigned int towupper(unsigned int anonymous_var_nameX1104);

unsigned long int wctype(const char* anonymous_var_nameX1105);

static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX1111)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX1113)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX1115)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX1116);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX1117);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX1118);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX1119);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX1120)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX1121);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX1122);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1123);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX1124);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1125);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX1126);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX1127);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX1128);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1129);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1130);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX1131);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX1132);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX1133);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX1134);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX1135);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX1136);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX1137);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX1138);

char* GC_strdup(const char* anonymous_var_nameX1139);

char* GC_strndup(const char* anonymous_var_nameX1140, unsigned long int anonymous_var_nameX1141);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX1142);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX1143);

void* GC_memalign(unsigned long int anonymous_var_nameX1144, unsigned long int anonymous_var_nameX1145);

int GC_posix_memalign(void** anonymous_var_nameX1146, unsigned long int anonymous_var_nameX1147, unsigned long int anonymous_var_nameX1148);

void GC_free(void* anonymous_var_nameX1149);

void GC_change_stubborn(const void* anonymous_var_nameX1150);

void GC_end_stubborn_change(const void* anonymous_var_nameX1151);

void* GC_base(void* anonymous_var_nameX1152);

int GC_is_heap_ptr(const void* anonymous_var_nameX1153);

unsigned long int GC_size(const void* anonymous_var_nameX1154);

void* GC_realloc(void* anonymous_var_nameX1155, unsigned long int anonymous_var_nameX1156);

int GC_expand_hp(unsigned long int anonymous_var_nameX1157);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1158);

void GC_exclude_static_roots(void* anonymous_var_nameX1159, void* anonymous_var_nameX1160);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX1161, void* anonymous_var_nameX1162);

void GC_remove_roots(void* anonymous_var_nameX1163, void* anonymous_var_nameX1164);

void GC_register_displacement(unsigned long int anonymous_var_nameX1165);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX1166);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX1167)());

void GC_set_stop_func(int (*anonymous_var_nameX1168)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1169, unsigned long int* anonymous_var_nameX1170, unsigned long int* anonymous_var_nameX1171, unsigned long int* anonymous_var_nameX1172, unsigned long int* anonymous_var_nameX1173);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1174, unsigned long int anonymous_var_nameX1175);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX1176);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1177);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1178);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1179);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1180, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX1181, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX1182, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX1183, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX1184, unsigned long int anonymous_var_nameX1185, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX1186, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX1187, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1188, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1189, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX1190);

void* GC_debug_realloc(void* anonymous_var_nameX1191, unsigned long int anonymous_var_nameX1192, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX1193);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1194);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX1195);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX1196, unsigned long int anonymous_var_nameX1197);

void GC_register_finalizer(void* anonymous_var_nameX1200, void (*anonymous_var_nameX1201)(void*,void*), void* anonymous_var_nameX1202, void (*anonymous_var_nameX1203)(void*,void*), void** anonymous_var_nameX1204);

void GC_debug_register_finalizer(void* anonymous_var_nameX1205, void (*anonymous_var_nameX1206)(void*,void*), void* anonymous_var_nameX1207, void (*anonymous_var_nameX1208)(void*,void*), void** anonymous_var_nameX1209);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1210, void (*anonymous_var_nameX1211)(void*,void*), void* anonymous_var_nameX1212, void (*anonymous_var_nameX1213)(void*,void*), void** anonymous_var_nameX1214);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1215, void (*anonymous_var_nameX1216)(void*,void*), void* anonymous_var_nameX1217, void (*anonymous_var_nameX1218)(void*,void*), void** anonymous_var_nameX1219);

void GC_register_finalizer_no_order(void* anonymous_var_nameX1220, void (*anonymous_var_nameX1221)(void*,void*), void* anonymous_var_nameX1222, void (*anonymous_var_nameX1223)(void*,void*), void** anonymous_var_nameX1224);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1225, void (*anonymous_var_nameX1226)(void*,void*), void* anonymous_var_nameX1227, void (*anonymous_var_nameX1228)(void*,void*), void** anonymous_var_nameX1229);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX1230, void (*anonymous_var_nameX1231)(void*,void*), void* anonymous_var_nameX1232, void (*anonymous_var_nameX1233)(void*,void*), void** anonymous_var_nameX1234);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1235, void (*anonymous_var_nameX1236)(void*,void*), void* anonymous_var_nameX1237, void (*anonymous_var_nameX1238)(void*,void*), void** anonymous_var_nameX1239);

int GC_register_disappearing_link(void** anonymous_var_nameX1240);

int GC_general_register_disappearing_link(void** anonymous_var_nameX1241, const void* anonymous_var_nameX1242);

int GC_move_disappearing_link(void** anonymous_var_nameX1243, void** anonymous_var_nameX1244);

int GC_unregister_disappearing_link(void** anonymous_var_nameX1245);

int GC_register_long_link(void** anonymous_var_nameX1246, const void* anonymous_var_nameX1247);

int GC_move_long_link(void** anonymous_var_nameX1248, void** anonymous_var_nameX1249);

int GC_unregister_long_link(void** anonymous_var_nameX1250);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX1252)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX1253, int anonymous_var_nameX1254);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX1256)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX1257);

void GC_set_warn_proc(void (*anonymous_var_nameX1260)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX1261, unsigned long int anonymous_var_nameX1262);

void GC_set_log_fd(int anonymous_var_nameX1263);

void GC_set_abort_func(void (*anonymous_var_nameX1265)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1267)(void*), void* anonymous_var_nameX1268);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX1271)(struct GC_stack_base*,void*), void* anonymous_var_nameX1272);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX1273)(void*), void* anonymous_var_nameX1274);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX1275)(void*), void* anonymous_var_nameX1276);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1277);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1278);

void GC_set_stackbottom(void* anonymous_var_nameX1279, const struct GC_stack_base* anonymous_var_nameX1280);

void* GC_same_obj(void* anonymous_var_nameX1281, void* anonymous_var_nameX1282);

void* GC_pre_incr(void** anonymous_var_nameX1283, long anonymous_var_nameX1284);

void* GC_post_incr(void** anonymous_var_nameX1285, long anonymous_var_nameX1286);

void* GC_is_visible(void* anonymous_var_nameX1287);

void* GC_is_valid_displacement(void* anonymous_var_nameX1288);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX1289);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX1290, const void* anonymous_var_nameX1291);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1292, const void* anonymous_var_nameX1293);

void* GC_malloc_many(unsigned long int anonymous_var_nameX1314);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1318)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1319);

int GC_get_force_unmap_on_gcollect();

void GC_win32_free_heap();

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
void* right_value0;
void* right_value1;
struct buffer* __exception_result_var_b1;
struct buffer* result_0;
struct buffer* __exception_result_var_b2;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1903, 4),__exception_result_var_b1=((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1903, "buffer"))), "./neo-c.h", 1903, 3)))))), come_pop_stackframe(), __exception_result_var_b1));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1904, 7),__exception_result_var_b2=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_0, "./neo-c.h", 1904, 5)), "./neo-c.h", 1904, 6)),self,sizeof(char)*len), come_pop_stackframe(), __exception_result_var_b2);
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* __exception_result_var_b3;
struct buffer* result_1;
struct buffer* __exception_result_var_b4;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1910, 9),__exception_result_var_b3=((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1910, "buffer"))), "./neo-c.h", 1910, 8)))))), come_pop_stackframe(), __exception_result_var_b3));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1911, 12),__exception_result_var_b4=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_1, "./neo-c.h", 1911, 10)), "./neo-c.h", 1911, 11)),(char*)self,sizeof(short short)*len), come_pop_stackframe(), __exception_result_var_b4);
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* __exception_result_var_b5;
struct buffer* result_2;
struct buffer* __exception_result_var_b6;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1917, 14),__exception_result_var_b5=((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1917, "buffer"))), "./neo-c.h", 1917, 13)))))), come_pop_stackframe(), __exception_result_var_b5));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1918, 17),__exception_result_var_b6=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_2, "./neo-c.h", 1918, 15)), "./neo-c.h", 1918, 16)),(char*)self,sizeof(int)*len), come_pop_stackframe(), __exception_result_var_b6);
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* __exception_result_var_b7;
struct buffer* result_3;
struct buffer* __exception_result_var_b8;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1924, 19),__exception_result_var_b7=((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1924, "buffer"))), "./neo-c.h", 1924, 18)))))), come_pop_stackframe(), __exception_result_var_b7));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1925, 22),__exception_result_var_b8=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_3, "./neo-c.h", 1925, 20)), "./neo-c.h", 1925, 21)),(char*)self,sizeof(long)*len), come_pop_stackframe(), __exception_result_var_b8);
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* __exception_result_var_b9;
struct buffer* result_4;
struct buffer* __exception_result_var_b10;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1931, 24),__exception_result_var_b9=((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1931, "buffer"))), "./neo-c.h", 1931, 23)))))), come_pop_stackframe(), __exception_result_var_b9));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1932, 27),__exception_result_var_b10=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_4, "./neo-c.h", 1932, 25)), "./neo-c.h", 1932, 26)),(char*)self,sizeof(float)*len), come_pop_stackframe(), __exception_result_var_b10);
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* __exception_result_var_b11;
struct buffer* result_5;
struct buffer* __exception_result_var_b12;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1938, 29),__exception_result_var_b11=((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1938, "buffer"))), "./neo-c.h", 1938, 28)))))), come_pop_stackframe(), __exception_result_var_b11));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1939, 32),__exception_result_var_b12=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_5, "./neo-c.h", 1939, 30)), "./neo-c.h", 1939, 31)),(char*)self,sizeof(double)*len), come_pop_stackframe(), __exception_result_var_b12);
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
struct buffer* __exception_result_var_b13;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1954, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1956, 37)), "./neo-c.h", 1956, 38))->memory;
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1956, 37)), "./neo-c.h", 1956, 38))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(come_push_stackframe("./neo-c.h", 1956, 39),__exception_result_var_b13=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b13))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 40)), "./neo-c.h", 1957, 41))->p=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 42)), "./neo-c.h", 1957, 43))->memory, "./neo-c.h", 1957, 44)), "./neo-c.h", 1957, 45))->buf;
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
struct buffer* __exception_result_var_b14;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1964, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1966, 46)), "./neo-c.h", 1966, 47))->memory;
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1966, 46)), "./neo-c.h", 1966, 47))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(come_push_stackframe("./neo-c.h", 1966, 48),__exception_result_var_b14=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b14))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 49)), "./neo-c.h", 1967, 50))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 51)), "./neo-c.h", 1967, 52))->memory, "./neo-c.h", 1967, 53)), "./neo-c.h", 1967, 54))->buf;
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
struct buffer* __exception_result_var_b15;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1974, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1976, 59)), "./neo-c.h", 1976, 60))->memory;
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1976, 59)), "./neo-c.h", 1976, 60))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=(come_push_stackframe("./neo-c.h", 1976, 61),__exception_result_var_b15=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b15))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 62)), "./neo-c.h", 1977, 63))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 64)), "./neo-c.h", 1977, 65))->memory, "./neo-c.h", 1977, 66)), "./neo-c.h", 1977, 67))->buf;
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
struct buffer* __exception_result_var_b16;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1984, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1986, 72)), "./neo-c.h", 1986, 73))->memory;
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1986, 72)), "./neo-c.h", 1986, 73))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(come_push_stackframe("./neo-c.h", 1986, 74),__exception_result_var_b16=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b16))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 75)), "./neo-c.h", 1987, 76))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 77)), "./neo-c.h", 1987, 78))->memory, "./neo-c.h", 1987, 79)), "./neo-c.h", 1987, 80))->buf;
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
struct buffer* __exception_result_var_b17;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1994, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1996, 85)), "./neo-c.h", 1996, 86))->memory;
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1996, 85)), "./neo-c.h", 1996, 86))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=(come_push_stackframe("./neo-c.h", 1996, 87),__exception_result_var_b17=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b17))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 88)), "./neo-c.h", 1997, 89))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 90)), "./neo-c.h", 1997, 91))->memory, "./neo-c.h", 1997, 92)), "./neo-c.h", 1997, 93))->buf;
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __exception_result_var_b20;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2165, 110),__exception_result_var_b20=((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2165, "smart_pointer$1char"))), "./neo-c.h", 2165, 94))),self,len))), come_pop_stackframe(), __exception_result_var_b20);
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __exception_result_var_b23;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2170, 127),__exception_result_var_b23=((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2170, "smart_pointer$1short"))), "./neo-c.h", 2170, 111))),self,len))), come_pop_stackframe(), __exception_result_var_b23);
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __exception_result_var_b26;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2175, 144),__exception_result_var_b26=((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2175, "smart_pointer$1int"))), "./neo-c.h", 2175, 128))),self,len))), come_pop_stackframe(), __exception_result_var_b26);
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __exception_result_var_b29;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    __result20__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2180, 161),__exception_result_var_b29=((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2180, "smart_pointer$1long"))), "./neo-c.h", 2180, 145))),self,len))), come_pop_stackframe(), __exception_result_var_b29);
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __exception_result_var_b32;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    __result22__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2185, 182),__exception_result_var_b32=((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2185, "smart_pointer$1float"))), "./neo-c.h", 2185, 162))),self,len))), come_pop_stackframe(), __exception_result_var_b32);
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __exception_result_var_b35;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    __result24__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2190, 203),__exception_result_var_b35=((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2190, "smart_pointer$1double"))), "./neo-c.h", 2190, 183))),self,len))), come_pop_stackframe(), __exception_result_var_b35);
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __exception_result_var_b37;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    __result27__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2195, 264),__exception_result_var_b37=((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2195, "list$1char"))), "./neo-c.h", 2195, 204)), "./neo-c.h", 2195, 205))),len,self))), come_pop_stackframe(), __exception_result_var_b37);
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __exception_result_var_b39;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    __result30__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2200, 325),__exception_result_var_b39=((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2200, "list$1short"))), "./neo-c.h", 2200, 265)), "./neo-c.h", 2200, 266))),len,self))), come_pop_stackframe(), __exception_result_var_b39);
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __exception_result_var_b41;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    __result33__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2205, 386),__exception_result_var_b41=((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2205, "list$1int"))), "./neo-c.h", 2205, 326)), "./neo-c.h", 2205, 327))),len,self))), come_pop_stackframe(), __exception_result_var_b41);
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __exception_result_var_b43;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    __result36__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2210, 447),__exception_result_var_b43=((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2210, "list$1long"))), "./neo-c.h", 2210, 387)), "./neo-c.h", 2210, 388))),len,self))), come_pop_stackframe(), __exception_result_var_b43);
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __exception_result_var_b45;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    __result39__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2215, 508),__exception_result_var_b45=((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2215, "list$1float"))), "./neo-c.h", 2215, 448)), "./neo-c.h", 2215, 449))),len,self))), come_pop_stackframe(), __exception_result_var_b45);
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __exception_result_var_b47;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    __result42__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2220, 569),__exception_result_var_b47=((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2220, "list$1double"))), "./neo-c.h", 2220, 509)), "./neo-c.h", 2220, 510))),len,self))), come_pop_stackframe(), __exception_result_var_b47);
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
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
void* right_value76;
char* __exception_result_var_b48;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result49__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2336, 570),__exception_result_var_b48=((char*)(right_value76=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b48);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __exception_result_var_b49;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result50__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2341, 571),__exception_result_var_b49=((char*)(right_value77=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b49);
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __exception_result_var_b50;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result51__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2346, 572),__exception_result_var_b50=((char*)(right_value78=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b50);
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
void* right_value79;
unsigned int* __exception_result_var_b51;
unsigned int* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    __result52__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 47, 573),__exception_result_var_b51=((unsigned int*)(right_value79=wchar_tp_substring(str,head,tail))), come_pop_stackframe(), __exception_result_var_b51);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result52__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __exception_result_var_b52;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = (come_push_stackframe("./neo-c-str.h", 53, 574),__exception_result_var_b52=charp_index_count(str,search_str,count,default_value), come_pop_stackframe(), __exception_result_var_b52);
    return __result53__;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __exception_result_var_b53;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = (come_push_stackframe("./neo-c-str.h", 59, 575),__exception_result_var_b53=charp_index_regex_count(self,reg,count,default_value), come_pop_stackframe(), __exception_result_var_b53);
    return __result54__;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int __exception_result_var_b54;
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    __result55__ = (come_push_stackframe("./neo-c-str.h", 65, 576),__exception_result_var_b54=charp_rindex(str,search_str,default_value), come_pop_stackframe(), __exception_result_var_b54);
    return __result55__;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __exception_result_var_b55;
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    __result56__ = (come_push_stackframe("./neo-c-str.h", 71, 577),__exception_result_var_b55=charp_rindex_regex(self,reg,default_value), come_pop_stackframe(), __exception_result_var_b55);
    return __result56__;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __exception_result_var_b56;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    __result57__ = (come_push_stackframe("./neo-c-str.h", 77, 578),__exception_result_var_b56=charp_rindex_count(str,search_str,default_value,-1), come_pop_stackframe(), __exception_result_var_b56);
    return __result57__;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value80;
struct list$1charph* __exception_result_var_b57;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    __result58__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 83, 579),__exception_result_var_b57=((struct list$1charph*)(right_value80=charp_scan_block(self,reg,parent,block))), come_pop_stackframe(), __exception_result_var_b57);
    come_call_finalizer3(right_value80,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result58__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value81;
struct list$1charph* __exception_result_var_b58;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result59__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 89, 588),__exception_result_var_b58=((struct list$1charph*)(right_value81=charp_scan_block_count(self,reg,count,parent,block))), come_pop_stackframe(), __exception_result_var_b58);
    come_call_finalizer3(right_value81,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result59__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value82;
struct list$1charph* __exception_result_var_b59;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    __result60__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 95, 589),__exception_result_var_b59=((struct list$1charph*)(right_value82=charp_split_block(self,reg,parent,block))), come_pop_stackframe(), __exception_result_var_b59);
    come_call_finalizer3(right_value82,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result60__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value83;
struct list$1charph* __exception_result_var_b60;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
    __result61__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 101, 590),__exception_result_var_b60=((struct list$1charph*)(right_value83=charp_split_block_count(self,reg,count,parent,block))), come_pop_stackframe(), __exception_result_var_b60);
    come_call_finalizer3(right_value83,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result61__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
void* right_value84;
struct list$1charph* __exception_result_var_b61;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    __result62__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 107, 591),__exception_result_var_b61=((struct list$1charph*)(right_value84=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex))), come_pop_stackframe(), __exception_result_var_b61);
    come_call_finalizer3(right_value84,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result62__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
void* right_value85;
char* __exception_result_var_b62;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
    __result63__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 113, 592),__exception_result_var_b62=((char*)(right_value85=charp_strip(self))), come_pop_stackframe(), __exception_result_var_b62);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
void* right_value86;
char* __exception_result_var_b63;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
    __result64__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 119, 593),__exception_result_var_b63=((char*)(right_value86=string_printable(str))), come_pop_stackframe(), __exception_result_var_b63);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result64__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__;
void* right_value87;
unsigned int* __exception_result_var_b64;
unsigned int* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
    __result65__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 125, 594),__exception_result_var_b64=((unsigned int*)(right_value87=charp_to_wstring(str))), come_pop_stackframe(), __exception_result_var_b64);
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__;
void* right_value88;
char* __exception_result_var_b65;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
    __result66__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 133, 595),__exception_result_var_b65=((char*)(right_value88=wchar_tp_to_string(wstr))), come_pop_stackframe(), __exception_result_var_b65);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__;
void* right_value89;
char* __exception_result_var_b66;
void* right_value90;
unsigned int* __exception_result_var_b67;
unsigned int* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
right_value90 = (void*)0;
    __result67__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 138, 599),__exception_result_var_b67=((unsigned int*)(right_value90=string_to_wstring(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("./neo-c-str.h", 138, 596),__exception_result_var_b66=((char*)(right_value89=xsprintf("%d",self))), come_pop_stackframe(), __exception_result_var_b66), "./neo-c-str.h", 138, 597)), "./neo-c-str.h", 138, 598))))), come_pop_stackframe(), __exception_result_var_b67);
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
}
static inline int wstring_length(unsigned int* str){
void* __result_obj__;
int __exception_result_var_b68;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    __result68__ = (come_push_stackframe("./neo-c-str.h", 144, 600),__exception_result_var_b68=wchar_tp_length(str), come_pop_stackframe(), __exception_result_var_b68);
    return __result68__;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
void* right_value91;
unsigned int* __exception_result_var_b69;
unsigned int* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
    __result69__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 150, 601),__exception_result_var_b69=((unsigned int*)(right_value91=wchar_tp_delete(str,head,tail))), come_pop_stackframe(), __exception_result_var_b69);
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __exception_result_var_b70;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    __result70__ = (come_push_stackframe("./neo-c-str.h", 156, 602),__exception_result_var_b70=wchar_tp_index(str,search_str,default_value), come_pop_stackframe(), __exception_result_var_b70);
    return __result70__;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __exception_result_var_b71;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    __result71__ = (come_push_stackframe("./neo-c-str.h", 162, 603),__exception_result_var_b71=wchar_tp_rindex(str,search_str,default_value), come_pop_stackframe(), __exception_result_var_b71);
    return __result71__;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__;
void* right_value92;
unsigned int* __exception_result_var_b72;
unsigned int* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
    __result72__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 168, 604),__exception_result_var_b72=((unsigned int*)(right_value92=wchar_tp_reverse(str))), come_pop_stackframe(), __exception_result_var_b72);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result72__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__;
void* right_value93;
unsigned int* __exception_result_var_b73;
unsigned int* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    __result73__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 174, 605),__exception_result_var_b73=((unsigned int*)(right_value93=wchar_tp_multiply(str,n))), come_pop_stackframe(), __exception_result_var_b73);
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result73__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__;
void* right_value94;
unsigned int* __exception_result_var_b74;
unsigned int* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
    __result74__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 180, 606),__exception_result_var_b74=((unsigned int*)(right_value94=wchar_tp_printable(str))), come_pop_stackframe(), __exception_result_var_b74);
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
void* __result_obj__;
unsigned int __exception_result_var_b75;
unsigned int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    __result75__ = (come_push_stackframe("./neo-c-str.h", 202, 607),__exception_result_var_b75=wchar_tp_get_hash_key(value), come_pop_stackframe(), __exception_result_var_b75);
    return __result75__;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __exception_result_var_b76;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    __result76__ = (come_push_stackframe("./neo-c-str.h", 214, 608),__exception_result_var_b76=charp_match_group_strings(self,reg,count,group_strings), come_pop_stackframe(), __exception_result_var_b76);
    return __result76__;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
int __exception_result_var_b77;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = (come_push_stackframe("./neo-c-str.h", 220, 609),__exception_result_var_b77=charp_index(str,search_str,default_value), come_pop_stackframe(), __exception_result_var_b77);
    return __result77__;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __exception_result_var_b78;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = (come_push_stackframe("./neo-c-str.h", 226, 610),__exception_result_var_b78=charp_index_regex(self,reg,default_value), come_pop_stackframe(), __exception_result_var_b78);
    return __result78__;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
void* right_value95;
char* __exception_result_var_b79;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    __result79__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 233, 611),__exception_result_var_b79=((char*)(right_value95=charp_replace(self,index,c))), come_pop_stackframe(), __exception_result_var_b79);
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
void* right_value96;
char* __exception_result_var_b80;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
    __result80__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 239, 612),__exception_result_var_b80=((char*)(right_value96=charp_multiply(str,n))), come_pop_stackframe(), __exception_result_var_b80);
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result80__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
void* right_value97;
char* __exception_result_var_b81;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
    __result81__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 245, 613),__exception_result_var_b81=((char*)(right_value97=charp_sub(self,reg,replace))), come_pop_stackframe(), __exception_result_var_b81);
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
void* right_value98;
char* __exception_result_var_b82;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
    __result82__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 251, 614),__exception_result_var_b82=((char*)(right_value98=charp_sub_count(self,reg,replace,count))), come_pop_stackframe(), __exception_result_var_b82);
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
void* right_value99;
struct list$1charph* __exception_result_var_b83;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
    __result83__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 257, 615),__exception_result_var_b83=((struct list$1charph*)(right_value99=charp_split_str(self,str))), come_pop_stackframe(), __exception_result_var_b83);
    come_call_finalizer3(right_value99,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result83__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value100;
struct list$1charph* __exception_result_var_b84;
struct list$1charph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
    __result84__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 263, 616),__exception_result_var_b84=((struct list$1charph*)(right_value100=charp_scan(self,reg))), come_pop_stackframe(), __exception_result_var_b84);
    come_call_finalizer3(right_value100,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result84__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value101;
struct list$1charph* __exception_result_var_b85;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
    __result85__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 269, 617),__exception_result_var_b85=((struct list$1charph*)(right_value101=charp_split(self,reg))), come_pop_stackframe(), __exception_result_var_b85);
    come_call_finalizer3(right_value101,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result85__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __exception_result_var_b86;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = (come_push_stackframe("./neo-c-str.h", 275, 618),__exception_result_var_b86=charp_match(self,reg), come_pop_stackframe(), __exception_result_var_b86);
    return __result86__;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
void* right_value102;
struct list$1charph* __exception_result_var_b87;
struct list$1charph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
    __result87__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 281, 619),__exception_result_var_b87=((struct list$1charph*)(right_value102=charp_split_maxsplit(self,reg,maxsplit))), come_pop_stackframe(), __exception_result_var_b87);
    come_call_finalizer3(right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result87__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __exception_result_var_b88;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = (come_push_stackframe("./neo-c-str.h", 287, 620),__exception_result_var_b88=charp_rindex_regex_count(self,reg,count,default_value), come_pop_stackframe(), __exception_result_var_b88);
    return __result88__;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __exception_result_var_b89;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = (come_push_stackframe("./neo-c-str.h", 293, 621),__exception_result_var_b89=charp_match_count(self,reg,count), come_pop_stackframe(), __exception_result_var_b89);
    return __result89__;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value103;
char* __exception_result_var_b90;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
    __result90__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 299, 622),__exception_result_var_b90=((char*)(right_value103=charp_sub_block(self,reg,parent,block))), come_pop_stackframe(), __exception_result_var_b90);
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value104;
char* __exception_result_var_b91;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
    __result91__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 305, 623),__exception_result_var_b91=((char*)(right_value104=charp_sub_block_count(self,reg,count,parent,block))), come_pop_stackframe(), __exception_result_var_b91);
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
void* right_value106;
char* __exception_result_var_b93;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
    __result93__ = __result_obj__ = (come_push_stackframe("./neo-c-str.h", 323, 625),__exception_result_var_b93=((char*)(right_value106=string_chomp(str))), come_pop_stackframe(), __exception_result_var_b93);
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0, 33)), "smart_pointer$1charp_finalize", 0, 34))->memory!=((void*)0),        _if_conditional1) {
            come_call_finalizer3(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0, 35)), "smart_pointer$1charp_finalize", 0, 36))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0, 55)), "smart_pointer$1shortp_finalize", 0, 56))->memory!=((void*)0),        _if_conditional2) {
            come_call_finalizer3(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0, 57)), "smart_pointer$1shortp_finalize", 0, 58))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0, 68)), "smart_pointer$1intp_finalize", 0, 69))->memory!=((void*)0),        _if_conditional3) {
            come_call_finalizer3(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0, 70)), "smart_pointer$1intp_finalize", 0, 71))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0, 81)), "smart_pointer$1longp_finalize", 0, 82))->memory!=((void*)0),        _if_conditional4) {
            come_call_finalizer3(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0, 83)), "smart_pointer$1longp_finalize", 0, 84))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __exception_result_var_b18;
struct buffer* __dec_obj6;
struct buffer* __exception_result_var_b19;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj6=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2006, 95)), "./neo-c.h", 2006, 96))->memory;
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2006, 95)), "./neo-c.h", 2006, 96))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 98),__exception_result_var_b18=((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 97)))))), come_pop_stackframe(), __exception_result_var_b18));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 103),__exception_result_var_b19=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2008, 99)), "./neo-c.h", 2008, 100))->memory, "./neo-c.h", 2008, 101)), "./neo-c.h", 2008, 102)),memory,sizeof(char)*size), come_pop_stackframe(), __exception_result_var_b19);
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 104)), "./neo-c.h", 2010, 105))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 106)), "./neo-c.h", 2010, 107))->memory, "./neo-c.h", 2010, 108)), "./neo-c.h", 2010, 109))->buf;
        __result13__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __exception_result_var_b21;
struct buffer* __dec_obj7;
struct buffer* __exception_result_var_b22;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj7=((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2006, 112)), "./neo-c.h", 2006, 113))->memory;
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2006, 112)), "./neo-c.h", 2006, 113))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 115),__exception_result_var_b21=((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 114)))))), come_pop_stackframe(), __exception_result_var_b21));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 120),__exception_result_var_b22=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2008, 116)), "./neo-c.h", 2008, 117))->memory, "./neo-c.h", 2008, 118)), "./neo-c.h", 2008, 119)),memory,sizeof(short short)*size), come_pop_stackframe(), __exception_result_var_b22);
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 121)), "./neo-c.h", 2010, 122))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 123)), "./neo-c.h", 2010, 124))->memory, "./neo-c.h", 2010, 125)), "./neo-c.h", 2010, 126))->buf;
        __result15__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __exception_result_var_b24;
struct buffer* __dec_obj8;
struct buffer* __exception_result_var_b25;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj8=((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2006, 129)), "./neo-c.h", 2006, 130))->memory;
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2006, 129)), "./neo-c.h", 2006, 130))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 132),__exception_result_var_b24=((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 131)))))), come_pop_stackframe(), __exception_result_var_b24));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 137),__exception_result_var_b25=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2008, 133)), "./neo-c.h", 2008, 134))->memory, "./neo-c.h", 2008, 135)), "./neo-c.h", 2008, 136)),memory,sizeof(int)*size), come_pop_stackframe(), __exception_result_var_b25);
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 138)), "./neo-c.h", 2010, 139))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 140)), "./neo-c.h", 2010, 141))->memory, "./neo-c.h", 2010, 142)), "./neo-c.h", 2010, 143))->buf;
        __result17__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __exception_result_var_b27;
struct buffer* __dec_obj9;
struct buffer* __exception_result_var_b28;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        __dec_obj9=((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2006, 146)), "./neo-c.h", 2006, 147))->memory;
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2006, 146)), "./neo-c.h", 2006, 147))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 149),__exception_result_var_b27=((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 148)))))), come_pop_stackframe(), __exception_result_var_b27));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 154),__exception_result_var_b28=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2008, 150)), "./neo-c.h", 2008, 151))->memory, "./neo-c.h", 2008, 152)), "./neo-c.h", 2008, 153)),memory,sizeof(long)*size), come_pop_stackframe(), __exception_result_var_b28);
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 155)), "./neo-c.h", 2010, 156))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 157)), "./neo-c.h", 2010, 158))->memory, "./neo-c.h", 2010, 159)), "./neo-c.h", 2010, 160))->buf;
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __exception_result_var_b30;
struct buffer* __dec_obj10;
struct buffer* __exception_result_var_b31;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        __dec_obj10=((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2006, 163)), "./neo-c.h", 2006, 164))->memory;
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2006, 163)), "./neo-c.h", 2006, 164))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 166),__exception_result_var_b30=((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 165)))))), come_pop_stackframe(), __exception_result_var_b30));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 171),__exception_result_var_b31=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2008, 167)), "./neo-c.h", 2008, 168))->memory, "./neo-c.h", 2008, 169)), "./neo-c.h", 2008, 170)),memory,sizeof(float)*size), come_pop_stackframe(), __exception_result_var_b31);
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 172)), "./neo-c.h", 2010, 173))->p=(float*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 174)), "./neo-c.h", 2010, 175))->memory, "./neo-c.h", 2010, 176)), "./neo-c.h", 2010, 177))->buf;
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional5=self!=((void*)0)&&((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "smart_pointer$1floatp_finalize", 0, 178)), "smart_pointer$1floatp_finalize", 0, 179))->memory!=((void*)0),            _if_conditional5) {
                come_call_finalizer3(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "smart_pointer$1floatp_finalize", 0, 180)), "smart_pointer$1floatp_finalize", 0, 181))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __exception_result_var_b33;
struct buffer* __dec_obj11;
struct buffer* __exception_result_var_b34;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        __dec_obj11=((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2006, 184)), "./neo-c.h", 2006, 185))->memory;
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2006, 184)), "./neo-c.h", 2006, 185))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 187),__exception_result_var_b33=((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 186)))))), come_pop_stackframe(), __exception_result_var_b33));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 192),__exception_result_var_b34=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2008, 188)), "./neo-c.h", 2008, 189))->memory, "./neo-c.h", 2008, 190)), "./neo-c.h", 2008, 191)),memory,sizeof(double)*size), come_pop_stackframe(), __exception_result_var_b34);
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 193)), "./neo-c.h", 2010, 194))->p=(double*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 195)), "./neo-c.h", 2010, 196))->memory, "./neo-c.h", 2010, 197)), "./neo-c.h", 2010, 198))->buf;
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "smart_pointer$1doublep_finalize", 0, 199)), "smart_pointer$1doublep_finalize", 0, 200))->memory!=((void*)0),            _if_conditional6) {
                come_call_finalizer3(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "smart_pointer$1doublep_finalize", 0, 201)), "smart_pointer$1doublep_finalize", 0, 202))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __exception_result_var_b36;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 109, 206)), "./neo-c.h", 109, 207))->head=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 110, 208)), "./neo-c.h", 110, 209))->tail=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 111, 210)), "./neo-c.h", 111, 211))->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            (come_push_stackframe("./neo-c.h", 114, 259),__exception_result_var_b36=list$1char_push_back(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 114, 212)), "./neo-c.h", 114, 213)),((char*)come_null_check(values, "./neo-c.h", 114, 258))[i_11]), come_pop_stackframe(), __exception_result_var_b36);
        }
        __result26__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result26__;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__;
_Bool _if_conditional7;
void* right_value47;
struct list_item$1char* litem_12;
_Bool _if_conditional8;
void* right_value48;
struct list_item$1char* litem_13;
void* right_value49;
struct list_item$1char* litem_14;
struct list$1char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1char*));
right_value48 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1char*));
right_value49 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                if(_if_conditional7=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 222, 214)), "./neo-c.h", 222, 215))->len==0,                _if_conditional7) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 223, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 225, 216)), "./neo-c.h", 225, 217))->prev=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 226, 218)), "./neo-c.h", 226, 219))->next=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 227, 220)), "./neo-c.h", 227, 221))->item=item;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 229, 222)), "./neo-c.h", 229, 223))->tail=litem_12;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 230, 224)), "./neo-c.h", 230, 225))->head=litem_12;
                }
                else {
                    if(_if_conditional8=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 232, 226)), "./neo-c.h", 232, 227))->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 233, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 235, 228)), "./neo-c.h", 235, 229))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 235, 230)), "./neo-c.h", 235, 231))->head;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 236, 232)), "./neo-c.h", 236, 233))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 237, 234)), "./neo-c.h", 237, 235))->item=item;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 239, 236)), "./neo-c.h", 239, 237))->tail=litem_13;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 240, 238)), "./neo-c.h", 240, 239))->head, "./neo-c.h", 240, 240)), "./neo-c.h", 240, 241))->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 243, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 245, 242)), "./neo-c.h", 245, 243))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 245, 244)), "./neo-c.h", 245, 245))->tail;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 246, 246)), "./neo-c.h", 246, 247))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 247, 248)), "./neo-c.h", 247, 249))->item=item;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 249, 250)), "./neo-c.h", 249, 251))->tail, "./neo-c.h", 249, 252)), "./neo-c.h", 249, 253))->next=litem_14;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 250, 254)), "./neo-c.h", 250, 255))->tail=litem_14;
                    }
                }
                ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 253, 256)), "./neo-c.h", 253, 257))->len++;
                __result25__ = __result_obj__ = self;
                return __result25__;
}

static void list_item$1charp_finalize(struct list_item$1char* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charp_finalize(struct list$1char* self){
void* __result_obj__;
struct list_item$1char* it_15;
_Bool _while_condtional1;
struct list_item$1char* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1char*));
memset(&prev_it_16, 0, sizeof(struct list_item$1char*));
            it_15=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 120, 260)), "./neo-c.h", 120, 261))->head;
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                prev_it_16=it_15;
                it_15=((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(it_15, "./neo-c.h", 123, 262)), "./neo-c.h", 123, 263))->next;
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __exception_result_var_b38;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 109, 267)), "./neo-c.h", 109, 268))->head=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 110, 269)), "./neo-c.h", 110, 270))->tail=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 111, 271)), "./neo-c.h", 111, 272))->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            (come_push_stackframe("./neo-c.h", 114, 320),__exception_result_var_b38=list$1short_push_back(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 114, 273)), "./neo-c.h", 114, 274)),((short short*)come_null_check(values, "./neo-c.h", 114, 319))[i_17]), come_pop_stackframe(), __exception_result_var_b38);
        }
        __result29__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result29__;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__;
_Bool _if_conditional9;
void* right_value52;
struct list_item$1short* litem_18;
_Bool _if_conditional10;
void* right_value53;
struct list_item$1short* litem_19;
void* right_value54;
struct list_item$1short* litem_20;
struct list$1short* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1short*));
right_value53 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1short*));
right_value54 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1short*));
                if(_if_conditional9=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 222, 275)), "./neo-c.h", 222, 276))->len==0,                _if_conditional9) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 223, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 225, 277)), "./neo-c.h", 225, 278))->prev=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 226, 279)), "./neo-c.h", 226, 280))->next=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 227, 281)), "./neo-c.h", 227, 282))->item=item;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 229, 283)), "./neo-c.h", 229, 284))->tail=litem_18;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 230, 285)), "./neo-c.h", 230, 286))->head=litem_18;
                }
                else {
                    if(_if_conditional10=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 232, 287)), "./neo-c.h", 232, 288))->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 233, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 235, 289)), "./neo-c.h", 235, 290))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 235, 291)), "./neo-c.h", 235, 292))->head;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 236, 293)), "./neo-c.h", 236, 294))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 237, 295)), "./neo-c.h", 237, 296))->item=item;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 239, 297)), "./neo-c.h", 239, 298))->tail=litem_19;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 240, 299)), "./neo-c.h", 240, 300))->head, "./neo-c.h", 240, 301)), "./neo-c.h", 240, 302))->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 243, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 245, 303)), "./neo-c.h", 245, 304))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 245, 305)), "./neo-c.h", 245, 306))->tail;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 246, 307)), "./neo-c.h", 246, 308))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 247, 309)), "./neo-c.h", 247, 310))->item=item;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 249, 311)), "./neo-c.h", 249, 312))->tail, "./neo-c.h", 249, 313)), "./neo-c.h", 249, 314))->next=litem_20;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 250, 315)), "./neo-c.h", 250, 316))->tail=litem_20;
                    }
                }
                ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 253, 317)), "./neo-c.h", 253, 318))->len++;
                __result28__ = __result_obj__ = self;
                return __result28__;
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1shortp_finalize(struct list$1short* self){
void* __result_obj__;
struct list_item$1short* it_21;
_Bool _while_condtional2;
struct list_item$1short* prev_it_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_21, 0, sizeof(struct list_item$1short*));
memset(&prev_it_22, 0, sizeof(struct list_item$1short*));
            it_21=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 120, 321)), "./neo-c.h", 120, 322))->head;
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                prev_it_22=it_21;
                it_21=((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(it_21, "./neo-c.h", 123, 323)), "./neo-c.h", 123, 324))->next;
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __exception_result_var_b40;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 109, 328)), "./neo-c.h", 109, 329))->head=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 110, 330)), "./neo-c.h", 110, 331))->tail=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 111, 332)), "./neo-c.h", 111, 333))->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            (come_push_stackframe("./neo-c.h", 114, 381),__exception_result_var_b40=list$1int_push_back(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 114, 334)), "./neo-c.h", 114, 335)),((int*)come_null_check(values, "./neo-c.h", 114, 380))[i_23]), come_pop_stackframe(), __exception_result_var_b40);
        }
        __result32__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result32__;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__;
_Bool _if_conditional11;
void* right_value57;
struct list_item$1int* litem_24;
_Bool _if_conditional12;
void* right_value58;
struct list_item$1int* litem_25;
void* right_value59;
struct list_item$1int* litem_26;
struct list$1int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1int*));
right_value58 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1int*));
right_value59 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1int*));
                if(_if_conditional11=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 222, 336)), "./neo-c.h", 222, 337))->len==0,                _if_conditional11) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 223, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 225, 338)), "./neo-c.h", 225, 339))->prev=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 226, 340)), "./neo-c.h", 226, 341))->next=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 227, 342)), "./neo-c.h", 227, 343))->item=item;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 229, 344)), "./neo-c.h", 229, 345))->tail=litem_24;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 230, 346)), "./neo-c.h", 230, 347))->head=litem_24;
                }
                else {
                    if(_if_conditional12=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 232, 348)), "./neo-c.h", 232, 349))->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 233, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 235, 350)), "./neo-c.h", 235, 351))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 235, 352)), "./neo-c.h", 235, 353))->head;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 236, 354)), "./neo-c.h", 236, 355))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 237, 356)), "./neo-c.h", 237, 357))->item=item;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 239, 358)), "./neo-c.h", 239, 359))->tail=litem_25;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 240, 360)), "./neo-c.h", 240, 361))->head, "./neo-c.h", 240, 362)), "./neo-c.h", 240, 363))->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 243, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 245, 364)), "./neo-c.h", 245, 365))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 245, 366)), "./neo-c.h", 245, 367))->tail;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 246, 368)), "./neo-c.h", 246, 369))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 247, 370)), "./neo-c.h", 247, 371))->item=item;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 249, 372)), "./neo-c.h", 249, 373))->tail, "./neo-c.h", 249, 374)), "./neo-c.h", 249, 375))->next=litem_26;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 250, 376)), "./neo-c.h", 250, 377))->tail=litem_26;
                    }
                }
                ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 253, 378)), "./neo-c.h", 253, 379))->len++;
                __result31__ = __result_obj__ = self;
                return __result31__;
}

static void list_item$1intp_finalize(struct list_item$1int* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1intp_finalize(struct list$1int* self){
void* __result_obj__;
struct list_item$1int* it_27;
_Bool _while_condtional3;
struct list_item$1int* prev_it_28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_27, 0, sizeof(struct list_item$1int*));
memset(&prev_it_28, 0, sizeof(struct list_item$1int*));
            it_27=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 120, 382)), "./neo-c.h", 120, 383))->head;
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                prev_it_28=it_27;
                it_27=((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(it_27, "./neo-c.h", 123, 384)), "./neo-c.h", 123, 385))->next;
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __exception_result_var_b42;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 109, 389)), "./neo-c.h", 109, 390))->head=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 110, 391)), "./neo-c.h", 110, 392))->tail=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 111, 393)), "./neo-c.h", 111, 394))->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            (come_push_stackframe("./neo-c.h", 114, 442),__exception_result_var_b42=list$1long_push_back(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 114, 395)), "./neo-c.h", 114, 396)),((long*)come_null_check(values, "./neo-c.h", 114, 441))[i_29]), come_pop_stackframe(), __exception_result_var_b42);
        }
        __result35__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result35__;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__;
_Bool _if_conditional13;
void* right_value62;
struct list_item$1long* litem_30;
_Bool _if_conditional14;
void* right_value63;
struct list_item$1long* litem_31;
void* right_value64;
struct list_item$1long* litem_32;
struct list$1long* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1long*));
right_value63 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1long*));
right_value64 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1long*));
                if(_if_conditional13=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 222, 397)), "./neo-c.h", 222, 398))->len==0,                _if_conditional13) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 223, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 225, 399)), "./neo-c.h", 225, 400))->prev=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 226, 401)), "./neo-c.h", 226, 402))->next=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 227, 403)), "./neo-c.h", 227, 404))->item=item;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 229, 405)), "./neo-c.h", 229, 406))->tail=litem_30;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 230, 407)), "./neo-c.h", 230, 408))->head=litem_30;
                }
                else {
                    if(_if_conditional14=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 232, 409)), "./neo-c.h", 232, 410))->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 233, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 235, 411)), "./neo-c.h", 235, 412))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 235, 413)), "./neo-c.h", 235, 414))->head;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 236, 415)), "./neo-c.h", 236, 416))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 237, 417)), "./neo-c.h", 237, 418))->item=item;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 239, 419)), "./neo-c.h", 239, 420))->tail=litem_31;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 240, 421)), "./neo-c.h", 240, 422))->head, "./neo-c.h", 240, 423)), "./neo-c.h", 240, 424))->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 243, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 245, 425)), "./neo-c.h", 245, 426))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 245, 427)), "./neo-c.h", 245, 428))->tail;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 246, 429)), "./neo-c.h", 246, 430))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 247, 431)), "./neo-c.h", 247, 432))->item=item;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 249, 433)), "./neo-c.h", 249, 434))->tail, "./neo-c.h", 249, 435)), "./neo-c.h", 249, 436))->next=litem_32;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 250, 437)), "./neo-c.h", 250, 438))->tail=litem_32;
                    }
                }
                ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 253, 439)), "./neo-c.h", 253, 440))->len++;
                __result34__ = __result_obj__ = self;
                return __result34__;
}

static void list_item$1longp_finalize(struct list_item$1long* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1longp_finalize(struct list$1long* self){
void* __result_obj__;
struct list_item$1long* it_33;
_Bool _while_condtional4;
struct list_item$1long* prev_it_34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_33, 0, sizeof(struct list_item$1long*));
memset(&prev_it_34, 0, sizeof(struct list_item$1long*));
            it_33=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 120, 443)), "./neo-c.h", 120, 444))->head;
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                prev_it_34=it_33;
                it_33=((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(it_33, "./neo-c.h", 123, 445)), "./neo-c.h", 123, 446))->next;
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __exception_result_var_b44;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 109, 450)), "./neo-c.h", 109, 451))->head=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 110, 452)), "./neo-c.h", 110, 453))->tail=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 111, 454)), "./neo-c.h", 111, 455))->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            (come_push_stackframe("./neo-c.h", 114, 503),__exception_result_var_b44=list$1float_push_back(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 114, 456)), "./neo-c.h", 114, 457)),((float*)come_null_check(values, "./neo-c.h", 114, 502))[i_35]), come_pop_stackframe(), __exception_result_var_b44);
        }
        __result38__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result38__;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__;
_Bool _if_conditional15;
void* right_value67;
struct list_item$1float* litem_36;
_Bool _if_conditional16;
void* right_value68;
struct list_item$1float* litem_37;
void* right_value69;
struct list_item$1float* litem_38;
struct list$1float* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1float*));
right_value68 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1float*));
right_value69 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1float*));
                if(_if_conditional15=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 222, 458)), "./neo-c.h", 222, 459))->len==0,                _if_conditional15) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 223, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 225, 460)), "./neo-c.h", 225, 461))->prev=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 226, 462)), "./neo-c.h", 226, 463))->next=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 227, 464)), "./neo-c.h", 227, 465))->item=item;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 229, 466)), "./neo-c.h", 229, 467))->tail=litem_36;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 230, 468)), "./neo-c.h", 230, 469))->head=litem_36;
                }
                else {
                    if(_if_conditional16=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 232, 470)), "./neo-c.h", 232, 471))->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 233, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 235, 472)), "./neo-c.h", 235, 473))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 235, 474)), "./neo-c.h", 235, 475))->head;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 236, 476)), "./neo-c.h", 236, 477))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 237, 478)), "./neo-c.h", 237, 479))->item=item;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 239, 480)), "./neo-c.h", 239, 481))->tail=litem_37;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 240, 482)), "./neo-c.h", 240, 483))->head, "./neo-c.h", 240, 484)), "./neo-c.h", 240, 485))->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 243, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 245, 486)), "./neo-c.h", 245, 487))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 245, 488)), "./neo-c.h", 245, 489))->tail;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 246, 490)), "./neo-c.h", 246, 491))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 247, 492)), "./neo-c.h", 247, 493))->item=item;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 249, 494)), "./neo-c.h", 249, 495))->tail, "./neo-c.h", 249, 496)), "./neo-c.h", 249, 497))->next=litem_38;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 250, 498)), "./neo-c.h", 250, 499))->tail=litem_38;
                    }
                }
                ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 253, 500)), "./neo-c.h", 253, 501))->len++;
                __result37__ = __result_obj__ = self;
                return __result37__;
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1floatp_finalize(struct list$1float* self){
void* __result_obj__;
struct list_item$1float* it_39;
_Bool _while_condtional5;
struct list_item$1float* prev_it_40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_39, 0, sizeof(struct list_item$1float*));
memset(&prev_it_40, 0, sizeof(struct list_item$1float*));
            it_39=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 120, 504)), "./neo-c.h", 120, 505))->head;
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                prev_it_40=it_39;
                it_39=((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(it_39, "./neo-c.h", 123, 506)), "./neo-c.h", 123, 507))->next;
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __exception_result_var_b46;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 109, 511)), "./neo-c.h", 109, 512))->head=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 110, 513)), "./neo-c.h", 110, 514))->tail=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 111, 515)), "./neo-c.h", 111, 516))->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            (come_push_stackframe("./neo-c.h", 114, 564),__exception_result_var_b46=list$1double_push_back(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 114, 517)), "./neo-c.h", 114, 518)),((double*)come_null_check(values, "./neo-c.h", 114, 563))[i_41]), come_pop_stackframe(), __exception_result_var_b46);
        }
        __result41__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result41__;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__;
_Bool _if_conditional17;
void* right_value72;
struct list_item$1double* litem_42;
_Bool _if_conditional18;
void* right_value73;
struct list_item$1double* litem_43;
void* right_value74;
struct list_item$1double* litem_44;
struct list$1double* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1double*));
right_value73 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1double*));
right_value74 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1double*));
                if(_if_conditional17=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 222, 519)), "./neo-c.h", 222, 520))->len==0,                _if_conditional17) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 223, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 225, 521)), "./neo-c.h", 225, 522))->prev=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 226, 523)), "./neo-c.h", 226, 524))->next=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 227, 525)), "./neo-c.h", 227, 526))->item=item;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 229, 527)), "./neo-c.h", 229, 528))->tail=litem_42;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 230, 529)), "./neo-c.h", 230, 530))->head=litem_42;
                }
                else {
                    if(_if_conditional18=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 232, 531)), "./neo-c.h", 232, 532))->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 233, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 235, 533)), "./neo-c.h", 235, 534))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 235, 535)), "./neo-c.h", 235, 536))->head;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 236, 537)), "./neo-c.h", 236, 538))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 237, 539)), "./neo-c.h", 237, 540))->item=item;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 239, 541)), "./neo-c.h", 239, 542))->tail=litem_43;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 240, 543)), "./neo-c.h", 240, 544))->head, "./neo-c.h", 240, 545)), "./neo-c.h", 240, 546))->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 243, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 245, 547)), "./neo-c.h", 245, 548))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 245, 549)), "./neo-c.h", 245, 550))->tail;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 246, 551)), "./neo-c.h", 246, 552))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 247, 553)), "./neo-c.h", 247, 554))->item=item;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 249, 555)), "./neo-c.h", 249, 556))->tail, "./neo-c.h", 249, 557)), "./neo-c.h", 249, 558))->next=litem_44;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 250, 559)), "./neo-c.h", 250, 560))->tail=litem_44;
                    }
                }
                ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 253, 561)), "./neo-c.h", 253, 562))->len++;
                __result40__ = __result_obj__ = self;
                return __result40__;
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1doublep_finalize(struct list$1double* self){
void* __result_obj__;
struct list_item$1double* it_45;
_Bool _while_condtional6;
struct list_item$1double* prev_it_46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_45, 0, sizeof(struct list_item$1double*));
memset(&prev_it_46, 0, sizeof(struct list_item$1double*));
            it_45=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 120, 565)), "./neo-c.h", 120, 566))->head;
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                prev_it_46=it_45;
                it_45=((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(it_45, "./neo-c.h", 123, 567)), "./neo-c.h", 123, 568))->next;
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}

















static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_47;
_Bool _while_condtional7;
struct list_item$1charph* prev_it_48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_48, 0, sizeof(struct list_item$1charph*));
        it_47=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 580)), "./neo-c.h", 120, 581))->head;
        while(_while_condtional7=it_47!=((void*)0),        _while_condtional7) {
            prev_it_48=it_47;
            it_47=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_47, "./neo-c.h", 123, 582)), "./neo-c.h", 123, 583))->next;
            come_call_finalizer3(prev_it_48,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional19=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 584)), "list_item$1charphp_finalize", 0, 585))->item!=((void*)0),                _if_conditional19) {
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 586)), "list_item$1charphp_finalize", 0, 587))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 586)), "list_item$1charphp_finalize", 0, 587))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}



































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
const char* err_49;
int erro_ofs_50;
int options_51;
void* right_value107;
char* __exception_result_var_b94;
char* __dec_obj12;
struct real_pcre8_or_16* __exception_result_var_b95;
_Bool _if_conditional20;
int __exception_result_var_b96;
struct come_regex* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_49, 0, sizeof(const char*));
memset(&erro_ofs_50, 0, sizeof(int));
memset(&options_51, 0, sizeof(int));
right_value107 = (void*)0;
    options_51=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    __dec_obj12=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 24, 626)), "libneo-c-str.c", 24, 627))->str;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 24, 626)), "libneo-c-str.c", 24, 627))->str=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 24, 628),__exception_result_var_b94=((char*)(right_value107=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b94));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 26, 629)), "libneo-c-str.c", 26, 630))->ignore_case=ignore_case;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 27, 631)), "libneo-c-str.c", 27, 632))->multiline=multiline;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 28, 633)), "libneo-c-str.c", 28, 634))->global=global;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 29, 635)), "libneo-c-str.c", 29, 636))->extended=extended;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 30, 637)), "libneo-c-str.c", 30, 638))->dotall=dotall;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 31, 639)), "libneo-c-str.c", 31, 640))->anchored=anchored;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 32, 641)), "libneo-c-str.c", 32, 642))->dollar_endonly=dollar_endonly;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 34, 645)), "libneo-c-str.c", 34, 646))->options=options_51;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 36, 647)), "libneo-c-str.c", 36, 648))->re=(come_push_stackframe("libneo-c-str.c", 36, 649),__exception_result_var_b95=pcre_compile(str,options_51,&err_49,&erro_ofs_50,((void*)0)), come_pop_stackframe(), __exception_result_var_b95);
    if(_if_conditional20=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(self, "libneo-c-str.c", 38, 650)), "libneo-c-str.c", 38, 651))->re==((void*)0),    _if_conditional20) {
        (come_push_stackframe("libneo-c-str.c", 39, 652),__exception_result_var_b96=printf("regex error (%s)\n",str), come_pop_stackframe(), __exception_result_var_b96);
        (come_push_stackframe("libneo-c-str.c", 40,653),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c-str.c", 41,654),exit(1),come_pop_stackframe());
    }
    __result94__ = __result_obj__ = self;
    come_call_finalizer3(self,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    return __result94__;
    come_call_finalizer3(self,come_regex_finalize, 0, 0, 1, 0, (void*)0);
}

void come_regex_finalize(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional21=reg&&((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 55, 655)), "libneo-c-str.c", 55, 656))->str,    _if_conditional21) {
        ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 56, 657)), "libneo-c-str.c", 56, 658))->str = come_decrement_ref_count2(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 56, 657)), "libneo-c-str.c", 56, 658))->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional22=reg&&((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 58, 659)), "libneo-c-str.c", 58, 660))->re,    _if_conditional22) {
        (come_push_stackframe("libneo-c-str.c", 59,663),free(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 59, 661)), "libneo-c-str.c", 59, 662))->re),come_pop_stackframe());
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
void* right_value108;
void* right_value109;
struct come_regex* __exception_result_var_b97;
struct come_regex* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
    __result95__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 65, 665),__exception_result_var_b97=((struct come_regex*)(right_value109=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)come_null_check(((struct come_regex*)(right_value108=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str.c", 65, "come_regex"))), "libneo-c-str.c", 65, 664))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy))), come_pop_stackframe(), __exception_result_var_b97);
    come_call_finalizer3(right_value108,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value109,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    return __result95__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
void* right_value110;
void* right_value111;
struct come_regex* __exception_result_var_b98;
struct come_regex* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
right_value111 = (void*)0;
    __result96__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 70, 667),__exception_result_var_b98=((struct come_regex*)(right_value111=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)come_null_check(((struct come_regex*)(right_value110=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str.c", 70, "come_regex"))), "libneo-c-str.c", 70, 666))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy))), come_pop_stackframe(), __exception_result_var_b98);
    come_call_finalizer3(right_value110,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value111,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    return __result96__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional23;
struct come_regex* __result97__;
void* right_value112;
struct come_regex* result_52;
char* __exception_result_var_b99;
void* right_value113;
char* __dec_obj13;
const char* err_53;
int erro_ofs_54;
struct real_pcre8_or_16* __exception_result_var_b100;
_Bool _if_conditional24;
int __exception_result_var_b101;
struct come_regex* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&result_52, 0, sizeof(struct come_regex*));
right_value113 = (void*)0;
memset(&err_53, 0, sizeof(const char*));
memset(&erro_ofs_54, 0, sizeof(int));
    if(_if_conditional23=reg==((void*)0),    _if_conditional23) {
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    result_52=(struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value112=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str.c", 80, "come_regex"))));
    come_call_finalizer3(right_value112,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 82, 668)), "libneo-c-str.c", 82, 669))->str;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 82, 668)), "libneo-c-str.c", 82, 669))->str=(char*)come_increment_ref_count(((char*)(right_value113=(come_push_stackframe("libneo-c-str.c", 82, 672),__exception_result_var_b99=string_clone(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 82, 670)), "libneo-c-str.c", 82, 671))->str), come_pop_stackframe(), __exception_result_var_b99))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 84, 673)), "libneo-c-str.c", 84, 674))->ignore_case=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 84, 675)), "libneo-c-str.c", 84, 676))->ignore_case;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 85, 677)), "libneo-c-str.c", 85, 678))->multiline=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 85, 679)), "libneo-c-str.c", 85, 680))->multiline;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 86, 681)), "libneo-c-str.c", 86, 682))->global=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 86, 683)), "libneo-c-str.c", 86, 684))->global;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 87, 685)), "libneo-c-str.c", 87, 686))->extended=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 87, 687)), "libneo-c-str.c", 87, 688))->extended;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 88, 689)), "libneo-c-str.c", 88, 690))->dotall=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 88, 691)), "libneo-c-str.c", 88, 692))->dotall;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 89, 693)), "libneo-c-str.c", 89, 694))->anchored=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 89, 695)), "libneo-c-str.c", 89, 696))->anchored;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 90, 697)), "libneo-c-str.c", 90, 698))->dollar_endonly=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 90, 699)), "libneo-c-str.c", 90, 700))->dollar_endonly;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 91, 701)), "libneo-c-str.c", 91, 702))->ungreedy=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 91, 703)), "libneo-c-str.c", 91, 704))->ungreedy;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 93, 705)), "libneo-c-str.c", 93, 706))->options=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 93, 707)), "libneo-c-str.c", 93, 708))->options;
    ((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 98, 709)), "libneo-c-str.c", 98, 710))->re=(come_push_stackframe("libneo-c-str.c", 98, 715),__exception_result_var_b100=pcre_compile(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 98, 711)), "libneo-c-str.c", 98, 712))->str,((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 98, 713)), "libneo-c-str.c", 98, 714))->options,&err_53,&erro_ofs_54,((void*)0)), come_pop_stackframe(), __exception_result_var_b100);
    if(_if_conditional24=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 100, 716)), "libneo-c-str.c", 100, 717))->re==((void*)0),    _if_conditional24) {
        (come_push_stackframe("libneo-c-str.c", 101, 720),__exception_result_var_b101=printf("regex compile error(%s)\n",((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(result_52, "libneo-c-str.c", 101, 718)), "libneo-c-str.c", 101, 719))->str), come_pop_stackframe(), __exception_result_var_b101);
        (come_push_stackframe("libneo-c-str.c", 102,721),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c-str.c", 103,722),exit(1),come_pop_stackframe());
    }
    __result98__ = __result_obj__ = result_52;
    come_call_finalizer3(result_52,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    return __result98__;
    come_call_finalizer3(result_52,come_regex_finalize, 0, 0, 0, 0, (void*)0);
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
void* right_value114;
char* __exception_result_var_b102;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
    __result99__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 111, 725),__exception_result_var_b102=((char*)(right_value114=__builtin_string(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(regex, "libneo-c-str.c", 111, 723)), "libneo-c-str.c", 111, 724))->str))), come_pop_stackframe(), __exception_result_var_b102);
    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

char* string_lower_case(char* str){
void* __result_obj__;
void* right_value115;
char* __exception_result_var_b103;
char* result_55;
int i_56;
unsigned long int __exception_result_var_b104;
_Bool _if_conditional25;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
memset(&result_55, 0, sizeof(char*));
memset(&i_56, 0, sizeof(int));
    result_55=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 116, 726),__exception_result_var_b103=((char*)(right_value115=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b103));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_56=0;    i_56<(come_push_stackframe("libneo-c-str.c", 117, 727),__exception_result_var_b104=strlen(str), come_pop_stackframe(), __exception_result_var_b104);    i_56++    ){
        if(_if_conditional25=((char*)come_null_check(str, "libneo-c-str.c", 118, 728))[i_56]>=65&&((char*)come_null_check(str, "libneo-c-str.c", 118, 729))[i_56]<=90,        _if_conditional25) {
            ((char*)come_null_check(result_55, "libneo-c-str.c", 119, 730))[i_56]=((char*)come_null_check(str, "libneo-c-str.c", 119, 731))[i_56]-65+97;
        }
    }
    __result100__ = __result_obj__ = result_55;
    result_55 = come_decrement_ref_count2(result_55, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result100__;
    result_55 = come_decrement_ref_count2(result_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_upper_case(char* str){
void* __result_obj__;
void* right_value116;
char* __exception_result_var_b105;
char* result_57;
int i_58;
unsigned long int __exception_result_var_b106;
_Bool _if_conditional26;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&result_57, 0, sizeof(char*));
memset(&i_58, 0, sizeof(int));
    result_57=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 128, 732),__exception_result_var_b105=((char*)(right_value116=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b105));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_58=0;    i_58<(come_push_stackframe("libneo-c-str.c", 129, 733),__exception_result_var_b106=strlen(str), come_pop_stackframe(), __exception_result_var_b106);    i_58++    ){
        if(_if_conditional26=((char*)come_null_check(str, "libneo-c-str.c", 130, 734))[i_58]>=97&&((char*)come_null_check(str, "libneo-c-str.c", 130, 735))[i_58]<=122,        _if_conditional26) {
            ((char*)come_null_check(result_57, "libneo-c-str.c", 131, 736))[i_58]=((char*)come_null_check(str, "libneo-c-str.c", 131, 737))[i_58]-97+65;
        }
    }
    __result101__ = __result_obj__ = result_57;
    result_57 = come_decrement_ref_count2(result_57, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result101__;
    result_57 = come_decrement_ref_count2(result_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional27;
void* right_value117;
unsigned int* __exception_result_var_b107;
unsigned int* __result102__;
unsigned long int __exception_result_var_b108;
int len_59;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
void* right_value118;
unsigned int* __exception_result_var_b109;
unsigned int* __result103__;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
void* right_value119;
unsigned int* __exception_result_var_b110;
unsigned int* __result104__;
_Bool _if_conditional34;
void* right_value120;
unsigned int* __exception_result_var_b111;
unsigned int* __result105__;
void* right_value121;
unsigned int* result_60;
void* __exception_result_var_b112;
unsigned int* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&len_59, 0, sizeof(int));
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&result_60, 0, sizeof(unsigned int*));
    if(_if_conditional27=str==((void*)0),    _if_conditional27) {
        __result102__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 143, 738),__exception_result_var_b107=((unsigned int*)(right_value117=__builtin_wstring(""))), come_pop_stackframe(), __exception_result_var_b107);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result102__;
    }
    len_59=(come_push_stackframe("libneo-c-str.c", 146, 739),__exception_result_var_b108=wcslen(str), come_pop_stackframe(), __exception_result_var_b108);
    if(_if_conditional28=head<0,    _if_conditional28) {
        head+=len_59;
    }
    if(_if_conditional29=tail<0,    _if_conditional29) {
        tail+=len_59+1;
    }
    if(_if_conditional30=head>tail,    _if_conditional30) {
        __result103__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 156, 740),__exception_result_var_b109=((unsigned int*)(right_value118=__builtin_wstring(""))), come_pop_stackframe(), __exception_result_var_b109);
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result103__;
    }
    if(_if_conditional31=head<0,    _if_conditional31) {
        head=0;
    }
    if(_if_conditional32=tail>=len_59,    _if_conditional32) {
        tail=len_59;
    }
    if(_if_conditional33=head==tail,    _if_conditional33) {
        __result104__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 168, 741),__exception_result_var_b110=((unsigned int*)(right_value119=__builtin_wstring(""))), come_pop_stackframe(), __exception_result_var_b110);
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result104__;
    }
    if(_if_conditional34=tail-head+1<1,    _if_conditional34) {
        __result105__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 172, 742),__exception_result_var_b111=((unsigned int*)(right_value120=__builtin_wstring(""))), come_pop_stackframe(), __exception_result_var_b111);
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result105__;
    }
    result_60=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value121=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libneo-c-str.c", 175, "int"))));
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c-str.c", 177, 743),__exception_result_var_b112=memcpy(result_60,str+head,sizeof(unsigned int)*(tail-head)), come_pop_stackframe(), __exception_result_var_b112);
    ((unsigned int*)come_null_check(result_60, "libneo-c-str.c", 178, 744))[tail-head]=0;
    __result106__ = __result_obj__ = result_60;
    result_60 = come_decrement_ref_count2(result_60, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result106__;
    result_60 = come_decrement_ref_count2(result_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool _if_conditional35;
unsigned int* __result107__;
unsigned long int __exception_result_var_b113;
int len_61;
void* right_value122;
unsigned int* wstr_62;
unsigned long int __exception_result_var_b114;
int ret_63;
_Bool _if_conditional36;
unsigned int* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_61, 0, sizeof(int));
right_value122 = (void*)0;
memset(&wstr_62, 0, sizeof(unsigned int*));
memset(&ret_63, 0, sizeof(int));
    if(_if_conditional35=str==((void*)0),    _if_conditional35) {
        __result107__ = __result_obj__ = ((void*)0);
        return __result107__;
    }
    len_61=(come_push_stackframe("libneo-c-str.c", 188, 745),__exception_result_var_b113=strlen(str), come_pop_stackframe(), __exception_result_var_b113);
    wstr_62=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value122=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_61+1)), "libneo-c-str.c", 190, "int"))));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ret_63=(come_push_stackframe("libneo-c-str.c", 192, 746),__exception_result_var_b114=mbstowcs(wstr_62,str,len_61+1), come_pop_stackframe(), __exception_result_var_b114);
    ((unsigned int*)come_null_check(wstr_62, "libneo-c-str.c", 193, 747))[ret_63]=0;
    if(_if_conditional36=ret_63<0,    _if_conditional36) {
        ((unsigned int*)come_null_check(wstr_62, "libneo-c-str.c", 196, 748))[0]=0;
    }
    __result108__ = __result_obj__ = wstr_62;
    wstr_62 = come_decrement_ref_count2(wstr_62, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result108__;
    wstr_62 = come_decrement_ref_count2(wstr_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int n_64;
unsigned long int __exception_result_var_b115;
int len_65;
int i_66;
unsigned long int __exception_result_var_b116;
int len2_67;
int j_68;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
int __result109__;
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_64, 0, sizeof(int));
memset(&len_65, 0, sizeof(int));
memset(&i_66, 0, sizeof(int));
memset(&len2_67, 0, sizeof(int));
memset(&j_68, 0, sizeof(int));
    n_64=0;
    len_65=(come_push_stackframe("libneo-c-str.c", 205, 749),__exception_result_var_b115=strlen(str), come_pop_stackframe(), __exception_result_var_b115);
    for(    i_66=0;    i_66<len_65;    i_66++    ){
        len2_67=(come_push_stackframe("libneo-c-str.c", 207, 750),__exception_result_var_b116=strlen(search_str), come_pop_stackframe(), __exception_result_var_b116);
        for(        j_68=0;        j_68<len2_67;        j_68++        ){
            if(_if_conditional37=((char*)come_null_check(str, "libneo-c-str.c", 210, 751))[i_66+j_68]!=((char*)come_null_check(search_str, "libneo-c-str.c", 210, 752))[j_68],            _if_conditional37) {
                break;
            }
        }
        if(_if_conditional38=j_68==len2_67,        _if_conditional38) {
            n_64++;
            if(_if_conditional39=n_64==count,            _if_conditional39) {
                __result109__ = i_66;
                return __result109__;
            }
        }
    }
    __result110__ = default_value;
    return __result110__;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int ovec_max_69;
int result_73;
int offset_74;
const char* err_75;
int erro_ofs_76;
int options_77;
char* str_78;
struct real_pcre8_or_16* re_79;
int n_80;
_Bool _while_condtional8;
int options_81;
unsigned long int __exception_result_var_b117;
int len_82;
int __exception_result_var_b118;
int regex_result_83;
int i_84;
int i_85;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_69, 0, sizeof(int));
memset(&result_73, 0, sizeof(int));
memset(&offset_74, 0, sizeof(int));
memset(&err_75, 0, sizeof(const char*));
memset(&erro_ofs_76, 0, sizeof(int));
memset(&options_77, 0, sizeof(int));
memset(&str_78, 0, sizeof(char*));
memset(&re_79, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_80, 0, sizeof(int));
memset(&options_81, 0, sizeof(int));
memset(&len_82, 0, sizeof(int));
memset(&regex_result_83, 0, sizeof(int));
memset(&i_84, 0, sizeof(int));
memset(&i_85, 0, sizeof(int));
    ovec_max_69=16;
    int start_70[ovec_max_69];
    memset(&start_70, 0, sizeof(int)    *(ovec_max_69)    );
    int end_71[ovec_max_69];
    memset(&end_71, 0, sizeof(int)    *(ovec_max_69)    );
    int ovec_value_72[ovec_max_69*3];
    memset(&ovec_value_72, 0, sizeof(int)    *(ovec_max_69*3)    );
    result_73=default_value;
    offset_74=0;
    options_77=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 241, 753)), "libneo-c-str.c", 241, 754))->options;
    str_78=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 242, 755)), "libneo-c-str.c", 242, 756))->str;
    re_79=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 244, 757)), "libneo-c-str.c", 244, 758))->re;
    n_80=0;
    while(_while_condtional8=(_Bool)1,    _while_condtional8) {
        options_81=2097152;
        len_82=(come_push_stackframe("libneo-c-str.c", 250, 759),__exception_result_var_b117=strlen(self), come_pop_stackframe(), __exception_result_var_b117);
        regex_result_83=(come_push_stackframe("libneo-c-str.c", 251, 760),__exception_result_var_b118=pcre_exec(re_79,(struct pcre_extra*)0,self,len_82,offset_74,options_81,ovec_value_72,ovec_max_69*3), come_pop_stackframe(), __exception_result_var_b118);
        for(        i_84=0;        i_84<ovec_max_69;        i_84++        ){
            (come_range_check(&((int*)come_null_check(start_70, "libneo-c-str.c", 254, 761))[i_84],((int*)come_null_check(start_70, "libneo-c-str.c", 254, 761)),((int*)come_null_check(start_70, "libneo-c-str.c", 254, 761))+(ovec_max_69), "libneo-c-str.c", 254), ((int*)come_null_check(start_70, "libneo-c-str.c", 254, 761))[i_84]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_72, "libneo-c-str.c", 254, 762))[i_84*2],((int*)come_null_check(ovec_value_72, "libneo-c-str.c", 254, 762)),((int*)come_null_check(ovec_value_72, "libneo-c-str.c", 254, 762))+(ovec_max_69*3), "libneo-c-str.c", 254));
        }
        for(        i_85=0;        i_85<ovec_max_69;        i_85++        ){
            (come_range_check(&((int*)come_null_check(end_71, "libneo-c-str.c", 257, 763))[i_85],((int*)come_null_check(end_71, "libneo-c-str.c", 257, 763)),((int*)come_null_check(end_71, "libneo-c-str.c", 257, 763))+(ovec_max_69), "libneo-c-str.c", 257), ((int*)come_null_check(end_71, "libneo-c-str.c", 257, 763))[i_85]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_72, "libneo-c-str.c", 257, 764))[i_85*2+1],((int*)come_null_check(ovec_value_72, "libneo-c-str.c", 257, 764)),((int*)come_null_check(ovec_value_72, "libneo-c-str.c", 257, 764))+(ovec_max_69*3), "libneo-c-str.c", 257));
        }
        if(_if_conditional40=regex_result_83>0,        _if_conditional40) {
            n_80++;
            if(_if_conditional41=offset_74==*(int*)come_range_check(&((int*)come_null_check(end_71, "libneo-c-str.c", 264, 765))[0],((int*)come_null_check(end_71, "libneo-c-str.c", 264, 765)),((int*)come_null_check(end_71, "libneo-c-str.c", 264, 765))+(ovec_max_69), "libneo-c-str.c", 264),            _if_conditional41) {
                offset_74++;
            }
            else {
                offset_74=*(int*)come_range_check(&((int*)come_null_check(end_71, "libneo-c-str.c", 268, 766))[0],((int*)come_null_check(end_71, "libneo-c-str.c", 268, 766)),((int*)come_null_check(end_71, "libneo-c-str.c", 268, 766))+(ovec_max_69), "libneo-c-str.c", 268);
            }
            if(_if_conditional42=n_80==count,            _if_conditional42) {
                result_73=*(int*)come_range_check(&((int*)come_null_check(start_70, "libneo-c-str.c", 272, 767))[0],((int*)come_null_check(start_70, "libneo-c-str.c", 272, 767)),((int*)come_null_check(start_70, "libneo-c-str.c", 272, 767))+(ovec_max_69), "libneo-c-str.c", 272);
                break;
            }
        }
        else {
            break;
        }
    }
    __result111__ = result_73;
    return __result111__;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
unsigned long int __exception_result_var_b119;
int len_86;
unsigned long int __exception_result_var_b120;
char* p_87;
_Bool _while_condtional9;
int __exception_result_var_b121;
_Bool _if_conditional43;
int __result112__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_86, 0, sizeof(int));
memset(&p_87, 0, sizeof(char*));
    len_86=(come_push_stackframe("libneo-c-str.c", 289, 768),__exception_result_var_b119=strlen(search_str), come_pop_stackframe(), __exception_result_var_b119);
    p_87=str+(come_push_stackframe("libneo-c-str.c", 290, 769),__exception_result_var_b120=strlen(str), come_pop_stackframe(), __exception_result_var_b120)-len_86;
    while(_while_condtional9=p_87>=str,    _while_condtional9) {
        if(_if_conditional43=(come_push_stackframe("libneo-c-str.c", 293, 770),__exception_result_var_b121=strncmp(p_87,search_str,len_86), come_pop_stackframe(), __exception_result_var_b121)==0,        _if_conditional43) {
            __result112__ = p_87-str;
            return __result112__;
        }
        p_87--;
    }
    __result113__ = default_value;
    return __result113__;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
const char* err_88;
int erro_ofs_89;
int options_90;
char* str_91;
struct real_pcre8_or_16* re_92;
void* right_value123;
char* __exception_result_var_b122;
char* self2_93;
int ovec_max_94;
int result_98;
int offset_99;
_Bool _while_condtional10;
int options_100;
unsigned long int __exception_result_var_b123;
int len_101;
int __exception_result_var_b124;
int regex_result_102;
int i_103;
int i_104;
_Bool _if_conditional44;
unsigned long int __exception_result_var_b125;
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_88, 0, sizeof(const char*));
memset(&erro_ofs_89, 0, sizeof(int));
memset(&options_90, 0, sizeof(int));
memset(&str_91, 0, sizeof(char*));
memset(&re_92, 0, sizeof(struct real_pcre8_or_16*));
right_value123 = (void*)0;
memset(&self2_93, 0, sizeof(char*));
memset(&ovec_max_94, 0, sizeof(int));
memset(&result_98, 0, sizeof(int));
memset(&offset_99, 0, sizeof(int));
memset(&options_100, 0, sizeof(int));
memset(&len_101, 0, sizeof(int));
memset(&regex_result_102, 0, sizeof(int));
memset(&i_103, 0, sizeof(int));
memset(&i_104, 0, sizeof(int));
    options_90=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 308, 771)), "libneo-c-str.c", 308, 772))->options;
    str_91=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 309, 773)), "libneo-c-str.c", 309, 774))->str;
    re_92=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 311, 775)), "libneo-c-str.c", 311, 776))->re;
    self2_93=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 313, 779),__exception_result_var_b122=((char*)(right_value123=charp_reverse(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 313, 777)), "libneo-c-str.c", 313, 778))))), come_pop_stackframe(), __exception_result_var_b122));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ovec_max_94=16;
    int start_95[ovec_max_94];
    memset(&start_95, 0, sizeof(int)    *(ovec_max_94)    );
    int end_96[ovec_max_94];
    memset(&end_96, 0, sizeof(int)    *(ovec_max_94)    );
    int ovec_value_97[ovec_max_94*3];
    memset(&ovec_value_97, 0, sizeof(int)    *(ovec_max_94*3)    );
    result_98=default_value;
    offset_99=0;
    while(_while_condtional10=(_Bool)1,    _while_condtional10) {
        options_100=2097152;
        len_101=(come_push_stackframe("libneo-c-str.c", 326, 780),__exception_result_var_b123=strlen(self2_93), come_pop_stackframe(), __exception_result_var_b123);
        regex_result_102=(come_push_stackframe("libneo-c-str.c", 327, 781),__exception_result_var_b124=pcre_exec(re_92,(struct pcre_extra*)0,self2_93,len_101,offset_99,options_100,ovec_value_97,ovec_max_94*3), come_pop_stackframe(), __exception_result_var_b124);
        for(        i_103=0;        i_103<ovec_max_94;        i_103++        ){
            (come_range_check(&((int*)come_null_check(start_95, "libneo-c-str.c", 330, 782))[i_103],((int*)come_null_check(start_95, "libneo-c-str.c", 330, 782)),((int*)come_null_check(start_95, "libneo-c-str.c", 330, 782))+(ovec_max_94), "libneo-c-str.c", 330), ((int*)come_null_check(start_95, "libneo-c-str.c", 330, 782))[i_103]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_97, "libneo-c-str.c", 330, 783))[i_103*2],((int*)come_null_check(ovec_value_97, "libneo-c-str.c", 330, 783)),((int*)come_null_check(ovec_value_97, "libneo-c-str.c", 330, 783))+(ovec_max_94*3), "libneo-c-str.c", 330));
        }
        for(        i_104=0;        i_104<ovec_max_94;        i_104++        ){
            (come_range_check(&((int*)come_null_check(end_96, "libneo-c-str.c", 333, 784))[i_104],((int*)come_null_check(end_96, "libneo-c-str.c", 333, 784)),((int*)come_null_check(end_96, "libneo-c-str.c", 333, 784))+(ovec_max_94), "libneo-c-str.c", 333), ((int*)come_null_check(end_96, "libneo-c-str.c", 333, 784))[i_104]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_97, "libneo-c-str.c", 333, 785))[i_104*2+1],((int*)come_null_check(ovec_value_97, "libneo-c-str.c", 333, 785)),((int*)come_null_check(ovec_value_97, "libneo-c-str.c", 333, 785))+(ovec_max_94*3), "libneo-c-str.c", 333));
        }
        if(_if_conditional44=regex_result_102==1||regex_result_102>0,        _if_conditional44) {
            result_98=(come_push_stackframe("libneo-c-str.c", 339, 786),__exception_result_var_b125=strlen(self), come_pop_stackframe(), __exception_result_var_b125)-1-*(int*)come_range_check(&((int*)come_null_check(start_95, "libneo-c-str.c", 339, 787))[0],((int*)come_null_check(start_95, "libneo-c-str.c", 339, 787)),((int*)come_null_check(start_95, "libneo-c-str.c", 339, 787))+(ovec_max_94), "libneo-c-str.c", 339);
            break;
        }
        {
            break;
        }
    }
    __result114__ = result_98;
    self2_93 = come_decrement_ref_count2(self2_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result114__;
    self2_93 = come_decrement_ref_count2(self2_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
unsigned long int __exception_result_var_b126;
int len_105;
unsigned long int __exception_result_var_b127;
char* p_106;
int n_107;
_Bool _while_condtional11;
int __exception_result_var_b128;
_Bool _if_conditional45;
_Bool _if_conditional46;
int __result115__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_105, 0, sizeof(int));
memset(&p_106, 0, sizeof(char*));
memset(&n_107, 0, sizeof(int));
    len_105=(come_push_stackframe("libneo-c-str.c", 355, 788),__exception_result_var_b126=strlen(search_str), come_pop_stackframe(), __exception_result_var_b126);
    p_106=str+(come_push_stackframe("libneo-c-str.c", 356, 789),__exception_result_var_b127=strlen(str), come_pop_stackframe(), __exception_result_var_b127)-len_105;
    n_107=0;
    while(_while_condtional11=p_106>=str,    _while_condtional11) {
        if(_if_conditional45=(come_push_stackframe("libneo-c-str.c", 361, 790),__exception_result_var_b128=strncmp(p_106,search_str,len_105), come_pop_stackframe(), __exception_result_var_b128)==0,        _if_conditional45) {
            n_107++;
            if(_if_conditional46=n_107==count,            _if_conditional46) {
                __result115__ = p_106-str;
                return __result115__;
            }
        }
        p_106--;
    }
    __result116__ = default_value;
    return __result116__;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value124;
void* right_value125;
struct list$1charph* __exception_result_var_b129;
struct list$1charph* result_108;
int offset_109;
int ovec_max_110;
const char* err_114;
int erro_ofs_115;
int options_116;
char* str_117;
struct real_pcre8_or_16* re_118;
_Bool _while_condtional12;
int options_119;
unsigned long int __exception_result_var_b130;
int len_120;
int __exception_result_var_b131;
int regex_result_121;
int i_122;
int i_123;
_Bool _if_conditional47;
void* right_value126;
char* __exception_result_var_b132;
char* str_124;
void* right_value127;
void* right_value128;
struct list$1charph* __exception_result_var_b133;
struct list$1charph* group_strings_125;
void* right_value129;
char* str2_126;
struct list$1charph* __exception_result_var_b134;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value133;
char* __exception_result_var_b135;
char* str_130;
void* right_value134;
void* right_value135;
struct list$1charph* __exception_result_var_b136;
struct list$1charph* group_strings_131;
int i_132;
void* right_value136;
char* __exception_result_var_b137;
char* match_string_133;
struct list$1charph* __exception_result_var_b138;
void* right_value137;
char* str2_134;
struct list$1charph* __exception_result_var_b139;
_Bool _if_conditional52;
struct list$1charph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
right_value125 = (void*)0;
memset(&result_108, 0, sizeof(struct list$1charph*));
memset(&offset_109, 0, sizeof(int));
memset(&ovec_max_110, 0, sizeof(int));
memset(&err_114, 0, sizeof(const char*));
memset(&erro_ofs_115, 0, sizeof(int));
memset(&options_116, 0, sizeof(int));
memset(&str_117, 0, sizeof(char*));
memset(&re_118, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_119, 0, sizeof(int));
memset(&len_120, 0, sizeof(int));
memset(&regex_result_121, 0, sizeof(int));
memset(&i_122, 0, sizeof(int));
memset(&i_123, 0, sizeof(int));
right_value126 = (void*)0;
memset(&str_124, 0, sizeof(char*));
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&group_strings_125, 0, sizeof(struct list$1charph*));
right_value129 = (void*)0;
memset(&str2_126, 0, sizeof(char*));
right_value133 = (void*)0;
memset(&str_130, 0, sizeof(char*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&group_strings_131, 0, sizeof(struct list$1charph*));
memset(&i_132, 0, sizeof(int));
right_value136 = (void*)0;
memset(&match_string_133, 0, sizeof(char*));
right_value137 = (void*)0;
memset(&str2_134, 0, sizeof(char*));
    result_108=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 376, 799),__exception_result_var_b129=((struct list$1charph*)(right_value125=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value124=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 376, "list$1charph"))), "libneo-c-str.c", 376, 791)), "libneo-c-str.c", 376, 792)))))), come_pop_stackframe(), __exception_result_var_b129));
    come_call_finalizer3(right_value124,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value125,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_109=0;
    ovec_max_110=16;
    int start_111[ovec_max_110];
    memset(&start_111, 0, sizeof(int)    *(ovec_max_110)    );
    int end_112[ovec_max_110];
    memset(&end_112, 0, sizeof(int)    *(ovec_max_110)    );
    int ovec_value_113[ovec_max_110*3];
    memset(&ovec_value_113, 0, sizeof(int)    *(ovec_max_110*3)    );
    options_116=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 388, 800)), "libneo-c-str.c", 388, 801))->options;
    str_117=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 389, 802)), "libneo-c-str.c", 389, 803))->str;
    re_118=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 391, 804)), "libneo-c-str.c", 391, 805))->re;
    while(_while_condtional12=(_Bool)1,    _while_condtional12) {
        options_119=2097152;
        len_120=(come_push_stackframe("libneo-c-str.c", 395, 806),__exception_result_var_b130=strlen(self), come_pop_stackframe(), __exception_result_var_b130);
        regex_result_121=(come_push_stackframe("libneo-c-str.c", 396, 807),__exception_result_var_b131=pcre_exec(re_118,(struct pcre_extra*)0,self,len_120,offset_109,options_119,ovec_value_113,ovec_max_110*3), come_pop_stackframe(), __exception_result_var_b131);
        for(        i_122=0;        i_122<ovec_max_110;        i_122++        ){
            (come_range_check(&((int*)come_null_check(start_111, "libneo-c-str.c", 399, 808))[i_122],((int*)come_null_check(start_111, "libneo-c-str.c", 399, 808)),((int*)come_null_check(start_111, "libneo-c-str.c", 399, 808))+(ovec_max_110), "libneo-c-str.c", 399), ((int*)come_null_check(start_111, "libneo-c-str.c", 399, 808))[i_122]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_113, "libneo-c-str.c", 399, 809))[i_122*2],((int*)come_null_check(ovec_value_113, "libneo-c-str.c", 399, 809)),((int*)come_null_check(ovec_value_113, "libneo-c-str.c", 399, 809))+(ovec_max_110*3), "libneo-c-str.c", 399));
        }
        for(        i_123=0;        i_123<ovec_max_110;        i_123++        ){
            (come_range_check(&((int*)come_null_check(end_112, "libneo-c-str.c", 402, 810))[i_123],((int*)come_null_check(end_112, "libneo-c-str.c", 402, 810)),((int*)come_null_check(end_112, "libneo-c-str.c", 402, 810))+(ovec_max_110), "libneo-c-str.c", 402), ((int*)come_null_check(end_112, "libneo-c-str.c", 402, 810))[i_123]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_113, "libneo-c-str.c", 402, 811))[i_123*2+1],((int*)come_null_check(ovec_value_113, "libneo-c-str.c", 402, 811)),((int*)come_null_check(ovec_value_113, "libneo-c-str.c", 402, 811))+(ovec_max_110*3), "libneo-c-str.c", 402));
        }
        if(_if_conditional47=regex_result_121==1,        _if_conditional47) {
            str_124=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 408, 816),__exception_result_var_b132=((char*)(right_value126=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 408, 812)), "libneo-c-str.c", 408, 813)),*(int*)come_range_check(&((int*)come_null_check(start_111, "libneo-c-str.c", 408, 814))[0],((int*)come_null_check(start_111, "libneo-c-str.c", 408, 814)),((int*)come_null_check(start_111, "libneo-c-str.c", 408, 814))+(ovec_max_110), "libneo-c-str.c", 408),*(int*)come_range_check(&((int*)come_null_check(end_112, "libneo-c-str.c", 408, 815))[0],((int*)come_null_check(end_112, "libneo-c-str.c", 408, 815)),((int*)come_null_check(end_112, "libneo-c-str.c", 408, 815))+(ovec_max_110), "libneo-c-str.c", 408)))), come_pop_stackframe(), __exception_result_var_b132));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            group_strings_125=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 410, 819),__exception_result_var_b133=((struct list$1charph*)(right_value128=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value127=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 410, "list$1charph"))), "libneo-c-str.c", 410, 817)), "libneo-c-str.c", 410, 818)))))), come_pop_stackframe(), __exception_result_var_b133));
            come_call_finalizer3(right_value127,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value128,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_126=(char*)come_increment_ref_count(((char*)(right_value129=block(parent,str_124,group_strings_125))));
            right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 414, 866),__exception_result_var_b134=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_108, "libneo-c-str.c", 414, 820)), "libneo-c-str.c", 414, 821)),(char*)come_increment_ref_count(str2_126)), come_pop_stackframe(), __exception_result_var_b134);
            if(_if_conditional50=offset_109==*(int*)come_range_check(&((int*)come_null_check(end_112, "libneo-c-str.c", 416, 867))[0],((int*)come_null_check(end_112, "libneo-c-str.c", 416, 867)),((int*)come_null_check(end_112, "libneo-c-str.c", 416, 867))+(ovec_max_110), "libneo-c-str.c", 416),            _if_conditional50) {
                offset_109++;
            }
            else {
                offset_109=*(int*)come_range_check(&((int*)come_null_check(end_112, "libneo-c-str.c", 420, 868))[0],((int*)come_null_check(end_112, "libneo-c-str.c", 420, 868)),((int*)come_null_check(end_112, "libneo-c-str.c", 420, 868))+(ovec_max_110), "libneo-c-str.c", 420);
            }
            str_124 = come_decrement_ref_count2(str_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(group_strings_125,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_126 = come_decrement_ref_count2(str2_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional51=regex_result_121>1,            _if_conditional51) {
                str_130=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 425, 873),__exception_result_var_b135=((char*)(right_value133=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 425, 869)), "libneo-c-str.c", 425, 870)),*(int*)come_range_check(&((int*)come_null_check(start_111, "libneo-c-str.c", 425, 871))[0],((int*)come_null_check(start_111, "libneo-c-str.c", 425, 871)),((int*)come_null_check(start_111, "libneo-c-str.c", 425, 871))+(ovec_max_110), "libneo-c-str.c", 425),*(int*)come_range_check(&((int*)come_null_check(end_112, "libneo-c-str.c", 425, 872))[0],((int*)come_null_check(end_112, "libneo-c-str.c", 425, 872)),((int*)come_null_check(end_112, "libneo-c-str.c", 425, 872))+(ovec_max_110), "libneo-c-str.c", 425)))), come_pop_stackframe(), __exception_result_var_b135));
                right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                group_strings_131=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 427, 876),__exception_result_var_b136=((struct list$1charph*)(right_value135=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value134=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 427, "list$1charph"))), "libneo-c-str.c", 427, 874)), "libneo-c-str.c", 427, 875)))))), come_pop_stackframe(), __exception_result_var_b136));
                come_call_finalizer3(right_value134,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value135,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_132=1;                i_132<regex_result_121;                i_132++                ){
                    match_string_133=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 429, 881),__exception_result_var_b137=((char*)(right_value136=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 429, 877)), "libneo-c-str.c", 429, 878)),*(int*)come_range_check(&((int*)come_null_check(start_111, "libneo-c-str.c", 429, 879))[i_132],((int*)come_null_check(start_111, "libneo-c-str.c", 429, 879)),((int*)come_null_check(start_111, "libneo-c-str.c", 429, 879))+(ovec_max_110), "libneo-c-str.c", 429),*(int*)come_range_check(&((int*)come_null_check(end_112, "libneo-c-str.c", 429, 880))[i_132],((int*)come_null_check(end_112, "libneo-c-str.c", 429, 880)),((int*)come_null_check(end_112, "libneo-c-str.c", 429, 880))+(ovec_max_110), "libneo-c-str.c", 429)))), come_pop_stackframe(), __exception_result_var_b137));
                    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 430, 884),__exception_result_var_b138=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_131, "libneo-c-str.c", 430, 882)), "libneo-c-str.c", 430, 883)),(char*)come_increment_ref_count(match_string_133)), come_pop_stackframe(), __exception_result_var_b138);
                    match_string_133 = come_decrement_ref_count2(match_string_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_134=(char*)come_increment_ref_count(((char*)(right_value137=block(parent,str_130,group_strings_131))));
                right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 435, 887),__exception_result_var_b139=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_108, "libneo-c-str.c", 435, 885)), "libneo-c-str.c", 435, 886)),(char*)come_increment_ref_count(str2_134)), come_pop_stackframe(), __exception_result_var_b139);
                if(_if_conditional52=offset_109==*(int*)come_range_check(&((int*)come_null_check(end_112, "libneo-c-str.c", 437, 888))[0],((int*)come_null_check(end_112, "libneo-c-str.c", 437, 888)),((int*)come_null_check(end_112, "libneo-c-str.c", 437, 888))+(ovec_max_110), "libneo-c-str.c", 437),                _if_conditional52) {
                    offset_109++;
                }
                else {
                    offset_109=*(int*)come_range_check(&((int*)come_null_check(end_112, "libneo-c-str.c", 441, 889))[0],((int*)come_null_check(end_112, "libneo-c-str.c", 441, 889)),((int*)come_null_check(end_112, "libneo-c-str.c", 441, 889))+(ovec_max_110), "libneo-c-str.c", 441);
                }
                str_130 = come_decrement_ref_count2(str_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(group_strings_131,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_134 = come_decrement_ref_count2(str2_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result119__ = __result_obj__ = result_108;
    come_call_finalizer3(result_108,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result119__;
    come_call_finalizer3(result_108,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 793)), "./neo-c.h", 101, 794))->head=((void*)0);
        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 795)), "./neo-c.h", 102, 796))->tail=((void*)0);
        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 797)), "./neo-c.h", 103, 798))->len=0;
        __result117__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result117__;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional48;
void* right_value130;
struct list_item$1charph* litem_127;
char* __dec_obj14;
_Bool _if_conditional49;
void* right_value131;
struct list_item$1charph* litem_128;
char* __dec_obj15;
void* right_value132;
struct list_item$1charph* litem_129;
char* __dec_obj16;
struct list$1charph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1charph*));
right_value131 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1charph*));
right_value132 = (void*)0;
memset(&litem_129, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional48=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 222, 822)), "./neo-c.h", 222, 823))->len==0,                _if_conditional48) {
                    litem_127=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value130=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 223, "list_item$1charph"))));
                    come_call_finalizer3(right_value130,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_127, "./neo-c.h", 225, 824)), "./neo-c.h", 225, 825))->prev=((void*)0);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_127, "./neo-c.h", 226, 826)), "./neo-c.h", 226, 827))->next=((void*)0);
                    __dec_obj14=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_127, "./neo-c.h", 227, 828)), "./neo-c.h", 227, 829))->item;
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_127, "./neo-c.h", 227, 828)), "./neo-c.h", 227, 829))->item=(char*)come_increment_ref_count(item);
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 229, 830)), "./neo-c.h", 229, 831))->tail=litem_127;
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 230, 832)), "./neo-c.h", 230, 833))->head=litem_127;
                }
                else {
                    if(_if_conditional49=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 232, 834)), "./neo-c.h", 232, 835))->len==1,                    _if_conditional49) {
                        litem_128=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value131=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 233, "list_item$1charph"))));
                        come_call_finalizer3(right_value131,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_128, "./neo-c.h", 235, 836)), "./neo-c.h", 235, 837))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 235, 838)), "./neo-c.h", 235, 839))->head;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_128, "./neo-c.h", 236, 840)), "./neo-c.h", 236, 841))->next=((void*)0);
                        __dec_obj15=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_128, "./neo-c.h", 237, 842)), "./neo-c.h", 237, 843))->item;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_128, "./neo-c.h", 237, 842)), "./neo-c.h", 237, 843))->item=(char*)come_increment_ref_count(item);
                        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 239, 844)), "./neo-c.h", 239, 845))->tail=litem_128;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 240, 846)), "./neo-c.h", 240, 847))->head, "./neo-c.h", 240, 848)), "./neo-c.h", 240, 849))->next=litem_128;
                    }
                    else {
                        litem_129=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value132=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 243, "list_item$1charph"))));
                        come_call_finalizer3(right_value132,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_129, "./neo-c.h", 245, 850)), "./neo-c.h", 245, 851))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 245, 852)), "./neo-c.h", 245, 853))->tail;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_129, "./neo-c.h", 246, 854)), "./neo-c.h", 246, 855))->next=((void*)0);
                        __dec_obj16=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_129, "./neo-c.h", 247, 856)), "./neo-c.h", 247, 857))->item;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_129, "./neo-c.h", 247, 856)), "./neo-c.h", 247, 857))->item=(char*)come_increment_ref_count(item);
                        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 249, 858)), "./neo-c.h", 249, 859))->tail, "./neo-c.h", 249, 860)), "./neo-c.h", 249, 861))->next=litem_129;
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 250, 862)), "./neo-c.h", 250, 863))->tail=litem_129;
                    }
                }
                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 253, 864)), "./neo-c.h", 253, 865))->len++;
                __result118__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result118__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value138;
void* right_value139;
struct list$1charph* __exception_result_var_b140;
struct list$1charph* result_135;
int offset_136;
int ovec_max_137;
const char* err_141;
int erro_ofs_142;
int options_143;
char* str_144;
struct real_pcre8_or_16* re_145;
int n_146;
_Bool _while_condtional13;
int options_147;
unsigned long int __exception_result_var_b141;
int len_148;
int __exception_result_var_b142;
int regex_result_149;
int i_150;
int i_151;
_Bool _if_conditional53;
void* right_value140;
char* __exception_result_var_b143;
char* str_152;
void* right_value141;
void* right_value142;
struct list$1charph* __exception_result_var_b144;
struct list$1charph* group_strings_153;
void* right_value143;
char* str2_154;
struct list$1charph* __exception_result_var_b145;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value144;
char* __exception_result_var_b146;
char* str_155;
void* right_value145;
void* right_value146;
struct list$1charph* __exception_result_var_b147;
struct list$1charph* group_strings_156;
int i_157;
void* right_value147;
char* __exception_result_var_b148;
char* match_string_158;
struct list$1charph* __exception_result_var_b149;
void* right_value148;
char* str2_159;
struct list$1charph* __exception_result_var_b150;
_Bool _if_conditional57;
_Bool _if_conditional58;
struct list$1charph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&result_135, 0, sizeof(struct list$1charph*));
memset(&offset_136, 0, sizeof(int));
memset(&ovec_max_137, 0, sizeof(int));
memset(&err_141, 0, sizeof(const char*));
memset(&erro_ofs_142, 0, sizeof(int));
memset(&options_143, 0, sizeof(int));
memset(&str_144, 0, sizeof(char*));
memset(&re_145, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_146, 0, sizeof(int));
memset(&options_147, 0, sizeof(int));
memset(&len_148, 0, sizeof(int));
memset(&regex_result_149, 0, sizeof(int));
memset(&i_150, 0, sizeof(int));
memset(&i_151, 0, sizeof(int));
right_value140 = (void*)0;
memset(&str_152, 0, sizeof(char*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&group_strings_153, 0, sizeof(struct list$1charph*));
right_value143 = (void*)0;
memset(&str2_154, 0, sizeof(char*));
right_value144 = (void*)0;
memset(&str_155, 0, sizeof(char*));
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&group_strings_156, 0, sizeof(struct list$1charph*));
memset(&i_157, 0, sizeof(int));
right_value147 = (void*)0;
memset(&match_string_158, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&str2_159, 0, sizeof(char*));
    result_135=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 457, 892),__exception_result_var_b140=((struct list$1charph*)(right_value139=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value138=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 457, "list$1charph"))), "libneo-c-str.c", 457, 890)), "libneo-c-str.c", 457, 891)))))), come_pop_stackframe(), __exception_result_var_b140));
    come_call_finalizer3(right_value138,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_136=0;
    ovec_max_137=16;
    int start_138[ovec_max_137];
    memset(&start_138, 0, sizeof(int)    *(ovec_max_137)    );
    int end_139[ovec_max_137];
    memset(&end_139, 0, sizeof(int)    *(ovec_max_137)    );
    int ovec_value_140[ovec_max_137*3];
    memset(&ovec_value_140, 0, sizeof(int)    *(ovec_max_137*3)    );
    options_143=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 469, 893)), "libneo-c-str.c", 469, 894))->options;
    str_144=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 470, 895)), "libneo-c-str.c", 470, 896))->str;
    re_145=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 472, 897)), "libneo-c-str.c", 472, 898))->re;
    n_146=0;
    while(_while_condtional13=(_Bool)1,    _while_condtional13) {
        options_147=2097152;
        len_148=(come_push_stackframe("libneo-c-str.c", 478, 899),__exception_result_var_b141=strlen(self), come_pop_stackframe(), __exception_result_var_b141);
        regex_result_149=(come_push_stackframe("libneo-c-str.c", 479, 900),__exception_result_var_b142=pcre_exec(re_145,(struct pcre_extra*)0,self,len_148,offset_136,options_147,ovec_value_140,ovec_max_137*3), come_pop_stackframe(), __exception_result_var_b142);
        for(        i_150=0;        i_150<ovec_max_137;        i_150++        ){
            (come_range_check(&((int*)come_null_check(start_138, "libneo-c-str.c", 482, 901))[i_150],((int*)come_null_check(start_138, "libneo-c-str.c", 482, 901)),((int*)come_null_check(start_138, "libneo-c-str.c", 482, 901))+(ovec_max_137), "libneo-c-str.c", 482), ((int*)come_null_check(start_138, "libneo-c-str.c", 482, 901))[i_150]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_140, "libneo-c-str.c", 482, 902))[i_150*2],((int*)come_null_check(ovec_value_140, "libneo-c-str.c", 482, 902)),((int*)come_null_check(ovec_value_140, "libneo-c-str.c", 482, 902))+(ovec_max_137*3), "libneo-c-str.c", 482));
        }
        for(        i_151=0;        i_151<ovec_max_137;        i_151++        ){
            (come_range_check(&((int*)come_null_check(end_139, "libneo-c-str.c", 485, 903))[i_151],((int*)come_null_check(end_139, "libneo-c-str.c", 485, 903)),((int*)come_null_check(end_139, "libneo-c-str.c", 485, 903))+(ovec_max_137), "libneo-c-str.c", 485), ((int*)come_null_check(end_139, "libneo-c-str.c", 485, 903))[i_151]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_140, "libneo-c-str.c", 485, 904))[i_151*2+1],((int*)come_null_check(ovec_value_140, "libneo-c-str.c", 485, 904)),((int*)come_null_check(ovec_value_140, "libneo-c-str.c", 485, 904))+(ovec_max_137*3), "libneo-c-str.c", 485));
        }
        if(_if_conditional53=regex_result_149==1,        _if_conditional53) {
            str_152=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 491, 909),__exception_result_var_b143=((char*)(right_value140=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 491, 905)), "libneo-c-str.c", 491, 906)),*(int*)come_range_check(&((int*)come_null_check(start_138, "libneo-c-str.c", 491, 907))[0],((int*)come_null_check(start_138, "libneo-c-str.c", 491, 907)),((int*)come_null_check(start_138, "libneo-c-str.c", 491, 907))+(ovec_max_137), "libneo-c-str.c", 491),*(int*)come_range_check(&((int*)come_null_check(end_139, "libneo-c-str.c", 491, 908))[0],((int*)come_null_check(end_139, "libneo-c-str.c", 491, 908)),((int*)come_null_check(end_139, "libneo-c-str.c", 491, 908))+(ovec_max_137), "libneo-c-str.c", 491)))), come_pop_stackframe(), __exception_result_var_b143));
            right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            group_strings_153=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 493, 912),__exception_result_var_b144=((struct list$1charph*)(right_value142=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value141=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 493, "list$1charph"))), "libneo-c-str.c", 493, 910)), "libneo-c-str.c", 493, 911)))))), come_pop_stackframe(), __exception_result_var_b144));
            come_call_finalizer3(right_value141,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value142,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_154=(char*)come_increment_ref_count(((char*)(right_value143=block(parent,str_152,group_strings_153))));
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 497, 915),__exception_result_var_b145=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_135, "libneo-c-str.c", 497, 913)), "libneo-c-str.c", 497, 914)),(char*)come_increment_ref_count(str2_154)), come_pop_stackframe(), __exception_result_var_b145);
            if(_if_conditional54=offset_136==*(int*)come_range_check(&((int*)come_null_check(end_139, "libneo-c-str.c", 499, 916))[0],((int*)come_null_check(end_139, "libneo-c-str.c", 499, 916)),((int*)come_null_check(end_139, "libneo-c-str.c", 499, 916))+(ovec_max_137), "libneo-c-str.c", 499),            _if_conditional54) {
                offset_136++;
            }
            else {
                offset_136=*(int*)come_range_check(&((int*)come_null_check(end_139, "libneo-c-str.c", 503, 917))[0],((int*)come_null_check(end_139, "libneo-c-str.c", 503, 917)),((int*)come_null_check(end_139, "libneo-c-str.c", 503, 917))+(ovec_max_137), "libneo-c-str.c", 503);
            }
            n_146++;
            if(_if_conditional55=n_146==count,            _if_conditional55) {
                str_152 = come_decrement_ref_count2(str_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(group_strings_153,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_154 = come_decrement_ref_count2(str2_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            str_152 = come_decrement_ref_count2(str_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(group_strings_153,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_154 = come_decrement_ref_count2(str2_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional56=regex_result_149>1,            _if_conditional56) {
                str_155=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 513, 922),__exception_result_var_b146=((char*)(right_value144=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 513, 918)), "libneo-c-str.c", 513, 919)),*(int*)come_range_check(&((int*)come_null_check(start_138, "libneo-c-str.c", 513, 920))[0],((int*)come_null_check(start_138, "libneo-c-str.c", 513, 920)),((int*)come_null_check(start_138, "libneo-c-str.c", 513, 920))+(ovec_max_137), "libneo-c-str.c", 513),*(int*)come_range_check(&((int*)come_null_check(end_139, "libneo-c-str.c", 513, 921))[0],((int*)come_null_check(end_139, "libneo-c-str.c", 513, 921)),((int*)come_null_check(end_139, "libneo-c-str.c", 513, 921))+(ovec_max_137), "libneo-c-str.c", 513)))), come_pop_stackframe(), __exception_result_var_b146));
                right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                group_strings_156=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 515, 925),__exception_result_var_b147=((struct list$1charph*)(right_value146=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value145=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 515, "list$1charph"))), "libneo-c-str.c", 515, 923)), "libneo-c-str.c", 515, 924)))))), come_pop_stackframe(), __exception_result_var_b147));
                come_call_finalizer3(right_value145,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value146,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_157=1;                i_157<regex_result_149;                i_157++                ){
                    match_string_158=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 517, 930),__exception_result_var_b148=((char*)(right_value147=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 517, 926)), "libneo-c-str.c", 517, 927)),*(int*)come_range_check(&((int*)come_null_check(start_138, "libneo-c-str.c", 517, 928))[i_157],((int*)come_null_check(start_138, "libneo-c-str.c", 517, 928)),((int*)come_null_check(start_138, "libneo-c-str.c", 517, 928))+(ovec_max_137), "libneo-c-str.c", 517),*(int*)come_range_check(&((int*)come_null_check(end_139, "libneo-c-str.c", 517, 929))[i_157],((int*)come_null_check(end_139, "libneo-c-str.c", 517, 929)),((int*)come_null_check(end_139, "libneo-c-str.c", 517, 929))+(ovec_max_137), "libneo-c-str.c", 517)))), come_pop_stackframe(), __exception_result_var_b148));
                    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 518, 933),__exception_result_var_b149=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_156, "libneo-c-str.c", 518, 931)), "libneo-c-str.c", 518, 932)),(char*)come_increment_ref_count(match_string_158)), come_pop_stackframe(), __exception_result_var_b149);
                    match_string_158 = come_decrement_ref_count2(match_string_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_159=(char*)come_increment_ref_count(((char*)(right_value148=block(parent,str_155,group_strings_156))));
                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 523, 936),__exception_result_var_b150=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_135, "libneo-c-str.c", 523, 934)), "libneo-c-str.c", 523, 935)),(char*)come_increment_ref_count(str2_159)), come_pop_stackframe(), __exception_result_var_b150);
                if(_if_conditional57=offset_136==*(int*)come_range_check(&((int*)come_null_check(end_139, "libneo-c-str.c", 525, 937))[0],((int*)come_null_check(end_139, "libneo-c-str.c", 525, 937)),((int*)come_null_check(end_139, "libneo-c-str.c", 525, 937))+(ovec_max_137), "libneo-c-str.c", 525),                _if_conditional57) {
                    offset_136++;
                }
                else {
                    offset_136=*(int*)come_range_check(&((int*)come_null_check(end_139, "libneo-c-str.c", 529, 938))[0],((int*)come_null_check(end_139, "libneo-c-str.c", 529, 938)),((int*)come_null_check(end_139, "libneo-c-str.c", 529, 938))+(ovec_max_137), "libneo-c-str.c", 529);
                }
                n_146++;
                if(_if_conditional58=n_146==count,                _if_conditional58) {
                    str_155 = come_decrement_ref_count2(str_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(group_strings_156,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    str2_159 = come_decrement_ref_count2(str2_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                str_155 = come_decrement_ref_count2(str_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(group_strings_156,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_159 = come_decrement_ref_count2(str2_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result120__ = __result_obj__ = result_135;
    come_call_finalizer3(result_135,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result120__;
    come_call_finalizer3(result_135,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_160;
int erro_ofs_161;
int options_162;
char* str_163;
struct real_pcre8_or_16* re_164;
void* right_value149;
void* right_value150;
struct list$1charph* __exception_result_var_b151;
struct list$1charph* result_165;
int offset_166;
int ovec_max_167;
_Bool _while_condtional14;
int options_171;
unsigned long int __exception_result_var_b152;
int len_172;
int __exception_result_var_b153;
int regex_result_173;
int i_174;
int i_175;
_Bool _if_conditional59;
void* right_value151;
char* __exception_result_var_b154;
char* str_176;
void* right_value152;
void* right_value153;
struct list$1charph* __exception_result_var_b155;
struct list$1charph* match_strings_177;
void* right_value154;
char* str2_178;
struct list$1charph* __exception_result_var_b156;
_Bool _if_conditional60;
_Bool _if_conditional61;
void* right_value155;
char* __exception_result_var_b157;
char* str_179;
_Bool _if_conditional62;
void* right_value156;
void* right_value157;
struct list$1charph* __exception_result_var_b158;
struct list$1charph* match_strings_180;
int i_181;
void* right_value158;
char* __exception_result_var_b159;
char* match_str_182;
struct list$1charph* __exception_result_var_b160;
void* right_value159;
char* str2_183;
struct list$1charph* __exception_result_var_b161;
int __exception_result_var_b162;
_Bool _if_conditional63;
void* right_value160;
char* __exception_result_var_b163;
char* str_184;
void* right_value161;
void* right_value162;
struct list$1charph* __exception_result_var_b164;
struct list$1charph* match_strings_185;
void* right_value163;
char* str2_186;
struct list$1charph* __exception_result_var_b165;
struct list$1charph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_160, 0, sizeof(const char*));
memset(&erro_ofs_161, 0, sizeof(int));
memset(&options_162, 0, sizeof(int));
memset(&str_163, 0, sizeof(char*));
memset(&re_164, 0, sizeof(struct real_pcre8_or_16*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&result_165, 0, sizeof(struct list$1charph*));
memset(&offset_166, 0, sizeof(int));
memset(&ovec_max_167, 0, sizeof(int));
memset(&options_171, 0, sizeof(int));
memset(&len_172, 0, sizeof(int));
memset(&regex_result_173, 0, sizeof(int));
memset(&i_174, 0, sizeof(int));
memset(&i_175, 0, sizeof(int));
right_value151 = (void*)0;
memset(&str_176, 0, sizeof(char*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&match_strings_177, 0, sizeof(struct list$1charph*));
right_value154 = (void*)0;
memset(&str2_178, 0, sizeof(char*));
right_value155 = (void*)0;
memset(&str_179, 0, sizeof(char*));
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&match_strings_180, 0, sizeof(struct list$1charph*));
memset(&i_181, 0, sizeof(int));
right_value158 = (void*)0;
memset(&match_str_182, 0, sizeof(char*));
right_value159 = (void*)0;
memset(&str2_183, 0, sizeof(char*));
right_value160 = (void*)0;
memset(&str_184, 0, sizeof(char*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&match_strings_185, 0, sizeof(struct list$1charph*));
right_value163 = (void*)0;
memset(&str2_186, 0, sizeof(char*));
    options_162=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 552, 939)), "libneo-c-str.c", 552, 940))->options;
    str_163=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 553, 941)), "libneo-c-str.c", 553, 942))->str;
    re_164=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 555, 943)), "libneo-c-str.c", 555, 944))->re;
    result_165=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 557, 947),__exception_result_var_b151=((struct list$1charph*)(right_value150=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value149=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 557, "list$1charph"))), "libneo-c-str.c", 557, 945)), "libneo-c-str.c", 557, 946)))))), come_pop_stackframe(), __exception_result_var_b151));
    come_call_finalizer3(right_value149,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value150,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_166=0;
    ovec_max_167=16;
    int start_168[ovec_max_167];
    memset(&start_168, 0, sizeof(int)    *(ovec_max_167)    );
    int end_169[ovec_max_167];
    memset(&end_169, 0, sizeof(int)    *(ovec_max_167)    );
    int ovec_value_170[ovec_max_167*3];
    memset(&ovec_value_170, 0, sizeof(int)    *(ovec_max_167*3)    );
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        options_171=2097152;
        len_172=(come_push_stackframe("libneo-c-str.c", 568, 948),__exception_result_var_b152=strlen(self), come_pop_stackframe(), __exception_result_var_b152);
        regex_result_173=(come_push_stackframe("libneo-c-str.c", 570, 949),__exception_result_var_b153=pcre_exec(re_164,(struct pcre_extra*)0,self,len_172,offset_166,options_171,ovec_value_170,ovec_max_167*3), come_pop_stackframe(), __exception_result_var_b153);
        for(        i_174=0;        i_174<ovec_max_167;        i_174++        ){
            (come_range_check(&((int*)come_null_check(start_168, "libneo-c-str.c", 573, 950))[i_174],((int*)come_null_check(start_168, "libneo-c-str.c", 573, 950)),((int*)come_null_check(start_168, "libneo-c-str.c", 573, 950))+(ovec_max_167), "libneo-c-str.c", 573), ((int*)come_null_check(start_168, "libneo-c-str.c", 573, 950))[i_174]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_170, "libneo-c-str.c", 573, 951))[i_174*2],((int*)come_null_check(ovec_value_170, "libneo-c-str.c", 573, 951)),((int*)come_null_check(ovec_value_170, "libneo-c-str.c", 573, 951))+(ovec_max_167*3), "libneo-c-str.c", 573));
        }
        for(        i_175=0;        i_175<ovec_max_167;        i_175++        ){
            (come_range_check(&((int*)come_null_check(end_169, "libneo-c-str.c", 576, 952))[i_175],((int*)come_null_check(end_169, "libneo-c-str.c", 576, 952)),((int*)come_null_check(end_169, "libneo-c-str.c", 576, 952))+(ovec_max_167), "libneo-c-str.c", 576), ((int*)come_null_check(end_169, "libneo-c-str.c", 576, 952))[i_175]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_170, "libneo-c-str.c", 576, 953))[i_175*2+1],((int*)come_null_check(ovec_value_170, "libneo-c-str.c", 576, 953)),((int*)come_null_check(ovec_value_170, "libneo-c-str.c", 576, 953))+(ovec_max_167*3), "libneo-c-str.c", 576));
        }
        if(_if_conditional59=regex_result_173==1,        _if_conditional59) {
            str_176=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 582, 957),__exception_result_var_b154=((char*)(right_value151=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 582, 954)), "libneo-c-str.c", 582, 955)),offset_166,*(int*)come_range_check(&((int*)come_null_check(start_168, "libneo-c-str.c", 582, 956))[0],((int*)come_null_check(start_168, "libneo-c-str.c", 582, 956)),((int*)come_null_check(start_168, "libneo-c-str.c", 582, 956))+(ovec_max_167), "libneo-c-str.c", 582)))), come_pop_stackframe(), __exception_result_var_b154));
            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_strings_177=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 584, 960),__exception_result_var_b155=((struct list$1charph*)(right_value153=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value152=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 584, "list$1charph"))), "libneo-c-str.c", 584, 958)), "libneo-c-str.c", 584, 959)))))), come_pop_stackframe(), __exception_result_var_b155));
            come_call_finalizer3(right_value152,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value153,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_178=(char*)come_increment_ref_count(((char*)(right_value154=block(parent,str_176,match_strings_177))));
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 587, 963),__exception_result_var_b156=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_165, "libneo-c-str.c", 587, 961)), "libneo-c-str.c", 587, 962)),(char*)come_increment_ref_count(str2_178)), come_pop_stackframe(), __exception_result_var_b156);
            if(_if_conditional60=offset_166==*(int*)come_range_check(&((int*)come_null_check(end_169, "libneo-c-str.c", 589, 964))[0],((int*)come_null_check(end_169, "libneo-c-str.c", 589, 964)),((int*)come_null_check(end_169, "libneo-c-str.c", 589, 964))+(ovec_max_167), "libneo-c-str.c", 589),            _if_conditional60) {
                offset_166++;
            }
            else {
                offset_166=*(int*)come_range_check(&((int*)come_null_check(end_169, "libneo-c-str.c", 593, 965))[0],((int*)come_null_check(end_169, "libneo-c-str.c", 593, 965)),((int*)come_null_check(end_169, "libneo-c-str.c", 593, 965))+(ovec_max_167), "libneo-c-str.c", 593);
            }
            str_176 = come_decrement_ref_count2(str_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(match_strings_177,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_178 = come_decrement_ref_count2(str2_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional61=regex_result_173>1,            _if_conditional61) {
                str_179=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 598, 969),__exception_result_var_b157=((char*)(right_value155=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 598, 966)), "libneo-c-str.c", 598, 967)),offset_166,*(int*)come_range_check(&((int*)come_null_check(start_168, "libneo-c-str.c", 598, 968))[0],((int*)come_null_check(start_168, "libneo-c-str.c", 598, 968)),((int*)come_null_check(start_168, "libneo-c-str.c", 598, 968))+(ovec_max_167), "libneo-c-str.c", 598)))), come_pop_stackframe(), __exception_result_var_b157));
                right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional62=offset_166==*(int*)come_range_check(&((int*)come_null_check(end_169, "libneo-c-str.c", 600, 970))[0],((int*)come_null_check(end_169, "libneo-c-str.c", 600, 970)),((int*)come_null_check(end_169, "libneo-c-str.c", 600, 970))+(ovec_max_167), "libneo-c-str.c", 600),                _if_conditional62) {
                    offset_166++;
                }
                else {
                    offset_166=*(int*)come_range_check(&((int*)come_null_check(end_169, "libneo-c-str.c", 604, 971))[0],((int*)come_null_check(end_169, "libneo-c-str.c", 604, 971)),((int*)come_null_check(end_169, "libneo-c-str.c", 604, 971))+(ovec_max_167), "libneo-c-str.c", 604);
                }
                match_strings_180=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 607, 974),__exception_result_var_b158=((struct list$1charph*)(right_value157=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value156=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 607, "list$1charph"))), "libneo-c-str.c", 607, 972)), "libneo-c-str.c", 607, 973)))))), come_pop_stackframe(), __exception_result_var_b158));
                come_call_finalizer3(right_value156,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value157,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_181=1;                i_181<regex_result_173;                i_181++                ){
                    match_str_182=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 609, 979),__exception_result_var_b159=((char*)(right_value158=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 609, 975)), "libneo-c-str.c", 609, 976)),*(int*)come_range_check(&((int*)come_null_check(start_168, "libneo-c-str.c", 609, 977))[i_181],((int*)come_null_check(start_168, "libneo-c-str.c", 609, 977)),((int*)come_null_check(start_168, "libneo-c-str.c", 609, 977))+(ovec_max_167), "libneo-c-str.c", 609),*(int*)come_range_check(&((int*)come_null_check(end_169, "libneo-c-str.c", 609, 978))[i_181],((int*)come_null_check(end_169, "libneo-c-str.c", 609, 978)),((int*)come_null_check(end_169, "libneo-c-str.c", 609, 978))+(ovec_max_167), "libneo-c-str.c", 609)))), come_pop_stackframe(), __exception_result_var_b159));
                    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 610, 982),__exception_result_var_b160=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(match_strings_180, "libneo-c-str.c", 610, 980)), "libneo-c-str.c", 610, 981)),(char*)come_increment_ref_count(match_str_182)), come_pop_stackframe(), __exception_result_var_b160);
                    match_str_182 = come_decrement_ref_count2(match_str_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_183=(char*)come_increment_ref_count(((char*)(right_value159=block(parent,str_179,match_strings_180))));
                right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 615, 985),__exception_result_var_b161=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_165, "libneo-c-str.c", 615, 983)), "libneo-c-str.c", 615, 984)),(char*)come_increment_ref_count(str2_183)), come_pop_stackframe(), __exception_result_var_b161);
                str_179 = come_decrement_ref_count2(str_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(match_strings_180,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_183 = come_decrement_ref_count2(str2_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional63=offset_166<(come_push_stackframe("libneo-c-str.c", 624, 988),__exception_result_var_b162=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 624, 986)), "libneo-c-str.c", 624, 987))), come_pop_stackframe(), __exception_result_var_b162),    _if_conditional63) {
        str_184=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 625, 991),__exception_result_var_b163=((char*)(right_value160=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 625, 989)), "libneo-c-str.c", 625, 990)),offset_166,-1))), come_pop_stackframe(), __exception_result_var_b163));
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        match_strings_185=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 626, 994),__exception_result_var_b164=((struct list$1charph*)(right_value162=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value161=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 626, "list$1charph"))), "libneo-c-str.c", 626, 992)), "libneo-c-str.c", 626, 993)))))), come_pop_stackframe(), __exception_result_var_b164));
        come_call_finalizer3(right_value161,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value162,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        str2_186=(char*)come_increment_ref_count(((char*)(right_value163=block(parent,str_184,match_strings_185))));
        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c-str.c", 628, 997),__exception_result_var_b165=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_165, "libneo-c-str.c", 628, 995)), "libneo-c-str.c", 628, 996)),(char*)come_increment_ref_count(str2_186)), come_pop_stackframe(), __exception_result_var_b165);
        str_184 = come_decrement_ref_count2(str_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(match_strings_185,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        str2_186 = come_decrement_ref_count2(str2_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result121__ = __result_obj__ = result_165;
    come_call_finalizer3(result_165,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result121__;
    come_call_finalizer3(result_165,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_187;
int erro_ofs_188;
int options_189;
char* str_190;
struct real_pcre8_or_16* re_191;
void* right_value164;
void* right_value165;
struct list$1charph* __exception_result_var_b166;
struct list$1charph* result_192;
int offset_193;
int ovec_max_194;
int n_198;
_Bool _while_condtional15;
int options_199;
unsigned long int __exception_result_var_b167;
int len_200;
int __exception_result_var_b168;
int regex_result_201;
int i_202;
int i_203;
_Bool _if_conditional64;
void* right_value166;
char* __exception_result_var_b169;
char* str_204;
void* right_value167;
void* right_value168;
struct list$1charph* __exception_result_var_b170;
struct list$1charph* match_strings_205;
void* right_value169;
char* str2_206;
struct list$1charph* __exception_result_var_b171;
_Bool _if_conditional65;
_Bool _if_conditional66;
void* right_value170;
char* __exception_result_var_b172;
char* str_207;
_Bool _if_conditional67;
void* right_value171;
void* right_value172;
struct list$1charph* __exception_result_var_b173;
struct list$1charph* match_strings_208;
int i_209;
void* right_value173;
char* __exception_result_var_b174;
char* match_str_210;
struct list$1charph* __exception_result_var_b175;
void* right_value174;
char* str2_211;
struct list$1charph* __exception_result_var_b176;
_Bool _if_conditional68;
struct list$1charph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_187, 0, sizeof(const char*));
memset(&erro_ofs_188, 0, sizeof(int));
memset(&options_189, 0, sizeof(int));
memset(&str_190, 0, sizeof(char*));
memset(&re_191, 0, sizeof(struct real_pcre8_or_16*));
right_value164 = (void*)0;
right_value165 = (void*)0;
memset(&result_192, 0, sizeof(struct list$1charph*));
memset(&offset_193, 0, sizeof(int));
memset(&ovec_max_194, 0, sizeof(int));
memset(&n_198, 0, sizeof(int));
memset(&options_199, 0, sizeof(int));
memset(&len_200, 0, sizeof(int));
memset(&regex_result_201, 0, sizeof(int));
memset(&i_202, 0, sizeof(int));
memset(&i_203, 0, sizeof(int));
right_value166 = (void*)0;
memset(&str_204, 0, sizeof(char*));
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&match_strings_205, 0, sizeof(struct list$1charph*));
right_value169 = (void*)0;
memset(&str2_206, 0, sizeof(char*));
right_value170 = (void*)0;
memset(&str_207, 0, sizeof(char*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&match_strings_208, 0, sizeof(struct list$1charph*));
memset(&i_209, 0, sizeof(int));
right_value173 = (void*)0;
memset(&match_str_210, 0, sizeof(char*));
right_value174 = (void*)0;
memset(&str2_211, 0, sizeof(char*));
    options_189=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 639, 998)), "libneo-c-str.c", 639, 999))->options;
    str_190=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 640, 1000)), "libneo-c-str.c", 640, 1001))->str;
    re_191=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 642, 1002)), "libneo-c-str.c", 642, 1003))->re;
    result_192=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 644, 1006),__exception_result_var_b166=((struct list$1charph*)(right_value165=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value164=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 644, "list$1charph"))), "libneo-c-str.c", 644, 1004)), "libneo-c-str.c", 644, 1005)))))), come_pop_stackframe(), __exception_result_var_b166));
    come_call_finalizer3(right_value164,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value165,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_193=0;
    ovec_max_194=16;
    int start_195[ovec_max_194];
    memset(&start_195, 0, sizeof(int)    *(ovec_max_194)    );
    int end_196[ovec_max_194];
    memset(&end_196, 0, sizeof(int)    *(ovec_max_194)    );
    int ovec_value_197[ovec_max_194*3];
    memset(&ovec_value_197, 0, sizeof(int)    *(ovec_max_194*3)    );
    n_198=0;
    while(_while_condtional15=(_Bool)1,    _while_condtional15) {
        options_199=2097152;
        len_200=(come_push_stackframe("libneo-c-str.c", 657, 1007),__exception_result_var_b167=strlen(self), come_pop_stackframe(), __exception_result_var_b167);
        regex_result_201=(come_push_stackframe("libneo-c-str.c", 659, 1008),__exception_result_var_b168=pcre_exec(re_191,(struct pcre_extra*)0,self,len_200,offset_193,options_199,ovec_value_197,ovec_max_194*3), come_pop_stackframe(), __exception_result_var_b168);
        for(        i_202=0;        i_202<ovec_max_194;        i_202++        ){
            (come_range_check(&((int*)come_null_check(start_195, "libneo-c-str.c", 662, 1009))[i_202],((int*)come_null_check(start_195, "libneo-c-str.c", 662, 1009)),((int*)come_null_check(start_195, "libneo-c-str.c", 662, 1009))+(ovec_max_194), "libneo-c-str.c", 662), ((int*)come_null_check(start_195, "libneo-c-str.c", 662, 1009))[i_202]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_197, "libneo-c-str.c", 662, 1010))[i_202*2],((int*)come_null_check(ovec_value_197, "libneo-c-str.c", 662, 1010)),((int*)come_null_check(ovec_value_197, "libneo-c-str.c", 662, 1010))+(ovec_max_194*3), "libneo-c-str.c", 662));
        }
        for(        i_203=0;        i_203<ovec_max_194;        i_203++        ){
            (come_range_check(&((int*)come_null_check(end_196, "libneo-c-str.c", 665, 1011))[i_203],((int*)come_null_check(end_196, "libneo-c-str.c", 665, 1011)),((int*)come_null_check(end_196, "libneo-c-str.c", 665, 1011))+(ovec_max_194), "libneo-c-str.c", 665), ((int*)come_null_check(end_196, "libneo-c-str.c", 665, 1011))[i_203]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_197, "libneo-c-str.c", 665, 1012))[i_203*2+1],((int*)come_null_check(ovec_value_197, "libneo-c-str.c", 665, 1012)),((int*)come_null_check(ovec_value_197, "libneo-c-str.c", 665, 1012))+(ovec_max_194*3), "libneo-c-str.c", 665));
        }
        if(_if_conditional64=regex_result_201==1,        _if_conditional64) {
            str_204=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 671, 1016),__exception_result_var_b169=((char*)(right_value166=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 671, 1013)), "libneo-c-str.c", 671, 1014)),offset_193,*(int*)come_range_check(&((int*)come_null_check(start_195, "libneo-c-str.c", 671, 1015))[0],((int*)come_null_check(start_195, "libneo-c-str.c", 671, 1015)),((int*)come_null_check(start_195, "libneo-c-str.c", 671, 1015))+(ovec_max_194), "libneo-c-str.c", 671)))), come_pop_stackframe(), __exception_result_var_b169));
            right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_strings_205=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 673, 1019),__exception_result_var_b170=((struct list$1charph*)(right_value168=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value167=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 673, "list$1charph"))), "libneo-c-str.c", 673, 1017)), "libneo-c-str.c", 673, 1018)))))), come_pop_stackframe(), __exception_result_var_b170));
            come_call_finalizer3(right_value167,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value168,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_206=(char*)come_increment_ref_count(((char*)(right_value169=block(parent,str_204,match_strings_205))));
            right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 676, 1022),__exception_result_var_b171=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_192, "libneo-c-str.c", 676, 1020)), "libneo-c-str.c", 676, 1021)),(char*)come_increment_ref_count(str2_206)), come_pop_stackframe(), __exception_result_var_b171);
            if(_if_conditional65=offset_193==*(int*)come_range_check(&((int*)come_null_check(end_196, "libneo-c-str.c", 678, 1023))[0],((int*)come_null_check(end_196, "libneo-c-str.c", 678, 1023)),((int*)come_null_check(end_196, "libneo-c-str.c", 678, 1023))+(ovec_max_194), "libneo-c-str.c", 678),            _if_conditional65) {
                offset_193++;
            }
            else {
                offset_193=*(int*)come_range_check(&((int*)come_null_check(end_196, "libneo-c-str.c", 682, 1024))[0],((int*)come_null_check(end_196, "libneo-c-str.c", 682, 1024)),((int*)come_null_check(end_196, "libneo-c-str.c", 682, 1024))+(ovec_max_194), "libneo-c-str.c", 682);
            }
            str_204 = come_decrement_ref_count2(str_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(match_strings_205,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_206 = come_decrement_ref_count2(str2_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional66=regex_result_201>1,            _if_conditional66) {
                str_207=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 687, 1028),__exception_result_var_b172=((char*)(right_value170=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 687, 1025)), "libneo-c-str.c", 687, 1026)),offset_193,*(int*)come_range_check(&((int*)come_null_check(start_195, "libneo-c-str.c", 687, 1027))[0],((int*)come_null_check(start_195, "libneo-c-str.c", 687, 1027)),((int*)come_null_check(start_195, "libneo-c-str.c", 687, 1027))+(ovec_max_194), "libneo-c-str.c", 687)))), come_pop_stackframe(), __exception_result_var_b172));
                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional67=offset_193==*(int*)come_range_check(&((int*)come_null_check(end_196, "libneo-c-str.c", 689, 1029))[0],((int*)come_null_check(end_196, "libneo-c-str.c", 689, 1029)),((int*)come_null_check(end_196, "libneo-c-str.c", 689, 1029))+(ovec_max_194), "libneo-c-str.c", 689),                _if_conditional67) {
                    offset_193++;
                }
                else {
                    offset_193=*(int*)come_range_check(&((int*)come_null_check(end_196, "libneo-c-str.c", 693, 1030))[0],((int*)come_null_check(end_196, "libneo-c-str.c", 693, 1030)),((int*)come_null_check(end_196, "libneo-c-str.c", 693, 1030))+(ovec_max_194), "libneo-c-str.c", 693);
                }
                match_strings_208=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 696, 1033),__exception_result_var_b173=((struct list$1charph*)(right_value172=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value171=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 696, "list$1charph"))), "libneo-c-str.c", 696, 1031)), "libneo-c-str.c", 696, 1032)))))), come_pop_stackframe(), __exception_result_var_b173));
                come_call_finalizer3(right_value171,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value172,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_209=1;                i_209<regex_result_201;                i_209++                ){
                    match_str_210=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 698, 1038),__exception_result_var_b174=((char*)(right_value173=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 698, 1034)), "libneo-c-str.c", 698, 1035)),*(int*)come_range_check(&((int*)come_null_check(start_195, "libneo-c-str.c", 698, 1036))[i_209],((int*)come_null_check(start_195, "libneo-c-str.c", 698, 1036)),((int*)come_null_check(start_195, "libneo-c-str.c", 698, 1036))+(ovec_max_194), "libneo-c-str.c", 698),*(int*)come_range_check(&((int*)come_null_check(end_196, "libneo-c-str.c", 698, 1037))[i_209],((int*)come_null_check(end_196, "libneo-c-str.c", 698, 1037)),((int*)come_null_check(end_196, "libneo-c-str.c", 698, 1037))+(ovec_max_194), "libneo-c-str.c", 698)))), come_pop_stackframe(), __exception_result_var_b174));
                    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 699, 1041),__exception_result_var_b175=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(match_strings_208, "libneo-c-str.c", 699, 1039)), "libneo-c-str.c", 699, 1040)),(char*)come_increment_ref_count(match_str_210)), come_pop_stackframe(), __exception_result_var_b175);
                    match_str_210 = come_decrement_ref_count2(match_str_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_211=(char*)come_increment_ref_count(((char*)(right_value174=block(parent,str_207,match_strings_208))));
                right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 704, 1044),__exception_result_var_b176=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_192, "libneo-c-str.c", 704, 1042)), "libneo-c-str.c", 704, 1043)),(char*)come_increment_ref_count(str2_211)), come_pop_stackframe(), __exception_result_var_b176);
                str_207 = come_decrement_ref_count2(str_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(match_strings_208,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_211 = come_decrement_ref_count2(str2_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
        n_198++;
        if(_if_conditional68=n_198==count,        _if_conditional68) {
            break;
        }
    }
    __result122__ = __result_obj__ = result_192;
    come_call_finalizer3(result_192,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result122__;
    come_call_finalizer3(result_192,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
int __exception_result_var_b177;
_Bool _if_conditional69;
_Bool __result123__;
_Bool _if_conditional70;
_Bool __result124__;
_Bool _if_conditional71;
_Bool __result125__;
_Bool _if_conditional72;
_Bool __result126__;
_Bool _if_conditional73;
_Bool __result127__;
_Bool _if_conditional74;
_Bool __result128__;
_Bool _if_conditional75;
_Bool __result129__;
_Bool _if_conditional76;
_Bool __result130__;
_Bool _if_conditional77;
_Bool __result131__;
_Bool _if_conditional78;
_Bool __result132__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional69=(come_push_stackframe("libneo-c-str.c", 723, 1049),__exception_result_var_b177=strcmp(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 723, 1045)), "libneo-c-str.c", 723, 1046))->str,((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str.c", 723, 1047)), "libneo-c-str.c", 723, 1048))->str), come_pop_stackframe(), __exception_result_var_b177)!=0,    _if_conditional69) {
        __result123__ = (_Bool)0;
        return __result123__;
    }
    if(_if_conditional70=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 727, 1050)), "libneo-c-str.c", 727, 1051))->ignore_case!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str.c", 727, 1052)), "libneo-c-str.c", 727, 1053))->ignore_case,    _if_conditional70) {
        __result124__ = (_Bool)0;
        return __result124__;
    }
    if(_if_conditional71=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 730, 1054)), "libneo-c-str.c", 730, 1055))->multiline!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str.c", 730, 1056)), "libneo-c-str.c", 730, 1057))->multiline,    _if_conditional71) {
        __result125__ = (_Bool)0;
        return __result125__;
    }
    if(_if_conditional72=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 733, 1058)), "libneo-c-str.c", 733, 1059))->global!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str.c", 733, 1060)), "libneo-c-str.c", 733, 1061))->global,    _if_conditional72) {
        __result126__ = (_Bool)0;
        return __result126__;
    }
    if(_if_conditional73=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 736, 1062)), "libneo-c-str.c", 736, 1063))->extended!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str.c", 736, 1064)), "libneo-c-str.c", 736, 1065))->extended,    _if_conditional73) {
        __result127__ = (_Bool)0;
        return __result127__;
    }
    if(_if_conditional74=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 739, 1066)), "libneo-c-str.c", 739, 1067))->dotall!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str.c", 739, 1068)), "libneo-c-str.c", 739, 1069))->dotall,    _if_conditional74) {
        __result128__ = (_Bool)0;
        return __result128__;
    }
    if(_if_conditional75=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 742, 1070)), "libneo-c-str.c", 742, 1071))->anchored!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str.c", 742, 1072)), "libneo-c-str.c", 742, 1073))->anchored,    _if_conditional75) {
        __result129__ = (_Bool)0;
        return __result129__;
    }
    if(_if_conditional76=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 745, 1074)), "libneo-c-str.c", 745, 1075))->dollar_endonly!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str.c", 745, 1076)), "libneo-c-str.c", 745, 1077))->dollar_endonly,    _if_conditional76) {
        __result130__ = (_Bool)0;
        return __result130__;
    }
    if(_if_conditional77=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 748, 1078)), "libneo-c-str.c", 748, 1079))->ungreedy!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str.c", 748, 1080)), "libneo-c-str.c", 748, 1081))->ungreedy,    _if_conditional77) {
        __result131__ = (_Bool)0;
        return __result131__;
    }
    if(_if_conditional78=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 751, 1082)), "libneo-c-str.c", 751, 1083))->options!=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(right, "libneo-c-str.c", 751, 1084)), "libneo-c-str.c", 751, 1085))->options,    _if_conditional78) {
        __result132__ = (_Bool)0;
        return __result132__;
    }
    __result133__ = (_Bool)1;
    return __result133__;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
void* right_value175;
void* right_value176;
struct list$1charph* __exception_result_var_b178;
struct list$1charph* result_212;
int offset_213;
int ovec_max_214;
const char* err_218;
int erro_ofs_219;
int options_220;
char* str_221;
struct real_pcre8_or_16* re_222;
_Bool _while_condtional16;
int options_223;
unsigned long int __exception_result_var_b179;
int len_224;
int __exception_result_var_b180;
int regex_result_225;
int i_226;
int i_227;
_Bool _if_conditional79;
void* right_value177;
char* __exception_result_var_b181;
char* str_228;
struct list$1charph* __exception_result_var_b182;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value178;
char* __exception_result_var_b183;
char* str_229;
struct list$1charph* __exception_result_var_b184;
_Bool _if_conditional82;
int i_230;
void* right_value179;
char* __exception_result_var_b185;
char* match_string_231;
struct list$1charph* __exception_result_var_b186;
struct list$1charph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&result_212, 0, sizeof(struct list$1charph*));
memset(&offset_213, 0, sizeof(int));
memset(&ovec_max_214, 0, sizeof(int));
memset(&err_218, 0, sizeof(const char*));
memset(&erro_ofs_219, 0, sizeof(int));
memset(&options_220, 0, sizeof(int));
memset(&str_221, 0, sizeof(char*));
memset(&re_222, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_223, 0, sizeof(int));
memset(&len_224, 0, sizeof(int));
memset(&regex_result_225, 0, sizeof(int));
memset(&i_226, 0, sizeof(int));
memset(&i_227, 0, sizeof(int));
right_value177 = (void*)0;
memset(&str_228, 0, sizeof(char*));
right_value178 = (void*)0;
memset(&str_229, 0, sizeof(char*));
memset(&i_230, 0, sizeof(int));
right_value179 = (void*)0;
memset(&match_string_231, 0, sizeof(char*));
    result_212=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 760, 1088),__exception_result_var_b178=((struct list$1charph*)(right_value176=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value175=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 760, "list$1charph"))), "libneo-c-str.c", 760, 1086)), "libneo-c-str.c", 760, 1087)))))), come_pop_stackframe(), __exception_result_var_b178));
    come_call_finalizer3(right_value175,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value176,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_213=0;
    ovec_max_214=16;
    int start_215[ovec_max_214];
    memset(&start_215, 0, sizeof(int)    *(ovec_max_214)    );
    int end_216[ovec_max_214];
    memset(&end_216, 0, sizeof(int)    *(ovec_max_214)    );
    int ovec_value_217[ovec_max_214*3];
    memset(&ovec_value_217, 0, sizeof(int)    *(ovec_max_214*3)    );
    options_220=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 772, 1089)), "libneo-c-str.c", 772, 1090))->options;
    str_221=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 773, 1091)), "libneo-c-str.c", 773, 1092))->str;
    re_222=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 775, 1093)), "libneo-c-str.c", 775, 1094))->re;
    while(_while_condtional16=(_Bool)1,    _while_condtional16) {
        options_223=2097152;
        len_224=(come_push_stackframe("libneo-c-str.c", 781, 1095),__exception_result_var_b179=strlen(self), come_pop_stackframe(), __exception_result_var_b179);
        regex_result_225=(come_push_stackframe("libneo-c-str.c", 782, 1096),__exception_result_var_b180=pcre_exec(re_222,(struct pcre_extra*)0,self,len_224,offset_213,options_223,ovec_value_217,ovec_max_214*3), come_pop_stackframe(), __exception_result_var_b180);
        for(        i_226=0;        i_226<ovec_max_214;        i_226++        ){
            (come_range_check(&((int*)come_null_check(start_215, "libneo-c-str.c", 785, 1097))[i_226],((int*)come_null_check(start_215, "libneo-c-str.c", 785, 1097)),((int*)come_null_check(start_215, "libneo-c-str.c", 785, 1097))+(ovec_max_214), "libneo-c-str.c", 785), ((int*)come_null_check(start_215, "libneo-c-str.c", 785, 1097))[i_226]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_217, "libneo-c-str.c", 785, 1098))[i_226*2],((int*)come_null_check(ovec_value_217, "libneo-c-str.c", 785, 1098)),((int*)come_null_check(ovec_value_217, "libneo-c-str.c", 785, 1098))+(ovec_max_214*3), "libneo-c-str.c", 785));
        }
        for(        i_227=0;        i_227<ovec_max_214;        i_227++        ){
            (come_range_check(&((int*)come_null_check(end_216, "libneo-c-str.c", 788, 1099))[i_227],((int*)come_null_check(end_216, "libneo-c-str.c", 788, 1099)),((int*)come_null_check(end_216, "libneo-c-str.c", 788, 1099))+(ovec_max_214), "libneo-c-str.c", 788), ((int*)come_null_check(end_216, "libneo-c-str.c", 788, 1099))[i_227]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_217, "libneo-c-str.c", 788, 1100))[i_227*2+1],((int*)come_null_check(ovec_value_217, "libneo-c-str.c", 788, 1100)),((int*)come_null_check(ovec_value_217, "libneo-c-str.c", 788, 1100))+(ovec_max_214*3), "libneo-c-str.c", 788));
        }
        if(_if_conditional79=regex_result_225==1,        _if_conditional79) {
            str_228=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 794, 1105),__exception_result_var_b181=((char*)(right_value177=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 794, 1101)), "libneo-c-str.c", 794, 1102)),*(int*)come_range_check(&((int*)come_null_check(start_215, "libneo-c-str.c", 794, 1103))[0],((int*)come_null_check(start_215, "libneo-c-str.c", 794, 1103)),((int*)come_null_check(start_215, "libneo-c-str.c", 794, 1103))+(ovec_max_214), "libneo-c-str.c", 794),*(int*)come_range_check(&((int*)come_null_check(end_216, "libneo-c-str.c", 794, 1104))[0],((int*)come_null_check(end_216, "libneo-c-str.c", 794, 1104)),((int*)come_null_check(end_216, "libneo-c-str.c", 794, 1104))+(ovec_max_214), "libneo-c-str.c", 794)))), come_pop_stackframe(), __exception_result_var_b181));
            right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 795, 1108),__exception_result_var_b182=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_212, "libneo-c-str.c", 795, 1106)), "libneo-c-str.c", 795, 1107)),(char*)come_increment_ref_count(str_228)), come_pop_stackframe(), __exception_result_var_b182);
            if(_if_conditional80=offset_213==*(int*)come_range_check(&((int*)come_null_check(end_216, "libneo-c-str.c", 797, 1109))[0],((int*)come_null_check(end_216, "libneo-c-str.c", 797, 1109)),((int*)come_null_check(end_216, "libneo-c-str.c", 797, 1109))+(ovec_max_214), "libneo-c-str.c", 797),            _if_conditional80) {
                offset_213++;
            }
            else {
                offset_213=*(int*)come_range_check(&((int*)come_null_check(end_216, "libneo-c-str.c", 801, 1110))[0],((int*)come_null_check(end_216, "libneo-c-str.c", 801, 1110)),((int*)come_null_check(end_216, "libneo-c-str.c", 801, 1110))+(ovec_max_214), "libneo-c-str.c", 801);
            }
            str_228 = come_decrement_ref_count2(str_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional81=regex_result_225>1,            _if_conditional81) {
                str_229=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 806, 1115),__exception_result_var_b183=((char*)(right_value178=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 806, 1111)), "libneo-c-str.c", 806, 1112)),*(int*)come_range_check(&((int*)come_null_check(start_215, "libneo-c-str.c", 806, 1113))[0],((int*)come_null_check(start_215, "libneo-c-str.c", 806, 1113)),((int*)come_null_check(start_215, "libneo-c-str.c", 806, 1113))+(ovec_max_214), "libneo-c-str.c", 806),*(int*)come_range_check(&((int*)come_null_check(end_216, "libneo-c-str.c", 806, 1114))[0],((int*)come_null_check(end_216, "libneo-c-str.c", 806, 1114)),((int*)come_null_check(end_216, "libneo-c-str.c", 806, 1114))+(ovec_max_214), "libneo-c-str.c", 806)))), come_pop_stackframe(), __exception_result_var_b183));
                right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 807, 1118),__exception_result_var_b184=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_212, "libneo-c-str.c", 807, 1116)), "libneo-c-str.c", 807, 1117)),(char*)come_increment_ref_count(str_229)), come_pop_stackframe(), __exception_result_var_b184);
                if(_if_conditional82=offset_213==*(int*)come_range_check(&((int*)come_null_check(end_216, "libneo-c-str.c", 809, 1119))[0],((int*)come_null_check(end_216, "libneo-c-str.c", 809, 1119)),((int*)come_null_check(end_216, "libneo-c-str.c", 809, 1119))+(ovec_max_214), "libneo-c-str.c", 809),                _if_conditional82) {
                    offset_213++;
                }
                else {
                    offset_213=*(int*)come_range_check(&((int*)come_null_check(end_216, "libneo-c-str.c", 813, 1120))[0],((int*)come_null_check(end_216, "libneo-c-str.c", 813, 1120)),((int*)come_null_check(end_216, "libneo-c-str.c", 813, 1120))+(ovec_max_214), "libneo-c-str.c", 813);
                }
                *((int*)come_null_check(num_group_string_in_regex, "libneo-c-str.c", 816, 1121))=regex_result_225-1;
                for(                i_230=1;                i_230<regex_result_225;                i_230++                ){
                    match_string_231=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 818, 1126),__exception_result_var_b185=((char*)(right_value179=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 818, 1122)), "libneo-c-str.c", 818, 1123)),*(int*)come_range_check(&((int*)come_null_check(start_215, "libneo-c-str.c", 818, 1124))[i_230],((int*)come_null_check(start_215, "libneo-c-str.c", 818, 1124)),((int*)come_null_check(start_215, "libneo-c-str.c", 818, 1124))+(ovec_max_214), "libneo-c-str.c", 818),*(int*)come_range_check(&((int*)come_null_check(end_216, "libneo-c-str.c", 818, 1125))[i_230],((int*)come_null_check(end_216, "libneo-c-str.c", 818, 1125)),((int*)come_null_check(end_216, "libneo-c-str.c", 818, 1125))+(ovec_max_214), "libneo-c-str.c", 818)))), come_pop_stackframe(), __exception_result_var_b185));
                    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 819, 1129),__exception_result_var_b186=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings, "libneo-c-str.c", 819, 1127)), "libneo-c-str.c", 819, 1128)),(char*)come_increment_ref_count(match_string_231)), come_pop_stackframe(), __exception_result_var_b186);
                    match_string_231 = come_decrement_ref_count2(match_string_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_229 = come_decrement_ref_count2(str_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result134__ = __result_obj__ = result_212;
    come_call_finalizer3(result_212,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result134__;
    come_call_finalizer3(result_212,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

char* charp_strip(char* self){
void* __result_obj__;
void* right_value180;
char* __exception_result_var_b187;
char* result_232;
unsigned long int __exception_result_var_b188;
int len_233;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
memset(&result_232, 0, sizeof(char*));
memset(&len_233, 0, sizeof(int));
    result_232=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 834, 1130),__exception_result_var_b187=((char*)(right_value180=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b187));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    len_233=(come_push_stackframe("libneo-c-str.c", 836, 1131),__exception_result_var_b188=strlen(self), come_pop_stackframe(), __exception_result_var_b188);
    if(_if_conditional83=((char*)come_null_check(self, "libneo-c-str.c", 838, 1132))[len_233-1]==10,    _if_conditional83) {
        ((char*)come_null_check(result_232, "libneo-c-str.c", 839, 1133))[len_233-1]=0;
    }
    else {
        if(_if_conditional84=((char*)come_null_check(self, "libneo-c-str.c", 841, 1134))[len_233-1]==13,        _if_conditional84) {
            ((char*)come_null_check(result_232, "libneo-c-str.c", 842, 1135))[len_233-1]=0;
        }
        else {
            if(_if_conditional85=len_233>2&&((char*)come_null_check(self, "libneo-c-str.c", 844, 1136))[len_233-2]==13&&((char*)come_null_check(self, "libneo-c-str.c", 844, 1137))[len_233-1]==10,            _if_conditional85) {
                ((char*)come_null_check(result_232, "libneo-c-str.c", 845, 1138))[len_233-2]=0;
            }
        }
    }
    __result135__ = __result_obj__ = result_232;
    result_232 = come_decrement_ref_count2(result_232, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result135__;
    result_232 = come_decrement_ref_count2(result_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_printable(char* str){
void* __result_obj__;
int __exception_result_var_b189;
int len_234;
void* right_value181;
char* result_235;
int n_236;
int i_237;
char c_238;
_Bool _if_conditional86;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_234, 0, sizeof(int));
right_value181 = (void*)0;
memset(&result_235, 0, sizeof(char*));
memset(&n_236, 0, sizeof(int));
memset(&i_237, 0, sizeof(int));
memset(&c_238, 0, sizeof(char));
    len_234=(come_push_stackframe("libneo-c-str.c", 853, 1141),__exception_result_var_b189=charp_length(((char*)come_null_check(((char*)come_null_check(str, "libneo-c-str.c", 853, 1139)), "libneo-c-str.c", 853, 1140))), come_pop_stackframe(), __exception_result_var_b189);
    result_235=(char*)come_increment_ref_count(((char*)(right_value181=(char*)come_calloc(1, sizeof(char)*(1*(len_234*2+1)), "libneo-c-str.c", 854, "char"))));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    n_236=0;
    for(    i_237=0;    i_237<len_234;    i_237++    ){
        c_238=((char*)come_null_check(str, "libneo-c-str.c", 858, 1142))[i_237];
        if(_if_conditional86=(c_238>=0&&c_238<32)||c_238==127,        _if_conditional86) {
            ((char*)come_null_check(result_235, "libneo-c-str.c", 863, 1143))[n_236++]=94;
            ((char*)come_null_check(result_235, "libneo-c-str.c", 864, 1144))[n_236++]=c_238+65-1;
        }
        else {
            ((char*)come_null_check(result_235, "libneo-c-str.c", 867, 1145))[n_236++]=c_238;
        }
    }
    ((char*)come_null_check(result_235, "libneo-c-str.c", 873, 1146))[n_236]=0;
    __result136__ = __result_obj__ = result_235;
    result_235 = come_decrement_ref_count2(result_235, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result136__;
    result_235 = come_decrement_ref_count2(result_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__;
unsigned long int __exception_result_var_b190;
int len_239;
void* right_value182;
char* result_240;
unsigned long int __exception_result_var_b191;
_Bool _if_conditional87;
char* __exception_result_var_b192;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_239, 0, sizeof(int));
right_value182 = (void*)0;
memset(&result_240, 0, sizeof(char*));
    len_239=4*((come_push_stackframe("libneo-c-str.c", 878, 1147),__exception_result_var_b190=wcslen(wstr), come_pop_stackframe(), __exception_result_var_b190)+1);
    result_240=(char*)come_increment_ref_count(((char*)(right_value182=(char*)come_calloc(1, sizeof(char)*(1*(len_239)), "libneo-c-str.c", 880, "char"))));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional87=(come_push_stackframe("libneo-c-str.c", 882, 1148),__exception_result_var_b191=wcstombs(result_240,wstr,len_239), come_pop_stackframe(), __exception_result_var_b191)<0,    _if_conditional87) {
        (come_push_stackframe("libneo-c-str.c", 884, 1149),__exception_result_var_b192=strncpy(result_240,"",len_239), come_pop_stackframe(), __exception_result_var_b192);
    }
    __result137__ = __result_obj__ = result_240;
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result137__;
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__;
void* right_value183;
unsigned int* __exception_result_var_b193;
unsigned int* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
    __result138__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 892, 1150),__exception_result_var_b193=((unsigned int*)(right_value183=__builtin_wstring(str))), come_pop_stackframe(), __exception_result_var_b193);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

int wchar_tp_length(unsigned int* str){
void* __result_obj__;
unsigned long int __exception_result_var_b194;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    __result139__ = (come_push_stackframe("libneo-c-str.c", 897, 1151),__exception_result_var_b194=wcslen(str), come_pop_stackframe(), __exception_result_var_b194);
    return __result139__;
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
unsigned long int __exception_result_var_b195;
int len_241;
_Bool _if_conditional88;
void* right_value184;
char* __exception_result_var_b196;
void* right_value185;
unsigned int* __exception_result_var_b197;
unsigned int* __result140__;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value186;
char* __exception_result_var_b198;
void* right_value187;
unsigned int* __exception_result_var_b199;
unsigned int* __result141__;
_Bool _if_conditional93;
void* right_value188;
unsigned int* __exception_result_var_b200;
unsigned int* sub_str_242;
int __exception_result_var_b201;
void* __exception_result_var_b202;
void* right_value189;
char* __exception_result_var_b203;
void* right_value190;
unsigned int* __exception_result_var_b204;
unsigned int* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_241, 0, sizeof(int));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&sub_str_242, 0, sizeof(unsigned int*));
right_value189 = (void*)0;
right_value190 = (void*)0;
    len_241=(come_push_stackframe("libneo-c-str.c", 904, 1152),__exception_result_var_b195=wcslen(str), come_pop_stackframe(), __exception_result_var_b195);
    if(_if_conditional88=len_241==0,    _if_conditional88) {
        __result140__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 907, 1158),__exception_result_var_b197=((unsigned int*)(right_value185=string_to_wstring(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c-str.c", 907, 1155),__exception_result_var_b196=((char*)(right_value184=wchar_tp_to_string(((unsigned int*)come_null_check(((unsigned int*)come_null_check(str, "libneo-c-str.c", 907, 1153)), "libneo-c-str.c", 907, 1154))))), come_pop_stackframe(), __exception_result_var_b196), "libneo-c-str.c", 907, 1156)), "libneo-c-str.c", 907, 1157))))), come_pop_stackframe(), __exception_result_var_b197);
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result140__;
    }
    if(_if_conditional89=head<0,    _if_conditional89) {
        head+=len_241;
    }
    if(_if_conditional90=tail<0,    _if_conditional90) {
        tail+=len_241+1;
    }
    if(_if_conditional91=head<0,    _if_conditional91) {
        head=0;
    }
    if(_if_conditional92=tail<0,    _if_conditional92) {
        __result141__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 923, 1164),__exception_result_var_b199=((unsigned int*)(right_value187=string_to_wstring(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c-str.c", 923, 1161),__exception_result_var_b198=((char*)(right_value186=wchar_tp_to_string(((unsigned int*)come_null_check(((unsigned int*)come_null_check(str, "libneo-c-str.c", 923, 1159)), "libneo-c-str.c", 923, 1160))))), come_pop_stackframe(), __exception_result_var_b198), "libneo-c-str.c", 923, 1162)), "libneo-c-str.c", 923, 1163))))), come_pop_stackframe(), __exception_result_var_b199);
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result141__;
    }
    if(_if_conditional93=tail>=len_241,    _if_conditional93) {
        tail=len_241;
    }
    sub_str_242=(unsigned int*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 930, 1167),__exception_result_var_b200=((unsigned int*)(right_value188=wchar_tp_substring(((unsigned int*)come_null_check(((unsigned int*)come_null_check(str, "libneo-c-str.c", 930, 1165)), "libneo-c-str.c", 930, 1166)),tail,-1))), come_pop_stackframe(), __exception_result_var_b200));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c-str.c", 932, 1171),__exception_result_var_b202=memcpy(str+head,sub_str_242,sizeof(unsigned int)*((come_push_stackframe("libneo-c-str.c", 932, 1170),__exception_result_var_b201=wstring_length(((unsigned int*)come_null_check(((unsigned int*)come_null_check(sub_str_242, "libneo-c-str.c", 932, 1168)), "libneo-c-str.c", 932, 1169))), come_pop_stackframe(), __exception_result_var_b201)+1)), come_pop_stackframe(), __exception_result_var_b202);
    __result142__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 934, 1177),__exception_result_var_b204=((unsigned int*)(right_value190=string_to_wstring(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c-str.c", 934, 1174),__exception_result_var_b203=((char*)(right_value189=wchar_tp_to_string(((unsigned int*)come_null_check(((unsigned int*)come_null_check(str, "libneo-c-str.c", 934, 1172)), "libneo-c-str.c", 934, 1173))))), come_pop_stackframe(), __exception_result_var_b203), "libneo-c-str.c", 934, 1175)), "libneo-c-str.c", 934, 1176))))), come_pop_stackframe(), __exception_result_var_b204);
    sub_str_242 = come_decrement_ref_count2(sub_str_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
    sub_str_242 = come_decrement_ref_count2(sub_str_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
unsigned int* __exception_result_var_b205;
unsigned int* head_243;
_Bool _if_conditional94;
int __result143__;
int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_243, 0, sizeof(unsigned int*));
    head_243=(come_push_stackframe("libneo-c-str.c", 941, 1178),__exception_result_var_b205=wcsstr(str,search_str), come_pop_stackframe(), __exception_result_var_b205);
    if(_if_conditional94=head_243==((void*)0),    _if_conditional94) {
        __result143__ = default_value;
        return __result143__;
    }
    __result144__ = head_243-str;
    return __result144__;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
unsigned long int __exception_result_var_b206;
int len_244;
unsigned long int __exception_result_var_b207;
unsigned int* p_245;
_Bool _while_condtional17;
unsigned long int __exception_result_var_b208;
int len2_246;
_Bool result_247;
int i_248;
_Bool _if_conditional95;
_Bool _if_conditional96;
int __result145__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_244, 0, sizeof(int));
memset(&p_245, 0, sizeof(unsigned int*));
memset(&len2_246, 0, sizeof(int));
memset(&result_247, 0, sizeof(_Bool));
memset(&i_248, 0, sizeof(int));
    len_244=(come_push_stackframe("libneo-c-str.c", 954, 1179),__exception_result_var_b206=wcslen(search_str), come_pop_stackframe(), __exception_result_var_b206);
    p_245=str+(come_push_stackframe("libneo-c-str.c", 956, 1180),__exception_result_var_b207=wcslen(str), come_pop_stackframe(), __exception_result_var_b207)-len_244;
    while(_while_condtional17=p_245>=str,    _while_condtional17) {
        len2_246=(come_push_stackframe("libneo-c-str.c", 959, 1181),__exception_result_var_b208=wcslen(p_245), come_pop_stackframe(), __exception_result_var_b208);
        result_247=(_Bool)1;
        for(        i_248=0;        i_248<len_244&&i_248<len2_246;        i_248++        ){
            if(_if_conditional95=((unsigned int*)come_null_check(p_245, "libneo-c-str.c", 963, 1182))[i_248]!=((unsigned int*)come_null_check(search_str, "libneo-c-str.c", 963, 1183))[i_248],            _if_conditional95) {
                result_247=(_Bool)0;
            }
        }
        if(result_247) {
            __result145__ = (p_245-str);
            return __result145__;
        }
        p_245--;
    }
    __result146__ = default_value;
    return __result146__;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__;
unsigned long int __exception_result_var_b209;
int len_249;
void* right_value191;
unsigned int* result_250;
int i_251;
unsigned int* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_249, 0, sizeof(int));
right_value191 = (void*)0;
memset(&result_250, 0, sizeof(unsigned int*));
memset(&i_251, 0, sizeof(int));
    len_249=(come_push_stackframe("libneo-c-str.c", 979, 1184),__exception_result_var_b209=wcslen(str), come_pop_stackframe(), __exception_result_var_b209);
    result_250=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value191=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_249+1)), "libneo-c-str.c", 980, "int"))));
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_251=0;    i_251<len_249;    i_251++    ){
        ((unsigned int*)come_null_check(result_250, "libneo-c-str.c", 983, 1185))[i_251]=((unsigned int*)come_null_check(str, "libneo-c-str.c", 983, 1186))[len_249-i_251-1];
    }
    ((unsigned int*)come_null_check(result_250, "libneo-c-str.c", 986, 1187))[len_249]=0;
    __result147__ = __result_obj__ = result_250;
    result_250 = come_decrement_ref_count2(result_250, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result147__;
    result_250 = come_decrement_ref_count2(result_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__;
unsigned long int __exception_result_var_b210;
int len_252;
void* right_value192;
unsigned int* result_253;
int i_254;
unsigned int* __exception_result_var_b211;
unsigned int* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_252, 0, sizeof(int));
right_value192 = (void*)0;
memset(&result_253, 0, sizeof(unsigned int*));
memset(&i_254, 0, sizeof(int));
    len_252=(come_push_stackframe("libneo-c-str.c", 993, 1188),__exception_result_var_b210=wcslen(str), come_pop_stackframe(), __exception_result_var_b210)*n+1;
    result_253=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value192=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_252)), "libneo-c-str.c", 995, "int"))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((unsigned int*)come_null_check(result_253, "libneo-c-str.c", 997, 1189))[0]=0;
    for(    i_254=0;    i_254<n;    i_254++    ){
        (come_push_stackframe("libneo-c-str.c", 1000, 1190),__exception_result_var_b211=wcscat(result_253,str), come_pop_stackframe(), __exception_result_var_b211);
    }
    __result148__ = __result_obj__ = result_253;
    result_253 = come_decrement_ref_count2(result_253, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result148__;
    result_253 = come_decrement_ref_count2(result_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__;
int __exception_result_var_b212;
int len_255;
void* right_value193;
unsigned int* result_256;
int n_257;
int i_258;
unsigned int c_259;
_Bool _if_conditional97;
unsigned int* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_255, 0, sizeof(int));
right_value193 = (void*)0;
memset(&result_256, 0, sizeof(unsigned int*));
memset(&n_257, 0, sizeof(int));
memset(&i_258, 0, sizeof(int));
memset(&c_259, 0, sizeof(unsigned int));
    len_255=(come_push_stackframe("libneo-c-str.c", 1008, 1193),__exception_result_var_b212=wchar_tp_length(((unsigned int*)come_null_check(((unsigned int*)come_null_check(str, "libneo-c-str.c", 1008, 1191)), "libneo-c-str.c", 1008, 1192))), come_pop_stackframe(), __exception_result_var_b212);
    result_256=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value193=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_255*2+1)), "libneo-c-str.c", 1009, "int"))));
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    n_257=0;
    for(    i_258=0;    i_258<len_255;    i_258++    ){
        c_259=((unsigned int*)come_null_check(str, "libneo-c-str.c", 1013, 1194))[i_258];
        if(_if_conditional97=(c_259>=0&&c_259<32)||c_259==127,        _if_conditional97) {
            ((unsigned int*)come_null_check(result_256, "libneo-c-str.c", 1018, 1195))[n_257++]=94;
            ((unsigned int*)come_null_check(result_256, "libneo-c-str.c", 1019, 1196))[n_257++]=c_259+65-1;
        }
        else {
            ((unsigned int*)come_null_check(result_256, "libneo-c-str.c", 1022, 1197))[n_257++]=c_259;
        }
    }
    ((unsigned int*)come_null_check(result_256, "libneo-c-str.c", 1028, 1198))[n_257]=0;
    __result149__ = __result_obj__ = result_256;
    result_256 = come_decrement_ref_count2(result_256, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result149__;
    result_256 = come_decrement_ref_count2(result_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
int offset_260;
int ovec_max_261;
const char* err_265;
int erro_ofs_266;
int options_267;
char* str_268;
struct real_pcre8_or_16* re_269;
int n_270;
_Bool _while_condtional18;
int options_271;
unsigned long int __exception_result_var_b213;
int len_272;
int __exception_result_var_b214;
int regex_result_273;
int i_274;
int i_275;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool __result150__;
_Bool _if_conditional100;
_Bool _if_conditional101;
struct list$1charph* __exception_result_var_b215;
int i_278;
void* right_value194;
char* __exception_result_var_b216;
char* match_string_279;
struct list$1charph* __exception_result_var_b217;
_Bool _if_conditional102;
_Bool __result152__;
_Bool _if_conditional103;
_Bool __result153__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_260, 0, sizeof(int));
memset(&ovec_max_261, 0, sizeof(int));
memset(&err_265, 0, sizeof(const char*));
memset(&erro_ofs_266, 0, sizeof(int));
memset(&options_267, 0, sizeof(int));
memset(&str_268, 0, sizeof(char*));
memset(&re_269, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_270, 0, sizeof(int));
memset(&options_271, 0, sizeof(int));
memset(&len_272, 0, sizeof(int));
memset(&regex_result_273, 0, sizeof(int));
memset(&i_274, 0, sizeof(int));
memset(&i_275, 0, sizeof(int));
memset(&i_278, 0, sizeof(int));
right_value194 = (void*)0;
memset(&match_string_279, 0, sizeof(char*));
    offset_260=0;
    ovec_max_261=16;
    int start_262[ovec_max_261];
    memset(&start_262, 0, sizeof(int)    *(ovec_max_261)    );
    int end_263[ovec_max_261];
    memset(&end_263, 0, sizeof(int)    *(ovec_max_261)    );
    int ovec_value_264[ovec_max_261*3];
    memset(&ovec_value_264, 0, sizeof(int)    *(ovec_max_261*3)    );
    options_267=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1043, 1199)), "libneo-c-str.c", 1043, 1200))->options;
    str_268=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1044, 1201)), "libneo-c-str.c", 1044, 1202))->str;
    re_269=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1046, 1203)), "libneo-c-str.c", 1046, 1204))->re;
    n_270=0;
    while(_while_condtional18=(_Bool)1,    _while_condtional18) {
        options_271=2097152;
        len_272=(come_push_stackframe("libneo-c-str.c", 1052, 1205),__exception_result_var_b213=strlen(self), come_pop_stackframe(), __exception_result_var_b213);
        regex_result_273=(come_push_stackframe("libneo-c-str.c", 1054, 1206),__exception_result_var_b214=pcre_exec(re_269,(struct pcre_extra*)0,self,len_272,offset_260,options_271,ovec_value_264,ovec_max_261*3), come_pop_stackframe(), __exception_result_var_b214);
        for(        i_274=0;        i_274<ovec_max_261;        i_274++        ){
            (come_range_check(&((int*)come_null_check(start_262, "libneo-c-str.c", 1057, 1207))[i_274],((int*)come_null_check(start_262, "libneo-c-str.c", 1057, 1207)),((int*)come_null_check(start_262, "libneo-c-str.c", 1057, 1207))+(ovec_max_261), "libneo-c-str.c", 1057), ((int*)come_null_check(start_262, "libneo-c-str.c", 1057, 1207))[i_274]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_264, "libneo-c-str.c", 1057, 1208))[i_274*2],((int*)come_null_check(ovec_value_264, "libneo-c-str.c", 1057, 1208)),((int*)come_null_check(ovec_value_264, "libneo-c-str.c", 1057, 1208))+(ovec_max_261*3), "libneo-c-str.c", 1057));
        }
        for(        i_275=0;        i_275<ovec_max_261;        i_275++        ){
            (come_range_check(&((int*)come_null_check(end_263, "libneo-c-str.c", 1060, 1209))[i_275],((int*)come_null_check(end_263, "libneo-c-str.c", 1060, 1209)),((int*)come_null_check(end_263, "libneo-c-str.c", 1060, 1209))+(ovec_max_261), "libneo-c-str.c", 1060), ((int*)come_null_check(end_263, "libneo-c-str.c", 1060, 1209))[i_275]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_264, "libneo-c-str.c", 1060, 1210))[i_275*2+1],((int*)come_null_check(ovec_value_264, "libneo-c-str.c", 1060, 1210)),((int*)come_null_check(ovec_value_264, "libneo-c-str.c", 1060, 1210))+(ovec_max_261*3), "libneo-c-str.c", 1060));
        }
        if(_if_conditional98=regex_result_273==1||(group_strings==((void*)0)&&regex_result_273>0),        _if_conditional98) {
            n_270++;
            if(_if_conditional99=n_270==count,            _if_conditional99) {
                __result150__ = (_Bool)1;
                return __result150__;
            }
            if(_if_conditional100=offset_260==*(int*)come_range_check(&((int*)come_null_check(end_263, "libneo-c-str.c", 1072, 1211))[0],((int*)come_null_check(end_263, "libneo-c-str.c", 1072, 1211)),((int*)come_null_check(end_263, "libneo-c-str.c", 1072, 1211))+(ovec_max_261), "libneo-c-str.c", 1072),            _if_conditional100) {
                offset_260++;
            }
            else {
                offset_260=*(int*)come_range_check(&((int*)come_null_check(end_263, "libneo-c-str.c", 1076, 1212))[0],((int*)come_null_check(end_263, "libneo-c-str.c", 1076, 1212)),((int*)come_null_check(end_263, "libneo-c-str.c", 1076, 1212))+(ovec_max_261), "libneo-c-str.c", 1076);
            }
        }
        else {
            if(_if_conditional101=regex_result_273>1,            _if_conditional101) {
                n_270++;
                (come_push_stackframe("libneo-c-str.c", 1083, 1225),__exception_result_var_b215=list$1charph_reset(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings, "libneo-c-str.c", 1083, 1213)), "libneo-c-str.c", 1083, 1214))), come_pop_stackframe(), __exception_result_var_b215);
                for(                i_278=1;                i_278<regex_result_273;                i_278++                ){
                    match_string_279=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1085, 1230),__exception_result_var_b216=((char*)(right_value194=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1085, 1226)), "libneo-c-str.c", 1085, 1227)),*(int*)come_range_check(&((int*)come_null_check(start_262, "libneo-c-str.c", 1085, 1228))[i_278],((int*)come_null_check(start_262, "libneo-c-str.c", 1085, 1228)),((int*)come_null_check(start_262, "libneo-c-str.c", 1085, 1228))+(ovec_max_261), "libneo-c-str.c", 1085),*(int*)come_range_check(&((int*)come_null_check(end_263, "libneo-c-str.c", 1085, 1229))[i_278],((int*)come_null_check(end_263, "libneo-c-str.c", 1085, 1229)),((int*)come_null_check(end_263, "libneo-c-str.c", 1085, 1229))+(ovec_max_261), "libneo-c-str.c", 1085)))), come_pop_stackframe(), __exception_result_var_b216));
                    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 1086, 1233),__exception_result_var_b217=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings, "libneo-c-str.c", 1086, 1231)), "libneo-c-str.c", 1086, 1232)),(char*)come_increment_ref_count(match_string_279)), come_pop_stackframe(), __exception_result_var_b217);
                    match_string_279 = come_decrement_ref_count2(match_string_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional102=n_270==count,                _if_conditional102) {
                    __result152__ = (_Bool)1;
                    return __result152__;
                }
                if(_if_conditional103=offset_260==*(int*)come_range_check(&((int*)come_null_check(end_263, "libneo-c-str.c", 1093, 1234))[0],((int*)come_null_check(end_263, "libneo-c-str.c", 1093, 1234)),((int*)come_null_check(end_263, "libneo-c-str.c", 1093, 1234))+(ovec_max_261), "libneo-c-str.c", 1093),                _if_conditional103) {
                    offset_260++;
                }
                else {
                    offset_260=*(int*)come_range_check(&((int*)come_null_check(end_263, "libneo-c-str.c", 1097, 1235))[0],((int*)come_null_check(end_263, "libneo-c-str.c", 1097, 1235)),((int*)come_null_check(end_263, "libneo-c-str.c", 1097, 1235))+(ovec_max_261), "libneo-c-str.c", 1097);
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
struct list_item$1charph* it_276;
_Bool _while_condtional19;
struct list_item$1charph* prev_it_277;
struct list$1charph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_276, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_277, 0, sizeof(struct list_item$1charph*));
                    it_276=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 426, 1215)), "./neo-c.h", 426, 1216))->head;
                    while(_while_condtional19=it_276!=((void*)0),                    _while_condtional19) {
                        prev_it_277=it_276;
                        it_276=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_276, "./neo-c.h", 429, 1217)), "./neo-c.h", 429, 1218))->next;
                        come_call_finalizer3(prev_it_277,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 433, 1219)), "./neo-c.h", 433, 1220))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 434, 1221)), "./neo-c.h", 434, 1222))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 436, 1223)), "./neo-c.h", 436, 1224))->len=0;
                    __result151__ = __result_obj__ = self;
                    return __result151__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b218;
int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = (come_push_stackframe("libneo-c-str.c", 1112, 1236),__exception_result_var_b218=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b218);
    return __result155__;
}

int wstring_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b219;
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = (come_push_stackframe("libneo-c-str.c", 1117, 1237),__exception_result_var_b219=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b219);
    return __result156__;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
void* __result_obj__;
unsigned int __exception_result_var_b220;
unsigned int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = (come_push_stackframe("libneo-c-str.c", 1122, 1242),__exception_result_var_b220=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1122, 1238)), "libneo-c-str.c", 1122, 1239))->str, "libneo-c-str.c", 1122, 1240)), "libneo-c-str.c", 1122, 1241))), come_pop_stackframe(), __exception_result_var_b220);
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
void* right_value195;
unsigned int* __exception_result_var_b221;
unsigned int* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
    __result159__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 1133, 1243),__exception_result_var_b221=((unsigned int*)(right_value195=wchar_tp_multiply(str,n))), come_pop_stackframe(), __exception_result_var_b221);
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__;
void* right_value196;
unsigned int* __exception_result_var_b222;
unsigned int* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
    __result160__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 1138, 1244),__exception_result_var_b222=((unsigned int*)(right_value196=wchar_tp_multiply(str,n))), come_pop_stackframe(), __exception_result_var_b222);
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b223;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = (come_push_stackframe("libneo-c-str.c", 1143, 1245),__exception_result_var_b223=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b223)==0;
    return __result161__;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b224;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = (come_push_stackframe("libneo-c-str.c", 1148, 1246),__exception_result_var_b224=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b224)==0;
    return __result162__;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b225;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = (come_push_stackframe("libneo-c-str.c", 1153, 1247),__exception_result_var_b225=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b225)!=0;
    return __result163__;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b226;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = (come_push_stackframe("libneo-c-str.c", 1158, 1248),__exception_result_var_b226=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b226)!=0;
    return __result164__;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __exception_result_var_b227;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    __result165__ = (come_push_stackframe("libneo-c-str.c", 1163, 1251),__exception_result_var_b227=come_regex_equals(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 1163, 1249)), "libneo-c-str.c", 1163, 1250)),right), come_pop_stackframe(), __exception_result_var_b227);
    return __result165__;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __exception_result_var_b228;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = !(come_push_stackframe("libneo-c-str.c", 1168, 1254),__exception_result_var_b228=come_regex_equals(((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(left, "libneo-c-str.c", 1168, 1252)), "libneo-c-str.c", 1168, 1253)),right), come_pop_stackframe(), __exception_result_var_b228);
    return __result166__;
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
unsigned long int __exception_result_var_b229;
unsigned long int __exception_result_var_b230;
void* right_value197;
unsigned int* result_280;
unsigned int* __exception_result_var_b231;
unsigned int* __exception_result_var_b232;
unsigned int* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
memset(&result_280, 0, sizeof(unsigned int*));
    result_280=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value197=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*((come_push_stackframe("libneo-c-str.c", 1173, 1255),__exception_result_var_b229=wcslen(left), come_pop_stackframe(), __exception_result_var_b229)+(come_push_stackframe("libneo-c-str.c", 1173, 1256),__exception_result_var_b230=wcslen(right), come_pop_stackframe(), __exception_result_var_b230)+1)), "libneo-c-str.c", 1173, "int"))));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c-str.c", 1175, 1257),__exception_result_var_b231=wcscpy(result_280,left), come_pop_stackframe(), __exception_result_var_b231);
    (come_push_stackframe("libneo-c-str.c", 1176, 1258),__exception_result_var_b232=wcscat(result_280,right), come_pop_stackframe(), __exception_result_var_b232);
    __result167__ = __result_obj__ = result_280;
    result_280 = come_decrement_ref_count2(result_280, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result167__;
    result_280 = come_decrement_ref_count2(result_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
unsigned long int __exception_result_var_b233;
unsigned long int __exception_result_var_b234;
void* right_value198;
unsigned int* result_281;
unsigned int* __exception_result_var_b235;
unsigned int* __exception_result_var_b236;
unsigned int* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
memset(&result_281, 0, sizeof(unsigned int*));
    result_281=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value198=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*((come_push_stackframe("libneo-c-str.c", 1183, 1259),__exception_result_var_b233=wcslen(left), come_pop_stackframe(), __exception_result_var_b233)+(come_push_stackframe("libneo-c-str.c", 1183, 1260),__exception_result_var_b234=wcslen(right), come_pop_stackframe(), __exception_result_var_b234)+1)), "libneo-c-str.c", 1183, "int"))));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c-str.c", 1185, 1261),__exception_result_var_b235=wcscpy(result_281,left), come_pop_stackframe(), __exception_result_var_b235);
    (come_push_stackframe("libneo-c-str.c", 1186, 1262),__exception_result_var_b236=wcscat(result_281,right), come_pop_stackframe(), __exception_result_var_b236);
    __result168__ = __result_obj__ = result_281;
    result_281 = come_decrement_ref_count2(result_281, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result168__;
    result_281 = come_decrement_ref_count2(result_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
char* __exception_result_var_b237;
char* head_282;
_Bool _if_conditional104;
int __result169__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_282, 0, sizeof(char*));
    head_282=(come_push_stackframe("libneo-c-str.c", 1195, 1263),__exception_result_var_b237=strstr(str,search_str), come_pop_stackframe(), __exception_result_var_b237);
    if(_if_conditional104=head_282==((void*)0),    _if_conditional104) {
        __result169__ = default_value;
        return __result169__;
    }
    __result170__ = head_282-str;
    return __result170__;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int ovec_max_283;
int result_287;
int offset_288;
const char* err_289;
int erro_ofs_290;
int options_291;
char* str_292;
struct real_pcre8_or_16* re_293;
_Bool _while_condtional20;
int options_294;
unsigned long int __exception_result_var_b238;
int len_295;
int __exception_result_var_b239;
int regex_result_296;
int i_297;
int i_298;
_Bool _if_conditional105;
int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_283, 0, sizeof(int));
memset(&result_287, 0, sizeof(int));
memset(&offset_288, 0, sizeof(int));
memset(&err_289, 0, sizeof(const char*));
memset(&erro_ofs_290, 0, sizeof(int));
memset(&options_291, 0, sizeof(int));
memset(&str_292, 0, sizeof(char*));
memset(&re_293, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_294, 0, sizeof(int));
memset(&len_295, 0, sizeof(int));
memset(&regex_result_296, 0, sizeof(int));
memset(&i_297, 0, sizeof(int));
memset(&i_298, 0, sizeof(int));
    ovec_max_283=16;
    int start_284[ovec_max_283];
    memset(&start_284, 0, sizeof(int)    *(ovec_max_283)    );
    int end_285[ovec_max_283];
    memset(&end_285, 0, sizeof(int)    *(ovec_max_283)    );
    int ovec_value_286[ovec_max_283*3];
    memset(&ovec_value_286, 0, sizeof(int)    *(ovec_max_283*3)    );
    result_287=default_value;
    offset_288=0;
    options_291=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1219, 1264)), "libneo-c-str.c", 1219, 1265))->options;
    str_292=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1220, 1266)), "libneo-c-str.c", 1220, 1267))->str;
    re_293=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1222, 1268)), "libneo-c-str.c", 1222, 1269))->re;
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        options_294=2097152;
        len_295=(come_push_stackframe("libneo-c-str.c", 1226, 1270),__exception_result_var_b238=strlen(self), come_pop_stackframe(), __exception_result_var_b238);
        regex_result_296=(come_push_stackframe("libneo-c-str.c", 1227, 1271),__exception_result_var_b239=pcre_exec(re_293,(struct pcre_extra*)0,self,len_295,offset_288,options_294,ovec_value_286,ovec_max_283*3), come_pop_stackframe(), __exception_result_var_b239);
        for(        i_297=0;        i_297<ovec_max_283;        i_297++        ){
            (come_range_check(&((int*)come_null_check(start_284, "libneo-c-str.c", 1230, 1272))[i_297],((int*)come_null_check(start_284, "libneo-c-str.c", 1230, 1272)),((int*)come_null_check(start_284, "libneo-c-str.c", 1230, 1272))+(ovec_max_283), "libneo-c-str.c", 1230), ((int*)come_null_check(start_284, "libneo-c-str.c", 1230, 1272))[i_297]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_286, "libneo-c-str.c", 1230, 1273))[i_297*2],((int*)come_null_check(ovec_value_286, "libneo-c-str.c", 1230, 1273)),((int*)come_null_check(ovec_value_286, "libneo-c-str.c", 1230, 1273))+(ovec_max_283*3), "libneo-c-str.c", 1230));
        }
        for(        i_298=0;        i_298<ovec_max_283;        i_298++        ){
            (come_range_check(&((int*)come_null_check(end_285, "libneo-c-str.c", 1233, 1274))[i_298],((int*)come_null_check(end_285, "libneo-c-str.c", 1233, 1274)),((int*)come_null_check(end_285, "libneo-c-str.c", 1233, 1274))+(ovec_max_283), "libneo-c-str.c", 1233), ((int*)come_null_check(end_285, "libneo-c-str.c", 1233, 1274))[i_298]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_286, "libneo-c-str.c", 1233, 1275))[i_298*2+1],((int*)come_null_check(ovec_value_286, "libneo-c-str.c", 1233, 1275)),((int*)come_null_check(ovec_value_286, "libneo-c-str.c", 1233, 1275))+(ovec_max_283*3), "libneo-c-str.c", 1233));
        }
        if(_if_conditional105=regex_result_296==1||regex_result_296>0,        _if_conditional105) {
            result_287=*(int*)come_range_check(&((int*)come_null_check(start_284, "libneo-c-str.c", 1239, 1276))[0],((int*)come_null_check(start_284, "libneo-c-str.c", 1239, 1276)),((int*)come_null_check(start_284, "libneo-c-str.c", 1239, 1276))+(ovec_max_283), "libneo-c-str.c", 1239);
            break;
        }
        {
            break;
        }
    }
    __result171__ = result_287;
    return __result171__;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
unsigned long int __exception_result_var_b240;
int len_299;
int __exception_result_var_b241;
_Bool _if_conditional106;
void* right_value199;
char* __exception_result_var_b242;
char* __result172__;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value200;
char* __exception_result_var_b243;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_299, 0, sizeof(int));
right_value199 = (void*)0;
right_value200 = (void*)0;
    len_299=(come_push_stackframe("libneo-c-str.c", 1254, 1277),__exception_result_var_b240=strlen(self), come_pop_stackframe(), __exception_result_var_b240);
    if(_if_conditional106=(come_push_stackframe("libneo-c-str.c", 1256, 1278),__exception_result_var_b241=strcmp(self,""), come_pop_stackframe(), __exception_result_var_b241)==0,    _if_conditional106) {
        __result172__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 1257, 1279),__exception_result_var_b242=((char*)(right_value199=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b242);
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result172__;
    }
    if(_if_conditional107=index<0,    _if_conditional107) {
        index+=len_299;
    }
    if(_if_conditional108=index>=len_299,    _if_conditional108) {
        index=len_299-1;
    }
    if(_if_conditional109=index<0,    _if_conditional109) {
        index=0;
    }
    ((char*)come_null_check(self, "libneo-c-str.c", 1272, 1280))[index]=c;
    __result173__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 1274, 1281),__exception_result_var_b243=((char*)(right_value200=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b243);
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result173__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
unsigned long int __exception_result_var_b244;
int len_300;
void* right_value201;
char* result_301;
int i_302;
char* __exception_result_var_b245;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_300, 0, sizeof(int));
right_value201 = (void*)0;
memset(&result_301, 0, sizeof(char*));
memset(&i_302, 0, sizeof(int));
    len_300=(come_push_stackframe("libneo-c-str.c", 1279, 1282),__exception_result_var_b244=strlen(str), come_pop_stackframe(), __exception_result_var_b244)*n+1;
    result_301=(char*)come_increment_ref_count(((char*)(right_value201=(char*)come_calloc(1, sizeof(char)*(1*(len_300)), "libneo-c-str.c", 1281, "char"))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((char*)come_null_check(result_301, "libneo-c-str.c", 1283, 1283))[0]=0;
    for(    i_302=0;    i_302<n;    i_302++    ){
        (come_push_stackframe("libneo-c-str.c", 1286, 1284),__exception_result_var_b245=strcat(result_301,str), come_pop_stackframe(), __exception_result_var_b245);
    }
    __result174__ = __result_obj__ = result_301;
    result_301 = come_decrement_ref_count2(result_301, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result174__;
    result_301 = come_decrement_ref_count2(result_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
int offset_303;
int ovec_max_304;
const char* err_308;
int erro_ofs_309;
int options_310;
char* str_311;
struct real_pcre8_or_16* re_312;
void* right_value202;
void* right_value203;
struct buffer* __exception_result_var_b246;
struct buffer* result_313;
_Bool _while_condtional21;
int options_314;
unsigned long int __exception_result_var_b247;
int len_315;
int __exception_result_var_b248;
int regex_result_316;
int i_317;
int i_318;
_Bool _if_conditional110;
void* right_value204;
char* __exception_result_var_b249;
char* str_319;
struct buffer* __exception_result_var_b250;
struct buffer* __exception_result_var_b251;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value205;
char* __exception_result_var_b252;
char* str_320;
struct buffer* __exception_result_var_b253;
void* right_value206;
char* __exception_result_var_b254;
char* str_321;
struct buffer* __exception_result_var_b255;
void* right_value207;
char* __exception_result_var_b256;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_303, 0, sizeof(int));
memset(&ovec_max_304, 0, sizeof(int));
memset(&err_308, 0, sizeof(const char*));
memset(&erro_ofs_309, 0, sizeof(int));
memset(&options_310, 0, sizeof(int));
memset(&str_311, 0, sizeof(char*));
memset(&re_312, 0, sizeof(struct real_pcre8_or_16*));
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&result_313, 0, sizeof(struct buffer*));
memset(&options_314, 0, sizeof(int));
memset(&len_315, 0, sizeof(int));
memset(&regex_result_316, 0, sizeof(int));
memset(&i_317, 0, sizeof(int));
memset(&i_318, 0, sizeof(int));
right_value204 = (void*)0;
memset(&str_319, 0, sizeof(char*));
right_value205 = (void*)0;
memset(&str_320, 0, sizeof(char*));
right_value206 = (void*)0;
memset(&str_321, 0, sizeof(char*));
right_value207 = (void*)0;
    offset_303=0;
    ovec_max_304=16;
    int start_305[ovec_max_304];
    memset(&start_305, 0, sizeof(int)    *(ovec_max_304)    );
    int end_306[ovec_max_304];
    memset(&end_306, 0, sizeof(int)    *(ovec_max_304)    );
    int ovec_value_307[ovec_max_304*3];
    memset(&ovec_value_307, 0, sizeof(int)    *(ovec_max_304*3)    );
    options_310=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1304, 1285)), "libneo-c-str.c", 1304, 1286))->options;
    str_311=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1305, 1287)), "libneo-c-str.c", 1305, 1288))->str;
    re_312=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1307, 1289)), "libneo-c-str.c", 1307, 1290))->re;
    result_313=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1309, 1293),__exception_result_var_b246=((struct buffer*)(right_value203=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value202=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1309, "buffer"))), "libneo-c-str.c", 1309, 1291)), "libneo-c-str.c", 1309, 1292)))))), come_pop_stackframe(), __exception_result_var_b246));
    come_call_finalizer3(right_value202,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value203,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        options_314=2097152;
        len_315=(come_push_stackframe("libneo-c-str.c", 1313, 1294),__exception_result_var_b247=strlen(self), come_pop_stackframe(), __exception_result_var_b247);
        regex_result_316=(come_push_stackframe("libneo-c-str.c", 1314, 1295),__exception_result_var_b248=pcre_exec(re_312,(struct pcre_extra*)0,self,len_315,offset_303,options_314,ovec_value_307,ovec_max_304*3), come_pop_stackframe(), __exception_result_var_b248);
        for(        i_317=0;        i_317<ovec_max_304;        i_317++        ){
            (come_range_check(&((int*)come_null_check(start_305, "libneo-c-str.c", 1317, 1296))[i_317],((int*)come_null_check(start_305, "libneo-c-str.c", 1317, 1296)),((int*)come_null_check(start_305, "libneo-c-str.c", 1317, 1296))+(ovec_max_304), "libneo-c-str.c", 1317), ((int*)come_null_check(start_305, "libneo-c-str.c", 1317, 1296))[i_317]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_307, "libneo-c-str.c", 1317, 1297))[i_317*2],((int*)come_null_check(ovec_value_307, "libneo-c-str.c", 1317, 1297)),((int*)come_null_check(ovec_value_307, "libneo-c-str.c", 1317, 1297))+(ovec_max_304*3), "libneo-c-str.c", 1317));
        }
        for(        i_318=0;        i_318<ovec_max_304;        i_318++        ){
            (come_range_check(&((int*)come_null_check(end_306, "libneo-c-str.c", 1320, 1298))[i_318],((int*)come_null_check(end_306, "libneo-c-str.c", 1320, 1298)),((int*)come_null_check(end_306, "libneo-c-str.c", 1320, 1298))+(ovec_max_304), "libneo-c-str.c", 1320), ((int*)come_null_check(end_306, "libneo-c-str.c", 1320, 1298))[i_318]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_307, "libneo-c-str.c", 1320, 1299))[i_318*2+1],((int*)come_null_check(ovec_value_307, "libneo-c-str.c", 1320, 1299)),((int*)come_null_check(ovec_value_307, "libneo-c-str.c", 1320, 1299))+(ovec_max_304*3), "libneo-c-str.c", 1320));
        }
        if(_if_conditional110=regex_result_316==1,        _if_conditional110) {
            str_319=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1326, 1303),__exception_result_var_b249=((char*)(right_value204=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1326, 1300)), "libneo-c-str.c", 1326, 1301)),offset_303,*(int*)come_range_check(&((int*)come_null_check(start_305, "libneo-c-str.c", 1326, 1302))[0],((int*)come_null_check(start_305, "libneo-c-str.c", 1326, 1302)),((int*)come_null_check(start_305, "libneo-c-str.c", 1326, 1302))+(ovec_max_304), "libneo-c-str.c", 1326)))), come_pop_stackframe(), __exception_result_var_b249));
            right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1328, 1306),__exception_result_var_b250=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_313, "libneo-c-str.c", 1328, 1304)), "libneo-c-str.c", 1328, 1305)),str_319), come_pop_stackframe(), __exception_result_var_b250);
            (come_push_stackframe("libneo-c-str.c", 1329, 1309),__exception_result_var_b251=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_313, "libneo-c-str.c", 1329, 1307)), "libneo-c-str.c", 1329, 1308)),replace), come_pop_stackframe(), __exception_result_var_b251);
            if(_if_conditional111=offset_303==*(int*)come_range_check(&((int*)come_null_check(end_306, "libneo-c-str.c", 1331, 1310))[0],((int*)come_null_check(end_306, "libneo-c-str.c", 1331, 1310)),((int*)come_null_check(end_306, "libneo-c-str.c", 1331, 1310))+(ovec_max_304), "libneo-c-str.c", 1331),            _if_conditional111) {
                offset_303++;
            }
            else {
                offset_303=*(int*)come_range_check(&((int*)come_null_check(end_306, "libneo-c-str.c", 1335, 1311))[0],((int*)come_null_check(end_306, "libneo-c-str.c", 1335, 1311)),((int*)come_null_check(end_306, "libneo-c-str.c", 1335, 1311))+(ovec_max_304), "libneo-c-str.c", 1335);
            }
            if(_if_conditional112=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1338, 1312)), "libneo-c-str.c", 1338, 1313))->global,            _if_conditional112) {
                str_320=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1339, 1316),__exception_result_var_b252=((char*)(right_value205=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1339, 1314)), "libneo-c-str.c", 1339, 1315)),offset_303,-1))), come_pop_stackframe(), __exception_result_var_b252));
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 1340, 1319),__exception_result_var_b253=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_313, "libneo-c-str.c", 1340, 1317)), "libneo-c-str.c", 1340, 1318)),str_320), come_pop_stackframe(), __exception_result_var_b253);
                str_320 = come_decrement_ref_count2(str_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_319 = come_decrement_ref_count2(str_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_320 = come_decrement_ref_count2(str_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_319 = come_decrement_ref_count2(str_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_321=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1346, 1322),__exception_result_var_b254=((char*)(right_value206=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1346, 1320)), "libneo-c-str.c", 1346, 1321)),offset_303,-1))), come_pop_stackframe(), __exception_result_var_b254));
            right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1347, 1325),__exception_result_var_b255=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_313, "libneo-c-str.c", 1347, 1323)), "libneo-c-str.c", 1347, 1324)),str_321), come_pop_stackframe(), __exception_result_var_b255);
            str_321 = come_decrement_ref_count2(str_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_321 = come_decrement_ref_count2(str_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result175__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 1352, 1328),__exception_result_var_b256=((char*)(right_value207=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_313, "libneo-c-str.c", 1352, 1326)), "libneo-c-str.c", 1352, 1327))))), come_pop_stackframe(), __exception_result_var_b256);
    come_call_finalizer3(result_313,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result175__;
    come_call_finalizer3(result_313,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
int offset_322;
int ovec_max_323;
const char* err_327;
int erro_ofs_328;
int options_329;
char* str_330;
struct real_pcre8_or_16* re_331;
void* right_value208;
void* right_value209;
struct buffer* __exception_result_var_b257;
struct buffer* result_332;
int n_333;
_Bool _while_condtional22;
int options_334;
unsigned long int __exception_result_var_b258;
int len_335;
int __exception_result_var_b259;
int regex_result_336;
int i_337;
int i_338;
_Bool _if_conditional113;
void* right_value210;
char* __exception_result_var_b260;
char* str_339;
struct buffer* __exception_result_var_b261;
struct buffer* __exception_result_var_b262;
_Bool _if_conditional114;
_Bool _if_conditional115;
void* right_value211;
char* __exception_result_var_b263;
char* str_340;
struct buffer* __exception_result_var_b264;
_Bool _if_conditional116;
void* right_value212;
char* __exception_result_var_b265;
char* str_341;
struct buffer* __exception_result_var_b266;
void* right_value213;
char* __exception_result_var_b267;
char* str_342;
struct buffer* __exception_result_var_b268;
void* right_value214;
char* __exception_result_var_b269;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_322, 0, sizeof(int));
memset(&ovec_max_323, 0, sizeof(int));
memset(&err_327, 0, sizeof(const char*));
memset(&erro_ofs_328, 0, sizeof(int));
memset(&options_329, 0, sizeof(int));
memset(&str_330, 0, sizeof(char*));
memset(&re_331, 0, sizeof(struct real_pcre8_or_16*));
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&result_332, 0, sizeof(struct buffer*));
memset(&n_333, 0, sizeof(int));
memset(&options_334, 0, sizeof(int));
memset(&len_335, 0, sizeof(int));
memset(&regex_result_336, 0, sizeof(int));
memset(&i_337, 0, sizeof(int));
memset(&i_338, 0, sizeof(int));
right_value210 = (void*)0;
memset(&str_339, 0, sizeof(char*));
right_value211 = (void*)0;
memset(&str_340, 0, sizeof(char*));
right_value212 = (void*)0;
memset(&str_341, 0, sizeof(char*));
right_value213 = (void*)0;
memset(&str_342, 0, sizeof(char*));
right_value214 = (void*)0;
    offset_322=0;
    ovec_max_323=16;
    int start_324[ovec_max_323];
    memset(&start_324, 0, sizeof(int)    *(ovec_max_323)    );
    int end_325[ovec_max_323];
    memset(&end_325, 0, sizeof(int)    *(ovec_max_323)    );
    int ovec_value_326[ovec_max_323*3];
    memset(&ovec_value_326, 0, sizeof(int)    *(ovec_max_323*3)    );
    options_329=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1367, 1329)), "libneo-c-str.c", 1367, 1330))->options;
    str_330=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1368, 1331)), "libneo-c-str.c", 1368, 1332))->str;
    re_331=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1370, 1333)), "libneo-c-str.c", 1370, 1334))->re;
    result_332=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1372, 1337),__exception_result_var_b257=((struct buffer*)(right_value209=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value208=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1372, "buffer"))), "libneo-c-str.c", 1372, 1335)), "libneo-c-str.c", 1372, 1336)))))), come_pop_stackframe(), __exception_result_var_b257));
    come_call_finalizer3(right_value208,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value209,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    n_333=0;
    while(_while_condtional22=(_Bool)1,    _while_condtional22) {
        options_334=2097152;
        len_335=(come_push_stackframe("libneo-c-str.c", 1378, 1338),__exception_result_var_b258=strlen(self), come_pop_stackframe(), __exception_result_var_b258);
        regex_result_336=(come_push_stackframe("libneo-c-str.c", 1379, 1339),__exception_result_var_b259=pcre_exec(re_331,(struct pcre_extra*)0,self,len_335,offset_322,options_334,ovec_value_326,ovec_max_323*3), come_pop_stackframe(), __exception_result_var_b259);
        for(        i_337=0;        i_337<ovec_max_323;        i_337++        ){
            (come_range_check(&((int*)come_null_check(start_324, "libneo-c-str.c", 1382, 1340))[i_337],((int*)come_null_check(start_324, "libneo-c-str.c", 1382, 1340)),((int*)come_null_check(start_324, "libneo-c-str.c", 1382, 1340))+(ovec_max_323), "libneo-c-str.c", 1382), ((int*)come_null_check(start_324, "libneo-c-str.c", 1382, 1340))[i_337]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_326, "libneo-c-str.c", 1382, 1341))[i_337*2],((int*)come_null_check(ovec_value_326, "libneo-c-str.c", 1382, 1341)),((int*)come_null_check(ovec_value_326, "libneo-c-str.c", 1382, 1341))+(ovec_max_323*3), "libneo-c-str.c", 1382));
        }
        for(        i_338=0;        i_338<ovec_max_323;        i_338++        ){
            (come_range_check(&((int*)come_null_check(end_325, "libneo-c-str.c", 1385, 1342))[i_338],((int*)come_null_check(end_325, "libneo-c-str.c", 1385, 1342)),((int*)come_null_check(end_325, "libneo-c-str.c", 1385, 1342))+(ovec_max_323), "libneo-c-str.c", 1385), ((int*)come_null_check(end_325, "libneo-c-str.c", 1385, 1342))[i_338]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_326, "libneo-c-str.c", 1385, 1343))[i_338*2+1],((int*)come_null_check(ovec_value_326, "libneo-c-str.c", 1385, 1343)),((int*)come_null_check(ovec_value_326, "libneo-c-str.c", 1385, 1343))+(ovec_max_323*3), "libneo-c-str.c", 1385));
        }
        if(_if_conditional113=regex_result_336==1,        _if_conditional113) {
            n_333++;
            str_339=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1392, 1347),__exception_result_var_b260=((char*)(right_value210=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1392, 1344)), "libneo-c-str.c", 1392, 1345)),offset_322,*(int*)come_range_check(&((int*)come_null_check(start_324, "libneo-c-str.c", 1392, 1346))[0],((int*)come_null_check(start_324, "libneo-c-str.c", 1392, 1346)),((int*)come_null_check(start_324, "libneo-c-str.c", 1392, 1346))+(ovec_max_323), "libneo-c-str.c", 1392)))), come_pop_stackframe(), __exception_result_var_b260));
            right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1394, 1350),__exception_result_var_b261=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_332, "libneo-c-str.c", 1394, 1348)), "libneo-c-str.c", 1394, 1349)),str_339), come_pop_stackframe(), __exception_result_var_b261);
            (come_push_stackframe("libneo-c-str.c", 1395, 1353),__exception_result_var_b262=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_332, "libneo-c-str.c", 1395, 1351)), "libneo-c-str.c", 1395, 1352)),replace), come_pop_stackframe(), __exception_result_var_b262);
            if(_if_conditional114=offset_322==*(int*)come_range_check(&((int*)come_null_check(end_325, "libneo-c-str.c", 1397, 1354))[0],((int*)come_null_check(end_325, "libneo-c-str.c", 1397, 1354)),((int*)come_null_check(end_325, "libneo-c-str.c", 1397, 1354))+(ovec_max_323), "libneo-c-str.c", 1397),            _if_conditional114) {
                offset_322++;
            }
            else {
                offset_322=*(int*)come_range_check(&((int*)come_null_check(end_325, "libneo-c-str.c", 1401, 1355))[0],((int*)come_null_check(end_325, "libneo-c-str.c", 1401, 1355)),((int*)come_null_check(end_325, "libneo-c-str.c", 1401, 1355))+(ovec_max_323), "libneo-c-str.c", 1401);
            }
            if(_if_conditional115=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1404, 1356)), "libneo-c-str.c", 1404, 1357))->global,            _if_conditional115) {
                str_340=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1405, 1360),__exception_result_var_b263=((char*)(right_value211=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1405, 1358)), "libneo-c-str.c", 1405, 1359)),offset_322,-1))), come_pop_stackframe(), __exception_result_var_b263));
                right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 1406, 1363),__exception_result_var_b264=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_332, "libneo-c-str.c", 1406, 1361)), "libneo-c-str.c", 1406, 1362)),str_340), come_pop_stackframe(), __exception_result_var_b264);
                str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional116=n_333==count,            _if_conditional116) {
                str_341=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1410, 1366),__exception_result_var_b265=((char*)(right_value212=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1410, 1364)), "libneo-c-str.c", 1410, 1365)),offset_322,-1))), come_pop_stackframe(), __exception_result_var_b265));
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 1411, 1369),__exception_result_var_b266=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_332, "libneo-c-str.c", 1411, 1367)), "libneo-c-str.c", 1411, 1368)),str_341), come_pop_stackframe(), __exception_result_var_b266);
                str_341 = come_decrement_ref_count2(str_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_341 = come_decrement_ref_count2(str_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_342=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1417, 1372),__exception_result_var_b267=((char*)(right_value213=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1417, 1370)), "libneo-c-str.c", 1417, 1371)),offset_322,-1))), come_pop_stackframe(), __exception_result_var_b267));
            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1418, 1375),__exception_result_var_b268=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_332, "libneo-c-str.c", 1418, 1373)), "libneo-c-str.c", 1418, 1374)),str_342), come_pop_stackframe(), __exception_result_var_b268);
            str_342 = come_decrement_ref_count2(str_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_342 = come_decrement_ref_count2(str_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result176__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 1423, 1378),__exception_result_var_b269=((char*)(right_value214=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_332, "libneo-c-str.c", 1423, 1376)), "libneo-c-str.c", 1423, 1377))))), come_pop_stackframe(), __exception_result_var_b269);
    come_call_finalizer3(result_332,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result176__;
    come_call_finalizer3(result_332,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
void* right_value215;
void* right_value216;
struct list$1charph* __exception_result_var_b270;
struct list$1charph* result_343;
void* right_value217;
void* right_value218;
struct buffer* __exception_result_var_b271;
struct buffer* buf_344;
int i_345;
int __exception_result_var_b272;
char* __exception_result_var_b273;
_Bool _if_conditional117;
void* right_value219;
char* __exception_result_var_b274;
struct list$1charph* __exception_result_var_b275;
unsigned long int __exception_result_var_b276;
struct buffer* __exception_result_var_b277;
int __exception_result_var_b278;
_Bool _if_conditional118;
void* right_value220;
char* __exception_result_var_b279;
struct list$1charph* __exception_result_var_b280;
struct list$1charph* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&result_343, 0, sizeof(struct list$1charph*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&buf_344, 0, sizeof(struct buffer*));
memset(&i_345, 0, sizeof(int));
right_value219 = (void*)0;
right_value220 = (void*)0;
    result_343=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1431, 1381),__exception_result_var_b270=((struct list$1charph*)(right_value216=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value215=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1431, "list$1charph"))), "libneo-c-str.c", 1431, 1379)), "libneo-c-str.c", 1431, 1380)))))), come_pop_stackframe(), __exception_result_var_b270));
    come_call_finalizer3(right_value215,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value216,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    buf_344=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1433, 1384),__exception_result_var_b271=((struct buffer*)(right_value218=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value217=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1433, "buffer"))), "libneo-c-str.c", 1433, 1382)), "libneo-c-str.c", 1433, 1383)))))), come_pop_stackframe(), __exception_result_var_b271));
    come_call_finalizer3(right_value217,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value218,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_345=0;    i_345<(come_push_stackframe("libneo-c-str.c", 1435, 1387),__exception_result_var_b272=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1435, 1385)), "libneo-c-str.c", 1435, 1386))), come_pop_stackframe(), __exception_result_var_b272);    i_345++    ){
        if(_if_conditional117=(come_push_stackframe("libneo-c-str.c", 1436, 1388),__exception_result_var_b273=strstr(self+i_345,str), come_pop_stackframe(), __exception_result_var_b273)==self+i_345,        _if_conditional117) {
            (come_push_stackframe("libneo-c-str.c", 1437, 1394),__exception_result_var_b275=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_343, "libneo-c-str.c", 1437, 1389)), "libneo-c-str.c", 1437, 1390)),(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1437, 1393),__exception_result_var_b274=((char*)(right_value219=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_344, "libneo-c-str.c", 1437, 1391)), "libneo-c-str.c", 1437, 1392))->buf))), come_pop_stackframe(), __exception_result_var_b274))), come_pop_stackframe(), __exception_result_var_b275);
            right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1438,1397),buffer_reset(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_344, "libneo-c-str.c", 1438, 1395)), "libneo-c-str.c", 1438, 1396))),come_pop_stackframe());
            i_345+=(come_push_stackframe("libneo-c-str.c", 1439, 1398),__exception_result_var_b276=strlen(str), come_pop_stackframe(), __exception_result_var_b276)-1;
        }
        else {
            (come_push_stackframe("libneo-c-str.c", 1442, 1402),__exception_result_var_b277=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_344, "libneo-c-str.c", 1442, 1399)), "libneo-c-str.c", 1442, 1400)),((char*)come_null_check(self, "libneo-c-str.c", 1442, 1401))[i_345]), come_pop_stackframe(), __exception_result_var_b277);
        }
    }
    if(_if_conditional118=(come_push_stackframe("libneo-c-str.c", 1445, 1405),__exception_result_var_b278=buffer_length(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_344, "libneo-c-str.c", 1445, 1403)), "libneo-c-str.c", 1445, 1404))), come_pop_stackframe(), __exception_result_var_b278)!=0,    _if_conditional118) {
        (come_push_stackframe("libneo-c-str.c", 1446, 1411),__exception_result_var_b280=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_343, "libneo-c-str.c", 1446, 1406)), "libneo-c-str.c", 1446, 1407)),(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1446, 1410),__exception_result_var_b279=((char*)(right_value220=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_344, "libneo-c-str.c", 1446, 1408)), "libneo-c-str.c", 1446, 1409))->buf))), come_pop_stackframe(), __exception_result_var_b279))), come_pop_stackframe(), __exception_result_var_b280);
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result177__ = __result_obj__ = result_343;
    come_call_finalizer3(result_343,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(buf_344,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result177__;
    come_call_finalizer3(result_343,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_344,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value221;
void* right_value222;
struct list$1charph* __exception_result_var_b281;
struct list$1charph* result_346;
int offset_347;
int ovec_max_348;
const char* err_352;
int erro_ofs_353;
int options_354;
char* str_355;
struct real_pcre8_or_16* re_356;
_Bool _while_condtional23;
int options_357;
unsigned long int __exception_result_var_b282;
int len_358;
int __exception_result_var_b283;
int regex_result_359;
int i_360;
int i_361;
_Bool _if_conditional119;
void* right_value223;
char* __exception_result_var_b284;
char* str_362;
struct list$1charph* __exception_result_var_b285;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value224;
char* __exception_result_var_b286;
char* str_363;
struct list$1charph* __exception_result_var_b287;
_Bool _if_conditional122;
int i_364;
void* right_value225;
char* __exception_result_var_b288;
char* match_string_365;
struct list$1charph* __exception_result_var_b289;
struct list$1charph* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&result_346, 0, sizeof(struct list$1charph*));
memset(&offset_347, 0, sizeof(int));
memset(&ovec_max_348, 0, sizeof(int));
memset(&err_352, 0, sizeof(const char*));
memset(&erro_ofs_353, 0, sizeof(int));
memset(&options_354, 0, sizeof(int));
memset(&str_355, 0, sizeof(char*));
memset(&re_356, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_357, 0, sizeof(int));
memset(&len_358, 0, sizeof(int));
memset(&regex_result_359, 0, sizeof(int));
memset(&i_360, 0, sizeof(int));
memset(&i_361, 0, sizeof(int));
right_value223 = (void*)0;
memset(&str_362, 0, sizeof(char*));
right_value224 = (void*)0;
memset(&str_363, 0, sizeof(char*));
memset(&i_364, 0, sizeof(int));
right_value225 = (void*)0;
memset(&match_string_365, 0, sizeof(char*));
    result_346=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1454, 1414),__exception_result_var_b281=((struct list$1charph*)(right_value222=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value221=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1454, "list$1charph"))), "libneo-c-str.c", 1454, 1412)), "libneo-c-str.c", 1454, 1413)))))), come_pop_stackframe(), __exception_result_var_b281));
    come_call_finalizer3(right_value221,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value222,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_347=0;
    ovec_max_348=16;
    int start_349[ovec_max_348];
    memset(&start_349, 0, sizeof(int)    *(ovec_max_348)    );
    int end_350[ovec_max_348];
    memset(&end_350, 0, sizeof(int)    *(ovec_max_348)    );
    int ovec_value_351[ovec_max_348*3];
    memset(&ovec_value_351, 0, sizeof(int)    *(ovec_max_348*3)    );
    options_354=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1466, 1415)), "libneo-c-str.c", 1466, 1416))->options;
    str_355=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1467, 1417)), "libneo-c-str.c", 1467, 1418))->str;
    re_356=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1469, 1419)), "libneo-c-str.c", 1469, 1420))->re;
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        options_357=2097152;
        len_358=(come_push_stackframe("libneo-c-str.c", 1474, 1421),__exception_result_var_b282=strlen(self), come_pop_stackframe(), __exception_result_var_b282);
        regex_result_359=(come_push_stackframe("libneo-c-str.c", 1475, 1422),__exception_result_var_b283=pcre_exec(re_356,(struct pcre_extra*)0,self,len_358,offset_347,options_357,ovec_value_351,ovec_max_348*3), come_pop_stackframe(), __exception_result_var_b283);
        for(        i_360=0;        i_360<ovec_max_348;        i_360++        ){
            (come_range_check(&((int*)come_null_check(start_349, "libneo-c-str.c", 1478, 1423))[i_360],((int*)come_null_check(start_349, "libneo-c-str.c", 1478, 1423)),((int*)come_null_check(start_349, "libneo-c-str.c", 1478, 1423))+(ovec_max_348), "libneo-c-str.c", 1478), ((int*)come_null_check(start_349, "libneo-c-str.c", 1478, 1423))[i_360]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_351, "libneo-c-str.c", 1478, 1424))[i_360*2],((int*)come_null_check(ovec_value_351, "libneo-c-str.c", 1478, 1424)),((int*)come_null_check(ovec_value_351, "libneo-c-str.c", 1478, 1424))+(ovec_max_348*3), "libneo-c-str.c", 1478));
        }
        for(        i_361=0;        i_361<ovec_max_348;        i_361++        ){
            (come_range_check(&((int*)come_null_check(end_350, "libneo-c-str.c", 1481, 1425))[i_361],((int*)come_null_check(end_350, "libneo-c-str.c", 1481, 1425)),((int*)come_null_check(end_350, "libneo-c-str.c", 1481, 1425))+(ovec_max_348), "libneo-c-str.c", 1481), ((int*)come_null_check(end_350, "libneo-c-str.c", 1481, 1425))[i_361]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_351, "libneo-c-str.c", 1481, 1426))[i_361*2+1],((int*)come_null_check(ovec_value_351, "libneo-c-str.c", 1481, 1426)),((int*)come_null_check(ovec_value_351, "libneo-c-str.c", 1481, 1426))+(ovec_max_348*3), "libneo-c-str.c", 1481));
        }
        if(_if_conditional119=regex_result_359==1,        _if_conditional119) {
            str_362=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1487, 1431),__exception_result_var_b284=((char*)(right_value223=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1487, 1427)), "libneo-c-str.c", 1487, 1428)),*(int*)come_range_check(&((int*)come_null_check(start_349, "libneo-c-str.c", 1487, 1429))[0],((int*)come_null_check(start_349, "libneo-c-str.c", 1487, 1429)),((int*)come_null_check(start_349, "libneo-c-str.c", 1487, 1429))+(ovec_max_348), "libneo-c-str.c", 1487),*(int*)come_range_check(&((int*)come_null_check(end_350, "libneo-c-str.c", 1487, 1430))[0],((int*)come_null_check(end_350, "libneo-c-str.c", 1487, 1430)),((int*)come_null_check(end_350, "libneo-c-str.c", 1487, 1430))+(ovec_max_348), "libneo-c-str.c", 1487)))), come_pop_stackframe(), __exception_result_var_b284));
            right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1489, 1434),__exception_result_var_b285=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_346, "libneo-c-str.c", 1489, 1432)), "libneo-c-str.c", 1489, 1433)),(char*)come_increment_ref_count(str_362)), come_pop_stackframe(), __exception_result_var_b285);
            if(_if_conditional120=offset_347==*(int*)come_range_check(&((int*)come_null_check(end_350, "libneo-c-str.c", 1491, 1435))[0],((int*)come_null_check(end_350, "libneo-c-str.c", 1491, 1435)),((int*)come_null_check(end_350, "libneo-c-str.c", 1491, 1435))+(ovec_max_348), "libneo-c-str.c", 1491),            _if_conditional120) {
                offset_347++;
            }
            else {
                offset_347=*(int*)come_range_check(&((int*)come_null_check(end_350, "libneo-c-str.c", 1495, 1436))[0],((int*)come_null_check(end_350, "libneo-c-str.c", 1495, 1436)),((int*)come_null_check(end_350, "libneo-c-str.c", 1495, 1436))+(ovec_max_348), "libneo-c-str.c", 1495);
            }
            str_362 = come_decrement_ref_count2(str_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional121=regex_result_359>1,            _if_conditional121) {
                str_363=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1500, 1441),__exception_result_var_b286=((char*)(right_value224=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1500, 1437)), "libneo-c-str.c", 1500, 1438)),*(int*)come_range_check(&((int*)come_null_check(start_349, "libneo-c-str.c", 1500, 1439))[0],((int*)come_null_check(start_349, "libneo-c-str.c", 1500, 1439)),((int*)come_null_check(start_349, "libneo-c-str.c", 1500, 1439))+(ovec_max_348), "libneo-c-str.c", 1500),*(int*)come_range_check(&((int*)come_null_check(end_350, "libneo-c-str.c", 1500, 1440))[0],((int*)come_null_check(end_350, "libneo-c-str.c", 1500, 1440)),((int*)come_null_check(end_350, "libneo-c-str.c", 1500, 1440))+(ovec_max_348), "libneo-c-str.c", 1500)))), come_pop_stackframe(), __exception_result_var_b286));
                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 1501, 1444),__exception_result_var_b287=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_346, "libneo-c-str.c", 1501, 1442)), "libneo-c-str.c", 1501, 1443)),(char*)come_increment_ref_count(str_363)), come_pop_stackframe(), __exception_result_var_b287);
                if(_if_conditional122=offset_347==*(int*)come_range_check(&((int*)come_null_check(end_350, "libneo-c-str.c", 1503, 1445))[0],((int*)come_null_check(end_350, "libneo-c-str.c", 1503, 1445)),((int*)come_null_check(end_350, "libneo-c-str.c", 1503, 1445))+(ovec_max_348), "libneo-c-str.c", 1503),                _if_conditional122) {
                    offset_347++;
                }
                else {
                    offset_347=*(int*)come_range_check(&((int*)come_null_check(end_350, "libneo-c-str.c", 1507, 1446))[0],((int*)come_null_check(end_350, "libneo-c-str.c", 1507, 1446)),((int*)come_null_check(end_350, "libneo-c-str.c", 1507, 1446))+(ovec_max_348), "libneo-c-str.c", 1507);
                }
                for(                i_364=1;                i_364<regex_result_359;                i_364++                ){
                    match_string_365=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1511, 1451),__exception_result_var_b288=((char*)(right_value225=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1511, 1447)), "libneo-c-str.c", 1511, 1448)),*(int*)come_range_check(&((int*)come_null_check(start_349, "libneo-c-str.c", 1511, 1449))[i_364],((int*)come_null_check(start_349, "libneo-c-str.c", 1511, 1449)),((int*)come_null_check(start_349, "libneo-c-str.c", 1511, 1449))+(ovec_max_348), "libneo-c-str.c", 1511),*(int*)come_range_check(&((int*)come_null_check(end_350, "libneo-c-str.c", 1511, 1450))[i_364],((int*)come_null_check(end_350, "libneo-c-str.c", 1511, 1450)),((int*)come_null_check(end_350, "libneo-c-str.c", 1511, 1450))+(ovec_max_348), "libneo-c-str.c", 1511)))), come_pop_stackframe(), __exception_result_var_b288));
                    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 1512, 1454),__exception_result_var_b289=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_346, "libneo-c-str.c", 1512, 1452)), "libneo-c-str.c", 1512, 1453)),(char*)come_increment_ref_count(match_string_365)), come_pop_stackframe(), __exception_result_var_b289);
                    match_string_365 = come_decrement_ref_count2(match_string_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_363 = come_decrement_ref_count2(str_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result178__ = __result_obj__ = result_346;
    come_call_finalizer3(result_346,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result178__;
    come_call_finalizer3(result_346,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__;
const char* err_366;
int erro_ofs_367;
int options_368;
char* str_369;
struct real_pcre8_or_16* re_370;
void* right_value226;
void* right_value227;
struct list$1charph* __exception_result_var_b290;
struct list$1charph* result_371;
int offset_372;
int ovec_max_373;
_Bool _while_condtional24;
int options_377;
unsigned long int __exception_result_var_b291;
int len_378;
int __exception_result_var_b292;
int regex_result_379;
int i_380;
int i_381;
_Bool _if_conditional123;
void* right_value228;
char* __exception_result_var_b293;
char* str_382;
struct list$1charph* __exception_result_var_b294;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value229;
char* __exception_result_var_b295;
char* str_383;
struct list$1charph* __exception_result_var_b296;
_Bool _if_conditional126;
int i_384;
void* right_value230;
char* __exception_result_var_b297;
char* match_str_385;
struct list$1charph* __exception_result_var_b298;
int __exception_result_var_b299;
_Bool _if_conditional127;
void* right_value231;
char* __exception_result_var_b300;
char* str_386;
struct list$1charph* __exception_result_var_b301;
struct list$1charph* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_366, 0, sizeof(const char*));
memset(&erro_ofs_367, 0, sizeof(int));
memset(&options_368, 0, sizeof(int));
memset(&str_369, 0, sizeof(char*));
memset(&re_370, 0, sizeof(struct real_pcre8_or_16*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&result_371, 0, sizeof(struct list$1charph*));
memset(&offset_372, 0, sizeof(int));
memset(&ovec_max_373, 0, sizeof(int));
memset(&options_377, 0, sizeof(int));
memset(&len_378, 0, sizeof(int));
memset(&regex_result_379, 0, sizeof(int));
memset(&i_380, 0, sizeof(int));
memset(&i_381, 0, sizeof(int));
right_value228 = (void*)0;
memset(&str_382, 0, sizeof(char*));
right_value229 = (void*)0;
memset(&str_383, 0, sizeof(char*));
memset(&i_384, 0, sizeof(int));
right_value230 = (void*)0;
memset(&match_str_385, 0, sizeof(char*));
right_value231 = (void*)0;
memset(&str_386, 0, sizeof(char*));
    options_368=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1530, 1455)), "libneo-c-str.c", 1530, 1456))->options;
    str_369=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1531, 1457)), "libneo-c-str.c", 1531, 1458))->str;
    re_370=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1533, 1459)), "libneo-c-str.c", 1533, 1460))->re;
    result_371=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1535, 1463),__exception_result_var_b290=((struct list$1charph*)(right_value227=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value226=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1535, "list$1charph"))), "libneo-c-str.c", 1535, 1461)), "libneo-c-str.c", 1535, 1462)))))), come_pop_stackframe(), __exception_result_var_b290));
    come_call_finalizer3(right_value226,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value227,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_372=0;
    ovec_max_373=16;
    int start_374[ovec_max_373];
    memset(&start_374, 0, sizeof(int)    *(ovec_max_373)    );
    int end_375[ovec_max_373];
    memset(&end_375, 0, sizeof(int)    *(ovec_max_373)    );
    int ovec_value_376[ovec_max_373*3];
    memset(&ovec_value_376, 0, sizeof(int)    *(ovec_max_373*3)    );
    while(_while_condtional24=(_Bool)1,    _while_condtional24) {
        options_377=2097152;
        len_378=(come_push_stackframe("libneo-c-str.c", 1546, 1464),__exception_result_var_b291=strlen(self), come_pop_stackframe(), __exception_result_var_b291);
        regex_result_379=(come_push_stackframe("libneo-c-str.c", 1548, 1465),__exception_result_var_b292=pcre_exec(re_370,(struct pcre_extra*)0,self,len_378,offset_372,options_377,ovec_value_376,ovec_max_373*3), come_pop_stackframe(), __exception_result_var_b292);
        for(        i_380=0;        i_380<ovec_max_373;        i_380++        ){
            (come_range_check(&((int*)come_null_check(start_374, "libneo-c-str.c", 1551, 1466))[i_380],((int*)come_null_check(start_374, "libneo-c-str.c", 1551, 1466)),((int*)come_null_check(start_374, "libneo-c-str.c", 1551, 1466))+(ovec_max_373), "libneo-c-str.c", 1551), ((int*)come_null_check(start_374, "libneo-c-str.c", 1551, 1466))[i_380]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_376, "libneo-c-str.c", 1551, 1467))[i_380*2],((int*)come_null_check(ovec_value_376, "libneo-c-str.c", 1551, 1467)),((int*)come_null_check(ovec_value_376, "libneo-c-str.c", 1551, 1467))+(ovec_max_373*3), "libneo-c-str.c", 1551));
        }
        for(        i_381=0;        i_381<ovec_max_373;        i_381++        ){
            (come_range_check(&((int*)come_null_check(end_375, "libneo-c-str.c", 1554, 1468))[i_381],((int*)come_null_check(end_375, "libneo-c-str.c", 1554, 1468)),((int*)come_null_check(end_375, "libneo-c-str.c", 1554, 1468))+(ovec_max_373), "libneo-c-str.c", 1554), ((int*)come_null_check(end_375, "libneo-c-str.c", 1554, 1468))[i_381]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_376, "libneo-c-str.c", 1554, 1469))[i_381*2+1],((int*)come_null_check(ovec_value_376, "libneo-c-str.c", 1554, 1469)),((int*)come_null_check(ovec_value_376, "libneo-c-str.c", 1554, 1469))+(ovec_max_373*3), "libneo-c-str.c", 1554));
        }
        if(_if_conditional123=regex_result_379==1,        _if_conditional123) {
            str_382=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1560, 1473),__exception_result_var_b293=((char*)(right_value228=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1560, 1470)), "libneo-c-str.c", 1560, 1471)),offset_372,*(int*)come_range_check(&((int*)come_null_check(start_374, "libneo-c-str.c", 1560, 1472))[0],((int*)come_null_check(start_374, "libneo-c-str.c", 1560, 1472)),((int*)come_null_check(start_374, "libneo-c-str.c", 1560, 1472))+(ovec_max_373), "libneo-c-str.c", 1560)))), come_pop_stackframe(), __exception_result_var_b293));
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1561, 1476),__exception_result_var_b294=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_371, "libneo-c-str.c", 1561, 1474)), "libneo-c-str.c", 1561, 1475)),(char*)come_increment_ref_count(str_382)), come_pop_stackframe(), __exception_result_var_b294);
            if(_if_conditional124=offset_372==*(int*)come_range_check(&((int*)come_null_check(end_375, "libneo-c-str.c", 1563, 1477))[0],((int*)come_null_check(end_375, "libneo-c-str.c", 1563, 1477)),((int*)come_null_check(end_375, "libneo-c-str.c", 1563, 1477))+(ovec_max_373), "libneo-c-str.c", 1563),            _if_conditional124) {
                offset_372++;
            }
            else {
                offset_372=*(int*)come_range_check(&((int*)come_null_check(end_375, "libneo-c-str.c", 1567, 1478))[0],((int*)come_null_check(end_375, "libneo-c-str.c", 1567, 1478)),((int*)come_null_check(end_375, "libneo-c-str.c", 1567, 1478))+(ovec_max_373), "libneo-c-str.c", 1567);
            }
            str_382 = come_decrement_ref_count2(str_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional125=regex_result_379>1,            _if_conditional125) {
                str_383=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1572, 1482),__exception_result_var_b295=((char*)(right_value229=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1572, 1479)), "libneo-c-str.c", 1572, 1480)),offset_372,*(int*)come_range_check(&((int*)come_null_check(start_374, "libneo-c-str.c", 1572, 1481))[0],((int*)come_null_check(start_374, "libneo-c-str.c", 1572, 1481)),((int*)come_null_check(start_374, "libneo-c-str.c", 1572, 1481))+(ovec_max_373), "libneo-c-str.c", 1572)))), come_pop_stackframe(), __exception_result_var_b295));
                right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 1573, 1485),__exception_result_var_b296=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_371, "libneo-c-str.c", 1573, 1483)), "libneo-c-str.c", 1573, 1484)),(char*)come_increment_ref_count(str_383)), come_pop_stackframe(), __exception_result_var_b296);
                if(_if_conditional126=offset_372==*(int*)come_range_check(&((int*)come_null_check(end_375, "libneo-c-str.c", 1575, 1486))[0],((int*)come_null_check(end_375, "libneo-c-str.c", 1575, 1486)),((int*)come_null_check(end_375, "libneo-c-str.c", 1575, 1486))+(ovec_max_373), "libneo-c-str.c", 1575),                _if_conditional126) {
                    offset_372++;
                }
                else {
                    offset_372=*(int*)come_range_check(&((int*)come_null_check(end_375, "libneo-c-str.c", 1579, 1487))[0],((int*)come_null_check(end_375, "libneo-c-str.c", 1579, 1487)),((int*)come_null_check(end_375, "libneo-c-str.c", 1579, 1487))+(ovec_max_373), "libneo-c-str.c", 1579);
                }
                for(                i_384=1;                i_384<regex_result_379;                i_384++                ){
                    match_str_385=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1583, 1492),__exception_result_var_b297=((char*)(right_value230=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1583, 1488)), "libneo-c-str.c", 1583, 1489)),*(int*)come_range_check(&((int*)come_null_check(start_374, "libneo-c-str.c", 1583, 1490))[i_384],((int*)come_null_check(start_374, "libneo-c-str.c", 1583, 1490)),((int*)come_null_check(start_374, "libneo-c-str.c", 1583, 1490))+(ovec_max_373), "libneo-c-str.c", 1583),*(int*)come_range_check(&((int*)come_null_check(end_375, "libneo-c-str.c", 1583, 1491))[i_384],((int*)come_null_check(end_375, "libneo-c-str.c", 1583, 1491)),((int*)come_null_check(end_375, "libneo-c-str.c", 1583, 1491))+(ovec_max_373), "libneo-c-str.c", 1583)))), come_pop_stackframe(), __exception_result_var_b297));
                    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 1584, 1495),__exception_result_var_b298=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_371, "libneo-c-str.c", 1584, 1493)), "libneo-c-str.c", 1584, 1494)),(char*)come_increment_ref_count(match_str_385)), come_pop_stackframe(), __exception_result_var_b298);
                    match_str_385 = come_decrement_ref_count2(match_str_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_383 = come_decrement_ref_count2(str_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional127=offset_372<(come_push_stackframe("libneo-c-str.c", 1594, 1498),__exception_result_var_b299=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1594, 1496)), "libneo-c-str.c", 1594, 1497))), come_pop_stackframe(), __exception_result_var_b299),    _if_conditional127) {
        str_386=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1595, 1501),__exception_result_var_b300=((char*)(right_value231=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1595, 1499)), "libneo-c-str.c", 1595, 1500)),offset_372,-1))), come_pop_stackframe(), __exception_result_var_b300));
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c-str.c", 1596, 1504),__exception_result_var_b301=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_371, "libneo-c-str.c", 1596, 1502)), "libneo-c-str.c", 1596, 1503)),(char*)come_increment_ref_count(str_386)), come_pop_stackframe(), __exception_result_var_b301);
        str_386 = come_decrement_ref_count2(str_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result179__ = __result_obj__ = result_371;
    come_call_finalizer3(result_371,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result179__;
    come_call_finalizer3(result_371,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool charp_match(char* self, struct come_regex* reg){
void* __result_obj__;
int offset_387;
int ovec_max_388;
const char* err_392;
int erro_ofs_393;
int options_394;
char* str_395;
struct real_pcre8_or_16* re_396;
_Bool _while_condtional25;
int options_397;
unsigned long int __exception_result_var_b302;
int len_398;
int __exception_result_var_b303;
int regex_result_399;
int i_400;
int i_401;
_Bool _if_conditional128;
_Bool __result180__;
_Bool __result181__;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_387, 0, sizeof(int));
memset(&ovec_max_388, 0, sizeof(int));
memset(&err_392, 0, sizeof(const char*));
memset(&erro_ofs_393, 0, sizeof(int));
memset(&options_394, 0, sizeof(int));
memset(&str_395, 0, sizeof(char*));
memset(&re_396, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_397, 0, sizeof(int));
memset(&len_398, 0, sizeof(int));
memset(&regex_result_399, 0, sizeof(int));
memset(&i_400, 0, sizeof(int));
memset(&i_401, 0, sizeof(int));
    offset_387=0;
    ovec_max_388=16;
    int start_389[ovec_max_388];
    memset(&start_389, 0, sizeof(int)    *(ovec_max_388)    );
    int end_390[ovec_max_388];
    memset(&end_390, 0, sizeof(int)    *(ovec_max_388)    );
    int ovec_value_391[ovec_max_388*3];
    memset(&ovec_value_391, 0, sizeof(int)    *(ovec_max_388*3)    );
    options_394=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1614, 1505)), "libneo-c-str.c", 1614, 1506))->options;
    str_395=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1615, 1507)), "libneo-c-str.c", 1615, 1508))->str;
    re_396=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1617, 1509)), "libneo-c-str.c", 1617, 1510))->re;
    while(_while_condtional25=(_Bool)1,    _while_condtional25) {
        options_397=2097152;
        len_398=(come_push_stackframe("libneo-c-str.c", 1621, 1511),__exception_result_var_b302=strlen(self), come_pop_stackframe(), __exception_result_var_b302);
        regex_result_399=(come_push_stackframe("libneo-c-str.c", 1623, 1512),__exception_result_var_b303=pcre_exec(re_396,(struct pcre_extra*)0,self,len_398,offset_387,options_397,ovec_value_391,ovec_max_388*3), come_pop_stackframe(), __exception_result_var_b303);
        for(        i_400=0;        i_400<ovec_max_388;        i_400++        ){
            (come_range_check(&((int*)come_null_check(start_389, "libneo-c-str.c", 1626, 1513))[i_400],((int*)come_null_check(start_389, "libneo-c-str.c", 1626, 1513)),((int*)come_null_check(start_389, "libneo-c-str.c", 1626, 1513))+(ovec_max_388), "libneo-c-str.c", 1626), ((int*)come_null_check(start_389, "libneo-c-str.c", 1626, 1513))[i_400]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_391, "libneo-c-str.c", 1626, 1514))[i_400*2],((int*)come_null_check(ovec_value_391, "libneo-c-str.c", 1626, 1514)),((int*)come_null_check(ovec_value_391, "libneo-c-str.c", 1626, 1514))+(ovec_max_388*3), "libneo-c-str.c", 1626));
        }
        for(        i_401=0;        i_401<ovec_max_388;        i_401++        ){
            (come_range_check(&((int*)come_null_check(end_390, "libneo-c-str.c", 1629, 1515))[i_401],((int*)come_null_check(end_390, "libneo-c-str.c", 1629, 1515)),((int*)come_null_check(end_390, "libneo-c-str.c", 1629, 1515))+(ovec_max_388), "libneo-c-str.c", 1629), ((int*)come_null_check(end_390, "libneo-c-str.c", 1629, 1515))[i_401]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_391, "libneo-c-str.c", 1629, 1516))[i_401*2+1],((int*)come_null_check(ovec_value_391, "libneo-c-str.c", 1629, 1516)),((int*)come_null_check(ovec_value_391, "libneo-c-str.c", 1629, 1516))+(ovec_max_388*3), "libneo-c-str.c", 1629));
        }
        if(_if_conditional128=regex_result_399>0,        _if_conditional128) {
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
const char* err_402;
int erro_ofs_403;
int options_404;
char* str_405;
struct real_pcre8_or_16* re_406;
void* right_value232;
void* right_value233;
struct list$1charph* __exception_result_var_b304;
struct list$1charph* result_407;
int offset_408;
int ovec_max_409;
int n_413;
_Bool _while_condtional26;
int options_414;
unsigned long int __exception_result_var_b305;
int len_415;
int __exception_result_var_b306;
int regex_result_416;
int i_417;
int i_418;
_Bool _if_conditional129;
void* right_value234;
char* __exception_result_var_b307;
char* str_419;
struct list$1charph* __exception_result_var_b308;
_Bool _if_conditional130;
_Bool _if_conditional131;
void* right_value235;
char* __exception_result_var_b309;
char* str_420;
struct list$1charph* __exception_result_var_b310;
_Bool _if_conditional132;
int i_421;
void* right_value236;
char* __exception_result_var_b311;
char* match_str_422;
struct list$1charph* __exception_result_var_b312;
_Bool _if_conditional133;
int __exception_result_var_b313;
_Bool _if_conditional134;
void* right_value237;
char* __exception_result_var_b314;
char* str_423;
struct list$1charph* __exception_result_var_b315;
struct list$1charph* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_402, 0, sizeof(const char*));
memset(&erro_ofs_403, 0, sizeof(int));
memset(&options_404, 0, sizeof(int));
memset(&str_405, 0, sizeof(char*));
memset(&re_406, 0, sizeof(struct real_pcre8_or_16*));
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&result_407, 0, sizeof(struct list$1charph*));
memset(&offset_408, 0, sizeof(int));
memset(&ovec_max_409, 0, sizeof(int));
memset(&n_413, 0, sizeof(int));
memset(&options_414, 0, sizeof(int));
memset(&len_415, 0, sizeof(int));
memset(&regex_result_416, 0, sizeof(int));
memset(&i_417, 0, sizeof(int));
memset(&i_418, 0, sizeof(int));
right_value234 = (void*)0;
memset(&str_419, 0, sizeof(char*));
right_value235 = (void*)0;
memset(&str_420, 0, sizeof(char*));
memset(&i_421, 0, sizeof(int));
right_value236 = (void*)0;
memset(&match_str_422, 0, sizeof(char*));
right_value237 = (void*)0;
memset(&str_423, 0, sizeof(char*));
    options_404=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1652, 1517)), "libneo-c-str.c", 1652, 1518))->options;
    str_405=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1653, 1519)), "libneo-c-str.c", 1653, 1520))->str;
    re_406=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1655, 1521)), "libneo-c-str.c", 1655, 1522))->re;
    result_407=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1657, 1525),__exception_result_var_b304=((struct list$1charph*)(right_value233=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value232=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1657, "list$1charph"))), "libneo-c-str.c", 1657, 1523)), "libneo-c-str.c", 1657, 1524)))))), come_pop_stackframe(), __exception_result_var_b304));
    come_call_finalizer3(right_value232,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value233,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_408=0;
    ovec_max_409=16;
    int start_410[ovec_max_409];
    memset(&start_410, 0, sizeof(int)    *(ovec_max_409)    );
    int end_411[ovec_max_409];
    memset(&end_411, 0, sizeof(int)    *(ovec_max_409)    );
    int ovec_value_412[ovec_max_409*3];
    memset(&ovec_value_412, 0, sizeof(int)    *(ovec_max_409*3)    );
    n_413=0;
    while(_while_condtional26=(_Bool)1,    _while_condtional26) {
        options_414=2097152;
        len_415=(come_push_stackframe("libneo-c-str.c", 1670, 1526),__exception_result_var_b305=strlen(self), come_pop_stackframe(), __exception_result_var_b305);
        regex_result_416=(come_push_stackframe("libneo-c-str.c", 1672, 1527),__exception_result_var_b306=pcre_exec(re_406,(struct pcre_extra*)0,self,len_415,offset_408,options_414,ovec_value_412,ovec_max_409*3), come_pop_stackframe(), __exception_result_var_b306);
        for(        i_417=0;        i_417<ovec_max_409;        i_417++        ){
            (come_range_check(&((int*)come_null_check(start_410, "libneo-c-str.c", 1675, 1528))[i_417],((int*)come_null_check(start_410, "libneo-c-str.c", 1675, 1528)),((int*)come_null_check(start_410, "libneo-c-str.c", 1675, 1528))+(ovec_max_409), "libneo-c-str.c", 1675), ((int*)come_null_check(start_410, "libneo-c-str.c", 1675, 1528))[i_417]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_412, "libneo-c-str.c", 1675, 1529))[i_417*2],((int*)come_null_check(ovec_value_412, "libneo-c-str.c", 1675, 1529)),((int*)come_null_check(ovec_value_412, "libneo-c-str.c", 1675, 1529))+(ovec_max_409*3), "libneo-c-str.c", 1675));
        }
        for(        i_418=0;        i_418<ovec_max_409;        i_418++        ){
            (come_range_check(&((int*)come_null_check(end_411, "libneo-c-str.c", 1678, 1530))[i_418],((int*)come_null_check(end_411, "libneo-c-str.c", 1678, 1530)),((int*)come_null_check(end_411, "libneo-c-str.c", 1678, 1530))+(ovec_max_409), "libneo-c-str.c", 1678), ((int*)come_null_check(end_411, "libneo-c-str.c", 1678, 1530))[i_418]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_412, "libneo-c-str.c", 1678, 1531))[i_418*2+1],((int*)come_null_check(ovec_value_412, "libneo-c-str.c", 1678, 1531)),((int*)come_null_check(ovec_value_412, "libneo-c-str.c", 1678, 1531))+(ovec_max_409*3), "libneo-c-str.c", 1678));
        }
        if(_if_conditional129=regex_result_416==1,        _if_conditional129) {
            str_419=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1684, 1535),__exception_result_var_b307=((char*)(right_value234=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1684, 1532)), "libneo-c-str.c", 1684, 1533)),offset_408,*(int*)come_range_check(&((int*)come_null_check(start_410, "libneo-c-str.c", 1684, 1534))[0],((int*)come_null_check(start_410, "libneo-c-str.c", 1684, 1534)),((int*)come_null_check(start_410, "libneo-c-str.c", 1684, 1534))+(ovec_max_409), "libneo-c-str.c", 1684)))), come_pop_stackframe(), __exception_result_var_b307));
            right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1685, 1538),__exception_result_var_b308=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_407, "libneo-c-str.c", 1685, 1536)), "libneo-c-str.c", 1685, 1537)),(char*)come_increment_ref_count(str_419)), come_pop_stackframe(), __exception_result_var_b308);
            if(_if_conditional130=offset_408==*(int*)come_range_check(&((int*)come_null_check(end_411, "libneo-c-str.c", 1687, 1539))[0],((int*)come_null_check(end_411, "libneo-c-str.c", 1687, 1539)),((int*)come_null_check(end_411, "libneo-c-str.c", 1687, 1539))+(ovec_max_409), "libneo-c-str.c", 1687),            _if_conditional130) {
                offset_408++;
            }
            else {
                offset_408=*(int*)come_range_check(&((int*)come_null_check(end_411, "libneo-c-str.c", 1691, 1540))[0],((int*)come_null_check(end_411, "libneo-c-str.c", 1691, 1540)),((int*)come_null_check(end_411, "libneo-c-str.c", 1691, 1540))+(ovec_max_409), "libneo-c-str.c", 1691);
            }
            str_419 = come_decrement_ref_count2(str_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional131=regex_result_416>1,            _if_conditional131) {
                str_420=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1696, 1544),__exception_result_var_b309=((char*)(right_value235=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1696, 1541)), "libneo-c-str.c", 1696, 1542)),offset_408,*(int*)come_range_check(&((int*)come_null_check(start_410, "libneo-c-str.c", 1696, 1543))[0],((int*)come_null_check(start_410, "libneo-c-str.c", 1696, 1543)),((int*)come_null_check(start_410, "libneo-c-str.c", 1696, 1543))+(ovec_max_409), "libneo-c-str.c", 1696)))), come_pop_stackframe(), __exception_result_var_b309));
                right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 1697, 1547),__exception_result_var_b310=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_407, "libneo-c-str.c", 1697, 1545)), "libneo-c-str.c", 1697, 1546)),(char*)come_increment_ref_count(str_420)), come_pop_stackframe(), __exception_result_var_b310);
                if(_if_conditional132=offset_408==*(int*)come_range_check(&((int*)come_null_check(end_411, "libneo-c-str.c", 1699, 1548))[0],((int*)come_null_check(end_411, "libneo-c-str.c", 1699, 1548)),((int*)come_null_check(end_411, "libneo-c-str.c", 1699, 1548))+(ovec_max_409), "libneo-c-str.c", 1699),                _if_conditional132) {
                    offset_408++;
                }
                else {
                    offset_408=*(int*)come_range_check(&((int*)come_null_check(end_411, "libneo-c-str.c", 1703, 1549))[0],((int*)come_null_check(end_411, "libneo-c-str.c", 1703, 1549)),((int*)come_null_check(end_411, "libneo-c-str.c", 1703, 1549))+(ovec_max_409), "libneo-c-str.c", 1703);
                }
                for(                i_421=1;                i_421<regex_result_416;                i_421++                ){
                    match_str_422=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1707, 1554),__exception_result_var_b311=((char*)(right_value236=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1707, 1550)), "libneo-c-str.c", 1707, 1551)),*(int*)come_range_check(&((int*)come_null_check(start_410, "libneo-c-str.c", 1707, 1552))[i_421],((int*)come_null_check(start_410, "libneo-c-str.c", 1707, 1552)),((int*)come_null_check(start_410, "libneo-c-str.c", 1707, 1552))+(ovec_max_409), "libneo-c-str.c", 1707),*(int*)come_range_check(&((int*)come_null_check(end_411, "libneo-c-str.c", 1707, 1553))[i_421],((int*)come_null_check(end_411, "libneo-c-str.c", 1707, 1553)),((int*)come_null_check(end_411, "libneo-c-str.c", 1707, 1553))+(ovec_max_409), "libneo-c-str.c", 1707)))), come_pop_stackframe(), __exception_result_var_b311));
                    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 1708, 1557),__exception_result_var_b312=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_407, "libneo-c-str.c", 1708, 1555)), "libneo-c-str.c", 1708, 1556)),(char*)come_increment_ref_count(match_str_422)), come_pop_stackframe(), __exception_result_var_b312);
                    match_str_422 = come_decrement_ref_count2(match_str_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_420 = come_decrement_ref_count2(str_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
        n_413++;
        if(_if_conditional133=maxsplit==n_413,        _if_conditional133) {
            break;
        }
    }
    if(_if_conditional134=offset_408<(come_push_stackframe("libneo-c-str.c", 1724, 1560),__exception_result_var_b313=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1724, 1558)), "libneo-c-str.c", 1724, 1559))), come_pop_stackframe(), __exception_result_var_b313),    _if_conditional134) {
        str_423=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1725, 1563),__exception_result_var_b314=((char*)(right_value237=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1725, 1561)), "libneo-c-str.c", 1725, 1562)),offset_408,-1))), come_pop_stackframe(), __exception_result_var_b314));
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c-str.c", 1726, 1566),__exception_result_var_b315=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_407, "libneo-c-str.c", 1726, 1564)), "libneo-c-str.c", 1726, 1565)),(char*)come_increment_ref_count(str_423)), come_pop_stackframe(), __exception_result_var_b315);
        str_423 = come_decrement_ref_count2(str_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result183__ = __result_obj__ = result_407;
    come_call_finalizer3(result_407,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result183__;
    come_call_finalizer3(result_407,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
const char* err_424;
int erro_ofs_425;
int options_426;
char* str_427;
struct real_pcre8_or_16* re_428;
void* right_value238;
char* __exception_result_var_b316;
char* self2_429;
int ovec_max_430;
int result_434;
int offset_435;
int n_436;
_Bool _while_condtional27;
int options_437;
unsigned long int __exception_result_var_b317;
int len_438;
int __exception_result_var_b318;
int regex_result_439;
int i_440;
int i_441;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
unsigned long int __exception_result_var_b319;
int __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&err_424, 0, sizeof(const char*));
memset(&erro_ofs_425, 0, sizeof(int));
memset(&options_426, 0, sizeof(int));
memset(&str_427, 0, sizeof(char*));
memset(&re_428, 0, sizeof(struct real_pcre8_or_16*));
right_value238 = (void*)0;
memset(&self2_429, 0, sizeof(char*));
memset(&ovec_max_430, 0, sizeof(int));
memset(&result_434, 0, sizeof(int));
memset(&offset_435, 0, sizeof(int));
memset(&n_436, 0, sizeof(int));
memset(&options_437, 0, sizeof(int));
memset(&len_438, 0, sizeof(int));
memset(&regex_result_439, 0, sizeof(int));
memset(&i_440, 0, sizeof(int));
memset(&i_441, 0, sizeof(int));
    options_426=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1737, 1567)), "libneo-c-str.c", 1737, 1568))->options;
    str_427=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1738, 1569)), "libneo-c-str.c", 1738, 1570))->str;
    re_428=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1740, 1571)), "libneo-c-str.c", 1740, 1572))->re;
    self2_429=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1742, 1575),__exception_result_var_b316=((char*)(right_value238=charp_reverse(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1742, 1573)), "libneo-c-str.c", 1742, 1574))))), come_pop_stackframe(), __exception_result_var_b316));
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ovec_max_430=16;
    int start_431[ovec_max_430];
    memset(&start_431, 0, sizeof(int)    *(ovec_max_430)    );
    int end_432[ovec_max_430];
    memset(&end_432, 0, sizeof(int)    *(ovec_max_430)    );
    int ovec_value_433[ovec_max_430*3];
    memset(&ovec_value_433, 0, sizeof(int)    *(ovec_max_430*3)    );
    result_434=default_value;
    offset_435=0;
    n_436=0;
    while(_while_condtional27=(_Bool)1,    _while_condtional27) {
        options_437=2097152;
        len_438=(come_push_stackframe("libneo-c-str.c", 1757, 1576),__exception_result_var_b317=strlen(self2_429), come_pop_stackframe(), __exception_result_var_b317);
        regex_result_439=(come_push_stackframe("libneo-c-str.c", 1758, 1577),__exception_result_var_b318=pcre_exec(re_428,(struct pcre_extra*)0,self2_429,len_438,offset_435,options_437,ovec_value_433,ovec_max_430*3), come_pop_stackframe(), __exception_result_var_b318);
        for(        i_440=0;        i_440<ovec_max_430;        i_440++        ){
            (come_range_check(&((int*)come_null_check(start_431, "libneo-c-str.c", 1761, 1578))[i_440],((int*)come_null_check(start_431, "libneo-c-str.c", 1761, 1578)),((int*)come_null_check(start_431, "libneo-c-str.c", 1761, 1578))+(ovec_max_430), "libneo-c-str.c", 1761), ((int*)come_null_check(start_431, "libneo-c-str.c", 1761, 1578))[i_440]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_433, "libneo-c-str.c", 1761, 1579))[i_440*2],((int*)come_null_check(ovec_value_433, "libneo-c-str.c", 1761, 1579)),((int*)come_null_check(ovec_value_433, "libneo-c-str.c", 1761, 1579))+(ovec_max_430*3), "libneo-c-str.c", 1761));
        }
        for(        i_441=0;        i_441<ovec_max_430;        i_441++        ){
            (come_range_check(&((int*)come_null_check(end_432, "libneo-c-str.c", 1764, 1580))[i_441],((int*)come_null_check(end_432, "libneo-c-str.c", 1764, 1580)),((int*)come_null_check(end_432, "libneo-c-str.c", 1764, 1580))+(ovec_max_430), "libneo-c-str.c", 1764), ((int*)come_null_check(end_432, "libneo-c-str.c", 1764, 1580))[i_441]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_433, "libneo-c-str.c", 1764, 1581))[i_441*2+1],((int*)come_null_check(ovec_value_433, "libneo-c-str.c", 1764, 1581)),((int*)come_null_check(ovec_value_433, "libneo-c-str.c", 1764, 1581))+(ovec_max_430*3), "libneo-c-str.c", 1764));
        }
        if(_if_conditional135=regex_result_439>0,        _if_conditional135) {
            n_436++;
            if(_if_conditional136=offset_435==*(int*)come_range_check(&((int*)come_null_check(end_432, "libneo-c-str.c", 1772, 1582))[0],((int*)come_null_check(end_432, "libneo-c-str.c", 1772, 1582)),((int*)come_null_check(end_432, "libneo-c-str.c", 1772, 1582))+(ovec_max_430), "libneo-c-str.c", 1772),            _if_conditional136) {
                offset_435++;
            }
            else {
                offset_435=*(int*)come_range_check(&((int*)come_null_check(end_432, "libneo-c-str.c", 1776, 1583))[0],((int*)come_null_check(end_432, "libneo-c-str.c", 1776, 1583)),((int*)come_null_check(end_432, "libneo-c-str.c", 1776, 1583))+(ovec_max_430), "libneo-c-str.c", 1776);
            }
            if(_if_conditional137=n_436==count,            _if_conditional137) {
                result_434=(come_push_stackframe("libneo-c-str.c", 1780, 1584),__exception_result_var_b319=strlen(self), come_pop_stackframe(), __exception_result_var_b319)-*(int*)come_range_check(&((int*)come_null_check(end_432, "libneo-c-str.c", 1780, 1585))[0],((int*)come_null_check(end_432, "libneo-c-str.c", 1780, 1585)),((int*)come_null_check(end_432, "libneo-c-str.c", 1780, 1585))+(ovec_max_430), "libneo-c-str.c", 1780);
                break;
            }
        }
        else {
            break;
        }
    }
    __result184__ = result_434;
    self2_429 = come_decrement_ref_count2(self2_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result184__;
    self2_429 = come_decrement_ref_count2(self2_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
int offset_442;
int ovec_max_443;
const char* err_447;
int erro_ofs_448;
int options_449;
char* str_450;
struct real_pcre8_or_16* re_451;
int n_452;
_Bool _while_condtional28;
int options_453;
unsigned long int __exception_result_var_b320;
int len_454;
int __exception_result_var_b321;
int regex_result_455;
int i_456;
int i_457;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool __result185__;
_Bool _if_conditional140;
_Bool __result186__;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_442, 0, sizeof(int));
memset(&ovec_max_443, 0, sizeof(int));
memset(&err_447, 0, sizeof(const char*));
memset(&erro_ofs_448, 0, sizeof(int));
memset(&options_449, 0, sizeof(int));
memset(&str_450, 0, sizeof(char*));
memset(&re_451, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_452, 0, sizeof(int));
memset(&options_453, 0, sizeof(int));
memset(&len_454, 0, sizeof(int));
memset(&regex_result_455, 0, sizeof(int));
memset(&i_456, 0, sizeof(int));
memset(&i_457, 0, sizeof(int));
    offset_442=0;
    ovec_max_443=16;
    int start_444[ovec_max_443];
    memset(&start_444, 0, sizeof(int)    *(ovec_max_443)    );
    int end_445[ovec_max_443];
    memset(&end_445, 0, sizeof(int)    *(ovec_max_443)    );
    int ovec_value_446[ovec_max_443*3];
    memset(&ovec_value_446, 0, sizeof(int)    *(ovec_max_443*3)    );
    options_449=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1806, 1586)), "libneo-c-str.c", 1806, 1587))->options;
    str_450=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1807, 1588)), "libneo-c-str.c", 1807, 1589))->str;
    re_451=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1809, 1590)), "libneo-c-str.c", 1809, 1591))->re;
    n_452=0;
    while(_while_condtional28=(_Bool)1,    _while_condtional28) {
        options_453=2097152;
        len_454=(come_push_stackframe("libneo-c-str.c", 1815, 1592),__exception_result_var_b320=strlen(self), come_pop_stackframe(), __exception_result_var_b320);
        regex_result_455=(come_push_stackframe("libneo-c-str.c", 1817, 1593),__exception_result_var_b321=pcre_exec(re_451,(struct pcre_extra*)0,self,len_454,offset_442,options_453,ovec_value_446,ovec_max_443*3), come_pop_stackframe(), __exception_result_var_b321);
        for(        i_456=0;        i_456<ovec_max_443;        i_456++        ){
            (come_range_check(&((int*)come_null_check(start_444, "libneo-c-str.c", 1820, 1594))[i_456],((int*)come_null_check(start_444, "libneo-c-str.c", 1820, 1594)),((int*)come_null_check(start_444, "libneo-c-str.c", 1820, 1594))+(ovec_max_443), "libneo-c-str.c", 1820), ((int*)come_null_check(start_444, "libneo-c-str.c", 1820, 1594))[i_456]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_446, "libneo-c-str.c", 1820, 1595))[i_456*2],((int*)come_null_check(ovec_value_446, "libneo-c-str.c", 1820, 1595)),((int*)come_null_check(ovec_value_446, "libneo-c-str.c", 1820, 1595))+(ovec_max_443*3), "libneo-c-str.c", 1820));
        }
        for(        i_457=0;        i_457<ovec_max_443;        i_457++        ){
            (come_range_check(&((int*)come_null_check(end_445, "libneo-c-str.c", 1823, 1596))[i_457],((int*)come_null_check(end_445, "libneo-c-str.c", 1823, 1596)),((int*)come_null_check(end_445, "libneo-c-str.c", 1823, 1596))+(ovec_max_443), "libneo-c-str.c", 1823), ((int*)come_null_check(end_445, "libneo-c-str.c", 1823, 1596))[i_457]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_446, "libneo-c-str.c", 1823, 1597))[i_457*2+1],((int*)come_null_check(ovec_value_446, "libneo-c-str.c", 1823, 1597)),((int*)come_null_check(ovec_value_446, "libneo-c-str.c", 1823, 1597))+(ovec_max_443*3), "libneo-c-str.c", 1823));
        }
        if(_if_conditional138=regex_result_455>0,        _if_conditional138) {
            n_452++;
            if(_if_conditional139=count==n_452,            _if_conditional139) {
                __result185__ = (_Bool)1;
                return __result185__;
            }
            if(_if_conditional140=offset_442==*(int*)come_range_check(&((int*)come_null_check(end_445, "libneo-c-str.c", 1835, 1598))[0],((int*)come_null_check(end_445, "libneo-c-str.c", 1835, 1598)),((int*)come_null_check(end_445, "libneo-c-str.c", 1835, 1598))+(ovec_max_443), "libneo-c-str.c", 1835),            _if_conditional140) {
                offset_442++;
            }
            else {
                offset_442=*(int*)come_range_check(&((int*)come_null_check(end_445, "libneo-c-str.c", 1839, 1599))[0],((int*)come_null_check(end_445, "libneo-c-str.c", 1839, 1599)),((int*)come_null_check(end_445, "libneo-c-str.c", 1839, 1599))+(ovec_max_443), "libneo-c-str.c", 1839);
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
int offset_458;
int ovec_max_459;
const char* err_463;
int erro_ofs_464;
int options_465;
char* str_466;
struct real_pcre8_or_16* re_467;
void* right_value239;
void* right_value240;
struct buffer* __exception_result_var_b322;
struct buffer* result_468;
_Bool _while_condtional29;
int options_469;
unsigned long int __exception_result_var_b323;
int len_470;
int __exception_result_var_b324;
int regex_result_471;
int i_472;
int i_473;
_Bool _if_conditional141;
void* right_value241;
char* __exception_result_var_b325;
char* str_474;
struct buffer* __exception_result_var_b326;
void* right_value242;
void* right_value243;
struct list$1charph* __exception_result_var_b327;
struct list$1charph* group_strings_475;
void* right_value244;
char* __exception_result_var_b328;
char* match_string_476;
void* right_value245;
char* __exception_result_var_b329;
struct list$1charph* __exception_result_var_b330;
void* right_value246;
char* block_result_477;
struct buffer* __exception_result_var_b331;
_Bool _if_conditional142;
_Bool _if_conditional143;
void* right_value247;
char* __exception_result_var_b332;
char* str_478;
struct buffer* __exception_result_var_b333;
_Bool _if_conditional144;
void* right_value248;
char* __exception_result_var_b334;
char* str_479;
struct buffer* __exception_result_var_b335;
_Bool _if_conditional145;
void* right_value249;
void* right_value250;
struct list$1charph* __exception_result_var_b336;
struct list$1charph* group_strings_480;
int i_481;
void* right_value251;
char* __exception_result_var_b337;
char* match_string_482;
struct list$1charph* __exception_result_var_b338;
void* right_value252;
char* __exception_result_var_b339;
char* match_string_483;
void* right_value253;
char* block_result_484;
struct buffer* __exception_result_var_b340;
_Bool _if_conditional146;
void* right_value254;
char* __exception_result_var_b341;
char* str_485;
struct buffer* __exception_result_var_b342;
void* right_value255;
char* __exception_result_var_b343;
char* str_486;
struct buffer* __exception_result_var_b344;
void* right_value256;
char* __exception_result_var_b345;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_458, 0, sizeof(int));
memset(&ovec_max_459, 0, sizeof(int));
memset(&err_463, 0, sizeof(const char*));
memset(&erro_ofs_464, 0, sizeof(int));
memset(&options_465, 0, sizeof(int));
memset(&str_466, 0, sizeof(char*));
memset(&re_467, 0, sizeof(struct real_pcre8_or_16*));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&result_468, 0, sizeof(struct buffer*));
memset(&options_469, 0, sizeof(int));
memset(&len_470, 0, sizeof(int));
memset(&regex_result_471, 0, sizeof(int));
memset(&i_472, 0, sizeof(int));
memset(&i_473, 0, sizeof(int));
right_value241 = (void*)0;
memset(&str_474, 0, sizeof(char*));
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&group_strings_475, 0, sizeof(struct list$1charph*));
right_value244 = (void*)0;
memset(&match_string_476, 0, sizeof(char*));
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&block_result_477, 0, sizeof(char*));
right_value247 = (void*)0;
memset(&str_478, 0, sizeof(char*));
right_value248 = (void*)0;
memset(&str_479, 0, sizeof(char*));
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&group_strings_480, 0, sizeof(struct list$1charph*));
memset(&i_481, 0, sizeof(int));
right_value251 = (void*)0;
memset(&match_string_482, 0, sizeof(char*));
right_value252 = (void*)0;
memset(&match_string_483, 0, sizeof(char*));
right_value253 = (void*)0;
memset(&block_result_484, 0, sizeof(char*));
right_value254 = (void*)0;
memset(&str_485, 0, sizeof(char*));
right_value255 = (void*)0;
memset(&str_486, 0, sizeof(char*));
right_value256 = (void*)0;
    offset_458=0;
    ovec_max_459=16;
    int start_460[ovec_max_459];
    memset(&start_460, 0, sizeof(int)    *(ovec_max_459)    );
    int end_461[ovec_max_459];
    memset(&end_461, 0, sizeof(int)    *(ovec_max_459)    );
    int ovec_value_462[ovec_max_459*3];
    memset(&ovec_value_462, 0, sizeof(int)    *(ovec_max_459*3)    );
    options_465=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1864, 1600)), "libneo-c-str.c", 1864, 1601))->options;
    str_466=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1865, 1602)), "libneo-c-str.c", 1865, 1603))->str;
    re_467=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1867, 1604)), "libneo-c-str.c", 1867, 1605))->re;
    result_468=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1869, 1608),__exception_result_var_b322=((struct buffer*)(right_value240=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value239=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1869, "buffer"))), "libneo-c-str.c", 1869, 1606)), "libneo-c-str.c", 1869, 1607)))))), come_pop_stackframe(), __exception_result_var_b322));
    come_call_finalizer3(right_value239,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value240,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional29=(_Bool)1,    _while_condtional29) {
        options_469=2097152;
        len_470=(come_push_stackframe("libneo-c-str.c", 1873, 1609),__exception_result_var_b323=strlen(self), come_pop_stackframe(), __exception_result_var_b323);
        regex_result_471=(come_push_stackframe("libneo-c-str.c", 1874, 1610),__exception_result_var_b324=pcre_exec(re_467,(struct pcre_extra*)0,self,len_470,offset_458,options_469,ovec_value_462,ovec_max_459*3), come_pop_stackframe(), __exception_result_var_b324);
        for(        i_472=0;        i_472<ovec_max_459;        i_472++        ){
            (come_range_check(&((int*)come_null_check(start_460, "libneo-c-str.c", 1877, 1611))[i_472],((int*)come_null_check(start_460, "libneo-c-str.c", 1877, 1611)),((int*)come_null_check(start_460, "libneo-c-str.c", 1877, 1611))+(ovec_max_459), "libneo-c-str.c", 1877), ((int*)come_null_check(start_460, "libneo-c-str.c", 1877, 1611))[i_472]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_462, "libneo-c-str.c", 1877, 1612))[i_472*2],((int*)come_null_check(ovec_value_462, "libneo-c-str.c", 1877, 1612)),((int*)come_null_check(ovec_value_462, "libneo-c-str.c", 1877, 1612))+(ovec_max_459*3), "libneo-c-str.c", 1877));
        }
        for(        i_473=0;        i_473<ovec_max_459;        i_473++        ){
            (come_range_check(&((int*)come_null_check(end_461, "libneo-c-str.c", 1880, 1613))[i_473],((int*)come_null_check(end_461, "libneo-c-str.c", 1880, 1613)),((int*)come_null_check(end_461, "libneo-c-str.c", 1880, 1613))+(ovec_max_459), "libneo-c-str.c", 1880), ((int*)come_null_check(end_461, "libneo-c-str.c", 1880, 1613))[i_473]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_462, "libneo-c-str.c", 1880, 1614))[i_473*2+1],((int*)come_null_check(ovec_value_462, "libneo-c-str.c", 1880, 1614)),((int*)come_null_check(ovec_value_462, "libneo-c-str.c", 1880, 1614))+(ovec_max_459*3), "libneo-c-str.c", 1880));
        }
        if(_if_conditional141=regex_result_471==1,        _if_conditional141) {
            str_474=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1885, 1618),__exception_result_var_b325=((char*)(right_value241=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1885, 1615)), "libneo-c-str.c", 1885, 1616)),offset_458,*(int*)come_range_check(&((int*)come_null_check(start_460, "libneo-c-str.c", 1885, 1617))[0],((int*)come_null_check(start_460, "libneo-c-str.c", 1885, 1617)),((int*)come_null_check(start_460, "libneo-c-str.c", 1885, 1617))+(ovec_max_459), "libneo-c-str.c", 1885)))), come_pop_stackframe(), __exception_result_var_b325));
            right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1887, 1621),__exception_result_var_b326=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_468, "libneo-c-str.c", 1887, 1619)), "libneo-c-str.c", 1887, 1620)),str_474), come_pop_stackframe(), __exception_result_var_b326);
            group_strings_475=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1889, 1624),__exception_result_var_b327=((struct list$1charph*)(right_value243=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value242=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1889, "list$1charph"))), "libneo-c-str.c", 1889, 1622)), "libneo-c-str.c", 1889, 1623)))))), come_pop_stackframe(), __exception_result_var_b327));
            come_call_finalizer3(right_value242,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value243,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            match_string_476=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1891, 1629),__exception_result_var_b328=((char*)(right_value244=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1891, 1625)), "libneo-c-str.c", 1891, 1626)),*(int*)come_range_check(&((int*)come_null_check(start_460, "libneo-c-str.c", 1891, 1627))[0],((int*)come_null_check(start_460, "libneo-c-str.c", 1891, 1627)),((int*)come_null_check(start_460, "libneo-c-str.c", 1891, 1627))+(ovec_max_459), "libneo-c-str.c", 1891),*(int*)come_range_check(&((int*)come_null_check(end_461, "libneo-c-str.c", 1891, 1628))[0],((int*)come_null_check(end_461, "libneo-c-str.c", 1891, 1628)),((int*)come_null_check(end_461, "libneo-c-str.c", 1891, 1628))+(ovec_max_459), "libneo-c-str.c", 1891)))), come_pop_stackframe(), __exception_result_var_b328));
            right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1893, 1637),__exception_result_var_b330=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_475, "libneo-c-str.c", 1893, 1630)), "libneo-c-str.c", 1893, 1631)),(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1893, 1636),__exception_result_var_b329=((char*)(right_value245=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1893, 1632)), "libneo-c-str.c", 1893, 1633)),*(int*)come_range_check(&((int*)come_null_check(start_460, "libneo-c-str.c", 1893, 1634))[0],((int*)come_null_check(start_460, "libneo-c-str.c", 1893, 1634)),((int*)come_null_check(start_460, "libneo-c-str.c", 1893, 1634))+(ovec_max_459), "libneo-c-str.c", 1893),*(int*)come_range_check(&((int*)come_null_check(end_461, "libneo-c-str.c", 1893, 1635))[0],((int*)come_null_check(end_461, "libneo-c-str.c", 1893, 1635)),((int*)come_null_check(end_461, "libneo-c-str.c", 1893, 1635))+(ovec_max_459), "libneo-c-str.c", 1893)))), come_pop_stackframe(), __exception_result_var_b329))), come_pop_stackframe(), __exception_result_var_b330);
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            block_result_477=(char*)come_increment_ref_count(((char*)(right_value246=block(parent,match_string_476,group_strings_475))));
            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1897, 1640),__exception_result_var_b331=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_468, "libneo-c-str.c", 1897, 1638)), "libneo-c-str.c", 1897, 1639)),block_result_477), come_pop_stackframe(), __exception_result_var_b331);
            if(_if_conditional142=offset_458==*(int*)come_range_check(&((int*)come_null_check(end_461, "libneo-c-str.c", 1899, 1641))[0],((int*)come_null_check(end_461, "libneo-c-str.c", 1899, 1641)),((int*)come_null_check(end_461, "libneo-c-str.c", 1899, 1641))+(ovec_max_459), "libneo-c-str.c", 1899),            _if_conditional142) {
                offset_458++;
            }
            else {
                offset_458=*(int*)come_range_check(&((int*)come_null_check(end_461, "libneo-c-str.c", 1903, 1642))[0],((int*)come_null_check(end_461, "libneo-c-str.c", 1903, 1642)),((int*)come_null_check(end_461, "libneo-c-str.c", 1903, 1642))+(ovec_max_459), "libneo-c-str.c", 1903);
            }
            if(_if_conditional143=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1906, 1643)), "libneo-c-str.c", 1906, 1644))->global,            _if_conditional143) {
                str_478=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1907, 1647),__exception_result_var_b332=((char*)(right_value247=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1907, 1645)), "libneo-c-str.c", 1907, 1646)),offset_458,-1))), come_pop_stackframe(), __exception_result_var_b332));
                right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 1908, 1650),__exception_result_var_b333=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_468, "libneo-c-str.c", 1908, 1648)), "libneo-c-str.c", 1908, 1649)),str_478), come_pop_stackframe(), __exception_result_var_b333);
                str_478 = come_decrement_ref_count2(str_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_474 = come_decrement_ref_count2(str_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(group_strings_475,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_476 = come_decrement_ref_count2(match_string_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_477 = come_decrement_ref_count2(block_result_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_478 = come_decrement_ref_count2(str_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_474 = come_decrement_ref_count2(str_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(group_strings_475,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_476 = come_decrement_ref_count2(match_string_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_477 = come_decrement_ref_count2(block_result_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional144=regex_result_471>1,            _if_conditional144) {
                str_479=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1914, 1654),__exception_result_var_b334=((char*)(right_value248=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1914, 1651)), "libneo-c-str.c", 1914, 1652)),offset_458,*(int*)come_range_check(&((int*)come_null_check(start_460, "libneo-c-str.c", 1914, 1653))[0],((int*)come_null_check(start_460, "libneo-c-str.c", 1914, 1653)),((int*)come_null_check(start_460, "libneo-c-str.c", 1914, 1653))+(ovec_max_459), "libneo-c-str.c", 1914)))), come_pop_stackframe(), __exception_result_var_b334));
                right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 1915, 1657),__exception_result_var_b335=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_468, "libneo-c-str.c", 1915, 1655)), "libneo-c-str.c", 1915, 1656)),str_479), come_pop_stackframe(), __exception_result_var_b335);
                if(_if_conditional145=offset_458==*(int*)come_range_check(&((int*)come_null_check(end_461, "libneo-c-str.c", 1917, 1658))[0],((int*)come_null_check(end_461, "libneo-c-str.c", 1917, 1658)),((int*)come_null_check(end_461, "libneo-c-str.c", 1917, 1658))+(ovec_max_459), "libneo-c-str.c", 1917),                _if_conditional145) {
                    offset_458++;
                }
                else {
                    offset_458=*(int*)come_range_check(&((int*)come_null_check(end_461, "libneo-c-str.c", 1921, 1659))[0],((int*)come_null_check(end_461, "libneo-c-str.c", 1921, 1659)),((int*)come_null_check(end_461, "libneo-c-str.c", 1921, 1659))+(ovec_max_459), "libneo-c-str.c", 1921);
                }
                group_strings_480=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1924, 1662),__exception_result_var_b336=((struct list$1charph*)(right_value250=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value249=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1924, "list$1charph"))), "libneo-c-str.c", 1924, 1660)), "libneo-c-str.c", 1924, 1661)))))), come_pop_stackframe(), __exception_result_var_b336));
                come_call_finalizer3(right_value249,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value250,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_481=1;                i_481<regex_result_471;                i_481++                ){
                    match_string_482=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1927, 1667),__exception_result_var_b337=((char*)(right_value251=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1927, 1663)), "libneo-c-str.c", 1927, 1664)),*(int*)come_range_check(&((int*)come_null_check(start_460, "libneo-c-str.c", 1927, 1665))[i_481],((int*)come_null_check(start_460, "libneo-c-str.c", 1927, 1665)),((int*)come_null_check(start_460, "libneo-c-str.c", 1927, 1665))+(ovec_max_459), "libneo-c-str.c", 1927),*(int*)come_range_check(&((int*)come_null_check(end_461, "libneo-c-str.c", 1927, 1666))[i_481],((int*)come_null_check(end_461, "libneo-c-str.c", 1927, 1666)),((int*)come_null_check(end_461, "libneo-c-str.c", 1927, 1666))+(ovec_max_459), "libneo-c-str.c", 1927)))), come_pop_stackframe(), __exception_result_var_b337));
                    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 1928, 1670),__exception_result_var_b338=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_480, "libneo-c-str.c", 1928, 1668)), "libneo-c-str.c", 1928, 1669)),(char*)come_increment_ref_count(match_string_482)), come_pop_stackframe(), __exception_result_var_b338);
                    match_string_482 = come_decrement_ref_count2(match_string_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_483=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1931, 1675),__exception_result_var_b339=((char*)(right_value252=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1931, 1671)), "libneo-c-str.c", 1931, 1672)),*(int*)come_range_check(&((int*)come_null_check(start_460, "libneo-c-str.c", 1931, 1673))[0],((int*)come_null_check(start_460, "libneo-c-str.c", 1931, 1673)),((int*)come_null_check(start_460, "libneo-c-str.c", 1931, 1673))+(ovec_max_459), "libneo-c-str.c", 1931),*(int*)come_range_check(&((int*)come_null_check(end_461, "libneo-c-str.c", 1931, 1674))[0],((int*)come_null_check(end_461, "libneo-c-str.c", 1931, 1674)),((int*)come_null_check(end_461, "libneo-c-str.c", 1931, 1674))+(ovec_max_459), "libneo-c-str.c", 1931)))), come_pop_stackframe(), __exception_result_var_b339));
                right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_result_484=(char*)come_increment_ref_count(((char*)(right_value253=block(parent,match_string_483,group_strings_480))));
                right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 1935, 1678),__exception_result_var_b340=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_468, "libneo-c-str.c", 1935, 1676)), "libneo-c-str.c", 1935, 1677)),block_result_484), come_pop_stackframe(), __exception_result_var_b340);
                if(_if_conditional146=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1937, 1679)), "libneo-c-str.c", 1937, 1680))->global,                _if_conditional146) {
                    str_485=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1938, 1683),__exception_result_var_b341=((char*)(right_value254=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1938, 1681)), "libneo-c-str.c", 1938, 1682)),offset_458,-1))), come_pop_stackframe(), __exception_result_var_b341));
                    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 1939, 1686),__exception_result_var_b342=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_468, "libneo-c-str.c", 1939, 1684)), "libneo-c-str.c", 1939, 1685)),str_485), come_pop_stackframe(), __exception_result_var_b342);
                    str_485 = come_decrement_ref_count2(str_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_479 = come_decrement_ref_count2(str_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(group_strings_480,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    match_string_483 = come_decrement_ref_count2(match_string_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_484 = come_decrement_ref_count2(block_result_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_485 = come_decrement_ref_count2(str_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_479 = come_decrement_ref_count2(str_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(group_strings_480,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_483 = come_decrement_ref_count2(match_string_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_484 = come_decrement_ref_count2(block_result_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_486=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1945, 1689),__exception_result_var_b343=((char*)(right_value255=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1945, 1687)), "libneo-c-str.c", 1945, 1688)),offset_458,-1))), come_pop_stackframe(), __exception_result_var_b343));
                right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 1946, 1692),__exception_result_var_b344=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_468, "libneo-c-str.c", 1946, 1690)), "libneo-c-str.c", 1946, 1691)),str_486), come_pop_stackframe(), __exception_result_var_b344);
                str_486 = come_decrement_ref_count2(str_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_486 = come_decrement_ref_count2(str_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result188__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 1950, 1695),__exception_result_var_b345=((char*)(right_value256=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_468, "libneo-c-str.c", 1950, 1693)), "libneo-c-str.c", 1950, 1694))))), come_pop_stackframe(), __exception_result_var_b345);
    come_call_finalizer3(result_468,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result188__;
    come_call_finalizer3(result_468,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_487;
int ovec_max_488;
const char* err_492;
int erro_ofs_493;
int options_494;
char* str_495;
struct real_pcre8_or_16* re_496;
void* right_value257;
void* right_value258;
struct buffer* __exception_result_var_b346;
struct buffer* result_497;
int n_498;
_Bool _while_condtional30;
int options_499;
unsigned long int __exception_result_var_b347;
int len_500;
int __exception_result_var_b348;
int regex_result_501;
int i_502;
int i_503;
_Bool _if_conditional147;
void* right_value259;
char* __exception_result_var_b349;
char* str_504;
struct buffer* __exception_result_var_b350;
void* right_value260;
void* right_value261;
struct list$1charph* __exception_result_var_b351;
struct list$1charph* group_strings_505;
void* right_value262;
char* __exception_result_var_b352;
struct list$1charph* __exception_result_var_b353;
void* right_value263;
char* __exception_result_var_b354;
char* match_string_506;
void* right_value264;
char* block_result_507;
struct buffer* __exception_result_var_b355;
_Bool _if_conditional148;
_Bool _if_conditional149;
void* right_value265;
char* __exception_result_var_b356;
char* str_508;
struct buffer* __exception_result_var_b357;
_Bool _if_conditional150;
void* right_value266;
char* __exception_result_var_b358;
char* str_509;
struct buffer* __exception_result_var_b359;
_Bool _if_conditional151;
void* right_value267;
char* __exception_result_var_b360;
char* str_510;
struct buffer* __exception_result_var_b361;
_Bool _if_conditional152;
void* right_value268;
void* right_value269;
struct list$1charph* __exception_result_var_b362;
struct list$1charph* group_strings_511;
int i_512;
void* right_value270;
char* __exception_result_var_b363;
char* match_string_513;
struct list$1charph* __exception_result_var_b364;
void* right_value271;
char* __exception_result_var_b365;
char* match_string_514;
void* right_value272;
char* block_result_515;
struct buffer* __exception_result_var_b366;
_Bool _if_conditional153;
void* right_value273;
char* __exception_result_var_b367;
char* str_516;
struct buffer* __exception_result_var_b368;
_Bool _if_conditional154;
void* right_value274;
char* __exception_result_var_b369;
char* str_517;
struct buffer* __exception_result_var_b370;
void* right_value275;
char* __exception_result_var_b371;
char* str_518;
struct buffer* __exception_result_var_b372;
void* right_value276;
char* __exception_result_var_b373;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_487, 0, sizeof(int));
memset(&ovec_max_488, 0, sizeof(int));
memset(&err_492, 0, sizeof(const char*));
memset(&erro_ofs_493, 0, sizeof(int));
memset(&options_494, 0, sizeof(int));
memset(&str_495, 0, sizeof(char*));
memset(&re_496, 0, sizeof(struct real_pcre8_or_16*));
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&result_497, 0, sizeof(struct buffer*));
memset(&n_498, 0, sizeof(int));
memset(&options_499, 0, sizeof(int));
memset(&len_500, 0, sizeof(int));
memset(&regex_result_501, 0, sizeof(int));
memset(&i_502, 0, sizeof(int));
memset(&i_503, 0, sizeof(int));
right_value259 = (void*)0;
memset(&str_504, 0, sizeof(char*));
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&group_strings_505, 0, sizeof(struct list$1charph*));
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&match_string_506, 0, sizeof(char*));
right_value264 = (void*)0;
memset(&block_result_507, 0, sizeof(char*));
right_value265 = (void*)0;
memset(&str_508, 0, sizeof(char*));
right_value266 = (void*)0;
memset(&str_509, 0, sizeof(char*));
right_value267 = (void*)0;
memset(&str_510, 0, sizeof(char*));
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&group_strings_511, 0, sizeof(struct list$1charph*));
memset(&i_512, 0, sizeof(int));
right_value270 = (void*)0;
memset(&match_string_513, 0, sizeof(char*));
right_value271 = (void*)0;
memset(&match_string_514, 0, sizeof(char*));
right_value272 = (void*)0;
memset(&block_result_515, 0, sizeof(char*));
right_value273 = (void*)0;
memset(&str_516, 0, sizeof(char*));
right_value274 = (void*)0;
memset(&str_517, 0, sizeof(char*));
right_value275 = (void*)0;
memset(&str_518, 0, sizeof(char*));
right_value276 = (void*)0;
    offset_487=0;
    ovec_max_488=16;
    int start_489[ovec_max_488];
    memset(&start_489, 0, sizeof(int)    *(ovec_max_488)    );
    int end_490[ovec_max_488];
    memset(&end_490, 0, sizeof(int)    *(ovec_max_488)    );
    int ovec_value_491[ovec_max_488*3];
    memset(&ovec_value_491, 0, sizeof(int)    *(ovec_max_488*3)    );
    options_494=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1965, 1696)), "libneo-c-str.c", 1965, 1697))->options;
    str_495=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1966, 1698)), "libneo-c-str.c", 1966, 1699))->str;
    re_496=((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 1968, 1700)), "libneo-c-str.c", 1968, 1701))->re;
    result_497=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1970, 1704),__exception_result_var_b346=((struct buffer*)(right_value258=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value257=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1970, "buffer"))), "libneo-c-str.c", 1970, 1702)), "libneo-c-str.c", 1970, 1703)))))), come_pop_stackframe(), __exception_result_var_b346));
    come_call_finalizer3(right_value257,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value258,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    n_498=0;
    while(_while_condtional30=(_Bool)1,    _while_condtional30) {
        options_499=2097152;
        len_500=(come_push_stackframe("libneo-c-str.c", 1976, 1705),__exception_result_var_b347=strlen(self), come_pop_stackframe(), __exception_result_var_b347);
        regex_result_501=(come_push_stackframe("libneo-c-str.c", 1977, 1706),__exception_result_var_b348=pcre_exec(re_496,(struct pcre_extra*)0,self,len_500,offset_487,options_499,ovec_value_491,ovec_max_488*3), come_pop_stackframe(), __exception_result_var_b348);
        for(        i_502=0;        i_502<ovec_max_488;        i_502++        ){
            (come_range_check(&((int*)come_null_check(start_489, "libneo-c-str.c", 1980, 1707))[i_502],((int*)come_null_check(start_489, "libneo-c-str.c", 1980, 1707)),((int*)come_null_check(start_489, "libneo-c-str.c", 1980, 1707))+(ovec_max_488), "libneo-c-str.c", 1980), ((int*)come_null_check(start_489, "libneo-c-str.c", 1980, 1707))[i_502]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_491, "libneo-c-str.c", 1980, 1708))[i_502*2],((int*)come_null_check(ovec_value_491, "libneo-c-str.c", 1980, 1708)),((int*)come_null_check(ovec_value_491, "libneo-c-str.c", 1980, 1708))+(ovec_max_488*3), "libneo-c-str.c", 1980));
        }
        for(        i_503=0;        i_503<ovec_max_488;        i_503++        ){
            (come_range_check(&((int*)come_null_check(end_490, "libneo-c-str.c", 1983, 1709))[i_503],((int*)come_null_check(end_490, "libneo-c-str.c", 1983, 1709)),((int*)come_null_check(end_490, "libneo-c-str.c", 1983, 1709))+(ovec_max_488), "libneo-c-str.c", 1983), ((int*)come_null_check(end_490, "libneo-c-str.c", 1983, 1709))[i_503]=*(int*)come_range_check(&((int*)come_null_check(ovec_value_491, "libneo-c-str.c", 1983, 1710))[i_503*2+1],((int*)come_null_check(ovec_value_491, "libneo-c-str.c", 1983, 1710)),((int*)come_null_check(ovec_value_491, "libneo-c-str.c", 1983, 1710))+(ovec_max_488*3), "libneo-c-str.c", 1983));
        }
        if(_if_conditional147=regex_result_501==1,        _if_conditional147) {
            n_498++;
            str_504=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1989, 1714),__exception_result_var_b349=((char*)(right_value259=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1989, 1711)), "libneo-c-str.c", 1989, 1712)),offset_487,*(int*)come_range_check(&((int*)come_null_check(start_489, "libneo-c-str.c", 1989, 1713))[0],((int*)come_null_check(start_489, "libneo-c-str.c", 1989, 1713)),((int*)come_null_check(start_489, "libneo-c-str.c", 1989, 1713))+(ovec_max_488), "libneo-c-str.c", 1989)))), come_pop_stackframe(), __exception_result_var_b349));
            right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1991, 1717),__exception_result_var_b350=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_497, "libneo-c-str.c", 1991, 1715)), "libneo-c-str.c", 1991, 1716)),str_504), come_pop_stackframe(), __exception_result_var_b350);
            group_strings_505=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1993, 1720),__exception_result_var_b351=((struct list$1charph*)(right_value261=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value260=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1993, "list$1charph"))), "libneo-c-str.c", 1993, 1718)), "libneo-c-str.c", 1993, 1719)))))), come_pop_stackframe(), __exception_result_var_b351));
            come_call_finalizer3(right_value260,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value261,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 1995, 1728),__exception_result_var_b353=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_505, "libneo-c-str.c", 1995, 1721)), "libneo-c-str.c", 1995, 1722)),(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1995, 1727),__exception_result_var_b352=((char*)(right_value262=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1995, 1723)), "libneo-c-str.c", 1995, 1724)),*(int*)come_range_check(&((int*)come_null_check(start_489, "libneo-c-str.c", 1995, 1725))[0],((int*)come_null_check(start_489, "libneo-c-str.c", 1995, 1725)),((int*)come_null_check(start_489, "libneo-c-str.c", 1995, 1725))+(ovec_max_488), "libneo-c-str.c", 1995),*(int*)come_range_check(&((int*)come_null_check(end_490, "libneo-c-str.c", 1995, 1726))[0],((int*)come_null_check(end_490, "libneo-c-str.c", 1995, 1726)),((int*)come_null_check(end_490, "libneo-c-str.c", 1995, 1726))+(ovec_max_488), "libneo-c-str.c", 1995)))), come_pop_stackframe(), __exception_result_var_b352))), come_pop_stackframe(), __exception_result_var_b353);
            right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_string_506=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 1997, 1733),__exception_result_var_b354=((char*)(right_value263=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 1997, 1729)), "libneo-c-str.c", 1997, 1730)),*(int*)come_range_check(&((int*)come_null_check(start_489, "libneo-c-str.c", 1997, 1731))[0],((int*)come_null_check(start_489, "libneo-c-str.c", 1997, 1731)),((int*)come_null_check(start_489, "libneo-c-str.c", 1997, 1731))+(ovec_max_488), "libneo-c-str.c", 1997),*(int*)come_range_check(&((int*)come_null_check(end_490, "libneo-c-str.c", 1997, 1732))[0],((int*)come_null_check(end_490, "libneo-c-str.c", 1997, 1732)),((int*)come_null_check(end_490, "libneo-c-str.c", 1997, 1732))+(ovec_max_488), "libneo-c-str.c", 1997)))), come_pop_stackframe(), __exception_result_var_b354));
            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            block_result_507=(char*)come_increment_ref_count(((char*)(right_value264=block(parent,match_string_506,group_strings_505))));
            right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c-str.c", 2001, 1736),__exception_result_var_b355=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_497, "libneo-c-str.c", 2001, 1734)), "libneo-c-str.c", 2001, 1735)),block_result_507), come_pop_stackframe(), __exception_result_var_b355);
            if(_if_conditional148=offset_487==*(int*)come_range_check(&((int*)come_null_check(end_490, "libneo-c-str.c", 2003, 1737))[0],((int*)come_null_check(end_490, "libneo-c-str.c", 2003, 1737)),((int*)come_null_check(end_490, "libneo-c-str.c", 2003, 1737))+(ovec_max_488), "libneo-c-str.c", 2003),            _if_conditional148) {
                offset_487++;
            }
            else {
                offset_487=*(int*)come_range_check(&((int*)come_null_check(end_490, "libneo-c-str.c", 2007, 1738))[0],((int*)come_null_check(end_490, "libneo-c-str.c", 2007, 1738)),((int*)come_null_check(end_490, "libneo-c-str.c", 2007, 1738))+(ovec_max_488), "libneo-c-str.c", 2007);
            }
            if(_if_conditional149=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 2010, 1739)), "libneo-c-str.c", 2010, 1740))->global,            _if_conditional149) {
                str_508=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 2011, 1743),__exception_result_var_b356=((char*)(right_value265=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 2011, 1741)), "libneo-c-str.c", 2011, 1742)),offset_487,-1))), come_pop_stackframe(), __exception_result_var_b356));
                right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 2012, 1746),__exception_result_var_b357=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_497, "libneo-c-str.c", 2012, 1744)), "libneo-c-str.c", 2012, 1745)),str_508), come_pop_stackframe(), __exception_result_var_b357);
                str_508 = come_decrement_ref_count2(str_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_504 = come_decrement_ref_count2(str_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(group_strings_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_506 = come_decrement_ref_count2(match_string_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_507 = come_decrement_ref_count2(block_result_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_508 = come_decrement_ref_count2(str_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional150=n_498==count,            _if_conditional150) {
                str_509=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 2017, 1749),__exception_result_var_b358=((char*)(right_value266=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 2017, 1747)), "libneo-c-str.c", 2017, 1748)),offset_487,-1))), come_pop_stackframe(), __exception_result_var_b358));
                right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 2018, 1752),__exception_result_var_b359=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_497, "libneo-c-str.c", 2018, 1750)), "libneo-c-str.c", 2018, 1751)),str_509), come_pop_stackframe(), __exception_result_var_b359);
                str_509 = come_decrement_ref_count2(str_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_504 = come_decrement_ref_count2(str_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(group_strings_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_506 = come_decrement_ref_count2(match_string_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_507 = come_decrement_ref_count2(block_result_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_509 = come_decrement_ref_count2(str_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_504 = come_decrement_ref_count2(str_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(group_strings_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_506 = come_decrement_ref_count2(match_string_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_507 = come_decrement_ref_count2(block_result_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional151=regex_result_501>1,            _if_conditional151) {
                n_498++;
                str_510=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 2026, 1756),__exception_result_var_b360=((char*)(right_value267=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 2026, 1753)), "libneo-c-str.c", 2026, 1754)),offset_487,*(int*)come_range_check(&((int*)come_null_check(start_489, "libneo-c-str.c", 2026, 1755))[0],((int*)come_null_check(start_489, "libneo-c-str.c", 2026, 1755)),((int*)come_null_check(start_489, "libneo-c-str.c", 2026, 1755))+(ovec_max_488), "libneo-c-str.c", 2026)))), come_pop_stackframe(), __exception_result_var_b360));
                right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 2027, 1759),__exception_result_var_b361=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_497, "libneo-c-str.c", 2027, 1757)), "libneo-c-str.c", 2027, 1758)),str_510), come_pop_stackframe(), __exception_result_var_b361);
                if(_if_conditional152=offset_487==*(int*)come_range_check(&((int*)come_null_check(end_490, "libneo-c-str.c", 2029, 1760))[0],((int*)come_null_check(end_490, "libneo-c-str.c", 2029, 1760)),((int*)come_null_check(end_490, "libneo-c-str.c", 2029, 1760))+(ovec_max_488), "libneo-c-str.c", 2029),                _if_conditional152) {
                    offset_487++;
                }
                else {
                    offset_487=*(int*)come_range_check(&((int*)come_null_check(end_490, "libneo-c-str.c", 2033, 1761))[0],((int*)come_null_check(end_490, "libneo-c-str.c", 2033, 1761)),((int*)come_null_check(end_490, "libneo-c-str.c", 2033, 1761))+(ovec_max_488), "libneo-c-str.c", 2033);
                }
                group_strings_511=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 2036, 1764),__exception_result_var_b362=((struct list$1charph*)(right_value269=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value268=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 2036, "list$1charph"))), "libneo-c-str.c", 2036, 1762)), "libneo-c-str.c", 2036, 1763)))))), come_pop_stackframe(), __exception_result_var_b362));
                come_call_finalizer3(right_value268,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value269,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_512=1;                i_512<regex_result_501;                i_512++                ){
                    match_string_513=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 2039, 1769),__exception_result_var_b363=((char*)(right_value270=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 2039, 1765)), "libneo-c-str.c", 2039, 1766)),*(int*)come_range_check(&((int*)come_null_check(start_489, "libneo-c-str.c", 2039, 1767))[i_512],((int*)come_null_check(start_489, "libneo-c-str.c", 2039, 1767)),((int*)come_null_check(start_489, "libneo-c-str.c", 2039, 1767))+(ovec_max_488), "libneo-c-str.c", 2039),*(int*)come_range_check(&((int*)come_null_check(end_490, "libneo-c-str.c", 2039, 1768))[i_512],((int*)come_null_check(end_490, "libneo-c-str.c", 2039, 1768)),((int*)come_null_check(end_490, "libneo-c-str.c", 2039, 1768))+(ovec_max_488), "libneo-c-str.c", 2039)))), come_pop_stackframe(), __exception_result_var_b363));
                    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 2040, 1772),__exception_result_var_b364=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(group_strings_511, "libneo-c-str.c", 2040, 1770)), "libneo-c-str.c", 2040, 1771)),(char*)come_increment_ref_count(match_string_513)), come_pop_stackframe(), __exception_result_var_b364);
                    match_string_513 = come_decrement_ref_count2(match_string_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_514=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 2043, 1777),__exception_result_var_b365=((char*)(right_value271=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 2043, 1773)), "libneo-c-str.c", 2043, 1774)),*(int*)come_range_check(&((int*)come_null_check(start_489, "libneo-c-str.c", 2043, 1775))[0],((int*)come_null_check(start_489, "libneo-c-str.c", 2043, 1775)),((int*)come_null_check(start_489, "libneo-c-str.c", 2043, 1775))+(ovec_max_488), "libneo-c-str.c", 2043),*(int*)come_range_check(&((int*)come_null_check(end_490, "libneo-c-str.c", 2043, 1776))[0],((int*)come_null_check(end_490, "libneo-c-str.c", 2043, 1776)),((int*)come_null_check(end_490, "libneo-c-str.c", 2043, 1776))+(ovec_max_488), "libneo-c-str.c", 2043)))), come_pop_stackframe(), __exception_result_var_b365));
                right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_result_515=(char*)come_increment_ref_count(((char*)(right_value272=block(parent,match_string_514,group_strings_511))));
                right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 2047, 1780),__exception_result_var_b366=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_497, "libneo-c-str.c", 2047, 1778)), "libneo-c-str.c", 2047, 1779)),block_result_515), come_pop_stackframe(), __exception_result_var_b366);
                if(_if_conditional153=!((struct come_regex*)come_null_check(((struct come_regex*)come_null_check(reg, "libneo-c-str.c", 2049, 1781)), "libneo-c-str.c", 2049, 1782))->global,                _if_conditional153) {
                    str_516=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 2050, 1785),__exception_result_var_b367=((char*)(right_value273=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 2050, 1783)), "libneo-c-str.c", 2050, 1784)),offset_487,-1))), come_pop_stackframe(), __exception_result_var_b367));
                    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 2051, 1788),__exception_result_var_b368=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_497, "libneo-c-str.c", 2051, 1786)), "libneo-c-str.c", 2051, 1787)),str_516), come_pop_stackframe(), __exception_result_var_b368);
                    str_516 = come_decrement_ref_count2(str_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_510 = come_decrement_ref_count2(str_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(group_strings_511,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    match_string_514 = come_decrement_ref_count2(match_string_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_515 = come_decrement_ref_count2(block_result_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_516 = come_decrement_ref_count2(str_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional154=n_498==count,                _if_conditional154) {
                    str_517=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 2056, 1791),__exception_result_var_b369=((char*)(right_value274=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 2056, 1789)), "libneo-c-str.c", 2056, 1790)),offset_487,-1))), come_pop_stackframe(), __exception_result_var_b369));
                    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("libneo-c-str.c", 2057, 1794),__exception_result_var_b370=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_497, "libneo-c-str.c", 2057, 1792)), "libneo-c-str.c", 2057, 1793)),str_517), come_pop_stackframe(), __exception_result_var_b370);
                    str_517 = come_decrement_ref_count2(str_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_510 = come_decrement_ref_count2(str_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(group_strings_511,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    match_string_514 = come_decrement_ref_count2(match_string_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_515 = come_decrement_ref_count2(block_result_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_517 = come_decrement_ref_count2(str_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_510 = come_decrement_ref_count2(str_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(group_strings_511,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_514 = come_decrement_ref_count2(match_string_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_515 = come_decrement_ref_count2(block_result_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_518=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 2063, 1797),__exception_result_var_b371=((char*)(right_value275=charp_substring(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-str.c", 2063, 1795)), "libneo-c-str.c", 2063, 1796)),offset_487,-1))), come_pop_stackframe(), __exception_result_var_b371));
                right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("libneo-c-str.c", 2064, 1800),__exception_result_var_b372=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_497, "libneo-c-str.c", 2064, 1798)), "libneo-c-str.c", 2064, 1799)),str_518), come_pop_stackframe(), __exception_result_var_b372);
                str_518 = come_decrement_ref_count2(str_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_518 = come_decrement_ref_count2(str_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result189__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 2069, 1803),__exception_result_var_b373=((char*)(right_value276=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_497, "libneo-c-str.c", 2069, 1801)), "libneo-c-str.c", 2069, 1802))))), come_pop_stackframe(), __exception_result_var_b373);
    come_call_finalizer3(result_497,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result189__;
    come_call_finalizer3(result_497,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
void* __result_obj__;
int result_519;
unsigned int* p_520;
_Bool _while_condtional31;
unsigned int __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_519, 0, sizeof(int));
memset(&p_520, 0, sizeof(unsigned int*));
    result_519=0;
    p_520=value;
    while(_while_condtional31=*((unsigned int*)come_null_check(p_520, "libneo-c-str.c", 2078, 1804)),    _while_condtional31) {
        result_519+=(*((unsigned int*)come_null_check(p_520, "libneo-c-str.c", 2079, 1805)));
        p_520++;
    }
    __result190__ = result_519;
    return __result190__;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __exception_result_var_b375;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    __result192__ = (come_push_stackframe("libneo-c-str.c", 2093, 1807),__exception_result_var_b375=wcscmp(left,right), come_pop_stackframe(), __exception_result_var_b375)==0;
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
void* right_value277;
char* __exception_result_var_b377;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
    __result198__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 2123, 1813),__exception_result_var_b377=((char*)(right_value277=xsprintf("%ls",wc))), come_pop_stackframe(), __exception_result_var_b377);
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result198__;
}

char* string_chomp(char* str){
void* __result_obj__;
void* right_value278;
char* __exception_result_var_b378;
char* result_521;
int __exception_result_var_b379;
_Bool _if_conditional155;
void* right_value279;
char* __exception_result_var_b380;
char* __result199__;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
memset(&result_521, 0, sizeof(char*));
right_value279 = (void*)0;
    result_521=(char*)come_increment_ref_count((come_push_stackframe("libneo-c-str.c", 2128, 1814),__exception_result_var_b378=((char*)(right_value278=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b378));
    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional155=((char*)come_null_check(result_521, "libneo-c-str.c", 2130, 1815))[(come_push_stackframe("libneo-c-str.c", 2130, 1818),__exception_result_var_b379=string_length(((char*)come_null_check(((char*)come_null_check(result_521, "libneo-c-str.c", 2130, 1816)), "libneo-c-str.c", 2130, 1817))), come_pop_stackframe(), __exception_result_var_b379)-1]==10,    _if_conditional155) {
        __result199__ = __result_obj__ = (come_push_stackframe("libneo-c-str.c", 2131, 1821),__exception_result_var_b380=((char*)(right_value279=string_substring(((char*)come_null_check(((char*)come_null_check(result_521, "libneo-c-str.c", 2131, 1819)), "libneo-c-str.c", 2131, 1820)),0,-2))), come_pop_stackframe(), __exception_result_var_b380);
        result_521 = come_decrement_ref_count2(result_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result199__;
    }
    __result200__ = __result_obj__ = result_521;
    result_521 = come_decrement_ref_count2(result_521, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result200__;
    result_521 = come_decrement_ref_count2(result_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

