# 0 "src/dag.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/dag.c"
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
# 2 "src/dag.c" 2
using c
{

static char rcsid[] = "$Id$";





static Node forest;
static struct dag {
    struct node node;
    struct dag *hlink;
} *buckets[16];
int nodecount;
static Tree firstarg;
int assignargs = 1;
int prunetemps = -1;
static Node *tail;

static int depth = 0;
static Node replace(Node);
static Node prune(Node);
static Node asgnnode(Symbol, Node);
static struct dag *dagnode(int, Node, Node, Symbol);
static Symbol equated(Symbol);
static void fixup(Node);
static void labelnode(int);
static void list(Node);
static void killnodes(Symbol);
static Node node(int, Node, Node, Symbol);
static void printdag1(Node, int, int);
static void printnode(Node, int, int);
static void reset(void);
static Node tmpnode(Node);
static void typestab(Symbol, void *);
static Node undag(Node);
static Node visit(Node, int);
static void unlist(void);
void walk(Tree tp, int tlab, int flab) {
    listnodes(tp, tlab, flab);
    if (forest) {
        Node list = forest->link;
        forest->link = 
# 45 "src/dag.c" 3 4
                      ((void*)0)
# 45 "src/dag.c"
                          ;
        if (!IR->wants_dag && errcnt == 0)
            list = undag(list);
        code(Gen)->u.forest = list;
        forest = 
# 49 "src/dag.c" 3 4
                ((void*)0)
# 49 "src/dag.c"
                    ;
    }
    reset();
    deallocate(STMT);
}

static Node node(int op, Node l, Node r, Symbol sym) {
    int i;
    struct dag *p;

    i = ((((op)>>4)&0x3F)^((unsigned long)sym>>2))&(((int)(sizeof (buckets)/sizeof ((buckets)[0])))-1);
    for (p = buckets[i]; p; p = p->hlink)
        if (p->node.op == op && p->node.syms[0] == sym
        && p->node.kids[0] == l && p->node.kids[1] == r)
            return &p->node;
    p = dagnode(op, l, r, sym);
    p->hlink = buckets[i];
    buckets[i] = p;
    ++nodecount;
    return &p->node;
}
static struct dag *dagnode(int op, Node l, Node r, Symbol sym) {
    struct dag *p;

    memset((((p)) = allocate(sizeof *((p)), ((FUNC)))), 0, sizeof *(p));
    p->node.op = op;
    if ((p->node.kids[0] = l) != 
# 75 "src/dag.c" 3 4
                                ((void*)0)
# 75 "src/dag.c"
                                    )
        ++l->count;
    if ((p->node.kids[1] = r) != 
# 77 "src/dag.c" 3 4
                                ((void*)0)
# 77 "src/dag.c"
                                    )
        ++r->count;
    p->node.syms[0] = sym;
    return p;
}
Node newnode(int op, Node l, Node r, Symbol sym) {
    return &dagnode(op, l, r, sym)->node;
}
static void killnodes(Symbol p) {
    int i;
    struct dag **q;

    for (i = 0; i < ((int)(sizeof (buckets)/sizeof ((buckets)[0]))); i++)
        for (q = &buckets[i]; *q; )
            if ((((*q)->node.op)&0x3F0) == INDIR &&
                (!((((*q)->node.kids[0]->op)&0x3FF)==ADDRG+P || (((*q)->node.kids[0]->op)&0x3FF)==ADDRL+P || (((*q)->node.kids[0]->op)&0x3FF)==ADDRF+P)
                 || (*q)->node.kids[0]->syms[0] == p)) {
                *q = (*q)->hlink;
                --nodecount;
            } else
                q = &(*q)->hlink;
}
static void reset(void) {
    if (nodecount > 0)
        memset(buckets, 0, sizeof buckets);
    nodecount = 0;
}
Node listnodes(Tree tp, int tlab, int flab) {
    Node p = 
# 105 "src/dag.c" 3 4
            ((void*)0)
# 105 "src/dag.c"
                , l, r;
    int op;

    
# 108 "src/dag.c" 3 4
   ((void)((
# 108 "src/dag.c"
   tlab == 0 || flab == 0
# 108 "src/dag.c" 3 4
   ) || (__assert_fail(
# 108 "src/dag.c"
   "tlab == 0 || flab == 0"
# 108 "src/dag.c" 3 4
   , "src/dag.c", 108, __func__),0)))
# 108 "src/dag.c"
                                 ;
    if (tp == 
# 109 "src/dag.c" 3 4
             ((void*)0)
# 109 "src/dag.c"
                 )
        return 
# 110 "src/dag.c" 3 4
              ((void*)0)
# 110 "src/dag.c"
                  ;
    if (tp->node)
        return tp->node;
    if (((((tp->type)->op >= CONST) ? (tp->type)->type : (tp->type))->op == ARRAY))
        op = tp->op + ((voidptype->size)<<10);
    else
        op = tp->op + ((tp->type->size)<<10);
    switch (((tp->op)&0x3F0)) {
    case AND: { if (depth++ == 0) reset();
              if (flab) {
                  listnodes(tp->kids[0], 0, flab);
                  listnodes(tp->kids[1], 0, flab);
              } else {
                  listnodes(tp->kids[0], 0, flab = genlabel(1));
                  listnodes(tp->kids[1], tlab, 0);
                  labelnode(flab);
              }
              depth--; } break;
    case OR: { if (depth++ == 0)
                  reset();
              if (tlab) {
                  listnodes(tp->kids[0], tlab, 0);
                  listnodes(tp->kids[1], tlab, 0);
              } else {
                  tlab = genlabel(1);
                  listnodes(tp->kids[0], tlab, 0);
                  listnodes(tp->kids[1], 0, flab);
                  labelnode(tlab);
              }
              depth--;
 } break;
    case NOT: { return listnodes(tp->kids[0], flab, tlab); }
    case COND: { Tree q = tp->kids[1];
              
# 143 "src/dag.c" 3 4
             ((void)((
# 143 "src/dag.c"
             tlab == 0 && flab == 0
# 143 "src/dag.c" 3 4
             ) || (__assert_fail(
# 143 "src/dag.c"
             "tlab == 0 && flab == 0"
# 143 "src/dag.c" 3 4
             , "src/dag.c", 143, __func__),0)))
# 143 "src/dag.c"
                                           ;
              if (tp->u.sym)
                  addlocal(tp->u.sym);
              flab = genlabel(2);
              listnodes(tp->kids[0], 0, flab);
              
# 148 "src/dag.c" 3 4
             ((void)((
# 148 "src/dag.c"
             q && q->op == RIGHT
# 148 "src/dag.c" 3 4
             ) || (__assert_fail(
# 148 "src/dag.c"
             "q && q->op == RIGHT"
# 148 "src/dag.c" 3 4
             , "src/dag.c", 148, __func__),0)))
# 148 "src/dag.c"
                                        ;
              reset();
              listnodes(q->kids[0], 0, 0);
              if (forest->op == LABEL+V) {
                  equatelab(forest->syms[0], findlabel(flab + 1));
                  unlist();
              }
              list(jump(flab + 1));
              labelnode(flab);
              listnodes(q->kids[1], 0, 0);
              if (forest->op == LABEL+V) {
                  equatelab(forest->syms[0], findlabel(flab + 1));
                  unlist();
              }
              labelnode(flab + 1);

              if (tp->u.sym)
                  p = listnodes(idtree(tp->u.sym), 0, 0); } break;
    case CNST: { Type ty = (((tp->type)->op >= CONST) ? (tp->type)->type : (tp->type));
              
# 167 "src/dag.c" 3 4
             ((void)((
# 167 "src/dag.c"
             ty->u.sym
# 167 "src/dag.c" 3 4
             ) || (__assert_fail(
# 167 "src/dag.c"
             "ty->u.sym"
# 167 "src/dag.c" 3 4
             , "src/dag.c", 167, __func__),0)))
# 167 "src/dag.c"
                              ;
              if (tlab || flab) {
                  
# 169 "src/dag.c" 3 4
                 ((void)((
# 169 "src/dag.c"
                 ty == inttype
# 169 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 169 "src/dag.c"
                 "ty == inttype"
# 169 "src/dag.c" 3 4
                 , "src/dag.c", 169, __func__),0)))
# 169 "src/dag.c"
                                      ;
                  if (tlab && tp->u.v.i != 0)
                      list(jump(tlab));
                  else if (flab && tp->u.v.i == 0)
                      list(jump(flab));
              }
              else if (ty->u.sym->addressed)
                  p = listnodes(cvtconst(tp), 0, 0);
              else
                  p = node(op, 
# 178 "src/dag.c" 3 4
                              ((void*)0)
# 178 "src/dag.c"
                                  , 
# 178 "src/dag.c" 3 4
                                    ((void*)0)
# 178 "src/dag.c"
                                        , constant(ty, tp->u.v)); } break;
    case RIGHT: { if ( tp->kids[0] && tp->kids[1]
              && ((tp->kids[1]->op)&0x3F0) == ASGN
              && (((tp->kids[0]->op)&0x3F0) == INDIR
              && tp->kids[0]->kids[0] == tp->kids[1]->kids[0]
              || (tp->kids[0]->op == FIELD
              && tp->kids[0] == tp->kids[1]->kids[0]))) {
                  
# 185 "src/dag.c" 3 4
                 ((void)((
# 185 "src/dag.c"
                 tlab == 0 && flab == 0
# 185 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 185 "src/dag.c"
                 "tlab == 0 && flab == 0"
# 185 "src/dag.c" 3 4
                 , "src/dag.c", 185, __func__),0)))
# 185 "src/dag.c"
                                               ;
            if (((tp->kids[0]->op)&0x3F0) == INDIR) {
                p = listnodes(tp->kids[0], 0, 0);
                list(p);
                listnodes(tp->kids[1], 0, 0);
            }
            else {
                
# 192 "src/dag.c" 3 4
               ((void)((
# 192 "src/dag.c"
               ((tp->kids[0]->kids[0]->op)&0x3F0) == INDIR
# 192 "src/dag.c" 3 4
               ) || (__assert_fail(
# 192 "src/dag.c"
               "generic(tp->kids[0]->kids[0]->op) == INDIR"
# 192 "src/dag.c" 3 4
               , "src/dag.c", 192, __func__),0)))
# 192 "src/dag.c"
                                                                 ;
                list(listnodes(tp->kids[0]->kids[0], 0, 0));
                p = listnodes(tp->kids[0], 0, 0);
                listnodes(tp->kids[1], 0, 0);
            }
              } else if (tp->kids[1]) {
                  listnodes(tp->kids[0], 0, 0);
                  p = listnodes(tp->kids[1], tlab, flab);
              } else
                  p = listnodes(tp->kids[0], tlab, flab); } break;
    case JUMP: { 
# 202 "src/dag.c" 3 4
                 ((void)((
# 202 "src/dag.c"
                 tlab == 0 && flab == 0
# 202 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 202 "src/dag.c"
                 "tlab == 0 && flab == 0"
# 202 "src/dag.c" 3 4
                 , "src/dag.c", 202, __func__),0)))
# 202 "src/dag.c"
                                               ;
              
# 203 "src/dag.c" 3 4
             ((void)((
# 203 "src/dag.c"
             tp->u.sym == 0
# 203 "src/dag.c" 3 4
             ) || (__assert_fail(
# 203 "src/dag.c"
             "tp->u.sym == 0"
# 203 "src/dag.c" 3 4
             , "src/dag.c", 203, __func__),0)))
# 203 "src/dag.c"
                                   ;
              
# 204 "src/dag.c" 3 4
             ((void)((
# 204 "src/dag.c"
             tp->kids[0]
# 204 "src/dag.c" 3 4
             ) || (__assert_fail(
# 204 "src/dag.c"
             "tp->kids[0]"
# 204 "src/dag.c" 3 4
             , "src/dag.c", 204, __func__),0)))
# 204 "src/dag.c"
                                ;
              l = listnodes(tp->kids[0], 0, 0);
              list(newnode(JUMP+V, l, 
# 206 "src/dag.c" 3 4
                                     ((void*)0)
# 206 "src/dag.c"
                                         , 
# 206 "src/dag.c" 3 4
                                           ((void*)0)
# 206 "src/dag.c"
                                               ));
              reset(); } break;
    case CALL: { Tree save = firstarg;
              firstarg = 
# 209 "src/dag.c" 3 4
                        ((void*)0)
# 209 "src/dag.c"
                            ;
              
# 210 "src/dag.c" 3 4
             ((void)((
# 210 "src/dag.c"
             tlab == 0 && flab == 0
# 210 "src/dag.c" 3 4
             ) || (__assert_fail(
# 210 "src/dag.c"
             "tlab == 0 && flab == 0"
# 210 "src/dag.c" 3 4
             , "src/dag.c", 210, __func__),0)))
# 210 "src/dag.c"
                                           ;
              if (tp->op == CALL+B && !IR->wants_callb) {
                  Tree arg0 = tree(ARG+P, tp->kids[1]->type,
                tp->kids[1], 
# 213 "src/dag.c" 3 4
                            ((void*)0)
# 213 "src/dag.c"
                                );
            if (IR->left_to_right)
                firstarg = arg0;
            l = listnodes(tp->kids[0], 0, 0);
            if (!IR->left_to_right || firstarg) {
                firstarg = 
# 218 "src/dag.c" 3 4
                          ((void*)0)
# 218 "src/dag.c"
                              ;
                listnodes(arg0, 0, 0);
            }
                  p = newnode(CALL+V, l, 
# 221 "src/dag.c" 3 4
                                        ((void*)0)
# 221 "src/dag.c"
                                            , 
# 221 "src/dag.c" 3 4
                                              ((void*)0)
# 221 "src/dag.c"
                                                  );
              } else {
                  l = listnodes(tp->kids[0], 0, 0);
                  r = listnodes(tp->kids[1], 0, 0);
                  p = newnode(tp->op == CALL+B ? tp->op : op, l, r, 
# 225 "src/dag.c" 3 4
                                                                   ((void*)0)
# 225 "src/dag.c"
                                                                       );
              }
              memset((((p->syms[0])) = allocate(sizeof *((p->syms[0])), ((FUNC)))), 0, sizeof *(p->syms[0]));
              
# 228 "src/dag.c" 3 4
             ((void)((
# 228 "src/dag.c"
             ((((tp->kids[0]->type)->op >= CONST) ? (tp->kids[0]->type)->type : (tp->kids[0]->type))->op == POINTER)
# 228 "src/dag.c" 3 4
             ) || (__assert_fail(
# 228 "src/dag.c"
             "isptr(tp->kids[0]->type)"
# 228 "src/dag.c" 3 4
             , "src/dag.c", 228, __func__),0)))
# 228 "src/dag.c"
                                             ;
              
# 229 "src/dag.c" 3 4
             ((void)((
# 229 "src/dag.c"
             ((((tp->kids[0]->type->type)->op >= CONST) ? (tp->kids[0]->type->type)->type : (tp->kids[0]->type->type))->op == FUNCTION)
# 229 "src/dag.c" 3 4
             ) || (__assert_fail(
# 229 "src/dag.c"
             "isfunc(tp->kids[0]->type->type)"
# 229 "src/dag.c" 3 4
             , "src/dag.c", 229, __func__),0)))
# 229 "src/dag.c"
                                                    ;
              p->syms[0]->type = tp->kids[0]->type->type;
              list(p);
              reset();
              cfunc->u.f.ncalls++;
              firstarg = save;
 } break;
    case ARG: { 
# 236 "src/dag.c" 3 4
                 ((void)((
# 236 "src/dag.c"
                 tlab == 0 && flab == 0
# 236 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 236 "src/dag.c"
                 "tlab == 0 && flab == 0"
# 236 "src/dag.c" 3 4
                 , "src/dag.c", 236, __func__),0)))
# 236 "src/dag.c"
                                               ;
              if (IR->left_to_right)
                  listnodes(tp->kids[1], 0, 0);
              if (firstarg) {
                  Tree arg = firstarg;
                  firstarg = 
# 241 "src/dag.c" 3 4
                            ((void*)0)
# 241 "src/dag.c"
                                ;
                  listnodes(arg, 0, 0);
              }
              l = listnodes(tp->kids[0], 0, 0);
              list(newnode(tp->op == ARG+B ? tp->op : op, l, 
# 245 "src/dag.c" 3 4
                                                            ((void*)0)
# 245 "src/dag.c"
                                                                , 
# 245 "src/dag.c" 3 4
                                                                  ((void*)0)
# 245 "src/dag.c"
                                                                      ));
              forest->syms[0] = intconst(tp->type->size);
              forest->syms[1] = intconst(tp->type->align);
              if (!IR->left_to_right)
                  listnodes(tp->kids[1], 0, 0); } break;
    case EQ: case NE: case GT: case GE: case LE:
    case LT: { 
# 251 "src/dag.c" 3 4
                 ((void)((
# 251 "src/dag.c"
                 tp->u.sym == 0
# 251 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 251 "src/dag.c"
                 "tp->u.sym == 0"
# 251 "src/dag.c" 3 4
                 , "src/dag.c", 251, __func__),0)))
# 251 "src/dag.c"
                                       ;
              
# 252 "src/dag.c" 3 4
             ((void)((
# 252 "src/dag.c"
             errcnt || tlab || flab
# 252 "src/dag.c" 3 4
             ) || (__assert_fail(
# 252 "src/dag.c"
             "errcnt || tlab || flab"
# 252 "src/dag.c" 3 4
             , "src/dag.c", 252, __func__),0)))
# 252 "src/dag.c"
                                           ;
              l = listnodes(tp->kids[0], 0, 0);
              r = listnodes(tp->kids[1], 0, 0);
              
# 255 "src/dag.c" 3 4
             ((void)((
# 255 "src/dag.c"
             errcnt || ((l->op)&~0x3F0) == ((r->op)&~0x3F0)
# 255 "src/dag.c" 3 4
             ) || (__assert_fail(
# 255 "src/dag.c"
             "errcnt || opkind(l->op) == opkind(r->op)"
# 255 "src/dag.c" 3 4
             , "src/dag.c", 255, __func__),0)))
# 255 "src/dag.c"
                                                             ;
              
# 256 "src/dag.c" 3 4
             ((void)((
# 256 "src/dag.c"
             errcnt || ((op)&0xF) == ((l->op)&0xF)
# 256 "src/dag.c" 3 4
             ) || (__assert_fail(
# 256 "src/dag.c"
             "errcnt || optype(op) == optype(l->op)"
# 256 "src/dag.c" 3 4
             , "src/dag.c", 256, __func__),0)))
# 256 "src/dag.c"
                                                          ;
              if (tlab)
                  
# 258 "src/dag.c" 3 4
                 ((void)((
# 258 "src/dag.c"
                 flab == 0
# 258 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 258 "src/dag.c"
                 "flab == 0"
# 258 "src/dag.c" 3 4
                 , "src/dag.c", 258, __func__),0)))
# 258 "src/dag.c"
                                  ,
                  list(newnode(((tp->op)&0x3F0) + ((l->op)&~0x3F0), l, r, findlabel(tlab)));
              else if (flab) {
                  switch (((tp->op)&0x3F0)) {
                  case EQ: op = NE; break;
                  case NE: op = EQ; break;
                  case GT: op = LE; break;
                  case LT: op = GE; break;
                  case GE: op = LT; break;
                  case LE: op = GT; break;
                  default: 
# 268 "src/dag.c" 3 4
                          ((void)((
# 268 "src/dag.c"
                          0
# 268 "src/dag.c" 3 4
                          ) || (__assert_fail(
# 268 "src/dag.c"
                          "0"
# 268 "src/dag.c" 3 4
                          , "src/dag.c", 268, __func__),0)))
# 268 "src/dag.c"
                                   ;
                  }
                  list(newnode(op + ((l->op)&~0x3F0), l, r, findlabel(flab)));
              }
              if (forest && forest->syms[0])
                  forest->syms[0]->ref++; } break;
    case ASGN: { 
# 274 "src/dag.c" 3 4
                 ((void)((
# 274 "src/dag.c"
                 tlab == 0 && flab == 0
# 274 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 274 "src/dag.c"
                 "tlab == 0 && flab == 0"
# 274 "src/dag.c" 3 4
                 , "src/dag.c", 274, __func__),0)))
# 274 "src/dag.c"
                                               ;
              if (tp->kids[0]->op == FIELD) {
                  Tree x = tp->kids[0]->kids[0];
            Field f = tp->kids[0]->u.field;
            
# 278 "src/dag.c" 3 4
           ((void)((
# 278 "src/dag.c"
           ((x->op)&0x3F0) == INDIR
# 278 "src/dag.c" 3 4
           ) || (__assert_fail(
# 278 "src/dag.c"
           "generic(x->op) == INDIR"
# 278 "src/dag.c" 3 4
           , "src/dag.c", 278, __func__),0)))
# 278 "src/dag.c"
                                          ;
            reset();
            l = listnodes(lvalue(x), 0, 0);
            if ((f)->bitsize < 8*f->type->size) {
                unsigned int fmask = (~((f)->bitsize < 8*unsignedtype->size ? ~0u<<(f)->bitsize : 0u));
                unsigned int mask = fmask<<((f)->lsb - 1);
                Tree q = tp->kids[1];
                if (q->op == CNST+I && q->u.v.i == 0
                || q->op == CNST+U && q->u.v.u == 0)
                    q = bittree(BAND, x, cnsttree(unsignedtype, (unsigned long)~mask));
                else if (q->op == CNST+I && (q->u.v.i&fmask) == fmask
                || q->op == CNST+U && (q->u.v.u&fmask) == fmask)
                    q = bittree(BOR, x, cnsttree(unsignedtype, (unsigned long)mask));
                else {
                    listnodes(q, 0, 0);
                    q = bittree(BOR,
                        bittree(BAND, rvalue(lvalue(x)),
                            cnsttree(unsignedtype, (unsigned long)~mask)),
                        bittree(BAND, shtree(LSH, cast(q, unsignedtype),
                            cnsttree(unsignedtype, (unsigned long)((f)->lsb - 1))),
                            cnsttree(unsignedtype, (unsigned long)mask)));
                }
                r = listnodes(q, 0, 0);
                op = ASGN + ttob(q->type);
            } else {
                r = listnodes(tp->kids[1], 0, 0);
                op = ASGN + ttob(tp->kids[1]->type);
            }
              } else {
                  l = listnodes(tp->kids[0], 0, 0);
                  r = listnodes(tp->kids[1], 0, 0);
              }
              list(newnode(tp->op == ASGN+B ? tp->op : op, l, r, 
# 310 "src/dag.c" 3 4
                                                                ((void*)0)
# 310 "src/dag.c"
                                                                    ));
              forest->syms[0] = intconst(tp->kids[1]->type->size);
              forest->syms[1] = intconst(tp->kids[1]->type->align);
              if ((((tp->kids[0]->op)&0x3FF)==ADDRG+P || ((tp->kids[0]->op)&0x3FF)==ADDRL+P || ((tp->kids[0]->op)&0x3FF)==ADDRF+P)
              && !tp->kids[0]->u.sym->computed)
                  killnodes(tp->kids[0]->u.sym);
              else
                  reset();
              p = listnodes(tp->kids[1], 0, 0); } break;
    case BOR: case BAND: case BXOR:
    case ADD: case SUB: case RSH:
    case LSH: { 
# 321 "src/dag.c" 3 4
                 ((void)((
# 321 "src/dag.c"
                 tlab == 0 && flab == 0
# 321 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 321 "src/dag.c"
                 "tlab == 0 && flab == 0"
# 321 "src/dag.c" 3 4
                 , "src/dag.c", 321, __func__),0)))
# 321 "src/dag.c"
                                               ;
              l = listnodes(tp->kids[0], 0, 0);
              r = listnodes(tp->kids[1], 0, 0);
              p = node(op, l, r, 
# 324 "src/dag.c" 3 4
                                ((void*)0)
# 324 "src/dag.c"
                                    ); } break;
    case DIV: case MUL:
    case MOD: { 
# 326 "src/dag.c" 3 4
                 ((void)((
# 326 "src/dag.c"
                 tlab == 0 && flab == 0
# 326 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 326 "src/dag.c"
                 "tlab == 0 && flab == 0"
# 326 "src/dag.c" 3 4
                 , "src/dag.c", 326, __func__),0)))
# 326 "src/dag.c"
                                               ;
              l = listnodes(tp->kids[0], 0, 0);
              r = listnodes(tp->kids[1], 0, 0);
              p = node(op, l, r, 
# 329 "src/dag.c" 3 4
                                ((void*)0)
# 329 "src/dag.c"
                                    );
              if (IR->mulops_calls && ((((tp->type)->op >= CONST) ? (tp->type)->type : (tp->type))->op == INT || (((tp->type)->op >= CONST) ? (tp->type)->type : (tp->type))->op == UNSIGNED)) {
                  list(p);
                  cfunc->u.f.ncalls++;
              } } break;
    case RET: { 
# 334 "src/dag.c" 3 4
                 ((void)((
# 334 "src/dag.c"
                 tlab == 0 && flab == 0
# 334 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 334 "src/dag.c"
                 "tlab == 0 && flab == 0"
# 334 "src/dag.c" 3 4
                 , "src/dag.c", 334, __func__),0)))
# 334 "src/dag.c"
                                               ;
              l = listnodes(tp->kids[0], 0, 0);
              list(newnode(op, l, 
# 336 "src/dag.c" 3 4
                                 ((void*)0)
# 336 "src/dag.c"
                                     , 
# 336 "src/dag.c" 3 4
                                       ((void*)0)
# 336 "src/dag.c"
                                           )); } break;
    case CVF: case CVI: case CVP:
    case CVU: { 
# 338 "src/dag.c" 3 4
                 ((void)((
# 338 "src/dag.c"
                 tlab == 0 && flab == 0
# 338 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 338 "src/dag.c"
                 "tlab == 0 && flab == 0"
# 338 "src/dag.c" 3 4
                 , "src/dag.c", 338, __func__),0)))
# 338 "src/dag.c"
                                               ;
              
# 339 "src/dag.c" 3 4
             ((void)((
# 339 "src/dag.c"
             ((tp->kids[0]->op)&0xF) != ((tp->op)&0xF) || tp->kids[0]->type->size != tp->type->size
# 339 "src/dag.c" 3 4
             ) || (__assert_fail(
# 339 "src/dag.c"
             "optype(tp->kids[0]->op) != optype(tp->op) || tp->kids[0]->type->size != tp->type->size"
# 339 "src/dag.c" 3 4
             , "src/dag.c", 339, __func__),0)))
# 339 "src/dag.c"
                                                                                                           ;
              l = listnodes(tp->kids[0], 0, 0);
              p = node(op, l, 
# 341 "src/dag.c" 3 4
                             ((void*)0)
# 341 "src/dag.c"
                                 , intconst(tp->kids[0]->type->size));
 } break;
    case BCOM:
    case NEG: { 
# 344 "src/dag.c" 3 4
                 ((void)((
# 344 "src/dag.c"
                 tlab == 0 && flab == 0
# 344 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 344 "src/dag.c"
                 "tlab == 0 && flab == 0"
# 344 "src/dag.c" 3 4
                 , "src/dag.c", 344, __func__),0)))
# 344 "src/dag.c"
                                               ;
              l = listnodes(tp->kids[0], 0, 0);
              p = node(op, l, 
# 346 "src/dag.c" 3 4
                             ((void*)0)
# 346 "src/dag.c"
                                 , 
# 346 "src/dag.c" 3 4
                                   ((void*)0)
# 346 "src/dag.c"
                                       ); } break;
    case INDIR: { Type ty = tp->kids[0]->type;
              
# 348 "src/dag.c" 3 4
             ((void)((
# 348 "src/dag.c"
             tlab == 0 && flab == 0
# 348 "src/dag.c" 3 4
             ) || (__assert_fail(
# 348 "src/dag.c"
             "tlab == 0 && flab == 0"
# 348 "src/dag.c" 3 4
             , "src/dag.c", 348, __func__),0)))
# 348 "src/dag.c"
                                           ;
              l = listnodes(tp->kids[0], 0, 0);
              if (((((ty)->op >= CONST) ? (ty)->type : (ty))->op == POINTER))
                  ty = (((ty)->op >= CONST) ? (ty)->type : (ty))->type;
              if (((ty)->op == VOLATILE || (ty)->op == CONST+VOLATILE)
              || (((((ty)->op >= CONST) ? (ty)->type : (ty))->op == STRUCT || (((ty)->op >= CONST) ? (ty)->type : (ty))->op == UNION) && (((ty)->op >= CONST) ? (ty)->type : (ty))->u.sym->u.s.vfields))
                  p = newnode(tp->op == INDIR+B ? tp->op : op, l, 
# 354 "src/dag.c" 3 4
                                                                 ((void*)0)
# 354 "src/dag.c"
                                                                     , 
# 354 "src/dag.c" 3 4
                                                                       ((void*)0)
# 354 "src/dag.c"
                                                                           );
              else
                  p = node(tp->op == INDIR+B ? tp->op : op, l, 
# 356 "src/dag.c" 3 4
                                                              ((void*)0)
# 356 "src/dag.c"
                                                                  , 
# 356 "src/dag.c" 3 4
                                                                    ((void*)0)
# 356 "src/dag.c"
                                                                        ); } break;
    case FIELD: { Tree q = tp->kids[0];
              if (tp->type == inttype) {
                  long n = (8*(tp->u.field)->type->size - (tp->u.field)->bitsize - ((tp->u.field)->lsb - 1));
                  q = shtree(RSH,
                      shtree(LSH, q, cnsttree(inttype, n)),
                      cnsttree(inttype, n + ((tp->u.field)->lsb - 1)));
              } else if ((tp->u.field)->bitsize < 8*tp->u.field->type->size)
                  q = bittree(BAND,
                      shtree(RSH, q, cnsttree(inttype, (long)((tp->u.field)->lsb - 1))),
                      cnsttree(unsignedtype, (unsigned long)(~((tp->u.field)->bitsize < 8*unsignedtype->size ? ~0u<<(tp->u.field)->bitsize : 0u))));
              
# 367 "src/dag.c" 3 4
             ((void)((
# 367 "src/dag.c"
             tlab == 0 && flab == 0
# 367 "src/dag.c" 3 4
             ) || (__assert_fail(
# 367 "src/dag.c"
             "tlab == 0 && flab == 0"
# 367 "src/dag.c" 3 4
             , "src/dag.c", 367, __func__),0)))
# 367 "src/dag.c"
                                           ;
              p = listnodes(q, 0, 0); } break;
    case ADDRG:
    case ADDRF: { 
# 370 "src/dag.c" 3 4
                 ((void)((
# 370 "src/dag.c"
                 tlab == 0 && flab == 0
# 370 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 370 "src/dag.c"
                 "tlab == 0 && flab == 0"
# 370 "src/dag.c" 3 4
                 , "src/dag.c", 370, __func__),0)))
# 370 "src/dag.c"
                                               ;
              p = node(tp->op + ((voidptype->size)<<10), 
# 371 "src/dag.c" 3 4
                                                        ((void*)0)
# 371 "src/dag.c"
                                                            , 
# 371 "src/dag.c" 3 4
                                                              ((void*)0)
# 371 "src/dag.c"
                                                                  , tp->u.sym);
 } break;
    case ADDRL: { 
# 373 "src/dag.c" 3 4
                 ((void)((
# 373 "src/dag.c"
                 tlab == 0 && flab == 0
# 373 "src/dag.c" 3 4
                 ) || (__assert_fail(
# 373 "src/dag.c"
                 "tlab == 0 && flab == 0"
# 373 "src/dag.c" 3 4
                 , "src/dag.c", 373, __func__),0)))
# 373 "src/dag.c"
                                               ;
              if (tp->u.sym->generated)
                  addlocal(tp->u.sym);
              p = node(tp->op + ((voidptype->size)<<10), 
# 376 "src/dag.c" 3 4
                                                        ((void*)0)
# 376 "src/dag.c"
                                                            , 
# 376 "src/dag.c" 3 4
                                                              ((void*)0)
# 376 "src/dag.c"
                                                                  , tp->u.sym); } break;
    default:
# 377 "src/dag.c" 3 4
           ((void)((
# 377 "src/dag.c"
           0
# 377 "src/dag.c" 3 4
           ) || (__assert_fail(
# 377 "src/dag.c"
           "0"
# 377 "src/dag.c" 3 4
           , "src/dag.c", 377, __func__),0)))
# 377 "src/dag.c"
                    ;
    }
    tp->node = p;
    return p;
}
static void list(Node p) {
    if (p && p->link == 
# 383 "src/dag.c" 3 4
                       ((void*)0)
# 383 "src/dag.c"
                           ) {
        if (forest) {
            p->link = forest->link;
            forest->link = p;
        } else
            p->link = p;
        forest = p;
    }
}
static void labelnode(int lab) {
    
# 393 "src/dag.c" 3 4
   ((void)((
# 393 "src/dag.c"
   lab
# 393 "src/dag.c" 3 4
   ) || (__assert_fail(
# 393 "src/dag.c"
   "lab"
# 393 "src/dag.c" 3 4
   , "src/dag.c", 393, __func__),0)))
# 393 "src/dag.c"
              ;
    if (forest && forest->op == LABEL+V)
        equatelab(findlabel(lab), forest->syms[0]);
    else
        list(newnode(LABEL+V, 
# 397 "src/dag.c" 3 4
                             ((void*)0)
# 397 "src/dag.c"
                                 , 
# 397 "src/dag.c" 3 4
                                   ((void*)0)
# 397 "src/dag.c"
                                       , findlabel(lab)));
    reset();
}
static void unlist(void) {
    Node p;

    
# 403 "src/dag.c" 3 4
   ((void)((
# 403 "src/dag.c"
   forest
# 403 "src/dag.c" 3 4
   ) || (__assert_fail(
# 403 "src/dag.c"
   "forest"
# 403 "src/dag.c" 3 4
   , "src/dag.c", 403, __func__),0)))
# 403 "src/dag.c"
                 ;
    
# 404 "src/dag.c" 3 4
   ((void)((
# 404 "src/dag.c"
   forest != forest->link
# 404 "src/dag.c" 3 4
   ) || (__assert_fail(
# 404 "src/dag.c"
   "forest != forest->link"
# 404 "src/dag.c" 3 4
   , "src/dag.c", 404, __func__),0)))
# 404 "src/dag.c"
                                 ;
    p = forest->link;
    while (p->link != forest)
        p = p->link;
    p->link = forest->link;
    forest = p;
}
Tree cvtconst(Tree p) {
    Symbol q = constant(p->type, p->u.v);
    Tree e;

    if (q->u.c.loc == 
# 415 "src/dag.c" 3 4
                     ((void*)0)
# 415 "src/dag.c"
                         )
        q->u.c.loc = genident(STATIC, p->type, GLOBAL);
    if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == ARRAY)) {
        e = simplify(ADDRG, atop(p->type), 
# 418 "src/dag.c" 3 4
                                          ((void*)0)
# 418 "src/dag.c"
                                              , 
# 418 "src/dag.c" 3 4
                                                ((void*)0)
# 418 "src/dag.c"
                                                    );
        e->u.sym = q->u.c.loc;
    } else
        e = idtree(q->u.c.loc);
    return e;
}
void gencode(Symbol caller[], Symbol callee[]) {
    Code cp;
    Coordinate save;

    if (prunetemps == -1)
        prunetemps = !IR->wants_dag;
    save = src;
    if (assignargs) {
        int i;
        Symbol p, q;
        cp = codehead.next->next;
        codelist = codehead.next;
        for (i = 0; (p = callee[i]) != 
# 436 "src/dag.c" 3 4
                                      ((void*)0)
                 
# 437 "src/dag.c"
                && (q = caller[i]) != 
# 437 "src/dag.c" 3 4
                                      ((void*)0)
# 437 "src/dag.c"
                                          ; i++)
            if (p->sclass != q->sclass || p->type != q->type)
                walk(asgn(p, idtree(q)), 0, 0);
        codelist->next = cp;
        cp->prev = codelist;
    }
    if (glevel && IR->stabsym) {
        int i;
        Symbol p, q;
        for (i = 0; (p = callee[i]) != 
# 446 "src/dag.c" 3 4
                                      ((void*)0)
                 
# 447 "src/dag.c"
                && (q = caller[i]) != 
# 447 "src/dag.c" 3 4
                                      ((void*)0)
# 447 "src/dag.c"
                                          ; i++) {
            (*IR->stabsym)(p);
            if (p->sclass != q->sclass || p->type != q->type)
                (*IR->stabsym)(q);
        }
        swtoseg(CODE);
    }
    cp = codehead.next;
    for ( ; errcnt <= 0 && cp; cp = cp->next)
        switch (cp->kind) {
        case Address: 
# 457 "src/dag.c" 3 4
                      ((void)((
# 457 "src/dag.c"
                      IR->address
# 457 "src/dag.c" 3 4
                      ) || (__assert_fail(
# 457 "src/dag.c"
                      "IR->address"
# 457 "src/dag.c" 3 4
                      , "src/dag.c", 457, __func__),0)))
# 457 "src/dag.c"
                                         ;
                   (*IR->address)(cp->u.addr.sym, cp->u.addr.base,
                       cp->u.addr.offset); break;
        case Blockbeg: {
                       Symbol *p = cp->u.block.locals;
                       (*IR->blockbeg)(&cp->u.block.x);
                       for ( ; *p; p++)
                           if ((*p)->ref != 0.0)
                               (*IR->local)(*p);
                           else if (glevel) (*IR->local)(*p);
                   }
 break;
        case Blockend: (*IR->blockend)(&cp->u.begin->u.block.x); break;
        case Defpoint: src = cp->u.point.src; break;
        case Gen: case Jump:
        case Label: if (prunetemps)
                       cp->u.forest = prune(cp->u.forest);
                   fixup(cp->u.forest);
                   cp->u.forest = (*IR->gen)(cp->u.forest); break;
        case Local: (*IR->local)(cp->u.var); break;
        case Switch: break;
        default: 
# 478 "src/dag.c" 3 4
                ((void)((
# 478 "src/dag.c"
                0
# 478 "src/dag.c" 3 4
                ) || (__assert_fail(
# 478 "src/dag.c"
                "0"
# 478 "src/dag.c" 3 4
                , "src/dag.c", 478, __func__),0)))
# 478 "src/dag.c"
                         ;
        }
    src = save;
}
static void fixup(Node p) {
    for ( ; p; p = p->link)
        switch (((p->op)&0x3F0)) {
        case JUMP:
            if (((p->kids[0]->op)&0x3FF) == ADDRG+P)
                p->kids[0]->syms[0] =
                    equated(p->kids[0]->syms[0]);
            break;
        case LABEL: 
# 490 "src/dag.c" 3 4
                   ((void)((
# 490 "src/dag.c"
                   p->syms[0] == equated(p->syms[0])
# 490 "src/dag.c" 3 4
                   ) || (__assert_fail(
# 490 "src/dag.c"
                   "p->syms[0] == equated(p->syms[0])"
# 490 "src/dag.c" 3 4
                   , "src/dag.c", 490, __func__),0)))
# 490 "src/dag.c"
                                                            ; break;
        case EQ: case GE: case GT: case LE: case LT: case NE:
            
# 492 "src/dag.c" 3 4
           ((void)((
# 492 "src/dag.c"
           p->syms[0]
# 492 "src/dag.c" 3 4
           ) || (__assert_fail(
# 492 "src/dag.c"
           "p->syms[0]"
# 492 "src/dag.c" 3 4
           , "src/dag.c", 492, __func__),0)))
# 492 "src/dag.c"
                             ;
            p->syms[0] = equated(p->syms[0]);
        }
}
static Symbol equated(Symbol p) {
    { Symbol q; for (q = p->u.l.equatedto; q; q = q->u.l.equatedto) 
# 497 "src/dag.c" 3 4
                                                                   ((void)((
# 497 "src/dag.c"
                                                                   p != q
# 497 "src/dag.c" 3 4
                                                                   ) || (__assert_fail(
# 497 "src/dag.c"
                                                                   "p != q"
# 497 "src/dag.c" 3 4
                                                                   , "src/dag.c", 497, __func__),0)))
# 497 "src/dag.c"
                                                                                 ; }
    while (p->u.l.equatedto)
        p = p->u.l.equatedto;
    return p;
}
void emitcode(void) {
    Code cp;
    Coordinate save;

    save = src;
    cp = codehead.next;
    for ( ; errcnt <= 0 && cp; cp = cp->next)
        switch (cp->kind) {
        case Address: break;
        case Blockbeg: if (glevel && IR->stabblock) {
                       (*IR->stabblock)('{', cp->u.block.level - LOCAL, cp->u.block.locals);
                       swtoseg(CODE);
                   }
 break;
        case Blockend: if (glevel && IR->stabblock) {
                       Code bp = cp->u.begin;
                       foreach(bp->u.block.identifiers, bp->u.block.level, typestab, 
# 518 "src/dag.c" 3 4
                                                                                    ((void*)0)
# 518 "src/dag.c"
                                                                                        );
                       foreach(bp->u.block.types, bp->u.block.level, typestab, 
# 519 "src/dag.c" 3 4
                                                                                    ((void*)0)
# 519 "src/dag.c"
                                                                                        );
                       (*IR->stabblock)('}', bp->u.block.level - LOCAL, bp->u.block.locals);
                       swtoseg(CODE);
                   }
 break;
        case Defpoint: src = cp->u.point.src;
                   if (glevel > 0 && IR->stabline) {
                       (*IR->stabline)(&cp->u.point.src); swtoseg(CODE); } break;
        case Gen: case Jump:
        case Label: if (cp->u.forest)
                       (*IR->emit)(cp->u.forest); break;
        case Local: if (glevel && IR->stabsym) {
                       (*IR->stabsym)(cp->u.var);
                       swtoseg(CODE);
                   } break;
        case Switch: { int i;
                       defglobal(cp->u.swtch.table, LIT);
                       (*IR->defaddress)(equated(cp->u.swtch.labels[0]));
                       for (i = 1; i < cp->u.swtch.size; i++) {
                           long k = cp->u.swtch.values[i-1];
                           while (++k < cp->u.swtch.values[i])
                               
# 540 "src/dag.c" 3 4
                              ((void)((
# 540 "src/dag.c"
                              k < 
# 540 "src/dag.c" 3 4
                              0x7fffffffffffffffL) || (__assert_fail(
# 540 "src/dag.c"
                              "k < LONG_MAX"
# 540 "src/dag.c" 3 4
                              , "src/dag.c", 540, __func__),0)))
# 540 "src/dag.c"
                                                  ,
                               (*IR->defaddress)(equated(cp->u.swtch.deflab));
                           (*IR->defaddress)(equated(cp->u.swtch.labels[i]));
                       }
                       swtoseg(CODE);
                   } break;
        default: 
# 546 "src/dag.c" 3 4
                ((void)((
# 546 "src/dag.c"
                0
# 546 "src/dag.c" 3 4
                ) || (__assert_fail(
# 546 "src/dag.c"
                "0"
# 546 "src/dag.c" 3 4
                , "src/dag.c", 546, __func__),0)))
# 546 "src/dag.c"
                         ;
        }
    src = save;
}

static Node undag(Node forest) {
    Node p;

    tail = &forest;
    for (p = forest; p; p = p->link)
        if (((p->op)&0x3F0) == INDIR) {
            
# 557 "src/dag.c" 3 4
           ((void)((
# 557 "src/dag.c"
           p->count >= 1
# 557 "src/dag.c" 3 4
           ) || (__assert_fail(
# 557 "src/dag.c"
           "p->count >= 1"
# 557 "src/dag.c" 3 4
           , "src/dag.c", 557, __func__),0)))
# 557 "src/dag.c"
                                ;
            visit(p, 1);
            if (p->syms[2]) {
                
# 560 "src/dag.c" 3 4
               ((void)((
# 560 "src/dag.c"
               p->syms[2]->u.t.cse
# 560 "src/dag.c" 3 4
               ) || (__assert_fail(
# 560 "src/dag.c"
               "p->syms[2]->u.t.cse"
# 560 "src/dag.c" 3 4
               , "src/dag.c", 560, __func__),0)))
# 560 "src/dag.c"
                                          ;
                p->syms[2]->u.t.cse = 
# 561 "src/dag.c" 3 4
                                     ((void*)0)
# 561 "src/dag.c"
                                         ;
                addlocal(p->syms[2]);
            }
        } else if ((((p->op)&0x3F0) == CALL || IR->mulops_calls && (((p->op)&0x3F0)==DIV||((p->op)&0x3F0)==MOD||((p->op)&0x3F0)==MUL) && ( ((p->op)&0xF)==U || ((p->op)&0xF)==I)) && p->count >= 1)
            visit(p, 1);
        else {
            
# 567 "src/dag.c" 3 4
           ((void)((
# 567 "src/dag.c"
           p->count == 0
# 567 "src/dag.c" 3 4
           ) || (__assert_fail(
# 567 "src/dag.c"
           "p->count == 0"
# 567 "src/dag.c" 3 4
           , "src/dag.c", 567, __func__),0)))
# 567 "src/dag.c"
                                ,
            visit(p, 1);
            *tail = p;
            tail = &p->link;
        }
    *tail = 
# 572 "src/dag.c" 3 4
           ((void*)0)
# 572 "src/dag.c"
               ;
    return forest;
}
static Node replace(Node p) {
    if (p && ( ((p->op)&0x3F0) == INDIR
         && ((p->kids[0]->op)&0x3F0) == ADDRL
         && p->kids[0]->syms[0]->temporary
         && p->kids[0]->syms[0]->u.t.replace)) {
        p = p->kids[0]->syms[0]->u.t.cse;
        if (((p->op)&0x3F0) == INDIR && (((p->kids[0]->op)&0x3FF)==ADDRG+P || ((p->kids[0]->op)&0x3FF)==ADDRL+P || ((p->kids[0]->op)&0x3FF)==ADDRF+P))
            p = newnode(p->op, newnode(p->kids[0]->op, 
# 582 "src/dag.c" 3 4
                                                      ((void*)0)
# 582 "src/dag.c"
                                                          , 
# 582 "src/dag.c" 3 4
                                                            ((void*)0)
# 582 "src/dag.c"
                                                                ,
                p->kids[0]->syms[0]), 
# 583 "src/dag.c" 3 4
                                     ((void*)0)
# 583 "src/dag.c"
                                         , 
# 583 "src/dag.c" 3 4
                                           ((void*)0)
# 583 "src/dag.c"
                                               );
        else if (((p->op)&0x3F0) == ADDRG)
            p = newnode(p->op, 
# 585 "src/dag.c" 3 4
                              ((void*)0)
# 585 "src/dag.c"
                                  , 
# 585 "src/dag.c" 3 4
                                    ((void*)0)
# 585 "src/dag.c"
                                        , p->syms[0]);
        else
            
# 587 "src/dag.c" 3 4
           ((void)((
# 587 "src/dag.c"
           0
# 587 "src/dag.c" 3 4
           ) || (__assert_fail(
# 587 "src/dag.c"
           "0"
# 587 "src/dag.c" 3 4
           , "src/dag.c", 587, __func__),0)))
# 587 "src/dag.c"
                    ;
        p->count = 1;
    } else if (p) {
        p->kids[0] = replace(p->kids[0]);
        p->kids[1] = replace(p->kids[1]);
    }
    return p;
}
static Node prune(Node forest) {
    Node p, *tail = &forest;
    int count = 0;

    for (p = forest; p; p = p->link) {
        if (count > 0) {
            p->kids[0] = replace(p->kids[0]);
            p->kids[1] = replace(p->kids[1]);
        }
        if (( ((p->op)&0x3F0) == ASGN
            && ((p->kids[0]->op)&0x3F0) == ADDRL
            && p->kids[0]->syms[0]->temporary
            && p->kids[0]->syms[0]->u.t.cse == p->kids[1])) {
            Symbol tmp = p->kids[0]->syms[0];
            if (!tmp->defined)
                (*IR->local)(tmp);
            tmp->defined = 1;
            if (( ((p->kids[1]->op)&0x3F0) == INDIR
                && (((p->kids[1]->kids[0]->op)&0x3FF)==ADDRG+P || ((p->kids[1]->kids[0]->op)&0x3FF)==ADDRL+P || ((p->kids[1]->kids[0]->op)&0x3FF)==ADDRF+P)
                && p->kids[1]->kids[0]->syms[0]->sclass == REGISTER)
            || (( ((p->kids[1]->op)&0x3F0) == INDIR
                && (((p->kids[1]->kids[0]->op)&0x3FF)==ADDRG+P || ((p->kids[1]->kids[0]->op)&0x3FF)==ADDRL+P || ((p->kids[1]->kids[0]->op)&0x3FF)==ADDRF+P)) && tmp->sclass == AUTO)
            || (((p->kids[1]->op)&0x3F0) == ADDRG && tmp->sclass == AUTO)) {
                tmp->u.t.replace = 1;
                count++;
                continue;
            }
        }

        *tail = p;
        tail = &(*tail)->link;
    }
    
# 627 "src/dag.c" 3 4
   ((void)((
# 627 "src/dag.c"
   *tail == 
# 627 "src/dag.c" 3 4
   ((void*)0)) || (__assert_fail(
# 627 "src/dag.c"
   "*tail == NULL"
# 627 "src/dag.c" 3 4
   , "src/dag.c", 627, __func__),0)))
# 627 "src/dag.c"
                        ;
    return forest;
}
static Node visit(Node p, int listed) {
    if (p)
        if (p->syms[2])
            p = tmpnode(p);
        else if (p->count <= 1 && !(((p->op)&0x3F0) == CALL || IR->mulops_calls && (((p->op)&0x3F0)==DIV||((p->op)&0x3F0)==MOD||((p->op)&0x3F0)==MUL) && ( ((p->op)&0xF)==U || ((p->op)&0xF)==I))
        || p->count == 0 && (((p->op)&0x3F0) == CALL || IR->mulops_calls && (((p->op)&0x3F0)==DIV||((p->op)&0x3F0)==MOD||((p->op)&0x3F0)==MUL) && ( ((p->op)&0xF)==U || ((p->op)&0xF)==I))) {
            p->kids[0] = visit(p->kids[0], 0);
            p->kids[1] = visit(p->kids[1], 0);
        }

        else if (((p->op)&0x3FF) == ADDRL+P || ((p->op)&0x3FF) == ADDRF+P) {
            
# 641 "src/dag.c" 3 4
           ((void)((
# 641 "src/dag.c"
           !listed
# 641 "src/dag.c" 3 4
           ) || (__assert_fail(
# 641 "src/dag.c"
           "!listed"
# 641 "src/dag.c" 3 4
           , "src/dag.c", 641, __func__),0)))
# 641 "src/dag.c"
                          ;
            p = newnode(p->op, 
# 642 "src/dag.c" 3 4
                              ((void*)0)
# 642 "src/dag.c"
                                  , 
# 642 "src/dag.c" 3 4
                                    ((void*)0)
# 642 "src/dag.c"
                                        , p->syms[0]);
            p->count = 1;
        }
        else if (p->op == INDIR+B) {
            p = newnode(p->op, p->kids[0], 
# 646 "src/dag.c" 3 4
                                          ((void*)0)
# 646 "src/dag.c"
                                              , 
# 646 "src/dag.c" 3 4
                                                ((void*)0)
# 646 "src/dag.c"
                                                    );
            p->count = 1;
            p->kids[0] = visit(p->kids[0], 0);
            p->kids[1] = visit(p->kids[1], 0);
        }
        else {
            p->kids[0] = visit(p->kids[0], 0);
            p->kids[1] = visit(p->kids[1], 0);
            p->syms[2] = temporary(REGISTER, btot(p->op, ((p->op)>>10)));
            
# 655 "src/dag.c" 3 4
           ((void)((
# 655 "src/dag.c"
           !p->syms[2]->defined
# 655 "src/dag.c" 3 4
           ) || (__assert_fail(
# 655 "src/dag.c"
           "!p->syms[2]->defined"
# 655 "src/dag.c" 3 4
           , "src/dag.c", 655, __func__),0)))
# 655 "src/dag.c"
                                       ;
            p->syms[2]->ref = 1;
            p->syms[2]->u.t.cse = p;

            *tail = asgnnode(p->syms[2], p);
            tail = &(*tail)->link;
            if (!listed)
                p = tmpnode(p);
        };
    return p;
}
static Node tmpnode(Node p) {
    Symbol tmp = p->syms[2];

    
# 669 "src/dag.c" 3 4
   ((void)((
# 669 "src/dag.c"
   tmp
# 669 "src/dag.c" 3 4
   ) || (__assert_fail(
# 669 "src/dag.c"
   "tmp"
# 669 "src/dag.c" 3 4
   , "src/dag.c", 669, __func__),0)))
# 669 "src/dag.c"
              ;
    if (--p->count == 0)
        p->syms[2] = 
# 671 "src/dag.c" 3 4
                    ((void*)0)
# 671 "src/dag.c"
                        ;
    p = newnode(INDIR + ttob(tmp->type),
        newnode(ADDRL + ttob(voidptype), 
# 673 "src/dag.c" 3 4
                                        ((void*)0)
# 673 "src/dag.c"
                                            , 
# 673 "src/dag.c" 3 4
                                              ((void*)0)
# 673 "src/dag.c"
                                                  , tmp), 
# 673 "src/dag.c" 3 4
                                                          ((void*)0)
# 673 "src/dag.c"
                                                              , 
# 673 "src/dag.c" 3 4
                                                                ((void*)0)
# 673 "src/dag.c"
                                                                    );
    p->count = 1;
    return p;
}
static Node asgnnode(Symbol tmp, Node p) {
    p = newnode(ASGN + ttob(tmp->type),
        newnode(ADDRL + ttob(voidptype), 
# 679 "src/dag.c" 3 4
                                        ((void*)0)
# 679 "src/dag.c"
                                            , 
# 679 "src/dag.c" 3 4
                                              ((void*)0)
# 679 "src/dag.c"
                                                  , tmp), p, 
# 679 "src/dag.c" 3 4
                                                             ((void*)0)
# 679 "src/dag.c"
                                                                 );
    p->syms[0] = intconst(tmp->type->size);
    p->syms[1] = intconst(tmp->type->align);
    return p;
}

void printdag(Node p, int fd) {
    FILE *f = fd == 1 ? 
# 686 "src/dag.c" 3 4
                       (stdout) 
# 686 "src/dag.c"
                              : 
# 686 "src/dag.c" 3 4
                                (stderr)
# 686 "src/dag.c"
                                      ;

    printed(0);
    if (p == 0) {
        if ((p = forest) != 
# 690 "src/dag.c" 3 4
                           ((void*)0)
# 690 "src/dag.c"
                               )
            do {
                p = p->link;
                printdag1(p, fd, 0);
            } while (p != forest);
    } else if (*printed(nodeid((Tree)p)))
        fprint(f, "node'%d printed above\n", nodeid((Tree)p));
    else
        printdag1(p, fd, 0);
}


static void printdag1(Node p, int fd, int lev) {
    int id, i;

    if (p == 0 || *printed(id = nodeid((Tree)p)))
        return;
    *printed(id) = 1;
    for (i = 0; i < ((int)(sizeof (p->kids)/sizeof ((p->kids)[0]))); i++)
        printdag1(p->kids[i], fd, lev + 1);
    printnode(p, fd, lev);
}


static void printnode(Node p, int fd, int lev) {
    if (p) {
        FILE *f = fd == 1 ? 
# 716 "src/dag.c" 3 4
                           (stdout) 
# 716 "src/dag.c"
                                  : 
# 716 "src/dag.c" 3 4
                                    (stderr)
# 716 "src/dag.c"
                                          ;
        int i, id = nodeid((Tree)p);
        fprint(f, "%c%d%s", lev == 0 ? '\'' : '#', id,
            &"   "[id < 10 ? 0 : id < 100 ? 1 : 2]);
        fprint(f, "%s count=%d", opname(p->op), p->count);
        for (i = 0; i < ((int)(sizeof (p->kids)/sizeof ((p->kids)[0]))) && p->kids[i]; i++)
            fprint(f, " #%d", nodeid((Tree)p->kids[i]));
        if (((p->op)&0x3F0) == CALL && p->syms[0] && p->syms[0]->type)
            fprint(f, " {%t}", p->syms[0]->type);
        else
            for (i = 0; i < ((int)(sizeof (p->syms)/sizeof ((p->syms)[0]))) && p->syms[i]; i++)
                if (p->syms[i]->name)
                    fprint(f, " %s", p->syms[i]->name);
                else
                    fprint(f, " %p", p->syms[i]);
        fprint(f, "\n");
    }
}


static void typestab(Symbol p, void *cl) {
    if (!((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION) && (p->sclass == EXTERN || p->sclass == STATIC) && IR->stabsym)
        (*IR->stabsym)(p);
    else if ((p->sclass == TYPEDEF || p->sclass == 0) && IR->stabtype)
        (*IR->stabtype)(p);
}
}
