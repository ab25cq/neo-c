// source head
typedef __builtin_va_list va_list;
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
typedef struct __locale_struct* locale_t;
typedef struct node* Node;
typedef struct list* List;
typedef struct code* Code;
typedef struct swtch* Swtch;
typedef struct symbol* Symbol;
struct coord
{
    char* file;
    unsigned int x;
    unsigned int y;
};
typedef struct coord Coordinate;
typedef struct table* Table;
union value
{
long i;
unsigned long int u;
long double d;
void* p;
void (*g)();
};
typedef union value Value;
typedef struct tree* Tree;
typedef struct type* Type;
typedef struct field* Field;
struct anonymous_typeX4
{
    unsigned int printed:1;
    unsigned int marked;
    unsigned short int typeno;
    void* xt;
};
typedef struct anonymous_typeX4 Xtype;
struct anonymous_typeX5
{
    unsigned char max_unaligned_load;
    struct symbol* (*rmap)(int);
    void (*blkfetch)(int,int,int,int);
    void (*blkstore)(int,int,int,int);
    void (*blkloop)(int,int,int,int,int,int*);
    void (*_label)(struct node*);
    int (*_rule)(void*,int);
    short short** _nts;
    void (*_kids)(struct node*,int,struct node**);
    char** _string;
    char** _templates;
    char* _isinstruction;
    char** _ntname;
    void (*emit2)(struct node*);
    void (*doarg)(struct node*);
    void (*target)(struct node*);
    void (*clobber)(struct node*);
};
typedef struct anonymous_typeX5 Xinterface;
extern int argoffset;
extern int maxargoffset;
extern int bflag;
extern int dflag;
extern int dalign;
extern int salign;
extern int framesize;
extern unsigned int freemask[];
extern unsigned int usedmask[];
extern int offset;
extern int maxoffset;
extern int swap;
extern unsigned int tmask[];
extern unsigned int vmask[];
struct anonymous_typeX6
{
    unsigned int listed:1;
    unsigned int registered:1;
    unsigned int emitted:1;
    unsigned int copy:1;
    unsigned int equatable:1;
    unsigned int spills:1;
    unsigned int mayrecalc:1;
    void* state;
    short short inst;
    struct node* kids[3];
    struct node* prev;
    struct node* next;
    struct node* prevuse;
    short short argno;
};
typedef struct anonymous_typeX6 Xnode;
struct anonymous_typeX7
{
    struct symbol* vbl;
    short short set;
    short short number;
    unsigned int mask;
};
typedef struct anonymous_typeX7* Regnode;
enum { IREG=0,
FREG=1
};
struct anonymous_typeX8
{
    char* name;
    unsigned int eaddr;
    int offset;
    struct node* lastuse;
    int usecount;
    struct anonymous_typeX7* regnode;
    struct symbol** wildcard;
};
typedef struct anonymous_typeX8 Xsymbol;
enum { RX=2
};
struct anonymous_typeX9
{
    int offset;
    unsigned int freemask[2];
};
typedef struct anonymous_typeX9 Env;
enum { VREG=(44<<4)
};
struct metrics
{
    unsigned char size;
    unsigned char align;
    unsigned char outofline;
};
typedef struct metrics Metrics;
struct interface
{
    struct metrics charmetric;
    struct metrics shortmetric;
    struct metrics intmetric;
    struct metrics longmetric;
    struct metrics longlongmetric;
    struct metrics floatmetric;
    struct metrics doublemetric;
    struct metrics longdoublemetric;
    struct metrics ptrmetric;
    struct metrics structmetric;
    unsigned int little_endian:1;
    unsigned int mulops_calls:1;
    unsigned int wants_callb:1;
    unsigned int wants_argb:1;
    unsigned int left_to_right:1;
    unsigned int wants_dag:1;
    unsigned int unsigned_char:1;
    void (*address)(struct symbol*,struct symbol*,long);
    void (*blockbeg)(struct anonymous_typeX9*);
    void (*blockend)(struct anonymous_typeX9*);
    void (*defaddress)(struct symbol*);
    void (*defconst)(int,int,union value);
    void (*defstring)(int,char*);
    void (*defsymbol)(struct symbol*);
    void (*emit)(struct node*);
    void (*export)(struct symbol*);
    void (*function)(struct symbol*,struct symbol**,struct symbol**,int);
    struct node* (*gen)(struct node*);
    void (*global)(struct symbol*);
    void (*import)(struct symbol*);
    void (*local)(struct symbol*);
    void (*progbeg)(int,char**);
    void (*progend)();
    void (*segment)(int);
    void (*space)(int);
    void (*stabblock)(int,int,struct symbol**);
    void (*stabend)(struct coord*,struct symbol*,struct coord**,struct symbol**,struct symbol**);
    void (*stabfend)(struct symbol*,int);
    void (*stabinit)(char*,int,char**);
    void (*stabline)(struct coord*);
    void (*stabsym)(struct symbol*);
    void (*stabtype)(struct symbol*);
    struct anonymous_typeX5 x;
};
typedef struct interface Interface;
struct binding
{
    char* name;
    struct interface* ir;
};
typedef struct binding Binding;
extern struct binding bindings[];
extern struct interface* IR;
struct anonymous_typeX10
{
    struct list* blockentry;
    struct list* blockexit;
    struct list* entry;
    struct list* exit;
    struct list* returns;
    struct list* points;
    struct list* calls;
    struct list* end;
};
typedef struct anonymous_typeX10 Events;
enum { FLOAT=1,
DOUBLE=2,
CHAR=3,
SHORT=4,
INT=5,
UNSIGNED=6,
POINTER=7,
VOID=8,
STRUCT=9,
UNION=10,
FUNCTION=11,
ARRAY=12,
ENUM=13,
LONG=14,
CONST=15,
VOLATILE=16,
ID=32,
FCON=34,
ICON=35,
SCON=36,
INCR=39,
DECR=48,
DEREF=49,
ANDAND=50,
OROR=51,
LEQ=52,
EQL=53,
NEQ=54,
GEQ=55,
RSHIFT=56,
LSHIFT=57,
ELLIPSIS=64,
SIZEOF=65,
AUTO=67,
BREAK=68,
CASE=69,
CONTINUE=70,
DEFAULT=71,
DO=72,
ELSE=73,
EXTERN=74,
FOR=75,
GOTO=76,
IF=77,
REGISTER=78,
RETURN=79,
SIGNED=80,
STATIC=81,
SWITCH=82,
TYPEDEF=83,
WHILE=84,
TYPECODE=85,
FIRSTARG=86,
EOI=127,
LAST
};
struct node
{
    short short op;
    short short count;
    struct symbol* syms[3];
    struct node* kids[2];
    struct node* link;
    struct anonymous_typeX6 x;
};
enum { F=1,
I=5,
U=6,
P=7,
V=8,
B=9
};
enum { CNST=1<<4,
ARG=2<<4,
ASGN=3<<4,
INDIR=4<<4,
CVF=7<<4,
CVI=8<<4,
CVP=9<<4,
CVU=11<<4,
NEG=12<<4,
CALL=13<<4,
RET=15<<4,
ADDRG=16<<4,
ADDRF=17<<4,
ADDRL=18<<4,
ADD=19<<4,
SUB=20<<4,
LSH=21<<4,
MOD=22<<4,
RSH=23<<4,
BAND=24<<4,
BCOM=25<<4,
BOR=26<<4,
BXOR=27<<4,
DIV=28<<4,
MUL=29<<4,
EQ=30<<4,
GE=31<<4,
GT=32<<4,
LE=33<<4,
LT=34<<4,
NE=35<<4,
JUMP=36<<4,
LABEL=37<<4,
LOAD=14<<4,
LASTOP
};
enum { CODE=1,
BSS
,DATA
,LIT
};
enum { PERM=0,
FUNC
,STMT
};
struct list
{
    void* x;
    struct list* link;
};
enum anonymous_typeY12 { Blockbeg
,Blockend
,Local
,Address
,Defpoint
,Label
,Start
,Gen
,Jump
,Switch
};
struct anonymous_typeX14
{
};
struct anonymous_typeX15
{
};
struct anonymous_typeX16
{
};
struct anonymous_typeX17
{
};
struct anonymous_typeX19
{
    int level;
    struct symbol** locals;
    struct table* identifiers;
    struct table* types;
    struct anonymous_typeX9 x;
};
struct anonymous_typeX20
{
    struct symbol* sym;
    struct symbol* base;
    long offset;
};
struct anonymous_typeX21
{
    struct coord src;
    int point;
};
struct anonymous_typeX22
{
    struct symbol* sym;
    struct symbol* table;
    struct symbol* deflab;
    int size;
    long* values;
    struct symbol** labels;
};
union anonymous_typeZ18
{
struct anonymous_typeX19 block;
struct code* begin;
struct symbol* var;
struct anonymous_typeX20 addr;
struct anonymous_typeX21 point;
struct node* forest;
struct anonymous_typeX22 swtch;
};
struct code
{
    enum anonymous_typeY12 kind;
    struct code* prev;
    struct code* next;
    union anonymous_typeZ18 u;
};
struct swtch
{
    struct symbol* sym;
    int lab;
    struct symbol* deflab;
    int ncases;
    int size;
    long* values;
    struct symbol** labels;
};
struct anonymous_typeX24
{
};
struct anonymous_typeX25
{
};
struct anonymous_typeX26
{
};
struct anonymous_typeX27
{
};
struct anonymous_typeX28
{
};
struct anonymous_typeX29
{
};
struct anonymous_typeX31
{
    int label;
    struct symbol* equatedto;
};
struct anonymous_typeX32
{
    unsigned int cfields:1;
    unsigned int vfields:1;
    struct table* ftab;
    struct field* flist;
};
struct anonymous_typeX33
{
    union value min;
    union value max;
};
struct anonymous_typeX34
{
    union value v;
    struct symbol* loc;
};
struct anonymous_typeX35
{
    struct coord pt;
    int label;
    int ncalls;
    struct symbol** callee;
};
struct anonymous_typeX36
{
    struct node* cse;
    int replace;
    struct symbol* next;
};
union anonymous_typeZ30
{
struct anonymous_typeX31 l;
struct anonymous_typeX32 s;
int value;
struct symbol** idlist;
struct anonymous_typeX33 limits;
struct anonymous_typeX34 c;
struct anonymous_typeX35 f;
int seg;
struct symbol* alias;
struct anonymous_typeX36 t;
};
struct symbol
{
    char* name;
    int scope;
    struct coord src;
    struct symbol* up;
    struct list* uses;
    int sclass;
    unsigned int structarg:1;
    unsigned int addressed:1;
    unsigned int computed:1;
    unsigned int temporary:1;
    unsigned int generated:1;
    unsigned int defined:1;
    struct type* type;
    float ref;
    union anonymous_typeZ30 u;
    struct anonymous_typeX8 x;
};
enum { CONSTANTS=1,
LABELS
,GLOBAL
,PARAM
,LOCAL
};
union anonymous_typeZ38
{
union value v;
struct symbol* sym;
struct field* field;
};
struct tree
{
    int op;
    struct type* type;
    struct tree* kids[2];
    struct node* node;
    union anonymous_typeZ38 u;
};
enum { AND=38<<4,
NOT=39<<4,
OR=40<<4,
COND=41<<4,
RIGHT=42<<4,
FIELD=43<<4
};
struct anonymous_typeX40
{
};
struct anonymous_typeX42
{
    unsigned int oldstyle:1;
    struct type** proto;
};
union anonymous_typeZ41
{
struct symbol* sym;
struct anonymous_typeX42 f;
};
struct type
{
    int op;
    struct type* type;
    int align;
    int size;
    union anonymous_typeZ41 u;
    struct anonymous_typeX4 x;
};
struct field
{
    char* name;
    struct type* type;
    int offset;
    short short bitsize;
    short short lsb;
    struct field* link;
};
extern int assignargs;
extern int prunetemps;
extern int nodecount;
extern struct symbol* cfunc;
extern struct symbol* retv;
extern struct tree* (*optree[])(int,struct tree*,struct tree*);
extern char kind[];
extern int errcnt;
extern int errlimit;
extern int wflag;
extern struct anonymous_typeX10 events;
extern float refinc;
extern unsigned char* cp;
extern unsigned char* limit;
extern char* firstfile;
extern char* file;
extern char* line;
extern int lineno;
extern int t;
extern char* token;
extern struct symbol* tsym;
extern struct coord src;
extern int Aflag;
extern int Pflag;
extern struct symbol* YYnull;
extern struct symbol* YYcheck;
extern int glevel;
extern int xref;
extern int ncalled;
extern int npoints;
extern int needconst;
extern int explicitCast;
extern struct code codehead;
extern struct code* codelist;
extern struct table* stmtlabs;
extern float density;
extern struct table* constants;
extern struct table* externals;
extern struct table* globals;
extern struct table* identifiers;
extern struct table* labels;
extern struct table* types;
extern int level;
extern struct list* loci;
extern struct list* symbols;
extern struct list* symbols;
extern int where;
extern struct type* chartype;
extern struct type* doubletype;
extern struct type* floattype;
extern struct type* inttype;
extern struct type* longdouble;
extern struct type* longtype;
extern struct type* longlong;
extern struct type* shorttype;
extern struct type* signedchar;
extern struct type* unsignedchar;
extern struct type* unsignedlonglong;
extern struct type* unsignedlong;
extern struct type* unsignedshort;
extern struct type* unsignedtype;
extern struct type* charptype;
extern struct type* funcptype;
extern struct type* voidptype;
extern struct type* voidtype;
extern struct type* unsignedptr;
extern struct type* signedptr;
extern struct type* widechar;
typedef void (*Apply)(void*,void*,void*);
static char rcsid[]="$Id$";
struct node* forest;
struct dag
{
};
struct dag* buckets[16];
int nodecount;
struct tree* firstarg;
int assignargs=1;
int prunetemps=-1;
struct node** tail;
static int depth=0;

// uniq global variable

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

struct _IO_FILE* fopen(const char* anonymous_var_nameX5, const char* anonymous_var_nameX6);

struct _IO_FILE* freopen(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, struct _IO_FILE* anonymous_var_nameX9);

int fclose(struct _IO_FILE* anonymous_var_nameX10);

int remove(const char* anonymous_var_nameX11);

int rename(const char* anonymous_var_nameX12, const char* anonymous_var_nameX13);

int feof(struct _IO_FILE* anonymous_var_nameX14);

int ferror(struct _IO_FILE* anonymous_var_nameX15);

int fflush(struct _IO_FILE* anonymous_var_nameX16);

void clearerr(struct _IO_FILE* anonymous_var_nameX17);

int fseek(struct _IO_FILE* anonymous_var_nameX18, long anonymous_var_nameX19, int anonymous_var_nameX20);

long ftell(struct _IO_FILE* anonymous_var_nameX21);

void rewind(struct _IO_FILE* anonymous_var_nameX22);

int fgetpos(struct _IO_FILE* anonymous_var_nameX23, union _G_fpos64_t* anonymous_var_nameX24);

int fsetpos(struct _IO_FILE* anonymous_var_nameX25, const union _G_fpos64_t* anonymous_var_nameX26);

unsigned long int fread(void* anonymous_var_nameX27, unsigned long int anonymous_var_nameX28, unsigned long int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);

unsigned long int fwrite(const void* anonymous_var_nameX31, unsigned long int anonymous_var_nameX32, unsigned long int anonymous_var_nameX33, struct _IO_FILE* anonymous_var_nameX34);

int fgetc(struct _IO_FILE* anonymous_var_nameX35);

int getc(struct _IO_FILE* anonymous_var_nameX36);

int getchar();

int ungetc(int anonymous_var_nameX37, struct _IO_FILE* anonymous_var_nameX38);

int fputc(int anonymous_var_nameX39, struct _IO_FILE* anonymous_var_nameX40);

int putc(int anonymous_var_nameX41, struct _IO_FILE* anonymous_var_nameX42);

int putchar(int anonymous_var_nameX43);

char* fgets(char* anonymous_var_nameX44, int anonymous_var_nameX45, struct _IO_FILE* anonymous_var_nameX46);

int fputs(const char* anonymous_var_nameX47, struct _IO_FILE* anonymous_var_nameX48);

int puts(const char* anonymous_var_nameX49);

int printf(const char* anonymous_var_nameX50, ...);

int fprintf(struct _IO_FILE* anonymous_var_nameX51, const char* anonymous_var_nameX52, ...);

int sprintf(char* anonymous_var_nameX53, const char* anonymous_var_nameX54, ...);

int snprintf(char* anonymous_var_nameX55, unsigned long int anonymous_var_nameX56, const char* anonymous_var_nameX57, ...);

int vprintf(const char* anonymous_var_nameX58, va_list anonymous_var_nameX59);

int vfprintf(struct _IO_FILE* anonymous_var_nameX60, const char* anonymous_var_nameX61, va_list anonymous_var_nameX62);

int vsprintf(char* anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);

int vsnprintf(char* anonymous_var_nameX66, unsigned long int anonymous_var_nameX67, const char* anonymous_var_nameX68, va_list anonymous_var_nameX69);

int scanf(const char* anonymous_var_nameX70, ...);

int fscanf(struct _IO_FILE* anonymous_var_nameX71, const char* anonymous_var_nameX72, ...);

int sscanf(const char* anonymous_var_nameX73, const char* anonymous_var_nameX74, ...);

int vscanf(const char* anonymous_var_nameX75, va_list anonymous_var_nameX76);

int vfscanf(struct _IO_FILE* anonymous_var_nameX77, const char* anonymous_var_nameX78, va_list anonymous_var_nameX79);

int vsscanf(const char* anonymous_var_nameX80, const char* anonymous_var_nameX81, va_list anonymous_var_nameX82);

void perror(const char* anonymous_var_nameX83);

int setvbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85, int anonymous_var_nameX86, unsigned long int anonymous_var_nameX87);

void setbuf(struct _IO_FILE* anonymous_var_nameX88, char* anonymous_var_nameX89);

char* tmpnam(char* anonymous_var_nameX90);

struct _IO_FILE* tmpfile();

struct _IO_FILE* fmemopen(void* anonymous_var_nameX91, unsigned long int anonymous_var_nameX92, const char* anonymous_var_nameX93);

struct _IO_FILE* open_memstream(char** anonymous_var_nameX94, unsigned long int* anonymous_var_nameX95);

struct _IO_FILE* fdopen(int anonymous_var_nameX96, const char* anonymous_var_nameX97);

struct _IO_FILE* popen(const char* anonymous_var_nameX98, const char* anonymous_var_nameX99);

int pclose(struct _IO_FILE* anonymous_var_nameX100);

int fileno(struct _IO_FILE* anonymous_var_nameX101);

int fseeko(struct _IO_FILE* anonymous_var_nameX102, long anonymous_var_nameX103, int anonymous_var_nameX104);

long ftello(struct _IO_FILE* anonymous_var_nameX105);

int dprintf(int anonymous_var_nameX106, const char* anonymous_var_nameX107, ...);

int vdprintf(int anonymous_var_nameX108, const char* anonymous_var_nameX109, va_list anonymous_var_nameX110);

void flockfile(struct _IO_FILE* anonymous_var_nameX111);

int ftrylockfile(struct _IO_FILE* anonymous_var_nameX112);

void funlockfile(struct _IO_FILE* anonymous_var_nameX113);

int getc_unlocked(struct _IO_FILE* anonymous_var_nameX114);

int getchar_unlocked();

int putc_unlocked(int anonymous_var_nameX115, struct _IO_FILE* anonymous_var_nameX116);

int putchar_unlocked(int anonymous_var_nameX117);

long getdelim(char** anonymous_var_nameX118, unsigned long int* anonymous_var_nameX119, int anonymous_var_nameX120, struct _IO_FILE* anonymous_var_nameX121);

long getline(char** anonymous_var_nameX122, unsigned long int* anonymous_var_nameX123, struct _IO_FILE* anonymous_var_nameX124);

int renameat(int anonymous_var_nameX125, const char* anonymous_var_nameX126, int anonymous_var_nameX127, const char* anonymous_var_nameX128);

char* ctermid(char* anonymous_var_nameX129);

char* tempnam(const char* anonymous_var_nameX130, const char* anonymous_var_nameX131);

char* cuserid(char* anonymous_var_nameX132);

void setlinebuf(struct _IO_FILE* anonymous_var_nameX133);

void setbuffer(struct _IO_FILE* anonymous_var_nameX134, char* anonymous_var_nameX135, unsigned long int anonymous_var_nameX136);

int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX137);

int fputc_unlocked(int anonymous_var_nameX138, struct _IO_FILE* anonymous_var_nameX139);

int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX140);

unsigned long int fread_unlocked(void* anonymous_var_nameX141, unsigned long int anonymous_var_nameX142, unsigned long int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);

unsigned long int fwrite_unlocked(const void* anonymous_var_nameX145, unsigned long int anonymous_var_nameX146, unsigned long int anonymous_var_nameX147, struct _IO_FILE* anonymous_var_nameX148);

void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX149);

int feof_unlocked(struct _IO_FILE* anonymous_var_nameX150);

int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX151);

int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX152);

int getw(struct _IO_FILE* anonymous_var_nameX153);

int putw(int anonymous_var_nameX154, struct _IO_FILE* anonymous_var_nameX155);

char* fgetln(struct _IO_FILE* anonymous_var_nameX156, unsigned long int* anonymous_var_nameX157);

int asprintf(char** anonymous_var_nameX158, const char* anonymous_var_nameX159, ...);

int vasprintf(char** anonymous_var_nameX160, const char* anonymous_var_nameX161, va_list anonymous_var_nameX162);

int atoi(const char* anonymous_var_nameX163);

long atol(const char* anonymous_var_nameX164);

long long atoll(const char* anonymous_var_nameX165);

double atof(const char* anonymous_var_nameX166);

float strtof(const char* anonymous_var_nameX167, char** anonymous_var_nameX168);

double strtod(const char* anonymous_var_nameX169, char** anonymous_var_nameX170);

long double strtold(const char* anonymous_var_nameX171, char** anonymous_var_nameX172);

long strtol(const char* anonymous_var_nameX173, char** anonymous_var_nameX174, int anonymous_var_nameX175);

unsigned long int strtoul(const char* anonymous_var_nameX176, char** anonymous_var_nameX177, int anonymous_var_nameX178);

long long strtoll(const char* anonymous_var_nameX179, char** anonymous_var_nameX180, int anonymous_var_nameX181);

unsigned long long strtoull(const char* anonymous_var_nameX182, char** anonymous_var_nameX183, int anonymous_var_nameX184);

int rand();

void srand(unsigned int anonymous_var_nameX185);

void* malloc(unsigned long int anonymous_var_nameX186);

void* calloc(unsigned long int anonymous_var_nameX187, unsigned long int anonymous_var_nameX188);

void* realloc(void* anonymous_var_nameX189, unsigned long int anonymous_var_nameX190);

void free(void* anonymous_var_nameX191);

void* aligned_alloc(unsigned long int anonymous_var_nameX192, unsigned long int anonymous_var_nameX193);

void abort();

int atexit(void (*anonymous_lambda_var_nameZ1)());

void exit(int anonymous_var_nameX194);

void _Exit(int anonymous_var_nameX195);

int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());

void quick_exit(int anonymous_var_nameX196);

char* getenv(const char* anonymous_var_nameX197);

int system(const char* anonymous_var_nameX198);

void* bsearch(const void* anonymous_var_nameX199, const void* anonymous_var_nameX200, unsigned long int anonymous_var_nameX201, unsigned long int anonymous_var_nameX202, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));

void qsort(void* anonymous_var_nameX205, unsigned long int anonymous_var_nameX206, unsigned long int anonymous_var_nameX207, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));

int abs(int anonymous_var_nameX210);

long labs(long anonymous_var_nameX211);

long long llabs(long long anonymous_var_nameX212);

struct anonymous_typeX1 div(int anonymous_var_nameX213, int anonymous_var_nameX214);

struct anonymous_typeX2 ldiv(long anonymous_var_nameX215, long anonymous_var_nameX216);

struct anonymous_typeX3 lldiv(long long anonymous_var_nameX217, long long anonymous_var_nameX218);

int mblen(const char* anonymous_var_nameX219, unsigned long int anonymous_var_nameX220);

int mbtowc(unsigned int* anonymous_var_nameX221, const char* anonymous_var_nameX222, unsigned long int anonymous_var_nameX223);

int wctomb(char* anonymous_var_nameX224, unsigned int anonymous_var_nameX225);

unsigned long int mbstowcs(unsigned int* anonymous_var_nameX226, const char* anonymous_var_nameX227, unsigned long int anonymous_var_nameX228);

unsigned long int wcstombs(char* anonymous_var_nameX229, const unsigned int* anonymous_var_nameX230, unsigned long int anonymous_var_nameX231);

unsigned long int __ctype_get_mb_cur_max();

int posix_memalign(void** anonymous_var_nameX232, unsigned long int anonymous_var_nameX233, unsigned long int anonymous_var_nameX234);

int setenv(const char* anonymous_var_nameX235, const char* anonymous_var_nameX236, int anonymous_var_nameX237);

int unsetenv(const char* anonymous_var_nameX238);

int mkstemp(char* anonymous_var_nameX239);

int mkostemp(char* anonymous_var_nameX240, int anonymous_var_nameX241);

char* mkdtemp(char* anonymous_var_nameX242);

int getsubopt(char** anonymous_var_nameX243, char** anonymous_var_nameX244, char** anonymous_var_nameX245);

int rand_r(unsigned int* anonymous_var_nameX246);

char* realpath(const char* anonymous_var_nameX247, char* anonymous_var_nameX248);

long int random();

void srandom(unsigned int anonymous_var_nameX249);

char* initstate(unsigned int anonymous_var_nameX250, char* anonymous_var_nameX251, unsigned long int anonymous_var_nameX252);

char* setstate(char* anonymous_var_nameX253);

int putenv(char* anonymous_var_nameX254);

int posix_openpt(int anonymous_var_nameX255);

int grantpt(int anonymous_var_nameX256);

int unlockpt(int anonymous_var_nameX257);

char* ptsname(int anonymous_var_nameX258);

char* l64a(long anonymous_var_nameX259);

long a64l(const char* anonymous_var_nameX260);

void setkey(const char* anonymous_var_nameX261);

double drand48();

double erand48(unsigned short int anonymous_var_nameX262[3]);

long int lrand48();

long int nrand48(unsigned short int anonymous_var_nameX263[3]);

long mrand48();

long jrand48(unsigned short int anonymous_var_nameX264[3]);

void srand48(long anonymous_var_nameX265);

unsigned short int* seed48(unsigned short int anonymous_var_nameX266[3]);

void lcong48(unsigned short int anonymous_var_nameX267[7]);

void* alloca(unsigned long int anonymous_var_nameX268);

char* mktemp(char* anonymous_var_nameX269);

int mkstemps(char* anonymous_var_nameX270, int anonymous_var_nameX271);

int mkostemps(char* anonymous_var_nameX272, int anonymous_var_nameX273, int anonymous_var_nameX274);

void* valloc(unsigned long int anonymous_var_nameX275);

void* memalign(unsigned long int anonymous_var_nameX276, unsigned long int anonymous_var_nameX277);

int getloadavg(double* anonymous_var_nameX278, int anonymous_var_nameX279);

int clearenv();

void* reallocarray(void* anonymous_var_nameX280, unsigned long int anonymous_var_nameX281, unsigned long int anonymous_var_nameX282);

void qsort_r(void* anonymous_var_nameX283, unsigned long int anonymous_var_nameX284, unsigned long int anonymous_var_nameX285, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX289);

void* memcpy(void* anonymous_var_nameX290, const void* anonymous_var_nameX291, unsigned long int anonymous_var_nameX292);

void* memmove(void* anonymous_var_nameX293, const void* anonymous_var_nameX294, unsigned long int anonymous_var_nameX295);

void* memset(void* anonymous_var_nameX296, int anonymous_var_nameX297, unsigned long int anonymous_var_nameX298);

int memcmp(const void* anonymous_var_nameX299, const void* anonymous_var_nameX300, unsigned long int anonymous_var_nameX301);

void* memchr(const void* anonymous_var_nameX302, int anonymous_var_nameX303, unsigned long int anonymous_var_nameX304);

char* strcpy(char* anonymous_var_nameX305, const char* anonymous_var_nameX306);

char* strncpy(char* anonymous_var_nameX307, const char* anonymous_var_nameX308, unsigned long int anonymous_var_nameX309);

char* strcat(char* anonymous_var_nameX310, const char* anonymous_var_nameX311);

char* strncat(char* anonymous_var_nameX312, const char* anonymous_var_nameX313, unsigned long int anonymous_var_nameX314);

int strcmp(const char* anonymous_var_nameX315, const char* anonymous_var_nameX316);

int strncmp(const char* anonymous_var_nameX317, const char* anonymous_var_nameX318, unsigned long int anonymous_var_nameX319);

int strcoll(const char* anonymous_var_nameX320, const char* anonymous_var_nameX321);

unsigned long int strxfrm(char* anonymous_var_nameX322, const char* anonymous_var_nameX323, unsigned long int anonymous_var_nameX324);

char* strchr(const char* anonymous_var_nameX325, int anonymous_var_nameX326);

char* strrchr(const char* anonymous_var_nameX327, int anonymous_var_nameX328);

unsigned long int strcspn(const char* anonymous_var_nameX329, const char* anonymous_var_nameX330);

unsigned long int strspn(const char* anonymous_var_nameX331, const char* anonymous_var_nameX332);

char* strpbrk(const char* anonymous_var_nameX333, const char* anonymous_var_nameX334);

char* strstr(const char* anonymous_var_nameX335, const char* anonymous_var_nameX336);

char* strtok(char* anonymous_var_nameX337, const char* anonymous_var_nameX338);

unsigned long int strlen(const char* anonymous_var_nameX339);

char* strerror(int anonymous_var_nameX340);

int bcmp(const void* anonymous_var_nameX341, const void* anonymous_var_nameX342, unsigned long int anonymous_var_nameX343);

void bcopy(const void* anonymous_var_nameX344, void* anonymous_var_nameX345, unsigned long int anonymous_var_nameX346);

void bzero(void* anonymous_var_nameX347, unsigned long int anonymous_var_nameX348);

char* index(const char* anonymous_var_nameX349, int anonymous_var_nameX350);

char* rindex(const char* anonymous_var_nameX351, int anonymous_var_nameX352);

int ffs(int anonymous_var_nameX353);

int ffsl(long anonymous_var_nameX354);

int ffsll(long long anonymous_var_nameX355);

int strcasecmp(const char* anonymous_var_nameX356, const char* anonymous_var_nameX357);

int strncasecmp(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359, unsigned long int anonymous_var_nameX360);

int strcasecmp_l(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362, struct __locale_struct* anonymous_var_nameX363);

int strncasecmp_l(const char* anonymous_var_nameX364, const char* anonymous_var_nameX365, unsigned long int anonymous_var_nameX366, struct __locale_struct* anonymous_var_nameX367);

char* strtok_r(char* anonymous_var_nameX368, const char* anonymous_var_nameX369, char** anonymous_var_nameX370);

int strerror_r(int anonymous_var_nameX371, char* anonymous_var_nameX372, unsigned long int anonymous_var_nameX373);

char* stpcpy(char* anonymous_var_nameX374, const char* anonymous_var_nameX375);

char* stpncpy(char* anonymous_var_nameX376, const char* anonymous_var_nameX377, unsigned long int anonymous_var_nameX378);

unsigned long int strnlen(const char* anonymous_var_nameX379, unsigned long int anonymous_var_nameX380);

char* strdup(const char* anonymous_var_nameX381);

char* strndup(const char* anonymous_var_nameX382, unsigned long int anonymous_var_nameX383);

char* strsignal(int anonymous_var_nameX384);

char* strerror_l(int anonymous_var_nameX385, struct __locale_struct* anonymous_var_nameX386);

int strcoll_l(const char* anonymous_var_nameX387, const char* anonymous_var_nameX388, struct __locale_struct* anonymous_var_nameX389);

unsigned long int strxfrm_l(char* anonymous_var_nameX390, const char* anonymous_var_nameX391, unsigned long int anonymous_var_nameX392, struct __locale_struct* anonymous_var_nameX393);

void* memmem(const void* anonymous_var_nameX394, unsigned long int anonymous_var_nameX395, const void* anonymous_var_nameX396, unsigned long int anonymous_var_nameX397);

void* memccpy(void* anonymous_var_nameX398, const void* anonymous_var_nameX399, int anonymous_var_nameX400, unsigned long int anonymous_var_nameX401);

char* strsep(char** anonymous_var_nameX402, const char* anonymous_var_nameX403);

unsigned long int strlcat(char* anonymous_var_nameX404, const char* anonymous_var_nameX405, unsigned long int anonymous_var_nameX406);

unsigned long int strlcpy(char* anonymous_var_nameX407, const char* anonymous_var_nameX408, unsigned long int anonymous_var_nameX409);

void explicit_bzero(void* anonymous_var_nameX410, unsigned long int anonymous_var_nameX411);

int askregvar(struct symbol* anonymous_var_nameX434, struct symbol* anonymous_var_nameX435);

void blkcopy(int anonymous_var_nameX436, int anonymous_var_nameX437, int anonymous_var_nameX438, int anonymous_var_nameX439, int anonymous_var_nameX440, int anonymous_var_nameX441[]);

unsigned int emitasm(struct node* anonymous_var_nameX442, int anonymous_var_nameX443);

int getregnum(struct node* anonymous_var_nameX444);

int mayrecalc(struct node* anonymous_var_nameX445);

int mkactual(int anonymous_var_nameX446, int anonymous_var_nameX447);

void mkauto(struct symbol* anonymous_var_nameX448);

struct symbol* mkreg(char* anonymous_var_nameX449, int anonymous_var_nameX450, int anonymous_var_nameX451, int anonymous_var_nameX452);

struct symbol* mkwildcard(struct symbol** anonymous_var_nameX453);

int move(struct node* anonymous_var_nameX454);

int notarget(struct node* anonymous_var_nameX455);

void parseflags(int anonymous_var_nameX456, char** anonymous_var_nameX457);

int range(struct node* anonymous_var_nameX458, int anonymous_var_nameX459, int anonymous_var_nameX460);

unsigned int regloc(struct symbol* anonymous_var_nameX461);

void rtarget(struct node* anonymous_var_nameX462, int anonymous_var_nameX463, struct symbol* anonymous_var_nameX464);

void setreg(struct node* anonymous_var_nameX465, struct symbol* anonymous_var_nameX466);

void spill(unsigned int anonymous_var_nameX467, int anonymous_var_nameX468, struct node* anonymous_var_nameX469);

int widens(struct node* anonymous_var_nameX470);

void blockbeg(struct anonymous_typeX9* anonymous_var_nameX471);

void blockend(struct anonymous_typeX9* anonymous_var_nameX472);

void emit(struct node* anonymous_var_nameX473);

struct node* gen(struct node* anonymous_var_nameX474);

unsigned int emitbin(struct node* anonymous_var_nameX475, int anonymous_var_nameX476);

void* allocate(unsigned long int n, unsigned int a);

void deallocate(unsigned int a);

void* newarray(unsigned long int m, unsigned long int n, unsigned int a);

void compound(int anonymous_var_nameX559, struct swtch* anonymous_var_nameX560, int anonymous_var_nameX561);

void defglobal(struct symbol* anonymous_var_nameX562, int anonymous_var_nameX563);

void finalize();

void program();

struct tree* vcall(struct symbol* func, struct type* ty, ...);

struct tree* addrof(struct tree* anonymous_var_nameX564);

struct tree* asgn(struct symbol* anonymous_var_nameX565, struct tree* anonymous_var_nameX566);

struct tree* asgntree(int anonymous_var_nameX567, struct tree* anonymous_var_nameX568, struct tree* anonymous_var_nameX569);

struct type* assign(struct type* anonymous_var_nameX570, struct tree* anonymous_var_nameX571);

struct tree* bittree(int anonymous_var_nameX572, struct tree* anonymous_var_nameX573, struct tree* anonymous_var_nameX574);

struct tree* call(struct tree* anonymous_var_nameX575, struct type* anonymous_var_nameX576, struct coord anonymous_var_nameX577);

struct tree* calltree(struct tree* anonymous_var_nameX578, struct type* anonymous_var_nameX579, struct tree* anonymous_var_nameX580, struct symbol* anonymous_var_nameX581);

struct tree* condtree(struct tree* anonymous_var_nameX582, struct tree* anonymous_var_nameX583, struct tree* anonymous_var_nameX584);

struct tree* cnsttree(struct type* anonymous_var_nameX585, ...);

struct tree* consttree(int anonymous_var_nameX586, struct type* anonymous_var_nameX587);

struct tree* eqtree(int anonymous_var_nameX588, struct tree* anonymous_var_nameX589, struct tree* anonymous_var_nameX590);

int iscallb(struct tree* anonymous_var_nameX591);

struct tree* shtree(int anonymous_var_nameX592, struct tree* anonymous_var_nameX593, struct tree* anonymous_var_nameX594);

void typeerror(int anonymous_var_nameX595, struct tree* anonymous_var_nameX596, struct tree* anonymous_var_nameX597);

void test(int tok, char set[]);

void expect(int tok);

void skipto(int tok, char set[]);

void error(const char* anonymous_var_nameX598, ...);

int fatal(const char* anonymous_var_nameX599, const char* anonymous_var_nameX600, int anonymous_var_nameX601);

void warning(const char* anonymous_var_nameX602, ...);

void attach(void (*anonymous_var_nameX606)(void*,void*,void*), void* anonymous_var_nameX607, struct list** anonymous_var_nameX608);

void apply(struct list* event, void* arg1, void* arg2);

struct tree* retype(struct tree* p, struct type* ty);

struct tree* rightkid(struct tree* p);

int hascall(struct tree* p);

struct type* binary(struct type* anonymous_var_nameX609, struct type* anonymous_var_nameX610);

struct tree* cast(struct tree* anonymous_var_nameX611, struct type* anonymous_var_nameX612);

struct tree* cond(struct tree* anonymous_var_nameX613);

struct tree* expr0(int anonymous_var_nameX614);

struct tree* expr(int anonymous_var_nameX615);

struct tree* expr1(int anonymous_var_nameX616);

struct tree* field(struct tree* anonymous_var_nameX617, const char* anonymous_var_nameX618);

char* funcname(struct tree* anonymous_var_nameX619);

struct tree* idtree(struct symbol* anonymous_var_nameX620);

struct tree* incr(int anonymous_var_nameX621, struct tree* anonymous_var_nameX622, struct tree* anonymous_var_nameX623);

struct tree* lvalue(struct tree* anonymous_var_nameX624);

struct tree* nullcall(struct type* anonymous_var_nameX625, struct symbol* anonymous_var_nameX626, struct tree* anonymous_var_nameX627, struct tree* anonymous_var_nameX628);

struct tree* pointer(struct tree* anonymous_var_nameX629);

struct tree* rvalue(struct tree* anonymous_var_nameX630);

struct tree* value(struct tree* anonymous_var_nameX631);

void defpointer(struct symbol* anonymous_var_nameX632);

struct type* initializer(struct type* anonymous_var_nameX633, int anonymous_var_nameX634);

void swtoseg(int anonymous_var_nameX635);

void input_init(int anonymous_var_nameX636, char* anonymous_var_nameX637[]);

void fillbuf();

void nextline();

int getchr();

int gettok();

void fprint(struct _IO_FILE* f, const char* fmt, ...);

char* stringf(const char* anonymous_var_nameX640, ...);

void check(struct node* anonymous_var_nameX641);

void print(const char* anonymous_var_nameX642, ...);

struct list* append(void* x, struct list* list);

int length(struct list* list);

void* ltov(struct list** list, unsigned int a);

void init(int anonymous_var_nameX643, char* anonymous_var_nameX644[]);

struct type* typename();

void checklab(struct symbol* p, void* cl);

struct type* enumdcl();

void main_init(int anonymous_var_nameX645, char* anonymous_var_nameX646[]);

int main(int anonymous_var_nameX647, char* anonymous_var_nameX648[]);

void vfprint(struct _IO_FILE* anonymous_var_nameX649, char* anonymous_var_nameX650, const char* anonymous_var_nameX651, va_list anonymous_var_nameX652);

void profInit(char* anonymous_var_nameX653);

int process(char* anonymous_var_nameX654);

int findfunc(char* anonymous_var_nameX655, char* anonymous_var_nameX656);

int findcount(char* anonymous_var_nameX657, int anonymous_var_nameX658, int anonymous_var_nameX659);

struct tree* constexpr(int anonymous_var_nameX660);

int intexpr(int anonymous_var_nameX661, int anonymous_var_nameX662);

struct tree* simplify(int anonymous_var_nameX663, struct type* anonymous_var_nameX664, struct tree* anonymous_var_nameX665, struct tree* anonymous_var_nameX666);

int ispow2(unsigned long int u);

int reachable(int anonymous_var_nameX667);

void addlocal(struct symbol* anonymous_var_nameX668);

void branch(int anonymous_var_nameX669);

struct code* code(int anonymous_var_nameX670);

void definelab(int anonymous_var_nameX671);

void definept(struct coord* anonymous_var_nameX672);

void equatelab(struct symbol* anonymous_var_nameX673, struct symbol* anonymous_var_nameX674);

struct node* jump(int anonymous_var_nameX675);

void retcode(struct tree* anonymous_var_nameX676);

void statement(int anonymous_var_nameX677, struct swtch* anonymous_var_nameX678, int anonymous_var_nameX679);

void swcode(struct swtch* anonymous_var_nameX680, int* anonymous_var_nameX681, int anonymous_var_nameX682, int anonymous_var_nameX683);

void swgen(struct swtch* anonymous_var_nameX684);

char* string(const char* str);

char* stringn(const char* str, int len);

char* stringd(long n);

struct symbol* relocate(const char* name, struct table* src, struct table* dst);

void use(struct symbol* p, struct coord src);

void locus(struct table* tp, struct coord* cp);

struct symbol* allsymbols(struct table* anonymous_var_nameX685);

struct symbol* constant(struct type* anonymous_var_nameX686, union value anonymous_var_nameX687);

void enterscope();

void exitscope();

struct symbol* findlabel(int anonymous_var_nameX688);

struct symbol* findtype(struct type* anonymous_var_nameX689);

void foreach(struct table* anonymous_var_nameX690, int anonymous_var_nameX691, void (*anonymous_lambda_var_nameZ6)(struct symbol*,void*), void* anonymous_var_nameX694);

struct symbol* genident(int anonymous_var_nameX695, struct type* anonymous_var_nameX696, int anonymous_var_nameX697);

int genlabel(int anonymous_var_nameX698);

struct symbol* install(const char* anonymous_var_nameX699, struct table** anonymous_var_nameX700, int anonymous_var_nameX701, int anonymous_var_nameX702);

struct symbol* intconst(int anonymous_var_nameX703);

struct symbol* lookup(const char* anonymous_var_nameX704, struct table* anonymous_var_nameX705);

struct symbol* mkstr(char* anonymous_var_nameX706);

struct symbol* mksymbol(int anonymous_var_nameX707, const char* anonymous_var_nameX708, struct type* anonymous_var_nameX709);

struct symbol* newtemp(int anonymous_var_nameX710, int anonymous_var_nameX711, int anonymous_var_nameX712);

struct table* newtable(int anonymous_var_nameX713);

struct table* table(struct table* anonymous_var_nameX714, int anonymous_var_nameX715);

struct symbol* temporary(int anonymous_var_nameX716, struct type* anonymous_var_nameX717);

char* vtoa(struct type* anonymous_var_nameX718, union value anonymous_var_nameX719);

void traceInit(char* anonymous_var_nameX720);

int nodeid(struct tree* anonymous_var_nameX721);

char* opname(int anonymous_var_nameX722);

int* printed(int anonymous_var_nameX723);

void printtree(struct tree* anonymous_var_nameX724, int anonymous_var_nameX725);

struct tree* root(struct tree* anonymous_var_nameX726);

struct tree* texpr(struct tree* (*anonymous_lambda_var_nameZ7)(int), int anonymous_var_nameX728, int anonymous_var_nameX729);

struct tree* tree(int anonymous_var_nameX730, struct type* anonymous_var_nameX731, struct tree* anonymous_var_nameX732, struct tree* anonymous_var_nameX733);

void type_init(int anonymous_var_nameX734, char* anonymous_var_nameX735[]);

struct type* signedint(struct type* anonymous_var_nameX736);

int hasproto(struct type* anonymous_var_nameX737);

void outtype(struct type* anonymous_var_nameX738, struct _IO_FILE* anonymous_var_nameX739);

void printdecl(struct symbol* p, struct type* ty);

void printproto(struct symbol* p, struct symbol* args[]);

char* typestring(struct type* ty, char* id);

struct field* fieldref(const char* name, struct type* ty);

struct type* array(struct type* anonymous_var_nameX740, int anonymous_var_nameX741, int anonymous_var_nameX742);

struct type* atop(struct type* anonymous_var_nameX743);

struct type* btot(int anonymous_var_nameX744, int anonymous_var_nameX745);

struct type* compose(struct type* anonymous_var_nameX746, struct type* anonymous_var_nameX747);

struct type* deref(struct type* anonymous_var_nameX748);

int eqtype(struct type* anonymous_var_nameX749, struct type* anonymous_var_nameX750, int anonymous_var_nameX751);

struct field* fieldlist(struct type* anonymous_var_nameX752);

struct type* freturn(struct type* anonymous_var_nameX753);

struct type* ftype(struct type* anonymous_var_nameX754, ...);

struct type* func(struct type* anonymous_var_nameX755, struct type** anonymous_var_nameX756, int anonymous_var_nameX757);

struct field* newfield(char* anonymous_var_nameX758, struct type* anonymous_var_nameX759, struct type* anonymous_var_nameX760);

struct type* newstruct(int anonymous_var_nameX761, char* anonymous_var_nameX762);

void printtype(struct type* anonymous_var_nameX763, int anonymous_var_nameX764);

struct type* promote(struct type* anonymous_var_nameX765);

struct type* ptr(struct type* anonymous_var_nameX766);

struct type* qual(int anonymous_var_nameX767, struct type* anonymous_var_nameX768);

void rmtypes(int anonymous_var_nameX769);

int ttob(struct type* anonymous_var_nameX770);

int variadic(struct type* anonymous_var_nameX771);

void walk(struct tree* tp, int tlab, int flab);

static struct node* node(int op, struct node* l, struct node* r, struct symbol* sym);
static struct dag* dagnode(int op, struct node* l, struct node* r, struct symbol* sym);
struct node* newnode(int op, struct node* l, struct node* r, struct symbol* sym);

static void killnodes(struct symbol* p);
static void reset();
struct node* listnodes(struct tree* tp, int tlab, int flab);

static void list(struct node* p);
static void labelnode(int lab);
static void unlist();
struct tree* cvtconst(struct tree* p);

void gencode(struct symbol* caller[], struct symbol* callee[]);

static void fixup(struct node* p);
static struct symbol* equated(struct symbol* p);
void emitcode();

static struct node* undag(struct node* forest);
static struct node* replace(struct node* p);
static struct node* prune(struct node* forest);
static struct node* visit(struct node* p, int listed);
static struct node* tmpnode(struct node* p);
static struct node* asgnnode(struct symbol* tmp, struct node* p);
void printdag(struct node* p, int fd);

static void printdag1(struct node* p, int fd, int lev);
static void printnode(struct node* p, int fd, int lev);
static void typestab(struct symbol* p, void* cl);
// inline function

// body function
void walk(struct tree* tp, int tlab, int flab){
void* __result_obj__;
_Bool _if_conditional1;
struct node* list_0;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&list_0, 0, sizeof(struct node*));
    # 42 "src/dag.c"
    listnodes(tp,tlab,flab);
    # 51 "src/dag.c"
    # 43 "src/dag.c"
    if(forest) {
        # 44 "src/dag.c"
        list_0=forest->link;
        # 45 "src/dag.c"
        forest->link=((void*)0);
        # 47 "src/dag.c"
        # 46 "src/dag.c"
        if(_if_conditional2=!IR->wants_dag&&errcnt==0,        _if_conditional2) {
            # 47 "src/dag.c"
            list_0=undag(list_0);
        }
        # 48 "src/dag.c"
        code(7)->u.forest=list_0;
        # 49 "src/dag.c"
        forest=((void*)0);
    }
    # 51 "src/dag.c"
    reset();
    # 52 "src/dag.c"
    deallocate(2);
}

static struct node* node(int op, struct node* l, struct node* r, struct symbol* sym){
void* __result_obj__;
int i_1;
struct dag* p_2;
_Bool _if_conditional3;
struct node* __result1__;
struct node* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_1, 0, sizeof(int));
memset(&p_2, 0, sizeof(struct dag*));
    # 56 "src/dag.c"
    # 57 "src/dag.c"
    # 59 "src/dag.c"
    i_1=((((op)>>4)&63)^((unsigned long int)sym>>2))&(((int)(sizeof(buckets)/sizeof((buckets)[0])))-1);
    # 63 "src/dag.c"
    for(    p_2=buckets[i_1];    p_2;    p_2=p_2->hlink    ){
        # 63 "src/dag.c"
        # 62 "src/dag.c"
        if(_if_conditional3=p_2->node.op==op&&p_2->node.syms[0]==sym&&p_2->node.kids[0]==l&&p_2->node.kids[1]==r,        _if_conditional3) {
            # 63 "src/dag.c"
            __result1__ = __result_obj__ = &p_2->node;
            return __result1__;
        }
    }
    # 64 "src/dag.c"
    p_2=dagnode(op,l,r,sym);
    # 65 "src/dag.c"
    p_2->hlink=buckets[i_1];
    # 66 "src/dag.c"
    buckets[i_1]=p_2;
    # 67 "src/dag.c"
    ++nodecount;
    # 68 "src/dag.c"
    __result2__ = __result_obj__ = &p_2->node;
    return __result2__;
}

static struct dag* dagnode(int op, struct node* l, struct node* r, struct symbol* sym){
void* __result_obj__;
struct dag* p_3;
_Bool _if_conditional4;
_Bool _if_conditional5;
struct dag* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_3, 0, sizeof(struct dag*));
    # 71 "src/dag.c"
    # 73 "src/dag.c"
    memset((((p_3))=allocate(sizeof(*((p_3))),((1)))),0,sizeof(*(p_3)));
    # 74 "src/dag.c"
    p_3->node.op=op;
    # 76 "src/dag.c"
    # 75 "src/dag.c"
    if(_if_conditional4=(p_3->node.kids[0]=l)!=((void*)0),    _if_conditional4) {
        # 76 "src/dag.c"
        ++l->count;
    }
    # 78 "src/dag.c"
    # 77 "src/dag.c"
    if(_if_conditional5=(p_3->node.kids[1]=r)!=((void*)0),    _if_conditional5) {
        # 78 "src/dag.c"
        ++r->count;
    }
    # 79 "src/dag.c"
    p_3->node.syms[0]=sym;
    # 80 "src/dag.c"
    __result3__ = __result_obj__ = p_3;
    return __result3__;
}

struct node* newnode(int op, struct node* l, struct node* r, struct symbol* sym){
void* __result_obj__;
struct node* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
    # 83 "src/dag.c"
    __result4__ = __result_obj__ = &dagnode(op,l,r,sym)->node;
    return __result4__;
}

static void killnodes(struct symbol* p){
void* __result_obj__;
int i_4;
struct dag** q_5;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_4, 0, sizeof(int));
memset(&q_5, 0, sizeof(struct dag**));
    # 86 "src/dag.c"
    # 87 "src/dag.c"
    # 97 "src/dag.c"
    for(    i_4=0;    i_4<((int)(sizeof(buckets)/sizeof((buckets)[0])));    i_4++    ){
        # 97 "src/dag.c"
        for(        q_5=&buckets[i_4];        *q_5;        ){
            # 97 "src/dag.c"
            # 93 "src/dag.c"
            if(_if_conditional6=(((*q_5)->node.op)&1008)==4<<4&&(!((((*q_5)->node.kids[0]->op)&1023)==16<<4+7||(((*q_5)->node.kids[0]->op)&1023)==18<<4+7||(((*q_5)->node.kids[0]->op)&1023)==17<<4+7)||(*q_5)->node.kids[0]->syms[0]==p),            _if_conditional6) {
                # 94 "src/dag.c"
                *q_5=(*q_5)->hlink;
                # 95 "src/dag.c"
                --nodecount;
            }
            else {
                # 97 "src/dag.c"
                q_5=&(*q_5)->hlink;
            }
        }
    }
}

static void reset(){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
    # 101 "src/dag.c"
    # 100 "src/dag.c"
    if(_if_conditional7=nodecount>0,    _if_conditional7) {
        # 101 "src/dag.c"
        memset(buckets,0,sizeof(buckets));
    }
    # 102 "src/dag.c"
    nodecount=0;
}

struct node* listnodes(struct tree* tp, int tlab, int flab){
void* __result_obj__;
struct node* l_7;
struct node* r_8;
int op_9;
_Bool _if_conditional8;
struct node* __result5__;
_Bool _if_conditional9;
struct node* __result6__;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
struct node* __result7__;
struct tree* q_10;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
struct type* ty_11;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _elif_conditional1;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _elif_conditional2;
struct tree* save_12;
_Bool _if_conditional23;
struct tree* arg0_13;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
struct tree* arg_14;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
struct tree* x_15;
struct field* f_16;
_Bool _if_conditional32;
unsigned int fmask_17;
unsigned int mask_18;
struct tree* q_19;
_Bool _if_conditional33;
_Bool _elif_conditional3;
_Bool _if_conditional34;
_Bool _if_conditional35;
struct type* ty_20;
_Bool _if_conditional36;
_Bool _if_conditional37;
struct tree* q_21;
_Bool _if_conditional38;
long n_22;
_Bool _elif_conditional4;
_Bool _if_conditional39;
struct node* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&op_9, 0, sizeof(int));
memset(&q_10, 0, sizeof(struct tree*));
memset(&ty_11, 0, sizeof(struct type*));
memset(&save_12, 0, sizeof(struct tree*));
memset(&arg0_13, 0, sizeof(struct tree*));
memset(&arg_14, 0, sizeof(struct tree*));
memset(&x_15, 0, sizeof(struct tree*));
memset(&f_16, 0, sizeof(struct field*));
memset(&fmask_17, 0, sizeof(unsigned int));
memset(&mask_18, 0, sizeof(unsigned int));
memset(&q_19, 0, sizeof(struct tree*));
memset(&ty_20, 0, sizeof(struct type*));
memset(&q_21, 0, sizeof(struct tree*));
memset(&n_22, 0, sizeof(long));
    # 105 "src/dag.c"
    struct node* p_6=((void*)0);
    # 106 "src/dag.c"
    # 108 "src/dag.c"
    ((void)((tlab==0||flab==0)||(__assert_fail("tlab == 0 || flab == 0","src/dag.c",108,"listnodes"),0)));
    # 110 "src/dag.c"
    # 109 "src/dag.c"
    if(_if_conditional8=tp==((void*)0),    _if_conditional8) {
        # 110 "src/dag.c"
        __result5__ = __result_obj__ = ((void*)0);
        return __result5__;
    }
    # 112 "src/dag.c"
    # 111 "src/dag.c"
    if(tp->node) {
        # 112 "src/dag.c"
        __result6__ = __result_obj__ = tp->node;
        return __result6__;
    }
    # 116 "src/dag.c"
    # 113 "src/dag.c"
    if(_if_conditional10=((((tp->type)->op>=15)?(tp->type)->type:(tp->type))->op==12),    _if_conditional10) {
        # 114 "src/dag.c"
        op_9=tp->op+((voidptype->size)<<10);
    }
    else {
        # 116 "src/dag.c"
        op_9=tp->op+((tp->type->size)<<10);
    }
    # 379 "src/dag.c"
    switch (((tp->op)&1008)) {
        # 118 "src/dag.c"
        case 38<<4:
        # 127 "src/dag.c"
        {
            # 118 "src/dag.c"
            # 118 "src/dag.c"
            if(_if_conditional11=depth++==0,            _if_conditional11) {
                # 118 "src/dag.c"
                reset();
            }
            # 127 "src/dag.c"
            # 119 "src/dag.c"
            if(flab) {
                # 120 "src/dag.c"
                listnodes(tp->kids[0],0,flab);
                # 121 "src/dag.c"
                listnodes(tp->kids[1],0,flab);
            }
            else {
                # 123 "src/dag.c"
                listnodes(tp->kids[0],0,flab=genlabel(1));
                # 124 "src/dag.c"
                listnodes(tp->kids[1],tlab,0);
                # 125 "src/dag.c"
                labelnode(flab);
            }
            # 127 "src/dag.c"
            depth--;
        }
        # 127 "src/dag.c"
        break;
        # 128 "src/dag.c"
        case 40<<4:
        # 140 "src/dag.c"
        {
            # 129 "src/dag.c"
            # 128 "src/dag.c"
            if(_if_conditional13=depth++==0,            _if_conditional13) {
                # 129 "src/dag.c"
                reset();
            }
            # 139 "src/dag.c"
            # 130 "src/dag.c"
            if(tlab) {
                # 131 "src/dag.c"
                listnodes(tp->kids[0],tlab,0);
                # 132 "src/dag.c"
                listnodes(tp->kids[1],tlab,0);
            }
            else {
                # 134 "src/dag.c"
                tlab=genlabel(1);
                # 135 "src/dag.c"
                listnodes(tp->kids[0],tlab,0);
                # 136 "src/dag.c"
                listnodes(tp->kids[1],0,flab);
                # 137 "src/dag.c"
                labelnode(tlab);
            }
            # 139 "src/dag.c"
            depth--;
        }
        # 140 "src/dag.c"
        break;
        # 141 "src/dag.c"
        case 39<<4:
        # 142 "src/dag.c"
        {
            # 141 "src/dag.c"
            __result7__ = __result_obj__ = listnodes(tp->kids[0],flab,tlab);
            return __result7__;
        }
        # 142 "src/dag.c"
        case 41<<4:
        # 165 "src/dag.c"
        {
            # 142 "src/dag.c"
            q_10=tp->kids[1];
            # 143 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",143,"listnodes"),0)));
            # 145 "src/dag.c"
            # 144 "src/dag.c"
            if(tp->u.sym) {
                # 145 "src/dag.c"
                addlocal(tp->u.sym);
            }
            # 146 "src/dag.c"
            flab=genlabel(2);
            # 147 "src/dag.c"
            listnodes(tp->kids[0],0,flab);
            # 148 "src/dag.c"
            ((void)((q_10&&q_10->op==42<<4)||(__assert_fail("q && q->op == RIGHT","src/dag.c",148,"listnodes"),0)));
            # 149 "src/dag.c"
            reset();
            # 150 "src/dag.c"
            listnodes(q_10->kids[0],0,0);
            # 155 "src/dag.c"
            # 151 "src/dag.c"
            if(_if_conditional16=forest->op==37<<4+8,            _if_conditional16) {
                # 152 "src/dag.c"
                equatelab(forest->syms[0],findlabel(flab+1));
                # 153 "src/dag.c"
                unlist();
            }
            # 155 "src/dag.c"
            list(jump(flab+1));
            # 156 "src/dag.c"
            labelnode(flab);
            # 157 "src/dag.c"
            listnodes(q_10->kids[1],0,0);
            # 162 "src/dag.c"
            # 158 "src/dag.c"
            if(_if_conditional17=forest->op==37<<4+8,            _if_conditional17) {
                # 159 "src/dag.c"
                equatelab(forest->syms[0],findlabel(flab+1));
                # 160 "src/dag.c"
                unlist();
            }
            # 162 "src/dag.c"
            labelnode(flab+1);
            # 165 "src/dag.c"
            # 164 "src/dag.c"
            if(tp->u.sym) {
                # 165 "src/dag.c"
                p_6=listnodes(idtree(tp->u.sym),0,0);
            }
        }
        # 165 "src/dag.c"
        break;
        # 166 "src/dag.c"
        case 1<<4:
        # 178 "src/dag.c"
        {
            # 166 "src/dag.c"
            ty_11=(((tp->type)->op>=15)?(tp->type)->type:(tp->type));
            # 167 "src/dag.c"
            ((void)((ty_11->u.sym)||(__assert_fail("ty->u.sym","src/dag.c",167,"listnodes"),0)));
            # 178 "src/dag.c"
            # 168 "src/dag.c"
            if(_if_conditional19=tlab||flab,            _if_conditional19) {
                # 169 "src/dag.c"
                ((void)((ty_11==inttype)||(__assert_fail("ty == inttype","src/dag.c",169,"listnodes"),0)));
                # 174 "src/dag.c"
                # 170 "src/dag.c"
                if(_if_conditional20=tlab&&tp->u.v.i!=0,                _if_conditional20) {
                    # 171 "src/dag.c"
                    list(jump(tlab));
                }
                # 172 "src/dag.c"
                else if(_elif_conditional1=flab&&tp->u.v.i==0,                _elif_conditional1) {
                    # 173 "src/dag.c"
                    list(jump(flab));
                }
            }
            # 175 "src/dag.c"
            else if(ty_11->u.sym->addressed) {
                # 176 "src/dag.c"
                p_6=listnodes(cvtconst(tp),0,0);
            }
            else {
                # 178 "src/dag.c"
                p_6=node(op_9,((void*)0),((void*)0),constant(ty_11,tp->u.v));
            }
        }
        # 178 "src/dag.c"
        break;
        # 179 "src/dag.c"
        case 42<<4:
        # 201 "src/dag.c"
        {
            # 201 "src/dag.c"
            # 184 "src/dag.c"
            if(_if_conditional21=tp->kids[0]&&tp->kids[1]&&((tp->kids[1]->op)&1008)==3<<4&&(((tp->kids[0]->op)&1008)==4<<4&&tp->kids[0]->kids[0]==tp->kids[1]->kids[0]||(tp->kids[0]->op==43<<4&&tp->kids[0]==tp->kids[1]->kids[0])),            _if_conditional21) {
                # 185 "src/dag.c"
                ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",185,"listnodes"),0)));
                # 197 "src/dag.c"
                # 186 "src/dag.c"
                if(_if_conditional22=((tp->kids[0]->op)&1008)==4<<4,                _if_conditional22) {
                    # 187 "src/dag.c"
                    p_6=listnodes(tp->kids[0],0,0);
                    # 188 "src/dag.c"
                    list(p_6);
                    # 189 "src/dag.c"
                    listnodes(tp->kids[1],0,0);
                }
                else {
                    # 192 "src/dag.c"
                    ((void)((((tp->kids[0]->kids[0]->op)&1008)==4<<4)||(__assert_fail("generic(tp->kids[0]->kids[0]->op) == INDIR","src/dag.c",192,"listnodes"),0)));
                    # 193 "src/dag.c"
                    list(listnodes(tp->kids[0]->kids[0],0,0));
                    # 194 "src/dag.c"
                    p_6=listnodes(tp->kids[0],0,0);
                    # 195 "src/dag.c"
                    listnodes(tp->kids[1],0,0);
                }
            }
            # 197 "src/dag.c"
            else if(_elif_conditional2=tp->kids[1],            _elif_conditional2) {
                # 198 "src/dag.c"
                listnodes(tp->kids[0],0,0);
                # 199 "src/dag.c"
                p_6=listnodes(tp->kids[1],tlab,flab);
            }
            else {
                # 201 "src/dag.c"
                p_6=listnodes(tp->kids[0],tlab,flab);
            }
        }
        # 201 "src/dag.c"
        break;
        # 202 "src/dag.c"
        case 36<<4:
        # 207 "src/dag.c"
        {
            # 202 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",202,"listnodes"),0)));
            # 203 "src/dag.c"
            ((void)((tp->u.sym==0)||(__assert_fail("tp->u.sym == 0","src/dag.c",203,"listnodes"),0)));
            # 204 "src/dag.c"
            ((void)((tp->kids[0])||(__assert_fail("tp->kids[0]","src/dag.c",204,"listnodes"),0)));
            # 205 "src/dag.c"
            l_7=listnodes(tp->kids[0],0,0);
            # 206 "src/dag.c"
            list(newnode(36<<4+8,l_7,((void*)0),((void*)0)));
            # 207 "src/dag.c"
            reset();
        }
        # 207 "src/dag.c"
        break;
        # 208 "src/dag.c"
        case 13<<4:
        # 235 "src/dag.c"
        {
            # 208 "src/dag.c"
            save_12=firstarg;
            # 209 "src/dag.c"
            firstarg=((void*)0);
            # 210 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",210,"listnodes"),0)));
            # 227 "src/dag.c"
            # 211 "src/dag.c"
            if(_if_conditional23=tp->op==13<<4+9&&!IR->wants_callb,            _if_conditional23) {
                # 213 "src/dag.c"
                arg0_13=tree(2<<4+7,tp->kids[1]->type,tp->kids[1],((void*)0));
                # 215 "src/dag.c"
                # 214 "src/dag.c"
                if(IR->left_to_right) {
                    # 215 "src/dag.c"
                    firstarg=arg0_13;
                }
                # 216 "src/dag.c"
                l_7=listnodes(tp->kids[0],0,0);
                # 221 "src/dag.c"
                # 217 "src/dag.c"
                if(_if_conditional25=!IR->left_to_right||firstarg,                _if_conditional25) {
                    # 218 "src/dag.c"
                    firstarg=((void*)0);
                    # 219 "src/dag.c"
                    listnodes(arg0_13,0,0);
                }
                # 221 "src/dag.c"
                p_6=newnode(13<<4+8,l_7,((void*)0),((void*)0));
            }
            else {
                # 223 "src/dag.c"
                l_7=listnodes(tp->kids[0],0,0);
                # 224 "src/dag.c"
                r_8=listnodes(tp->kids[1],0,0);
                # 225 "src/dag.c"
                p_6=newnode(tp->op==13<<4+9?tp->op:op_9,l_7,r_8,((void*)0));
            }
            # 227 "src/dag.c"
            memset((((p_6->syms[0]))=allocate(sizeof(*((p_6->syms[0]))),((1)))),0,sizeof(*(p_6->syms[0])));
            # 228 "src/dag.c"
            ((void)((((((tp->kids[0]->type)->op>=15)?(tp->kids[0]->type)->type:(tp->kids[0]->type))->op==7))||(__assert_fail("isptr(tp->kids[0]->type)","src/dag.c",228,"listnodes"),0)));
            # 229 "src/dag.c"
            ((void)((((((tp->kids[0]->type->type)->op>=15)?(tp->kids[0]->type->type)->type:(tp->kids[0]->type->type))->op==11))||(__assert_fail("isfunc(tp->kids[0]->type->type)","src/dag.c",229,"listnodes"),0)));
            # 230 "src/dag.c"
            p_6->syms[0]->type=tp->kids[0]->type->type;
            # 231 "src/dag.c"
            list(p_6);
            # 232 "src/dag.c"
            reset();
            # 233 "src/dag.c"
            cfunc->u.f.ncalls++;
            # 234 "src/dag.c"
            firstarg=save_12;
        }
        # 235 "src/dag.c"
        break;
        # 236 "src/dag.c"
        case 2<<4:
        # 249 "src/dag.c"
        {
            # 236 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",236,"listnodes"),0)));
            # 238 "src/dag.c"
            # 237 "src/dag.c"
            if(IR->left_to_right) {
                # 238 "src/dag.c"
                listnodes(tp->kids[1],0,0);
            }
            # 244 "src/dag.c"
            # 239 "src/dag.c"
            if(firstarg) {
                # 240 "src/dag.c"
                arg_14=firstarg;
                # 241 "src/dag.c"
                firstarg=((void*)0);
                # 242 "src/dag.c"
                listnodes(arg_14,0,0);
            }
            # 244 "src/dag.c"
            l_7=listnodes(tp->kids[0],0,0);
            # 245 "src/dag.c"
            list(newnode(tp->op==2<<4+9?tp->op:op_9,l_7,((void*)0),((void*)0)));
            # 246 "src/dag.c"
            forest->syms[0]=intconst(tp->type->size);
            # 247 "src/dag.c"
            forest->syms[1]=intconst(tp->type->align);
            # 249 "src/dag.c"
            # 248 "src/dag.c"
            if(_if_conditional28=!IR->left_to_right,            _if_conditional28) {
                # 249 "src/dag.c"
                listnodes(tp->kids[1],0,0);
            }
        }
        # 249 "src/dag.c"
        break;
        # 250 "src/dag.c"
        case 30<<4:
        # 250 "src/dag.c"
        case 35<<4:
        # 250 "src/dag.c"
        case 32<<4:
        # 250 "src/dag.c"
        case 31<<4:
        # 251 "src/dag.c"
        case 33<<4:
        # 251 "src/dag.c"
        case 34<<4:
        # 273 "src/dag.c"
        {
            # 251 "src/dag.c"
            ((void)((tp->u.sym==0)||(__assert_fail("tp->u.sym == 0","src/dag.c",251,"listnodes"),0)));
            # 252 "src/dag.c"
            ((void)((errcnt||tlab||flab)||(__assert_fail("errcnt || tlab || flab","src/dag.c",252,"listnodes"),0)));
            # 253 "src/dag.c"
            l_7=listnodes(tp->kids[0],0,0);
            # 254 "src/dag.c"
            r_8=listnodes(tp->kids[1],0,0);
            # 255 "src/dag.c"
            ((void)((errcnt||((l_7->op)&~1008)==((r_8->op)&~1008))||(__assert_fail("errcnt || opkind(l->op) == opkind(r->op)","src/dag.c",255,"listnodes"),0)));
            # 256 "src/dag.c"
            ((void)((errcnt||((op_9)&15)==((l_7->op)&15))||(__assert_fail("errcnt || optype(op) == optype(l->op)","src/dag.c",256,"listnodes"),0)));
            # 272 "src/dag.c"
            # 257 "src/dag.c"
            if(tlab) {
                # 259 "src/dag.c"
                ((void)((flab==0)||(__assert_fail("flab == 0","src/dag.c",258,"listnodes"),0))),list(newnode(((tp->op)&1008)+((l_7->op)&~1008),l_7,r_8,findlabel(tlab)));
            }
            # 260 "src/dag.c"
            else if(flab) {
                # 270 "src/dag.c"
                switch (((tp->op)&1008)) {
                    # 262 "src/dag.c"
                    case 30<<4:
                    # 262 "src/dag.c"
                    op_9=35<<4;
                    # 262 "src/dag.c"
                    break;
                    # 263 "src/dag.c"
                    case 35<<4:
                    # 263 "src/dag.c"
                    op_9=30<<4;
                    # 263 "src/dag.c"
                    break;
                    # 264 "src/dag.c"
                    case 32<<4:
                    # 264 "src/dag.c"
                    op_9=33<<4;
                    # 264 "src/dag.c"
                    break;
                    # 265 "src/dag.c"
                    case 34<<4:
                    # 265 "src/dag.c"
                    op_9=31<<4;
                    # 265 "src/dag.c"
                    break;
                    # 266 "src/dag.c"
                    case 31<<4:
                    # 266 "src/dag.c"
                    op_9=34<<4;
                    # 266 "src/dag.c"
                    break;
                    # 267 "src/dag.c"
                    case 33<<4:
                    # 267 "src/dag.c"
                    op_9=32<<4;
                    # 267 "src/dag.c"
                    break;
                    # 269 "src/dag.c"
                    default:
                    # 268 "src/dag.c"
                    ((void)((0)||(__assert_fail("0","src/dag.c",268,"listnodes"),0)));
                }
                # 270 "src/dag.c"
                list(newnode(op_9+((l_7->op)&~1008),l_7,r_8,findlabel(flab)));
            }
            # 273 "src/dag.c"
            # 272 "src/dag.c"
            if(_if_conditional30=forest&&forest->syms[0],            _if_conditional30) {
                # 273 "src/dag.c"
                forest->syms[0]->ref++;
            }
        }
        # 273 "src/dag.c"
        break;
        # 274 "src/dag.c"
        case 3<<4:
        # 318 "src/dag.c"
        {
            # 274 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",274,"listnodes"),0)));
            # 310 "src/dag.c"
            # 275 "src/dag.c"
            if(_if_conditional31=tp->kids[0]->op==43<<4,            _if_conditional31) {
                # 276 "src/dag.c"
                x_15=tp->kids[0]->kids[0];
                # 277 "src/dag.c"
                f_16=tp->kids[0]->u.field;
                # 278 "src/dag.c"
                ((void)((((x_15->op)&1008)==4<<4)||(__assert_fail("generic(x->op) == INDIR","src/dag.c",278,"listnodes"),0)));
                # 279 "src/dag.c"
                reset();
                # 280 "src/dag.c"
                l_7=listnodes(lvalue(x_15),0,0);
                # 306 "src/dag.c"
                # 281 "src/dag.c"
                if(_if_conditional32=(f_16)->bitsize<8*f_16->type->size,                _if_conditional32) {
                    # 282 "src/dag.c"
                    fmask_17=(~((f_16)->bitsize<8*unsignedtype->size?~0<<(f_16)->bitsize:0));
                    # 283 "src/dag.c"
                    mask_18=fmask_17<<((f_16)->lsb-1);
                    # 284 "src/dag.c"
                    q_19=tp->kids[1];
                    # 300 "src/dag.c"
                    # 286 "src/dag.c"
                    if(_if_conditional33=q_19->op==1<<4+5&&q_19->u.v.i==0||q_19->op==1<<4+6&&q_19->u.v.u==0,                    _if_conditional33) {
                        # 287 "src/dag.c"
                        q_19=bittree(24<<4,x_15,cnsttree(unsignedtype,(unsigned long int)~mask_18));
                    }
                    # 289 "src/dag.c"
                    else if(_elif_conditional3=q_19->op==1<<4+5&&(q_19->u.v.i&fmask_17)==fmask_17||q_19->op==1<<4+6&&(q_19->u.v.u&fmask_17)==fmask_17,                    _elif_conditional3) {
                        # 290 "src/dag.c"
                        q_19=bittree(26<<4,x_15,cnsttree(unsignedtype,(unsigned long int)mask_18));
                    }
                    else {
                        # 292 "src/dag.c"
                        listnodes(q_19,0,0);
                        # 298 "src/dag.c"
                        q_19=bittree(26<<4,bittree(24<<4,rvalue(lvalue(x_15)),cnsttree(unsignedtype,(unsigned long int)~mask_18)),bittree(24<<4,shtree(21<<4,cast(q_19,unsignedtype),cnsttree(unsignedtype,(unsigned long int)((f_16)->lsb-1))),cnsttree(unsignedtype,(unsigned long int)mask_18)));
                    }
                    # 300 "src/dag.c"
                    r_8=listnodes(q_19,0,0);
                    # 301 "src/dag.c"
                    op_9=3<<4+ttob(q_19->type);
                }
                else {
                    # 303 "src/dag.c"
                    r_8=listnodes(tp->kids[1],0,0);
                    # 304 "src/dag.c"
                    op_9=3<<4+ttob(tp->kids[1]->type);
                }
            }
            else {
                # 307 "src/dag.c"
                l_7=listnodes(tp->kids[0],0,0);
                # 308 "src/dag.c"
                r_8=listnodes(tp->kids[1],0,0);
            }
            # 310 "src/dag.c"
            list(newnode(tp->op==3<<4+9?tp->op:op_9,l_7,r_8,((void*)0)));
            # 311 "src/dag.c"
            forest->syms[0]=intconst(tp->kids[1]->type->size);
            # 312 "src/dag.c"
            forest->syms[1]=intconst(tp->kids[1]->type->align);
            # 317 "src/dag.c"
            # 314 "src/dag.c"
            if(_if_conditional34=(((tp->kids[0]->op)&1023)==16<<4+7||((tp->kids[0]->op)&1023)==18<<4+7||((tp->kids[0]->op)&1023)==17<<4+7)&&!tp->kids[0]->u.sym->computed,            _if_conditional34) {
                # 315 "src/dag.c"
                killnodes(tp->kids[0]->u.sym);
            }
            else {
                # 317 "src/dag.c"
                reset();
            }
            # 318 "src/dag.c"
            p_6=listnodes(tp->kids[1],0,0);
        }
        # 318 "src/dag.c"
        break;
        # 319 "src/dag.c"
        case 26<<4:
        # 319 "src/dag.c"
        case 24<<4:
        # 320 "src/dag.c"
        case 27<<4:
        # 320 "src/dag.c"
        case 19<<4:
        # 320 "src/dag.c"
        case 20<<4:
        # 321 "src/dag.c"
        case 23<<4:
        # 321 "src/dag.c"
        case 21<<4:
        # 324 "src/dag.c"
        {
            # 321 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",321,"listnodes"),0)));
            # 322 "src/dag.c"
            l_7=listnodes(tp->kids[0],0,0);
            # 323 "src/dag.c"
            r_8=listnodes(tp->kids[1],0,0);
            # 324 "src/dag.c"
            p_6=node(op_9,l_7,r_8,((void*)0));
        }
        # 324 "src/dag.c"
        break;
        # 325 "src/dag.c"
        case 28<<4:
        # 326 "src/dag.c"
        case 29<<4:
        # 326 "src/dag.c"
        case 22<<4:
        # 333 "src/dag.c"
        {
            # 326 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",326,"listnodes"),0)));
            # 327 "src/dag.c"
            l_7=listnodes(tp->kids[0],0,0);
            # 328 "src/dag.c"
            r_8=listnodes(tp->kids[1],0,0);
            # 329 "src/dag.c"
            p_6=node(op_9,l_7,r_8,((void*)0));
            # 333 "src/dag.c"
            # 330 "src/dag.c"
            if(_if_conditional35=IR->mulops_calls&&((((tp->type)->op>=15)?(tp->type)->type:(tp->type))->op==5||(((tp->type)->op>=15)?(tp->type)->type:(tp->type))->op==6),            _if_conditional35) {
                # 331 "src/dag.c"
                list(p_6);
                # 332 "src/dag.c"
                cfunc->u.f.ncalls++;
            }
        }
        # 333 "src/dag.c"
        break;
        # 334 "src/dag.c"
        case 15<<4:
        # 336 "src/dag.c"
        {
            # 334 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",334,"listnodes"),0)));
            # 335 "src/dag.c"
            l_7=listnodes(tp->kids[0],0,0);
            # 336 "src/dag.c"
            list(newnode(op_9,l_7,((void*)0),((void*)0)));
        }
        # 336 "src/dag.c"
        break;
        # 337 "src/dag.c"
        case 7<<4:
        # 337 "src/dag.c"
        case 8<<4:
        # 338 "src/dag.c"
        case 9<<4:
        # 338 "src/dag.c"
        case 11<<4:
        # 342 "src/dag.c"
        {
            # 338 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",338,"listnodes"),0)));
            # 339 "src/dag.c"
            ((void)((((tp->kids[0]->op)&15)!=((tp->op)&15)||tp->kids[0]->type->size!=tp->type->size)||(__assert_fail("optype(tp->kids[0]->op) != optype(tp->op) || tp->kids[0]->type->size != tp->type->size","src/dag.c",339,"listnodes"),0)));
            # 340 "src/dag.c"
            l_7=listnodes(tp->kids[0],0,0);
            # 341 "src/dag.c"
            p_6=node(op_9,l_7,((void*)0),intconst(tp->kids[0]->type->size));
        }
        # 342 "src/dag.c"
        break;
        # 344 "src/dag.c"
        case 25<<4:
        # 344 "src/dag.c"
        case 12<<4:
        # 346 "src/dag.c"
        {
            # 344 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",344,"listnodes"),0)));
            # 345 "src/dag.c"
            l_7=listnodes(tp->kids[0],0,0);
            # 346 "src/dag.c"
            p_6=node(op_9,l_7,((void*)0),((void*)0));
        }
        # 346 "src/dag.c"
        break;
        # 347 "src/dag.c"
        case 4<<4:
        # 356 "src/dag.c"
        {
            # 347 "src/dag.c"
            ty_20=tp->kids[0]->type;
            # 348 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",348,"listnodes"),0)));
            # 349 "src/dag.c"
            l_7=listnodes(tp->kids[0],0,0);
            # 351 "src/dag.c"
            # 350 "src/dag.c"
            if(_if_conditional36=((((ty_20)->op>=15)?(ty_20)->type:(ty_20))->op==7),            _if_conditional36) {
                # 351 "src/dag.c"
                ty_20=(((ty_20)->op>=15)?(ty_20)->type:(ty_20))->type;
            }
            # 356 "src/dag.c"
            # 353 "src/dag.c"
            if(_if_conditional37=((ty_20)->op==16||(ty_20)->op==15+16)||(((((ty_20)->op>=15)?(ty_20)->type:(ty_20))->op==9||(((ty_20)->op>=15)?(ty_20)->type:(ty_20))->op==10)&&(((ty_20)->op>=15)?(ty_20)->type:(ty_20))->u.sym->u.s.vfields),            _if_conditional37) {
                # 354 "src/dag.c"
                p_6=newnode(tp->op==4<<4+9?tp->op:op_9,l_7,((void*)0),((void*)0));
            }
            else {
                # 356 "src/dag.c"
                p_6=node(tp->op==4<<4+9?tp->op:op_9,l_7,((void*)0),((void*)0));
            }
        }
        # 356 "src/dag.c"
        break;
        # 357 "src/dag.c"
        case 43<<4:
        # 368 "src/dag.c"
        {
            # 357 "src/dag.c"
            q_21=tp->kids[0];
            # 368 "src/dag.c"
            # 358 "src/dag.c"
            if(_if_conditional38=tp->type==inttype,            _if_conditional38) {
                # 359 "src/dag.c"
                n_22=(8*(tp->u.field)->type->size-(tp->u.field)->bitsize-((tp->u.field)->lsb-1));
                # 362 "src/dag.c"
                q_21=shtree(23<<4,shtree(21<<4,q_21,cnsttree(inttype,n_22)),cnsttree(inttype,n_22+((tp->u.field)->lsb-1)));
            }
            # 363 "src/dag.c"
            else if(_elif_conditional4=(tp->u.field)->bitsize<8*tp->u.field->type->size,            _elif_conditional4) {
                # 366 "src/dag.c"
                q_21=bittree(24<<4,shtree(23<<4,q_21,cnsttree(inttype,(long)((tp->u.field)->lsb-1))),cnsttree(unsignedtype,(unsigned long int)(~((tp->u.field)->bitsize<8*unsignedtype->size?~0<<(tp->u.field)->bitsize:0))));
            }
            # 367 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",367,"listnodes"),0)));
            # 368 "src/dag.c"
            p_6=listnodes(q_21,0,0);
        }
        # 368 "src/dag.c"
        break;
        # 370 "src/dag.c"
        case 16<<4:
        # 370 "src/dag.c"
        case 17<<4:
        # 372 "src/dag.c"
        {
            # 370 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",370,"listnodes"),0)));
            # 371 "src/dag.c"
            p_6=node(tp->op+((voidptype->size)<<10),((void*)0),((void*)0),tp->u.sym);
        }
        # 372 "src/dag.c"
        break;
        # 373 "src/dag.c"
        case 18<<4:
        # 376 "src/dag.c"
        {
            # 373 "src/dag.c"
            ((void)((tlab==0&&flab==0)||(__assert_fail("tlab == 0 && flab == 0","src/dag.c",373,"listnodes"),0)));
            # 375 "src/dag.c"
            # 374 "src/dag.c"
            if(tp->u.sym->generated) {
                # 375 "src/dag.c"
                addlocal(tp->u.sym);
            }
            # 376 "src/dag.c"
            p_6=node(tp->op+((voidptype->size)<<10),((void*)0),((void*)0),tp->u.sym);
        }
        # 376 "src/dag.c"
        break;
        # 378 "src/dag.c"
        default:
        # 377 "src/dag.c"
        ((void)((0)||(__assert_fail("0","src/dag.c",377,"listnodes"),0)));
    }
    # 379 "src/dag.c"
    tp->node=p_6;
    # 380 "src/dag.c"
    __result8__ = __result_obj__ = p_6;
    return __result8__;
}

static void list(struct node* p){
void* __result_obj__;
_Bool _if_conditional40;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
    # 391 "src/dag.c"
    # 383 "src/dag.c"
    if(_if_conditional40=p&&p->link==((void*)0),    _if_conditional40) {
        # 388 "src/dag.c"
        # 384 "src/dag.c"
        if(forest) {
            # 385 "src/dag.c"
            p->link=forest->link;
            # 386 "src/dag.c"
            forest->link=p;
        }
        else {
            # 388 "src/dag.c"
            p->link=p;
        }
        # 389 "src/dag.c"
        forest=p;
    }
}

static void labelnode(int lab){
void* __result_obj__;
_Bool _if_conditional42;
memset(&__result_obj__, 0, sizeof(void*));
    # 393 "src/dag.c"
    ((void)((lab)||(__assert_fail("lab","src/dag.c",393,"labelnode"),0)));
    # 397 "src/dag.c"
    # 394 "src/dag.c"
    if(_if_conditional42=forest&&forest->op==37<<4+8,    _if_conditional42) {
        # 395 "src/dag.c"
        equatelab(findlabel(lab),forest->syms[0]);
    }
    else {
        # 397 "src/dag.c"
        list(newnode(37<<4+8,((void*)0),((void*)0),findlabel(lab)));
    }
    # 398 "src/dag.c"
    reset();
}

static void unlist(){
void* __result_obj__;
struct node* p_23;
_Bool _while_condtional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_23, 0, sizeof(struct node*));
    # 401 "src/dag.c"
    # 403 "src/dag.c"
    ((void)((forest)||(__assert_fail("forest","src/dag.c",403,"unlist"),0)));
    # 404 "src/dag.c"
    ((void)((forest!=forest->link)||(__assert_fail("forest != forest->link","src/dag.c",404,"unlist"),0)));
    # 405 "src/dag.c"
    p_23=forest->link;
    # 407 "src/dag.c"
    while(_while_condtional1=p_23->link!=forest,    _while_condtional1) {
        # 407 "src/dag.c"
        p_23=p_23->link;
    }
    # 408 "src/dag.c"
    p_23->link=forest->link;
    # 409 "src/dag.c"
    forest=p_23;
}

struct tree* cvtconst(struct tree* p){
void* __result_obj__;
struct symbol* q_24;
struct tree* e_25;
_Bool _if_conditional43;
_Bool _if_conditional44;
struct tree* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&q_24, 0, sizeof(struct symbol*));
memset(&e_25, 0, sizeof(struct tree*));
    # 412 "src/dag.c"
    q_24=constant(p->type,p->u.v);
    # 413 "src/dag.c"
    # 416 "src/dag.c"
    # 415 "src/dag.c"
    if(_if_conditional43=q_24->u.c.loc==((void*)0),    _if_conditional43) {
        # 416 "src/dag.c"
        q_24->u.c.loc=genident(81,p->type,3);
    }
    # 421 "src/dag.c"
    # 417 "src/dag.c"
    if(_if_conditional44=((((p->type)->op>=15)?(p->type)->type:(p->type))->op==12),    _if_conditional44) {
        # 418 "src/dag.c"
        e_25=simplify(16<<4,atop(p->type),((void*)0),((void*)0));
        # 419 "src/dag.c"
        e_25->u.sym=q_24->u.c.loc;
    }
    else {
        # 421 "src/dag.c"
        e_25=idtree(q_24->u.c.loc);
    }
    # 422 "src/dag.c"
    __result9__ = __result_obj__ = e_25;
    return __result9__;
}

void gencode(struct symbol* caller[], struct symbol* callee[]){
void* __result_obj__;
struct code* cp_26;
struct coord save_27;
_Bool _if_conditional45;
_Bool _if_conditional46;
int i_28;
struct symbol* p_29;
struct symbol* q_30;
_Bool _if_conditional47;
_Bool _if_conditional48;
int i_31;
struct symbol* p_32;
struct symbol* q_33;
_Bool _if_conditional49;
struct symbol** p_34;
_Bool _if_conditional50;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&cp_26, 0, sizeof(struct code*));
memset(&save_27, 0, sizeof(struct coord));
memset(&i_28, 0, sizeof(int));
memset(&i_31, 0, sizeof(int));
memset(&p_34, 0, sizeof(struct symbol**));
    # 425 "src/dag.c"
    # 426 "src/dag.c"
    # 429 "src/dag.c"
    # 428 "src/dag.c"
    if(_if_conditional45=prunetemps==-1,    _if_conditional45) {
        # 429 "src/dag.c"
        prunetemps=!IR->wants_dag;
    }
    # 430 "src/dag.c"
    save_27=src;
    # 443 "src/dag.c"
    # 431 "src/dag.c"
    if(assignargs) {
        # 432 "src/dag.c"
        # 433 "src/dag.c"
        # 434 "src/dag.c"
        cp_26=codehead.next->next;
        # 435 "src/dag.c"
        codelist=codehead.next;
        # 439 "src/dag.c"
        for(        i_28=0;        (p_29=callee[i_28])!=((void*)0)&&(q_30=caller[i_28])!=((void*)0);        i_28++        ){
            # 439 "src/dag.c"
            # 438 "src/dag.c"
            if(_if_conditional47=p_29->sclass!=q_30->sclass||p_29->type!=q_30->type,            _if_conditional47) {
                # 439 "src/dag.c"
                walk(asgn(p_29,idtree(q_30)),0,0);
            }
        }
        # 440 "src/dag.c"
        codelist->next=cp_26;
        # 441 "src/dag.c"
        cp_26->prev=codelist;
    }
    # 454 "src/dag.c"
    # 443 "src/dag.c"
    if(_if_conditional48=glevel&&IR->stabsym,    _if_conditional48) {
        # 444 "src/dag.c"
        # 445 "src/dag.c"
        # 452 "src/dag.c"
        for(        i_31=0;        (p_32=callee[i_31])!=((void*)0)&&(q_33=caller[i_31])!=((void*)0);        i_31++        ){
            # 448 "src/dag.c"
            ((*IR->stabsym))(p_32);
            # 451 "src/dag.c"
            # 449 "src/dag.c"
            if(_if_conditional49=p_32->sclass!=q_33->sclass||p_32->type!=q_33->type,            _if_conditional49) {
                # 450 "src/dag.c"
                ((*IR->stabsym))(q_33);
            }
        }
        # 452 "src/dag.c"
        swtoseg(1);
    }
    # 454 "src/dag.c"
    cp_26=codehead.next;
    # 480 "src/dag.c"
    for(    ;    errcnt<=0&&cp_26;    cp_26=cp_26->next    ){
        # 480 "src/dag.c"
        switch (cp_26->kind) {
            # 458 "src/dag.c"
            case 3:
            # 457 "src/dag.c"
            ((void)((IR->address)||(__assert_fail("IR->address","src/dag.c",457,"gencode"),0)));
            # 459 "src/dag.c"
            ((*IR->address))(cp_26->u.addr.sym,cp_26->u.addr.base,cp_26->u.addr.offset);
            # 459 "src/dag.c"
            break;
            # 460 "src/dag.c"
            case 0:
            # 468 "src/dag.c"
            {
                # 461 "src/dag.c"
                p_34=cp_26->u.block.locals;
                # 462 "src/dag.c"
                ((*IR->blockbeg))(&cp_26->u.block.x);
                # 467 "src/dag.c"
                for(                ;                *p_34;                p_34++                ){
                    # 467 "src/dag.c"
                    # 464 "src/dag.c"
                    if(_if_conditional50=(*p_34)->ref!=0.000000,                    _if_conditional50) {
                        # 465 "src/dag.c"
                        ((*IR->local))(*p_34);
                    }
                    # 466 "src/dag.c"
                    else if(glevel) {
                        # 466 "src/dag.c"
                        ((*IR->local))(*p_34);
                    }
                }
            }
            # 468 "src/dag.c"
            break;
            # 469 "src/dag.c"
            case 1:
            # 469 "src/dag.c"
            ((*IR->blockend))(&cp_26->u.begin->u.block.x);
            # 469 "src/dag.c"
            break;
            # 470 "src/dag.c"
            case 4:
            # 470 "src/dag.c"
            src=cp_26->u.point.src;
            # 470 "src/dag.c"
            break;
            # 471 "src/dag.c"
            case 7:
            # 472 "src/dag.c"
            case 8:
            # 472 "src/dag.c"
            case 5:
            # 473 "src/dag.c"
            # 472 "src/dag.c"
            if(prunetemps) {
                # 473 "src/dag.c"
                cp_26->u.forest=prune(cp_26->u.forest);
            }
            # 474 "src/dag.c"
            fixup(cp_26->u.forest);
            # 475 "src/dag.c"
            cp_26->u.forest=((*IR->gen))(cp_26->u.forest);
            # 475 "src/dag.c"
            break;
            # 476 "src/dag.c"
            case 2:
            # 476 "src/dag.c"
            ((*IR->local))(cp_26->u.var);
            # 476 "src/dag.c"
            break;
            # 477 "src/dag.c"
            case 9:
            # 477 "src/dag.c"
            break;
            # 479 "src/dag.c"
            default:
            # 478 "src/dag.c"
            ((void)((0)||(__assert_fail("0","src/dag.c",478,"gencode"),0)));
        }
    }
    # 480 "src/dag.c"
    src=save_27;
}

static void fixup(struct node* p){
void* __result_obj__;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
    # 495 "src/dag.c"
    for(    ;    p;    p=p->link    ){
        # 495 "src/dag.c"
        switch (((p->op)&1008)) {
            # 486 "src/dag.c"
            case 36<<4:
            # 488 "src/dag.c"
            # 486 "src/dag.c"
            if(_if_conditional52=((p->kids[0]->op)&1023)==16<<4+7,            _if_conditional52) {
                # 488 "src/dag.c"
                p->kids[0]->syms[0]=equated(p->kids[0]->syms[0]);
            }
            # 489 "src/dag.c"
            break;
            # 491 "src/dag.c"
            case 37<<4:
            # 490 "src/dag.c"
            ((void)((p->syms[0]==equated(p->syms[0]))||(__assert_fail("p->syms[0] == equated(p->syms[0])","src/dag.c",490,"fixup"),0)));
            # 490 "src/dag.c"
            break;
            # 491 "src/dag.c"
            case 30<<4:
            # 491 "src/dag.c"
            case 31<<4:
            # 491 "src/dag.c"
            case 32<<4:
            # 491 "src/dag.c"
            case 33<<4:
            # 491 "src/dag.c"
            case 34<<4:
            # 493 "src/dag.c"
            case 35<<4:
            # 492 "src/dag.c"
            ((void)((p->syms[0])||(__assert_fail("p->syms[0]","src/dag.c",492,"fixup"),0)));
            # 493 "src/dag.c"
            p->syms[0]=equated(p->syms[0]);
        }
    }
}

static struct symbol* equated(struct symbol* p){
void* __result_obj__;
struct symbol* q_35;
struct symbol* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&q_35, 0, sizeof(struct symbol*));
    # 498 "src/dag.c"
    {
        # 497 "src/dag.c"
        # 497 "src/dag.c"
        for(        q_35=p->u.l.equatedto;        q_35;        q_35=q_35->u.l.equatedto        ){
            # 497 "src/dag.c"
            ((void)((p!=q_35)||(__assert_fail("p != q","src/dag.c",497,"equated"),0)));
        }
    }
    # 499 "src/dag.c"
    while(p->u.l.equatedto) {
        # 499 "src/dag.c"
        p=p->u.l.equatedto;
    }
    # 500 "src/dag.c"
    __result10__ = __result_obj__ = p;
    return __result10__;
}

void emitcode(){
void* __result_obj__;
struct code* cp_36;
struct coord save_37;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct code* bp_38;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
int i_39;
long k_40;
_Bool _while_condtional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&cp_36, 0, sizeof(struct code*));
memset(&save_37, 0, sizeof(struct coord));
memset(&bp_38, 0, sizeof(struct code*));
memset(&i_39, 0, sizeof(int));
memset(&k_40, 0, sizeof(long));
    # 503 "src/dag.c"
    # 504 "src/dag.c"
    # 506 "src/dag.c"
    save_37=src;
    # 507 "src/dag.c"
    cp_36=codehead.next;
    # 548 "src/dag.c"
    for(    ;    errcnt<=0&&cp_36;    cp_36=cp_36->next    ){
        # 548 "src/dag.c"
        switch (cp_36->kind) {
            # 510 "src/dag.c"
            case 3:
            # 510 "src/dag.c"
            break;
            # 511 "src/dag.c"
            case 0:
            # 515 "src/dag.c"
            # 511 "src/dag.c"
            if(_if_conditional53=glevel&&IR->stabblock,            _if_conditional53) {
                # 512 "src/dag.c"
                ((*IR->stabblock))(123,cp_36->u.block.level-5,cp_36->u.block.locals);
                # 513 "src/dag.c"
                swtoseg(1);
            }
            # 515 "src/dag.c"
            break;
            # 516 "src/dag.c"
            case 1:
            # 523 "src/dag.c"
            # 516 "src/dag.c"
            if(_if_conditional54=glevel&&IR->stabblock,            _if_conditional54) {
                # 517 "src/dag.c"
                bp_38=cp_36->u.begin;
                # 518 "src/dag.c"
                foreach(bp_38->u.block.identifiers,bp_38->u.block.level,typestab,((void*)0));
                # 519 "src/dag.c"
                foreach(bp_38->u.block.types,bp_38->u.block.level,typestab,((void*)0));
                # 520 "src/dag.c"
                ((*IR->stabblock))(125,bp_38->u.block.level-5,bp_38->u.block.locals);
                # 521 "src/dag.c"
                swtoseg(1);
            }
            # 523 "src/dag.c"
            break;
            # 524 "src/dag.c"
            case 4:
            # 524 "src/dag.c"
            src=cp_36->u.point.src;
            # 526 "src/dag.c"
            # 525 "src/dag.c"
            if(_if_conditional55=glevel>0&&IR->stabline,            _if_conditional55) {
                # 526 "src/dag.c"
                ((*IR->stabline))(&cp_36->u.point.src);
                # 526 "src/dag.c"
                swtoseg(1);
            }
            # 526 "src/dag.c"
            break;
            # 527 "src/dag.c"
            case 7:
            # 528 "src/dag.c"
            case 8:
            # 528 "src/dag.c"
            case 5:
            # 529 "src/dag.c"
            # 528 "src/dag.c"
            if(cp_36->u.forest) {
                # 529 "src/dag.c"
                ((*IR->emit))(cp_36->u.forest);
            }
            # 529 "src/dag.c"
            break;
            # 530 "src/dag.c"
            case 2:
            # 533 "src/dag.c"
            # 530 "src/dag.c"
            if(_if_conditional57=glevel&&IR->stabsym,            _if_conditional57) {
                # 531 "src/dag.c"
                ((*IR->stabsym))(cp_36->u.var);
                # 532 "src/dag.c"
                swtoseg(1);
            }
            # 533 "src/dag.c"
            break;
            # 534 "src/dag.c"
            case 9:
            # 545 "src/dag.c"
            {
                # 534 "src/dag.c"
                # 535 "src/dag.c"
                defglobal(cp_36->u.swtch.table,4);
                # 536 "src/dag.c"
                ((*IR->defaddress))(equated(cp_36->u.swtch.labels[0]));
                # 544 "src/dag.c"
                for(                i_39=1;                i_39<cp_36->u.swtch.size;                i_39++                ){
                    # 538 "src/dag.c"
                    k_40=cp_36->u.swtch.values[i_39-1];
                    # 541 "src/dag.c"
                    while(_while_condtional2=++k_40<cp_36->u.swtch.values[i_39],                    _while_condtional2) {
                        # 541 "src/dag.c"
                        ((void)((k_40<9223372036854775807)||(__assert_fail("k < LONG_MAX","src/dag.c",540,"emitcode"),0))),((*IR->defaddress))(equated(cp_36->u.swtch.deflab));
                    }
                    # 542 "src/dag.c"
                    ((*IR->defaddress))(equated(cp_36->u.swtch.labels[i_39]));
                }
                # 544 "src/dag.c"
                swtoseg(1);
            }
            # 545 "src/dag.c"
            break;
            # 547 "src/dag.c"
            default:
            # 546 "src/dag.c"
            ((void)((0)||(__assert_fail("0","src/dag.c",546,"emitcode"),0)));
        }
    }
    # 548 "src/dag.c"
    src=save_37;
}

static struct node* undag(struct node* forest){
void* __result_obj__;
struct node* p_41;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _elif_conditional5;
struct node* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_41, 0, sizeof(struct node*));
    # 552 "src/dag.c"
    # 554 "src/dag.c"
    tail=&forest;
    # 572 "src/dag.c"
    for(    p_41=forest;    p_41;    p_41=p_41->link    ){
        # 572 "src/dag.c"
        # 556 "src/dag.c"
        if(_if_conditional58=((p_41->op)&1008)==4<<4,        _if_conditional58) {
            # 557 "src/dag.c"
            ((void)((p_41->count>=1)||(__assert_fail("p->count >= 1","src/dag.c",557,"undag"),0)));
            # 558 "src/dag.c"
            visit(p_41,1);
            # 564 "src/dag.c"
            # 559 "src/dag.c"
            if(_if_conditional59=p_41->syms[2],            _if_conditional59) {
                # 560 "src/dag.c"
                ((void)((p_41->syms[2]->u.t.cse)||(__assert_fail("p->syms[2]->u.t.cse","src/dag.c",560,"undag"),0)));
                # 561 "src/dag.c"
                p_41->syms[2]->u.t.cse=((void*)0);
                # 562 "src/dag.c"
                addlocal(p_41->syms[2]);
            }
        }
        # 564 "src/dag.c"
        else if(_elif_conditional5=(((p_41->op)&1008)==13<<4||IR->mulops_calls&&(((p_41->op)&1008)==28<<4||((p_41->op)&1008)==22<<4||((p_41->op)&1008)==29<<4)&&(((p_41->op)&15)==6||((p_41->op)&15)==5))&&p_41->count>=1,        _elif_conditional5) {
            # 565 "src/dag.c"
            visit(p_41,1);
        }
        else {
            # 568 "src/dag.c"
            ((void)((p_41->count==0)||(__assert_fail("p->count == 0","src/dag.c",567,"undag"),0))),visit(p_41,1);
            # 569 "src/dag.c"
            *tail=p_41;
            # 570 "src/dag.c"
            tail=&p_41->link;
        }
    }
    # 572 "src/dag.c"
    *tail=((void*)0);
    # 573 "src/dag.c"
    __result11__ = __result_obj__ = forest;
    return __result11__;
}

static struct node* replace(struct node* p){
void* __result_obj__;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _elif_conditional6;
struct node* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
    # 593 "src/dag.c"
    # 579 "src/dag.c"
    if(_if_conditional60=p&&(((p->op)&1008)==4<<4&&((p->kids[0]->op)&1008)==18<<4&&p->kids[0]->syms[0]->temporary&&p->kids[0]->syms[0]->u.t.replace),    _if_conditional60) {
        # 580 "src/dag.c"
        p=p->kids[0]->syms[0]->u.t.cse;
        # 587 "src/dag.c"
        # 581 "src/dag.c"
        if(_if_conditional61=((p->op)&1008)==4<<4&&(((p->kids[0]->op)&1023)==16<<4+7||((p->kids[0]->op)&1023)==18<<4+7||((p->kids[0]->op)&1023)==17<<4+7),        _if_conditional61) {
            # 583 "src/dag.c"
            p=newnode(p->op,newnode(p->kids[0]->op,((void*)0),((void*)0),p->kids[0]->syms[0]),((void*)0),((void*)0));
        }
        # 584 "src/dag.c"
        else if(_elif_conditional6=((p->op)&1008)==16<<4,        _elif_conditional6) {
            # 585 "src/dag.c"
            p=newnode(p->op,((void*)0),((void*)0),p->syms[0]);
        }
        else {
            # 587 "src/dag.c"
            ((void)((0)||(__assert_fail("0","src/dag.c",587,"replace"),0)));
        }
        # 588 "src/dag.c"
        p->count=1;
    }
    # 589 "src/dag.c"
    else if(p) {
        # 590 "src/dag.c"
        p->kids[0]=replace(p->kids[0]);
        # 591 "src/dag.c"
        p->kids[1]=replace(p->kids[1]);
    }
    # 593 "src/dag.c"
    __result12__ = __result_obj__ = p;
    return __result12__;
}

static struct node* prune(struct node* forest){
void* __result_obj__;
struct node* p_42;
int count_44;
_Bool _if_conditional62;
_Bool _if_conditional63;
struct symbol* tmp_45;
_Bool _if_conditional64;
_Bool _if_conditional65;
struct node* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&count_44, 0, sizeof(int));
memset(&tmp_45, 0, sizeof(struct symbol*));
    # 596 "src/dag.c"
    struct node** tail_43=&forest;
    # 597 "src/dag.c"
    count_44=0;
    # 628 "src/dag.c"
    for(    p_42=forest;    p_42;    p_42=p_42->link    ){
        # 604 "src/dag.c"
        # 600 "src/dag.c"
        if(_if_conditional62=count_44>0,        _if_conditional62) {
            # 601 "src/dag.c"
            p_42->kids[0]=replace(p_42->kids[0]);
            # 602 "src/dag.c"
            p_42->kids[1]=replace(p_42->kids[1]);
        }
        # 624 "src/dag.c"
        # 607 "src/dag.c"
        if(_if_conditional63=(((p_42->op)&1008)==3<<4&&((p_42->kids[0]->op)&1008)==18<<4&&p_42->kids[0]->syms[0]->temporary&&p_42->kids[0]->syms[0]->u.t.cse==p_42->kids[1]),        _if_conditional63) {
            # 608 "src/dag.c"
            tmp_45=p_42->kids[0]->syms[0];
            # 610 "src/dag.c"
            # 609 "src/dag.c"
            if(_if_conditional64=!tmp_45->defined,            _if_conditional64) {
                # 610 "src/dag.c"
                ((*IR->local))(tmp_45);
            }
            # 611 "src/dag.c"
            tmp_45->defined=1;
            # 622 "src/dag.c"
            # 617 "src/dag.c"
            if(_if_conditional65=(((p_42->kids[1]->op)&1008)==4<<4&&(((p_42->kids[1]->kids[0]->op)&1023)==16<<4+7||((p_42->kids[1]->kids[0]->op)&1023)==18<<4+7||((p_42->kids[1]->kids[0]->op)&1023)==17<<4+7)&&p_42->kids[1]->kids[0]->syms[0]->sclass==78)||((((p_42->kids[1]->op)&1008)==4<<4&&(((p_42->kids[1]->kids[0]->op)&1023)==16<<4+7||((p_42->kids[1]->kids[0]->op)&1023)==18<<4+7||((p_42->kids[1]->kids[0]->op)&1023)==17<<4+7))&&tmp_45->sclass==67)||(((p_42->kids[1]->op)&1008)==16<<4&&tmp_45->sclass==67),            _if_conditional65) {
                # 618 "src/dag.c"
                tmp_45->u.t.replace=1;
                # 619 "src/dag.c"
                count_44++;
                # 620 "src/dag.c"
                continue;
            }
        }
        # 624 "src/dag.c"
        *tail_43=p_42;
        # 625 "src/dag.c"
        tail_43=&(*tail_43)->link;
    }
    # 627 "src/dag.c"
    ((void)((*tail_43==((void*)0))||(__assert_fail("*tail == NULL","src/dag.c",627,"prune"),0)));
    # 628 "src/dag.c"
    __result13__ = __result_obj__ = forest;
    return __result13__;
}

static struct node* visit(struct node* p, int listed){
void* __result_obj__;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _elif_conditional7;
_Bool _elif_conditional8;
_Bool _elif_conditional9;
_Bool _if_conditional68;
struct node* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    # 663 "src/dag.c"
    # 631 "src/dag.c"
    if(p) {
        # 663 "src/dag.c"
        # 632 "src/dag.c"
        if(_if_conditional67=p->syms[2],        _if_conditional67) {
            # 633 "src/dag.c"
            p=tmpnode(p);
        }
        # 635 "src/dag.c"
        else if(_elif_conditional7=p->count<=1&&!(((p->op)&1008)==13<<4||IR->mulops_calls&&(((p->op)&1008)==28<<4||((p->op)&1008)==22<<4||((p->op)&1008)==29<<4)&&(((p->op)&15)==6||((p->op)&15)==5))||p->count==0&&(((p->op)&1008)==13<<4||IR->mulops_calls&&(((p->op)&1008)==28<<4||((p->op)&1008)==22<<4||((p->op)&1008)==29<<4)&&(((p->op)&15)==6||((p->op)&15)==5)),        _elif_conditional7) {
            # 636 "src/dag.c"
            p->kids[0]=visit(p->kids[0],0);
            # 637 "src/dag.c"
            p->kids[1]=visit(p->kids[1],0);
        }
        # 640 "src/dag.c"
        else if(_elif_conditional8=((p->op)&1023)==18<<4+7||((p->op)&1023)==17<<4+7,        _elif_conditional8) {
            # 641 "src/dag.c"
            ((void)((!listed)||(__assert_fail("!listed","src/dag.c",641,"visit"),0)));
            # 642 "src/dag.c"
            p=newnode(p->op,((void*)0),((void*)0),p->syms[0]);
            # 643 "src/dag.c"
            p->count=1;
        }
        # 645 "src/dag.c"
        else if(_elif_conditional9=p->op==4<<4+9,        _elif_conditional9) {
            # 646 "src/dag.c"
            p=newnode(p->op,p->kids[0],((void*)0),((void*)0));
            # 647 "src/dag.c"
            p->count=1;
            # 648 "src/dag.c"
            p->kids[0]=visit(p->kids[0],0);
            # 649 "src/dag.c"
            p->kids[1]=visit(p->kids[1],0);
        }
        else {
            # 652 "src/dag.c"
            p->kids[0]=visit(p->kids[0],0);
            # 653 "src/dag.c"
            p->kids[1]=visit(p->kids[1],0);
            # 654 "src/dag.c"
            p->syms[2]=temporary(78,btot(p->op,((p->op)>>10)));
            # 655 "src/dag.c"
            ((void)((!p->syms[2]->defined)||(__assert_fail("!p->syms[2]->defined","src/dag.c",655,"visit"),0)));
            # 656 "src/dag.c"
            p->syms[2]->ref=1;
            # 657 "src/dag.c"
            p->syms[2]->u.t.cse=p;
            # 659 "src/dag.c"
            *tail=asgnnode(p->syms[2],p);
            # 660 "src/dag.c"
            tail=&(*tail)->link;
            # 663 "src/dag.c"
            # 661 "src/dag.c"
            if(_if_conditional68=!listed,            _if_conditional68) {
                # 662 "src/dag.c"
                p=tmpnode(p);
            }
        }
    }
    # 664 "src/dag.c"
    __result14__ = __result_obj__ = p;
    return __result14__;
}

static struct node* tmpnode(struct node* p){
void* __result_obj__;
struct symbol* tmp_46;
_Bool _if_conditional69;
struct node* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_46, 0, sizeof(struct symbol*));
    # 667 "src/dag.c"
    tmp_46=p->syms[2];
    # 669 "src/dag.c"
    ((void)((tmp_46)||(__assert_fail("tmp","src/dag.c",669,"tmpnode"),0)));
    # 671 "src/dag.c"
    # 670 "src/dag.c"
    if(_if_conditional69=--p->count==0,    _if_conditional69) {
        # 671 "src/dag.c"
        p->syms[2]=((void*)0);
    }
    # 673 "src/dag.c"
    p=newnode(4<<4+ttob(tmp_46->type),newnode(18<<4+ttob(voidptype),((void*)0),((void*)0),tmp_46),((void*)0),((void*)0));
    # 674 "src/dag.c"
    p->count=1;
    # 675 "src/dag.c"
    __result15__ = __result_obj__ = p;
    return __result15__;
}

static struct node* asgnnode(struct symbol* tmp, struct node* p){
void* __result_obj__;
struct node* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    # 679 "src/dag.c"
    p=newnode(3<<4+ttob(tmp->type),newnode(18<<4+ttob(voidptype),((void*)0),((void*)0),tmp),p,((void*)0));
    # 680 "src/dag.c"
    p->syms[0]=intconst(tmp->type->size);
    # 681 "src/dag.c"
    p->syms[1]=intconst(tmp->type->align);
    # 682 "src/dag.c"
    __result16__ = __result_obj__ = p;
    return __result16__;
}

void printdag(struct node* p, int fd){
void* __result_obj__;
struct _IO_FILE* f_47;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _do_while_condtional1;
_Bool _elif_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_47, 0, sizeof(struct _IO_FILE*));
    # 686 "src/dag.c"
    f_47=fd==1?(stdout):(stderr);
    # 688 "src/dag.c"
    printed(0);
    # 698 "src/dag.c"
    # 689 "src/dag.c"
    if(_if_conditional70=p==0,    _if_conditional70) {
        # 695 "src/dag.c"
        # 690 "src/dag.c"
        if(_if_conditional71=(p=forest)!=((void*)0),        _if_conditional71) {
            # 694 "src/dag.c"
            do {
                # 692 "src/dag.c"
                p=p->link;
                # 693 "src/dag.c"
                printdag1(p,fd,0);
            # 694 "src/dag.c"
            } while(_do_while_condtional1=p!=forest,            _do_while_condtional1);
        }
    }
    # 695 "src/dag.c"
    else if(_elif_conditional10=*printed(nodeid((struct tree*)p)),    _elif_conditional10) {
        # 696 "src/dag.c"
        fprint(f_47,"node'%d printed above\n",nodeid((struct tree*)p));
    }
    else {
        # 698 "src/dag.c"
        printdag1(p,fd,0);
    }
}

static void printdag1(struct node* p, int fd, int lev){
void* __result_obj__;
int id_48;
int i_49;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
    # 703 "src/dag.c"
    # 707 "src/dag.c"
    # 705 "src/dag.c"
    if(_if_conditional72=p==0||*printed(id_48=nodeid((struct tree*)p)),    _if_conditional72) {
        # 706 "src/dag.c"
        return;
    }
    # 707 "src/dag.c"
    *printed(id_48)=1;
    # 709 "src/dag.c"
    for(    i_49=0;    i_49<((int)(sizeof(p->kids)/sizeof((p->kids)[0])));    i_49++    ){
        # 709 "src/dag.c"
        printdag1(p->kids[i_49],fd,lev+1);
    }
    # 710 "src/dag.c"
    printnode(p,fd,lev);
}

static void printnode(struct node* p, int fd, int lev){
void* __result_obj__;
_Bool _if_conditional73;
struct _IO_FILE* f_50;
int i_51;
_Bool _if_conditional74;
_Bool _if_conditional75;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_50, 0, sizeof(struct _IO_FILE*));
    # 733 "src/dag.c"
    # 715 "src/dag.c"
    if(p) {
        # 716 "src/dag.c"
        f_50=fd==1?(stdout):(stderr);
        # 717 "src/dag.c"
        int id_52=nodeid((struct tree*)p);
        # 719 "src/dag.c"
        fprint(f_50,"%c%d%s",lev==0?39:35,id_52,&"   "[id_52<10?0:id_52<100?1:2]);
        # 720 "src/dag.c"
        fprint(f_50,"%s count=%d",opname(p->op),p->count);
        # 722 "src/dag.c"
        for(        i_51=0;        i_51<((int)(sizeof(p->kids)/sizeof((p->kids)[0])))&&p->kids[i_51];        i_51++        ){
            # 722 "src/dag.c"
            fprint(f_50," #%d",nodeid((struct tree*)p->kids[i_51]));
        }
        # 730 "src/dag.c"
        # 723 "src/dag.c"
        if(_if_conditional74=((p->op)&1008)==13<<4&&p->syms[0]&&p->syms[0]->type,        _if_conditional74) {
            # 724 "src/dag.c"
            fprint(f_50," {%t}",p->syms[0]->type);
        }
        else {
            # 730 "src/dag.c"
            for(            i_51=0;            i_51<((int)(sizeof(p->syms)/sizeof((p->syms)[0])))&&p->syms[i_51];            i_51++            ){
                # 730 "src/dag.c"
                # 727 "src/dag.c"
                if(p->syms[i_51]->name) {
                    # 728 "src/dag.c"
                    fprint(f_50," %s",p->syms[i_51]->name);
                }
                else {
                    # 730 "src/dag.c"
                    fprint(f_50," %p",p->syms[i_51]);
                }
            }
        }
        # 731 "src/dag.c"
        fprint(f_50,"\n");
    }
}

static void typestab(struct symbol* p, void* cl){
void* __result_obj__;
_Bool _if_conditional76;
_Bool _elif_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
    # 741 "src/dag.c"
    # 737 "src/dag.c"
    if(_if_conditional76=!((((p->type)->op>=15)?(p->type)->type:(p->type))->op==11)&&(p->sclass==74||p->sclass==81)&&IR->stabsym,    _if_conditional76) {
        # 738 "src/dag.c"
        ((*IR->stabsym))(p);
    }
    # 739 "src/dag.c"
    else if(_elif_conditional11=(p->sclass==83||p->sclass==0)&&IR->stabtype,    _elif_conditional11) {
        # 740 "src/dag.c"
        ((*IR->stabtype))(p);
    }
}

