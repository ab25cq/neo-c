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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX603, int anonymous_var_nameX604, const char** anonymous_var_nameX605, int* anonymous_var_nameX606, const unsigned char* anonymous_var_nameX607);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX608, int anonymous_var_nameX609, const char** anonymous_var_nameX610, int* anonymous_var_nameX611, const unsigned char* anonymous_var_nameX612);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX613, int anonymous_var_nameX614, const char** anonymous_var_nameX615, int* anonymous_var_nameX616, const unsigned char* anonymous_var_nameX617);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX618, int anonymous_var_nameX619, int* anonymous_var_nameX620, const char** anonymous_var_nameX621, int* anonymous_var_nameX622, const unsigned char* anonymous_var_nameX623);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX624, int anonymous_var_nameX625, int* anonymous_var_nameX626, const char** anonymous_var_nameX627, int* anonymous_var_nameX628, const unsigned char* anonymous_var_nameX629);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX630, int anonymous_var_nameX631, int* anonymous_var_nameX632, const char** anonymous_var_nameX633, int* anonymous_var_nameX634, const unsigned char* anonymous_var_nameX635);

int pcre_config(int anonymous_var_nameX636, void* anonymous_var_nameX637);

int pcre16_config(int anonymous_var_nameX638, void* anonymous_var_nameX639);

int pcre32_config(int anonymous_var_nameX640, void* anonymous_var_nameX641);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX642, const char* anonymous_var_nameX643, int* anonymous_var_nameX644, int anonymous_var_nameX645, const char* anonymous_var_nameX646, char* anonymous_var_nameX647, int anonymous_var_nameX648);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX649, const unsigned short int* anonymous_var_nameX650, int* anonymous_var_nameX651, int anonymous_var_nameX652, const unsigned short int* anonymous_var_nameX653, unsigned short int* anonymous_var_nameX654, int anonymous_var_nameX655);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX656, const unsigned int* anonymous_var_nameX657, int* anonymous_var_nameX658, int anonymous_var_nameX659, const unsigned int* anonymous_var_nameX660, unsigned int* anonymous_var_nameX661, int anonymous_var_nameX662);

int pcre_copy_substring(const char* anonymous_var_nameX663, int* anonymous_var_nameX664, int anonymous_var_nameX665, int anonymous_var_nameX666, char* anonymous_var_nameX667, int anonymous_var_nameX668);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX669, int* anonymous_var_nameX670, int anonymous_var_nameX671, int anonymous_var_nameX672, unsigned short int* anonymous_var_nameX673, int anonymous_var_nameX674);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX675, int* anonymous_var_nameX676, int anonymous_var_nameX677, int anonymous_var_nameX678, unsigned int* anonymous_var_nameX679, int anonymous_var_nameX680);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX681, const struct pcre_extra* anonymous_var_nameX682, const char* anonymous_var_nameX683, int anonymous_var_nameX684, int anonymous_var_nameX685, int anonymous_var_nameX686, int* anonymous_var_nameX687, int anonymous_var_nameX688, int* anonymous_var_nameX689, int anonymous_var_nameX690);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX691, const struct pcre16_extra* anonymous_var_nameX692, const unsigned short int* anonymous_var_nameX693, int anonymous_var_nameX694, int anonymous_var_nameX695, int anonymous_var_nameX696, int* anonymous_var_nameX697, int anonymous_var_nameX698, int* anonymous_var_nameX699, int anonymous_var_nameX700);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX701, const struct pcre32_extra* anonymous_var_nameX702, const unsigned int* anonymous_var_nameX703, int anonymous_var_nameX704, int anonymous_var_nameX705, int anonymous_var_nameX706, int* anonymous_var_nameX707, int anonymous_var_nameX708, int* anonymous_var_nameX709, int anonymous_var_nameX710);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX711, const struct pcre_extra* anonymous_var_nameX712, const char* anonymous_var_nameX713, int anonymous_var_nameX714, int anonymous_var_nameX715, int anonymous_var_nameX716, int* anonymous_var_nameX717, int anonymous_var_nameX718);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX719, const struct pcre16_extra* anonymous_var_nameX720, const unsigned short int* anonymous_var_nameX721, int anonymous_var_nameX722, int anonymous_var_nameX723, int anonymous_var_nameX724, int* anonymous_var_nameX725, int anonymous_var_nameX726);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX727, const struct pcre32_extra* anonymous_var_nameX728, const unsigned int* anonymous_var_nameX729, int anonymous_var_nameX730, int anonymous_var_nameX731, int anonymous_var_nameX732, int* anonymous_var_nameX733, int anonymous_var_nameX734);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX735, const struct pcre_extra* anonymous_var_nameX736, const char* anonymous_var_nameX737, int anonymous_var_nameX738, int anonymous_var_nameX739, int anonymous_var_nameX740, int* anonymous_var_nameX741, int anonymous_var_nameX742, struct real_pcre_jit_stack* anonymous_var_nameX743);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX744, const struct pcre16_extra* anonymous_var_nameX745, const unsigned short int* anonymous_var_nameX746, int anonymous_var_nameX747, int anonymous_var_nameX748, int anonymous_var_nameX749, int* anonymous_var_nameX750, int anonymous_var_nameX751, struct real_pcre16_jit_stack* anonymous_var_nameX752);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX753, const struct pcre32_extra* anonymous_var_nameX754, const unsigned int* anonymous_var_nameX755, int anonymous_var_nameX756, int anonymous_var_nameX757, int anonymous_var_nameX758, int* anonymous_var_nameX759, int anonymous_var_nameX760, struct real_pcre32_jit_stack* anonymous_var_nameX761);

void pcre_free_substring(const char* anonymous_var_nameX762);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX763);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX764);

void pcre_free_substring_list(const char** anonymous_var_nameX765);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX766);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX767);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX768, const struct pcre_extra* anonymous_var_nameX769, int anonymous_var_nameX770, void* anonymous_var_nameX771);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX772, const struct pcre16_extra* anonymous_var_nameX773, int anonymous_var_nameX774, void* anonymous_var_nameX775);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX776, const struct pcre32_extra* anonymous_var_nameX777, int anonymous_var_nameX778, void* anonymous_var_nameX779);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX780, const char* anonymous_var_nameX781, int* anonymous_var_nameX782, int anonymous_var_nameX783, const char* anonymous_var_nameX784, const char** anonymous_var_nameX785);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX786, const unsigned short int* anonymous_var_nameX787, int* anonymous_var_nameX788, int anonymous_var_nameX789, const unsigned short int* anonymous_var_nameX790, const unsigned short int** anonymous_var_nameX791);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX792, const unsigned int* anonymous_var_nameX793, int* anonymous_var_nameX794, int anonymous_var_nameX795, const unsigned int* anonymous_var_nameX796, const unsigned int** anonymous_var_nameX797);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX798, const char* anonymous_var_nameX799);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX800, const unsigned short int* anonymous_var_nameX801);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX802, const unsigned int* anonymous_var_nameX803);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX804, const char* anonymous_var_nameX805, char** anonymous_var_nameX806, char** anonymous_var_nameX807);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX808, const unsigned short int* anonymous_var_nameX809, unsigned short int** anonymous_var_nameX810, unsigned short int** anonymous_var_nameX811);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX812, const unsigned int* anonymous_var_nameX813, unsigned int** anonymous_var_nameX814, unsigned int** anonymous_var_nameX815);

int pcre_get_substring(const char* anonymous_var_nameX816, int* anonymous_var_nameX817, int anonymous_var_nameX818, int anonymous_var_nameX819, const char** anonymous_var_nameX820);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX821, int* anonymous_var_nameX822, int anonymous_var_nameX823, int anonymous_var_nameX824, const unsigned short int** anonymous_var_nameX825);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX826, int* anonymous_var_nameX827, int anonymous_var_nameX828, int anonymous_var_nameX829, const unsigned int** anonymous_var_nameX830);

int pcre_get_substring_list(const char* anonymous_var_nameX831, int* anonymous_var_nameX832, int anonymous_var_nameX833, const char*** anonymous_var_nameX834);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX835, int* anonymous_var_nameX836, int anonymous_var_nameX837, const unsigned short int*** anonymous_var_nameX838);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX839, int* anonymous_var_nameX840, int anonymous_var_nameX841, const unsigned int*** anonymous_var_nameX842);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX843, int anonymous_var_nameX844);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX845, int anonymous_var_nameX846);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX847, int anonymous_var_nameX848);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX849, int anonymous_var_nameX850, const char** anonymous_var_nameX851);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX852, int anonymous_var_nameX853, const char** anonymous_var_nameX854);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX855, int anonymous_var_nameX856, const char** anonymous_var_nameX857);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX858);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX859);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX860);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX861, struct pcre_extra* anonymous_var_nameX862, const unsigned char* anonymous_var_nameX863);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX864, struct pcre16_extra* anonymous_var_nameX865, const unsigned char* anonymous_var_nameX866);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX867, struct pcre32_extra* anonymous_var_nameX868, const unsigned char* anonymous_var_nameX869);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX870, const unsigned short int* anonymous_var_nameX871, int anonymous_var_nameX872, int* anonymous_var_nameX873, int anonymous_var_nameX874);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX875, const unsigned int* anonymous_var_nameX876, int anonymous_var_nameX877, int* anonymous_var_nameX878, int anonymous_var_nameX879);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX880, int anonymous_var_nameX881);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX882, int anonymous_var_nameX883);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX884, int anonymous_var_nameX885);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX886);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX887);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX888);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX889, struct real_pcre_jit_stack* (*anonymous_var_nameX890)(void*), void* anonymous_var_nameX891);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX892, struct real_pcre16_jit_stack* (*anonymous_var_nameX893)(void*), void* anonymous_var_nameX894);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX895, struct real_pcre32_jit_stack* (*anonymous_var_nameX896)(void*), void* anonymous_var_nameX897);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

unsigned int* wcscpy(unsigned int* anonymous_var_nameX898, const unsigned int* anonymous_var_nameX899);

unsigned int* wcsncpy(unsigned int* anonymous_var_nameX900, const unsigned int* anonymous_var_nameX901, unsigned long int anonymous_var_nameX902);

unsigned int* wcscat(unsigned int* anonymous_var_nameX903, const unsigned int* anonymous_var_nameX904);

unsigned int* wcsncat(unsigned int* anonymous_var_nameX905, const unsigned int* anonymous_var_nameX906, unsigned long int anonymous_var_nameX907);

int wcscmp(const unsigned int* anonymous_var_nameX908, const unsigned int* anonymous_var_nameX909);

int wcsncmp(const unsigned int* anonymous_var_nameX910, const unsigned int* anonymous_var_nameX911, unsigned long int anonymous_var_nameX912);

int wcscoll(const unsigned int* anonymous_var_nameX913, const unsigned int* anonymous_var_nameX914);

unsigned long int wcsxfrm(unsigned int* anonymous_var_nameX915, const unsigned int* anonymous_var_nameX916, unsigned long int anonymous_var_nameX917);

unsigned int* wcschr(const unsigned int* anonymous_var_nameX918, unsigned int anonymous_var_nameX919);

unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX920, unsigned int anonymous_var_nameX921);

unsigned long int wcscspn(const unsigned int* anonymous_var_nameX922, const unsigned int* anonymous_var_nameX923);

unsigned long int wcsspn(const unsigned int* anonymous_var_nameX924, const unsigned int* anonymous_var_nameX925);

unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX926, const unsigned int* anonymous_var_nameX927);

unsigned int* wcstok(unsigned int* anonymous_var_nameX928, const unsigned int* anonymous_var_nameX929, unsigned int** anonymous_var_nameX930);

unsigned long int wcslen(const unsigned int* anonymous_var_nameX931);

unsigned int* wcsstr(const unsigned int* anonymous_var_nameX932, const unsigned int* anonymous_var_nameX933);

unsigned int* wcswcs(const unsigned int* anonymous_var_nameX934, const unsigned int* anonymous_var_nameX935);

unsigned int* wmemchr(const unsigned int* anonymous_var_nameX936, unsigned int anonymous_var_nameX937, unsigned long int anonymous_var_nameX938);

int wmemcmp(const unsigned int* anonymous_var_nameX939, const unsigned int* anonymous_var_nameX940, unsigned long int anonymous_var_nameX941);

unsigned int* wmemcpy(unsigned int* anonymous_var_nameX942, const unsigned int* anonymous_var_nameX943, unsigned long int anonymous_var_nameX944);

unsigned int* wmemmove(unsigned int* anonymous_var_nameX945, const unsigned int* anonymous_var_nameX946, unsigned long int anonymous_var_nameX947);

unsigned int* wmemset(unsigned int* anonymous_var_nameX948, unsigned int anonymous_var_nameX949, unsigned long int anonymous_var_nameX950);

unsigned int btowc(int anonymous_var_nameX951);

int wctob(unsigned int anonymous_var_nameX952);

int mbsinit(const struct __mbstate_t* anonymous_var_nameX953);

unsigned long int mbrtowc(unsigned int* anonymous_var_nameX954, const char* anonymous_var_nameX955, unsigned long int anonymous_var_nameX956, struct __mbstate_t* anonymous_var_nameX957);

unsigned long int wcrtomb(char* anonymous_var_nameX958, unsigned int anonymous_var_nameX959, struct __mbstate_t* anonymous_var_nameX960);

unsigned long int mbrlen(const char* anonymous_var_nameX961, unsigned long int anonymous_var_nameX962, struct __mbstate_t* anonymous_var_nameX963);

unsigned long int mbsrtowcs(unsigned int* anonymous_var_nameX964, const char** anonymous_var_nameX965, unsigned long int anonymous_var_nameX966, struct __mbstate_t* anonymous_var_nameX967);

unsigned long int wcsrtombs(char* anonymous_var_nameX968, const unsigned int** anonymous_var_nameX969, unsigned long int anonymous_var_nameX970, struct __mbstate_t* anonymous_var_nameX971);

float wcstof(const unsigned int* anonymous_var_nameX972, unsigned int** anonymous_var_nameX973);

double wcstod(const unsigned int* anonymous_var_nameX974, unsigned int** anonymous_var_nameX975);

long double wcstold(const unsigned int* anonymous_var_nameX976, unsigned int** anonymous_var_nameX977);

long wcstol(const unsigned int* anonymous_var_nameX978, unsigned int** anonymous_var_nameX979, int anonymous_var_nameX980);

unsigned long int wcstoul(const unsigned int* anonymous_var_nameX981, unsigned int** anonymous_var_nameX982, int anonymous_var_nameX983);

long long wcstoll(const unsigned int* anonymous_var_nameX984, unsigned int** anonymous_var_nameX985, int anonymous_var_nameX986);

unsigned long long wcstoull(const unsigned int* anonymous_var_nameX987, unsigned int** anonymous_var_nameX988, int anonymous_var_nameX989);

int fwide(struct _IO_FILE* anonymous_var_nameX990, int anonymous_var_nameX991);

int wprintf(const unsigned int* anonymous_var_nameX992, ...);

int fwprintf(struct _IO_FILE* anonymous_var_nameX993, const unsigned int* anonymous_var_nameX994, ...);

int swprintf(unsigned int* anonymous_var_nameX995, unsigned long int anonymous_var_nameX996, const unsigned int* anonymous_var_nameX997, ...);

int vwprintf(const unsigned int* anonymous_var_nameX998, va_list anonymous_var_nameX999);

int vfwprintf(struct _IO_FILE* anonymous_var_nameX1000, const unsigned int* anonymous_var_nameX1001, va_list anonymous_var_nameX1002);

int vswprintf(unsigned int* anonymous_var_nameX1003, unsigned long int anonymous_var_nameX1004, const unsigned int* anonymous_var_nameX1005, va_list anonymous_var_nameX1006);

int wscanf(const unsigned int* anonymous_var_nameX1007, ...);

int fwscanf(struct _IO_FILE* anonymous_var_nameX1008, const unsigned int* anonymous_var_nameX1009, ...);

int swscanf(const unsigned int* anonymous_var_nameX1010, const unsigned int* anonymous_var_nameX1011, ...);

int vwscanf(const unsigned int* anonymous_var_nameX1012, va_list anonymous_var_nameX1013);

int vfwscanf(struct _IO_FILE* anonymous_var_nameX1014, const unsigned int* anonymous_var_nameX1015, va_list anonymous_var_nameX1016);

int vswscanf(const unsigned int* anonymous_var_nameX1017, const unsigned int* anonymous_var_nameX1018, va_list anonymous_var_nameX1019);

unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1020);

unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1021);

unsigned int getwchar();

unsigned int fputwc(unsigned int anonymous_var_nameX1022, struct _IO_FILE* anonymous_var_nameX1023);

unsigned int putwc(unsigned int anonymous_var_nameX1024, struct _IO_FILE* anonymous_var_nameX1025);

unsigned int putwchar(unsigned int anonymous_var_nameX1026);

unsigned int* fgetws(unsigned int* anonymous_var_nameX1027, int anonymous_var_nameX1028, struct _IO_FILE* anonymous_var_nameX1029);

int fputws(const unsigned int* anonymous_var_nameX1030, struct _IO_FILE* anonymous_var_nameX1031);

unsigned int ungetwc(unsigned int anonymous_var_nameX1032, struct _IO_FILE* anonymous_var_nameX1033);

unsigned long int wcsftime(unsigned int* anonymous_var_nameX1034, unsigned long int anonymous_var_nameX1035, const unsigned int* anonymous_var_nameX1036, const struct tm* anonymous_var_nameX1037);

unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1038);

unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1039);

unsigned int getwchar_unlocked();

unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1040, struct _IO_FILE* anonymous_var_nameX1041);

unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1042, struct _IO_FILE* anonymous_var_nameX1043);

unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1044);

unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1045, int anonymous_var_nameX1046, struct _IO_FILE* anonymous_var_nameX1047);

int fputws_unlocked(const unsigned int* anonymous_var_nameX1048, struct _IO_FILE* anonymous_var_nameX1049);

unsigned long int wcsftime_l(unsigned int* anonymous_var_nameX1050, unsigned long int anonymous_var_nameX1051, const unsigned int* anonymous_var_nameX1052, const struct tm* anonymous_var_nameX1053, struct __locale_struct* anonymous_var_nameX1054);

struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1055, unsigned long int* anonymous_var_nameX1056);

unsigned long int mbsnrtowcs(unsigned int* anonymous_var_nameX1057, const char** anonymous_var_nameX1058, unsigned long int anonymous_var_nameX1059, unsigned long int anonymous_var_nameX1060, struct __mbstate_t* anonymous_var_nameX1061);

unsigned long int wcsnrtombs(char* anonymous_var_nameX1062, const unsigned int** anonymous_var_nameX1063, unsigned long int anonymous_var_nameX1064, unsigned long int anonymous_var_nameX1065, struct __mbstate_t* anonymous_var_nameX1066);

unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1067);

unsigned long int wcsnlen(const unsigned int* anonymous_var_nameX1068, unsigned long int anonymous_var_nameX1069);

unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1070, const unsigned int* anonymous_var_nameX1071);

unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1072, const unsigned int* anonymous_var_nameX1073, unsigned long int anonymous_var_nameX1074);

int wcscasecmp(const unsigned int* anonymous_var_nameX1075, const unsigned int* anonymous_var_nameX1076);

int wcscasecmp_l(const unsigned int* anonymous_var_nameX1077, const unsigned int* anonymous_var_nameX1078, struct __locale_struct* anonymous_var_nameX1079);

int wcsncasecmp(const unsigned int* anonymous_var_nameX1080, const unsigned int* anonymous_var_nameX1081, unsigned long int anonymous_var_nameX1082);

int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1083, const unsigned int* anonymous_var_nameX1084, unsigned long int anonymous_var_nameX1085, struct __locale_struct* anonymous_var_nameX1086);

int wcscoll_l(const unsigned int* anonymous_var_nameX1087, const unsigned int* anonymous_var_nameX1088, struct __locale_struct* anonymous_var_nameX1089);

unsigned long int wcsxfrm_l(unsigned int* anonymous_var_nameX1090, const unsigned int* anonymous_var_nameX1091, unsigned long int anonymous_var_nameX1092, struct __locale_struct* anonymous_var_nameX1093);

int wcwidth(unsigned int anonymous_var_nameX1094);

int wcswidth(const unsigned int* anonymous_var_nameX1095, unsigned long int anonymous_var_nameX1096);

int iswalnum(unsigned int anonymous_var_nameX1097);

int iswalpha(unsigned int anonymous_var_nameX1098);

int iswblank(unsigned int anonymous_var_nameX1099);

int iswcntrl(unsigned int anonymous_var_nameX1100);

int iswdigit(unsigned int anonymous_var_nameX1101);

int iswgraph(unsigned int anonymous_var_nameX1102);

int iswlower(unsigned int anonymous_var_nameX1103);

int iswprint(unsigned int anonymous_var_nameX1104);

int iswpunct(unsigned int anonymous_var_nameX1105);

int iswspace(unsigned int anonymous_var_nameX1106);

int iswupper(unsigned int anonymous_var_nameX1107);

int iswxdigit(unsigned int anonymous_var_nameX1108);

int iswctype(unsigned int anonymous_var_nameX1109, unsigned long int anonymous_var_nameX1110);

unsigned int towlower(unsigned int anonymous_var_nameX1111);

unsigned int towupper(unsigned int anonymous_var_nameX1112);

unsigned long int wctype(const char* anonymous_var_nameX1113);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX1115)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX1117)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX1119)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX1120);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX1121);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX1122);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX1123);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX1124)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX1125);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX1126);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1127);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX1128);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1129);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX1130);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX1131);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX1132);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1133);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1134);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX1135);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX1136);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX1137);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX1138);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX1139);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX1140);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX1141);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX1142);

char* GC_strdup(const char* anonymous_var_nameX1143);

char* GC_strndup(const char* anonymous_var_nameX1144, unsigned long int anonymous_var_nameX1145);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX1146);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX1147);

void* GC_memalign(unsigned long int anonymous_var_nameX1148, unsigned long int anonymous_var_nameX1149);

int GC_posix_memalign(void** anonymous_var_nameX1150, unsigned long int anonymous_var_nameX1151, unsigned long int anonymous_var_nameX1152);

void GC_free(void* anonymous_var_nameX1153);

void GC_change_stubborn(const void* anonymous_var_nameX1154);

void GC_end_stubborn_change(const void* anonymous_var_nameX1155);

void* GC_base(void* anonymous_var_nameX1156);

int GC_is_heap_ptr(const void* anonymous_var_nameX1157);

unsigned long int GC_size(const void* anonymous_var_nameX1158);

void* GC_realloc(void* anonymous_var_nameX1159, unsigned long int anonymous_var_nameX1160);

int GC_expand_hp(unsigned long int anonymous_var_nameX1161);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1162);

void GC_exclude_static_roots(void* anonymous_var_nameX1163, void* anonymous_var_nameX1164);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX1165, void* anonymous_var_nameX1166);

void GC_remove_roots(void* anonymous_var_nameX1167, void* anonymous_var_nameX1168);

void GC_register_displacement(unsigned long int anonymous_var_nameX1169);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX1170);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX1171)());

void GC_set_stop_func(int (*anonymous_var_nameX1172)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1173, unsigned long int* anonymous_var_nameX1174, unsigned long int* anonymous_var_nameX1175, unsigned long int* anonymous_var_nameX1176, unsigned long int* anonymous_var_nameX1177);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1178, unsigned long int anonymous_var_nameX1179);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX1180);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1181);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1182);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1183);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1184, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX1185, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX1186, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX1187, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX1188, unsigned long int anonymous_var_nameX1189, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX1190, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX1191, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1192, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1193, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX1194);

void* GC_debug_realloc(void* anonymous_var_nameX1195, unsigned long int anonymous_var_nameX1196, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX1197);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1198);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX1199);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX1200, unsigned long int anonymous_var_nameX1201);

void GC_register_finalizer(void* anonymous_var_nameX1204, void (*anonymous_var_nameX1205)(void*,void*), void* anonymous_var_nameX1206, void (*anonymous_var_nameX1207)(void*,void*), void** anonymous_var_nameX1208);

void GC_debug_register_finalizer(void* anonymous_var_nameX1209, void (*anonymous_var_nameX1210)(void*,void*), void* anonymous_var_nameX1211, void (*anonymous_var_nameX1212)(void*,void*), void** anonymous_var_nameX1213);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1214, void (*anonymous_var_nameX1215)(void*,void*), void* anonymous_var_nameX1216, void (*anonymous_var_nameX1217)(void*,void*), void** anonymous_var_nameX1218);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1219, void (*anonymous_var_nameX1220)(void*,void*), void* anonymous_var_nameX1221, void (*anonymous_var_nameX1222)(void*,void*), void** anonymous_var_nameX1223);

void GC_register_finalizer_no_order(void* anonymous_var_nameX1224, void (*anonymous_var_nameX1225)(void*,void*), void* anonymous_var_nameX1226, void (*anonymous_var_nameX1227)(void*,void*), void** anonymous_var_nameX1228);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1229, void (*anonymous_var_nameX1230)(void*,void*), void* anonymous_var_nameX1231, void (*anonymous_var_nameX1232)(void*,void*), void** anonymous_var_nameX1233);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX1234, void (*anonymous_var_nameX1235)(void*,void*), void* anonymous_var_nameX1236, void (*anonymous_var_nameX1237)(void*,void*), void** anonymous_var_nameX1238);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1239, void (*anonymous_var_nameX1240)(void*,void*), void* anonymous_var_nameX1241, void (*anonymous_var_nameX1242)(void*,void*), void** anonymous_var_nameX1243);

int GC_register_disappearing_link(void** anonymous_var_nameX1244);

int GC_general_register_disappearing_link(void** anonymous_var_nameX1245, const void* anonymous_var_nameX1246);

int GC_move_disappearing_link(void** anonymous_var_nameX1247, void** anonymous_var_nameX1248);

int GC_unregister_disappearing_link(void** anonymous_var_nameX1249);

int GC_register_long_link(void** anonymous_var_nameX1250, const void* anonymous_var_nameX1251);

int GC_move_long_link(void** anonymous_var_nameX1252, void** anonymous_var_nameX1253);

int GC_unregister_long_link(void** anonymous_var_nameX1254);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX1256)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX1257, int anonymous_var_nameX1258);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX1260)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX1261);

void GC_set_warn_proc(void (*anonymous_var_nameX1264)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX1265, unsigned long int anonymous_var_nameX1266);

void GC_set_log_fd(int anonymous_var_nameX1267);

void GC_set_abort_func(void (*anonymous_var_nameX1269)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1271)(void*), void* anonymous_var_nameX1272);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX1275)(struct GC_stack_base*,void*), void* anonymous_var_nameX1276);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX1277)(void*), void* anonymous_var_nameX1278);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX1279)(void*), void* anonymous_var_nameX1280);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1281);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1282);

void GC_set_stackbottom(void* anonymous_var_nameX1283, const struct GC_stack_base* anonymous_var_nameX1284);

void* GC_same_obj(void* anonymous_var_nameX1285, void* anonymous_var_nameX1286);

void* GC_pre_incr(void** anonymous_var_nameX1287, long anonymous_var_nameX1288);

void* GC_post_incr(void** anonymous_var_nameX1289, long anonymous_var_nameX1290);

void* GC_is_visible(void* anonymous_var_nameX1291);

void* GC_is_valid_displacement(void* anonymous_var_nameX1292);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX1293);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX1294, const void* anonymous_var_nameX1295);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1296, const void* anonymous_var_nameX1297);

void* GC_malloc_many(unsigned long int anonymous_var_nameX1318);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1322)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1323);

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
    # 45 "./neo-c.h"
    perror(msg);
    # 46 "./neo-c.h"
    stackframe();
    # 47 "./neo-c.h"
    exit(4);
    # 49 "./neo-c.h"
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct buffer*));
    # 1897 "./neo-c.h"
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1897, "buffer"));
    # 1898 "./neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1899 "./neo-c.h"
    __result2__ = __result_obj__ = result_0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct buffer*));
    # 1904 "./neo-c.h"
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1904, "buffer"));
    # 1905 "./neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1906 "./neo-c.h"
    __result3__ = __result_obj__ = result_1;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct buffer*));
    # 1911 "./neo-c.h"
    result_2=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1911, "buffer"));
    # 1912 "./neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1913 "./neo-c.h"
    __result4__ = __result_obj__ = result_2;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct buffer*));
    # 1918 "./neo-c.h"
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1918, "buffer"));
    # 1919 "./neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1920 "./neo-c.h"
    __result5__ = __result_obj__ = result_3;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct buffer*));
    # 1925 "./neo-c.h"
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1925, "buffer"));
    # 1926 "./neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1927 "./neo-c.h"
    __result6__ = __result_obj__ = result_4;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct buffer*));
    # 1932 "./neo-c.h"
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1932, "buffer"));
    # 1933 "./neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1934 "./neo-c.h"
    __result7__ = __result_obj__ = result_5;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_6;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
    # 1948 "./neo-c.h"
    result_6=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1948, "smart_pointer$1char");
    # 1950 "./neo-c.h"
    result_6->memory=buffer_clone(self);
    # 1951 "./neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1953 "./neo-c.h"
    __result8__ = __result_obj__ = result_6;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_7;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
    # 1958 "./neo-c.h"
    result_7=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1958, "smart_pointer$1char");
    # 1960 "./neo-c.h"
    result_7->memory=buffer_clone(self);
    # 1961 "./neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 1963 "./neo-c.h"
    __result9__ = __result_obj__ = result_7;
    return __result9__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1short* result_8;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
    # 1968 "./neo-c.h"
    result_8=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1968, "smart_pointer$1short");
    # 1970 "./neo-c.h"
    result_8->memory=buffer_clone(self);
    # 1971 "./neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 1973 "./neo-c.h"
    __result10__ = __result_obj__ = result_8;
    return __result10__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1int* result_9;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
    # 1978 "./neo-c.h"
    result_9=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1978, "smart_pointer$1int");
    # 1980 "./neo-c.h"
    result_9->memory=buffer_clone(self);
    # 1981 "./neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 1983 "./neo-c.h"
    __result11__ = __result_obj__ = result_9;
    return __result11__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1long* result_10;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
    # 1988 "./neo-c.h"
    result_10=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1988, "smart_pointer$1long");
    # 1990 "./neo-c.h"
    result_10->memory=buffer_clone(self);
    # 1991 "./neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 1993 "./neo-c.h"
    __result12__ = __result_obj__ = result_10;
    return __result12__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2159 "./neo-c.h"
    __result14__ = __result_obj__ = smart_pointer$1char_initialize((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2159, "smart_pointer$1char"),self,len);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2164 "./neo-c.h"
    __result16__ = __result_obj__ = smart_pointer$1short_initialize((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2164, "smart_pointer$1short"),self,len);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2169 "./neo-c.h"
    __result18__ = __result_obj__ = smart_pointer$1int_initialize((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2169, "smart_pointer$1int"),self,len);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2174 "./neo-c.h"
    __result20__ = __result_obj__ = smart_pointer$1long_initialize((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2174, "smart_pointer$1long"),self,len);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2179 "./neo-c.h"
    __result22__ = __result_obj__ = smart_pointer$1float_initialize((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2179, "smart_pointer$1float"),self,len);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2184 "./neo-c.h"
    __result24__ = __result_obj__ = smart_pointer$1double_initialize((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2184, "smart_pointer$1double"),self,len);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2189 "./neo-c.h"
    __result27__ = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2189, "list$1char"),len,self);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2194 "./neo-c.h"
    __result30__ = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2194, "list$1short"),len,self);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2199 "./neo-c.h"
    __result33__ = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2199, "list$1int"),len,self);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2204 "./neo-c.h"
    __result36__ = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2204, "list$1long"),len,self);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2209 "./neo-c.h"
    __result39__ = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2209, "list$1float"),len,self);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2214 "./neo-c.h"
    __result42__ = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2214, "list$1double"),len,self);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2244 "./neo-c.h"
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2249 "./neo-c.h"
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2254 "./neo-c.h"
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2259 "./neo-c.h"
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2264 "./neo-c.h"
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2269 "./neo-c.h"
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2330 "./neo-c.h"
    __result49__ = __result_obj__ = xsprintf(msg,self);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2335 "./neo-c.h"
    __result50__ = __result_obj__ = xsprintf(msg,self);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2340 "./neo-c.h"
    __result51__ = __result_obj__ = xsprintf(msg,self);
    return __result51__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
unsigned int* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    # 47 "./neo-c-str.h"
    __result52__ = __result_obj__ = wchar_tp_substring(str,head,tail);
    return __result52__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 53 "./neo-c-str.h"
    __result53__ = charp_index_count(str,search_str,count,default_value);
    return __result53__;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    # 59 "./neo-c-str.h"
    __result54__ = charp_index_regex_count(self,reg,count,default_value);
    return __result54__;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 65 "./neo-c-str.h"
    __result55__ = charp_rindex(str,search_str,default_value);
    return __result55__;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    # 71 "./neo-c-str.h"
    __result56__ = charp_rindex_regex(self,reg,default_value);
    return __result56__;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    # 77 "./neo-c-str.h"
    __result57__ = charp_rindex_count(str,search_str,default_value,-1);
    return __result57__;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    # 83 "./neo-c-str.h"
    __result58__ = __result_obj__ = charp_scan_block(self,reg,parent,block);
    return __result58__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    # 89 "./neo-c-str.h"
    __result59__ = __result_obj__ = charp_scan_block_count(self,reg,count,parent,block);
    return __result59__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    # 95 "./neo-c-str.h"
    __result60__ = __result_obj__ = charp_split_block(self,reg,parent,block);
    return __result60__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    # 101 "./neo-c-str.h"
    __result61__ = __result_obj__ = charp_split_block_count(self,reg,count,parent,block);
    return __result61__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    # 107 "./neo-c-str.h"
    __result62__ = __result_obj__ = charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex);
    return __result62__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
    # 113 "./neo-c-str.h"
    __result63__ = __result_obj__ = charp_strip(self);
    return __result63__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    # 119 "./neo-c-str.h"
    __result64__ = __result_obj__ = string_printable(str);
    return __result64__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__;
unsigned int* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    # 125 "./neo-c-str.h"
    __result65__ = __result_obj__ = charp_to_wstring(str);
    return __result65__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    # 133 "./neo-c-str.h"
    __result66__ = __result_obj__ = wchar_tp_to_string(wstr);
    return __result66__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__;
unsigned int* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    # 138 "./neo-c-str.h"
    __result67__ = __result_obj__ = string_to_wstring(xsprintf("%d",self));
    return __result67__;
}
static inline int wstring_length(unsigned int* str){
void* __result_obj__;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    # 144 "./neo-c-str.h"
    __result68__ = wchar_tp_length(str);
    return __result68__;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
unsigned int* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
    # 150 "./neo-c-str.h"
    __result69__ = __result_obj__ = wchar_tp_delete(str,head,tail);
    return __result69__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    # 156 "./neo-c-str.h"
    __result70__ = wchar_tp_index(str,search_str,default_value);
    return __result70__;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    # 162 "./neo-c-str.h"
    __result71__ = wchar_tp_rindex(str,search_str,default_value);
    return __result71__;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__;
unsigned int* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    # 168 "./neo-c-str.h"
    __result72__ = __result_obj__ = wchar_tp_reverse(str);
    return __result72__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    # 174 "./neo-c-str.h"
    __result73__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result73__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__;
unsigned int* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    # 180 "./neo-c-str.h"
    __result74__ = __result_obj__ = wchar_tp_printable(str);
    return __result74__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
void* __result_obj__;
unsigned int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    # 202 "./neo-c-str.h"
    __result75__ = wchar_tp_get_hash_key(value);
    return __result75__;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    # 214 "./neo-c-str.h"
    __result76__ = charp_match_group_strings(self,reg,count,group_strings);
    return __result76__;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 220 "./neo-c-str.h"
    __result77__ = charp_index(str,search_str,default_value);
    return __result77__;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    # 226 "./neo-c-str.h"
    __result78__ = charp_index_regex(self,reg,default_value);
    return __result78__;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    # 233 "./neo-c-str.h"
    __result79__ = __result_obj__ = charp_replace(self,index,c);
    return __result79__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    # 239 "./neo-c-str.h"
    __result80__ = __result_obj__ = charp_multiply(str,n);
    return __result80__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    # 245 "./neo-c-str.h"
    __result81__ = __result_obj__ = charp_sub(self,reg,replace);
    return __result81__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    # 251 "./neo-c-str.h"
    __result82__ = __result_obj__ = charp_sub_count(self,reg,replace,count);
    return __result82__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    # 257 "./neo-c-str.h"
    __result83__ = __result_obj__ = charp_split_str(self,str);
    return __result83__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
struct list$1charph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    # 263 "./neo-c-str.h"
    __result84__ = __result_obj__ = charp_scan(self,reg);
    return __result84__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    # 269 "./neo-c-str.h"
    __result85__ = __result_obj__ = charp_split(self,reg);
    return __result85__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    # 275 "./neo-c-str.h"
    __result86__ = charp_match(self,reg);
    return __result86__;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
struct list$1charph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    # 281 "./neo-c-str.h"
    __result87__ = __result_obj__ = charp_split_maxsplit(self,reg,maxsplit);
    return __result87__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    # 287 "./neo-c-str.h"
    __result88__ = charp_rindex_regex_count(self,reg,count,default_value);
    return __result88__;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    # 293 "./neo-c-str.h"
    __result89__ = charp_match_count(self,reg,count);
    return __result89__;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    # 299 "./neo-c-str.h"
    __result90__ = __result_obj__ = charp_sub_block(self,reg,parent,block);
    return __result90__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    # 305 "./neo-c-str.h"
    __result91__ = __result_obj__ = charp_sub_block_count(self,reg,count,parent,block);
    return __result91__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    # 323 "./neo-c-str.h"
    __result93__ = __result_obj__ = string_chomp(str);
    return __result93__;
}

// body function













static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2004 "./neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result13__ = __result_obj__ = self;
        return __result13__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2004 "./neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result15__ = __result_obj__ = self;
        return __result15__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2004 "./neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result17__ = __result_obj__ = self;
        return __result17__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2004 "./neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result19__ = __result_obj__ = self;
        return __result19__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2004 "./neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result21__ = __result_obj__ = self;
        return __result21__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2004 "./neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result23__ = __result_obj__ = self;
        return __result23__;
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            # 108 "./neo-c.h"
            list$1char_push_back(self,values[i_11]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional1=self->len==0,                _if_conditional1) {
                    # 217 "./neo-c.h"
                    litem_12=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 217, "list_item$1char");
                    # 219 "./neo-c.h"
                    litem_12->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_12->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_12->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_12;
                    # 224 "./neo-c.h"
                    self->head=litem_12;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional2=self->len==1,                    _if_conditional2) {
                        # 227 "./neo-c.h"
                        litem_13=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char");
                        # 229 "./neo-c.h"
                        litem_13->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_13->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_13->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_13;
                        # 234 "./neo-c.h"
                        self->head->next=litem_13;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_14=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char");
                        # 239 "./neo-c.h"
                        litem_14->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_14->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_14->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_14;
                        # 244 "./neo-c.h"
                        self->tail=litem_14;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result25__ = __result_obj__ = self;
                return __result25__;
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_15;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_15, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_15=0;        i_15<num_value;        i_15++        ){
            # 108 "./neo-c.h"
            list$1short_push_back(self,values[i_15]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional3=self->len==0,                _if_conditional3) {
                    # 217 "./neo-c.h"
                    litem_16=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 217, "list_item$1short");
                    # 219 "./neo-c.h"
                    litem_16->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_16->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_16->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_16;
                    # 224 "./neo-c.h"
                    self->head=litem_16;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional4=self->len==1,                    _if_conditional4) {
                        # 227 "./neo-c.h"
                        litem_17=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short");
                        # 229 "./neo-c.h"
                        litem_17->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_17->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_17->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_17;
                        # 234 "./neo-c.h"
                        self->head->next=litem_17;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_18=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short");
                        # 239 "./neo-c.h"
                        litem_18->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_18->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_18->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_18;
                        # 244 "./neo-c.h"
                        self->tail=litem_18;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result28__ = __result_obj__ = self;
                return __result28__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_19;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_19, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_19=0;        i_19<num_value;        i_19++        ){
            # 108 "./neo-c.h"
            list$1int_push_back(self,values[i_19]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional5=self->len==0,                _if_conditional5) {
                    # 217 "./neo-c.h"
                    litem_20=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 217, "list_item$1int");
                    # 219 "./neo-c.h"
                    litem_20->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_20->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_20->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_20;
                    # 224 "./neo-c.h"
                    self->head=litem_20;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional6=self->len==1,                    _if_conditional6) {
                        # 227 "./neo-c.h"
                        litem_21=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int");
                        # 229 "./neo-c.h"
                        litem_21->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_21->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_21->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_21;
                        # 234 "./neo-c.h"
                        self->head->next=litem_21;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_22=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int");
                        # 239 "./neo-c.h"
                        litem_22->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_22->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_22->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_22;
                        # 244 "./neo-c.h"
                        self->tail=litem_22;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result31__ = __result_obj__ = self;
                return __result31__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_23;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            # 108 "./neo-c.h"
            list$1long_push_back(self,values[i_23]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 217 "./neo-c.h"
                    litem_24=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 217, "list_item$1long");
                    # 219 "./neo-c.h"
                    litem_24->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_24->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_24->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_24;
                    # 224 "./neo-c.h"
                    self->head=litem_24;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 227 "./neo-c.h"
                        litem_25=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long");
                        # 229 "./neo-c.h"
                        litem_25->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_25->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_25->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_25;
                        # 234 "./neo-c.h"
                        self->head->next=litem_25;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_26=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long");
                        # 239 "./neo-c.h"
                        litem_26->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_26->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_26->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_26;
                        # 244 "./neo-c.h"
                        self->tail=litem_26;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result34__ = __result_obj__ = self;
                return __result34__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_27;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_27, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_27=0;        i_27<num_value;        i_27++        ){
            # 108 "./neo-c.h"
            list$1float_push_back(self,values[i_27]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 217 "./neo-c.h"
                    litem_28=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 217, "list_item$1float");
                    # 219 "./neo-c.h"
                    litem_28->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_28->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_28->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_28;
                    # 224 "./neo-c.h"
                    self->head=litem_28;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 227 "./neo-c.h"
                        litem_29=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float");
                        # 229 "./neo-c.h"
                        litem_29->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_29->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_29->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_29;
                        # 234 "./neo-c.h"
                        self->head->next=litem_29;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_30=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float");
                        # 239 "./neo-c.h"
                        litem_30->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_30->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_30->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_30;
                        # 244 "./neo-c.h"
                        self->tail=litem_30;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result37__ = __result_obj__ = self;
                return __result37__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_31;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_31, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_31=0;        i_31<num_value;        i_31++        ){
            # 108 "./neo-c.h"
            list$1double_push_back(self,values[i_31]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 217 "./neo-c.h"
                    litem_32=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 217, "list_item$1double");
                    # 219 "./neo-c.h"
                    litem_32->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_32->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_32->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_32;
                    # 224 "./neo-c.h"
                    self->head=litem_32;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 227 "./neo-c.h"
                        litem_33=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double");
                        # 229 "./neo-c.h"
                        litem_33->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_33->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_33->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_33;
                        # 234 "./neo-c.h"
                        self->head->next=litem_33;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_34=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double");
                        # 239 "./neo-c.h"
                        litem_34->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_34->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_34->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_34;
                        # 244 "./neo-c.h"
                        self->tail=litem_34;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result40__ = __result_obj__ = self;
                return __result40__;
}



















































void regex_finalizer(void* obj, void* client_data){
void* __result_obj__;
struct come_regex* self_35;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&self_35, 0, sizeof(struct come_regex*));
    # 8 "libneo-c-str-gc.c"
    self_35=obj;
    # 13 "libneo-c-str-gc.c"
    # 10 "libneo-c-str-gc.c"
    if(_if_conditional13=self_35&&self_35->re,    _if_conditional13) {
        # 11 "libneo-c-str-gc.c"
        free(self_35->re);
    }
}

struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
const char* err_36;
int erro_ofs_37;
int options_38;
_Bool _if_conditional14;
_Bool _if_conditional15;
struct come_regex* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_37, 0, sizeof(int));
memset(&options_38, 0, sizeof(int));
    # 17 "libneo-c-str-gc.c"
    # 18 "libneo-c-str-gc.c"
    # 20 "libneo-c-str-gc.c"
    options_38=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    # 22 "libneo-c-str-gc.c"
    self->str=__builtin_string(str);
    # 24 "libneo-c-str-gc.c"
    self->ignore_case=ignore_case;
    # 25 "libneo-c-str-gc.c"
    self->multiline=multiline;
    # 26 "libneo-c-str-gc.c"
    self->global=global;
    # 27 "libneo-c-str-gc.c"
    self->extended=extended;
    # 28 "libneo-c-str-gc.c"
    self->dotall=dotall;
    # 29 "libneo-c-str-gc.c"
    self->anchored=anchored;
    # 30 "libneo-c-str-gc.c"
    self->dollar_endonly=dollar_endonly;
    # 31 "libneo-c-str-gc.c"
    # 32 "libneo-c-str-gc.c"
    self->options=options_38;
    # 34 "libneo-c-str-gc.c"
    self->re=pcre_compile(str,options_38,&err_36,&erro_ofs_37,((void*)0));
    # 42 "libneo-c-str-gc.c"
    # 36 "libneo-c-str-gc.c"
    if(_if_conditional14=self->re==((void*)0),    _if_conditional14) {
        # 37 "libneo-c-str-gc.c"
        printf("regex error (%s)\n",str);
        # 38 "libneo-c-str-gc.c"
        stackframe();
        # 39 "libneo-c-str-gc.c"
        exit(1);
    }
    # 46 "libneo-c-str-gc.c"
    # 42 "libneo-c-str-gc.c"
    if(gComeGCLib) {
        # 43 "libneo-c-str-gc.c"
        GC_register_finalizer(self,regex_finalizer,((void*)0),((void*)0),((void*)0));
    }
    # 46 "libneo-c-str-gc.c"
    __result94__ = __result_obj__ = self;
    return __result94__;
}

void come_regex_finalize(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional16;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
    # 54 "libneo-c-str-gc.c"
    # 51 "libneo-c-str-gc.c"
    if(_if_conditional16=reg&&reg->str,    _if_conditional16) {
        # 52 "libneo-c-str-gc.c"
    }
    # 57 "libneo-c-str-gc.c"
    # 54 "libneo-c-str-gc.c"
    if(_if_conditional17=reg&&reg->re,    _if_conditional17) {
        # 55 "libneo-c-str-gc.c"
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
struct come_regex* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    # 61 "libneo-c-str-gc.c"
    __result95__ = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str-gc.c", 61, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    return __result95__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
struct come_regex* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    # 66 "libneo-c-str-gc.c"
    __result96__ = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str-gc.c", 66, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    return __result96__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional18;
struct come_regex* __result97__;
struct come_regex* result_39;
const char* err_40;
int erro_ofs_41;
_Bool _if_conditional19;
struct come_regex* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_39, 0, sizeof(struct come_regex*));
memset(&erro_ofs_41, 0, sizeof(int));
    # 76 "libneo-c-str-gc.c"
    # 72 "libneo-c-str-gc.c"
    if(_if_conditional18=reg==((void*)0),    _if_conditional18) {
        # 73 "libneo-c-str-gc.c"
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    # 76 "libneo-c-str-gc.c"
    result_39=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str-gc.c", 76, "come_regex");
    # 78 "libneo-c-str-gc.c"
    result_39->str=string_clone(reg->str);
    # 80 "libneo-c-str-gc.c"
    result_39->ignore_case=reg->ignore_case;
    # 81 "libneo-c-str-gc.c"
    result_39->multiline=reg->multiline;
    # 82 "libneo-c-str-gc.c"
    result_39->global=reg->global;
    # 83 "libneo-c-str-gc.c"
    result_39->extended=reg->extended;
    # 84 "libneo-c-str-gc.c"
    result_39->dotall=reg->dotall;
    # 85 "libneo-c-str-gc.c"
    result_39->anchored=reg->anchored;
    # 86 "libneo-c-str-gc.c"
    result_39->dollar_endonly=reg->dollar_endonly;
    # 87 "libneo-c-str-gc.c"
    result_39->ungreedy=reg->ungreedy;
    # 89 "libneo-c-str-gc.c"
    result_39->options=reg->options;
    # 91 "libneo-c-str-gc.c"
    # 92 "libneo-c-str-gc.c"
    # 94 "libneo-c-str-gc.c"
    result_39->re=pcre_compile(result_39->str,result_39->options,&err_40,&erro_ofs_41,((void*)0));
    # 102 "libneo-c-str-gc.c"
    # 96 "libneo-c-str-gc.c"
    if(_if_conditional19=result_39->re==((void*)0),    _if_conditional19) {
        # 97 "libneo-c-str-gc.c"
        printf("regex compile error(%s)\n",result_39->str);
        # 98 "libneo-c-str-gc.c"
        stackframe();
        # 99 "libneo-c-str-gc.c"
        exit(1);
    }
    # 102 "libneo-c-str-gc.c"
    __result98__ = __result_obj__ = result_39;
    return __result98__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
    # 107 "libneo-c-str-gc.c"
    __result99__ = __result_obj__ = __builtin_string(regex->str);
    return __result99__;
}

char* string_lower_case(char* str){
void* __result_obj__;
char* result_42;
int i_43;
_Bool _if_conditional20;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_42, 0, sizeof(char*));
memset(&i_43, 0, sizeof(int));
    # 112 "libneo-c-str-gc.c"
    result_42=__builtin_string(str);
    # 119 "libneo-c-str-gc.c"
    for(    i_43=0;    i_43<strlen(str);    i_43++    ){
        # 117 "libneo-c-str-gc.c"
        # 114 "libneo-c-str-gc.c"
        if(_if_conditional20=str[i_43]>=65&&str[i_43]<=90,        _if_conditional20) {
            # 115 "libneo-c-str-gc.c"
            result_42[i_43]=str[i_43]-65+97;
        }
    }
    # 119 "libneo-c-str-gc.c"
    __result100__ = __result_obj__ = result_42;
    return __result100__;
}

char* string_upper_case(char* str){
void* __result_obj__;
char* result_44;
int i_45;
_Bool _if_conditional21;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_44, 0, sizeof(char*));
memset(&i_45, 0, sizeof(int));
    # 124 "libneo-c-str-gc.c"
    result_44=__builtin_string(str);
    # 131 "libneo-c-str-gc.c"
    for(    i_45=0;    i_45<strlen(str);    i_45++    ){
        # 129 "libneo-c-str-gc.c"
        # 126 "libneo-c-str-gc.c"
        if(_if_conditional21=str[i_45]>=97&&str[i_45]<=122,        _if_conditional21) {
            # 127 "libneo-c-str-gc.c"
            result_44[i_45]=str[i_45]-97+65;
        }
    }
    # 131 "libneo-c-str-gc.c"
    __result101__ = __result_obj__ = result_44;
    return __result101__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional22;
unsigned int* __result102__;
int len_46;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
unsigned int* __result103__;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
unsigned int* __result104__;
_Bool _if_conditional29;
unsigned int* __result105__;
unsigned int* result_47;
unsigned int* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_46, 0, sizeof(int));
memset(&result_47, 0, sizeof(unsigned int*));
    # 136 "libneo-c-str-gc.c"
    # 142 "libneo-c-str-gc.c"
    # 138 "libneo-c-str-gc.c"
    if(_if_conditional22=str==((void*)0),    _if_conditional22) {
        # 139 "libneo-c-str-gc.c"
        __result102__ = __result_obj__ = __builtin_wstring("");
        return __result102__;
    }
    # 142 "libneo-c-str-gc.c"
    len_46=wcslen(str);
    # 147 "libneo-c-str-gc.c"
    # 144 "libneo-c-str-gc.c"
    if(_if_conditional23=head<0,    _if_conditional23) {
        # 145 "libneo-c-str-gc.c"
        head+=len_46;
    }
    # 151 "libneo-c-str-gc.c"
    # 147 "libneo-c-str-gc.c"
    if(_if_conditional24=tail<0,    _if_conditional24) {
        # 148 "libneo-c-str-gc.c"
        tail+=len_46+1;
    }
    # 155 "libneo-c-str-gc.c"
    # 151 "libneo-c-str-gc.c"
    if(_if_conditional25=head>tail,    _if_conditional25) {
        # 152 "libneo-c-str-gc.c"
        __result103__ = __result_obj__ = __builtin_wstring("");
        return __result103__;
    }
    # 159 "libneo-c-str-gc.c"
    # 155 "libneo-c-str-gc.c"
    if(_if_conditional26=head<0,    _if_conditional26) {
        # 156 "libneo-c-str-gc.c"
        head=0;
    }
    # 163 "libneo-c-str-gc.c"
    # 159 "libneo-c-str-gc.c"
    if(_if_conditional27=tail>=len_46,    _if_conditional27) {
        # 160 "libneo-c-str-gc.c"
        tail=len_46;
    }
    # 167 "libneo-c-str-gc.c"
    # 163 "libneo-c-str-gc.c"
    if(_if_conditional28=head==tail,    _if_conditional28) {
        # 164 "libneo-c-str-gc.c"
        __result104__ = __result_obj__ = __builtin_wstring("");
        return __result104__;
    }
    # 171 "libneo-c-str-gc.c"
    # 167 "libneo-c-str-gc.c"
    if(_if_conditional29=tail-head+1<1,    _if_conditional29) {
        # 168 "libneo-c-str-gc.c"
        __result105__ = __result_obj__ = __builtin_wstring("");
        return __result105__;
    }
    # 171 "libneo-c-str-gc.c"
    result_47=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libneo-c-str-gc.c", 171, "int");
    # 173 "libneo-c-str-gc.c"
    memcpy(result_47,str+head,sizeof(unsigned int)*(tail-head));
    # 174 "libneo-c-str-gc.c"
    result_47[tail-head]=0;
    # 176 "libneo-c-str-gc.c"
    __result106__ = __result_obj__ = result_47;
    return __result106__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool _if_conditional30;
unsigned int* __result107__;
int len_48;
unsigned int* wstr_49;
int ret_50;
_Bool _if_conditional31;
unsigned int* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_48, 0, sizeof(int));
memset(&wstr_49, 0, sizeof(unsigned int*));
memset(&ret_50, 0, sizeof(int));
    # 184 "libneo-c-str-gc.c"
    # 181 "libneo-c-str-gc.c"
    if(_if_conditional30=str==((void*)0),    _if_conditional30) {
        # 182 "libneo-c-str-gc.c"
        __result107__ = __result_obj__ = ((void*)0);
        return __result107__;
    }
    # 184 "libneo-c-str-gc.c"
    len_48=strlen(str);
    # 186 "libneo-c-str-gc.c"
    wstr_49=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_48+1)), "libneo-c-str-gc.c", 186, "int");
    # 188 "libneo-c-str-gc.c"
    ret_50=mbstowcs(wstr_49,str,len_48+1);
    # 189 "libneo-c-str-gc.c"
    wstr_49[ret_50]=0;
    # 195 "libneo-c-str-gc.c"
    # 191 "libneo-c-str-gc.c"
    if(_if_conditional31=ret_50<0,    _if_conditional31) {
        # 192 "libneo-c-str-gc.c"
        wstr_49[0]=0;
    }
    # 195 "libneo-c-str-gc.c"
    __result108__ = __result_obj__ = wstr_49;
    return __result108__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int n_51;
int len_52;
int i_53;
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
    # 200 "libneo-c-str-gc.c"
    n_51=0;
    # 201 "libneo-c-str-gc.c"
    len_52=strlen(str);
    # 220 "libneo-c-str-gc.c"
    for(    i_53=0;    i_53<len_52;    i_53++    ){
        # 203 "libneo-c-str-gc.c"
        len2_54=strlen(search_str);
        # 204 "libneo-c-str-gc.c"
        # 211 "libneo-c-str-gc.c"
        for(        j_55=0;        j_55<len2_54;        j_55++        ){
            # 209 "libneo-c-str-gc.c"
            # 206 "libneo-c-str-gc.c"
            if(_if_conditional32=str[i_53+j_55]!=search_str[j_55],            _if_conditional32) {
                # 207 "libneo-c-str-gc.c"
                break;
            }
        }
        # 218 "libneo-c-str-gc.c"
        # 211 "libneo-c-str-gc.c"
        if(_if_conditional33=j_55==len2_54,        _if_conditional33) {
            # 212 "libneo-c-str-gc.c"
            n_51++;
            # 217 "libneo-c-str-gc.c"
            # 214 "libneo-c-str-gc.c"
            if(_if_conditional34=n_51==count,            _if_conditional34) {
                # 215 "libneo-c-str-gc.c"
                __result109__ = i_53;
                return __result109__;
            }
        }
    }
    # 220 "libneo-c-str-gc.c"
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
int len_69;
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
    # 225 "libneo-c-str-gc.c"
    ovec_max_56=16;
    # 226 "libneo-c-str-gc.c"
    int start_57[ovec_max_56];
    memset(&start_57, 0, sizeof(int)    *(ovec_max_56)    );
    # 227 "libneo-c-str-gc.c"
    int end_58[ovec_max_56];
    memset(&end_58, 0, sizeof(int)    *(ovec_max_56)    );
    # 228 "libneo-c-str-gc.c"
    int ovec_value_59[ovec_max_56*3];
    memset(&ovec_value_59, 0, sizeof(int)    *(ovec_max_56*3)    );
    # 230 "libneo-c-str-gc.c"
    result_60=default_value;
    # 232 "libneo-c-str-gc.c"
    offset_61=0;
    # 234 "libneo-c-str-gc.c"
    # 235 "libneo-c-str-gc.c"
    # 237 "libneo-c-str-gc.c"
    options_64=reg->options;
    # 238 "libneo-c-str-gc.c"
    str_65=reg->str;
    # 240 "libneo-c-str-gc.c"
    re_66=reg->re;
    # 242 "libneo-c-str-gc.c"
    n_67=0;
    # 278 "libneo-c-str-gc.c"
    while(_while_condtional1=(_Bool)1,    _while_condtional1) {
        # 245 "libneo-c-str-gc.c"
        options_68=2097152;
        # 246 "libneo-c-str-gc.c"
        len_69=strlen(self);
        # 247 "libneo-c-str-gc.c"
        regex_result_70=pcre_exec(re_66,(struct pcre_extra*)0,self,len_69,offset_61,options_68,ovec_value_59,ovec_max_56*3);
        # 252 "libneo-c-str-gc.c"
        for(        i_71=0;        i_71<ovec_max_56;        i_71++        ){
            # 250 "libneo-c-str-gc.c"
            start_57[i_71]=ovec_value_59[i_71*2];
        }
        # 257 "libneo-c-str-gc.c"
        for(        i_72=0;        i_72<ovec_max_56;        i_72++        ){
            # 253 "libneo-c-str-gc.c"
            end_58[i_72]=ovec_value_59[i_72*2+1];
        }
        # 276 "libneo-c-str-gc.c"
        # 257 "libneo-c-str-gc.c"
        if(_if_conditional35=regex_result_70>0,        _if_conditional35) {
            # 258 "libneo-c-str-gc.c"
            n_67++;
            # 267 "libneo-c-str-gc.c"
            # 260 "libneo-c-str-gc.c"
            if(_if_conditional36=offset_61==end_58[0],            _if_conditional36) {
                # 261 "libneo-c-str-gc.c"
                offset_61++;
            }
            else {
                # 264 "libneo-c-str-gc.c"
                offset_61=end_58[0];
            }
            # 271 "libneo-c-str-gc.c"
            # 267 "libneo-c-str-gc.c"
            if(_if_conditional37=n_67==count,            _if_conditional37) {
                # 268 "libneo-c-str-gc.c"
                result_60=start_57[0];
                # 269 "libneo-c-str-gc.c"
                break;
            }
        }
        else {
            # 274 "libneo-c-str-gc.c"
            break;
        }
    }
    # 278 "libneo-c-str-gc.c"
    __result111__ = result_60;
    return __result111__;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int len_73;
char* p_74;
_Bool _while_condtional2;
_Bool _if_conditional38;
int __result112__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_73, 0, sizeof(int));
memset(&p_74, 0, sizeof(char*));
    # 283 "libneo-c-str-gc.c"
    # 285 "libneo-c-str-gc.c"
    len_73=strlen(search_str);
    # 286 "libneo-c-str-gc.c"
    p_74=str+strlen(str)-len_73;
    # 296 "libneo-c-str-gc.c"
    while(_while_condtional2=p_74>=str,    _while_condtional2) {
        # 293 "libneo-c-str-gc.c"
        # 289 "libneo-c-str-gc.c"
        if(_if_conditional38=strncmp(p_74,search_str,len_73)==0,        _if_conditional38) {
            # 290 "libneo-c-str-gc.c"
            __result112__ = p_74-str;
            return __result112__;
        }
        # 293 "libneo-c-str-gc.c"
        p_74--;
    }
    # 296 "libneo-c-str-gc.c"
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
char* self2_80;
int ovec_max_81;
int result_85;
int offset_86;
_Bool _while_condtional3;
int options_87;
int len_88;
int regex_result_89;
int i_90;
int i_91;
_Bool _if_conditional39;
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
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
    # 301 "libneo-c-str-gc.c"
    # 302 "libneo-c-str-gc.c"
    # 304 "libneo-c-str-gc.c"
    options_77=reg->options;
    # 305 "libneo-c-str-gc.c"
    str_78=reg->str;
    # 307 "libneo-c-str-gc.c"
    re_79=reg->re;
    # 309 "libneo-c-str-gc.c"
    self2_80=charp_reverse(self);
    # 311 "libneo-c-str-gc.c"
    ovec_max_81=16;
    # 312 "libneo-c-str-gc.c"
    int start_82[ovec_max_81];
    memset(&start_82, 0, sizeof(int)    *(ovec_max_81)    );
    # 313 "libneo-c-str-gc.c"
    int end_83[ovec_max_81];
    memset(&end_83, 0, sizeof(int)    *(ovec_max_81)    );
    # 314 "libneo-c-str-gc.c"
    int ovec_value_84[ovec_max_81*3];
    memset(&ovec_value_84, 0, sizeof(int)    *(ovec_max_81*3)    );
    # 316 "libneo-c-str-gc.c"
    result_85=default_value;
    # 318 "libneo-c-str-gc.c"
    offset_86=0;
    # 344 "libneo-c-str-gc.c"
    while(_while_condtional3=(_Bool)1,    _while_condtional3) {
        # 321 "libneo-c-str-gc.c"
        options_87=2097152;
        # 322 "libneo-c-str-gc.c"
        len_88=strlen(self2_80);
        # 323 "libneo-c-str-gc.c"
        regex_result_89=pcre_exec(re_79,(struct pcre_extra*)0,self2_80,len_88,offset_86,options_87,ovec_value_84,ovec_max_81*3);
        # 328 "libneo-c-str-gc.c"
        for(        i_90=0;        i_90<ovec_max_81;        i_90++        ){
            # 326 "libneo-c-str-gc.c"
            start_82[i_90]=ovec_value_84[i_90*2];
        }
        # 333 "libneo-c-str-gc.c"
        for(        i_91=0;        i_91<ovec_max_81;        i_91++        ){
            # 329 "libneo-c-str-gc.c"
            end_83[i_91]=ovec_value_84[i_91*2+1];
        }
        # 339 "libneo-c-str-gc.c"
        # 333 "libneo-c-str-gc.c"
        if(_if_conditional39=regex_result_89==1||regex_result_89>0,        _if_conditional39) {
            # 335 "libneo-c-str-gc.c"
            result_85=strlen(self)-1-start_82[0];
            # 336 "libneo-c-str-gc.c"
            break;
        }
        # 342 "libneo-c-str-gc.c"
        {
            # 340 "libneo-c-str-gc.c"
            break;
        }
    }
    # 344 "libneo-c-str-gc.c"
    __result114__ = result_85;
    return __result114__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int len_92;
char* p_93;
int n_94;
_Bool _while_condtional4;
_Bool _if_conditional40;
_Bool _if_conditional41;
int __result115__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_92, 0, sizeof(int));
memset(&p_93, 0, sizeof(char*));
memset(&n_94, 0, sizeof(int));
    # 349 "libneo-c-str-gc.c"
    # 351 "libneo-c-str-gc.c"
    len_92=strlen(search_str);
    # 352 "libneo-c-str-gc.c"
    p_93=str+strlen(str)-len_92;
    # 354 "libneo-c-str-gc.c"
    n_94=0;
    # 367 "libneo-c-str-gc.c"
    while(_while_condtional4=p_93>=str,    _while_condtional4) {
        # 364 "libneo-c-str-gc.c"
        # 357 "libneo-c-str-gc.c"
        if(_if_conditional40=strncmp(p_93,search_str,len_92)==0,        _if_conditional40) {
            # 358 "libneo-c-str-gc.c"
            n_94++;
            # 362 "libneo-c-str-gc.c"
            # 359 "libneo-c-str-gc.c"
            if(_if_conditional41=n_94==count,            _if_conditional41) {
                # 360 "libneo-c-str-gc.c"
                __result115__ = p_93-str;
                return __result115__;
            }
        }
        # 364 "libneo-c-str-gc.c"
        p_93--;
    }
    # 367 "libneo-c-str-gc.c"
    __result116__ = default_value;
    return __result116__;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
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
int len_107;
int regex_result_108;
int i_109;
int i_110;
_Bool _if_conditional42;
char* str_111;
struct list$1charph* group_strings_112;
char* str2_113;
_Bool _if_conditional45;
_Bool _if_conditional46;
char* str_117;
struct list$1charph* group_strings_118;
int i_119;
char* match_string_120;
char* str2_121;
_Bool _if_conditional47;
struct list$1charph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_95, 0, sizeof(struct list$1charph*));
memset(&offset_96, 0, sizeof(int));
memset(&ovec_max_97, 0, sizeof(int));
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
    # 372 "libneo-c-str-gc.c"
    result_95=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 372, "list$1charph"));
    # 374 "libneo-c-str-gc.c"
    offset_96=0;
    # 376 "libneo-c-str-gc.c"
    ovec_max_97=16;
    # 377 "libneo-c-str-gc.c"
    int start_98[ovec_max_97];
    memset(&start_98, 0, sizeof(int)    *(ovec_max_97)    );
    # 378 "libneo-c-str-gc.c"
    int end_99[ovec_max_97];
    memset(&end_99, 0, sizeof(int)    *(ovec_max_97)    );
    # 379 "libneo-c-str-gc.c"
    int ovec_value_100[ovec_max_97*3];
    memset(&ovec_value_100, 0, sizeof(int)    *(ovec_max_97*3)    );
    # 381 "libneo-c-str-gc.c"
    # 382 "libneo-c-str-gc.c"
    # 384 "libneo-c-str-gc.c"
    options_103=reg->options;
    # 385 "libneo-c-str-gc.c"
    str_104=reg->str;
    # 387 "libneo-c-str-gc.c"
    re_105=reg->re;
    # 447 "libneo-c-str-gc.c"
    while(_while_condtional5=(_Bool)1,    _while_condtional5) {
        # 390 "libneo-c-str-gc.c"
        options_106=2097152;
        # 391 "libneo-c-str-gc.c"
        len_107=strlen(self);
        # 392 "libneo-c-str-gc.c"
        regex_result_108=pcre_exec(re_105,(struct pcre_extra*)0,self,len_107,offset_96,options_106,ovec_value_100,ovec_max_97*3);
        # 397 "libneo-c-str-gc.c"
        for(        i_109=0;        i_109<ovec_max_97;        i_109++        ){
            # 395 "libneo-c-str-gc.c"
            start_98[i_109]=ovec_value_100[i_109*2];
        }
        # 402 "libneo-c-str-gc.c"
        for(        i_110=0;        i_110<ovec_max_97;        i_110++        ){
            # 398 "libneo-c-str-gc.c"
            end_99[i_110]=ovec_value_100[i_110*2+1];
        }
        # 445 "libneo-c-str-gc.c"
        # 402 "libneo-c-str-gc.c"
        if(_if_conditional42=regex_result_108==1,        _if_conditional42) {
            # 404 "libneo-c-str-gc.c"
            str_111=charp_substring(self,start_98[0],end_99[0]);
            # 406 "libneo-c-str-gc.c"
            group_strings_112=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 406, "list$1charph"));
            # 408 "libneo-c-str-gc.c"
            str2_113=block(parent,str_111,group_strings_112);
            # 410 "libneo-c-str-gc.c"
            list$1charph_push_back(result_95,str2_113);
            # 418 "libneo-c-str-gc.c"
            # 412 "libneo-c-str-gc.c"
            if(_if_conditional45=offset_96==end_99[0],            _if_conditional45) {
                # 413 "libneo-c-str-gc.c"
                offset_96++;
            }
            else {
                # 416 "libneo-c-str-gc.c"
                offset_96=end_99[0];
            }
        }
        else {
            # 445 "libneo-c-str-gc.c"
            # 420 "libneo-c-str-gc.c"
            if(_if_conditional46=regex_result_108>1,            _if_conditional46) {
                # 421 "libneo-c-str-gc.c"
                str_117=charp_substring(self,start_98[0],end_99[0]);
                # 423 "libneo-c-str-gc.c"
                group_strings_118=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 423, "list$1charph"));
                # 429 "libneo-c-str-gc.c"
                for(                i_119=1;                i_119<regex_result_108;                i_119++                ){
                    # 425 "libneo-c-str-gc.c"
                    match_string_120=charp_substring(self,start_98[i_119],end_99[i_119]);
                    # 426 "libneo-c-str-gc.c"
                    list$1charph_push_back(group_strings_118,match_string_120);
                }
                # 429 "libneo-c-str-gc.c"
                str2_121=block(parent,str_117,group_strings_118);
                # 431 "libneo-c-str-gc.c"
                list$1charph_push_back(result_95,str2_121);
                # 439 "libneo-c-str-gc.c"
                # 433 "libneo-c-str-gc.c"
                if(_if_conditional47=offset_96==end_99[0],                _if_conditional47) {
                    # 434 "libneo-c-str-gc.c"
                    offset_96++;
                }
                else {
                    # 437 "libneo-c-str-gc.c"
                    offset_96=end_99[0];
                }
            }
            else {
                # 443 "libneo-c-str-gc.c"
                break;
            }
        }
    }
    # 447 "libneo-c-str-gc.c"
    __result119__ = __result_obj__ = result_95;
    return __result119__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
        # 95 "./neo-c.h"
        self->head=((void*)0);
        # 96 "./neo-c.h"
        self->tail=((void*)0);
        # 97 "./neo-c.h"
        self->len=0;
        # 99 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional43=self->len==0,                _if_conditional43) {
                    # 217 "./neo-c.h"
                    litem_114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph");
                    # 219 "./neo-c.h"
                    litem_114->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_114->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_114->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_114;
                    # 224 "./neo-c.h"
                    self->head=litem_114;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional44=self->len==1,                    _if_conditional44) {
                        # 227 "./neo-c.h"
                        litem_115=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph");
                        # 229 "./neo-c.h"
                        litem_115->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_115->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_115->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_115;
                        # 234 "./neo-c.h"
                        self->head->next=litem_115;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_116=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph");
                        # 239 "./neo-c.h"
                        litem_116->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_116->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_116->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_116;
                        # 244 "./neo-c.h"
                        self->tail=litem_116;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result118__ = __result_obj__ = self;
                return __result118__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
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
int len_135;
int regex_result_136;
int i_137;
int i_138;
_Bool _if_conditional48;
char* str_139;
struct list$1charph* group_strings_140;
char* str2_141;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
char* str_142;
struct list$1charph* group_strings_143;
int i_144;
char* match_string_145;
char* str2_146;
_Bool _if_conditional52;
_Bool _if_conditional53;
struct list$1charph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_122, 0, sizeof(struct list$1charph*));
memset(&offset_123, 0, sizeof(int));
memset(&ovec_max_124, 0, sizeof(int));
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
    # 453 "libneo-c-str-gc.c"
    result_122=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 453, "list$1charph"));
    # 455 "libneo-c-str-gc.c"
    offset_123=0;
    # 457 "libneo-c-str-gc.c"
    ovec_max_124=16;
    # 458 "libneo-c-str-gc.c"
    int start_125[ovec_max_124];
    memset(&start_125, 0, sizeof(int)    *(ovec_max_124)    );
    # 459 "libneo-c-str-gc.c"
    int end_126[ovec_max_124];
    memset(&end_126, 0, sizeof(int)    *(ovec_max_124)    );
    # 460 "libneo-c-str-gc.c"
    int ovec_value_127[ovec_max_124*3];
    memset(&ovec_value_127, 0, sizeof(int)    *(ovec_max_124*3)    );
    # 462 "libneo-c-str-gc.c"
    # 463 "libneo-c-str-gc.c"
    # 465 "libneo-c-str-gc.c"
    options_130=reg->options;
    # 466 "libneo-c-str-gc.c"
    str_131=reg->str;
    # 468 "libneo-c-str-gc.c"
    re_132=reg->re;
    # 470 "libneo-c-str-gc.c"
    n_133=0;
    # 540 "libneo-c-str-gc.c"
    while(_while_condtional6=(_Bool)1,    _while_condtional6) {
        # 473 "libneo-c-str-gc.c"
        options_134=2097152;
        # 474 "libneo-c-str-gc.c"
        len_135=strlen(self);
        # 475 "libneo-c-str-gc.c"
        regex_result_136=pcre_exec(re_132,(struct pcre_extra*)0,self,len_135,offset_123,options_134,ovec_value_127,ovec_max_124*3);
        # 480 "libneo-c-str-gc.c"
        for(        i_137=0;        i_137<ovec_max_124;        i_137++        ){
            # 478 "libneo-c-str-gc.c"
            start_125[i_137]=ovec_value_127[i_137*2];
        }
        # 485 "libneo-c-str-gc.c"
        for(        i_138=0;        i_138<ovec_max_124;        i_138++        ){
            # 481 "libneo-c-str-gc.c"
            end_126[i_138]=ovec_value_127[i_138*2+1];
        }
        # 538 "libneo-c-str-gc.c"
        # 485 "libneo-c-str-gc.c"
        if(_if_conditional48=regex_result_136==1,        _if_conditional48) {
            # 487 "libneo-c-str-gc.c"
            str_139=charp_substring(self,start_125[0],end_126[0]);
            # 489 "libneo-c-str-gc.c"
            group_strings_140=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 489, "list$1charph"));
            # 491 "libneo-c-str-gc.c"
            str2_141=block(parent,str_139,group_strings_140);
            # 493 "libneo-c-str-gc.c"
            list$1charph_push_back(result_122,str2_141);
            # 502 "libneo-c-str-gc.c"
            # 495 "libneo-c-str-gc.c"
            if(_if_conditional49=offset_123==end_126[0],            _if_conditional49) {
                # 496 "libneo-c-str-gc.c"
                offset_123++;
            }
            else {
                # 499 "libneo-c-str-gc.c"
                offset_123=end_126[0];
            }
            # 502 "libneo-c-str-gc.c"
            n_133++;
            # 506 "libneo-c-str-gc.c"
            # 503 "libneo-c-str-gc.c"
            if(_if_conditional50=n_133==count,            _if_conditional50) {
                # 504 "libneo-c-str-gc.c"
                break;
            }
        }
        else {
            # 538 "libneo-c-str-gc.c"
            # 508 "libneo-c-str-gc.c"
            if(_if_conditional51=regex_result_136>1,            _if_conditional51) {
                # 509 "libneo-c-str-gc.c"
                str_142=charp_substring(self,start_125[0],end_126[0]);
                # 511 "libneo-c-str-gc.c"
                group_strings_143=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 511, "list$1charph"));
                # 517 "libneo-c-str-gc.c"
                for(                i_144=1;                i_144<regex_result_136;                i_144++                ){
                    # 513 "libneo-c-str-gc.c"
                    match_string_145=charp_substring(self,start_125[i_144],end_126[i_144]);
                    # 514 "libneo-c-str-gc.c"
                    list$1charph_push_back(group_strings_143,match_string_145);
                }
                # 517 "libneo-c-str-gc.c"
                str2_146=block(parent,str_142,group_strings_143);
                # 519 "libneo-c-str-gc.c"
                list$1charph_push_back(result_122,str2_146);
                # 528 "libneo-c-str-gc.c"
                # 521 "libneo-c-str-gc.c"
                if(_if_conditional52=offset_123==end_126[0],                _if_conditional52) {
                    # 522 "libneo-c-str-gc.c"
                    offset_123++;
                }
                else {
                    # 525 "libneo-c-str-gc.c"
                    offset_123=end_126[0];
                }
                # 528 "libneo-c-str-gc.c"
                n_133++;
                # 532 "libneo-c-str-gc.c"
                # 529 "libneo-c-str-gc.c"
                if(_if_conditional53=n_133==count,                _if_conditional53) {
                    # 530 "libneo-c-str-gc.c"
                    break;
                }
            }
            else {
                # 536 "libneo-c-str-gc.c"
                break;
            }
        }
    }
    # 540 "libneo-c-str-gc.c"
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
struct list$1charph* result_152;
int offset_153;
int ovec_max_154;
_Bool _while_condtional7;
int options_158;
int len_159;
int regex_result_160;
int i_161;
int i_162;
_Bool _if_conditional54;
char* str_163;
struct list$1charph* match_strings_164;
char* str2_165;
_Bool _if_conditional55;
_Bool _if_conditional56;
char* str_166;
_Bool _if_conditional57;
struct list$1charph* match_strings_167;
int i_168;
char* match_str_169;
char* str2_170;
_Bool _if_conditional58;
char* str_171;
struct list$1charph* match_strings_172;
char* str2_173;
struct list$1charph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
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
    # 545 "libneo-c-str-gc.c"
    # 546 "libneo-c-str-gc.c"
    # 548 "libneo-c-str-gc.c"
    options_149=reg->options;
    # 549 "libneo-c-str-gc.c"
    str_150=reg->str;
    # 551 "libneo-c-str-gc.c"
    re_151=reg->re;
    # 553 "libneo-c-str-gc.c"
    result_152=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 553, "list$1charph"));
    # 555 "libneo-c-str-gc.c"
    offset_153=0;
    # 557 "libneo-c-str-gc.c"
    ovec_max_154=16;
    # 558 "libneo-c-str-gc.c"
    int start_155[ovec_max_154];
    memset(&start_155, 0, sizeof(int)    *(ovec_max_154)    );
    # 559 "libneo-c-str-gc.c"
    int end_156[ovec_max_154];
    memset(&end_156, 0, sizeof(int)    *(ovec_max_154)    );
    # 560 "libneo-c-str-gc.c"
    int ovec_value_157[ovec_max_154*3];
    memset(&ovec_value_157, 0, sizeof(int)    *(ovec_max_154*3)    );
    # 619 "libneo-c-str-gc.c"
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        # 563 "libneo-c-str-gc.c"
        options_158=2097152;
        # 564 "libneo-c-str-gc.c"
        len_159=strlen(self);
        # 566 "libneo-c-str-gc.c"
        regex_result_160=pcre_exec(re_151,(struct pcre_extra*)0,self,len_159,offset_153,options_158,ovec_value_157,ovec_max_154*3);
        # 571 "libneo-c-str-gc.c"
        for(        i_161=0;        i_161<ovec_max_154;        i_161++        ){
            # 569 "libneo-c-str-gc.c"
            start_155[i_161]=ovec_value_157[i_161*2];
        }
        # 576 "libneo-c-str-gc.c"
        for(        i_162=0;        i_162<ovec_max_154;        i_162++        ){
            # 572 "libneo-c-str-gc.c"
            end_156[i_162]=ovec_value_157[i_162*2+1];
        }
        # 617 "libneo-c-str-gc.c"
        # 576 "libneo-c-str-gc.c"
        if(_if_conditional54=regex_result_160==1,        _if_conditional54) {
            # 578 "libneo-c-str-gc.c"
            str_163=charp_substring(self,offset_153,start_155[0]);
            # 580 "libneo-c-str-gc.c"
            match_strings_164=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 580, "list$1charph"));
            # 581 "libneo-c-str-gc.c"
            str2_165=block(parent,str_163,match_strings_164);
            # 583 "libneo-c-str-gc.c"
            list$1charph_push_back(result_152,str2_165);
            # 591 "libneo-c-str-gc.c"
            # 585 "libneo-c-str-gc.c"
            if(_if_conditional55=offset_153==end_156[0],            _if_conditional55) {
                # 586 "libneo-c-str-gc.c"
                offset_153++;
            }
            else {
                # 589 "libneo-c-str-gc.c"
                offset_153=end_156[0];
            }
        }
        else {
            # 617 "libneo-c-str-gc.c"
            # 593 "libneo-c-str-gc.c"
            if(_if_conditional56=regex_result_160>1,            _if_conditional56) {
                # 594 "libneo-c-str-gc.c"
                str_166=charp_substring(self,offset_153,start_155[0]);
                # 603 "libneo-c-str-gc.c"
                # 596 "libneo-c-str-gc.c"
                if(_if_conditional57=offset_153==end_156[0],                _if_conditional57) {
                    # 597 "libneo-c-str-gc.c"
                    offset_153++;
                }
                else {
                    # 600 "libneo-c-str-gc.c"
                    offset_153=end_156[0];
                }
                # 603 "libneo-c-str-gc.c"
                match_strings_167=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 603, "list$1charph"));
                # 609 "libneo-c-str-gc.c"
                for(                i_168=1;                i_168<regex_result_160;                i_168++                ){
                    # 605 "libneo-c-str-gc.c"
                    match_str_169=charp_substring(self,start_155[i_168],end_156[i_168]);
                    # 606 "libneo-c-str-gc.c"
                    list$1charph_push_back(match_strings_167,match_str_169);
                }
                # 609 "libneo-c-str-gc.c"
                str2_170=block(parent,str_166,match_strings_167);
                # 610 "libneo-c-str-gc.c"
                list$1charph_push_back(result_152,str2_170);
            }
            else {
                # 615 "libneo-c-str-gc.c"
                break;
            }
        }
    }
    # 627 "libneo-c-str-gc.c"
    # 619 "libneo-c-str-gc.c"
    if(_if_conditional58=offset_153<charp_length(self),    _if_conditional58) {
        # 620 "libneo-c-str-gc.c"
        str_171=charp_substring(self,offset_153,-1);
        # 621 "libneo-c-str-gc.c"
        match_strings_172=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 621, "list$1charph"));
        # 622 "libneo-c-str-gc.c"
        str2_173=block(parent,str_171,match_strings_172);
        # 624 "libneo-c-str-gc.c"
        list$1charph_push_back(result_152,str2_173);
    }
    # 627 "libneo-c-str-gc.c"
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
struct list$1charph* result_179;
int offset_180;
int ovec_max_181;
int n_185;
_Bool _while_condtional8;
int options_186;
int len_187;
int regex_result_188;
int i_189;
int i_190;
_Bool _if_conditional59;
char* str_191;
struct list$1charph* match_strings_192;
char* str2_193;
_Bool _if_conditional60;
_Bool _if_conditional61;
char* str_194;
_Bool _if_conditional62;
struct list$1charph* match_strings_195;
int i_196;
char* match_str_197;
char* str2_198;
_Bool _if_conditional63;
struct list$1charph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
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
    # 632 "libneo-c-str-gc.c"
    # 633 "libneo-c-str-gc.c"
    # 635 "libneo-c-str-gc.c"
    options_176=reg->options;
    # 636 "libneo-c-str-gc.c"
    str_177=reg->str;
    # 638 "libneo-c-str-gc.c"
    re_178=reg->re;
    # 640 "libneo-c-str-gc.c"
    result_179=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 640, "list$1charph"));
    # 642 "libneo-c-str-gc.c"
    offset_180=0;
    # 644 "libneo-c-str-gc.c"
    ovec_max_181=16;
    # 645 "libneo-c-str-gc.c"
    int start_182[ovec_max_181];
    memset(&start_182, 0, sizeof(int)    *(ovec_max_181)    );
    # 646 "libneo-c-str-gc.c"
    int end_183[ovec_max_181];
    memset(&end_183, 0, sizeof(int)    *(ovec_max_181)    );
    # 647 "libneo-c-str-gc.c"
    int ovec_value_184[ovec_max_181*3];
    memset(&ovec_value_184, 0, sizeof(int)    *(ovec_max_181*3)    );
    # 649 "libneo-c-str-gc.c"
    n_185=0;
    # 714 "libneo-c-str-gc.c"
    while(_while_condtional8=(_Bool)1,    _while_condtional8) {
        # 652 "libneo-c-str-gc.c"
        options_186=2097152;
        # 653 "libneo-c-str-gc.c"
        len_187=strlen(self);
        # 655 "libneo-c-str-gc.c"
        regex_result_188=pcre_exec(re_178,(struct pcre_extra*)0,self,len_187,offset_180,options_186,ovec_value_184,ovec_max_181*3);
        # 660 "libneo-c-str-gc.c"
        for(        i_189=0;        i_189<ovec_max_181;        i_189++        ){
            # 658 "libneo-c-str-gc.c"
            start_182[i_189]=ovec_value_184[i_189*2];
        }
        # 665 "libneo-c-str-gc.c"
        for(        i_190=0;        i_190<ovec_max_181;        i_190++        ){
            # 661 "libneo-c-str-gc.c"
            end_183[i_190]=ovec_value_184[i_190*2+1];
        }
        # 708 "libneo-c-str-gc.c"
        # 665 "libneo-c-str-gc.c"
        if(_if_conditional59=regex_result_188==1,        _if_conditional59) {
            # 667 "libneo-c-str-gc.c"
            str_191=charp_substring(self,offset_180,start_182[0]);
            # 669 "libneo-c-str-gc.c"
            match_strings_192=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 669, "list$1charph"));
            # 670 "libneo-c-str-gc.c"
            str2_193=block(parent,str_191,match_strings_192);
            # 672 "libneo-c-str-gc.c"
            list$1charph_push_back(result_179,str2_193);
            # 680 "libneo-c-str-gc.c"
            # 674 "libneo-c-str-gc.c"
            if(_if_conditional60=offset_180==end_183[0],            _if_conditional60) {
                # 675 "libneo-c-str-gc.c"
                offset_180++;
            }
            else {
                # 678 "libneo-c-str-gc.c"
                offset_180=end_183[0];
            }
        }
        else {
            # 708 "libneo-c-str-gc.c"
            # 682 "libneo-c-str-gc.c"
            if(_if_conditional61=regex_result_188>1,            _if_conditional61) {
                # 683 "libneo-c-str-gc.c"
                str_194=charp_substring(self,offset_180,start_182[0]);
                # 692 "libneo-c-str-gc.c"
                # 685 "libneo-c-str-gc.c"
                if(_if_conditional62=offset_180==end_183[0],                _if_conditional62) {
                    # 686 "libneo-c-str-gc.c"
                    offset_180++;
                }
                else {
                    # 689 "libneo-c-str-gc.c"
                    offset_180=end_183[0];
                }
                # 692 "libneo-c-str-gc.c"
                match_strings_195=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 692, "list$1charph"));
                # 698 "libneo-c-str-gc.c"
                for(                i_196=1;                i_196<regex_result_188;                i_196++                ){
                    # 694 "libneo-c-str-gc.c"
                    match_str_197=charp_substring(self,start_182[i_196],end_183[i_196]);
                    # 695 "libneo-c-str-gc.c"
                    list$1charph_push_back(match_strings_195,match_str_197);
                }
                # 698 "libneo-c-str-gc.c"
                str2_198=block(parent,str_194,match_strings_195);
                # 700 "libneo-c-str-gc.c"
                list$1charph_push_back(result_179,str2_198);
            }
            else {
                # 705 "libneo-c-str-gc.c"
                break;
            }
        }
        # 708 "libneo-c-str-gc.c"
        n_185++;
        # 712 "libneo-c-str-gc.c"
        # 709 "libneo-c-str-gc.c"
        if(_if_conditional63=n_185==count,        _if_conditional63) {
            # 710 "libneo-c-str-gc.c"
            break;
        }
    }
    # 714 "libneo-c-str-gc.c"
    __result122__ = __result_obj__ = result_179;
    return __result122__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
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
    # 723 "libneo-c-str-gc.c"
    # 719 "libneo-c-str-gc.c"
    if(_if_conditional64=strcmp(left->str,right->str)!=0,    _if_conditional64) {
        # 720 "libneo-c-str-gc.c"
        __result123__ = (_Bool)0;
        return __result123__;
    }
    # 726 "libneo-c-str-gc.c"
    # 723 "libneo-c-str-gc.c"
    if(_if_conditional65=left->ignore_case!=right->ignore_case,    _if_conditional65) {
        # 724 "libneo-c-str-gc.c"
        __result124__ = (_Bool)0;
        return __result124__;
    }
    # 729 "libneo-c-str-gc.c"
    # 726 "libneo-c-str-gc.c"
    if(_if_conditional66=left->multiline!=right->multiline,    _if_conditional66) {
        # 727 "libneo-c-str-gc.c"
        __result125__ = (_Bool)0;
        return __result125__;
    }
    # 732 "libneo-c-str-gc.c"
    # 729 "libneo-c-str-gc.c"
    if(_if_conditional67=left->global!=right->global,    _if_conditional67) {
        # 730 "libneo-c-str-gc.c"
        __result126__ = (_Bool)0;
        return __result126__;
    }
    # 735 "libneo-c-str-gc.c"
    # 732 "libneo-c-str-gc.c"
    if(_if_conditional68=left->extended!=right->extended,    _if_conditional68) {
        # 733 "libneo-c-str-gc.c"
        __result127__ = (_Bool)0;
        return __result127__;
    }
    # 738 "libneo-c-str-gc.c"
    # 735 "libneo-c-str-gc.c"
    if(_if_conditional69=left->dotall!=right->dotall,    _if_conditional69) {
        # 736 "libneo-c-str-gc.c"
        __result128__ = (_Bool)0;
        return __result128__;
    }
    # 741 "libneo-c-str-gc.c"
    # 738 "libneo-c-str-gc.c"
    if(_if_conditional70=left->anchored!=right->anchored,    _if_conditional70) {
        # 739 "libneo-c-str-gc.c"
        __result129__ = (_Bool)0;
        return __result129__;
    }
    # 744 "libneo-c-str-gc.c"
    # 741 "libneo-c-str-gc.c"
    if(_if_conditional71=left->dollar_endonly!=right->dollar_endonly,    _if_conditional71) {
        # 742 "libneo-c-str-gc.c"
        __result130__ = (_Bool)0;
        return __result130__;
    }
    # 747 "libneo-c-str-gc.c"
    # 744 "libneo-c-str-gc.c"
    if(_if_conditional72=left->ungreedy!=right->ungreedy,    _if_conditional72) {
        # 745 "libneo-c-str-gc.c"
        __result131__ = (_Bool)0;
        return __result131__;
    }
    # 751 "libneo-c-str-gc.c"
    # 747 "libneo-c-str-gc.c"
    if(_if_conditional73=left->options!=right->options,    _if_conditional73) {
        # 748 "libneo-c-str-gc.c"
        __result132__ = (_Bool)0;
        return __result132__;
    }
    # 751 "libneo-c-str-gc.c"
    __result133__ = (_Bool)1;
    return __result133__;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
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
int len_211;
int regex_result_212;
int i_213;
int i_214;
_Bool _if_conditional74;
char* str_215;
_Bool _if_conditional75;
_Bool _if_conditional76;
char* str_216;
_Bool _if_conditional77;
int i_217;
char* match_string_218;
struct list$1charph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_199, 0, sizeof(struct list$1charph*));
memset(&offset_200, 0, sizeof(int));
memset(&ovec_max_201, 0, sizeof(int));
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
    # 756 "libneo-c-str-gc.c"
    result_199=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 756, "list$1charph"));
    # 758 "libneo-c-str-gc.c"
    offset_200=0;
    # 760 "libneo-c-str-gc.c"
    ovec_max_201=16;
    # 761 "libneo-c-str-gc.c"
    int start_202[ovec_max_201];
    memset(&start_202, 0, sizeof(int)    *(ovec_max_201)    );
    # 762 "libneo-c-str-gc.c"
    int end_203[ovec_max_201];
    memset(&end_203, 0, sizeof(int)    *(ovec_max_201)    );
    # 763 "libneo-c-str-gc.c"
    int ovec_value_204[ovec_max_201*3];
    memset(&ovec_value_204, 0, sizeof(int)    *(ovec_max_201*3)    );
    # 765 "libneo-c-str-gc.c"
    # 766 "libneo-c-str-gc.c"
    # 768 "libneo-c-str-gc.c"
    options_207=reg->options;
    # 769 "libneo-c-str-gc.c"
    str_208=reg->str;
    # 771 "libneo-c-str-gc.c"
    re_209=reg->re;
    # 825 "libneo-c-str-gc.c"
    while(_while_condtional9=(_Bool)1,    _while_condtional9) {
        # 776 "libneo-c-str-gc.c"
        options_210=2097152;
        # 777 "libneo-c-str-gc.c"
        len_211=strlen(self);
        # 778 "libneo-c-str-gc.c"
        regex_result_212=pcre_exec(re_209,(struct pcre_extra*)0,self,len_211,offset_200,options_210,ovec_value_204,ovec_max_201*3);
        # 783 "libneo-c-str-gc.c"
        for(        i_213=0;        i_213<ovec_max_201;        i_213++        ){
            # 781 "libneo-c-str-gc.c"
            start_202[i_213]=ovec_value_204[i_213*2];
        }
        # 788 "libneo-c-str-gc.c"
        for(        i_214=0;        i_214<ovec_max_201;        i_214++        ){
            # 784 "libneo-c-str-gc.c"
            end_203[i_214]=ovec_value_204[i_214*2+1];
        }
        # 823 "libneo-c-str-gc.c"
        # 788 "libneo-c-str-gc.c"
        if(_if_conditional74=regex_result_212==1,        _if_conditional74) {
            # 790 "libneo-c-str-gc.c"
            str_215=charp_substring(self,start_202[0],end_203[0]);
            # 791 "libneo-c-str-gc.c"
            list$1charph_push_back(result_199,str_215);
            # 799 "libneo-c-str-gc.c"
            # 793 "libneo-c-str-gc.c"
            if(_if_conditional75=offset_200==end_203[0],            _if_conditional75) {
                # 794 "libneo-c-str-gc.c"
                offset_200++;
            }
            else {
                # 797 "libneo-c-str-gc.c"
                offset_200=end_203[0];
            }
        }
        else {
            # 823 "libneo-c-str-gc.c"
            # 801 "libneo-c-str-gc.c"
            if(_if_conditional76=regex_result_212>1,            _if_conditional76) {
                # 802 "libneo-c-str-gc.c"
                str_216=charp_substring(self,start_202[0],end_203[0]);
                # 803 "libneo-c-str-gc.c"
                list$1charph_push_back(result_199,str_216);
                # 812 "libneo-c-str-gc.c"
                # 805 "libneo-c-str-gc.c"
                if(_if_conditional77=offset_200==end_203[0],                _if_conditional77) {
                    # 806 "libneo-c-str-gc.c"
                    offset_200++;
                }
                else {
                    # 809 "libneo-c-str-gc.c"
                    offset_200=end_203[0];
                }
                # 812 "libneo-c-str-gc.c"
                *num_group_string_in_regex=regex_result_212-1;
                # 817 "libneo-c-str-gc.c"
                for(                i_217=1;                i_217<regex_result_212;                i_217++                ){
                    # 814 "libneo-c-str-gc.c"
                    match_string_218=charp_substring(self,start_202[i_217],end_203[i_217]);
                    # 815 "libneo-c-str-gc.c"
                    list$1charph_push_back(group_strings,match_string_218);
                }
            }
            else {
                # 821 "libneo-c-str-gc.c"
                break;
            }
        }
    }
    # 825 "libneo-c-str-gc.c"
    __result134__ = __result_obj__ = result_199;
    return __result134__;
}

char* charp_strip(char* self){
void* __result_obj__;
char* result_219;
int len_220;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_219, 0, sizeof(char*));
memset(&len_220, 0, sizeof(int));
    # 830 "libneo-c-str-gc.c"
    result_219=__builtin_string(self);
    # 832 "libneo-c-str-gc.c"
    len_220=strlen(self);
    # 844 "libneo-c-str-gc.c"
    # 834 "libneo-c-str-gc.c"
    if(_if_conditional78=self[len_220-1]==10,    _if_conditional78) {
        # 835 "libneo-c-str-gc.c"
        result_219[len_220-1]=0;
    }
    else {
        # 844 "libneo-c-str-gc.c"
        # 837 "libneo-c-str-gc.c"
        if(_if_conditional79=self[len_220-1]==13,        _if_conditional79) {
            # 838 "libneo-c-str-gc.c"
            result_219[len_220-1]=0;
        }
        else {
            # 844 "libneo-c-str-gc.c"
            # 840 "libneo-c-str-gc.c"
            if(_if_conditional80=len_220>2&&self[len_220-2]==13&&self[len_220-1]==10,            _if_conditional80) {
                # 841 "libneo-c-str-gc.c"
                result_219[len_220-2]=0;
            }
        }
    }
    # 844 "libneo-c-str-gc.c"
    __result135__ = __result_obj__ = result_219;
    return __result135__;
}

char* charp_printable(char* str){
void* __result_obj__;
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
    # 849 "libneo-c-str-gc.c"
    len_221=charp_length(str);
    # 850 "libneo-c-str-gc.c"
    result_222=(char*)come_calloc(1, sizeof(char)*(1*(len_221*2+1)), "libneo-c-str-gc.c", 850, "char");
    # 852 "libneo-c-str-gc.c"
    n_223=0;
    # 867 "libneo-c-str-gc.c"
    for(    i_224=0;    i_224<len_221;    i_224++    ){
        # 854 "libneo-c-str-gc.c"
        c_225=str[i_224];
        # 865 "libneo-c-str-gc.c"
        # 857 "libneo-c-str-gc.c"
        if(_if_conditional81=(c_225>=0&&c_225<32)||c_225==127,        _if_conditional81) {
            # 859 "libneo-c-str-gc.c"
            result_222[n_223++]=94;
            # 860 "libneo-c-str-gc.c"
            result_222[n_223++]=c_225+65-1;
        }
        else {
            # 863 "libneo-c-str-gc.c"
            result_222[n_223++]=c_225;
        }
    }
    # 869 "libneo-c-str-gc.c"
    result_222[n_223]=0;
    # 869 "libneo-c-str-gc.c"
    __result136__ = __result_obj__ = result_222;
    return __result136__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__;
int len_226;
char* result_227;
_Bool _if_conditional82;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_226, 0, sizeof(int));
memset(&result_227, 0, sizeof(char*));
    # 874 "libneo-c-str-gc.c"
    len_226=4*(wcslen(wstr)+1);
    # 876 "libneo-c-str-gc.c"
    result_227=(char*)come_calloc(1, sizeof(char)*(1*(len_226)), "libneo-c-str-gc.c", 876, "char");
    # 883 "libneo-c-str-gc.c"
    # 878 "libneo-c-str-gc.c"
    if(_if_conditional82=wcstombs(result_227,wstr,len_226)<0,    _if_conditional82) {
        # 880 "libneo-c-str-gc.c"
        strncpy(result_227,"",len_226);
    }
    # 883 "libneo-c-str-gc.c"
    __result137__ = __result_obj__ = result_227;
    return __result137__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__;
unsigned int* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    # 888 "libneo-c-str-gc.c"
    __result138__ = __result_obj__ = __builtin_wstring(str);
    return __result138__;
}

int wchar_tp_length(unsigned int* str){
void* __result_obj__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    # 893 "libneo-c-str-gc.c"
    __result139__ = wcslen(str);
    return __result139__;
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
int len_228;
_Bool _if_conditional83;
unsigned int* __result140__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
unsigned int* __result141__;
_Bool _if_conditional88;
unsigned int* sub_str_229;
unsigned int* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_228, 0, sizeof(int));
memset(&sub_str_229, 0, sizeof(unsigned int*));
    # 898 "libneo-c-str-gc.c"
    # 900 "libneo-c-str-gc.c"
    len_228=wcslen(str);
    # 906 "libneo-c-str-gc.c"
    # 902 "libneo-c-str-gc.c"
    if(_if_conditional83=len_228==0,    _if_conditional83) {
        # 903 "libneo-c-str-gc.c"
        __result140__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        return __result140__;
    }
    # 910 "libneo-c-str-gc.c"
    # 906 "libneo-c-str-gc.c"
    if(_if_conditional84=head<0,    _if_conditional84) {
        # 907 "libneo-c-str-gc.c"
        head+=len_228;
    }
    # 914 "libneo-c-str-gc.c"
    # 910 "libneo-c-str-gc.c"
    if(_if_conditional85=tail<0,    _if_conditional85) {
        # 911 "libneo-c-str-gc.c"
        tail+=len_228+1;
    }
    # 918 "libneo-c-str-gc.c"
    # 914 "libneo-c-str-gc.c"
    if(_if_conditional86=head<0,    _if_conditional86) {
        # 915 "libneo-c-str-gc.c"
        head=0;
    }
    # 922 "libneo-c-str-gc.c"
    # 918 "libneo-c-str-gc.c"
    if(_if_conditional87=tail<0,    _if_conditional87) {
        # 919 "libneo-c-str-gc.c"
        __result141__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        return __result141__;
    }
    # 926 "libneo-c-str-gc.c"
    # 922 "libneo-c-str-gc.c"
    if(_if_conditional88=tail>=len_228,    _if_conditional88) {
        # 923 "libneo-c-str-gc.c"
        tail=len_228;
    }
    # 926 "libneo-c-str-gc.c"
    sub_str_229=wchar_tp_substring(str,tail,-1);
    # 928 "libneo-c-str-gc.c"
    memcpy(str+head,sub_str_229,sizeof(unsigned int)*(wstring_length(sub_str_229)+1));
    # 930 "libneo-c-str-gc.c"
    __result142__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    return __result142__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
unsigned int* head_230;
_Bool _if_conditional89;
int __result143__;
int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_230, 0, sizeof(unsigned int*));
    # 935 "libneo-c-str-gc.c"
    # 937 "libneo-c-str-gc.c"
    head_230=wcsstr(str,search_str);
    # 943 "libneo-c-str-gc.c"
    # 939 "libneo-c-str-gc.c"
    if(_if_conditional89=head_230==((void*)0),    _if_conditional89) {
        # 940 "libneo-c-str-gc.c"
        __result143__ = default_value;
        return __result143__;
    }
    # 943 "libneo-c-str-gc.c"
    __result144__ = head_230-str;
    return __result144__;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int len_231;
unsigned int* p_232;
_Bool _while_condtional10;
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
    # 948 "libneo-c-str-gc.c"
    # 950 "libneo-c-str-gc.c"
    len_231=wcslen(search_str);
    # 952 "libneo-c-str-gc.c"
    p_232=str+wcslen(str)-len_231;
    # 970 "libneo-c-str-gc.c"
    while(_while_condtional10=p_232>=str,    _while_condtional10) {
        # 955 "libneo-c-str-gc.c"
        len2_233=wcslen(p_232);
        # 956 "libneo-c-str-gc.c"
        result_234=(_Bool)1;
        # 957 "libneo-c-str-gc.c"
        # 963 "libneo-c-str-gc.c"
        for(        i_235=0;        i_235<len_231&&i_235<len2_233;        i_235++        ){
            # 962 "libneo-c-str-gc.c"
            # 959 "libneo-c-str-gc.c"
            if(_if_conditional90=p_232[i_235]!=search_str[i_235],            _if_conditional90) {
                # 960 "libneo-c-str-gc.c"
                result_234=(_Bool)0;
            }
        }
        # 967 "libneo-c-str-gc.c"
        # 963 "libneo-c-str-gc.c"
        if(result_234) {
            # 964 "libneo-c-str-gc.c"
            __result145__ = (p_232-str);
            return __result145__;
        }
        # 967 "libneo-c-str-gc.c"
        p_232--;
    }
    # 970 "libneo-c-str-gc.c"
    __result146__ = default_value;
    return __result146__;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__;
int len_236;
unsigned int* result_237;
int i_238;
unsigned int* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_236, 0, sizeof(int));
memset(&result_237, 0, sizeof(unsigned int*));
memset(&i_238, 0, sizeof(int));
    # 975 "libneo-c-str-gc.c"
    len_236=wcslen(str);
    # 976 "libneo-c-str-gc.c"
    result_237=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_236+1)), "libneo-c-str-gc.c", 976, "int");
    # 982 "libneo-c-str-gc.c"
    for(    i_238=0;    i_238<len_236;    i_238++    ){
        # 979 "libneo-c-str-gc.c"
        result_237[i_238]=str[len_236-i_238-1];
    }
    # 982 "libneo-c-str-gc.c"
    result_237[len_236]=0;
    # 984 "libneo-c-str-gc.c"
    __result147__ = __result_obj__ = result_237;
    return __result147__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__;
int len_239;
unsigned int* result_240;
int i_241;
unsigned int* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_239, 0, sizeof(int));
memset(&result_240, 0, sizeof(unsigned int*));
memset(&i_241, 0, sizeof(int));
    # 989 "libneo-c-str-gc.c"
    len_239=wcslen(str)*n+1;
    # 991 "libneo-c-str-gc.c"
    result_240=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_239)), "libneo-c-str-gc.c", 991, "int");
    # 993 "libneo-c-str-gc.c"
    result_240[0]=0;
    # 999 "libneo-c-str-gc.c"
    for(    i_241=0;    i_241<n;    i_241++    ){
        # 996 "libneo-c-str-gc.c"
        wcscat(result_240,str);
    }
    # 999 "libneo-c-str-gc.c"
    __result148__ = __result_obj__ = result_240;
    return __result148__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__;
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
    # 1004 "libneo-c-str-gc.c"
    len_242=wchar_tp_length(str);
    # 1005 "libneo-c-str-gc.c"
    result_243=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_242*2+1)), "libneo-c-str-gc.c", 1005, "int");
    # 1007 "libneo-c-str-gc.c"
    n_244=0;
    # 1022 "libneo-c-str-gc.c"
    for(    i_245=0;    i_245<len_242;    i_245++    ){
        # 1009 "libneo-c-str-gc.c"
        c_246=str[i_245];
        # 1020 "libneo-c-str-gc.c"
        # 1012 "libneo-c-str-gc.c"
        if(_if_conditional92=(c_246>=0&&c_246<32)||c_246==127,        _if_conditional92) {
            # 1014 "libneo-c-str-gc.c"
            result_243[n_244++]=94;
            # 1015 "libneo-c-str-gc.c"
            result_243[n_244++]=c_246+65-1;
        }
        else {
            # 1018 "libneo-c-str-gc.c"
            result_243[n_244++]=c_246;
        }
    }
    # 1024 "libneo-c-str-gc.c"
    result_243[n_244]=0;
    # 1024 "libneo-c-str-gc.c"
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
int len_259;
int regex_result_260;
int i_261;
int i_262;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool __result150__;
_Bool _if_conditional95;
_Bool _if_conditional96;
int i_265;
char* match_string_266;
_Bool _if_conditional97;
_Bool __result152__;
_Bool _if_conditional98;
_Bool __result153__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_247, 0, sizeof(int));
memset(&ovec_max_248, 0, sizeof(int));
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
    # 1029 "libneo-c-str-gc.c"
    offset_247=0;
    # 1031 "libneo-c-str-gc.c"
    ovec_max_248=16;
    # 1032 "libneo-c-str-gc.c"
    int start_249[ovec_max_248];
    memset(&start_249, 0, sizeof(int)    *(ovec_max_248)    );
    # 1033 "libneo-c-str-gc.c"
    int end_250[ovec_max_248];
    memset(&end_250, 0, sizeof(int)    *(ovec_max_248)    );
    # 1034 "libneo-c-str-gc.c"
    int ovec_value_251[ovec_max_248*3];
    memset(&ovec_value_251, 0, sizeof(int)    *(ovec_max_248*3)    );
    # 1036 "libneo-c-str-gc.c"
    # 1037 "libneo-c-str-gc.c"
    # 1039 "libneo-c-str-gc.c"
    options_254=reg->options;
    # 1040 "libneo-c-str-gc.c"
    str_255=reg->str;
    # 1042 "libneo-c-str-gc.c"
    re_256=reg->re;
    # 1044 "libneo-c-str-gc.c"
    n_257=0;
    # 1103 "libneo-c-str-gc.c"
    while(_while_condtional11=(_Bool)1,    _while_condtional11) {
        # 1047 "libneo-c-str-gc.c"
        options_258=2097152;
        # 1048 "libneo-c-str-gc.c"
        len_259=strlen(self);
        # 1050 "libneo-c-str-gc.c"
        regex_result_260=pcre_exec(re_256,(struct pcre_extra*)0,self,len_259,offset_247,options_258,ovec_value_251,ovec_max_248*3);
        # 1055 "libneo-c-str-gc.c"
        for(        i_261=0;        i_261<ovec_max_248;        i_261++        ){
            # 1053 "libneo-c-str-gc.c"
            start_249[i_261]=ovec_value_251[i_261*2];
        }
        # 1060 "libneo-c-str-gc.c"
        for(        i_262=0;        i_262<ovec_max_248;        i_262++        ){
            # 1056 "libneo-c-str-gc.c"
            end_250[i_262]=ovec_value_251[i_262*2+1];
        }
        # 1101 "libneo-c-str-gc.c"
        # 1060 "libneo-c-str-gc.c"
        if(_if_conditional93=regex_result_260==1||(group_strings==((void*)0)&&regex_result_260>0),        _if_conditional93) {
            # 1062 "libneo-c-str-gc.c"
            n_257++;
            # 1068 "libneo-c-str-gc.c"
            # 1064 "libneo-c-str-gc.c"
            if(_if_conditional94=n_257==count,            _if_conditional94) {
                # 1065 "libneo-c-str-gc.c"
                __result150__ = (_Bool)1;
                return __result150__;
            }
            # 1074 "libneo-c-str-gc.c"
            # 1068 "libneo-c-str-gc.c"
            if(_if_conditional95=offset_247==end_250[0],            _if_conditional95) {
                # 1069 "libneo-c-str-gc.c"
                offset_247++;
            }
            else {
                # 1072 "libneo-c-str-gc.c"
                offset_247=end_250[0];
            }
        }
        else {
            # 1101 "libneo-c-str-gc.c"
            # 1076 "libneo-c-str-gc.c"
            if(_if_conditional96=regex_result_260>1,            _if_conditional96) {
                # 1077 "libneo-c-str-gc.c"
                n_257++;
                # 1079 "libneo-c-str-gc.c"
                list$1charph_reset(group_strings);
                # 1085 "libneo-c-str-gc.c"
                for(                i_265=1;                i_265<regex_result_260;                i_265++                ){
                    # 1081 "libneo-c-str-gc.c"
                    match_string_266=charp_substring(self,start_249[i_265],end_250[i_265]);
                    # 1082 "libneo-c-str-gc.c"
                    list$1charph_push_back(group_strings,match_string_266);
                }
                # 1089 "libneo-c-str-gc.c"
                # 1085 "libneo-c-str-gc.c"
                if(_if_conditional97=n_257==count,                _if_conditional97) {
                    # 1086 "libneo-c-str-gc.c"
                    __result152__ = (_Bool)1;
                    return __result152__;
                }
                # 1095 "libneo-c-str-gc.c"
                # 1089 "libneo-c-str-gc.c"
                if(_if_conditional98=offset_247==end_250[0],                _if_conditional98) {
                    # 1090 "libneo-c-str-gc.c"
                    offset_247++;
                }
                else {
                    # 1093 "libneo-c-str-gc.c"
                    offset_247=end_250[0];
                }
            }
            else {
                # 1099 "libneo-c-str-gc.c"
                __result153__ = (_Bool)0;
                return __result153__;
            }
        }
    }
    # 1103 "libneo-c-str-gc.c"
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
                    # 420 "./neo-c.h"
                    it_263=self->head;
                    # 427 "./neo-c.h"
                    while(_while_condtional12=it_263!=((void*)0),                    _while_condtional12) {
                        # 422 "./neo-c.h"
                        prev_it_264=it_263;
                        # 423 "./neo-c.h"
                        it_263=it_263->next;
                        # 424 "./neo-c.h"
                    }
                    # 427 "./neo-c.h"
                    self->head=((void*)0);
                    # 428 "./neo-c.h"
                    self->tail=((void*)0);
                    # 430 "./neo-c.h"
                    self->len=0;
                    # 432 "./neo-c.h"
                    __result151__ = __result_obj__ = self;
                    return __result151__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1108 "libneo-c-str-gc.c"
    __result155__ = wcscmp(left,right);
    return __result155__;
}

int wstring_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1113 "libneo-c-str-gc.c"
    __result156__ = wcscmp(left,right);
    return __result156__;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
void* __result_obj__;
unsigned int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1118 "libneo-c-str-gc.c"
    __result157__ = string_get_hash_key(reg->str);
    return __result157__;
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1123 "libneo-c-str-gc.c"
    __result158__ = left==right;
    return __result158__;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1129 "libneo-c-str-gc.c"
    __result159__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result159__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1134 "libneo-c-str-gc.c"
    __result160__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result160__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1139 "libneo-c-str-gc.c"
    __result161__ = wcscmp(left,right)==0;
    return __result161__;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1144 "libneo-c-str-gc.c"
    __result162__ = wcscmp(left,right)==0;
    return __result162__;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1149 "libneo-c-str-gc.c"
    __result163__ = wcscmp(left,right)!=0;
    return __result163__;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1154 "libneo-c-str-gc.c"
    __result164__ = wcscmp(left,right)!=0;
    return __result164__;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1159 "libneo-c-str-gc.c"
    __result165__ = come_regex_equals(left,right);
    return __result165__;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1164 "libneo-c-str-gc.c"
    __result166__ = !come_regex_equals(left,right);
    return __result166__;
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
unsigned int* result_267;
unsigned int* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_267, 0, sizeof(unsigned int*));
    # 1169 "libneo-c-str-gc.c"
    result_267=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libneo-c-str-gc.c", 1169, "int");
    # 1171 "libneo-c-str-gc.c"
    wcscpy(result_267,left);
    # 1172 "libneo-c-str-gc.c"
    wcscat(result_267,right);
    # 1174 "libneo-c-str-gc.c"
    __result167__ = __result_obj__ = result_267;
    return __result167__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
unsigned int* result_268;
unsigned int* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_268, 0, sizeof(unsigned int*));
    # 1179 "libneo-c-str-gc.c"
    result_268=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libneo-c-str-gc.c", 1179, "int");
    # 1181 "libneo-c-str-gc.c"
    wcscpy(result_268,left);
    # 1182 "libneo-c-str-gc.c"
    wcscat(result_268,right);
    # 1184 "libneo-c-str-gc.c"
    __result168__ = __result_obj__ = result_268;
    return __result168__;
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
char* head_269;
_Bool _if_conditional99;
int __result169__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_269, 0, sizeof(char*));
    # 1189 "libneo-c-str-gc.c"
    # 1191 "libneo-c-str-gc.c"
    head_269=strstr(str,search_str);
    # 1197 "libneo-c-str-gc.c"
    # 1193 "libneo-c-str-gc.c"
    if(_if_conditional99=head_269==((void*)0),    _if_conditional99) {
        # 1194 "libneo-c-str-gc.c"
        __result169__ = default_value;
        return __result169__;
    }
    # 1197 "libneo-c-str-gc.c"
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
int len_282;
int regex_result_283;
int i_284;
int i_285;
_Bool _if_conditional100;
int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_270, 0, sizeof(int));
memset(&result_274, 0, sizeof(int));
memset(&offset_275, 0, sizeof(int));
memset(&erro_ofs_277, 0, sizeof(int));
memset(&options_278, 0, sizeof(int));
memset(&str_279, 0, sizeof(char*));
memset(&re_280, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_281, 0, sizeof(int));
memset(&len_282, 0, sizeof(int));
memset(&regex_result_283, 0, sizeof(int));
memset(&i_284, 0, sizeof(int));
memset(&i_285, 0, sizeof(int));
    # 1203 "libneo-c-str-gc.c"
    ovec_max_270=16;
    # 1204 "libneo-c-str-gc.c"
    int start_271[ovec_max_270];
    memset(&start_271, 0, sizeof(int)    *(ovec_max_270)    );
    # 1205 "libneo-c-str-gc.c"
    int end_272[ovec_max_270];
    memset(&end_272, 0, sizeof(int)    *(ovec_max_270)    );
    # 1206 "libneo-c-str-gc.c"
    int ovec_value_273[ovec_max_270*3];
    memset(&ovec_value_273, 0, sizeof(int)    *(ovec_max_270*3)    );
    # 1208 "libneo-c-str-gc.c"
    result_274=default_value;
    # 1210 "libneo-c-str-gc.c"
    offset_275=0;
    # 1212 "libneo-c-str-gc.c"
    # 1213 "libneo-c-str-gc.c"
    # 1215 "libneo-c-str-gc.c"
    options_278=reg->options;
    # 1216 "libneo-c-str-gc.c"
    str_279=reg->str;
    # 1218 "libneo-c-str-gc.c"
    re_280=reg->re;
    # 1244 "libneo-c-str-gc.c"
    while(_while_condtional13=(_Bool)1,    _while_condtional13) {
        # 1221 "libneo-c-str-gc.c"
        options_281=2097152;
        # 1222 "libneo-c-str-gc.c"
        len_282=strlen(self);
        # 1223 "libneo-c-str-gc.c"
        regex_result_283=pcre_exec(re_280,(struct pcre_extra*)0,self,len_282,offset_275,options_281,ovec_value_273,ovec_max_270*3);
        # 1228 "libneo-c-str-gc.c"
        for(        i_284=0;        i_284<ovec_max_270;        i_284++        ){
            # 1226 "libneo-c-str-gc.c"
            start_271[i_284]=ovec_value_273[i_284*2];
        }
        # 1233 "libneo-c-str-gc.c"
        for(        i_285=0;        i_285<ovec_max_270;        i_285++        ){
            # 1229 "libneo-c-str-gc.c"
            end_272[i_285]=ovec_value_273[i_285*2+1];
        }
        # 1239 "libneo-c-str-gc.c"
        # 1233 "libneo-c-str-gc.c"
        if(_if_conditional100=regex_result_283==1||regex_result_283>0,        _if_conditional100) {
            # 1235 "libneo-c-str-gc.c"
            result_274=start_271[0];
            # 1236 "libneo-c-str-gc.c"
            break;
        }
        # 1242 "libneo-c-str-gc.c"
        {
            # 1240 "libneo-c-str-gc.c"
            break;
        }
    }
    # 1244 "libneo-c-str-gc.c"
    __result171__ = result_274;
    return __result171__;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
int len_286;
_Bool _if_conditional101;
char* __result172__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_286, 0, sizeof(int));
    # 1250 "libneo-c-str-gc.c"
    len_286=strlen(self);
    # 1256 "libneo-c-str-gc.c"
    # 1252 "libneo-c-str-gc.c"
    if(_if_conditional101=strcmp(self,"")==0,    _if_conditional101) {
        # 1253 "libneo-c-str-gc.c"
        __result172__ = __result_obj__ = __builtin_string(self);
        return __result172__;
    }
    # 1260 "libneo-c-str-gc.c"
    # 1256 "libneo-c-str-gc.c"
    if(_if_conditional102=index<0,    _if_conditional102) {
        # 1257 "libneo-c-str-gc.c"
        index+=len_286;
    }
    # 1264 "libneo-c-str-gc.c"
    # 1260 "libneo-c-str-gc.c"
    if(_if_conditional103=index>=len_286,    _if_conditional103) {
        # 1261 "libneo-c-str-gc.c"
        index=len_286-1;
    }
    # 1268 "libneo-c-str-gc.c"
    # 1264 "libneo-c-str-gc.c"
    if(_if_conditional104=index<0,    _if_conditional104) {
        # 1265 "libneo-c-str-gc.c"
        index=0;
    }
    # 1268 "libneo-c-str-gc.c"
    self[index]=c;
    # 1270 "libneo-c-str-gc.c"
    __result173__ = __result_obj__ = __builtin_string(self);
    return __result173__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
int len_287;
char* result_288;
int i_289;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_287, 0, sizeof(int));
memset(&result_288, 0, sizeof(char*));
memset(&i_289, 0, sizeof(int));
    # 1275 "libneo-c-str-gc.c"
    len_287=strlen(str)*n+1;
    # 1277 "libneo-c-str-gc.c"
    result_288=(char*)come_calloc(1, sizeof(char)*(1*(len_287)), "libneo-c-str-gc.c", 1277, "char");
    # 1279 "libneo-c-str-gc.c"
    result_288[0]=0;
    # 1285 "libneo-c-str-gc.c"
    for(    i_289=0;    i_289<n;    i_289++    ){
        # 1282 "libneo-c-str-gc.c"
        strcat(result_288,str);
    }
    # 1285 "libneo-c-str-gc.c"
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
struct buffer* result_300;
_Bool _while_condtional14;
int options_301;
int len_302;
int regex_result_303;
int i_304;
int i_305;
_Bool _if_conditional105;
char* str_306;
_Bool _if_conditional106;
_Bool _if_conditional107;
char* str_307;
char* str_308;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_290, 0, sizeof(int));
memset(&ovec_max_291, 0, sizeof(int));
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
    # 1290 "libneo-c-str-gc.c"
    offset_290=0;
    # 1292 "libneo-c-str-gc.c"
    ovec_max_291=16;
    # 1293 "libneo-c-str-gc.c"
    int start_292[ovec_max_291];
    memset(&start_292, 0, sizeof(int)    *(ovec_max_291)    );
    # 1294 "libneo-c-str-gc.c"
    int end_293[ovec_max_291];
    memset(&end_293, 0, sizeof(int)    *(ovec_max_291)    );
    # 1295 "libneo-c-str-gc.c"
    int ovec_value_294[ovec_max_291*3];
    memset(&ovec_value_294, 0, sizeof(int)    *(ovec_max_291*3)    );
    # 1297 "libneo-c-str-gc.c"
    # 1298 "libneo-c-str-gc.c"
    # 1300 "libneo-c-str-gc.c"
    options_297=reg->options;
    # 1301 "libneo-c-str-gc.c"
    str_298=reg->str;
    # 1303 "libneo-c-str-gc.c"
    re_299=reg->re;
    # 1305 "libneo-c-str-gc.c"
    result_300=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1305, "buffer"));
    # 1348 "libneo-c-str-gc.c"
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        # 1308 "libneo-c-str-gc.c"
        options_301=2097152;
        # 1309 "libneo-c-str-gc.c"
        len_302=strlen(self);
        # 1310 "libneo-c-str-gc.c"
        regex_result_303=pcre_exec(re_299,(struct pcre_extra*)0,self,len_302,offset_290,options_301,ovec_value_294,ovec_max_291*3);
        # 1315 "libneo-c-str-gc.c"
        for(        i_304=0;        i_304<ovec_max_291;        i_304++        ){
            # 1313 "libneo-c-str-gc.c"
            start_292[i_304]=ovec_value_294[i_304*2];
        }
        # 1320 "libneo-c-str-gc.c"
        for(        i_305=0;        i_305<ovec_max_291;        i_305++        ){
            # 1316 "libneo-c-str-gc.c"
            end_293[i_305]=ovec_value_294[i_305*2+1];
        }
        # 1346 "libneo-c-str-gc.c"
        # 1320 "libneo-c-str-gc.c"
        if(_if_conditional105=regex_result_303==1,        _if_conditional105) {
            # 1322 "libneo-c-str-gc.c"
            str_306=charp_substring(self,offset_290,start_292[0]);
            # 1324 "libneo-c-str-gc.c"
            buffer_append_str(result_300,str_306);
            # 1325 "libneo-c-str-gc.c"
            buffer_append_str(result_300,replace);
            # 1334 "libneo-c-str-gc.c"
            # 1327 "libneo-c-str-gc.c"
            if(_if_conditional106=offset_290==end_293[0],            _if_conditional106) {
                # 1328 "libneo-c-str-gc.c"
                offset_290++;
            }
            else {
                # 1331 "libneo-c-str-gc.c"
                offset_290=end_293[0];
            }
            # 1339 "libneo-c-str-gc.c"
            # 1334 "libneo-c-str-gc.c"
            if(_if_conditional107=!reg->global,            _if_conditional107) {
                # 1335 "libneo-c-str-gc.c"
                str_307=charp_substring(self,offset_290,-1);
                # 1336 "libneo-c-str-gc.c"
                buffer_append_str(result_300,str_307);
                # 1337 "libneo-c-str-gc.c"
                break;
            }
        }
        else {
            # 1342 "libneo-c-str-gc.c"
            str_308=charp_substring(self,offset_290,-1);
            # 1343 "libneo-c-str-gc.c"
            buffer_append_str(result_300,str_308);
            # 1344 "libneo-c-str-gc.c"
            break;
        }
    }
    # 1348 "libneo-c-str-gc.c"
    __result175__ = __result_obj__ = buffer_to_string(result_300);
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
struct buffer* result_319;
int n_320;
_Bool _while_condtional15;
int options_321;
int len_322;
int regex_result_323;
int i_324;
int i_325;
_Bool _if_conditional108;
char* str_326;
_Bool _if_conditional109;
_Bool _if_conditional110;
char* str_327;
_Bool _if_conditional111;
char* str_328;
char* str_329;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_309, 0, sizeof(int));
memset(&ovec_max_310, 0, sizeof(int));
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
    # 1353 "libneo-c-str-gc.c"
    offset_309=0;
    # 1355 "libneo-c-str-gc.c"
    ovec_max_310=16;
    # 1356 "libneo-c-str-gc.c"
    int start_311[ovec_max_310];
    memset(&start_311, 0, sizeof(int)    *(ovec_max_310)    );
    # 1357 "libneo-c-str-gc.c"
    int end_312[ovec_max_310];
    memset(&end_312, 0, sizeof(int)    *(ovec_max_310)    );
    # 1358 "libneo-c-str-gc.c"
    int ovec_value_313[ovec_max_310*3];
    memset(&ovec_value_313, 0, sizeof(int)    *(ovec_max_310*3)    );
    # 1360 "libneo-c-str-gc.c"
    # 1361 "libneo-c-str-gc.c"
    # 1363 "libneo-c-str-gc.c"
    options_316=reg->options;
    # 1364 "libneo-c-str-gc.c"
    str_317=reg->str;
    # 1366 "libneo-c-str-gc.c"
    re_318=reg->re;
    # 1368 "libneo-c-str-gc.c"
    result_319=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1368, "buffer"));
    # 1370 "libneo-c-str-gc.c"
    n_320=0;
    # 1419 "libneo-c-str-gc.c"
    while(_while_condtional15=(_Bool)1,    _while_condtional15) {
        # 1373 "libneo-c-str-gc.c"
        options_321=2097152;
        # 1374 "libneo-c-str-gc.c"
        len_322=strlen(self);
        # 1375 "libneo-c-str-gc.c"
        regex_result_323=pcre_exec(re_318,(struct pcre_extra*)0,self,len_322,offset_309,options_321,ovec_value_313,ovec_max_310*3);
        # 1380 "libneo-c-str-gc.c"
        for(        i_324=0;        i_324<ovec_max_310;        i_324++        ){
            # 1378 "libneo-c-str-gc.c"
            start_311[i_324]=ovec_value_313[i_324*2];
        }
        # 1385 "libneo-c-str-gc.c"
        for(        i_325=0;        i_325<ovec_max_310;        i_325++        ){
            # 1381 "libneo-c-str-gc.c"
            end_312[i_325]=ovec_value_313[i_325*2+1];
        }
        # 1417 "libneo-c-str-gc.c"
        # 1385 "libneo-c-str-gc.c"
        if(_if_conditional108=regex_result_323==1,        _if_conditional108) {
            # 1387 "libneo-c-str-gc.c"
            n_320++;
            # 1388 "libneo-c-str-gc.c"
            str_326=charp_substring(self,offset_309,start_311[0]);
            # 1390 "libneo-c-str-gc.c"
            buffer_append_str(result_319,str_326);
            # 1391 "libneo-c-str-gc.c"
            buffer_append_str(result_319,replace);
            # 1400 "libneo-c-str-gc.c"
            # 1393 "libneo-c-str-gc.c"
            if(_if_conditional109=offset_309==end_312[0],            _if_conditional109) {
                # 1394 "libneo-c-str-gc.c"
                offset_309++;
            }
            else {
                # 1397 "libneo-c-str-gc.c"
                offset_309=end_312[0];
            }
            # 1405 "libneo-c-str-gc.c"
            # 1400 "libneo-c-str-gc.c"
            if(_if_conditional110=!reg->global,            _if_conditional110) {
                # 1401 "libneo-c-str-gc.c"
                str_327=charp_substring(self,offset_309,-1);
                # 1402 "libneo-c-str-gc.c"
                buffer_append_str(result_319,str_327);
                # 1403 "libneo-c-str-gc.c"
                break;
            }
            # 1410 "libneo-c-str-gc.c"
            # 1405 "libneo-c-str-gc.c"
            if(_if_conditional111=n_320==count,            _if_conditional111) {
                # 1406 "libneo-c-str-gc.c"
                str_328=charp_substring(self,offset_309,-1);
                # 1407 "libneo-c-str-gc.c"
                buffer_append_str(result_319,str_328);
                # 1408 "libneo-c-str-gc.c"
                break;
            }
        }
        else {
            # 1413 "libneo-c-str-gc.c"
            str_329=charp_substring(self,offset_309,-1);
            # 1414 "libneo-c-str-gc.c"
            buffer_append_str(result_319,str_329);
            # 1415 "libneo-c-str-gc.c"
            break;
        }
    }
    # 1419 "libneo-c-str-gc.c"
    __result176__ = __result_obj__ = buffer_to_string(result_319);
    return __result176__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
struct list$1charph* result_330;
struct buffer* buf_331;
int i_332;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct list$1charph* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_330, 0, sizeof(struct list$1charph*));
memset(&buf_331, 0, sizeof(struct buffer*));
memset(&i_332, 0, sizeof(int));
    # 1425 "libneo-c-str-gc.c"
    # 1427 "libneo-c-str-gc.c"
    result_330=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1427, "list$1charph"));
    # 1429 "libneo-c-str-gc.c"
    buf_331=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1429, "buffer"));
    # 1441 "libneo-c-str-gc.c"
    for(    i_332=0;    i_332<charp_length(self);    i_332++    ){
        # 1440 "libneo-c-str-gc.c"
        # 1432 "libneo-c-str-gc.c"
        if(_if_conditional112=strstr(self+i_332,str)==self+i_332,        _if_conditional112) {
            # 1433 "libneo-c-str-gc.c"
            list$1charph_push_back(result_330,__builtin_string(buf_331->buf));
            # 1434 "libneo-c-str-gc.c"
            buffer_reset(buf_331);
            # 1435 "libneo-c-str-gc.c"
            i_332+=strlen(str)-1;
        }
        else {
            # 1438 "libneo-c-str-gc.c"
            buffer_append_char(buf_331,self[i_332]);
        }
    }
    # 1445 "libneo-c-str-gc.c"
    # 1441 "libneo-c-str-gc.c"
    if(_if_conditional113=buffer_length(buf_331)!=0,    _if_conditional113) {
        # 1442 "libneo-c-str-gc.c"
        list$1charph_push_back(result_330,__builtin_string(buf_331->buf));
    }
    # 1445 "libneo-c-str-gc.c"
    __result177__ = __result_obj__ = result_330;
    return __result177__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
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
int len_345;
int regex_result_346;
int i_347;
int i_348;
_Bool _if_conditional114;
char* str_349;
_Bool _if_conditional115;
_Bool _if_conditional116;
char* str_350;
_Bool _if_conditional117;
int i_351;
char* match_string_352;
struct list$1charph* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_333, 0, sizeof(struct list$1charph*));
memset(&offset_334, 0, sizeof(int));
memset(&ovec_max_335, 0, sizeof(int));
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
    # 1450 "libneo-c-str-gc.c"
    result_333=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1450, "list$1charph"));
    # 1452 "libneo-c-str-gc.c"
    offset_334=0;
    # 1454 "libneo-c-str-gc.c"
    ovec_max_335=16;
    # 1455 "libneo-c-str-gc.c"
    int start_336[ovec_max_335];
    memset(&start_336, 0, sizeof(int)    *(ovec_max_335)    );
    # 1456 "libneo-c-str-gc.c"
    int end_337[ovec_max_335];
    memset(&end_337, 0, sizeof(int)    *(ovec_max_335)    );
    # 1457 "libneo-c-str-gc.c"
    int ovec_value_338[ovec_max_335*3];
    memset(&ovec_value_338, 0, sizeof(int)    *(ovec_max_335*3)    );
    # 1459 "libneo-c-str-gc.c"
    # 1460 "libneo-c-str-gc.c"
    # 1462 "libneo-c-str-gc.c"
    options_341=reg->options;
    # 1463 "libneo-c-str-gc.c"
    str_342=reg->str;
    # 1465 "libneo-c-str-gc.c"
    re_343=reg->re;
    # 1518 "libneo-c-str-gc.c"
    while(_while_condtional16=(_Bool)1,    _while_condtional16) {
        # 1469 "libneo-c-str-gc.c"
        options_344=2097152;
        # 1470 "libneo-c-str-gc.c"
        len_345=strlen(self);
        # 1471 "libneo-c-str-gc.c"
        regex_result_346=pcre_exec(re_343,(struct pcre_extra*)0,self,len_345,offset_334,options_344,ovec_value_338,ovec_max_335*3);
        # 1476 "libneo-c-str-gc.c"
        for(        i_347=0;        i_347<ovec_max_335;        i_347++        ){
            # 1474 "libneo-c-str-gc.c"
            start_336[i_347]=ovec_value_338[i_347*2];
        }
        # 1481 "libneo-c-str-gc.c"
        for(        i_348=0;        i_348<ovec_max_335;        i_348++        ){
            # 1477 "libneo-c-str-gc.c"
            end_337[i_348]=ovec_value_338[i_348*2+1];
        }
        # 1516 "libneo-c-str-gc.c"
        # 1481 "libneo-c-str-gc.c"
        if(_if_conditional114=regex_result_346==1,        _if_conditional114) {
            # 1483 "libneo-c-str-gc.c"
            str_349=charp_substring(self,start_336[0],end_337[0]);
            # 1485 "libneo-c-str-gc.c"
            list$1charph_push_back(result_333,str_349);
            # 1493 "libneo-c-str-gc.c"
            # 1487 "libneo-c-str-gc.c"
            if(_if_conditional115=offset_334==end_337[0],            _if_conditional115) {
                # 1488 "libneo-c-str-gc.c"
                offset_334++;
            }
            else {
                # 1491 "libneo-c-str-gc.c"
                offset_334=end_337[0];
            }
        }
        else {
            # 1516 "libneo-c-str-gc.c"
            # 1495 "libneo-c-str-gc.c"
            if(_if_conditional116=regex_result_346>1,            _if_conditional116) {
                # 1496 "libneo-c-str-gc.c"
                str_350=charp_substring(self,start_336[0],end_337[0]);
                # 1497 "libneo-c-str-gc.c"
                list$1charph_push_back(result_333,str_350);
                # 1506 "libneo-c-str-gc.c"
                # 1499 "libneo-c-str-gc.c"
                if(_if_conditional117=offset_334==end_337[0],                _if_conditional117) {
                    # 1500 "libneo-c-str-gc.c"
                    offset_334++;
                }
                else {
                    # 1503 "libneo-c-str-gc.c"
                    offset_334=end_337[0];
                }
                # 1510 "libneo-c-str-gc.c"
                for(                i_351=1;                i_351<regex_result_346;                i_351++                ){
                    # 1507 "libneo-c-str-gc.c"
                    match_string_352=charp_substring(self,start_336[i_351],end_337[i_351]);
                    # 1508 "libneo-c-str-gc.c"
                    list$1charph_push_back(result_333,match_string_352);
                }
            }
            else {
                # 1514 "libneo-c-str-gc.c"
                break;
            }
        }
    }
    # 1518 "libneo-c-str-gc.c"
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
struct list$1charph* result_358;
int offset_359;
int ovec_max_360;
_Bool _while_condtional17;
int options_364;
int len_365;
int regex_result_366;
int i_367;
int i_368;
_Bool _if_conditional118;
char* str_369;
_Bool _if_conditional119;
_Bool _if_conditional120;
char* str_370;
_Bool _if_conditional121;
int i_371;
char* match_str_372;
_Bool _if_conditional122;
char* str_373;
struct list$1charph* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
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
    # 1523 "libneo-c-str-gc.c"
    # 1524 "libneo-c-str-gc.c"
    # 1526 "libneo-c-str-gc.c"
    options_355=reg->options;
    # 1527 "libneo-c-str-gc.c"
    str_356=reg->str;
    # 1529 "libneo-c-str-gc.c"
    re_357=reg->re;
    # 1531 "libneo-c-str-gc.c"
    result_358=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1531, "list$1charph"));
    # 1533 "libneo-c-str-gc.c"
    offset_359=0;
    # 1535 "libneo-c-str-gc.c"
    ovec_max_360=16;
    # 1536 "libneo-c-str-gc.c"
    int start_361[ovec_max_360];
    memset(&start_361, 0, sizeof(int)    *(ovec_max_360)    );
    # 1537 "libneo-c-str-gc.c"
    int end_362[ovec_max_360];
    memset(&end_362, 0, sizeof(int)    *(ovec_max_360)    );
    # 1538 "libneo-c-str-gc.c"
    int ovec_value_363[ovec_max_360*3];
    memset(&ovec_value_363, 0, sizeof(int)    *(ovec_max_360*3)    );
    # 1590 "libneo-c-str-gc.c"
    while(_while_condtional17=(_Bool)1,    _while_condtional17) {
        # 1541 "libneo-c-str-gc.c"
        options_364=2097152;
        # 1542 "libneo-c-str-gc.c"
        len_365=strlen(self);
        # 1544 "libneo-c-str-gc.c"
        regex_result_366=pcre_exec(re_357,(struct pcre_extra*)0,self,len_365,offset_359,options_364,ovec_value_363,ovec_max_360*3);
        # 1549 "libneo-c-str-gc.c"
        for(        i_367=0;        i_367<ovec_max_360;        i_367++        ){
            # 1547 "libneo-c-str-gc.c"
            start_361[i_367]=ovec_value_363[i_367*2];
        }
        # 1554 "libneo-c-str-gc.c"
        for(        i_368=0;        i_368<ovec_max_360;        i_368++        ){
            # 1550 "libneo-c-str-gc.c"
            end_362[i_368]=ovec_value_363[i_368*2+1];
        }
        # 1588 "libneo-c-str-gc.c"
        # 1554 "libneo-c-str-gc.c"
        if(_if_conditional118=regex_result_366==1,        _if_conditional118) {
            # 1556 "libneo-c-str-gc.c"
            str_369=charp_substring(self,offset_359,start_361[0]);
            # 1557 "libneo-c-str-gc.c"
            list$1charph_push_back(result_358,str_369);
            # 1565 "libneo-c-str-gc.c"
            # 1559 "libneo-c-str-gc.c"
            if(_if_conditional119=offset_359==end_362[0],            _if_conditional119) {
                # 1560 "libneo-c-str-gc.c"
                offset_359++;
            }
            else {
                # 1563 "libneo-c-str-gc.c"
                offset_359=end_362[0];
            }
        }
        else {
            # 1588 "libneo-c-str-gc.c"
            # 1567 "libneo-c-str-gc.c"
            if(_if_conditional120=regex_result_366>1,            _if_conditional120) {
                # 1568 "libneo-c-str-gc.c"
                str_370=charp_substring(self,offset_359,start_361[0]);
                # 1569 "libneo-c-str-gc.c"
                list$1charph_push_back(result_358,str_370);
                # 1578 "libneo-c-str-gc.c"
                # 1571 "libneo-c-str-gc.c"
                if(_if_conditional121=offset_359==end_362[0],                _if_conditional121) {
                    # 1572 "libneo-c-str-gc.c"
                    offset_359++;
                }
                else {
                    # 1575 "libneo-c-str-gc.c"
                    offset_359=end_362[0];
                }
                # 1582 "libneo-c-str-gc.c"
                for(                i_371=1;                i_371<regex_result_366;                i_371++                ){
                    # 1579 "libneo-c-str-gc.c"
                    match_str_372=charp_substring(self,start_361[i_371],end_362[i_371]);
                    # 1580 "libneo-c-str-gc.c"
                    list$1charph_push_back(result_358,match_str_372);
                }
            }
            else {
                # 1586 "libneo-c-str-gc.c"
                break;
            }
        }
    }
    # 1595 "libneo-c-str-gc.c"
    # 1590 "libneo-c-str-gc.c"
    if(_if_conditional122=offset_359<charp_length(self),    _if_conditional122) {
        # 1591 "libneo-c-str-gc.c"
        str_373=charp_substring(self,offset_359,-1);
        # 1592 "libneo-c-str-gc.c"
        list$1charph_push_back(result_358,str_373);
    }
    # 1595 "libneo-c-str-gc.c"
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
int len_385;
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
memset(&erro_ofs_380, 0, sizeof(int));
memset(&options_381, 0, sizeof(int));
memset(&str_382, 0, sizeof(char*));
memset(&re_383, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_384, 0, sizeof(int));
memset(&len_385, 0, sizeof(int));
memset(&regex_result_386, 0, sizeof(int));
memset(&i_387, 0, sizeof(int));
memset(&i_388, 0, sizeof(int));
    # 1600 "libneo-c-str-gc.c"
    offset_374=0;
    # 1602 "libneo-c-str-gc.c"
    ovec_max_375=16;
    # 1603 "libneo-c-str-gc.c"
    int start_376[ovec_max_375];
    memset(&start_376, 0, sizeof(int)    *(ovec_max_375)    );
    # 1604 "libneo-c-str-gc.c"
    int end_377[ovec_max_375];
    memset(&end_377, 0, sizeof(int)    *(ovec_max_375)    );
    # 1605 "libneo-c-str-gc.c"
    int ovec_value_378[ovec_max_375*3];
    memset(&ovec_value_378, 0, sizeof(int)    *(ovec_max_375*3)    );
    # 1607 "libneo-c-str-gc.c"
    # 1608 "libneo-c-str-gc.c"
    # 1610 "libneo-c-str-gc.c"
    options_381=reg->options;
    # 1611 "libneo-c-str-gc.c"
    str_382=reg->str;
    # 1613 "libneo-c-str-gc.c"
    re_383=reg->re;
    # 1640 "libneo-c-str-gc.c"
    while(_while_condtional18=(_Bool)1,    _while_condtional18) {
        # 1616 "libneo-c-str-gc.c"
        options_384=2097152;
        # 1617 "libneo-c-str-gc.c"
        len_385=strlen(self);
        # 1619 "libneo-c-str-gc.c"
        regex_result_386=pcre_exec(re_383,(struct pcre_extra*)0,self,len_385,offset_374,options_384,ovec_value_378,ovec_max_375*3);
        # 1624 "libneo-c-str-gc.c"
        for(        i_387=0;        i_387<ovec_max_375;        i_387++        ){
            # 1622 "libneo-c-str-gc.c"
            start_376[i_387]=ovec_value_378[i_387*2];
        }
        # 1629 "libneo-c-str-gc.c"
        for(        i_388=0;        i_388<ovec_max_375;        i_388++        ){
            # 1625 "libneo-c-str-gc.c"
            end_377[i_388]=ovec_value_378[i_388*2+1];
        }
        # 1638 "libneo-c-str-gc.c"
        # 1629 "libneo-c-str-gc.c"
        if(_if_conditional123=regex_result_386>0,        _if_conditional123) {
            # 1631 "libneo-c-str-gc.c"
            __result180__ = (_Bool)1;
            return __result180__;
        }
        else {
            # 1636 "libneo-c-str-gc.c"
            __result181__ = (_Bool)0;
            return __result181__;
        }
    }
    # 1640 "libneo-c-str-gc.c"
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
struct list$1charph* result_394;
int offset_395;
int ovec_max_396;
int n_400;
_Bool _while_condtional19;
int options_401;
int len_402;
int regex_result_403;
int i_404;
int i_405;
_Bool _if_conditional124;
char* str_406;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* str_407;
_Bool _if_conditional127;
int i_408;
char* match_str_409;
_Bool _if_conditional128;
_Bool _if_conditional129;
char* str_410;
struct list$1charph* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
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
    # 1645 "libneo-c-str-gc.c"
    # 1646 "libneo-c-str-gc.c"
    # 1648 "libneo-c-str-gc.c"
    options_391=reg->options;
    # 1649 "libneo-c-str-gc.c"
    str_392=reg->str;
    # 1651 "libneo-c-str-gc.c"
    re_393=reg->re;
    # 1653 "libneo-c-str-gc.c"
    result_394=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1653, "list$1charph"));
    # 1655 "libneo-c-str-gc.c"
    offset_395=0;
    # 1657 "libneo-c-str-gc.c"
    ovec_max_396=16;
    # 1658 "libneo-c-str-gc.c"
    int start_397[ovec_max_396];
    memset(&start_397, 0, sizeof(int)    *(ovec_max_396)    );
    # 1659 "libneo-c-str-gc.c"
    int end_398[ovec_max_396];
    memset(&end_398, 0, sizeof(int)    *(ovec_max_396)    );
    # 1660 "libneo-c-str-gc.c"
    int ovec_value_399[ovec_max_396*3];
    memset(&ovec_value_399, 0, sizeof(int)    *(ovec_max_396*3)    );
    # 1662 "libneo-c-str-gc.c"
    n_400=0;
    # 1720 "libneo-c-str-gc.c"
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        # 1665 "libneo-c-str-gc.c"
        options_401=2097152;
        # 1666 "libneo-c-str-gc.c"
        len_402=strlen(self);
        # 1668 "libneo-c-str-gc.c"
        regex_result_403=pcre_exec(re_393,(struct pcre_extra*)0,self,len_402,offset_395,options_401,ovec_value_399,ovec_max_396*3);
        # 1673 "libneo-c-str-gc.c"
        for(        i_404=0;        i_404<ovec_max_396;        i_404++        ){
            # 1671 "libneo-c-str-gc.c"
            start_397[i_404]=ovec_value_399[i_404*2];
        }
        # 1678 "libneo-c-str-gc.c"
        for(        i_405=0;        i_405<ovec_max_396;        i_405++        ){
            # 1674 "libneo-c-str-gc.c"
            end_398[i_405]=ovec_value_399[i_405*2+1];
        }
        # 1713 "libneo-c-str-gc.c"
        # 1678 "libneo-c-str-gc.c"
        if(_if_conditional124=regex_result_403==1,        _if_conditional124) {
            # 1680 "libneo-c-str-gc.c"
            str_406=charp_substring(self,offset_395,start_397[0]);
            # 1681 "libneo-c-str-gc.c"
            list$1charph_push_back(result_394,str_406);
            # 1689 "libneo-c-str-gc.c"
            # 1683 "libneo-c-str-gc.c"
            if(_if_conditional125=offset_395==end_398[0],            _if_conditional125) {
                # 1684 "libneo-c-str-gc.c"
                offset_395++;
            }
            else {
                # 1687 "libneo-c-str-gc.c"
                offset_395=end_398[0];
            }
        }
        else {
            # 1713 "libneo-c-str-gc.c"
            # 1691 "libneo-c-str-gc.c"
            if(_if_conditional126=regex_result_403>1,            _if_conditional126) {
                # 1692 "libneo-c-str-gc.c"
                str_407=charp_substring(self,offset_395,start_397[0]);
                # 1693 "libneo-c-str-gc.c"
                list$1charph_push_back(result_394,str_407);
                # 1702 "libneo-c-str-gc.c"
                # 1695 "libneo-c-str-gc.c"
                if(_if_conditional127=offset_395==end_398[0],                _if_conditional127) {
                    # 1696 "libneo-c-str-gc.c"
                    offset_395++;
                }
                else {
                    # 1699 "libneo-c-str-gc.c"
                    offset_395=end_398[0];
                }
                # 1706 "libneo-c-str-gc.c"
                for(                i_408=1;                i_408<regex_result_403;                i_408++                ){
                    # 1703 "libneo-c-str-gc.c"
                    match_str_409=charp_substring(self,start_397[i_408],end_398[i_408]);
                    # 1704 "libneo-c-str-gc.c"
                    list$1charph_push_back(result_394,match_str_409);
                }
            }
            else {
                # 1710 "libneo-c-str-gc.c"
                break;
            }
        }
        # 1713 "libneo-c-str-gc.c"
        n_400++;
        # 1718 "libneo-c-str-gc.c"
        # 1715 "libneo-c-str-gc.c"
        if(_if_conditional128=maxsplit==n_400,        _if_conditional128) {
            # 1716 "libneo-c-str-gc.c"
            break;
        }
    }
    # 1725 "libneo-c-str-gc.c"
    # 1720 "libneo-c-str-gc.c"
    if(_if_conditional129=offset_395<charp_length(self),    _if_conditional129) {
        # 1721 "libneo-c-str-gc.c"
        str_410=charp_substring(self,offset_395,-1);
        # 1722 "libneo-c-str-gc.c"
        list$1charph_push_back(result_394,str_410);
    }
    # 1725 "libneo-c-str-gc.c"
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
char* self2_416;
int ovec_max_417;
int result_421;
int offset_422;
int n_423;
_Bool _while_condtional20;
int options_424;
int len_425;
int regex_result_426;
int i_427;
int i_428;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int __result184__;
memset(&__result_obj__, 0, sizeof(void*));
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
    # 1730 "libneo-c-str-gc.c"
    # 1731 "libneo-c-str-gc.c"
    # 1733 "libneo-c-str-gc.c"
    options_413=reg->options;
    # 1734 "libneo-c-str-gc.c"
    str_414=reg->str;
    # 1736 "libneo-c-str-gc.c"
    re_415=reg->re;
    # 1738 "libneo-c-str-gc.c"
    self2_416=charp_reverse(self);
    # 1740 "libneo-c-str-gc.c"
    ovec_max_417=16;
    # 1741 "libneo-c-str-gc.c"
    int start_418[ovec_max_417];
    memset(&start_418, 0, sizeof(int)    *(ovec_max_417)    );
    # 1742 "libneo-c-str-gc.c"
    int end_419[ovec_max_417];
    memset(&end_419, 0, sizeof(int)    *(ovec_max_417)    );
    # 1743 "libneo-c-str-gc.c"
    int ovec_value_420[ovec_max_417*3];
    memset(&ovec_value_420, 0, sizeof(int)    *(ovec_max_417*3)    );
    # 1745 "libneo-c-str-gc.c"
    result_421=default_value;
    # 1747 "libneo-c-str-gc.c"
    offset_422=0;
    # 1749 "libneo-c-str-gc.c"
    n_423=0;
    # 1787 "libneo-c-str-gc.c"
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        # 1752 "libneo-c-str-gc.c"
        options_424=2097152;
        # 1753 "libneo-c-str-gc.c"
        len_425=strlen(self2_416);
        # 1754 "libneo-c-str-gc.c"
        regex_result_426=pcre_exec(re_415,(struct pcre_extra*)0,self2_416,len_425,offset_422,options_424,ovec_value_420,ovec_max_417*3);
        # 1759 "libneo-c-str-gc.c"
        for(        i_427=0;        i_427<ovec_max_417;        i_427++        ){
            # 1757 "libneo-c-str-gc.c"
            start_418[i_427]=ovec_value_420[i_427*2];
        }
        # 1764 "libneo-c-str-gc.c"
        for(        i_428=0;        i_428<ovec_max_417;        i_428++        ){
            # 1760 "libneo-c-str-gc.c"
            end_419[i_428]=ovec_value_420[i_428*2+1];
        }
        # 1785 "libneo-c-str-gc.c"
        # 1764 "libneo-c-str-gc.c"
        if(_if_conditional130=regex_result_426>0,        _if_conditional130) {
            # 1766 "libneo-c-str-gc.c"
            n_423++;
            # 1775 "libneo-c-str-gc.c"
            # 1768 "libneo-c-str-gc.c"
            if(_if_conditional131=offset_422==end_419[0],            _if_conditional131) {
                # 1769 "libneo-c-str-gc.c"
                offset_422++;
            }
            else {
                # 1772 "libneo-c-str-gc.c"
                offset_422=end_419[0];
            }
            # 1779 "libneo-c-str-gc.c"
            # 1775 "libneo-c-str-gc.c"
            if(_if_conditional132=n_423==count,            _if_conditional132) {
                # 1776 "libneo-c-str-gc.c"
                result_421=strlen(self)-end_419[0];
                # 1777 "libneo-c-str-gc.c"
                break;
            }
        }
        else {
            # 1783 "libneo-c-str-gc.c"
            break;
        }
    }
    # 1787 "libneo-c-str-gc.c"
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
int len_441;
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
    # 1792 "libneo-c-str-gc.c"
    offset_429=0;
    # 1794 "libneo-c-str-gc.c"
    ovec_max_430=16;
    # 1795 "libneo-c-str-gc.c"
    int start_431[ovec_max_430];
    memset(&start_431, 0, sizeof(int)    *(ovec_max_430)    );
    # 1796 "libneo-c-str-gc.c"
    int end_432[ovec_max_430];
    memset(&end_432, 0, sizeof(int)    *(ovec_max_430)    );
    # 1797 "libneo-c-str-gc.c"
    int ovec_value_433[ovec_max_430*3];
    memset(&ovec_value_433, 0, sizeof(int)    *(ovec_max_430*3)    );
    # 1799 "libneo-c-str-gc.c"
    # 1800 "libneo-c-str-gc.c"
    # 1802 "libneo-c-str-gc.c"
    options_436=reg->options;
    # 1803 "libneo-c-str-gc.c"
    str_437=reg->str;
    # 1805 "libneo-c-str-gc.c"
    re_438=reg->re;
    # 1807 "libneo-c-str-gc.c"
    n_439=0;
    # 1845 "libneo-c-str-gc.c"
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        # 1810 "libneo-c-str-gc.c"
        options_440=2097152;
        # 1811 "libneo-c-str-gc.c"
        len_441=strlen(self);
        # 1813 "libneo-c-str-gc.c"
        regex_result_442=pcre_exec(re_438,(struct pcre_extra*)0,self,len_441,offset_429,options_440,ovec_value_433,ovec_max_430*3);
        # 1818 "libneo-c-str-gc.c"
        for(        i_443=0;        i_443<ovec_max_430;        i_443++        ){
            # 1816 "libneo-c-str-gc.c"
            start_431[i_443]=ovec_value_433[i_443*2];
        }
        # 1823 "libneo-c-str-gc.c"
        for(        i_444=0;        i_444<ovec_max_430;        i_444++        ){
            # 1819 "libneo-c-str-gc.c"
            end_432[i_444]=ovec_value_433[i_444*2+1];
        }
        # 1843 "libneo-c-str-gc.c"
        # 1823 "libneo-c-str-gc.c"
        if(_if_conditional133=regex_result_442>0,        _if_conditional133) {
            # 1825 "libneo-c-str-gc.c"
            n_439++;
            # 1831 "libneo-c-str-gc.c"
            # 1827 "libneo-c-str-gc.c"
            if(_if_conditional134=count==n_439,            _if_conditional134) {
                # 1828 "libneo-c-str-gc.c"
                __result185__ = (_Bool)1;
                return __result185__;
            }
            # 1837 "libneo-c-str-gc.c"
            # 1831 "libneo-c-str-gc.c"
            if(_if_conditional135=offset_429==end_432[0],            _if_conditional135) {
                # 1832 "libneo-c-str-gc.c"
                offset_429++;
            }
            else {
                # 1835 "libneo-c-str-gc.c"
                offset_429=end_432[0];
            }
        }
        else {
            # 1841 "libneo-c-str-gc.c"
            __result186__ = (_Bool)0;
            return __result186__;
        }
    }
    # 1845 "libneo-c-str-gc.c"
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
struct buffer* result_455;
_Bool _while_condtional22;
int options_456;
int len_457;
int regex_result_458;
int i_459;
int i_460;
_Bool _if_conditional136;
char* str_461;
struct list$1charph* group_strings_462;
char* match_string_463;
char* block_result_464;
_Bool _if_conditional137;
_Bool _if_conditional138;
char* str_465;
_Bool _if_conditional139;
char* str_466;
_Bool _if_conditional140;
struct list$1charph* group_strings_467;
int i_468;
char* match_string_469;
char* match_string_470;
char* block_result_471;
_Bool _if_conditional141;
char* str_472;
char* str_473;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_445, 0, sizeof(int));
memset(&ovec_max_446, 0, sizeof(int));
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
    # 1850 "libneo-c-str-gc.c"
    offset_445=0;
    # 1852 "libneo-c-str-gc.c"
    ovec_max_446=16;
    # 1853 "libneo-c-str-gc.c"
    int start_447[ovec_max_446];
    memset(&start_447, 0, sizeof(int)    *(ovec_max_446)    );
    # 1854 "libneo-c-str-gc.c"
    int end_448[ovec_max_446];
    memset(&end_448, 0, sizeof(int)    *(ovec_max_446)    );
    # 1855 "libneo-c-str-gc.c"
    int ovec_value_449[ovec_max_446*3];
    memset(&ovec_value_449, 0, sizeof(int)    *(ovec_max_446*3)    );
    # 1857 "libneo-c-str-gc.c"
    # 1858 "libneo-c-str-gc.c"
    # 1860 "libneo-c-str-gc.c"
    options_452=reg->options;
    # 1861 "libneo-c-str-gc.c"
    str_453=reg->str;
    # 1863 "libneo-c-str-gc.c"
    re_454=reg->re;
    # 1865 "libneo-c-str-gc.c"
    result_455=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1865, "buffer"));
    # 1946 "libneo-c-str-gc.c"
    while(_while_condtional22=(_Bool)1,    _while_condtional22) {
        # 1868 "libneo-c-str-gc.c"
        options_456=2097152;
        # 1869 "libneo-c-str-gc.c"
        len_457=strlen(self);
        # 1870 "libneo-c-str-gc.c"
        regex_result_458=pcre_exec(re_454,(struct pcre_extra*)0,self,len_457,offset_445,options_456,ovec_value_449,ovec_max_446*3);
        # 1875 "libneo-c-str-gc.c"
        for(        i_459=0;        i_459<ovec_max_446;        i_459++        ){
            # 1873 "libneo-c-str-gc.c"
            start_447[i_459]=ovec_value_449[i_459*2];
        }
        # 1880 "libneo-c-str-gc.c"
        for(        i_460=0;        i_460<ovec_max_446;        i_460++        ){
            # 1876 "libneo-c-str-gc.c"
            end_448[i_460]=ovec_value_449[i_460*2+1];
        }
        # 1945 "libneo-c-str-gc.c"
        # 1880 "libneo-c-str-gc.c"
        if(_if_conditional136=regex_result_458==1,        _if_conditional136) {
            # 1881 "libneo-c-str-gc.c"
            str_461=charp_substring(self,offset_445,start_447[0]);
            # 1883 "libneo-c-str-gc.c"
            buffer_append_str(result_455,str_461);
            # 1885 "libneo-c-str-gc.c"
            group_strings_462=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1885, "list$1charph"));
            # 1887 "libneo-c-str-gc.c"
            match_string_463=charp_substring(self,start_447[0],end_448[0]);
            # 1889 "libneo-c-str-gc.c"
            list$1charph_push_back(group_strings_462,charp_substring(self,start_447[0],end_448[0]));
            # 1891 "libneo-c-str-gc.c"
            block_result_464=block(parent,match_string_463,group_strings_462);
            # 1893 "libneo-c-str-gc.c"
            buffer_append_str(result_455,block_result_464);
            # 1902 "libneo-c-str-gc.c"
            # 1895 "libneo-c-str-gc.c"
            if(_if_conditional137=offset_445==end_448[0],            _if_conditional137) {
                # 1896 "libneo-c-str-gc.c"
                offset_445++;
            }
            else {
                # 1899 "libneo-c-str-gc.c"
                offset_445=end_448[0];
            }
            # 1907 "libneo-c-str-gc.c"
            # 1902 "libneo-c-str-gc.c"
            if(_if_conditional138=!reg->global,            _if_conditional138) {
                # 1903 "libneo-c-str-gc.c"
                str_465=charp_substring(self,offset_445,-1);
                # 1904 "libneo-c-str-gc.c"
                buffer_append_str(result_455,str_465);
                # 1905 "libneo-c-str-gc.c"
                break;
            }
        }
        else {
            # 1945 "libneo-c-str-gc.c"
            # 1909 "libneo-c-str-gc.c"
            if(_if_conditional139=regex_result_458>1,            _if_conditional139) {
                # 1910 "libneo-c-str-gc.c"
                str_466=charp_substring(self,offset_445,start_447[0]);
                # 1911 "libneo-c-str-gc.c"
                buffer_append_str(result_455,str_466);
                # 1920 "libneo-c-str-gc.c"
                # 1913 "libneo-c-str-gc.c"
                if(_if_conditional140=offset_445==end_448[0],                _if_conditional140) {
                    # 1914 "libneo-c-str-gc.c"
                    offset_445++;
                }
                else {
                    # 1917 "libneo-c-str-gc.c"
                    offset_445=end_448[0];
                }
                # 1920 "libneo-c-str-gc.c"
                group_strings_467=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1920, "list$1charph"));
                # 1927 "libneo-c-str-gc.c"
                for(                i_468=1;                i_468<regex_result_458;                i_468++                ){
                    # 1923 "libneo-c-str-gc.c"
                    match_string_469=charp_substring(self,start_447[i_468],end_448[i_468]);
                    # 1924 "libneo-c-str-gc.c"
                    list$1charph_push_back(group_strings_467,match_string_469);
                }
                # 1927 "libneo-c-str-gc.c"
                match_string_470=charp_substring(self,start_447[0],end_448[0]);
                # 1929 "libneo-c-str-gc.c"
                block_result_471=block(parent,match_string_470,group_strings_467);
                # 1931 "libneo-c-str-gc.c"
                buffer_append_str(result_455,block_result_471);
                # 1938 "libneo-c-str-gc.c"
                # 1933 "libneo-c-str-gc.c"
                if(_if_conditional141=!reg->global,                _if_conditional141) {
                    # 1934 "libneo-c-str-gc.c"
                    str_472=charp_substring(self,offset_445,-1);
                    # 1935 "libneo-c-str-gc.c"
                    buffer_append_str(result_455,str_472);
                    # 1936 "libneo-c-str-gc.c"
                    break;
                }
            }
            else {
                # 1941 "libneo-c-str-gc.c"
                str_473=charp_substring(self,offset_445,-1);
                # 1942 "libneo-c-str-gc.c"
                buffer_append_str(result_455,str_473);
                # 1943 "libneo-c-str-gc.c"
                break;
            }
        }
    }
    # 1946 "libneo-c-str-gc.c"
    __result188__ = __result_obj__ = buffer_to_string(result_455);
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
struct buffer* result_484;
int n_485;
_Bool _while_condtional23;
int options_486;
int len_487;
int regex_result_488;
int i_489;
int i_490;
_Bool _if_conditional142;
char* str_491;
struct list$1charph* group_strings_492;
char* match_string_493;
char* block_result_494;
_Bool _if_conditional143;
_Bool _if_conditional144;
char* str_495;
_Bool _if_conditional145;
char* str_496;
_Bool _if_conditional146;
char* str_497;
_Bool _if_conditional147;
struct list$1charph* group_strings_498;
int i_499;
char* match_string_500;
char* match_string_501;
char* block_result_502;
_Bool _if_conditional148;
char* str_503;
_Bool _if_conditional149;
char* str_504;
char* str_505;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_474, 0, sizeof(int));
memset(&ovec_max_475, 0, sizeof(int));
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
    # 1951 "libneo-c-str-gc.c"
    offset_474=0;
    # 1953 "libneo-c-str-gc.c"
    ovec_max_475=16;
    # 1954 "libneo-c-str-gc.c"
    int start_476[ovec_max_475];
    memset(&start_476, 0, sizeof(int)    *(ovec_max_475)    );
    # 1955 "libneo-c-str-gc.c"
    int end_477[ovec_max_475];
    memset(&end_477, 0, sizeof(int)    *(ovec_max_475)    );
    # 1956 "libneo-c-str-gc.c"
    int ovec_value_478[ovec_max_475*3];
    memset(&ovec_value_478, 0, sizeof(int)    *(ovec_max_475*3)    );
    # 1958 "libneo-c-str-gc.c"
    # 1959 "libneo-c-str-gc.c"
    # 1961 "libneo-c-str-gc.c"
    options_481=reg->options;
    # 1962 "libneo-c-str-gc.c"
    str_482=reg->str;
    # 1964 "libneo-c-str-gc.c"
    re_483=reg->re;
    # 1966 "libneo-c-str-gc.c"
    result_484=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str-gc.c", 1966, "buffer"));
    # 1968 "libneo-c-str-gc.c"
    n_485=0;
    # 2065 "libneo-c-str-gc.c"
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        # 1971 "libneo-c-str-gc.c"
        options_486=2097152;
        # 1972 "libneo-c-str-gc.c"
        len_487=strlen(self);
        # 1973 "libneo-c-str-gc.c"
        regex_result_488=pcre_exec(re_483,(struct pcre_extra*)0,self,len_487,offset_474,options_486,ovec_value_478,ovec_max_475*3);
        # 1978 "libneo-c-str-gc.c"
        for(        i_489=0;        i_489<ovec_max_475;        i_489++        ){
            # 1976 "libneo-c-str-gc.c"
            start_476[i_489]=ovec_value_478[i_489*2];
        }
        # 1983 "libneo-c-str-gc.c"
        for(        i_490=0;        i_490<ovec_max_475;        i_490++        ){
            # 1979 "libneo-c-str-gc.c"
            end_477[i_490]=ovec_value_478[i_490*2+1];
        }
        # 2063 "libneo-c-str-gc.c"
        # 1983 "libneo-c-str-gc.c"
        if(_if_conditional142=regex_result_488==1,        _if_conditional142) {
            # 1984 "libneo-c-str-gc.c"
            n_485++;
            # 1985 "libneo-c-str-gc.c"
            str_491=charp_substring(self,offset_474,start_476[0]);
            # 1987 "libneo-c-str-gc.c"
            buffer_append_str(result_484,str_491);
            # 1989 "libneo-c-str-gc.c"
            group_strings_492=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 1989, "list$1charph"));
            # 1991 "libneo-c-str-gc.c"
            list$1charph_push_back(group_strings_492,charp_substring(self,start_476[0],end_477[0]));
            # 1993 "libneo-c-str-gc.c"
            match_string_493=charp_substring(self,start_476[0],end_477[0]);
            # 1995 "libneo-c-str-gc.c"
            block_result_494=block(parent,match_string_493,group_strings_492);
            # 1997 "libneo-c-str-gc.c"
            buffer_append_str(result_484,block_result_494);
            # 2006 "libneo-c-str-gc.c"
            # 1999 "libneo-c-str-gc.c"
            if(_if_conditional143=offset_474==end_477[0],            _if_conditional143) {
                # 2000 "libneo-c-str-gc.c"
                offset_474++;
            }
            else {
                # 2003 "libneo-c-str-gc.c"
                offset_474=end_477[0];
            }
            # 2012 "libneo-c-str-gc.c"
            # 2006 "libneo-c-str-gc.c"
            if(_if_conditional144=!reg->global,            _if_conditional144) {
                # 2007 "libneo-c-str-gc.c"
                str_495=charp_substring(self,offset_474,-1);
                # 2008 "libneo-c-str-gc.c"
                buffer_append_str(result_484,str_495);
                # 2009 "libneo-c-str-gc.c"
                break;
            }
            # 2017 "libneo-c-str-gc.c"
            # 2012 "libneo-c-str-gc.c"
            if(_if_conditional145=n_485==count,            _if_conditional145) {
                # 2013 "libneo-c-str-gc.c"
                str_496=charp_substring(self,offset_474,-1);
                # 2014 "libneo-c-str-gc.c"
                buffer_append_str(result_484,str_496);
                # 2015 "libneo-c-str-gc.c"
                break;
            }
        }
        else {
            # 2063 "libneo-c-str-gc.c"
            # 2019 "libneo-c-str-gc.c"
            if(_if_conditional146=regex_result_488>1,            _if_conditional146) {
                # 2020 "libneo-c-str-gc.c"
                n_485++;
                # 2022 "libneo-c-str-gc.c"
                str_497=charp_substring(self,offset_474,start_476[0]);
                # 2023 "libneo-c-str-gc.c"
                buffer_append_str(result_484,str_497);
                # 2032 "libneo-c-str-gc.c"
                # 2025 "libneo-c-str-gc.c"
                if(_if_conditional147=offset_474==end_477[0],                _if_conditional147) {
                    # 2026 "libneo-c-str-gc.c"
                    offset_474++;
                }
                else {
                    # 2029 "libneo-c-str-gc.c"
                    offset_474=end_477[0];
                }
                # 2032 "libneo-c-str-gc.c"
                group_strings_498=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str-gc.c", 2032, "list$1charph"));
                # 2039 "libneo-c-str-gc.c"
                for(                i_499=1;                i_499<regex_result_488;                i_499++                ){
                    # 2035 "libneo-c-str-gc.c"
                    match_string_500=charp_substring(self,start_476[i_499],end_477[i_499]);
                    # 2036 "libneo-c-str-gc.c"
                    list$1charph_push_back(group_strings_498,match_string_500);
                }
                # 2039 "libneo-c-str-gc.c"
                match_string_501=charp_substring(self,start_476[0],end_477[0]);
                # 2041 "libneo-c-str-gc.c"
                block_result_502=block(parent,match_string_501,group_strings_498);
                # 2043 "libneo-c-str-gc.c"
                buffer_append_str(result_484,block_result_502);
                # 2051 "libneo-c-str-gc.c"
                # 2045 "libneo-c-str-gc.c"
                if(_if_conditional148=!reg->global,                _if_conditional148) {
                    # 2046 "libneo-c-str-gc.c"
                    str_503=charp_substring(self,offset_474,-1);
                    # 2047 "libneo-c-str-gc.c"
                    buffer_append_str(result_484,str_503);
                    # 2048 "libneo-c-str-gc.c"
                    break;
                }
                # 2056 "libneo-c-str-gc.c"
                # 2051 "libneo-c-str-gc.c"
                if(_if_conditional149=n_485==count,                _if_conditional149) {
                    # 2052 "libneo-c-str-gc.c"
                    str_504=charp_substring(self,offset_474,-1);
                    # 2053 "libneo-c-str-gc.c"
                    buffer_append_str(result_484,str_504);
                    # 2054 "libneo-c-str-gc.c"
                    break;
                }
            }
            else {
                # 2059 "libneo-c-str-gc.c"
                str_505=charp_substring(self,offset_474,-1);
                # 2060 "libneo-c-str-gc.c"
                buffer_append_str(result_484,str_505);
                # 2061 "libneo-c-str-gc.c"
                break;
            }
        }
    }
    # 2065 "libneo-c-str-gc.c"
    __result189__ = __result_obj__ = buffer_to_string(result_484);
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
    # 2070 "libneo-c-str-gc.c"
    # 2072 "libneo-c-str-gc.c"
    result_506=0;
    # 2073 "libneo-c-str-gc.c"
    p_507=value;
    # 2078 "libneo-c-str-gc.c"
    while(_while_condtional24=*p_507,    _while_condtional24) {
        # 2075 "libneo-c-str-gc.c"
        result_506+=(*p_507);
        # 2076 "libneo-c-str-gc.c"
        p_507++;
    }
    # 2078 "libneo-c-str-gc.c"
    __result190__ = result_506;
    return __result190__;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2089 "libneo-c-str-gc.c"
    __result192__ = wcscmp(left,right)==0;
    return __result192__;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2099 "libneo-c-str-gc.c"
    __result194__ = left==right;
    return __result194__;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2104 "libneo-c-str-gc.c"
    __result195__ = left!=right;
    return __result195__;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
void* __result_obj__;
unsigned int __result196__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2109 "libneo-c-str-gc.c"
    __result196__ = value;
    return __result196__;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result197__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2114 "libneo-c-str-gc.c"
    __result197__ = left==right;
    return __result197__;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2119 "libneo-c-str-gc.c"
    __result198__ = __result_obj__ = xsprintf("%ls",wc);
    return __result198__;
}

char* string_chomp(char* str){
void* __result_obj__;
char* result_508;
_Bool _if_conditional150;
char* __result199__;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_508, 0, sizeof(char*));
    # 2124 "libneo-c-str-gc.c"
    result_508=__builtin_string(str);
    # 2130 "libneo-c-str-gc.c"
    # 2126 "libneo-c-str-gc.c"
    if(_if_conditional150=result_508[string_length(result_508)-1]==10,    _if_conditional150) {
        # 2127 "libneo-c-str-gc.c"
        __result199__ = __result_obj__ = string_substring(result_508,0,-2);
        return __result199__;
    }
    # 2130 "libneo-c-str-gc.c"
    __result200__ = __result_obj__ = result_508;
    return __result200__;
}

