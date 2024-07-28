# 0 "src/decl.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/decl.c"
# 1 "src/c.h" 1

# 1 "/usr/include/assert.h" 1 3 4
# 1 "/usr/include/features.h" 1 3 4
# 2 "/usr/include/assert.h" 2 3 4
# 19 "/usr/include/assert.h" 3 4

# 19 "/usr/include/assert.h" 3 4
_Noreturn void __assert_fail (const char *, const char *, int, const char *);
# 3 "src/c.h" 2
# 1 "/usr/include/stdarg.h" 1 3 4
# 10 "/usr/include/stdarg.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 334 "/usr/include/bits/alltypes.h" 3 4
typedef __builtin_va_list va_list;
# 11 "/usr/include/stdarg.h" 2 3 4
# 4 "src/c.h" 2
# 1 "/usr/include/fortify/stdio.h" 1 3 4
# 21 "/usr/include/fortify/stdio.h" 3 4
__extension__

# 1 "/usr/include/stdio.h" 1 3 4
# 26 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 58 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned long size_t;
# 73 "/usr/include/bits/alltypes.h" 3 4
typedef long ssize_t;
# 170 "/usr/include/bits/alltypes.h" 3 4
typedef long off_t;
# 328 "/usr/include/bits/alltypes.h" 3 4
typedef struct _IO_FILE FILE;
# 339 "/usr/include/bits/alltypes.h" 3 4
typedef __builtin_va_list __isoc_va_list;
# 27 "/usr/include/stdio.h" 2 3 4
# 56 "/usr/include/stdio.h" 3 4
typedef union _G_fpos64_t {
 char __opaque[16];
 long long __lldata;
 double __align;
} fpos_t;

extern FILE *const stdin;
extern FILE *const stdout;
extern FILE *const stderr;





FILE *fopen(const char *restrict, const char *restrict);
FILE *freopen(const char *restrict, const char *restrict, FILE *restrict);
int fclose(FILE *);

int remove(const char *);
int rename(const char *, const char *);

int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
void clearerr(FILE *);

int fseek(FILE *, long, int);
long ftell(FILE *);
void rewind(FILE *);

int fgetpos(FILE *restrict, fpos_t *restrict);
int fsetpos(FILE *, const fpos_t *);

size_t fread(void *restrict, size_t, size_t, FILE *restrict);
size_t fwrite(const void *restrict, size_t, size_t, FILE *restrict);

int fgetc(FILE *);
int getc(FILE *);
int getchar(void);
int ungetc(int, FILE *);

int fputc(int, FILE *);
int putc(int, FILE *);
int putchar(int);

char *fgets(char *restrict, int, FILE *restrict);




int fputs(const char *restrict, FILE *restrict);
int puts(const char *);

int printf(const char *restrict, ...);
int fprintf(FILE *restrict, const char *restrict, ...);
int sprintf(char *restrict, const char *restrict, ...);
int snprintf(char *restrict, size_t, const char *restrict, ...);

int vprintf(const char *restrict, __isoc_va_list);
int vfprintf(FILE *restrict, const char *restrict, __isoc_va_list);
int vsprintf(char *restrict, const char *restrict, __isoc_va_list);
int vsnprintf(char *restrict, size_t, const char *restrict, __isoc_va_list);

int scanf(const char *restrict, ...);
int fscanf(FILE *restrict, const char *restrict, ...);
int sscanf(const char *restrict, const char *restrict, ...);
int vscanf(const char *restrict, __isoc_va_list);
int vfscanf(FILE *restrict, const char *restrict, __isoc_va_list);
int vsscanf(const char *restrict, const char *restrict, __isoc_va_list);

void perror(const char *);

int setvbuf(FILE *restrict, char *restrict, int, size_t);
void setbuf(FILE *restrict, char *restrict);

char *tmpnam(char *);
FILE *tmpfile(void);




FILE *fmemopen(void *restrict, size_t, const char *restrict);
FILE *open_memstream(char **, size_t *);
FILE *fdopen(int, const char *);
FILE *popen(const char *, const char *);
int pclose(FILE *);
int fileno(FILE *);
int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);
int dprintf(int, const char *restrict, ...);
int vdprintf(int, const char *restrict, __isoc_va_list);
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);
ssize_t getdelim(char **restrict, size_t *restrict, int, FILE *restrict);
ssize_t getline(char **restrict, size_t *restrict, FILE *restrict);
int renameat(int, const char *, int, const char *);
char *ctermid(char *);







char *tempnam(const char *, const char *);




char *cuserid(char *);
void setlinebuf(FILE *);
void setbuffer(FILE *, char *, size_t);
int fgetc_unlocked(FILE *);
int fputc_unlocked(int, FILE *);
int fflush_unlocked(FILE *);
size_t fread_unlocked(void *, size_t, size_t, FILE *);
size_t fwrite_unlocked(const void *, size_t, size_t, FILE *);
void clearerr_unlocked(FILE *);
int feof_unlocked(FILE *);
int ferror_unlocked(FILE *);
int fileno_unlocked(FILE *);
int getw(FILE *);
int putw(int, FILE *);
char *fgetln(FILE *, size_t *);
int asprintf(char **, const char *, ...);
int vasprintf(char **, const char *, __isoc_va_list);
# 24 "/usr/include/fortify/stdio.h" 2 3 4
# 5 "src/c.h" 2
# 1 "/usr/include/fortify/stdlib.h" 1 3 4
# 21 "/usr/include/fortify/stdlib.h" 3 4
__extension__

# 1 "/usr/include/stdlib.h" 1 3 4
# 21 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 15 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned wchar_t;
# 22 "/usr/include/stdlib.h" 2 3 4

int atoi (const char *);
long atol (const char *);
long long atoll (const char *);
double atof (const char *);

float strtof (const char *restrict, char **restrict);
double strtod (const char *restrict, char **restrict);
long double strtold (const char *restrict, char **restrict);

long strtol (const char *restrict, char **restrict, int);
unsigned long strtoul (const char *restrict, char **restrict, int);
long long strtoll (const char *restrict, char **restrict, int);
unsigned long long strtoull (const char *restrict, char **restrict, int);

int rand (void);
void srand (unsigned);

void *malloc (size_t);
void *calloc (size_t, size_t);
void *realloc (void *, size_t);
void free (void *);
void *aligned_alloc(size_t, size_t);

_Noreturn void abort (void);
int atexit (void (*) (void));
_Noreturn void exit (int);
_Noreturn void _Exit (int);
int at_quick_exit (void (*) (void));
_Noreturn void quick_exit (int);

char *getenv (const char *);

int system (const char *);

void *bsearch (const void *, const void *, size_t, size_t, int (*)(const void *, const void *));
void qsort (void *, size_t, size_t, int (*)(const void *, const void *));

int abs (int);
long labs (long);
long long llabs (long long);

typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;
typedef struct { long long quot, rem; } lldiv_t;

div_t div (int, int);
ldiv_t ldiv (long, long);
lldiv_t lldiv (long long, long long);

int mblen (const char *, size_t);
int mbtowc (wchar_t *restrict, const char *restrict, size_t);
int wctomb (char *, wchar_t);
size_t mbstowcs (wchar_t *restrict, const char *restrict, size_t);
size_t wcstombs (char *restrict, const wchar_t *restrict, size_t);




size_t __ctype_get_mb_cur_max(void);
# 101 "/usr/include/stdlib.h" 3 4
int posix_memalign (void **, size_t, size_t);
int setenv (const char *, const char *, int);
int unsetenv (const char *);
int mkstemp (char *);
int mkostemp (char *, int);
char *mkdtemp (char *);
int getsubopt (char **, char *const *, char **);
int rand_r (unsigned *);






char *realpath (const char *restrict, char *restrict);
long int random (void);
void srandom (unsigned int);
char *initstate (unsigned int, char *, size_t);
char *setstate (char *);
int putenv (char *);
int posix_openpt (int);
int grantpt (int);
int unlockpt (int);
char *ptsname (int);
char *l64a (long);
long a64l (const char *);
void setkey (const char *);
double drand48 (void);
double erand48 (unsigned short [3]);
long int lrand48 (void);
long int nrand48 (unsigned short [3]);
long mrand48 (void);
long jrand48 (unsigned short [3]);
void srand48 (long);
unsigned short *seed48 (unsigned short [3]);
void lcong48 (unsigned short [7]);



# 1 "/usr/include/alloca.h" 1 3 4
# 9 "/usr/include/alloca.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 10 "/usr/include/alloca.h" 2 3 4

void *alloca(size_t);
# 141 "/usr/include/stdlib.h" 2 3 4
char *mktemp (char *);
int mkstemps (char *, int);
int mkostemps (char *, int, int);
void *valloc (size_t);
void *memalign(size_t, size_t);
int getloadavg(double *, int);
int clearenv(void);


void *reallocarray (void *, size_t, size_t);
void qsort_r (void *, size_t, size_t, int (*)(const void *, const void *, void *), void *);
# 24 "/usr/include/fortify/stdlib.h" 2 3 4
# 6 "src/c.h" 2
# 1 "/usr/include/limits.h" 1 3 4





# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 7 "/usr/include/limits.h" 2 3 4
# 40 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/limits.h" 1 3 4
# 41 "/usr/include/limits.h" 2 3 4
# 7 "src/c.h" 2
# 1 "/usr/include/fortify/string.h" 1 3 4
# 21 "/usr/include/fortify/string.h" 3 4
__extension__

# 1 "/usr/include/string.h" 1 3 4
# 25 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 351 "/usr/include/bits/alltypes.h" 3 4
typedef struct __locale_struct * locale_t;
# 26 "/usr/include/string.h" 2 3 4

void *memcpy (void *restrict, const void *restrict, size_t);
void *memmove (void *, const void *, size_t);
void *memset (void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void *memchr (const void *, int, size_t);

char *strcpy (char *restrict, const char *restrict);
char *strncpy (char *restrict, const char *restrict, size_t);

char *strcat (char *restrict, const char *restrict);
char *strncat (char *restrict, const char *restrict, size_t);

int strcmp (const char *, const char *);
int strncmp (const char *, const char *, size_t);

int strcoll (const char *, const char *);
size_t strxfrm (char *restrict, const char *restrict, size_t);

char *strchr (const char *, int);
char *strrchr (const char *, int);

size_t strcspn (const char *, const char *);
size_t strspn (const char *, const char *);
char *strpbrk (const char *, const char *);
char *strstr (const char *, const char *);
char *strtok (char *restrict, const char *restrict);

size_t strlen (const char *);

char *strerror (int);


# 1 "/usr/include/fortify/strings.h" 1 3 4
# 20 "/usr/include/fortify/strings.h" 3 4
# 1 "/usr/include/strings.h" 1 3 4
# 12 "/usr/include/strings.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 13 "/usr/include/strings.h" 2 3 4




int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (void *, size_t);
char *index (const char *, int);
char *rindex (const char *, int);



int ffs (int);
int ffsl (long);
int ffsll (long long);


int strcasecmp (const char *, const char *);
int strncasecmp (const char *, const char *, size_t);

int strcasecmp_l (const char *, const char *, locale_t);
int strncasecmp_l (const char *, const char *, size_t, locale_t);
# 21 "/usr/include/fortify/strings.h" 2 3 4
# 60 "/usr/include/string.h" 2 3 4





char *strtok_r (char *restrict, const char *restrict, char **restrict);
int strerror_r (int, char *, size_t);
char *stpcpy(char *restrict, const char *restrict);
char *stpncpy(char *restrict, const char *restrict, size_t);
size_t strnlen (const char *, size_t);
char *strdup (const char *);
char *strndup (const char *, size_t);
char *strsignal(int);
char *strerror_l (int, locale_t);
int strcoll_l (const char *, const char *, locale_t);
size_t strxfrm_l (char *restrict, const char *restrict, size_t, locale_t);
void *memmem(const void *, size_t, const void *, size_t);




void *memccpy (void *restrict, const void *restrict, int, size_t);



char *strsep(char **, const char *);
size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);
void explicit_bzero (void *, size_t);
# 24 "/usr/include/fortify/string.h" 2 3 4
# 8 "src/c.h" 2
# 66 "src/c.h"

# 66 "src/c.h"
typedef struct node *Node;

typedef struct list *List;

typedef struct code *Code;

typedef struct swtch *Swtch;

typedef struct symbol *Symbol;

typedef struct coord {
 char *file;
 unsigned x, y;
} Coordinate;
typedef struct table *Table;

typedef union value {
 long i;
 unsigned long u;
 long double d;
 void *p;
 void (*g)(void);
} Value;
typedef struct tree *Tree;

typedef struct type *Type;

typedef struct field *Field;

typedef struct {
 unsigned printed:1;
 unsigned marked;
 unsigned short typeno;
 void *xt;
} Xtype;

# 1 "src/config.h" 1

typedef struct {
 unsigned char max_unaligned_load;
 Symbol (*rmap)(int);

 void (*blkfetch)(int size, int off, int reg, int tmp);
 void (*blkstore)(int size, int off, int reg, int tmp);
 void (*blkloop)(int dreg, int doff,
                  int sreg, int soff,
                  int size, int tmps[]);
 void (*_label)(Node);
 int (*_rule)(void*, int);
 short **_nts;
 void (*_kids)(Node, int, Node*);
 char **_string;
 char **_templates;
 char *_isinstruction;
 char **_ntname;
 void (*emit2)(Node);
 void (*doarg)(Node);
 void (*target)(Node);
 void (*clobber)(Node);
} Xinterface;
extern int askregvar(Symbol, Symbol);
extern void blkcopy(int, int, int, int, int, int[]);
extern unsigned emitasm(Node, int);
extern int getregnum(Node);
extern int mayrecalc(Node);
extern int mkactual(int, int);
extern void mkauto(Symbol);
extern Symbol mkreg(char *, int, int, int);
extern Symbol mkwildcard(Symbol *);
extern int move(Node);
extern int notarget(Node);
extern void parseflags(int, char **);
extern int range(Node, int, int);
extern unsigned regloc(Symbol);
extern void rtarget(Node, int, Symbol);
extern void setreg(Node, Symbol);
extern void spill(unsigned, int, Node);
extern int widens(Node);

extern int argoffset, maxargoffset;
extern int bflag, dflag;
extern int dalign, salign;
extern int framesize;
extern unsigned freemask[], usedmask[];
extern int offset, maxoffset;
extern int swap;
extern unsigned tmask[], vmask[];
typedef struct {
 unsigned listed:1;
 unsigned registered:1;
 unsigned emitted:1;
 unsigned copy:1;
 unsigned equatable:1;
 unsigned spills:1;
 unsigned mayrecalc:1;
 void *state;
 short inst;
 Node kids[3];
 Node prev, next;
 Node prevuse;
 short argno;
} Xnode;
typedef struct {
 Symbol vbl;
 short set;
 short number;
 unsigned mask;
} *Regnode;
enum { IREG=0, FREG=1 };
typedef struct {
 char *name;
 unsigned int eaddr;
 int offset;
 Node lastuse;
 int usecount;
 Regnode regnode;
 Symbol *wildcard;
} Xsymbol;
enum { RX=2 };
typedef struct {
 int offset;
 unsigned freemask[2];
} Env;



enum { VREG=(44<<4) };


extern void blockbeg(Env *);
extern void blockend(Env *);
extern void emit(Node);
extern Node gen(Node);

extern unsigned emitbin(Node, int);
# 103 "src/c.h" 2
typedef struct metrics {
 unsigned char size, align, outofline;
} Metrics;
typedef struct interface {
 Metrics charmetric;
 Metrics shortmetric;
 Metrics intmetric;
 Metrics longmetric;
 Metrics longlongmetric;
 Metrics floatmetric;
 Metrics doublemetric;
 Metrics longdoublemetric;
 Metrics ptrmetric;
 Metrics structmetric;
 unsigned little_endian:1;
 unsigned mulops_calls:1;
 unsigned wants_callb:1;
 unsigned wants_argb:1;
 unsigned left_to_right:1;
 unsigned wants_dag:1;
 unsigned unsigned_char:1;
void (*address)(Symbol p, Symbol q, long n);
void (*blockbeg)(Env *);
void (*blockend)(Env *);
void (*defaddress)(Symbol);
void (*defconst) (int suffix, int size, Value v);
void (*defstring)(int n, char *s);
void (*defsymbol)(Symbol);
void (*emit) (Node);
void (*export)(Symbol);
void (*function)(Symbol, Symbol[], Symbol[], int);
Node (*gen) (Node);
void (*global)(Symbol);
void (*import)(Symbol);
void (*local)(Symbol);
void (*progbeg)(int argc, char *argv[]);
void (*progend)(void);
void (*segment)(int);
void (*space)(int);
void (*stabblock)(int, int, Symbol*);
void (*stabend) (Coordinate *, Symbol, Coordinate **, Symbol *, Symbol *);
void (*stabfend) (Symbol, int);
void (*stabinit) (char *, int, char *[]);
void (*stabline) (Coordinate *);
void (*stabsym) (Symbol);
void (*stabtype) (Symbol);
 Xinterface x;
} Interface;
typedef struct binding {
 char *name;
 Interface *ir;
} Binding;

extern Binding bindings[];
extern Interface *IR;
typedef struct {
 List blockentry;
 List blockexit;
 List entry;
 List exit;
 List returns;
 List points;
 List calls;
 List end;
} Events;

enum {


# 1 "src/token.h" 1





FLOAT=1,
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
# 173 "src/c.h" 2
 LAST
};
struct node {
 short op;
 short count;
  Symbol syms[3];
 Node kids[2];
 Node link;
 Xnode x;
};
enum {
 F=FLOAT,
 I=INT,
 U=UNSIGNED,
 P=POINTER,
 V=VOID,
 B=STRUCT
};



enum {
# 1 "src/ops.h" 1


CNST=1<<4,




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





# 196 "src/c.h" 2
 LASTOP
};



enum { CODE=1, BSS, DATA, LIT };
enum { PERM=0, FUNC, STMT };
struct list {
 void *x;
 List link;
};

struct code {
 enum { Blockbeg, Blockend, Local, Address, Defpoint,
        Label, Start, Gen, Jump, Switch
 } kind;
 Code prev, next;
 union {
  struct {
   int level;
   Symbol *locals;
   Table identifiers, types;
   Env x;
  } block;
  Code begin;
  Symbol var;

  struct {
   Symbol sym;
   Symbol base;
   long offset;
  } addr;
  struct {
   Coordinate src;
   int point;
  } point;
  Node forest;
  struct {
   Symbol sym;
   Symbol table;
   Symbol deflab;
   int size;
   long *values;
   Symbol *labels;
  } swtch;

 } u;
};
struct swtch {
 Symbol sym;
 int lab;
 Symbol deflab;
 int ncases;
 int size;
 long *values;
 Symbol *labels;
};
struct symbol {
 char *name;
 int scope;
 Coordinate src;
 Symbol up;
 List uses;
 int sclass;
 unsigned structarg:1;

 unsigned addressed:1;
 unsigned computed:1;
 unsigned temporary:1;
 unsigned generated:1;
 unsigned defined:1;
 Type type;
 float ref;
 union {
  struct {
   int label;
   Symbol equatedto;
  } l;
  struct {
   unsigned cfields:1;
   unsigned vfields:1;
   Table ftab;
   Field flist;
  } s;
  int value;
  Symbol *idlist;
  struct {
   Value min, max;
  } limits;
  struct {
   Value v;
   Symbol loc;
  } c;
  struct {
   Coordinate pt;
   int label;
   int ncalls;
   Symbol *callee;
  } f;
  int seg;
  Symbol alias;
  struct {
   Node cse;
   int replace;
   Symbol next;
  } t;
 } u;
 Xsymbol x;
};
enum { CONSTANTS=1, LABELS, GLOBAL, PARAM, LOCAL };
struct tree {
 int op;
 Type type;
 Tree kids[2];
 Node node;
 union {
  Value v;
  Symbol sym;

  Field field;
 } u;
};
enum {
 AND=38<<4,
 NOT=39<<4,
 OR=40<<4,
 COND=41<<4,
 RIGHT=42<<4,
 FIELD=43<<4
};
struct type {
 int op;
 Type type;
 int align;
 int size;
 union {
  Symbol sym;
  struct {
   unsigned oldstyle:1;
   Type *proto;
  } f;
 } u;
 Xtype x;
};
struct field {
 char *name;
 Type type;
 int offset;
 short bitsize;
 short lsb;
 Field link;
};
extern int assignargs;
extern int prunetemps;
extern int nodecount;
extern Symbol cfunc;
extern Symbol retv;
extern Tree (*optree[])(int, Tree, Tree);

extern char kind[];
extern int errcnt;
extern int errlimit;
extern int wflag;
extern Events events;
extern float refinc;

extern unsigned char *cp;
extern unsigned char *limit;
extern char *firstfile;
extern char *file;
extern char *line;
extern int lineno;
extern int t;
extern char *token;
extern Symbol tsym;
extern Coordinate src;
extern int Aflag;
extern int Pflag;
extern Symbol YYnull;
extern Symbol YYcheck;
extern int glevel;
extern int xref;

extern int ncalled;
extern int npoints;

extern int needconst;
extern int explicitCast;
extern struct code codehead;
extern Code codelist;
extern Table stmtlabs;
extern float density;
extern Table constants;
extern Table externals;
extern Table globals;
extern Table identifiers;
extern Table labels;
extern Table types;
extern int level;

extern List loci, symbols;

extern List symbols;

extern int where;
extern Type chartype;
extern Type doubletype;
extern Type floattype;
extern Type inttype;
extern Type longdouble;
extern Type longtype;
extern Type longlong;
extern Type shorttype;
extern Type signedchar;
extern Type unsignedchar;
extern Type unsignedlonglong;
extern Type unsignedlong;
extern Type unsignedshort;
extern Type unsignedtype;
extern Type charptype;
extern Type funcptype;
extern Type voidptype;
extern Type voidtype;
extern Type unsignedptr;
extern Type signedptr;
extern Type widechar;
extern void *allocate(unsigned long n, unsigned a);
extern void deallocate(unsigned a);
extern void *newarray(unsigned long m, unsigned long n, unsigned a);
extern void walk(Tree e, int tlab, int flab);
extern Node listnodes(Tree e, int tlab, int flab);
extern Node newnode(int op, Node left, Node right, Symbol p);
extern Tree cvtconst(Tree);
extern void printdag(Node, int);
extern void compound(int, Swtch, int);
extern void defglobal(Symbol, int);
extern void finalize(void);
extern void program(void);

extern Tree vcall(Symbol func, Type ty, ...);
extern Tree addrof(Tree);
extern Tree asgn(Symbol, Tree);
extern Tree asgntree(int, Tree, Tree);
extern Type assign(Type, Tree);
extern Tree bittree(int, Tree, Tree);
extern Tree call(Tree, Type, Coordinate);
extern Tree calltree(Tree, Type, Tree, Symbol);
extern Tree condtree(Tree, Tree, Tree);
extern Tree cnsttree(Type, ...);
extern Tree consttree(int, Type);
extern Tree eqtree(int, Tree, Tree);
extern int iscallb(Tree);
extern Tree shtree(int, Tree, Tree);
extern void typeerror(int, Tree, Tree);

extern void test(int tok, char set[]);
extern void expect(int tok);
extern void skipto(int tok, char set[]);
extern void error(const char *, ...);
extern int fatal(const char *, const char *, int);
extern void warning(const char *, ...);

typedef void (*Apply)(void *, void *, void *);
extern void attach(Apply, void *, List *);
extern void apply(List event, void *arg1, void *arg2);
extern Tree retype(Tree p, Type ty);
extern Tree rightkid(Tree p);
extern int hascall(Tree p);
extern Type binary(Type, Type);
extern Tree cast(Tree, Type);
extern Tree cond(Tree);
extern Tree expr0(int);
extern Tree expr(int);
extern Tree expr1(int);
extern Tree field(Tree, const char *);
extern char *funcname(Tree);
extern Tree idtree(Symbol);
extern Tree incr(int, Tree, Tree);
extern Tree lvalue(Tree);
extern Tree nullcall(Type, Symbol, Tree, Tree);
extern Tree pointer(Tree);
extern Tree rvalue(Tree);
extern Tree value(Tree);

extern void defpointer(Symbol);
extern Type initializer(Type, int);
extern void swtoseg(int);

extern void input_init(int, char *[]);
extern void fillbuf(void);
extern void nextline(void);

extern int getchr(void);
extern int gettok(void);

extern void emitcode(void);
extern void gencode (Symbol[], Symbol[]);
extern void fprint(FILE *f, const char *fmt, ...);
extern char *stringf(const char *, ...);
extern void check(Node);
extern void print(const char *, ...);

extern List append(void *x, List list);
extern int length(List list);
extern void *ltov (List *list, unsigned a);
extern void init(int, char *[]);

extern Type typename(void);
extern void checklab(Symbol p, void *cl);
extern Type enumdcl(void);
extern void main_init(int, char *[]);
extern int main(int, char *[]);

extern void vfprint(FILE *, char *, const char *, va_list);

void profInit(char *);
extern int process(char *);
extern int findfunc(char *, char *);
extern int findcount(char *, int, int);

extern Tree constexpr(int);
extern int intexpr(int, int);
extern Tree simplify(int, Type, Tree, Tree);
extern int ispow2(unsigned long u);

extern int reachable(int);

extern void addlocal(Symbol);
extern void branch(int);
extern Code code(int);
extern void definelab(int);
extern void definept(Coordinate *);
extern void equatelab(Symbol, Symbol);
extern Node jump(int);
extern void retcode(Tree);
extern void statement(int, Swtch, int);
extern void swcode(Swtch, int *, int, int);
extern void swgen(Swtch);

extern char * string(const char *str);
extern char *stringn(const char *str, int len);
extern char *stringd(long n);
extern Symbol relocate(const char *name, Table src, Table dst);
extern void use(Symbol p, Coordinate src);
extern void locus(Table tp, Coordinate *cp);
extern Symbol allsymbols(Table);

extern Symbol constant(Type, Value);
extern void enterscope(void);
extern void exitscope(void);
extern Symbol findlabel(int);
extern Symbol findtype(Type);
extern void foreach(Table, int, void (*)(Symbol, void *), void *);
extern Symbol genident(int, Type, int);
extern int genlabel(int);
extern Symbol install(const char *, Table *, int, int);
extern Symbol intconst(int);
extern Symbol lookup(const char *, Table);
extern Symbol mkstr(char *);
extern Symbol mksymbol(int, const char *, Type);
extern Symbol newtemp(int, int, int);
extern Table newtable(int);
extern Table table(Table, int);
extern Symbol temporary(int, Type);
extern char *vtoa(Type, Value);

extern void traceInit(char *);
extern int nodeid(Tree);
extern char *opname(int);
extern int *printed(int);
extern void printtree(Tree, int);
extern Tree root(Tree);
extern Tree texpr(Tree (*)(int), int, int);
extern Tree tree(int, Type, Tree, Tree);

extern void type_init(int, char *[]);

extern Type signedint(Type);

extern int hasproto(Type);
extern void outtype(Type, FILE *);
extern void printdecl (Symbol p, Type ty);
extern void printproto(Symbol p, Symbol args[]);
extern char *typestring(Type ty, char *id);
extern Field fieldref(const char *name, Type ty);
extern Type array(Type, int, int);
extern Type atop(Type);
extern Type btot(int, int);
extern Type compose(Type, Type);
extern Type deref(Type);
extern int eqtype(Type, Type, int);
extern Field fieldlist(Type);
extern Type freturn(Type);
extern Type ftype(Type, ...);
extern Type func(Type, Type *, int);
extern Field newfield(char *, Type, Type);
extern Type newstruct(int, char *);
extern void printtype(Type, int);
extern Type promote(Type);
extern Type ptr(Type);
extern Type qual(int, Type);
extern void rmtypes(int);
extern int ttob(Type);
extern int variadic(Type);
# 2 "src/decl.c" 2

static char rcsid[] = "$Id$";




static int regcount;

static List autos, registers;
Symbol cfunc;
Symbol retv;

static void checkref(Symbol, void *);
static Symbol dclglobal(int, char *, Type, Coordinate *);
static Symbol dcllocal(int, char *, Type, Coordinate *);
static Symbol dclparam(int, char *, Type, Coordinate *);
static Type dclr(Type, char **, Symbol **, int);
static Type dclr1(char **, Symbol **, int);
static void decl(Symbol (*)(int, char *, Type, Coordinate *));
extern void doconst(Symbol, void *);
static void doglobal(Symbol, void *);
static void doextern(Symbol, void *);
static void exitparams(Symbol []);
static void fields(Type);
static void funcdefn(int, char *, Type, Symbol [], Coordinate);
static void initglobal(Symbol, int);
static void oldparam(Symbol, void *);
static Symbol *parameters(Type);
static Type specifier(int *);
static Type structdcl(int);
static Type tnode(int, Type);
void program(void) {
 int n;

 level = GLOBAL;
 for (n = 0; t != EOI; n++)
  if (kind[t] == CHAR || kind[t] == STATIC
  || t == ID || t == '*' || t == '(') {
   decl(dclglobal);
   deallocate(STMT);
   if (!(glevel >= 3 || xref))
   deallocate(FUNC);
  } else if (t == ';') {
   warning("empty declaration\n");
   t = gettok();
  } else {
   error("unrecognized declaration\n");
   t = gettok();
  }
 if (n == 0)
  warning("empty input file\n");
}
static Type specifier(int *sclass) {
 int cls, cons, sign, size, type, vol;
 Type ty = 
# 56 "src/decl.c" 3 4
          ((void*)0)
# 56 "src/decl.c"
              ;

 cls = vol = cons = sign = size = type = 0;
 if (sclass == 
# 59 "src/decl.c" 3 4
              ((void*)0)
# 59 "src/decl.c"
                  )
  cls = AUTO;
 for (;;) {
  int *p, tt = t;
  switch (t) {
  case AUTO:
  case REGISTER: if (level <= GLOBAL && cls == 0)
                  error("invalid use of `%k'\n", t);
                 p = &cls; t = gettok(); break;
  case STATIC: case EXTERN:
  case TYPEDEF: p = &cls; t = gettok(); break;
  case CONST: p = &cons; t = gettok(); break;
  case VOLATILE: p = &vol; t = gettok(); break;
  case SIGNED:
  case UNSIGNED: p = &sign; t = gettok(); break;
  case LONG: if (size == LONG) {
                         size = 0;
                         tt = LONG+LONG;
                 }
                 p = &size; t = gettok(); break;
  case SHORT: p = &size; t = gettok(); break;
  case VOID: case CHAR: case INT: case FLOAT:
  case DOUBLE: p = &type; ty = tsym->type;
                            t = gettok(); break;
  case ENUM: p = &type; ty = enumdcl(); break;
  case STRUCT:
  case UNION: p = &type; ty = structdcl(t); break;
  case ID:
   if ((kind[t] == CHAR || t == ID && tsym && tsym->sclass == TYPEDEF) && type == 0
   && sign == 0 && size == 0) {
    use(tsym, src);
    ty = tsym->type;
    if (((ty)->op >= CONST)
    && ty->size != ty->type->size) {
     ty = (((ty)->op >= CONST) ? (ty)->type : (ty));
     if (((tsym->type)->op == CONST || (tsym->type)->op == CONST+VOLATILE))
      ty = qual(CONST, ty);
     if (((tsym->type)->op == VOLATILE || (tsym->type)->op == CONST+VOLATILE))
      ty = qual(VOLATILE, ty);
     tsym->type = ty;
    }
    p = &type;
    t = gettok();
   } else
    p = 
# 103 "src/decl.c" 3 4
       ((void*)0)
# 103 "src/decl.c"
           ;
   break;
  default: p = 
# 105 "src/decl.c" 3 4
              ((void*)0)
# 105 "src/decl.c"
                  ;
  }
  if (p == 
# 107 "src/decl.c" 3 4
          ((void*)0)
# 107 "src/decl.c"
              )
   break;
  if (*p)
   error("invalid use of `%k'\n", tt);
  *p = tt;
 }
 if (sclass)
  *sclass = cls;
 if (type == 0) {
  type = INT;
  ty = inttype;
 }
 if (size == SHORT && type != INT
 || size == LONG+LONG && type != INT
 || size == LONG && type != INT && type != DOUBLE
 || sign && type != INT && type != CHAR)
  error("invalid type specification\n");
 if (type == CHAR && sign)
  ty = sign == UNSIGNED ? unsignedchar : signedchar;
 else if (size == SHORT)
  ty = sign == UNSIGNED ? unsignedshort : shorttype;
 else if (size == LONG && type == DOUBLE)
  ty = longdouble;
 else if (size == LONG+LONG) {
  ty = sign == UNSIGNED ? unsignedlonglong : longlong;
  if (Aflag >= 1)
   warning("`%t' is a non-ANSI type\n", ty);
 } else if (size == LONG)
  ty = sign == UNSIGNED ? unsignedlong : longtype;
 else if (sign == UNSIGNED && type == INT)
  ty = unsignedtype;
 if (cons == CONST)
  ty = qual(CONST, ty);
 if (vol == VOLATILE)
  ty = qual(VOLATILE, ty);
 return ty;
}
static void decl(Symbol (*dcl)(int, char *, Type, Coordinate *)) {
 int sclass;
 Type ty, ty1;
 static char stop[] = { CHAR, STATIC, ID, 0 };

 ty = specifier(&sclass);
 if (t == ID || t == '*' || t == '(' || t == '[') {
  char *id;
  Coordinate pos;
  id = 
# 153 "src/decl.c" 3 4
      ((void*)0)
# 153 "src/decl.c"
          ;
  pos = src;
  if (level == GLOBAL) {
   Symbol *params = 
# 156 "src/decl.c" 3 4
                   ((void*)0)
# 156 "src/decl.c"
                       ;
   ty1 = dclr(ty, &id, &params, 0);
   if (params && id && ((((ty1)->op >= CONST) ? (ty1)->type : (ty1))->op == FUNCTION)
       && (t == '{' || (kind[t] == CHAR || t == ID && tsym && tsym->sclass == TYPEDEF)
       || (kind[t] == STATIC && t != TYPEDEF))) {
    if (sclass == TYPEDEF) {
     error("invalid use of `typedef'\n");
     sclass = EXTERN;
    }
    if (ty1->u.f.oldstyle)
     exitscope();
    funcdefn(sclass, id, ty1, params, pos);
    return;
   } else if (params)
    exitparams(params);
  } else
   ty1 = dclr(ty, &id, 
# 172 "src/decl.c" 3 4
                      ((void*)0)
# 172 "src/decl.c"
                          , 0);
  for (;;) {
   if (Aflag >= 1 && !hasproto(ty1))
    warning("missing prototype\n");
   if (id == 
# 176 "src/decl.c" 3 4
            ((void*)0)
# 176 "src/decl.c"
                )
    error("missing identifier\n");
   else if (sclass == TYPEDEF)
    {
     Symbol p = lookup(id, identifiers);
     if (p && p->scope == level)
      error("redeclaration of `%s'\n", id);
     p = install(id, &identifiers, level,
      level < LOCAL ? PERM : FUNC);
     p->type = ty1;
     p->sclass = TYPEDEF;
     p->src = pos;
    }
   else
    (void)(*dcl)(sclass, id, ty1, &pos);
   if (t != ',')
    break;
   t = gettok();
   id = 
# 194 "src/decl.c" 3 4
       ((void*)0)
# 194 "src/decl.c"
           ;
   pos = src;
   ty1 = dclr(ty, &id, 
# 196 "src/decl.c" 3 4
                      ((void*)0)
# 196 "src/decl.c"
                          , 0);
  }
 } else if (ty == 
# 198 "src/decl.c" 3 4
                 ((void*)0)
 
# 199 "src/decl.c"
|| !(((((ty)->op >= CONST) ? (ty)->type : (ty))->op == ENUM) ||
      ((((ty)->op >= CONST) ? (ty)->type : (ty))->op == STRUCT || (((ty)->op >= CONST) ? (ty)->type : (ty))->op == UNION) && (*(((ty)->op >= CONST) ? (ty)->type : (ty))->u.sym->name < '1' || *(((ty)->op >= CONST) ? (ty)->type : (ty))->u.sym->name > '9')))
  error("empty declaration\n");
 test(';', stop);
}
static Symbol dclglobal(int sclass, char *id, Type ty, Coordinate *pos) {
 Symbol p;

 if (sclass == 0)
  sclass = AUTO;
 else if (sclass != EXTERN && sclass != STATIC) {
  error("invalid storage class `%k' for `%t %s'\n",
   sclass, ty, id);
  sclass = AUTO;
 }
 p = lookup(id, identifiers);
 if (p && p->scope == GLOBAL) {
  if (p->sclass != TYPEDEF && eqtype(ty, p->type, 1))
   ty = compose(ty, p->type);
  else
   error("redeclaration of `%s' previously declared at %w\n", p->name, &p->src);

  if (!((((ty)->op >= CONST) ? (ty)->type : (ty))->op == FUNCTION) && p->defined && t == '=')
   error("redefinition of `%s' previously defined at %w\n", p->name, &p->src);

  if (p->sclass == EXTERN && sclass == STATIC
  || p->sclass == STATIC && sclass == AUTO
  || p->sclass == AUTO && sclass == STATIC)
   warning("inconsistent linkage for `%s' previously declared at %w\n", p->name, &p->src);

 }
 if (p == 
# 230 "src/decl.c" 3 4
         ((void*)0) 
# 230 "src/decl.c"
              || p->scope != GLOBAL) {
  Symbol q = lookup(id, externals);
  if (q) {
   if (sclass == STATIC || !eqtype(ty, q->type, 1))
    warning("declaration of `%s' does not match previous declaration at %w\n", id, &q->src);

   p = relocate(id, externals, globals);
   p->sclass = sclass;
  } else {
   p = install(id, &globals, GLOBAL, PERM);
   p->sclass = sclass;
   (*IR->defsymbol)(p);
  }
  if (p->sclass != STATIC) {
   static int nglobals;
   nglobals++;
   if (Aflag >= 2 && nglobals == 512)
    warning("more than 511 external identifiers\n");
  }
 } else if (p->sclass == EXTERN)
  p->sclass = sclass;
 p->type = ty;
 p->src = *pos;
 if (t == '=' && ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION)) {
  error("illegal initialization for `%s'\n", p->name);
  t = gettok();
  initializer(p->type, 0);
 } else if (t == '=') {
  initglobal(p, 0);
  if (glevel > 0 && IR->stabsym) {
   (*IR->stabsym)(p); swtoseg(p->u.seg); }
 } else if (p->sclass == STATIC && !((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION)
 && p->type->size == 0)
  error("undefined size for `%t %s'\n", p->type, p->name);
 return p;
}
static void initglobal(Symbol p, int flag) {
 Type ty;

 if (t == '=' || flag) {
  if (p->sclass == STATIC) {
   for (ty = p->type; ((((ty)->op >= CONST) ? (ty)->type : (ty))->op == ARRAY); ty = ty->type)
    ;
   defglobal(p, ((ty)->op == CONST || (ty)->op == CONST+VOLATILE) ? LIT : DATA);
  } else
   defglobal(p, DATA);
  if (t == '=')
   t = gettok();
  ty = initializer(p->type, 0);
  if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == ARRAY) && p->type->size == 0)
   p->type = ty;
  if (p->sclass == EXTERN)
   p->sclass = AUTO;
 }
}
void defglobal(Symbol p, int seg) {
 p->u.seg = seg;
 swtoseg(p->u.seg);
 if (p->sclass != STATIC)
  (*IR->export)(p);
 (*IR->global)(p);
 p->defined = 1;
}

static Type dclr(Type basety, char **id, Symbol **params, int abstract) {
 Type ty = dclr1(id, params, abstract);

 for ( ; ty; ty = ty->type)
  switch (ty->op) {
  case POINTER:
   basety = ptr(basety);
   break;
  case FUNCTION:
   basety = func(basety, ty->u.f.proto,
    ty->u.f.oldstyle);
   break;
  case ARRAY:
   basety = array(basety, ty->size, 0);
   break;
  case CONST: case VOLATILE:
   basety = qual(ty->op, basety);
   break;
  default: 
# 312 "src/decl.c" 3 4
          ((void)((
# 312 "src/decl.c"
          0
# 312 "src/decl.c" 3 4
          ) || (__assert_fail(
# 312 "src/decl.c"
          "0"
# 312 "src/decl.c" 3 4
          , "src/decl.c", 312, __func__),0)))
# 312 "src/decl.c"
                   ;
  }
 if (Aflag >= 2 && basety->size > 32767)
  warning("more than 32767 bytes in `%t'\n", basety);
 return basety;
}
static Type tnode(int op, Type type) {
 Type ty;

 memset((((ty)) = allocate(sizeof *((ty)), ((STMT)))), 0, sizeof *(ty));
 ty->op = op;
 ty->type = type;
 return ty;
}
static Type dclr1(char **id, Symbol **params, int abstract) {
 Type ty = 
# 327 "src/decl.c" 3 4
          ((void*)0)
# 327 "src/decl.c"
              ;

 switch (t) {
 case ID: if (id)
     *id = token;
    else
     error("extraneous identifier `%s'\n", token);
    t = gettok(); break;
 case '*': t = gettok(); if (t == CONST || t == VOLATILE) {
     Type ty1;
     ty1 = ty = tnode(t, 
# 337 "src/decl.c" 3 4
                        ((void*)0)
# 337 "src/decl.c"
                            );
     while ((t = gettok()) == CONST || t == VOLATILE)
      ty1 = tnode(t, ty1);
     ty->type = dclr1(id, params, abstract);
     ty = ty1;
    } else
     ty = dclr1(id, params, abstract);
    ty = tnode(POINTER, ty); break;
 case '(': t = gettok(); if (abstract
    && (t == REGISTER || (kind[t] == CHAR || t == ID && tsym && tsym->sclass == TYPEDEF) || t == ')')) {
     Symbol *args;
     ty = tnode(FUNCTION, ty);
     enterscope();
     if (level > PARAM)
      enterscope();
     args = parameters(ty);
     exitparams(args);
    } else {
     ty = dclr1(id, params, abstract);
     expect(')');
     if (abstract && ty == 
# 357 "src/decl.c" 3 4
                          ((void*)0)
     
# 358 "src/decl.c"
    && (id == 
# 358 "src/decl.c" 3 4
              ((void*)0) 
# 358 "src/decl.c"
                   || *id == 
# 358 "src/decl.c" 3 4
                             ((void*)0)
# 358 "src/decl.c"
                                 ))
      return tnode(FUNCTION, 
# 359 "src/decl.c" 3 4
                            ((void*)0)
# 359 "src/decl.c"
                                );
    } break;
 case '[': break;
 default: return ty;
 }
 while (t == '(' || t == '[')
  switch (t) {
  case '(': t = gettok(); { Symbol *args;
       ty = tnode(FUNCTION, ty);
       enterscope();
       if (level > PARAM)
        enterscope();
       args = parameters(ty);
       if (params && *params == 
# 372 "src/decl.c" 3 4
                               ((void*)0)
# 372 "src/decl.c"
                                   )
        *params = args;
       else
        exitparams(args);
 }
            break;
  case '[': t = gettok(); { int n = 0;
       if (kind[t] == ID) {
        n = intexpr(']', 1);
        if (n <= 0) {
         error("`%d' is an illegal array size\n", n);
         n = 1;
        }
       } else
        expect(']');
       ty = tnode(ARRAY, ty);
       ty->size = n; } break;
  default: 
# 389 "src/decl.c" 3 4
          ((void)((
# 389 "src/decl.c"
          0
# 389 "src/decl.c" 3 4
          ) || (__assert_fail(
# 389 "src/decl.c"
          "0"
# 389 "src/decl.c" 3 4
          , "src/decl.c", 389, __func__),0)))
# 389 "src/decl.c"
                   ;
  }
 return ty;
}
static Symbol *parameters(Type fty) {
 List list = 
# 394 "src/decl.c" 3 4
            ((void*)0)
# 394 "src/decl.c"
                ;
 Symbol *params;

 if (kind[t] == STATIC || (kind[t] == CHAR || t == ID && tsym && tsym->sclass == TYPEDEF)) {
  int n = 0;
  Type ty1 = 
# 399 "src/decl.c" 3 4
            ((void*)0)
# 399 "src/decl.c"
                ;
  for (;;) {
   Type ty;
   int sclass = 0;
   char *id = 
# 403 "src/decl.c" 3 4
             ((void*)0)
# 403 "src/decl.c"
                 ;
   if (ty1 && t == ELLIPSIS) {
    static struct symbol sentinel;
    if (sentinel.type == 
# 406 "src/decl.c" 3 4
                        ((void*)0)
# 406 "src/decl.c"
                            ) {
     sentinel.type = voidtype;
     sentinel.defined = 1;
    }
    if (ty1 == voidtype)
     error("illegal formal parameter types\n");
    list = append(&sentinel, list);
    t = gettok();
    break;
   }
   if (!(kind[t] == CHAR || t == ID && tsym && tsym->sclass == TYPEDEF) && t != REGISTER)
    error("missing parameter type\n");
   n++;
   ty = dclr(specifier(&sclass), &id, 
# 419 "src/decl.c" 3 4
                                     ((void*)0)
# 419 "src/decl.c"
                                         , 1);
   if ( ty == voidtype && (ty1 || id)
   || ty1 == voidtype)
    error("illegal formal parameter types\n");
   if (id == 
# 423 "src/decl.c" 3 4
            ((void*)0)
# 423 "src/decl.c"
                )
    id = stringd(n);
   if (ty != voidtype)
    list = append(dclparam(sclass, id, ty, &src), list);
   if (Aflag >= 1 && !hasproto(ty))
    warning("missing prototype\n");
   if (ty1 == 
# 429 "src/decl.c" 3 4
             ((void*)0)
# 429 "src/decl.c"
                 )
    ty1 = ty;
   if (t != ',')
    break;
   t = gettok();
  }
  fty->u.f.proto = newarray(length(list) + 1,
   sizeof (Type *), PERM);
  params = ltov(&list, FUNC);
  for (n = 0; params[n]; n++)
   fty->u.f.proto[n] = params[n]->type;
  fty->u.f.proto[n] = 
# 440 "src/decl.c" 3 4
                     ((void*)0)
# 440 "src/decl.c"
                         ;
  fty->u.f.oldstyle = 0;
 } else {
  if (t == ID)
   for (;;) {
    Symbol p;
    if (t != ID) {
     error("expecting an identifier\n");
     break;
    }
    p = dclparam(0, token, inttype, &src);
    p->defined = 0;
    list = append(p, list);
    t = gettok();
    if (t != ',')
     break;
    t = gettok();
   }
  params = ltov(&list, FUNC);
  fty->u.f.proto = 
# 459 "src/decl.c" 3 4
                  ((void*)0)
# 459 "src/decl.c"
                      ;
  fty->u.f.oldstyle = 1;
 }
 if (t != ')') {
  static char stop[] = { CHAR, STATIC, IF, ')', 0 };
  expect(')');
  skipto('{', stop);
 }
 if (t == ')')
  t = gettok();
 return params;
}
static void exitparams(Symbol params[]) {
 
# 472 "src/decl.c" 3 4
((void)((
# 472 "src/decl.c"
params
# 472 "src/decl.c" 3 4
) || (__assert_fail(
# 472 "src/decl.c"
"params"
# 472 "src/decl.c" 3 4
, "src/decl.c", 472, __func__),0)))
# 472 "src/decl.c"
              ;
 if (params[0] && !params[0]->defined)
  error("extraneous old-style parameter list\n");
 if (level > PARAM)
  exitscope();
 exitscope();
}

static Symbol dclparam(int sclass, char *id, Type ty, Coordinate *pos) {
 Symbol p;

 if (((((ty)->op >= CONST) ? (ty)->type : (ty))->op == FUNCTION))
  ty = ptr(ty);
 else if (((((ty)->op >= CONST) ? (ty)->type : (ty))->op == ARRAY))
  ty = atop(ty);
 if (sclass == 0)
  sclass = AUTO;
 else if (sclass != REGISTER) {
  error("invalid storage class `%k' for `%t%s\n",
   sclass, ty, stringf(id ? " %s'" : "' parameter", id));
  sclass = AUTO;
 } else if (((ty)->op == VOLATILE || (ty)->op == CONST+VOLATILE) || ((((ty)->op >= CONST) ? (ty)->type : (ty))->op == STRUCT || (((ty)->op >= CONST) ? (ty)->type : (ty))->op == UNION)) {
  warning("register declaration ignored for `%t%s\n",
   ty, stringf(id ? " %s'" : "' parameter", id));
  sclass = AUTO;
 }

 p = lookup(id, identifiers);
 if (p && p->scope == level)
  error("duplicate declaration for `%s' previously declared at %w\n", id, &p->src);

 else
  p = install(id, &identifiers, level, FUNC);
 p->sclass = sclass;
 p->src = *pos;
 p->type = ty;
 p->defined = 1;
 if (t == '=') {
  error("illegal initialization for parameter `%s'\n", id);
  t = gettok();
  (void)expr1(0);
 }
 return p;
}
static Type structdcl(int op) {
 char *tag;
 Type ty;
 Symbol p;
 Coordinate pos;

 t = gettok();
 pos = src;
 if (t == ID) {
  tag = token;
  t = gettok();
 } else
  tag = "";
 if (t == '{') {
  static char stop[] = { IF, ',', 0 };
  ty = newstruct(op, tag);
  ty->u.sym->src = pos;
  ty->u.sym->defined = 1;
  t = gettok();
  if ((kind[t] == CHAR || t == ID && tsym && tsym->sclass == TYPEDEF))
   fields(ty);
  else
   error("invalid %k field declarations\n", op);
  test('}', stop);
 }
 else if (*tag && (p = lookup(tag, types)) != 
# 541 "src/decl.c" 3 4
                                             ((void*)0)
 
# 542 "src/decl.c"
&& p->type->op == op) {
  ty = p->type;
  if (t == ';' && p->scope < level)
   ty = newstruct(op, tag);
 }
 else {
  if (*tag == 0)
   error("missing %k tag\n", op);
  ty = newstruct(op, tag);
 }
 if (*tag && xref)
  use(ty->u.sym, pos);
 return ty;
}
static void fields(Type ty) {
 { int n = 0;
   while ((kind[t] == CHAR || t == ID && tsym && tsym->sclass == TYPEDEF)) {
    static char stop[] = { IF, CHAR, '}', 0 };
    Type ty1 = specifier(
# 560 "src/decl.c" 3 4
                        ((void*)0)
# 560 "src/decl.c"
                            );
    for (;;) {
     Field p;
     char *id = 
# 563 "src/decl.c" 3 4
               ((void*)0)
# 563 "src/decl.c"
                   ;
     Type fty = dclr(ty1, &id, 
# 564 "src/decl.c" 3 4
                              ((void*)0)
# 564 "src/decl.c"
                                  , 0);
   p = newfield(id, ty, fty);
   if (Aflag >= 1 && !hasproto(p->type))
    warning("missing prototype\n");
   if (t == ':') {
    if ((((p->type)->op >= CONST) ? (p->type)->type : (p->type)) != inttype
    && (((p->type)->op >= CONST) ? (p->type)->type : (p->type)) != unsignedtype) {
     error("`%t' is an illegal bit-field type\n",
      p->type);
     p->type = inttype;
    }
    t = gettok();
    p->bitsize = intexpr(0, 0);
    if (p->bitsize > 8*inttype->size || p->bitsize < 0) {
     error("`%d' is an illegal bit-field size\n",
      p->bitsize);
     p->bitsize = 8*inttype->size;
    } else if (p->bitsize == 0 && id) {
     warning("extraneous 0-width bit field `%t %s' ignored\n", p->type, id);

     p->name = stringd(genlabel(1));
    }
    p->lsb = 1;
   }
   else {
    if (id == 
# 589 "src/decl.c" 3 4
             ((void*)0)
# 589 "src/decl.c"
                 )
     error("field name missing\n");
    else if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION))
     error("`%t' is an illegal field type\n", p->type);
    else if (p->type->size == 0)
     error("undefined size for field `%t %s'\n",
      p->type, id);
   }
   if (((p->type)->op == CONST || (p->type)->op == CONST+VOLATILE))
    ty->u.sym->u.s.cfields = 1;
   if (((p->type)->op == VOLATILE || (p->type)->op == CONST+VOLATILE))
    ty->u.sym->u.s.vfields = 1;
     n++;
     if (Aflag >= 2 && n == 128)
      warning("more than 127 fields in `%t'\n", ty);
     if (t != ',')
      break;
     t = gettok();
    }
    test(';', stop);
   } }
 { int bits = 0, off = 0, overflow = 0;
   Field p, *q = &ty->u.sym->u.s.flist;
   ty->align = IR->structmetric.align;
   for (p = *q; p; p = p->link) {
    int a = p->type->align ? p->type->align : 1;
  if (p->lsb)
   a = unsignedtype->align;
  if (ty->op == UNION)
   off = bits = 0;
  else if (p->bitsize == 0 || bits == 0
  || bits - 1 + p->bitsize > 8*unsignedtype->size) {
   off = (off > inttype->u.sym->u.limits.max.i-((((bits-1) + 7)/8)) ? (overflow=1,off) : off+((((bits-1) + 7)/8)));
   bits = 0;
   ((void)(off > inttype->u.sym->u.limits.max.i-(a - 1) ? (overflow=1,off) : off+(a - 1)));
   off = (((off)+((a)-1))&(~((a)-1)));
  }
  if (a > ty->align)
   ty->align = a;
  p->offset = off;

  if (p->lsb) {
   if (bits == 0)
    bits = 1;
   if (IR->little_endian)
    p->lsb = bits;
   else
    p->lsb = 8*unsignedtype->size - bits + 1
     - p->bitsize + 1;
   bits += p->bitsize;
  } else
   off = (off > inttype->u.sym->u.limits.max.i-(p->type->size) ? (overflow=1,off) : off+(p->type->size));
  if (off + (((bits-1) + 7)/8) > ty->size)
   ty->size = off + (((bits-1) + 7)/8);
    if (p->name == 
# 643 "src/decl.c" 3 4
                  ((void*)0)
    
# 644 "src/decl.c"
   || !('1' <= *p->name && *p->name <= '9')) {
     *q = p;
     q = &p->link;
    }
   }
   *q = 
# 649 "src/decl.c" 3 4
       ((void*)0)
# 649 "src/decl.c"
           ;
   ((void)(ty->size > inttype->u.sym->u.limits.max.i-(ty->align - 1) ? (overflow=1,ty->size) : ty->size+(ty->align - 1)));
   ty->size = (((ty->size)+((ty->align)-1))&(~((ty->align)-1)));
   if (overflow) {
    error("size of `%t' exceeds %d bytes\n", ty, inttype->u.sym->u.limits.max.i);
    ty->size = inttype->u.sym->u.limits.max.i&(~(ty->align - 1));
   } }
}
static void funcdefn(int sclass, char *id, Type ty, Symbol params[], Coordinate pt) {
 int i, n;
 Symbol *callee, *caller, p;
 Type rty = freturn(ty);

 if (((((rty)->op >= CONST) ? (rty)->type : (rty))->op == STRUCT || (((rty)->op >= CONST) ? (rty)->type : (rty))->op == UNION) && rty->size == 0)
  error("illegal use of incomplete type `%t'\n", rty);
 for (n = 0; params[n]; n++)
  ;
 if (n > 0 && params[n-1]->name == 
# 666 "src/decl.c" 3 4
                                  ((void*)0)
# 666 "src/decl.c"
                                      )
  params[--n] = 
# 667 "src/decl.c" 3 4
               ((void*)0)
# 667 "src/decl.c"
                   ;
 if (Aflag >= 2 && n > 31)
  warning("more than 31 parameters in function `%s'\n", id);
 if (ty->u.f.oldstyle) {
  if (Aflag >= 1)
   warning("old-style function definition for `%s'\n", id);
  caller = params;
  callee = newarray(n + 1, sizeof *callee, FUNC);
  memcpy(callee, caller, (n+1)*sizeof *callee);
  enterscope();
  
# 677 "src/decl.c" 3 4
 ((void)((
# 677 "src/decl.c"
 level == PARAM
# 677 "src/decl.c" 3 4
 ) || (__assert_fail(
# 677 "src/decl.c"
 "level == PARAM"
# 677 "src/decl.c" 3 4
 , "src/decl.c", 677, __func__),0)))
# 677 "src/decl.c"
                       ;
  while (kind[t] == STATIC || (kind[t] == CHAR || t == ID && tsym && tsym->sclass == TYPEDEF))
   decl(dclparam);
  foreach(identifiers, PARAM, oldparam, callee);

  for (i = 0; (p = callee[i]) != 
# 682 "src/decl.c" 3 4
                                ((void*)0)
# 682 "src/decl.c"
                                    ; i++) {
   if (!p->defined)
    callee[i] = dclparam(0, p->name, inttype, &p->src);
   *caller[i] = *p;
   caller[i]->sclass = AUTO;
   caller[i]->type = promote(p->type);
  }
  p = lookup(id, identifiers);
  if (p && p->scope == GLOBAL && ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION)
  && p->type->u.f.proto) {
   Type *proto = p->type->u.f.proto;
   for (i = 0; caller[i] && proto[i]; i++) {
    Type ty = (((proto[i])->op >= CONST) ? (proto[i])->type : (proto[i]));
    if (eqtype(((((ty)->op >= CONST) ? (ty)->type : (ty))->op == ENUM) ? ty->type : ty,
     (((caller[i]->type)->op >= CONST) ? (caller[i]->type)->type : (caller[i]->type)), 1) == 0)
     break;
    else if (((((ty)->op >= CONST) ? (ty)->type : (ty))->op == ENUM) && !(((((((caller[i]->type)->op >= CONST) ? (caller[i]->type)->type : (caller[i]->type)))->op >= CONST) ? ((((caller[i]->type)->op >= CONST) ? (caller[i]->type)->type : (caller[i]->type)))->type : ((((caller[i]->type)->op >= CONST) ? (caller[i]->type)->type : (caller[i]->type))))->op == ENUM))
     warning("compatibility of `%t' and `%t' is compiler dependent\n",
      proto[i], caller[i]->type);
   }
   if (proto[i] || caller[i])
    error("conflicting argument declarations for function `%s'\n", id);

  }
  else {
   Type *proto = newarray(n + 1, sizeof *proto, PERM);
   if (Aflag >= 1)
    warning("missing prototype for `%s'\n", id);
   for (i = 0; i < n; i++)
    proto[i] = caller[i]->type;
   proto[i] = 
# 712 "src/decl.c" 3 4
             ((void*)0)
# 712 "src/decl.c"
                 ;
   ty = func(rty, proto, 1);
  }
 } else {
  callee = params;
  caller = newarray(n + 1, sizeof *caller, FUNC);
  for (i = 0; (p = callee[i]) != 
# 718 "src/decl.c" 3 4
                                ((void*)0) 
# 718 "src/decl.c"
                                     && p->name; i++) {
   ((caller[i]) = allocate(sizeof *(caller[i]), (FUNC)));
   *caller[i] = *p;
   if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == INT || (((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == UNSIGNED))
    caller[i]->type = promote(p->type);
   caller[i]->sclass = AUTO;
   if ('1' <= *p->name && *p->name <= '9')
    error("missing name for parameter %d to function `%s'\n", i + 1, id);

  }
  caller[i] = 
# 728 "src/decl.c" 3 4
             ((void*)0)
# 728 "src/decl.c"
                 ;
 }
 for (i = 0; (p = callee[i]) != 
# 730 "src/decl.c" 3 4
                               ((void*)0)
# 730 "src/decl.c"
                                   ; i++)
  if (p->type->size == 0) {
   error("undefined size for parameter `%t %s'\n",
    p->type, p->name);
   caller[i]->type = p->type = inttype;
  }
 if (Aflag >= 2 && sclass != STATIC && strcmp(id, "main") == 0) {
  if (ty->u.f.oldstyle)
   warning("`%t %s()' is a non-ANSI definition\n", rty, id);
  else if (!(rty == inttype
   && (n == 0 && callee[0] == 
# 740 "src/decl.c" 3 4
                             ((void*)0)
   
# 741 "src/decl.c"
  || n == 2 && callee[0]->type == inttype
   && ((((callee[1]->type)->op >= CONST) ? (callee[1]->type)->type : (callee[1]->type))->op == POINTER) && callee[1]->type->type == charptype
   && !variadic(ty))))
   warning("`%s' is a non-ANSI definition\n", typestring(ty, id));
 }
 p = lookup(id, identifiers);
 if (p && ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION) && p->defined)
  error("redefinition of `%s' previously defined at %w\n",
   p->name, &p->src);
 cfunc = dclglobal(sclass, id, ty, &pt);
 cfunc->u.f.label = genlabel(1);
 cfunc->u.f.callee = callee;
 cfunc->u.f.pt = src;
 cfunc->defined = 1;
 if (xref)
  use(cfunc, cfunc->src);
 if (Pflag)
  printproto(cfunc, cfunc->u.f.callee);
 if (ncalled >= 0)
  ncalled = findfunc(cfunc->name, pt.file);
 labels = table(
# 761 "src/decl.c" 3 4
                 ((void*)0)
# 761 "src/decl.c"
                     , LABELS);
 stmtlabs = table(
# 762 "src/decl.c" 3 4
                 ((void*)0)
# 762 "src/decl.c"
                     , LABELS);
 refinc = 1.0;
 regcount = 0;
 codelist = &codehead;
 codelist->next = 
# 766 "src/decl.c" 3 4
                 ((void*)0)
# 766 "src/decl.c"
                     ;
 if (!IR->wants_callb && ((((rty)->op >= CONST) ? (rty)->type : (rty))->op == STRUCT || (((rty)->op >= CONST) ? (rty)->type : (rty))->op == UNION))
  retv = genident(AUTO, ptr((((rty)->op >= CONST) ? (rty)->type : (rty))), PARAM);
 compound(0, 
# 769 "src/decl.c" 3 4
            ((void*)0)
# 769 "src/decl.c"
                , 0);

 definelab(cfunc->u.f.label);
 if (events.exit)
  apply(events.exit, cfunc, 
# 773 "src/decl.c" 3 4
                           ((void*)0)
# 773 "src/decl.c"
                               );
 walk(
# 774 "src/decl.c" 3 4
     ((void*)0)
# 774 "src/decl.c"
         , 0, 0);
 exitscope();
 
# 776 "src/decl.c" 3 4
((void)((
# 776 "src/decl.c"
level == PARAM
# 776 "src/decl.c" 3 4
) || (__assert_fail(
# 776 "src/decl.c"
"level == PARAM"
# 776 "src/decl.c" 3 4
, "src/decl.c", 776, __func__),0)))
# 776 "src/decl.c"
                      ;
 foreach(identifiers, level, checkref, 
# 777 "src/decl.c" 3 4
                                      ((void*)0)
# 777 "src/decl.c"
                                          );
 if (!IR->wants_callb && ((((rty)->op >= CONST) ? (rty)->type : (rty))->op == STRUCT || (((rty)->op >= CONST) ? (rty)->type : (rty))->op == UNION)) {
  Symbol *a;
  a = newarray(n + 2, sizeof *a, FUNC);
  a[0] = retv;
  memcpy(&a[1], callee, (n+1)*sizeof *callee);
  callee = a;
  a = newarray(n + 2, sizeof *a, FUNC);
  ((a[0]) = allocate(sizeof *(a[0]), (FUNC)));
  *a[0] = *retv;
  memcpy(&a[1], caller, (n+1)*sizeof *callee);
  caller = a;
 }
 if (!IR->wants_argb)
  for (i = 0; caller[i]; i++)
   if (((((caller[i]->type)->op >= CONST) ? (caller[i]->type)->type : (caller[i]->type))->op == STRUCT || (((caller[i]->type)->op >= CONST) ? (caller[i]->type)->type : (caller[i]->type))->op == UNION)) {
    caller[i]->type = ptr(caller[i]->type);
    callee[i]->type = ptr(callee[i]->type);
    caller[i]->structarg = callee[i]->structarg = 1;
   }
 if (glevel > 1) for (i = 0; callee[i]; i++) callee[i]->sclass = AUTO;
 if (cfunc->sclass != STATIC)
  (*IR->export)(cfunc);
 if (glevel && IR->stabsym) {
  swtoseg(CODE); (*IR->stabsym)(cfunc); }
 swtoseg(CODE);
 (*IR->function)(cfunc, caller, callee, cfunc->u.f.ncalls);
 if (glevel && IR->stabfend)
  (*IR->stabfend)(cfunc, lineno);
 foreach(stmtlabs, LABELS, checklab, 
# 806 "src/decl.c" 3 4
                                    ((void*)0)
# 806 "src/decl.c"
                                        );
 exitscope();
 expect('}');
 labels = stmtlabs = 
# 809 "src/decl.c" 3 4
                    ((void*)0)
# 809 "src/decl.c"
                        ;
 retv = 
# 810 "src/decl.c" 3 4
        ((void*)0)
# 810 "src/decl.c"
            ;
 cfunc = 
# 811 "src/decl.c" 3 4
        ((void*)0)
# 811 "src/decl.c"
            ;
}
static void oldparam(Symbol p, void *cl) {
 int i;
 Symbol *callee = cl;

 for (i = 0; callee[i]; i++)
  if (p->name == callee[i]->name) {
   callee[i] = p;
   return;
  }
 error("declared parameter `%s' is missing\n", p->name);
}
void compound(int loop, struct swtch *swp, int lev) {
 Code cp;
 int nregs;

 walk(
# 828 "src/decl.c" 3 4
     ((void*)0)
# 828 "src/decl.c"
         , 0, 0);
 cp = code(Blockbeg);
 enterscope();
 
# 831 "src/decl.c" 3 4
((void)((
# 831 "src/decl.c"
level >= LOCAL
# 831 "src/decl.c" 3 4
) || (__assert_fail(
# 831 "src/decl.c"
"level >= LOCAL"
# 831 "src/decl.c" 3 4
, "src/decl.c", 831, __func__),0)))
# 831 "src/decl.c"
                      ;
 if (level == LOCAL && events.entry)
  apply(events.entry, cfunc, 
# 833 "src/decl.c" 3 4
                            ((void*)0)
# 833 "src/decl.c"
                                );
 definept(
# 834 "src/decl.c" 3 4
         ((void*)0)
# 834 "src/decl.c"
             );
 expect('{');
 autos = registers = 
# 836 "src/decl.c" 3 4
                    ((void*)0)
# 836 "src/decl.c"
                        ;
 if (level == LOCAL && IR->wants_callb
 && ((((freturn(cfunc->type))->op >= CONST) ? (freturn(cfunc->type))->type : (freturn(cfunc->type)))->op == STRUCT || (((freturn(cfunc->type))->op >= CONST) ? (freturn(cfunc->type))->type : (freturn(cfunc->type)))->op == UNION)) {
  retv = genident(AUTO, ptr((((freturn(cfunc->type))->op >= CONST) ? (freturn(cfunc->type))->type : (freturn(cfunc->type)))), level);
  retv->defined = 1;
  retv->ref = 1;
  registers = append(retv, registers);
 }
 while (kind[t] == CHAR || kind[t] == STATIC
 || (kind[t] == CHAR || t == ID && tsym && tsym->sclass == TYPEDEF) && getchr() != ':')
  decl(dcllocal);
 {
  int i;
  Symbol *a = ltov(&autos, STMT);
  nregs = length(registers);
  for (i = 0; a[i]; i++)
   registers = append(a[i], registers);
  cp->u.block.locals = ltov(&registers, FUNC);
 }
 if (events.blockentry)
  apply(events.blockentry, cp->u.block.locals, 
# 856 "src/decl.c" 3 4
                                              ((void*)0)
# 856 "src/decl.c"
                                                  );
 while (kind[t] == IF || kind[t] == ID)
  statement(loop, swp, lev);
 walk(
# 859 "src/decl.c" 3 4
     ((void*)0)
# 859 "src/decl.c"
         , 0, 0);
 foreach(identifiers, level, checkref, 
# 860 "src/decl.c" 3 4
                                      ((void*)0)
# 860 "src/decl.c"
                                          );
 {
  int i = nregs, j;
  Symbol p;
  for ( ; (p = cp->u.block.locals[i]) != 
# 864 "src/decl.c" 3 4
                                        ((void*)0)
# 864 "src/decl.c"
                                            ; i++) {
   for (j = i; j > nregs
    && cp->u.block.locals[j-1]->ref < p->ref; j--)
    cp->u.block.locals[j] = cp->u.block.locals[j-1];
   cp->u.block.locals[j] = p;
  }
 }
 if (level == LOCAL) {
  Code cp;
  for (cp = codelist; cp->kind < Label; cp = cp->prev)
   ;
  if (cp->kind != Jump) {
   if (freturn(cfunc->type) != voidtype) {
    warning("missing return value\n");
    retcode(cnsttree(inttype, 0L));
   } else
    retcode(
# 880 "src/decl.c" 3 4
           ((void*)0)
# 880 "src/decl.c"
               );
  }
 }
 if (events.blockexit)
  apply(events.blockexit, cp->u.block.locals, 
# 884 "src/decl.c" 3 4
                                             ((void*)0)
# 884 "src/decl.c"
                                                 );
 cp->u.block.level = level;
 cp->u.block.identifiers = identifiers;
 cp->u.block.types = types;
 code(Blockend)->u.begin = cp;
 if (reachable(Gen))
  definept(
# 890 "src/decl.c" 3 4
          ((void*)0)
# 890 "src/decl.c"
              );
 if (level > LOCAL) {
  exitscope();
  expect('}');
 }
}
static void checkref(Symbol p, void *cl) {
 if (p->scope >= PARAM
 && (((p->type)->op == VOLATILE || (p->type)->op == CONST+VOLATILE) || ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION)))
  p->addressed = 1;
 if (Aflag >= 2 && p->defined && p->ref == 0) {
  if (p->sclass == STATIC)
   warning("static `%t %s' is not referenced\n",
    p->type, p->name);
  else if (p->scope == PARAM)
   warning("parameter `%t %s' is not referenced\n",
    p->type, p->name);
  else if (p->scope >= LOCAL && p->sclass != EXTERN)
   warning("local `%t %s' is not referenced\n",
    p->type, p->name);
 }
 if (p->sclass == AUTO
 && (p->scope == PARAM && regcount == 0
  || p->scope >= LOCAL)
 && !p->addressed && ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op <= POINTER || (((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == ENUM) && p->ref >= 3.0)
  p->sclass = REGISTER;
 if (level == GLOBAL && p->sclass == STATIC && !p->defined
 && ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION) && p->ref)
  error("undefined static `%t %s'\n", p->type, p->name);
 
# 919 "src/decl.c" 3 4
((void)((
# 919 "src/decl.c"
!(level == GLOBAL && p->sclass == STATIC && !p->defined && !((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION))
# 919 "src/decl.c" 3 4
) || (__assert_fail(
# 919 "src/decl.c"
"!(level == GLOBAL && p->sclass == STATIC && !p->defined && !isfunc(p->type))"
# 919 "src/decl.c" 3 4
, "src/decl.c", 919, __func__),0)))
# 919 "src/decl.c"
                                                                                    ;
}
static Symbol dcllocal(int sclass, char *id, Type ty, Coordinate *pos) {
 Symbol p, q;

 if (sclass == 0)
  sclass = ((((ty)->op >= CONST) ? (ty)->type : (ty))->op == FUNCTION) ? EXTERN : AUTO;
 else if (((((ty)->op >= CONST) ? (ty)->type : (ty))->op == FUNCTION) && sclass != EXTERN) {
  error("invalid storage class `%k' for `%t %s'\n",
   sclass, ty, id);
  sclass = EXTERN;
 } else if (sclass == REGISTER
 && (((ty)->op == VOLATILE || (ty)->op == CONST+VOLATILE) || ((((ty)->op >= CONST) ? (ty)->type : (ty))->op == STRUCT || (((ty)->op >= CONST) ? (ty)->type : (ty))->op == UNION) || ((((ty)->op >= CONST) ? (ty)->type : (ty))->op == ARRAY))) {
  warning("register declaration ignored for `%t %s'\n",
   ty, id);
  sclass = AUTO;
 }
 q = lookup(id, identifiers);
 if (q && q->scope >= level
 || q && q->scope == PARAM && level == LOCAL)
  if (sclass == EXTERN && q->sclass == EXTERN
  && eqtype(q->type, ty, 1))
   ty = compose(ty, q->type);
  else
   error("redeclaration of `%s' previously declared at %w\n", q->name, &q->src);

 
# 945 "src/decl.c" 3 4
((void)((
# 945 "src/decl.c"
level >= LOCAL
# 945 "src/decl.c" 3 4
) || (__assert_fail(
# 945 "src/decl.c"
"level >= LOCAL"
# 945 "src/decl.c" 3 4
, "src/decl.c", 945, __func__),0)))
# 945 "src/decl.c"
                      ;
 p = install(id, &identifiers, level, sclass == STATIC || sclass == EXTERN ? PERM : FUNC);
 p->type = ty;
 p->sclass = sclass;
 p->src = *pos;
 switch (sclass) {
 case EXTERN: q = lookup(id, globals);
         if (q == 
# 952 "src/decl.c" 3 4
                 ((void*)0) 
# 952 "src/decl.c"
                      || q->sclass == TYPEDEF || q->sclass == ENUM) {
          q = lookup(id, externals);
          if (q == 
# 954 "src/decl.c" 3 4
                  ((void*)0)
# 954 "src/decl.c"
                      ) {
           q = install(p->name, &externals, GLOBAL, PERM);
           q->type = p->type;
           q->sclass = EXTERN;
           q->src = src;
           (*IR->defsymbol)(q);
          }
         }
         if (!eqtype(p->type, q->type, 1))
          warning("declaration of `%s' does not match previous declaration at %w\n", q->name, &q->src);

         p->u.alias = q; break;
 case STATIC: (*IR->defsymbol)(p);
         initglobal(p, 0);
         if (!p->defined)
          if (p->type->size > 0) {
           defglobal(p, BSS);
           (*IR->space)(p->type->size);
          } else
           error("undefined size for `%t %s'\n",
            p->type, p->name);
         p->defined = 1; break;
 case REGISTER: registers = append(p, registers);
         regcount++;
         p->defined = 1;
 break;
 case AUTO: autos = append(p, autos);
         p->defined = 1;
         if (((((ty)->op >= CONST) ? (ty)->type : (ty))->op == ARRAY))
          p->addressed = 1; break;
 default: 
# 984 "src/decl.c" 3 4
         ((void)((
# 984 "src/decl.c"
         0
# 984 "src/decl.c" 3 4
         ) || (__assert_fail(
# 984 "src/decl.c"
         "0"
# 984 "src/decl.c" 3 4
         , "src/decl.c", 984, __func__),0)))
# 984 "src/decl.c"
                  ;
 }
 if (t == '=') {
  Tree e;
  if (sclass == EXTERN)
   error("illegal initialization of `extern %s'\n", id);
  t = gettok();
  definept(
# 991 "src/decl.c" 3 4
          ((void*)0)
# 991 "src/decl.c"
              );
  if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op <= POINTER || (((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == ENUM)
  || ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == STRUCT || (((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == UNION) && t != '{') {
   if (t == '{') {
    t = gettok();
    e = expr1(0);
    expect('}');
   } else
    e = expr1(0);
  } else {
   Symbol t1;
   Type ty = p->type, ty1 = ty;
   while (((((ty1)->op >= CONST) ? (ty1)->type : (ty1))->op == ARRAY))
    ty1 = ty1->type;
   if (!((ty)->op == CONST || (ty)->op == CONST+VOLATILE) && (!((((ty)->op >= CONST) ? (ty)->type : (ty))->op == ARRAY) || !((ty1)->op == CONST || (ty1)->op == CONST+VOLATILE)))
    ty = qual(CONST, ty);
   t1 = genident(STATIC, ty, GLOBAL);
   initglobal(t1, 1);
   if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == ARRAY) && p->type->size == 0
   && t1->type->size > 0)
    p->type = array(p->type->type,
     t1->type->size/t1->type->type->size, 0);
   e = idtree(t1);
  }
  walk(root(asgn(p, e)), 0, 0);
  p->ref = 1;
 }
 if (!((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION) && p->defined && p->type->size <= 0)
  error("undefined size for `%t %s'\n", p->type, id);
 return p;
}
void finalize(void) {
 foreach(externals, GLOBAL, doextern, 
# 1023 "src/decl.c" 3 4
                                          ((void*)0)
# 1023 "src/decl.c"
                                              );
 foreach(identifiers, GLOBAL, doglobal, 
# 1024 "src/decl.c" 3 4
                                          ((void*)0)
# 1024 "src/decl.c"
                                              );
 foreach(identifiers, GLOBAL, checkref, 
# 1025 "src/decl.c" 3 4
                                          ((void*)0)
# 1025 "src/decl.c"
                                              );
 foreach(constants, CONSTANTS, doconst, 
# 1026 "src/decl.c" 3 4
                                          ((void*)0)
# 1026 "src/decl.c"
                                              );
}
static void doextern(Symbol p, void *cl) {
 (*IR->import)(p);
}
static void doglobal(Symbol p, void *cl) {
 if (!p->defined && (p->sclass == EXTERN
 || ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION) && p->sclass == AUTO))
  (*IR->import)(p);
 else if (!p->defined && !((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION)
 && (p->sclass == AUTO || p->sclass == STATIC)) {
  if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == ARRAY)
  && p->type->size == 0 && p->type->type->size > 0)
   p->type = array(p->type->type, 1, 0);
  if (p->type->size > 0) {
   defglobal(p, BSS);
   (*IR->space)(p->type->size);
   if (glevel > 0 && IR->stabsym)
    (*IR->stabsym)(p);
  } else
   error("undefined size for `%t %s'\n",
    p->type, p->name);
  p->defined = 1;
 }
 if (Pflag
 && !((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION)
 && !p->generated && p->sclass != EXTERN)
  printdecl(p, p->type);
}
void doconst(Symbol p, void *cl) {
 if (p->u.c.loc) {
  
# 1057 "src/decl.c" 3 4
 ((void)((
# 1057 "src/decl.c"
 p->u.c.loc->u.seg == 0
# 1057 "src/decl.c" 3 4
 ) || (__assert_fail(
# 1057 "src/decl.c"
 "p->u.c.loc->u.seg == 0"
# 1057 "src/decl.c" 3 4
 , "src/decl.c", 1057, __func__),0)))
# 1057 "src/decl.c"
                               ;
  defglobal(p->u.c.loc, LIT);
  if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == ARRAY) && p->type->type == widechar) {
   unsigned int *s = p->u.c.v.p;
   int n = p->type->size/widechar->size;
   while (n-- > 0) {
    Value v;
    v.u = *s++;
    (*IR->defconst)(widechar->op, widechar->size, v);
   }
  } else if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == ARRAY))
   (*IR->defstring)(p->type->size, p->u.c.v.p);
  else
   (*IR->defconst)(p->type->op, p->type->size, p->u.c.v);
  p->u.c.loc = 
# 1071 "src/decl.c" 3 4
              ((void*)0)
# 1071 "src/decl.c"
                  ;
 }
}
void checklab(Symbol p, void *cl) {
 if (!p->defined)
  error("undefined label `%s'\n", p->name);
 p->defined = 1;
}

Type enumdcl(void) {
 char *tag;
 Type ty;
 Symbol p;
 Coordinate pos;

 t = gettok();
 pos = src;
 if (t == ID) {
  tag = token;
  t = gettok();
 } else
  tag = "";
 if (t == '{') {
  static char follow[] = { IF, 0 };
  int n = 0;
  long k = -1;
  List idlist = 0;
  ty = newstruct(ENUM, tag);
  t = gettok();
  if (t != ID)
   error("expecting an enumerator identifier\n");
  while (t == ID) {
   char *id = token;
   Coordinate s;
   if (tsym && tsym->scope == level)
    error("redeclaration of `%s' previously declared at %w\n",
     token, &tsym->src);
   s = src;
   t = gettok();
   if (t == '=') {
    t = gettok();
    k = intexpr(0, 0);
   } else {
    if (k == inttype->u.sym->u.limits.max.i)
     error("overflow in value for enumeration constant `%s'\n", id);
    k++;
   }
   p = install(id, &identifiers, level, level < LOCAL ? PERM : FUNC);
   p->src = s;
   p->type = ty;
   p->sclass = ENUM;
   p->u.value = k;
   idlist = append(p, idlist);
   n++;
   if (Aflag >= 2 && n == 128)
    warning("more than 127 enumeration constants in `%t'\n", ty);
   if (t != ',')
    break;
   t = gettok();
   if (Aflag >= 2 && t == '}')
    warning("non-ANSI trailing comma in enumerator list\n");
  }
  test('}', follow);
  ty->type = inttype;
  ty->size = ty->type->size;
  ty->align = ty->type->align;
  ty->u.sym->u.idlist = ltov(&idlist, PERM);
  ty->u.sym->defined = 1;
 } else if ((p = lookup(tag, types)) != 
# 1139 "src/decl.c" 3 4
                                       ((void*)0) 
# 1139 "src/decl.c"
                                            && p->type->op == ENUM) {
  ty = p->type;
  if (t == ';')
   error("empty declaration\n");
 } else {
  error("unknown enumeration `%s'\n", tag);
  ty = newstruct(ENUM, tag);
  ty->type = inttype;
 }
 if (*tag && xref)
  use(p, pos);
 return ty;
}

Type typename(void) {
 Type ty = specifier(
# 1154 "src/decl.c" 3 4
                    ((void*)0)
# 1154 "src/decl.c"
                        );

 if (t == '*' || t == '(' || t == '[') {
  ty = dclr(ty, 
# 1157 "src/decl.c" 3 4
               ((void*)0)
# 1157 "src/decl.c"
                   , 
# 1157 "src/decl.c" 3 4
                     ((void*)0)
# 1157 "src/decl.c"
                         , 1);
  if (Aflag >= 1 && !hasproto(ty))
   warning("missing prototype\n");
 }
 return ty;
}
