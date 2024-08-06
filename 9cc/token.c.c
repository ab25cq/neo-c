// source head
typedef struct __locale_struct* locale_t;
typedef __builtin_va_list va_list;
typedef unsigned long int uintptr_t;
typedef long intptr_t;
typedef char int8_t;
typedef short short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef long intmax_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;
typedef unsigned long int uintmax_t;
typedef char int_fast8_t;
typedef long int_fast64_t;
typedef char int_least8_t;
typedef short short int_least16_t;
typedef int int_least32_t;
typedef long int_least64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long int uint_least64_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long int size_t;
typedef long ssize_t;
typedef long off_t;
typedef struct _IO_FILE FILE;
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
struct anonymous_typeX4
{
    void** data;
    int capacity;
    int len;
};
typedef struct anonymous_typeX4 Vector;
struct anonymous_typeX5
{
    struct anonymous_typeX4* keys;
    struct anonymous_typeX4* vals;
};
typedef struct anonymous_typeX5 Map;
struct anonymous_typeX6
{
    char* data;
    int capacity;
    int len;
};
typedef struct anonymous_typeX6 StringBuilder;
typedef struct Type Type;
struct Type
{
    int ty;
    int size;
    int align;
    struct Type* ptr_to;
    struct Type* ary_of;
    int len;
    struct anonymous_typeX5* members;
    int offset;
    struct Type* returning;
};
typedef struct Type Type;
enum { TK_NUM=(256),
TK_STR
,TK_IDENT
,TK_ARROW
,TK_EXTERN
,TK_TYPEDEF
,TK_INT
,TK_CHAR
,TK_VOID
,TK_STRUCT
,TK_BOOL
,TK_IF
,TK_ELSE
,TK_FOR
,TK_DO
,TK_WHILE
,TK_SWITCH
,TK_CASE
,TK_BREAK
,TK_CONTINUE
,TK_EQ
,TK_NE
,TK_LE
,TK_GE
,TK_LOGOR
,TK_LOGAND
,TK_SHL
,TK_SHR
,TK_INC
,TK_DEC
,TK_MUL_EQ
,TK_DIV_EQ
,TK_MOD_EQ
,TK_ADD_EQ
,TK_SUB_EQ
,TK_SHL_EQ
,TK_SHR_EQ
,TK_AND_EQ
,TK_XOR_EQ
,TK_OR_EQ
,TK_RETURN
,TK_SIZEOF
,TK_ALIGNOF
,TK_TYPEOF
,TK_PARAM
,TK_EOF
};
struct anonymous_typeX7
{
    int ty;
    int val;
    char* name;
    char* str;
    char len;
    _Bool stringize;
    char* buf;
    char* path;
    char* start;
    char* end;
};
typedef struct anonymous_typeX7 Token;
extern int nlabel;
enum { ND_NUM=(256),
ND_STRUCT
,ND_DECL
,ND_VARDEF
,ND_VARREF
,ND_CAST
,ND_IF
,ND_FOR
,ND_DO_WHILE
,ND_SWITCH
,ND_CASE
,ND_BREAK
,ND_CONTINUE
,ND_ADDR
,ND_DEREF
,ND_DOT
,ND_EQ
,ND_NE
,ND_LE
,ND_LOGAND
,ND_LOGOR
,ND_SHL
,ND_SHR
,ND_MOD
,ND_RETURN
,ND_CALL
,ND_FUNC
,ND_COMP_STMT
,ND_EXPR_STMT
,ND_STMT_EXPR
,ND_NULL
};
enum { VOID=(1),
BOOL
,CHAR
,INT
,PTR
,ARY
,STRUCT
,FUNC
};
typedef struct Reg Reg;
struct anonymous_typeX8
{
    struct Type* ty;
    char* name;
    _Bool is_local;
    int offset;
    char* data;
    _Bool address_taken;
    struct Reg* promoted;
};
typedef struct anonymous_typeX8 Var;
typedef struct Node Node;
typedef struct BB BB;
struct Node
{
    int op;
    struct Type* ty;
    struct Node* lhs;
    struct Node* rhs;
    int val;
    struct Node* expr;
    struct anonymous_typeX4* stmts;
    char* name;
    struct anonymous_typeX8* var;
    struct Node* cond;
    struct Node* then;
    struct Node* els;
    struct Node* init;
    struct Node* inc;
    struct Node* body;
    struct anonymous_typeX4* cases;
    struct BB* bb;
    struct Node* target;
    struct BB* break_;
    struct BB* continue_;
    struct anonymous_typeX4* params;
    struct anonymous_typeX4* args;
    struct anonymous_typeX7* token;
};
typedef struct Node Node;
struct anonymous_typeX9
{
    char* name;
    struct Node* node;
    struct anonymous_typeX4* lvars;
    struct anonymous_typeX4* bbs;
};
typedef struct anonymous_typeX9 Function;
struct anonymous_typeX10
{
    struct anonymous_typeX4* gvars;
    struct anonymous_typeX4* funcs;
};
typedef struct anonymous_typeX10 Program;
enum { IR_ADD=(1),
IR_SUB
,IR_MUL
,IR_DIV
,IR_IMM
,IR_BPREL
,IR_MOV
,IR_RETURN
,IR_CALL
,IR_LABEL_ADDR
,IR_EQ
,IR_NE
,IR_LE
,IR_LT
,IR_AND
,IR_OR
,IR_XOR
,IR_SHL
,IR_SHR
,IR_MOD
,IR_JMP
,IR_BR
,IR_LOAD
,IR_LOAD_SPILL
,IR_STORE
,IR_STORE_ARG
,IR_STORE_SPILL
,IR_NOP
};
struct Reg
{
    int vn;
    int rn;
    struct Reg* promoted;
    int def;
    int last_use;
    _Bool spill;
    struct anonymous_typeX8* var;
};
typedef struct Reg Reg;
struct BB
{
    int label;
    struct anonymous_typeX4* ir;
    struct Reg* param;
    struct anonymous_typeX4* succ;
    struct anonymous_typeX4* pred;
    struct anonymous_typeX4* def_regs;
    struct anonymous_typeX4* in_regs;
    struct anonymous_typeX4* out_regs;
};
typedef struct BB BB;
struct anonymous_typeX11
{
    int op;
    struct Reg* r0;
    struct Reg* r1;
    struct Reg* r2;
    int imm;
    int label;
    struct anonymous_typeX8* var;
    struct BB* bb1;
    struct BB* bb2;
    int size;
    char* name;
    int nargs;
    struct Reg* args[6];
    struct anonymous_typeX4* kill;
    struct Reg* bbarg;
};
typedef struct anonymous_typeX11 IR;
extern char* regs[];
extern char* regs8[];
extern char* regs32[];
extern int num_regs;
struct Env
{
    char* path;
    char* buf;
    struct anonymous_typeX4* tokens;
    struct Env* prev;
};
typedef struct Env Env;
struct anonymous_typeX12
{
    char* name;
    int ty;
};
struct anonymous_typeX13
{
    char* name;
    int ty;
};
struct anonymous_typeX14
{
    char* name;
    int ty;
};
struct anonymous_typeX15
{
    char* name;
    int ty;
};
struct anonymous_typeX16
{
    char* name;
    int ty;
};

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
void __assert_fail(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2, int anonymous_var_nameX3, const char* anonymous_var_nameX4);
int isalnum(int anonymous_var_nameX5);
int isalpha(int anonymous_var_nameX6);
int isblank(int anonymous_var_nameX7);
int iscntrl(int anonymous_var_nameX8);
int isdigit(int anonymous_var_nameX9);
int isgraph(int anonymous_var_nameX10);
int islower(int anonymous_var_nameX11);
int isprint(int anonymous_var_nameX12);
int ispunct(int anonymous_var_nameX13);
int isspace(int anonymous_var_nameX14);
int isupper(int anonymous_var_nameX15);
int isxdigit(int anonymous_var_nameX16);
int tolower(int anonymous_var_nameX17);
int toupper(int anonymous_var_nameX18);
int isalnum_l(int anonymous_var_nameX19, struct __locale_struct* anonymous_var_nameX20);
int isalpha_l(int anonymous_var_nameX21, struct __locale_struct* anonymous_var_nameX22);
int isblank_l(int anonymous_var_nameX23, struct __locale_struct* anonymous_var_nameX24);
int iscntrl_l(int anonymous_var_nameX25, struct __locale_struct* anonymous_var_nameX26);
int isdigit_l(int anonymous_var_nameX27, struct __locale_struct* anonymous_var_nameX28);
int isgraph_l(int anonymous_var_nameX29, struct __locale_struct* anonymous_var_nameX30);
int islower_l(int anonymous_var_nameX31, struct __locale_struct* anonymous_var_nameX32);
int isprint_l(int anonymous_var_nameX33, struct __locale_struct* anonymous_var_nameX34);
int ispunct_l(int anonymous_var_nameX35, struct __locale_struct* anonymous_var_nameX36);
int isspace_l(int anonymous_var_nameX37, struct __locale_struct* anonymous_var_nameX38);
int isupper_l(int anonymous_var_nameX39, struct __locale_struct* anonymous_var_nameX40);
int isxdigit_l(int anonymous_var_nameX41, struct __locale_struct* anonymous_var_nameX42);
int tolower_l(int anonymous_var_nameX43, struct __locale_struct* anonymous_var_nameX44);
int toupper_l(int anonymous_var_nameX45, struct __locale_struct* anonymous_var_nameX46);
int isascii(int anonymous_var_nameX47);
int toascii(int anonymous_var_nameX48);
struct _IO_FILE* fopen(const char* anonymous_var_nameX49, const char* anonymous_var_nameX50);
struct _IO_FILE* freopen(const char* anonymous_var_nameX51, const char* anonymous_var_nameX52, struct _IO_FILE* anonymous_var_nameX53);
int fclose(struct _IO_FILE* anonymous_var_nameX54);
int remove(const char* anonymous_var_nameX55);
int rename(const char* anonymous_var_nameX56, const char* anonymous_var_nameX57);
int feof(struct _IO_FILE* anonymous_var_nameX58);
int ferror(struct _IO_FILE* anonymous_var_nameX59);
int fflush(struct _IO_FILE* anonymous_var_nameX60);
void clearerr(struct _IO_FILE* anonymous_var_nameX61);
int fseek(struct _IO_FILE* anonymous_var_nameX62, long anonymous_var_nameX63, int anonymous_var_nameX64);
long ftell(struct _IO_FILE* anonymous_var_nameX65);
void rewind(struct _IO_FILE* anonymous_var_nameX66);
int fgetpos(struct _IO_FILE* anonymous_var_nameX67, union _G_fpos64_t* anonymous_var_nameX68);
int fsetpos(struct _IO_FILE* anonymous_var_nameX69, const union _G_fpos64_t* anonymous_var_nameX70);
unsigned long int fread(void* anonymous_var_nameX71, unsigned long int anonymous_var_nameX72, unsigned long int anonymous_var_nameX73, struct _IO_FILE* anonymous_var_nameX74);
unsigned long int fwrite(const void* anonymous_var_nameX75, unsigned long int anonymous_var_nameX76, unsigned long int anonymous_var_nameX77, struct _IO_FILE* anonymous_var_nameX78);
int fgetc(struct _IO_FILE* anonymous_var_nameX79);
int getc(struct _IO_FILE* anonymous_var_nameX80);
int getchar();
int ungetc(int anonymous_var_nameX81, struct _IO_FILE* anonymous_var_nameX82);
int fputc(int anonymous_var_nameX83, struct _IO_FILE* anonymous_var_nameX84);
int putc(int anonymous_var_nameX85, struct _IO_FILE* anonymous_var_nameX86);
int putchar(int anonymous_var_nameX87);
char* fgets(char* anonymous_var_nameX88, int anonymous_var_nameX89, struct _IO_FILE* anonymous_var_nameX90);
int fputs(const char* anonymous_var_nameX91, struct _IO_FILE* anonymous_var_nameX92);
int puts(const char* anonymous_var_nameX93);
int printf(const char* anonymous_var_nameX94, ...);
int fprintf(struct _IO_FILE* anonymous_var_nameX95, const char* anonymous_var_nameX96, ...);
int sprintf(char* anonymous_var_nameX97, const char* anonymous_var_nameX98, ...);
int snprintf(char* anonymous_var_nameX99, unsigned long int anonymous_var_nameX100, const char* anonymous_var_nameX101, ...);
int vprintf(const char* anonymous_var_nameX102, va_list anonymous_var_nameX103);
int vfprintf(struct _IO_FILE* anonymous_var_nameX104, const char* anonymous_var_nameX105, va_list anonymous_var_nameX106);
int vsprintf(char* anonymous_var_nameX107, const char* anonymous_var_nameX108, va_list anonymous_var_nameX109);
int vsnprintf(char* anonymous_var_nameX110, unsigned long int anonymous_var_nameX111, const char* anonymous_var_nameX112, va_list anonymous_var_nameX113);
int scanf(const char* anonymous_var_nameX114, ...);
int fscanf(struct _IO_FILE* anonymous_var_nameX115, const char* anonymous_var_nameX116, ...);
int sscanf(const char* anonymous_var_nameX117, const char* anonymous_var_nameX118, ...);
int vscanf(const char* anonymous_var_nameX119, va_list anonymous_var_nameX120);
int vfscanf(struct _IO_FILE* anonymous_var_nameX121, const char* anonymous_var_nameX122, va_list anonymous_var_nameX123);
int vsscanf(const char* anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126);
void perror(const char* anonymous_var_nameX127);
int setvbuf(struct _IO_FILE* anonymous_var_nameX128, char* anonymous_var_nameX129, int anonymous_var_nameX130, unsigned long int anonymous_var_nameX131);
void setbuf(struct _IO_FILE* anonymous_var_nameX132, char* anonymous_var_nameX133);
char* tmpnam(char* anonymous_var_nameX134);
struct _IO_FILE* tmpfile();
struct _IO_FILE* fmemopen(void* anonymous_var_nameX135, unsigned long int anonymous_var_nameX136, const char* anonymous_var_nameX137);
struct _IO_FILE* open_memstream(char** anonymous_var_nameX138, unsigned long int* anonymous_var_nameX139);
struct _IO_FILE* fdopen(int anonymous_var_nameX140, const char* anonymous_var_nameX141);
struct _IO_FILE* popen(const char* anonymous_var_nameX142, const char* anonymous_var_nameX143);
int pclose(struct _IO_FILE* anonymous_var_nameX144);
int fileno(struct _IO_FILE* anonymous_var_nameX145);
int fseeko(struct _IO_FILE* anonymous_var_nameX146, long anonymous_var_nameX147, int anonymous_var_nameX148);
long ftello(struct _IO_FILE* anonymous_var_nameX149);
int dprintf(int anonymous_var_nameX150, const char* anonymous_var_nameX151, ...);
int vdprintf(int anonymous_var_nameX152, const char* anonymous_var_nameX153, va_list anonymous_var_nameX154);
void flockfile(struct _IO_FILE* anonymous_var_nameX155);
int ftrylockfile(struct _IO_FILE* anonymous_var_nameX156);
void funlockfile(struct _IO_FILE* anonymous_var_nameX157);
int getc_unlocked(struct _IO_FILE* anonymous_var_nameX158);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX159, struct _IO_FILE* anonymous_var_nameX160);
int putchar_unlocked(int anonymous_var_nameX161);
long getdelim(char** anonymous_var_nameX162, unsigned long int* anonymous_var_nameX163, int anonymous_var_nameX164, struct _IO_FILE* anonymous_var_nameX165);
long getline(char** anonymous_var_nameX166, unsigned long int* anonymous_var_nameX167, struct _IO_FILE* anonymous_var_nameX168);
int renameat(int anonymous_var_nameX169, const char* anonymous_var_nameX170, int anonymous_var_nameX171, const char* anonymous_var_nameX172);
char* ctermid(char* anonymous_var_nameX173);
char* tempnam(const char* anonymous_var_nameX174, const char* anonymous_var_nameX175);
char* cuserid(char* anonymous_var_nameX176);
void setlinebuf(struct _IO_FILE* anonymous_var_nameX177);
void setbuffer(struct _IO_FILE* anonymous_var_nameX178, char* anonymous_var_nameX179, unsigned long int anonymous_var_nameX180);
int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX181);
int fputc_unlocked(int anonymous_var_nameX182, struct _IO_FILE* anonymous_var_nameX183);
int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX184);
unsigned long int fread_unlocked(void* anonymous_var_nameX185, unsigned long int anonymous_var_nameX186, unsigned long int anonymous_var_nameX187, struct _IO_FILE* anonymous_var_nameX188);
unsigned long int fwrite_unlocked(const void* anonymous_var_nameX189, unsigned long int anonymous_var_nameX190, unsigned long int anonymous_var_nameX191, struct _IO_FILE* anonymous_var_nameX192);
void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX193);
int feof_unlocked(struct _IO_FILE* anonymous_var_nameX194);
int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX195);
int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX196);
int getw(struct _IO_FILE* anonymous_var_nameX197);
int putw(int anonymous_var_nameX198, struct _IO_FILE* anonymous_var_nameX199);
char* fgetln(struct _IO_FILE* anonymous_var_nameX200, unsigned long int* anonymous_var_nameX201);
int asprintf(char** anonymous_var_nameX202, const char* anonymous_var_nameX203, ...);
int vasprintf(char** anonymous_var_nameX204, const char* anonymous_var_nameX205, va_list anonymous_var_nameX206);
char* fgets_unlocked(char* anonymous_var_nameX207, int anonymous_var_nameX208, struct _IO_FILE* anonymous_var_nameX209);
int fputs_unlocked(const char* anonymous_var_nameX210, struct _IO_FILE* anonymous_var_nameX211);
struct _IO_FILE* fopencookie(void* anonymous_var_nameX222, const char* anonymous_var_nameX223, struct _IO_cookie_io_functions_t anonymous_var_nameX224);
int atoi(const char* anonymous_var_nameX225);
long atol(const char* anonymous_var_nameX226);
long long atoll(const char* anonymous_var_nameX227);
double atof(const char* anonymous_var_nameX228);
float strtof(const char* anonymous_var_nameX229, char** anonymous_var_nameX230);
double strtod(const char* anonymous_var_nameX231, char** anonymous_var_nameX232);
long double strtold(const char* anonymous_var_nameX233, char** anonymous_var_nameX234);
long strtol(const char* anonymous_var_nameX235, char** anonymous_var_nameX236, int anonymous_var_nameX237);
unsigned long int strtoul(const char* anonymous_var_nameX238, char** anonymous_var_nameX239, int anonymous_var_nameX240);
long long strtoll(const char* anonymous_var_nameX241, char** anonymous_var_nameX242, int anonymous_var_nameX243);
unsigned long long strtoull(const char* anonymous_var_nameX244, char** anonymous_var_nameX245, int anonymous_var_nameX246);
int rand();
void srand(unsigned int anonymous_var_nameX247);
void* malloc(unsigned long int anonymous_var_nameX248);
void* calloc(unsigned long int anonymous_var_nameX249, unsigned long int anonymous_var_nameX250);
void* realloc(void* anonymous_var_nameX251, unsigned long int anonymous_var_nameX252);
void free(void* anonymous_var_nameX253);
void* aligned_alloc(unsigned long int anonymous_var_nameX254, unsigned long int anonymous_var_nameX255);
void abort();
int atexit(void (*anonymous_lambda_var_nameZ1)());
void exit(int anonymous_var_nameX256);
void _Exit(int anonymous_var_nameX257);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX258);
char* getenv(const char* anonymous_var_nameX259);
int system(const char* anonymous_var_nameX260);
void* bsearch(const void* anonymous_var_nameX261, const void* anonymous_var_nameX262, unsigned long int anonymous_var_nameX263, unsigned long int anonymous_var_nameX264, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));
void qsort(void* anonymous_var_nameX267, unsigned long int anonymous_var_nameX268, unsigned long int anonymous_var_nameX269, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));
int abs(int anonymous_var_nameX272);
long labs(long anonymous_var_nameX273);
long long llabs(long long anonymous_var_nameX274);
struct anonymous_typeX1 div(int anonymous_var_nameX275, int anonymous_var_nameX276);
struct anonymous_typeX2 ldiv(long anonymous_var_nameX277, long anonymous_var_nameX278);
struct anonymous_typeX3 lldiv(long long anonymous_var_nameX279, long long anonymous_var_nameX280);
int mblen(const char* anonymous_var_nameX281, unsigned long int anonymous_var_nameX282);
int mbtowc(unsigned int* anonymous_var_nameX283, const char* anonymous_var_nameX284, unsigned long int anonymous_var_nameX285);
int wctomb(char* anonymous_var_nameX286, unsigned int anonymous_var_nameX287);
unsigned long int mbstowcs(unsigned int* anonymous_var_nameX288, const char* anonymous_var_nameX289, unsigned long int anonymous_var_nameX290);
unsigned long int wcstombs(char* anonymous_var_nameX291, const unsigned int* anonymous_var_nameX292, unsigned long int anonymous_var_nameX293);
unsigned long int __ctype_get_mb_cur_max();
int posix_memalign(void** anonymous_var_nameX294, unsigned long int anonymous_var_nameX295, unsigned long int anonymous_var_nameX296);
int setenv(const char* anonymous_var_nameX297, const char* anonymous_var_nameX298, int anonymous_var_nameX299);
int unsetenv(const char* anonymous_var_nameX300);
int mkstemp(char* anonymous_var_nameX301);
int mkostemp(char* anonymous_var_nameX302, int anonymous_var_nameX303);
char* mkdtemp(char* anonymous_var_nameX304);
int getsubopt(char** anonymous_var_nameX305, char** anonymous_var_nameX306, char** anonymous_var_nameX307);
int rand_r(unsigned int* anonymous_var_nameX308);
char* realpath(const char* anonymous_var_nameX309, char* anonymous_var_nameX310);
long int random();
void srandom(unsigned int anonymous_var_nameX311);
char* initstate(unsigned int anonymous_var_nameX312, char* anonymous_var_nameX313, unsigned long int anonymous_var_nameX314);
char* setstate(char* anonymous_var_nameX315);
int putenv(char* anonymous_var_nameX316);
int posix_openpt(int anonymous_var_nameX317);
int grantpt(int anonymous_var_nameX318);
int unlockpt(int anonymous_var_nameX319);
char* ptsname(int anonymous_var_nameX320);
char* l64a(long anonymous_var_nameX321);
long a64l(const char* anonymous_var_nameX322);
void setkey(const char* anonymous_var_nameX323);
double drand48();
double erand48(unsigned short int anonymous_var_nameX324[3]);
long int lrand48();
long int nrand48(unsigned short int anonymous_var_nameX325[3]);
long mrand48();
long jrand48(unsigned short int anonymous_var_nameX326[3]);
void srand48(long anonymous_var_nameX327);
unsigned short int* seed48(unsigned short int anonymous_var_nameX328[3]);
void lcong48(unsigned short int anonymous_var_nameX329[7]);
void* alloca(unsigned long int anonymous_var_nameX330);
char* mktemp(char* anonymous_var_nameX331);
int mkstemps(char* anonymous_var_nameX332, int anonymous_var_nameX333);
int mkostemps(char* anonymous_var_nameX334, int anonymous_var_nameX335, int anonymous_var_nameX336);
void* valloc(unsigned long int anonymous_var_nameX337);
void* memalign(unsigned long int anonymous_var_nameX338, unsigned long int anonymous_var_nameX339);
int getloadavg(double* anonymous_var_nameX340, int anonymous_var_nameX341);
int clearenv();
void* reallocarray(void* anonymous_var_nameX342, unsigned long int anonymous_var_nameX343, unsigned long int anonymous_var_nameX344);
void qsort_r(void* anonymous_var_nameX345, unsigned long int anonymous_var_nameX346, unsigned long int anonymous_var_nameX347, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX351);
int ptsname_r(int anonymous_var_nameX352, char* anonymous_var_nameX353, unsigned long int anonymous_var_nameX354);
char* ecvt(double anonymous_var_nameX355, int anonymous_var_nameX356, int* anonymous_var_nameX357, int* anonymous_var_nameX358);
char* fcvt(double anonymous_var_nameX359, int anonymous_var_nameX360, int* anonymous_var_nameX361, int* anonymous_var_nameX362);
char* gcvt(double anonymous_var_nameX363, int anonymous_var_nameX364, char* anonymous_var_nameX365);
char* secure_getenv(const char* anonymous_var_nameX366);
float strtof_l(const char* anonymous_var_nameX367, char** anonymous_var_nameX368, struct __locale_struct* anonymous_var_nameX369);
double strtod_l(const char* anonymous_var_nameX370, char** anonymous_var_nameX371, struct __locale_struct* anonymous_var_nameX372);
long double strtold_l(const char* anonymous_var_nameX373, char** anonymous_var_nameX374, struct __locale_struct* anonymous_var_nameX375);
void* memcpy(void* anonymous_var_nameX376, const void* anonymous_var_nameX377, unsigned long int anonymous_var_nameX378);
void* memmove(void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long int anonymous_var_nameX381);
void* memset(void* anonymous_var_nameX382, int anonymous_var_nameX383, unsigned long int anonymous_var_nameX384);
int memcmp(const void* anonymous_var_nameX385, const void* anonymous_var_nameX386, unsigned long int anonymous_var_nameX387);
void* memchr(const void* anonymous_var_nameX388, int anonymous_var_nameX389, unsigned long int anonymous_var_nameX390);
char* strcpy(char* anonymous_var_nameX391, const char* anonymous_var_nameX392);
char* strncpy(char* anonymous_var_nameX393, const char* anonymous_var_nameX394, unsigned long int anonymous_var_nameX395);
char* strcat(char* anonymous_var_nameX396, const char* anonymous_var_nameX397);
char* strncat(char* anonymous_var_nameX398, const char* anonymous_var_nameX399, unsigned long int anonymous_var_nameX400);
int strcmp(const char* anonymous_var_nameX401, const char* anonymous_var_nameX402);
int strncmp(const char* anonymous_var_nameX403, const char* anonymous_var_nameX404, unsigned long int anonymous_var_nameX405);
int strcoll(const char* anonymous_var_nameX406, const char* anonymous_var_nameX407);
unsigned long int strxfrm(char* anonymous_var_nameX408, const char* anonymous_var_nameX409, unsigned long int anonymous_var_nameX410);
char* strchr(const char* anonymous_var_nameX411, int anonymous_var_nameX412);
char* strrchr(const char* anonymous_var_nameX413, int anonymous_var_nameX414);
unsigned long int strcspn(const char* anonymous_var_nameX415, const char* anonymous_var_nameX416);
unsigned long int strspn(const char* anonymous_var_nameX417, const char* anonymous_var_nameX418);
char* strpbrk(const char* anonymous_var_nameX419, const char* anonymous_var_nameX420);
char* strstr(const char* anonymous_var_nameX421, const char* anonymous_var_nameX422);
char* strtok(char* anonymous_var_nameX423, const char* anonymous_var_nameX424);
unsigned long int strlen(const char* anonymous_var_nameX425);
char* strerror(int anonymous_var_nameX426);
int bcmp(const void* anonymous_var_nameX427, const void* anonymous_var_nameX428, unsigned long int anonymous_var_nameX429);
void bcopy(const void* anonymous_var_nameX430, void* anonymous_var_nameX431, unsigned long int anonymous_var_nameX432);
void bzero(void* anonymous_var_nameX433, unsigned long int anonymous_var_nameX434);
char* index(const char* anonymous_var_nameX435, int anonymous_var_nameX436);
char* rindex(const char* anonymous_var_nameX437, int anonymous_var_nameX438);
int ffs(int anonymous_var_nameX439);
int ffsl(long anonymous_var_nameX440);
int ffsll(long long anonymous_var_nameX441);
int strcasecmp(const char* anonymous_var_nameX442, const char* anonymous_var_nameX443);
int strncasecmp(const char* anonymous_var_nameX444, const char* anonymous_var_nameX445, unsigned long int anonymous_var_nameX446);
int strcasecmp_l(const char* anonymous_var_nameX447, const char* anonymous_var_nameX448, struct __locale_struct* anonymous_var_nameX449);
int strncasecmp_l(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451, unsigned long int anonymous_var_nameX452, struct __locale_struct* anonymous_var_nameX453);
char* strtok_r(char* anonymous_var_nameX454, const char* anonymous_var_nameX455, char** anonymous_var_nameX456);
int strerror_r(int anonymous_var_nameX457, char* anonymous_var_nameX458, unsigned long int anonymous_var_nameX459);
char* stpcpy(char* anonymous_var_nameX460, const char* anonymous_var_nameX461);
char* stpncpy(char* anonymous_var_nameX462, const char* anonymous_var_nameX463, unsigned long int anonymous_var_nameX464);
unsigned long int strnlen(const char* anonymous_var_nameX465, unsigned long int anonymous_var_nameX466);
char* strdup(const char* anonymous_var_nameX467);
char* strndup(const char* anonymous_var_nameX468, unsigned long int anonymous_var_nameX469);
char* strsignal(int anonymous_var_nameX470);
char* strerror_l(int anonymous_var_nameX471, struct __locale_struct* anonymous_var_nameX472);
int strcoll_l(const char* anonymous_var_nameX473, const char* anonymous_var_nameX474, struct __locale_struct* anonymous_var_nameX475);
unsigned long int strxfrm_l(char* anonymous_var_nameX476, const char* anonymous_var_nameX477, unsigned long int anonymous_var_nameX478, struct __locale_struct* anonymous_var_nameX479);
void* memmem(const void* anonymous_var_nameX480, unsigned long int anonymous_var_nameX481, const void* anonymous_var_nameX482, unsigned long int anonymous_var_nameX483);
void* memccpy(void* anonymous_var_nameX484, const void* anonymous_var_nameX485, int anonymous_var_nameX486, unsigned long int anonymous_var_nameX487);
char* strsep(char** anonymous_var_nameX488, const char* anonymous_var_nameX489);
unsigned long int strlcat(char* anonymous_var_nameX490, const char* anonymous_var_nameX491, unsigned long int anonymous_var_nameX492);
unsigned long int strlcpy(char* anonymous_var_nameX493, const char* anonymous_var_nameX494, unsigned long int anonymous_var_nameX495);
void explicit_bzero(void* anonymous_var_nameX496, unsigned long int anonymous_var_nameX497);
int strverscmp(const char* anonymous_var_nameX498, const char* anonymous_var_nameX499);
char* strchrnul(const char* anonymous_var_nameX500, int anonymous_var_nameX501);
char* strcasestr(const char* anonymous_var_nameX502, const char* anonymous_var_nameX503);
void* memrchr(const void* anonymous_var_nameX504, int anonymous_var_nameX505, unsigned long int anonymous_var_nameX506);
void* mempcpy(void* anonymous_var_nameX507, const void* anonymous_var_nameX508, unsigned long int anonymous_var_nameX509);
char* basename();
void error(char* fmt, ...);
char* format(char* fmt, ...);
struct anonymous_typeX4* new_vec();
void vec_push(struct anonymous_typeX4* v, void* elem);
void vec_pushi(struct anonymous_typeX4* v, int val);
void* vec_pop(struct anonymous_typeX4* v);
void* vec_last(struct anonymous_typeX4* v);
_Bool vec_contains(struct anonymous_typeX4* v, void* elem);
_Bool vec_union1(struct anonymous_typeX4* v, void* elem);
struct anonymous_typeX5* new_map();
void map_put(struct anonymous_typeX5* map, char* key, void* val);
void map_puti(struct anonymous_typeX5* map, char* key, int val);
void* map_get(struct anonymous_typeX5* map, char* key);
int map_geti(struct anonymous_typeX5* map, char* key, int default_);
_Bool map_exists(struct anonymous_typeX5* map, char* key);
struct anonymous_typeX6* new_sb();
void sb_add(struct anonymous_typeX6* sb, char c);
void sb_append(struct anonymous_typeX6* sb, char* s);
void sb_append_n(struct anonymous_typeX6* sb, char* s, int len);
char* sb_get(struct anonymous_typeX6* sb);
struct Type* ptr_to(struct Type* base);
struct Type* ary_of(struct Type* base, int len);
struct Type* void_ty();
struct Type* bool_ty();
struct Type* char_ty();
struct Type* int_ty();
struct Type* func_ty(struct Type* returning);
_Bool same_type(struct Type* x, struct Type* y);
int roundup(int x, int align);
void util_test();
struct anonymous_typeX4* preprocess(struct anonymous_typeX4* tokens);
struct anonymous_typeX10* parse(struct anonymous_typeX4* tokens);
struct Node* new_int_node(int val, struct anonymous_typeX7* t);
struct Type* get_type(struct Node* node);
void sema(struct anonymous_typeX10* prog);
void dump_ir(struct anonymous_typeX4* irv);
void gen_ir(struct anonymous_typeX10* prog);
struct Reg* new_reg();
void optimize(struct anonymous_typeX10* prog);
void liveness(struct anonymous_typeX10* prog);
void alloc_regs(struct anonymous_typeX10* prog);
void gen_x86(struct anonymous_typeX10* prog);
static struct _IO_FILE* open_file(char* path);
static char* read_file(struct _IO_FILE* fp);
static struct Env* new_env(struct Env* prev, char* path, char* buf);
static _Bool startswith(char* s1, char* s2);
static void print_line(char* buf, char* path, char* pos);
void warn_token(struct anonymous_typeX7* t, char* msg);
void bad_token(struct anonymous_typeX7* t, char* msg);
static void bad_position(char* p, char* msg);
int get_line_number(struct anonymous_typeX7* t);
static _Bool need_space(struct anonymous_typeX7* t);
char* stringize(struct anonymous_typeX4* tokens);
static struct anonymous_typeX7* add(int ty, char* start);
static struct anonymous_typeX5* keyword_map();
static char* block_comment(char* pos);
static int isoctal(char c);
static int hex(char c);
static char* c_char(int* res, char* p);
static char* char_literal(char* p);
static char* string_literal(char* p);
static char* ident(char* p);
static char* hexadecimal(char* p);
static char* octal(char* p);
static char* decimal(char* p);
static char* number(char* p);
static void scan();
static void replace_crlf(char* p);
static void remove_backslash_newline(char* p);
static struct anonymous_typeX4* strip_newline_tokens(struct anonymous_typeX4* tokens);
static void append(struct anonymous_typeX7* x, struct anonymous_typeX7* y);
static struct anonymous_typeX4* join_string_literals(struct anonymous_typeX4* tokens);
struct anonymous_typeX4* tokenize(char* path, _Bool add_eof);
// uniq global variable
// source head3
static struct Env* env;
static struct anonymous_typeX5* keywords;
struct anonymous_typeX16 symbols[]={
    {"<<=", TK_SHL_EQ}, {">>=", TK_SHR_EQ}, {"!=", TK_NE},
    {"&&", TK_LOGAND}, {"++", TK_INC}, {"--", TK_DEC},
    {"->", TK_ARROW}, {"<<", TK_SHL}, {"<=", TK_LE},
    {"==", TK_EQ}, {">=", TK_GE}, {">>", TK_SHR},
    {"||", TK_LOGOR}, {"*=", TK_MUL_EQ}, {"/=", TK_DIV_EQ},
    {"%=", TK_MOD_EQ}, {"+=", TK_ADD_EQ}, {"-=", TK_SUB_EQ},
    {"&=", TK_AND_EQ}, {"^=", TK_XOR_EQ}, {"|=", TK_OR_EQ},
    {
# 170 "token.c" 3 4
    ((void*)0)
# 170 "token.c"
        , 0},
};

// inline function
static inline int __isspace(int _c){
    # 28 "/usr/include/ctype.h"
    return _c==32||(unsigned int)_c-9<5;
}

// body function

static struct _IO_FILE* open_file(char* path){
struct _IO_FILE* fp_0;
    # 17 "token.c"
    # 14 "token.c"
    if(!strcmp(path,"-")) {
        # 15 "token.c"
        return (stdin);
    }
    # 17 "token.c"
    fp_0=fopen(path,"r");
    # 22 "token.c"
    # 18 "token.c"
    if(!fp_0) {
        # 19 "token.c"
        perror(path);
        # 20 "token.c"
        exit(1);
    }
    # 22 "token.c"
    return fp_0;
}

static char* read_file(struct _IO_FILE* fp){
struct anonymous_typeX6* sb_1;
int nread_3;
    # 26 "token.c"
    sb_1=new_sb();
    # 27 "token.c"
    char buf_2[4096];
    memset(&buf_2, 0, sizeof(char)    *(4096)    );
    # 37 "token.c"
    for(    ;    ;    ){
        # 29 "token.c"
        nread_3=fread(buf_2,1,sizeof(buf_2),fp);
        # 32 "token.c"
        # 30 "token.c"
        if(nread_3==0) {
            # 31 "token.c"
            break;
        }
        # 32 "token.c"
        sb_append_n(sb_1,buf_2,nread_3);
    }
    # 37 "token.c"
    sb_append(sb_1,"\n\n");
    # 38 "token.c"
    return sb_get(sb_1);
}

static struct Env* new_env(struct Env* prev, char* path, char* buf){
struct Env* env_4;
    # 42 "token.c"
    env_4=calloc(1,sizeof(struct Env));
    # 43 "token.c"
    env_4->path=strcmp(path,"-")?path:"(stdin)";
    # 44 "token.c"
    env_4->buf=buf;
    # 45 "token.c"
    env_4->tokens=new_vec();
    # 46 "token.c"
    env_4->prev=prev;
    # 47 "token.c"
    return env_4;
}

static _Bool startswith(char* s1, char* s2){
    # 52 "token.c"
    return !strncmp(s1,s2,strlen(s2));
}

static void print_line(char* buf, char* path, char* pos){
char* start_5;
int line_6;
int col_7;
char* p_8;
int linelen_9;
int i_10;
    # 60 "token.c"
    start_5=buf;
    # 61 "token.c"
    line_6=0;
    # 62 "token.c"
    col_7=0;
    # 91 "token.c"
    for(    p_8=buf;    p_8;    p_8++    ){
        # 72 "token.c"
        # 65 "token.c"
        if(*p_8==10) {
            # 66 "token.c"
            start_5=p_8+1;
            # 67 "token.c"
            line_6++;
            # 68 "token.c"
            col_7=0;
            # 69 "token.c"
            continue;
        }
        # 77 "token.c"
        # 72 "token.c"
        if(p_8!=pos) {
            # 73 "token.c"
            col_7++;
            # 74 "token.c"
            continue;
        }
        # 77 "token.c"
        fprintf((stderr),"error at %s:%d:%d\n\n",path,line_6+1,col_7+1);
        # 80 "token.c"
        linelen_9=strchr(p_8,10)-start_5;
        # 81 "token.c"
        fprintf((stderr),"%.*s\n",linelen_9,start_5);
        # 88 "token.c"
        for(        i_10=0;        i_10<col_7;        i_10++        ){
            # 86 "token.c"
            fprintf((stderr),(start_5[i_10]==9)?"\t":" ");
        }
        # 88 "token.c"
        fprintf((stderr),"^\n\n");
        # 89 "token.c"
        return;
    }
}

void warn_token(struct anonymous_typeX7* t, char* msg){
    # 96 "token.c"
    # 94 "token.c"
    if(t->start) {
        # 95 "token.c"
        print_line(t->buf,t->path,t->start);
    }
    # 96 "token.c"
    fprintf((stderr),msg);
    # 97 "token.c"
    fprintf((stderr),"\n");
}

void bad_token(struct anonymous_typeX7* t, char* msg){
    # 101 "token.c"
    warn_token(t,msg);
    # 102 "token.c"
    exit(1);
}

static void bad_position(char* p, char* msg){
    # 106 "token.c"
    print_line(env->buf,env->path,p);
    # 107 "token.c"
    error(msg);
}

int get_line_number(struct anonymous_typeX7* t){
int n_11;
char* p_12;
    # 111 "token.c"
    n_11=0;
    # 115 "token.c"
    for(    p_12=t->buf;    p_12<t->end;    p_12++    ){
        # 115 "token.c"
        # 113 "token.c"
        if(*p_12==10) {
            # 114 "token.c"
            n_11++;
        }
    }
    # 115 "token.c"
    return n_11;
}

static _Bool need_space(struct anonymous_typeX7* t){
char* s_13;
    # 121 "token.c"
    s_13=t->start;
    # 124 "token.c"
    # 122 "token.c"
    if(t->buf<=s_13-1&&__isspace(s_13[-1])) {
        # 123 "token.c"
        return 1;
    }
    # 124 "token.c"
    return t->buf<=s_13-2&&startswith(s_13-2,"*/");
}

char* stringize(struct anonymous_typeX4* tokens){
struct anonymous_typeX6* sb_14;
int i_15;
struct anonymous_typeX7* t_16;
    # 129 "token.c"
    sb_14=new_sb();
    # 141 "token.c"
    for(    i_15=0;    i_15<tokens->len;    i_15++    ){
        # 132 "token.c"
        t_16=tokens->data[i_15];
        # 135 "token.c"
        # 133 "token.c"
        if(t_16->ty==10) {
            # 134 "token.c"
            continue;
        }
        # 138 "token.c"
        # 135 "token.c"
        if(i_15>0&&need_space(t_16)) {
            # 136 "token.c"
            sb_add(sb_14,32);
        }
        # 138 "token.c"
        ((void)((t_16->start&&t_16->end)||(__assert_fail("t->start && t->end","token.c",138,"stringize"),0)));
        # 139 "token.c"
        sb_append_n(sb_14,t_16->start,t_16->end-t_16->start);
    }
    # 141 "token.c"
    return sb_get(sb_14);
}

static struct anonymous_typeX7* add(int ty, char* start){
struct anonymous_typeX7* t_17;
    # 150 "token.c"
    t_17=calloc(1,sizeof(struct anonymous_typeX7));
    # 151 "token.c"
    t_17->ty=ty;
    # 152 "token.c"
    t_17->start=start;
    # 153 "token.c"
    t_17->path=env->path;
    # 154 "token.c"
    t_17->buf=env->buf;
    # 155 "token.c"
    vec_push(env->tokens,t_17);
    # 156 "token.c"
    return t_17;
}

static struct anonymous_typeX5* keyword_map(){
struct anonymous_typeX5* map_18;
    # 178 "token.c"
    map_18=new_map();
    # 179 "token.c"
    map_puti(map_18,"_Alignof",(298));
    # 180 "token.c"
    map_puti(map_18,"_Bool",(266));
    # 181 "token.c"
    map_puti(map_18,"break",(274));
    # 182 "token.c"
    map_puti(map_18,"case",(273));
    # 183 "token.c"
    map_puti(map_18,"char",(263));
    # 184 "token.c"
    map_puti(map_18,"continue",(275));
    # 185 "token.c"
    map_puti(map_18,"do",(270));
    # 186 "token.c"
    map_puti(map_18,"else",(268));
    # 187 "token.c"
    map_puti(map_18,"extern",(260));
    # 188 "token.c"
    map_puti(map_18,"for",(269));
    # 189 "token.c"
    map_puti(map_18,"if",(267));
    # 190 "token.c"
    map_puti(map_18,"int",(262));
    # 191 "token.c"
    map_puti(map_18,"return",(296));
    # 192 "token.c"
    map_puti(map_18,"sizeof",(297));
    # 193 "token.c"
    map_puti(map_18,"struct",(265));
    # 194 "token.c"
    map_puti(map_18,"switch",(272));
    # 195 "token.c"
    map_puti(map_18,"typedef",(261));
    # 196 "token.c"
    map_puti(map_18,"typeof",(299));
    # 197 "token.c"
    map_puti(map_18,"void",(264));
    # 198 "token.c"
    map_puti(map_18,"while",(271));
    # 199 "token.c"
    return map_18;
}

static char* block_comment(char* pos){
char* p_19;
    # 206 "token.c"
    for(    p_19=pos+2;    *p_19;    p_19++    ){
        # 206 "token.c"
        # 204 "token.c"
        if(startswith(p_19,"*/")) {
            # 205 "token.c"
            return p_19+2;
        }
    }
    # 206 "token.c"
    bad_position(pos,"unclosed comment");
}

static int isoctal(char c){
    # 210 "token.c"
    return 48<=c&&c<=55;
}

static int hex(char c){
    # 216 "token.c"
    # 214 "token.c"
    if(48<=c&&c<=57) {
        # 215 "token.c"
        return c-48;
    }
    # 214 "token.c"
    # 216 "token.c"
    if(97<=c&&c<=102) {
        # 217 "token.c"
        return c-97+10;
    }
    # 214 "token.c"
    ((void)((65<=c&&c<=70)||(__assert_fail("'A' <= c && c <= 'F'","token.c",214,"hex"),0)));
    # 215 "token.c"
    return c-65+10;
}

static char* c_char(int* res, char* p){
int esc_21;
int i_22;
    # 225 "token.c"
    # 221 "token.c"
    if(*p!=92) {
        # 222 "token.c"
        *res=*p;
        # 223 "token.c"
        return p+1;
    }
    # 225 "token.c"
    p++;
    # 231 "token.c"
    static char escaped_20[256]={[97] = 7,[98] = 8,[102] = 12,[110] = 10,[114] = 13,[116] = 9,[118] = 11,[101] = 27,[69] = 27};
    # 234 "token.c"
    esc_21=escaped_20[(unsigned char)*p];
    # 241 "token.c"
    # 235 "token.c"
    if(esc_21) {
        # 236 "token.c"
        *res=esc_21;
        # 237 "token.c"
        return p+1;
    }
    # 250 "token.c"
    # 241 "token.c"
    if(*p==120) {
        # 242 "token.c"
        *res=0;
        # 243 "token.c"
        p++;
        # 246 "token.c"
        while(isxdigit(*p)) {
            # 245 "token.c"
            *res=*res*16+hex(*p++);
        }
        # 246 "token.c"
        return p;
    }
    # 260 "token.c"
    # 250 "token.c"
    if(isoctal(*p)) {
        # 251 "token.c"
        i_22=*p++-48;
        # 254 "token.c"
        # 252 "token.c"
        if(isoctal(*p)) {
            # 253 "token.c"
            i_22=i_22*8+*p++-48;
        }
        # 256 "token.c"
        # 254 "token.c"
        if(isoctal(*p)) {
            # 255 "token.c"
            i_22=i_22*8+*p++-48;
        }
        # 256 "token.c"
        *res=i_22;
        # 257 "token.c"
        return p;
    }
    # 260 "token.c"
    *res=*p;
    # 261 "token.c"
    return p+1;
}

static char* char_literal(char* p){
struct anonymous_typeX7* t_23;
    # 265 "token.c"
    t_23=add((256),p++);
    # 266 "token.c"
    p=c_char(&t_23->val,p);
    # 269 "token.c"
    # 267 "token.c"
    if(*p!=39) {
        # 268 "token.c"
        bad_token(t_23,"unclosed character literal");
    }
    # 269 "token.c"
    t_23->end=p+1;
    # 270 "token.c"
    return p+1;
}

static char* string_literal(char* p){
struct anonymous_typeX7* t_24;
struct anonymous_typeX6* sb_25;
int c_26;
memset(&c_26, 0, sizeof(int));
    # 274 "token.c"
    t_24=add((257),p++);
    # 275 "token.c"
    sb_25=new_sb();
    # 285 "token.c"
    while(*p!=34) {
        # 280 "token.c"
        # 278 "token.c"
        if(!*p) {
            # 279 "token.c"
            bad_token(t_24,"unclosed string literal");
        }
        # 280 "token.c"
        # 281 "token.c"
        p=c_char(&c_26,p);
        # 282 "token.c"
        sb_add(sb_25,c_26);
    }
    # 285 "token.c"
    t_24->str=sb_get(sb_25);
    # 286 "token.c"
    t_24->len=sb_25->len;
    # 287 "token.c"
    t_24->end=p+1;
    # 288 "token.c"
    return p+1;
}

static char* ident(char* p){
int len_27;
char* name_28;
int ty_29;
struct anonymous_typeX7* t_30;
    # 292 "token.c"
    len_27=1;
    # 296 "token.c"
    while((0?isalpha(p[len_27]):(((unsigned int)(p[len_27])|32)-97)<26)||(0?isdigit(p[len_27]):((unsigned int)(p[len_27])-48)<10)||p[len_27]==95) {
        # 294 "token.c"
        len_27++;
    }
    # 296 "token.c"
    name_28=strndup(p,len_27);
    # 297 "token.c"
    ty_29=map_geti(keywords,name_28,(258));
    # 298 "token.c"
    t_30=add(ty_29,p);
    # 299 "token.c"
    t_30->name=name_28;
    # 300 "token.c"
    t_30->end=p+len_27;
    # 301 "token.c"
    return p+len_27;
}

static char* hexadecimal(char* p){
struct anonymous_typeX7* t_31;
    # 305 "token.c"
    t_31=add((256),p);
    # 306 "token.c"
    p+=2;
    # 311 "token.c"
    # 308 "token.c"
    if(!isxdigit(*p)) {
        # 309 "token.c"
        bad_token(t_31,"bad hexadecimal number");
    }
    # 313 "token.c"
    while(isxdigit(*p)) {
        # 312 "token.c"
        t_31->val=t_31->val*16+hex(*p++);
    }
    # 313 "token.c"
    t_31->end=p;
    # 314 "token.c"
    return p;
}

static char* octal(char* p){
struct anonymous_typeX7* t_32;
    # 318 "token.c"
    t_32=add((256),p++);
    # 321 "token.c"
    while(isoctal(*p)) {
        # 320 "token.c"
        t_32->val=t_32->val*8+*p++-48;
    }
    # 321 "token.c"
    t_32->end=p;
    # 322 "token.c"
    return p;
}

static char* decimal(char* p){
struct anonymous_typeX7* t_33;
    # 326 "token.c"
    t_33=add((256),p);
    # 329 "token.c"
    while((0?isdigit(*p):((unsigned int)(*p)-48)<10)) {
        # 328 "token.c"
        t_33->val=t_33->val*10+*p++-48;
    }
    # 329 "token.c"
    t_33->end=p;
    # 330 "token.c"
    return p;
}

static char* number(char* p){
    # 336 "token.c"
    # 334 "token.c"
    if(startswith(p,"0x")||startswith(p,"0X")) {
        # 335 "token.c"
        return hexadecimal(p);
    }
    # 338 "token.c"
    # 336 "token.c"
    if(*p==48) {
        # 337 "token.c"
        return octal(p);
    }
    # 338 "token.c"
    return decimal(p);
}

static void scan(){
char* p_34;
struct anonymous_typeX7* t_35;
int i_36;
char* name_37;
struct anonymous_typeX7* t_38;
struct anonymous_typeX7* t_39;
    # 342 "token.c"
    p_34=env->buf;
    # 345 "token.c"
    name:
    # 419 "token.c"
    while(*p_34) {
        # 355 "token.c"
        # 347 "token.c"
        if(*p_34==10) {
            # 348 "token.c"
            t_35=add(*p_34,p_34);
            # 349 "token.c"
            p_34++;
            # 350 "token.c"
            t_35->end=p_34;
            # 351 "token.c"
            continue;
        }
        # 361 "token.c"
        # 355 "token.c"
        if(__isspace(*p_34)) {
            # 356 "token.c"
            p_34++;
            # 357 "token.c"
            continue;
        }
        # 368 "token.c"
        # 361 "token.c"
        if(startswith(p_34,"//")) {
            # 364 "token.c"
            while(*p_34&&*p_34!=10) {
                # 363 "token.c"
                p_34++;
            }
            # 364 "token.c"
            continue;
        }
        # 374 "token.c"
        # 368 "token.c"
        if(startswith(p_34,"/*")) {
            # 369 "token.c"
            p_34=block_comment(p_34);
            # 370 "token.c"
            continue;
        }
        # 380 "token.c"
        # 374 "token.c"
        if(*p_34==39) {
            # 375 "token.c"
            p_34=char_literal(p_34);
            # 376 "token.c"
            continue;
        }
        # 386 "token.c"
        # 380 "token.c"
        if(*p_34==34) {
            # 381 "token.c"
            p_34=string_literal(p_34);
            # 382 "token.c"
            continue;
        }
        # 398 "token.c"
        for(        i_36=0;        symbols[i_36].name;        i_36++        ){
            # 387 "token.c"
            name_37=symbols[i_36].name;
            # 391 "token.c"
            # 388 "token.c"
            if(!startswith(p_34,name_37)) {
                # 389 "token.c"
                continue;
            }
            # 391 "token.c"
            t_38=add(symbols[i_36].ty,p_34);
            # 392 "token.c"
            p_34+=strlen(name_37);
            # 393 "token.c"
            t_38->end=p_34;
            # 394 "token.c"
            goto loop;
        }
        # 406 "token.c"
        # 398 "token.c"
        if(strchr("+-*/;=(),{}<>[]&.!?:|^%~#",*p_34)) {
            # 399 "token.c"
            t_39=add(*p_34,p_34);
            # 400 "token.c"
            p_34++;
            # 401 "token.c"
            t_39->end=p_34;
            # 402 "token.c"
            continue;
        }
        # 412 "token.c"
        # 406 "token.c"
        if((0?isalpha(*p_34):(((unsigned int)(*p_34)|32)-97)<26)||*p_34==95) {
            # 407 "token.c"
            p_34=ident(p_34);
            # 408 "token.c"
            continue;
        }
        # 417 "token.c"
        # 412 "token.c"
        if((0?isdigit(*p_34):((unsigned int)(*p_34)-48)<10)) {
            # 413 "token.c"
            p_34=number(p_34);
            # 414 "token.c"
            continue;
        }
        # 417 "token.c"
        bad_position(p_34,"cannot tokenize");
    }
}

static void replace_crlf(char* p){
char* q_40;
    # 427 "token.c"
    for(    q_40=p;    *q_40;    ){
        # 425 "token.c"
        # 423 "token.c"
        if(startswith(q_40,"\r\n")) {
            # 424 "token.c"
            q_40++;
        }
        # 425 "token.c"
        *p++=*q_40++;
    }
    # 427 "token.c"
    *p=0;
}

static void remove_backslash_newline(char* p){
int cnt_41;
char* q_42;
int i_43;
    # 433 "token.c"
    cnt_41=0;
    # 449 "token.c"
    for(    q_42=p;    *q_42;    ){
        # 440 "token.c"
        # 435 "token.c"
        if(startswith(q_42,"\\\n")) {
            # 436 "token.c"
            cnt_41++;
            # 437 "token.c"
            q_42+=2;
            # 438 "token.c"
            continue;
        }
        # 447 "token.c"
        # 440 "token.c"
        if(*q_42==10) {
            # 443 "token.c"
            for(            i_43=0;            i_43<cnt_41+1;            i_43++            ){
                # 442 "token.c"
                *p++=10;
            }
            # 443 "token.c"
            q_42++;
            # 444 "token.c"
            cnt_41=0;
            # 445 "token.c"
            continue;
        }
        # 447 "token.c"
        *p++=*q_42++;
    }
    # 449 "token.c"
    *p=0;
}

static struct anonymous_typeX4* strip_newline_tokens(struct anonymous_typeX4* tokens){
struct anonymous_typeX4* v_44;
int i_45;
struct anonymous_typeX7* t_46;
    # 453 "token.c"
    v_44=new_vec();
    # 459 "token.c"
    for(    i_45=0;    i_45<tokens->len;    i_45++    ){
        # 455 "token.c"
        t_46=tokens->data[i_45];
        # 458 "token.c"
        # 456 "token.c"
        if(t_46->ty!=10) {
            # 457 "token.c"
            vec_push(v_44,t_46);
        }
    }
    # 459 "token.c"
    return v_44;
}

static void append(struct anonymous_typeX7* x, struct anonymous_typeX7* y){
struct anonymous_typeX6* sb_47;
    # 463 "token.c"
    sb_47=new_sb();
    # 464 "token.c"
    sb_append_n(sb_47,x->str,x->len-1);
    # 465 "token.c"
    sb_append_n(sb_47,y->str,y->len-1);
    # 466 "token.c"
    x->str=sb_get(sb_47);
    # 467 "token.c"
    x->len=sb_47->len;
}

static struct anonymous_typeX4* join_string_literals(struct anonymous_typeX4* tokens){
struct anonymous_typeX4* v_48;
struct anonymous_typeX7* last_49;
int i_50;
struct anonymous_typeX7* t_51;
    # 471 "token.c"
    v_48=new_vec();
    # 472 "token.c"
    last_49=((void*)0);
    # 484 "token.c"
    for(    i_50=0;    i_50<tokens->len;    i_50++    ){
        # 475 "token.c"
        t_51=tokens->data[i_50];
        # 481 "token.c"
        # 476 "token.c"
        if(last_49&&last_49->ty==(257)&&t_51->ty==(257)) {
            # 477 "token.c"
            append(last_49,t_51);
            # 478 "token.c"
            continue;
        }
        # 481 "token.c"
        last_49=t_51;
        # 482 "token.c"
        vec_push(v_48,t_51);
    }
    # 484 "token.c"
    return v_48;
}

struct anonymous_typeX4* tokenize(char* path, _Bool add_eof){
struct _IO_FILE* fp_52;
char* buf_53;
struct anonymous_typeX4* v_54;
    # 491 "token.c"
    # 488 "token.c"
    if(!keywords) {
        # 489 "token.c"
        keywords=keyword_map();
    }
    # 491 "token.c"
    fp_52=open_file(path);
    # 492 "token.c"
    buf_53=read_file(fp_52);
    # 493 "token.c"
    replace_crlf(buf_53);
    # 494 "token.c"
    remove_backslash_newline(buf_53);
    # 496 "token.c"
    env=new_env(env,path,buf_53);
    # 497 "token.c"
    scan();
    # 500 "token.c"
    # 498 "token.c"
    if(add_eof) {
        # 499 "token.c"
        add((301),((void*)0));
    }
    # 500 "token.c"
    v_54=env->tokens;
    # 501 "token.c"
    env=env->prev;
    # 503 "token.c"
    v_54=preprocess(v_54);
    # 504 "token.c"
    v_54=strip_newline_tokens(v_54);
    # 505 "token.c"
    return join_string_literals(v_54);
}

