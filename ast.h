#ifndef AST_H
#define AST_H

#include <stddef.h>

typedef enum AstKind {
    AST_COMPOUND = 1,
    AST_FUNCTION = 2,
    AST_RETURN   = 3,
    AST_EXPR_INT = 4,
    AST_EXPR_BINARY = 5,
    AST_EXPR_IDENT = 6,
    AST_EXPR_UNARY = 7,
    AST_EXPR_CALL  = 8,
    AST_EXPR_INDEX = 9,
    AST_EXPR_MEMBER = 10,
    AST_EXPR_ASSIGN = 11,
    AST_EXPR_FLOAT = 12,
    AST_EXPR_CHAR = 13,
    AST_EXPR_STRING = 14,
    AST_TYPEDEF = 15,
    AST_DECL = 16,
    AST_INIT_LIST = 17,
    AST_INIT_DESIG_FIELD = 18,
    AST_INIT_DESIG_INDEX = 19,
    AST_DESIG_FIELD = 20,      /* element: .name */
    AST_DESIG_INDEX = 21,      /* element: [expr] */
    AST_DESIG_RANGE = 22,      /* element: [first ... last] */
    AST_INIT_DESIG = 23,       /* chain of elements + value */
    AST_EXPR_CAST = 24,
    AST_STRUCT = 25,
    AST_UNION  = 26,
    AST_ENUM   = 27,
    AST_EXPR_COND = 28
} AstKind;

typedef struct AstNode {
    AstKind kind;
    int lineno;    /* source line number */
    char* filename; /* source filename */
} AstNode;

typedef struct AstCompound {
    AstKind kind; /* AST_COMPOUND */
    int lineno;         /* source line number */
    char* filename;     /* source filename */
    struct AstNode** items; /* statements */
    long count;
} AstCompound;

typedef struct AstParam {
    char* type_name; /* e.g., "int", "char**" */
    char* name;      /* e.g., "argc" */
} AstParam;

typedef struct AstFunction {
    AstKind kind; /* AST_FUNCTION */
    int lineno;         /* source line number */
    char* filename;     /* source filename */
    char* name;
    char* return_type; /* e.g., "int", "char*" */
    int flags; /* AstFuncFlags bitmask */
    int uniq_; /* 1 if 'uniq' specifier present */
    AstParam* params;
    long param_count;
    int version; /* optional version tag; 0 if unspecified */
    AstNode* body; /* AstCompound* */
} AstFunction;

typedef enum AstFuncFlags {
    ASTF_EXTERN   = 1<<0,
    ASTF_STATIC   = 1<<1,
    ASTF_INLINE   = 1<<2,
    ASTF_CONST    = 1<<3,
    ASTF_VOLATILE = 1<<4,
    ASTF_RESTRICT = 1<<5,
    ASTF_UNIQ     = 1<<6,
} AstFuncFlags;

typedef struct AstStructField {
    char* type_name;
    char* name;
    int bitwidth;   // 0 なら通常フィールド、>0 ならビット幅
    struct AstNode* anon_def; // optional inline nested definition (struct/union/enum)
} AstStructField;

typedef struct AstStruct {
    AstKind kind;       // AST_STRUCT
    int lineno;         // source line number
    char* filename;     // source filename
    char* name;         // "Point"
    AstStructField* fields;
    long field_count;
} AstStruct;

typedef struct AstUnion {
    AstKind kind;       // AST_UNION
    int lineno;         // source line number
    char* filename;     // source filename
    char* name;         // union tag name
    AstStructField* fields;
    long field_count;
} AstUnion;

typedef struct AstEnumItem {
    char* name;            /* enumerator name */
    struct AstNode* value; /* optional constant expression (nullable) */
} AstEnumItem;

typedef struct AstEnum {
    AstKind kind;       // AST_ENUM
    int lineno;         // source line number
    char* filename;     // source filename
    char* name;         // enum tag name (nullable for anonymous)
    AstEnumItem* items;
    long item_count;
} AstEnum;

/* Qualifier flags for type-bearing nodes */
typedef struct AstQuals {
    int const_;
    int volatile_;
    int restrict_;
    int uniq_;
    int pointer_num;
    int fp_;          /* function pointer type flag */
    int ptr_heap;     /* number of '%' pointer markers */
    int ptr_no_dtor;  /* number of '`' pointer markers */
    int ptr_no_heap;  /* number of '&' pointer markers */
    int is_void;
    int is_char;
    int is_int;
    int is_float;
    int is_double;
    int is_signed;
    int is_unsigned;
    int is_short;
    int long_count;   /* 0,1,2 for long/long long */
    int is_struct;
    int is_union;
    int is_enum;
    int array_dims;   /* number of [] pairs detected */
    long array_size[8]; /* per-dimension size; -1 if unspecified */
    int int_bits;     /* inferred integer bit width (LP64 assumption), 0 if non-integer */
} AstQuals;

/* Declaration node */
typedef struct AstDecl {
    AstKind kind;
    int lineno;         /* source line number */
    char* filename;     /* source filename */
    char* type_name;    /* e.g., "int", "char**" */
    char* name;         /* declarator name */
    struct AstNode* init;      /* optional initializer */
    struct AstNode* anon_def;  /* inline struct/union/enum definition */
    AstQuals q;                 /* parsed qualifiers */
} AstDecl;

struct AstNode* ast_struct_new(const char* name);
struct AstNode* ast_struct_new_with(const char* name, AstStructField* fields, long field_count);
AstStructField  ast_struct_field_new(const char* type_name, const char* name, int bitwidth);

/* Union constructors */
struct AstNode* ast_union_new(const char* name);
struct AstNode* ast_union_new_with(const char* name, AstStructField* fields, long field_count);

/* Enum constructors */
struct AstNode* ast_enum_new(const char* name);
struct AstNode* ast_enum_new_with(const char* name, AstEnumItem* items, long item_count);
AstEnumItem     ast_enum_item_new(const char* name, struct AstNode* value);

AstCompound* ast_compound_new(void);
AstCompound* ast_compound_new_with(struct AstNode** items, long count);
AstFunction* ast_function_new(const char* name, const char* return_type, int flags, AstParam* params, long param_count, int version, AstNode* body);

/* Optional: small debug printer */
void ast_print(const AstNode* n, int indent);

/* Simple global list management for demo */
void ast_add(AstNode* n);
void ast_dump(void);
void ast_free_all(void);
void ast_validate(void);

/* Expressions and statements */
AstNode* ast_return_new(AstNode* expr);
AstNode* ast_expr_int_new(long value);
AstNode* ast_expr_binary_new(const char* op, AstNode* lhs, AstNode* rhs);
AstNode* ast_expr_ident_new(const char* name);
AstNode* ast_expr_unary_new(const char* op, AstNode* expr, int is_postfix);
AstNode* ast_expr_call_new(AstNode* callee, AstNode** args, long argc);
AstNode* ast_expr_index_new(AstNode* arr, AstNode* index);
AstNode* ast_expr_member_new(AstNode* recv, const char* name, int is_arrow);
AstNode* ast_expr_assign_new(const char* op, AstNode* lhs, AstNode* rhs);
AstNode* ast_expr_float_new(double value);
AstNode* ast_expr_char_new(const char* text);
AstNode* ast_expr_string_new(const char* text);
AstNode* ast_expr_cast_new(const char* type_name, struct AstNode* expr);
AstNode* ast_expr_cond_new(struct AstNode* cond, struct AstNode* then_e, struct AstNode* else_e);

/* Typedef */
AstNode* ast_typedef_new(const char* type_name, const char* alias_name, int alias_ptrs);

/* Declaration */
AstNode* ast_decl_new(const char* type_name, const char* name, AstNode* init);
void ast_decl_attach_anon(struct AstNode* decl, struct AstNode* anon_def);

/* Clone a type definition node (struct/union/enum) for safe inline attachment */
struct AstNode* ast_type_clone(const struct AstNode* n);
AstNode* ast_node_clone(const AstNode* src);

/* Filename tracking for preprocessor directives */
void ast_set_filename(const char* filename);

AstNode* ast_init_list_new(struct AstNode** items, long count);
AstNode* ast_init_desig_field_new(const char* name, struct AstNode* value);
AstNode* ast_init_desig_index_new(struct AstNode* index_expr, struct AstNode* value);
/* Designator elements and chain */
AstNode* ast_desig_field_new(const char* name);
AstNode* ast_desig_index_new(struct AstNode* index_expr);
AstNode* ast_desig_range_new(struct AstNode* first, struct AstNode* last);
AstNode* ast_init_desig_chain_new(struct AstNode** elems, long count, struct AstNode* value);

#endif /* AST_H */
