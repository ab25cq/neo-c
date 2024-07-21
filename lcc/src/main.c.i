# 0 "src/main.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/main.c"
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
# 2 "src/main.c" 2

static char rcsid[] = "$Name$($Id$)";

static void typestab(Symbol, void *);

static void stabline(Coordinate *);
static void stabend(Coordinate *, Symbol, Coordinate **, Symbol *, Symbol *);
Interface *IR = 
# 9 "src/main.c" 3 4
               ((void*)0)
# 9 "src/main.c"
                   ;

int Aflag;
int Pflag;
int glevel;
int xref;
Symbol YYnull;
Symbol YYcheck;

static char *comment;
static Interface stabIR;
static char *currentfile;
static int currentline;
static FILE *srcfp;
static int srcpos;
int main(int argc, char *argv[]) {
 int i, j;
 for (i = argc - 1; i > 0; i--)
  if (strncmp(argv[i], "-target=", 8) == 0)
   break;
 if (i > 0) {
  char *s = strchr(argv[i], '\\');
  if (s != 
# 31 "src/main.c" 3 4
          ((void*)0)
# 31 "src/main.c"
              )
   *s = '/';
  for (j = 0; bindings[j].name && bindings[j].ir; j++)
   if (strcmp(&argv[i][8], bindings[j].name) == 0) {
    IR = bindings[j].ir;
    break;
   }
  if (s != 
# 38 "src/main.c" 3 4
          ((void*)0)
# 38 "src/main.c"
              )
   *s = '\\';
 }
 if (!IR) {
  fprint(
# 42 "src/main.c" 3 4
        (stderr)
# 42 "src/main.c"
              , "%s: unknown target", argv[0]);
  if (i > 0)
   fprint(
# 44 "src/main.c" 3 4
         (stderr)
# 44 "src/main.c"
               , " `%s'", &argv[i][8]);
  fprint(
# 45 "src/main.c" 3 4
        (stderr)
# 45 "src/main.c"
              , "; must specify one of\n");
  for (i = 0; bindings[i].name; i++)
   fprint(
# 47 "src/main.c" 3 4
         (stderr)
# 47 "src/main.c"
               , "\t-target=%s\n", bindings[i].name);
  exit(
# 48 "src/main.c" 3 4
      1
# 48 "src/main.c"
                  );
 }
 init(argc, argv);
 t = gettok();
 (*IR->progbeg)(argc, argv);
 for (i = 1; i < argc; i++)
  if (strcmp(argv[i], "-n") == 0) {
   if (!YYnull) {
    YYnull = install(string("_YYnull"), &globals, GLOBAL, PERM);
    YYnull->type = func(voidptype, 
# 57 "src/main.c" 3 4
                                  ((void*)0)
# 57 "src/main.c"
                                      , 1);
    YYnull->sclass = EXTERN;
    (*IR->defsymbol)(YYnull);
   }
  } else if (strncmp(argv[i], "-n", 2) == 0) {
   char *p = strchr(argv[i], ',');
   if (p) {
    YYcheck = install(string(p+1), &globals, GLOBAL, PERM);
    YYcheck->type = func(voidptype, 
# 65 "src/main.c" 3 4
                                   ((void*)0)
# 65 "src/main.c"
                                       , 1);
    YYcheck->sclass = EXTERN;
    (*IR->defsymbol)(YYcheck);
    p = stringn(argv[i]+2, p - (argv[i]+2));
   } else
    p = string(argv[i]+2);
   YYnull = install(p, &globals, GLOBAL, PERM);
   YYnull->type = func(voidptype, 
# 72 "src/main.c" 3 4
                                 ((void*)0)
# 72 "src/main.c"
                                     , 1);
   YYnull->sclass = EXTERN;
   (*IR->defsymbol)(YYnull);
  } else {
   profInit(argv[i]);
   traceInit(argv[i]);
  }
 if (glevel && IR->stabinit)
  (*IR->stabinit)(firstfile, argc, argv);
 program();
 if (events.end)
  apply(events.end, 
# 83 "src/main.c" 3 4
                   ((void*)0)
# 83 "src/main.c"
                       , 
# 83 "src/main.c" 3 4
                         ((void*)0)
# 83 "src/main.c"
                             );
 memset(&events, 0, sizeof events);
 if (glevel || xref) {
  Symbol symroot = 
# 86 "src/main.c" 3 4
                  ((void*)0)
# 86 "src/main.c"
                      ;
  Coordinate src;
  foreach(types, GLOBAL, typestab, &symroot);
  foreach(identifiers, GLOBAL, typestab, &symroot);
  src.file = firstfile;
  src.x = 0;
  src.y = lineno;
  if ((glevel > 2 || xref) && IR->stabend)
   (*IR->stabend)(&src, symroot,
    ltov(&loci, PERM),
    ltov(&symbols, PERM), 
# 96 "src/main.c" 3 4
                         ((void*)0)
# 96 "src/main.c"
                             );
  else if (IR->stabend)
   (*IR->stabend)(&src, 
# 98 "src/main.c" 3 4
                       ((void*)0)
# 98 "src/main.c"
                           , 
# 98 "src/main.c" 3 4
                             ((void*)0)
# 98 "src/main.c"
                                 , 
# 98 "src/main.c" 3 4
                                   ((void*)0)
# 98 "src/main.c"
                                       , 
# 98 "src/main.c" 3 4
                                         ((void*)0)
# 98 "src/main.c"
                                             );
 }
 finalize();
 (*IR->progend)();
 deallocate(PERM);
 return errcnt > 0;
}

void main_init(int argc, char *argv[]) {
 char *infile = 
# 107 "src/main.c" 3 4
               ((void*)0)
# 107 "src/main.c"
                   , *outfile = 
# 107 "src/main.c" 3 4
                                ((void*)0)
# 107 "src/main.c"
                                    ;
 int i;
 static int inited;

 if (inited)
  return;
 inited = 1;
 for (i = 1; i < argc; i++)
  if (strcmp(argv[i], "-g") == 0 || strcmp(argv[i], "-g2") == 0)
   glevel = 2;
  else if (strncmp(argv[i], "-g", 2) == 0) {
   char *p = strchr(argv[i], ',');
   glevel = atoi(argv[i]+2);
   if (p) {
    comment = p + 1;
    if (glevel == 0)
     glevel = 1;
    if (stabIR.stabline == 
# 124 "src/main.c" 3 4
                          ((void*)0)
# 124 "src/main.c"
                              ) {
     stabIR.stabline = IR->stabline;
     stabIR.stabend = IR->stabend;
     IR->stabline = stabline;
     IR->stabend = stabend;
    }
   }
  } else if (strcmp(argv[i], "-x") == 0)
   xref++;
  else if (strcmp(argv[i], "-A") == 0) {
   ++Aflag;
  } else if (strcmp(argv[i], "-P") == 0)
   Pflag++;
  else if (strcmp(argv[i], "-w") == 0)
   wflag++;
  else if (strcmp(argv[i], "-v") == 0)
   fprint(
# 140 "src/main.c" 3 4
         (stderr)
# 140 "src/main.c"
               , "%s %s\n", argv[0], rcsid);
  else if (strncmp(argv[i], "-s", 2) == 0)
   density = strtod(&argv[i][2], 
# 142 "src/main.c" 3 4
                                ((void*)0)
# 142 "src/main.c"
                                    );
  else if (strncmp(argv[i], "-errout=", 8) == 0) {
   FILE *f = fopen(argv[i]+8, "w");
   if (f == 
# 145 "src/main.c" 3 4
           ((void*)0)
# 145 "src/main.c"
               ) {
    fprint(
# 146 "src/main.c" 3 4
          (stderr)
# 146 "src/main.c"
                , "%s: can't write errors to `%s'\n", argv[0], argv[i]+8);
    exit(
# 147 "src/main.c" 3 4
        1
# 147 "src/main.c"
                    );
   }
   fclose(f);
   f = freopen(argv[i]+8, "w", 
# 150 "src/main.c" 3 4
                              (stderr)
# 150 "src/main.c"
                                    );
   
# 151 "src/main.c" 3 4
  ((void)((
# 151 "src/main.c"
  f
# 151 "src/main.c" 3 4
  ) || (__assert_fail(
# 151 "src/main.c"
  "f"
# 151 "src/main.c" 3 4
  , "src/main.c", 151, __func__),0)))
# 151 "src/main.c"
           ;
  } else if (strncmp(argv[i], "-e", 2) == 0) {
   int x;
   if ((x = strtol(&argv[i][2], 
# 154 "src/main.c" 3 4
                               ((void*)0)
# 154 "src/main.c"
                                   , 0)) > 0)
    errlimit = x;
  } else if (strncmp(argv[i], "-little_endian=", 15) == 0)
   IR->little_endian = argv[i][15] - '0';
  else if (strncmp(argv[i], "-mulops_calls=", 18) == 0)
   IR->mulops_calls = argv[i][18] - '0';
  else if (strncmp(argv[i], "-wants_callb=", 13) == 0)
   IR->wants_callb = argv[i][13] - '0';
  else if (strncmp(argv[i], "-wants_argb=", 12) == 0)
   IR->wants_argb = argv[i][12] - '0';
  else if (strncmp(argv[i], "-left_to_right=", 15) == 0)
   IR->left_to_right = argv[i][15] - '0';
  else if (strncmp(argv[i], "-wants_dag=", 11) == 0)
   IR->wants_dag = argv[i][11] - '0';
  else if (*argv[i] != '-' || strcmp(argv[i], "-") == 0) {
   if (infile == 
# 169 "src/main.c" 3 4
                ((void*)0)
# 169 "src/main.c"
                    )
    infile = argv[i];
   else if (outfile == 
# 171 "src/main.c" 3 4
                      ((void*)0)
# 171 "src/main.c"
                          )
    outfile = argv[i];
  }

 if (infile != 
# 175 "src/main.c" 3 4
              ((void*)0) 
# 175 "src/main.c"
                   && strcmp(infile, "-") != 0
 && freopen(infile, "r", 
# 176 "src/main.c" 3 4
                        (stdin)
# 176 "src/main.c"
                             ) == 
# 176 "src/main.c" 3 4
                                  ((void*)0)
# 176 "src/main.c"
                                      ) {
  fprint(
# 177 "src/main.c" 3 4
        (stderr)
# 177 "src/main.c"
              , "%s: can't read `%s'\n", argv[0], infile);
  exit(
# 178 "src/main.c" 3 4
      1
# 178 "src/main.c"
                  );
 }
 if (outfile != 
# 180 "src/main.c" 3 4
               ((void*)0) 
# 180 "src/main.c"
                    && strcmp(outfile, "-") != 0
 && freopen(outfile, "w", 
# 181 "src/main.c" 3 4
                         (stdout)
# 181 "src/main.c"
                               ) == 
# 181 "src/main.c" 3 4
                                    ((void*)0)
# 181 "src/main.c"
                                        ) {
  fprint(
# 182 "src/main.c" 3 4
        (stderr)
# 182 "src/main.c"
              , "%s: can't write `%s'\n", argv[0], outfile);
  exit(
# 183 "src/main.c" 3 4
      1
# 183 "src/main.c"
                  );
 }
}

static void typestab(Symbol p, void *cl) {
 if (*(Symbol *)cl == 0 && p->sclass && p->sclass != TYPEDEF)
  *(Symbol *)cl = p;
 if ((p->sclass == TYPEDEF || p->sclass == 0) && IR->stabtype)
  (*IR->stabtype)(p);
}


static void stabline(Coordinate *cp) {
 if (cp->file && cp->file != currentfile) {
  if (srcfp)
   fclose(srcfp);
  currentfile = cp->file;
  srcfp = fopen(currentfile, "r");
  srcpos = 0;
  currentline = 0;
 }
 if (currentline != cp->y && srcfp) {
  char buf[512];
  if (srcpos > cp->y) {
   rewind(srcfp);
   srcpos = 0;
  }
  for ( ; srcpos < cp->y; srcpos++)
   if (fgets(buf, sizeof buf, srcfp) == 
# 211 "src/main.c" 3 4
                                       ((void*)0)
# 211 "src/main.c"
                                           ) {
    fclose(srcfp);
    srcfp = 
# 213 "src/main.c" 3 4
           ((void*)0)
# 213 "src/main.c"
               ;
    break;
   }
  if (srcfp && srcpos == cp->y)
   print("%s%s", comment, buf);
 }
 currentline = cp->y;
 if (stabIR.stabline)
  (*stabIR.stabline)(cp);
}

static void stabend(Coordinate *cp, Symbol p, Coordinate **cpp, Symbol *sp, Symbol *stab) {
 if (stabIR.stabend)
  (*stabIR.stabend)(cp, p, cpp, sp, stab);
 if (srcfp)
  fclose(srcfp);
}
