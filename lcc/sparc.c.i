# 0 "./sparc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "./sparc.c"
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
# 2 "./sparc.c" 2





static void address(Symbol, Symbol, long);
static void blkfetch(int, int, int, int);
static void blkloop(int, int, int, int, int, int[]);
static void blkstore(int, int, int, int);
static void defaddress(Symbol);
static void defconst(int, int, Value);
static void defstring(int, char *);
static void defsymbol(Symbol);
static void doarg(Node);
static void emit2(Node);
static void export(Symbol);
static void clobber(Node);
static void function(Symbol, Symbol [], Symbol [], int);
static void global(Symbol);
static void import(Symbol);
static void local(Symbol);
static void progbeg(int, char **);
static void progend(void);
static void segment(int);
static void space(int);
static void target(Node);
static int imm(Node);
static void renameregs(void);
extern Interface sparcIR, solarisIR;
static void defsymbol2(Symbol);
static void export2(Symbol);
static void globalend(void);
static void global2(Symbol);
static void segment2(int);
static void progend2(void);

extern char *stabprefix;
extern void stabblock(int, int, Symbol*);
extern void stabend(Coordinate *, Symbol, Coordinate **, Symbol *, Symbol *);
extern void stabfend(Symbol, int);
extern void stabinit(char *, int, char *[]);
extern void stabline(Coordinate *);
extern void stabsym(Symbol);
extern void stabtype(Symbol);
static Symbol greg[32], gregw;
static Symbol *oreg = &greg[8], *ireg = &greg[24];
static Symbol freg[32], freg2[32];
static Symbol fregw, freg2w;

static int regvars;
static int retstruct;

static int pflag = 0;

static int cseg;





static void _kids(Node, int, Node[]);
static void _label(Node);
static int _rule(void*, int);
# 82 "./sparc.c"
static char *_ntname[] = {
 0,
 "stmt",
 "reg",
 "con",
 "stk13",
 "stk",
 "con13",
 "base",
 "addr",
 "addrl",
 "spill",
 "rc",
 "rc5",
 "addrg",
 "call",
 "rel",
 0
};

struct _state {
 short cost[16];
 struct {
  unsigned int _stmt:6;
  unsigned int _reg:7;
  unsigned int _con:4;
  unsigned int _stk13:2;
  unsigned int _stk:2;
  unsigned int _con13:3;
  unsigned int _base:3;
  unsigned int _addr:3;
  unsigned int _addrl:1;
  unsigned int _spill:1;
  unsigned int _rc:2;
  unsigned int _rc5:2;
  unsigned int _addrg:1;
  unsigned int _call:2;
  unsigned int _rel:4;
 } rule;
};

static short _nts_0[] = { 0 };
static short _nts_1[] = { 2, 0 };
static short _nts_2[] = { 4, 0 };
static short _nts_3[] = { 2, 6, 0 };
static short _nts_4[] = { 6, 0 };
static short _nts_5[] = { 7, 0 };
static short _nts_6[] = { 2, 2, 0 };
static short _nts_7[] = { 5, 0 };
static short _nts_8[] = { 8, 0 };
static short _nts_9[] = { 8, 2, 0 };
static short _nts_10[] = { 9, 0 };
static short _nts_11[] = { 9, 2, 0 };
static short _nts_12[] = { 7, 2, 0 };
static short _nts_13[] = { 10, 2, 0 };
static short _nts_14[] = { 3, 0 };
static short _nts_15[] = { 2, 11, 0 };
static short _nts_16[] = { 2, 12, 0 };
static short _nts_17[] = { 13, 0 };
static short _nts_18[] = { 14, 0 };
static short _nts_19[] = { 14, 2, 0 };
static short _nts_20[] = { 11, 2, 0 };
static short _nts_21[] = { 15, 0 };

static short *_nts[] = {
 0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_1,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_2,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_3,
 _nts_3,
 _nts_3,
 _nts_1,
 _nts_4,
 _nts_2,
 _nts_5,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_7,
 _nts_8,
 _nts_8,
 _nts_8,
 _nts_8,
 _nts_8,
 _nts_8,
 _nts_8,
 _nts_8,
 _nts_9,
 _nts_9,
 _nts_9,
 _nts_9,
 _nts_9,
 _nts_9,
 _nts_9,
 _nts_9,
 _nts_0,
 _nts_10,
 _nts_11,
 _nts_5,
 _nts_12,
 _nts_0,
 _nts_13,
 _nts_13,
 _nts_13,
 _nts_13,
 _nts_13,
 _nts_13,
 _nts_13,
 _nts_13,
 _nts_13,
 _nts_8,
 _nts_8,
 _nts_8,
 _nts_8,
 _nts_8,
 _nts_8,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_0,
 _nts_14,
 _nts_4,
 _nts_1,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_0,
 _nts_1,
 _nts_16,
 _nts_16,
 _nts_16,
 _nts_16,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_0,
 _nts_17,
 _nts_8,
 _nts_0,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_0,
 _nts_8,
 _nts_18,
 _nts_18,
 _nts_18,
 _nts_18,
 _nts_18,
 _nts_18,
 _nts_19,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_15,
 _nts_20,
 _nts_20,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_1,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_6,
 _nts_21,
 _nts_1,
 _nts_1,
 _nts_6,
};

static char *_templates[] = {
        0,
        "# read register\n",
        "# read register\n",
        "# read register\n",
        "# read register\n",
        "# read register\n",
        "# read register\n",
        "# read register\n",
        "# read register\n",
        "# read register\n",
         "# read register\n",
         "# read register\n",
         "# read register\n",
         "# write register\n",
         "# write register\n",
         "# write register\n",
         "# write register\n",
         "# write register\n",
         "# write register\n",
         "# write register\n",
         "# write register\n",
         "# write register\n",
         "# write register\n",
         "# write register\n",
         "# write register\n",
         "%a",
         "%a",
         "%a",
         "%a",
         "%a",
         "%a",
         "%a",
         "%a",
         "%a",
         "%a",
         "",
         "set %a,%%%c\n",
         "%a",
         "%a",
         "add %0,%%fp,%%%c\n",
         "set %a,%%%c\n",
         "set %a,%%%c\n",
         "set %a,%%%c\nadd %%%c,%%fp,%%%c\n",
         "set %a,%%%c\nadd %%%c,%%fp,%%%c\n",
         "%a",
         "%a",
         "%a",
         "%a",
         "%a",
         "%a",
         "%a",
         "%%%0+%1",
         "%%%0+%1",
         "%%%0+%1",
         "%%%0",
         "%0",
         "%%fp+%0",
         "%0",
         "%%%0+%%%1",
         "%%%0+%%%1",
         "%%%0+%%%1",
         "%%fp+%%%0",
         "ldsb [%0],%%%c\n",
         "ldsh [%0],%%%c\n",
         "ld [%0],%%%c\n",
         "ldub [%0],%%%c\n",
         "lduh [%0],%%%c\n",
         "ld [%0],%%%c\n",
         "ld [%0],%%%c\n",
         "ld [%0],%%f%c\n",
         "stb %%%1,[%0]\n",
         "sth %%%1,[%0]\n",
         "st %%%1,[%0]\n",
         "stb %%%1,[%0]\n",
         "sth %%%1,[%0]\n",
         "st %%%1,[%0]\n",
         "st %%%1,[%0]\n",
         "st %%f%1,[%0]\n",
         "%%%fp+%a",
         "ldd [%0],%%f%c\n",
         "std %%f%1,[%0]\n",
         "# ld2 [%0],%%f%c\n",
         "# st2 %%f%1,[%0]\n",
         "%a",
         "set %0,%%g1\nstb %%%1,[%%fp+%%g1]\n",
         "set %0,%%g1\nsth %%%1,[%%fp+%%g1]\n",
         "set %0,%%g1\nst %%%1,[%%fp+%%g1]\n",
         "set %0,%%g1\nstb %%%1,[%%fp+%%g1]\n",
         "set %0,%%g1\nsth %%%1,[%%fp+%%g1]\n",
         "set %0,%%g1\nst %%%1,[%%fp+%%g1]\n",
         "set %0,%%g1\nst %%%1,[%%fp+%%g1]\n",
         "set %0,%%g1\nst %%f%1,[%%fp+%%g1]\n",
         "set %0,%%g1\nstd %%f%1,[%%fp+%%g1]\n",
         "ldsb [%0],%%%c\n",
         "ldsh [%0],%%%c\n",
         "ldub [%0],%%%c\n",
         "lduh [%0],%%%c\n",
         "ldub [%0],%%%c\n",
         "lduh [%0],%%%c\n",
         "mov %%%0,%%%c\n",
          "mov %%%0,%%%c\n",
          "mov %%%0,%%%c\n",
          "mov %%%0,%%%c\n",
          "mov %%%0,%%%c\n",
          "mov %%%0,%%%c\n",
          "mov %%%0,%%%c\n",
          "# reg\n",
          "# reg\n",
          "# reg\n",
          "# reg\n",
          "# reg\n",
          "# reg\n",
          "# reg\n",
          "set %0,%%%c\n",
          "%0",
          "%%%0",
          "add %%%0,%1,%%%c\n",
          "add %%%0,%1,%%%c\n",
          "add %%%0,%1,%%%c\n",
          "and %%%0,%1,%%%c\n",
          "or %%%0,%1,%%%c\n",
          "xor %%%0,%1,%%%c\n",
          "and %%%0,%1,%%%c\n",
          "or %%%0,%1,%%%c\n",
          "xor %%%0,%1,%%%c\n",
          "sub %%%0,%1,%%%c\n",
          "sub %%%0,%1,%%%c\n",
          "sub %%%0,%1,%%%c\n",
          "%a",
          "%%%0",
          "sll %%%0,%1,%%%c\n",
          "sll %%%0,%1,%%%c\n",
          "sra %%%0,%1,%%%c\n",
          "srl %%%0,%1,%%%c\n",
          "andn %%%0,%1,%%%c\n",
          "orn %%%0,%1,%%%c\n",
          "xnor %%%0,%1,%%%c\n",
          "andn %%%0,%1,%%%c\n",
          "orn %%%0,%1,%%%c\n",
          "xnor %%%0,%1,%%%c\n",
          "neg %%%0,%%%c\n",
          "not %%%0,%%%c\n",
          "not %%%0,%%%c\n",
          "sll %%%0,8*(4-%a),%%%c; sra %%%c,8*(4-%a),%%%c\n",
          "sll %%%0,8*(4-%a),%%%c; srl %%%c,8*(4-%a),%%%c\n",
          "and %%%0,0xff,%%%c\n",
          "set 0xffff,%%g1; and %%%0,%%g1,%%%c\n",
          "and %%%0,0xff,%%%c\n",
          "set 0xffff,%%g1; and %%%0,%%g1,%%%c\n",
          "%a",
          "ba %0; nop\n",
          "jmp %0; nop\n",
          "%a:\n",
          "cmp %%%0,%1; be %a; nop\n",
          "cmp %%%0,%1; be %a; nop\n",
          "cmp %%%0,%1; bge %a; nop\n",
          "cmp %%%0,%1; bgeu %a; nop\n",
          "cmp %%%0,%1; bg %a; nop\n",
          "cmp %%%0,%1; bgu %a; nop\n",
          "cmp %%%0,%1; ble %a; nop\n",
          "cmp %%%0,%1; bleu %a; nop\n",
          "cmp %%%0,%1; bl %a; nop\n",
          "cmp %%%0,%1; blu %a; nop\n",
          "cmp %%%0,%1; bne %a; nop\n",
          "cmp %%%0,%1; bne %a; nop\n",
          "%a",
          "%0",
          "call %0; nop\n",
          "call %0; nop\n",
          "call %0; nop\n",
          "call %0; nop\n",
          "call %0; nop\n",
          "call %0; nop\n",
          "call %0; st %%%1,[%%sp+64]; unimp %b&0xfff\n",
          "# ret\n",
          "# ret\n",
          "# ret\n",
          "# ret\n",
          "# ret\n",
          "st %%%0,[%%sp+4*%c+68]\n",
          "st %%%0,[%%sp+4*%c+68]\n",
          "st %%%0,[%%sp+4*%c+68]\n",
          "# ARGF4\n",
          "# ARGF8\n",
          "sra %%%0,31,%%g1; wr %%g0,%%g1,%%y; nop; nop; nop; sdiv %%%0,%1,%%%c\n",
          "wr %%g0,%%g0,%%y; nop; nop; nop; udiv %%%0,%1,%%%c\n",
          "sra %%%0,31,%%g1; wr %%g0,%%g1,%%y; nop; nop; nop; sdiv %%%0,%1,%%g1\n; smul %%g1,%1,%%g1; sub %%%0,%%g1,%%%c\n",
          "wr %%g0,%%g0,%%y; nop; nop; nop; udiv %%%0,%1,%%g1\n; umul %%g1,%1,%%g1; sub %%%0,%%g1,%%%c\n",
          "smul %%%1,%0,%%%c\n",
          "umul %%%1,%0,%%%c\n",
          "faddd %%f%0,%%f%1,%%f%c\n",
          "fadds %%f%0,%%f%1,%%f%c\n",
          "fdivd %%f%0,%%f%1,%%f%c\n",
          "fdivs %%f%0,%%f%1,%%f%c\n",
          "fmuld %%f%0,%%f%1,%%f%c\n",
          "fmuls %%f%0,%%f%1,%%f%c\n",
          "fsubd %%f%0,%%f%1,%%f%c\n",
          "fsubs %%f%0,%%f%1,%%f%c\n",
          "fnegs %%f%0,%%f%c\n",
          "fmovs %%f%0,%%f%c\n",
          "fdtos %%f%0,%%f%c\n",
          "fstod %%f%0,%%f%c\n",
          "fstoi %%f%0,%%f0; st %%f0,[%%sp+64]; ld [%%sp+64],%%%c\n",
          "fdtoi %%f%0,%%f0; st %%f0,[%%sp+64]; ld [%%sp+64],%%%c\n",
          "st %%%0,[%%sp+64]; ld [%%sp+64],%%f%c; fitos %%f%c,%%f%c\n",
          "st %%%0,[%%sp+64]; ld [%%sp+64],%%f%c; fitod %%f%c,%%f%c\n",
          "fcmpd %%f%0,%%f%1; nop; fbe",
          "fcmps %%f%0,%%f%1; nop; fbe",
          "fcmpd %%f%0,%%f%1; nop; fbuge",
          "fcmps %%f%0,%%f%1; nop; fbuge",
          "fcmpd %%f%0,%%f%1; nop; fbug",
          "fcmps %%f%0,%%f%1; nop; fbug",
          "fcmpd %%f%0,%%f%1; nop; fbule",
          "fcmps %%f%0,%%f%1; nop; fbule",
          "fcmpd %%f%0,%%f%1; nop; fbul",
          "fcmps %%f%0,%%f%1; nop; fbul",
          "fcmpd %%f%0,%%f%1; nop; fbne",
          "fcmps %%f%0,%%f%1; nop; fbne",
          "%0 %a; nop\n",
          "# LOADD\n",
          "# NEGD\n",
          "# ASGNB\n",
};

static char _isinstruction[] = {
        0,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         1,
         0,
         0,
         1,
         1,
         1,
         1,
         1,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         0,
         1,
         1,
         1,
         1,
         0,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
         1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          0,
          0,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          0,
          0,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          0,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          0,
          0,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          1,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          1,
          1,
          1,
          1,
};

static char *_string[] = {
        0,
        "reg: INDIRI1(VREGP)",
        "reg: INDIRU1(VREGP)",
        "reg: INDIRI2(VREGP)",
        "reg: INDIRU2(VREGP)",
        "reg: INDIRF4(VREGP)",
        "reg: INDIRI4(VREGP)",
        "reg: INDIRP4(VREGP)",
        "reg: INDIRU4(VREGP)",
        "reg: INDIRF8(VREGP)",
         "reg: INDIRI8(VREGP)",
         "reg: INDIRP8(VREGP)",
         "reg: INDIRU8(VREGP)",
         "stmt: ASGNI1(VREGP,reg)",
         "stmt: ASGNU1(VREGP,reg)",
         "stmt: ASGNI2(VREGP,reg)",
         "stmt: ASGNU2(VREGP,reg)",
         "stmt: ASGNF4(VREGP,reg)",
         "stmt: ASGNI4(VREGP,reg)",
         "stmt: ASGNP4(VREGP,reg)",
         "stmt: ASGNU4(VREGP,reg)",
         "stmt: ASGNF8(VREGP,reg)",
         "stmt: ASGNI8(VREGP,reg)",
         "stmt: ASGNP8(VREGP,reg)",
         "stmt: ASGNU8(VREGP,reg)",
         "con: CNSTI1",
         "con: CNSTU1",
         "con: CNSTI2",
         "con: CNSTU2",
         "con: CNSTI4",
         "con: CNSTU4",
         "con: CNSTP4",
         "con: CNSTI8",
         "con: CNSTU8",
         "con: CNSTP8",
         "stmt: reg",
         "reg: ADDRGP4",
         "stk13: ADDRFP4",
         "stk13: ADDRLP4",
         "reg: stk13",
         "stk: ADDRFP4",
         "stk: ADDRLP4",
         "reg: ADDRFP4",
         "reg: ADDRLP4",
         "con13: CNSTI1",
         "con13: CNSTI2",
         "con13: CNSTI4",
         "con13: CNSTU1",
         "con13: CNSTU2",
         "con13: CNSTU4",
         "con13: CNSTP4",
         "base: ADDI4(reg,con13)",
         "base: ADDP4(reg,con13)",
         "base: ADDU4(reg,con13)",
         "base: reg",
         "base: con13",
         "base: stk13",
         "addr: base",
         "addr: ADDI4(reg,reg)",
         "addr: ADDP4(reg,reg)",
         "addr: ADDU4(reg,reg)",
         "addr: stk",
         "reg: INDIRI1(addr)",
         "reg: INDIRI2(addr)",
         "reg: INDIRI4(addr)",
         "reg: INDIRU1(addr)",
         "reg: INDIRU2(addr)",
         "reg: INDIRU4(addr)",
         "reg: INDIRP4(addr)",
         "reg: INDIRF4(addr)",
         "stmt: ASGNI1(addr,reg)",
         "stmt: ASGNI2(addr,reg)",
         "stmt: ASGNI4(addr,reg)",
         "stmt: ASGNU1(addr,reg)",
         "stmt: ASGNU2(addr,reg)",
         "stmt: ASGNU4(addr,reg)",
         "stmt: ASGNP4(addr,reg)",
         "stmt: ASGNF4(addr,reg)",
         "addrl: ADDRLP4",
         "reg: INDIRF8(addrl)",
         "stmt: ASGNF8(addrl,reg)",
         "reg: INDIRF8(base)",
         "stmt: ASGNF8(base,reg)",
         "spill: ADDRLP4",
         "stmt: ASGNI1(spill,reg)",
         "stmt: ASGNI2(spill,reg)",
         "stmt: ASGNI4(spill,reg)",
         "stmt: ASGNU1(spill,reg)",
         "stmt: ASGNU2(spill,reg)",
         "stmt: ASGNU4(spill,reg)",
         "stmt: ASGNP4(spill,reg)",
         "stmt: ASGNF4(spill,reg)",
         "stmt: ASGNF8(spill,reg)",
         "reg: CVII4(INDIRI1(addr))",
         "reg: CVII4(INDIRI2(addr))",
         "reg: CVUU4(INDIRU1(addr))",
         "reg: CVUU4(INDIRU2(addr))",
         "reg: CVUI4(INDIRU1(addr))",
         "reg: CVUI4(INDIRU2(addr))",
         "reg: LOADI1(reg)",
          "reg: LOADI2(reg)",
          "reg: LOADI4(reg)",
          "reg: LOADP4(reg)",
          "reg: LOADU1(reg)",
          "reg: LOADU2(reg)",
          "reg: LOADU4(reg)",
          "reg: CNSTI1",
          "reg: CNSTI2",
          "reg: CNSTI4",
          "reg: CNSTP4",
          "reg: CNSTU1",
          "reg: CNSTU2",
          "reg: CNSTU4",
          "reg: con",
          "rc: con13",
          "rc: reg",
          "reg: ADDI4(reg,rc)",
          "reg: ADDP4(reg,rc)",
          "reg: ADDU4(reg,rc)",
          "reg: BANDI4(reg,rc)",
          "reg: BORI4(reg,rc)",
          "reg: BXORI4(reg,rc)",
          "reg: BANDU4(reg,rc)",
          "reg: BORU4(reg,rc)",
          "reg: BXORU4(reg,rc)",
          "reg: SUBI4(reg,rc)",
          "reg: SUBP4(reg,rc)",
          "reg: SUBU4(reg,rc)",
          "rc5: CNSTI4",
          "rc5: reg",
          "reg: LSHI4(reg,rc5)",
          "reg: LSHU4(reg,rc5)",
          "reg: RSHI4(reg,rc5)",
          "reg: RSHU4(reg,rc5)",
          "reg: BANDI4(reg,BCOMI4(rc))",
          "reg: BORI4(reg,BCOMI4(rc))",
          "reg: BXORI4(reg,BCOMI4(rc))",
          "reg: BANDU4(reg,BCOMU4(rc))",
          "reg: BORU4(reg,BCOMU4(rc))",
          "reg: BXORU4(reg,BCOMU4(rc))",
          "reg: NEGI4(reg)",
          "reg: BCOMI4(reg)",
          "reg: BCOMU4(reg)",
          "reg: CVII4(reg)",
          "reg: CVUU4(reg)",
          "reg: CVUU4(reg)",
          "reg: CVUU4(reg)",
          "reg: CVUI4(reg)",
          "reg: CVUI4(reg)",
          "addrg: ADDRGP4",
          "stmt: JUMPV(addrg)",
          "stmt: JUMPV(addr)",
          "stmt: LABELV",
          "stmt: EQI4(reg,rc)",
          "stmt: EQU4(reg,rc)",
          "stmt: GEI4(reg,rc)",
          "stmt: GEU4(reg,rc)",
          "stmt: GTI4(reg,rc)",
          "stmt: GTU4(reg,rc)",
          "stmt: LEI4(reg,rc)",
          "stmt: LEU4(reg,rc)",
          "stmt: LTI4(reg,rc)",
          "stmt: LTU4(reg,rc)",
          "stmt: NEI4(reg,rc)",
          "stmt: NEU4(reg,rc)",
          "call: ADDRGP4",
          "call: addr",
          "reg: CALLF8(call)",
          "reg: CALLF4(call)",
          "reg: CALLI4(call)",
          "reg: CALLP4(call)",
          "reg: CALLU4(call)",
          "stmt: CALLV(call)",
          "stmt: CALLB(call,reg)",
          "stmt: RETF8(reg)",
          "stmt: RETF4(reg)",
          "stmt: RETI4(reg)",
          "stmt: RETU4(reg)",
          "stmt: RETP4(reg)",
          "stmt: ARGI4(reg)",
          "stmt: ARGU4(reg)",
          "stmt: ARGP4(reg)",
          "stmt: ARGF4(reg)",
          "stmt: ARGF8(reg)",
          "reg: DIVI4(reg,rc)",
          "reg: DIVU4(reg,rc)",
          "reg: MODI4(reg,rc)",
          "reg: MODU4(reg,rc)",
          "reg: MULI4(rc,reg)",
          "reg: MULU4(rc,reg)",
          "reg: ADDF8(reg,reg)",
          "reg: ADDF4(reg,reg)",
          "reg: DIVF8(reg,reg)",
          "reg: DIVF4(reg,reg)",
          "reg: MULF8(reg,reg)",
          "reg: MULF4(reg,reg)",
          "reg: SUBF8(reg,reg)",
          "reg: SUBF4(reg,reg)",
          "reg: NEGF4(reg)",
          "reg: LOADF4(reg)",
          "reg: CVFF4(reg)",
          "reg: CVFF8(reg)",
          "reg: CVFI4(reg)",
          "reg: CVFI4(reg)",
          "reg: CVIF4(reg)",
          "reg: CVIF8(reg)",
          "rel: EQF8(reg,reg)",
          "rel: EQF4(reg,reg)",
          "rel: GEF8(reg,reg)",
          "rel: GEF4(reg,reg)",
          "rel: GTF8(reg,reg)",
          "rel: GTF4(reg,reg)",
          "rel: LEF8(reg,reg)",
          "rel: LEF4(reg,reg)",
          "rel: LTF8(reg,reg)",
          "rel: LTF4(reg,reg)",
          "rel: NEF8(reg,reg)",
          "rel: NEF4(reg,reg)",
          "stmt: rel",
          "reg: LOADF8(reg)",
          "reg: NEGF8(reg)",
          "stmt: ASGNB(reg,INDIRB(reg))",
};

static short _decode_stmt[] = {
 0,
 13,
 14,
 15,
 16,
 17,
 18,
 19,
 20,
 21,
 22,
 23,
 24,
 35,
 70,
 71,
 72,
 73,
 74,
 75,
 76,
 77,
 80,
 82,
 84,
 85,
 86,
 87,
 88,
 89,
 90,
 91,
 92,
 150,
 151,
 152,
 153,
 154,
 155,
 156,
 157,
 158,
 159,
 160,
 161,
 162,
 163,
 164,
 172,
 173,
 174,
 175,
 176,
 177,
 178,
 179,
 180,
 181,
 182,
 183,
 218,
 221,
};

static short _decode_reg[] = {
 0,
 1,
 2,
 3,
 4,
 5,
 6,
 7,
 8,
 9,
 10,
 11,
 12,
 36,
 39,
 42,
 43,
 62,
 63,
 64,
 65,
 66,
 67,
 68,
 69,
 79,
 81,
 93,
 94,
 95,
 96,
 97,
 98,
 99,
 100,
 101,
 102,
 103,
 104,
 105,
 106,
 107,
 108,
 109,
 110,
 111,
 112,
 113,
 116,
 117,
 118,
 119,
 120,
 121,
 122,
 123,
 124,
 125,
 126,
 127,
 130,
 131,
 132,
 133,
 134,
 135,
 136,
 137,
 138,
 139,
 140,
 141,
 142,
 143,
 144,
 145,
 146,
 147,
 148,
 167,
 168,
 169,
 170,
 171,
 184,
 185,
 186,
 187,
 188,
 189,
 190,
 191,
 192,
 193,
 194,
 195,
 196,
 197,
 198,
 199,
 200,
 201,
 202,
 203,
 204,
 205,
 219,
 220,
};

static short _decode_con[] = {
 0,
 25,
 26,
 27,
 28,
 29,
 30,
 31,
 32,
 33,
 34,
};

static short _decode_stk13[] = {
 0,
 37,
 38,
};

static short _decode_stk[] = {
 0,
 40,
 41,
};

static short _decode_con13[] = {
 0,
 44,
 45,
 46,
 47,
 48,
 49,
 50,
};

static short _decode_base[] = {
 0,
 51,
 52,
 53,
 54,
 55,
 56,
};

static short _decode_addr[] = {
 0,
 57,
 58,
 59,
 60,
 61,
};

static short _decode_addrl[] = {
 0,
 78,
};

static short _decode_spill[] = {
 0,
 83,
};

static short _decode_rc[] = {
 0,
 114,
 115,
};

static short _decode_rc5[] = {
 0,
 128,
 129,
};

static short _decode_addrg[] = {
 0,
 149,
};

static short _decode_call[] = {
 0,
 165,
 166,
};

static short _decode_rel[] = {
 0,
 206,
 207,
 208,
 209,
 210,
 211,
 212,
 213,
 214,
 215,
 216,
 217,
};

static int _rule(void *state, int goalnt) {
 if (goalnt < 1 || goalnt > 15)
  fatal("_rule", "Bad goal nonterminal %d\n", goalnt);
 if (!state)
  return 0;
 switch (goalnt) {
 case 1: return _decode_stmt[((struct _state *)state)->rule._stmt];
 case 2: return _decode_reg[((struct _state *)state)->rule._reg];
 case 3: return _decode_con[((struct _state *)state)->rule._con];
 case 4: return _decode_stk13[((struct _state *)state)->rule._stk13];
 case 5: return _decode_stk[((struct _state *)state)->rule._stk];
 case 6: return _decode_con13[((struct _state *)state)->rule._con13];
 case 7: return _decode_base[((struct _state *)state)->rule._base];
 case 8: return _decode_addr[((struct _state *)state)->rule._addr];
 case 9: return _decode_addrl[((struct _state *)state)->rule._addrl];
 case 10: return _decode_spill[((struct _state *)state)->rule._spill];
 case 11: return _decode_rc[((struct _state *)state)->rule._rc];
 case 12: return _decode_rc5[((struct _state *)state)->rule._rc5];
 case 13: return _decode_addrg[((struct _state *)state)->rule._addrg];
 case 14: return _decode_call[((struct _state *)state)->rule._call];
 case 15: return _decode_rel[((struct _state *)state)->rule._rel];
 default:
  fatal("_rule", "Bad goal nonterminal %d\n", goalnt);
  return 0;
 }
}

static void _closure_reg(Node, int);
static void _closure_con(Node, int);
static void _closure_stk13(Node, int);
static void _closure_stk(Node, int);
static void _closure_con13(Node, int);
static void _closure_base(Node, int);
static void _closure_addr(Node, int);
static void _closure_rel(Node, int);

static void _closure_reg(Node a, int c) {
 struct _state *p = ((a)->x.state);
 if (c + 0 < p->cost[12]) {
  p->cost[12] = c + 0;
  p->rule._rc5 = 2;
 }
 if (c + 0 < p->cost[11]) {
  p->cost[11] = c + 0;
  p->rule._rc = 2;
 }
 if (c + 0 < p->cost[7]) {
  p->cost[7] = c + 0;
  p->rule._base = 4;
  _closure_base(a, c + 0);
 }
 if (c + 0 < p->cost[1]) {
  p->cost[1] = c + 0;
  p->rule._stmt = 13;
 }
}

static void _closure_con(Node a, int c) {
 struct _state *p = ((a)->x.state);
 if (c + 1 < p->cost[2]) {
  p->cost[2] = c + 1;
  p->rule._reg = 47;
  _closure_reg(a, c + 1);
 }
}

static void _closure_stk13(Node a, int c) {
 struct _state *p = ((a)->x.state);
 if (c + 0 < p->cost[7]) {
  p->cost[7] = c + 0;
  p->rule._base = 6;
  _closure_base(a, c + 0);
 }
 if (c + 1 < p->cost[2]) {
  p->cost[2] = c + 1;
  p->rule._reg = 14;
  _closure_reg(a, c + 1);
 }
}

static void _closure_stk(Node a, int c) {
 struct _state *p = ((a)->x.state);
 if (c + 0 < p->cost[8]) {
  p->cost[8] = c + 0;
  p->rule._addr = 5;
  _closure_addr(a, c + 0);
 }
}

static void _closure_con13(Node a, int c) {
 struct _state *p = ((a)->x.state);
 if (c + 0 < p->cost[11]) {
  p->cost[11] = c + 0;
  p->rule._rc = 1;
 }
 if (c + 0 < p->cost[7]) {
  p->cost[7] = c + 0;
  p->rule._base = 5;
  _closure_base(a, c + 0);
 }
}

static void _closure_base(Node a, int c) {
 struct _state *p = ((a)->x.state);
 if (c + 0 < p->cost[8]) {
  p->cost[8] = c + 0;
  p->rule._addr = 1;
  _closure_addr(a, c + 0);
 }
}

static void _closure_addr(Node a, int c) {
 struct _state *p = ((a)->x.state);
 if (c + 0 < p->cost[14]) {
  p->cost[14] = c + 0;
  p->rule._call = 2;
 }
}

static void _closure_rel(Node a, int c) {
 struct _state *p = ((a)->x.state);
 if (c + 4 < p->cost[1]) {
  p->cost[1] = c + 4;
  p->rule._stmt = 60;
 }
}

static void _label(Node a) {
 int c;
 struct _state *p;

 if (!a)
  fatal("_label", "Null tree\n", 0);
 ((a)->x.state) = p = allocate(sizeof *p, FUNC);
 p->rule._stmt = 0;
 p->cost[1] =
 p->cost[2] =
 p->cost[3] =
 p->cost[4] =
 p->cost[5] =
 p->cost[6] =
 p->cost[7] =
 p->cost[8] =
 p->cost[9] =
 p->cost[10] =
 p->cost[11] =
 p->cost[12] =
 p->cost[13] =
 p->cost[14] =
 p->cost[15] =
  0x7fff;
 switch (((a)->op)) {
 case 41:
  break;
 case 57:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[1])->op == 73
  ) {
   c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((((a)->kids[1]))->kids[0])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 61;
   }
  }
  break;
 case 73:
  _label(((a)->kids[0]));
  break;
 case 216:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[14] + 2;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 48;
  }
  break;
 case 217:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[14] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 49;
  }
  break;
 case 233:
  break;
 case 248:
  break;
 case 584:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[13] + 2;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 33;
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + 2;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 34;
  }
  break;
 case 600:

  if (0 + 0 < p->cost[1]) {
   p->cost[1] = 0 + 0;
   p->rule._stmt = 35;
  }
  break;
 case 711:
  break;
 case 1045:

  if (0 + 0 < p->cost[3]) {
   p->cost[3] = 0 + 0;
   p->rule._con = 1;
   _closure_con(a, 0 + 0);
  }

  c = (imm(a));
  if (c + 0 < p->cost[6]) {
   p->cost[6] = c + 0;
   p->rule._con13 = 1;
   _closure_con13(a, c + 0);
  }

  c = (range(a, 0, 0));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 40;
   _closure_reg(a, c + 0);
  }
  break;
 case 1046:

  if (0 + 0 < p->cost[3]) {
   p->cost[3] = 0 + 0;
   p->rule._con = 2;
   _closure_con(a, 0 + 0);
  }

  c = (imm(a));
  if (c + 0 < p->cost[6]) {
   p->cost[6] = c + 0;
   p->rule._con13 = 4;
   _closure_con13(a, c + 0);
  }

  c = (range(a, 0, 0));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 44;
   _closure_reg(a, c + 0);
  }
  break;
 case 1077:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 1;
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 14;
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[10] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 24;
  }
  break;
 case 1078:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 2;
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 17;
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[10] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 27;
  }
  break;
 case 1093:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 1;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 17;
   _closure_reg(a, c + 0);
  }
  break;
 case 1094:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 2;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 20;
   _closure_reg(a, c + 0);
  }
  break;
 case 1157:
  break;
 case 1158:
  break;
 case 1205:
  break;
 case 1206:
  break;
 case 1253:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + (move(a));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 33;
   _closure_reg(a, c + 0);
  }
  break;
 case 1254:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + (move(a));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 37;
   _closure_reg(a, c + 0);
  }
  break;
 case 2069:

  if (0 + 0 < p->cost[3]) {
   p->cost[3] = 0 + 0;
   p->rule._con = 3;
   _closure_con(a, 0 + 0);
  }

  c = (imm(a));
  if (c + 0 < p->cost[6]) {
   p->cost[6] = c + 0;
   p->rule._con13 = 2;
   _closure_con13(a, c + 0);
  }

  c = (range(a, 0, 0));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 41;
   _closure_reg(a, c + 0);
  }
  break;
 case 2070:

  if (0 + 0 < p->cost[3]) {
   p->cost[3] = 0 + 0;
   p->rule._con = 4;
   _closure_con(a, 0 + 0);
  }

  c = (imm(a));
  if (c + 0 < p->cost[6]) {
   p->cost[6] = c + 0;
   p->rule._con13 = 5;
   _closure_con13(a, c + 0);
  }

  c = (range(a, 0, 0));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 45;
   _closure_reg(a, c + 0);
  }
  break;
 case 2101:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 3;
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 15;
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[10] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 25;
  }
  break;
 case 2102:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 4;
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 18;
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[10] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 28;
  }
  break;
 case 2117:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 3;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 18;
   _closure_reg(a, c + 0);
  }
  break;
 case 2118:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 4;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 21;
   _closure_reg(a, c + 0);
  }
  break;
 case 2181:
  break;
 case 2182:
  break;
 case 2229:
  break;
 case 2230:
  break;
 case 2277:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + (move(a));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 34;
   _closure_reg(a, c + 0);
  }
  break;
 case 2278:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + (move(a));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 38;
   _closure_reg(a, c + 0);
  }
  break;
 case 4113:
  break;
 case 4117:

  if (0 + 0 < p->cost[3]) {
   p->cost[3] = 0 + 0;
   p->rule._con = 5;
   _closure_con(a, 0 + 0);
  }

  c = (imm(a));
  if (c + 0 < p->cost[6]) {
   p->cost[6] = c + 0;
   p->rule._con13 = 3;
   _closure_con13(a, c + 0);
  }

  c = (range(a, 0, 0));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 42;
   _closure_reg(a, c + 0);
  }

  c = (range(a, 0, 31));
  if (c + 0 < p->cost[12]) {
   p->cost[12] = c + 0;
   p->rule._rc5 = 1;
  }
  break;
 case 4118:

  if (0 + 0 < p->cost[3]) {
   p->cost[3] = 0 + 0;
   p->rule._con = 6;
   _closure_con(a, 0 + 0);
  }

  c = (imm(a));
  if (c + 0 < p->cost[6]) {
   p->cost[6] = c + 0;
   p->rule._con13 = 6;
   _closure_con13(a, c + 0);
  }

  c = (range(a, 0, 0));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 46;
   _closure_reg(a, c + 0);
  }
  break;
 case 4119:

  if (0 + 0 < p->cost[3]) {
   p->cost[3] = 0 + 0;
   p->rule._con = 7;
   _closure_con(a, 0 + 0);
  }

  c = (imm(a));
  if (c + 0 < p->cost[6]) {
   p->cost[6] = c + 0;
   p->rule._con13 = 7;
   _closure_con13(a, c + 0);
  }

  c = (range(a, 0, 0));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 43;
   _closure_reg(a, c + 0);
  }
  break;
 case 4129:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 58;
  }
  break;
 case 4133:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 55;
  }
  break;
 case 4134:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 56;
  }
  break;
 case 4135:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 57;
  }
  break;
 case 4145:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 5;
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 21;
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[10] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 31;
  }
  break;
 case 4149:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 6;
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 16;
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[10] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 26;
  }
  break;
 case 4150:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 8;
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 19;
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[10] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 29;
  }
  break;
 case 4151:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 7;
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 20;
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[10] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 30;
  }
  break;
 case 4161:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 5;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 24;
   _closure_reg(a, c + 0);
  }
  break;
 case 4165:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 6;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 19;
   _closure_reg(a, c + 0);
  }
  break;
 case 4166:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 8;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 22;
   _closure_reg(a, c + 0);
  }
  break;
 case 4167:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 7;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[8] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 23;
   _closure_reg(a, c + 0);
  }
  break;
 case 4209:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 100;
   _closure_reg(a, c + 0);
  }
  break;
 case 4213:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((a->syms[0]->u.c.v.i==4?3:
# 2675 "./sparc.c" 3 4
                                                                                             0x7fff
# 2675 "./sparc.c"
                                                                                                      ));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 102;
   _closure_reg(a, c + 0);
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((a->syms[0]->u.c.v.i==8?3:
# 2682 "./sparc.c" 3 4
                                                                                             0x7fff
# 2682 "./sparc.c"
                                                                                                      ));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 103;
   _closure_reg(a, c + 0);
  }
  break;
 case 4225:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 3;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 104;
   _closure_reg(a, c + 0);
  }
  break;
 case 4229:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 1093
  ) {
   c = ((struct _state *)(((((a)->kids[0]))->kids[0])->x.state))->cost[8] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 27;
    _closure_reg(a, c + 0);
   }
  }
  if (
   ((a)->kids[0])->op == 2117
  ) {
   c = ((struct _state *)(((((a)->kids[0]))->kids[0])->x.state))->cost[8] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 28;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 73;
   _closure_reg(a, c + 0);
  }
  break;
 case 4230:
  break;
 case 4246:
  break;
 case 4247:
  break;
 case 4277:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 1094
  ) {
   c = ((struct _state *)(((((a)->kids[0]))->kids[0])->x.state))->cost[8] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 31;
    _closure_reg(a, c + 0);
   }
  }
  if (
   ((a)->kids[0])->op == 2118
  ) {
   c = ((struct _state *)(((((a)->kids[0]))->kids[0])->x.state))->cost[8] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 32;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((a->syms[0]->u.c.v.i == 1 ? 1 : 
# 2758 "./sparc.c" 3 4
                                                                                                   0x7fff
# 2758 "./sparc.c"
                                                                                                            ));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 77;
   _closure_reg(a, c + 0);
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 78;
   _closure_reg(a, c + 0);
  }
  break;
 case 4278:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 1094
  ) {
   c = ((struct _state *)(((((a)->kids[0]))->kids[0])->x.state))->cost[8] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 29;
    _closure_reg(a, c + 0);
   }
  }
  if (
   ((a)->kids[0])->op == 2118
  ) {
   c = ((struct _state *)(((((a)->kids[0]))->kids[0])->x.state))->cost[8] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 30;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 74;
   _closure_reg(a, c + 0);
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((a->syms[0]->u.c.v.i == 1 ? 1 : 
# 2802 "./sparc.c" 3 4
                                                                                                   0x7fff
# 2802 "./sparc.c"
                                                                                                            ));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 75;
   _closure_reg(a, c + 0);
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 76;
   _closure_reg(a, c + 0);
  }
  break;
 case 4279:
  break;
 case 4289:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 98;
   _closure_reg(a, c + 0);
  }
  break;
 case 4293:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 70;
   _closure_reg(a, c + 0);
  }
  break;
 case 4305:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[14] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 80;
   _closure_reg(a, c + 0);
  }
  break;
 case 4309:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[14] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 81;
   _closure_reg(a, c + 0);
  }
  break;
 case 4310:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[14] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 83;
   _closure_reg(a, c + 0);
  }
  break;
 case 4311:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[14] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 82;
   _closure_reg(a, c + 0);
  }
  break;
 case 4321:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 99;
   _closure_reg(a, c + 0);
  }
  break;
 case 4325:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + (move(a));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 35;
   _closure_reg(a, c + 0);
  }
  break;
 case 4326:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + (move(a));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 39;
   _closure_reg(a, c + 0);
  }
  break;
 case 4327:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + (move(a));
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 36;
   _closure_reg(a, c + 0);
  }
  break;
 case 4337:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 51;
  }
  break;
 case 4341:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 52;
  }
  break;
 case 4342:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 53;
  }
  break;
 case 4343:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 54;
  }
  break;
 case 4359:

  if (1 + 0 < p->cost[2]) {
   p->cost[2] = 1 + 0;
   p->rule._reg = 13;
   _closure_reg(a, 1 + 0);
  }

  if (0 + 0 < p->cost[13]) {
   p->cost[13] = 0 + 0;
   p->rule._addrg = 1;
  }

  if (0 + 0 < p->cost[14]) {
   p->cost[14] = 0 + 0;
   p->rule._call = 1;
  }
  break;
 case 4375:

  c = (imm(a));
  if (c + 0 < p->cost[4]) {
   p->cost[4] = c + 0;
   p->rule._stk13 = 1;
   _closure_stk13(a, c + 0);
  }

  if (2 + 0 < p->cost[5]) {
   p->cost[5] = 2 + 0;
   p->rule._stk = 1;
   _closure_stk(a, 2 + 0);
  }

  if (3 + 0 < p->cost[2]) {
   p->cost[2] = 3 + 0;
   p->rule._reg = 15;
   _closure_reg(a, 3 + 0);
  }
  break;
 case 4391:

  c = (imm(a));
  if (c + 0 < p->cost[4]) {
   p->cost[4] = c + 0;
   p->rule._stk13 = 2;
   _closure_stk13(a, c + 0);
  }

  if (2 + 0 < p->cost[5]) {
   p->cost[5] = 2 + 0;
   p->rule._stk = 2;
   _closure_stk(a, 2 + 0);
  }

  if (3 + 0 < p->cost[2]) {
   p->cost[2] = 3 + 0;
   p->rule._reg = 16;
   _closure_reg(a, 3 + 0);
  }

  c = (imm(a));
  if (c + 0 < p->cost[9]) {
   p->cost[9] = c + 0;
   p->rule._addrl = 1;
  }

  c = (!imm(a));
  if (c + 0 < p->cost[10]) {
   p->cost[10] = c + 0;
   p->rule._spill = 1;
  }
  break;
 case 4401:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 91;
   _closure_reg(a, c + 0);
  }
  break;
 case 4405:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[6] + 0;
  if (c + 0 < p->cost[7]) {
   p->cost[7] = c + 0;
   p->rule._base = 1;
   _closure_base(a, c + 0);
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[8]) {
   p->cost[8] = c + 0;
   p->rule._addr = 2;
   _closure_addr(a, c + 0);
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 48;
   _closure_reg(a, c + 0);
  }
  break;
 case 4406:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[6] + 0;
  if (c + 0 < p->cost[7]) {
   p->cost[7] = c + 0;
   p->rule._base = 3;
   _closure_base(a, c + 0);
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[8]) {
   p->cost[8] = c + 0;
   p->rule._addr = 4;
   _closure_addr(a, c + 0);
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 50;
   _closure_reg(a, c + 0);
  }
  break;
 case 4407:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[6] + 0;
  if (c + 0 < p->cost[7]) {
   p->cost[7] = c + 0;
   p->rule._base = 2;
   _closure_base(a, c + 0);
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[8]) {
   p->cost[8] = c + 0;
   p->rule._addr = 3;
   _closure_addr(a, c + 0);
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 49;
   _closure_reg(a, c + 0);
  }
  break;
 case 4417:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 97;
   _closure_reg(a, c + 0);
  }
  break;
 case 4421:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 57;
   _closure_reg(a, c + 0);
  }
  break;
 case 4422:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 59;
   _closure_reg(a, c + 0);
  }
  break;
 case 4423:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 58;
   _closure_reg(a, c + 0);
  }
  break;
 case 4437:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[12] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 60;
   _closure_reg(a, c + 0);
  }
  break;
 case 4438:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[12] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 61;
   _closure_reg(a, c + 0);
  }
  break;
 case 4453:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 8;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 86;
   _closure_reg(a, c + 0);
  }
  break;
 case 4454:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 7;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 87;
   _closure_reg(a, c + 0);
  }
  break;
 case 4469:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[12] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 62;
   _closure_reg(a, c + 0);
  }
  break;
 case 4470:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[12] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 63;
   _closure_reg(a, c + 0);
  }
  break;
 case 4485:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 51;
   _closure_reg(a, c + 0);
  }
  if (
   ((a)->kids[1])->op == 4501
  ) {
   c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((((a)->kids[1]))->kids[0])->x.state))->cost[11] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 64;
    _closure_reg(a, c + 0);
   }
  }
  break;
 case 4486:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 54;
   _closure_reg(a, c + 0);
  }
  if (
   ((a)->kids[1])->op == 4502
  ) {
   c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((((a)->kids[1]))->kids[0])->x.state))->cost[11] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 67;
    _closure_reg(a, c + 0);
   }
  }
  break;
 case 4501:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 71;
   _closure_reg(a, c + 0);
  }
  break;
 case 4502:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 72;
   _closure_reg(a, c + 0);
  }
  break;
 case 4517:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 52;
   _closure_reg(a, c + 0);
  }
  if (
   ((a)->kids[1])->op == 4501
  ) {
   c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((((a)->kids[1]))->kids[0])->x.state))->cost[11] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 65;
    _closure_reg(a, c + 0);
   }
  }
  break;
 case 4518:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 55;
   _closure_reg(a, c + 0);
  }
  if (
   ((a)->kids[1])->op == 4502
  ) {
   c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((((a)->kids[1]))->kids[0])->x.state))->cost[11] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 68;
    _closure_reg(a, c + 0);
   }
  }
  break;
 case 4533:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 53;
   _closure_reg(a, c + 0);
  }
  if (
   ((a)->kids[1])->op == 4501
  ) {
   c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((((a)->kids[1]))->kids[0])->x.state))->cost[11] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 66;
    _closure_reg(a, c + 0);
   }
  }
  break;
 case 4534:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 56;
   _closure_reg(a, c + 0);
  }
  if (
   ((a)->kids[1])->op == 4502
  ) {
   c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((((a)->kids[1]))->kids[0])->x.state))->cost[11] + 1;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 69;
    _closure_reg(a, c + 0);
   }
  }
  break;
 case 4545:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 93;
   _closure_reg(a, c + 0);
  }
  break;
 case 4549:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 6;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 84;
   _closure_reg(a, c + 0);
  }
  break;
 case 4550:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 5;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 85;
   _closure_reg(a, c + 0);
  }
  break;
 case 4561:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 95;
   _closure_reg(a, c + 0);
  }
  break;
 case 4565:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[11] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 88;
   _closure_reg(a, c + 0);
  }
  break;
 case 4566:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[11] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 89;
   _closure_reg(a, c + 0);
  }
  break;
 case 4577:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 2;
   _closure_rel(a, c + 0);
  }
  break;
 case 4581:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 36;
  }
  break;
 case 4582:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 37;
  }
  break;
 case 4593:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 4;
   _closure_rel(a, c + 0);
  }
  break;
 case 4597:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 38;
  }
  break;
 case 4598:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 39;
  }
  break;
 case 4609:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 6;
   _closure_rel(a, c + 0);
  }
  break;
 case 4613:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 40;
  }
  break;
 case 4614:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 41;
  }
  break;
 case 4625:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 8;
   _closure_rel(a, c + 0);
  }
  break;
 case 4629:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 42;
  }
  break;
 case 4630:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 43;
  }
  break;
 case 4641:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 10;
   _closure_rel(a, c + 0);
  }
  break;
 case 4645:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 44;
  }
  break;
 case 4646:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 45;
  }
  break;
 case 4657:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 12;
   _closure_rel(a, c + 0);
  }
  break;
 case 4661:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 46;
  }
  break;
 case 4662:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[11] + 3;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 47;
  }
  break;
 case 8209:
  break;
 case 8213:

  if (0 + 0 < p->cost[3]) {
   p->cost[3] = 0 + 0;
   p->rule._con = 8;
   _closure_con(a, 0 + 0);
  }
  break;
 case 8214:

  if (0 + 0 < p->cost[3]) {
   p->cost[3] = 0 + 0;
   p->rule._con = 9;
   _closure_con(a, 0 + 0);
  }
  break;
 case 8215:

  if (0 + 0 < p->cost[3]) {
   p->cost[3] = 0 + 0;
   p->rule._con = 10;
   _closure_con(a, 0 + 0);
  }
  break;
 case 8225:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 59;
  }
  break;
 case 8229:
  break;
 case 8230:
  break;
 case 8231:
  break;
 case 8241:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 9;
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[9] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 22;
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[7] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 2;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 23;
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[10] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 32;
  }
  break;
 case 8245:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 10;
   }
  }
  break;
 case 8246:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 12;
   }
  }
  break;
 case 8247:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   c = ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
   if (c + 0 < p->cost[1]) {
    p->cost[1] = c + 0;
    p->rule._stmt = 11;
   }
  }
  break;
 case 8257:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 9;
    _closure_reg(a, c + 0);
   }
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[9] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 25;
   _closure_reg(a, c + 0);
  }

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[7] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 26;
   _closure_reg(a, c + 0);
  }
  break;
 case 8261:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 10;
    _closure_reg(a, c + 0);
   }
  }
  break;
 case 8262:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 12;
    _closure_reg(a, c + 0);
   }
  }
  break;
 case 8263:
  _label(((a)->kids[0]));
  if (
   ((a)->kids[0])->op == 711
  ) {
   if (mayrecalc(a)) {
    struct _state *q = a->syms[RX]->u.t.cse->x.state;
    if (q->cost[1] == 0) {
     p->cost[1] = 0;
     p->rule._stmt = q->rule._stmt;
    }
    if (q->cost[2] == 0) {
     p->cost[2] = 0;
     p->rule._reg = q->rule._reg;
    }
    if (q->cost[3] == 0) {
     p->cost[3] = 0;
     p->rule._con = q->rule._con;
    }
    if (q->cost[4] == 0) {
     p->cost[4] = 0;
     p->rule._stk13 = q->rule._stk13;
    }
    if (q->cost[5] == 0) {
     p->cost[5] = 0;
     p->rule._stk = q->rule._stk;
    }
    if (q->cost[6] == 0) {
     p->cost[6] = 0;
     p->rule._con13 = q->rule._con13;
    }
    if (q->cost[7] == 0) {
     p->cost[7] = 0;
     p->rule._base = q->rule._base;
    }
    if (q->cost[8] == 0) {
     p->cost[8] = 0;
     p->rule._addr = q->rule._addr;
    }
    if (q->cost[9] == 0) {
     p->cost[9] = 0;
     p->rule._addrl = q->rule._addrl;
    }
    if (q->cost[10] == 0) {
     p->cost[10] = 0;
     p->rule._spill = q->rule._spill;
    }
    if (q->cost[11] == 0) {
     p->cost[11] = 0;
     p->rule._rc = q->rule._rc;
    }
    if (q->cost[12] == 0) {
     p->cost[12] = 0;
     p->rule._rc5 = q->rule._rc5;
    }
    if (q->cost[13] == 0) {
     p->cost[13] = 0;
     p->rule._addrg = q->rule._addrg;
    }
    if (q->cost[14] == 0) {
     p->cost[14] = 0;
     p->rule._call = q->rule._call;
    }
    if (q->cost[15] == 0) {
     p->cost[15] = 0;
     p->rule._rel = q->rule._rel;
    }
   }
   c = 0;
   if (c + 0 < p->cost[2]) {
    p->cost[2] = c + 0;
    p->rule._reg = 11;
    _closure_reg(a, c + 0);
   }
  }
  break;
 case 8305:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 101;
   _closure_reg(a, c + 0);
  }
  break;
 case 8309:
  break;
 case 8321:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 3;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 105;
   _closure_reg(a, c + 0);
  }
  break;
 case 8325:
  break;
 case 8326:
  break;
 case 8342:
  break;
 case 8343:
  break;
 case 8373:
  break;
 case 8374:
  break;
 case 8375:
  break;
 case 8385:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 107;
   _closure_reg(a, c + 0);
  }
  break;
 case 8389:
  break;
 case 8401:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[14] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 79;
   _closure_reg(a, c + 0);
  }
  break;
 case 8405:
  break;
 case 8406:
  break;
 case 8407:
  break;
 case 8417:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 2;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 106;
   _closure_reg(a, c + 0);
  }
  break;
 case 8421:
  break;
 case 8422:
  break;
 case 8423:
  break;
 case 8433:
  _label(((a)->kids[0]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[1]) {
   p->cost[1] = c + 0;
   p->rule._stmt = 50;
  }
  break;
 case 8437:
  break;
 case 8438:
  break;
 case 8439:
  break;
 case 8455:
  break;
 case 8471:
  break;
 case 8487:
  break;
 case 8497:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 90;
   _closure_reg(a, c + 0);
  }
  break;
 case 8501:
  break;
 case 8502:
  break;
 case 8503:
  break;
 case 8513:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 96;
   _closure_reg(a, c + 0);
  }
  break;
 case 8517:
  break;
 case 8518:
  break;
 case 8519:
  break;
 case 8533:
  break;
 case 8534:
  break;
 case 8549:
  break;
 case 8550:
  break;
 case 8565:
  break;
 case 8566:
  break;
 case 8581:
  break;
 case 8582:
  break;
 case 8597:
  break;
 case 8598:
  break;
 case 8613:
  break;
 case 8614:
  break;
 case 8629:
  break;
 case 8630:
  break;
 case 8641:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 92;
   _closure_reg(a, c + 0);
  }
  break;
 case 8645:
  break;
 case 8646:
  break;
 case 8657:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 1;
  if (c + 0 < p->cost[2]) {
   p->cost[2] = c + 0;
   p->rule._reg = 94;
   _closure_reg(a, c + 0);
  }
  break;
 case 8661:
  break;
 case 8662:
  break;
 case 8673:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 1;
   _closure_rel(a, c + 0);
  }
  break;
 case 8677:
  break;
 case 8678:
  break;
 case 8689:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 3;
   _closure_rel(a, c + 0);
  }
  break;
 case 8693:
  break;
 case 8694:
  break;
 case 8705:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 5;
   _closure_rel(a, c + 0);
  }
  break;
 case 8709:
  break;
 case 8710:
  break;
 case 8721:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 7;
   _closure_rel(a, c + 0);
  }
  break;
 case 8725:
  break;
 case 8726:
  break;
 case 8737:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 9;
   _closure_rel(a, c + 0);
  }
  break;
 case 8741:
  break;
 case 8742:
  break;
 case 8753:
  _label(((a)->kids[0]));
  _label(((a)->kids[1]));

  c = ((struct _state *)(((a)->kids[0])->x.state))->cost[2] + ((struct _state *)(((a)->kids[1])->x.state))->cost[2] + 0;
  if (c + 0 < p->cost[15]) {
   p->cost[15] = c + 0;
   p->rule._rel = 11;
   _closure_rel(a, c + 0);
  }
  break;
 case 8757:
  break;
 case 8758:
  break;
 case 16401:
  break;
 case 16417:
  break;
 case 16433:
  break;
 case 16449:
  break;
 case 16497:
  break;
 case 16513:
  break;
 case 16535:
  break;
 case 16567:
  break;
 case 16577:
  break;
 case 16593:
  break;
 case 16609:
  break;
 case 16625:
  break;
 case 16689:
  break;
 case 16705:
  break;
 case 16833:
  break;
 case 16849:
  break;
 case 16865:
  break;
 case 16885:
  break;
 case 16897:
  break;
 case 16913:
  break;
 case 16929:
  break;
 case 16945:
  break;
 default:
  fatal("_label", "Bad terminal %d\n", ((a)->op));
 }
}

static void _kids(Node p, int eruleno, Node kids[]) {
 if (!p)
  fatal("_kids", "Null tree\n", 0);
 if (!kids)
  fatal("_kids", "Null kids\n", 0);
 switch (eruleno) {
 case 165:
 case 152:
 case 149:
 case 128:
 case 112:
 case 111:
 case 110:
 case 109:
 case 108:
 case 107:
 case 106:
 case 83:
 case 78:
 case 50:
 case 49:
 case 48:
 case 47:
 case 46:
 case 45:
 case 44:
 case 43:
 case 42:
 case 41:
 case 40:
 case 38:
 case 37:
 case 36:
 case 34:
 case 33:
 case 32:
 case 31:
 case 30:
 case 29:
 case 28:
 case 27:
 case 26:
 case 25:
 case 12:
 case 11:
 case 10:
 case 9:
 case 8:
 case 7:
 case 6:
 case 5:
 case 4:
 case 3:
 case 2:
 case 1:
  break;
 case 24:
 case 23:
 case 22:
 case 21:
 case 20:
 case 19:
 case 18:
 case 17:
 case 16:
 case 15:
 case 14:
 case 13:
  kids[0] = ((p)->kids[1]);
  break;
 case 218:
 case 166:
 case 129:
 case 115:
 case 114:
 case 113:
 case 61:
 case 57:
 case 56:
 case 55:
 case 54:
 case 39:
 case 35:
  kids[0] = p;
  break;
 case 217:
 case 216:
 case 215:
 case 214:
 case 213:
 case 212:
 case 211:
 case 210:
 case 209:
 case 208:
 case 207:
 case 206:
 case 197:
 case 196:
 case 195:
 case 194:
 case 193:
 case 192:
 case 191:
 case 190:
 case 189:
 case 188:
 case 187:
 case 186:
 case 185:
 case 184:
 case 173:
 case 164:
 case 163:
 case 162:
 case 161:
 case 160:
 case 159:
 case 158:
 case 157:
 case 156:
 case 155:
 case 154:
 case 153:
 case 133:
 case 132:
 case 131:
 case 130:
 case 127:
 case 126:
 case 125:
 case 124:
 case 123:
 case 122:
 case 121:
 case 120:
 case 119:
 case 118:
 case 117:
 case 116:
 case 92:
 case 91:
 case 90:
 case 89:
 case 88:
 case 87:
 case 86:
 case 85:
 case 84:
 case 82:
 case 80:
 case 77:
 case 76:
 case 75:
 case 74:
 case 73:
 case 72:
 case 71:
 case 70:
 case 60:
 case 59:
 case 58:
 case 53:
 case 52:
 case 51:
  kids[0] = ((p)->kids[0]);
  kids[1] = ((p)->kids[1]);
  break;
 case 220:
 case 219:
 case 205:
 case 204:
 case 203:
 case 202:
 case 201:
 case 200:
 case 199:
 case 198:
 case 183:
 case 182:
 case 181:
 case 180:
 case 179:
 case 178:
 case 177:
 case 176:
 case 175:
 case 174:
 case 172:
 case 171:
 case 170:
 case 169:
 case 168:
 case 167:
 case 151:
 case 150:
 case 148:
 case 147:
 case 146:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 140:
 case 105:
 case 104:
 case 103:
 case 102:
 case 101:
 case 100:
 case 99:
 case 81:
 case 79:
 case 69:
 case 68:
 case 67:
 case 66:
 case 65:
 case 64:
 case 63:
 case 62:
  kids[0] = ((p)->kids[0]);
  break;
 case 98:
 case 97:
 case 96:
 case 95:
 case 94:
 case 93:
  kids[0] = ((((p)->kids[0]))->kids[0]);
  break;
 case 221:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
  kids[0] = ((p)->kids[0]);
  kids[1] = ((((p)->kids[1]))->kids[0]);
  break;
 default:
  fatal("_kids", "Bad rule number %d\n", eruleno);
 }
}

static void progend(void){}
static void progbeg(int argc, char *argv[]) {
        int i;

        {
                union {
                        char c;
                        int i;
                } u;
                u.i = 0;
                u.c = 1;
                swap = ((int)(u.i == 1)) != IR->little_endian;
        }
        parseflags(argc, argv);
        for (i = 0; i < argc; i++)
                if (strcmp(argv[i], "-p") == 0 || strcmp(argv[i], "-pg") == 0)
                        pflag = 1;
        if (IR == &solarisIR)
                stabprefix = ".LL";
        else
                stabprefix = "L";
        for (i = 0; i < 8; i++) {
                greg[i + 0] = mkreg(stringf("g%d", i), i + 0, 1, IREG);
                greg[i + 8] = mkreg(stringf("o%d", i), i + 8, 1, IREG);
                greg[i + 16] = mkreg(stringf("l%d", i), i + 16, 1, IREG);
                greg[i + 24] = mkreg(stringf("i%d", i), i + 24, 1, IREG);
        }
        gregw = mkwildcard(greg);
        for (i = 0; i < 32; i++)
                freg[i] = mkreg("%d", i, 1, FREG);
        for (i = 0; i < 31; i += 2)
                freg2[i] = mkreg("%d", i, 3, FREG);
        fregw = mkwildcard(freg);
        freg2w = mkwildcard(freg2);
        tmask[IREG] = 0x3fff3e00;
        vmask[IREG] = 0x3ff00000;
        tmask[FREG] = ~(unsigned)0;
        vmask[FREG] = 0;
}
static Symbol rmap(int opk) {
        switch (((opk)&0xF)) {
        case I: case U: case P: case B:
                return gregw;
        case F:
                return ((opk)>>10) == 4 ? fregw : freg2w;
        default:
                return 0;
        }
}
static void target(Node p) {
        
# 4678 "./sparc.c" 3 4
       ((void)((
# 4678 "./sparc.c"
       p
# 4678 "./sparc.c" 3 4
       ) || (__assert_fail(
# 4678 "./sparc.c"
       "p"
# 4678 "./sparc.c" 3 4
       , "./sparc.c", 4678, __func__),0)))
# 4678 "./sparc.c"
                ;
        switch (((p->op)&0x3FF)) {
        case CNST+I: case CNST+U: case CNST+P:
                if (range(p, 0, 0) == 0) {
                        setreg(p, greg[0]);
                        p->x.registered = 1;
                }
                break;
        case CALL+B:
                
# 4687 "./sparc.c" 3 4
               ((void)((
# 4687 "./sparc.c"
               p->syms[1] && p->syms[1]->type && ((((p->syms[1]->type)->op >= CONST) ? (p->syms[1]->type)->type : (p->syms[1]->type))->op == FUNCTION)
# 4687 "./sparc.c" 3 4
               ) || (__assert_fail(
# 4687 "./sparc.c"
               "p->syms[1] && p->syms[1]->type && isfunc(p->syms[1]->type)"
# 4687 "./sparc.c" 3 4
               , "./sparc.c", 4687, __func__),0)))
# 4687 "./sparc.c"
                                                                                 ;
                p->syms[1] = intconst(freturn(p->syms[1]->type)->size);
                break;
        case CALL+F: setreg(p, ((p->op)>>10)==4?freg[0]:freg2[0]); break;
        case CALL+I: case CALL+P: case CALL+U:
        case CALL+V: setreg(p, oreg[0]); break;
        case RET+F: rtarget(p, 0, ((p->op)>>10)==4?freg[0]:freg2[0]); break;
        case RET+I: case RET+P: case RET+U:
                rtarget(p, 0, ireg[0]);
                p->kids[0]->x.registered = 1;
                break;
        case ARG+I: case ARG+P: case ARG+U:
                if (p->syms[RX]->u.c.v.i < 6) {
                        rtarget(p, 0, oreg[p->syms[RX]->u.c.v.i]);
                        p->op = LOAD+((p->op)&~0x3F0);
                        setreg(p, oreg[p->syms[RX]->u.c.v.i]);
                }
                break;
        }
}
static void clobber(Node p) {
        
# 4708 "./sparc.c" 3 4
       ((void)((
# 4708 "./sparc.c"
       p
# 4708 "./sparc.c" 3 4
       ) || (__assert_fail(
# 4708 "./sparc.c"
       "p"
# 4708 "./sparc.c" 3 4
       , "./sparc.c", 4708, __func__),0)))
# 4708 "./sparc.c"
                ;
        switch (((p->op)&0x3FF)) {
        case CALL+B: case CALL+F: case CALL+I:
                spill(~(unsigned)3, FREG, p);
                break;
        case CALL+V:
                spill(oreg[0]->x.regnode->mask, IREG, p);
                spill(~(unsigned)3, FREG, p);
                break;
        case ARG+F:
                if (((p->op)>>10) == 4 && p->syms[2]->u.c.v.i <= 6)
                        spill((1<<(p->syms[2]->u.c.v.i + 8)), IREG, p);
                else if (((p->op)>>10) == 8 && p->syms[2]->u.c.v.i <= 5)
                        spill((3<<(p->syms[2]->u.c.v.i + 8))&0xff00, IREG, p);
                break;
        }
}
static int imm(Node p) {
        return range(p, -4096, 4091);
}
static void doarg(Node p) {
        
# 4729 "./sparc.c" 3 4
       ((void)((
# 4729 "./sparc.c"
       p && p->syms[0] && p->op != ARG+B
# 4729 "./sparc.c" 3 4
       ) || (__assert_fail(
# 4729 "./sparc.c"
       "p && p->syms[0] && p->op != ARG+B"
# 4729 "./sparc.c" 3 4
       , "./sparc.c", 4729, __func__),0)))
# 4729 "./sparc.c"
                                                ;
        p->syms[RX] = intconst(mkactual(4,
                p->syms[0]->u.c.v.i)/4);
}
static void emit2(Node p) {
        switch (p->op) {
        case INDIR+F+((8)<<10):
                if (((p->kids[0]->op)&0x3F0) != VREG) {
                        int dst = getregnum(p);
                        print("ld ["); emitasm(p->kids[0], 7); print( "],%%f%d; ", dst);
                        print("ld ["); emitasm(p->kids[0], 7); print("+4],%%f%d\n", dst+1);
                }
                break;
        case ASGN+F+((8)<<10):
                if (((p->kids[0]->op)&0x3F0) != VREG) {
                        int src = getregnum(p->kids[1]);
                        print("st %%f%d,[", src); emitasm(p->kids[0], 7); print("]; ");
                        print("st %%f%d,[", src+1); emitasm(p->kids[0], 7); print("+4]\n");
                }
                break;
        case ARG+F+((4)<<10): {
                int n = p->syms[RX]->u.c.v.i;
                print("st %%f%d,[%%sp+4*%d+68]\n",
                        getregnum(p->x.kids[0]), n);
                if (n <= 5)
                        print("ld [%%sp+4*%d+68],%%o%d\n", n, n);
                break;
        }
        case ARG+F+((8)<<10): {
                int n = p->syms[RX]->u.c.v.i;
                int src = getregnum(p->x.kids[0]);
                print("st %%f%d,[%%sp+4*%d+68]\n", src, n);
                print("st %%f%d,[%%sp+4*%d+68]\n", src+1, n+1);
                if (n <= 5)
                        print("ld [%%sp+4*%d+68],%%o%d\n", n, n);
                if (n <= 4)
                        print("ld [%%sp+4*%d+68],%%o%d\n", n+1, n+1);
                break;
        }
        case LOAD+F+((8)<<10): {
                int dst = getregnum(p);
                int src = getregnum(p->x.kids[0]);
                print("fmovs %%f%d,%%f%d; ", src, dst);
                print("fmovs %%f%d,%%f%d\n", src+1, dst+1);
                break;
        }
        case NEG+F+((8)<<10): {
                int dst = getregnum(p);
                int src = getregnum(p->x.kids[0]);
                print("fnegs %%f%d,%%f%d; ", src, dst);
                print("fmovs %%f%d,%%f%d\n", src+1, dst+1);
                break;
        }
        case ASGN+B: {
                static int tmpregs[] = { 1, 2, 3 };
                dalign = salign = p->syms[1]->u.c.v.i;
                blkcopy(getregnum(p->x.kids[0]), 0,
                        getregnum(p->x.kids[1]), 0,
                        p->syms[0]->u.c.v.i, tmpregs);
                break;
        }
        }
}
static void local(Symbol p) {
        if (retstruct) {
                
# 4794 "./sparc.c" 3 4
               ((void)((
# 4794 "./sparc.c"
               p == retv
# 4794 "./sparc.c" 3 4
               ) || (__assert_fail(
# 4794 "./sparc.c"
               "p == retv"
# 4794 "./sparc.c" 3 4
               , "./sparc.c", 4794, __func__),0)))
# 4794 "./sparc.c"
                                ;
                p->x.name = stringd(4*16);
                p->x.offset = 4*16;
                p->sclass = AUTO;
                retstruct = 0;
                return;
        }
        if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op <= POINTER || (((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == ENUM) && !p->addressed && !((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FLOAT))
                p->sclass = REGISTER;
        if (askregvar(p, rmap(ttob(p->type))) == 0)
                mkauto(p);
        else if (p->scope > LOCAL)
                regvars++;
}
static void function(Symbol f, Symbol caller[], Symbol callee[], int ncalls) {
        int autos = 0, i, leaf, reg, varargs;

        if (IR == &solarisIR)
                globalend();
        regvars = 0;
        for (i = 0; callee[i]; i++)
                ;
        varargs = variadic(f->type)
                || i > 0 && strcmp(callee[i-1]->name,
                        "__builtin_va_alist") == 0;
        usedmask[0] = usedmask[1] = 0;
        freemask[0] = freemask[1] = ~(unsigned)0;
        for (i = 0; i < 8; i++)
                ireg[i]->x.regnode->vbl = 
# 4822 "./sparc.c" 3 4
                                         ((void*)0)
# 4822 "./sparc.c"
                                             ;
        offset = 68;
        maxargoffset = 24;
        reg = 0;
        for (i = 0; callee[i]; i++) {
                Symbol p = callee[i], q = caller[i];
                int size = (((q->type->size)+((4)-1))&(~((4)-1)));
                
# 4829 "./sparc.c" 3 4
               ((void)((
# 4829 "./sparc.c"
               q
# 4829 "./sparc.c" 3 4
               ) || (__assert_fail(
# 4829 "./sparc.c"
               "q"
# 4829 "./sparc.c" 3 4
               , "./sparc.c", 4829, __func__),0)))
# 4829 "./sparc.c"
                        ;
                if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FLOAT) || reg >= 6) {
                        p->x.offset = q->x.offset = offset;
                        p->x.name = q->x.name = stringd(offset);
                        p->sclass = q->sclass = AUTO;
                        autos++;
                }
                else if (p->addressed || varargs) {
                        p->x.offset = offset;
                        p->x.name = stringd(p->x.offset);
                        p->sclass = AUTO;
                        q->sclass = REGISTER;
                        askregvar(q, ireg[reg]);
                        
# 4842 "./sparc.c" 3 4
                       ((void)((
# 4842 "./sparc.c"
                       q->x.regnode
# 4842 "./sparc.c" 3 4
                       ) || (__assert_fail(
# 4842 "./sparc.c"
                       "q->x.regnode"
# 4842 "./sparc.c" 3 4
                       , "./sparc.c", 4842, __func__),0)))
# 4842 "./sparc.c"
                                           ;
                        autos++;
                }
                else {
                        p->sclass = q->sclass = REGISTER;
                        askregvar(p, ireg[reg]);
                        
# 4848 "./sparc.c" 3 4
                       ((void)((
# 4848 "./sparc.c"
                       p->x.regnode
# 4848 "./sparc.c" 3 4
                       ) || (__assert_fail(
# 4848 "./sparc.c"
                       "p->x.regnode"
# 4848 "./sparc.c" 3 4
                       , "./sparc.c", 4848, __func__),0)))
# 4848 "./sparc.c"
                                           ;
                        q->x.name = p->x.name;
                }
                offset += size;
                reg += ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == STRUCT || (((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == UNION) ? 1 : size/4;
        }
        
# 4854 "./sparc.c" 3 4
       ((void)((
# 4854 "./sparc.c"
       caller[i] == 0
# 4854 "./sparc.c" 3 4
       ) || (__assert_fail(
# 4854 "./sparc.c"
       "caller[i] == 0"
# 4854 "./sparc.c" 3 4
       , "./sparc.c", 4854, __func__),0)))
# 4854 "./sparc.c"
                             ;
        offset = maxoffset = 0;
        retstruct = ((((freturn(f->type))->op >= CONST) ? (freturn(f->type))->type : (freturn(f->type)))->op == STRUCT || (((freturn(f->type))->op >= CONST) ? (freturn(f->type))->type : (freturn(f->type)))->op == UNION);
        gencode(caller, callee);
        maxargoffset = (((maxargoffset)+((4)-1))&(~((4)-1)));
        framesize = (((maxoffset + maxargoffset + 4*(16+1))+((8)-1))&(~((8)-1)));
        
# 4860 "./sparc.c" 3 4
       ((void)((
# 4860 "./sparc.c"
       !varargs || autos
# 4860 "./sparc.c" 3 4
       ) || (__assert_fail(
# 4860 "./sparc.c"
       "!varargs || autos"
# 4860 "./sparc.c" 3 4
       , "./sparc.c", 4860, __func__),0)))
# 4860 "./sparc.c"
                                ;
        leaf = (!ncalls
                && !maxoffset && !autos && !regvars
                && !((((freturn(f->type))->op >= CONST) ? (freturn(f->type))->type : (freturn(f->type)))->op == STRUCT || (((freturn(f->type))->op >= CONST) ? (freturn(f->type))->type : (freturn(f->type)))->op == UNION)
                && !(usedmask[IREG]&0x00ffff01)
                && !(usedmask[FREG]&~(unsigned)3)
                && !pflag && !glevel);
        print(".align 4\n%s:\n", f->x.name);
        if (leaf) {
                for (i = 0; caller[i] && callee[i]; i++) {
                        Symbol p = caller[i], q = callee[i];
                        if (p->sclass == REGISTER && q->sclass == REGISTER) {
                                
# 4872 "./sparc.c" 3 4
                               ((void)((
# 4872 "./sparc.c"
                               q->x.regnode
# 4872 "./sparc.c" 3 4
                               ) || (__assert_fail(
# 4872 "./sparc.c"
                               "q->x.regnode"
# 4872 "./sparc.c" 3 4
                               , "./sparc.c", 4872, __func__),0)))
# 4872 "./sparc.c"
                                                   ;
                                
# 4873 "./sparc.c" 3 4
                               ((void)((
# 4873 "./sparc.c"
                               q->x.regnode->set == IREG
# 4873 "./sparc.c" 3 4
                               ) || (__assert_fail(
# 4873 "./sparc.c"
                               "q->x.regnode->set == IREG"
# 4873 "./sparc.c" 3 4
                               , "./sparc.c", 4873, __func__),0)))
# 4873 "./sparc.c"
                                                                ;
                                
# 4874 "./sparc.c" 3 4
                               ((void)((
# 4874 "./sparc.c"
                               q->x.regnode->number >= 24
# 4874 "./sparc.c" 3 4
                               ) || (__assert_fail(
# 4874 "./sparc.c"
                               "q->x.regnode->number >= 24"
# 4874 "./sparc.c" 3 4
                               , "./sparc.c", 4874, __func__),0)))
# 4874 "./sparc.c"
                                                                 ;
                                
# 4875 "./sparc.c" 3 4
                               ((void)((
# 4875 "./sparc.c"
                               q->x.regnode->number <= 31
# 4875 "./sparc.c" 3 4
                               ) || (__assert_fail(
# 4875 "./sparc.c"
                               "q->x.regnode->number <= 31"
# 4875 "./sparc.c" 3 4
                               , "./sparc.c", 4875, __func__),0)))
# 4875 "./sparc.c"
                                                                 ;
                                p->x.name = greg[q->x.regnode->number - 16]->x.name;
                        }
                }
                renameregs();
        } else if (framesize <= 4095)
                print("save %%sp,%d,%%sp\n", -framesize);
        else
                print("set %d,%%g1; save %%sp,%%g1,%%sp\n", -framesize);
        if (varargs)
                for (; reg < 6; reg++)
                        print("st %%i%d,[%%fp+%d]\n", reg, 4*reg + 68);
        else {
                offset = 4*(16 + 1);
                reg = 0;
                for (i = 0; caller[i]; i++) {
                        Symbol p = caller[i];
                        if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FLOAT) && p->type->size == 8 && reg <= 4) {
                                print("st %%r%d,[%%fp+%d]\n",
                                        ireg[reg++]->x.regnode->number, offset);
                                print("st %%r%d,[%%fp+%d]\n",
                                        ireg[reg++]->x.regnode->number, offset + 4);
                        } else if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FLOAT) && p->type->size == 4 && reg <= 5)
                                print("st %%r%d,[%%fp+%d]\n",
                                        ireg[reg++]->x.regnode->number, offset);
                        else
                                reg++;
                        offset += (((p->type->size)+((4)-1))&(~((4)-1)));
                }
        }
        if (pflag) {
                int lab = genlabel(1);
                print("set L%d,%%o0; call mcount; nop\n", lab);
                print(".seg \"data\"\n.align 4; L%d:.word 0\n.seg \"text\"\n", lab);
        }
        emitcode();
        if (((((freturn(f->type))->op >= CONST) ? (freturn(f->type))->type : (freturn(f->type)))->op == STRUCT || (((freturn(f->type))->op >= CONST) ? (freturn(f->type))->type : (freturn(f->type)))->op == UNION))
                print("jmp %%i7+12; restore\n");
        else if (!leaf)
                print("ret; restore\n");
        else {
                renameregs();
                print("retl; nop\n");
        }
        if (IR == &solarisIR) {
                print(".type %s,#function\n", f->x.name);
                print(".size %s,.-%s\n", f->x.name, f->x.name);
        }
}


static void renameregs(void) {
using c
{
        int i;

        for (i = 0; i < 8; i++) {
                char *ptmp;
                int itmp;
                if (ireg[i]->x.regnode->vbl)
                        ireg[i]->x.regnode->vbl->x.name = oreg[i]->x.name;
                (((ptmp) = ireg[i]->x.name), ((ireg[i]->x.name) = (oreg[i]->x.name)), ((oreg[i]->x.name) = (ptmp)));
                (((itmp) = ireg[i]->x.regnode->number), ((ireg[i]->x.regnode->number) = (oreg[i]->x.regnode->number)), ((oreg[i]->x.regnode->number) = (itmp)))
                                                         ;
        }
}
}
static void defconst(int suffix, int size, Value v) {
        if (suffix == F && size == 4) {
                float f = v.d;
                print(".word 0x%x\n", *(unsigned *)&f);
        } else if (suffix == F && size == 8) {
                double d = v.d;
                unsigned *p = (unsigned *)&d;
                print(".word 0x%x\n.word 0x%x\n", p[swap], p[!swap]);
        } else if (suffix == P)
                print(".word 0x%x\n", (unsigned)v.p);
        else if (size == 1)
                print(".byte 0x%x\n", (unsigned)((unsigned char)(suffix == I ? v.i : v.u)));
        else if (size == 2)
                print(".half 0x%x\n", (unsigned)((unsigned short)(suffix == I ? v.i : v.u)));
        else if (size == 4)
                print(".word 0x%x\n", (unsigned)(suffix == I ? v.i : v.u));
        else 
# 4958 "./sparc.c" 3 4
            ((void)((
# 4958 "./sparc.c"
            0
# 4958 "./sparc.c" 3 4
            ) || (__assert_fail(
# 4958 "./sparc.c"
            "0"
# 4958 "./sparc.c" 3 4
            , "./sparc.c", 4958, __func__),0)))
# 4958 "./sparc.c"
                     ;
}

static void defaddress(Symbol p) {
        print(".word %s\n", p->x.name);
}

static void defstring(int n, char *str) {
        char *s;

        for (s = str; s < str + n; s++)
                print(".byte %d\n", (*s)&0377);
}

static void address(Symbol q, Symbol p, long n) {
        if (p->scope == GLOBAL || p->sclass == STATIC || p->sclass == EXTERN)
                q->x.name = stringf("%s%s%D", p->x.name, n >= 0 ? "+" : "", n);
        else {
                
# 4976 "./sparc.c" 3 4
               ((void)((
# 4976 "./sparc.c"
               n <= 
# 4976 "./sparc.c" 3 4
               0x7fffffff 
# 4976 "./sparc.c"
               && n >= 
# 4976 "./sparc.c" 3 4
               (-1-0x7fffffff)) || (__assert_fail(
# 4976 "./sparc.c"
               "n <= INT_MAX && n >= INT_MIN"
# 4976 "./sparc.c" 3 4
               , "./sparc.c", 4976, __func__),0)))
# 4976 "./sparc.c"
                                                   ;
                q->x.offset = p->x.offset + n;
                q->x.name = stringd(q->x.offset);
        }
}
static void export(Symbol p) {
        print(".global %s\n", p->x.name);
}
static void import(Symbol p) {}
static void defsymbol(Symbol p) {
        if (p->scope >= LOCAL && p->sclass == STATIC)
                p->x.name = stringf("%d", genlabel(1));
        else
                
# 4989 "./sparc.c" 3 4
               ((void)((
# 4989 "./sparc.c"
               p->scope != CONSTANTS || ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == INT || (((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == UNSIGNED) || ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == POINTER)
# 4989 "./sparc.c" 3 4
               ) || (__assert_fail(
# 4989 "./sparc.c"
               "p->scope != CONSTANTS || isint(p->type) || isptr(p->type)"
# 4989 "./sparc.c" 3 4
               , "./sparc.c", 4989, __func__),0)))
# 4989 "./sparc.c"
                                                                                ,
                p->x.name = p->name;
        if (p->scope >= LABELS)
                p->x.name = stringf(p->generated ? "L%s" : "_%s",
                        p->x.name);
}
static void segment(int n) {
        cseg = n;
        switch (n) {
        case CODE: print(".seg \"text\"\n"); break;
        case BSS: print(".seg \"bss\"\n"); break;
        case DATA: print(".seg \"data\"\n"); break;
        case LIT: print(".seg \"text\"\n"); break;
        }
}
static void space(int n) {
        if (cseg != BSS)
                print(".skip %d\n", n);
}
static void global(Symbol p) {
        print(".align %d\n", p->type->align);
        
# 5010 "./sparc.c" 3 4
       ((void)((
# 5010 "./sparc.c"
       p->u.seg
# 5010 "./sparc.c" 3 4
       ) || (__assert_fail(
# 5010 "./sparc.c"
       "p->u.seg"
# 5010 "./sparc.c" 3 4
       , "./sparc.c", 5010, __func__),0)))
# 5010 "./sparc.c"
                       ;
        if (p->u.seg == BSS
        && (p->sclass == STATIC || Aflag >= 2))
                print(".reserve %s,%d\n", p->x.name, p->type->size);
        else if (p->u.seg == BSS)
                print(".common %s,%d\n", p->x.name, p->type->size);
        else
                print("%s:\n", p->x.name);
}
static void blkfetch(int k, int off, int reg, int tmp) {
        
# 5020 "./sparc.c" 3 4
       ((void)((
# 5020 "./sparc.c"
       k == 1 || k == 2 || k == 4
# 5020 "./sparc.c" 3 4
       ) || (__assert_fail(
# 5020 "./sparc.c"
       "k == 1 || k == 2 || k == 4"
# 5020 "./sparc.c" 3 4
       , "./sparc.c", 5020, __func__),0)))
# 5020 "./sparc.c"
                                         ;
        
# 5021 "./sparc.c" 3 4
       ((void)((
# 5021 "./sparc.c"
       salign >= k
# 5021 "./sparc.c" 3 4
       ) || (__assert_fail(
# 5021 "./sparc.c"
       "salign >= k"
# 5021 "./sparc.c" 3 4
       , "./sparc.c", 5021, __func__),0)))
# 5021 "./sparc.c"
                          ;
        if (k == 1)
                print("ldub [%%r%d+%d],%%r%d\n", reg, off, tmp);
        else if (k == 2)
                print("lduh [%%r%d+%d],%%r%d\n", reg, off, tmp);
        else
                print("ld [%%r%d+%d],%%r%d\n", reg, off, tmp);
}
static void blkstore(int k, int off, int reg, int tmp) {
        
# 5030 "./sparc.c" 3 4
       ((void)((
# 5030 "./sparc.c"
       k == 1 || k == 2 || k == 4
# 5030 "./sparc.c" 3 4
       ) || (__assert_fail(
# 5030 "./sparc.c"
       "k == 1 || k == 2 || k == 4"
# 5030 "./sparc.c" 3 4
       , "./sparc.c", 5030, __func__),0)))
# 5030 "./sparc.c"
                                         ;
        
# 5031 "./sparc.c" 3 4
       ((void)((
# 5031 "./sparc.c"
       dalign >= k
# 5031 "./sparc.c" 3 4
       ) || (__assert_fail(
# 5031 "./sparc.c"
       "dalign >= k"
# 5031 "./sparc.c" 3 4
       , "./sparc.c", 5031, __func__),0)))
# 5031 "./sparc.c"
                          ;
        if (k == 1)
                print("stb %%r%d,[%%r%d+%d]\n", tmp, reg, off);
        else if (k == 2)
                print("sth %%r%d,[%%r%d+%d]\n", tmp, reg, off);
        else
                print("st %%r%d,[%%r%d+%d]\n", tmp, reg, off);
}
static void blkloop(int dreg, int doff, int sreg, int soff, int size, int tmps[]) {
        if ((size&~7) < 4096) {
                print("add %%r%d,%d,%%r%d\n", sreg, size&~7, sreg);
                print("add %%r%d,%d,%%r%d\n", dreg, size&~7, tmps[2]);
        } else {
                print("set %d,%%r%d\n", size&~7, tmps[2]);
                print("add %%r%d,%%r%d,%%r%d\n", sreg, tmps[2], sreg);
                print("add %%r%d,%%r%d,%%r%d\n", dreg, tmps[2], tmps[2]);
        }
        blkcopy(tmps[2], doff, sreg, soff, size&7, tmps);
        print("1: dec 8,%%r%d\n", tmps[2]);
        blkcopy(tmps[2], doff, sreg, soff - 8, 8, tmps);
        print("cmp %%r%d,%%r%d; ", tmps[2], dreg);
        print("bgt 1b; ");
        print("dec 8,%%r%d\n", sreg);
}
static void defsymbol2(Symbol p) {
        if (p->scope >= LOCAL && p->sclass == STATIC)
                p->x.name = stringf(".%d", genlabel(1));
        else
                
# 5059 "./sparc.c" 3 4
               ((void)((
# 5059 "./sparc.c"
               p->scope != CONSTANTS || ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == INT || (((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == UNSIGNED) || ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == POINTER)
# 5059 "./sparc.c" 3 4
               ) || (__assert_fail(
# 5059 "./sparc.c"
               "p->scope != CONSTANTS || isint(p->type) || isptr(p->type)"
# 5059 "./sparc.c" 3 4
               , "./sparc.c", 5059, __func__),0)))
# 5059 "./sparc.c"
                                                                                ,
                p->x.name = p->name;
        if (p->scope >= LABELS)
                p->x.name = stringf(p->generated ? ".L%s" : "%s",
                        p->x.name);
}

static Symbol prevg;

static void globalend(void) {
        if (prevg && prevg->type->size > 0)
                print(".size %s,%d\n", prevg->x.name, prevg->type->size);
        prevg = 
# 5071 "./sparc.c" 3 4
               ((void*)0)
# 5071 "./sparc.c"
                   ;
}

static void export2(Symbol p) {
        globalend();
        print(".global %s\n", p->x.name);
}

static void progend2(void) {
        globalend();
}

static void global2(Symbol p) {
        globalend();
        
# 5085 "./sparc.c" 3 4
       ((void)((
# 5085 "./sparc.c"
       p->u.seg
# 5085 "./sparc.c" 3 4
       ) || (__assert_fail(
# 5085 "./sparc.c"
       "p->u.seg"
# 5085 "./sparc.c" 3 4
       , "./sparc.c", 5085, __func__),0)))
# 5085 "./sparc.c"
                       ;
        if (!p->generated) {
                print(".type %s,#%s\n", p->x.name,
                        ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION) ? "function" : "object");
                if (p->type->size > 0)
                        print(".size %s,%d\n", p->x.name, p->type->size);
                else
                        prevg = p;
        }
        if (p->u.seg == BSS && p->sclass == STATIC)
                print(".local %s\n.common %s,%d,%d\n", p->x.name, p->x.name,
                        p->type->size, p->type->align);
        else if (p->u.seg == BSS && Aflag >= 2)
                print(".align %d\n%s:.skip %d\n", p->type->align, p->x.name,
                        p->type->size);
        else if (p->u.seg == BSS)
                print(".common %s,%d,%d\n", p->x.name, p->type->size, p->type->align);
        else
                print(".align %d\n%s:\n", p->type->align, p->x.name);
}

static void segment2(int n) {
        cseg = n;
        switch (n) {
        case CODE: print(".section \".text\"\n"); break;
        case BSS: print(".section \".bss\"\n"); break;
        case DATA: print(".section \".data\"\n"); break;
        case LIT: print(".section \".rodata\"\n"); break;
        }
}
Interface sparcIR = {
        1, 1, 0,
        2, 2, 0,
        4, 4, 0,
        4, 4, 0,
        4, 4, 0,
        4, 4, 1,
        8, 8, 1,
        8, 8, 1,
        4, 4, 0,
        0, 1, 0,
        0,
        0,
        1,
        0,
        1,
        0,
        0,
        address,
        blockbeg,
        blockend,
        defaddress,
        defconst,
        defstring,
        defsymbol,
        emit,
        export,
        function,
        gen,
        global,
        import,
        local,
        progbeg,
        progend,
        segment,
        space,
        stabblock, 0, 0, stabinit, stabline, stabsym, stabtype,
        {
                1,
                rmap,
                blkfetch, blkstore, blkloop,
                _label,
                _rule,
                _nts,
                _kids,
                _string,
                _templates,
                _isinstruction,
                _ntname,
                emit2,
                doarg,
                target,
                clobber,

        }
};

Interface solarisIR = {
        1, 1, 0,
        2, 2, 0,
        4, 4, 0,
        4, 4, 0,
        4, 4, 0,
        4, 4, 1,
        8, 8, 1,
        8, 8, 1,
        4, 4, 0,
        0, 1, 0,
        0,
        0,
        1,
        0,
        1,
        0,
        0,
        address,
        blockbeg,
        blockend,
        defaddress,
        defconst,
        defstring,
        defsymbol2,
        emit,
        export2,
        function,
        gen,
        global2,
        import,
        local,
        progbeg,
        progend2,
        segment2,
        space,
        stabblock, 0, 0, stabinit, stabline, stabsym, stabtype,
        {
                1,
                rmap,
                blkfetch, blkstore, blkloop,
                _label,
                _rule,
                _nts,
                _kids,
                _string,
                _templates,
                _isinstruction,
                _ntname,
                emit2,
                doarg,
                target,
                clobber,

        }
};
static char rcsid[] = "$Id$";
