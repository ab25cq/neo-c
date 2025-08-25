/*
 * Minimal C (C17-ish) syntax parser using Bison.
 * - Supports basic declarations, function definitions, statements and expressions.
 * - Pair with Flex lexer in c.l and build via src/Makefile.
 */

%{
#define YYDEBUG 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ast.h"
#include "typedefs.h"

int yylex(void);
void yyerror(const char* s);
extern int yylineno;
extern char* yytext;

/* Track the most recent anonymous or nested type definition encountered in a type specifier,
   so we can attach it inline to struct/union fields. */
static struct AstNode* g_last_anon_type = NULL;
static int g_last_anon_is_anon = 0; /* 1 if last was anonymous brace form */

/* Counter for generating unique anonymous type names */
static long g_anon_counter = 1;

/* Parameter list builder for function params */
typedef struct ParamList {
  AstParam* a;
  long n;
  long cap;
} ParamList;

static ParamList* plist_new(void) {
  ParamList* p = (ParamList*)calloc(1, sizeof(ParamList));
  return p;
}
static void plist_push(ParamList* p, const char* type_name, const char* name) {
  if(!p) return;
  if(p->n == p->cap) {
    long nc = p->cap ? p->cap*2 : 4;
    AstParam* na = (AstParam*)realloc(p->a, sizeof(AstParam)*nc);
    if(!na) return;
    p->a = na;
    p->cap = nc;
  }
  p->a[p->n].type_name = type_name ? strdup(type_name) : NULL;
  p->a[p->n].name = name ? strdup(name) : NULL;
  p->n++;
}
static ParamList* plist_merge(ParamList* a, ParamList* b) {
  if(!a) return b;
  if(!b) return a;
  for(long i=0;i<b->n;i++) {
    plist_push(a, b->a[i].type_name, b->a[i].name);
  }
  if(b->a) {
    for(long i=0;i<b->n;i++) {
      free(b->a[i].type_name);
      free(b->a[i].name);
    }
    free(b->a);
  }
  free(b);
  return a;
}

/* Block item (statement) list builder */
typedef struct NodeList {
  struct AstNode** a;
  long n;
  long cap;
} NodeList;
static NodeList* nlist_new(void) {
  return (NodeList*)calloc(1, sizeof(NodeList));
}
static NodeList* nlist_from1(struct AstNode* node) {
  NodeList* nl = nlist_new();
  if(!nl) return NULL;
  if(node) {
    nl->a = (struct AstNode**)calloc(1, sizeof(struct AstNode*));
    if(nl->a) { nl->a[0] = node; nl->n = nl->cap = 1; }
  }
  return nl;
}
static void nlist_push(NodeList* nl, struct AstNode* node) {
  if(!nl || !node) return;
  if(nl->n == nl->cap) {
    long nc = nl->cap ? nl->cap*2 : 4;
    struct AstNode** na = (struct AstNode**)realloc(nl->a, sizeof(struct AstNode*)*nc);
    if(!na) return;
    nl->a = na;
    nl->cap = nc;
  }
  nl->a[nl->n++] = node;
}
static NodeList* nlist_merge(NodeList* a, NodeList* b) {
  if(!a) return b;
  if(!b) return a;
  for(long i=0;i<b->n;i++) nlist_push(a, b->a[i]);
  free(b->a);
  free(b);
  return a;
}

/* Declarator string builder for precise multi-declarations (comma-only) */
typedef struct DStr {
  char* name;
  char* pre;   /* pointer chain like ** */
  char* post;  /* suffix like [10][20] or (int, char*) */
} DStr;

static char* sjoin3(const char* a, const char* b, const char* c){
  size_t na=a?strlen(a):0, nb=b?strlen(b):0, nc=c?strlen(c):0;
  char* r=(char*)malloc(na+nb+nc+1); if(!r) return NULL; r[0]='\0';
  if(a) strcat(r,a); if(b) strcat(r,b); if(c) strcat(r,c); return r;
}
static char* sdup0x(const char* s){ if(!s) return strdup(""); size_t n=strlen(s); char* r=(char*)malloc(n+1); if(r) memcpy(r,s,n+1); return r; }
static void dstr_free(DStr* d){ if(!d) return; free(d->name); free(d->pre); free(d->post); free(d); }
static char* compose_type(const char* base, const DStr* d){
  const char* pre = (d&&d->pre)?d->pre:""; const char* post=(d&&d->post)?d->post:"";
  if(pre[0] && post[0]){ char* mid=sjoin3("(",pre,")"); char* r=sjoin3(base,mid,post); free(mid); return r; }
  return sjoin3(base, pre, post);
}
static char* array_suffix_from_expr(struct AstNode* e){
  if(e && e->kind==AST_EXPR_INT){ typedef struct { AstKind kind; int lineno; char* filename; long value; } AstExprInt; char buf[64]; snprintf(buf,sizeof(buf),"[%ld]", ((AstExprInt*)e)->value); return strdup(buf); }
  return strdup("[]");
}
static char* sappend(char* a, const char* b){ size_t na=a?strlen(a):0, nb=b?strlen(b):0; char* r=(char*)malloc(na+nb+1); if(!r) return a; if(na) memcpy(r,a,na); if(nb) memcpy(r+na,b,nb); r[na+nb]='\0'; free(a); return r; }
static char* sappend3(char* a, const char* b, const char* c){ return sappend(sappend(a,b),c); }

/* Function decl-spec accumulator (storage/qualifiers/inline + base+stars) */
typedef struct FSpec {
  char* rtype; /* return type */
  int flags;   /* AstFuncFlags bitmask */
} FSpec;

static FSpec* fspec_new_from(const char* base, const char* stars){
  FSpec* s=(FSpec*)calloc(1,sizeof(FSpec));
  if(!s) return NULL;
  size_t n=strlen(base)+strlen(stars?stars:"")+1; s->rtype=(char*)malloc(n);
  if(s->rtype){ s->rtype[0]='\0'; strcat(s->rtype, base); if(stars) strcat(s->rtype, stars); }
  return s;
}

/* 構造体フィールド一時バッファ */
typedef struct SField {
  char* base;     /* 宣言スペックから得た基本型 "unsigned long" 等 */
  struct DStr* d; /* 変数名や * や [] を含む宣言子 */
  int bitwidth;   /* 0: 通常フィールド, >0: ビットフィールド幅 */
  struct AstNode* anon_def; /* base が無名の struct/union/enum 定義を含む場合 */
} SField;

typedef struct SFieldList {
  struct SField* a;
  long n, cap;
} SFieldList;

static SFieldList* sfl_new(void){
  return (SFieldList*)calloc(1,sizeof(SFieldList));
}
static void sfl_push(SFieldList* l, struct SField f){
  if(!l) return;
  if(l->n==l->cap){
    long nc = l->cap? l->cap*2 : 8;
    struct SField* na = (struct SField*)realloc(l->a, nc*sizeof(*na));
    if(!na) return;
    l->a=na; l->cap=nc;
  }
  l->a[l->n++] = f;
}
static void sfl_free(SFieldList* l){
  if(!l) return;
  for(long i=0;i<l->n;i++){
    free(l->a[i].base);
    if(l->a[i].d) { /* DStr は専用解放 */
      free(l->a[i].d->name); free(l->a[i].d->pre); free(l->a[i].d->post); free(l->a[i].d);
    }
  }
  free(l->a); free(l);
}

/* enum enumerator temporary list */
typedef struct EnumItemTmp {
  char* name;            /* enumerator name */
  struct AstNode* value; /* optional expression (ownership passed to AST) */
} EnumItemTmp;

typedef struct EnumList {
  struct EnumItemTmp* a;
  long n, cap;
} EnumList;

static EnumList* el_new(void){ return (EnumList*)calloc(1,sizeof(EnumList)); }
static void el_push(EnumList* l, const char* name, struct AstNode* value){
  if(!l) return;
  if(l->n==l->cap){ long nc=l->cap?l->cap*2:8; struct EnumItemTmp* na=(struct EnumItemTmp*)realloc(l->a,nc*sizeof(*na)); if(!na) return; l->a=na; l->cap=nc; }
  l->a[l->n].name = name ? strdup(name) : NULL;
  l->a[l->n].value = value; /* ownership moves to AST later */
  l->n++;
}
static EnumList* el_merge(EnumList* a, EnumList* b){ if(!a) return b; if(!b) return a; for(long i=0;i<b->n;i++){ el_push(a, b->a[i].name, b->a[i].value); free(b->a[i].name); /* value owned by a now */ } free(b->a); free(b); return a; }
static void el_free_shallow(EnumList* l){ if(!l) return; if(l->a){ for(long i=0;i<l->n;i++){ free(l->a[i].name); /* value freed by owner */ } free(l->a);} free(l); }


/* helper for building multi-declarator ASTs */
static char* g_decl_base = NULL;
%}

//%define parse.trace true

%destructor { free($$); } IDENTIFIER STRING_LITERAL INTEGER_CONSTANT
FLOAT_CONSTANT CHAR_CONSTANT type_specifier type_unit star_list star_list_opt array_dims type_qualifier_seq_opt

%union {
  char* sval;
  long  ival;
  struct AstNode* node;
  struct ParamList* plist;
  struct NodeList* nlist;
  struct DStr* dstr;
  struct FSpec* fspec;
  struct SField* sfield;       /* 単一フィールド（使い回さないなら不要） */
  struct SFieldList* sflist;   /* フィールド配列 */
  struct EnumList* elist;      /* enum enumerator list */
}
%type <ival> version_opt

/* Identifiers and literals */
%token <sval> IDENTIFIER
%token <sval> TYPE_NAME
%token <sval> STRING_LITERAL
%token <sval> INTEGER_CONSTANT
%token <sval> FLOAT_CONSTANT
%token <sval> CHAR_CONSTANT

/* Keywords (subset) */
%token KW_VOID KW_CHAR KW_SHORT KW_INT KW_LONG KW_SIGNED KW_UNSIGNED KW_FLOAT KW_DOUBLE
%token KW_VERSION
%token KW_STRUCT KW_UNION KW_ENUM KW_TYPEDEF
%token KW_RETURN KW_IF KW_ELSE KW_WHILE KW_FOR KW_DO KW_SWITCH KW_CASE KW_DEFAULT KW_BREAK KW_CONTINUE KW_GOTO
%token KW_CONST KW_VOLATILE KW_RESTRICT KW_INLINE KW_EXTERN KW_STATIC KW_UNIQ
%token KW_SIZEOF

/* Punctuators and operators */
%token ELLIPSIS
%token ARROW INC DEC LSHIFT RSHIFT LE GE EQ NE LOGAND LOGOR
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN LSHIFT_ASSIGN RSHIFT_ASSIGN

%right '=' ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN LSHIFT_ASSIGN RSHIFT_ASSIGN
%right '?' ':'
%left LOGOR
%left LOGAND
%left '|' 
%left '^'
%left '&'
%left EQ NE
%left '<' '>' LE GE
%left LSHIFT RSHIFT
%left '+' '-'
%left '*' '/' '%'
%right '!' '~' INC DEC KW_SIZEOF
%left '(' ')' '[' ']' '.' ARROW

/* Precedence tweak to prefer reducing empty star_list_opt over shifting IDENTIFIER */
%nonassoc IDENTIFIER
%nonassoc PREFER_EMPTY

%type <plist> parameter_type_list_opt parameter_type_list parameter_list parameter_declaration
%type <sval> type_specifier type_unit star_list star_list_opt enum_specifier array_dims type_qualifier_seq_opt specifier_qualifier_list
%type <elist> enumerator_list_opt enumerator_list enumerator
%type <sval> fp_param_list_opt fp_param_list fp_param fp_simple_param_list
%type <fspec> func_decl_specs
%type <node> compound_statement
%type <node> statement jump_statement expression_statement
%type <node> expression assignment_expression conditional_expression logical_or_expression logical_and_expression inclusive_or_expression exclusive_or_expression and_expression equality_expression relational_expression shift_expression additive_expression multiplicative_expression unary_expression postfix_expression primary_expression constant_expression
%type <node> expression_opt assignment_expression_opt
%type <nlist> block_item_list_opt block_item_list block_item
%type <nlist> argument_expression_list_opt argument_expression_list
%type <nlist> initializer_list_opt initializer_list designation
%type <node> designator
%type <node> initializer designated_initializer
%type <dstr> sdecl sdir
%type <nlist> sdecl_list

%type <sval> struct_or_union_specifier
%type <sflist> struct_declaration_list_opt
%type <sflist> struct_declaration_list
%type <sflist> struct_declaration
%type <sflist> struct_declarator_list
%type <sflist> struct_declarator


%start translation_unit


%%

translation_unit
  : /* empty */
  | translation_unit external_declaration
  ;

/* list of simple declarators for top-level declarations; actions create AST nodes immediately using g_decl_base */
decl_sdecl_list
  : sdecl
    {
      char* t = compose_type(g_decl_base, $1);
      AstNode* d = ast_decl_new(t ? t : g_decl_base, $1->name, NULL);
      ast_add(d);
      if(t) free(t);
      dstr_free($1);
    }
  | decl_sdecl_list ',' sdecl
    {
      char* t = compose_type(g_decl_base, $3);
      AstNode* d = ast_decl_new(t ? t : g_decl_base, $3->name, NULL);
      ast_add(d);
      if(t) free(t);
      dstr_free($3);
    }
  ;

/* Optional version annotation: "version <int>" */
version_opt
  : /* empty */                 { $$ = 0; }
  | KW_VERSION INTEGER_CONSTANT  { $$ = strtol($2, NULL, 0); free($2); }
  ;

/* Put star_list_opt early so its empty reduction wins reduce/reduce
   against reducing type_specifier -> declaration_specifier in ambiguous prefixes. */
star_list_opt
  : /* empty */ %prec PREFER_EMPTY { $$ = strdup(""); }
  | star_list            { $$ = $1; }
  ;

star_list
  : '*'                  { $$ = strdup("*"); }
  | '%'                  { $$ = strdup("%"); }
  | '&'                  { $$ = strdup("&"); }
  | '`'                  { $$ = strdup("`"); }
  | star_list '*'        {
      size_t n = strlen($1) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, $1); strcat(s, "*"); }
      free($1);
      $$ = s;
    }
  | star_list '%'        {
      size_t n = strlen($1) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, $1); strcat(s, "%"); }
      free($1);
      $$ = s;
    }
  | star_list '&'        {
      size_t n = strlen($1) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, $1); strcat(s, "&"); }
      free($1);
      $$ = s;
    }
  | star_list '`'        {
      size_t n = strlen($1) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, $1); strcat(s, "`"); }
      free($1);
      $$ = s;
    }
  ;

external_declaration
  :  | type_qualifier_seq_opt type_specifier
    {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      g_decl_base = qs ? sjoin3($1, " ", $2) : sdup0x($2);
      free($1); free($2);
    }
    decl_sdecl_list ';'
    { if(g_decl_base){ free(g_decl_base); g_decl_base=NULL; } }
  declaration
  | type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER ';'
    {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, $1); strcat(t, " "); } strcat(t, $2); if($3) strcat(t, $3); }
      AstNode* d = ast_decl_new(t ? t : $2, $4, NULL);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free($1); free($2); free($3);
      ast_add(d);
    }
  | type_specifier star_list_opt IDENTIFIER ';'
    {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, NULL);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free($1); free($2);
      ast_add(d);
    }
  | func_decl_specs IDENTIFIER ';'
    {
      AstNode* d = ast_decl_new($1 && $1->rtype ? $1->rtype : "int", $2, NULL);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free($2); 
      if($1){ free($1->rtype); free($1);}
      ast_add(d);
    }
  | /* removed ambiguous multi-decl form to avoid conflicts with function definitions */
  | type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER '(' parameter_type_list_opt ')' version_opt compound_statement
    {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; if(qs){ strcat(rt, $1); strcat(rt, " "); } strcat(rt, $2); if($3) strcat(rt, $3); }
      AstFunction* f = ast_function_new($4,
        rt ? rt : $2,
        0,
        $6 ? $6->a : NULL,
        $6 ? $6->n : 0,
        $8,
        $9);
      ast_add((AstNode*)f);
      free(rt);
      free($1);
      free($2);
      free($3);
      if($6) { free($6); }
    }
  | type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER '=' assignment_expression ';'
    {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, $1); strcat(t, " "); } strcat(t, $2); if($3) strcat(t, $3); }
      AstNode* d = ast_decl_new(t ? t : $2, $4, $6);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free($1); free($2); free($3);
      ast_add(d);
    }
  | type_specifier star_list_opt IDENTIFIER '=' assignment_expression ';'
    {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $5);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free($1); free($2);
      ast_add(d);
    }
  | type_specifier star_list_opt IDENTIFIER '(' parameter_type_list_opt ')' version_opt compound_statement
    {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; strcat(rt, $1); if($2) strcat(rt, $2); }
      AstFunction* f = ast_function_new($3,
        rt ? rt : $1,
        0,
        $5 ? $5->a : NULL,
        $5 ? $5->n : 0,
        $7,
        $8);
      ast_add((AstNode*)f);
      free(rt);
      free($1);
      free($2);
      if($5) { free($5); }
    }
  | type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER '=' initializer ';'
    {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, $1); strcat(t, " "); } strcat(t, $2); if($3) strcat(t, $3); }
      AstNode* d = ast_decl_new(t ? t : $2, $4, $6);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free($1); free($2); free($3);
      ast_add(d);
    }
  | type_specifier star_list_opt IDENTIFIER '=' initializer ';'
    {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $5);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free($1); free($2);
      ast_add(d);
    }
  | type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER array_dims '=' initializer ';'
    {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + strlen($5 ? $5 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, $1); strcat(t, " "); } strcat(t, $2); if($3) strcat(t, $3); if($5) strcat(t, $5); }
      AstNode* d = ast_decl_new(t ? t : $2, $4, $7);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free($1); free($2); free($3); free($5);
      ast_add(d);
    }
  | type_specifier star_list_opt IDENTIFIER array_dims '=' initializer ';'
    {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + strlen($4 ? $4 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); if($4) strcat(t, $4); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $6);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free($1); free($2); free($4);
      ast_add(d);
    }
  | type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER '(' parameter_type_list_opt ')' version_opt ';'
    {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; if(qs){ strcat(rt, $1); strcat(rt, " "); } strcat(rt, $2); if($3) strcat(rt, $3); }
      AstFunction* f = ast_function_new($4,
        rt ? rt : $2,
        0,
        $6 ? $6->a : NULL,
        $6 ? $6->n : 0,
        $8,
        NULL);
      ast_add((AstNode*)f);
      free(rt);
      free($1);
      free($2);
      free($3);
      if($6) { free($6); }
    }
  | type_specifier star_list_opt IDENTIFIER '(' parameter_type_list_opt ')' version_opt ';'
    {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; strcat(rt, $1); if($2) strcat(rt, $2); }
      AstFunction* f = ast_function_new($3,
        rt ? rt : $1,
        0,
        $5 ? $5->a : NULL,
        $5 ? $5->n : 0,
        $7,
        NULL);
      ast_add((AstNode*)f);
      free(rt);
      free($1);
      free($2);
      if($5) { free($5); }
    }
  | func_decl_specs IDENTIFIER '(' parameter_type_list_opt ')' version_opt compound_statement
    {
      AstFunction* f = ast_function_new($2,
        $1 && $1->rtype ? $1->rtype : NULL,
        $1 ? $1->flags : 0,
        $4 ? $4->a : NULL,
        $4 ? $4->n : 0,
        $6,
        $7);
      ast_add((AstNode*)f);
      if($1){ free($1->rtype); free($1);} if($4) free($4);
    }
  | func_decl_specs IDENTIFIER '(' parameter_type_list_opt ')' version_opt ';'
    {
      AstFunction* f = ast_function_new($2,
        $1 && $1->rtype ? $1->rtype : NULL,
        $1 ? $1->flags : 0,
        $4 ? $4->a : NULL,
        $4 ? $4->n : 0,
        $6,
        NULL);
      ast_add((AstNode*)f);
      if($1){ free($1->rtype); free($1);} if($4) free($4);
    }
  | KW_TYPEDEF type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER ';'
    {
      const char* qs = ($2 && $2[0]) ? $2 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($3) + strlen($4 ? $4 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, $2); strcat(t, " "); } strcat(t, $3); if($4) strcat(t, $4); }
      int ap=0; if($4){ for(const char* s=$4; *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : $3, $5, ap);
      free(t);
      ast_add(td);
      typedef_add($5);
      free($2); free($3); free($4);
    }
  | KW_TYPEDEF type_specifier star_list_opt IDENTIFIER ';'
    {
      size_t nt = strlen($2) + strlen($3 ? $3 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, $2); if($3) strcat(t, $3); }
      int ap=0; if($3){ for(const char* s=$3; *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : $2, $4, ap);
      free(t);
      ast_add(td);
      typedef_add($4);
    }
  | KW_TYPEDEF type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER array_dims ';'
    {
      const char* qs = ($2 && $2[0]) ? $2 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($3) + strlen($4 ? $4 : "") + strlen($6 ? $6 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, $2); strcat(t, " "); } strcat(t, $3); if($4) strcat(t, $4); if($6) strcat(t, $6); }
      int ap=0; if($4){ for(const char* s=$4; *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : $3, $5, ap);
      free(t);
      free($6);
      ast_add(td);
      typedef_add($5);
      free($2); free($3); free($4);
    }
  | KW_TYPEDEF type_specifier star_list_opt IDENTIFIER array_dims ';'
    {
      size_t nt = strlen($2) + strlen($3 ? $3 : "") + strlen($5 ? $5 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, $2); if($3) strcat(t, $3); if($5) strcat(t, $5); }
      int ap=0; if($3){ for(const char* s=$3; *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : $2, $4, ap);
      free(t);
      free($5);
      ast_add(td);
      typedef_add($4);
    }
  | KW_TYPEDEF type_qualifier_seq_opt type_specifier star_list_opt '(' '*' IDENTIFIER ')' '(' fp_param_list_opt ')' ';'
    {
      const char* qs = ($2 && $2[0]) ? $2 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($3) + strlen($4 ? $4 : "") + strlen("(*)") + strlen($10 ? $10 : "()") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, $2); strcat(t, " "); } strcat(t, $3); if($4) strcat(t, $4); strcat(t, "(*)"); strcat(t, $10 ? $10 : "()"); }
      int ap=1; if($4){ for(const char* s=$4; *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : $3, $7, ap);
      free(t); free($10);
      ast_add(td);
      typedef_add($7);
      free($2); free($3); free($4);
    }
  | KW_TYPEDEF type_specifier star_list_opt '(' '*' IDENTIFIER ')' '(' fp_param_list_opt ')' ';'
    {
      size_t nt = strlen($2) + strlen($3 ? $3 : "") + strlen("(*)") + strlen($9 ? $9 : "()") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, $2); if($3) strcat(t, $3); strcat(t, "(*)"); strcat(t, $9 ? $9 : "()"); }
      int ap=1; if($3){ for(const char* s=$3; *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : $2, $6, ap);
      free(t); free($9);
      ast_add(td);
      typedef_add($6);
    }
  | KW_TYPEDEF type_qualifier_seq_opt type_specifier star_list_opt '(' '*' IDENTIFIER array_dims ')' '(' fp_param_list_opt ')' ';'
    {
      const char* qs = ($2 && $2[0]) ? $2 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($3) + strlen($4 ? $4 : "") + strlen("(*)") + strlen($11 ? $11 : "()") + strlen($8 ? $8 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, $2); strcat(t, " "); } strcat(t, $3); if($4) strcat(t, $4); strcat(t, "(*)"); strcat(t, $11 ? $11 : "()"); if($8) strcat(t, $8); }
      int ap=1; if($4){ for(const char* s=$4; *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : $3, $7, ap);
      free(t);
      free($8); free($11);
      ast_add(td);
      typedef_add($7);
      free($2); free($3); free($4);
    }
  | KW_TYPEDEF type_specifier star_list_opt '(' '*' IDENTIFIER array_dims ')' '(' fp_param_list_opt ')' ';'
    {
      size_t nt = strlen($2) + strlen($3 ? $3 : "") + strlen("(*)") + strlen($10 ? $10 : "()") + strlen($7 ? $7 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, $2); if($3) strcat(t, $3); strcat(t, "(*)"); strcat(t, $10 ? $10 : "()"); if($7) strcat(t, $7); }
      int ap=1; if($3){ for(const char* s=$3; *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : $2, $6, ap);
      free(t);
      free($7); free($10);
      ast_add(td);
      typedef_add($6);
    }
  | type_qualifier_seq_opt type_specifier sdecl ',' sdecl sdecl_list ';'
    {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      char* base = qs ? sjoin3($1, " ", $2) : sdup0x($2);
      AstNode* A = (g_last_anon_is_anon ? g_last_anon_type : NULL);
      char* t1=compose_type(base,$3); AstNode* d1=ast_decl_new(t1,$3->name,NULL); if(A){ ast_decl_attach_anon(d1, A); } free(t1); dstr_free($3); ast_add(d1);
      char* t2=compose_type(base,$5); AstNode* d2=ast_decl_new(t2,$5->name,NULL); if(A){ ast_decl_attach_anon(d2, ast_node_clone(A)); } free(t2); dstr_free($5); ast_add(d2);
      if($6){ for(long i=0;i<$6->n;i++){ DStr* ds=(DStr*)$6->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); if(A){ ast_decl_attach_anon(dn, ast_node_clone(A)); } free(tx); dstr_free(ds); ast_add(dn);} free($6->a); free($6); }
      if(A){ g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(base); free($1); free($2);
    }
  | type_specifier sdecl ',' sdecl sdecl_list ';'
    {
      char* base=$1;
      AstNode* A = (g_last_anon_is_anon ? g_last_anon_type : NULL);
      char* t1=compose_type(base,$2); AstNode* d1=ast_decl_new(t1,$2->name,NULL); if(A){ ast_decl_attach_anon(d1, A); } free(t1); dstr_free($2); ast_add(d1);
      char* t2=compose_type(base,$4); AstNode* d2=ast_decl_new(t2,$4->name,NULL); if(A){ ast_decl_attach_anon(d2, ast_node_clone(A)); } free(t2); dstr_free($4); ast_add(d2);
      if($5){ for(long i=0;i<$5->n;i++){ DStr* ds=(DStr*)$5->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); if(A){ ast_decl_attach_anon(dn, ast_node_clone(A)); } free(tx); dstr_free(ds); ast_add(dn);} free($5->a); free($5); }
      if(A){ g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(base);
    }
  | type_qualifier_seq_opt type_specifier sdecl '=' initializer ';'
    {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      char* base = qs ? sjoin3($1, " ", $2) : sdup0x($2);
      char* t=compose_type(base,$3);
      AstNode* d=ast_decl_new(t? t: base, $3->name, $5);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); dstr_free($3); free(base); free($1); free($2);
      ast_add(d);
    }
  | type_specifier sdecl '=' initializer ';'
    {
      char* base=$1;
      char* t=compose_type(base,$2);
      AstNode* d=ast_decl_new(t? t: base, $2->name, $4);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); dstr_free($2); free(base);
      ast_add(d);
    }
  | type_specifier sdecl ';'
    {
      char* base=$1;
      char* t=compose_type(base,$2);
      AstNode* d=ast_decl_new(t? t: base, $2->name, NULL);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); dstr_free($2); free(base);
      ast_add(d);
    }
  | function_definition
  | struct_or_union_specifier ';'      { free($1); if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); } g_last_anon_type=NULL; g_last_anon_is_anon=0; }
  | enum_specifier ';'                 { free($1); if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); } g_last_anon_type=NULL; g_last_anon_is_anon=0; }
  /* removed generic declaration to force explicit decl rules and avoid conflicts */

  ;

/* Accumulate storage/qualifiers/inline + base type + stars in any order (right-recursive) */
func_decl_specs
  : type_specifier star_list_opt              { $$ = fspec_new_from($1, $2); free($1); free($2); }
  | KW_EXTERN func_decl_specs                 { $$ = $2; if($$) $$->flags |= ASTF_EXTERN; }
  | KW_STATIC func_decl_specs                 { $$ = $2; if($$) $$->flags |= ASTF_STATIC; }
  | KW_CONST func_decl_specs                  { $$ = $2; if($$) $$->flags |= ASTF_CONST; }
  | KW_VOLATILE func_decl_specs               { $$ = $2; if($$) $$->flags |= ASTF_VOLATILE; }
  | KW_RESTRICT func_decl_specs               { $$ = $2; if($$) $$->flags |= ASTF_RESTRICT; }
  | KW_INLINE func_decl_specs                 { $$ = $2; if($$) $$->flags |= ASTF_INLINE; }
  | KW_UNIQ func_decl_specs                   { $$ = $2; if($$) $$->flags |= ASTF_UNIQ; }
  ;

/* Full C-style parameter lists using declaration_specifiers + smart declarator (sdecl) */
parameter_type_list_opt
  : /* empty */                     { $$ = NULL; }
  | parameter_type_list             { $$ = $1; }
  ;

parameter_type_list
  : parameter_list                  { $$ = $1; }
  | parameter_list ',' ELLIPSIS     { $$ = $1; /* variadic marker ignored in AST */ }
  ;

parameter_list
  : parameter_declaration                               { $$ = $1; }
  | parameter_list ',' parameter_declaration            { $$ = plist_merge($1, $3); }
  ;

parameter_declaration
  : type_qualifier_seq_opt type_specifier sdecl
    {
      ParamList* p = plist_new();
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      char* base = qs ? sjoin3($1, " ", $2) : sdup0x($2);
      char* t = compose_type(base, $3);
      plist_push(p, t ? t : base, $3->name);
      if(t) free(t);
      free(base);
      dstr_free($3);
      free($1); free($2);
      $$ = p;
    }
  | type_qualifier_seq_opt type_specifier
    {
      ParamList* p = plist_new();
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      char* base = qs ? sjoin3($1, " ", $2) : sdup0x($2);
      /* parameter without a name (e.g., void) */
      plist_push(p, base, NULL);
      free(base);
      free($1); free($2);
      $$ = p;
    }
  ;


/* Declarations */
declaration
  : declaration_specifiers init_declarator_list_opt
  ;
init_declarator_list_opt
  : /* empty */
  | init_declarator_list
  ;

init_declarator_list
  : init_declarator
  | init_declarator_list ',' init_declarator
  ;

init_declarator
  : declarator
  | declarator '=' assignment_expression
  | declarator '=' initializer
  ;

declaration_specifiers
  : declaration_specifier
  | declaration_specifiers declaration_specifier
  ;

declaration_specifier
  : storage_class_specifier
  | type_specifier
  | type_qualifier
  | function_specifier
  ;

storage_class_specifier
  : KW_EXTERN
  | KW_STATIC
  ;

type_qualifier
  : KW_CONST
  | KW_VOLATILE
  | KW_RESTRICT
  | KW_UNIQ
  ;

function_specifier
  : KW_INLINE
  ;

/* Types (subset) */
/* A single type unit token/construct */
type_unit
  : KW_VOID      { $$ = strdup("void"); }
  | KW_CHAR      { $$ = strdup("char"); }
  | KW_SHORT     { $$ = strdup("short"); }
  | KW_INT       { $$ = strdup("int"); }
  | KW_LONG      { $$ = strdup("long"); }
  | KW_SIGNED    { $$ = strdup("signed"); }
  | KW_UNSIGNED  { $$ = strdup("unsigned"); }
  | KW_FLOAT     { $$ = strdup("float"); }
  | KW_DOUBLE    { $$ = strdup("double"); }
  | struct_or_union_specifier { $$ = $1; }
  | KW_STRUCT '{' struct_declaration_list_opt '}'            {
      /* Generate anon_N name for anonymous struct */
      char anon_name_buf[32];
      snprintf(anon_name_buf, sizeof(anon_name_buf), "anon_%ld", g_anon_counter++);
      char* anon_name = strdup(anon_name_buf);
      char* type_name = (char*)malloc(strlen("struct ") + strlen(anon_name_buf) + 1);
      strcpy(type_name, "struct ");
      strcat(type_name, anon_name_buf);
      $$ = type_name;
      long fc = $3 ? $3->n : 0;
      AstStructField* fs = NULL;
      if(fc > 0){
        fs = (AstStructField*)calloc(fc, sizeof(*fs));
        for(long i=0;i<fc;i++){
          char* t = compose_type($3->a[i].base ? $3->a[i].base : "", $3->a[i].d);
          const char* fname = ($3->a[i].d && $3->a[i].d->name) ? $3->a[i].d->name : "";
          fs[i] = ast_struct_field_new(t ? t : "", fname, $3->a[i].bitwidth);
          fs[i].anon_def = $3->a[i].anon_def;
          free(t);
        }
      }
      AstNode* st = ast_struct_new_with(anon_name, fs, fc);
      free(anon_name);
      g_last_anon_type = st; g_last_anon_is_anon = 1; /* will be added later if not used inline */
      if($3){ sfl_free($3); }
    }
  | KW_UNION  '{' struct_declaration_list_opt '}'            {
      /* Generate anon_N name for anonymous union */
      char anon_name_buf[32];
      snprintf(anon_name_buf, sizeof(anon_name_buf), "anon_%ld", g_anon_counter++);
      char* anon_name = strdup(anon_name_buf);
      char* type_name = (char*)malloc(strlen("union ") + strlen(anon_name_buf) + 1);
      strcpy(type_name, "union ");
      strcat(type_name, anon_name_buf);
      $$ = type_name;
      long fc = $3 ? $3->n : 0;
      AstStructField* fs = NULL;
      if(fc > 0){
        fs = (AstStructField*)calloc(fc, sizeof(*fs));
        for(long i=0;i<fc;i++){
          char* t = compose_type($3->a[i].base ? $3->a[i].base : "", $3->a[i].d);
          const char* fname = ($3->a[i].d && $3->a[i].d->name) ? $3->a[i].d->name : "";
          fs[i] = ast_struct_field_new(t ? t : "", fname, $3->a[i].bitwidth);
          fs[i].anon_def = $3->a[i].anon_def;
          free(t);
        }
      }
      AstNode* un = ast_union_new_with(anon_name, fs, fc);
      free(anon_name);
      g_last_anon_type = un; g_last_anon_is_anon = 1; /* will be added later if not used inline */
      if($3){ sfl_free($3); }
    }
  | KW_STRUCT IDENTIFIER                                     { size_t n=strlen("struct ")+strlen($2)+1; $$=(char*)malloc(n); if($$){ strcpy($$,"struct "); strcat($$,$2);} free($2); }
  | KW_UNION  IDENTIFIER                                     { size_t n=strlen("union ")+strlen($2)+1;  $$=(char*)malloc(n); if($$){ strcpy($$,"union ");  strcat($$,$2);} free($2); }
  | enum_specifier            { $$ = $1; }
  | TYPE_NAME                 { $$ = $1; }
  ;

/* One or more type units, concatenated with a single space when needed.
   This allows sequences like "unsigned long", "long long", etc. */
type_specifier
  : type_unit                                 { $$ = $1; }
  | type_specifier type_unit                  {
      size_t n = strlen($1) + 1 + strlen($2) + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0] = '\0'; strcat(s, $1); strcat(s, " "); strcat(s, $2); }
      free($1); free($2);
      $$ = s;
    }
  ;

/* specifier-qualifier-list for struct/union fields */
specifier_qualifier_list
  : type_qualifier_seq_opt type_specifier     {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t n = (qs?strlen(qs)+1:0) + strlen($2) + 1;
      char* s = (char*)malloc(n);
      if(s){ s[0]='\0'; if(qs){ strcat(s,$1); strcat(s," "); } strcat(s,$2); }
      free($1); free($2);
      $$ = s;
    }
  ;

/* One or more array dimensions, concatenated like [10][20] */
array_dims
  : '[' INTEGER_CONSTANT ']' {
      size_t n = strlen($2) + 3; /* [ + num + ] + \0 */
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "["); strcat(s, $2); strcat(s, "]"); }
      free($2);
      $$ = s;
    }
  | array_dims '[' INTEGER_CONSTANT ']' {
      size_t n = strlen($1) + 1 + strlen($3) + 2 + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, $1); strcat(s, "["); strcat(s, $3); strcat(s, "]"); }
      free($1);
      free($3);
      $$ = s;
    }
  ;

struct_or_union_specifier
  : KW_STRUCT IDENTIFIER '{' struct_declaration_list_opt '}'  {
      /* return type name "struct Foo" */
      size_t n = strlen("struct ")+strlen($2)+1;
      $$ = (char*)malloc(n); if($$){ strcpy($$, "struct "); strcat($$, $2);} 
      /* build AST_STRUCT with fields */
      long fc = $4 ? $4->n : 0;
      AstStructField* fs = NULL;
      if(fc > 0){
        fs = (AstStructField*)calloc(fc, sizeof(*fs));
        for(long i=0;i<fc;i++){
          char* t = compose_type($4->a[i].base ? $4->a[i].base : "", $4->a[i].d);
          const char* fname = ($4->a[i].d && $4->a[i].d->name) ? $4->a[i].d->name : "";
          fs[i] = ast_struct_field_new(t ? t : "", fname, $4->a[i].bitwidth);
          fs[i].anon_def = $4->a[i].anon_def;
          free(t);
        }
      }
      AstNode* st = ast_struct_new_with($2, fs, fc);
      ast_add(st);
      g_last_anon_type = st; g_last_anon_is_anon = 0; /* named */
      free($2);
      if($4){ sfl_free($4); }
    }
  | KW_UNION  IDENTIFIER '{' struct_declaration_list_opt '}'  {
      size_t n = strlen("union ")+strlen($2)+1;
      $$ = (char*)malloc(n); if($$){ strcpy($$, "union "); strcat($$, $2);} 
      long fc = $4 ? $4->n : 0;
      AstStructField* fs = NULL;
      if(fc > 0){
        fs = (AstStructField*)calloc(fc, sizeof(*fs));
        for(long i=0;i<fc;i++){
          char* t = compose_type($4->a[i].base ? $4->a[i].base : "", $4->a[i].d);
          const char* fname = ($4->a[i].d && $4->a[i].d->name) ? $4->a[i].d->name : "";
          fs[i] = ast_struct_field_new(t ? t : "", fname, $4->a[i].bitwidth);
          fs[i].anon_def = $4->a[i].anon_def;
          free(t);
        }
      }
      AstNode* un = ast_union_new_with($2, fs, fc);
      ast_add(un);
      g_last_anon_type = un; g_last_anon_is_anon = 0;
      free($2);
      if($4){ sfl_free($4); }
    }
  | KW_STRUCT '{' struct_declaration_list_opt '}'            { $$ = strdup("struct"); if($3){ sfl_free($3); } }
  | KW_UNION  '{' struct_declaration_list_opt '}'            { $$ = strdup("union");  if($3){ sfl_free($3); } }
  | KW_STRUCT IDENTIFIER                                     { size_t n=strlen("struct ")+strlen($2)+1; $$=(char*)malloc(n); if($$){ strcpy($$, "struct "); strcat($$, $2);} free($2); }
  | KW_UNION  IDENTIFIER                                     { size_t n=strlen("union ")+strlen($2)+1;  $$=(char*)malloc(n); if($$){ strcpy($$, "union ");  strcat($$, $2);} free($2); }
  ;

struct_declaration_list_opt
  : /* empty */                  { $$ = sfl_new(); }
  | struct_declaration_list      { $$ = $1; }
  ;

struct_declaration_list
  : struct_declaration                       { $$ = $1 ? $1 : sfl_new(); }
  | struct_declaration_list struct_declaration
    {
      if(!$1) $$ = sfl_new(); else $$ = $1;
      if($2){
        for(long i=0;i<$2->n;i++) sfl_push($$, $2->a[i]);
        free($2->a); free($2);
      }
    }
  ;

/* 1行分: base 型 (specifier_qualifier_list) + 複数 declarator/bitfield の並び */
struct_declaration
  : specifier_qualifier_list struct_declarator_list ';'
    {
      SFieldList* out = sfl_new();
      for(long i=0;i<$2->n;i++){
        SField f = $2->a[i];
        /* 各 declarator エントリに base 型を埋める（複製） */
        f.base = $1 ? strdup($1) : strdup("");
        /* If a nested anon type was just parsed as part of the base, attach it inline */
        if(g_last_anon_type){ f.anon_def = ast_node_clone(g_last_anon_type); }
        sfl_push(out, f);
      }
      /* consume the last anon type for this specifier */
      g_last_anon_type = NULL;
      /* 右側の一時領域だけ解放 */
      free($1);
      free($2->a); free($2);
      $$ = out;
    }
  ;

/* カンマ区切りの declarator 群を SFieldList に */
struct_declarator_list
  : struct_declarator
    {
      SFieldList* l = sfl_new();
      sfl_push(l, $1->a[0]);
      free($1->a); free($1);
      $$ = l;
    }
  | struct_declarator_list ',' struct_declarator
    {
      if(!$1) $$ = sfl_new(); else $$ = $1;
      sfl_push($$, $3->a[0]);
      free($3->a); free($3);
    }
  ;

/* 単一 declarator（名前あり／ビットフィールド、の3形態）を SFieldList として返す */
struct_declarator
  : sdecl
    {
      SFieldList* l = sfl_new();
      SField f = { .base=NULL, .d=$1, .bitwidth=0, .anon_def=NULL };
      sfl_push(l, f);
      $$ = l;
    }
  | ':' constant_expression
    {
      SFieldList* l = sfl_new();
      /* 無名ビットフィールド（名前なし）。DStr は空名で用意しておく */
      DStr* d = (DStr*)calloc(1,sizeof(DStr));
      d->name = strdup(""); d->pre=strdup(""); d->post=strdup("");
      int bw = 0; if($2 && ((AstNode*)$2)->kind==AST_EXPR_INT){ typedef struct { AstKind kind; int lineno; char* filename; long value; } AstExprInt; bw=(int)((AstExprInt*)$2)->value; }
      SField f = { .base=NULL, .d=d, .bitwidth=bw, .anon_def=NULL };
      sfl_push(l, f);
      $$ = l;
    }
  | sdecl ':' constant_expression
    {
      SFieldList* l = sfl_new();
      int bw = 0; 
      if($3 && ((AstNode*)$3)->kind==AST_EXPR_INT) { 
        // Skip lineno and filename to get to value field  
        typedef struct { AstKind kind; int lineno; char* filename; long value; } AstExprIntFixed; 
        bw=(int)((AstExprIntFixed*)$3)->value;
      }
      SField f = { .base=NULL, .d=$1, .bitwidth=bw, .anon_def=NULL };
      sfl_push(l, f);
      $$ = l;
    }
  ;


enum_specifier
  : KW_ENUM IDENTIFIER '{' enumerator_list_opt '}'   {
      size_t n=strlen("enum ")+strlen($2)+1; $$=(char*)malloc(n); if($$){ strcpy($$, "enum "); strcat($$, $2);} 
      long cnt = $4 ? $4->n : 0;
      AstEnumItem* items = NULL;
      if(cnt>0){ items=(AstEnumItem*)calloc(cnt, sizeof(*items)); for(long i=0;i<cnt;i++){ items[i] = ast_enum_item_new($4->a[i].name, $4->a[i].value); free($4->a[i].name); } }
      AstNode* en = ast_enum_new_with($2, items, cnt); ast_add(en); g_last_anon_type = en; g_last_anon_is_anon = 0;
      free($2);
      if($4){ free($4->a); free($4); }
    }
  | KW_ENUM '{' enumerator_list_opt '}'              {
      /* Generate anon_N name for anonymous enum */
      char anon_name_buf[32];
      snprintf(anon_name_buf, sizeof(anon_name_buf), "anon_%ld", g_anon_counter++);
      char* anon_name = strdup(anon_name_buf);
      char* type_name = (char*)malloc(strlen("enum ") + strlen(anon_name_buf) + 1);
      strcpy(type_name, "enum ");
      strcat(type_name, anon_name_buf);
      $$ = type_name;
      long cnt = $3 ? $3->n : 0;
      AstEnumItem* items = NULL;
      if(cnt>0){ items=(AstEnumItem*)calloc(cnt, sizeof(*items)); for(long i=0;i<cnt;i++){ items[i] = ast_enum_item_new($3->a[i].name, $3->a[i].value); free($3->a[i].name); } }
      AstNode* en = ast_enum_new_with(anon_name, items, cnt); g_last_anon_type = en; g_last_anon_is_anon = 1;
      free(anon_name);
      if($3){ free($3->a); free($3); }
    }
  | KW_ENUM IDENTIFIER                               { size_t n=strlen("enum ")+strlen($2)+1; $$=(char*)malloc(n); if($$){ strcpy($$, "enum "); strcat($$, $2);} free($2); }
  ;

enumerator_list_opt
  : /* empty */                      { $$ = NULL; }
  | enumerator_list                  { $$ = $1; }
  ;

enumerator_list
  : enumerator                        { $$ = $1; }
  | enumerator_list ',' enumerator    { $$ = el_merge($1, $3); }
  ;

enumerator
  : IDENTIFIER                        { EnumList* l=el_new(); el_push(l, $1, NULL); free($1); $$=l; }
  | IDENTIFIER '=' constant_expression { EnumList* l=el_new(); el_push(l, $1, $3); free($1); $$=l; }
  ;

/* Declarators */
declarator
  : pointer_opt direct_declarator
  ;

pointer_opt
  : /* empty */
  | pointer
  ;

pointer
  : '*'
  | '*' type_qualifier
  | '*' pointer
  | '*' type_qualifier pointer
  ;

direct_declarator
  : IDENTIFIER
  | '(' declarator ')'
  | direct_declarator '[' assignment_expression_opt ']'
  | direct_declarator '(' parameter_type_list_opt ')'
  | direct_declarator '(' identifier_list_opt ')'
  ;

identifier_list_opt
  : /* empty */
  | identifier_list
  ;

identifier_list
  : IDENTIFIER
  | identifier_list ',' IDENTIFIER
    { (void)$3; }
  ;

/* For function pointer typedef text-only param list building */
fp_param_list_opt
  : /* empty */                    { $$ = strdup("()"); }
  | fp_simple_param_list           {
      size_t n = strlen($1) + 3;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "("); strcat(s, $1); strcat(s, ")"); }
      free($1);
      $$ = s;
    }
  ;

fp_simple_param_list
  : type_specifier star_list_opt {
      size_t n = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, $1); if($2) strcat(s, $2); }
      free($1); free($2);
      $$ = s;
    }
  | type_specifier star_list_opt IDENTIFIER {
      size_t n = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, $1); if($2) strcat(s, $2); }
      free($1); free($2); free($3);
      $$ = s;
    }
  | fp_simple_param_list ',' type_specifier star_list_opt {
      size_t n = strlen($1) + 2 + strlen($3) + strlen($4 ? $4 : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, $1); strcat(s, ", "); strcat(s, $3); if($4) strcat(s, $4); }
      free($1); free($3); free($4);
      $$ = s;
    }
  | fp_simple_param_list ',' type_specifier star_list_opt IDENTIFIER {
      size_t n = strlen($1) + 2 + strlen($3) + strlen($4 ? $4 : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, $1); strcat(s, ", "); strcat(s, $3); if($4) strcat(s, $4); }
      free($1); free($3); free($4); free($5);
      $$ = s;
    }
  ;

fp_param_list
  : fp_param                       { $$ = $1; }
  | fp_param_list ',' fp_param     {
      size_t n = strlen($1) + 2 + strlen($3) + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, $1); strcat(s, ", "); strcat(s, $3); }
      free($1); free($3);
      $$ = s;
    }
  ;

fp_param
  : type_qualifier_seq_opt type_specifier star_list_opt            {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t n = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; if(qs){ strcat(s, $1); strcat(s, " "); } strcat(s, $2); if($3) strcat(s, $3); }
      $$ = s;
      free($1); free($2); free($3);
    }
  | type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t n = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; if(qs){ strcat(s, $1); strcat(s, " "); } strcat(s, $2); if($3) strcat(s, $3); }
      $$ = s;
      free($1); free($2); free($3); free($4);
    }
  ;

/* (parameter list rules are defined earlier; avoid duplicate definitions here) */

/* Function definition (generic) */
function_definition
  : declaration_specifiers declarator compound_statement
  | type_specifier declarator compound_statement
  ;

/* Statements */
statement
  : compound_statement              { $$ = $1; }
  | expression_statement            { $$ = $1; }
  | selection_statement             { $$ = NULL; }
  | iteration_statement             { $$ = NULL; }
  | jump_statement                  { $$ = $1; }
  ;

compound_statement
  : '{' block_item_list_opt '}'     { $$ = (AstNode*)ast_compound_new_with($2 ? $2->a : NULL, $2 ? $2->n : 0); if($2) free($2); }
  ;

block_item_list_opt
  : /* empty */                     { $$ = NULL; }
  | block_item_list                 { $$ = $1; }
  ;

block_item_list
  : block_item                      { $$ = $1; }
  | block_item_list block_item      { $$ = nlist_merge($1, $2); }
  ;

block_item
  : type_specifier star_list_opt IDENTIFIER ';' {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, NULL);
      free(t); free($1); free($2); /* $3 freed by decl */
      $$ = nlist_from1(d);
    }
  | type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER ';' {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, $1); strcat(t, " "); } strcat(t, $2); if($3) strcat(t, $3); }
      AstNode* d = ast_decl_new(t ? t : $2, $4, NULL);
      free(t); free($1); free($2); free($3); /* $4 freed by decl */
      $$ = nlist_from1(d);
    }
  | type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER '=' assignment_expression ';' {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, $1); strcat(t, " "); } strcat(t, $2); if($3) strcat(t, $3); }
      AstNode* d = ast_decl_new(t ? t : $2, $4, $6);
      free(t); free($1); free($2); free($3);
      $$ = nlist_from1(d);
    }
  | type_specifier star_list_opt IDENTIFIER '=' assignment_expression ';' {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $5);
      free(t); free($1); free($2);
      $$ = nlist_from1(d);
    }
  | type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER '=' initializer ';' {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, $1); strcat(t, " "); } strcat(t, $2); if($3) strcat(t, $3); }
      AstNode* d = ast_decl_new(t ? t : $2, $4, $6);
      free(t); free($1); free($2); free($3);
      $$ = nlist_from1(d);
    }
  | type_specifier star_list_opt IDENTIFIER '=' initializer ';' {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $5);
      free(t); free($1); free($2);
      $$ = nlist_from1(d);
    }
  | type_qualifier_seq_opt type_specifier star_list_opt IDENTIFIER array_dims '=' initializer ';' {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($2) + strlen($3 ? $3 : "") + strlen($5 ? $5 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, $1); strcat(t, " "); } strcat(t, $2); if($3) strcat(t, $3); if($5) strcat(t, $5); }
      AstNode* d = ast_decl_new(t ? t : $2, $4, $7);
      free(t); free($1); free($2); free($3); free($5);
      $$ = nlist_from1(d);
    }
  | type_specifier star_list_opt IDENTIFIER array_dims '=' initializer ';' {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + strlen($4 ? $4 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); if($4) strcat(t, $4); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $6);
      free(t); free($1); free($2); free($4);
      $$ = nlist_from1(d);
    }
  | type_qualifier_seq_opt type_specifier sdecl ',' sdecl sdecl_list ';'
    {
      const char* qs = ($1 && $1[0]) ? $1 : NULL; NodeList* nl=nlist_new();
      char* base = qs ? sjoin3($1, " ", $2) : sdup0x($2);
      AstNode* A = (g_last_anon_is_anon ? g_last_anon_type : NULL);
      char* t1=compose_type(base,$3); AstNode* d1=ast_decl_new(t1,$3->name,NULL); if(A){ ast_decl_attach_anon(d1, A); } free(t1); dstr_free($3); nlist_push(nl,d1);
      char* t2=compose_type(base,$5); AstNode* d2=ast_decl_new(t2,$5->name,NULL); if(A){ ast_decl_attach_anon(d2, ast_node_clone(A)); } free(t2); dstr_free($5); nlist_push(nl,d2);
      if($6){ for(long i=0;i<$6->n;i++){ DStr* ds=(DStr*)$6->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); if(A){ ast_decl_attach_anon(dn, ast_node_clone(A)); } free(tx); dstr_free(ds); nlist_push(nl,dn);} free($6->a); free($6); }
      if(A){ g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(base); free($1); free($2);
      $$=nl;
    }
  | type_qualifier_seq_opt type_specifier sdecl '=' initializer ';'
    {
      const char* qs = ($1 && $1[0]) ? $1 : NULL;
      char* base = qs ? sjoin3($1, " ", $2) : sdup0x($2);
      char* t=compose_type(base,$3);
      AstNode* d=ast_decl_new(t? t: base, $3->name, $5);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); ast_decl_attach_anon(d, ast_node_clone(g_last_anon_type)); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); dstr_free($3); free(base); free($1); free($2);
      $$ = nlist_from1(d);
    }
  | statement                       { $$ = nlist_from1($1); }
  
  | KW_TYPEDEF type_specifier star_list_opt IDENTIFIER ';'
    {
      size_t nt = strlen($2) + strlen($3 ? $3 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, $2); if($3) strcat(t, $3); }
      int ap=0; if($3){ for(const char* s=$3; *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : $2, $4, ap);
      free(t);
      $$ = nlist_from1(td);
    }
  ;

/* sdecl (smart declarator) supports *, (), [], and params, but only used in comma-separated lists */
sdecl_list
  : /* empty */                    { $$=NULL; }
  | sdecl_list ',' sdecl           { if(!$1){ NodeList* nl=nlist_new(); $$=nl; } nlist_push($1, (AstNode*)$3); $$=$1; }
  ;

/* sdecl produces a DStr; later caller composes with base and creates Decl */
sdecl
  : star_list_opt sdir { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=sdup0x($2->name); d->pre=sdup0x($1); d->post=sdup0x($2->post); dstr_free($2); free($1); $$=d; }
  ;

sdir
  : IDENTIFIER { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=$1; d->pre=strdup(""); d->post=strdup(""); $$=d; }
  | '(' sdecl ')' { $$=$2; }
  | '(' sdecl ')' '(' fp_param_list_opt ')' { char* params=$5?$5:strdup("()"); $2->post=sappend3($2->post, "(*)", params); free($5); $$=$2; }
  | '(' '*' IDENTIFIER ')' '(' fp_param_list_opt ')' { 
      char* params=$6?$6:strdup("()"); 
      DStr* d=(DStr*)calloc(1,sizeof(DStr)); 
      d->name=$3; 
      d->pre=strdup(""); 
      d->post=sappend3(strdup("(*)"), "(", params); 
      free(params); 
      $$=d; 
    }
  | sdir '[' assignment_expression_opt ']' { char* suf=array_suffix_from_expr($3); $1->post=sappend($1->post,suf); free(suf); $$=$1; }
  | '(' '*' IDENTIFIER '[' assignment_expression_opt ']' ')' '(' fp_param_list_opt ')' { 
      char* arr=array_suffix_from_expr($5); 
      char* params=$9?$9:strdup("()"); 
      DStr* d=(DStr*)calloc(1,sizeof(DStr)); 
      d->name=$3; 
      d->pre=strdup(""); 
      char* ptr_array = sappend(sappend(strdup("(*"), arr), ")");
      d->post=sappend3(ptr_array, "(", params); 
      free(arr); free(params); 
      $$=d; 
    }
  ;

/* (smart declarators temporarily disabled to avoid conflicts) */

expression_statement
  : ';'                              { $$ = NULL; }
  | expression ';'                   { $$ = $1; }
  ;

selection_statement
  : KW_IF '(' expression ')' statement
  | KW_IF '(' expression ')' statement KW_ELSE statement
  | KW_SWITCH '(' expression ')' statement
  ;

iteration_statement
  : KW_WHILE '(' expression ')' statement
  | KW_DO statement KW_WHILE '(' expression ')' ';'
  | KW_FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement
  ;

jump_statement
  : KW_RETURN expression_opt ';'     { $$ = ast_return_new($2); }
  | KW_RETURN expression_opt         { $$ = ast_return_new($2); }
  | KW_BREAK ';'                     { $$ = NULL; }
  | KW_CONTINUE ';'                  { $$ = NULL; }
  | KW_GOTO IDENTIFIER ';'           { free($2); $$ = NULL; }
  ;

/* Expressions */
expression_opt
  : /* empty */                      { $$ = NULL; }
  | expression                       { $$ = $1; }
  ;

expression
  : assignment_expression            { $$ = $1; }
  | expression ',' assignment_expression { $$ = $3; }
  ;

assignment_expression_opt
  : /* empty */                      { $$ = NULL; }
  | assignment_expression            { $$ = $1; }
  ;

assignment_expression
  : conditional_expression           { $$ = $1; }
  | unary_expression '=' assignment_expression           { $$ = ast_expr_assign_new("=", $1, $3); }
  | unary_expression ADD_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("+=", $1, $3); }
  | unary_expression SUB_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("-=", $1, $3); }
  | unary_expression MUL_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("*=", $1, $3); }
  | unary_expression DIV_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("/=", $1, $3); }
  | unary_expression MOD_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("%=", $1, $3); }
  | unary_expression AND_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("&=", $1, $3); }
  | unary_expression OR_ASSIGN assignment_expression     { $$ = ast_expr_assign_new("|=", $1, $3); }
  | unary_expression XOR_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("^=", $1, $3); }
  | unary_expression LSHIFT_ASSIGN assignment_expression { $$ = ast_expr_assign_new("<<=", $1, $3); }
  | unary_expression RSHIFT_ASSIGN assignment_expression { $$ = ast_expr_assign_new(">>=", $1, $3); }
  ;

conditional_expression
  : logical_or_expression                              { $$ = $1; }
  | logical_or_expression '?' expression ':' conditional_expression { $$ = ast_expr_cond_new($1, $3, $5); }
  ;

logical_or_expression
  : logical_and_expression                             { $$ = $1; }
  | logical_or_expression LOGOR logical_and_expression { $$ = ast_expr_binary_new("||", $1, $3); }
  ;

logical_and_expression
  : inclusive_or_expression                            { $$ = $1; }
  | logical_and_expression LOGAND inclusive_or_expression { $$ = ast_expr_binary_new("&&", $1, $3); }
  ;

inclusive_or_expression
  : exclusive_or_expression                            { $$ = $1; }
  | inclusive_or_expression '|' exclusive_or_expression { $$ = ast_expr_binary_new("|", $1, $3); }
  ;

exclusive_or_expression
  : and_expression                                     { $$ = $1; }
  | exclusive_or_expression '^' and_expression         { $$ = ast_expr_binary_new("^", $1, $3); }
  ;

and_expression
  : equality_expression                                { $$ = $1; }
  | and_expression '&' equality_expression             { $$ = ast_expr_binary_new("&", $1, $3); }
  ;

equality_expression
  : relational_expression                              { $$ = $1; }
  | equality_expression EQ relational_expression       { $$ = ast_expr_binary_new("==", $1, $3); }
  | equality_expression NE relational_expression       { $$ = ast_expr_binary_new("!=", $1, $3); }
  ;

relational_expression
  : shift_expression                                   { $$ = $1; }
  | relational_expression '<' shift_expression         { $$ = ast_expr_binary_new("<", $1, $3); }
  | relational_expression '>' shift_expression         { $$ = ast_expr_binary_new(">", $1, $3); }
  | relational_expression LE shift_expression          { $$ = ast_expr_binary_new("<=", $1, $3); }
  | relational_expression GE shift_expression          { $$ = ast_expr_binary_new(">=", $1, $3); }
  ;

shift_expression
  : additive_expression                                { $$ = $1; }
  | shift_expression LSHIFT additive_expression        { $$ = ast_expr_binary_new("<<", $1, $3); }
  | shift_expression RSHIFT additive_expression        { $$ = ast_expr_binary_new(">>", $1, $3); }
  ;

additive_expression
  : multiplicative_expression                          { $$ = $1; }
  | additive_expression '+' multiplicative_expression  { $$ = ast_expr_binary_new("+", $1, $3); }
  | additive_expression '-' multiplicative_expression  { $$ = ast_expr_binary_new("-", $1, $3); }
  ;

multiplicative_expression
  : unary_expression                                   { $$ = $1; }
  | multiplicative_expression '*' unary_expression     { $$ = ast_expr_binary_new("*", $1, $3); }
  | multiplicative_expression '/' unary_expression     { $$ = ast_expr_binary_new("/", $1, $3); }
  | multiplicative_expression '%' unary_expression     { $$ = ast_expr_binary_new("%", $1, $3); }
  ;

unary_expression
  : postfix_expression                                 { $$ = $1; }
  | INC unary_expression                               { $$ = ast_expr_unary_new("++", $2, 0); }
  | DEC unary_expression                               { $$ = ast_expr_unary_new("--", $2, 0); }
  | '+' unary_expression                               { $$ = $2; }
  | '-' unary_expression                               { $$ = ast_expr_unary_new("-", $2, 0); }
  | '!' unary_expression                               { $$ = ast_expr_unary_new("!", $2, 0); }
  | '~' unary_expression                               { $$ = ast_expr_unary_new("~", $2, 0); }
  | KW_SIZEOF unary_expression                         { $$ = NULL; }
  | KW_SIZEOF '(' type_specifier ')'                   { free($3); $$ = NULL; }
  | '(' type_qualifier_seq_opt type_specifier star_list_opt ')' unary_expression {
      const char* qs = ($2 && $2[0]) ? $2 : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen($3) + strlen($4 ? $4 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) {
        t[0]='\0';
        if(qs){ strcat(t, qs); strcat(t, " "); }
        strcat(t, $3);
        if($4) strcat(t, $4);
      }
      AstNode* cast = ast_expr_cast_new(t ? t : $3, $6);
      free($2); free($3); free($4); free(t);
      $$ = cast;
    }
  ;

/* optional sequence of type qualifiers as a string (e.g., "const volatile") */
type_qualifier_seq_opt
  : /* empty */ { $$ = strdup(""); }
  | KW_CONST type_qualifier_seq_opt { $$ = sappend($2, ($2 && $2[0])?" const":"const"); }
  | KW_VOLATILE type_qualifier_seq_opt { $$ = sappend($2, ($2 && $2[0])?" volatile":"volatile"); }
  | KW_RESTRICT type_qualifier_seq_opt { $$ = sappend($2, ($2 && $2[0])?" restrict":"restrict"); }
  | KW_UNIQ type_qualifier_seq_opt { $$ = sappend($2, ($2 && $2[0])?" uniq":"uniq"); }
/*
  | type_qualifier_seq_opt KW_CONST  { $$ = sappend($1, ($1 && $1[0])?" const":"const"); }
  | type_qualifier_seq_opt KW_VOLATILE { $$ = sappend($1, ($1 && $1[0])?" volatile":"volatile"); }
  | type_qualifier_seq_opt KW_RESTRICT { $$ = sappend($1, ($1 && $1[0])?" restrict":"restrict"); }
  | type_qualifier_seq_opt KW_UNIQ   { $$ = sappend($1, ($1 && $1[0])?" uniq":"uniq"); }
*/
  ;

postfix_expression
  : primary_expression                                 { $$ = $1; }
  | postfix_expression '(' argument_expression_list_opt ')' {
      $$ = ast_expr_call_new($1, $3 ? $3->a : NULL, $3 ? $3->n : 0);
      if($3) { free($3); }
    }
  | postfix_expression '[' expression ']'              { $$ = ast_expr_index_new($1, $3); }
  | postfix_expression '.' IDENTIFIER                  { $$ = ast_expr_member_new($1, $3, 0); free($3); }
  | postfix_expression ARROW IDENTIFIER                { $$ = ast_expr_member_new($1, $3, 1); free($3); }
  | postfix_expression INC                             { $$ = ast_expr_unary_new("++", $1, 1); }
  | postfix_expression DEC                             { $$ = ast_expr_unary_new("--", $1, 1); }
  ;

argument_expression_list_opt
  : /* empty */                      { $$ = NULL; }
  | argument_expression_list         { $$ = $1; }
  ;

argument_expression_list
  : assignment_expression            { $$ = nlist_from1($1); }
  | argument_expression_list ',' assignment_expression { nlist_push($1, $3); $$ = $1; }
  ;

primary_expression
  : IDENTIFIER                                         { $$ = ast_expr_ident_new($1); free($1); }
  | INTEGER_CONSTANT                                   { $$ = ast_expr_int_new(atol($1)); free($1); }
  | FLOAT_CONSTANT                                     { $$ = ast_expr_float_new(atof($1)); free($1); }
  | CHAR_CONSTANT                                      { $$ = ast_expr_char_new($1); free($1); }
  | STRING_LITERAL                                     { $$ = ast_expr_string_new($1); free($1); }
  | '(' expression ')'                                 { $$ = $2; }
  ;

/* Initializers */
initializer
  : assignment_expression            { $$ = $1; }
  | '{' initializer_list_opt '}'     { $$ = (AstNode*)ast_init_list_new($2 ? $2->a : NULL, $2 ? $2->n : 0); if($2) free($2); }
  ;

initializer_list_opt
  : /* empty */                      { $$ = NULL; }
  | initializer_list                 { $$ = $1; }
  ;

initializer_list
  : initializer                      { $$ = nlist_from1($1); }
  | designated_initializer           { $$ = nlist_from1($1); }
  | initializer_list ',' initializer { nlist_push($1, $3); $$ = $1; }
  | initializer_list ',' designated_initializer { nlist_push($1, $3); $$ = $1; }
  ;

designated_initializer
  : designation '=' initializer           { $$ = ast_init_desig_chain_new($1 ? $1->a : NULL, $1 ? $1->n : 0, $3); if($1) free($1); }
  ;

/* C standard designator list + GNU range [first ... last] */
designation
  : designator                         { $$ = nlist_from1($1); }
  | designation designator             { nlist_push($1, $2); $$ = $1; }
  ;

designator
  : '.' IDENTIFIER                     { $$ = ast_desig_field_new($2); free($2); }
  | '[' constant_expression ']'        { $$ = ast_desig_index_new($2); }
  | '[' constant_expression ELLIPSIS constant_expression ']' { $$ = ast_desig_range_new($2, $4); }
  ;

constant_expression
  : conditional_expression
  ;

%%

void yyerror(const char* s)
{
  fprintf(stderr, "parse error at line %d near '%s': %s\n", yylineno, yytext ? yytext : "", s);
}