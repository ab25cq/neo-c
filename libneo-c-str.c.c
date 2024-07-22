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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX636, int anonymous_var_nameX637, const char** anonymous_var_nameX638, int* anonymous_var_nameX639, const unsigned char* anonymous_var_nameX640);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX641, int anonymous_var_nameX642, const char** anonymous_var_nameX643, int* anonymous_var_nameX644, const unsigned char* anonymous_var_nameX645);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX646, int anonymous_var_nameX647, const char** anonymous_var_nameX648, int* anonymous_var_nameX649, const unsigned char* anonymous_var_nameX650);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX651, int anonymous_var_nameX652, int* anonymous_var_nameX653, const char** anonymous_var_nameX654, int* anonymous_var_nameX655, const unsigned char* anonymous_var_nameX656);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX657, int anonymous_var_nameX658, int* anonymous_var_nameX659, const char** anonymous_var_nameX660, int* anonymous_var_nameX661, const unsigned char* anonymous_var_nameX662);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX663, int anonymous_var_nameX664, int* anonymous_var_nameX665, const char** anonymous_var_nameX666, int* anonymous_var_nameX667, const unsigned char* anonymous_var_nameX668);

int pcre_config(int anonymous_var_nameX669, void* anonymous_var_nameX670);

int pcre16_config(int anonymous_var_nameX671, void* anonymous_var_nameX672);

int pcre32_config(int anonymous_var_nameX673, void* anonymous_var_nameX674);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX675, const char* anonymous_var_nameX676, int* anonymous_var_nameX677, int anonymous_var_nameX678, const char* anonymous_var_nameX679, char* anonymous_var_nameX680, int anonymous_var_nameX681);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX682, const unsigned short int* anonymous_var_nameX683, int* anonymous_var_nameX684, int anonymous_var_nameX685, const unsigned short int* anonymous_var_nameX686, unsigned short int* anonymous_var_nameX687, int anonymous_var_nameX688);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX689, const unsigned int* anonymous_var_nameX690, int* anonymous_var_nameX691, int anonymous_var_nameX692, const unsigned int* anonymous_var_nameX693, unsigned int* anonymous_var_nameX694, int anonymous_var_nameX695);

int pcre_copy_substring(const char* anonymous_var_nameX696, int* anonymous_var_nameX697, int anonymous_var_nameX698, int anonymous_var_nameX699, char* anonymous_var_nameX700, int anonymous_var_nameX701);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX702, int* anonymous_var_nameX703, int anonymous_var_nameX704, int anonymous_var_nameX705, unsigned short int* anonymous_var_nameX706, int anonymous_var_nameX707);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX708, int* anonymous_var_nameX709, int anonymous_var_nameX710, int anonymous_var_nameX711, unsigned int* anonymous_var_nameX712, int anonymous_var_nameX713);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX714, const struct pcre_extra* anonymous_var_nameX715, const char* anonymous_var_nameX716, int anonymous_var_nameX717, int anonymous_var_nameX718, int anonymous_var_nameX719, int* anonymous_var_nameX720, int anonymous_var_nameX721, int* anonymous_var_nameX722, int anonymous_var_nameX723);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX724, const struct pcre16_extra* anonymous_var_nameX725, const unsigned short int* anonymous_var_nameX726, int anonymous_var_nameX727, int anonymous_var_nameX728, int anonymous_var_nameX729, int* anonymous_var_nameX730, int anonymous_var_nameX731, int* anonymous_var_nameX732, int anonymous_var_nameX733);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX734, const struct pcre32_extra* anonymous_var_nameX735, const unsigned int* anonymous_var_nameX736, int anonymous_var_nameX737, int anonymous_var_nameX738, int anonymous_var_nameX739, int* anonymous_var_nameX740, int anonymous_var_nameX741, int* anonymous_var_nameX742, int anonymous_var_nameX743);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX744, const struct pcre_extra* anonymous_var_nameX745, const char* anonymous_var_nameX746, int anonymous_var_nameX747, int anonymous_var_nameX748, int anonymous_var_nameX749, int* anonymous_var_nameX750, int anonymous_var_nameX751);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX752, const struct pcre16_extra* anonymous_var_nameX753, const unsigned short int* anonymous_var_nameX754, int anonymous_var_nameX755, int anonymous_var_nameX756, int anonymous_var_nameX757, int* anonymous_var_nameX758, int anonymous_var_nameX759);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX760, const struct pcre32_extra* anonymous_var_nameX761, const unsigned int* anonymous_var_nameX762, int anonymous_var_nameX763, int anonymous_var_nameX764, int anonymous_var_nameX765, int* anonymous_var_nameX766, int anonymous_var_nameX767);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX768, const struct pcre_extra* anonymous_var_nameX769, const char* anonymous_var_nameX770, int anonymous_var_nameX771, int anonymous_var_nameX772, int anonymous_var_nameX773, int* anonymous_var_nameX774, int anonymous_var_nameX775, struct real_pcre_jit_stack* anonymous_var_nameX776);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX777, const struct pcre16_extra* anonymous_var_nameX778, const unsigned short int* anonymous_var_nameX779, int anonymous_var_nameX780, int anonymous_var_nameX781, int anonymous_var_nameX782, int* anonymous_var_nameX783, int anonymous_var_nameX784, struct real_pcre16_jit_stack* anonymous_var_nameX785);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX786, const struct pcre32_extra* anonymous_var_nameX787, const unsigned int* anonymous_var_nameX788, int anonymous_var_nameX789, int anonymous_var_nameX790, int anonymous_var_nameX791, int* anonymous_var_nameX792, int anonymous_var_nameX793, struct real_pcre32_jit_stack* anonymous_var_nameX794);

void pcre_free_substring(const char* anonymous_var_nameX795);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX796);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX797);

void pcre_free_substring_list(const char** anonymous_var_nameX798);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX799);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX800);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX801, const struct pcre_extra* anonymous_var_nameX802, int anonymous_var_nameX803, void* anonymous_var_nameX804);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX805, const struct pcre16_extra* anonymous_var_nameX806, int anonymous_var_nameX807, void* anonymous_var_nameX808);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX809, const struct pcre32_extra* anonymous_var_nameX810, int anonymous_var_nameX811, void* anonymous_var_nameX812);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX813, const char* anonymous_var_nameX814, int* anonymous_var_nameX815, int anonymous_var_nameX816, const char* anonymous_var_nameX817, const char** anonymous_var_nameX818);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX819, const unsigned short int* anonymous_var_nameX820, int* anonymous_var_nameX821, int anonymous_var_nameX822, const unsigned short int* anonymous_var_nameX823, const unsigned short int** anonymous_var_nameX824);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX825, const unsigned int* anonymous_var_nameX826, int* anonymous_var_nameX827, int anonymous_var_nameX828, const unsigned int* anonymous_var_nameX829, const unsigned int** anonymous_var_nameX830);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX831, const char* anonymous_var_nameX832);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX833, const unsigned short int* anonymous_var_nameX834);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX835, const unsigned int* anonymous_var_nameX836);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX837, const char* anonymous_var_nameX838, char** anonymous_var_nameX839, char** anonymous_var_nameX840);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX841, const unsigned short int* anonymous_var_nameX842, unsigned short int** anonymous_var_nameX843, unsigned short int** anonymous_var_nameX844);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX845, const unsigned int* anonymous_var_nameX846, unsigned int** anonymous_var_nameX847, unsigned int** anonymous_var_nameX848);

int pcre_get_substring(const char* anonymous_var_nameX849, int* anonymous_var_nameX850, int anonymous_var_nameX851, int anonymous_var_nameX852, const char** anonymous_var_nameX853);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX854, int* anonymous_var_nameX855, int anonymous_var_nameX856, int anonymous_var_nameX857, const unsigned short int** anonymous_var_nameX858);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX859, int* anonymous_var_nameX860, int anonymous_var_nameX861, int anonymous_var_nameX862, const unsigned int** anonymous_var_nameX863);

int pcre_get_substring_list(const char* anonymous_var_nameX864, int* anonymous_var_nameX865, int anonymous_var_nameX866, const char*** anonymous_var_nameX867);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX868, int* anonymous_var_nameX869, int anonymous_var_nameX870, const unsigned short int*** anonymous_var_nameX871);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX872, int* anonymous_var_nameX873, int anonymous_var_nameX874, const unsigned int*** anonymous_var_nameX875);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX876, int anonymous_var_nameX877);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX878, int anonymous_var_nameX879);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX880, int anonymous_var_nameX881);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX882, int anonymous_var_nameX883, const char** anonymous_var_nameX884);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX885, int anonymous_var_nameX886, const char** anonymous_var_nameX887);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX888, int anonymous_var_nameX889, const char** anonymous_var_nameX890);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX891);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX892);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX893);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX894, struct pcre_extra* anonymous_var_nameX895, const unsigned char* anonymous_var_nameX896);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX897, struct pcre16_extra* anonymous_var_nameX898, const unsigned char* anonymous_var_nameX899);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX900, struct pcre32_extra* anonymous_var_nameX901, const unsigned char* anonymous_var_nameX902);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX903, const unsigned short int* anonymous_var_nameX904, int anonymous_var_nameX905, int* anonymous_var_nameX906, int anonymous_var_nameX907);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX908, const unsigned int* anonymous_var_nameX909, int anonymous_var_nameX910, int* anonymous_var_nameX911, int anonymous_var_nameX912);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX913, int anonymous_var_nameX914);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX915, int anonymous_var_nameX916);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX917, int anonymous_var_nameX918);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX919);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX920);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX921);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX922, struct real_pcre_jit_stack* (*anonymous_var_nameX923)(void*), void* anonymous_var_nameX924);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX925, struct real_pcre16_jit_stack* (*anonymous_var_nameX926)(void*), void* anonymous_var_nameX927);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX928, struct real_pcre32_jit_stack* (*anonymous_var_nameX929)(void*), void* anonymous_var_nameX930);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

unsigned int* wcscpy(unsigned int* anonymous_var_nameX931, const unsigned int* anonymous_var_nameX932);

unsigned int* wcsncpy(unsigned int* anonymous_var_nameX933, const unsigned int* anonymous_var_nameX934, unsigned long int anonymous_var_nameX935);

unsigned int* wcscat(unsigned int* anonymous_var_nameX936, const unsigned int* anonymous_var_nameX937);

unsigned int* wcsncat(unsigned int* anonymous_var_nameX938, const unsigned int* anonymous_var_nameX939, unsigned long int anonymous_var_nameX940);

int wcscmp(const unsigned int* anonymous_var_nameX941, const unsigned int* anonymous_var_nameX942);

int wcsncmp(const unsigned int* anonymous_var_nameX943, const unsigned int* anonymous_var_nameX944, unsigned long int anonymous_var_nameX945);

int wcscoll(const unsigned int* anonymous_var_nameX946, const unsigned int* anonymous_var_nameX947);

unsigned long int wcsxfrm(unsigned int* anonymous_var_nameX948, const unsigned int* anonymous_var_nameX949, unsigned long int anonymous_var_nameX950);

unsigned int* wcschr(const unsigned int* anonymous_var_nameX951, unsigned int anonymous_var_nameX952);

unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX953, unsigned int anonymous_var_nameX954);

unsigned long int wcscspn(const unsigned int* anonymous_var_nameX955, const unsigned int* anonymous_var_nameX956);

unsigned long int wcsspn(const unsigned int* anonymous_var_nameX957, const unsigned int* anonymous_var_nameX958);

unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX959, const unsigned int* anonymous_var_nameX960);

unsigned int* wcstok(unsigned int* anonymous_var_nameX961, const unsigned int* anonymous_var_nameX962, unsigned int** anonymous_var_nameX963);

unsigned long int wcslen(const unsigned int* anonymous_var_nameX964);

unsigned int* wcsstr(const unsigned int* anonymous_var_nameX965, const unsigned int* anonymous_var_nameX966);

unsigned int* wcswcs(const unsigned int* anonymous_var_nameX967, const unsigned int* anonymous_var_nameX968);

unsigned int* wmemchr(const unsigned int* anonymous_var_nameX969, unsigned int anonymous_var_nameX970, unsigned long int anonymous_var_nameX971);

int wmemcmp(const unsigned int* anonymous_var_nameX972, const unsigned int* anonymous_var_nameX973, unsigned long int anonymous_var_nameX974);

unsigned int* wmemcpy(unsigned int* anonymous_var_nameX975, const unsigned int* anonymous_var_nameX976, unsigned long int anonymous_var_nameX977);

unsigned int* wmemmove(unsigned int* anonymous_var_nameX978, const unsigned int* anonymous_var_nameX979, unsigned long int anonymous_var_nameX980);

unsigned int* wmemset(unsigned int* anonymous_var_nameX981, unsigned int anonymous_var_nameX982, unsigned long int anonymous_var_nameX983);

unsigned int btowc(int anonymous_var_nameX984);

int wctob(unsigned int anonymous_var_nameX985);

int mbsinit(const struct __mbstate_t* anonymous_var_nameX986);

unsigned long int mbrtowc(unsigned int* anonymous_var_nameX987, const char* anonymous_var_nameX988, unsigned long int anonymous_var_nameX989, struct __mbstate_t* anonymous_var_nameX990);

unsigned long int wcrtomb(char* anonymous_var_nameX991, unsigned int anonymous_var_nameX992, struct __mbstate_t* anonymous_var_nameX993);

unsigned long int mbrlen(const char* anonymous_var_nameX994, unsigned long int anonymous_var_nameX995, struct __mbstate_t* anonymous_var_nameX996);

unsigned long int mbsrtowcs(unsigned int* anonymous_var_nameX997, const char** anonymous_var_nameX998, unsigned long int anonymous_var_nameX999, struct __mbstate_t* anonymous_var_nameX1000);

unsigned long int wcsrtombs(char* anonymous_var_nameX1001, const unsigned int** anonymous_var_nameX1002, unsigned long int anonymous_var_nameX1003, struct __mbstate_t* anonymous_var_nameX1004);

float wcstof(const unsigned int* anonymous_var_nameX1005, unsigned int** anonymous_var_nameX1006);

double wcstod(const unsigned int* anonymous_var_nameX1007, unsigned int** anonymous_var_nameX1008);

long double wcstold(const unsigned int* anonymous_var_nameX1009, unsigned int** anonymous_var_nameX1010);

long wcstol(const unsigned int* anonymous_var_nameX1011, unsigned int** anonymous_var_nameX1012, int anonymous_var_nameX1013);

unsigned long int wcstoul(const unsigned int* anonymous_var_nameX1014, unsigned int** anonymous_var_nameX1015, int anonymous_var_nameX1016);

long long wcstoll(const unsigned int* anonymous_var_nameX1017, unsigned int** anonymous_var_nameX1018, int anonymous_var_nameX1019);

unsigned long long wcstoull(const unsigned int* anonymous_var_nameX1020, unsigned int** anonymous_var_nameX1021, int anonymous_var_nameX1022);

int fwide(struct _IO_FILE* anonymous_var_nameX1023, int anonymous_var_nameX1024);

int wprintf(const unsigned int* anonymous_var_nameX1025, ...);

int fwprintf(struct _IO_FILE* anonymous_var_nameX1026, const unsigned int* anonymous_var_nameX1027, ...);

int swprintf(unsigned int* anonymous_var_nameX1028, unsigned long int anonymous_var_nameX1029, const unsigned int* anonymous_var_nameX1030, ...);

int vwprintf(const unsigned int* anonymous_var_nameX1031, va_list anonymous_var_nameX1032);

int vfwprintf(struct _IO_FILE* anonymous_var_nameX1033, const unsigned int* anonymous_var_nameX1034, va_list anonymous_var_nameX1035);

int vswprintf(unsigned int* anonymous_var_nameX1036, unsigned long int anonymous_var_nameX1037, const unsigned int* anonymous_var_nameX1038, va_list anonymous_var_nameX1039);

int wscanf(const unsigned int* anonymous_var_nameX1040, ...);

int fwscanf(struct _IO_FILE* anonymous_var_nameX1041, const unsigned int* anonymous_var_nameX1042, ...);

int swscanf(const unsigned int* anonymous_var_nameX1043, const unsigned int* anonymous_var_nameX1044, ...);

int vwscanf(const unsigned int* anonymous_var_nameX1045, va_list anonymous_var_nameX1046);

int vfwscanf(struct _IO_FILE* anonymous_var_nameX1047, const unsigned int* anonymous_var_nameX1048, va_list anonymous_var_nameX1049);

int vswscanf(const unsigned int* anonymous_var_nameX1050, const unsigned int* anonymous_var_nameX1051, va_list anonymous_var_nameX1052);

unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1053);

unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1054);

unsigned int getwchar();

unsigned int fputwc(unsigned int anonymous_var_nameX1055, struct _IO_FILE* anonymous_var_nameX1056);

unsigned int putwc(unsigned int anonymous_var_nameX1057, struct _IO_FILE* anonymous_var_nameX1058);

unsigned int putwchar(unsigned int anonymous_var_nameX1059);

unsigned int* fgetws(unsigned int* anonymous_var_nameX1060, int anonymous_var_nameX1061, struct _IO_FILE* anonymous_var_nameX1062);

int fputws(const unsigned int* anonymous_var_nameX1063, struct _IO_FILE* anonymous_var_nameX1064);

unsigned int ungetwc(unsigned int anonymous_var_nameX1065, struct _IO_FILE* anonymous_var_nameX1066);

unsigned long int wcsftime(unsigned int* anonymous_var_nameX1067, unsigned long int anonymous_var_nameX1068, const unsigned int* anonymous_var_nameX1069, const struct tm* anonymous_var_nameX1070);

unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1071);

unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1072);

unsigned int getwchar_unlocked();

unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1073, struct _IO_FILE* anonymous_var_nameX1074);

unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1075, struct _IO_FILE* anonymous_var_nameX1076);

unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1077);

unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1078, int anonymous_var_nameX1079, struct _IO_FILE* anonymous_var_nameX1080);

int fputws_unlocked(const unsigned int* anonymous_var_nameX1081, struct _IO_FILE* anonymous_var_nameX1082);

unsigned long int wcsftime_l(unsigned int* anonymous_var_nameX1083, unsigned long int anonymous_var_nameX1084, const unsigned int* anonymous_var_nameX1085, const struct tm* anonymous_var_nameX1086, struct __locale_struct* anonymous_var_nameX1087);

struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1088, unsigned long int* anonymous_var_nameX1089);

unsigned long int mbsnrtowcs(unsigned int* anonymous_var_nameX1090, const char** anonymous_var_nameX1091, unsigned long int anonymous_var_nameX1092, unsigned long int anonymous_var_nameX1093, struct __mbstate_t* anonymous_var_nameX1094);

unsigned long int wcsnrtombs(char* anonymous_var_nameX1095, const unsigned int** anonymous_var_nameX1096, unsigned long int anonymous_var_nameX1097, unsigned long int anonymous_var_nameX1098, struct __mbstate_t* anonymous_var_nameX1099);

unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1100);

unsigned long int wcsnlen(const unsigned int* anonymous_var_nameX1101, unsigned long int anonymous_var_nameX1102);

unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1103, const unsigned int* anonymous_var_nameX1104);

unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1105, const unsigned int* anonymous_var_nameX1106, unsigned long int anonymous_var_nameX1107);

int wcscasecmp(const unsigned int* anonymous_var_nameX1108, const unsigned int* anonymous_var_nameX1109);

int wcscasecmp_l(const unsigned int* anonymous_var_nameX1110, const unsigned int* anonymous_var_nameX1111, struct __locale_struct* anonymous_var_nameX1112);

int wcsncasecmp(const unsigned int* anonymous_var_nameX1113, const unsigned int* anonymous_var_nameX1114, unsigned long int anonymous_var_nameX1115);

int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1116, const unsigned int* anonymous_var_nameX1117, unsigned long int anonymous_var_nameX1118, struct __locale_struct* anonymous_var_nameX1119);

int wcscoll_l(const unsigned int* anonymous_var_nameX1120, const unsigned int* anonymous_var_nameX1121, struct __locale_struct* anonymous_var_nameX1122);

unsigned long int wcsxfrm_l(unsigned int* anonymous_var_nameX1123, const unsigned int* anonymous_var_nameX1124, unsigned long int anonymous_var_nameX1125, struct __locale_struct* anonymous_var_nameX1126);

int wcwidth(unsigned int anonymous_var_nameX1127);

int wcswidth(const unsigned int* anonymous_var_nameX1128, unsigned long int anonymous_var_nameX1129);

int iswalnum(unsigned int anonymous_var_nameX1130);

int iswalpha(unsigned int anonymous_var_nameX1131);

int iswblank(unsigned int anonymous_var_nameX1132);

int iswcntrl(unsigned int anonymous_var_nameX1133);

int iswdigit(unsigned int anonymous_var_nameX1134);

int iswgraph(unsigned int anonymous_var_nameX1135);

int iswlower(unsigned int anonymous_var_nameX1136);

int iswprint(unsigned int anonymous_var_nameX1137);

int iswpunct(unsigned int anonymous_var_nameX1138);

int iswspace(unsigned int anonymous_var_nameX1139);

int iswupper(unsigned int anonymous_var_nameX1140);

int iswxdigit(unsigned int anonymous_var_nameX1141);

int iswctype(unsigned int anonymous_var_nameX1142, unsigned long int anonymous_var_nameX1143);

unsigned int towlower(unsigned int anonymous_var_nameX1144);

unsigned int towupper(unsigned int anonymous_var_nameX1145);

unsigned long int wctype(const char* anonymous_var_nameX1146);

static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX1156)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX1158)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX1160)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX1161);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX1162);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX1163);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX1164);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX1165)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX1166);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX1167);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1168);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX1169);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1170);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX1171);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX1172);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX1173);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1174);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1175);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX1176);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX1177);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX1178);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX1179);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX1180);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX1181);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX1182);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX1183);

char* GC_strdup(const char* anonymous_var_nameX1184);

char* GC_strndup(const char* anonymous_var_nameX1185, unsigned long int anonymous_var_nameX1186);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX1187);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX1188);

void* GC_memalign(unsigned long int anonymous_var_nameX1189, unsigned long int anonymous_var_nameX1190);

int GC_posix_memalign(void** anonymous_var_nameX1191, unsigned long int anonymous_var_nameX1192, unsigned long int anonymous_var_nameX1193);

void GC_free(void* anonymous_var_nameX1194);

void GC_change_stubborn(const void* anonymous_var_nameX1195);

void GC_end_stubborn_change(const void* anonymous_var_nameX1196);

void* GC_base(void* anonymous_var_nameX1197);

int GC_is_heap_ptr(const void* anonymous_var_nameX1198);

unsigned long int GC_size(const void* anonymous_var_nameX1199);

void* GC_realloc(void* anonymous_var_nameX1200, unsigned long int anonymous_var_nameX1201);

int GC_expand_hp(unsigned long int anonymous_var_nameX1202);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1203);

void GC_exclude_static_roots(void* anonymous_var_nameX1204, void* anonymous_var_nameX1205);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX1206, void* anonymous_var_nameX1207);

void GC_remove_roots(void* anonymous_var_nameX1208, void* anonymous_var_nameX1209);

void GC_register_displacement(unsigned long int anonymous_var_nameX1210);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX1211);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX1212)());

void GC_set_stop_func(int (*anonymous_var_nameX1213)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1214, unsigned long int* anonymous_var_nameX1215, unsigned long int* anonymous_var_nameX1216, unsigned long int* anonymous_var_nameX1217, unsigned long int* anonymous_var_nameX1218);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1219, unsigned long int anonymous_var_nameX1220);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX1221);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1222);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1223);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1224);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1225, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX1226, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX1227, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX1228, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX1229, unsigned long int anonymous_var_nameX1230, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX1231, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX1232, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1233, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1234, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX1235);

void* GC_debug_realloc(void* anonymous_var_nameX1236, unsigned long int anonymous_var_nameX1237, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX1238);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1239);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX1240);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX1241, unsigned long int anonymous_var_nameX1242);

void GC_register_finalizer(void* anonymous_var_nameX1245, void (*anonymous_var_nameX1246)(void*,void*), void* anonymous_var_nameX1247, void (*anonymous_var_nameX1248)(void*,void*), void** anonymous_var_nameX1249);

void GC_debug_register_finalizer(void* anonymous_var_nameX1250, void (*anonymous_var_nameX1251)(void*,void*), void* anonymous_var_nameX1252, void (*anonymous_var_nameX1253)(void*,void*), void** anonymous_var_nameX1254);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1255, void (*anonymous_var_nameX1256)(void*,void*), void* anonymous_var_nameX1257, void (*anonymous_var_nameX1258)(void*,void*), void** anonymous_var_nameX1259);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1260, void (*anonymous_var_nameX1261)(void*,void*), void* anonymous_var_nameX1262, void (*anonymous_var_nameX1263)(void*,void*), void** anonymous_var_nameX1264);

void GC_register_finalizer_no_order(void* anonymous_var_nameX1265, void (*anonymous_var_nameX1266)(void*,void*), void* anonymous_var_nameX1267, void (*anonymous_var_nameX1268)(void*,void*), void** anonymous_var_nameX1269);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1270, void (*anonymous_var_nameX1271)(void*,void*), void* anonymous_var_nameX1272, void (*anonymous_var_nameX1273)(void*,void*), void** anonymous_var_nameX1274);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX1275, void (*anonymous_var_nameX1276)(void*,void*), void* anonymous_var_nameX1277, void (*anonymous_var_nameX1278)(void*,void*), void** anonymous_var_nameX1279);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1280, void (*anonymous_var_nameX1281)(void*,void*), void* anonymous_var_nameX1282, void (*anonymous_var_nameX1283)(void*,void*), void** anonymous_var_nameX1284);

int GC_register_disappearing_link(void** anonymous_var_nameX1285);

int GC_general_register_disappearing_link(void** anonymous_var_nameX1286, const void* anonymous_var_nameX1287);

int GC_move_disappearing_link(void** anonymous_var_nameX1288, void** anonymous_var_nameX1289);

int GC_unregister_disappearing_link(void** anonymous_var_nameX1290);

int GC_register_long_link(void** anonymous_var_nameX1291, const void* anonymous_var_nameX1292);

int GC_move_long_link(void** anonymous_var_nameX1293, void** anonymous_var_nameX1294);

int GC_unregister_long_link(void** anonymous_var_nameX1295);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX1297)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX1298, int anonymous_var_nameX1299);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX1301)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX1302);

void GC_set_warn_proc(void (*anonymous_var_nameX1305)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX1306, unsigned long int anonymous_var_nameX1307);

void GC_set_log_fd(int anonymous_var_nameX1308);

void GC_set_abort_func(void (*anonymous_var_nameX1310)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1312)(void*), void* anonymous_var_nameX1313);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX1316)(struct GC_stack_base*,void*), void* anonymous_var_nameX1317);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX1318)(void*), void* anonymous_var_nameX1319);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX1320)(void*), void* anonymous_var_nameX1321);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1322);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1323);

void GC_set_stackbottom(void* anonymous_var_nameX1324, const struct GC_stack_base* anonymous_var_nameX1325);

void* GC_same_obj(void* anonymous_var_nameX1326, void* anonymous_var_nameX1327);

void* GC_pre_incr(void** anonymous_var_nameX1328, long anonymous_var_nameX1329);

void* GC_post_incr(void** anonymous_var_nameX1330, long anonymous_var_nameX1331);

void* GC_is_visible(void* anonymous_var_nameX1332);

void* GC_is_valid_displacement(void* anonymous_var_nameX1333);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX1334);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX1335, const void* anonymous_var_nameX1336);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1337, const void* anonymous_var_nameX1338);

void* GC_malloc_many(unsigned long int anonymous_var_nameX1359);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1363)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1364);

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
    perror(msg);
    stackframe();
    exit(4);
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1901, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1908, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1915, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1922, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1929, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1936, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1952, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_6->p=result_6->memory->buf;
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1962, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_7->p=(char*)result_7->memory->buf;
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1972, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_8->p=(short short*)result_8->memory->buf;
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1982, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_9->p=(int*)result_9->memory->buf;
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1992, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_10->p=(long*)result_10->memory->buf;
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2163, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2168, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2173, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2178, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2183, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2188, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2193, "list$1char")))),len,self)));
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2198, "list$1short")))),len,self)));
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2203, "list$1int")))),len,self)));
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2208, "list$1long")))),len,self)));
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2213, "list$1float")))),len,self)));
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2218, "list$1double")))),len,self)));
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
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result49__ = __result_obj__ = ((char*)(right_value76=xsprintf(msg,self)));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result50__ = __result_obj__ = ((char*)(right_value77=xsprintf(msg,self)));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result51__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
void* right_value79;
unsigned int* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    __result52__ = __result_obj__ = ((unsigned int*)(right_value79=wchar_tp_substring(str,head,tail)));
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result52__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = charp_index_count(str,search_str,count,default_value);
    return __result53__;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = charp_index_regex_count(self,reg,count,default_value);
    return __result54__;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    __result55__ = charp_rindex(str,search_str,default_value);
    return __result55__;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    __result56__ = charp_rindex_regex(self,reg,default_value);
    return __result56__;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    __result57__ = charp_rindex_count(str,search_str,default_value,-1);
    return __result57__;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value80;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    __result58__ = __result_obj__ = ((struct list$1charph*)(right_value80=charp_scan_block(self,reg,parent,block)));
    come_call_finalizer3(right_value80,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result58__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value81;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result59__ = __result_obj__ = ((struct list$1charph*)(right_value81=charp_scan_block_count(self,reg,count,parent,block)));
    come_call_finalizer3(right_value81,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result59__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value82;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    __result60__ = __result_obj__ = ((struct list$1charph*)(right_value82=charp_split_block(self,reg,parent,block)));
    come_call_finalizer3(right_value82,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result60__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value83;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
    __result61__ = __result_obj__ = ((struct list$1charph*)(right_value83=charp_split_block_count(self,reg,count,parent,block)));
    come_call_finalizer3(right_value83,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result61__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
void* right_value84;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    __result62__ = __result_obj__ = ((struct list$1charph*)(right_value84=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    come_call_finalizer3(right_value84,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result62__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
void* right_value85;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
    __result63__ = __result_obj__ = ((char*)(right_value85=charp_strip(self)));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
void* right_value86;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
    __result64__ = __result_obj__ = ((char*)(right_value86=string_printable(str)));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result64__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__;
void* right_value87;
unsigned int* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
    __result65__ = __result_obj__ = ((unsigned int*)(right_value87=charp_to_wstring(str)));
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__;
void* right_value88;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
    __result66__ = __result_obj__ = ((char*)(right_value88=wchar_tp_to_string(wstr)));
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__;
void* right_value89;
void* right_value90;
unsigned int* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
right_value90 = (void*)0;
    __result67__ = __result_obj__ = ((unsigned int*)(right_value90=string_to_wstring(((char*)(right_value89=xsprintf("%d",self))))));
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
}
static inline int wstring_length(unsigned int* str){
void* __result_obj__;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    __result68__ = wchar_tp_length(str);
    return __result68__;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
void* right_value91;
unsigned int* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
    __result69__ = __result_obj__ = ((unsigned int*)(right_value91=wchar_tp_delete(str,head,tail)));
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    __result70__ = wchar_tp_index(str,search_str,default_value);
    return __result70__;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    __result71__ = wchar_tp_rindex(str,search_str,default_value);
    return __result71__;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__;
void* right_value92;
unsigned int* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
    __result72__ = __result_obj__ = ((unsigned int*)(right_value92=wchar_tp_reverse(str)));
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result72__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__;
void* right_value93;
unsigned int* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    __result73__ = __result_obj__ = ((unsigned int*)(right_value93=wchar_tp_multiply(str,n)));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result73__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__;
void* right_value94;
unsigned int* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
    __result74__ = __result_obj__ = ((unsigned int*)(right_value94=wchar_tp_printable(str)));
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
void* __result_obj__;
unsigned int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    __result75__ = wchar_tp_get_hash_key(value);
    return __result75__;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    __result76__ = charp_match_group_strings(self,reg,count,group_strings);
    return __result76__;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = charp_index(str,search_str,default_value);
    return __result77__;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = charp_index_regex(self,reg,default_value);
    return __result78__;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
void* right_value95;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    __result79__ = __result_obj__ = ((char*)(right_value95=charp_replace(self,index,c)));
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
void* right_value96;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
    __result80__ = __result_obj__ = ((char*)(right_value96=charp_multiply(str,n)));
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result80__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
void* right_value97;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value97=charp_sub(self,reg,replace)));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
void* right_value98;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
    __result82__ = __result_obj__ = ((char*)(right_value98=charp_sub_count(self,reg,replace,count)));
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
void* right_value99;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
    __result83__ = __result_obj__ = ((struct list$1charph*)(right_value99=charp_split_str(self,str)));
    come_call_finalizer3(right_value99,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result83__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value100;
struct list$1charph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
    __result84__ = __result_obj__ = ((struct list$1charph*)(right_value100=charp_scan(self,reg)));
    come_call_finalizer3(right_value100,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result84__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value101;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
    __result85__ = __result_obj__ = ((struct list$1charph*)(right_value101=charp_split(self,reg)));
    come_call_finalizer3(right_value101,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result85__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = charp_match(self,reg);
    return __result86__;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
void* right_value102;
struct list$1charph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
    __result87__ = __result_obj__ = ((struct list$1charph*)(right_value102=charp_split_maxsplit(self,reg,maxsplit)));
    come_call_finalizer3(right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result87__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = charp_rindex_regex_count(self,reg,count,default_value);
    return __result88__;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = charp_match_count(self,reg,count);
    return __result89__;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value103;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
    __result90__ = __result_obj__ = ((char*)(right_value103=charp_sub_block(self,reg,parent,block)));
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value104;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value104=charp_sub_block_count(self,reg,count,parent,block)));
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
void* right_value106;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
    __result93__ = __result_obj__ = ((char*)(right_value106=string_chomp(str)));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result13__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result15__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result17__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            list$1char_push_back(self,values[i_11]);
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
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 221, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 231, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 241, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_14->prev=self->tail;
                        litem_14->next=((void*)0);
                        litem_14->item=item;
                        self->tail->next=litem_14;
                        self->tail=litem_14;
                    }
                }
                self->len++;
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
            it_15=self->head;
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                prev_it_16=it_15;
                it_15=it_15->next;
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            list$1short_push_back(self,values[i_17]);
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
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 221, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 231, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 241, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_20->prev=self->tail;
                        litem_20->next=((void*)0);
                        litem_20->item=item;
                        self->tail->next=litem_20;
                        self->tail=litem_20;
                    }
                }
                self->len++;
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
            it_21=self->head;
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                prev_it_22=it_21;
                it_21=it_21->next;
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            list$1int_push_back(self,values[i_23]);
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
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 221, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 231, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 241, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_26->prev=self->tail;
                        litem_26->next=((void*)0);
                        litem_26->item=item;
                        self->tail->next=litem_26;
                        self->tail=litem_26;
                    }
                }
                self->len++;
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
            it_27=self->head;
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                prev_it_28=it_27;
                it_27=it_27->next;
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            list$1long_push_back(self,values[i_29]);
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
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 221, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 231, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 241, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_32->prev=self->tail;
                        litem_32->next=((void*)0);
                        litem_32->item=item;
                        self->tail->next=litem_32;
                        self->tail=litem_32;
                    }
                }
                self->len++;
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
            it_33=self->head;
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                prev_it_34=it_33;
                it_33=it_33->next;
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            list$1float_push_back(self,values[i_35]);
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
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 221, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 231, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 241, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_38->prev=self->tail;
                        litem_38->next=((void*)0);
                        litem_38->item=item;
                        self->tail->next=litem_38;
                        self->tail=litem_38;
                    }
                }
                self->len++;
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
            it_39=self->head;
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                prev_it_40=it_39;
                it_39=it_39->next;
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            list$1double_push_back(self,values[i_41]);
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
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 221, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 231, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 241, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->tail;
                        litem_44->next=((void*)0);
                        litem_44->item=item;
                        self->tail->next=litem_44;
                        self->tail=litem_44;
                    }
                }
                self->len++;
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
            it_45=self->head;
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                prev_it_46=it_45;
                it_45=it_45->next;
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
        it_47=self->head;
        while(_while_condtional7=it_47!=((void*)0),        _while_condtional7) {
            prev_it_48=it_47;
            it_47=it_47->next;
            come_call_finalizer3(prev_it_48,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional19) {
                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}



































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
const char* err_49;
int erro_ofs_50;
int options_51;
void* right_value107;
char* __dec_obj12;
_Bool _if_conditional20;
struct come_regex* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_50, 0, sizeof(int));
memset(&options_51, 0, sizeof(int));
right_value107 = (void*)0;
    options_51=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    __dec_obj12=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string(str))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_51;
    self->re=pcre_compile(str,options_51,&err_49,&erro_ofs_50,((void*)0));
    if(_if_conditional20=self->re==((void*)0),    _if_conditional20) {
        printf("regex error (%s)\n",str);
        stackframe();
        exit(1);
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
    if(_if_conditional21=reg&&reg->str,    _if_conditional21) {
        reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional22=reg&&reg->re,    _if_conditional22) {
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
void* right_value108;
void* right_value109;
struct come_regex* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
    __result95__ = __result_obj__ = ((struct come_regex*)(right_value109=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value108=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str.c", 65, "come_regex")))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_call_finalizer3(right_value108,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value109,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    return __result95__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
void* right_value110;
void* right_value111;
struct come_regex* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
right_value111 = (void*)0;
    __result96__ = __result_obj__ = ((struct come_regex*)(right_value111=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value110=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str.c", 70, "come_regex")))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
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
void* right_value113;
char* __dec_obj13;
const char* err_53;
int erro_ofs_54;
_Bool _if_conditional24;
struct come_regex* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&result_52, 0, sizeof(struct come_regex*));
right_value113 = (void*)0;
memset(&erro_ofs_54, 0, sizeof(int));
    if(_if_conditional23=reg==((void*)0),    _if_conditional23) {
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    result_52=(struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value112=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str.c", 80, "come_regex"))));
    come_call_finalizer3(right_value112,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=result_52->str;
    result_52->str=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(reg->str))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_52->ignore_case=reg->ignore_case;
    result_52->multiline=reg->multiline;
    result_52->global=reg->global;
    result_52->extended=reg->extended;
    result_52->dotall=reg->dotall;
    result_52->anchored=reg->anchored;
    result_52->dollar_endonly=reg->dollar_endonly;
    result_52->ungreedy=reg->ungreedy;
    result_52->options=reg->options;
    result_52->re=pcre_compile(result_52->str,result_52->options,&err_53,&erro_ofs_54,((void*)0));
    if(_if_conditional24=result_52->re==((void*)0),    _if_conditional24) {
        printf("regex compile error(%s)\n",result_52->str);
        stackframe();
        exit(1);
    }
    __result98__ = __result_obj__ = result_52;
    come_call_finalizer3(result_52,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    return __result98__;
    come_call_finalizer3(result_52,come_regex_finalize, 0, 0, 0, 0, (void*)0);
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
void* right_value114;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value114=__builtin_string(regex->str)));
    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

char* string_lower_case(char* str){
void* __result_obj__;
void* right_value115;
char* result_55;
int i_56;
_Bool _if_conditional25;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
memset(&result_55, 0, sizeof(char*));
memset(&i_56, 0, sizeof(int));
    result_55=(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string(str))));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_56=0;    i_56<strlen(str);    i_56++    ){
        if(_if_conditional25=str[i_56]>=65&&str[i_56]<=90,        _if_conditional25) {
            result_55[i_56]=str[i_56]-65+97;
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
char* result_57;
int i_58;
_Bool _if_conditional26;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&result_57, 0, sizeof(char*));
memset(&i_58, 0, sizeof(int));
    result_57=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(str))));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_58=0;    i_58<strlen(str);    i_58++    ){
        if(_if_conditional26=str[i_58]>=97&&str[i_58]<=122,        _if_conditional26) {
            result_57[i_58]=str[i_58]-97+65;
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
unsigned int* __result102__;
int len_59;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
void* right_value118;
unsigned int* __result103__;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
void* right_value119;
unsigned int* __result104__;
_Bool _if_conditional34;
void* right_value120;
unsigned int* __result105__;
void* right_value121;
unsigned int* result_60;
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
        __result102__ = __result_obj__ = ((unsigned int*)(right_value117=__builtin_wstring("")));
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result102__;
    }
    len_59=wcslen(str);
    if(_if_conditional28=head<0,    _if_conditional28) {
        head+=len_59;
    }
    if(_if_conditional29=tail<0,    _if_conditional29) {
        tail+=len_59+1;
    }
    if(_if_conditional30=head>tail,    _if_conditional30) {
        __result103__ = __result_obj__ = ((unsigned int*)(right_value118=__builtin_wstring("")));
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
        __result104__ = __result_obj__ = ((unsigned int*)(right_value119=__builtin_wstring("")));
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result104__;
    }
    if(_if_conditional34=tail-head+1<1,    _if_conditional34) {
        __result105__ = __result_obj__ = ((unsigned int*)(right_value120=__builtin_wstring("")));
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result105__;
    }
    result_60=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value121=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libneo-c-str.c", 175, "int"))));
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_60,str+head,sizeof(unsigned int)*(tail-head));
    result_60[tail-head]=0;
    __result106__ = __result_obj__ = result_60;
    result_60 = come_decrement_ref_count2(result_60, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result106__;
    result_60 = come_decrement_ref_count2(result_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool _if_conditional35;
unsigned int* __result107__;
int len_61;
void* right_value122;
unsigned int* wstr_62;
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
    len_61=strlen(str);
    wstr_62=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value122=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_61+1)), "libneo-c-str.c", 190, "int"))));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ret_63=mbstowcs(wstr_62,str,len_61+1);
    wstr_62[ret_63]=0;
    if(_if_conditional36=ret_63<0,    _if_conditional36) {
        wstr_62[0]=0;
    }
    __result108__ = __result_obj__ = wstr_62;
    wstr_62 = come_decrement_ref_count2(wstr_62, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result108__;
    wstr_62 = come_decrement_ref_count2(wstr_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int n_64;
int len_65;
int i_66;
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
    len_65=strlen(str);
    for(    i_66=0;    i_66<len_65;    i_66++    ){
        len2_67=strlen(search_str);
        for(        j_68=0;        j_68<len2_67;        j_68++        ){
            if(_if_conditional37=str[i_66+j_68]!=search_str[j_68],            _if_conditional37) {
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
int len_82;
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
    options_77=reg->options;
    str_78=reg->str;
    re_79=reg->re;
    n_80=0;
    while(_while_condtional8=(_Bool)1,    _while_condtional8) {
        options_81=2097152;
        len_82=strlen(self);
        regex_result_83=pcre_exec(re_79,(struct pcre_extra*)0,self,len_82,offset_74,options_81,ovec_value_72,ovec_max_69*3);
        for(        i_84=0;        i_84<ovec_max_69;        i_84++        ){
            start_70[i_84]=ovec_value_72[i_84*2];
        }
        for(        i_85=0;        i_85<ovec_max_69;        i_85++        ){
            end_71[i_85]=ovec_value_72[i_85*2+1];
        }
        if(_if_conditional40=regex_result_83>0,        _if_conditional40) {
            n_80++;
            if(_if_conditional41=offset_74==end_71[0],            _if_conditional41) {
                offset_74++;
            }
            else {
                offset_74=end_71[0];
            }
            if(_if_conditional42=n_80==count,            _if_conditional42) {
                result_73=start_70[0];
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
int len_86;
char* p_87;
_Bool _while_condtional9;
_Bool _if_conditional43;
int __result112__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_86, 0, sizeof(int));
memset(&p_87, 0, sizeof(char*));
    len_86=strlen(search_str);
    p_87=str+strlen(str)-len_86;
    while(_while_condtional9=p_87>=str,    _while_condtional9) {
        if(_if_conditional43=strncmp(p_87,search_str,len_86)==0,        _if_conditional43) {
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
char* self2_93;
int ovec_max_94;
int result_98;
int offset_99;
_Bool _while_condtional10;
int options_100;
int len_101;
int regex_result_102;
int i_103;
int i_104;
_Bool _if_conditional44;
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
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
    options_90=reg->options;
    str_91=reg->str;
    re_92=reg->re;
    self2_93=(char*)come_increment_ref_count(((char*)(right_value123=charp_reverse(self))));
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
        len_101=strlen(self2_93);
        regex_result_102=pcre_exec(re_92,(struct pcre_extra*)0,self2_93,len_101,offset_99,options_100,ovec_value_97,ovec_max_94*3);
        for(        i_103=0;        i_103<ovec_max_94;        i_103++        ){
            start_95[i_103]=ovec_value_97[i_103*2];
        }
        for(        i_104=0;        i_104<ovec_max_94;        i_104++        ){
            end_96[i_104]=ovec_value_97[i_104*2+1];
        }
        if(_if_conditional44=regex_result_102==1||regex_result_102>0,        _if_conditional44) {
            result_98=strlen(self)-1-start_95[0];
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
int len_105;
char* p_106;
int n_107;
_Bool _while_condtional11;
_Bool _if_conditional45;
_Bool _if_conditional46;
int __result115__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_105, 0, sizeof(int));
memset(&p_106, 0, sizeof(char*));
memset(&n_107, 0, sizeof(int));
    len_105=strlen(search_str);
    p_106=str+strlen(str)-len_105;
    n_107=0;
    while(_while_condtional11=p_106>=str,    _while_condtional11) {
        if(_if_conditional45=strncmp(p_106,search_str,len_105)==0,        _if_conditional45) {
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
int len_120;
int regex_result_121;
int i_122;
int i_123;
_Bool _if_conditional47;
void* right_value126;
char* str_124;
void* right_value127;
void* right_value128;
struct list$1charph* group_strings_125;
void* right_value129;
char* str2_126;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value133;
char* str_130;
void* right_value134;
void* right_value135;
struct list$1charph* group_strings_131;
int i_132;
void* right_value136;
char* match_string_133;
void* right_value137;
char* str2_134;
_Bool _if_conditional52;
struct list$1charph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
right_value125 = (void*)0;
memset(&result_108, 0, sizeof(struct list$1charph*));
memset(&offset_109, 0, sizeof(int));
memset(&ovec_max_110, 0, sizeof(int));
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
    result_108=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value125=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 376, "list$1charph"))))))));
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
    options_116=reg->options;
    str_117=reg->str;
    re_118=reg->re;
    while(_while_condtional12=(_Bool)1,    _while_condtional12) {
        options_119=2097152;
        len_120=strlen(self);
        regex_result_121=pcre_exec(re_118,(struct pcre_extra*)0,self,len_120,offset_109,options_119,ovec_value_113,ovec_max_110*3);
        for(        i_122=0;        i_122<ovec_max_110;        i_122++        ){
            start_111[i_122]=ovec_value_113[i_122*2];
        }
        for(        i_123=0;        i_123<ovec_max_110;        i_123++        ){
            end_112[i_123]=ovec_value_113[i_123*2+1];
        }
        if(_if_conditional47=regex_result_121==1,        _if_conditional47) {
            str_124=(char*)come_increment_ref_count(((char*)(right_value126=charp_substring(self,start_111[0],end_112[0]))));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            group_strings_125=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value128=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value127=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 410, "list$1charph"))))))));
            come_call_finalizer3(right_value127,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value128,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_126=(char*)come_increment_ref_count(((char*)(right_value129=block(parent,str_124,group_strings_125))));
            right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_108,(char*)come_increment_ref_count(str2_126));
            if(_if_conditional50=offset_109==end_112[0],            _if_conditional50) {
                offset_109++;
            }
            else {
                offset_109=end_112[0];
            }
            str_124 = come_decrement_ref_count2(str_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(group_strings_125,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_126 = come_decrement_ref_count2(str2_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional51=regex_result_121>1,            _if_conditional51) {
                str_130=(char*)come_increment_ref_count(((char*)(right_value133=charp_substring(self,start_111[0],end_112[0]))));
                right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                group_strings_131=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 427, "list$1charph"))))))));
                come_call_finalizer3(right_value134,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value135,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_132=1;                i_132<regex_result_121;                i_132++                ){
                    match_string_133=(char*)come_increment_ref_count(((char*)(right_value136=charp_substring(self,start_111[i_132],end_112[i_132]))));
                    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_131,(char*)come_increment_ref_count(match_string_133));
                    match_string_133 = come_decrement_ref_count2(match_string_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_134=(char*)come_increment_ref_count(((char*)(right_value137=block(parent,str_130,group_strings_131))));
                right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_108,(char*)come_increment_ref_count(str2_134));
                if(_if_conditional52=offset_109==end_112[0],                _if_conditional52) {
                    offset_109++;
                }
                else {
                    offset_109=end_112[0];
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
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
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
                if(_if_conditional48=self->len==0,                _if_conditional48) {
                    litem_127=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value130=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 221, "list_item$1charph"))));
                    come_call_finalizer3(right_value130,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_127->prev=((void*)0);
                    litem_127->next=((void*)0);
                    __dec_obj14=litem_127->item;
                    litem_127->item=(char*)come_increment_ref_count(item);
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_127;
                    self->head=litem_127;
                }
                else {
                    if(_if_conditional49=self->len==1,                    _if_conditional49) {
                        litem_128=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value131=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 231, "list_item$1charph"))));
                        come_call_finalizer3(right_value131,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_128->prev=self->head;
                        litem_128->next=((void*)0);
                        __dec_obj15=litem_128->item;
                        litem_128->item=(char*)come_increment_ref_count(item);
                        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_128;
                        self->head->next=litem_128;
                    }
                    else {
                        litem_129=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value132=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 241, "list_item$1charph"))));
                        come_call_finalizer3(right_value132,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_129->prev=self->tail;
                        litem_129->next=((void*)0);
                        __dec_obj16=litem_129->item;
                        litem_129->item=(char*)come_increment_ref_count(item);
                        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_129;
                        self->tail=litem_129;
                    }
                }
                self->len++;
                __result118__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result118__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value138;
void* right_value139;
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
int len_148;
int regex_result_149;
int i_150;
int i_151;
_Bool _if_conditional53;
void* right_value140;
char* str_152;
void* right_value141;
void* right_value142;
struct list$1charph* group_strings_153;
void* right_value143;
char* str2_154;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value144;
char* str_155;
void* right_value145;
void* right_value146;
struct list$1charph* group_strings_156;
int i_157;
void* right_value147;
char* match_string_158;
void* right_value148;
char* str2_159;
_Bool _if_conditional57;
_Bool _if_conditional58;
struct list$1charph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&result_135, 0, sizeof(struct list$1charph*));
memset(&offset_136, 0, sizeof(int));
memset(&ovec_max_137, 0, sizeof(int));
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
    result_135=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value139=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value138=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 457, "list$1charph"))))))));
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
    options_143=reg->options;
    str_144=reg->str;
    re_145=reg->re;
    n_146=0;
    while(_while_condtional13=(_Bool)1,    _while_condtional13) {
        options_147=2097152;
        len_148=strlen(self);
        regex_result_149=pcre_exec(re_145,(struct pcre_extra*)0,self,len_148,offset_136,options_147,ovec_value_140,ovec_max_137*3);
        for(        i_150=0;        i_150<ovec_max_137;        i_150++        ){
            start_138[i_150]=ovec_value_140[i_150*2];
        }
        for(        i_151=0;        i_151<ovec_max_137;        i_151++        ){
            end_139[i_151]=ovec_value_140[i_151*2+1];
        }
        if(_if_conditional53=regex_result_149==1,        _if_conditional53) {
            str_152=(char*)come_increment_ref_count(((char*)(right_value140=charp_substring(self,start_138[0],end_139[0]))));
            right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            group_strings_153=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value142=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value141=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 493, "list$1charph"))))))));
            come_call_finalizer3(right_value141,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value142,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_154=(char*)come_increment_ref_count(((char*)(right_value143=block(parent,str_152,group_strings_153))));
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_135,(char*)come_increment_ref_count(str2_154));
            if(_if_conditional54=offset_136==end_139[0],            _if_conditional54) {
                offset_136++;
            }
            else {
                offset_136=end_139[0];
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
                str_155=(char*)come_increment_ref_count(((char*)(right_value144=charp_substring(self,start_138[0],end_139[0]))));
                right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                group_strings_156=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value146=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 515, "list$1charph"))))))));
                come_call_finalizer3(right_value145,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value146,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_157=1;                i_157<regex_result_149;                i_157++                ){
                    match_string_158=(char*)come_increment_ref_count(((char*)(right_value147=charp_substring(self,start_138[i_157],end_139[i_157]))));
                    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_156,(char*)come_increment_ref_count(match_string_158));
                    match_string_158 = come_decrement_ref_count2(match_string_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_159=(char*)come_increment_ref_count(((char*)(right_value148=block(parent,str_155,group_strings_156))));
                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_135,(char*)come_increment_ref_count(str2_159));
                if(_if_conditional57=offset_136==end_139[0],                _if_conditional57) {
                    offset_136++;
                }
                else {
                    offset_136=end_139[0];
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
struct list$1charph* result_165;
int offset_166;
int ovec_max_167;
_Bool _while_condtional14;
int options_171;
int len_172;
int regex_result_173;
int i_174;
int i_175;
_Bool _if_conditional59;
void* right_value151;
char* str_176;
void* right_value152;
void* right_value153;
struct list$1charph* match_strings_177;
void* right_value154;
char* str2_178;
_Bool _if_conditional60;
_Bool _if_conditional61;
void* right_value155;
char* str_179;
_Bool _if_conditional62;
void* right_value156;
void* right_value157;
struct list$1charph* match_strings_180;
int i_181;
void* right_value158;
char* match_str_182;
void* right_value159;
char* str2_183;
_Bool _if_conditional63;
void* right_value160;
char* str_184;
void* right_value161;
void* right_value162;
struct list$1charph* match_strings_185;
void* right_value163;
char* str2_186;
struct list$1charph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
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
    options_162=reg->options;
    str_163=reg->str;
    re_164=reg->re;
    result_165=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value149=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 557, "list$1charph"))))))));
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
        len_172=strlen(self);
        regex_result_173=pcre_exec(re_164,(struct pcre_extra*)0,self,len_172,offset_166,options_171,ovec_value_170,ovec_max_167*3);
        for(        i_174=0;        i_174<ovec_max_167;        i_174++        ){
            start_168[i_174]=ovec_value_170[i_174*2];
        }
        for(        i_175=0;        i_175<ovec_max_167;        i_175++        ){
            end_169[i_175]=ovec_value_170[i_175*2+1];
        }
        if(_if_conditional59=regex_result_173==1,        _if_conditional59) {
            str_176=(char*)come_increment_ref_count(((char*)(right_value151=charp_substring(self,offset_166,start_168[0]))));
            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_strings_177=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value153=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value152=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 584, "list$1charph"))))))));
            come_call_finalizer3(right_value152,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value153,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_178=(char*)come_increment_ref_count(((char*)(right_value154=block(parent,str_176,match_strings_177))));
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_165,(char*)come_increment_ref_count(str2_178));
            if(_if_conditional60=offset_166==end_169[0],            _if_conditional60) {
                offset_166++;
            }
            else {
                offset_166=end_169[0];
            }
            str_176 = come_decrement_ref_count2(str_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(match_strings_177,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_178 = come_decrement_ref_count2(str2_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional61=regex_result_173>1,            _if_conditional61) {
                str_179=(char*)come_increment_ref_count(((char*)(right_value155=charp_substring(self,offset_166,start_168[0]))));
                right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional62=offset_166==end_169[0],                _if_conditional62) {
                    offset_166++;
                }
                else {
                    offset_166=end_169[0];
                }
                match_strings_180=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value157=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value156=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 607, "list$1charph"))))))));
                come_call_finalizer3(right_value156,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value157,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_181=1;                i_181<regex_result_173;                i_181++                ){
                    match_str_182=(char*)come_increment_ref_count(((char*)(right_value158=charp_substring(self,start_168[i_181],end_169[i_181]))));
                    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(match_strings_180,(char*)come_increment_ref_count(match_str_182));
                    match_str_182 = come_decrement_ref_count2(match_str_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_183=(char*)come_increment_ref_count(((char*)(right_value159=block(parent,str_179,match_strings_180))));
                right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_165,(char*)come_increment_ref_count(str2_183));
                str_179 = come_decrement_ref_count2(str_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(match_strings_180,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_183 = come_decrement_ref_count2(str2_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional63=offset_166<charp_length(self),    _if_conditional63) {
        str_184=(char*)come_increment_ref_count(((char*)(right_value160=charp_substring(self,offset_166,-1))));
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        match_strings_185=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value161=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 626, "list$1charph"))))))));
        come_call_finalizer3(right_value161,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value162,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        str2_186=(char*)come_increment_ref_count(((char*)(right_value163=block(parent,str_184,match_strings_185))));
        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(result_165,(char*)come_increment_ref_count(str2_186));
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
struct list$1charph* result_192;
int offset_193;
int ovec_max_194;
int n_198;
_Bool _while_condtional15;
int options_199;
int len_200;
int regex_result_201;
int i_202;
int i_203;
_Bool _if_conditional64;
void* right_value166;
char* str_204;
void* right_value167;
void* right_value168;
struct list$1charph* match_strings_205;
void* right_value169;
char* str2_206;
_Bool _if_conditional65;
_Bool _if_conditional66;
void* right_value170;
char* str_207;
_Bool _if_conditional67;
void* right_value171;
void* right_value172;
struct list$1charph* match_strings_208;
int i_209;
void* right_value173;
char* match_str_210;
void* right_value174;
char* str2_211;
_Bool _if_conditional68;
struct list$1charph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
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
    options_189=reg->options;
    str_190=reg->str;
    re_191=reg->re;
    result_192=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value165=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value164=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 644, "list$1charph"))))))));
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
        len_200=strlen(self);
        regex_result_201=pcre_exec(re_191,(struct pcre_extra*)0,self,len_200,offset_193,options_199,ovec_value_197,ovec_max_194*3);
        for(        i_202=0;        i_202<ovec_max_194;        i_202++        ){
            start_195[i_202]=ovec_value_197[i_202*2];
        }
        for(        i_203=0;        i_203<ovec_max_194;        i_203++        ){
            end_196[i_203]=ovec_value_197[i_203*2+1];
        }
        if(_if_conditional64=regex_result_201==1,        _if_conditional64) {
            str_204=(char*)come_increment_ref_count(((char*)(right_value166=charp_substring(self,offset_193,start_195[0]))));
            right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_strings_205=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value168=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value167=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 673, "list$1charph"))))))));
            come_call_finalizer3(right_value167,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value168,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_206=(char*)come_increment_ref_count(((char*)(right_value169=block(parent,str_204,match_strings_205))));
            right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_192,(char*)come_increment_ref_count(str2_206));
            if(_if_conditional65=offset_193==end_196[0],            _if_conditional65) {
                offset_193++;
            }
            else {
                offset_193=end_196[0];
            }
            str_204 = come_decrement_ref_count2(str_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(match_strings_205,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_206 = come_decrement_ref_count2(str2_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional66=regex_result_201>1,            _if_conditional66) {
                str_207=(char*)come_increment_ref_count(((char*)(right_value170=charp_substring(self,offset_193,start_195[0]))));
                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional67=offset_193==end_196[0],                _if_conditional67) {
                    offset_193++;
                }
                else {
                    offset_193=end_196[0];
                }
                match_strings_208=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value172=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value171=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 696, "list$1charph"))))))));
                come_call_finalizer3(right_value171,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value172,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_209=1;                i_209<regex_result_201;                i_209++                ){
                    match_str_210=(char*)come_increment_ref_count(((char*)(right_value173=charp_substring(self,start_195[i_209],end_196[i_209]))));
                    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(match_strings_208,(char*)come_increment_ref_count(match_str_210));
                    match_str_210 = come_decrement_ref_count2(match_str_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_211=(char*)come_increment_ref_count(((char*)(right_value174=block(parent,str_207,match_strings_208))));
                right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_192,(char*)come_increment_ref_count(str2_211));
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
    if(_if_conditional69=strcmp(left->str,right->str)!=0,    _if_conditional69) {
        __result123__ = (_Bool)0;
        return __result123__;
    }
    if(_if_conditional70=left->ignore_case!=right->ignore_case,    _if_conditional70) {
        __result124__ = (_Bool)0;
        return __result124__;
    }
    if(_if_conditional71=left->multiline!=right->multiline,    _if_conditional71) {
        __result125__ = (_Bool)0;
        return __result125__;
    }
    if(_if_conditional72=left->global!=right->global,    _if_conditional72) {
        __result126__ = (_Bool)0;
        return __result126__;
    }
    if(_if_conditional73=left->extended!=right->extended,    _if_conditional73) {
        __result127__ = (_Bool)0;
        return __result127__;
    }
    if(_if_conditional74=left->dotall!=right->dotall,    _if_conditional74) {
        __result128__ = (_Bool)0;
        return __result128__;
    }
    if(_if_conditional75=left->anchored!=right->anchored,    _if_conditional75) {
        __result129__ = (_Bool)0;
        return __result129__;
    }
    if(_if_conditional76=left->dollar_endonly!=right->dollar_endonly,    _if_conditional76) {
        __result130__ = (_Bool)0;
        return __result130__;
    }
    if(_if_conditional77=left->ungreedy!=right->ungreedy,    _if_conditional77) {
        __result131__ = (_Bool)0;
        return __result131__;
    }
    if(_if_conditional78=left->options!=right->options,    _if_conditional78) {
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
int len_224;
int regex_result_225;
int i_226;
int i_227;
_Bool _if_conditional79;
void* right_value177;
char* str_228;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value178;
char* str_229;
_Bool _if_conditional82;
int i_230;
void* right_value179;
char* match_string_231;
struct list$1charph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&result_212, 0, sizeof(struct list$1charph*));
memset(&offset_213, 0, sizeof(int));
memset(&ovec_max_214, 0, sizeof(int));
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
    result_212=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value176=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value175=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 760, "list$1charph"))))))));
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
    options_220=reg->options;
    str_221=reg->str;
    re_222=reg->re;
    while(_while_condtional16=(_Bool)1,    _while_condtional16) {
        options_223=2097152;
        len_224=strlen(self);
        regex_result_225=pcre_exec(re_222,(struct pcre_extra*)0,self,len_224,offset_213,options_223,ovec_value_217,ovec_max_214*3);
        for(        i_226=0;        i_226<ovec_max_214;        i_226++        ){
            start_215[i_226]=ovec_value_217[i_226*2];
        }
        for(        i_227=0;        i_227<ovec_max_214;        i_227++        ){
            end_216[i_227]=ovec_value_217[i_227*2+1];
        }
        if(_if_conditional79=regex_result_225==1,        _if_conditional79) {
            str_228=(char*)come_increment_ref_count(((char*)(right_value177=charp_substring(self,start_215[0],end_216[0]))));
            right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_212,(char*)come_increment_ref_count(str_228));
            if(_if_conditional80=offset_213==end_216[0],            _if_conditional80) {
                offset_213++;
            }
            else {
                offset_213=end_216[0];
            }
            str_228 = come_decrement_ref_count2(str_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional81=regex_result_225>1,            _if_conditional81) {
                str_229=(char*)come_increment_ref_count(((char*)(right_value178=charp_substring(self,start_215[0],end_216[0]))));
                right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_212,(char*)come_increment_ref_count(str_229));
                if(_if_conditional82=offset_213==end_216[0],                _if_conditional82) {
                    offset_213++;
                }
                else {
                    offset_213=end_216[0];
                }
                *num_group_string_in_regex=regex_result_225-1;
                for(                i_230=1;                i_230<regex_result_225;                i_230++                ){
                    match_string_231=(char*)come_increment_ref_count(((char*)(right_value179=charp_substring(self,start_215[i_230],end_216[i_230]))));
                    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_231));
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
char* result_232;
int len_233;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
memset(&result_232, 0, sizeof(char*));
memset(&len_233, 0, sizeof(int));
    result_232=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string(self))));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    len_233=strlen(self);
    if(_if_conditional83=self[len_233-1]==10,    _if_conditional83) {
        result_232[len_233-1]=0;
    }
    else {
        if(_if_conditional84=self[len_233-1]==13,        _if_conditional84) {
            result_232[len_233-1]=0;
        }
        else {
            if(_if_conditional85=len_233>2&&self[len_233-2]==13&&self[len_233-1]==10,            _if_conditional85) {
                result_232[len_233-2]=0;
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
    len_234=charp_length(str);
    result_235=(char*)come_increment_ref_count(((char*)(right_value181=(char*)come_calloc(1, sizeof(char)*(1*(len_234*2+1)), "libneo-c-str.c", 854, "char"))));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    n_236=0;
    for(    i_237=0;    i_237<len_234;    i_237++    ){
        c_238=str[i_237];
        if(_if_conditional86=(c_238>=0&&c_238<32)||c_238==127,        _if_conditional86) {
            result_235[n_236++]=94;
            result_235[n_236++]=c_238+65-1;
        }
        else {
            result_235[n_236++]=c_238;
        }
    }
    result_235[n_236]=0;
    __result136__ = __result_obj__ = result_235;
    result_235 = come_decrement_ref_count2(result_235, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result136__;
    result_235 = come_decrement_ref_count2(result_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__;
int len_239;
void* right_value182;
char* result_240;
_Bool _if_conditional87;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_239, 0, sizeof(int));
right_value182 = (void*)0;
memset(&result_240, 0, sizeof(char*));
    len_239=4*(wcslen(wstr)+1);
    result_240=(char*)come_increment_ref_count(((char*)(right_value182=(char*)come_calloc(1, sizeof(char)*(1*(len_239)), "libneo-c-str.c", 880, "char"))));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional87=wcstombs(result_240,wstr,len_239)<0,    _if_conditional87) {
        strncpy(result_240,"",len_239);
    }
    __result137__ = __result_obj__ = result_240;
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result137__;
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__;
void* right_value183;
unsigned int* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
    __result138__ = __result_obj__ = ((unsigned int*)(right_value183=__builtin_wstring(str)));
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

int wchar_tp_length(unsigned int* str){
void* __result_obj__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    __result139__ = wcslen(str);
    return __result139__;
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
int len_241;
_Bool _if_conditional88;
void* right_value184;
void* right_value185;
unsigned int* __result140__;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value186;
void* right_value187;
unsigned int* __result141__;
_Bool _if_conditional93;
void* right_value188;
unsigned int* sub_str_242;
void* right_value189;
void* right_value190;
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
    len_241=wcslen(str);
    if(_if_conditional88=len_241==0,    _if_conditional88) {
        __result140__ = __result_obj__ = ((unsigned int*)(right_value185=string_to_wstring(((char*)(right_value184=wchar_tp_to_string(str))))));
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
        __result141__ = __result_obj__ = ((unsigned int*)(right_value187=string_to_wstring(((char*)(right_value186=wchar_tp_to_string(str))))));
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result141__;
    }
    if(_if_conditional93=tail>=len_241,    _if_conditional93) {
        tail=len_241;
    }
    sub_str_242=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value188=wchar_tp_substring(str,tail,-1))));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_242,sizeof(unsigned int)*(wstring_length(sub_str_242)+1));
    __result142__ = __result_obj__ = ((unsigned int*)(right_value190=string_to_wstring(((char*)(right_value189=wchar_tp_to_string(str))))));
    sub_str_242 = come_decrement_ref_count2(sub_str_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
    sub_str_242 = come_decrement_ref_count2(sub_str_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
unsigned int* head_243;
_Bool _if_conditional94;
int __result143__;
int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_243, 0, sizeof(unsigned int*));
    head_243=wcsstr(str,search_str);
    if(_if_conditional94=head_243==((void*)0),    _if_conditional94) {
        __result143__ = default_value;
        return __result143__;
    }
    __result144__ = head_243-str;
    return __result144__;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int len_244;
unsigned int* p_245;
_Bool _while_condtional17;
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
    len_244=wcslen(search_str);
    p_245=str+wcslen(str)-len_244;
    while(_while_condtional17=p_245>=str,    _while_condtional17) {
        len2_246=wcslen(p_245);
        result_247=(_Bool)1;
        for(        i_248=0;        i_248<len_244&&i_248<len2_246;        i_248++        ){
            if(_if_conditional95=p_245[i_248]!=search_str[i_248],            _if_conditional95) {
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
    len_249=wcslen(str);
    result_250=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value191=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_249+1)), "libneo-c-str.c", 980, "int"))));
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_251=0;    i_251<len_249;    i_251++    ){
        result_250[i_251]=str[len_249-i_251-1];
    }
    result_250[len_249]=0;
    __result147__ = __result_obj__ = result_250;
    result_250 = come_decrement_ref_count2(result_250, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result147__;
    result_250 = come_decrement_ref_count2(result_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__;
int len_252;
void* right_value192;
unsigned int* result_253;
int i_254;
unsigned int* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_252, 0, sizeof(int));
right_value192 = (void*)0;
memset(&result_253, 0, sizeof(unsigned int*));
memset(&i_254, 0, sizeof(int));
    len_252=wcslen(str)*n+1;
    result_253=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value192=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_252)), "libneo-c-str.c", 995, "int"))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_253[0]=0;
    for(    i_254=0;    i_254<n;    i_254++    ){
        wcscat(result_253,str);
    }
    __result148__ = __result_obj__ = result_253;
    result_253 = come_decrement_ref_count2(result_253, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result148__;
    result_253 = come_decrement_ref_count2(result_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__;
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
    len_255=wchar_tp_length(str);
    result_256=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value193=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_255*2+1)), "libneo-c-str.c", 1009, "int"))));
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    n_257=0;
    for(    i_258=0;    i_258<len_255;    i_258++    ){
        c_259=str[i_258];
        if(_if_conditional97=(c_259>=0&&c_259<32)||c_259==127,        _if_conditional97) {
            result_256[n_257++]=94;
            result_256[n_257++]=c_259+65-1;
        }
        else {
            result_256[n_257++]=c_259;
        }
    }
    result_256[n_257]=0;
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
int len_272;
int regex_result_273;
int i_274;
int i_275;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool __result150__;
_Bool _if_conditional100;
_Bool _if_conditional101;
int i_278;
void* right_value194;
char* match_string_279;
_Bool _if_conditional102;
_Bool __result152__;
_Bool _if_conditional103;
_Bool __result153__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_260, 0, sizeof(int));
memset(&ovec_max_261, 0, sizeof(int));
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
    options_267=reg->options;
    str_268=reg->str;
    re_269=reg->re;
    n_270=0;
    while(_while_condtional18=(_Bool)1,    _while_condtional18) {
        options_271=2097152;
        len_272=strlen(self);
        regex_result_273=pcre_exec(re_269,(struct pcre_extra*)0,self,len_272,offset_260,options_271,ovec_value_264,ovec_max_261*3);
        for(        i_274=0;        i_274<ovec_max_261;        i_274++        ){
            start_262[i_274]=ovec_value_264[i_274*2];
        }
        for(        i_275=0;        i_275<ovec_max_261;        i_275++        ){
            end_263[i_275]=ovec_value_264[i_275*2+1];
        }
        if(_if_conditional98=regex_result_273==1||(group_strings==((void*)0)&&regex_result_273>0),        _if_conditional98) {
            n_270++;
            if(_if_conditional99=n_270==count,            _if_conditional99) {
                __result150__ = (_Bool)1;
                return __result150__;
            }
            if(_if_conditional100=offset_260==end_263[0],            _if_conditional100) {
                offset_260++;
            }
            else {
                offset_260=end_263[0];
            }
        }
        else {
            if(_if_conditional101=regex_result_273>1,            _if_conditional101) {
                n_270++;
                list$1charph_reset(group_strings);
                for(                i_278=1;                i_278<regex_result_273;                i_278++                ){
                    match_string_279=(char*)come_increment_ref_count(((char*)(right_value194=charp_substring(self,start_262[i_278],end_263[i_278]))));
                    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_279));
                    match_string_279 = come_decrement_ref_count2(match_string_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional102=n_270==count,                _if_conditional102) {
                    __result152__ = (_Bool)1;
                    return __result152__;
                }
                if(_if_conditional103=offset_260==end_263[0],                _if_conditional103) {
                    offset_260++;
                }
                else {
                    offset_260=end_263[0];
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
                    it_276=self->head;
                    while(_while_condtional19=it_276!=((void*)0),                    _while_condtional19) {
                        prev_it_277=it_276;
                        it_276=it_276->next;
                        come_call_finalizer3(prev_it_277,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result151__ = __result_obj__ = self;
                    return __result151__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = wcscmp(left,right);
    return __result155__;
}

int wstring_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = wcscmp(left,right);
    return __result156__;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
void* __result_obj__;
unsigned int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = string_get_hash_key(reg->str);
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
unsigned int* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
    __result159__ = __result_obj__ = ((unsigned int*)(right_value195=wchar_tp_multiply(str,n)));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__;
void* right_value196;
unsigned int* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
    __result160__ = __result_obj__ = ((unsigned int*)(right_value196=wchar_tp_multiply(str,n)));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = wcscmp(left,right)==0;
    return __result161__;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = wcscmp(left,right)==0;
    return __result162__;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = wcscmp(left,right)!=0;
    return __result163__;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = wcscmp(left,right)!=0;
    return __result164__;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    __result165__ = come_regex_equals(left,right);
    return __result165__;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = !come_regex_equals(left,right);
    return __result166__;
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
void* right_value197;
unsigned int* result_280;
unsigned int* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
memset(&result_280, 0, sizeof(unsigned int*));
    result_280=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value197=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libneo-c-str.c", 1173, "int"))));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    wcscpy(result_280,left);
    wcscat(result_280,right);
    __result167__ = __result_obj__ = result_280;
    result_280 = come_decrement_ref_count2(result_280, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result167__;
    result_280 = come_decrement_ref_count2(result_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
void* right_value198;
unsigned int* result_281;
unsigned int* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
memset(&result_281, 0, sizeof(unsigned int*));
    result_281=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value198=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libneo-c-str.c", 1183, "int"))));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    wcscpy(result_281,left);
    wcscat(result_281,right);
    __result168__ = __result_obj__ = result_281;
    result_281 = come_decrement_ref_count2(result_281, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result168__;
    result_281 = come_decrement_ref_count2(result_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
char* head_282;
_Bool _if_conditional104;
int __result169__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_282, 0, sizeof(char*));
    head_282=strstr(str,search_str);
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
int len_295;
int regex_result_296;
int i_297;
int i_298;
_Bool _if_conditional105;
int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_283, 0, sizeof(int));
memset(&result_287, 0, sizeof(int));
memset(&offset_288, 0, sizeof(int));
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
    options_291=reg->options;
    str_292=reg->str;
    re_293=reg->re;
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        options_294=2097152;
        len_295=strlen(self);
        regex_result_296=pcre_exec(re_293,(struct pcre_extra*)0,self,len_295,offset_288,options_294,ovec_value_286,ovec_max_283*3);
        for(        i_297=0;        i_297<ovec_max_283;        i_297++        ){
            start_284[i_297]=ovec_value_286[i_297*2];
        }
        for(        i_298=0;        i_298<ovec_max_283;        i_298++        ){
            end_285[i_298]=ovec_value_286[i_298*2+1];
        }
        if(_if_conditional105=regex_result_296==1||regex_result_296>0,        _if_conditional105) {
            result_287=start_284[0];
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
int len_299;
_Bool _if_conditional106;
void* right_value199;
char* __result172__;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value200;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_299, 0, sizeof(int));
right_value199 = (void*)0;
right_value200 = (void*)0;
    len_299=strlen(self);
    if(_if_conditional106=strcmp(self,"")==0,    _if_conditional106) {
        __result172__ = __result_obj__ = ((char*)(right_value199=__builtin_string(self)));
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
    self[index]=c;
    __result173__ = __result_obj__ = ((char*)(right_value200=__builtin_string(self)));
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result173__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
int len_300;
void* right_value201;
char* result_301;
int i_302;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_300, 0, sizeof(int));
right_value201 = (void*)0;
memset(&result_301, 0, sizeof(char*));
memset(&i_302, 0, sizeof(int));
    len_300=strlen(str)*n+1;
    result_301=(char*)come_increment_ref_count(((char*)(right_value201=(char*)come_calloc(1, sizeof(char)*(1*(len_300)), "libneo-c-str.c", 1281, "char"))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_301[0]=0;
    for(    i_302=0;    i_302<n;    i_302++    ){
        strcat(result_301,str);
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
struct buffer* result_313;
_Bool _while_condtional21;
int options_314;
int len_315;
int regex_result_316;
int i_317;
int i_318;
_Bool _if_conditional110;
void* right_value204;
char* str_319;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value205;
char* str_320;
void* right_value206;
char* str_321;
void* right_value207;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_303, 0, sizeof(int));
memset(&ovec_max_304, 0, sizeof(int));
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
    options_310=reg->options;
    str_311=reg->str;
    re_312=reg->re;
    result_313=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value203=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value202=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1309, "buffer"))))))));
    come_call_finalizer3(right_value202,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value203,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        options_314=2097152;
        len_315=strlen(self);
        regex_result_316=pcre_exec(re_312,(struct pcre_extra*)0,self,len_315,offset_303,options_314,ovec_value_307,ovec_max_304*3);
        for(        i_317=0;        i_317<ovec_max_304;        i_317++        ){
            start_305[i_317]=ovec_value_307[i_317*2];
        }
        for(        i_318=0;        i_318<ovec_max_304;        i_318++        ){
            end_306[i_318]=ovec_value_307[i_318*2+1];
        }
        if(_if_conditional110=regex_result_316==1,        _if_conditional110) {
            str_319=(char*)come_increment_ref_count(((char*)(right_value204=charp_substring(self,offset_303,start_305[0]))));
            right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_313,str_319);
            buffer_append_str(result_313,replace);
            if(_if_conditional111=offset_303==end_306[0],            _if_conditional111) {
                offset_303++;
            }
            else {
                offset_303=end_306[0];
            }
            if(_if_conditional112=!reg->global,            _if_conditional112) {
                str_320=(char*)come_increment_ref_count(((char*)(right_value205=charp_substring(self,offset_303,-1))));
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_313,str_320);
                str_320 = come_decrement_ref_count2(str_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_319 = come_decrement_ref_count2(str_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_320 = come_decrement_ref_count2(str_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_319 = come_decrement_ref_count2(str_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_321=(char*)come_increment_ref_count(((char*)(right_value206=charp_substring(self,offset_303,-1))));
            right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_313,str_321);
            str_321 = come_decrement_ref_count2(str_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_321 = come_decrement_ref_count2(str_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result175__ = __result_obj__ = ((char*)(right_value207=buffer_to_string(result_313)));
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
struct buffer* result_332;
int n_333;
_Bool _while_condtional22;
int options_334;
int len_335;
int regex_result_336;
int i_337;
int i_338;
_Bool _if_conditional113;
void* right_value210;
char* str_339;
_Bool _if_conditional114;
_Bool _if_conditional115;
void* right_value211;
char* str_340;
_Bool _if_conditional116;
void* right_value212;
char* str_341;
void* right_value213;
char* str_342;
void* right_value214;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_322, 0, sizeof(int));
memset(&ovec_max_323, 0, sizeof(int));
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
    options_329=reg->options;
    str_330=reg->str;
    re_331=reg->re;
    result_332=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value209=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value208=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1372, "buffer"))))))));
    come_call_finalizer3(right_value208,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value209,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    n_333=0;
    while(_while_condtional22=(_Bool)1,    _while_condtional22) {
        options_334=2097152;
        len_335=strlen(self);
        regex_result_336=pcre_exec(re_331,(struct pcre_extra*)0,self,len_335,offset_322,options_334,ovec_value_326,ovec_max_323*3);
        for(        i_337=0;        i_337<ovec_max_323;        i_337++        ){
            start_324[i_337]=ovec_value_326[i_337*2];
        }
        for(        i_338=0;        i_338<ovec_max_323;        i_338++        ){
            end_325[i_338]=ovec_value_326[i_338*2+1];
        }
        if(_if_conditional113=regex_result_336==1,        _if_conditional113) {
            n_333++;
            str_339=(char*)come_increment_ref_count(((char*)(right_value210=charp_substring(self,offset_322,start_324[0]))));
            right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_332,str_339);
            buffer_append_str(result_332,replace);
            if(_if_conditional114=offset_322==end_325[0],            _if_conditional114) {
                offset_322++;
            }
            else {
                offset_322=end_325[0];
            }
            if(_if_conditional115=!reg->global,            _if_conditional115) {
                str_340=(char*)come_increment_ref_count(((char*)(right_value211=charp_substring(self,offset_322,-1))));
                right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_332,str_340);
                str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional116=n_333==count,            _if_conditional116) {
                str_341=(char*)come_increment_ref_count(((char*)(right_value212=charp_substring(self,offset_322,-1))));
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_332,str_341);
                str_341 = come_decrement_ref_count2(str_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_341 = come_decrement_ref_count2(str_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_342=(char*)come_increment_ref_count(((char*)(right_value213=charp_substring(self,offset_322,-1))));
            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_332,str_342);
            str_342 = come_decrement_ref_count2(str_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_342 = come_decrement_ref_count2(str_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result176__ = __result_obj__ = ((char*)(right_value214=buffer_to_string(result_332)));
    come_call_finalizer3(result_332,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result176__;
    come_call_finalizer3(result_332,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
void* right_value215;
void* right_value216;
struct list$1charph* result_343;
void* right_value217;
void* right_value218;
struct buffer* buf_344;
int i_345;
_Bool _if_conditional117;
void* right_value219;
_Bool _if_conditional118;
void* right_value220;
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
    result_343=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value216=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value215=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1431, "list$1charph"))))))));
    come_call_finalizer3(right_value215,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value216,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    buf_344=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value218=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value217=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1433, "buffer"))))))));
    come_call_finalizer3(right_value217,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value218,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_345=0;    i_345<charp_length(self);    i_345++    ){
        if(_if_conditional117=strstr(self+i_345,str)==self+i_345,        _if_conditional117) {
            list$1charph_push_back(result_343,(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string(buf_344->buf)))));
            right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(buf_344);
            i_345+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_344,self[i_345]);
        }
    }
    if(_if_conditional118=buffer_length(buf_344)!=0,    _if_conditional118) {
        list$1charph_push_back(result_343,(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(buf_344->buf)))));
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
int len_358;
int regex_result_359;
int i_360;
int i_361;
_Bool _if_conditional119;
void* right_value223;
char* str_362;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value224;
char* str_363;
_Bool _if_conditional122;
int i_364;
void* right_value225;
char* match_string_365;
struct list$1charph* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&result_346, 0, sizeof(struct list$1charph*));
memset(&offset_347, 0, sizeof(int));
memset(&ovec_max_348, 0, sizeof(int));
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
    result_346=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value222=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value221=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1454, "list$1charph"))))))));
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
    options_354=reg->options;
    str_355=reg->str;
    re_356=reg->re;
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        options_357=2097152;
        len_358=strlen(self);
        regex_result_359=pcre_exec(re_356,(struct pcre_extra*)0,self,len_358,offset_347,options_357,ovec_value_351,ovec_max_348*3);
        for(        i_360=0;        i_360<ovec_max_348;        i_360++        ){
            start_349[i_360]=ovec_value_351[i_360*2];
        }
        for(        i_361=0;        i_361<ovec_max_348;        i_361++        ){
            end_350[i_361]=ovec_value_351[i_361*2+1];
        }
        if(_if_conditional119=regex_result_359==1,        _if_conditional119) {
            str_362=(char*)come_increment_ref_count(((char*)(right_value223=charp_substring(self,start_349[0],end_350[0]))));
            right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_346,(char*)come_increment_ref_count(str_362));
            if(_if_conditional120=offset_347==end_350[0],            _if_conditional120) {
                offset_347++;
            }
            else {
                offset_347=end_350[0];
            }
            str_362 = come_decrement_ref_count2(str_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional121=regex_result_359>1,            _if_conditional121) {
                str_363=(char*)come_increment_ref_count(((char*)(right_value224=charp_substring(self,start_349[0],end_350[0]))));
                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_346,(char*)come_increment_ref_count(str_363));
                if(_if_conditional122=offset_347==end_350[0],                _if_conditional122) {
                    offset_347++;
                }
                else {
                    offset_347=end_350[0];
                }
                for(                i_364=1;                i_364<regex_result_359;                i_364++                ){
                    match_string_365=(char*)come_increment_ref_count(((char*)(right_value225=charp_substring(self,start_349[i_364],end_350[i_364]))));
                    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_346,(char*)come_increment_ref_count(match_string_365));
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
struct list$1charph* result_371;
int offset_372;
int ovec_max_373;
_Bool _while_condtional24;
int options_377;
int len_378;
int regex_result_379;
int i_380;
int i_381;
_Bool _if_conditional123;
void* right_value228;
char* str_382;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value229;
char* str_383;
_Bool _if_conditional126;
int i_384;
void* right_value230;
char* match_str_385;
_Bool _if_conditional127;
void* right_value231;
char* str_386;
struct list$1charph* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
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
    options_368=reg->options;
    str_369=reg->str;
    re_370=reg->re;
    result_371=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value227=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value226=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1535, "list$1charph"))))))));
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
        len_378=strlen(self);
        regex_result_379=pcre_exec(re_370,(struct pcre_extra*)0,self,len_378,offset_372,options_377,ovec_value_376,ovec_max_373*3);
        for(        i_380=0;        i_380<ovec_max_373;        i_380++        ){
            start_374[i_380]=ovec_value_376[i_380*2];
        }
        for(        i_381=0;        i_381<ovec_max_373;        i_381++        ){
            end_375[i_381]=ovec_value_376[i_381*2+1];
        }
        if(_if_conditional123=regex_result_379==1,        _if_conditional123) {
            str_382=(char*)come_increment_ref_count(((char*)(right_value228=charp_substring(self,offset_372,start_374[0]))));
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_371,(char*)come_increment_ref_count(str_382));
            if(_if_conditional124=offset_372==end_375[0],            _if_conditional124) {
                offset_372++;
            }
            else {
                offset_372=end_375[0];
            }
            str_382 = come_decrement_ref_count2(str_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional125=regex_result_379>1,            _if_conditional125) {
                str_383=(char*)come_increment_ref_count(((char*)(right_value229=charp_substring(self,offset_372,start_374[0]))));
                right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_371,(char*)come_increment_ref_count(str_383));
                if(_if_conditional126=offset_372==end_375[0],                _if_conditional126) {
                    offset_372++;
                }
                else {
                    offset_372=end_375[0];
                }
                for(                i_384=1;                i_384<regex_result_379;                i_384++                ){
                    match_str_385=(char*)come_increment_ref_count(((char*)(right_value230=charp_substring(self,start_374[i_384],end_375[i_384]))));
                    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_371,(char*)come_increment_ref_count(match_str_385));
                    match_str_385 = come_decrement_ref_count2(match_str_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_383 = come_decrement_ref_count2(str_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional127=offset_372<charp_length(self),    _if_conditional127) {
        str_386=(char*)come_increment_ref_count(((char*)(right_value231=charp_substring(self,offset_372,-1))));
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(result_371,(char*)come_increment_ref_count(str_386));
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
int len_398;
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
    options_394=reg->options;
    str_395=reg->str;
    re_396=reg->re;
    while(_while_condtional25=(_Bool)1,    _while_condtional25) {
        options_397=2097152;
        len_398=strlen(self);
        regex_result_399=pcre_exec(re_396,(struct pcre_extra*)0,self,len_398,offset_387,options_397,ovec_value_391,ovec_max_388*3);
        for(        i_400=0;        i_400<ovec_max_388;        i_400++        ){
            start_389[i_400]=ovec_value_391[i_400*2];
        }
        for(        i_401=0;        i_401<ovec_max_388;        i_401++        ){
            end_390[i_401]=ovec_value_391[i_401*2+1];
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
struct list$1charph* result_407;
int offset_408;
int ovec_max_409;
int n_413;
_Bool _while_condtional26;
int options_414;
int len_415;
int regex_result_416;
int i_417;
int i_418;
_Bool _if_conditional129;
void* right_value234;
char* str_419;
_Bool _if_conditional130;
_Bool _if_conditional131;
void* right_value235;
char* str_420;
_Bool _if_conditional132;
int i_421;
void* right_value236;
char* match_str_422;
_Bool _if_conditional133;
_Bool _if_conditional134;
void* right_value237;
char* str_423;
struct list$1charph* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
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
    options_404=reg->options;
    str_405=reg->str;
    re_406=reg->re;
    result_407=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value233=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1657, "list$1charph"))))))));
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
        len_415=strlen(self);
        regex_result_416=pcre_exec(re_406,(struct pcre_extra*)0,self,len_415,offset_408,options_414,ovec_value_412,ovec_max_409*3);
        for(        i_417=0;        i_417<ovec_max_409;        i_417++        ){
            start_410[i_417]=ovec_value_412[i_417*2];
        }
        for(        i_418=0;        i_418<ovec_max_409;        i_418++        ){
            end_411[i_418]=ovec_value_412[i_418*2+1];
        }
        if(_if_conditional129=regex_result_416==1,        _if_conditional129) {
            str_419=(char*)come_increment_ref_count(((char*)(right_value234=charp_substring(self,offset_408,start_410[0]))));
            right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_407,(char*)come_increment_ref_count(str_419));
            if(_if_conditional130=offset_408==end_411[0],            _if_conditional130) {
                offset_408++;
            }
            else {
                offset_408=end_411[0];
            }
            str_419 = come_decrement_ref_count2(str_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional131=regex_result_416>1,            _if_conditional131) {
                str_420=(char*)come_increment_ref_count(((char*)(right_value235=charp_substring(self,offset_408,start_410[0]))));
                right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_407,(char*)come_increment_ref_count(str_420));
                if(_if_conditional132=offset_408==end_411[0],                _if_conditional132) {
                    offset_408++;
                }
                else {
                    offset_408=end_411[0];
                }
                for(                i_421=1;                i_421<regex_result_416;                i_421++                ){
                    match_str_422=(char*)come_increment_ref_count(((char*)(right_value236=charp_substring(self,start_410[i_421],end_411[i_421]))));
                    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_407,(char*)come_increment_ref_count(match_str_422));
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
    if(_if_conditional134=offset_408<charp_length(self),    _if_conditional134) {
        str_423=(char*)come_increment_ref_count(((char*)(right_value237=charp_substring(self,offset_408,-1))));
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(result_407,(char*)come_increment_ref_count(str_423));
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
char* self2_429;
int ovec_max_430;
int result_434;
int offset_435;
int n_436;
_Bool _while_condtional27;
int options_437;
int len_438;
int regex_result_439;
int i_440;
int i_441;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
int __result184__;
memset(&__result_obj__, 0, sizeof(void*));
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
    options_426=reg->options;
    str_427=reg->str;
    re_428=reg->re;
    self2_429=(char*)come_increment_ref_count(((char*)(right_value238=charp_reverse(self))));
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
        len_438=strlen(self2_429);
        regex_result_439=pcre_exec(re_428,(struct pcre_extra*)0,self2_429,len_438,offset_435,options_437,ovec_value_433,ovec_max_430*3);
        for(        i_440=0;        i_440<ovec_max_430;        i_440++        ){
            start_431[i_440]=ovec_value_433[i_440*2];
        }
        for(        i_441=0;        i_441<ovec_max_430;        i_441++        ){
            end_432[i_441]=ovec_value_433[i_441*2+1];
        }
        if(_if_conditional135=regex_result_439>0,        _if_conditional135) {
            n_436++;
            if(_if_conditional136=offset_435==end_432[0],            _if_conditional136) {
                offset_435++;
            }
            else {
                offset_435=end_432[0];
            }
            if(_if_conditional137=n_436==count,            _if_conditional137) {
                result_434=strlen(self)-end_432[0];
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
int len_454;
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
    options_449=reg->options;
    str_450=reg->str;
    re_451=reg->re;
    n_452=0;
    while(_while_condtional28=(_Bool)1,    _while_condtional28) {
        options_453=2097152;
        len_454=strlen(self);
        regex_result_455=pcre_exec(re_451,(struct pcre_extra*)0,self,len_454,offset_442,options_453,ovec_value_446,ovec_max_443*3);
        for(        i_456=0;        i_456<ovec_max_443;        i_456++        ){
            start_444[i_456]=ovec_value_446[i_456*2];
        }
        for(        i_457=0;        i_457<ovec_max_443;        i_457++        ){
            end_445[i_457]=ovec_value_446[i_457*2+1];
        }
        if(_if_conditional138=regex_result_455>0,        _if_conditional138) {
            n_452++;
            if(_if_conditional139=count==n_452,            _if_conditional139) {
                __result185__ = (_Bool)1;
                return __result185__;
            }
            if(_if_conditional140=offset_442==end_445[0],            _if_conditional140) {
                offset_442++;
            }
            else {
                offset_442=end_445[0];
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
struct buffer* result_468;
_Bool _while_condtional29;
int options_469;
int len_470;
int regex_result_471;
int i_472;
int i_473;
_Bool _if_conditional141;
void* right_value241;
char* str_474;
void* right_value242;
void* right_value243;
struct list$1charph* group_strings_475;
void* right_value244;
char* match_string_476;
void* right_value245;
void* right_value246;
char* block_result_477;
_Bool _if_conditional142;
_Bool _if_conditional143;
void* right_value247;
char* str_478;
_Bool _if_conditional144;
void* right_value248;
char* str_479;
_Bool _if_conditional145;
void* right_value249;
void* right_value250;
struct list$1charph* group_strings_480;
int i_481;
void* right_value251;
char* match_string_482;
void* right_value252;
char* match_string_483;
void* right_value253;
char* block_result_484;
_Bool _if_conditional146;
void* right_value254;
char* str_485;
void* right_value255;
char* str_486;
void* right_value256;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_458, 0, sizeof(int));
memset(&ovec_max_459, 0, sizeof(int));
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
    options_465=reg->options;
    str_466=reg->str;
    re_467=reg->re;
    result_468=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value240=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value239=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1869, "buffer"))))))));
    come_call_finalizer3(right_value239,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value240,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional29=(_Bool)1,    _while_condtional29) {
        options_469=2097152;
        len_470=strlen(self);
        regex_result_471=pcre_exec(re_467,(struct pcre_extra*)0,self,len_470,offset_458,options_469,ovec_value_462,ovec_max_459*3);
        for(        i_472=0;        i_472<ovec_max_459;        i_472++        ){
            start_460[i_472]=ovec_value_462[i_472*2];
        }
        for(        i_473=0;        i_473<ovec_max_459;        i_473++        ){
            end_461[i_473]=ovec_value_462[i_473*2+1];
        }
        if(_if_conditional141=regex_result_471==1,        _if_conditional141) {
            str_474=(char*)come_increment_ref_count(((char*)(right_value241=charp_substring(self,offset_458,start_460[0]))));
            right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_468,str_474);
            group_strings_475=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value243=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value242=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1889, "list$1charph"))))))));
            come_call_finalizer3(right_value242,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value243,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            match_string_476=(char*)come_increment_ref_count(((char*)(right_value244=charp_substring(self,start_460[0],end_461[0]))));
            right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(group_strings_475,(char*)come_increment_ref_count(((char*)(right_value245=charp_substring(self,start_460[0],end_461[0])))));
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            block_result_477=(char*)come_increment_ref_count(((char*)(right_value246=block(parent,match_string_476,group_strings_475))));
            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_468,block_result_477);
            if(_if_conditional142=offset_458==end_461[0],            _if_conditional142) {
                offset_458++;
            }
            else {
                offset_458=end_461[0];
            }
            if(_if_conditional143=!reg->global,            _if_conditional143) {
                str_478=(char*)come_increment_ref_count(((char*)(right_value247=charp_substring(self,offset_458,-1))));
                right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_468,str_478);
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
                str_479=(char*)come_increment_ref_count(((char*)(right_value248=charp_substring(self,offset_458,start_460[0]))));
                right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_468,str_479);
                if(_if_conditional145=offset_458==end_461[0],                _if_conditional145) {
                    offset_458++;
                }
                else {
                    offset_458=end_461[0];
                }
                group_strings_480=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value250=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value249=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1924, "list$1charph"))))))));
                come_call_finalizer3(right_value249,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value250,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_481=1;                i_481<regex_result_471;                i_481++                ){
                    match_string_482=(char*)come_increment_ref_count(((char*)(right_value251=charp_substring(self,start_460[i_481],end_461[i_481]))));
                    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_480,(char*)come_increment_ref_count(match_string_482));
                    match_string_482 = come_decrement_ref_count2(match_string_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_483=(char*)come_increment_ref_count(((char*)(right_value252=charp_substring(self,start_460[0],end_461[0]))));
                right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_result_484=(char*)come_increment_ref_count(((char*)(right_value253=block(parent,match_string_483,group_strings_480))));
                right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_468,block_result_484);
                if(_if_conditional146=!reg->global,                _if_conditional146) {
                    str_485=(char*)come_increment_ref_count(((char*)(right_value254=charp_substring(self,offset_458,-1))));
                    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_468,str_485);
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
                str_486=(char*)come_increment_ref_count(((char*)(right_value255=charp_substring(self,offset_458,-1))));
                right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_468,str_486);
                str_486 = come_decrement_ref_count2(str_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_486 = come_decrement_ref_count2(str_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result188__ = __result_obj__ = ((char*)(right_value256=buffer_to_string(result_468)));
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
struct buffer* result_497;
int n_498;
_Bool _while_condtional30;
int options_499;
int len_500;
int regex_result_501;
int i_502;
int i_503;
_Bool _if_conditional147;
void* right_value259;
char* str_504;
void* right_value260;
void* right_value261;
struct list$1charph* group_strings_505;
void* right_value262;
void* right_value263;
char* match_string_506;
void* right_value264;
char* block_result_507;
_Bool _if_conditional148;
_Bool _if_conditional149;
void* right_value265;
char* str_508;
_Bool _if_conditional150;
void* right_value266;
char* str_509;
_Bool _if_conditional151;
void* right_value267;
char* str_510;
_Bool _if_conditional152;
void* right_value268;
void* right_value269;
struct list$1charph* group_strings_511;
int i_512;
void* right_value270;
char* match_string_513;
void* right_value271;
char* match_string_514;
void* right_value272;
char* block_result_515;
_Bool _if_conditional153;
void* right_value273;
char* str_516;
_Bool _if_conditional154;
void* right_value274;
char* str_517;
void* right_value275;
char* str_518;
void* right_value276;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_487, 0, sizeof(int));
memset(&ovec_max_488, 0, sizeof(int));
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
    options_494=reg->options;
    str_495=reg->str;
    re_496=reg->re;
    result_497=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value258=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value257=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1970, "buffer"))))))));
    come_call_finalizer3(right_value257,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value258,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    n_498=0;
    while(_while_condtional30=(_Bool)1,    _while_condtional30) {
        options_499=2097152;
        len_500=strlen(self);
        regex_result_501=pcre_exec(re_496,(struct pcre_extra*)0,self,len_500,offset_487,options_499,ovec_value_491,ovec_max_488*3);
        for(        i_502=0;        i_502<ovec_max_488;        i_502++        ){
            start_489[i_502]=ovec_value_491[i_502*2];
        }
        for(        i_503=0;        i_503<ovec_max_488;        i_503++        ){
            end_490[i_503]=ovec_value_491[i_503*2+1];
        }
        if(_if_conditional147=regex_result_501==1,        _if_conditional147) {
            n_498++;
            str_504=(char*)come_increment_ref_count(((char*)(right_value259=charp_substring(self,offset_487,start_489[0]))));
            right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_497,str_504);
            group_strings_505=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value261=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value260=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1993, "list$1charph"))))))));
            come_call_finalizer3(right_value260,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value261,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(group_strings_505,(char*)come_increment_ref_count(((char*)(right_value262=charp_substring(self,start_489[0],end_490[0])))));
            right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_string_506=(char*)come_increment_ref_count(((char*)(right_value263=charp_substring(self,start_489[0],end_490[0]))));
            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            block_result_507=(char*)come_increment_ref_count(((char*)(right_value264=block(parent,match_string_506,group_strings_505))));
            right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_497,block_result_507);
            if(_if_conditional148=offset_487==end_490[0],            _if_conditional148) {
                offset_487++;
            }
            else {
                offset_487=end_490[0];
            }
            if(_if_conditional149=!reg->global,            _if_conditional149) {
                str_508=(char*)come_increment_ref_count(((char*)(right_value265=charp_substring(self,offset_487,-1))));
                right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_497,str_508);
                str_508 = come_decrement_ref_count2(str_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_504 = come_decrement_ref_count2(str_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(group_strings_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_506 = come_decrement_ref_count2(match_string_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_507 = come_decrement_ref_count2(block_result_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_508 = come_decrement_ref_count2(str_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional150=n_498==count,            _if_conditional150) {
                str_509=(char*)come_increment_ref_count(((char*)(right_value266=charp_substring(self,offset_487,-1))));
                right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_497,str_509);
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
                str_510=(char*)come_increment_ref_count(((char*)(right_value267=charp_substring(self,offset_487,start_489[0]))));
                right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_497,str_510);
                if(_if_conditional152=offset_487==end_490[0],                _if_conditional152) {
                    offset_487++;
                }
                else {
                    offset_487=end_490[0];
                }
                group_strings_511=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value269=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value268=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 2036, "list$1charph"))))))));
                come_call_finalizer3(right_value268,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value269,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_512=1;                i_512<regex_result_501;                i_512++                ){
                    match_string_513=(char*)come_increment_ref_count(((char*)(right_value270=charp_substring(self,start_489[i_512],end_490[i_512]))));
                    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_511,(char*)come_increment_ref_count(match_string_513));
                    match_string_513 = come_decrement_ref_count2(match_string_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_514=(char*)come_increment_ref_count(((char*)(right_value271=charp_substring(self,start_489[0],end_490[0]))));
                right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_result_515=(char*)come_increment_ref_count(((char*)(right_value272=block(parent,match_string_514,group_strings_511))));
                right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_497,block_result_515);
                if(_if_conditional153=!reg->global,                _if_conditional153) {
                    str_516=(char*)come_increment_ref_count(((char*)(right_value273=charp_substring(self,offset_487,-1))));
                    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_497,str_516);
                    str_516 = come_decrement_ref_count2(str_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_510 = come_decrement_ref_count2(str_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(group_strings_511,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    match_string_514 = come_decrement_ref_count2(match_string_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_515 = come_decrement_ref_count2(block_result_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_516 = come_decrement_ref_count2(str_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional154=n_498==count,                _if_conditional154) {
                    str_517=(char*)come_increment_ref_count(((char*)(right_value274=charp_substring(self,offset_487,-1))));
                    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_497,str_517);
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
                str_518=(char*)come_increment_ref_count(((char*)(right_value275=charp_substring(self,offset_487,-1))));
                right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_497,str_518);
                str_518 = come_decrement_ref_count2(str_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_518 = come_decrement_ref_count2(str_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result189__ = __result_obj__ = ((char*)(right_value276=buffer_to_string(result_497)));
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
    while(_while_condtional31=*p_520,    _while_condtional31) {
        result_519+=(*p_520);
        p_520++;
    }
    __result190__ = result_519;
    return __result190__;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    __result192__ = wcscmp(left,right)==0;
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
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
    __result198__ = __result_obj__ = ((char*)(right_value277=xsprintf("%ls",wc)));
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result198__;
}

char* string_chomp(char* str){
void* __result_obj__;
void* right_value278;
char* result_521;
_Bool _if_conditional155;
void* right_value279;
char* __result199__;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
memset(&result_521, 0, sizeof(char*));
right_value279 = (void*)0;
    result_521=(char*)come_increment_ref_count(((char*)(right_value278=__builtin_string(str))));
    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional155=result_521[string_length(result_521)-1]==10,    _if_conditional155) {
        __result199__ = __result_obj__ = ((char*)(right_value279=string_substring(result_521,0,-2)));
        result_521 = come_decrement_ref_count2(result_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result199__;
    }
    __result200__ = __result_obj__ = result_521;
    result_521 = come_decrement_ref_count2(result_521, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result200__;
    result_521 = come_decrement_ref_count2(result_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

