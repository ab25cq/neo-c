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
enum anonymous_typeY4 { TERM=(1),
NONTERM
};
typedef enum anonymous_typeY4 Kind;
typedef struct rule* Rule;
typedef struct term* Term;
struct term
{
    char* name;
    enum anonymous_typeY4 kind;
    int esn;
    int arity;
    struct term* link;
    struct rule* rules;
};
typedef struct nonterm* Nonterm;
struct nonterm
{
    char* name;
    enum anonymous_typeY4 kind;
    int number;
    int lhscount;
    int reached;
    struct rule* rules;
    struct rule* chain;
    struct nonterm* link;
};
typedef struct tree* Tree;
struct tree
{
    void* op;
    struct tree* left;
    struct tree* right;
    int nterms;
};
struct rule
{
    struct nonterm* lhs;
    struct tree* pattern;
    int ern;
    int packed;
    int cost;
    char* code;
    char* template;
    struct rule* link;
    struct rule* next;
    struct rule* chain;
    struct rule* decode;
    struct rule* kids;
};
extern int errcnt;
extern struct _IO_FILE* infp;
extern struct _IO_FILE* outfp;
union anonymous_typeZ5
{
int n;
char* string;
struct tree* tree;
};
typedef union anonymous_typeZ5 YYSTYPE;
typedef struct __locale_struct* locale_t;

// header function
void* come_calloc(int count, int size, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free);
void come_free_object(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
char* __builtin_string(char* str);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* come_null_check(void* mem, char* sname, int sline, int id);
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
int atoi(const char* anonymous_var_nameX159);
long atol(const char* anonymous_var_nameX160);
long long atoll(const char* anonymous_var_nameX161);
double atof(const char* anonymous_var_nameX162);
float strtof(const char* anonymous_var_nameX163, char** anonymous_var_nameX164);
double strtod(const char* anonymous_var_nameX165, char** anonymous_var_nameX166);
long double strtold(const char* anonymous_var_nameX167, char** anonymous_var_nameX168);
long strtol(const char* anonymous_var_nameX169, char** anonymous_var_nameX170, int anonymous_var_nameX171);
unsigned long int strtoul(const char* anonymous_var_nameX172, char** anonymous_var_nameX173, int anonymous_var_nameX174);
long long strtoll(const char* anonymous_var_nameX175, char** anonymous_var_nameX176, int anonymous_var_nameX177);
unsigned long long strtoull(const char* anonymous_var_nameX178, char** anonymous_var_nameX179, int anonymous_var_nameX180);
int rand();
void srand(unsigned int anonymous_var_nameX181);
void* malloc(unsigned long int anonymous_var_nameX182);
void* calloc(unsigned long int anonymous_var_nameX183, unsigned long int anonymous_var_nameX184);
void* realloc(void* anonymous_var_nameX185, unsigned long int anonymous_var_nameX186);
void free(void* anonymous_var_nameX187);
void* aligned_alloc(unsigned long int anonymous_var_nameX188, unsigned long int anonymous_var_nameX189);
void abort();
int atexit(void (*anonymous_lambda_var_nameZ1)());
void exit(int anonymous_var_nameX190);
void _Exit(int anonymous_var_nameX191);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX192);
char* getenv(const char* anonymous_var_nameX193);
int system(const char* anonymous_var_nameX194);
void* bsearch(const void* anonymous_var_nameX195, const void* anonymous_var_nameX196, unsigned long int anonymous_var_nameX197, unsigned long int anonymous_var_nameX198, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));
void qsort(void* anonymous_var_nameX201, unsigned long int anonymous_var_nameX202, unsigned long int anonymous_var_nameX203, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));
int abs(int anonymous_var_nameX206);
long labs(long anonymous_var_nameX207);
long long llabs(long long anonymous_var_nameX208);
struct anonymous_typeX1 div(int anonymous_var_nameX209, int anonymous_var_nameX210);
struct anonymous_typeX2 ldiv(long anonymous_var_nameX211, long anonymous_var_nameX212);
struct anonymous_typeX3 lldiv(long long anonymous_var_nameX213, long long anonymous_var_nameX214);
int mblen(const char* anonymous_var_nameX215, unsigned long int anonymous_var_nameX216);
int mbtowc(unsigned int* anonymous_var_nameX217, const char* anonymous_var_nameX218, unsigned long int anonymous_var_nameX219);
int wctomb(char* anonymous_var_nameX220, unsigned int anonymous_var_nameX221);
unsigned long int mbstowcs(unsigned int* anonymous_var_nameX222, const char* anonymous_var_nameX223, unsigned long int anonymous_var_nameX224);
unsigned long int wcstombs(char* anonymous_var_nameX225, const unsigned int* anonymous_var_nameX226, unsigned long int anonymous_var_nameX227);
unsigned long int __ctype_get_mb_cur_max();
int posix_memalign(void** anonymous_var_nameX228, unsigned long int anonymous_var_nameX229, unsigned long int anonymous_var_nameX230);
int setenv(const char* anonymous_var_nameX231, const char* anonymous_var_nameX232, int anonymous_var_nameX233);
int unsetenv(const char* anonymous_var_nameX234);
int mkstemp(char* anonymous_var_nameX235);
int mkostemp(char* anonymous_var_nameX236, int anonymous_var_nameX237);
char* mkdtemp(char* anonymous_var_nameX238);
int getsubopt(char** anonymous_var_nameX239, char** anonymous_var_nameX240, char** anonymous_var_nameX241);
int rand_r(unsigned int* anonymous_var_nameX242);
char* realpath(const char* anonymous_var_nameX243, char* anonymous_var_nameX244);
long int random();
void srandom(unsigned int anonymous_var_nameX245);
char* initstate(unsigned int anonymous_var_nameX246, char* anonymous_var_nameX247, unsigned long int anonymous_var_nameX248);
char* setstate(char* anonymous_var_nameX249);
int putenv(char* anonymous_var_nameX250);
int posix_openpt(int anonymous_var_nameX251);
int grantpt(int anonymous_var_nameX252);
int unlockpt(int anonymous_var_nameX253);
char* ptsname(int anonymous_var_nameX254);
char* l64a(long anonymous_var_nameX255);
long a64l(const char* anonymous_var_nameX256);
void setkey(const char* anonymous_var_nameX257);
double drand48();
double erand48(unsigned short int anonymous_var_nameX258[3]);
long int lrand48();
long int nrand48(unsigned short int anonymous_var_nameX259[3]);
long mrand48();
long jrand48(unsigned short int anonymous_var_nameX260[3]);
void srand48(long anonymous_var_nameX261);
unsigned short int* seed48(unsigned short int anonymous_var_nameX262[3]);
void lcong48(unsigned short int anonymous_var_nameX263[7]);
void* alloca(unsigned long int anonymous_var_nameX264);
char* mktemp(char* anonymous_var_nameX265);
int mkstemps(char* anonymous_var_nameX266, int anonymous_var_nameX267);
int mkostemps(char* anonymous_var_nameX268, int anonymous_var_nameX269, int anonymous_var_nameX270);
void* valloc(unsigned long int anonymous_var_nameX271);
void* memalign(unsigned long int anonymous_var_nameX272, unsigned long int anonymous_var_nameX273);
int getloadavg(double* anonymous_var_nameX274, int anonymous_var_nameX275);
int clearenv();
void* reallocarray(void* anonymous_var_nameX276, unsigned long int anonymous_var_nameX277, unsigned long int anonymous_var_nameX278);
void qsort_r(void* anonymous_var_nameX279, unsigned long int anonymous_var_nameX280, unsigned long int anonymous_var_nameX281, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX285);
void* alloc(int nbytes);
struct nonterm* nonterm(char* id);
struct term* term(char* id, int esn);
struct tree* tree(char* op, struct tree* left, struct tree* right);
struct rule* rule(char* id, struct tree* pattern, char* template, char* code);
static void* yymalloc(unsigned int bytes);
static void* yyrealloc(void* old, unsigned int bytes);
static int yygrow();
void __assert_fail(const char* anonymous_var_nameX286, const char* anonymous_var_nameX287, int anonymous_var_nameX288, const char* anonymous_var_nameX289);
int isalnum(int anonymous_var_nameX290);
int isalpha(int anonymous_var_nameX291);
int isblank(int anonymous_var_nameX292);
int iscntrl(int anonymous_var_nameX293);
int isdigit(int anonymous_var_nameX294);
int isgraph(int anonymous_var_nameX295);
int islower(int anonymous_var_nameX296);
int isprint(int anonymous_var_nameX297);
int ispunct(int anonymous_var_nameX298);
int isspace(int anonymous_var_nameX299);
int isupper(int anonymous_var_nameX300);
int isxdigit(int anonymous_var_nameX301);
int tolower(int anonymous_var_nameX302);
int toupper(int anonymous_var_nameX303);
int isalnum_l(int anonymous_var_nameX304, struct __locale_struct* anonymous_var_nameX305);
int isalpha_l(int anonymous_var_nameX306, struct __locale_struct* anonymous_var_nameX307);
int isblank_l(int anonymous_var_nameX308, struct __locale_struct* anonymous_var_nameX309);
int iscntrl_l(int anonymous_var_nameX310, struct __locale_struct* anonymous_var_nameX311);
int isdigit_l(int anonymous_var_nameX312, struct __locale_struct* anonymous_var_nameX313);
int isgraph_l(int anonymous_var_nameX314, struct __locale_struct* anonymous_var_nameX315);
int islower_l(int anonymous_var_nameX316, struct __locale_struct* anonymous_var_nameX317);
int isprint_l(int anonymous_var_nameX318, struct __locale_struct* anonymous_var_nameX319);
int ispunct_l(int anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);
int isspace_l(int anonymous_var_nameX322, struct __locale_struct* anonymous_var_nameX323);
int isupper_l(int anonymous_var_nameX324, struct __locale_struct* anonymous_var_nameX325);
int isxdigit_l(int anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);
int tolower_l(int anonymous_var_nameX328, struct __locale_struct* anonymous_var_nameX329);
int toupper_l(int anonymous_var_nameX330, struct __locale_struct* anonymous_var_nameX331);
int isascii(int anonymous_var_nameX332);
int toascii(int anonymous_var_nameX333);
void* memcpy(void* anonymous_var_nameX334, const void* anonymous_var_nameX335, unsigned long int anonymous_var_nameX336);
void* memmove(void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long int anonymous_var_nameX339);
void* memset(void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long int anonymous_var_nameX342);
int memcmp(const void* anonymous_var_nameX343, const void* anonymous_var_nameX344, unsigned long int anonymous_var_nameX345);
void* memchr(const void* anonymous_var_nameX346, int anonymous_var_nameX347, unsigned long int anonymous_var_nameX348);
char* strcpy(char* anonymous_var_nameX349, const char* anonymous_var_nameX350);
char* strncpy(char* anonymous_var_nameX351, const char* anonymous_var_nameX352, unsigned long int anonymous_var_nameX353);
char* strcat(char* anonymous_var_nameX354, const char* anonymous_var_nameX355);
char* strncat(char* anonymous_var_nameX356, const char* anonymous_var_nameX357, unsigned long int anonymous_var_nameX358);
int strcmp(const char* anonymous_var_nameX359, const char* anonymous_var_nameX360);
int strncmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362, unsigned long int anonymous_var_nameX363);
int strcoll(const char* anonymous_var_nameX364, const char* anonymous_var_nameX365);
unsigned long int strxfrm(char* anonymous_var_nameX366, const char* anonymous_var_nameX367, unsigned long int anonymous_var_nameX368);
char* strchr(const char* anonymous_var_nameX369, int anonymous_var_nameX370);
char* strrchr(const char* anonymous_var_nameX371, int anonymous_var_nameX372);
unsigned long int strcspn(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);
unsigned long int strspn(const char* anonymous_var_nameX375, const char* anonymous_var_nameX376);
char* strpbrk(const char* anonymous_var_nameX377, const char* anonymous_var_nameX378);
char* strstr(const char* anonymous_var_nameX379, const char* anonymous_var_nameX380);
char* strtok(char* anonymous_var_nameX381, const char* anonymous_var_nameX382);
unsigned long int strlen(const char* anonymous_var_nameX383);
char* strerror(int anonymous_var_nameX384);
int bcmp(const void* anonymous_var_nameX385, const void* anonymous_var_nameX386, unsigned long int anonymous_var_nameX387);
void bcopy(const void* anonymous_var_nameX388, void* anonymous_var_nameX389, unsigned long int anonymous_var_nameX390);
void bzero(void* anonymous_var_nameX391, unsigned long int anonymous_var_nameX392);
char* index(const char* anonymous_var_nameX393, int anonymous_var_nameX394);
char* rindex(const char* anonymous_var_nameX395, int anonymous_var_nameX396);
int ffs(int anonymous_var_nameX397);
int ffsl(long anonymous_var_nameX398);
int ffsll(long long anonymous_var_nameX399);
int strcasecmp(const char* anonymous_var_nameX400, const char* anonymous_var_nameX401);
int strncasecmp(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long int anonymous_var_nameX404);
int strcasecmp_l(const char* anonymous_var_nameX405, const char* anonymous_var_nameX406, struct __locale_struct* anonymous_var_nameX407);
int strncasecmp_l(const char* anonymous_var_nameX408, const char* anonymous_var_nameX409, unsigned long int anonymous_var_nameX410, struct __locale_struct* anonymous_var_nameX411);
char* strtok_r(char* anonymous_var_nameX412, const char* anonymous_var_nameX413, char** anonymous_var_nameX414);
int strerror_r(int anonymous_var_nameX415, char* anonymous_var_nameX416, unsigned long int anonymous_var_nameX417);
char* stpcpy(char* anonymous_var_nameX418, const char* anonymous_var_nameX419);
char* stpncpy(char* anonymous_var_nameX420, const char* anonymous_var_nameX421, unsigned long int anonymous_var_nameX422);
unsigned long int strnlen(const char* anonymous_var_nameX423, unsigned long int anonymous_var_nameX424);
char* strdup(const char* anonymous_var_nameX425);
char* strndup(const char* anonymous_var_nameX426, unsigned long int anonymous_var_nameX427);
char* strsignal(int anonymous_var_nameX428);
char* strerror_l(int anonymous_var_nameX429, struct __locale_struct* anonymous_var_nameX430);
int strcoll_l(const char* anonymous_var_nameX431, const char* anonymous_var_nameX432, struct __locale_struct* anonymous_var_nameX433);
unsigned long int strxfrm_l(char* anonymous_var_nameX434, const char* anonymous_var_nameX435, unsigned long int anonymous_var_nameX436, struct __locale_struct* anonymous_var_nameX437);
void* memmem(const void* anonymous_var_nameX438, unsigned long int anonymous_var_nameX439, const void* anonymous_var_nameX440, unsigned long int anonymous_var_nameX441);
void* memccpy(void* anonymous_var_nameX442, const void* anonymous_var_nameX443, int anonymous_var_nameX444, unsigned long int anonymous_var_nameX445);
char* strsep(char** anonymous_var_nameX446, const char* anonymous_var_nameX447);
unsigned long int strlcat(char* anonymous_var_nameX448, const char* anonymous_var_nameX449, unsigned long int anonymous_var_nameX450);
unsigned long int strlcpy(char* anonymous_var_nameX451, const char* anonymous_var_nameX452, unsigned long int anonymous_var_nameX453);
void explicit_bzero(void* anonymous_var_nameX454, unsigned long int anonymous_var_nameX455);
static int get();
void yyerror(char* fmt, ...);
int yylex();
void yywarn(char* fmt, ...);
int yyparse();
// uniq global variable
// source head3
static const char yysccsid[]="@(#)yaccpar	1.8 (Berkeley +Cygnus.28) 01/20/91";
static char rcsid[]="$Id$";
static int yylineno=0;
static const short short yylhs[]={ -1,
    0, 0, 4, 4, 6, 6, 6, 6, 7, 7,
    5, 5, 5, 5, 1, 3, 3, 3, 2,
};
static const short short yylen[]={ 2,
    3, 1, 0, 2, 3, 3, 1, 2, 0, 4,
    0, 7, 2, 3, 1, 1, 4, 6, 1,
};
static const short short yydefred[]={ 3,
    0, 0, 0, 9, 0, 11, 7, 4, 8, 0,
   15, 0, 0, 0, 5, 6, 0, 13, 0, 0,
   14, 0, 10, 0, 0, 0, 0, 0, 19, 0,
   17, 0, 12, 0, 18,
};
static const short short yydgoto[]={ 1,
   12, 30, 25, 2, 13, 8, 10,
};
static const short short yysindex[]={ 0,
    0, -4, -2, 0, -250, 0, 0, 0, 0, -9,
    0, 1, -10, -49, 0, 0, 3, 0, -44, -248,
    0, -244, 0, -22, -242, -244, -245, -37, 0, 10,
    0, -244, 0, -20, 0,
};
static const short short yyrindex[]={ 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
};
static const short short yygindex[]={ 0,
   11, 0, -23, 0, 0, 0, 0,
};
static const short short yytable[]={ 18,
   15, 16, 28, 31, 16, 7, 32, 9, 34, 11,
   16, 20, 21, 22, 23, 24, 29, 26, 27, 33,
   35, 2, 1, 19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 11,
   14, 3, 4, 5, 6,
};
static const short short yycheck[]={ 10,
   10, 41, 26, 41, 44, 10, 44, 10, 32, 260,
   10, 61, 10, 58, 263, 260, 262, 40, 261, 10,
   41, 0, 0, 13, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, 261, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   -1, -1, -1, -1, -1, 256, -1, -1, -1, 260,
  260, 256, 257, 258, 259,
};
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
union anonymous_typeZ5 yyval;
union anonymous_typeZ5 yylval;
static short short* yyss;
static union anonymous_typeZ5* yyvs;
static int yystacksize;
int errcnt=0;
struct _IO_FILE* infp=((void*)0);
struct _IO_FILE* outfp=((void*)0);
static char buf[1024];
static char* bp=buf;
static int ppercent=0;
static int code=0;

// inline function
static inline int __isspace(int _c){
    # 28 "/usr/include/ctype.h"
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void* yymalloc(unsigned int bytes){
void* ptr_0;
    # 210 "y.tab.c"
    ptr_0=(void*)malloc(bytes);
    # 212 "y.tab.c"
    # 211 "y.tab.c"
    if(ptr_0!=0) {
        # 211 "y.tab.c"
        return (ptr_0);
    }
    # 212 "y.tab.c"
    yyerror("yyparse: memory exhausted");
    # 213 "y.tab.c"
    return (0);
}

static void* yyrealloc(void* old, unsigned int bytes){
void* ptr_1;
    # 219 "y.tab.c"
    ptr_1=(void*)realloc(old,bytes);
    # 221 "y.tab.c"
    # 220 "y.tab.c"
    if(ptr_1!=0) {
        # 220 "y.tab.c"
        return (ptr_1);
    }
    # 221 "y.tab.c"
    yyerror("yyparse: memory exhausted");
    # 222 "y.tab.c"
    return (0);
}

static int yygrow(){
int old_stacksize_2;
short short* new_yyss_3;
union anonymous_typeZ5* new_yyvs_4;
new_yyss_3 = (void*)0;
new_yyvs_4 = (void*)0;
    # 231 "y.tab.c"
    old_stacksize_2=yystacksize;
    # 232 "y.tab.c"
    # 233 "y.tab.c"
    # 237 "y.tab.c"
    # 235 "y.tab.c"
    if(yystacksize==10000) {
        # 236 "y.tab.c"
        return (1);
    }
    # 237 "y.tab.c"
    yystacksize+=(yystacksize+1)/2;
    # 245 "y.tab.c"
    # 238 "y.tab.c"
    if(yystacksize>10000) {
        # 239 "y.tab.c"
        yystacksize=10000;
    }
    # 245 "y.tab.c"
    new_yyss_3=(short short*)yyrealloc((char*)yyss,yystacksize*sizeof(short short));
    # 248 "y.tab.c"
    # 246 "y.tab.c"
    if(new_yyss_3==0) {
        # 247 "y.tab.c"
        return (1);
    }
    # 248 "y.tab.c"
    new_yyvs_4=(union anonymous_typeZ5*)yyrealloc((char*)yyvs,yystacksize*sizeof(union anonymous_typeZ5));
    # 254 "y.tab.c"
    # 249 "y.tab.c"
    if(new_yyvs_4==0) {
        # 251 "y.tab.c"
        free(new_yyss_3);
        # 252 "y.tab.c"
        return (1);
    }
    # 254 "y.tab.c"
    yyss=new_yyss_3;
    # 255 "y.tab.c"
    yyvs=new_yyvs_4;
    # 256 "y.tab.c"
    return (0);
}


static int get(){
    # 96 "lburg/gram.y"
    # 74 "lburg/gram.y"
    if(*bp==0) {
        # 75 "lburg/gram.y"
        bp=buf;
        # 76 "lburg/gram.y"
        *bp=0;
        # 79 "lburg/gram.y"
        # 77 "lburg/gram.y"
        if(fgets(buf,sizeof(buf),infp)==((void*)0)) {
            # 78 "lburg/gram.y"
            return (-1);
        }
        # 79 "lburg/gram.y"
        yylineno++;
        # 95 "lburg/gram.y"
        while(buf[0]==37&&buf[1]==123&&buf[2]==10) {
            # 91 "lburg/gram.y"
            for(            ;            ;            ){
                # 86 "lburg/gram.y"
                # 82 "lburg/gram.y"
                if(fgets(buf,sizeof(buf),infp)==((void*)0)) {
                    # 83 "lburg/gram.y"
                    yywarn("unterminated %{...%}\n");
                    # 84 "lburg/gram.y"
                    return (-1);
                }
                # 86 "lburg/gram.y"
                yylineno++;
                # 89 "lburg/gram.y"
                # 87 "lburg/gram.y"
                if(strcmp(buf,"%}\n")==0) {
                    # 88 "lburg/gram.y"
                    break;
                }
                # 89 "lburg/gram.y"
                fputs(buf,outfp);
            }
            # 93 "lburg/gram.y"
            # 91 "lburg/gram.y"
            if(fgets(buf,sizeof(buf),infp)==((void*)0)) {
                # 92 "lburg/gram.y"
                return (-1);
            }
            # 93 "lburg/gram.y"
            yylineno++;
        }
    }
    # 96 "lburg/gram.y"
    return *bp++;
}

void yyerror(char* fmt, ...){
va_list ap_5;
memset(&ap_5, 0, sizeof(va_list));
    # 100 "lburg/gram.y"
    # 102 "lburg/gram.y"
    __builtin_va_start(ap_5,fmt);
    # 105 "lburg/gram.y"
    # 103 "lburg/gram.y"
    if(yylineno>0) {
        # 104 "lburg/gram.y"
        fprintf((stderr),"line %d: ",yylineno);
    }
    # 105 "lburg/gram.y"
    vfprintf((stderr),fmt,ap_5);
    # 108 "lburg/gram.y"
    # 106 "lburg/gram.y"
    if(fmt[strlen(fmt)-1]!=10) {
        # 107 "lburg/gram.y"
        fprintf((stderr),"\n");
    }
    # 108 "lburg/gram.y"
    errcnt++;
    # 109 "lburg/gram.y"
    __builtin_va_end(ap_5);
}

int yylex(){
int c_6;
char* p_7;
char* p_8;
int n_9;
int d_10;
char* p_11;
memset(&c_6, 0, sizeof(int));
p_7 = (void*)0;
    # 113 "lburg/gram.y"
    # 130 "lburg/gram.y"
    # 115 "lburg/gram.y"
    if(code) {
        # 116 "lburg/gram.y"
        # 117 "lburg/gram.y"
        bp+=strspn(bp," \t\f");
        # 118 "lburg/gram.y"
        p_7=strchr(bp,10);
        # 121 "lburg/gram.y"
        # 119 "lburg/gram.y"
        if(p_7==((void*)0)) {
            # 120 "lburg/gram.y"
            p_7=strchr(bp,10);
        }
        # 123 "lburg/gram.y"
        while(p_7>bp&&__isspace(p_7[-1])) {
            # 122 "lburg/gram.y"
            p_7--;
        }
        # 123 "lburg/gram.y"
        yylval.string=alloc(p_7-bp+1);
        # 124 "lburg/gram.y"
        strncpy(yylval.string,bp,p_7-bp);
        # 125 "lburg/gram.y"
        yylval.string[p_7-bp]=0;
        # 126 "lburg/gram.y"
        bp=p_7;
        # 127 "lburg/gram.y"
        code--;
        # 128 "lburg/gram.y"
        return 262;
    }
    # 191 "lburg/gram.y"
    while((c_6=get())!=(-1)) {
        # 139 "lburg/gram.y"
        switch (c_6) {
            # 132 "lburg/gram.y"
            case 32:
            # 132 "lburg/gram.y"
            case 12:
            # 133 "lburg/gram.y"
            case 9:
            # 133 "lburg/gram.y"
            continue;
            # 135 "lburg/gram.y"
            case 10:
            # 135 "lburg/gram.y"
            case 40:
            # 135 "lburg/gram.y"
            case 41:
            # 136 "lburg/gram.y"
            case 44:
            # 136 "lburg/gram.y"
            case 58:
            # 137 "lburg/gram.y"
            case 61:
            # 137 "lburg/gram.y"
            return c_6;
        }
        # 190 "lburg/gram.y"
        # 139 "lburg/gram.y"
        if(c_6==37&&*bp==37) {
            # 140 "lburg/gram.y"
            bp++;
            # 141 "lburg/gram.y"
            return ppercent++?0:259;
        }
        # 143 "lburg/gram.y"
        else if(c_6==37&&strncmp(bp,"term",4)==0&&__isspace(bp[4])) {
            # 144 "lburg/gram.y"
            bp+=4;
            # 145 "lburg/gram.y"
            return 257;
        }
        # 147 "lburg/gram.y"
        else if(c_6==37&&strncmp(bp,"start",5)==0&&__isspace(bp[5])) {
            # 148 "lburg/gram.y"
            bp+=5;
            # 149 "lburg/gram.y"
            return 258;
        }
        # 150 "lburg/gram.y"
        else if(c_6==34) {
            # 151 "lburg/gram.y"
            p_8=strchr(bp,34);
            # 158 "lburg/gram.y"
            # 152 "lburg/gram.y"
            if(p_8==((void*)0)) {
                # 153 "lburg/gram.y"
                yyerror("missing \" in assembler template\n");
                # 154 "lburg/gram.y"
                p_8=strchr(bp,10);
                # 157 "lburg/gram.y"
                # 155 "lburg/gram.y"
                if(p_8==((void*)0)) {
                    # 156 "lburg/gram.y"
                    p_8=strchr(bp,0);
                }
            }
            # 158 "lburg/gram.y"
            ((void)((p_8)||(__assert_fail("p","lburg/gram.y",158,"yylex"),0)));
            # 159 "lburg/gram.y"
            yylval.string=alloc(p_8-bp+1);
            # 160 "lburg/gram.y"
            strncpy(yylval.string,bp,p_8-bp);
            # 161 "lburg/gram.y"
            yylval.string[p_8-bp]=0;
            # 162 "lburg/gram.y"
            bp=*p_8==34?p_8+1:p_8;
            # 163 "lburg/gram.y"
            code++;
            # 164 "lburg/gram.y"
            return 261;
        }
        # 165 "lburg/gram.y"
        else if((0?isdigit(c_6):((unsigned int)(c_6)-48)<10)) {
            # 166 "lburg/gram.y"
            n_9=0;
            # 174 "lburg/gram.y"
            do {
                # 168 "lburg/gram.y"
                d_10=c_6-48;
                # 173 "lburg/gram.y"
                # 169 "lburg/gram.y"
                if(n_9>(2147483647-d_10)/10) {
                    # 170 "lburg/gram.y"
                    yyerror("integer greater than %d\n",2147483647);
                }
                else {
                    # 172 "lburg/gram.y"
                    n_9=10*n_9+d_10;
                }
                # 173 "lburg/gram.y"
                c_6=get();
            # 174 "lburg/gram.y"
            } while(c_6!=(-1)&&(0?isdigit(c_6):((unsigned int)(c_6)-48)<10));
            # 175 "lburg/gram.y"
            bp--;
            # 176 "lburg/gram.y"
            yylval.n=n_9;
            # 177 "lburg/gram.y"
            return 263;
        }
        # 178 "lburg/gram.y"
        else if((0?isalpha(c_6):(((unsigned int)(c_6)|32)-97)<26)) {
            # 179 "lburg/gram.y"
            p_11=bp-1;
            # 182 "lburg/gram.y"
            while((0?isalpha(*bp):(((unsigned int)(*bp)|32)-97)<26)||(0?isdigit(*bp):((unsigned int)(*bp)-48)<10)||*bp==95) {
                # 181 "lburg/gram.y"
                bp++;
            }
            # 182 "lburg/gram.y"
            yylval.string=alloc(bp-p_11+1);
            # 183 "lburg/gram.y"
            strncpy(yylval.string,p_11,bp-p_11);
            # 184 "lburg/gram.y"
            yylval.string[bp-p_11]=0;
            # 185 "lburg/gram.y"
            return 260;
        }
        # 186 "lburg/gram.y"
        else if((0?isprint(c_6):((unsigned int)(c_6)-32)<95)) {
            # 187 "lburg/gram.y"
            yyerror("invalid character `%c'\n",c_6);
        }
        else {
            # 189 "lburg/gram.y"
            yyerror("invalid character `\\%03o'\n",(unsigned char)c_6);
        }
    }
    # 191 "lburg/gram.y"
    return 0;
}

void yywarn(char* fmt, ...){
va_list ap_12;
memset(&ap_12, 0, sizeof(va_list));
    # 195 "lburg/gram.y"
    # 197 "lburg/gram.y"
    __builtin_va_start(ap_12,fmt);
    # 200 "lburg/gram.y"
    # 198 "lburg/gram.y"
    if(yylineno>0) {
        # 199 "lburg/gram.y"
        fprintf((stderr),"line %d: ",yylineno);
    }
    # 200 "lburg/gram.y"
    fprintf((stderr),"warning: ");
    # 201 "lburg/gram.y"
    vfprintf((stderr),fmt,ap_12);
}

int yyparse(){
int yym_13;
int yyn_14;
int yystate_15;
union anonymous_typeZ5* yyvsp_16;
short short* yyssp_17;
short short* yysse_18;
int depth_19;
memset(&yym_13, 0, sizeof(int));
memset(&yyn_14, 0, sizeof(int));
memset(&yystate_15, 0, sizeof(int));
yyvsp_16 = (void*)0;
yyssp_17 = (void*)0;
yysse_18 = (void*)0;
    # 419 "y.tab.c"
    # 420 "y.tab.c"
    # 421 "y.tab.c"
    # 422 "y.tab.c"
    # 433 "y.tab.c"
    yynerrs=0;
    # 434 "y.tab.c"
    yyerrflag=0;
    # 435 "y.tab.c"
    yychar=(-1);
    # 450 "y.tab.c"
    # 437 "y.tab.c"
    if(yyss==0) {
        # 439 "y.tab.c"
        yyss=(short short*)yymalloc(500*sizeof(short short));
        # 442 "y.tab.c"
        # 440 "y.tab.c"
        if(yyss==0) {
            # 441 "y.tab.c"
            goto yyabort;
        }
        # 442 "y.tab.c"
        yyvs=(union anonymous_typeZ5*)yymalloc(500*sizeof(union anonymous_typeZ5));
        # 448 "y.tab.c"
        # 443 "y.tab.c"
        if(yyvs==0) {
            # 445 "y.tab.c"
            free(yyss);
            # 446 "y.tab.c"
            goto yyabort;
        }
        # 448 "y.tab.c"
        yystacksize=500;
    }
    # 450 "y.tab.c"
    yysse_18=yyss+yystacksize-1;
    # 451 "y.tab.c"
    yyssp_17=yyss;
    # 452 "y.tab.c"
    yyvsp_16=yyvs;
    # 453 "y.tab.c"
    *yyssp_17=yystate_15=0;
    # 454 "y.tab.c"
    goto yyloop;
    # 457 "y.tab.c"
    yyoverflow:
    # 457 "y.tab.c"
    yyval=yylval;
    # 458 "y.tab.c"
    yystate_15=yytable[yyn_14];
    # 460 "y.tab.c"
    yygrow:
    # 469 "y.tab.c"
    # 460 "y.tab.c"
    if(yyssp_17>=yysse_18) {
        # 462 "y.tab.c"
        depth_19=yyssp_17-yyss;
        # 465 "y.tab.c"
        # 463 "y.tab.c"
        if(yygrow()!=0) {
            # 464 "y.tab.c"
            goto yyoverflow;
        }
        # 465 "y.tab.c"
        yysse_18=yyss+yystacksize-1;
        # 466 "y.tab.c"
        yyssp_17=depth_19+yyss;
        # 467 "y.tab.c"
        yyvsp_16=depth_19+yyvs;
    }
    # 469 "y.tab.c"
    *++yyssp_17=yystate_15;
    # 470 "y.tab.c"
    *++yyvsp_16=yyval;
    # 473 "y.tab.c"
    yychar:
    # 474 "y.tab.c"
    # 473 "y.tab.c"
    if(yyn_14=yydefred[yystate_15]) {
        # 473 "y.tab.c"
        goto yyreduce;
    }
    # 474 "y.tab.c"
    yyn_14=yysindex[yystate_15];
    # 489 "y.tab.c"
    # 475 "y.tab.c"
    if(yychar<0) {
        # 488 "y.tab.c"
        # 477 "y.tab.c"
        if((yychar=yylex())<0) {
            # 477 "y.tab.c"
            yychar=0;
        }
    }
    # 502 "y.tab.c"
    # 491 "y.tab.c"
    if(yyn_14!=0&&((yyn_14+=yychar),((unsigned int)yyn_14<=(unsigned int)255))&&yycheck[yyn_14]==yychar) {
        # 499 "y.tab.c"
        # 498 "y.tab.c"
        if(yyerrflag>0) {
            # 498 "y.tab.c"
            --yyerrflag;
        }
        # 499 "y.tab.c"
        yychar=(-1);
        # 500 "y.tab.c"
        goto yypush_lex;
    }
    # 502 "y.tab.c"
    yyn_14=yyrindex[yystate_15];
    # 510 "y.tab.c"
    # 505 "y.tab.c"
    if(yyn_14!=0&&((yyn_14+=yychar),((unsigned int)yyn_14<=(unsigned int)255))&&yycheck[yyn_14]==yychar) {
        # 507 "y.tab.c"
        yyn_14=yytable[yyn_14];
        # 508 "y.tab.c"
        goto yyreduce;
    }
    # 514 "y.tab.c"
    # 510 "y.tab.c"
    if(yyerrflag) {
        # 510 "y.tab.c"
        goto yyinrecovery;
    }
    # 515 "y.tab.c"
    yyoverflow:
    # 515 "y.tab.c"
    yyerror("syntax error");
    # 520 "y.tab.c"
    register:
    # 520 "y.tab.c"
    ++yynerrs;
    # 522 "y.tab.c"
    yyinrecovery:
    # 558 "y.tab.c"
    # 522 "y.tab.c"
    if(yyerrflag<3) {
        # 524 "y.tab.c"
        yyerrflag=3;
        # 551 "y.tab.c"
        for(        ;        ;        ){
            # 527 "y.tab.c"
            yyn_14=yysindex[*yyssp_17];
            # 550 "y.tab.c"
            # 530 "y.tab.c"
            if(yyn_14!=0&&((yyn_14+=256),((unsigned int)yyn_14<=(unsigned int)255))&&yycheck[yyn_14]==256) {
                # 537 "y.tab.c"
                goto yypush_lex;
            }
            else {
                # 547 "y.tab.c"
                # 546 "y.tab.c"
                if(yyssp_17<=yyss) {
                    # 546 "y.tab.c"
                    goto yyabort;
                }
                # 547 "y.tab.c"
                --yyssp_17;
                # 548 "y.tab.c"
                --yyvsp_16;
            }
        }
    }
    else {
        # 555 "y.tab.c"
        # 554 "y.tab.c"
        if(yychar==0) {
            # 554 "y.tab.c"
            goto yyabort;
        }
        # 555 "y.tab.c"
        yychar=(-1);
        # 556 "y.tab.c"
        goto yyloop;
    }
    # 564 "y.tab.c"
    register:
    # 564 "y.tab.c"
    yym_13=yylen[yyn_14];
    # 565 "y.tab.c"
    yyval=yyvsp_16[1-yym_13];
    # 631 "y.tab.c"
    switch (yyn_14) {
        # 569 "y.tab.c"
        case 1:
        # 570 "y.tab.c"
        {
            # 569 "y.tab.c"
            yylineno=0;
        }
        # 570 "y.tab.c"
        break;
        # 572 "y.tab.c"
        case 2:
        # 573 "y.tab.c"
        {
            # 572 "y.tab.c"
            yylineno=0;
        }
        # 573 "y.tab.c"
        break;
        # 575 "y.tab.c"
        case 6:
        # 579 "y.tab.c"
        {
            # 578 "y.tab.c"
            # 576 "y.tab.c"
            if(nonterm(yyvsp_16[-1].string)->number!=1) {
                # 577 "y.tab.c"
                yyerror("redeclaration of the start symbol\n");
            }
        }
        # 579 "y.tab.c"
        break;
        # 581 "y.tab.c"
        case 8:
        # 582 "y.tab.c"
        {
            # 581 "y.tab.c"
            (yyerrflag=0);
        }
        # 582 "y.tab.c"
        break;
        # 584 "y.tab.c"
        case 10:
        # 585 "y.tab.c"
        {
            # 584 "y.tab.c"
            term(yyvsp_16[-2].string,yyvsp_16[0].n);
        }
        # 585 "y.tab.c"
        break;
        # 587 "y.tab.c"
        case 12:
        # 588 "y.tab.c"
        {
            # 587 "y.tab.c"
            rule(yyvsp_16[-5].string,yyvsp_16[-3].tree,yyvsp_16[-2].string,yyvsp_16[-1].string);
        }
        # 588 "y.tab.c"
        break;
        # 590 "y.tab.c"
        case 14:
        # 591 "y.tab.c"
        {
            # 590 "y.tab.c"
            (yyerrflag=0);
        }
        # 591 "y.tab.c"
        break;
        # 593 "y.tab.c"
        case 15:
        # 594 "y.tab.c"
        {
            # 593 "y.tab.c"
            nonterm(yyval.string=yyvsp_16[0].string);
        }
        # 594 "y.tab.c"
        break;
        # 596 "y.tab.c"
        case 16:
        # 597 "y.tab.c"
        {
            # 596 "y.tab.c"
            yyval.tree=tree(yyvsp_16[0].string,/*b*/(void*)0,/*b*/(void*)0);
        }
        # 597 "y.tab.c"
        break;
        # 599 "y.tab.c"
        case 17:
        # 600 "y.tab.c"
        {
            # 599 "y.tab.c"
            yyval.tree=tree(yyvsp_16[-3].string,yyvsp_16[-1].tree,/*b*/(void*)0);
        }
        # 600 "y.tab.c"
        break;
        # 602 "y.tab.c"
        case 18:
        # 603 "y.tab.c"
        {
            # 602 "y.tab.c"
            yyval.tree=tree(yyvsp_16[-5].string,yyvsp_16[-3].tree,yyvsp_16[-1].tree);
        }
        # 603 "y.tab.c"
        break;
        # 605 "y.tab.c"
        case 19:
        # 606 "y.tab.c"
        {
            # 605 "y.tab.c"
            # 605 "y.tab.c"
            if(*yyvsp_16[0].string==0) {
                # 605 "y.tab.c"
                yyval.string="0";
            }
        }
        # 606 "y.tab.c"
        break;
    }
    # 631 "y.tab.c"
    yyssp_17-=yym_13;
    # 632 "y.tab.c"
    yyvsp_16-=yym_13;
    # 633 "y.tab.c"
    yym_13=yylhs[yyn_14];
    # 634 "y.tab.c"
    yystate_15=*yyssp_17;
    # 662 "y.tab.c"
    # 635 "y.tab.c"
    if(yystate_15==0&&yym_13==0) {
        # 642 "y.tab.c"
        yystate_15=1;
        # 643 "y.tab.c"
        *++yyssp_17=1;
        # 644 "y.tab.c"
        *++yyvsp_16=yyval;
        # 659 "y.tab.c"
        # 645 "y.tab.c"
        if(yychar<0) {
            # 658 "y.tab.c"
            # 647 "y.tab.c"
            if((yychar=yylex())<0) {
                # 647 "y.tab.c"
                yychar=0;
            }
        }
        # 660 "y.tab.c"
        # 659 "y.tab.c"
        if(yychar==0) {
            # 659 "y.tab.c"
            goto yyaccept;
        }
        # 660 "y.tab.c"
        goto yyloop;
    }
    # 662 "y.tab.c"
    yyn_14=yygindex[yym_13];
    # 674 "y.tab.c"
    # 665 "y.tab.c"
    if(yyn_14!=0&&((yyn_14+=yystate_15),((unsigned int)yyn_14<=(unsigned int)255))&&yycheck[yyn_14]==yystate_15) {
        # 666 "y.tab.c"
        yystate_15=yytable[yyn_14];
    }
    else {
        # 668 "y.tab.c"
        yystate_15=yydgoto[yym_13];
    }
    # 674 "y.tab.c"
    goto yypush;
    # 676 "y.tab.c"
    yyoverflow:
    # 676 "y.tab.c"
    yyerror("yacc stack overflow");
    # 678 "y.tab.c"
    y.tab.c:
    # 678 "y.tab.c"
    return (1);
    # 680 "y.tab.c"
    register:
    # 680 "y.tab.c"
    return (0);
}

