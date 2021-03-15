#ifndef COMMON_H
#define COMMON_H 1

#include "config.h"
#include "buffer.h"
#include "xfunc.h"
#include "alignment.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>

//////////////////////////////
/// limits 
//////////////////////////////
#define GENERICS_TYPES_MAX 10
#define VAR_NAME_MAX 128
#define CLASS_NUM_MAX 512*2*2*2*2*2
#define PARSER_ERR_MSG_MAX 5
#define COMPILE_ERR_MSG_MAX 5
#define NEO_C_STACK_SIZE 512
#define LOCAL_VARIABLE_MAX 4096*2
#define PARAMS_MAX 32
#define METHOD_DEFAULT_PARAM_MAX 128
#define SOURCE_EXPRESSION_MAX 4096*2
#define ELIF_NUM_MAX 128
#define STRUCT_FIELD_MAX 256
#define REAL_FUN_NAME_MAX (VAR_NAME_MAX*PARAMS_MAX+32)
#define REAL_STRUCT_NAME_MAX (VAR_NAME_MAX*PARAMS_MAX+32)
#define IMPL_DEF_MAX 512
#define EXTERNAL_OBJECT_MAX 4096
#define INIT_ARRAY_MAX 128
#define LOOP_NEST_MAX 1024
#define TYPEDEF_MAX 4096
#define MACRO_MAX 1024
#define ARRAY_DIMENTION_MAX 5

#define clint64 long long      // for 32 bit cpu

//////////////////////////////
/// progressive declaration
//////////////////////////////
struct sParserInfoStruct;
struct sNodeBlockStruct;
struct sCompileInfoStruct;

//////////////////////////////
/// constant.c 
//////////////////////////////
struct sConstStruct
{
    char* mConst;
    unsigned int mSize;
    unsigned int mLen;
};

typedef struct sConstStruct sConst;

#define CONS_str(constant, offset) (char*)((constant)->mConst + offset)

void sConst_init(sConst* self);
void sConst_init_with_size(sConst* self, unsigned int size);
void sConst_free(sConst* self);
void sConst_clone(sConst* self, sConst* constant);

unsigned int sConst_append(sConst* self, void* data, int size, BOOL no_output);
unsigned int append_int_value_to_constant_pool(sConst* constant, int n, BOOL no_output);
unsigned int append_float_value_to_constant_pool(sConst* constant, float n, BOOL no_output);
unsigned int append_double_value_to_constant_pool(sConst* constant, double n, BOOL no_output);
unsigned int append_str_to_constant_pool(sConst* constant, char* str, BOOL no_output);
unsigned int append_wstr_to_constant_pool(sConst* constant, char* str, BOOL no_output);

//////////////////////////////
/// klass.c 
//////////////////////////////
#define CLASS_FLAGS_PRIMITIVE 0x01
#define CLASS_FLAGS_STRUCT 0x02
#define CLASS_FLAGS_NUMBER 0x04
#define CLASS_FLAGS_UNSIGNED_NUMBER 0x08
#define CLASS_FLAGS_GENERICS 0x10
#define CLASS_FLAGS_METHOD_GENERICS 0x20
#define CLASS_FLAGS_UNION 0x040
#define CLASS_FLAGS_ANONYMOUS 0x080
#define CLASS_FLAGS_ENUM 0x100
#define CLASS_FLAGS_ANONYMOUS_VAR_NAME 0x200

struct sCLClassStruct {
    clint64 mFlags;

    sConst mConst;

    int mClassNameOffset;

    int mGenericsNum;
    int mMethodGenericsNum;
    
    unsigned int mFieldNameOffsets[STRUCT_FIELD_MAX];
    struct sNodeTypeStruct* mFields[STRUCT_FIELD_MAX];
    int mNumFields;

    void* mUndefinedStructType;

    int mVersion;
};

#define CLASS_NAME(klass) (CONS_str((&(klass)->mConst), (klass)->mClassNameOffset))

typedef struct sCLClassStruct sCLClass;

struct sClassTableStruct
{
    char* mName;
    sCLClass* mItem;
    BOOL mFreed;
    BOOL mInitialized;

    struct sClassTableStruct* mNextClass;
};

typedef struct sClassTableStruct sClassTable;

extern sClassTable* gHeadClassTable;


void class_init();
void class_final();

sCLClass* get_class(char* class_name);
sCLClass* alloc_struct(char* class_name, BOOL anonymous);
sCLClass* alloc_enum(char* class_name);
void add_fields_to_struct(sCLClass* klass, int num_fields, char** field_name, struct sNodeTypeStruct* fields[STRUCT_FIELD_MAX]);
sCLClass* alloc_union(char* class_name, BOOL anonymous, BOOL anonymous_var_name);
void add_fields_to_union(sCLClass* klass, int num_fields, char** field_name, struct sNodeTypeStruct* fields[STRUCT_FIELD_MAX]);
unsigned int get_hash_key(char* name, unsigned int max);
int get_field_index(sCLClass* klass, char* var_name, int* parent_field_index);
sCLClass* clone_class(sCLClass* klass);

//////////////////////////////
/// node_type.c
//////////////////////////////
struct sNodeTypeStruct {
    sCLClass* mClass;

    struct sNodeTypeStruct* mGenericsTypes[GENERICS_TYPES_MAX];
    int mNumGenericsTypes;

    int mArrayNum[ARRAY_DIMENTION_MAX];
    int mArrayDimentionNum;
    BOOL mNullable;
    BOOL mUnsigned;
    int mPointerNum;
    BOOL mConstant;
    BOOL mRegister;
    BOOL mVolatile;
    BOOL mStatic;
    BOOL mUniq;
    int mSizeNum;

    struct sNodeTypeStruct* mParamTypes[PARAMS_MAX];
    struct sNodeTypeStruct* mResultType;
    int mNumParams;

    BOOL mHeap;
    BOOL mDummyHeap;
    BOOL mNoHeap;

    unsigned int mDynamicArrayNum;

    int mArrayInitializeNum;

    unsigned int mTypeOfExpression;

    int mFinalizeGenericsFunNum;

    int mNumFields;

    char mTypeName[VAR_NAME_MAX];
    int mTypePointerNum;
};

typedef struct sNodeTypeStruct sNodeType;

void init_node_types();
void free_node_types();

BOOL check_the_same_fields(sNodeType* left_node, sNodeType* right_node);

sNodeType* clone_node_type(sNodeType* node_type);
sNodeType* create_node_type_with_class_name(char* class_name);
sNodeType* create_node_type_with_class_pointer(sCLClass* klass);
BOOL cast_posibility(sNodeType* left_type, sNodeType* right_type);
BOOL auto_cast_posibility(sNodeType* left_type, sNodeType* right_type);

struct sCompileInfoStruct;
BOOL substitution_posibility(sNodeType* left_type, sNodeType* right_type, struct sCompileInfoStruct* info);
BOOL type_identify(sNodeType* left, sNodeType* right);
BOOL type_identify_with_class_name(sNodeType* left, char* right_class_name);
BOOL is_number_type(sNodeType* node_type);
void show_node_type(sNodeType* node_type);
BOOL solve_generics(sNodeType** node_type, sNodeType* generics_type, BOOL* success_solve);
BOOL solve_method_generics(sNodeType** node_type, int num_method_generics_types, sNodeType* method_generics_types[GENERICS_TYPES_MAX]);
BOOL solve_typeof(sNodeType** node_type, struct sCompileInfoStruct* info);
BOOL is_typeof_type(sNodeType* node_type);
BOOL included_generics_type(sNodeType* node_type, sCLClass* checked_class[], int* num_checked_class);
BOOL get_type_of_method_generics(sNodeType* method_generics_types[GENERICS_TYPES_MAX], sNodeType* fun_param_type, sNodeType* param_type);
void create_type_name_from_node_type(char* type_name, int type_name_max, sNodeType* node_type, BOOL neo_c);
  
//////////////////////////////
/// vtable.c
//////////////////////////////
struct sVarStruct {
    char mName[VAR_NAME_MAX];
    int mIndex;
    sNodeType* mType;

    int mBlockLevel;

    BOOL mReadOnly;
    BOOL mConstant;
    void* mLLVMValue;

    BOOL mGlobal;
};

typedef struct sVarStruct sVar;

struct sVarTableStruct {
    int mID;
    sVar mLocalVariables[LOCAL_VARIABLE_MAX];  // open address hash
    int mVarNum;
    int mMaxBlockVarNum;

    int mBlockLevel;

    struct sVarTableStruct* mParent;            // make linked list
    struct sVarTableStruct* mNext;              // for free var table
};

typedef struct sVarTableStruct sVarTable;

void init_vtable();
void final_vtable();

BOOL is_included_var_from_this_table_only(sVarTable* table, sVar* var);
sVarTable* init_block_vtable(sVarTable* lv_table, BOOL no_increment_block_level);

sVarTable* init_var_table();
sVarTable* clone_var_table(sVarTable* lv_table);
void restore_var_table(sVarTable* left, sVarTable* right);

void set_max_block_var_num(sVarTable* new_table, sVarTable* lv_table);

int get_variable_index(sVarTable* table, char* name, BOOL* parent);

void check_already_added_variable(sVarTable* table, char* name, struct sParserInfoStruct* info);

// result: (true) success (false) overflow the table or a variable which has the same name exists
BOOL add_variable_to_table(sVarTable* table, char* name, sNodeType* type_, BOOL readonly, void* llvm_value, int index, BOOL global, BOOL constant);

// result: (null) not found (sVar*) found
sVar* get_variable_from_table(sVarTable* table, char* name);

// result: (null) not found (sVar*) found
sVar* get_variable_from_index(sVarTable* table, int index);

int get_var_num(sVarTable* table);
void show_vtable(sVarTable* table);
void show_vtable_current_only(sVarTable* table);

int get_parent_var_num_of_sum(sVarTable* table);

void free_objects(sVarTable* table, struct sCompileInfoStruct* info);

// result: (null) not found (sVar*) found
sVar* get_variable_from_this_table_only(sVarTable* table, char* name);

void free_block_variables_on_break(struct sNodeBlockStruct* current_node_block, struct sCompileInfoStruct* info, BOOL top_block);

//////////////////////////////
/// parser.c
//////////////////////////////
extern BOOL gMainFunctionExistance;

struct sParserInfoStruct
{
    sBuf mConst;

    char* p;
    char sname[PATH_MAX];
    char* source;
    char* module_name;
    int sline;
    int err_num;
    int parse_phase;
    int sline_top;
    sVarTable* lv_table;
    int mNumGenerics;
    char* mGenericsTypeNames[GENERICS_TYPES_MAX];

    int mNumMethodGenerics;
    char* mMethodGenericsTypeNames[GENERICS_TYPES_MAX];

    sNodeType* mMethodGenericsTypes[GENERICS_TYPES_MAX];
    int mNumMethodGenericsTypes;

    sNodeType* mGenericsType;

    int mBlockLevel;

    int switch_nest;
    BOOL first_case;
    BOOL case_after_return;

    BOOL change_sline;

    BOOL in_clang;

    BOOL parse_struct_phase;


    char fun_name[VAR_NAME_MAX];

    char parse_struct_name[VAR_NAME_MAX];
    char impl_struct_name[VAR_NAME_MAX];

    int mFunVersion;
    int mImplVersion;

    BOOL parse_block;

    BOOL in_case;

    BOOL no_comma_operator;
};

typedef struct sParserInfoStruct sParserInfo;

struct sParserParamStruct 
{
    char mName[VAR_NAME_MAX];
    sNodeType* mType;

    char mDefaultValue[METHOD_DEFAULT_PARAM_MAX];
};

int parse_cmp(char* p, char* str);

typedef struct sParserParamStruct sParserParam;

void parser_init();
void parser_final();
void parser_err_msg(sParserInfo* info, char* msg);
void skip_spaces_and_lf(sParserInfo* info);
BOOL parse_word(char* buf, int buf_size, sParserInfo* info, BOOL print_out_err_msg, BOOL no_skip_lf);
void expect_next_character_with_one_forward(char* characters, sParserInfo* info);
BOOL parse_function(unsigned int* node, sNodeType* result_type, char* fun_name, char* struct_name, sParserInfo* info);
void create_lambda_name(char* lambda_name, size_t size_lambda_name, char* module_name);
void expect_next_character_with_one_forward(char* characters, sParserInfo* info);
void skip_spaces(sParserInfo* info);
void create_lambda_name(char* lambda_name, size_t size_lambda_name, char* module_name);
BOOL parse_destructor(unsigned int* node, char* struct_name, sParserInfo* info, BOOL recursive, BOOL inline_);

extern int gNumLambdaName;

BOOL expression(unsigned int* node, sParserInfo* info);
BOOL expression(unsigned int* node, sParserInfo* info);
BOOL parse_sharp(sParserInfo* info);
BOOL parse_clone(unsigned int* node, sParserInfo* info);
BOOL parse_class_name_expression(unsigned int* node, sParserInfo* info);
BOOL get_hex_number(unsigned int* node, sParserInfo* info);
BOOL get_oct_number(unsigned int* node, sParserInfo* info);

//////////////////////////////
/// source compiler 
//////////////////////////////
BOOL delete_comment(sBuf* source, sBuf* source2);
BOOL read_source(char* fname, sBuf* source);
BOOL compile_source(char* fname, char* source, BOOL optimize, sVarTable* module_var_table);

extern char gMainModulePath[PATH_MAX];

//////////////////////////////
/// node.cpp
//////////////////////////////
struct sCompileInfoStruct
{
    BOOL no_output;
    int err_num;
    struct sParserInfoStruct* pinfo;
    sNodeType* type;

    char sname[PATH_MAX];
    int sline;

    int stack_num;

    char compiling_struct_name[VAR_NAME_MAX];
    char compiling_fun_name[VAR_NAME_MAX];

    char fun_name[VAR_NAME_MAX];
    char real_fun_name[VAR_NAME_MAX];

    void* current_block;

    sNodeType* generics_type;

    sNodeType* result_type;
    void* function_lvtable;

    void* result_variable;

    void* inline_func_end;

    BOOL last_expression_is_return;
    void* loop_end_block[LOOP_NEST_MAX];
    int num_loop;
    void* loop_begin_block[LOOP_NEST_MAX];
    int num_loop2;

    void* switch_expression;
    sNodeType* switch_expression_type;

    void* case_else_block;
    void* case_then_block;

    int mBlockLevel;

    BOOL prevent_from_free_right_value_objects;

    void* right_value_objects;

    struct sNodeBlockStruct* current_node_block;

    struct sNodeBlockStruct* function_node_block;

    BOOL in_inline_function;

    BOOL has_block_result;

    void* andand_result_var;
    void* oror_result_var;
};

typedef struct sCompileInfoStruct sCompileInfo;

enum eNodeType { kNodeTypeIntValue, kNodeTypeUIntValue, kNodeTypeLongValue, kNodeTypeULongValue, kNodeTypeAdd, kNodeTypeSub, kNodeTypeStoreVariable, kNodeTypeLoadVariable, kNodeTypeDefineVariable, kNodeTypeCString, kNodeTypeFunction, kNodeTypeExternalFunction, kNodeTypeFunctionCall, kNodeTypeIf, kNodeTypeEquals, kNodeTypeNotEquals, kNodeTypeStruct, kNodeTypeObject, kNodeTypeStackObject, kNodeTypeStoreField, kNodeTypeLoadField, kNodeTypeWhile, kNodeTypeDoWhile, kNodeTypeGteq, kNodeTypeLeeq, kNodeTypeGt, kNodeTypeLe, kNodeTypeLogicalDenial, kNodeTypeTrue, kNodeTypeFalse, kNodeTypeAndAnd, kNodeTypeOrOr, kNodeTypeFor, kNodeTypeLambdaCall, kNodeTypeSimpleLambdaParam, kNodeTypeDerefference, kNodeTypeRefference, kNodeTypeNull, kNodeTypeClone, kNodeTypeLoadElement, kNodeTypeStoreElement, kNodeTypeChar, kNodeTypeMult, kNodeTypeDiv, kNodeTypeMod, kNodeTypeCast, kNodeTypeImpl, kNodeTypeGenericsFunction, kNodeTypeInlineFunction, kNodeTypeTypeDef, kNodeTypeUnion, kNodeTypeLeftShift, kNodeTypeRightShift, kNodeTypeAnd, kNodeTypeXor, kNodeTypeOr, kNodeTypeReturn, kNodeTypeSizeOf, kNodeTypeSizeOfExpression, kNodeTypeDefineVariables, kNodeTypeLoadFunction, kNodeTypeArrayWithInitialization, kNodeTypeStructWithInitialization, kNodeTypeNormalBlock, kNodeTypeSwitch, kNodeTypeBreak, kNodeTypeContinue, kNodeTypeCase, kNodeTypeLabel, kNodeTypeGoto, kNodeTypeIsHeap, kNodeTypeIsHeapExpression, kNodeTypeIsManaged, kNodeTypeIsManagedExpression, kNodeTypeVaArg, kNodeTypeDelete, kNodeTypeClassNameExpression, kNodeTypeClassName, kNodeTypeConditional, kNodeTypeAlignOf, kNodeTypeAlignOfExpression, kNodeTypeBorrow, kNodeTypeDummyHeap, kNodeTypeManaged, kNodeTypeComplement, kNodeTypeStoreAddress, kNodeTypeLoadAddressValue, kNodeTypePlusPlus, kNodeTypeMinusMinus, kNodeTypeEqualPlus, kNodeTypeEqualMinus, kNodeTypeEqualMult, kNodeTypeEqualDiv, kNodeTypeEqualMod, kNodeTypeEqualLShift, kNodeTypeEqualRShift, kNodeTypeEqualAnd, kNodeTypeEqualXor, kNodeTypeEqualOr, kNodeTypeComma, kNodeTypeFunName };

struct sNodeTreeStruct 
{
    enum eNodeType mNodeType;

    unsigned int mLeft;
    unsigned int mRight;
    unsigned int mMiddle;

    char mSName[PATH_MAX];
    int mLine;

    union {
        int mIntValue;
        long long int mLongValue;
        unsigned long long int mULongValue;
        char mCharValue;
        sNodeType* mType;

        struct {
            char mVarName[VAR_NAME_MAX];
            BOOL mAlloc;
            BOOL mGlobal;
            BOOL mParseStructPhase;
        } sStoreVariable;

        struct {
            char mVarName[VAR_NAME_MAX];
            BOOL mGlobal;
            BOOL mExtern;
        } sDefineVariable;

        struct {
            char mFunName[VAR_NAME_MAX];
        } sLoadFunction;

        struct {
            unsigned int mNodes[IMPL_DEF_MAX];
            int mNumNodes;
            BOOL mGlobal;
            BOOL mExtern;
        } sDefineVariables;

        struct {
            char mVarName[VAR_NAME_MAX];
            BOOL mGlobal;
        } sLoadVariable;

        struct {
            char mVarName[VAR_NAME_MAX];
        } sManaged;

        struct {
            char* mString;
        } sString;

        struct {
            sNodeType* mNodeType;
        } sVaArg;

        struct {
            char mName[VAR_NAME_MAX];
            char mAsmName[VAR_NAME_MAX];
            char mSimpleName[VAR_NAME_MAX];
            sParserParam mParams[PARAMS_MAX];
            int mNumParams;
            sNodeType* mResultType;
            struct sNodeBlockStruct* mNodeBlock;
            BOOL mLambda;
            sVarTable* mVarTable;
            BOOL mVarArg;
            char mStructName[VAR_NAME_MAX];
            BOOL mOperatorFun;
            char* mBlockText;
            int mNumGenerics;
            char mGenericsTypeNames[PARAMS_MAX][VAR_NAME_MAX];

            int mNumMethodGenerics;
            char mMethodGenericsTypeNames[GENERICS_TYPES_MAX][VAR_NAME_MAX];
            BOOL mSimpleLambdaParam;
            BOOL mGenericsFunction;
            BOOL mConstructorFun;
            int mSLine;
            BOOL mInCLang;
            BOOL mParseStructPhase;
            int mVersion;
            BOOL mFinalize;
            int mGenericsFunNum;
        } sFunction;

        struct {
            int mNumParams;
            unsigned int mParams[PARAMS_MAX];
        } sVector;

        struct {
            char mName[VAR_NAME_MAX];
            unsigned int mParams[PARAMS_MAX];
            int mNumParams;
            BOOL mMethod;
            BOOL mInCLang;
            BOOL mInherit;

            int mNumGenerics;
            char mGenericsTypeNames[PARAMS_MAX][VAR_NAME_MAX];
            int mVersion;
            char mImplStructName[VAR_NAME_MAX];
        } sFunctionCall;

        struct {
            unsigned int mExpressionNode;
            MANAGED struct sNodeBlockStruct* mIfNodeBlock;
            unsigned int mElifExpressionNodes[ELIF_NUM_MAX];
            MANAGED struct sNodeBlockStruct* mElifNodeBlocks[ELIF_NUM_MAX];
            int mElifNum;
            MANAGED struct sNodeBlockStruct* mElseNodeBlock;
        } sIf;

        struct {
            unsigned int mExpressionNode;
            MANAGED struct sNodeBlockStruct* mWhileNodeBlock;
        } sWhile;

        struct {
            sNodeType* mType;
            BOOL mAnonymous;
        } sStruct;

        struct {
            sNodeType* mType;
        } sObject;

        struct {
            char mVarName[VAR_NAME_MAX];
        } sStoreField;

        struct {
            char mVarName[VAR_NAME_MAX];
        } sLoadField;

        struct {
            unsigned int mExpressionNode;
            unsigned int mExpressionNode2;
            unsigned int mExpressionNode3;
            MANAGED struct sNodeBlockStruct* mForNodeBlock;
        } sFor;

        struct {
            char* mBuf;
            char mSName[PATH_MAX];
            int mSLine;
        } sSimpleLambdaParam;

        struct {
            unsigned int mNodes[IMPL_DEF_MAX];
            int mNumNodes;
        } sImpl;

        struct {
            char mName[VAR_NAME_MAX];
            sNodeType* mNodeType;
        } sTypeDef;

        struct {
            sNodeType* mType;
        } sSizeOf;

        struct {
            sNodeType* mType;
        } sAlignOf;

        struct {
            sNodeType* mType;
        } sIsHeap;

        struct {
            sNodeType* mType;
        } sIsManaged;

        struct {
            char mVarName[VAR_NAME_MAX];
            int mNumInitializeArrayValue;
            unsigned int mInitializeArrayValue[INIT_ARRAY_MAX];
        } sArrayWithInitialization;

        struct {
            struct sNodeBlockStruct* mNodeBlock;
            BOOL mHeap;
        } sNormalBlock;

        struct {
            unsigned int* mSwitchExpression;
            int mNumSwitchExpression;
            unsigned int mExpression;
        } sSwitch;

        struct {
            unsigned int mExpression;
            BOOL mLastCase;
            BOOL mFirstCase;
            BOOL mCaseAfterReturn;
        } sCase;

        struct {
            char mName[VAR_NAME_MAX];
        } sLabel;

        struct {
            char mName[VAR_NAME_MAX];
        } sGoto;

        struct {
            unsigned int mIndex[ARRAY_DIMENTION_MAX];
            int mArrayDimentionNum;
        } sStoreElement;

        struct {
            unsigned int mIndex[ARRAY_DIMENTION_MAX];
            int mArrayDimentionNum;
        } sLoadElement;
    } uValue;
};

typedef struct sNodeTreeStruct sNodeTree;

extern sNodeTree* gNodes;
extern int gUsedNodes;

void compile_err_msg(sCompileInfo* info, const char* msg, ...);

unsigned int sNodeTree_create_long_value(long long int value, sParserInfo* info);
unsigned int sNodeTree_create_load_adress_value(unsigned int address_node, sParserInfo* info);
unsigned int sNodeTree_create_complement(unsigned int left_node, sParserInfo* info);
unsigned int sNodeTree_create_ulong_value(unsigned long long int value, sParserInfo* info);
unsigned int sNodeTree_create_int_value(int value, sParserInfo* info);
unsigned int sNodeTree_create_uint_value(int value, sParserInfo* info);
unsigned int sNodeTree_create_add(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_sub(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_equals(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_not_equals(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);

unsigned int sNodeTree_create_store_variable(char* var_name, int right, BOOL alloc, sParserInfo* info);
unsigned int sNodeTree_create_store_value_to_address(unsigned int address_node, unsigned int right_node, sParserInfo* info);

unsigned int sNodeTree_create_external_function(char* fun_name, char* asm_fname, sParserParam* params, int num_params, BOOL var_arg, sNodeType* result_type, char* struct_name, BOOL operator_fun, int version, sParserInfo* info);

unsigned int sNodeTree_create_c_string_value(MANAGED char* value, int len, int sline, sParserInfo* info);

unsigned int sNodeTree_create_function(char* fun_name, char* asm_fname, sParserParam* params, int num_params, sNodeType* result_type, MANAGED struct sNodeBlockStruct* node_block, BOOL lambda, sVarTable* block_var_table, char* struct_name, BOOL operator_fun, BOOL constructor_fun, BOOL simple_lambda_param, sParserInfo* info, BOOL generics_function, BOOL var_arg, int version, BOOL finalize, int generics_fun_num, char* simple_fun_name);

unsigned int sNodeTree_create_function_call(char* fun_name, unsigned int* params, int num_params, BOOL method, BOOL inherit, int version, sParserInfo* info);
unsigned int sNodeTree_create_load_variable(char* var_name, sParserInfo* info);
unsigned int sNodeTree_if_expression(unsigned int expression_node, MANAGED struct sNodeBlockStruct* if_node_block, unsigned int* elif_expression_nodes, MANAGED struct sNodeBlockStruct** elif_node_blocks, int elif_num, MANAGED struct sNodeBlockStruct* else_node_block, sParserInfo* info, char* sname, int sline);
unsigned int sNodeTree_struct(sNodeType* struct_type, sParserInfo* info, char* sname, int sline, BOOL anonymous);
unsigned int sNodeTree_union(sNodeType* struct_type, sParserInfo* info, char* sname, int sline, BOOL anonymous);
unsigned int sNodeTree_create_object(sNodeType* node_type, unsigned int object_num, char* sname, int sline, sParserInfo* info);
unsigned int sNodeTree_create_delete(unsigned int object_node, sParserInfo* info);
unsigned int sNodeTree_create_borrow(unsigned int object_node, sParserInfo* info);
unsigned int sNodeTree_create_dummy_heap(unsigned int object_node, sParserInfo* info);
unsigned int sNodeTree_create_managed(char* var_name, sParserInfo* info);
unsigned int sNodeTree_create_store_field(char* var_name, unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_load_field(char* name, unsigned int left_node, sParserInfo* info);
unsigned int sNodeTree_while_expression(unsigned int expression_node, MANAGED struct sNodeBlockStruct* while_node_block, sParserInfo* info);
unsigned int sNodeTree_do_while_expression(unsigned int expression_node, MANAGED struct sNodeBlockStruct* while_node_block, sParserInfo* info);
unsigned int sNodeTree_create_gteq(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_leeq(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_gt(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_le(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_logical_denial(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_true(sParserInfo* info);
unsigned int sNodeTree_create_false(sParserInfo* info);
unsigned int sNodeTree_create_and_and(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_or_or(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_for_expression(unsigned int expression_node1, unsigned int expression_node2, unsigned int expression_node3, MANAGED struct sNodeBlockStruct* for_node_block, sParserInfo* info);
unsigned int sNodeTree_create_block_object(sParserParam* params, int num_params, sNodeType* result_type, MANAGED struct sNodeBlockStruct* node_block, sParserInfo* info);
unsigned int sNodeTree_create_lambda_call(unsigned int lambda_node, unsigned int* params, int num_params, sParserInfo* info);
unsigned int sNodeTree_create_simple_lambda_param(char* buf, char* sname, int sline, sParserInfo* info);
unsigned int sNodeTree_create_stack_object(sNodeType* node_type, unsigned int object_num, char* sname, int sline, sParserInfo* info);
unsigned int sNodeTree_create_dereffernce(unsigned int left_node, sParserInfo* info);
unsigned int sNodeTree_create_reffernce(unsigned int left_node, sParserInfo* info);
unsigned int sNodeTree_create_null(sParserInfo* info);
unsigned int sNodeTree_create_clone(unsigned int left, sParserInfo* info);
unsigned int sNodeTree_create_borrow(unsigned int left, sParserInfo* info);
unsigned int sNodeTree_create_load_array_element(unsigned int array, unsigned int index_node[], int num_dimetion, sParserInfo* info);
unsigned int sNodeTree_create_store_element(unsigned int array, unsigned int index_node[], int num_dimetion, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_character_value(char c, sParserInfo* info);
unsigned int sNodeTree_create_mult(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_div(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_mod(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_cast(sNodeType* left_type, unsigned int left_node, sParserInfo* info);
unsigned int sNodeTree_create_generics_function(char* fun_name, sParserParam* params, int num_params, sNodeType* result_type, MANAGED char* block_text, char* struct_name, char* sname, int sline, BOOL va_arg, int version, sParserInfo* info);
unsigned int sNodeTree_create_inline_function(char* fun_name, sParserParam* params, int num_params, sNodeType* result_type, MANAGED char* block_text, char* struct_name, char* sname, int sline, BOOL var_arg, sParserInfo* info);
unsigned int sNodeTree_create_impl(unsigned int* nodes, int num_nodes, sParserInfo* info);
unsigned int sNodeTree_create_typedef(char* name, sNodeType* node_type, sParserInfo* info);
unsigned int sNodeTree_create_define_variable(char* var_name, BOOL extern_, sParserInfo* info);
void create_operator_fun_name(char* fun_name, char* real_fun_name, size_t size_real_fun_name, sNodeType** param_types, int num_params);
unsigned int sNodeTree_create_left_shift(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_right_shift(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_and(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_xor(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_or(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info);
unsigned int sNodeTree_create_return(unsigned int left, sParserInfo* info);
unsigned int sNodeTree_create_sizeof(sNodeType* node_type, sParserInfo* info);
unsigned int sNodeTree_create_sizeof_expression(unsigned int lnode, sParserInfo* info);
unsigned int sNodeTree_create_alignof(sNodeType* node_type, sParserInfo* info);
unsigned int sNodeTree_create_alignof_expression(unsigned int lnode, sParserInfo* info);
unsigned int sNodeTree_create_define_variables(unsigned int* nodes, int num_nodes, BOOL extern_, sParserInfo* info);
BOOL is_function_name(char* name);
unsigned int sNodeTree_create_load_function(char* fun_name, sParserInfo* info);
unsigned int sNodeTree_create_array_with_initialization(char* name, int num_initialize_array_value, unsigned int* initialize_array_value, unsigned int left_node, sParserInfo* info);
unsigned int sNodeTree_create_normal_block(MANAGED struct sNodeBlockStruct* node_block, sParserInfo* info);
unsigned int sNodeTree_create_struct_with_initialization(char* name, int num_initialize_array_value, unsigned int* initialize_array_value, unsigned int left_node, sParserInfo* info);
unsigned int sNodeTree_switch_expression(unsigned int expression_node, int num_switch_expression, MANAGED unsigned int* switch_expression, sParserInfo* info);
unsigned int sNodeTree_create_break_expression(sParserInfo* info);
unsigned int sNodeTree_create_continue_expression(sParserInfo* info);
unsigned int sNodeTree_case_expression(unsigned int expression_node, BOOL last_case, BOOL case_after_return, sParserInfo* info);
unsigned int sNodeTree_label_expression(char* name, sParserInfo* info);
unsigned int sNodeTree_goto_expression(char* name, sParserInfo* info);
unsigned int sNodeTree_create_is_heap(sNodeType* node_type, sParserInfo* info);
unsigned int sNodeTree_create_is_heap_expression(unsigned int lnode, sParserInfo* info);
unsigned int sNodeTree_create_va_arg(unsigned int lnode, sNodeType* node_type, sParserInfo* info);

void show_node(unsigned int node);
BOOL compile(unsigned int node, sCompileInfo* info);
unsigned int sNodeTree_create_class_name(sNodeType* node_type, sParserInfo* info);
unsigned int sNodeTree_create_class_name_expression(unsigned int lnode, sParserInfo* info);
unsigned int sNodeTree_create_conditional(unsigned int conditional, unsigned int value1, unsigned int value2, sParserInfo* info);

//////////////////////////////
/// node_block.c
//////////////////////////////
struct sNodeBlockStruct
{
    unsigned int* mNodes;
    unsigned int mSizeNodes;
    unsigned int mNumNodes;

    sVarTable* mLVTable;

    sBuf mSource;
    char mSName[PATH_MAX];
    int mSLine;
    
    BOOL mHasResult;
    int mExternCLang;

    BOOL mInCLang;
};

typedef struct sNodeBlockStruct sNodeBlock;

//void parse_version(int* version, sParserInfo* info);
BOOL parse_block_easy(ALLOC sNodeBlock** node_block, BOOL extern_clang, sParserInfo* info);
BOOL parse_block(sNodeBlock* node_block, BOOL extern_clang, BOOL single_expression, sParserInfo* info);
BOOL compile_block(sNodeBlock* block, sCompileInfo* info, sNodeType* result_type, BOOL free_var_object);
BOOL skip_block(sParserInfo* info);

//////////////////////////////
/// node_alloc.cpp
//////////////////////////////
void init_nodes();
void free_nodes();

unsigned int alloc_node();

ALLOC sNodeBlock* sNodeBlock_alloc();
void sNodeBlock_free(sNodeBlock* block);

void append_node_to_node_block(sNodeBlock* node_block, unsigned int node);

//////////////////////////////
/// llvm.cpp
//////////////////////////////
void llvm_init();
void llvm_final();

void start_to_make_native_code(char* sname);
void output_native_code(char* sname, BOOL optimize, char* throw_to_cflag);
extern int gResultCode;

void arrange_stack(sCompileInfo* info, int top);
void start_neo_c_main_function();
void finish_neo_c_main_function();
void free_object(sNodeType* node_type, void* address, BOOL force_delete, sCompileInfo* info);
BOOL create_llvm_struct_type(sNodeType* node_type, sNodeType* generics_type, BOOL new_create, sCompileInfo* info);
BOOL create_llvm_union_type(sNodeType* node_type, sNodeType* generics_type, sCompileInfo* info);
void create_undefined_llvm_struct_type(sNodeType* node_type);
BOOL get_const_value_from_node(int* array_size, unsigned int array_size_node, sParserInfo* info);
void create_anonymous_union_var_name(char* name, int size_name);
void dec_stack_ptr(int value, sCompileInfo* info);
void* new_right_value_objects_container(sCompileInfo* info);
void restore_right_value_objects_container(void* right_value_objects, sCompileInfo* info);

/// typedef.c ///
void init_typedef();

void add_typedef(char* name, sNodeType* node_type);
sNodeType* get_typedef(char* name);

/// macro ///
void init_macro();
void finalize_macro();

char* get_macro(char* name);
void append_macro(char* name, char* body);
BOOL call_macro(unsigned int* node, char* name, char* params, sParserInfo* info);

/// parser.c ///
BOOL get_number(BOOL minus, unsigned int* node, sParserInfo* info);
BOOL parse_macro(unsigned int* node, sParserInfo* info);
BOOL parse_enum(unsigned int* node, char* name, sParserInfo* info);
BOOL parse_ruby_macro(unsigned int* node, sParserInfo* info, BOOL really_appended);
BOOL parse_delete(unsigned int* node, sParserInfo* info);
BOOL parse_borrow(unsigned int* node, sParserInfo* info);
BOOL parse_managed(unsigned int* node, sParserInfo* info);
BOOL parse_typedef(unsigned int* node, sParserInfo* info);

unsigned int sNodeTree_create_plus_plus(unsigned int left_node, sParserInfo* info);
unsigned int sNodeTree_create_minus_minus(unsigned int left_node, sParserInfo* info);
unsigned int sNodeTree_create_equal_plus(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_equal_minus(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_equal_mult(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_equal_div(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_equal_mod(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_equal_lshift(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_equal_rshift(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_equal_and(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_equal_xor(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_equal_or(unsigned int left_node, unsigned int right_node, sParserInfo* info);
unsigned int sNodeTree_create_comma(unsigned int left_node, unsigned int right_node, sParserInfo* info);

extern BOOL gNCDebug;

unsigned int sNodeTree_create_func_name(sParserInfo* info);

#endif

