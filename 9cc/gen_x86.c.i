# 0 "gen_x86.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "gen_x86.c"
# 1 "9cc.h" 1

# 1 "/usr/include/assert.h" 1 3 4
# 1 "/usr/include/features.h" 1 3 4
# 2 "/usr/include/assert.h" 2 3 4
# 19 "/usr/include/assert.h" 3 4

# 19 "/usr/include/assert.h" 3 4
_Noreturn void __assert_fail (const char *, const char *, int, const char *);
# 3 "9cc.h" 2
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
# 4 "9cc.h" 2
# 1 "/usr/include/stdarg.h" 1 3 4
# 10 "/usr/include/stdarg.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 334 "/usr/include/bits/alltypes.h" 3 4
typedef __builtin_va_list va_list;
# 11 "/usr/include/stdarg.h" 2 3 4
# 5 "9cc.h" 2
# 1 "/usr/include/stdbool.h" 1 3 4
# 6 "9cc.h" 2
# 1 "/usr/include/stdint.h" 1 3 4
# 20 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/alltypes.h" 1 3 4
# 63 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned long uintptr_t;
# 78 "/usr/include/bits/alltypes.h" 3 4
typedef long intptr_t;
# 104 "/usr/include/bits/alltypes.h" 3 4
typedef signed char int8_t;




typedef signed short int16_t;




typedef signed int int32_t;




typedef signed long int64_t;




typedef signed long intmax_t;




typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long uint64_t;
# 154 "/usr/include/bits/alltypes.h" 3 4
typedef unsigned long uintmax_t;
# 21 "/usr/include/stdint.h" 2 3 4

typedef int8_t int_fast8_t;
typedef int64_t int_fast64_t;

typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_fast8_t;
typedef uint64_t uint_fast64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;
# 95 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/stdint.h" 1 3 4
typedef int32_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
# 96 "/usr/include/stdint.h" 2 3 4
# 7 "9cc.h" 2
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



char *fgets_unlocked(char *, int, FILE *);
int fputs_unlocked(const char *, FILE *);

typedef ssize_t (cookie_read_function_t)(void *, char *, size_t);
typedef ssize_t (cookie_write_function_t)(void *, const char *, size_t);
typedef int (cookie_seek_function_t)(void *, off_t *, int);
typedef int (cookie_close_function_t)(void *);

typedef struct _IO_cookie_io_functions_t {
 cookie_read_function_t *read;
 cookie_write_function_t *write;
 cookie_seek_function_t *seek;
 cookie_close_function_t *close;
} cookie_io_functions_t;

FILE *fopencookie(void *, const char *, cookie_io_functions_t);
# 24 "/usr/include/fortify/stdio.h" 2 3 4
# 8 "9cc.h" 2
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



int ptsname_r(int, char *, size_t);
char *ecvt(double, int, int *, int *);
char *fcvt(double, int, int *, int *);
char *gcvt(double, int, char *);
char *secure_getenv(const char *);
struct __locale_struct;
float strtof_l(const char *restrict, char **restrict, struct __locale_struct *);
double strtod_l(const char *restrict, char **restrict, struct __locale_struct *);
long double strtold_l(const char *restrict, char **restrict, struct __locale_struct *);
# 24 "/usr/include/fortify/stdlib.h" 2 3 4
# 9 "9cc.h" 2
# 1 "/usr/include/stdnoreturn.h" 1 3 4
# 10 "9cc.h" 2
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




int strverscmp (const char *, const char *);
char *strchrnul(const char *, int);
char *strcasestr(const char *, const char *);
void *memrchr(const void *, int, size_t);
void *mempcpy(void *, const void *, size_t);

char *basename();
# 24 "/usr/include/fortify/string.h" 2 3 4
# 11 "9cc.h" 2



_Noreturn 
# 14 "9cc.h"
        void error(char *fmt, ...) __attribute__((format(printf, 1, 2)));
char *format(char *fmt, ...) __attribute__((format(printf, 1, 2)));

typedef struct {
  void **data;
  int capacity;
  int len;
} Vector;

Vector *new_vec(void);
void vec_push(Vector *v, void *elem);
void vec_pushi(Vector *v, int val);
void *vec_pop(Vector *v);
void *vec_last(Vector *v);

# 28 "9cc.h" 3 4
_Bool 
# 28 "9cc.h"
    vec_contains(Vector *v, void *elem);

# 29 "9cc.h" 3 4
_Bool 
# 29 "9cc.h"
    vec_union1(Vector *v, void *elem);

typedef struct {
  Vector *keys;
  Vector *vals;
} Map;

Map *new_map(void);
void map_put(Map *map, char *key, void *val);
void map_puti(Map *map, char *key, int val);
void *map_get(Map *map, char *key);
int map_geti(Map *map, char *key, int default_);

# 41 "9cc.h" 3 4
_Bool 
# 41 "9cc.h"
    map_exists(Map *map, char *key);

typedef struct {
  char *data;
  int capacity;
  int len;
} StringBuilder;

StringBuilder *new_sb(void);
void sb_add(StringBuilder *sb, char c);
void sb_append(StringBuilder *sb, char *s);
void sb_append_n(StringBuilder *sb, char *s, int len);
char *sb_get(StringBuilder *sb);

typedef struct Type Type;

typedef struct Type {
  int ty;
  int size;
  int align;


  Type *ptr_to;


  Type *ary_of;
  int len;


  Map *members;
  int offset;


  Type *returning;
} Type;

Type *ptr_to(Type *base);
Type *ary_of(Type *base, int len);
Type *void_ty();
Type *bool_ty();
Type *char_ty();
Type *int_ty();
Type *func_ty(Type *returning);

# 84 "9cc.h" 3 4
_Bool 
# 84 "9cc.h"
    same_type(Type *x, Type *y);
int roundup(int x, int align);



void util_test();



enum {
  TK_NUM = 256,
  TK_STR,
  TK_IDENT,
  TK_ARROW,
  TK_EXTERN,
  TK_TYPEDEF,
  TK_INT,
  TK_CHAR,
  TK_VOID,
  TK_STRUCT,
  TK_BOOL,
  TK_IF,
  TK_ELSE,
  TK_FOR,
  TK_DO,
  TK_WHILE,
  TK_SWITCH,
  TK_CASE,
  TK_BREAK,
  TK_CONTINUE,
  TK_EQ,
  TK_NE,
  TK_LE,
  TK_GE,
  TK_LOGOR,
  TK_LOGAND,
  TK_SHL,
  TK_SHR,
  TK_INC,
  TK_DEC,
  TK_MUL_EQ,
  TK_DIV_EQ,
  TK_MOD_EQ,
  TK_ADD_EQ,
  TK_SUB_EQ,
  TK_SHL_EQ,
  TK_SHR_EQ,
  TK_AND_EQ,
  TK_XOR_EQ,
  TK_OR_EQ,
  TK_RETURN,
  TK_SIZEOF,
  TK_ALIGNOF,
  TK_TYPEOF,
  TK_PARAM,
  TK_EOF,
};


typedef struct {
  int ty;
  int val;
  char *name;


  char *str;
  char len;


  
# 153 "9cc.h" 3 4
 _Bool 
# 153 "9cc.h"
      stringize;


  char *buf;
  char *path;
  char *start;
  char *end;
} Token;

Vector *tokenize(char *path, 
# 162 "9cc.h" 3 4
                            _Bool 
# 162 "9cc.h"
                                 add_eof);

# 163 "9cc.h" 3 4
_Noreturn 
# 163 "9cc.h"
        void bad_token(Token *t, char *msg);
void warn_token(Token *t, char *msg);
int get_line_number(Token *t);
char *stringize(Vector *tokens);



Vector *preprocess(Vector *tokens);



extern int nlabel;

enum {
  ND_NUM = 256,
  ND_STRUCT,
  ND_DECL,
  ND_VARDEF,
  ND_VARREF,
  ND_CAST,
  ND_IF,
  ND_FOR,
  ND_DO_WHILE,
  ND_SWITCH,
  ND_CASE,
  ND_BREAK,
  ND_CONTINUE,
  ND_ADDR,
  ND_DEREF,
  ND_DOT,
  ND_EQ,
  ND_NE,
  ND_LE,
  ND_LOGAND,
  ND_LOGOR,
  ND_SHL,
  ND_SHR,
  ND_MOD,
  ND_RETURN,
  ND_CALL,
  ND_FUNC,
  ND_COMP_STMT,
  ND_EXPR_STMT,
  ND_STMT_EXPR,
  ND_NULL,
};

enum {
  VOID = 1,
  BOOL,
  CHAR,
  INT,
  PTR,
  ARY,
  STRUCT,
  FUNC,
};

typedef struct Reg Reg;


typedef struct {
  Type *ty;
  char *name;
  
# 227 "9cc.h" 3 4
 _Bool 
# 227 "9cc.h"
      is_local;


  int offset;



  char *data;


  
# 237 "9cc.h" 3 4
 _Bool 
# 237 "9cc.h"
      address_taken;
  Reg *promoted;
} Var;

typedef struct Node Node;
typedef struct BB BB;


typedef struct Node {
  int op;
  Type *ty;
  Node *lhs;
  Node *rhs;
  int val;
  Node *expr;
  Vector *stmts;

  char *name;


  Var *var;







  Node *cond;
  Node *then;
  Node *els;
  Node *init;
  Node *inc;
  Node *body;


  Vector *cases;
  BB *bb;


  Node *target;
  BB *break_;
  BB *continue_;


  Vector *params;


  Vector *args;


  Token *token;
} Node;

typedef struct {
  char *name;
  Node *node;
  Vector *lvars;
  Vector *bbs;
} Function;


typedef struct {
  Vector *gvars;
  Vector *funcs;
} Program;

Program *parse(Vector *tokens);

Node *new_int_node(int val, Token *t);



Type *get_type(Node *node);
void sema(Program *prog);



void dump_ir(Vector *irv);



enum {
  IR_ADD = 1,
  IR_SUB,
  IR_MUL,
  IR_DIV,
  IR_IMM,
  IR_BPREL,
  IR_MOV,
  IR_RETURN,
  IR_CALL,
  IR_LABEL_ADDR,
  IR_EQ,
  IR_NE,
  IR_LE,
  IR_LT,
  IR_AND,
  IR_OR,
  IR_XOR,
  IR_SHL,
  IR_SHR,
  IR_MOD,
  IR_JMP,
  IR_BR,
  IR_LOAD,
  IR_LOAD_SPILL,
  IR_STORE,
  IR_STORE_ARG,
  IR_STORE_SPILL,
  IR_NOP,
};

typedef struct Reg {
  int vn;
  int rn;


  Reg *promoted;


  int def;
  int last_use;
  
# 360 "9cc.h" 3 4
 _Bool 
# 360 "9cc.h"
      spill;
  Var *var;
} Reg;

typedef struct BB {
  int label;
  Vector *ir;
  Reg *param;


  Vector *succ;
  Vector *pred;
  Vector *def_regs;
  Vector *in_regs;
  Vector *out_regs;
} BB;

typedef struct {
  int op;

  Reg *r0;
  Reg *r1;
  Reg *r2;

  int imm;
  int label;
  Var *var;

  BB *bb1;
  BB *bb2;


  int size;


  char *name;
  int nargs;
  Reg *args[6];


  Vector *kill;


  Reg *bbarg;
} IR;

void gen_ir(Program *prog);
Reg *new_reg();



void optimize(Program *prog);



void liveness(Program *prog);



void liveness(Program *prog);



void alloc_regs(Program *prog);



extern char *regs[];
extern char *regs8[];
extern char *regs32[];
extern int num_regs;

void gen_x86(Program *prog);
# 2 "gen_x86.c" 2



char *regs[] = {"r10", "r11", "rbx", "r12", "r13", "r14", "r15"};
char *regs8[] = {"r10b", "r11b", "bl", "r12b", "r13b", "r14b", "r15b"};
char *regs32[] = {"r10d", "r11d", "ebx", "r12d", "r13d", "r14d", "r15d"};

int num_regs = sizeof(regs) / sizeof(*regs);

static char *argregs[] = {"rdi", "rsi", "rdx", "rcx", "r8", "r9"};
static char *argregs8[] = {"dil", "sil", "dl", "cl", "r8b", "r9b"};
static char *argregs32[] = {"edi", "esi", "edx", "ecx", "r8d", "r9d"};

__attribute__((format(printf, 1, 2))) static void p(char *fmt, ...);
__attribute__((format(printf, 1, 2))) static void emit(char *fmt, ...);

static void p(char *fmt, ...) {
  va_list ap;
  
# 20 "gen_x86.c" 3 4
 __builtin_va_start(
# 20 "gen_x86.c"
 ap
# 20 "gen_x86.c" 3 4
 ,
# 20 "gen_x86.c"
 fmt
# 20 "gen_x86.c" 3 4
 )
# 20 "gen_x86.c"
                  ;
  vprintf(fmt, ap);
  printf("\n");
}

static void emit(char *fmt, ...) {
  va_list ap;
  
# 27 "gen_x86.c" 3 4
 __builtin_va_start(
# 27 "gen_x86.c"
 ap
# 27 "gen_x86.c" 3 4
 ,
# 27 "gen_x86.c"
 fmt
# 27 "gen_x86.c" 3 4
 )
# 27 "gen_x86.c"
                  ;
  printf("\t");
  vprintf(fmt, ap);
  printf("\n");
}

static void emit_cmp(char *insn, IR *ir) {
  int r0 = ir->r0->rn;
  int r1 = ir->r1->rn;
  int r2 = ir->r2->rn;

  emit("cmp %s, %s", regs[r1], regs[r2]);
  emit("%s %s", insn, regs8[r0]);
  emit("movzb %s, %s", regs[r0], regs8[r0]);
}

static char *reg(int r, int size) {
  if (size == 1)
    return regs8[r];
  if (size == 4)
    return regs32[r];
  
# 48 "gen_x86.c" 3 4
 ((void)((
# 48 "gen_x86.c"
 size == 8
# 48 "gen_x86.c" 3 4
 ) || (__assert_fail(
# 48 "gen_x86.c"
 "size == 8"
# 48 "gen_x86.c" 3 4
 , "gen_x86.c", 48, __func__),0)))
# 48 "gen_x86.c"
                  ;
  return regs[r];
}

static char *argreg(int r, int size) {
  if (size == 1)
    return argregs8[r];
  if (size == 4)
    return argregs32[r];
  
# 57 "gen_x86.c" 3 4
 ((void)((
# 57 "gen_x86.c"
 size == 8
# 57 "gen_x86.c" 3 4
 ) || (__assert_fail(
# 57 "gen_x86.c"
 "size == 8"
# 57 "gen_x86.c" 3 4
 , "gen_x86.c", 57, __func__),0)))
# 57 "gen_x86.c"
                  ;
  return argregs[r];
}

static void emit_ir(IR *ir, char *ret) {
  int r0 = ir->r0 ? ir->r0->rn : 0;
  int r1 = ir->r1 ? ir->r1->rn : 0;
  int r2 = ir->r2 ? ir->r2->rn : 0;

  switch (ir->op) {
  case IR_IMM:
    emit("mov %s, %d", regs[r0], ir->imm);
    break;
  case IR_BPREL:
    emit("lea %s, [rbp%d]", regs[r0], ir->var->offset);
    break;
  case IR_MOV:
    emit("mov %s, %s", regs[r0], regs[r2]);
    break;
  case IR_RETURN:
    emit("mov rax, %s", regs[r2]);
    emit("jmp %s", ret);
    break;
  case IR_CALL:
    for (int i = 0; i < ir->nargs; i++)
      emit("mov %s, %s", argregs[i], regs[ir->args[i]->rn]);

    emit("push r10");
    emit("push r11");
    emit("mov rax, 0");
    emit("call %s", ir->name);
    emit("pop r11");
    emit("pop r10");
    emit("mov %s, rax", regs[r0]);
    break;
  case IR_LABEL_ADDR:
    emit("lea %s, %s", regs[r0], ir->name);
    break;
  case IR_EQ:
    emit_cmp("sete", ir);
    break;
  case IR_NE:
    emit_cmp("setne", ir);
    break;
  case IR_LT:
    emit_cmp("setl", ir);
    break;
  case IR_LE:
    emit_cmp("setle", ir);
    break;
  case IR_AND:
    emit("and %s, %s", regs[r0], regs[r2]);
    break;
  case IR_OR:
    emit("or %s, %s", regs[r0], regs[r2]);
    break;
  case IR_XOR:
    emit("xor %s, %s", regs[r0], regs[r2]);
    break;
  case IR_SHL:
    emit("mov cl, %s", regs8[r2]);
    emit("shl %s, cl", regs[r0]);
    break;
  case IR_SHR:
    emit("mov cl, %s", regs8[r2]);
    emit("shr %s, cl", regs[r0]);
    break;
  case IR_JMP:
    if (ir->bbarg)
      emit("mov %s, %s", regs[ir->bb1->param->rn], regs[ir->bbarg->rn]);
    emit("jmp .L%d", ir->bb1->label);
    break;
  case IR_BR:
    emit("cmp %s, 0", regs[r2]);
    emit("jne .L%d", ir->bb1->label);
    emit("jmp .L%d", ir->bb2->label);
    break;
  case IR_LOAD:
    emit("mov %s, [%s]", reg(r0, ir->size), regs[r2]);
    if (ir->size == 1)
      emit("movzb %s, %s", regs[r0], regs8[r0]);
    break;
  case IR_LOAD_SPILL:
    emit("mov %s, [rbp%d]", regs[r0], ir->var->offset);
    break;
  case IR_STORE:
    emit("mov [%s], %s", regs[r1], reg(r2, ir->size));
    break;
  case IR_STORE_ARG:
    emit("mov [rbp%d], %s", ir->var->offset, argreg(ir->imm, ir->size));
    break;
  case IR_STORE_SPILL:
    emit("mov [rbp%d], %s", ir->var->offset, regs[r1]);
    break;
  case IR_ADD:
    emit("add %s, %s", regs[r0], regs[r2]);
    break;
  case IR_SUB:
    emit("sub %s, %s", regs[r0], regs[r2]);
    break;
  case IR_MUL:
    emit("mov rax, %s", regs[r2]);
    emit("imul %s", regs[r0]);
    emit("mov %s, rax", regs[r0]);
    break;
  case IR_DIV:
    emit("mov rax, %s", regs[r0]);
    emit("cqo");
    emit("idiv %s", regs[r2]);
    emit("mov %s, rax", regs[r0]);
    break;
  case IR_MOD:
    emit("mov rax, %s", regs[r0]);
    emit("cqo");
    emit("idiv %s", regs[r2]);
    emit("mov %s, rdx", regs[r0]);
    break;
  case IR_NOP:
    break;
  default:
    
# 177 "gen_x86.c" 3 4
   ((void)((
# 177 "gen_x86.c"
   0 && "unknown operator"
# 177 "gen_x86.c" 3 4
   ) || (__assert_fail(
# 177 "gen_x86.c"
   "0 && \"unknown operator\""
# 177 "gen_x86.c" 3 4
   , "gen_x86.c", 177, __func__),0)))
# 177 "gen_x86.c"
                                  ;
  }
}

void emit_code(Function *fn) {

  int off = 0;
  for (int i = 0; i < fn->lvars->len; i++) {
    Var *var = fn->lvars->data[i];
    off += var->ty->size;
    off = roundup(off, var->ty->align);
    var->offset = -off;
  }


  char *ret = format(".Lend%d", nlabel++);

  p(".text");
  p(".global %s", fn->name);
  p("%s:", fn->name);
  emit("push rbp");
  emit("mov rbp, rsp");
  emit("sub rsp, %d", roundup(off, 16));
  emit("push r12");
  emit("push r13");
  emit("push r14");
  emit("push r15");

  for (int i = 0; i < fn->bbs->len; i++) {
    BB *bb = fn->bbs->data[i];
    p(".L%d:", bb->label);
    for (int i = 0; i < bb->ir->len; i++) {
      IR *ir = bb->ir->data[i];
      emit_ir(ir, ret);
    }
  }

  p("%s:", ret);
  emit("pop r15");
  emit("pop r14");
  emit("pop r13");
  emit("pop r12");
  emit("mov rsp, rbp");
  emit("pop rbp");
  emit("ret");
}

static char *backslash_escape(char *s, int len) {
  static char escaped[256] = {
          ['\b'] = 'b', ['\f'] = 'f', ['\n'] = 'n', ['\r'] = 'r',
          ['\t'] = 't', ['\\'] = '\\', ['\''] = '\'', ['"'] = '"',
  };

  StringBuilder *sb = new_sb();
  for (int i = 0; i < len; i++) {
    uint8_t c = s[i];
    char esc = escaped[c];
    if (esc) {
      sb_add(sb, '\\');
      sb_add(sb, esc);
    } else if (
# 237 "gen_x86.c" 3 4
              (0 ? isgraph(
# 237 "gen_x86.c"
              c
# 237 "gen_x86.c" 3 4
              ) : ((unsigned)(
# 237 "gen_x86.c"
              c
# 237 "gen_x86.c" 3 4
              )-0x21) < 0x5e) 
# 237 "gen_x86.c"
                         || c == ' ') {
      sb_add(sb, c);
    } else {
      sb_append(sb, format("\\%03o", c));
    }
  }
  return sb_get(sb);
}

static void emit_data(Var *var) {
  if (var->data) {
    p(".data");
    p("%s:", var->name);
    emit(".ascii \"%s\"", backslash_escape(var->data, var->ty->size));
    return;
  }

  p(".bss");
  p("%s:", var->name);
  emit(".zero %d", var->ty->size);
}

void gen_x86(Program *prog) {
  p(".intel_syntax noprefix");

  for (int i = 0; i < prog->gvars->len; i++)
    emit_data(prog->gvars->data[i]);

  for (int i = 0; i < prog->funcs->len; i++)
    emit_code(prog->funcs->data[i]);
}
