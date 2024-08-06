# 0 "token.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "token.c"
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
# 2 "token.c" 2

typedef struct Env {
  char *path;
  char *buf;
  Vector *tokens;
  struct Env *prev;
} Env;

static Env *env;
static Map *keywords;

static FILE *open_file(char *path) {
  if (!strcmp(path, "-"))
    return 
# 15 "token.c" 3 4
          (stdin)
# 15 "token.c"
               ;

  FILE *fp = fopen(path, "r");
  if (!fp) {
    perror(path);
    exit(1);
  }
  return fp;
}

static char *read_file(FILE *fp) {
  StringBuilder *sb = new_sb();
  char buf[4096];
  for (;;) {
    int nread = fread(buf, 1, sizeof(buf), fp);
    if (nread == 0)
      break;
    sb_append_n(sb, buf, nread);
  }



  sb_append(sb, "\n\n");
  return sb_get(sb);
}

static Env *new_env(Env *prev, char *path, char *buf) {
  Env *env = calloc(1, sizeof(Env));
  env->path = strcmp(path, "-") ? path : "(stdin)";
  env->buf = buf;
  env->tokens = new_vec();
  env->prev = prev;
  return env;
}


static 
# 51 "token.c" 3 4
      _Bool 
# 51 "token.c"
           startswith(char *s1, char *s2) {
  return !strncmp(s1, s2, strlen(s2));
}





static void print_line(char *buf, char *path, char *pos) {
  char *start = buf;
  int line = 0;
  int col = 0;

  for (char *p = buf; p; p++) {
    if (*p == '\n') {
      start = p + 1;
      line++;
      col = 0;
      continue;
    }

    if (p != pos) {
      col++;
      continue;
    }

    fprintf(
# 77 "token.c" 3 4
           (stderr)
# 77 "token.c"
                 , "error at %s:%d:%d\n\n", path, line + 1, col + 1);


    int linelen = strchr(p, '\n') - start;
    fprintf(
# 81 "token.c" 3 4
           (stderr)
# 81 "token.c"
                 , "%.*s\n", linelen, start);



    for (int i = 0; i < col; i++)
      fprintf(
# 86 "token.c" 3 4
             (stderr)
# 86 "token.c"
                   , (start[i] == '\t') ? "\t" : " ");

    fprintf(
# 88 "token.c" 3 4
           (stderr)
# 88 "token.c"
                 , "^\n\n");
    return;
  }
}

void warn_token(Token *t, char *msg) {
  if (t->start)
    print_line(t->buf, t->path, t->start);
  fprintf(
# 96 "token.c" 3 4
         (stderr)
# 96 "token.c"
               , msg);
  fprintf(
# 97 "token.c" 3 4
         (stderr)
# 97 "token.c"
               , "\n");
}


# 100 "token.c" 3 4
_Noreturn 
# 100 "token.c"
        void bad_token(Token *t, char *msg) {
  warn_token(t, msg);
  exit(1);
}


# 105 "token.c" 3 4
_Noreturn 
# 105 "token.c"
        static void bad_position(char *p, char *msg) {
  print_line(env->buf, env->path, p);
  error(msg);
}

int get_line_number(Token *t) {
  int n = 0;
  for (char *p = t->buf; p < t->end; p++)
    if (*p == '\n')
      n++;
  return n;
}



static 
# 120 "token.c" 3 4
      _Bool 
# 120 "token.c"
           need_space(Token *t) {
  char *s = t->start;
  if (t->buf <= s - 1 && 
# 122 "token.c" 3 4
                        __isspace(
# 122 "token.c"
                        s[-1]
# 122 "token.c" 3 4
                        )
# 122 "token.c"
                                      )
    return 
# 123 "token.c" 3 4
          1
# 123 "token.c"
              ;
  return t->buf <= s - 2 && startswith(s - 2, "*/");
}


char *stringize(Vector *tokens) {
  StringBuilder *sb = new_sb();

  for (int i = 0; i < tokens->len; i++) {
    Token *t = tokens->data[i];
    if (t->ty == '\n')
      continue;
    if (i > 0 && need_space(t))
      sb_add(sb, ' ');

    
# 138 "token.c" 3 4
   ((void)((
# 138 "token.c"
   t->start && t->end
# 138 "token.c" 3 4
   ) || (__assert_fail(
# 138 "token.c"
   "t->start && t->end"
# 138 "token.c" 3 4
   , "token.c", 138, __func__),0)))
# 138 "token.c"
                             ;
    sb_append_n(sb, t->start, t->end - t->start);
  }
  return sb_get(sb);
}






static Token *add(int ty, char *start) {
  Token *t = calloc(1, sizeof(Token));
  t->ty = ty;
  t->start = start;
  t->path = env->path;
  t->buf = env->buf;
  vec_push(env->tokens, t);
  return t;
}

static struct {
  char *name;
  int ty;
} symbols[] = {
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

static Map *keyword_map() {
  Map *map = new_map();
  map_puti(map, "_Alignof", TK_ALIGNOF);
  map_puti(map, "_Bool", TK_BOOL);
  map_puti(map, "break", TK_BREAK);
  map_puti(map, "case", TK_CASE);
  map_puti(map, "char", TK_CHAR);
  map_puti(map, "continue", TK_CONTINUE);
  map_puti(map, "do", TK_DO);
  map_puti(map, "else", TK_ELSE);
  map_puti(map, "extern", TK_EXTERN);
  map_puti(map, "for", TK_FOR);
  map_puti(map, "if", TK_IF);
  map_puti(map, "int", TK_INT);
  map_puti(map, "return", TK_RETURN);
  map_puti(map, "sizeof", TK_SIZEOF);
  map_puti(map, "struct", TK_STRUCT);
  map_puti(map, "switch", TK_SWITCH);
  map_puti(map, "typedef", TK_TYPEDEF);
  map_puti(map, "typeof", TK_TYPEOF);
  map_puti(map, "void", TK_VOID);
  map_puti(map, "while", TK_WHILE);
  return map;
}

static char *block_comment(char *pos) {
  for (char *p = pos + 2; *p; p++)
    if (startswith(p, "*/"))
      return p + 2;
  bad_position(pos, "unclosed comment");
}

static int isoctal(char c) {
  return '0' <= c && c <= '7';
}

static int hex(char c) {
  if ('0' <= c && c <= '9')
    return c - '0';
  if ('a' <= c && c <= 'f')
    return c - 'a' + 10;
  
# 214 "token.c" 3 4
 ((void)((
# 214 "token.c"
 'A' <= c && c <= 'F'
# 214 "token.c" 3 4
 ) || (__assert_fail(
# 214 "token.c"
 "'A' <= c && c <= 'F'"
# 214 "token.c" 3 4
 , "token.c", 214, __func__),0)))
# 214 "token.c"
                             ;
  return c - 'A' + 10;
}


static char *c_char(int *res, char *p) {

  if (*p != '\\') {
    *res = *p;
    return p + 1;
  }
  p++;

  static char escaped[256] = {
          ['a'] = '\a', ['b'] = '\b', ['f'] = '\f',
          ['n'] = '\n', ['r'] = '\r', ['t'] = '\t',
          ['v'] = '\v', ['e'] = '\033', ['E'] = '\033',
  };


  int esc = escaped[(uint8_t)*p];
  if (esc) {
    *res = esc;
    return p + 1;
  }


  if (*p == 'x') {
    *res = 0;
    p++;
    while (isxdigit(*p))
      *res = *res * 16 + hex(*p++);
    return p;
  }


  if (isoctal(*p)) {
    int i = *p++ - '0';
    if (isoctal(*p))
      i = i * 8 + *p++ - '0';
    if (isoctal(*p))
      i = i * 8 + *p++ - '0';
    *res = i;
    return p;
  }

  *res = *p;
  return p + 1;
}

static char *char_literal(char *p) {
  Token *t = add(TK_NUM, p++);
  p = c_char(&t->val, p);
  if (*p != '\'')
    bad_token(t, "unclosed character literal");
  t->end = p + 1;
  return p + 1;
}

static char *string_literal(char *p) {
  Token *t = add(TK_STR, p++);
  StringBuilder *sb = new_sb();

  while (*p != '"') {
    if (!*p)
      bad_token(t, "unclosed string literal");
    int c;
    p = c_char(&c, p);
    sb_add(sb, c);
  }

  t->str = sb_get(sb);
  t->len = sb->len;
  t->end = p + 1;
  return p + 1;
}

static char *ident(char *p) {
  int len = 1;
  while (
# 293 "token.c" 3 4
        (0 ? isalpha(
# 293 "token.c"
        p[len]
# 293 "token.c" 3 4
        ) : (((unsigned)(
# 293 "token.c"
        p[len]
# 293 "token.c" 3 4
        )|32)-'a') < 26) 
# 293 "token.c"
                        || 
# 293 "token.c" 3 4
                           (0 ? isdigit(
# 293 "token.c"
                           p[len]
# 293 "token.c" 3 4
                           ) : ((unsigned)(
# 293 "token.c"
                           p[len]
# 293 "token.c" 3 4
                           )-'0') < 10) 
# 293 "token.c"
                                           || p[len] == '_')
    len++;

  char *name = strndup(p, len);
  int ty = map_geti(keywords, name, TK_IDENT);
  Token *t = add(ty, p);
  t->name = name;
  t->end = p + len;
  return p + len;
}

static char *hexadecimal(char *p) {
  Token *t = add(TK_NUM, p);
  p += 2;

  if (!isxdigit(*p))
    bad_token(t, "bad hexadecimal number");

  while (isxdigit(*p))
    t->val = t->val * 16 + hex(*p++);
  t->end = p;
  return p;
}

static char *octal(char *p) {
  Token *t = add(TK_NUM, p++);
  while (isoctal(*p))
    t->val = t->val * 8 + *p++ - '0';
  t->end = p;
  return p;
}

static char *decimal(char *p) {
  Token *t = add(TK_NUM, p);
  while (
# 327 "token.c" 3 4
        (0 ? isdigit(
# 327 "token.c"
        *p
# 327 "token.c" 3 4
        ) : ((unsigned)(
# 327 "token.c"
        *p
# 327 "token.c" 3 4
        )-'0') < 10)
# 327 "token.c"
                   )
    t->val = t->val * 10 + *p++ - '0';
  t->end = p;
  return p;
}

static char *number(char *p) {
  if (startswith(p, "0x") || startswith(p, "0X"))
    return hexadecimal(p);
  if (*p == '0')
    return octal(p);
  return decimal(p);
}

static void scan() {
  char *p = env->buf;

loop:
  while (*p) {

    if (*p == '\n') {
      Token *t = add(*p, p);
      p++;
      t->end = p;
      continue;
    }


    if (
# 355 "token.c" 3 4
       __isspace(
# 355 "token.c"
       *p
# 355 "token.c" 3 4
       )
# 355 "token.c"
                  ) {
      p++;
      continue;
    }


    if (startswith(p, "//")) {
      while (*p && *p != '\n')
        p++;
      continue;
    }


    if (startswith(p, "/*")) {
      p = block_comment(p);
      continue;
    }


    if (*p == '\'') {
      p = char_literal(p);
      continue;
    }


    if (*p == '"') {
      p = string_literal(p);
      continue;
    }


    for (int i = 0; symbols[i].name; i++) {
      char *name = symbols[i].name;
      if (!startswith(p, name))
        continue;

      Token *t = add(symbols[i].ty, p);
      p += strlen(name);
      t->end = p;
      goto loop;
    }


    if (strchr("+-*/;=(),{}<>[]&.!?:|^%~#", *p)) {
      Token *t = add(*p, p);
      p++;
      t->end = p;
      continue;
    }


    if (
# 406 "token.c" 3 4
       (0 ? isalpha(
# 406 "token.c"
       *p
# 406 "token.c" 3 4
       ) : (((unsigned)(
# 406 "token.c"
       *p
# 406 "token.c" 3 4
       )|32)-'a') < 26) 
# 406 "token.c"
                   || *p == '_') {
      p = ident(p);
      continue;
    }


    if (
# 412 "token.c" 3 4
       (0 ? isdigit(
# 412 "token.c"
       *p
# 412 "token.c" 3 4
       ) : ((unsigned)(
# 412 "token.c"
       *p
# 412 "token.c" 3 4
       )-'0') < 10)
# 412 "token.c"
                  ) {
      p = number(p);
      continue;
    }

    bad_position(p, "cannot tokenize");
  }
}

static void replace_crlf(char *p) {
  for (char *q = p; *q;) {
    if (startswith(q, "\r\n"))
      q++;
    *p++ = *q++;
  }
  *p = '\0';
}



static void remove_backslash_newline(char *p) {
  int cnt = 0;
  for (char *q = p; *q;) {
    if (startswith(q, "\\\n")) {
      cnt++;
      q += 2;
      continue;
    }
    if (*q == '\n') {
      for (int i = 0; i < cnt + 1; i++)
        *p++ = '\n';
      q++;
      cnt = 0;
      continue;
    }
    *p++ = *q++;
  }
  *p = '\0';
}

static Vector *strip_newline_tokens(Vector *tokens) {
  Vector *v = new_vec();
  for (int i = 0; i < tokens->len; i++) {
    Token *t = tokens->data[i];
    if (t->ty != '\n')
      vec_push(v, t);
  }
  return v;
}

static void append(Token *x, Token *y) {
  StringBuilder *sb = new_sb();
  sb_append_n(sb, x->str, x->len - 1);
  sb_append_n(sb, y->str, y->len - 1);
  x->str = sb_get(sb);
  x->len = sb->len;
}

static Vector *join_string_literals(Vector *tokens) {
  Vector *v = new_vec();
  Token *last = 
# 472 "token.c" 3 4
               ((void*)0)
# 472 "token.c"
                   ;

  for (int i = 0; i < tokens->len; i++) {
    Token *t = tokens->data[i];
    if (last && last->ty == TK_STR && t->ty == TK_STR) {
      append(last, t);
      continue;
    }

    last = t;
    vec_push(v, t);
  }
  return v;
}

Vector *tokenize(char *path, 
# 487 "token.c" 3 4
                            _Bool 
# 487 "token.c"
                                 add_eof) {
  if (!keywords)
    keywords = keyword_map();

  FILE *fp = open_file(path);
  char *buf = read_file(fp);
  replace_crlf(buf);
  remove_backslash_newline(buf);

  env = new_env(env, path, buf);
  scan();
  if (add_eof)
    add(TK_EOF, 
# 499 "token.c" 3 4
               ((void*)0)
# 499 "token.c"
                   );
  Vector *v = env->tokens;
  env = env->prev;

  v = preprocess(v);
  v = strip_newline_tokens(v);
  return join_string_literals(v);
}
