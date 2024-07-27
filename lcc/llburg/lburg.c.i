# 0 "llburg/lburg.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "llburg/lburg.c"
# 1 "/usr/include/assert.h" 1 3 4
# 1 "/usr/include/features.h" 1 3 4
# 2 "/usr/include/assert.h" 2 3 4
# 19 "/usr/include/assert.h" 3 4

# 19 "/usr/include/assert.h" 3 4
_Noreturn void __assert_fail (const char *, const char *, int, const char *);
# 2 "llburg/lburg.c" 2
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
# 3 "llburg/lburg.c" 2
# 1 "/usr/include/stdarg.h" 1 3 4
# 10 "/usr/include/stdarg.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 334 "/usr/include/bits/alltypes.h" 3 4
typedef __builtin_va_list va_list;
# 11 "/usr/include/stdarg.h" 2 3 4
# 4 "llburg/lburg.c" 2
# 1 "/usr/include/fortify/stdlib.h" 1 3 4
# 21 "/usr/include/fortify/stdlib.h" 3 4
__extension__

# 1 "/usr/include/stdlib.h" 1 3 4
# 21 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 15 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned wchar_t;
# 58 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned long size_t;
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
# 5 "llburg/lburg.c" 2
# 1 "/usr/include/fortify/stdio.h" 1 3 4
# 21 "/usr/include/fortify/stdio.h" 3 4
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
# 6 "llburg/lburg.c" 2
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
# 7 "llburg/lburg.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 33 "/usr/include/time.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 93 "/usr/include/bits/alltypes.h" 3 4
typedef long time_t;
# 217 "/usr/include/bits/alltypes.h" 3 4
typedef void * timer_t;




typedef int clockid_t;




typedef long clock_t;
# 237 "/usr/include/bits/alltypes.h" 3 4
struct timespec { time_t tv_sec; int :8*(sizeof(time_t)-sizeof(long))*(1234==4321); long tv_nsec; int :8*(sizeof(time_t)-sizeof(long))*(1234!=4321); };





typedef int pid_t;
# 34 "/usr/include/time.h" 2 3 4






struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 const char *tm_zone;
};

clock_t clock (void);
time_t time (time_t *);
double difftime (time_t, time_t);
time_t mktime (struct tm *);
size_t strftime (char *restrict, size_t, const char *restrict, const struct tm *restrict);
struct tm *gmtime (const time_t *);
struct tm *localtime (const time_t *);
char *asctime (const struct tm *);
char *ctime (const time_t *);
int timespec_get(struct timespec *, int);
# 73 "/usr/include/time.h" 3 4
size_t strftime_l (char * restrict, size_t, const char * restrict, const struct tm * restrict, locale_t);

struct tm *gmtime_r (const time_t *restrict, struct tm *restrict);
struct tm *localtime_r (const time_t *restrict, struct tm *restrict);
char *asctime_r (const struct tm *restrict, char *restrict);
char *ctime_r (const time_t *, char *);

void tzset (void);

struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
# 102 "/usr/include/time.h" 3 4
int nanosleep (const struct timespec *, struct timespec *);
int clock_getres (clockid_t, struct timespec *);
int clock_gettime (clockid_t, struct timespec *);
int clock_settime (clockid_t, const struct timespec *);
int clock_nanosleep (clockid_t, int, const struct timespec *, struct timespec *);
int clock_getcpuclockid (pid_t, clockid_t *);

struct sigevent;
int timer_create (clockid_t, struct sigevent *restrict, timer_t *restrict);
int timer_delete (timer_t);
int timer_settime (timer_t, int, const struct itimerspec *restrict, struct itimerspec *restrict);
int timer_gettime (timer_t, struct itimerspec *);
int timer_getoverrun (timer_t);

extern char *tzname[2];





char *strptime (const char *restrict, const char *restrict, struct tm *restrict);
extern int daylight;
extern long timezone;
extern int getdate_err;
struct tm *getdate (const char *);




int stime(const time_t *);
time_t timegm(struct tm *);
# 8 "llburg/lburg.c" 2
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
# 9 "llburg/lburg.c" 2

static char rcsid[] = "$Id$";
static char *prefix = "";
static int Tflag = 0;
static int ntnumber = 0;
static Nonterm start = 0;
static Term terms;
static Nonterm nts;
static Rule rules;
static int nrules;
static struct block {
 struct block *link;
} *memlist;

static char *stringf(char *fmt, ...);
static void print(char *fmt, ...);
static void ckreach(Nonterm p);
static void emitclosure(Nonterm nts);
static void emitcost(Tree t, char *v);
static void emitdefs(Nonterm nts, int ntnumber);
static void emitheader(void);
static void emitkids(Rule rules, int nrules);
static void emitnts(Rule rules, int nrules);
static void emitrecalc(char *pre, Term root, Term kid);
static void emitrecord(char *pre, Rule r, char *c, int cost);
static void emitrule(Nonterm nts);
static void emitlabel(Term terms, Nonterm start, int ntnumber);
static void emitstring(Rule rules);
static void emitstruct(Nonterm nts, int ntnumber);
static void emittest(Tree t, char *v, char *suffix);

int main(int argc, char *argv[]) {
 int c, i;
 Nonterm p;

 for (i = 1; i < argc; i++)
  if (strcmp(argv[i], "-T") == 0)
   Tflag = 1;
  else if (strncmp(argv[i], "-p", 2) == 0 && argv[i][2])
   prefix = &argv[i][2];
  else if (strncmp(argv[i], "-p", 2) == 0 && i + 1 < argc)
   prefix = argv[++i];
  else if (*argv[i] == '-' && argv[i][1]) {
   yyerror("usage: %s [-T | -p prefix]... [ [ input ] output ] \n",
    argv[0]);
   exit(1);
  } else if (infp == 
# 55 "llburg/lburg.c" 3 4
                    ((void*)0)
# 55 "llburg/lburg.c"
                        ) {
   if (strcmp(argv[i], "-") == 0)
    infp = 
# 57 "llburg/lburg.c" 3 4
          (stdin)
# 57 "llburg/lburg.c"
               ;
   else if ((infp = fopen(argv[i], "r")) == 
# 58 "llburg/lburg.c" 3 4
                                           ((void*)0)
# 58 "llburg/lburg.c"
                                               ) {
    yyerror("%s: can't read `%s'\n", argv[0], argv[i]);
    exit(1);
   }
  } else if (outfp == 
# 62 "llburg/lburg.c" 3 4
                     ((void*)0)
# 62 "llburg/lburg.c"
                         ) {
   if (strcmp(argv[i], "-") == 0)
    outfp = 
# 64 "llburg/lburg.c" 3 4
           (stdout)
# 64 "llburg/lburg.c"
                 ;
   if ((outfp = fopen(argv[i], "w")) == 
# 65 "llburg/lburg.c" 3 4
                                       ((void*)0)
# 65 "llburg/lburg.c"
                                           ) {
    yyerror("%s: can't write `%s'\n", argv[0], argv[i]);
    exit(1);
   }
  }
 if (infp == 
# 70 "llburg/lburg.c" 3 4
            ((void*)0)
# 70 "llburg/lburg.c"
                )
  infp = 
# 71 "llburg/lburg.c" 3 4
        (stdin)
# 71 "llburg/lburg.c"
             ;
 if (outfp == 
# 72 "llburg/lburg.c" 3 4
             ((void*)0)
# 72 "llburg/lburg.c"
                 )
  outfp = 
# 73 "llburg/lburg.c" 3 4
         (stdout)
# 73 "llburg/lburg.c"
               ;
 yyparse();
 if (start)
  ckreach(start);
 for (p = nts; p; p = p->link) {
  if (p->rules == 
# 78 "llburg/lburg.c" 3 4
                 ((void*)0)
# 78 "llburg/lburg.c"
                     )
   yyerror("undefined nonterminal `%s'\n", p->name);
  if (!p->reached)
   yyerror("can't reach nonterminal `%s'\n", p->name);
 }
 emitheader();
 emitdefs(nts, ntnumber);
 emitstruct(nts, ntnumber);
 emitnts(rules, nrules);
 emitstring(rules);
 emitrule(nts);
 emitclosure(nts);
 if (start)
  emitlabel(terms, start, ntnumber);
 emitkids(rules, nrules);
 if (!feof(infp))
  while ((c = getc(infp)) != 
# 94 "llburg/lburg.c" 3 4
                            (-1)
# 94 "llburg/lburg.c"
                               )
   putc(c, outfp);
 while (memlist) {
  struct block *q = memlist->link;
  free(memlist);
  memlist = q;
 }
 return errcnt > 0;
}


void *alloc(int nbytes) {
 struct block *p = calloc(1, sizeof *p + nbytes);

 if (p == 
# 108 "llburg/lburg.c" 3 4
         ((void*)0)
# 108 "llburg/lburg.c"
             ) {
  yyerror("out of memory\n");
  exit(1);
 }
 p->link = memlist;
 memlist = p;
 return p + 1;
}


static char *stringf(char *fmt, ...) {
 va_list ap;
 char buf[512];

 
# 122 "llburg/lburg.c" 3 4
__builtin_va_start(
# 122 "llburg/lburg.c"
ap
# 122 "llburg/lburg.c" 3 4
,
# 122 "llburg/lburg.c"
fmt
# 122 "llburg/lburg.c" 3 4
)
# 122 "llburg/lburg.c"
                 ;
 vsprintf(buf, fmt, ap);
 
# 124 "llburg/lburg.c" 3 4
__builtin_va_end(
# 124 "llburg/lburg.c"
ap
# 124 "llburg/lburg.c" 3 4
)
# 124 "llburg/lburg.c"
          ;
 return strcpy(alloc(strlen(buf) + 1), buf);
}

struct entry {
 union {
  char *name;
  struct term t;
  struct nonterm nt;
 } sym;
 struct entry *link;
} *table[211];



static unsigned hash(char *str) {
 unsigned h = 0;

 while (*str)
  h = (h<<1) + *str++;
 return h;
}


static void *lookup(char *name) {
 struct entry *p = table[hash(name)%(sizeof table/sizeof table[0])];

 for ( ; p; p = p->link)
  if (strcmp(name, p->sym.name) == 0)
   return &p->sym;
 return 0;
}


static void *install(char *name) {
 struct entry *p = alloc(sizeof *p);
 int i = hash(name)%(sizeof table/sizeof table[0]);

 p->sym.name = name;
 p->link = table[i];
 table[i] = p;
 return &p->sym;
}


Nonterm nonterm(char *id) {
 Nonterm p = lookup(id), *q = &nts;

 if (p && p->kind == NONTERM)
  return p;
 if (p && p->kind == TERM)
  yyerror("`%s' is a terminal\n", id);
 p = install(id);
 p->kind = NONTERM;
 p->number = ++ntnumber;
 if (p->number == 1)
  start = p;
 while (*q && (*q)->number < p->number)
  q = &(*q)->link;
 
# 183 "llburg/lburg.c" 3 4
((void)((
# 183 "llburg/lburg.c"
*q == 0 || (*q)->number != p->number
# 183 "llburg/lburg.c" 3 4
) || (__assert_fail(
# 183 "llburg/lburg.c"
"*q == 0 || (*q)->number != p->number"
# 183 "llburg/lburg.c" 3 4
, "llburg/lburg.c", 183, __func__),0)))
# 183 "llburg/lburg.c"
                                            ;
 p->link = *q;
 *q = p;
 return p;
}


Term term(char *id, int esn) {
 Term p = lookup(id), *q = &terms;

 if (p)
  yyerror("redefinition of terminal `%s'\n", id);
 else
  p = install(id);
 p->kind = TERM;
 p->esn = esn;
 p->arity = -1;
 while (*q && (*q)->esn < p->esn)
  q = &(*q)->link;
 if (*q && (*q)->esn == p->esn)
  yyerror("duplicate external symbol number `%s=%d'\n",
   p->name, p->esn);
 p->link = *q;
 *q = p;
 return p;
}


Tree tree(char *id, Tree left, Tree right) {
 Tree t = alloc(sizeof *t);
 Term p = lookup(id);
 int arity = 0;

 if (left && right)
  arity = 2;
 else if (left)
  arity = 1;
 if (p == 
# 220 "llburg/lburg.c" 3 4
         ((void*)0) 
# 220 "llburg/lburg.c"
              && arity > 0) {
  yyerror("undefined terminal `%s'\n", id);
  p = term(id, -1);
 } else if (p == 
# 223 "llburg/lburg.c" 3 4
                ((void*)0) 
# 223 "llburg/lburg.c"
                     && arity == 0)
  p = (Term)nonterm(id);
 else if (p && p->kind == NONTERM && arity > 0) {
  yyerror("`%s' is a nonterminal\n", id);
  p = term(id, -1);
 }
 if (p->kind == TERM && p->arity == -1)
  p->arity = arity;
 if (p->kind == TERM && arity != p->arity)
  yyerror("inconsistent arity for terminal `%s'\n", id);
 t->op = p;
 t->nterms = p->kind == TERM;
 if ((t->left = left) != 
# 235 "llburg/lburg.c" 3 4
                        ((void*)0)
# 235 "llburg/lburg.c"
                            )
  t->nterms += left->nterms;
 if ((t->right = right) != 
# 237 "llburg/lburg.c" 3 4
                          ((void*)0)
# 237 "llburg/lburg.c"
                              )
  t->nterms += right->nterms;
 return t;
}


Rule rule(char *id, Tree pattern, char *template, char *code) {
 Rule r = alloc(sizeof *r), *q;
 Term p = pattern->op;
 char *end;

 r->lhs = nonterm(id);
 r->packed = ++r->lhs->lhscount;
 for (q = &r->lhs->rules; *q; q = &(*q)->decode)
  ;
 *q = r;
 r->pattern = pattern;
 r->ern = ++nrules;
 r->template = template;
 r->code = code;
 r->cost = strtol(code, &end, 10);
 if (*end) {
  r->cost = -1;
  r->code = stringf("(%s)", code);
 }
 if (p->kind == TERM) {
  for (q = &p->rules; *q; q = &(*q)->next)
   ;
  *q = r;
 } else if (pattern->left == 
# 266 "llburg/lburg.c" 3 4
                            ((void*)0) 
# 266 "llburg/lburg.c"
                                 && pattern->right == 
# 266 "llburg/lburg.c" 3 4
                                                      ((void*)0)
# 266 "llburg/lburg.c"
                                                          ) {
  Nonterm p = pattern->op;
  r->chain = p->chain;
         p->chain = r;
  if (r->cost == -1)
   yyerror("illegal nonconstant cost `%s'\n", code);
 }
 for (q = &rules; *q; q = &(*q)->link)
  ;
 r->link = *q;
 *q = r;
 return r;
}


static void print(char *fmt, ...) {
 va_list ap;

 
# 284 "llburg/lburg.c" 3 4
__builtin_va_start(
# 284 "llburg/lburg.c"
ap
# 284 "llburg/lburg.c" 3 4
,
# 284 "llburg/lburg.c"
fmt
# 284 "llburg/lburg.c" 3 4
)
# 284 "llburg/lburg.c"
                 ;
 for ( ; *fmt; fmt++)
  if (*fmt == '%')
   switch (*++fmt) {
   case 'd': fprintf(outfp, "%d", 
# 288 "llburg/lburg.c" 3 4
                                 __builtin_va_arg(
# 288 "llburg/lburg.c"
                                 ap
# 288 "llburg/lburg.c" 3 4
                                 ,
# 288 "llburg/lburg.c"
                                 int
# 288 "llburg/lburg.c" 3 4
                                 )
# 288 "llburg/lburg.c"
                                                ); break;
   case 's': fputs(
# 289 "llburg/lburg.c" 3 4
                  __builtin_va_arg(
# 289 "llburg/lburg.c"
                  ap
# 289 "llburg/lburg.c" 3 4
                  ,
# 289 "llburg/lburg.c"
                  char *
# 289 "llburg/lburg.c" 3 4
                  )
# 289 "llburg/lburg.c"
                                    , outfp); break;
   case 'P': fprintf(outfp, "%s_", prefix); break;
   case 'T': {
    Tree t = 
# 292 "llburg/lburg.c" 3 4
            __builtin_va_arg(
# 292 "llburg/lburg.c"
            ap
# 292 "llburg/lburg.c" 3 4
            ,
# 292 "llburg/lburg.c"
            Tree
# 292 "llburg/lburg.c" 3 4
            )
# 292 "llburg/lburg.c"
                            ;
    print("%S", t->op);
    if (t->left && t->right)
     print("(%T,%T)", t->left, t->right);
    else if (t->left)
     print("(%T)", t->left);
    break;
    }
   case 'R': {
    Rule r = 
# 301 "llburg/lburg.c" 3 4
            __builtin_va_arg(
# 301 "llburg/lburg.c"
            ap
# 301 "llburg/lburg.c" 3 4
            ,
# 301 "llburg/lburg.c"
            Rule
# 301 "llburg/lburg.c" 3 4
            )
# 301 "llburg/lburg.c"
                            ;
    print("%S: %T", r->lhs, r->pattern);
    break;
    }
   case 'S': {
    Term t = 
# 306 "llburg/lburg.c" 3 4
            __builtin_va_arg(
# 306 "llburg/lburg.c"
            ap
# 306 "llburg/lburg.c" 3 4
            ,
# 306 "llburg/lburg.c"
            Term
# 306 "llburg/lburg.c" 3 4
            )
# 306 "llburg/lburg.c"
                            ;
    fputs(t->name, outfp);
    break;
    }
   case '1': case '2': case '3': case '4': case '5': {
    int n = *fmt - '0';
    while (n-- > 0)
     putc('\t', outfp);
    break;
    }
   default: putc(*fmt, outfp); break;
   }
  else
   putc(*fmt, outfp);
 
# 320 "llburg/lburg.c" 3 4
__builtin_va_end(
# 320 "llburg/lburg.c"
ap
# 320 "llburg/lburg.c" 3 4
)
# 320 "llburg/lburg.c"
          ;
}


static void reach(Tree t) {
 Nonterm p = t->op;

 if (p->kind == NONTERM)
  if (!p->reached)
   ckreach(p);
 if (t->left)
  reach(t->left);
 if (t->right)
  reach(t->right);
}


static void ckreach(Nonterm p) {
 Rule r;

        p->reached = 1;
 for (r = p->rules; r; r = r->decode)
  reach(r->pattern);
}


static void emitcase(Term p, int ntnumber) {
 Rule r;

 print("%1case %d: /* %S */\n", p->esn, p);
 switch (p->arity) {
 case 0: case -1:
  break;
 case 1:
  print("%2%Plabel(LEFT_CHILD(a));\n");
  break;
 case 2:
  print("%2%Plabel(LEFT_CHILD(a));\n");
  print("%2%Plabel(RIGHT_CHILD(a));\n");
  break;
 default: 
# 360 "llburg/lburg.c" 3 4
         ((void)((
# 360 "llburg/lburg.c"
         0
# 360 "llburg/lburg.c" 3 4
         ) || (__assert_fail(
# 360 "llburg/lburg.c"
         "0"
# 360 "llburg/lburg.c" 3 4
         , "llburg/lburg.c", 360, __func__),0)))
# 360 "llburg/lburg.c"
                  ;
 }
 for (r = p->rules; r; r = r->next) {
  char *indent = "\t\t\0";
  switch (p->arity) {
  case 0: case -1:
   print("%2/* %R */\n", r);
   if (r->cost == -1) {
    print("%2c = %s;\n", r->code);
    emitrecord("\t\t", r, "c", 0);
   } else
    emitrecord("\t\t", r, r->code, 0);
   break;
  case 1:
   if (r->pattern->nterms > 1) {
    print("%2if (%1/* %R */\n", r);
    emittest(r->pattern->left, "LEFT_CHILD(a)", " ");
    print("%2) {\n");
    indent = "\t\t\t";
   } else
    print("%2/* %R */\n", r);
   if (r->pattern->nterms == 2 && r->pattern->left
   && r->pattern->right == 
# 382 "llburg/lburg.c" 3 4
                           ((void*)0)
# 382 "llburg/lburg.c"
                               )
    emitrecalc(indent, r->pattern->op, r->pattern->left->op);
   print("%sc = ", indent);
   emitcost(r->pattern->left, "LEFT_CHILD(a)");
   print("%s;\n", r->code);
   emitrecord(indent, r, "c", 0);
   if (indent[2])
    print("%2}\n");
   break;
  case 2:
   if (r->pattern->nterms > 1) {
    print("%2if (%1/* %R */\n", r);
    emittest(r->pattern->left, "LEFT_CHILD(a)",
     r->pattern->right->nterms ? " && " : " ");
    emittest(r->pattern->right, "RIGHT_CHILD(a)", " ");
    print("%2) {\n");
    indent = "\t\t\t";
   } else
    print("%2/* %R */\n", r);
   print("%sc = ", indent);
   emitcost(r->pattern->left, "LEFT_CHILD(a)");
   emitcost(r->pattern->right, "RIGHT_CHILD(a)");
   print("%s;\n", r->code);
   emitrecord(indent, r, "c", 0);
   if (indent[2])
    print("%2}\n");
   break;
  default: 
# 409 "llburg/lburg.c" 3 4
          ((void)((
# 409 "llburg/lburg.c"
          0
# 409 "llburg/lburg.c" 3 4
          ) || (__assert_fail(
# 409 "llburg/lburg.c"
          "0"
# 409 "llburg/lburg.c" 3 4
          , "llburg/lburg.c", 409, __func__),0)))
# 409 "llburg/lburg.c"
                   ;
  }
 }
 print("%2break;\n");
}


static void emitclosure(Nonterm nts) {
 Nonterm p;

 for (p = nts; p; p = p->link)
  if (p->chain)
   print("static void %Pclosure_%S(NODEPTR_TYPE, int);\n", p);
 print("\n");
 for (p = nts; p; p = p->link)
  if (p->chain) {
   Rule r;
   print("static void %Pclosure_%S(NODEPTR_TYPE a, int c) {\n"
"%1struct %Pstate *p = STATE_LABEL(a);\n", p);
   for (r = p->chain; r; r = r->chain)
    emitrecord("\t", r, "c", r->cost);
   print("}\n\n");
  }
}


static void emitcost(Tree t, char *v) {
 Nonterm p = t->op;

 if (p->kind == TERM) {
  if (t->left)
   emitcost(t->left, stringf("LEFT_CHILD(%s)", v));
  if (t->right)
   emitcost(t->right, stringf("RIGHT_CHILD(%s)", v));
 } else
  print("((struct %Pstate *)(%s->x.state))->cost[%P%S_NT] + ", v, p);
}


static void emitdefs(Nonterm nts, int ntnumber) {
 Nonterm p;

 for (p = nts; p; p = p->link)
  print("#define %P%S_NT %d\n", p, p->number);
 print("\n");
 print("static char *%Pntname[] = {\n%10,\n");
 for (p = nts; p; p = p->link)
  print("%1\"%S\",\n", p);
 print("%10\n};\n\n");
}


static void emitheader(void) {
 time_t timer = time(
# 462 "llburg/lburg.c" 3 4
                    ((void*)0)
# 462 "llburg/lburg.c"
                        );

 print("/*\ngenerated at %sby %s\n*/\n", ctime(&timer), rcsid);
 print("static void %Pkids(NODEPTR_TYPE, int, NODEPTR_TYPE[]);\n");
 print("static void %Plabel(NODEPTR_TYPE);\n");
 print("static int %Prule(void*, int);\n\n");
}


static char *computekids(Tree t, char *v, char *bp, int *ip) {
 Term p = t->op;

 if (p->kind == NONTERM) {
  sprintf(bp, "\t\tkids[%d] = %s;\n", (*ip)++, v);
  bp += strlen(bp);
 } else if (p->arity > 0) {
  bp = computekids(t->left, stringf("LEFT_CHILD(%s)", v), bp, ip);
  if (p->arity == 2)
   bp = computekids(t->right, stringf("RIGHT_CHILD(%s)", v), bp, ip);
 }
 return bp;
}


static void emitkids(Rule rules, int nrules) {
 int i;
 Rule r, *rc = alloc((nrules + 1 + 1)*sizeof *rc);
 char **str = alloc((nrules + 1 + 1)*sizeof *str);

 for (i = 0, r = rules; r; r = r->link) {
  int j = 0;
  char buf[1024], *bp = buf;
  *computekids(r->pattern, "p", bp, &j) = 0;
  for (j = 0; str[j] && strcmp(str[j], buf); j++)
   ;
  if (str[j] == 
# 497 "llburg/lburg.c" 3 4
               ((void*)0)
# 497 "llburg/lburg.c"
                   )
   str[j] = strcpy(alloc(strlen(buf) + 1), buf);
  r->kids = rc[j];
  rc[j] = r;
 }
 print("static void %Pkids(NODEPTR_TYPE p, int eruleno, NODEPTR_TYPE kids[]) {\n"
"%1if (!p)\n%2fatal(\"%Pkids\", \"Null tree\\n\", 0);\n"
"%1if (!kids)\n%2fatal(\"%Pkids\", \"Null kids\\n\", 0);\n"
"%1switch (eruleno) {\n");
 for (i = 0; (r = rc[i]) != 
# 506 "llburg/lburg.c" 3 4
                           ((void*)0)
# 506 "llburg/lburg.c"
                               ; i++) {
  for ( ; r; r = r->kids)
   print("%1case %d: /* %R */\n", r->ern, r);
  print("%s%2break;\n", str[i]);
 }
 print("%1default:\n%2fatal(\"%Pkids\", \"Bad rule number %%d\\n\", eruleno);\n%1}\n}\n\n");
}


static void emitlabel(Term terms, Nonterm start, int ntnumber) {
 int i;
 Term p;

 print("static void %Plabel(NODEPTR_TYPE a) {\n%1int c;\n"
"%1struct %Pstate *p;\n\n"
"%1if (!a)\n%2fatal(\"%Plabel\", \"Null tree\\n\", 0);\n");
 print("%1STATE_LABEL(a) = p = allocate(sizeof *p, FUNC);\n"
"%1p->rule._stmt = 0;\n");
 for (i = 1; i <= ntnumber; i++)
  print("%1p->cost[%d] =\n", i);
 print("%20x7fff;\n%1switch (OP_LABEL(a)) {\n");
 for (p = terms; p; p = p->link)
  emitcase(p, ntnumber);
 print("%1default:\n"
"%2fatal(\"%Plabel\", \"Bad terminal %%d\\n\", OP_LABEL(a));\n%1}\n}\n\n");
}


static char *computents(Tree t, char *bp) {
 if (t) {
  Nonterm p = t->op;
  if (p->kind == NONTERM) {
   sprintf(bp, "%s_%s_NT, ", prefix, p->name);
   bp += strlen(bp);
  } else
   bp = computents(t->right, computents(t->left, bp));
 }
 return bp;
}


static void emitnts(Rule rules, int nrules) {
 Rule r;
 int i, j, *nts = alloc((nrules + 1)*sizeof *nts);
 char **str = alloc((nrules + 1)*sizeof *str);

 for (i = 0, r = rules; r; r = r->link) {
  char buf[1024];
  *computents(r->pattern, buf) = 0;
  for (j = 0; str[j] && strcmp(str[j], buf); j++)
   ;
  if (str[j] == 
# 557 "llburg/lburg.c" 3 4
               ((void*)0)
# 557 "llburg/lburg.c"
                   ) {
   print("static short %Pnts_%d[] = { %s0 };\n", j, buf);
   str[j] = strcpy(alloc(strlen(buf) + 1), buf);
  }
  nts[i++] = j;
 }
 print("\nstatic short *%Pnts[] = {\n");
 for (i = j = 0, r = rules; r; r = r->link) {
  for ( ; j < r->ern; j++)
   print("%10,%1/* %d */\n", j);
  print("%1%Pnts_%d,%1/* %d */\n", nts[i++], j++);
 }
 print("};\n\n");
}


static void emitrecalc(char *pre, Term root, Term kid) {
 if (root->kind == TERM && strncmp(root->name, "INDIR", 5) == 0
 && kid->kind == TERM && strcmp(kid->name, "VREGP" ) == 0) {
  Nonterm p;
  print("%sif (mayrecalc(a)) {\n", pre);
  print("%s%1struct %Pstate *q = a->syms[RX]->u.t.cse->x.state;\n", pre);
  for (p = nts; p; p = p->link) {
   print("%s%1if (q->cost[%P%S_NT] == 0) {\n", pre, p);
   print("%s%2p->cost[%P%S_NT] = 0;\n", pre, p);
   print("%s%2p->rule.%P%S = q->rule.%P%S;\n", pre, p, p);
   print("%s%1}\n", pre);
  }
  print("%s}\n", pre);
 }
}


static void emitrecord(char *pre, Rule r, char *c, int cost) {
 if (Tflag)
  print("%s%Ptrace(a, %d, %s + %d, p->cost[%P%S_NT]);\n",
   pre, r->ern, c, cost, r->lhs);
 print("%sif (", pre);
 print("%s + %d < p->cost[%P%S_NT]) {\n"
"%s%1p->cost[%P%S_NT] = %s + %d;\n%s%1p->rule.%P%S = %d;\n",
  c, cost, r->lhs, pre, r->lhs, c, cost, pre, r->lhs,
  r->packed);
 if (r->lhs->chain)
  print("%s%1%Pclosure_%S(a, %s + %d);\n", pre, r->lhs, c, cost);
 print("%s}\n", pre);
}


static void emitrule(Nonterm nts) {
 Nonterm p;

 for (p = nts; p; p = p->link) {
  Rule r;
  print("static short %Pdecode_%S[] = {\n%10,\n", p);
  for (r = p->rules; r; r = r->decode)
   print("%1%d,\n", r->ern);
  print("};\n\n");
 }
 print("static int %Prule(void *state, int goalnt) {\n"
"%1if (goalnt < 1 || goalnt > %d)\n%2fatal(\"%Prule\", \"Bad goal nonterminal %%d\\n\", goalnt);\n"
"%1if (!state)\n%2return 0;\n%1switch (goalnt) {\n", ntnumber);
 for (p = nts; p; p = p->link)
  print("%1case %P%S_NT:"
"%1return %Pdecode_%S[((struct %Pstate *)state)->rule.%P%S];\n", p, p, p);
 print("%1default:\n%2fatal(\"%Prule\", \"Bad goal nonterminal %%d\\n\", goalnt);\n%2return 0;\n%1}\n}\n\n");
}


static void emitstring(Rule rules) {
 Rule r;

 print("static char *%Ptemplates[] = {\n");
 print("/* 0 */%10,\n");
 for (r = rules; r; r = r->link)
  print("/* %d */%1\"%s\",%1/* %R */\n", r->ern, r->template, r);
 print("};\n");
 print("\nstatic char %Pisinstruction[] = {\n");
 print("/* 0 */%10,\n");
 for (r = rules; r; r = r->link) {
  int len = strlen(r->template);
  print("/* %d */%1%d,%1/* %s */\n", r->ern,
   len >= 2 && r->template[len-2] == '\\' && r->template[len-1] == 'n',
   r->template);
 }
 print("};\n");
 print("\nstatic char *%Pstring[] = {\n");
 print("/* 0 */%10,\n");
 for (r = rules; r; r = r->link)
  print("/* %d */%1\"%R\",\n", r->ern, r);
 print("};\n\n");
}


static void emitstruct(Nonterm nts, int ntnumber) {
 print("struct %Pstate {\n%1short cost[%d];\n%1struct {\n", ntnumber + 1);
 for ( ; nts; nts = nts->link) {
  int n = 1, m = nts->lhscount;
  while ((m >>= 1) != 0)
   n++;
  print("%2unsigned int %P%S:%d;\n", nts, n);
 }
 print("%1} rule;\n};\n\n");
}


static void emittest(Tree t, char *v, char *suffix) {
 Term p = t->op;

 if (p->kind == TERM) {
  print("%3%s->op == %d%s/* %S */\n", v, p->esn,
   t->nterms > 1 ? " && " : suffix, p);
  if (t->left)
   emittest(t->left, stringf("LEFT_CHILD(%s)", v),
    t->right && t->right->nterms ? " && " : suffix);
  if (t->right)
   emittest(t->right, stringf("RIGHT_CHILD(%s)", v), suffix);
 }
}
