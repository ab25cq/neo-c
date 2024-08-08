# 0 "src/stab.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/stab.c"
# 1 "/usr/include/fortify/string.h" 1 3 4

# 1 "/usr/include/fortify/string.h" 3 4
/*
 * Copyright (C) 2015-2016 Dimitris Papastamos <sin@2f30.org>
 * Copyright (C) 2022 q66 <q66@chimera-linux.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */





__extension__

# 1 "/usr/include/string.h" 1 3 4







# 1 "/usr/include/features.h" 1 3 4
# 9 "/usr/include/string.h" 2 3 4
# 25 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 58 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned long size_t;
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
/*
 * Copyright (C) 2015-2016 Dimitris Papastamos <sin@2f30.org>
 * Copyright (C) 2022 q66 <q66@chimera-linux.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */




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
# 2 "src/stab.c" 2
# 1 "/usr/include/fortify/stdlib.h" 1 3 4
/*
 * Copyright (C) 2015-2016 Dimitris Papastamos <sin@2f30.org>
 * Copyright (C) 2022 q66 <q66@chimera-linux.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */





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
# 3 "src/stab.c" 2
# 1 "src/c.h" 1

# 1 "src/c.h"
/* $Id$ */
# 1 "/usr/include/assert.h" 1 3 4
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
/*
 * Copyright (C) 2015-2016 Dimitris Papastamos <sin@2f30.org>
 * Copyright (C) 2022 q66 <q66@chimera-linux.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */





__extension__

# 1 "/usr/include/stdio.h" 1 3 4
# 26 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
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
/*
 * Copyright (C) 2015-2016 Dimitris Papastamos <sin@2f30.org>
 * Copyright (C) 2022 q66 <q66@chimera-linux.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
# 6 "src/c.h" 2
# 1 "/usr/include/limits.h" 1 3 4





# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 7 "/usr/include/limits.h" 2 3 4

/* Support signed or unsigned plain-char */
# 40 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/limits.h" 1 3 4
# 41 "/usr/include/limits.h" 2 3 4
# 64 "/usr/include/limits.h" 3 4
/* Implementation choices... */
# 75 "/usr/include/limits.h" 3 4
/* Arbitrary numbers... */
# 111 "/usr/include/limits.h" 3 4
/* POSIX/SUS requirements follow. These numbers come directly
 * from SUS and have nothing to do with the host system. */
# 7 "src/c.h" 2
# 1 "/usr/include/fortify/string.h" 1 3 4
/*
 * Copyright (C) 2015-2016 Dimitris Papastamos <sin@2f30.org>
 * Copyright (C) 2022 q66 <q66@chimera-linux.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
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
/* $Id$ */
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
extern unsigned regloc(Symbol); /* omit */
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
 unsigned int eaddr; /* omit */
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

/* Exported for the front end */
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
/* $Id$ */
/*
xx(symbol,	value,	prec,	op,	optree,	kind,	string)
*/

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
/* $Id$ */

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
   Table ftab; /* omit */
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
# 4 "src/stab.c" 2
# 1 "src/stab.h" 1
/*      @(#)stab.h 1.11 92/05/11 SMI      */
/* $Id$ */
/*
 * Copyright (c) 1990 by Sun Microsystems, Inc.
 */

/*
 * This file gives definitions supplementing <a.out.h>
 * for permanent symbol table entries.
 * These must have one of the N_STAB bits on,
 * and are subject to relocation according to the masks in <a.out.h>.
 */






/* this file contains fragments of a.out.h and stab.h relevant to
 * support of stabX processing within ELF files - see the
 * Format of a symbol table entry
 */
struct nlist {
        union {
                char *n_name; /* for use when in-core */
                long n_strx; /* index into file string table */
        } n_un;
        unsigned char n_type; /* type flag (N_TEXT,..)  */
        char n_other; /* unused */
        short n_desc; /* see <stab.h> */
        unsigned long n_value; /* value of symbol (or sdb offset) */
};

/*
 * Simple values for n_type.
 */
# 50 "src/stab.h"
/*
 * for symbolic debugger, sdb(1):
 */
# 82 "src/stab.h"
/*
 * for the berkeley pascal compiler, pc(1):
 */



/*
 * for code browser only
 */


/*
 * Optional langauge designations for N_SO
 */







/*
 * Floating point type values
 */
# 5 "src/stab.c" 2

static char rcsid[] = "$Id$";

static char *currentfile; /* current file name */
static int ntypes;

extern Interface sparcIR;

char *stabprefix = "L";

extern char *stabprefix;
extern void stabblock(int, int, Symbol*);
extern void stabend(Coordinate *, Symbol, Coordinate **, Symbol *, Symbol *);
extern void stabfend(Symbol, int);
extern void stabinit(char *, int, char *[]);
extern void stabline(Coordinate *);
extern void stabsym(Symbol);
extern void stabtype(Symbol);

static void asgncode(Type, int);
static void dbxout(Type);
static int dbxtype(Type);
static int emittype(Type, int, int);

/* asgncode - assign type code to ty */
static void asgncode(Type ty, int lev) {
    if (ty->x.marked || ty->x.typeno)
        return;
    ty->x.marked = 1;
    switch (ty->op) {
    case VOLATILE: case CONST: case VOLATILE+CONST:
        asgncode(ty->type, lev);
        ty->x.typeno = ty->type->x.typeno;
        break;
    case POINTER: case FUNCTION: case ARRAY:
        asgncode(ty->type, lev + 1);
        /* fall thru */
    case VOID: case INT: case UNSIGNED: case FLOAT:
        break;
    case STRUCT: case UNION: {
        Field p;
        for (p = fieldlist(ty); p; p = p->link)
            asgncode(p->type, lev + 1);
        /* fall thru */
    case ENUM:
        if (ty->x.typeno == 0)
            ty->x.typeno = ++ntypes;
        if (lev > 0 && (*ty->u.sym->name < '0' || *ty->u.sym->name > '9'))
            dbxout(ty);
        break;
        }
    default:
        
# 57 "src/stab.c" 3 4
       ((void)((
# 57 "src/stab.c"
       0
# 57 "src/stab.c" 3 4
       ) || (__assert_fail(
# 57 "src/stab.c"
       "0"
# 57 "src/stab.c" 3 4
       , "src/stab.c", 57, __func__),0)))
# 57 "src/stab.c"
                ;
    }
}

/* dbxout - output .stabs entry for type ty */
static void dbxout(Type ty) {
    ty = (((ty)->op >= CONST) ? (ty)->type : (ty));
    if (!ty->x.printed) {
        int col = 0;
        print(".stabs \""), col += 8;
        if (ty->u.sym && !(((((ty)->op >= CONST) ? (ty)->type : (ty))->op == FUNCTION) || ((((ty)->op >= CONST) ? (ty)->type : (ty))->op == ARRAY) || ((((ty)->op >= CONST) ? (ty)->type : (ty))->op == POINTER)))
            print("%s", ty->u.sym->name), col += strlen(ty->u.sym->name);
        print(":%c", ((((ty)->op >= CONST) ? (ty)->type : (ty))->op == STRUCT || (((ty)->op >= CONST) ? (ty)->type : (ty))->op == UNION) || ((((ty)->op >= CONST) ? (ty)->type : (ty))->op == ENUM) ? 'T' : 't'), col += 2;
        emittype(ty, 0, col);
        print("\",%d,0,0,0\n", 0x80);
    }
}

/* dbxtype - emit a stabs entry for type ty, return type code */
static int dbxtype(Type ty) {
    asgncode(ty, 0);
    dbxout(ty);
    return ty->x.typeno;
}

/*
 * emittype - emit ty's type number, emitting its definition if necessary.
 * Returns the output column number after emission; col is the approximate
 * output column before emission and is used to emit continuation lines for long
 * struct, union, and enum types. Continuations are not emitted for other types,
 * even if the definition is long. lev is the depth of calls to emittype.
 */
static int emittype(Type ty, int lev, int col) {
    int tc = ty->x.typeno;

    if (((ty)->op == CONST || (ty)->op == CONST+VOLATILE) || ((ty)->op == VOLATILE || (ty)->op == CONST+VOLATILE)) {
        col = emittype(ty->type, lev, col);
        ty->x.typeno = ty->type->x.typeno;
        ty->x.printed = 1;
        return col;
    }
    if (tc == 0) {
        ty->x.typeno = tc = ++ntypes;
/*              fprint(2,"`%t'=%d\n", ty, tc); */
    }
    print("%d", tc), col += 3;
    if (ty->x.printed)
        return col;
    ty->x.printed = 1;
    switch (ty->op) {
    case VOID: /* void is defined as itself */
        print("=%d", tc), col += 1+3;
        break;
    case INT:
        if (ty == chartype) /* plain char is a subrange of itself */
            print("=r%d;%d;%d;", tc, ty->u.sym->u.limits.min.i, ty->u.sym->u.limits.max.i),
                col += 2+3+2*2.408*ty->size+2;
        else /* other signed ints are subranges of int */
            print("=r1;%D;%D;", ty->u.sym->u.limits.min.i, ty->u.sym->u.limits.max.i),
                col += 4+2*2.408*ty->size+2;
        break;
    case UNSIGNED:
        if (ty == chartype) /* plain char is a subrange of itself */
            print("=r%d;0;%u;", tc, ty->u.sym->u.limits.max.i),
                col += 2+3+2+2.408*ty->size+1;
        else /* other signed ints are subranges of int */
            print("=r1;0;%U;", ty->u.sym->u.limits.max.i),
                col += 4+2.408*ty->size+1;
        break;
    case FLOAT: /* float, double, long double get sizes, not ranges */
        print("=r1;%d;0;", ty->size), col += 4+1+3;
        break;
    case POINTER:
        print("=*"), col += 2;
        col = emittype(ty->type, lev + 1, col);
        break;
    case FUNCTION:
        print("=f"), col += 2;
        col = emittype(ty->type, lev + 1, col);
        break;
    case ARRAY: /* array includes subscript as an int range */
        if (ty->size && ty->type->size)
            print("=ar1;0;%d;", ty->size/ty->type->size - 1), col += 7+3+1;
        else
            print("=ar1;0;-1;"), col += 10;
        col = emittype(ty->type, lev + 1, col);
        break;
    case STRUCT: case UNION: {
        Field p;
        if (!ty->u.sym->defined) {
            print("=x%c%s:", ty->op == STRUCT ? 's' : 'u', ty->u.sym->name);
            col += 2+1+strlen(ty->u.sym->name)+1;
            break;
        }
        if (lev > 0 && (*ty->u.sym->name < '0' || *ty->u.sym->name > '9')) {
            ty->x.printed = 0;
            break;
        }
        print("=%c%d", ty->op == STRUCT ? 's' : 'u', ty->size), col += 1+1+3;
        for (p = fieldlist(ty); p; p = p->link) {
            if (p->name)
                print("%s:", p->name), col += strlen(p->name)+1;
            else
                print(":"), col += 1;
            col = emittype(p->type, lev + 1, col);
            if (p->lsb)
                print(",%d,%d;", 8*p->offset +
                    (IR->little_endian ? ((p)->lsb - 1) : (8*(p)->type->size - (p)->bitsize - ((p)->lsb - 1))),
                    (p)->bitsize);
            else
                print(",%d,%d;", 8*p->offset, 8*p->type->size);
            col += 1+3+1+3+1; /* accounts for ,%d,%d; */
            if (col >= 80 && p->link) {
                print("\\\\\",%d,0,0,0\n.stabs \"", 0x80);
                col = 8;
            }
        }
        print(";"), col += 1;
        break;
        }
    case ENUM: {
        Symbol *p;
        if (lev > 0 && (*ty->u.sym->name < '0' || *ty->u.sym->name > '9')) {
            ty->x.printed = 0;
            break;
        }
        print("=e"), col += 2;
        for (p = ty->u.sym->u.idlist; *p; p++) {
            print("%s:%d,", (*p)->name, (*p)->u.value), col += strlen((*p)->name)+3;
            if (col >= 80 && p[1]) {
                print("\\\\\",%d,0,0,0\n.stabs \"", 0x80);
                col = 8;
            }
        }
        print(";"), col += 1;
        break;
        }
    default:
        
# 195 "src/stab.c" 3 4
       ((void)((
# 195 "src/stab.c"
       0
# 195 "src/stab.c" 3 4
       ) || (__assert_fail(
# 195 "src/stab.c"
       "0"
# 195 "src/stab.c" 3 4
       , "src/stab.c", 195, __func__),0)))
# 195 "src/stab.c"
                ;
    }
    return col;
}

/* stabblock - output a stab entry for '{' or '}' at level lev */
void stabblock(int brace, int lev, Symbol *p) {
    if (brace == '{')
        while (*p)
            stabsym(*p++);
    if (IR == &sparcIR)
        print(".stabd 0x%x,0,%d\n", brace == '{' ? 0xc0 : 0xe0, lev);
    else {
        int lab = genlabel(1);
        print(".stabn 0x%x,0,%d,%s%d-%s\n", brace == '{' ? 0xc0 : 0xe0, lev,
            stabprefix, lab, cfunc->x.name);
        print("%s%d:\n", stabprefix, lab);
    }
}

    typedef void (*Closure)(Symbol, void *);
    extern char *getcwd(char *, size_t);
/* stabinit - initialize stab output */
void stabinit(char *file, int argc, char *argv[]) {

    print(".stabs \"lcc4_compiled.\",0x%x,0,0,0\n", 0x3c);
    if (file && *file) {
        char buf[1024], *cwd = getcwd(buf, sizeof buf);
        if (cwd)
            print(".stabs \"%s/\",0x%x,0,3,%stext0\n", cwd, 0x64, stabprefix);
        print(".stabs \"%s\",0x%x,0,3,%stext0\n", file, 0x64, stabprefix);
        (*IR->segment)(CODE);
        print("%stext0:\n", stabprefix, 0x64);
        currentfile = file;
    }
    dbxtype(inttype);
    dbxtype(chartype);
    dbxtype(doubletype);
    dbxtype(floattype);
    dbxtype(longdouble);
    dbxtype(longtype);
    dbxtype(longlong);
    dbxtype(shorttype);
    dbxtype(signedchar);
    dbxtype(unsignedchar);
    dbxtype(unsignedlong);
    dbxtype(unsignedlonglong);
    dbxtype(unsignedshort);
    dbxtype(unsignedtype);
    dbxtype(voidtype);
    foreach(types, GLOBAL, (Closure)stabtype, 
# 245 "src/stab.c" 3 4
                                             ((void*)0)
# 245 "src/stab.c"
                                                 );
}

/* stabline - emit stab entry for source coordinate *cp */
void stabline(Coordinate *cp) {
    if (cp->file && cp->file != currentfile) {
        int lab = genlabel(1);
        print(".stabs \"%s\",0x%x,0,0,%s%d\n", cp->file, 0x84, stabprefix, lab);
        print("%s%d:\n", stabprefix, lab);
        currentfile = cp->file;
    }
    if (IR == &sparcIR)
        print(".stabd 0x%x,0,%d\n", 0x44, cp->y);
    else {
        int lab = genlabel(1);
        print(".stabn 0x%x,0,%d,%s%d-%s\n", 0x44, cp->y,
            stabprefix, lab, cfunc->x.name);
        print("%s%d:\n", stabprefix, lab);
    }
}

/* stabsym - output a stab entry for symbol p */
void stabsym(Symbol p) {
    int code_, tc, sz = p->type->size;

    if (p->generated || p->computed)
        return;
    if (((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == FUNCTION)) {
        print(".stabs \"%s:%c%d\",%d,0,0,%s\n", p->name,
            p->sclass == STATIC ? 'f' : 'F', dbxtype(freturn(p->type)),
            0x24, p->x.name);
        return;
    }
    if (!IR->wants_argb && p->scope == PARAM && p->structarg) {
        
# 279 "src/stab.c" 3 4
       ((void)((
# 279 "src/stab.c"
       ((((p->type)->op >= CONST) ? (p->type)->type : (p->type))->op == POINTER) && ((((p->type->type)->op >= CONST) ? (p->type->type)->type : (p->type->type))->op == STRUCT || (((p->type->type)->op >= CONST) ? (p->type->type)->type : (p->type->type))->op == UNION)
# 279 "src/stab.c" 3 4
       ) || (__assert_fail(
# 279 "src/stab.c"
       "isptr(p->type) && isstruct(p->type->type)"
# 279 "src/stab.c" 3 4
       , "src/stab.c", 279, __func__),0)))
# 279 "src/stab.c"
                                                        ;
        tc = dbxtype(p->type->type);
        sz = p->type->type->size;
    } else
        tc = dbxtype(p->type);
    if (p->sclass == AUTO && p->scope == GLOBAL || p->sclass == EXTERN) {
        print(".stabs \"%s:G", p->name);
        code_ = 0x20;
    } else if (p->sclass == STATIC) {
        print(".stabs \"%s:%c%d\",%d,0,0,%s\n", p->name, p->scope == GLOBAL ? 'S' : 'V',
            tc, p->u.seg == BSS ? 0x28 : 0x26, p->x.name);
        return;
    } else if (p->sclass == REGISTER) {
        if (p->x.regnode) {
            int r = p->x.regnode->number;
            if (p->x.regnode->set == FREG)
                r += 32; /* floating point */
                print(".stabs \"%s:%c%d\",%d,0,", p->name,
                    p->scope == PARAM ? 'P' : 'r', tc, 0x40);
            print("%d,%d\n", sz, r);
        }
        return;
    } else if (p->scope == PARAM) {
        print(".stabs \"%s:p", p->name);
        code_ = 0xa0;
    } else if (p->scope >= LOCAL) {
        print(".stabs \"%s:", p->name);
        code_ = 0x80;
    } else {
        using c {
        
# 309 "src/stab.c" 3 4
       ((void)((
# 309 "src/stab.c"
       0
# 309 "src/stab.c" 3 4
       ) || (__assert_fail(
# 309 "src/stab.c"
       "0"
# 309 "src/stab.c" 3 4
       , "src/stab.c", 309, __func__),0)))
# 309 "src/stab.c"
                ;
        }
    }
    print("%d\",%d,0,0,%s\n", tc, code_,
        p->scope >= PARAM && p->sclass != EXTERN ? p->x.name : "0");
}

/* stabtype - output a stab entry for type *p */
void stabtype(Symbol p) {
    if (p->type) {
        if (p->sclass == 0)
            dbxtype(p->type);
        else if (p->sclass == TYPEDEF)
            print(".stabs \"%s:t%d\",%d,0,0,0\n", p->name, dbxtype(p->type), 0x80);
    }
}

/* stabend - finalize a function */
void stabfend(Symbol p, int lineno) {}

/* stabend - finalize stab output */
void stabend(Coordinate *cp, Symbol p, Coordinate **cpp, Symbol *sp, Symbol *stab) {
    (*IR->segment)(CODE);
    print(".stabs \"\", %d, 0, 0,%setext\n", 0x64, stabprefix);
    print("%setext:\n", stabprefix);
}
