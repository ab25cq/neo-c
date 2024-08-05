# 0 "llburg/gram.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "llburg/gram.c"
# 15 "llburg/gram.c"
const static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley +Cygnus.28) 01/20/91";



# 1 "/usr/include/fortify/stdio.h" 1 3 4
# 21 "/usr/include/fortify/stdio.h" 3 4

# 21 "/usr/include/fortify/stdio.h" 3 4
__extension__

# 1 "/usr/include/stdio.h" 1 3 4







# 1 "/usr/include/features.h" 1 3 4
# 9 "/usr/include/stdio.h" 2 3 4
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





typedef __builtin_va_list va_list;




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
# 20 "llburg/gram.c" 2
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
# 21 "llburg/gram.c" 2
# 2 "lburg/gram.y"

# 1 "llburg/lburg.h" 1






# 6 "llburg/lburg.h"
extern void *alloc(int nbytes);

typedef enum { TERM=1, NONTERM } Kind;
typedef struct rule *Rule;
typedef struct term *Term;
struct term {
 char *name;
 Kind kind;
 int esn;
 int arity;
 Term link;
 Rule rules;
};

typedef struct nonterm *Nonterm;
struct nonterm {
 char *name;
 Kind kind;
 int number;
 int lhscount;
 int reached;
 Rule rules;
 Rule chain;
 Nonterm link;
};
extern Nonterm nonterm(char *id);
extern Term term(char *id, int esn);

typedef struct tree *Tree;
struct tree {
 void *op;
 Tree left, right;
 int nterms;
};
extern Tree tree(char *op, Tree left, Tree right);

struct rule {
 Nonterm lhs;
 Tree pattern;
 int ern;
 int packed;
 int cost;
 char *code;
 char *template;
 Rule link;
 Rule next;
 Rule chain;
 Rule decode;
 Rule kids;
};
extern Rule rule(char *id, Tree pattern, char *template, char *code);


void yyerror(char *fmt, ...);
int yyparse(void);
void yywarn(char *fmt, ...);
extern int errcnt;
extern FILE *infp;
extern FILE *outfp;
# 4 "lburg/gram.y" 2
static char rcsid[] = "$Id$";

static int yylineno = 0;
# 8 "lburg/gram.y"
typedef union {
 int n;
 char *string;
 Tree tree;
} YYSTYPE;
# 37 "y.tab.c"
# 45 "y.tab.c"
static const short yylhs[] = { -1,
    0, 0, 4, 4, 6, 6, 6, 6, 7, 7,
    5, 5, 5, 5, 1, 3, 3, 3, 2,
};
static const short yylen[] = { 2,
    3, 1, 0, 2, 3, 3, 1, 2, 0, 4,
    0, 7, 2, 3, 1, 1, 4, 6, 1,
};
static const short yydefred[] = { 3,
    0, 0, 0, 9, 0, 11, 7, 4, 8, 0,
   15, 0, 0, 0, 5, 6, 0, 13, 0, 0,
   14, 0, 10, 0, 0, 0, 0, 0, 19, 0,
   17, 0, 12, 0, 18,
};
static const short yydgoto[] = { 1,
   12, 30, 25, 2, 13, 8, 10,
};
static const short yysindex[] = { 0,
    0, -4, -2, 0, -250, 0, 0, 0, 0, -9,
    0, 1, -10, -49, 0, 0, 3, 0, -44, -248,
    0, -244, 0, -22, -242, -244, -245, -37, 0, 10,
    0, -244, 0, -20, 0,
};
static const short yyrindex[] = { 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
};
static const short yygindex[] = { 0,
   11, 0, -23, 0, 0, 0, 0,
};

static const short yytable[] = { 18,
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
static const short yycheck[] = { 10,
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
# 195 "y.tab.c"
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
YYSTYPE yyval;
YYSTYPE yylval;
static short *yyss;
static YYSTYPE *yyvs;
static int yystacksize;

extern int yylex();

static void *
yymalloc(unsigned bytes)
{
    void * ptr = (void *) malloc (bytes);
    if (ptr != 0) return (ptr);
    yyerror ("yyparse: memory exhausted");
    return (0);
}

static void *
yyrealloc(void * old , unsigned bytes)
{
    void * ptr = (void *) realloc (old, bytes);
    if (ptr != 0) return (ptr);
    yyerror ("yyparse: memory exhausted");
    return (0);
}

static int



yygrow ()
{
    int old_stacksize = yystacksize;
    short *new_yyss;
    YYSTYPE *new_yyvs;

    if (yystacksize == 10000)
        return (1);
    yystacksize += (yystacksize + 1 ) / 2;
    if (yystacksize > 10000)
        yystacksize = 10000;





    new_yyss = (short *) yyrealloc ((char *)yyss, yystacksize * sizeof (short));
    if (new_yyss == 0)
        return (1);
    new_yyvs = (YYSTYPE *) yyrealloc ((char *)yyvs, yystacksize * sizeof (YYSTYPE));
    if (new_yyvs == 0)
    {
        free(new_yyss);
        return (1);
    }
    yyss = new_yyss;
    yyvs = new_yyvs;
    return (0);
}
# 60 "lburg/gram.y"
# 1 "/usr/include/assert.h" 1 3 4
# 19 "/usr/include/assert.h" 3 4

# 19 "/usr/include/assert.h" 3 4
_Noreturn void __assert_fail (const char *, const char *, int, const char *);
# 61 "lburg/gram.y" 2
# 1 "/usr/include/stdarg.h" 1 3 4
# 10 "/usr/include/stdarg.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 11 "/usr/include/stdarg.h" 2 3 4
# 62 "lburg/gram.y" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 10 "/usr/include/ctype.h" 3 4
int isalnum(int);
int isalpha(int);
int isblank(int);
int iscntrl(int);
int isdigit(int);
int isgraph(int);
int islower(int);
int isprint(int);
int ispunct(int);
int isspace(int);
int isupper(int);
int isxdigit(int);
int tolower(int);
int toupper(int);


static inline int __isspace(int _c)
{
 return _c == ' ' || (unsigned)_c-'\t' < 5;
}
# 46 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 351 "/usr/include/bits/alltypes.h" 3 4
typedef struct __locale_struct * locale_t;
# 47 "/usr/include/ctype.h" 2 3 4

int isalnum_l(int, locale_t);
int isalpha_l(int, locale_t);
int isblank_l(int, locale_t);
int iscntrl_l(int, locale_t);
int isdigit_l(int, locale_t);
int isgraph_l(int, locale_t);
int islower_l(int, locale_t);
int isprint_l(int, locale_t);
int ispunct_l(int, locale_t);
int isspace_l(int, locale_t);
int isupper_l(int, locale_t);
int isxdigit_l(int, locale_t);
int tolower_l(int, locale_t);
int toupper_l(int, locale_t);

int isascii(int);
int toascii(int);
# 63 "lburg/gram.y" 2
# 1 "/usr/include/fortify/string.h" 1 3 4
# 21 "/usr/include/fortify/string.h" 3 4
__extension__

# 1 "/usr/include/string.h" 1 3 4
# 25 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
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
# 64 "lburg/gram.y" 2
# 1 "/usr/include/limits.h" 1 3 4





# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 7 "/usr/include/limits.h" 2 3 4
# 40 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/limits.h" 1 3 4
# 41 "/usr/include/limits.h" 2 3 4
# 65 "lburg/gram.y" 2


# 66 "lburg/gram.y"
int errcnt = 0;
FILE *infp = 
# 67 "lburg/gram.y" 3 4
            ((void*)0)
# 67 "lburg/gram.y"
                ;
FILE *outfp = 
# 68 "lburg/gram.y" 3 4
             ((void*)0)
# 68 "lburg/gram.y"
                 ;
static char buf[
# 69 "lburg/gram.y" 3 4
               1024
# 69 "lburg/gram.y"
                     ], *bp = buf;
static int ppercent = 0;
static int code = 0;

static int get(void) {
 if (*bp == 0) {
  bp = buf;
  *bp = 0;
  if (fgets(buf, sizeof buf, infp) == 
# 77 "lburg/gram.y" 3 4
                                     ((void*)0)
# 77 "lburg/gram.y"
                                         )
   return 
# 78 "lburg/gram.y" 3 4
         (-1)
# 78 "lburg/gram.y"
            ;
  yylineno++;
  while (buf[0] == '%' && buf[1] == '{' && buf[2] == '\n') {
   for (;;) {
    if (fgets(buf, sizeof buf, infp) == 
# 82 "lburg/gram.y" 3 4
                                       ((void*)0)
# 82 "lburg/gram.y"
                                           ) {
     yywarn("unterminated %{...%}\n");
     return 
# 84 "lburg/gram.y" 3 4
           (-1)
# 84 "lburg/gram.y"
              ;
    }
    yylineno++;
    if (strcmp(buf, "%}\n") == 0)
     break;
    fputs(buf, outfp);
   }
   if (fgets(buf, sizeof buf, infp) == 
# 91 "lburg/gram.y" 3 4
                                      ((void*)0)
# 91 "lburg/gram.y"
                                          )
    return 
# 92 "lburg/gram.y" 3 4
          (-1)
# 92 "lburg/gram.y"
             ;
   yylineno++;
  }
 }
 return *bp++;
}

void yyerror(char *fmt, ...) {
 va_list ap;

 
# 102 "lburg/gram.y" 3 4
__builtin_va_start(
# 102 "lburg/gram.y"
ap
# 102 "lburg/gram.y" 3 4
,
# 102 "lburg/gram.y"
fmt
# 102 "lburg/gram.y" 3 4
)
# 102 "lburg/gram.y"
                 ;
 if (yylineno > 0)
  fprintf(
# 104 "lburg/gram.y" 3 4
         (stderr)
# 104 "lburg/gram.y"
               , "line %d: ", yylineno);
 vfprintf(
# 105 "lburg/gram.y" 3 4
         (stderr)
# 105 "lburg/gram.y"
               , fmt, ap);
 if (fmt[strlen(fmt)-1] != '\n')
   fprintf(
# 107 "lburg/gram.y" 3 4
          (stderr)
# 107 "lburg/gram.y"
                , "\n");
 errcnt++;
 
# 109 "lburg/gram.y" 3 4
__builtin_va_end(
# 109 "lburg/gram.y"
ap
# 109 "lburg/gram.y" 3 4
)
# 109 "lburg/gram.y"
          ;
}

int yylex(void) {
 int c;

 if (code) {
  char *p;
  bp += strspn(bp, " \t\f");
  p = strchr(bp, '\n');
  if (p == 
# 119 "lburg/gram.y" 3 4
          ((void*)0)
# 119 "lburg/gram.y"
              )
   p = strchr(bp, '\n');
  while (p > bp && 
# 121 "lburg/gram.y" 3 4
                  __isspace(
# 121 "lburg/gram.y"
                  p[-1]
# 121 "lburg/gram.y" 3 4
                  )
# 121 "lburg/gram.y"
                                )
   p--;
  yylval.string = alloc(p - bp + 1);
  strncpy(yylval.string, bp, p - bp);
  yylval.string[p - bp] = 0;
  bp = p;
  code--;
  return 262;
 }
 while ((c = get()) != 
# 130 "lburg/gram.y" 3 4
                      (-1)
# 130 "lburg/gram.y"
                         ) {
  switch (c) {
  case ' ': case '\f': case '\t':
   continue;
  case '\n':
  case '(': case ')': case ',':
  case ':': case '=':
   return c;
  }
  if (c == '%' && *bp == '%') {
   bp++;
   return ppercent++ ? 0 : 259;
  } else if (c == '%' && strncmp(bp, "term", 4) == 0
  && 
# 143 "lburg/gram.y" 3 4
    __isspace(
# 143 "lburg/gram.y"
    bp[4]
# 143 "lburg/gram.y" 3 4
    )
# 143 "lburg/gram.y"
                  ) {
   bp += 4;
   return 257;
  } else if (c == '%' && strncmp(bp, "start", 5) == 0
  && 
# 147 "lburg/gram.y" 3 4
    __isspace(
# 147 "lburg/gram.y"
    bp[5]
# 147 "lburg/gram.y" 3 4
    )
# 147 "lburg/gram.y"
                  ) {
   bp += 5;
   return 258;
  } else if (c == '"') {
   char *p = strchr(bp, '"');
   if (p == 
# 152 "lburg/gram.y" 3 4
           ((void*)0)
# 152 "lburg/gram.y"
               ) {
    yyerror("missing \" in assembler template\n");
    p = strchr(bp, '\n');
    if (p == 
# 155 "lburg/gram.y" 3 4
            ((void*)0)
# 155 "lburg/gram.y"
                )
     p = strchr(bp, '\0');
   }
   
# 158 "lburg/gram.y" 3 4
  ((void)((
# 158 "lburg/gram.y"
  p
# 158 "lburg/gram.y" 3 4
  ) || (__assert_fail(
# 158 "lburg/gram.y"
  "p"
# 158 "lburg/gram.y" 3 4
  , "lburg/gram.y", 158, __func__),0)))
# 158 "lburg/gram.y"
           ;
   yylval.string = alloc(p - bp + 1);
   strncpy(yylval.string, bp, p - bp);
   yylval.string[p - bp] = 0;
   bp = *p == '"' ? p + 1 : p;
   code++;
   return 261;
  } else if (
# 165 "lburg/gram.y" 3 4
            (0 ? isdigit(
# 165 "lburg/gram.y"
            c
# 165 "lburg/gram.y" 3 4
            ) : ((unsigned)(
# 165 "lburg/gram.y"
            c
# 165 "lburg/gram.y" 3 4
            )-'0') < 10)
# 165 "lburg/gram.y"
                      ) {
   int n = 0;
   do {
    int d = c - '0';
    if (n > (
# 169 "lburg/gram.y" 3 4
            0x7fffffff 
# 169 "lburg/gram.y"
                    - d)/10)
     yyerror("integer greater than %d\n", 
# 170 "lburg/gram.y" 3 4
                                         0x7fffffff
# 170 "lburg/gram.y"
                                                );
    else
     n = 10*n + d;
    c = get();
   } while (c != 
# 174 "lburg/gram.y" 3 4
                (-1) 
# 174 "lburg/gram.y"
                    && 
# 174 "lburg/gram.y" 3 4
                       (0 ? isdigit(
# 174 "lburg/gram.y"
                       c
# 174 "lburg/gram.y" 3 4
                       ) : ((unsigned)(
# 174 "lburg/gram.y"
                       c
# 174 "lburg/gram.y" 3 4
                       )-'0') < 10)
# 174 "lburg/gram.y"
                                 );
   bp--;
   yylval.n = n;
   return 263;
  } else if (
# 178 "lburg/gram.y" 3 4
            (0 ? isalpha(
# 178 "lburg/gram.y"
            c
# 178 "lburg/gram.y" 3 4
            ) : (((unsigned)(
# 178 "lburg/gram.y"
            c
# 178 "lburg/gram.y" 3 4
            )|32)-'a') < 26)
# 178 "lburg/gram.y"
                      ) {
   char *p = bp - 1;
   while (
# 180 "lburg/gram.y" 3 4
         (0 ? isalpha(
# 180 "lburg/gram.y"
         *bp
# 180 "lburg/gram.y" 3 4
         ) : (((unsigned)(
# 180 "lburg/gram.y"
         *bp
# 180 "lburg/gram.y" 3 4
         )|32)-'a') < 26) 
# 180 "lburg/gram.y"
                      || 
# 180 "lburg/gram.y" 3 4
                         (0 ? isdigit(
# 180 "lburg/gram.y"
                         *bp
# 180 "lburg/gram.y" 3 4
                         ) : ((unsigned)(
# 180 "lburg/gram.y"
                         *bp
# 180 "lburg/gram.y" 3 4
                         )-'0') < 10) 
# 180 "lburg/gram.y"
                                      || *bp == '_')
    bp++;
   yylval.string = alloc(bp - p + 1);
   strncpy(yylval.string, p, bp - p);
   yylval.string[bp - p] = 0;
   return 260;
  } else if (
# 186 "lburg/gram.y" 3 4
            (0 ? isprint(
# 186 "lburg/gram.y"
            c
# 186 "lburg/gram.y" 3 4
            ) : ((unsigned)(
# 186 "lburg/gram.y"
            c
# 186 "lburg/gram.y" 3 4
            )-0x20) < 0x5f)
# 186 "lburg/gram.y"
                      )
   yyerror("invalid character `%c'\n", c);
  else
   yyerror("invalid character `\\%03o'\n", (unsigned char)c);
 }
 return 0;
}

void yywarn(char *fmt, ...) {
 va_list ap;

 
# 197 "lburg/gram.y" 3 4
__builtin_va_start(
# 197 "lburg/gram.y"
ap
# 197 "lburg/gram.y" 3 4
,
# 197 "lburg/gram.y"
fmt
# 197 "lburg/gram.y" 3 4
)
# 197 "lburg/gram.y"
                 ;
 if (yylineno > 0)
  fprintf(
# 199 "lburg/gram.y" 3 4
         (stderr)
# 199 "lburg/gram.y"
               , "line %d: ", yylineno);
 fprintf(
# 200 "lburg/gram.y" 3 4
        (stderr)
# 200 "lburg/gram.y"
              , "warning: ");
 vfprintf(
# 201 "lburg/gram.y" 3 4
         (stderr)
# 201 "lburg/gram.y"
               , fmt, ap);
}
# 403 "y.tab.c"
# 415 "y.tab.c"
int
yyparse()
{
    register int yym, yyn, yystate;
    register YYSTYPE *yyvsp;
    register short *yyssp;
    short *yysse;
# 433 "y.tab.c"
    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    if (yyss == 0)
    {
        yyss = (short *) yymalloc (500 * sizeof (short));
        if (yyss == 0)
          goto yyabort;
        yyvs = (YYSTYPE *) yymalloc (500 * sizeof (YYSTYPE));
        if (yyvs == 0)
        {
            free(yyss);
            goto yyabort;
        }
        yystacksize = 500;
    }
    yysse = yyss + yystacksize - 1;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;
    goto yyloop;

yypush_lex:
    yyval = yylval;
    yystate = yytable[yyn];
yypush:
    if (yyssp >= yysse)
    {
        int depth = yyssp - yyss;
        if (yygrow() != 0)
             goto yyoverflow;
        yysse = yyss + yystacksize -1;
        yyssp = depth + yyss;
        yyvsp = depth + yyvs;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    yyn = yysindex[yystate];
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
# 488 "y.tab.c"
    }
    if (yyn != 0
        && ((yyn += yychar), ((unsigned)yyn <= (unsigned)255))
        && yycheck[yyn] == yychar)
    {





        if (yyerrflag > 0) --yyerrflag;
        yychar = (-1);
        goto yypush_lex;
    }
    yyn = yyrindex[yystate];
    if (yyn != 0
        && ((yyn += yychar), ((unsigned)yyn <= (unsigned)255))
        && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;



yynewerror:
    yyerror("syntax error");



yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            yyn = yysindex[*yyssp];
            if (yyn != 0
                && ((yyn += 256), ((unsigned)yyn <= (unsigned)255))
                && yycheck[yyn] == 256)
            {





                goto yypush_lex;
            }
            else
            {





                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
# 565 "y.tab.c"
        yychar = (-1);
        goto yyloop;
    }
yyreduce:





    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
# 22 "lburg/gram.y"
{ yylineno = 0; }
break;
case 2:
# 23 "lburg/gram.y"
{ yylineno = 0; }
break;
case 6:
# 31 "lburg/gram.y"
{
  if (nonterm(yyvsp[-1].string)->number != 1)
   yyerror("redeclaration of the start symbol\n");
  }
break;
case 8:
# 36 "lburg/gram.y"
{ (yyerrflag=0); }
break;
case 10:
# 40 "lburg/gram.y"
{ term(yyvsp[-2].string, yyvsp[0].n); }
break;
case 12:
# 44 "lburg/gram.y"
{ rule(yyvsp[-5].string, yyvsp[-3].tree, yyvsp[-2].string, yyvsp[-1].string); }
break;
case 14:
# 46 "lburg/gram.y"
{ (yyerrflag=0); }
break;
case 15:
# 49 "lburg/gram.y"
{ nonterm(yyval.string = yyvsp[0].string); }
break;
case 16:
# 52 "lburg/gram.y"
{ yyval.tree = tree(yyvsp[0].string, 0, 0); }
break;
case 17:
# 53 "lburg/gram.y"
{ yyval.tree = tree(yyvsp[-3].string, yyvsp[-1].tree, 0); }
break;
case 18:
# 54 "lburg/gram.y"
{ yyval.tree = tree(yyvsp[-5].string, yyvsp[-3].tree, yyvsp[-1].tree); }
break;
case 19:
# 57 "lburg/gram.y"
{ if (*yyvsp[0].string == 0) yyval.string = "0"; }
break;
# 630 "y.tab.c"
    }
    yyssp -= yym;
    yyvsp -= yym;
    yym = yylhs[yyn];
    yystate = *yyssp;
    if (yystate == 0 && yym == 0)
    {





        yystate = 1;
        *++yyssp = 1;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
# 658 "y.tab.c"
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    yyn = yygindex[yym];
  if (yyn != 0
        && ((yyn += yystate), ((unsigned)yyn <= (unsigned)255))
        && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];





    goto yypush;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
