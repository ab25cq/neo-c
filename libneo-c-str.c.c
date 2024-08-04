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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX607, int anonymous_var_nameX608, const char** anonymous_var_nameX609, int* anonymous_var_nameX610, const unsigned char* anonymous_var_nameX611);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX612, int anonymous_var_nameX613, const char** anonymous_var_nameX614, int* anonymous_var_nameX615, const unsigned char* anonymous_var_nameX616);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX617, int anonymous_var_nameX618, const char** anonymous_var_nameX619, int* anonymous_var_nameX620, const unsigned char* anonymous_var_nameX621);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX622, int anonymous_var_nameX623, int* anonymous_var_nameX624, const char** anonymous_var_nameX625, int* anonymous_var_nameX626, const unsigned char* anonymous_var_nameX627);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX628, int anonymous_var_nameX629, int* anonymous_var_nameX630, const char** anonymous_var_nameX631, int* anonymous_var_nameX632, const unsigned char* anonymous_var_nameX633);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX634, int anonymous_var_nameX635, int* anonymous_var_nameX636, const char** anonymous_var_nameX637, int* anonymous_var_nameX638, const unsigned char* anonymous_var_nameX639);

int pcre_config(int anonymous_var_nameX640, void* anonymous_var_nameX641);

int pcre16_config(int anonymous_var_nameX642, void* anonymous_var_nameX643);

int pcre32_config(int anonymous_var_nameX644, void* anonymous_var_nameX645);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX646, const char* anonymous_var_nameX647, int* anonymous_var_nameX648, int anonymous_var_nameX649, const char* anonymous_var_nameX650, char* anonymous_var_nameX651, int anonymous_var_nameX652);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX653, const unsigned short int* anonymous_var_nameX654, int* anonymous_var_nameX655, int anonymous_var_nameX656, const unsigned short int* anonymous_var_nameX657, unsigned short int* anonymous_var_nameX658, int anonymous_var_nameX659);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX660, const unsigned int* anonymous_var_nameX661, int* anonymous_var_nameX662, int anonymous_var_nameX663, const unsigned int* anonymous_var_nameX664, unsigned int* anonymous_var_nameX665, int anonymous_var_nameX666);

int pcre_copy_substring(const char* anonymous_var_nameX667, int* anonymous_var_nameX668, int anonymous_var_nameX669, int anonymous_var_nameX670, char* anonymous_var_nameX671, int anonymous_var_nameX672);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX673, int* anonymous_var_nameX674, int anonymous_var_nameX675, int anonymous_var_nameX676, unsigned short int* anonymous_var_nameX677, int anonymous_var_nameX678);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX679, int* anonymous_var_nameX680, int anonymous_var_nameX681, int anonymous_var_nameX682, unsigned int* anonymous_var_nameX683, int anonymous_var_nameX684);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX685, const struct pcre_extra* anonymous_var_nameX686, const char* anonymous_var_nameX687, int anonymous_var_nameX688, int anonymous_var_nameX689, int anonymous_var_nameX690, int* anonymous_var_nameX691, int anonymous_var_nameX692, int* anonymous_var_nameX693, int anonymous_var_nameX694);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX695, const struct pcre16_extra* anonymous_var_nameX696, const unsigned short int* anonymous_var_nameX697, int anonymous_var_nameX698, int anonymous_var_nameX699, int anonymous_var_nameX700, int* anonymous_var_nameX701, int anonymous_var_nameX702, int* anonymous_var_nameX703, int anonymous_var_nameX704);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX705, const struct pcre32_extra* anonymous_var_nameX706, const unsigned int* anonymous_var_nameX707, int anonymous_var_nameX708, int anonymous_var_nameX709, int anonymous_var_nameX710, int* anonymous_var_nameX711, int anonymous_var_nameX712, int* anonymous_var_nameX713, int anonymous_var_nameX714);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX715, const struct pcre_extra* anonymous_var_nameX716, const char* anonymous_var_nameX717, int anonymous_var_nameX718, int anonymous_var_nameX719, int anonymous_var_nameX720, int* anonymous_var_nameX721, int anonymous_var_nameX722);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX723, const struct pcre16_extra* anonymous_var_nameX724, const unsigned short int* anonymous_var_nameX725, int anonymous_var_nameX726, int anonymous_var_nameX727, int anonymous_var_nameX728, int* anonymous_var_nameX729, int anonymous_var_nameX730);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX731, const struct pcre32_extra* anonymous_var_nameX732, const unsigned int* anonymous_var_nameX733, int anonymous_var_nameX734, int anonymous_var_nameX735, int anonymous_var_nameX736, int* anonymous_var_nameX737, int anonymous_var_nameX738);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX739, const struct pcre_extra* anonymous_var_nameX740, const char* anonymous_var_nameX741, int anonymous_var_nameX742, int anonymous_var_nameX743, int anonymous_var_nameX744, int* anonymous_var_nameX745, int anonymous_var_nameX746, struct real_pcre_jit_stack* anonymous_var_nameX747);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX748, const struct pcre16_extra* anonymous_var_nameX749, const unsigned short int* anonymous_var_nameX750, int anonymous_var_nameX751, int anonymous_var_nameX752, int anonymous_var_nameX753, int* anonymous_var_nameX754, int anonymous_var_nameX755, struct real_pcre16_jit_stack* anonymous_var_nameX756);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX757, const struct pcre32_extra* anonymous_var_nameX758, const unsigned int* anonymous_var_nameX759, int anonymous_var_nameX760, int anonymous_var_nameX761, int anonymous_var_nameX762, int* anonymous_var_nameX763, int anonymous_var_nameX764, struct real_pcre32_jit_stack* anonymous_var_nameX765);

void pcre_free_substring(const char* anonymous_var_nameX766);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX767);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX768);

void pcre_free_substring_list(const char** anonymous_var_nameX769);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX770);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX771);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX772, const struct pcre_extra* anonymous_var_nameX773, int anonymous_var_nameX774, void* anonymous_var_nameX775);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX776, const struct pcre16_extra* anonymous_var_nameX777, int anonymous_var_nameX778, void* anonymous_var_nameX779);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX780, const struct pcre32_extra* anonymous_var_nameX781, int anonymous_var_nameX782, void* anonymous_var_nameX783);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX784, const char* anonymous_var_nameX785, int* anonymous_var_nameX786, int anonymous_var_nameX787, const char* anonymous_var_nameX788, const char** anonymous_var_nameX789);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX790, const unsigned short int* anonymous_var_nameX791, int* anonymous_var_nameX792, int anonymous_var_nameX793, const unsigned short int* anonymous_var_nameX794, const unsigned short int** anonymous_var_nameX795);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX796, const unsigned int* anonymous_var_nameX797, int* anonymous_var_nameX798, int anonymous_var_nameX799, const unsigned int* anonymous_var_nameX800, const unsigned int** anonymous_var_nameX801);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX802, const char* anonymous_var_nameX803);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX804, const unsigned short int* anonymous_var_nameX805);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX806, const unsigned int* anonymous_var_nameX807);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX808, const char* anonymous_var_nameX809, char** anonymous_var_nameX810, char** anonymous_var_nameX811);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX812, const unsigned short int* anonymous_var_nameX813, unsigned short int** anonymous_var_nameX814, unsigned short int** anonymous_var_nameX815);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX816, const unsigned int* anonymous_var_nameX817, unsigned int** anonymous_var_nameX818, unsigned int** anonymous_var_nameX819);

int pcre_get_substring(const char* anonymous_var_nameX820, int* anonymous_var_nameX821, int anonymous_var_nameX822, int anonymous_var_nameX823, const char** anonymous_var_nameX824);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX825, int* anonymous_var_nameX826, int anonymous_var_nameX827, int anonymous_var_nameX828, const unsigned short int** anonymous_var_nameX829);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX830, int* anonymous_var_nameX831, int anonymous_var_nameX832, int anonymous_var_nameX833, const unsigned int** anonymous_var_nameX834);

int pcre_get_substring_list(const char* anonymous_var_nameX835, int* anonymous_var_nameX836, int anonymous_var_nameX837, const char*** anonymous_var_nameX838);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX839, int* anonymous_var_nameX840, int anonymous_var_nameX841, const unsigned short int*** anonymous_var_nameX842);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX843, int* anonymous_var_nameX844, int anonymous_var_nameX845, const unsigned int*** anonymous_var_nameX846);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX847, int anonymous_var_nameX848);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX849, int anonymous_var_nameX850);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX851, int anonymous_var_nameX852);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX853, int anonymous_var_nameX854, const char** anonymous_var_nameX855);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX856, int anonymous_var_nameX857, const char** anonymous_var_nameX858);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX859, int anonymous_var_nameX860, const char** anonymous_var_nameX861);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX862);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX863);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX864);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX865, struct pcre_extra* anonymous_var_nameX866, const unsigned char* anonymous_var_nameX867);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX868, struct pcre16_extra* anonymous_var_nameX869, const unsigned char* anonymous_var_nameX870);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX871, struct pcre32_extra* anonymous_var_nameX872, const unsigned char* anonymous_var_nameX873);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX874, const unsigned short int* anonymous_var_nameX875, int anonymous_var_nameX876, int* anonymous_var_nameX877, int anonymous_var_nameX878);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX879, const unsigned int* anonymous_var_nameX880, int anonymous_var_nameX881, int* anonymous_var_nameX882, int anonymous_var_nameX883);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX884, int anonymous_var_nameX885);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX886, int anonymous_var_nameX887);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX888, int anonymous_var_nameX889);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX890);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX891);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX892);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX893, struct real_pcre_jit_stack* (*anonymous_var_nameX894)(void*), void* anonymous_var_nameX895);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX896, struct real_pcre16_jit_stack* (*anonymous_var_nameX897)(void*), void* anonymous_var_nameX898);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX899, struct real_pcre32_jit_stack* (*anonymous_var_nameX900)(void*), void* anonymous_var_nameX901);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

unsigned int* wcscpy(unsigned int* anonymous_var_nameX902, const unsigned int* anonymous_var_nameX903);

unsigned int* wcsncpy(unsigned int* anonymous_var_nameX904, const unsigned int* anonymous_var_nameX905, unsigned long int anonymous_var_nameX906);

unsigned int* wcscat(unsigned int* anonymous_var_nameX907, const unsigned int* anonymous_var_nameX908);

unsigned int* wcsncat(unsigned int* anonymous_var_nameX909, const unsigned int* anonymous_var_nameX910, unsigned long int anonymous_var_nameX911);

int wcscmp(const unsigned int* anonymous_var_nameX912, const unsigned int* anonymous_var_nameX913);

int wcsncmp(const unsigned int* anonymous_var_nameX914, const unsigned int* anonymous_var_nameX915, unsigned long int anonymous_var_nameX916);

int wcscoll(const unsigned int* anonymous_var_nameX917, const unsigned int* anonymous_var_nameX918);

unsigned long int wcsxfrm(unsigned int* anonymous_var_nameX919, const unsigned int* anonymous_var_nameX920, unsigned long int anonymous_var_nameX921);

unsigned int* wcschr(const unsigned int* anonymous_var_nameX922, unsigned int anonymous_var_nameX923);

unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX924, unsigned int anonymous_var_nameX925);

unsigned long int wcscspn(const unsigned int* anonymous_var_nameX926, const unsigned int* anonymous_var_nameX927);

unsigned long int wcsspn(const unsigned int* anonymous_var_nameX928, const unsigned int* anonymous_var_nameX929);

unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX930, const unsigned int* anonymous_var_nameX931);

unsigned int* wcstok(unsigned int* anonymous_var_nameX932, const unsigned int* anonymous_var_nameX933, unsigned int** anonymous_var_nameX934);

unsigned long int wcslen(const unsigned int* anonymous_var_nameX935);

unsigned int* wcsstr(const unsigned int* anonymous_var_nameX936, const unsigned int* anonymous_var_nameX937);

unsigned int* wcswcs(const unsigned int* anonymous_var_nameX938, const unsigned int* anonymous_var_nameX939);

unsigned int* wmemchr(const unsigned int* anonymous_var_nameX940, unsigned int anonymous_var_nameX941, unsigned long int anonymous_var_nameX942);

int wmemcmp(const unsigned int* anonymous_var_nameX943, const unsigned int* anonymous_var_nameX944, unsigned long int anonymous_var_nameX945);

unsigned int* wmemcpy(unsigned int* anonymous_var_nameX946, const unsigned int* anonymous_var_nameX947, unsigned long int anonymous_var_nameX948);

unsigned int* wmemmove(unsigned int* anonymous_var_nameX949, const unsigned int* anonymous_var_nameX950, unsigned long int anonymous_var_nameX951);

unsigned int* wmemset(unsigned int* anonymous_var_nameX952, unsigned int anonymous_var_nameX953, unsigned long int anonymous_var_nameX954);

unsigned int btowc(int anonymous_var_nameX955);

int wctob(unsigned int anonymous_var_nameX956);

int mbsinit(const struct __mbstate_t* anonymous_var_nameX957);

unsigned long int mbrtowc(unsigned int* anonymous_var_nameX958, const char* anonymous_var_nameX959, unsigned long int anonymous_var_nameX960, struct __mbstate_t* anonymous_var_nameX961);

unsigned long int wcrtomb(char* anonymous_var_nameX962, unsigned int anonymous_var_nameX963, struct __mbstate_t* anonymous_var_nameX964);

unsigned long int mbrlen(const char* anonymous_var_nameX965, unsigned long int anonymous_var_nameX966, struct __mbstate_t* anonymous_var_nameX967);

unsigned long int mbsrtowcs(unsigned int* anonymous_var_nameX968, const char** anonymous_var_nameX969, unsigned long int anonymous_var_nameX970, struct __mbstate_t* anonymous_var_nameX971);

unsigned long int wcsrtombs(char* anonymous_var_nameX972, const unsigned int** anonymous_var_nameX973, unsigned long int anonymous_var_nameX974, struct __mbstate_t* anonymous_var_nameX975);

float wcstof(const unsigned int* anonymous_var_nameX976, unsigned int** anonymous_var_nameX977);

double wcstod(const unsigned int* anonymous_var_nameX978, unsigned int** anonymous_var_nameX979);

long double wcstold(const unsigned int* anonymous_var_nameX980, unsigned int** anonymous_var_nameX981);

long wcstol(const unsigned int* anonymous_var_nameX982, unsigned int** anonymous_var_nameX983, int anonymous_var_nameX984);

unsigned long int wcstoul(const unsigned int* anonymous_var_nameX985, unsigned int** anonymous_var_nameX986, int anonymous_var_nameX987);

long long wcstoll(const unsigned int* anonymous_var_nameX988, unsigned int** anonymous_var_nameX989, int anonymous_var_nameX990);

unsigned long long wcstoull(const unsigned int* anonymous_var_nameX991, unsigned int** anonymous_var_nameX992, int anonymous_var_nameX993);

int fwide(struct _IO_FILE* anonymous_var_nameX994, int anonymous_var_nameX995);

int wprintf(const unsigned int* anonymous_var_nameX996, ...);

int fwprintf(struct _IO_FILE* anonymous_var_nameX997, const unsigned int* anonymous_var_nameX998, ...);

int swprintf(unsigned int* anonymous_var_nameX999, unsigned long int anonymous_var_nameX1000, const unsigned int* anonymous_var_nameX1001, ...);

int vwprintf(const unsigned int* anonymous_var_nameX1002, va_list anonymous_var_nameX1003);

int vfwprintf(struct _IO_FILE* anonymous_var_nameX1004, const unsigned int* anonymous_var_nameX1005, va_list anonymous_var_nameX1006);

int vswprintf(unsigned int* anonymous_var_nameX1007, unsigned long int anonymous_var_nameX1008, const unsigned int* anonymous_var_nameX1009, va_list anonymous_var_nameX1010);

int wscanf(const unsigned int* anonymous_var_nameX1011, ...);

int fwscanf(struct _IO_FILE* anonymous_var_nameX1012, const unsigned int* anonymous_var_nameX1013, ...);

int swscanf(const unsigned int* anonymous_var_nameX1014, const unsigned int* anonymous_var_nameX1015, ...);

int vwscanf(const unsigned int* anonymous_var_nameX1016, va_list anonymous_var_nameX1017);

int vfwscanf(struct _IO_FILE* anonymous_var_nameX1018, const unsigned int* anonymous_var_nameX1019, va_list anonymous_var_nameX1020);

int vswscanf(const unsigned int* anonymous_var_nameX1021, const unsigned int* anonymous_var_nameX1022, va_list anonymous_var_nameX1023);

unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1024);

unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1025);

unsigned int getwchar();

unsigned int fputwc(unsigned int anonymous_var_nameX1026, struct _IO_FILE* anonymous_var_nameX1027);

unsigned int putwc(unsigned int anonymous_var_nameX1028, struct _IO_FILE* anonymous_var_nameX1029);

unsigned int putwchar(unsigned int anonymous_var_nameX1030);

unsigned int* fgetws(unsigned int* anonymous_var_nameX1031, int anonymous_var_nameX1032, struct _IO_FILE* anonymous_var_nameX1033);

int fputws(const unsigned int* anonymous_var_nameX1034, struct _IO_FILE* anonymous_var_nameX1035);

unsigned int ungetwc(unsigned int anonymous_var_nameX1036, struct _IO_FILE* anonymous_var_nameX1037);

unsigned long int wcsftime(unsigned int* anonymous_var_nameX1038, unsigned long int anonymous_var_nameX1039, const unsigned int* anonymous_var_nameX1040, const struct tm* anonymous_var_nameX1041);

unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1042);

unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1043);

unsigned int getwchar_unlocked();

unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1044, struct _IO_FILE* anonymous_var_nameX1045);

unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1046, struct _IO_FILE* anonymous_var_nameX1047);

unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1048);

unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1049, int anonymous_var_nameX1050, struct _IO_FILE* anonymous_var_nameX1051);

int fputws_unlocked(const unsigned int* anonymous_var_nameX1052, struct _IO_FILE* anonymous_var_nameX1053);

unsigned long int wcsftime_l(unsigned int* anonymous_var_nameX1054, unsigned long int anonymous_var_nameX1055, const unsigned int* anonymous_var_nameX1056, const struct tm* anonymous_var_nameX1057, struct __locale_struct* anonymous_var_nameX1058);

struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1059, unsigned long int* anonymous_var_nameX1060);

unsigned long int mbsnrtowcs(unsigned int* anonymous_var_nameX1061, const char** anonymous_var_nameX1062, unsigned long int anonymous_var_nameX1063, unsigned long int anonymous_var_nameX1064, struct __mbstate_t* anonymous_var_nameX1065);

unsigned long int wcsnrtombs(char* anonymous_var_nameX1066, const unsigned int** anonymous_var_nameX1067, unsigned long int anonymous_var_nameX1068, unsigned long int anonymous_var_nameX1069, struct __mbstate_t* anonymous_var_nameX1070);

unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1071);

unsigned long int wcsnlen(const unsigned int* anonymous_var_nameX1072, unsigned long int anonymous_var_nameX1073);

unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1074, const unsigned int* anonymous_var_nameX1075);

unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1076, const unsigned int* anonymous_var_nameX1077, unsigned long int anonymous_var_nameX1078);

int wcscasecmp(const unsigned int* anonymous_var_nameX1079, const unsigned int* anonymous_var_nameX1080);

int wcscasecmp_l(const unsigned int* anonymous_var_nameX1081, const unsigned int* anonymous_var_nameX1082, struct __locale_struct* anonymous_var_nameX1083);

int wcsncasecmp(const unsigned int* anonymous_var_nameX1084, const unsigned int* anonymous_var_nameX1085, unsigned long int anonymous_var_nameX1086);

int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1087, const unsigned int* anonymous_var_nameX1088, unsigned long int anonymous_var_nameX1089, struct __locale_struct* anonymous_var_nameX1090);

int wcscoll_l(const unsigned int* anonymous_var_nameX1091, const unsigned int* anonymous_var_nameX1092, struct __locale_struct* anonymous_var_nameX1093);

unsigned long int wcsxfrm_l(unsigned int* anonymous_var_nameX1094, const unsigned int* anonymous_var_nameX1095, unsigned long int anonymous_var_nameX1096, struct __locale_struct* anonymous_var_nameX1097);

int wcwidth(unsigned int anonymous_var_nameX1098);

int wcswidth(const unsigned int* anonymous_var_nameX1099, unsigned long int anonymous_var_nameX1100);

int iswalnum(unsigned int anonymous_var_nameX1101);

int iswalpha(unsigned int anonymous_var_nameX1102);

int iswblank(unsigned int anonymous_var_nameX1103);

int iswcntrl(unsigned int anonymous_var_nameX1104);

int iswdigit(unsigned int anonymous_var_nameX1105);

int iswgraph(unsigned int anonymous_var_nameX1106);

int iswlower(unsigned int anonymous_var_nameX1107);

int iswprint(unsigned int anonymous_var_nameX1108);

int iswpunct(unsigned int anonymous_var_nameX1109);

int iswspace(unsigned int anonymous_var_nameX1110);

int iswupper(unsigned int anonymous_var_nameX1111);

int iswxdigit(unsigned int anonymous_var_nameX1112);

int iswctype(unsigned int anonymous_var_nameX1113, unsigned long int anonymous_var_nameX1114);

unsigned int towlower(unsigned int anonymous_var_nameX1115);

unsigned int towupper(unsigned int anonymous_var_nameX1116);

unsigned long int wctype(const char* anonymous_var_nameX1117);

char* dirname(char* anonymous_var_nameX1118);

char* basename(char* anonymous_var_nameX1119);

static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2111, "buffer"))))));
    come_call_finalizer3(__right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result1__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2118, "buffer"))))));
    come_call_finalizer3(__right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result2__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_2;
struct buffer* __result3__;
    result_2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2125, "buffer"))))));
    come_call_finalizer3(__right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result3__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_3;
struct buffer* __result4__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2132, "buffer"))))));
    come_call_finalizer3(__right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result4__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_4;
struct buffer* __result5__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2139, "buffer"))))));
    come_call_finalizer3(__right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result5__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_5;
struct buffer* __result6__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2146, "buffer"))))));
    come_call_finalizer3(__right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result6__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
struct smart_pointer$1char* result_6;
void* __right_value13 = (void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2162, "smart_pointer$1char"));
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_6->p=result_6->memory->buf;
    __result7__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
struct smart_pointer$1char* result_7;
void* __right_value15 = (void*)0;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2172, "smart_pointer$1char"));
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_7->p=(char*)result_7->memory->buf;
    __result8__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1short* result_8;
void* __right_value17 = (void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2182, "smart_pointer$1short"));
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_8->p=(short short*)result_8->memory->buf;
    __result9__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value18 = (void*)0;
struct smart_pointer$1int* result_9;
void* __right_value19 = (void*)0;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2192, "smart_pointer$1int"));
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_9->p=(int*)result_9->memory->buf;
    __result10__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
struct smart_pointer$1long* result_10;
void* __right_value21 = (void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2202, "smart_pointer$1long"));
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_10->p=(long*)result_10->memory->buf;
    __result11__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value22 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1char* __result13__;
    __result13__ = __result_obj__ = ((struct smart_pointer$1char*)(__right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(__right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2373, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(__right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result13__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value29 = (void*)0;
struct smart_pointer$1short* __result15__;
    __result15__ = __result_obj__ = ((struct smart_pointer$1short*)(__right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(__right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2378, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(__right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result15__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value30 = (void*)0;
void* __right_value33 = (void*)0;
struct smart_pointer$1int* __result17__;
    __result17__ = __result_obj__ = ((struct smart_pointer$1int*)(__right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(__right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2383, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(__right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result17__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value34 = (void*)0;
void* __right_value37 = (void*)0;
struct smart_pointer$1long* __result19__;
    __result19__ = __result_obj__ = ((struct smart_pointer$1long*)(__right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(__right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2388, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(__right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value38 = (void*)0;
void* __right_value41 = (void*)0;
struct smart_pointer$1float* __result21__;
    __result21__ = __result_obj__ = ((struct smart_pointer$1float*)(__right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(__right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2393, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(__right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result21__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value42 = (void*)0;
void* __right_value45 = (void*)0;
struct smart_pointer$1double* __result23__;
    __result23__ = __result_obj__ = ((struct smart_pointer$1double*)(__right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(__right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2398, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(__right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result23__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value50 = (void*)0;
struct list$1char* __result26__;
    __result26__ = __result_obj__ = ((struct list$1char*)(__right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(__right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2403, "list$1char")))),len,self)));
    come_call_finalizer3(__right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result26__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value55 = (void*)0;
struct list$1short* __result29__;
    __result29__ = __result_obj__ = ((struct list$1short*)(__right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(__right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2408, "list$1short")))),len,self)));
    come_call_finalizer3(__right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result29__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value56 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1int* __result32__;
    __result32__ = __result_obj__ = ((struct list$1int*)(__right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(__right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2413, "list$1int")))),len,self)));
    come_call_finalizer3(__right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result32__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1long* __result35__;
    __result35__ = __result_obj__ = ((struct list$1long*)(__right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(__right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2418, "list$1long")))),len,self)));
    come_call_finalizer3(__right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result35__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value66 = (void*)0;
void* __right_value70 = (void*)0;
struct list$1float* __result38__;
    __result38__ = __result_obj__ = ((struct list$1float*)(__right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(__right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2423, "list$1float")))),len,self)));
    come_call_finalizer3(__right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result38__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value75 = (void*)0;
struct list$1double* __result41__;
    __result41__ = __result_obj__ = ((struct list$1double*)(__right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(__right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2428, "list$1double")))),len,self)));
    come_call_finalizer3(__right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value76 = (void*)0;
char* __result42__;
    __result42__ = __result_obj__ = ((char*)(__right_value76=xsprintf(msg,self)));
    __right_value76 = come_decrement_ref_count2(__right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
char* __result43__;
    __result43__ = __result_obj__ = ((char*)(__right_value77=xsprintf(msg,self)));
    __right_value77 = come_decrement_ref_count2(__right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result43__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
char* __result44__;
    __result44__ = __result_obj__ = ((char*)(__right_value78=xsprintf(msg,self)));
    __right_value78 = come_decrement_ref_count2(__right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result44__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
unsigned int* __result45__;
    __result45__ = __result_obj__ = ((unsigned int*)(__right_value79=wchar_tp_substring(str,head,tail)));
    __right_value79 = come_decrement_ref_count2(__right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value80 = (void*)0;
struct list$1charph* __result46__;
    __result46__ = __result_obj__ = ((struct list$1charph*)(__right_value80=charp_scan_block(self,reg,parent,block)));
    come_call_finalizer3(__right_value80,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result46__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
struct list$1charph* __result47__;
    __result47__ = __result_obj__ = ((struct list$1charph*)(__right_value81=charp_scan_block_count(self,reg,count,parent,block)));
    come_call_finalizer3(__right_value81,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result47__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
struct list$1charph* __result48__;
    __result48__ = __result_obj__ = ((struct list$1charph*)(__right_value82=charp_split_block(self,reg,parent,block)));
    come_call_finalizer3(__right_value82,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result48__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list$1charph* __result49__;
    __result49__ = __result_obj__ = ((struct list$1charph*)(__right_value83=charp_split_block_count(self,reg,count,parent,block)));
    come_call_finalizer3(__right_value83,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value84 = (void*)0;
struct list$1charph* __result50__;
    __result50__ = __result_obj__ = ((struct list$1charph*)(__right_value84=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    come_call_finalizer3(__right_value84,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result50__;
}
static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
char* __result51__;
    __result51__ = __result_obj__ = ((char*)(__right_value85=charp_strip(self)));
    __right_value85 = come_decrement_ref_count2(__right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value86 = (void*)0;
char* __result52__;
    __result52__ = __result_obj__ = ((char*)(__right_value86=string_printable(str)));
    __right_value86 = come_decrement_ref_count2(__right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result52__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
unsigned int* __result53__;
    __result53__ = __result_obj__ = ((unsigned int*)(__right_value87=charp_to_wstring(str)));
    __right_value87 = come_decrement_ref_count2(__right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
char* __result54__;
    __result54__ = __result_obj__ = ((char*)(__right_value88=wchar_tp_to_string(wstr)));
    __right_value88 = come_decrement_ref_count2(__right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
unsigned int* __result55__;
    __result55__ = __result_obj__ = ((unsigned int*)(__right_value90=string_to_wstring(((char*)(__right_value89=xsprintf("%d",self))))));
    __right_value89 = come_decrement_ref_count2(__right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value90 = come_decrement_ref_count2(__right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result55__;
}
static inline int wstring_length(unsigned int* str){
    return wchar_tp_length(str);
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value91 = (void*)0;
unsigned int* __result56__;
    __result56__ = __result_obj__ = ((unsigned int*)(__right_value91=wchar_tp_delete(str,head,tail)));
    __right_value91 = come_decrement_ref_count2(__right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value92 = (void*)0;
unsigned int* __result57__;
    __result57__ = __result_obj__ = ((unsigned int*)(__right_value92=wchar_tp_reverse(str)));
    __right_value92 = come_decrement_ref_count2(__right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result57__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value93 = (void*)0;
unsigned int* __result58__;
    __result58__ = __result_obj__ = ((unsigned int*)(__right_value93=wchar_tp_multiply(str,n)));
    __right_value93 = come_decrement_ref_count2(__right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result58__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
unsigned int* __result59__;
    __result59__ = __result_obj__ = ((unsigned int*)(__right_value94=wchar_tp_printable(str)));
    __right_value94 = come_decrement_ref_count2(__right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value95 = (void*)0;
char* __result60__;
    __result60__ = __result_obj__ = ((char*)(__right_value95=charp_replace(self,index,c)));
    __right_value95 = come_decrement_ref_count2(__right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
char* __result61__;
    __result61__ = __result_obj__ = ((char*)(__right_value96=charp_multiply(str,n)));
    __right_value96 = come_decrement_ref_count2(__right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result61__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
char* __result62__;
    __result62__ = __result_obj__ = ((char*)(__right_value97=charp_sub(self,reg,replace)));
    __right_value97 = come_decrement_ref_count2(__right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
char* __result63__;
    __result63__ = __result_obj__ = ((char*)(__right_value98=charp_sub_count(self,reg,replace,count)));
    __right_value98 = come_decrement_ref_count2(__right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct list$1charph* __result64__;
    __result64__ = __result_obj__ = ((struct list$1charph*)(__right_value99=charp_split_str(self,str)));
    come_call_finalizer3(__right_value99,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result64__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list$1charph* __result65__;
    __result65__ = __result_obj__ = ((struct list$1charph*)(__right_value100=charp_scan(self,reg)));
    come_call_finalizer3(__right_value100,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result65__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
struct list$1charph* __result66__;
    __result66__ = __result_obj__ = ((struct list$1charph*)(__right_value101=charp_split(self,reg)));
    come_call_finalizer3(__right_value101,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result66__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list$1charph* __result67__;
    __result67__ = __result_obj__ = ((struct list$1charph*)(__right_value102=charp_split_maxsplit(self,reg,maxsplit)));
    come_call_finalizer3(__right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value103 = (void*)0;
char* __result68__;
    __result68__ = __result_obj__ = ((char*)(__right_value103=charp_sub_block(self,reg,parent,block)));
    __right_value103 = come_decrement_ref_count2(__right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result68__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
char* __result69__;
    __result69__ = __result_obj__ = ((char*)(__right_value104=charp_sub_block_count(self,reg,count,parent,block)));
    __right_value104 = come_decrement_ref_count2(__right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
char* __result71__;
    __result71__ = __result_obj__ = ((char*)(__right_value106=string_chomp(str)));
    __right_value106 = come_decrement_ref_count2(__right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result71__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result12__;
    __dec_obj6=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
    come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(char)*size);
    self->p=(char*)self->memory->buf;
    __result12__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__=(void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result14__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(short short)*size);
    self->p=(short short*)self->memory->buf;
    __result14__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result14__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result16__;
    __dec_obj8=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
    come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(int)*size);
    self->p=(int*)self->memory->buf;
    __result16__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result16__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result18__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(long)*size);
    self->p=(long*)self->memory->buf;
    __result18__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result18__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result20__;
    __dec_obj10=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
    come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(float)*size);
    self->p=(float*)self->memory->buf;
    __result20__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    return __result20__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result22__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(double)*size);
    self->p=(double*)self->memory->buf;
    __result22__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    return __result22__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
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
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result25__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value47 = (void*)0;
struct list_item$1char* litem_12;
void* __right_value48 = (void*)0;
struct list_item$1char* litem_13;
void* __right_value49 = (void*)0;
struct list_item$1char* litem_14;
struct list$1char* __result24__;
    if(self->len==0) {
        litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 219, "list_item$1char"))));
        come_call_finalizer3(__right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_12->prev=((void*)0);
        litem_12->next=((void*)0);
        litem_12->item=item;
        self->tail=litem_12;
        self->head=litem_12;
    }
    else {
        if(self->len==1) {
            litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 229, "list_item$1char"))));
            come_call_finalizer3(__right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_13->prev=self->head;
            litem_13->next=((void*)0);
            litem_13->item=item;
            self->tail=litem_13;
            self->head->next=litem_13;
        }
        else {
            litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 239, "list_item$1char"))));
            come_call_finalizer3(__right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
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

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_15;
struct list_item$1char* prev_it_16;
    it_15=self->head;
    while(it_15!=((void*)0)) {
        prev_it_16=it_15;
        it_15=it_15->next;
        come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
int i_17;
struct list$1short* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_17=0;    i_17<num_value;    i_17++    ){
        list$1short_push_back(self,values[i_17]);
    }
    __result28__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result28__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
struct list_item$1short* litem_18;
void* __right_value53 = (void*)0;
struct list_item$1short* litem_19;
void* __right_value54 = (void*)0;
struct list_item$1short* litem_20;
struct list$1short* __result27__;
    if(self->len==0) {
        litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 219, "list_item$1short"))));
        come_call_finalizer3(__right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_18->prev=((void*)0);
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail=litem_18;
        self->head=litem_18;
    }
    else {
        if(self->len==1) {
            litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 229, "list_item$1short"))));
            come_call_finalizer3(__right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_19->prev=self->head;
            litem_19->next=((void*)0);
            litem_19->item=item;
            self->tail=litem_19;
            self->head->next=litem_19;
        }
        else {
            litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 239, "list_item$1short"))));
            come_call_finalizer3(__right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_20->prev=self->tail;
            litem_20->next=((void*)0);
            litem_20->item=item;
            self->tail->next=litem_20;
            self->tail=litem_20;
        }
    }
    self->len++;
    __result27__ = __result_obj__ = self;
    return __result27__;
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_21;
struct list_item$1short* prev_it_22;
    it_21=self->head;
    while(it_21!=((void*)0)) {
        prev_it_22=it_21;
        it_21=it_21->next;
        come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_23;
struct list$1int* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1int_push_back(self,values[i_23]);
    }
    __result31__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result31__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
struct list_item$1int* litem_24;
void* __right_value58 = (void*)0;
struct list_item$1int* litem_25;
void* __right_value59 = (void*)0;
struct list_item$1int* litem_26;
struct list$1int* __result30__;
    if(self->len==0) {
        litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 219, "list_item$1int"))));
        come_call_finalizer3(__right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else {
        if(self->len==1) {
            litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 229, "list_item$1int"))));
            come_call_finalizer3(__right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_25->prev=self->head;
            litem_25->next=((void*)0);
            litem_25->item=item;
            self->tail=litem_25;
            self->head->next=litem_25;
        }
        else {
            litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 239, "list_item$1int"))));
            come_call_finalizer3(__right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_26->prev=self->tail;
            litem_26->next=((void*)0);
            litem_26->item=item;
            self->tail->next=litem_26;
            self->tail=litem_26;
        }
    }
    self->len++;
    __result30__ = __result_obj__ = self;
    return __result30__;
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_27;
struct list_item$1int* prev_it_28;
    it_27=self->head;
    while(it_27!=((void*)0)) {
        prev_it_28=it_27;
        it_27=it_27->next;
        come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_29;
struct list$1long* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_29=0;    i_29<num_value;    i_29++    ){
        list$1long_push_back(self,values[i_29]);
    }
    __result34__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result34__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
struct list_item$1long* litem_30;
void* __right_value63 = (void*)0;
struct list_item$1long* litem_31;
void* __right_value64 = (void*)0;
struct list_item$1long* litem_32;
struct list$1long* __result33__;
    if(self->len==0) {
        litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 219, "list_item$1long"))));
        come_call_finalizer3(__right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_30->prev=((void*)0);
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail=litem_30;
        self->head=litem_30;
    }
    else {
        if(self->len==1) {
            litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 229, "list_item$1long"))));
            come_call_finalizer3(__right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_31->prev=self->head;
            litem_31->next=((void*)0);
            litem_31->item=item;
            self->tail=litem_31;
            self->head->next=litem_31;
        }
        else {
            litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 239, "list_item$1long"))));
            come_call_finalizer3(__right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_32->prev=self->tail;
            litem_32->next=((void*)0);
            litem_32->item=item;
            self->tail->next=litem_32;
            self->tail=litem_32;
        }
    }
    self->len++;
    __result33__ = __result_obj__ = self;
    return __result33__;
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_33;
struct list_item$1long* prev_it_34;
    it_33=self->head;
    while(it_33!=((void*)0)) {
        prev_it_34=it_33;
        it_33=it_33->next;
        come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_35;
struct list$1float* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_35=0;    i_35<num_value;    i_35++    ){
        list$1float_push_back(self,values[i_35]);
    }
    __result37__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    return __result37__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
struct list_item$1float* litem_36;
void* __right_value68 = (void*)0;
struct list_item$1float* litem_37;
void* __right_value69 = (void*)0;
struct list_item$1float* litem_38;
struct list$1float* __result36__;
    if(self->len==0) {
        litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 219, "list_item$1float"))));
        come_call_finalizer3(__right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head=litem_36;
    }
    else {
        if(self->len==1) {
            litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 229, "list_item$1float"))));
            come_call_finalizer3(__right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_37->prev=self->head;
            litem_37->next=((void*)0);
            litem_37->item=item;
            self->tail=litem_37;
            self->head->next=litem_37;
        }
        else {
            litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 239, "list_item$1float"))));
            come_call_finalizer3(__right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_38->prev=self->tail;
            litem_38->next=((void*)0);
            litem_38->item=item;
            self->tail->next=litem_38;
            self->tail=litem_38;
        }
    }
    self->len++;
    __result36__ = __result_obj__ = self;
    return __result36__;
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_39;
struct list_item$1float* prev_it_40;
    it_39=self->head;
    while(it_39!=((void*)0)) {
        prev_it_40=it_39;
        it_39=it_39->next;
        come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_41;
struct list$1double* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_41=0;    i_41<num_value;    i_41++    ){
        list$1double_push_back(self,values[i_41]);
    }
    __result40__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    return __result40__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
struct list_item$1double* litem_42;
void* __right_value73 = (void*)0;
struct list_item$1double* litem_43;
void* __right_value74 = (void*)0;
struct list_item$1double* litem_44;
struct list$1double* __result39__;
    if(self->len==0) {
        litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 219, "list_item$1double"))));
        come_call_finalizer3(__right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
        litem_42->prev=((void*)0);
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail=litem_42;
        self->head=litem_42;
    }
    else {
        if(self->len==1) {
            litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 229, "list_item$1double"))));
            come_call_finalizer3(__right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
            litem_43->prev=self->head;
            litem_43->next=((void*)0);
            litem_43->item=item;
            self->tail=litem_43;
            self->head->next=litem_43;
        }
        else {
            litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 239, "list_item$1double"))));
            come_call_finalizer3(__right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
            litem_44->prev=self->tail;
            litem_44->next=((void*)0);
            litem_44->item=item;
            self->tail->next=litem_44;
            self->tail=litem_44;
        }
    }
    self->len++;
    __result39__ = __result_obj__ = self;
    return __result39__;
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_45;
struct list_item$1double* prev_it_46;
    it_45=self->head;
    while(it_45!=((void*)0)) {
        prev_it_46=it_45;
        it_45=it_45->next;
        come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

















static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_47;
struct list_item$1charph* prev_it_48;
    it_47=self->head;
    while(it_47!=((void*)0)) {
        prev_it_48=it_47;
        it_47=it_47->next;
        come_call_finalizer3(prev_it_48,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}



































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_49;
int erro_ofs_50;
int options_51;
void* __right_value107 = (void*)0;
char* __dec_obj12;
struct come_regex* __result72__;
err_49 = (void*)0;
memset(&erro_ofs_50, 0, sizeof(int));
    options_51=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    __dec_obj12=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_51;
    self->re=pcre_compile(str,options_51,&err_49,&erro_ofs_50,((void*)0));
    if(self->re==((void*)0)) {
        printf("regex error (%s)\n",str);
        stackframe();
        exit(1);
    }
    __result72__ = __result_obj__ = self;
    come_call_finalizer3(self,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    return __result72__;
}

void come_regex_finalize(struct come_regex* reg){
    if(reg&&reg->str) {
        reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(reg&&reg->re) {
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
struct come_regex* __result73__;
    __result73__ = __result_obj__ = ((struct come_regex*)(__right_value109=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(__right_value108=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str.c", 46, "come_regex")))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_call_finalizer3(__right_value108,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value109,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    return __result73__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
struct come_regex* __result74__;
    __result74__ = __result_obj__ = ((struct come_regex*)(__right_value111=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(__right_value110=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str.c", 51, "come_regex")))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_call_finalizer3(__right_value110,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value111,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    return __result74__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result75__;
void* __right_value112 = (void*)0;
struct come_regex* result_52;
void* __right_value113 = (void*)0;
char* __dec_obj13;
const char* err_53;
int erro_ofs_54;
struct come_regex* __result76__;
err_53 = (void*)0;
memset(&erro_ofs_54, 0, sizeof(int));
    if(reg==((void*)0)) {
        __result75__ = __result_obj__ = ((void*)0);
        return __result75__;
    }
    result_52=(struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libneo-c-str.c", 61, "come_regex"));
    __dec_obj13=result_52->str;
    result_52->str=(char*)come_increment_ref_count(string_clone(reg->str));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(result_52->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_52->str);
        stackframe();
        exit(1);
    }
    __result76__ = __result_obj__ = result_52;
    come_call_finalizer3(result_52,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    return __result76__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result77__;
    __result77__ = __result_obj__ = ((char*)(__right_value114=__builtin_string(regex->str)));
    __right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* result_55;
int i_56;
char* __result78__;
    result_55=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_56=0;    i_56<strlen(str);    i_56++    ){
        if(str[i_56]>=65&&str[i_56]<=90) {
            result_55[i_56]=str[i_56]-65+97;
        }
    }
    __result78__ = __result_obj__ = result_55;
    result_55 = come_decrement_ref_count2(result_55, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result78__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
char* result_57;
int i_58;
char* __result79__;
    result_57=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_58=0;    i_58<strlen(str);    i_58++    ){
        if(str[i_58]>=97&&str[i_58]<=122) {
            result_57[i_58]=str[i_58]-97+65;
        }
    }
    __result79__ = __result_obj__ = result_57;
    result_57 = come_decrement_ref_count2(result_57, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result79__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
unsigned int* __result80__;
int len_59;
void* __right_value118 = (void*)0;
unsigned int* __result81__;
void* __right_value119 = (void*)0;
unsigned int* __result82__;
void* __right_value120 = (void*)0;
unsigned int* __result83__;
void* __right_value121 = (void*)0;
unsigned int* result_60;
unsigned int* __result84__;
    if(str==((void*)0)) {
        __result80__ = __result_obj__ = ((unsigned int*)(__right_value117=__builtin_wstring("")));
        __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result80__;
    }
    len_59=wcslen(str);
    if(head<0) {
        head+=len_59;
    }
    if(tail<0) {
        tail+=len_59+1;
    }
    if(head>tail) {
        __result81__ = __result_obj__ = ((unsigned int*)(__right_value118=__builtin_wstring("")));
        __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result81__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_59) {
        tail=len_59;
    }
    if(head==tail) {
        __result82__ = __result_obj__ = ((unsigned int*)(__right_value119=__builtin_wstring("")));
        __right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result82__;
    }
    if(tail-head+1<1) {
        __result83__ = __result_obj__ = ((unsigned int*)(__right_value120=__builtin_wstring("")));
        __right_value120 = come_decrement_ref_count2(__right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result83__;
    }
    result_60=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libneo-c-str.c", 156, "int"));
    memcpy(result_60,str+head,sizeof(unsigned int)*(tail-head));
    result_60[tail-head]=0;
    __result84__ = __result_obj__ = result_60;
    result_60 = come_decrement_ref_count2(result_60, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result84__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result85__;
int len_61;
void* __right_value122 = (void*)0;
unsigned int* wstr_62;
int ret_63;
unsigned int* __result86__;
    if(str==((void*)0)) {
        __result85__ = __result_obj__ = ((void*)0);
        return __result85__;
    }
    len_61=strlen(str);
    wstr_62=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_61+1)), "libneo-c-str.c", 171, "int"));
    ret_63=mbstowcs(wstr_62,str,len_61+1);
    wstr_62[ret_63]=0;
    if(ret_63<0) {
        wstr_62[0]=0;
    }
    __result86__ = __result_obj__ = wstr_62;
    wstr_62 = come_decrement_ref_count2(wstr_62, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result86__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_64;
int len_65;
int i_66;
int len2_67;
int j_68;
memset(&j_68, 0, sizeof(int));
    n_64=0;
    len_65=strlen(str);
    for(    i_66=0;    i_66<len_65;    i_66++    ){
        len2_67=strlen(search_str);
        for(        j_68=0;        j_68<len2_67;        j_68++        ){
            if(str[i_66+j_68]!=search_str[j_68]) {
                break;
            }
        }
        if(j_68==len2_67) {
            n_64++;
            if(n_64==count) {
                return i_66;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_69;
int result_73;
int offset_74;
const char* err_75;
int erro_ofs_76;
int options_77;
char* str_78;
struct real_pcre8_or_16* re_79;
int n_80;
int options_81;
int len_82;
int regex_result_83;
int i_84;
int i_85;
err_75 = (void*)0;
memset(&erro_ofs_76, 0, sizeof(int));
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
    while((_Bool)1) {
        options_81=2097152;
        len_82=strlen(self);
        regex_result_83=pcre_exec(re_79,(struct pcre_extra*)0,self,len_82,offset_74,options_81,ovec_value_72,ovec_max_69*3);
        for(        i_84=0;        i_84<ovec_max_69;        i_84++        ){
            start_70[i_84]=ovec_value_72[i_84*2];
        }
        for(        i_85=0;        i_85<ovec_max_69;        i_85++        ){
            end_71[i_85]=ovec_value_72[i_85*2+1];
        }
        if(regex_result_83>0) {
            n_80++;
            if(offset_74==end_71[0]) {
                offset_74++;
            }
            else {
                offset_74=end_71[0];
            }
            if(n_80==count) {
                result_73=start_70[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_73;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_86;
char* p_87;
    len_86=strlen(search_str);
    p_87=str+strlen(str)-len_86;
    while(p_87>=str) {
        if(strncmp(p_87,search_str,len_86)==0) {
            return p_87-str;
        }
        p_87--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_88;
int erro_ofs_89;
int options_90;
char* str_91;
struct real_pcre8_or_16* re_92;
void* __right_value123 = (void*)0;
char* self2_93;
int ovec_max_94;
int result_98;
int offset_99;
int options_100;
int len_101;
int regex_result_102;
int i_103;
int i_104;
int __result87__;
err_88 = (void*)0;
memset(&erro_ofs_89, 0, sizeof(int));
    options_90=reg->options;
    str_91=reg->str;
    re_92=reg->re;
    self2_93=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_94=16;
    int start_95[ovec_max_94];
    memset(&start_95, 0, sizeof(int)    *(ovec_max_94)    );
    int end_96[ovec_max_94];
    memset(&end_96, 0, sizeof(int)    *(ovec_max_94)    );
    int ovec_value_97[ovec_max_94*3];
    memset(&ovec_value_97, 0, sizeof(int)    *(ovec_max_94*3)    );
    result_98=default_value;
    offset_99=0;
    while((_Bool)1) {
        options_100=2097152;
        len_101=strlen(self2_93);
        regex_result_102=pcre_exec(re_92,(struct pcre_extra*)0,self2_93,len_101,offset_99,options_100,ovec_value_97,ovec_max_94*3);
        for(        i_103=0;        i_103<ovec_max_94;        i_103++        ){
            start_95[i_103]=ovec_value_97[i_103*2];
        }
        for(        i_104=0;        i_104<ovec_max_94;        i_104++        ){
            end_96[i_104]=ovec_value_97[i_104*2+1];
        }
        if(regex_result_102==1||regex_result_102>0) {
            result_98=strlen(self)-1-start_95[0];
            break;
        }
        {
            break;
        }
    }
    __result87__ = result_98;
    self2_93 = come_decrement_ref_count2(self2_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result87__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_105;
char* p_106;
int n_107;
    len_105=strlen(search_str);
    p_106=str+strlen(str)-len_105;
    n_107=0;
    while(p_106>=str) {
        if(strncmp(p_106,search_str,len_105)==0) {
            n_107++;
            if(n_107==count) {
                return p_106-str;
            }
        }
        p_106--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1charph* result_108;
int offset_109;
int ovec_max_110;
const char* err_114;
int erro_ofs_115;
int options_116;
char* str_117;
struct real_pcre8_or_16* re_118;
int options_119;
int len_120;
int regex_result_121;
int i_122;
int i_123;
void* __right_value126 = (void*)0;
char* str_124;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct list$1charph* group_strings_125;
void* __right_value129 = (void*)0;
char* str2_126;
void* __right_value133 = (void*)0;
char* str_130;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct list$1charph* group_strings_131;
int i_132;
void* __right_value136 = (void*)0;
char* match_string_133;
void* __right_value137 = (void*)0;
char* str2_134;
struct list$1charph* __result90__;
err_114 = (void*)0;
memset(&erro_ofs_115, 0, sizeof(int));
    result_108=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value124=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 357, "list$1charph"))))));
    come_call_finalizer3(__right_value124,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
    while((_Bool)1) {
        options_119=2097152;
        len_120=strlen(self);
        regex_result_121=pcre_exec(re_118,(struct pcre_extra*)0,self,len_120,offset_109,options_119,ovec_value_113,ovec_max_110*3);
        for(        i_122=0;        i_122<ovec_max_110;        i_122++        ){
            start_111[i_122]=ovec_value_113[i_122*2];
        }
        for(        i_123=0;        i_123<ovec_max_110;        i_123++        ){
            end_112[i_123]=ovec_value_113[i_123*2+1];
        }
        if(regex_result_121==1) {
            str_124=(char*)come_increment_ref_count(charp_substring(self,start_111[0],end_112[0]));
            group_strings_125=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value127=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 391, "list$1charph"))))));
            come_call_finalizer3(__right_value127,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_126=(char*)come_increment_ref_count(block(parent,str_124,group_strings_125));
            list$1charph_push_back(result_108,(char*)come_increment_ref_count(str2_126));
            if(offset_109==end_112[0]) {
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
            if(regex_result_121>1) {
                str_130=(char*)come_increment_ref_count(charp_substring(self,start_111[0],end_112[0]));
                group_strings_131=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value134=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 408, "list$1charph"))))));
                come_call_finalizer3(__right_value134,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_132=1;                i_132<regex_result_121;                i_132++                ){
                    match_string_133=(char*)come_increment_ref_count(charp_substring(self,start_111[i_132],end_112[i_132]));
                    list$1charph_push_back(group_strings_131,(char*)come_increment_ref_count(match_string_133));
                    match_string_133 = come_decrement_ref_count2(match_string_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_134=(char*)come_increment_ref_count(block(parent,str_130,group_strings_131));
                list$1charph_push_back(result_108,(char*)come_increment_ref_count(str2_134));
                if(offset_109==end_112[0]) {
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
    __result90__ = __result_obj__ = result_108;
    come_call_finalizer3(result_108,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result90__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result88__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result88__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result88__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct list_item$1charph* litem_127;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1charph* litem_128;
char* __dec_obj15;
void* __right_value132 = (void*)0;
struct list_item$1charph* litem_129;
char* __dec_obj16;
struct list$1charph* __result89__;
    if(self->len==0) {
        litem_127=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value130=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph"))));
        come_call_finalizer3(__right_value130,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_127->prev=((void*)0);
        litem_127->next=((void*)0);
        __dec_obj14=litem_127->item;
        litem_127->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_127;
        self->head=litem_127;
    }
    else {
        if(self->len==1) {
            litem_128=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value131=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph"))));
            come_call_finalizer3(__right_value131,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_128->prev=self->head;
            litem_128->next=((void*)0);
            __dec_obj15=litem_128->item;
            litem_128->item=(char*)come_increment_ref_count(item);
            __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_128;
            self->head->next=litem_128;
        }
        else {
            litem_129=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value132=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph"))));
            come_call_finalizer3(__right_value132,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
    __result89__ = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result89__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct list$1charph* result_135;
int offset_136;
int ovec_max_137;
const char* err_141;
int erro_ofs_142;
int options_143;
char* str_144;
struct real_pcre8_or_16* re_145;
int n_146;
int options_147;
int len_148;
int regex_result_149;
int i_150;
int i_151;
void* __right_value140 = (void*)0;
char* str_152;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct list$1charph* group_strings_153;
void* __right_value143 = (void*)0;
char* str2_154;
void* __right_value144 = (void*)0;
char* str_155;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct list$1charph* group_strings_156;
int i_157;
void* __right_value147 = (void*)0;
char* match_string_158;
void* __right_value148 = (void*)0;
char* str2_159;
struct list$1charph* __result91__;
err_141 = (void*)0;
memset(&erro_ofs_142, 0, sizeof(int));
    result_135=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value138=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 438, "list$1charph"))))));
    come_call_finalizer3(__right_value138,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
    while((_Bool)1) {
        options_147=2097152;
        len_148=strlen(self);
        regex_result_149=pcre_exec(re_145,(struct pcre_extra*)0,self,len_148,offset_136,options_147,ovec_value_140,ovec_max_137*3);
        for(        i_150=0;        i_150<ovec_max_137;        i_150++        ){
            start_138[i_150]=ovec_value_140[i_150*2];
        }
        for(        i_151=0;        i_151<ovec_max_137;        i_151++        ){
            end_139[i_151]=ovec_value_140[i_151*2+1];
        }
        if(regex_result_149==1) {
            str_152=(char*)come_increment_ref_count(charp_substring(self,start_138[0],end_139[0]));
            group_strings_153=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value141=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 474, "list$1charph"))))));
            come_call_finalizer3(__right_value141,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_154=(char*)come_increment_ref_count(block(parent,str_152,group_strings_153));
            list$1charph_push_back(result_135,(char*)come_increment_ref_count(str2_154));
            if(offset_136==end_139[0]) {
                offset_136++;
            }
            else {
                offset_136=end_139[0];
            }
            n_146++;
            if(n_146==count) {
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
            if(regex_result_149>1) {
                str_155=(char*)come_increment_ref_count(charp_substring(self,start_138[0],end_139[0]));
                group_strings_156=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value145=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 496, "list$1charph"))))));
                come_call_finalizer3(__right_value145,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_157=1;                i_157<regex_result_149;                i_157++                ){
                    match_string_158=(char*)come_increment_ref_count(charp_substring(self,start_138[i_157],end_139[i_157]));
                    list$1charph_push_back(group_strings_156,(char*)come_increment_ref_count(match_string_158));
                    match_string_158 = come_decrement_ref_count2(match_string_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_159=(char*)come_increment_ref_count(block(parent,str_155,group_strings_156));
                list$1charph_push_back(result_135,(char*)come_increment_ref_count(str2_159));
                if(offset_136==end_139[0]) {
                    offset_136++;
                }
                else {
                    offset_136=end_139[0];
                }
                n_146++;
                if(n_146==count) {
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
    __result91__ = __result_obj__ = result_135;
    come_call_finalizer3(result_135,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result91__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_160;
int erro_ofs_161;
int options_162;
char* str_163;
struct real_pcre8_or_16* re_164;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1charph* result_165;
int offset_166;
int ovec_max_167;
int options_171;
int len_172;
int regex_result_173;
int i_174;
int i_175;
void* __right_value151 = (void*)0;
char* str_176;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct list$1charph* match_strings_177;
void* __right_value154 = (void*)0;
char* str2_178;
void* __right_value155 = (void*)0;
char* str_179;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct list$1charph* match_strings_180;
int i_181;
void* __right_value158 = (void*)0;
char* match_str_182;
void* __right_value159 = (void*)0;
char* str2_183;
void* __right_value160 = (void*)0;
char* str_184;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct list$1charph* match_strings_185;
void* __right_value163 = (void*)0;
char* str2_186;
struct list$1charph* __result92__;
err_160 = (void*)0;
memset(&erro_ofs_161, 0, sizeof(int));
    options_162=reg->options;
    str_163=reg->str;
    re_164=reg->re;
    result_165=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value149=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 538, "list$1charph"))))));
    come_call_finalizer3(__right_value149,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_166=0;
    ovec_max_167=16;
    int start_168[ovec_max_167];
    memset(&start_168, 0, sizeof(int)    *(ovec_max_167)    );
    int end_169[ovec_max_167];
    memset(&end_169, 0, sizeof(int)    *(ovec_max_167)    );
    int ovec_value_170[ovec_max_167*3];
    memset(&ovec_value_170, 0, sizeof(int)    *(ovec_max_167*3)    );
    while((_Bool)1) {
        options_171=2097152;
        len_172=strlen(self);
        regex_result_173=pcre_exec(re_164,(struct pcre_extra*)0,self,len_172,offset_166,options_171,ovec_value_170,ovec_max_167*3);
        for(        i_174=0;        i_174<ovec_max_167;        i_174++        ){
            start_168[i_174]=ovec_value_170[i_174*2];
        }
        for(        i_175=0;        i_175<ovec_max_167;        i_175++        ){
            end_169[i_175]=ovec_value_170[i_175*2+1];
        }
        if(regex_result_173==1) {
            str_176=(char*)come_increment_ref_count(charp_substring(self,offset_166,start_168[0]));
            match_strings_177=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value152=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 565, "list$1charph"))))));
            come_call_finalizer3(__right_value152,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_178=(char*)come_increment_ref_count(block(parent,str_176,match_strings_177));
            list$1charph_push_back(result_165,(char*)come_increment_ref_count(str2_178));
            if(offset_166==end_169[0]) {
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
            if(regex_result_173>1) {
                str_179=(char*)come_increment_ref_count(charp_substring(self,offset_166,start_168[0]));
                if(offset_166==end_169[0]) {
                    offset_166++;
                }
                else {
                    offset_166=end_169[0];
                }
                match_strings_180=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value156=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 588, "list$1charph"))))));
                come_call_finalizer3(__right_value156,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_181=1;                i_181<regex_result_173;                i_181++                ){
                    match_str_182=(char*)come_increment_ref_count(charp_substring(self,start_168[i_181],end_169[i_181]));
                    list$1charph_push_back(match_strings_180,(char*)come_increment_ref_count(match_str_182));
                    match_str_182 = come_decrement_ref_count2(match_str_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_183=(char*)come_increment_ref_count(block(parent,str_179,match_strings_180));
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
    if(offset_166<charp_length(self)) {
        str_184=(char*)come_increment_ref_count(charp_substring(self,offset_166,-1));
        match_strings_185=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value161=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 607, "list$1charph"))))));
        come_call_finalizer3(__right_value161,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        str2_186=(char*)come_increment_ref_count(block(parent,str_184,match_strings_185));
        list$1charph_push_back(result_165,(char*)come_increment_ref_count(str2_186));
        str_184 = come_decrement_ref_count2(str_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(match_strings_185,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        str2_186 = come_decrement_ref_count2(str2_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result92__ = __result_obj__ = result_165;
    come_call_finalizer3(result_165,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result92__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_187;
int erro_ofs_188;
int options_189;
char* str_190;
struct real_pcre8_or_16* re_191;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
struct list$1charph* result_192;
int offset_193;
int ovec_max_194;
int n_198;
int options_199;
int len_200;
int regex_result_201;
int i_202;
int i_203;
void* __right_value166 = (void*)0;
char* str_204;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct list$1charph* match_strings_205;
void* __right_value169 = (void*)0;
char* str2_206;
void* __right_value170 = (void*)0;
char* str_207;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct list$1charph* match_strings_208;
int i_209;
void* __right_value173 = (void*)0;
char* match_str_210;
void* __right_value174 = (void*)0;
char* str2_211;
struct list$1charph* __result93__;
err_187 = (void*)0;
memset(&erro_ofs_188, 0, sizeof(int));
    options_189=reg->options;
    str_190=reg->str;
    re_191=reg->re;
    result_192=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value164=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 625, "list$1charph"))))));
    come_call_finalizer3(__right_value164,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_193=0;
    ovec_max_194=16;
    int start_195[ovec_max_194];
    memset(&start_195, 0, sizeof(int)    *(ovec_max_194)    );
    int end_196[ovec_max_194];
    memset(&end_196, 0, sizeof(int)    *(ovec_max_194)    );
    int ovec_value_197[ovec_max_194*3];
    memset(&ovec_value_197, 0, sizeof(int)    *(ovec_max_194*3)    );
    n_198=0;
    while((_Bool)1) {
        options_199=2097152;
        len_200=strlen(self);
        regex_result_201=pcre_exec(re_191,(struct pcre_extra*)0,self,len_200,offset_193,options_199,ovec_value_197,ovec_max_194*3);
        for(        i_202=0;        i_202<ovec_max_194;        i_202++        ){
            start_195[i_202]=ovec_value_197[i_202*2];
        }
        for(        i_203=0;        i_203<ovec_max_194;        i_203++        ){
            end_196[i_203]=ovec_value_197[i_203*2+1];
        }
        if(regex_result_201==1) {
            str_204=(char*)come_increment_ref_count(charp_substring(self,offset_193,start_195[0]));
            match_strings_205=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value167=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 654, "list$1charph"))))));
            come_call_finalizer3(__right_value167,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            str2_206=(char*)come_increment_ref_count(block(parent,str_204,match_strings_205));
            list$1charph_push_back(result_192,(char*)come_increment_ref_count(str2_206));
            if(offset_193==end_196[0]) {
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
            if(regex_result_201>1) {
                str_207=(char*)come_increment_ref_count(charp_substring(self,offset_193,start_195[0]));
                if(offset_193==end_196[0]) {
                    offset_193++;
                }
                else {
                    offset_193=end_196[0];
                }
                match_strings_208=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value171=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 677, "list$1charph"))))));
                come_call_finalizer3(__right_value171,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_209=1;                i_209<regex_result_201;                i_209++                ){
                    match_str_210=(char*)come_increment_ref_count(charp_substring(self,start_195[i_209],end_196[i_209]));
                    list$1charph_push_back(match_strings_208,(char*)come_increment_ref_count(match_str_210));
                    match_str_210 = come_decrement_ref_count2(match_str_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_211=(char*)come_increment_ref_count(block(parent,str_207,match_strings_208));
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
        if(n_198==count) {
            break;
        }
    }
    __result93__ = __result_obj__ = result_192;
    come_call_finalizer3(result_192,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result93__;
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
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct list$1charph* result_212;
int offset_213;
int ovec_max_214;
const char* err_218;
int erro_ofs_219;
int options_220;
char* str_221;
struct real_pcre8_or_16* re_222;
int options_223;
int len_224;
int regex_result_225;
int i_226;
int i_227;
void* __right_value177 = (void*)0;
char* str_228;
void* __right_value178 = (void*)0;
char* str_229;
int i_230;
void* __right_value179 = (void*)0;
char* match_string_231;
struct list$1charph* __result94__;
err_218 = (void*)0;
memset(&erro_ofs_219, 0, sizeof(int));
    result_212=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value175=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 741, "list$1charph"))))));
    come_call_finalizer3(__right_value175,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
    while((_Bool)1) {
        options_223=2097152;
        len_224=strlen(self);
        regex_result_225=pcre_exec(re_222,(struct pcre_extra*)0,self,len_224,offset_213,options_223,ovec_value_217,ovec_max_214*3);
        for(        i_226=0;        i_226<ovec_max_214;        i_226++        ){
            start_215[i_226]=ovec_value_217[i_226*2];
        }
        for(        i_227=0;        i_227<ovec_max_214;        i_227++        ){
            end_216[i_227]=ovec_value_217[i_227*2+1];
        }
        if(regex_result_225==1) {
            str_228=(char*)come_increment_ref_count(charp_substring(self,start_215[0],end_216[0]));
            list$1charph_push_back(result_212,(char*)come_increment_ref_count(str_228));
            if(offset_213==end_216[0]) {
                offset_213++;
            }
            else {
                offset_213=end_216[0];
            }
            str_228 = come_decrement_ref_count2(str_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_225>1) {
                str_229=(char*)come_increment_ref_count(charp_substring(self,start_215[0],end_216[0]));
                list$1charph_push_back(result_212,(char*)come_increment_ref_count(str_229));
                if(offset_213==end_216[0]) {
                    offset_213++;
                }
                else {
                    offset_213=end_216[0];
                }
                *num_group_string_in_regex=regex_result_225-1;
                for(                i_230=1;                i_230<regex_result_225;                i_230++                ){
                    match_string_231=(char*)come_increment_ref_count(charp_substring(self,start_215[i_230],end_216[i_230]));
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
    __result94__ = __result_obj__ = result_212;
    come_call_finalizer3(result_212,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result94__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value180 = (void*)0;
char* result_232;
int len_233;
char* __result95__;
    result_232=(char*)come_increment_ref_count(__builtin_string(self));
    len_233=strlen(self);
    if(self[len_233-1]==10) {
        result_232[len_233-1]=0;
    }
    else {
        if(self[len_233-1]==13) {
            result_232[len_233-1]=0;
        }
        else {
            if(len_233>2&&self[len_233-2]==13&&self[len_233-1]==10) {
                result_232[len_233-2]=0;
            }
        }
    }
    __result95__ = __result_obj__ = result_232;
    result_232 = come_decrement_ref_count2(result_232, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result95__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_234;
void* __right_value181 = (void*)0;
char* result_235;
int n_236;
int i_237;
char c_238;
char* __result96__;
    len_234=charp_length(str);
    result_235=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_234*2+1)), "libneo-c-str.c", 835, "char"));
    n_236=0;
    for(    i_237=0;    i_237<len_234;    i_237++    ){
        c_238=str[i_237];
        if((c_238>=0&&c_238<32)||c_238==127) {
            result_235[n_236++]=94;
            result_235[n_236++]=c_238+65-1;
        }
        else {
            result_235[n_236++]=c_238;
        }
    }
    result_235[n_236]=0;
    __result96__ = __result_obj__ = result_235;
    result_235 = come_decrement_ref_count2(result_235, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result96__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
int len_239;
void* __right_value182 = (void*)0;
char* result_240;
char* __result97__;
    len_239=4*(wcslen(wstr)+1);
    result_240=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_239)), "libneo-c-str.c", 861, "char"));
    if(wcstombs(result_240,wstr,len_239)<0) {
        strncpy(result_240,"",len_239);
    }
    __result97__ = __result_obj__ = result_240;
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result97__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value183 = (void*)0;
unsigned int* __result98__;
    __result98__ = __result_obj__ = ((unsigned int*)(__right_value183=__builtin_wstring(str)));
    __right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

int wchar_tp_length(unsigned int* str){
    return wcslen(str);
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_241;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
unsigned int* __result99__;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
unsigned int* __result100__;
void* __right_value188 = (void*)0;
unsigned int* sub_str_242;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
unsigned int* __result101__;
    len_241=wcslen(str);
    if(len_241==0) {
        __result99__ = __result_obj__ = ((unsigned int*)(__right_value185=string_to_wstring(((char*)(__right_value184=wchar_tp_to_string(str))))));
        __right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result99__;
    }
    if(head<0) {
        head+=len_241;
    }
    if(tail<0) {
        tail+=len_241+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result100__ = __result_obj__ = ((unsigned int*)(__right_value187=string_to_wstring(((char*)(__right_value186=wchar_tp_to_string(str))))));
        __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result100__;
    }
    if(tail>=len_241) {
        tail=len_241;
    }
    sub_str_242=(unsigned int*)come_increment_ref_count(wchar_tp_substring(str,tail,-1));
    memcpy(str+head,sub_str_242,sizeof(unsigned int)*(wstring_length(sub_str_242)+1));
    __result101__ = __result_obj__ = ((unsigned int*)(__right_value190=string_to_wstring(((char*)(__right_value189=wchar_tp_to_string(str))))));
    sub_str_242 = come_decrement_ref_count2(sub_str_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value189 = come_decrement_ref_count2(__right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value190 = come_decrement_ref_count2(__right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
unsigned int* head_243;
    head_243=wcsstr(str,search_str);
    if(head_243==((void*)0)) {
        return default_value;
    }
    return head_243-str;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
int len_244;
unsigned int* p_245;
int len2_246;
_Bool result_247;
int i_248;
memset(&i_248, 0, sizeof(int));
    len_244=wcslen(search_str);
    p_245=str+wcslen(str)-len_244;
    while(p_245>=str) {
        len2_246=wcslen(p_245);
        result_247=(_Bool)1;
        for(        i_248=0;        i_248<len_244&&i_248<len2_246;        i_248++        ){
            if(p_245[i_248]!=search_str[i_248]) {
                result_247=(_Bool)0;
            }
        }
        if(result_247) {
            return (p_245-str);
        }
        p_245--;
    }
    return default_value;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
int len_249;
void* __right_value191 = (void*)0;
unsigned int* result_250;
int i_251;
unsigned int* __result102__;
    len_249=wcslen(str);
    result_250=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_249+1)), "libneo-c-str.c", 961, "int"));
    for(    i_251=0;    i_251<len_249;    i_251++    ){
        result_250[i_251]=str[len_249-i_251-1];
    }
    result_250[len_249]=0;
    __result102__ = __result_obj__ = result_250;
    result_250 = come_decrement_ref_count2(result_250, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result102__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
int len_252;
void* __right_value192 = (void*)0;
unsigned int* result_253;
int i_254;
unsigned int* __result103__;
    len_252=wcslen(str)*n+1;
    result_253=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_252)), "libneo-c-str.c", 976, "int"));
    result_253[0]=0;
    for(    i_254=0;    i_254<n;    i_254++    ){
        wcscat(result_253,str);
    }
    __result103__ = __result_obj__ = result_253;
    result_253 = come_decrement_ref_count2(result_253, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result103__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__=(void*)0;
int len_255;
void* __right_value193 = (void*)0;
unsigned int* result_256;
int n_257;
int i_258;
unsigned int c_259;
unsigned int* __result104__;
    len_255=wchar_tp_length(str);
    result_256=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_255*2+1)), "libneo-c-str.c", 990, "int"));
    n_257=0;
    for(    i_258=0;    i_258<len_255;    i_258++    ){
        c_259=str[i_258];
        if((c_259>=0&&c_259<32)||c_259==127) {
            result_256[n_257++]=94;
            result_256[n_257++]=c_259+65-1;
        }
        else {
            result_256[n_257++]=c_259;
        }
    }
    result_256[n_257]=0;
    __result104__ = __result_obj__ = result_256;
    result_256 = come_decrement_ref_count2(result_256, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result104__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_260;
int ovec_max_261;
const char* err_265;
int erro_ofs_266;
int options_267;
char* str_268;
struct real_pcre8_or_16* re_269;
int n_270;
int options_271;
int len_272;
int regex_result_273;
int i_274;
int i_275;
int i_278;
void* __right_value194 = (void*)0;
char* match_string_279;
err_265 = (void*)0;
memset(&erro_ofs_266, 0, sizeof(int));
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
    while((_Bool)1) {
        options_271=2097152;
        len_272=strlen(self);
        regex_result_273=pcre_exec(re_269,(struct pcre_extra*)0,self,len_272,offset_260,options_271,ovec_value_264,ovec_max_261*3);
        for(        i_274=0;        i_274<ovec_max_261;        i_274++        ){
            start_262[i_274]=ovec_value_264[i_274*2];
        }
        for(        i_275=0;        i_275<ovec_max_261;        i_275++        ){
            end_263[i_275]=ovec_value_264[i_275*2+1];
        }
        if(regex_result_273==1||(group_strings==((void*)0)&&regex_result_273>0)) {
            n_270++;
            if(n_270==count) {
                return (_Bool)1;
            }
            if(offset_260==end_263[0]) {
                offset_260++;
            }
            else {
                offset_260=end_263[0];
            }
        }
        else {
            if(regex_result_273>1) {
                n_270++;
                list$1charph_reset(group_strings);
                for(                i_278=1;                i_278<regex_result_273;                i_278++                ){
                    match_string_279=(char*)come_increment_ref_count(charp_substring(self,start_262[i_278],end_263[i_278]));
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_279));
                    match_string_279 = come_decrement_ref_count2(match_string_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(n_270==count) {
                    return (_Bool)1;
                }
                if(offset_260==end_263[0]) {
                    offset_260++;
                }
                else {
                    offset_260=end_263[0];
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
struct list_item$1charph* it_276;
struct list_item$1charph* prev_it_277;
struct list$1charph* __result105__;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer3(prev_it_277,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result105__ = __result_obj__ = self;
    return __result105__;
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
void* __right_value195 = (void*)0;
unsigned int* __result106__;
    __result106__ = __result_obj__ = ((unsigned int*)(__right_value195=wchar_tp_multiply(str,n)));
    __right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value196 = (void*)0;
unsigned int* __result107__;
    __result107__ = __result_obj__ = ((unsigned int*)(__right_value196=wchar_tp_multiply(str,n)));
    __right_value196 = come_decrement_ref_count2(__right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
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
void* __right_value197 = (void*)0;
unsigned int* result_280;
unsigned int* __result108__;
    result_280=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libneo-c-str.c", 1154, "int"));
    wcscpy(result_280,left);
    wcscat(result_280,right);
    __result108__ = __result_obj__ = result_280;
    result_280 = come_decrement_ref_count2(result_280, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result108__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
unsigned int* result_281;
unsigned int* __result109__;
    result_281=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libneo-c-str.c", 1164, "int"));
    wcscpy(result_281,left);
    wcscat(result_281,right);
    __result109__ = __result_obj__ = result_281;
    result_281 = come_decrement_ref_count2(result_281, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result109__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_282;
    head_282=strstr(str,search_str);
    if(head_282==((void*)0)) {
        return default_value;
    }
    return head_282-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_283;
int result_287;
int offset_288;
const char* err_289;
int erro_ofs_290;
int options_291;
char* str_292;
struct real_pcre8_or_16* re_293;
int options_294;
int len_295;
int regex_result_296;
int i_297;
int i_298;
err_289 = (void*)0;
memset(&erro_ofs_290, 0, sizeof(int));
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
    while((_Bool)1) {
        options_294=2097152;
        len_295=strlen(self);
        regex_result_296=pcre_exec(re_293,(struct pcre_extra*)0,self,len_295,offset_288,options_294,ovec_value_286,ovec_max_283*3);
        for(        i_297=0;        i_297<ovec_max_283;        i_297++        ){
            start_284[i_297]=ovec_value_286[i_297*2];
        }
        for(        i_298=0;        i_298<ovec_max_283;        i_298++        ){
            end_285[i_298]=ovec_value_286[i_298*2+1];
        }
        if(regex_result_296==1||regex_result_296>0) {
            result_287=start_284[0];
            break;
        }
        {
            break;
        }
    }
    return result_287;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_299;
void* __right_value199 = (void*)0;
char* __result110__;
void* __right_value200 = (void*)0;
char* __result111__;
    len_299=strlen(self);
    if(strcmp(self,"")==0) {
        __result110__ = __result_obj__ = ((char*)(__right_value199=__builtin_string(self)));
        __right_value199 = come_decrement_ref_count2(__right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result110__;
    }
    if(index<0) {
        index+=len_299;
    }
    if(index>=len_299) {
        index=len_299-1;
    }
    if(index<0) {
        index=0;
    }
    self[index]=c;
    __result111__ = __result_obj__ = ((char*)(__right_value200=__builtin_string(self)));
    __right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_300;
void* __right_value201 = (void*)0;
char* result_301;
int i_302;
char* __result112__;
    len_300=strlen(str)*n+1;
    result_301=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_300)), "libneo-c-str.c", 1262, "char"));
    result_301[0]=0;
    for(    i_302=0;    i_302<n;    i_302++    ){
        strcat(result_301,str);
    }
    __result112__ = __result_obj__ = result_301;
    result_301 = come_decrement_ref_count2(result_301, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result112__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
int offset_303;
int ovec_max_304;
const char* err_308;
int erro_ofs_309;
int options_310;
char* str_311;
struct real_pcre8_or_16* re_312;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct buffer* result_313;
int options_314;
int len_315;
int regex_result_316;
int i_317;
int i_318;
void* __right_value204 = (void*)0;
char* str_319;
void* __right_value205 = (void*)0;
char* str_320;
void* __right_value206 = (void*)0;
char* str_321;
void* __right_value207 = (void*)0;
char* __result113__;
err_308 = (void*)0;
memset(&erro_ofs_309, 0, sizeof(int));
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
    result_313=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value202=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1290, "buffer"))))));
    come_call_finalizer3(__right_value202,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while((_Bool)1) {
        options_314=2097152;
        len_315=strlen(self);
        regex_result_316=pcre_exec(re_312,(struct pcre_extra*)0,self,len_315,offset_303,options_314,ovec_value_307,ovec_max_304*3);
        for(        i_317=0;        i_317<ovec_max_304;        i_317++        ){
            start_305[i_317]=ovec_value_307[i_317*2];
        }
        for(        i_318=0;        i_318<ovec_max_304;        i_318++        ){
            end_306[i_318]=ovec_value_307[i_318*2+1];
        }
        if(regex_result_316==1) {
            str_319=(char*)come_increment_ref_count(charp_substring(self,offset_303,start_305[0]));
            buffer_append_str(result_313,str_319);
            buffer_append_str(result_313,replace);
            if(offset_303==end_306[0]) {
                offset_303++;
            }
            else {
                offset_303=end_306[0];
            }
            if(!reg->global) {
                str_320=(char*)come_increment_ref_count(charp_substring(self,offset_303,-1));
                buffer_append_str(result_313,str_320);
                str_320 = come_decrement_ref_count2(str_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_319 = come_decrement_ref_count2(str_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_320 = come_decrement_ref_count2(str_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_319 = come_decrement_ref_count2(str_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_321=(char*)come_increment_ref_count(charp_substring(self,offset_303,-1));
            buffer_append_str(result_313,str_321);
            str_321 = come_decrement_ref_count2(str_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_321 = come_decrement_ref_count2(str_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result113__ = __result_obj__ = ((char*)(__right_value207=buffer_to_string(result_313)));
    come_call_finalizer3(result_313,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
int offset_322;
int ovec_max_323;
const char* err_327;
int erro_ofs_328;
int options_329;
char* str_330;
struct real_pcre8_or_16* re_331;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct buffer* result_332;
int n_333;
int options_334;
int len_335;
int regex_result_336;
int i_337;
int i_338;
void* __right_value210 = (void*)0;
char* str_339;
void* __right_value211 = (void*)0;
char* str_340;
void* __right_value212 = (void*)0;
char* str_341;
void* __right_value213 = (void*)0;
char* str_342;
void* __right_value214 = (void*)0;
char* __result114__;
err_327 = (void*)0;
memset(&erro_ofs_328, 0, sizeof(int));
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
    result_332=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value208=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1353, "buffer"))))));
    come_call_finalizer3(__right_value208,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    n_333=0;
    while((_Bool)1) {
        options_334=2097152;
        len_335=strlen(self);
        regex_result_336=pcre_exec(re_331,(struct pcre_extra*)0,self,len_335,offset_322,options_334,ovec_value_326,ovec_max_323*3);
        for(        i_337=0;        i_337<ovec_max_323;        i_337++        ){
            start_324[i_337]=ovec_value_326[i_337*2];
        }
        for(        i_338=0;        i_338<ovec_max_323;        i_338++        ){
            end_325[i_338]=ovec_value_326[i_338*2+1];
        }
        if(regex_result_336==1) {
            n_333++;
            str_339=(char*)come_increment_ref_count(charp_substring(self,offset_322,start_324[0]));
            buffer_append_str(result_332,str_339);
            buffer_append_str(result_332,replace);
            if(offset_322==end_325[0]) {
                offset_322++;
            }
            else {
                offset_322=end_325[0];
            }
            if(!reg->global) {
                str_340=(char*)come_increment_ref_count(charp_substring(self,offset_322,-1));
                buffer_append_str(result_332,str_340);
                str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(n_333==count) {
                str_341=(char*)come_increment_ref_count(charp_substring(self,offset_322,-1));
                buffer_append_str(result_332,str_341);
                str_341 = come_decrement_ref_count2(str_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_341 = come_decrement_ref_count2(str_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_342=(char*)come_increment_ref_count(charp_substring(self,offset_322,-1));
            buffer_append_str(result_332,str_342);
            str_342 = come_decrement_ref_count2(str_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_342 = come_decrement_ref_count2(str_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result114__ = __result_obj__ = ((char*)(__right_value214=buffer_to_string(result_332)));
    come_call_finalizer3(result_332,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct list$1charph* result_343;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct buffer* buf_344;
int i_345;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct list$1charph* __result115__;
    result_343=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value215=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1412, "list$1charph"))))));
    come_call_finalizer3(__right_value215,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    buf_344=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value217=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1414, "buffer"))))));
    come_call_finalizer3(__right_value217,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_345=0;    i_345<charp_length(self);    i_345++    ){
        if(strstr(self+i_345,str)==self+i_345) {
            list$1charph_push_back(result_343,(char*)come_increment_ref_count(((char*)(__right_value219=__builtin_string(buf_344->buf)))));
            __right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(buf_344);
            i_345+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_344,self[i_345]);
        }
    }
    if(buffer_length(buf_344)!=0) {
        list$1charph_push_back(result_343,(char*)come_increment_ref_count(((char*)(__right_value220=__builtin_string(buf_344->buf)))));
        __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result115__ = __result_obj__ = result_343;
    come_call_finalizer3(result_343,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(buf_344,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result115__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct list$1charph* result_346;
int offset_347;
int ovec_max_348;
const char* err_352;
int erro_ofs_353;
int options_354;
char* str_355;
struct real_pcre8_or_16* re_356;
int options_357;
int len_358;
int regex_result_359;
int i_360;
int i_361;
void* __right_value223 = (void*)0;
char* str_362;
void* __right_value224 = (void*)0;
char* str_363;
int i_364;
void* __right_value225 = (void*)0;
char* match_string_365;
struct list$1charph* __result116__;
err_352 = (void*)0;
memset(&erro_ofs_353, 0, sizeof(int));
    result_346=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value221=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1435, "list$1charph"))))));
    come_call_finalizer3(__right_value221,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
    while((_Bool)1) {
        options_357=2097152;
        len_358=strlen(self);
        regex_result_359=pcre_exec(re_356,(struct pcre_extra*)0,self,len_358,offset_347,options_357,ovec_value_351,ovec_max_348*3);
        for(        i_360=0;        i_360<ovec_max_348;        i_360++        ){
            start_349[i_360]=ovec_value_351[i_360*2];
        }
        for(        i_361=0;        i_361<ovec_max_348;        i_361++        ){
            end_350[i_361]=ovec_value_351[i_361*2+1];
        }
        if(regex_result_359==1) {
            str_362=(char*)come_increment_ref_count(charp_substring(self,start_349[0],end_350[0]));
            list$1charph_push_back(result_346,(char*)come_increment_ref_count(str_362));
            if(offset_347==end_350[0]) {
                offset_347++;
            }
            else {
                offset_347=end_350[0];
            }
            str_362 = come_decrement_ref_count2(str_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_359>1) {
                str_363=(char*)come_increment_ref_count(charp_substring(self,start_349[0],end_350[0]));
                list$1charph_push_back(result_346,(char*)come_increment_ref_count(str_363));
                if(offset_347==end_350[0]) {
                    offset_347++;
                }
                else {
                    offset_347=end_350[0];
                }
                for(                i_364=1;                i_364<regex_result_359;                i_364++                ){
                    match_string_365=(char*)come_increment_ref_count(charp_substring(self,start_349[i_364],end_350[i_364]));
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
    __result116__ = __result_obj__ = result_346;
    come_call_finalizer3(result_346,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result116__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
const char* err_366;
int erro_ofs_367;
int options_368;
char* str_369;
struct real_pcre8_or_16* re_370;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct list$1charph* result_371;
int offset_372;
int ovec_max_373;
int options_377;
int len_378;
int regex_result_379;
int i_380;
int i_381;
void* __right_value228 = (void*)0;
char* str_382;
void* __right_value229 = (void*)0;
char* str_383;
int i_384;
void* __right_value230 = (void*)0;
char* match_str_385;
void* __right_value231 = (void*)0;
char* str_386;
struct list$1charph* __result117__;
err_366 = (void*)0;
memset(&erro_ofs_367, 0, sizeof(int));
    options_368=reg->options;
    str_369=reg->str;
    re_370=reg->re;
    result_371=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value226=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1516, "list$1charph"))))));
    come_call_finalizer3(__right_value226,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_372=0;
    ovec_max_373=16;
    int start_374[ovec_max_373];
    memset(&start_374, 0, sizeof(int)    *(ovec_max_373)    );
    int end_375[ovec_max_373];
    memset(&end_375, 0, sizeof(int)    *(ovec_max_373)    );
    int ovec_value_376[ovec_max_373*3];
    memset(&ovec_value_376, 0, sizeof(int)    *(ovec_max_373*3)    );
    while((_Bool)1) {
        options_377=2097152;
        len_378=strlen(self);
        regex_result_379=pcre_exec(re_370,(struct pcre_extra*)0,self,len_378,offset_372,options_377,ovec_value_376,ovec_max_373*3);
        for(        i_380=0;        i_380<ovec_max_373;        i_380++        ){
            start_374[i_380]=ovec_value_376[i_380*2];
        }
        for(        i_381=0;        i_381<ovec_max_373;        i_381++        ){
            end_375[i_381]=ovec_value_376[i_381*2+1];
        }
        if(regex_result_379==1) {
            str_382=(char*)come_increment_ref_count(charp_substring(self,offset_372,start_374[0]));
            list$1charph_push_back(result_371,(char*)come_increment_ref_count(str_382));
            if(offset_372==end_375[0]) {
                offset_372++;
            }
            else {
                offset_372=end_375[0];
            }
            str_382 = come_decrement_ref_count2(str_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_379>1) {
                str_383=(char*)come_increment_ref_count(charp_substring(self,offset_372,start_374[0]));
                list$1charph_push_back(result_371,(char*)come_increment_ref_count(str_383));
                if(offset_372==end_375[0]) {
                    offset_372++;
                }
                else {
                    offset_372=end_375[0];
                }
                for(                i_384=1;                i_384<regex_result_379;                i_384++                ){
                    match_str_385=(char*)come_increment_ref_count(charp_substring(self,start_374[i_384],end_375[i_384]));
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
    if(offset_372<charp_length(self)) {
        str_386=(char*)come_increment_ref_count(charp_substring(self,offset_372,-1));
        list$1charph_push_back(result_371,(char*)come_increment_ref_count(str_386));
        str_386 = come_decrement_ref_count2(str_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result117__ = __result_obj__ = result_371;
    come_call_finalizer3(result_371,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result117__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_387;
int ovec_max_388;
const char* err_392;
int erro_ofs_393;
int options_394;
char* str_395;
struct real_pcre8_or_16* re_396;
int options_397;
int len_398;
int regex_result_399;
int i_400;
int i_401;
err_392 = (void*)0;
memset(&erro_ofs_393, 0, sizeof(int));
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
    while((_Bool)1) {
        options_397=2097152;
        len_398=strlen(self);
        regex_result_399=pcre_exec(re_396,(struct pcre_extra*)0,self,len_398,offset_387,options_397,ovec_value_391,ovec_max_388*3);
        for(        i_400=0;        i_400<ovec_max_388;        i_400++        ){
            start_389[i_400]=ovec_value_391[i_400*2];
        }
        for(        i_401=0;        i_401<ovec_max_388;        i_401++        ){
            end_390[i_401]=ovec_value_391[i_401*2+1];
        }
        if(regex_result_399>0) {
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
const char* err_402;
int erro_ofs_403;
int options_404;
char* str_405;
struct real_pcre8_or_16* re_406;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct list$1charph* result_407;
int offset_408;
int ovec_max_409;
int n_413;
int options_414;
int len_415;
int regex_result_416;
int i_417;
int i_418;
void* __right_value234 = (void*)0;
char* str_419;
void* __right_value235 = (void*)0;
char* str_420;
int i_421;
void* __right_value236 = (void*)0;
char* match_str_422;
void* __right_value237 = (void*)0;
char* str_423;
struct list$1charph* __result118__;
err_402 = (void*)0;
memset(&erro_ofs_403, 0, sizeof(int));
    options_404=reg->options;
    str_405=reg->str;
    re_406=reg->re;
    result_407=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value232=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1638, "list$1charph"))))));
    come_call_finalizer3(__right_value232,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    offset_408=0;
    ovec_max_409=16;
    int start_410[ovec_max_409];
    memset(&start_410, 0, sizeof(int)    *(ovec_max_409)    );
    int end_411[ovec_max_409];
    memset(&end_411, 0, sizeof(int)    *(ovec_max_409)    );
    int ovec_value_412[ovec_max_409*3];
    memset(&ovec_value_412, 0, sizeof(int)    *(ovec_max_409*3)    );
    n_413=0;
    while((_Bool)1) {
        options_414=2097152;
        len_415=strlen(self);
        regex_result_416=pcre_exec(re_406,(struct pcre_extra*)0,self,len_415,offset_408,options_414,ovec_value_412,ovec_max_409*3);
        for(        i_417=0;        i_417<ovec_max_409;        i_417++        ){
            start_410[i_417]=ovec_value_412[i_417*2];
        }
        for(        i_418=0;        i_418<ovec_max_409;        i_418++        ){
            end_411[i_418]=ovec_value_412[i_418*2+1];
        }
        if(regex_result_416==1) {
            str_419=(char*)come_increment_ref_count(charp_substring(self,offset_408,start_410[0]));
            list$1charph_push_back(result_407,(char*)come_increment_ref_count(str_419));
            if(offset_408==end_411[0]) {
                offset_408++;
            }
            else {
                offset_408=end_411[0];
            }
            str_419 = come_decrement_ref_count2(str_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(regex_result_416>1) {
                str_420=(char*)come_increment_ref_count(charp_substring(self,offset_408,start_410[0]));
                list$1charph_push_back(result_407,(char*)come_increment_ref_count(str_420));
                if(offset_408==end_411[0]) {
                    offset_408++;
                }
                else {
                    offset_408=end_411[0];
                }
                for(                i_421=1;                i_421<regex_result_416;                i_421++                ){
                    match_str_422=(char*)come_increment_ref_count(charp_substring(self,start_410[i_421],end_411[i_421]));
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
        if(maxsplit==n_413) {
            break;
        }
    }
    if(offset_408<charp_length(self)) {
        str_423=(char*)come_increment_ref_count(charp_substring(self,offset_408,-1));
        list$1charph_push_back(result_407,(char*)come_increment_ref_count(str_423));
        str_423 = come_decrement_ref_count2(str_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result118__ = __result_obj__ = result_407;
    come_call_finalizer3(result_407,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result118__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_424;
int erro_ofs_425;
int options_426;
char* str_427;
struct real_pcre8_or_16* re_428;
void* __right_value238 = (void*)0;
char* self2_429;
int ovec_max_430;
int result_434;
int offset_435;
int n_436;
int options_437;
int len_438;
int regex_result_439;
int i_440;
int i_441;
int __result119__;
err_424 = (void*)0;
memset(&erro_ofs_425, 0, sizeof(int));
    options_426=reg->options;
    str_427=reg->str;
    re_428=reg->re;
    self2_429=(char*)come_increment_ref_count(charp_reverse(self));
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
    while((_Bool)1) {
        options_437=2097152;
        len_438=strlen(self2_429);
        regex_result_439=pcre_exec(re_428,(struct pcre_extra*)0,self2_429,len_438,offset_435,options_437,ovec_value_433,ovec_max_430*3);
        for(        i_440=0;        i_440<ovec_max_430;        i_440++        ){
            start_431[i_440]=ovec_value_433[i_440*2];
        }
        for(        i_441=0;        i_441<ovec_max_430;        i_441++        ){
            end_432[i_441]=ovec_value_433[i_441*2+1];
        }
        if(regex_result_439>0) {
            n_436++;
            if(offset_435==end_432[0]) {
                offset_435++;
            }
            else {
                offset_435=end_432[0];
            }
            if(n_436==count) {
                result_434=strlen(self)-end_432[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result119__ = result_434;
    self2_429 = come_decrement_ref_count2(self2_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result119__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_442;
int ovec_max_443;
const char* err_447;
int erro_ofs_448;
int options_449;
char* str_450;
struct real_pcre8_or_16* re_451;
int n_452;
int options_453;
int len_454;
int regex_result_455;
int i_456;
int i_457;
err_447 = (void*)0;
memset(&erro_ofs_448, 0, sizeof(int));
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
    while((_Bool)1) {
        options_453=2097152;
        len_454=strlen(self);
        regex_result_455=pcre_exec(re_451,(struct pcre_extra*)0,self,len_454,offset_442,options_453,ovec_value_446,ovec_max_443*3);
        for(        i_456=0;        i_456<ovec_max_443;        i_456++        ){
            start_444[i_456]=ovec_value_446[i_456*2];
        }
        for(        i_457=0;        i_457<ovec_max_443;        i_457++        ){
            end_445[i_457]=ovec_value_446[i_457*2+1];
        }
        if(regex_result_455>0) {
            n_452++;
            if(count==n_452) {
                return (_Bool)1;
            }
            if(offset_442==end_445[0]) {
                offset_442++;
            }
            else {
                offset_442=end_445[0];
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
int offset_458;
int ovec_max_459;
const char* err_463;
int erro_ofs_464;
int options_465;
char* str_466;
struct real_pcre8_or_16* re_467;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct buffer* result_468;
int options_469;
int len_470;
int regex_result_471;
int i_472;
int i_473;
void* __right_value241 = (void*)0;
char* str_474;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct list$1charph* group_strings_475;
void* __right_value244 = (void*)0;
char* match_string_476;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
char* block_result_477;
void* __right_value247 = (void*)0;
char* str_478;
void* __right_value248 = (void*)0;
char* str_479;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1charph* group_strings_480;
int i_481;
void* __right_value251 = (void*)0;
char* match_string_482;
void* __right_value252 = (void*)0;
char* match_string_483;
void* __right_value253 = (void*)0;
char* block_result_484;
void* __right_value254 = (void*)0;
char* str_485;
void* __right_value255 = (void*)0;
char* str_486;
void* __right_value256 = (void*)0;
char* __result120__;
err_463 = (void*)0;
memset(&erro_ofs_464, 0, sizeof(int));
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
    result_468=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value239=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1850, "buffer"))))));
    come_call_finalizer3(__right_value239,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while((_Bool)1) {
        options_469=2097152;
        len_470=strlen(self);
        regex_result_471=pcre_exec(re_467,(struct pcre_extra*)0,self,len_470,offset_458,options_469,ovec_value_462,ovec_max_459*3);
        for(        i_472=0;        i_472<ovec_max_459;        i_472++        ){
            start_460[i_472]=ovec_value_462[i_472*2];
        }
        for(        i_473=0;        i_473<ovec_max_459;        i_473++        ){
            end_461[i_473]=ovec_value_462[i_473*2+1];
        }
        if(regex_result_471==1) {
            str_474=(char*)come_increment_ref_count(charp_substring(self,offset_458,start_460[0]));
            buffer_append_str(result_468,str_474);
            group_strings_475=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value242=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1870, "list$1charph"))))));
            come_call_finalizer3(__right_value242,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            match_string_476=(char*)come_increment_ref_count(charp_substring(self,start_460[0],end_461[0]));
            list$1charph_push_back(group_strings_475,(char*)come_increment_ref_count(((char*)(__right_value245=charp_substring(self,start_460[0],end_461[0])))));
            __right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            block_result_477=(char*)come_increment_ref_count(block(parent,match_string_476,group_strings_475));
            buffer_append_str(result_468,block_result_477);
            if(offset_458==end_461[0]) {
                offset_458++;
            }
            else {
                offset_458=end_461[0];
            }
            if(!reg->global) {
                str_478=(char*)come_increment_ref_count(charp_substring(self,offset_458,-1));
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
            if(regex_result_471>1) {
                str_479=(char*)come_increment_ref_count(charp_substring(self,offset_458,start_460[0]));
                buffer_append_str(result_468,str_479);
                if(offset_458==end_461[0]) {
                    offset_458++;
                }
                else {
                    offset_458=end_461[0];
                }
                group_strings_480=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value249=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1905, "list$1charph"))))));
                come_call_finalizer3(__right_value249,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_481=1;                i_481<regex_result_471;                i_481++                ){
                    match_string_482=(char*)come_increment_ref_count(charp_substring(self,start_460[i_481],end_461[i_481]));
                    list$1charph_push_back(group_strings_480,(char*)come_increment_ref_count(match_string_482));
                    match_string_482 = come_decrement_ref_count2(match_string_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_483=(char*)come_increment_ref_count(charp_substring(self,start_460[0],end_461[0]));
                block_result_484=(char*)come_increment_ref_count(block(parent,match_string_483,group_strings_480));
                buffer_append_str(result_468,block_result_484);
                if(!reg->global) {
                    str_485=(char*)come_increment_ref_count(charp_substring(self,offset_458,-1));
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
                str_486=(char*)come_increment_ref_count(charp_substring(self,offset_458,-1));
                buffer_append_str(result_468,str_486);
                str_486 = come_decrement_ref_count2(str_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_486 = come_decrement_ref_count2(str_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result120__ = __result_obj__ = ((char*)(__right_value256=buffer_to_string(result_468)));
    come_call_finalizer3(result_468,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_487;
int ovec_max_488;
const char* err_492;
int erro_ofs_493;
int options_494;
char* str_495;
struct real_pcre8_or_16* re_496;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct buffer* result_497;
int n_498;
int options_499;
int len_500;
int regex_result_501;
int i_502;
int i_503;
void* __right_value259 = (void*)0;
char* str_504;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct list$1charph* group_strings_505;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
char* match_string_506;
void* __right_value264 = (void*)0;
char* block_result_507;
void* __right_value265 = (void*)0;
char* str_508;
void* __right_value266 = (void*)0;
char* str_509;
void* __right_value267 = (void*)0;
char* str_510;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1charph* group_strings_511;
int i_512;
void* __right_value270 = (void*)0;
char* match_string_513;
void* __right_value271 = (void*)0;
char* match_string_514;
void* __right_value272 = (void*)0;
char* block_result_515;
void* __right_value273 = (void*)0;
char* str_516;
void* __right_value274 = (void*)0;
char* str_517;
void* __right_value275 = (void*)0;
char* str_518;
void* __right_value276 = (void*)0;
char* __result121__;
err_492 = (void*)0;
memset(&erro_ofs_493, 0, sizeof(int));
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
    result_497=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value257=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-str.c", 1951, "buffer"))))));
    come_call_finalizer3(__right_value257,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    n_498=0;
    while((_Bool)1) {
        options_499=2097152;
        len_500=strlen(self);
        regex_result_501=pcre_exec(re_496,(struct pcre_extra*)0,self,len_500,offset_487,options_499,ovec_value_491,ovec_max_488*3);
        for(        i_502=0;        i_502<ovec_max_488;        i_502++        ){
            start_489[i_502]=ovec_value_491[i_502*2];
        }
        for(        i_503=0;        i_503<ovec_max_488;        i_503++        ){
            end_490[i_503]=ovec_value_491[i_503*2+1];
        }
        if(regex_result_501==1) {
            n_498++;
            str_504=(char*)come_increment_ref_count(charp_substring(self,offset_487,start_489[0]));
            buffer_append_str(result_497,str_504);
            group_strings_505=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value260=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 1974, "list$1charph"))))));
            come_call_finalizer3(__right_value260,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(group_strings_505,(char*)come_increment_ref_count(((char*)(__right_value262=charp_substring(self,start_489[0],end_490[0])))));
            __right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_string_506=(char*)come_increment_ref_count(charp_substring(self,start_489[0],end_490[0]));
            block_result_507=(char*)come_increment_ref_count(block(parent,match_string_506,group_strings_505));
            buffer_append_str(result_497,block_result_507);
            if(offset_487==end_490[0]) {
                offset_487++;
            }
            else {
                offset_487=end_490[0];
            }
            if(!reg->global) {
                str_508=(char*)come_increment_ref_count(charp_substring(self,offset_487,-1));
                buffer_append_str(result_497,str_508);
                str_508 = come_decrement_ref_count2(str_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_504 = come_decrement_ref_count2(str_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(group_strings_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_506 = come_decrement_ref_count2(match_string_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_507 = come_decrement_ref_count2(block_result_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_508 = come_decrement_ref_count2(str_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(n_498==count) {
                str_509=(char*)come_increment_ref_count(charp_substring(self,offset_487,-1));
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
            if(regex_result_501>1) {
                n_498++;
                str_510=(char*)come_increment_ref_count(charp_substring(self,offset_487,start_489[0]));
                buffer_append_str(result_497,str_510);
                if(offset_487==end_490[0]) {
                    offset_487++;
                }
                else {
                    offset_487=end_490[0];
                }
                group_strings_511=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value268=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-str.c", 2017, "list$1charph"))))));
                come_call_finalizer3(__right_value268,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_512=1;                i_512<regex_result_501;                i_512++                ){
                    match_string_513=(char*)come_increment_ref_count(charp_substring(self,start_489[i_512],end_490[i_512]));
                    list$1charph_push_back(group_strings_511,(char*)come_increment_ref_count(match_string_513));
                    match_string_513 = come_decrement_ref_count2(match_string_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_514=(char*)come_increment_ref_count(charp_substring(self,start_489[0],end_490[0]));
                block_result_515=(char*)come_increment_ref_count(block(parent,match_string_514,group_strings_511));
                buffer_append_str(result_497,block_result_515);
                if(!reg->global) {
                    str_516=(char*)come_increment_ref_count(charp_substring(self,offset_487,-1));
                    buffer_append_str(result_497,str_516);
                    str_516 = come_decrement_ref_count2(str_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_510 = come_decrement_ref_count2(str_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(group_strings_511,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    match_string_514 = come_decrement_ref_count2(match_string_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_515 = come_decrement_ref_count2(block_result_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_516 = come_decrement_ref_count2(str_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(n_498==count) {
                    str_517=(char*)come_increment_ref_count(charp_substring(self,offset_487,-1));
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
                str_518=(char*)come_increment_ref_count(charp_substring(self,offset_487,-1));
                buffer_append_str(result_497,str_518);
                str_518 = come_decrement_ref_count2(str_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_518 = come_decrement_ref_count2(str_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result121__ = __result_obj__ = ((char*)(__right_value276=buffer_to_string(result_497)));
    come_call_finalizer3(result_497,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result121__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
int result_519;
unsigned int* p_520;
    result_519=0;
    p_520=value;
    while(*p_520) {
        result_519+=(*p_520);
        p_520++;
    }
    return result_519;
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
void* __right_value277 = (void*)0;
char* __result122__;
    __result122__ = __result_obj__ = ((char*)(__right_value277=xsprintf("%ls",wc)));
    __right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result122__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
char* result_521;
void* __right_value279 = (void*)0;
char* __result123__;
char* __result124__;
    result_521=(char*)come_increment_ref_count(__builtin_string(str));
    if(result_521[string_length(result_521)-1]==10) {
        __result123__ = __result_obj__ = ((char*)(__right_value279=string_substring(result_521,0,-2)));
        result_521 = come_decrement_ref_count2(result_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value279 = come_decrement_ref_count2(__right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result123__;
    }
    __result124__ = __result_obj__ = result_521;
    result_521 = come_decrement_ref_count2(result_521, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result124__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
char* __result125__;
char* result_522;
void* __right_value281 = (void*)0;
char* result2_523;
char* __result126__;
    if(path==((void*)0)) {
        __result125__ = __result_obj__ = ((char*)(__right_value280=__builtin_string("")));
        __right_value280 = come_decrement_ref_count2(__right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result125__;
    }
    result_522=realpath(path,((void*)0));
    result2_523=(char*)come_increment_ref_count(__builtin_string(result_522));
    free(result_522);
    __result126__ = __result_obj__ = result2_523;
    result2_523 = come_decrement_ref_count2(result2_523, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result126__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
char* __result127__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
char* __result128__;
    if(path==((void*)0)) {
        __result127__ = __result_obj__ = ((char*)(__right_value282=__builtin_string("")));
        __right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result127__;
    }
    __result128__ = __result_obj__ = ((char*)(__right_value284=__builtin_string(dirname(((char*)(__right_value283=__builtin_string(path)))))));
    __right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result128__;
}

