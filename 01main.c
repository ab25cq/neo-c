/// c_include definition ///
#ifndef __BAREMETAL__
#define __BAREMETAL__ 1
#endif


extern int errno;

#line 334 "./neo-c-libc.h"

__attribute__((weak)) int* __errno_location(void)
{
    return &errno;
}

static unsigned char __neo_darwin_heap[512 * 1024 * 1024];
static unsigned long __neo_darwin_brk_offset;

unsigned long brk(unsigned long addr)
{
    unsigned long base = (unsigned long)__neo_darwin_heap;
    unsigned long limit = base + sizeof(__neo_darwin_heap);

    if(addr == 0) {
        return base + __neo_darwin_brk_offset;
    }
    if(addr < base || addr > limit) {
        errno = 12;
        return (unsigned long)-1;
    }

    __neo_darwin_brk_offset = addr - base;
    return addr;
}

/// typedef definition ///
typedef __builtin_va_list __gnuc_va_list;

typedef char* string;

typedef __builtin_va_list  va_list  ;

typedef unsigned long  int size_t;

typedef long ptrdiff_t;

typedef unsigned long  int uintptr_t;

typedef long intptr_t;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef int wchar_t;

typedef _Bool bool;

typedef struct anonymous_typeX1 glob_t;

typedef struct __neo_FILE  FILE  ;

typedef struct mem_block  mem_block_t  ;

typedef struct anonymous_typeX2 __buf_ctx_t;

typedef struct anonymous_typeX3 __str_ctx_t;

typedef struct anonymous_typeX4 __fmt_out_t;

typedef int*  wstring  ;

typedef struct MacroSnapshot MacroSnapshot;

/// previous struct definition ///
struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

/// struct definition ///
struct anonymous_typeX1
{
    unsigned long  int  gl_pathc  ;
    char** gl_pathv;
};

struct __neo_FILE
{
    int fd;
    int error;
    int eof;
    int owned;
    int has_ungot;
    int ungot;
};

struct mem_block
{
    unsigned long  int  size  ;
    struct mem_block*  next  ;
};

enum  arg_kind { ARG_KIND_LIT=(1),
ARG_KIND_FILE=(2),
ARG_KIND_END=(3)
};

struct arg_hdr
{
    enum arg_kind  kind  ;
    const char* shortopts;
    const char* longopts;
    const char* datatype;
    const char* glossary;
    int mincount;
    int maxcount;
};

struct arg_lit
{
    struct arg_hdr  hdr  ;
    int count;
};

struct arg_file
{
    struct arg_hdr  hdr  ;
    int count;
    const char** filename;
};

struct arg_error
{
    const char* msg;
    const char* argval;
    const struct arg_hdr*  hdr  ;
};

struct arg_end
{
    struct arg_hdr  hdr  ;
    int count;
    int maxerrors;
    struct arg_error*  errors  ;
};

struct anonymous_typeX2
{
    char* p;
    unsigned long  int rem;
};

struct anonymous_typeX3
{
    char* p;
};

struct anonymous_typeX4
{
    int mode;
    void* ctx;
    int count;
};

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct neo_frame
{
    struct neo_frame*  prev  ;
    char* fun_name;
    unsigned long  int frame_id;
};

struct sMemHeader
{
    long size;
    long compiletime_size;
    long alloc_size;
    int allocated;
    int alive;
    struct sMemHeader*  next  ;
    struct sMemHeader*  prev  ;
    struct sMemHeader*  free_next  ;
    char* fun_name[8];
    const char* class_name;
    const char* sname;
    int sline;
    int id;
};

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char*  item  ;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

struct Result$1__neo_FILE$p
{
    int tag;
    struct __neo_FILE*  Some_value  ;
};

struct Result$1buffer$ph
{
    int tag;
    struct buffer*  Some_value  ;
};

struct Result$1int$
{
    int tag;
    int Some_value;
};

struct Result$1list$1char$ph$ph
{
    int tag;
    struct list$1char$ph* Some_value;
};

struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool  (*compile)(void*,struct sInfo* );
    int (*sline)(void*);
    int (*sline_real)(void*);
    char*  (*sname)(void*);
    _Bool  (*terminated)(void*);
    char*  (*kind)(void*);
    struct sNode* (*left_value)(void*);
};

struct tuple2$2char$phsType$ph
{
    char*  v1  ;
    struct sType*  v2  ;
};

struct list_item$1tuple2$2char$phsType$ph$ph
{
    struct tuple2$2char$phsType$ph* item;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev;
    struct list_item$1tuple2$2char$phsType$ph$ph* next;
};

struct list$1tuple2$2char$phsType$ph$ph
{
    struct list_item$1tuple2$2char$phsType$ph$ph* head;
    struct list_item$1tuple2$2char$phsType$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
};

struct sClass
{
    _Bool  mStruct  ;
    _Bool  mFloat  ;
    _Bool  mUnion  ;
    _Bool  mGenerics  ;
    _Bool  mMethodGenerics  ;
    _Bool  mEnum  ;
    _Bool  mProtocol  ;
    _Bool  mNumber  ;
    _Bool  mUniq  ;
    _Bool  mTypeName  ;
    _Bool  mAnonymous  ;
    char*  mName  ;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char*  mParentClassName  ;
    char*  mAttribute  ;
    _Bool  mIter  ;
};

struct list_item$1sType$ph
{
    struct sType*  item  ;
    struct list_item$1sType$ph* prev;
    struct list_item$1sType$ph* next;
};

struct list$1sType$ph
{
    struct list_item$1sType$ph* head;
    struct list_item$1sType$ph* tail;
    int len;
    struct list_item$1sType$ph* it;
};

struct list_item$1sNode$ph
{
    struct sNode* item;
    struct list_item$1sNode$ph* prev;
    struct list_item$1sNode$ph* next;
};

struct list$1sNode$ph
{
    struct list_item$1sNode$ph* head;
    struct list_item$1sNode$ph* tail;
    int len;
    struct list_item$1sNode$ph* it;
};

struct sType
{
    struct sClass*  mClass  ;
    struct sType*  mOriginalLoadVarType  ;
    struct sType*  mChannelType  ;
    struct list$1sType$ph* mGenericsTypes;
    struct sType*  mNoSolvedGenericsType  ;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    _Bool  mAlignasDouble  ;
    char*  mTupleName  ;
    char*  mAttribute  ;
    char*  mVarAttribute  ;
    char*  mMiddleAttribute  ;
    char*  mPointerAttribute  ;
    _Bool  mNew  ;
    _Bool  mAllocaValue  ;
    _Bool  mUnsigned  ;
    _Bool  mShort  ;
    _Bool  mLong  ;
    _Bool  mLongLong  ;
    _Bool  mConstant  ;
    _Bool  mAtomic  ;
    _Bool  mThreadLocal  ;
    _Bool  mNorecord  ;
    _Bool  mThread  ;
    _Bool  mComplex  ;
    _Bool  mRegister  ;
    _Bool  mVolatile  ;
    _Bool  mNoreturn  ;
    _Bool  mStatic  ;
    _Bool  mWeak  ;
    _Bool  mUniq  ;
    _Bool  mExtern  ;
    _Bool  mRestrict  ;
    _Bool  mHeap  ;
    _Bool  mChannel  ;
    _Bool  mDefferRightValue  ;
    _Bool  mNoHeap  ;
    _Bool  mRefference  ;
    _Bool  mSlice  ;
    _Bool  mOptional  ;
    _Bool  mNoCallingDestructor  ;
    _Bool  mTypeName  ;
    _Bool  mAnonymous  ;
    char*  mAnonymousName  ;
    _Bool  mInnerStruct  ;
    char*  mInnerStructName  ;
    _Bool  mAnonymousVarName  ;
    _Bool  mInline  ;
    char*  mAsmName  ;
    _Bool  mTypedef  ;
    _Bool  mMultipleTypes  ;
    struct list$1sNode$ph* mArrayNum;
    struct list$1sNode$ph* mVarNameArrayNum;
    struct list$1int$* mArrayStatic;
    struct list$1int$* mArrayRestrict;
    int mPointerNum;
    int mFunctionPointerNum;
    int mArrayPointerNum;
    _Bool  mPointerParen  ;
    _Bool  mMinusPointerNum  ;
    struct sType*  mTypedefOriginalType  ;
    char*  mOriginalTypeName  ;
    int mOriginalTypePointerNum;
    int mOriginalTypePointerHeap;
    _Bool  mArrayPointerType  ;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType*  mResultType  ;
    _Bool  mVarArgs  ;
    struct sNode* mTypeOfNode;
    struct list$1sNode$ph* mHeapArrayNum;
};

struct sVar
{
    char*  mName  ;
    char*  mCValueName  ;
    struct sType*  mType  ;
    _Bool  mGlobal  ;
    _Bool  mAllocaValue  ;
    _Bool  mNoFree  ;
    char*  mFunName  ;
    _Bool  no_output_come_code  ;
};

struct list_item$1sVar$ph
{
    struct sVar*  item  ;
    struct list_item$1sVar$ph* prev;
    struct list_item$1sVar$ph* next;
};

struct list$1sVar$ph
{
    struct list_item$1sVar$ph* head;
    struct list_item$1sVar$ph* tail;
    int len;
    struct list_item$1sVar$ph* it;
};

struct sFun
{
    char*  mName  ;
    struct sType*  mResultType  ;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType*  mLambdaType  ;
    struct list$1sVar$ph* mAllVar;
    struct sBlock*  mBlock  ;
    char*  mTextBlock  ;
    char*  mTextBlockSName  ;
    int mTextBlockSline;
    struct buffer*  mSource  ;
    struct buffer*  mSourceHead  ;
    struct buffer*  mSourceHead2  ;
    struct buffer*  mSourceEnd  ;
    _Bool  mStatic  ;
    _Bool  mInline  ;
    _Bool  mUniq  ;
    _Bool  mExternal  ;
    _Bool  mVarArgs  ;
    _Bool  mNoResultType  ;
    _Bool  mConstFun  ;
    char*  mAttribute  ;
    char*  mMiddleAttribute  ;
    char*  mFunAttribute  ;
    _Bool  mGenericsFun  ;
    _Bool  mDefineReturnVar  ;
    char*  mAsmFun  ;
};

struct sGenericsFun
{
    struct sType*  mImplType  ;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char*  mName  ;
    struct sType*  mResultType  ;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char*  mBlock  ;
    int mSLine;
    _Bool  mVarArgs  ;
    _Bool  mGenerate  ;
    char*  mGenericsSName  ;
    int mGenericsSLine;
    _Bool  mConstFun  ;
};

struct CVALUE
{
    char*  c_value  ;
    struct sType*  type  ;
    struct sVar*  var  ;
    struct sRightValueObject*  right_value_objects  ;
    char*  c_value_without_right_value_objects  ;
    char*  c_value_without_cast_object_value  ;
    _Bool  mLoadField  ;
    _Bool  mCastValue  ;
    _Bool  mNullValue  ;
    char*  c_value_without_null_checker  ;
};

struct map$2char$phchar$ph
{
    char**  keys  ;
    unsigned int* hashes;
    _Bool*  item_existance  ;
    char**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sModule
{
    struct buffer*  mSourceHead  ;
    struct buffer*  mSource  ;
    char*  mLastCode  ;
    char*  mLastCode2  ;
    struct map$2char$phchar$ph* mHeader;
};

struct map$2char$phsVar$ph
{
    char**  keys  ;
    unsigned int* hashes;
    _Bool*  item_existance  ;
    struct sVar**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool  mGlobal  ;
    struct sVarTable*  mParent  ;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
    struct sVarTable*  mVarTable  ;
    _Bool  mOmitSemicolon  ;
};

struct sRightValueObject
{
    struct sType*  mType  ;
    char*  mVarName  ;
    char*  mFunName  ;
    char* mSName;
    int mSLine;
    _Bool  mFreed  ;
    int mID;
    int mBlockLevel;
    _Bool  mStored  ;
    _Bool  mDecrementRefCount  ;
    struct sType*  mObjType  ;
    char*  mObjValue  ;
    struct sVar*  mObjVar  ;
    _Bool  mNoFree  ;
};

struct map$2char$phsFun$ph
{
    char**  keys  ;
    unsigned int* hashes;
    _Bool*  item_existance  ;
    struct sFun**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char**  keys  ;
    unsigned int* hashes;
    _Bool*  item_existance  ;
    struct sGenericsFun**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char**  keys  ;
    unsigned int* hashes;
    _Bool*  item_existance  ;
    struct sClass**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char**  keys  ;
    unsigned int* hashes;
    _Bool*  item_existance  ;
    struct sType**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char**  keys  ;
    unsigned int* hashes;
    _Bool*  item_existance  ;
    struct buffer**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject*  item  ;
    struct list_item$1sRightValueObject$ph* prev;
    struct list_item$1sRightValueObject$ph* next;
};

struct list$1sRightValueObject$ph
{
    struct list_item$1sRightValueObject$ph* head;
    struct list_item$1sRightValueObject$ph* tail;
    int len;
    struct list_item$1sRightValueObject$ph* it;
};

struct list_item$1CVALUE$ph
{
    struct CVALUE*  item  ;
    struct list_item$1CVALUE$ph* prev;
    struct list_item$1CVALUE$ph* next;
};

struct list$1CVALUE$ph
{
    struct list_item$1CVALUE$ph* head;
    struct list_item$1CVALUE$ph* tail;
    int len;
    struct list_item$1CVALUE$ph* it;
};

struct sInfo
{
    char* p;
    char* head;
    struct buffer*  source  ;
    char* end;
    char*  sname  ;
    char*  sname_at_head  ;
    char*  base_sname  ;
    int sline;
    int err_num;
    int warning_num;
    char*  clang_option  ;
    char*  cpp_option  ;
    char*  linker_option  ;
    char*  linker_option2  ;
    _Bool  no_output_err  ;
    _Bool  no_output_come_code  ;
    _Bool  undefined_array_num_var  ;
    struct sFun*  come_fun  ;
    struct sFun*  caller_fun  ;
    int caller_line;
    char*  caller_sname  ;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsFun$ph* uniq_funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* c_include_definition;
    struct map$2char$phbuffer$ph* var_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct map$2char$phbuffer$ph* typedef_definition;
    struct map$2char$phsType$ph* named_child_struct;
    struct map$2char$phchar$ph* reflection_vars;
    struct sModule*  module  ;
    struct sType*  type  ;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType*  generics_type  ;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType*  come_function_result_type  ;
    struct sType*  come_method_block_function_result_type  ;
    struct sVarTable*  lv_table  ;
    struct sVarTable*  gv_table  ;
    _Bool  no_comma  ;
    _Bool  no_assign  ;
    _Bool  no_label  ;
    _Bool  last_statment_is_return  ;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType*  impl_type  ;
    struct sType*  class_type  ;
    int current_stack_num;
    int num_method_block;
    struct sClass*  current_stack_frame_struct  ;
    _Bool  define_struct  ;
    _Bool  in_typedef  ;
    char*  output_file_name  ;
    struct sVarTable*  current_loop_vtable  ;
    _Bool  verbose  ;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool  writing_source_file_position  ;
    struct sType*  function_result_type  ;
    _Bool  in_class  ;
    struct map$2char$phchar$ph* module_params;
    _Bool  constructor_  ;
    struct sClass*  defining_class  ;
    _Bool  array_initializer  ;
    _Bool  va_arg  ;
    _Bool  in_fun_param  ;
    _Bool  inhibits_output_code  ;
    _Bool  inhibits_output_code2  ;
    _Bool  in_generics_fun  ;
    _Bool  in_clone_object  ;
    _Bool  in_conditional_operator  ;
    struct list$1sVar$ph* match_it_var;
    int sline_top;
    struct sFun*  calling_fun  ;
    struct map$2char$phchar$ph* uniq_definition;
    _Bool  in_top_level  ;
    _Bool  remove_comment  ;
    int sline_real;
    int sline_block;
    _Bool  m5stack_cpp  ;
    _Bool  pico_cpp  ;
    _Bool  baremetal_cpp  ;
    _Bool  gcc_compiler  ;
    _Bool  in_method_block  ;
    _Bool  in_offsetof  ;
    int right_value_num;
    int right_value_max;
    _Bool  in_conditional  ;
    int num_conditional;
    int max_conditional;
    char*  pragma  ;
    struct list$1char$ph* pragma_pack_stack;
    _Bool  in_refference  ;
    struct buffer*  paren_block_buffer  ;
    _Bool  in_typeof  ;
    _Bool  in_store_array  ;
    int parse_struct_recursive_count;
    _Bool  exp_value  ;
    struct buffer*  if_expression_buffer  ;
    char*  if_result_value_name  ;
    _Bool  if_result_value_name_defined  ;
    struct sType*  if_result_type  ;
    _Bool  defer_block  ;
    struct buffer*  loop_expression_buffer  ;
    char*  loop_result_value_name  ;
    _Bool  loop_result_value_name_defined  ;
    struct sType*  loop_result_type  ;
    char*  iter_buffer  ;
    char*  iter_next  ;
    char*  iter_block  ;
    _Bool  use_iter_next  ;
    struct sType*  iter_type  ;
    int id;
    _Bool  in_case_optional_load  ;
};

struct sNodeBase
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct tuple2$2sType$phchar$ph
{
    struct sType*  v1  ;
    char*  v2  ;
};

struct tuple2$2char$phsGenericsFun$p
{
    char*  v1  ;
    struct sGenericsFun*  v2  ;
};

struct tuple3$3sType$phchar$ph_Bool$
{
    struct sType*  v1  ;
    char*  v2  ;
    _Bool  v3  ;
};

struct tuple2$2char$phchar$ph
{
    char*  v1  ;
    char*  v2  ;
};

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$
{
    struct list$1sType$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool  v4  ;
};

struct tuple2$2sFun$pchar$ph
{
    struct sFun*  v1  ;
    char*  v2  ;
};

struct tuple2$2char$ph_Bool$
{
    char*  v1  ;
    _Bool  v2  ;
};

struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$
{
    _Bool  v1  ;
    _Bool  v2  ;
    _Bool  v3  ;
    _Bool  v4  ;
    _Bool  v5  ;
};

struct tuple2$2char$phsNode$ph
{
    char*  v1  ;
    struct sNode* v2;
};

struct list_item$1tuple2$2char$phsNode$ph$ph
{
    struct tuple2$2char$phsNode$ph* item;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2char$phsNode$ph$ph* next;
};

struct list$1tuple2$2char$phsNode$ph$ph
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* head;
    struct list_item$1tuple2$2char$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType*  v1  ;
    char*  v2  ;
    struct sNode* v3;
};

struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct tuple3$3sType$phchar$phsNode$ph* item;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* next;
};

struct list$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* head;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
};

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char*  v1  ;
    struct sFun*  v2  ;
    struct sGenericsFun*  v3  ;
};

struct sNothingNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sNullChecker
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sHeapChecker
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sFunNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sFun*  mFun  ;
};

/// variable definition ///
extern int errno;

extern struct __neo_FILE  __neo_stdin_file  ;

extern struct __neo_FILE  __neo_stdout_file  ;

extern struct __neo_FILE  __neo_stderr_file  ;

extern struct __neo_FILE*  stdin  ;

extern struct __neo_FILE*  stdout  ;

extern struct __neo_FILE*  stderr  ;

extern struct mem_block*  free_list  ;

extern unsigned long  int  __neo_sbrk_cur  ;

extern int __neo_sbrk_inited;

void (*__atexit_funcs[32])();
extern int __atexit_count;

extern char* __strtok_save;

extern struct neo_frame*  neo_current_frame  ;

extern unsigned long  int neo_frame_id;

extern struct sMemHeader*  gAllocMem  ;

extern struct sMemHeader*  gFreeMem  ;

extern int gNumAlloc;

extern int gNumFree;

extern _Bool  gComeDebug  ;
extern _Bool  gComeUniq  ;
extern _Bool  gComeC  ;
extern _Bool  gComePthread  ;
extern _Bool  gComeNet  ;
extern _Bool  gComeMalloc  ;
extern _Bool  gComeBareMetal  ;
extern _Bool  gComeCPlusPlus  ;
extern _Bool  gComelang  ;
extern _Bool  gComeSafe  ;
extern _Bool  gPortableC  ;
extern _Bool  gComeLowMemory  ;
// source head

// header function
unsigned long  int  brk(unsigned long  int  size  );
long read(int fd, void* buf, unsigned long  int  count  );
long write(int fd, const void* buf, unsigned long  int  count  );
int open(const char* path, int flags, ...);
int close(int fd);
int unlink(const char* path);
void exit(int status);
void putchar(char c);
int charp_index_regex(const char* self, const char* reg, int default_value, _Bool  ignore_case  );
int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool  ignore_case  );
char*  string_chomp(const char* str);
int string_rindex_regex(char* self, const char* reg, int default_value, _Bool  ignore_case  );
int string_index_regex(char* self, const char* reg, int default_value, _Bool  ignore_case  );
_Bool  charp_match(char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool  ignore_case  );
char*  string_sub(char* self, const char* reg, const char* replace, _Bool  ignore_case  );
struct list$1char$ph* string_scan(char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* string_split(char* self, const char* reg, _Bool  ignore_case  );
_Bool  string_match(char* self, const char* reg, _Bool  ignore_case  );
char*  charp_sub(char* self, const char* reg, const char* replace, _Bool  global  , _Bool  ignore_case  );
char*  charp_sub_block(char* self, const char* reg, _Bool  global  , _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char*  string_sub_block(char* self, const char* reg, _Bool  global  , _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
int*  __builtin_wstring(const char* str, char* sname, int sline);
int wchar_tp_length(const int*  str  );
int wchar_ta_length(const int*  str  );
int wstring_length(const int*  str  );
char*  string_lower_case(char* str);
char*  string_upper_case(char* str);
int*  wchar_tp_substring(const int*  str  , int head, int tail);
int charp_index_count(const char* str, const char* search_str, int count, int default_value);
int charp_rindex(const char* str, const char* search_str, int default_value);
int charp_rindex_count(const char* str, const char* search_str, int count, int default_value);
char*  charp_strip(const char* self);
char*  wchar_tp_to_string(const int*  wstr  );
char*  wchar_ta_to_string(const int*  wstr  );
int*  charp_to_wstring(const char* str);
int*  chara_to_wstring(char* str);
int*  wchar_tp_delete(int*  str  , int head, int tail);
int wchar_tp_index(const int*  str  , const int*  search_str  , int default_value);
int wchar_tp_rindex(const int*  str  , const int*  search_str  , int default_value);
int*  wchar_tp_reverse(const int*  str  );
int*  wchar_tp_multiply(const int*  str  , int n);
int*  wchar_tp_printable(const int*  str  );
int wchar_tp_compare(const int*  left  , int*  right  );
int wstring_compare(const int*  left  , const int*  right  );
int*  wchar_tp_operator_mult(const int*  str  , int n);
int*  wstring_operator_mult(const int*  str  , int n);
_Bool  wstring_operator_equals(const int*  left  , const int*  right  );
_Bool  wstring_operator_not_equals(const int*  left  , const int*  right  );
int*  wchar_tp_operator_add(const int*  left  , const int*  right  );
int*  wstring_operator_add(const int*  left  , const int*  right  );
char*  charp_replace(char* self, int index, char c);
char*  charp_multiply(const char* str, int n);
struct list$1char$ph* charp_split_str(const char* self, const char* str);
unsigned int wchar_tp_get_hash_key(const int*  value  );
_Bool  wstring_equals(const int*  left  , const int*  right  );
_Bool  wchar_t_operator_equals(int  left  , int  right  );
_Bool  wchar_t_operator_not_equals(int  left  , int  right  );
unsigned int wchar_t_get_hash_key(int  value  );
_Bool  wchar_t_equals(int  left  , int  right  );
char*  wchar_t_to_string(int  wc  );
char*  xrealpath(const char* path);
char*  xdirname(const char* path);
unsigned long  int  xwcslen(const int*  wstr  );
int*  wstring_substring(const int*  str  , int head, int tail);
int string_index_count(const char* str, const char* search_str, int count, int default_value);
int string_rindex(const char* str, const char* search_str, int default_value);
int string_rindex_count(const char* str, const char* search_str, int count, int default_value);
char*  string_strip(const char* self);
char*  wstring_to_string(const int*  wstr  );
int*  int_to_wstring(int self);
int*  wstring_delete(int*  str  , int head, int tail);
int wstring_index(const int*  str  , const int*  search_str  , int default_value);
int wstring_rindex(const int*  str  , const int*  search_str  , int default_value);
int*  wstring_reverse(const int*  str  );
int*  wstring_multiply(const int*  str  , int n);
int*  wstring_printable(const int*  str  );
unsigned int wstring_get_hash_key(const int*  value  );
char*  string_replace(char* self, int index, char c);
char*  string_multiply(const char* str, int n);
struct list$1char$ph* string_split_str(const char* self, const char* str);
int*  string_to_wstring(const char* str);
char*  charp_chomp(const char* str);
_Bool  wchar_tp_equals(const int*  left  , const int*  right  );
_Bool  wchar_tp_operator_equals(const int*  left  , const int*  right  );
_Bool  wchar_tp_operator_not_equals(const int*  left  , const int*  right  );
char* parsecmp_tail(const char* p2, struct sInfo*  info  );
void add_parse_variable_to_table(char* name, struct sInfo*  info  );
struct sNode* parse_iterator_it(struct sInfo*  info  );
_Bool  transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo*  info  );
int err_msg(struct sInfo*  info  , const char* msg, ...);
int warning_msg(struct sInfo*  info  , const char* msg, ...);
int expected_next_character(char c, struct sInfo*  info  );
_Bool  node_compile(struct sNode* node, struct sInfo*  info  );
_Bool  node_conditional_compile(struct sNode* node, struct sInfo*  info  );
int come_main(int argc, char** argv);
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool  no_static  , _Bool  cast_type  , _Bool  typedef_extended  , _Bool  nullchecker  );
char*  make_come_type_name_string(struct sType*  type  , struct sInfo*  info  );
char*  make_come_define_var(struct sType*  type  , char* name, struct sInfo*  info  );
struct sType*  get_no_solved_type(struct sType*  type  );
struct sType*  get_no_solved_type2(struct sType*  type  );
char*  header_function(struct sFun*  fun  , struct sInfo*  info  );
_Bool  output_source_file(struct sInfo*  info  );
char*  create_generics_name(struct sType*  generics_type  , struct sInfo*  info  );
void add_last_code_to_source(struct sInfo*  info  );
void add_come_code_at_function_head(struct sInfo*  info  , const char* code, ...);
void add_come_code_at_come_header(struct sInfo*  info  , char*  id  , const char* msg, ...);
void add_come_code_no_indent(struct sInfo*  info  , const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo*  info  , char*  id  , const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo*  info  , const char* code, ...);
void add_come_code(struct sInfo*  info  , const char* msg, ...);
void add_come_last_code(struct sInfo*  info  , const char* msg, ...);
void add_come_last_code2(struct sInfo*  info  , const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo*  info  );
struct CVALUE*  get_value_from_stack(int offset, struct sInfo*  info  );
char*  make_define_var(struct sType*  type  , char* name, struct sInfo*  info  , _Bool  no_static  , _Bool  in_typedef  );
char*  make_var_name(struct sType*  type  , char* name, struct sInfo*  info  , _Bool  no_static  );
void transpiler_clear_last_code(struct sInfo*  info  );
_Bool  output_header_file(struct sInfo*  info  );
void on_drop_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void on_load_object(struct sType*  type  , char* obj, struct sInfo*  info  );
struct sType*  solve_method_generics(struct sType*  type  , struct sInfo*  info  );
_Bool  existance_free_right_value_objects(struct sInfo*  info  );
_Bool  existance_free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool  top_block  );
void std_move(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  right_value  , struct sInfo*  info  );
_Bool  create_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool  create_operator_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool  create_operator_not_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool  require_explicit_method_in_low_memory_mode(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct sType*  solve_generics(struct sType*  type  , struct sType*  generics_type  , struct sInfo*  info  );
struct sVar*  get_variable_from_table(struct sVarTable*  table  , char* name);
void free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool  top_block  , _Bool  ret_value_is_field  );
void free_objects_of_match_lv_tables(struct sInfo*  info  );
void free_objects_on_break(struct sInfo*  info  );
void free_object(struct sType*  type  , char* obj, _Bool  no_decrement  , _Bool  no_free  , struct sInfo*  info  , _Bool  ret_value  );
struct tuple2$2sType$phchar$ph* clone_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void free_right_value_objects(struct sInfo*  info  );
void free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  , _Bool  ret_value_is_field  );
void append_object_to_right_values(struct CVALUE*  come_value  , struct sType*  type  , struct sInfo*  info  , _Bool  decrement_ref_count  , struct sType*  obj_type  , char* obj_value, struct sVar*  obj_var  );
void remove_object_from_right_values(int right_value_num, struct sInfo*  info  );
void remove_value_from_right_value_objects(struct CVALUE*  come_value  , struct sInfo*  info  );
char*  increment_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void decrement_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  , _Bool  no_free  );
void transpile_toplevel(_Bool  block  , struct sInfo*  info  );
struct sNode* reverse_node(struct sNode* value, struct sInfo*  info  );
struct sFun*  compile_uniq_function(struct sFun*  fun  , struct sInfo*  info  );
struct sNode* cast_node(struct sType*  type  , struct sNode* node, struct sInfo*  info  );
struct sNode* create_defference_node(struct sNode* value, _Bool  quote  , struct sInfo*  info  );
struct sNode* reffence_node(struct sNode* value, struct sInfo*  info  );
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char*  fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo*  info  );
struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  );
struct sNode* post_position_operator(struct sNode* node, struct sInfo*  info  );
_Bool  create_method_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sInfo*  info  );
_Bool  operator_overload_fun_self(struct sType*  type  , const char* fun_name, struct sNode* node, struct CVALUE*  left_value  , struct sInfo*  info  );
_Bool  is_ref_or_optional_type_for_operator(struct sType*  type  , struct sInfo*  info  );
_Bool  reject_ref_optional_unary_operator(const char* op_name, struct CVALUE*  value  , struct sInfo*  info  );
_Bool  reject_ref_optional_binary_operator(const char* op_name, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  );
void caller_begin(struct sInfo*  info  );
void caller_end(struct sInfo*  info  );
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo*  info  );
void skip_paren(struct sInfo*  info  );
struct sNode* parse_normal_block(_Bool  clang  , _Bool  unsafe_block  , struct sInfo*  info  );
void cast_type(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool  check_assign_type(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo*  info  );
struct sNode* get_number(_Bool  minus  , struct sInfo*  info  );
struct sNode* get_oct_number(struct sInfo*  info  );
struct sNode* get_hex_number(_Bool  minus  , struct sInfo*  info  );
struct sNode* create_int_node(char*  value  , struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType*  type  , char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_compare_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
char*  skip_block(struct sInfo*  info  , _Bool  return_self_at_last  );
_Bool  parsecmp(const char* p2, struct sInfo*  info  );
char* parsecmp_forward(const char* p2, struct sInfo*  info  );
int match_common_attribute_keyword_len(const char* p);
char*  parse_word(_Bool  digits  , struct sInfo*  info  );
char*  backtrace_parse_word(struct sInfo*  info  );
void skip_spaces_and_lf(struct sInfo*  info  );
void skip_spaces_and_lf2(struct sInfo*  info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sType*  generics_type  , struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool  parse_variable_name  , _Bool  parse_multiple_type  , _Bool  in_function_parametor  );
struct sBlock*  parse_block(struct sInfo*  info  , _Bool  return_self_at_last  , _Bool  in_function  );
_Bool  is_function_attribute_word(char* buf);
int transpile_block(struct sBlock*  block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo*  info  , _Bool  no_var_table  , _Bool  loop_block  , _Bool  if_result_value  , _Bool  iter_  , _Bool  loop_result_type  );
void arrange_stack(struct sInfo*  info  , int top);
struct sNode* parse_function(struct sInfo*  info  );
struct sNode* parse_function_call(char* fun_name, struct sInfo*  info  , _Bool  come_  );
struct sNode* statment(struct sInfo*  info  );
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* expression_node_v1(struct sInfo*  info  );
struct sNode* expression_node_v99(struct sInfo*  info  );
struct sNode* expression_node_v98(struct sInfo*  info  );
struct sNode* expression_node_v97(struct sInfo*  info  );
int transpile(struct sInfo*  info  );
void parse_sharp_v5(struct sInfo*  info  );
char*  create_method_name(struct sType*  obj_type  , _Bool  no_pointer_name  , const char* fun_name, struct sInfo*  info  , _Bool  array_equal_pointer  );
char*  create_method_name_original_obj_type(struct sType*  obj_type  , _Bool  no_pointer_name  , const char* fun_name, struct sInfo*  info  , _Bool  array_equal_pointer  );
char*  create_non_method_name(struct sType*  obj_type  , _Bool  no_pointer_name  , const char* fun_name, struct sInfo*  info  , _Bool  array_equal_pointer  );
char*  create_method_name_using_class(struct sClass*  obj_class  , const char* fun_name, struct sInfo*  info  );
struct sNode* create_null_return_value(struct sInfo*  info  );
struct sNode* create_some(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_str_node(char*  value  , int sline, struct sInfo*  info  );
struct sNode* create_buffer_node(struct buffer*  value  , unsigned long  int  size  , struct sInfo*  info  );
struct sNode* create_sstring_node(char*  value  , struct list$1sNode$ph* exps, int sline, struct sInfo*  info  );
struct sNode* create_char_node(int value, struct sInfo*  info  );
struct sNode* create_wchar_node(int  value  , _Bool  quote  , struct sInfo*  info  );
struct sNode* create_wstring_node(int*  value  , int sline, struct sInfo*  info  );
struct sNode* create_prefixed_char_node(int value, char*  prefix  , struct sInfo*  info  );
struct sNode* create_prefixed_string_node(char*  value  , char*  prefix  , int sline, struct sInfo*  info  );
struct sNode* create_list_node(struct list$1sNode$ph* list_elements, struct sInfo*  info  );
struct sNode* create_vector_node(struct list$1sNode$ph* list_elements, struct sInfo*  info  );
struct sNode* create_tuple_node(struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo*  info  );
struct sNode* create_map_node(struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo*  info  );
struct sNode* expression_node_v96(struct sInfo*  info  );
struct sNode* parse_tuple(struct sInfo*  info  , _Bool  named_tuple  );
struct sNode* parse_some(struct sInfo*  info  );
struct sNode* parse_none(struct sInfo*  info  );
_Bool  is_inner_calling(struct sNode* node, struct sInfo*  info  );
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo*  info  );
struct sNode* expression_node_v95(struct sInfo*  info  );
struct sNode* store_var(char*  name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType*  type  , _Bool  alloc  , struct sNode* right_value, struct sInfo*  info  , _Bool  iter_  );
struct sNode* create_load_var(const char* var_name, struct sInfo*  info  );
struct sNode* parse_array_initializer(struct sInfo*  info  );
struct sNode* parse_struct_initializer(struct sInfo*  info  );
struct sNode* parse_global_variable(struct sInfo*  info  );
struct sNode* load_var(char*  name  , struct sInfo*  info  );
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo*  info  );
void add_variable_to_table(char* name, struct sType*  type  , struct sInfo*  info  , _Bool  function_param  , _Bool  comma  , _Bool  to_function_table  );
void add_variable_to_global_table(char* name, struct sType*  type  , struct sInfo*  info  );
void add_variable_to_global_table_with_int_value(char* name, struct sType*  type  , char* c_value, struct sInfo*  info  );
struct sNode* parse_match(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_catch(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo*  info  );
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo*  info  );
struct sNode* create_null_node(struct sInfo*  info  );
struct sNode* create_try_operator_node(struct sNode* node, struct sInfo*  info  );
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  );
_Bool  operator_overload_fun(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  right_value  , _Bool  break_guard  , struct sInfo*  info  );
struct sNode* expression_v13(struct sInfo*  info  , _Bool  type_name_exp  );
struct sNode* post_op_v13(struct sNode* node, struct sInfo*  info  );
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo*  info  );
void output_aggregate_field(struct sType*  type  , char*  tag_name  , struct buffer*  buf  , _Bool*  existance_generics  , char*  field_name  , int indent, struct sInfo*  info  , _Bool*  named_child  );
struct sNode* create_nothing_node(struct sInfo*  info  );
_Bool  is_contained_method_generics_types(struct sType*  type  , struct sInfo*  info  );
_Bool  is_contained_generics_types(struct sType*  type  , struct sInfo*  info  );
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_struct(char*  type_name  , char*  struct_attribute  , struct sInfo*  info  , _Bool  anonymous  );
char*  get_none_generics_name(char* class_name);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo*  info  );
_Bool  output_generics_struct(struct sType*  type  , struct sType*  generics_type  , struct sInfo*  info  );
void output_struct(struct sClass*  klass  , char*  pragma  , struct sInfo*  info  , _Bool  anonymous  );
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_union(char*  type_name  , char*  union_attribute  , struct sInfo*  info  , _Bool  anonymous  );
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v16(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_enum(char*  type_name  , char*  attribute  , struct sInfo*  info  );
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo*  info  );
_Bool  add_typedef(char*  type_name  , struct sType*  type  , struct sInfo*  info  );
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_nullable_node(struct sNode* left, struct sInfo*  info  );
struct sNode* load_field(struct sNode* left, char*  name  , struct sInfo*  info  );
struct sNode* store_field(struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  );
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo*  info  );
struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool  arrow_  , _Bool  iter_  , struct sNode* obj2);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  );
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  , _Bool  no_make_generics_function  );
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool  arrow_  );
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool  arrow_  );
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo*  info  );
_Bool  compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool  no_create_current_stack  );
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool  array_equal_pointer  );
struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool  arrow_  );
struct sNode* parse_iter_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool  arrow_  , struct sNode* parent_call_node);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_implements(struct sNode* node, struct sType*  inf_type  , struct sInfo*  info  );
struct sNode* create_new_node(struct sType*  type  , struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sNode* initializer_num, struct sInfo*  info  );
struct sNode* create_defer_node(struct sBlock*  block  , struct sInfo*  info  );
struct sNode* create_true_object(struct sInfo*  info  );
struct sNode* create_false_object(struct sInfo*  info  );
struct sNode* create_delete_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_borrow_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_clone_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_dupe_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_dummy_heap_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_gc_inc_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_gc_dec_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_gc_dec_nofree_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_is_heap_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_is_pointer_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_optional_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_ref_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_span_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_generic_node(struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  );
struct sNode* create_offsetof_node(struct sType*  type  , char*  name  , struct sInfo*  info  );
struct sNode* create_sizeof_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_sizeof_exp_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_dynamic_typeof_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_dynamic_sizeof_exp_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_alignof_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_alignof_exp_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_alignof_node2(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_alignof_exp_node2(struct sNode* exp, struct sInfo*  info  );
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo*  info  );
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo*  info  );
void preprocess_file_neo_c(const char* path, struct __neo_FILE*  out  );
void init_ccpp(int argc, char** argv);
void incldue_file_neo_c(char* path, int quoted, struct __neo_FILE*  out  );
const char* get_macro(const char* macro_name);
void macro_define(const char* def);
void macro_undef(const char* name);
const char* call_func_macro(const char* macro_name, const char* args, const char* file, long line);
void set_macro(const char* name, const char* value);
struct MacroSnapshot*  macro_snapshot_create();
char* macro_snapshot_diff_defines(struct MacroSnapshot*  snap  );
void macro_snapshot_free(struct MacroSnapshot*  snap  );
void init_global_opts();
struct sNode* create_fun_node(struct sFun*  fun  , struct sInfo*  info  );
struct sNode* comelang_top_level(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_come_gval(struct sInfo*  info  );
struct sNode* parse_come_gvar(struct sInfo*  info  );
struct sNode* parse_come_function(struct sInfo*  info  );
struct sBlock*  parse_come_block(struct sInfo*  info  );
struct sNode* create_null_checker(struct sNode* node, struct sInfo*  info  );
struct sNode* create_heap_checker(struct sNode* node, struct sInfo*  info  );
struct sType*  normalize_loadvar_type_for_compare(struct sType*  type  , struct sInfo*  info  );
struct sType*  expand_typedef_for_assign(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
struct sNode* parse_vector(struct sInfo*  info  );
_Bool  is_portable_libc_symbol(const char* sym);
struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  );
_Bool  is_arithmetic_type(struct sType*  type  , struct sInfo*  info  );
_Bool  is_integer_type(struct sType*  type  , struct sInfo*  info  );
_Bool  is_null_pointer_constant(struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool  is_generic_void_pointer_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
_Bool  is_span_class_name(const char* class_name, struct sInfo*  info  );
_Bool  is_generic_placeholder_class_name(const char* class_name, struct sInfo*  info  );
_Bool  is_generic_placeholder_type(struct sType*  type  , struct sInfo*  info  );
_Bool  is_span_wrapper_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
_Bool  is_transparent_union_type(struct sType*  type  , struct sInfo*  info  );
_Bool  pointer_attr_has_word(struct sType*  type  , const char* word, struct sInfo*  info  );
_Bool  is_type_name(char* buf, struct sInfo*  info  );
_Bool  is_contained_generics_class(struct sType*  type  , struct sInfo*  info  );
_Bool  is_contained_generics_placeholder(struct sType*  type  , struct sInfo*  info  );
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo*  info  , _Bool  in_constructor_  );
char*  parse_square_attribute(struct sInfo*  info  );
char*  parse_declspec_attribute(struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo*  info  );
void parse_struct_attribute_skip_paren(struct sInfo*  info  );
_Bool  parse_attribute_keyword(struct buffer*  result  , const char* keyword, _Bool  allow_end  , struct sInfo*  info  );
_Bool  parse_common_attribute_keyword(struct buffer*  result  , struct sInfo*  info  , _Bool  allow_end  );
char*  parse_struct_attribute(struct sInfo*  info  , _Bool  allow_end  );
char*  merge_tag_attribute(char*  current  , char*  attribute  );
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType*  base_type_name  , _Bool  first  , struct sInfo*  info  );
_Bool  skip_pointer_attribute(struct sInfo*  info  );
char*  parse_pointer_qualifier(struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool  parse_variable_name  , struct sInfo*  info  );
struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* backtrace_struct_union_enum(struct sInfo*  info  );
struct sType*  parse_pointer_attribute(struct sType*  type  , struct sInfo*  info  );
void append_attribute_to_type(struct sType*  type  , char*  attribute  , _Bool  for_variable  , struct sInfo*  info  );
void apply_type_qualifiers(struct sType*  type  , _Bool  constant  , _Bool  complex_  , _Bool  atomic_  , _Bool  thread_local  , _Bool  thread_  , _Bool  alignas_double  , _Bool  register_  , _Bool  unsigned_  , _Bool  noreturn_  , _Bool  volatile_  , _Bool  uniq_  , _Bool  static_  , _Bool  extern_  , _Bool  inline_  , _Bool  restrict_  , _Bool  long_long  , _Bool  long_  , _Bool  short_  , _Bool  norecord  , _Bool  weak_  );
void merge_pointer_attribute_to_type(struct sType*  type  , char*  pointer_attribute  );
char*  parse_variable_name_fun(struct sType*  type  , _Bool  anonymous_name  , _Bool  var_name_between_brace  , char*  attribute  , struct sInfo*  info  );
void show_type(struct sType*  type  , struct sInfo*  info  );
_Bool  is_pointer_type(struct sType*  type  , struct sInfo*  info  );
_Bool  is_owned_main(struct sType*  type_  , struct sClass*  klass  , struct sType*  field_type  , struct sType*  owner  , struct sInfo*  info  );
int main(int argc, char** argv);
int __append_char(char** p, unsigned long  int* rem, char c);
void __append_str(char** p, unsigned long  int* rem, const char* s);
int __neo_fopen_flags(const char* mode);
struct __neo_FILE*  fopen(const char* path, const char* mode);
int fread(void* ptr, int size, int nmemb, struct __neo_FILE*  f  );
int fwrite(const void* ptr, int size, int nmemb, struct __neo_FILE*  f  );
int fputc(int c, struct __neo_FILE*  f  );
int fputs(const char* s, struct __neo_FILE*  f  );
int fgetc(struct __neo_FILE*  f  );
int ungetc(int c, struct __neo_FILE*  f  );
int fflush(struct __neo_FILE*  f  );
int fclose(struct __neo_FILE*  f  );
int ferror(struct __neo_FILE*  f  );
char* fgets(char* s, int size, struct __neo_FILE*  f  );
int fprintf(struct __neo_FILE*  f  , const char* fmt, ...);
void perror(const char* s);
int remove(const char* path);
char* getenv(const char* name);
char* setlocale(int category, const char* locale);
void* sbrk(long  increment  );
void* malloc(unsigned long  int  size  );
void free(void* ptr);
void* calloc(unsigned long  int  nmemb  , unsigned long  int  size  );
void* realloc(void* ptr, unsigned long  int  size  );
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memchr(const void* s, int c, unsigned long  int  n  );
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strncmp(const char* p, const char* q, unsigned int n);
char* strcpy(char* dest, const char* src);
char* strncpy(char* s, const char* t, int n);
int strlen(const char* s);
char* strchr(const char* s, int c);
char* strrchr(const char* s, int c);
char* strndup(const char* s, unsigned long  int  n  );
unsigned long  int  arg_file_capacity(const struct arg_file*  file  );
void arg_lit_reset(struct arg_lit*  lit  );
void arg_file_reset(struct arg_file*  file  );
void arg_end_reset(struct arg_end*  end  );
void arg_add_error(struct arg_end*  end  , const char* msg, const char* arg, const struct arg_hdr*  hdr  );
int arg_has_capacity(int count, int maxcount);
struct arg_lit*  arg_litn(const char* shortopts, const char* longopts, int mincount, int maxcount, const char* glossary);
struct arg_file*  arg_filen(const char* shortopts, const char* longopts, const char* datatype, int mincount, int maxcount, const char* glossary);
struct arg_end*  arg_end(int maxerrors);
int argtable_reset(void** argtable, struct arg_end**  end_out  );
int argtable_entries(void** argtable, struct arg_end**  end_out  );
int arg_long_match(const char* options, const char* name);
struct arg_hdr*  arg_find_short(void** argtable, int entries, char short_opt);
struct arg_hdr*  arg_find_long(void** argtable, int entries, const char* name);
struct arg_file*  arg_find_positional(void** argtable, int entries);
int arg_file_add(struct arg_file*  file  , const char* value, struct arg_end*  end  , const char* errmsg);
int arg_parse(int argc, char** argv, void** argtable);
void arg_print_joined_option(char* buf, unsigned long  int  bufsz  , const struct arg_hdr*  hdr  );
void arg_print_syntax(void** argtable, const char* suffix);
void arg_print_glossary(void** argtable, const char* format);
void arg_print_errors(struct arg_end*  end  , const char* progname);
void arg_freetable(void** argtable, unsigned long  int  n  );
int isprint(int c);
int isspace(int c);
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int puts(const char* s);
char* strcat(char* dest, const char* src);
char* strncat(char* dest, const char* src, unsigned long  int  n  );
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, __builtin_va_list  ap  );
int __utoa_ull(char* dst, unsigned long  long v, int base, int lower);
void __fmt_num(char** p, unsigned long  int* rem, unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower);
void __fmt_putc(struct anonymous_typeX4*  o  , char c);
int __is_digit(char c);
void __emit_pad(struct anonymous_typeX4*  o  , char pad, int n);
void __emit_num(struct anonymous_typeX4*  o  , unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower, int left);
void __vformat(struct anonymous_typeX4*  o  , const char* fmt, __builtin_va_list  ap  );
int printf(const char* fmt, ...);
void __buf_putc(void* ctx, char ch);
void __str_putc(void* ctx, char ch);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, __builtin_va_list  ap  );
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsprintf(char* out, const char* fmt, __builtin_va_list  ap  );
int sprintf(char* out, const char* fmt, ...);
int atexit(void (*func)());
void __run_atexit();
double strtod(const char* nptr, char** endptr);
unsigned long  long __minux_parse_unsigned(const char* nptr, char** endptr, int base, int* neg_out, int* any_out);
unsigned long  int strtoul(const char* nptr, char** endptr, int base);
unsigned long  long strtoull(const char* nptr, char** endptr, int base);
long strtol(const char* nptr, char** endptr, int base);
long long strtoll(const char* nptr, char** endptr, int base);
long atol(const char* nptr);
int atoi(const char* nptr);
int __tolower(int c);
int strncasecmp(const char* a, const char* b, unsigned long  int  n  );
char* strerror(int errnum);
int ispunct(int c);
char* strtok(char* s, const char* delim);
int isxdigit(int c);
int __minux_isspace(int c);
int sscanf(const char* str, const char* fmt, ...);
_Bool  neo_frame_is_alive(unsigned long  int frame_id);
void stackframe();
void stackframe2(void* mem);
_Bool  die(const char* msg, char* sname, int sline);
void come_memleak_checker();
void* alloc_from_pages(unsigned long  int  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int  compiletime_size  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  int  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  int  count  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name);
_Bool  come_is_alive(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name);
void* come_increment_ref_count(void* mem, char* sname, int sline, int id);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool  no_decrement  , _Bool  no_free  , void* result_obj, char* sname, int sline, int id);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id);
void xassert(const char* msg, _Bool  test  );
void* come_null_checker(void* mem, const char* sname, int sline, int id);
void* come_heap_checker(void* mem, const char* sname, int sline, int id);
char*  __builtin_string(const char* str, char* sname, int sline);
struct buffer*  buffer_initialize(struct buffer*  self  );
struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  );
void buffer_finalize(struct buffer*  self  );
struct buffer*  buffer_clone(struct buffer*  self  );
_Bool  buffer_equals(struct buffer*  left  , struct buffer*  right  );
int buffer_length(struct buffer*  self  );
void buffer_reset(struct buffer*  self  );
void buffer_trim(struct buffer*  self  , int len);
struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  int  size  );
struct buffer*  buffer_append_char(struct buffer*  self  , char c);
struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem);
struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...);
struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem);
struct buffer*  buffer_append_int(struct buffer*  self  , int value);
struct buffer*  buffer_append_long(struct buffer*  self  , long value);
struct buffer*  buffer_append_short(struct buffer*  self  , short value);
struct buffer*  buffer_alignment(struct buffer*  self  );
int buffer_compare(struct buffer*  left  , struct buffer*  right  );
struct buffer*  charp_to_buffer(const char* self);
char*  buffer_to_string(struct buffer*  self  );
unsigned char* buffer_head_pointer(struct buffer*  self  );
struct buffer*  chara_to_buffer(char* self, unsigned long  int  len  );
struct buffer*  charpa_to_buffer(char** self, unsigned long  int  len  );
struct buffer*  shorta_to_buffer(short* self, unsigned long  int  len  );
struct buffer*  inta_to_buffer(int* self, unsigned long  int  len  );
struct buffer*  longa_to_buffer(long* self, unsigned long  int  len  );
struct buffer*  floata_to_buffer(float* self, unsigned long  int  len  );
struct buffer*  doublea_to_buffer(double* self, unsigned long  int  len  );
char*  buffer_printable(struct buffer*  self  );
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* chara_to_list(char* self, unsigned long  int  len  );
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charpa_to_list(char** self, unsigned long  int  len  );
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shorta_to_list(short* self, unsigned long  int  len  );
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* inta_to_list(int* self, unsigned long  int  len  );
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longa_to_list(long* self, unsigned long  int  len  );
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floata_to_list(float* self, unsigned long  int  len  );
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublea_to_list(double* self, unsigned long  int  len  );
_Bool  bool_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_equals(_Bool self, _Bool right);
_Bool  char_equals(char self, char right);
_Bool  short_equals(short self, short right);
_Bool  int_equals(int self, int right);
_Bool  long_equals(long self, long right);
_Bool  size_t_equals(unsigned long  int  self  , unsigned long  int  right  );
_Bool  float_equals(float self, float right);
_Bool  double_equals(double self, double right);
_Bool  bool_operator_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_operator_equals(_Bool  self  , _Bool  right  );
_Bool  char_operator_equals(char self, char right);
_Bool  short_operator_equals(short self, short right);
_Bool  int_operator_equals(int self, int right);
_Bool  long_operator_equals(long self, long right);
_Bool  bool_operator_not_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_operator_not_equals(_Bool  self  , _Bool  right  );
_Bool  char_operator_not_equals(char self, char right);
_Bool  short_operator_not_equals(short self, short right);
_Bool  int_operator_not_equals(int self, int right);
_Bool  long_operator_not_equals(long self, long right);
_Bool  charp_equals(const char* self, const char* right);
_Bool  string_equals(char* self, const char* right);
_Bool  voidp_equals(void* self, void* right);
_Bool  boolp_equals(_Bool*  self  , _Bool*  right  );
_Bool  string_operator_equals(char* self, const char* right);
_Bool  charp_operator_equals(const char* self, const char* right);
_Bool  chara_operator_equals(char* self, const char* right);
_Bool  voidp_operator_equals(const char* self, const char* right);
_Bool  voidp_operator_not_equals(const char* self, const char* right);
_Bool  string_operator_not_equals(char* self, const char* right);
_Bool  charp_operator_not_equals(const char* self, const char* right);
_Bool  chara_operator_not_equals(char* self, const char* right);
char*  charp_operator_add(const char* self, const char* right);
char*  string_operator_add(char* self, const char* right);
char*  charp_operator_mult(const char* self, int right);
char*  string_operator_mult(const char* self, int right);
_Bool  charpa_contained(const char* self[], unsigned long  int  len  , const char* str);
unsigned long  int  shorta_length(short* self, unsigned long  int  len  );
unsigned long  int  inta_length(int* self, unsigned long  int  len  );
unsigned long  int  longa_length(long* self, unsigned long  int  len  );
unsigned long  int  floata_length(float* self, unsigned long  int  len  );
unsigned long  int  doublea_length(double* self, unsigned long  int  len  );
unsigned int bool_get_hash_key(_Bool  value  );
unsigned int _Bool_get_hash_key(_Bool  value  );
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int  value  );
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(const char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool  bool_clone(_Bool  self  );
_Bool  _Bool_clone(_Bool  self  );
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int  size_t_clone(unsigned long  int  self  );
double double_clone(double self);
float float_clone(float self);
_Bool  xisalpha(char c);
_Bool  xisblank(char c);
_Bool  xisdigit(char c);
_Bool  xisspace(char c);
_Bool  xisalnum(char c);
_Bool  xisascii(char c);
_Bool  xispunct(char c);
int string_length(const char* str);
int charp_length(const char* str);
int chara_length(const char* str);
char*  charp_reverse(const char* str);
char*  string_operator_load_range_element(char* str, int head, int tail);
char*  charp_operator_load_range_element(char* str, int head, int tail);
char*  charp_substring(const char* str, int head, int tail);
char*  xsprintf(const char* msg, ...);
char*  charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
struct list$1char$ph* charp_split_char(char* self, char c);
char*  charp_xsprintf(char* self, const char* msg, ...);
char*  int_xsprintf(int self, const char* msg, ...);
char*  charp_printable(char* str);
char*  chara_printable(char* str);
char*  charp_sub_plain(char* self, char* str, char* replace);
char*  xbasename(char* path);
char*  xnoextname(char* path);
char*  xextname(char* path);
char*  bool_to_string(_Bool  self  );
char*  _Bool_to_string(_Bool  self  );
char*  char_to_string(char self);
char*  short_to_string(short self);
char*  int_to_string(int self);
char*  long_to_string(long self);
char*  size_t_to_string(unsigned long  int  self  );
char*  float_to_string(float self);
char*  double_to_string(double self);
char*  string_to_string(char* self);
char*  charp_to_string(const char* self);
int bool_compare(_Bool  left  , _Bool  right  );
int _Bool_compare(_Bool  left  , _Bool  right  );
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int  left  , unsigned long  int  right  );
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char*  charp_puts(char* self);
char*  charp_print(char* self);
char*  charp_printf(char* self, ...);
int int_printf(int self, char* msg);
long long_printf(long self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
static struct Result$1__neo_FILE$p* Result$1__neo_FILE$p_None(struct Result$1__neo_FILE$p* self);
static void Result$1__neo_FILE$p$p_finalize(struct Result$1__neo_FILE$p* self);
static struct Result$1__neo_FILE$p* Result$1__neo_FILE$p_Some(struct Result$1__neo_FILE$p* self, struct __neo_FILE*  v1  );
struct Result$1__neo_FILE$p* xfopen(const char* file_name, const char* mode);
static struct Result$1buffer$ph* Result$1buffer$ph_None(struct Result$1buffer$ph* self);
static void Result$1buffer$ph$p_finalize(struct Result$1buffer$ph* self);
static struct Result$1buffer$ph* Result$1buffer$ph_Some(struct Result$1buffer$ph* self, struct buffer*  v1  );
struct Result$1buffer$ph* FILE_fread(struct __neo_FILE*  f  );
static struct Result$1int$* Result$1int$_None(struct Result$1int$* self);
static void Result$1int$$p_finalize(struct Result$1int$* self);
static struct Result$1int$* Result$1int$_Some(struct Result$1int$* self, int v1);
struct Result$1int$* FILE_fwrite(struct __neo_FILE*  f  , const char* str);
struct Result$1int$* FILE_fclose(struct __neo_FILE*  f  );
struct Result$1__neo_FILE$p* FILE_fprintf(struct __neo_FILE*  f  , const char* msg, ...);
static struct Result$1list$1char$ph$ph* Result$1list$1char$ph$ph_None(struct Result$1list$1char$ph$ph* self);
static void Result$1list$1char$ph$ph$p_finalize(struct Result$1list$1char$ph$ph* self);
static struct Result$1list$1char$ph$ph* Result$1list$1char$ph$ph_Some(struct Result$1list$1char$ph$ph* self, struct list$1char$ph* v1);
static void list$1char$ph_finalize(struct list$1char$ph* self);
struct Result$1list$1char$ph$ph* FILE_readlines(struct __neo_FILE*  f  );
_Bool  xiswalpha(int  c  );
_Bool  xiswblank(int  c  );
_Bool  xiswdigit(int  c  );
_Bool  xiswalnum(int  c  );
_Bool  xiswascii(int  c  );
int string_index(char* str, const char* search_str, int default_value);
int charp_index(const char* str, const char* search_str, int default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sClass_finalize(struct sClass* self);
struct sClass* sClass_initialize(struct sClass* self, char*  name  , _Bool  number  , _Bool  union_  , _Bool  generics  , _Bool  method_generics  , _Bool  protocol_  , _Bool  struct_  , _Bool  float_  , int generics_num, int method_generics_num, _Bool  enum_  , _Bool  uniq_  , _Bool  typename  , struct sInfo*  info  , _Bool  iter_  );
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool  by_pointer  );
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph_remove_ordered_entry(struct map$2char$phsClass$ph* self, char*  key  , _Bool  by_pointer  );
static int map$2char$phsClass$ph_key_position(struct map$2char$phsClass$ph* self, char*  key  , _Bool  by_pointer  );
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static void list$1int$_finalize(struct list$1int$* self);
struct sType* sType_initialize(struct sType* self, char*  name  , _Bool  heap  , struct sInfo*  info  , _Bool  unsigned_  , int pointer_num_);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool  list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  );
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1int$* list$1int$$p_clone(struct list$1int$* self);
static struct list$1int$* list$1int$_add(struct list$1int$* self, int item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool  list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static void sBlock_finalize(struct sBlock*  self  );
static void sFun_finalize(struct sFun* self);
struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool  external  , _Bool  var_args  , struct sBlock*  block  , _Bool  static_  , struct sInfo*  info  , _Bool  inline_  , _Bool  uniq_  , char*  attribute  , char*  fun_attribute  , _Bool  const_fun  , char*  text_block  , char*  generics_sname  , int generics_sline, _Bool  immutable_  , char*  asm_fun  );
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool  var_args  , char*  block  , struct sInfo*  info  , char*  generics_sname  , int generics_sline, _Bool  const_fun  );
static void CVALUE_finalize(struct CVALUE* self);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
struct sModule* sModule_initialize(struct sModule* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool  global  , struct sVarTable*  parent  );
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo*  info  );
_Bool  sNodeBase_terminated(struct sNodeBase* self);
char*  sNodeBase_sname(struct sNodeBase* self, struct sInfo*  info  );
struct sNode* sNodeBase_left_value(struct sNodeBase* self);
static void sCurrentNode_finalize(struct sCurrentNode* self);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  );
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_kind(struct sCurrentNode* self);
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool  map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  );
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
_Bool  sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  );
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo*  info  );
_Bool  sNothingNode_terminated(struct sNothingNode* self);
char*  sNothingNode_kind(struct sNothingNode* self);
_Bool  sNothingNode_compile(struct sNothingNode* self, struct sInfo*  info  );
static void sNullChecker_finalize(struct sNullChecker* self);
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool  sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
static void sHeapChecker_finalize(struct sHeapChecker* self);
struct sHeapChecker* sHeapChecker_initialize(struct sHeapChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sHeapChecker_kind(struct sHeapChecker* self);
_Bool  sHeapChecker_compile(struct sHeapChecker* self, struct sInfo*  info  );
static void sFunNode_finalize(struct sFunNode* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun*  fun  , struct sInfo*  info  );
char*  sFunNode_kind(struct sFunNode* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
_Bool  sFunNode_compile(struct sFunNode* self, struct sInfo*  info  );
// uniq global variable
const char _ctype_[1+256]={
     0,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 40, 40, 40, 40, 40, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
    32,-120, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4, 16, 16, 16, 16, 16,
    16, 16, 65, 65, 65, 65, 65, 65,  1,  1,  1,  1,  1,  1,  1,  1,
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 16, 16, 16, 16,
    16, 16, 66, 66, 66, 66, 66, 66,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 16, 16, 16, 16,
    32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0
};

int errno;

struct __neo_FILE  __neo_stdin_file  ={ 0, 0, 0, 0, 0, 0 };

struct __neo_FILE  __neo_stdout_file  ={ 1, 0, 0, 0, 0, 0 };

struct __neo_FILE  __neo_stderr_file  ={ 2, 0, 0, 0, 0, 0 };

struct __neo_FILE*  stdin  =&__neo_stdin_file;

struct __neo_FILE*  stdout  =&__neo_stdout_file;

struct __neo_FILE*  stderr  =&__neo_stderr_file;

struct mem_block*  free_list  =((void*)0);

unsigned long  int  __neo_sbrk_cur  =0;

int __neo_sbrk_inited=0;

int __atexit_count=0;

char* __strtok_save;

struct neo_frame*  neo_current_frame  =(void*)0;

unsigned long  int neo_frame_id=0;

struct sMemHeader*  gAllocMem  =(void*)0;

struct sMemHeader*  gFreeMem  =(void*)0;

int gNumAlloc=0;

int gNumFree=0;

// inline function

// body function
int main(int argc, char** argv)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "main"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int __result_obj__0;
    setlocale(6,"");
        __result_obj__0 = come_main(argc,argv);
    neo_current_frame = fr.prev;
    come_memleak_checker();
    return __result_obj__0;
}

int __append_char(char** p, unsigned long  int* rem, char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__append_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(*rem>1) {
        **p=c;
        (*p)++;
        (*rem)--;
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void __append_str(char** p, unsigned long  int* rem, const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__append_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s&&*rem>1) {
        **p=*s++;
        (*p)++;
        (*rem)--;
    }
    neo_current_frame = fr.prev;
}

int __neo_fopen_flags(const char* mode)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__neo_fopen_flags"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(mode==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    if(mode[0]==114) {
        if(mode[1]==43) {
                        neo_current_frame = fr.prev;
            return 2;
        }
                neo_current_frame = fr.prev;
        return 0;
    }
    if(mode[0]==119) {
        if(mode[1]==43) {
                        neo_current_frame = fr.prev;
            return 2|512|1024;
        }
                neo_current_frame = fr.prev;
        return 1|512|1024;
    }
    if(mode[0]==97) {
        if(mode[1]==43) {
                        neo_current_frame = fr.prev;
            return 2|512|8;
        }
                neo_current_frame = fr.prev;
        return 1|512|8;
    }
        neo_current_frame = fr.prev;
    return -1;
    neo_current_frame = fr.prev;
}

struct __neo_FILE*  fopen(const char* path, const char* mode)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "fopen"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int flags;
    struct __neo_FILE*  __result_obj__0  ;
    int fd;
    struct __neo_FILE*  f  ;
    memset(&flags, 0, sizeof(flags));
    memset(&fd, 0, sizeof(fd));
    memset(&f, 0, sizeof(f));
    flags=__neo_fopen_flags(mode);
    if(path==((void*)0)||flags<0) {
        errno=22;
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    fd=open(path,flags,0666);
    if(fd<0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    f=(struct __neo_FILE* )malloc(sizeof(struct __neo_FILE ));
    if(f==((void*)0)) {
        close(fd);
        errno=12;
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    f->fd=fd;
    f->error=0;
    f->eof=0;
    f->owned=1;
    f->has_ungot=0;
    f->ungot=0;
        __result_obj__0 = f;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int fread(void* ptr, int size, int nmemb, struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "fread"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    long bytes;
    memset(&bytes, 0, sizeof(bytes));
    if(ptr==((void*)0)||f==((void*)0)||size<=0||nmemb<=0) {
                neo_current_frame = fr.prev;
        return 0;
    }
    bytes=read(f->fd,ptr,(unsigned long  int )(size*nmemb));
    if(bytes<0) {
        f->error=1;
                neo_current_frame = fr.prev;
        return 0;
    }
    if(bytes==0) {
        f->eof=1;
    }
        neo_current_frame = fr.prev;
    return (int)(({ __typeof__(size) __neo_div_right1 = (size); if(__neo_div_right1 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (bytes) / __neo_div_right1; }));
    neo_current_frame = fr.prev;
}

int fwrite(const void* ptr, int size, int nmemb, struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "fwrite"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  total  ;
    unsigned long  int  done  ;
    long n;
    memset(&total, 0, sizeof(total));
    memset(&done, 0, sizeof(done));
    memset(&n, 0, sizeof(n));
    if(ptr==((void*)0)||f==((void*)0)||size<=0||nmemb<=0) {
                neo_current_frame = fr.prev;
        return 0;
    }
    total=(unsigned long  int )(size*nmemb);
    done=0;
    const char* p=(const char*)ptr;
    while(done<total) {
        n=write(f->fd,p+done,total-done);
        if(n<=0) {
            f->error=1;
            break;
        }
        done+=(unsigned long  int )n;
    }
        neo_current_frame = fr.prev;
    return (int)(({ __typeof__(size) __neo_div_right2 = (size); if(__neo_div_right2 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (done) / __neo_div_right2; }));
    neo_current_frame = fr.prev;
}

int fputc(int c, struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "fputc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned char ch;
    memset(&ch, 0, sizeof(ch));
    ch=(unsigned char)c;
    if(fwrite(&ch,1,1,f)!=1) {
                neo_current_frame = fr.prev;
        return (-1);
    }
        neo_current_frame = fr.prev;
    return (int)ch;
    neo_current_frame = fr.prev;
}

int fputs(const char* s, struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "fputs"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int len;
    memset(&len, 0, sizeof(len));
    if(s==((void*)0)||f==((void*)0)) {
                neo_current_frame = fr.prev;
        return (-1);
    }
    len=strlen(s);
    if(fwrite(s,1,len,f)!=len) {
                neo_current_frame = fr.prev;
        return (-1);
    }
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

int fgetc(struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "fgetc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned char ch;
    long n;
    memset(&ch, 0, sizeof(ch));
    memset(&n, 0, sizeof(n));
    if(f==((void*)0)) {
                neo_current_frame = fr.prev;
        return (-1);
    }
    if(f->has_ungot) {
        f->has_ungot=0;
                neo_current_frame = fr.prev;
        return f->ungot;
    }
    n=read(f->fd,&ch,1);
    if(n<0) {
        f->error=1;
                neo_current_frame = fr.prev;
        return (-1);
    }
    if(n==0) {
        f->eof=1;
                neo_current_frame = fr.prev;
        return (-1);
    }
        neo_current_frame = fr.prev;
    return (int)ch;
    neo_current_frame = fr.prev;
}

int ungetc(int c, struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "ungetc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(f==((void*)0)||c==(-1)||f->has_ungot) {
                neo_current_frame = fr.prev;
        return (-1);
    }
    f->has_ungot=1;
    f->ungot=(unsigned char)c;
    f->eof=0;
        neo_current_frame = fr.prev;
    return f->ungot;
    neo_current_frame = fr.prev;
}

int fflush(struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "fflush"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(f!=((void*)0)&&f->error) {
                neo_current_frame = fr.prev;
        return (-1);
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int fclose(struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "fclose"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    if(f==((void*)0)) {
        errno=22;
                neo_current_frame = fr.prev;
        return -1;
    }
    result=0;
    if(f->owned) {
        result=close(f->fd);
    }
    free(f);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

int ferror(struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "ferror"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(f==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return f->error;
    neo_current_frame = fr.prev;
}

char* fgets(char* s, int size, struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "fgets"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    int i;
    char c;
    long n;
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    memset(&n, 0, sizeof(n));
    if(s==((void*)0)||size<=0||f==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    i=0;
    while(i<size-1) {
        n=read(f->fd,&c,1);
        if(n<0) {
            f->error=1;
            break;
        }
        if(n==0) {
            f->eof=1;
            break;
        }
        s[i]=c;
        i++;
        if(c==10) {
            break;
        }
    }
    s[i]=0;
    if(i==0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = s;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int fprintf(struct __neo_FILE*  f  , const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "fprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int n;
    int len;
    int written;
    memset(&ap, 0, sizeof(ap));
    memset(&n, 0, sizeof(n));
    memset(&len, 0, sizeof(len));
    memset(&written, 0, sizeof(written));
    if(f==((void*)0)||fmt==((void*)0)) {
        errno=22;
                neo_current_frame = fr.prev;
        return -1;
    }
    char msg[4096];
    memset(&msg, 0, sizeof(msg));
    __builtin_va_start(ap,fmt);
    n=vsnprintf(msg,sizeof(msg),fmt,ap);
    __builtin_va_end(ap);
    if(n<0) {
        f->error=1;
                neo_current_frame = fr.prev;
        return -1;
    }
    len=strlen(msg);
    written=fwrite(msg,1,len,f);
    if(written!=len) {
        f->error=1;
                neo_current_frame = fr.prev;
        return -1;
    }
        neo_current_frame = fr.prev;
    return written;
    neo_current_frame = fr.prev;
}

void perror(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "perror"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(s!=((void*)0)&&s[0]!=0) {
        fputs(s,stderr);
        fputs(": ",stderr);
    }
    fputs("error\n",stderr);
    neo_current_frame = fr.prev;
}

int remove(const char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "remove"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return unlink(path);
    neo_current_frame = fr.prev;
}

char* getenv(const char* name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "getenv"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    (void)name;
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* setlocale(int category, const char* locale)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "setlocale"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    (void)category;
    (void)locale;
        __result_obj__0 = "";
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* sbrk(long  increment  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sbrk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    long now;
    void* __result_obj__0;
    unsigned long  int  want  ;
    long rc;
    long newer;
    void* old;
    memset(&now, 0, sizeof(now));
    memset(&want, 0, sizeof(want));
    memset(&rc, 0, sizeof(rc));
    memset(&newer, 0, sizeof(newer));
    memset(&old, 0, sizeof(old));
    if(!__neo_sbrk_inited) {
        now=brk(0);
        if(now<0) {
            errno=12;
                        __result_obj__0 = (void*)-1;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __neo_sbrk_cur=(unsigned long  int )now;
        __neo_sbrk_inited=1;
    }
    if(increment==0) {
                __result_obj__0 = (void*)__neo_sbrk_cur;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    want=__neo_sbrk_cur+(long )increment;
    if((increment>0&&want<__neo_sbrk_cur)||(increment<0&&want>__neo_sbrk_cur)) {
        errno=12;
                __result_obj__0 = (void*)-1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    rc=brk((long)want);
    if(rc<0) {
        errno=12;
                __result_obj__0 = (void*)-1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    newer=brk(0);
    if(newer<0) {
        errno=12;
                __result_obj__0 = (void*)-1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    old=(void*)__neo_sbrk_cur;
    __neo_sbrk_cur=(unsigned long  int )newer;
        __result_obj__0 = old;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* malloc(unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "malloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    struct mem_block*  current  ;
    struct mem_block*  prev  ;
    struct mem_block*  new_mem  ;
    memset(&current, 0, sizeof(current));
    memset(&prev, 0, sizeof(prev));
    memset(&new_mem, 0, sizeof(new_mem));
    if(size==0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(({ __typeof__(8) __neo_div_right3 = (8); if(__neo_div_right3 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (size) % __neo_div_right3; })!=0) {
        size+=8-(({ __typeof__(8) __neo_div_right4 = (8); if(__neo_div_right4 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (size) % __neo_div_right4; }));
    }
    size+=sizeof(struct mem_block );
    current=free_list;
    prev=((void*)0);
    while(current!=((void*)0)) {
        if(current->size>=size) {
            if(prev==((void*)0)) {
                free_list=current->next;
            }
            else {
                prev->next=current->next;
            }
                        __result_obj__0 = (void*)(current+1);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        prev=current;
        current=current->next;
    }
    new_mem=(struct mem_block* )sbrk(size);
    if(new_mem==(void*)-1) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    new_mem->size=size;
    new_mem->next=((void*)0);
        __result_obj__0 = (void*)(new_mem+1);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void free(void* ptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "free"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct mem_block*  block  ;
    memset(&block, 0, sizeof(block));
    if(ptr==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    block=(struct mem_block* )ptr-1;
    block->next=free_list;
    free_list=block;
    neo_current_frame = fr.prev;
}

void* calloc(unsigned long  int  nmemb  , unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "calloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  total_size  ;
    void* __result_obj__0;
    void* ptr;
    memset(&total_size, 0, sizeof(total_size));
    memset(&ptr, 0, sizeof(ptr));
    total_size=nmemb*size;
    if(total_size==0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ptr=malloc(total_size);
    if(ptr!=((void*)0)) {
        memset(ptr,0,total_size);
    }
        __result_obj__0 = ptr;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* realloc(void* ptr, unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "realloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    struct mem_block*  oldb  ;
    unsigned long  int  old_total  ;
    unsigned long  int  old_payload  ;
    void* np;
    unsigned long  int  tocopy  ;
    memset(&oldb, 0, sizeof(oldb));
    memset(&old_total, 0, sizeof(old_total));
    memset(&old_payload, 0, sizeof(old_payload));
    memset(&np, 0, sizeof(np));
    memset(&tocopy, 0, sizeof(tocopy));
    if(ptr==0) {
                __result_obj__0 = malloc(size);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(size==0) {
        free(ptr);
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    oldb=(struct mem_block* )ptr-1;
    old_total=oldb->size;
    old_payload=(((old_total>sizeof(struct mem_block )))?((old_total-sizeof(struct mem_block ))):(0));
    np=malloc(size);
    if(!np) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    tocopy=((old_payload<size)?(old_payload):(size));
    memcpy(np,ptr,tocopy);
    free(ptr);
        __result_obj__0 = np;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strdup(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strdup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  len  ;
    char* p;
    char* __result_obj__0;
    memset(&len, 0, sizeof(len));
    memset(&p, 0, sizeof(p));
    const char* s2=s;
    len=strlen(s2)+1;
    p=malloc(len);
    if(p) {
        memcpy(p,s2,len);
    }
        __result_obj__0 = p;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int strcmp(const char* s1, const char* s2)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strcmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s1&&(*s1==*s2)) {
        s1++;
        s2++;
    }
        neo_current_frame = fr.prev;
    return (unsigned char)*s1-(unsigned char)*s2;
    neo_current_frame = fr.prev;
}

char* strstr(const char* haystack, const char* needle)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strstr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    if(!*needle) {
                __result_obj__0 = (char*)haystack;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    for(;*haystack;haystack++){
        const char* h=haystack;
        const char* n=needle;
        while(*h&&*n&&(*h==*n)) {
            h++;
            n++;
        }
        if(!*n) {
                        __result_obj__0 = (char*)haystack;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* memset(void* dst, int c, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* cdst;
    int i;
    void* __result_obj__0;
    cdst=(char*)dst;
    for(i=0    ;i<n;i++){
        cdst[i]=c;
    }
        __result_obj__0 = dst;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int memcmp(const void* v1, const void* v2, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memcmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    const unsigned char* s1;
    const unsigned char* s2;
    memset(&s1, 0, sizeof(s1));
    memset(&s2, 0, sizeof(s2));
    s1=v1;
    s2=v2;
    while(n-->0) {
        if(*s1!=*s2) {
                        neo_current_frame = fr.prev;
            return *s1-*s2;
        }
        s1++,s2++;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void* memchr(const void* s, int c, unsigned long  int  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memchr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned char target;
    void* __result_obj__0;
    memset(&target, 0, sizeof(target));
    const unsigned char* p=(const unsigned char*)s;
    target=(unsigned char)c;
    while(n--) {
        if(*p==target) {
                        __result_obj__0 = (void*)p;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        p++;
    }
        __result_obj__0 = (void*)0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* memmove(void* dst, const void* src, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memmove"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    const char* s;
    char* d;
    void* __result_obj__0;
    memset(&s, 0, sizeof(s));
    memset(&d, 0, sizeof(d));
    if(n==0) {
                __result_obj__0 = dst;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    s=src;
    d=dst;
    if(s<d&&s+n>d) {
        s+=n;
        d+=n;
        while(n-->0) {
            *--d=*--s;
        }
    }
    else {
        while(n-->0) {
            *d++=*s++;
        }
    }
        __result_obj__0 = dst;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* memcpy(void* dst, const void* src, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memcpy"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
        __result_obj__0 = memmove(dst,src,n);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int strncmp(const char* p, const char* q, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(n>0&&*p&&*p==*q) {
        n--,p++,q++;
    }
    if(n==0) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return (unsigned char)*p-(unsigned char)*q;
    neo_current_frame = fr.prev;
}

char* strcpy(char* dest, const char* src)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strcpy"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* d;
    char* __result_obj__0;
    memset(&d, 0, sizeof(d));
    d=dest;
    while((*d++=*src++)!=0) {
        ;
    }
        __result_obj__0 = dest;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strncpy(char* s, const char* t, int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncpy"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* os;
    char* __result_obj__0;
    memset(&os, 0, sizeof(os));
    os=s;
    while(n-->0&&(*s++=*t++)!=0) {
        ;
    }
    while(n-->0) {
        *s++=0;
    }
        __result_obj__0 = os;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int strlen(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strlen"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int n;
    memset(&n, 0, sizeof(n));
    for(n=0    ;s[n];n++){
        ;
    }
        neo_current_frame = fr.prev;
    return n;
    neo_current_frame = fr.prev;
}

char* strchr(const char* s, int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strchr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    while(*s) {
        if(*s==(char)c) {
                        __result_obj__0 = (char*)s;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        s++;
    }
        __result_obj__0 = (((c==0))?((char*)s):(0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strrchr(const char* s, int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strrchr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    const char* last=(const char*)0;
    do {
        if(*s==(char)c) {
            last=s;
        }
    } while(*s++);
        __result_obj__0 = (char*)last;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strndup(const char* s, unsigned long  int  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strndup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  len  ;
    char* p;
    char* __result_obj__0;
    unsigned long  int  i  ;
    memset(&len, 0, sizeof(len));
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    len=0;
    while(len<n&&s[len]) {
        len++;
    }
    p=(char*)malloc(len+1);
    if(!p) {
                __result_obj__0 = (char*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    for(i=0    ;i<len;i++){
        p[i]=s[i];
    }
    p[len]=0;
        __result_obj__0 = p;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  int  arg_file_capacity(const struct arg_file*  file  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_file_capacity"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int maxc;
    memset(&maxc, 0, sizeof(maxc));
    maxc=file->hdr.maxcount /* uho */;
        neo_current_frame = fr.prev;
    return (((maxc>0))?((unsigned long  int )maxc):(1u));
    neo_current_frame = fr.prev;
}

void arg_lit_reset(struct arg_lit*  lit  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_lit_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(lit) {
        lit->count=0;
    }
    neo_current_frame = fr.prev;
}

void arg_file_reset(struct arg_file*  file  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_file_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  cap  ;
    unsigned long  int  i  ;
    memset(&cap, 0, sizeof(cap));
    memset(&i, 0, sizeof(i));
    if(!file) {
                neo_current_frame = fr.prev;
        return;
    }
    file->count=0;
    cap=arg_file_capacity(file);
    for(i=0    ;i<cap;++i){
        file->filename[i]="";
    }
    neo_current_frame = fr.prev;
}

void arg_end_reset(struct arg_end*  end  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_end_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    end->count=0;
    if(!end->errors) {
                neo_current_frame = fr.prev;
        return;
    }
    for(i=0    ;i<end->maxerrors;++i){
        end->errors[i].msg=((void*)0);
        end->errors[i].argval=((void*)0);
        end->errors[i].hdr=((void*)0);
    }
    neo_current_frame = fr.prev;
}

void arg_add_error(struct arg_end*  end  , const char* msg, const char* arg, const struct arg_hdr*  hdr  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_add_error"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!end||end->maxerrors<=0) {
                neo_current_frame = fr.prev;
        return;
    }
    if(end->count>=end->maxerrors) {
                neo_current_frame = fr.prev;
        return;
    }
    end->errors[end->count].msg=msg;
    end->errors[end->count].argval=arg;
    end->errors[end->count].hdr=hdr;
    end->count++;
    neo_current_frame = fr.prev;
}

int arg_has_capacity(int count, int maxcount)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_has_capacity"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (maxcount<=0)||(count<maxcount);
    neo_current_frame = fr.prev;
}

struct arg_lit*  arg_litn(const char* shortopts, const char* longopts, int mincount, int maxcount, const char* glossary)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_litn"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_lit*  __result_obj__0  ;
    struct arg_lit*  lit  ;
    memset(&lit, 0, sizeof(lit));
    if(mincount<0||maxcount<0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    lit=(struct arg_lit* )malloc(sizeof(*lit));
    if(!lit) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    lit->hdr.kind=(1);
    lit->hdr.shortopts=shortopts;
    lit->hdr.longopts=longopts;
    lit->hdr.datatype=((void*)0);
    lit->hdr.glossary=glossary;
    lit->hdr.mincount=mincount;
    lit->hdr.maxcount=maxcount;
    lit->count=0;
        __result_obj__0 = lit;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_file*  arg_filen(const char* shortopts, const char* longopts, const char* datatype, int mincount, int maxcount, const char* glossary)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_filen"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_file*  __result_obj__0  ;
    struct arg_file*  file  ;
    unsigned long  int  cap  ;
    unsigned long  int  i  ;
    memset(&file, 0, sizeof(file));
    memset(&cap, 0, sizeof(cap));
    memset(&i, 0, sizeof(i));
    if(mincount<0||maxcount<0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    file=(struct arg_file* )malloc(sizeof(*file));
    if(!file) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    cap=(((maxcount>0))?((unsigned long  int )maxcount):(1u));
    file->filename=(const char**)malloc(sizeof(char*)*cap);
    if(!file->filename) {
        free(file);
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    file->hdr.kind=(2);
    file->hdr.shortopts=shortopts;
    file->hdr.longopts=longopts;
    file->hdr.datatype=datatype;
    file->hdr.glossary=glossary;
    file->hdr.mincount=mincount;
    file->hdr.maxcount=maxcount;
    file->count=0;
    for(i=0    ;i<cap;++i){
        file->filename[i]="";
    }
        __result_obj__0 = file;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_end*  arg_end(int maxerrors)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  __result_obj__0  ;
    struct arg_end*  end  ;
    memset(&end, 0, sizeof(end));
    if(maxerrors<0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    end=(struct arg_end* )malloc(sizeof(*end));
    if(!end) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    end->hdr.kind=(3);
    end->hdr.shortopts=((void*)0);
    end->hdr.longopts=((void*)0);
    end->hdr.datatype=((void*)0);
    end->hdr.glossary=((void*)0);
    end->hdr.mincount=0;
    end->hdr.maxcount=0;
    end->maxerrors=maxerrors;
    end->errors=((void*)0);
    if(maxerrors>0) {
        end->errors=(struct arg_error* )malloc(sizeof(struct arg_error )*(unsigned long  int )maxerrors);
        if(!end->errors) {
            free(end);
                        __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    arg_end_reset(end);
        __result_obj__0 = end;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int argtable_reset(void** argtable, struct arg_end**  end_out  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "argtable_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int count;
    struct arg_end*  end  ;
    struct arg_hdr*  hdr  ;
    memset(&count, 0, sizeof(count));
    memset(&end, 0, sizeof(end));
    memset(&hdr, 0, sizeof(hdr));
    count=0;
    end=((void*)0);
    while(argtable[count]) {
        hdr=(struct arg_hdr* )argtable[count];
        if(hdr->kind==(1)) {
            arg_lit_reset((struct arg_lit* )hdr);
        }
        else if(hdr->kind==(2)) {
            arg_file_reset((struct arg_file* )hdr);
        }
        else if(hdr->kind==(3)) {
            end=(struct arg_end* )hdr;
            arg_end_reset(end);
            count++;
            break;
        }
        count++;
    }
    if(end_out) {
        *end_out=end;
    }
        neo_current_frame = fr.prev;
    return count;
    neo_current_frame = fr.prev;
}

int argtable_entries(void** argtable, struct arg_end**  end_out  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "argtable_entries"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int count;
    struct arg_end*  end  ;
    struct arg_hdr*  hdr  ;
    memset(&count, 0, sizeof(count));
    memset(&end, 0, sizeof(end));
    memset(&hdr, 0, sizeof(hdr));
    count=0;
    end=((void*)0);
    while(argtable[count]) {
        hdr=(struct arg_hdr* )argtable[count];
        if(hdr->kind==(3)) {
            end=(struct arg_end* )hdr;
            break;
        }
        count++;
    }
    if(end_out) {
        *end_out=end;
    }
        neo_current_frame = fr.prev;
    return count;
    neo_current_frame = fr.prev;
}

int arg_long_match(const char* options, const char* name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_long_match"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  namelen  ;
    unsigned long  int  len  ;
    memset(&namelen, 0, sizeof(namelen));
    memset(&len, 0, sizeof(len));
    if(!options||!name) {
                neo_current_frame = fr.prev;
        return 0;
    }
    namelen=strlen(name);
    const char* p=options;
    while(*p) {
        const char* start=p;
        while(*p&&*p!=44&&*p!=124) {
            p++;
        }
        len=(unsigned long  int )(p-start);
        if(len==namelen&&strncmp(start,name,namelen)==0) {
                        neo_current_frame = fr.prev;
            return 1;
        }
        if(*p) {
            p++;
        }
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

struct arg_hdr*  arg_find_short(void** argtable, int entries, char short_opt)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_find_short"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct arg_hdr*  hdr  ;
    char c;
    struct arg_hdr*  __result_obj__0  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&c, 0, sizeof(c));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        const char* s=hdr->shortopts;
        while(s&&*s) {
            c=*s;
            if(c==short_opt) {
                                __result_obj__0 = hdr;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            s=s+1;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_hdr*  arg_find_long(void** argtable, int entries, const char* name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_find_long"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct arg_hdr*  hdr  ;
    struct arg_hdr*  __result_obj__0  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        if(arg_long_match(hdr->longopts,name)) {
                        __result_obj__0 = hdr;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_file*  arg_find_positional(void** argtable, int entries)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_find_positional"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct arg_hdr*  hdr  ;
    struct arg_file*  file  ;
    unsigned long  int  cap  ;
    struct arg_file*  __result_obj__0  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&file, 0, sizeof(file));
    memset(&cap, 0, sizeof(cap));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind!=(2)) {
            continue;
        }
        if((hdr->shortopts&&hdr->shortopts[0])||(hdr->longopts&&hdr->longopts[0])) {
            continue;
        }
        file=(struct arg_file* )hdr;
        cap=arg_file_capacity(file);
        if((unsigned long  int )file->count<cap) {
                        __result_obj__0 = file;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int arg_file_add(struct arg_file*  file  , const char* value, struct arg_end*  end  , const char* errmsg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_file_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  cap  ;
    memset(&cap, 0, sizeof(cap));
    if(!file) {
                neo_current_frame = fr.prev;
        return -1;
    }
    cap=arg_file_capacity(file);
    if((unsigned long  int )file->count>=cap&&cap>0) {
        arg_add_error(end,errmsg,value,&file->hdr);
                neo_current_frame = fr.prev;
        return -1;
    }
    file->filename[file->count]=((value)?(value):(""));
    file->count++;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int arg_parse(int argc, char** argv, void** argtable)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_parse"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  end  ;
    int total;
    int entries;
    struct arg_hdr*  hdr  ;
    int errors_before;
    int stop_opts;
    int i;
    char* arg;
    unsigned long  int  len  ;
    unsigned long  int  k  ;
    struct arg_hdr*  hdr_0  ;
    struct arg_lit*  lit  ;
    char short_opt;
    struct arg_hdr*  hdr_1  ;
    struct arg_lit*  lit_2  ;
    struct arg_file*  file  ;
    int i_4;
    struct arg_hdr*  hdr_5  ;
    int count;
    memset(&end, 0, sizeof(end));
    memset(&total, 0, sizeof(total));
    memset(&entries, 0, sizeof(entries));
    memset(&hdr, 0, sizeof(hdr));
    memset(&errors_before, 0, sizeof(errors_before));
    memset(&stop_opts, 0, sizeof(stop_opts));
    memset(&i, 0, sizeof(i));
    memset(&arg, 0, sizeof(arg));
    memset(&len, 0, sizeof(len));
    memset(&k, 0, sizeof(k));
    memset(&hdr_0, 0, sizeof(hdr_0));
    memset(&lit, 0, sizeof(lit));
    memset(&short_opt, 0, sizeof(short_opt));
    memset(&hdr_1, 0, sizeof(hdr_1));
    memset(&lit_2, 0, sizeof(lit_2));
    memset(&file, 0, sizeof(file));
    memset(&i_4, 0, sizeof(i_4));
    memset(&hdr_5, 0, sizeof(hdr_5));
    memset(&count, 0, sizeof(count));
    if(!argtable) {
                neo_current_frame = fr.prev;
        return 0;
    }
    end=((void*)0);
    total=argtable_reset(argtable,&end);
    if(!end) {
                neo_current_frame = fr.prev;
        return 0;
    }
    entries=0;
    while(entries<total&&argtable[entries]) {
        hdr=(struct arg_hdr* )argtable[entries];
        if(hdr->kind==(3)) {
            break;
        }
        entries++;
    }
    errors_before=end->count;
    stop_opts=0;
    for(i=1    ;i<argc;++i){
        arg=argv[i];
        if(!stop_opts&&arg[0]==45&&arg[1]!=0) {
            if(arg[1]==45&&arg[2]==0) {
                stop_opts=1;
                continue;
            }
            if(arg[1]==45) {
                const char* name=arg+2;
                const char* val_=((void*)0);
                const char* eq=strchr(name,61);
                char namebuf[64];
                memset(&namebuf, 0, sizeof(namebuf));
                if(eq) {
                    len=(unsigned long  int )(eq-name);
                    if(len>=sizeof(namebuf)) {
                        len=sizeof(namebuf)-1;
                    }
                    for(k=0                    ;k<len;++k){
                        ({ long long __neo_array_index1_0 = (long long)(k); if(__neo_array_index1_0 < 0 || __neo_array_index1_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } namebuf[__neo_array_index1_0] = name[k]; });
                    }
                    ({ long long __neo_array_index2_0 = (long long)(len); if(__neo_array_index2_0 < 0 || __neo_array_index2_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } namebuf[__neo_array_index2_0] = 0; });
                    name=namebuf;
                    val_=eq+1;
                }
                hdr_0=arg_find_long(argtable,entries,name);
                if(!hdr_0) {
                    arg_add_error(end,"unknown option",arg,((void*)0));
                    continue;
                }
                if(hdr_0->kind==(1)) {
                    if(val_&&*val_) {
                        arg_add_error(end,"option does not take a value",arg,hdr_0);
                        continue;
                    }
                    lit=(struct arg_lit* )hdr_0;
                    if(!arg_has_capacity(lit->count,hdr_0->maxcount)) {
                        arg_add_error(end,"option specified too many times",arg,hdr_0);
                        continue;
                    }
                    lit->count++;
                    continue;
                }
                if(hdr_0->kind==(2)) {
                    if(!val_) {
                        if(i+1<argc) {
                            val_=argv[++i];
                        }
                        else {
                            arg_add_error(end,"option requires a value",arg,hdr_0);
                            continue;
                        }
                    }
                    arg_file_add((struct arg_file* )hdr_0,val_,end,"option specified too many times");
                    continue;
                }
                arg_add_error(end,"unsupported option",arg,hdr_0);
                continue;
            }
            const char* p=arg+1;
            while(*p) {
                short_opt=*p;
                p=p+1;
                hdr_1=arg_find_short(argtable,entries,short_opt);
                if(!hdr_1) {
                    arg_add_error(end,"unknown option",arg,((void*)0));
                    continue;
                }
                if(hdr_1->kind==(1)) {
                    lit_2=(struct arg_lit* )hdr_1;
                    if(!arg_has_capacity(lit_2->count,hdr_1->maxcount)) {
                        arg_add_error(end,"option specified too many times",((void*)0),hdr_1);
                        continue;
                    }
                    lit_2->count++;
                    continue;
                }
                if(hdr_1->kind==(2)) {
                    const char* val__3=((void*)0);
                    if(*p) {
                        val__3=p;
                        p+=strlen(p);
                    }
                    else if(i+1<argc) {
                        val__3=argv[++i];
                    }
                    else {
                        arg_add_error(end,"option requires a value",arg,hdr_1);
                        break;
                    }
                    arg_file_add((struct arg_file* )hdr_1,val__3,end,"option specified too many times");
                    break;
                }
            }
            continue;
        }
        file=arg_find_positional(argtable,entries);
        if(!file) {
            arg_add_error(end,"unexpected argument",arg,((void*)0));
            continue;
        }
        arg_file_add(file,arg,end,"too many positional arguments");
    }
    for(i_4=0    ;i_4<entries;++i_4){
        hdr_5=(struct arg_hdr* )argtable[i_4];
        if(!hdr_5||hdr_5->kind==(3)) {
            continue;
        }
        count=0;
        if(hdr_5->kind==(1)) {
            count=((struct arg_lit* )hdr_5)->count;
        }
        else if(hdr_5->kind==(2)) {
            count=((struct arg_file* )hdr_5)->count;
        }
        if(hdr_5->mincount>0&&count<hdr_5->mincount) {
            if((hdr_5->shortopts&&hdr_5->shortopts[0])||(hdr_5->longopts&&hdr_5->longopts[0])) {
                arg_add_error(end,"missing required option",((hdr_5->longopts)?(hdr_5->longopts):(hdr_5->shortopts)),hdr_5);
            }
            else {
                arg_add_error(end,"missing required argument",hdr_5->datatype,hdr_5);
            }
        }
    }
    (void)errors_before;
        neo_current_frame = fr.prev;
    return end->count;
    neo_current_frame = fr.prev;
}

void arg_print_joined_option(char* buf, unsigned long  int  bufsz  , const struct arg_hdr*  hdr  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_joined_option"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  pos  ;
    int wrote;
    int wrote_6;
    int wrote_7;
    memset(&pos, 0, sizeof(pos));
    memset(&wrote, 0, sizeof(wrote));
    memset(&wrote_6, 0, sizeof(wrote_6));
    memset(&wrote_7, 0, sizeof(wrote_7));
    pos=0;
    if(!bufsz) {
                neo_current_frame = fr.prev;
        return;
    }
    buf[0]=0;
    if(hdr->shortopts&&hdr->shortopts[0]) {
        wrote=snprintf(buf+pos,bufsz-pos,"-%c",hdr->shortopts[0]);
        if(wrote<0) {
            wrote=0;
        }
        pos+=(unsigned long  int )wrote;
        if(pos>=bufsz) {
            pos=bufsz-1;
        }
        if(hdr->longopts&&hdr->longopts[0]&&pos+2<bufsz) {
            wrote=snprintf(buf+pos,bufsz-pos,", ");
            if(wrote<0) {
                wrote=0;
            }
            pos+=(unsigned long  int )wrote;
            if(pos>=bufsz) {
                pos=bufsz-1;
            }
        }
    }
    if(hdr->longopts&&hdr->longopts[0]) {
        wrote_6=snprintf(buf+pos,bufsz-pos,"--%s",hdr->longopts);
        if(wrote_6<0) {
            wrote_6=0;
        }
        pos+=(unsigned long  int )wrote_6;
        if(pos>=bufsz) {
            pos=bufsz-1;
        }
    }
    if((hdr->shortopts&&hdr->shortopts[0])||(hdr->longopts&&hdr->longopts[0])) {
        if(hdr->datatype&&hdr->datatype[0]&&pos+1<bufsz) {
            wrote_7=snprintf(buf+pos,bufsz-pos," %s",hdr->datatype);
            if(wrote_7<0) {
                wrote_7=0;
            }
            pos+=(unsigned long  int )wrote_7;
            if(pos>=bufsz) {
                pos=bufsz-1;
            }
        }
    }
    neo_current_frame = fr.prev;
}

void arg_print_syntax(void** argtable, const char* suffix)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_syntax"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  end  ;
    int entries;
    int i;
    struct arg_hdr*  hdr  ;
    int mandatory;
    int k;
    memset(&end, 0, sizeof(end));
    memset(&entries, 0, sizeof(entries));
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&mandatory, 0, sizeof(mandatory));
    memset(&k, 0, sizeof(k));
    if(!argtable) {
                neo_current_frame = fr.prev;
        return;
    }
    end=((void*)0);
    entries=argtable_entries(argtable,&end);
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        if((hdr->shortopts&&hdr->shortopts[0])||(hdr->longopts&&hdr->longopts[0])) {
            printf(" [");
            if(hdr->shortopts&&hdr->shortopts[0]) {
                printf("-%c",hdr->shortopts[0]);
                if(hdr->longopts&&hdr->longopts[0]) {
                    printf("|");
                }
            }
            if(hdr->longopts&&hdr->longopts[0]) {
                printf("--%s",hdr->longopts);
            }
            if(hdr->kind==(2)&&hdr->datatype&&hdr->datatype[0]) {
                printf(" %s",hdr->datatype);
            }
            printf("]");
        }
        else {
            const char* dt=((hdr->datatype)?(hdr->datatype):("<value>"));
            mandatory=(((hdr->mincount>0))?(hdr->mincount):(0));
            for(k=0            ;k<mandatory;++k){
                printf(" %s",dt);
            }
            if(hdr->maxcount==0||hdr->maxcount>mandatory) {
                printf(" [%s]",dt);
            }
        }
    }
    if(suffix) {
        printf("%s",suffix);
    }
    neo_current_frame = fr.prev;
}

void arg_print_glossary(void** argtable, const char* format)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_glossary"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  end  ;
    int entries;
    int i;
    struct arg_hdr*  hdr  ;
    memset(&end, 0, sizeof(end));
    memset(&entries, 0, sizeof(entries));
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    if(!argtable||!format) {
                neo_current_frame = fr.prev;
        return;
    }
    end=((void*)0);
    entries=argtable_entries(argtable,&end);
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    char optbuf[64];
    memset(&optbuf, 0, sizeof(optbuf));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        ({ long long __neo_array_index3_0 = (long long)(0); if(__neo_array_index3_0 < 0 || __neo_array_index3_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } optbuf[__neo_array_index3_0] = 0; });
        arg_print_joined_option(optbuf,sizeof(optbuf),hdr);
        const char* gloss=((hdr->glossary)?(hdr->glossary):(""));
        printf(format,optbuf,gloss);
    }
    neo_current_frame = fr.prev;
}

void arg_print_errors(struct arg_end*  end  , const char* progname)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_errors"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    const char* prog=((progname)?(progname):(""));
    for(i=0    ;i<end->count;++i){
        const struct arg_error*  err  =&end->errors[i];
        const char* msg=((err->msg)?(err->msg):("parse error"));
        if(err->argval&&err->argval[0]) {
            printf("%s: %s -- %s\n",prog,msg,err->argval);
        }
        else if(err->hdr&&err->hdr->datatype&&strcmp(msg,"missing required argument")==0) {
            printf("%s: %s %s\n",prog,msg,err->hdr->datatype);
        }
        else if(err->hdr&&err->hdr->longopts&&err->hdr->longopts[0]&&strcmp(msg,"missing required option")==0) {
            printf("%s: %s --%s\n",prog,msg,err->hdr->longopts);
        }
        else if(err->hdr&&err->hdr->shortopts&&err->hdr->shortopts[0]&&strcmp(msg,"missing required option")==0) {
            printf("%s: %s -%c\n",prog,msg,err->hdr->shortopts[0]);
        }
        else {
            printf("%s: %s\n",prog,msg);
        }
    }
    neo_current_frame = fr.prev;
}

void arg_freetable(void** argtable, unsigned long  int  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_freetable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  i  ;
    struct arg_hdr*  hdr  ;
    struct arg_file*  file  ;
    struct arg_end*  end  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&file, 0, sizeof(file));
    memset(&end, 0, sizeof(end));
    if(!argtable) {
                neo_current_frame = fr.prev;
        return;
    }
    for(i=0    ;i<n;++i){
        if(!argtable[i]) {
            continue;
        }
        hdr=(struct arg_hdr* )argtable[i];
        if(hdr->kind==(2)) {
            file=(struct arg_file* )hdr;
            free((void*)file->filename);
        }
        else if(hdr->kind==(3)) {
            end=(struct arg_end* )hdr;
            free(end->errors);
        }
        free(argtable[i]);
        argtable[i]=((void*)0);
    }
    neo_current_frame = fr.prev;
}

int isprint(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isprint"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((c>=0x20&&c<=0x7e))?(1):(0));
    neo_current_frame = fr.prev;
}

int isspace(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((c==32||c==9||c==10||c==13||c==11||c==12))?(1):(0));
    neo_current_frame = fr.prev;
}

int isalpha(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return ((((c>=65&&c<=90)||(c>=97&&c<=122)))?(1):(0));
    neo_current_frame = fr.prev;
}

int isdigit(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((c>=48&&c<=57))?(1):(0));
    neo_current_frame = fr.prev;
}

int isalnum(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((isalpha(c)||isdigit(c)))?(1):(0));
    neo_current_frame = fr.prev;
}

int puts(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "puts"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s) {
        putchar(*s++);
    }
    putchar(10);
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

char* strcat(char* dest, const char* src)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strcat"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* d;
    char* __result_obj__0;
    memset(&d, 0, sizeof(d));
    d=dest;
    while(*d) {
        d++;
    }
    while((*d++=*src++)!=0) {
        ;
    }
        __result_obj__0 = dest;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strncat(char* dest, const char* src, unsigned long  int  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncat"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* d;
    char* __result_obj__0;
    memset(&d, 0, sizeof(d));
    d=dest;
    while(*d) {
        d++;
    }
    while(n--&&*src) {
        *d++=*src++;
    }
    *d=0;
        __result_obj__0 = dest;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "itoa"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    int i;
    int negative;
    char* __result_obj__0;
    int digit;
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    memset(&negative, 0, sizeof(negative));
    memset(&digit, 0, sizeof(digit));
    p=buf;
    char tmp[32];
    memset(&tmp, 0, sizeof(tmp));
    i=0;
    negative=0;
    if(base<2||base>16) {
        *p=0;
                __result_obj__0 = p;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(is_signed&&(long)val_<0) {
        negative=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit=({ __typeof__(base) __neo_div_right5 = (base); if(__neo_div_right5 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (val_) % __neo_div_right5; });
        ({ long long __neo_array_index4_0 = (long long)(i++); if(__neo_array_index4_0 < 0 || __neo_array_index4_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } tmp[__neo_array_index4_0] = (((digit<10))?(48+digit):(97+digit-10)); });
        val_/=base;
    } while(val_);
    if(negative) {
        *p++=45;
    }
    while(i--) {
        *p++=(*({ long long __neo_array_index5_0 = (long long)(i); if(__neo_array_index5_0 < 0 || __neo_array_index5_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &tmp[__neo_array_index5_0]; }));
    }
    *p=0;
        __result_obj__0 = buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int vasprintf(char** out, const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "vasprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    const char* s;
    unsigned long  int remaining;
    memset(&p, 0, sizeof(p));
    memset(&s, 0, sizeof(s));
    memset(&remaining, 0, sizeof(remaining));
    char out2[262144];
    memset(&out2, 0, sizeof(out2));
    p=out2;
    char buf[32];
    memset(&buf, 0, sizeof(buf));
    remaining=sizeof(out2);
    for(;*fmt&&remaining>1;fmt++){
        if(*fmt!=37) {
            *p++=*fmt;
            remaining--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf,__builtin_va_arg(ap,int),10,1);
            s=buf;
            break;
            case 117:
            itoa(buf,__builtin_va_arg(ap,unsigned int),10,0);
            s=buf;
            break;
            case 120:
            itoa(buf,__builtin_va_arg(ap,unsigned int),16,0);
            s=buf;
            break;
            case 115:
            s=__builtin_va_arg(ap,const char*);
            if(!s) {
                s="(null)";
            }
            break;
            case 99:
            ({ long long __neo_array_index6_0 = (long long)(0); if(__neo_array_index6_0 < 0 || __neo_array_index6_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index6_0] = (char)__builtin_va_arg(ap,int); });
            ({ long long __neo_array_index7_0 = (long long)(1); if(__neo_array_index7_0 < 0 || __neo_array_index7_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index7_0] = 0; });
            s=buf;
            break;
            case 112:
            strncpy(buf,"0x",32);
            itoa(buf+2,(unsigned long  int)(unsigned long  int )__builtin_va_arg(ap,void*),16,0);
            s=buf;
            break;
            case 37:
            ({ long long __neo_array_index8_0 = (long long)(0); if(__neo_array_index8_0 < 0 || __neo_array_index8_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index8_0] = 37; });
            ({ long long __neo_array_index9_0 = (long long)(1); if(__neo_array_index9_0 < 0 || __neo_array_index9_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index9_0] = 0; });
            s=buf;
            break;
            default:
            ({ long long __neo_array_index10_0 = (long long)(0); if(__neo_array_index10_0 < 0 || __neo_array_index10_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index10_0] = 37; });
            ({ long long __neo_array_index11_0 = (long long)(1); if(__neo_array_index11_0 < 0 || __neo_array_index11_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index11_0] = *fmt; });
            ({ long long __neo_array_index12_0 = (long long)(2); if(__neo_array_index12_0 < 0 || __neo_array_index12_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index12_0] = 0; });
            s=buf;
            break;
        }
        while(*s&&remaining>1) {
            *p++=*s++;
            remaining--;
        }
    }
    *p=0;
    *out=strdup(out2);
        neo_current_frame = fr.prev;
    return (int)(p-out2);
    neo_current_frame = fr.prev;
}

int __utoa_ull(char* dst, unsigned long  long v, int base, int lower)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__utoa_ull"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    static const char L[]="0123456789abcdef";
    static const char U[]="0123456789ABCDEF";
    const char* D=((lower)?(L):(U));
    char tmp[32];
    memset(&tmp, 0, sizeof(tmp));
    i=0;
    if(base<2||base>16) {
        dst[0]=48;
        dst[1]=0;
                neo_current_frame = fr.prev;
        return 1;
    }
    if(v==0) {
        dst[0]=48;
        dst[1]=0;
                neo_current_frame = fr.prev;
        return 1;
    }
    while(v) {
        ({ long long __neo_array_index13_0 = (long long)(i++); if(__neo_array_index13_0 < 0 || __neo_array_index13_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } tmp[__neo_array_index13_0] = D[({ __typeof__((unsigned int)base) __neo_div_right6 = ((unsigned int)base); if(__neo_div_right6 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (v) % __neo_div_right6; })]; });
        v/=(unsigned int)base;
    }
    int  n=i,  j=0;
    while(i--) {
        dst[j++]=(*({ long long __neo_array_index14_0 = (long long)(i); if(__neo_array_index14_0 < 0 || __neo_array_index14_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &tmp[__neo_array_index14_0]; }));
    }
    dst[j]=0;
        neo_current_frame = fr.prev;
    return n;
    neo_current_frame = fr.prev;
}

void __fmt_num(char** p, unsigned long  int* rem, unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__fmt_num"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int n;
    int total;
    memset(&n, 0, sizeof(n));
    memset(&total, 0, sizeof(total));
    char num[64];
    memset(&num, 0, sizeof(num));
    n=__utoa_ull(num,v,base,lower);
    total=n+(((neg)?(1):(0)));
    while(total<width) {
        __append_char(p,rem,pad);
        total++;
    }
    if(neg) {
        __append_char(p,rem,45);
    }
    __append_str(p,rem,num);
    neo_current_frame = fr.prev;
}

void __fmt_putc(struct anonymous_typeX4*  o  , char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__fmt_putc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX2*  b  ;
    struct anonymous_typeX3*  s  ;
    memset(&b, 0, sizeof(b));
    memset(&s, 0, sizeof(s));
    if(o->mode==0) {
        putchar(c);
    }
    else if(o->mode==1) {
        b=(struct anonymous_typeX2* )o->ctx;
        if(b->rem>1) {
            *(b->p)=c;
            b->p=b->p+1;
            b->rem--;
        }
    }
    else {
        s=(struct anonymous_typeX3* )o->ctx;
        *(s->p)=c;
        s->p=s->p+1;
    }
    o->count++;
    neo_current_frame = fr.prev;
}

int __is_digit(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__is_digit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c>=48&&c<=57;
    neo_current_frame = fr.prev;
}

void __emit_pad(struct anonymous_typeX4*  o  , char pad, int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__emit_pad"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(n-->0) {
        __fmt_putc(o,pad);
    }
    neo_current_frame = fr.prev;
}

void __emit_num(struct anonymous_typeX4*  o  , unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower, int left)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__emit_num"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int n;
    int total;
    int i;
    memset(&n, 0, sizeof(n));
    memset(&total, 0, sizeof(total));
    memset(&i, 0, sizeof(i));
    char buf[64];
    memset(&buf, 0, sizeof(buf));
    n=__utoa_ull(buf,v,base,lower);
    total=n+(((neg)?(1):(0)));
    if(!left) {
        __emit_pad(o,pad,(((width>total))?((width-total)):(0)));
    }
    if(neg) {
        __fmt_putc(o,45);
    }
    for(i=0    ;i<n;i++){
        __fmt_putc(o,(*({ long long __neo_array_index15_0 = (long long)(i); if(__neo_array_index15_0 < 0 || __neo_array_index15_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &buf[__neo_array_index15_0]; })));
    }
    if(left) {
        __emit_pad(o,32,(((width>total))?((width-total)):(0)));
    }
    neo_current_frame = fr.prev;
}

void __vformat(struct anonymous_typeX4*  o  , const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__vformat"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char pad;
    int left;
    int parsing_flags;
    int width;
    int lcount;
    char c;
    long long sv;
    int neg;
    unsigned long  long uv;
    int base;
    unsigned long  long uv_8;
    unsigned long  long uv_9;
    int hexlen;
    int total;
    int hexlen_10;
    int total_12;
    char ch;
    int len;
    memset(&pad, 0, sizeof(pad));
    memset(&left, 0, sizeof(left));
    memset(&parsing_flags, 0, sizeof(parsing_flags));
    memset(&width, 0, sizeof(width));
    memset(&lcount, 0, sizeof(lcount));
    memset(&c, 0, sizeof(c));
    memset(&sv, 0, sizeof(sv));
    memset(&neg, 0, sizeof(neg));
    memset(&uv, 0, sizeof(uv));
    memset(&base, 0, sizeof(base));
    memset(&uv_8, 0, sizeof(uv_8));
    memset(&uv_9, 0, sizeof(uv_9));
    memset(&hexlen, 0, sizeof(hexlen));
    memset(&total, 0, sizeof(total));
    memset(&hexlen_10, 0, sizeof(hexlen_10));
    memset(&total_12, 0, sizeof(total_12));
    memset(&ch, 0, sizeof(ch));
    memset(&len, 0, sizeof(len));
    while(*fmt) {
        if(*fmt!=37) {
            __fmt_putc(o,*fmt++);
            continue;
        }
        fmt++;
        pad=32;
        left=0;
        parsing_flags=1;
        while(parsing_flags) {
            if(*fmt==48) {
                pad=48;
                fmt++;
            }
            else if(*fmt==45) {
                left=1;
                pad=32;
                fmt++;
            }
            else {
                parsing_flags=0;
            }
        }
        width=0;
        while(*fmt>=48&&*fmt<=57) {
            width=width*10+(*fmt-48);
            fmt++;
        }
        lcount=0;
        while(*fmt==108) {
            lcount++;
            fmt++;
        }
        c=((*fmt)?(*fmt++):(0));
        switch (        c) {
            case 100:
            {
                if(lcount>=2) {
                    sv=__builtin_va_arg(ap,long  long);
                }
                else if(lcount==1) {
                    sv=__builtin_va_arg(ap,long);
                }
                else {
                    sv=__builtin_va_arg(ap,int);
                }
                neg=(sv<0);
                uv=((neg)?((unsigned long  long)(-sv)):((unsigned long  long)sv));
                __emit_num(o,uv,10,1,neg,width,pad,1,left);
                break;
            }
            case 117:
            case 120:
            {
                base=(((c==120))?(16):(10));
                if(lcount>=2) {
                    uv_8=__builtin_va_arg(ap,unsigned long  long);
                }
                else if(lcount==1) {
                    uv_8=__builtin_va_arg(ap,unsigned long  int);
                }
                else {
                    uv_8=(unsigned int)__builtin_va_arg(ap,unsigned int);
                }
                __emit_num(o,uv_8,base,0,0,width,pad,1,left);
                break;
            }
            case 112:
            {
                uv_9=(unsigned long  long)(unsigned long  int )__builtin_va_arg(ap,void*);
                if(!left) {
                    hexlen=0;
                    {
                        char tmp[64];
                        memset(&tmp, 0, sizeof(tmp));
                        hexlen=__utoa_ull(tmp,uv_9,16,1);
                    }
                    total=2+hexlen;
                    __emit_pad(o,pad,(((width>total))?((width-total)):(0)));
                }
                __fmt_putc(o,48);
                __fmt_putc(o,120);
                __emit_num(o,uv_9,16,0,0,0,32,1,0);
                if(left) {
                    hexlen_10=0;
                    {
                        char tmp_11[64];
                        memset(&tmp_11, 0, sizeof(tmp_11));
                        hexlen_10=__utoa_ull(tmp_11,uv_9,16,1);
                    }
                    total_12=2+hexlen_10;
                    __emit_pad(o,32,(((width>total_12))?((width-total_12)):(0)));
                }
                break;
            }
            case 99:
            {
                ch=(char)__builtin_va_arg(ap,int);
                if(!left) {
                    __emit_pad(o,pad,(((width>1))?((width-1)):(0)));
                }
                __fmt_putc(o,ch);
                if(left) {
                    __emit_pad(o,32,(((width>1))?((width-1)):(0)));
                }
                break;
            }
            case 115:
            {
                const char* s=__builtin_va_arg(ap,const char*);
                if(!s) {
                    s="(null)";
                }
                len=0;
                for(const char* t=s                ;*t;++t){
                    len++;
                }
                if(!left) {
                    __emit_pad(o,pad,(((width>len))?((width-len)):(0)));
                }
                while(*s) {
                    __fmt_putc(o,*s++);
                }
                if(left) {
                    __emit_pad(o,32,(((width>len))?((width-len)):(0)));
                }
                break;
            }
            case 37:
            __fmt_putc(o,37);
            break;
            default:
            __fmt_putc(o,37);
            if(c) {
                __fmt_putc(o,c);
            }
            break;
        }
    }
    neo_current_frame = fr.prev;
}

int printf(const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    memset(&ap, 0, sizeof(ap));
    __builtin_va_start(ap,fmt);
    struct anonymous_typeX4  out  ={ 0, ((void*)0), 0 };
    __vformat(&out,fmt,ap);
    __builtin_va_end(ap);
        neo_current_frame = fr.prev;
    return out.count /* uho */;
    neo_current_frame = fr.prev;
}

void __buf_putc(void* ctx, char ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__buf_putc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX2*  b  ;
    memset(&b, 0, sizeof(b));
    b=(struct anonymous_typeX2* )ctx;
    if(b->rem>1) {
        *(b->p)=ch;
        b->p=b->p+1;
        b->rem--;
    }
    neo_current_frame = fr.prev;
}

void __str_putc(void* ctx, char ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__str_putc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX3*  s  ;
    memset(&s, 0, sizeof(s));
    s=(struct anonymous_typeX3* )ctx;
    *(s->p)=ch;
    s->p=s->p+1;
    neo_current_frame = fr.prev;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "vsnprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!out||out_size==0) {
                neo_current_frame = fr.prev;
        return 0;
    }
    struct anonymous_typeX2  b  ={ out, out_size };
    struct anonymous_typeX4  o  ={ 1, &b, 0 };
    __vformat(&o,fmt,ap);
    if(b.rem /* uho */>0) {
        *(b.p /* uho */)=0;
    }
    else {
        out[out_size-1]=0;
    }
        neo_current_frame = fr.prev;
    return o.count /* uho */;
    neo_current_frame = fr.prev;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "snprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int r;
    memset(&ap, 0, sizeof(ap));
    memset(&r, 0, sizeof(r));
    __builtin_va_start(ap,fmt);
    r=vsnprintf(out,out_size,fmt,ap);
    __builtin_va_end(ap);
        neo_current_frame = fr.prev;
    return r;
    neo_current_frame = fr.prev;
}

int vsprintf(char* out, const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "vsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!out) {
                neo_current_frame = fr.prev;
        return -1;
    }
    struct anonymous_typeX3  s  ={ out };
    struct anonymous_typeX4  o  ={ 2, &s, 0 };
    __vformat(&o,fmt,ap);
    *(s.p /* uho */)=0;
        neo_current_frame = fr.prev;
    return o.count /* uho */;
    neo_current_frame = fr.prev;
}

int sprintf(char* out, const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int r;
    memset(&ap, 0, sizeof(ap));
    memset(&r, 0, sizeof(r));
    __builtin_va_start(ap,fmt);
    r=vsprintf(out,fmt,ap);
    __builtin_va_end(ap);
        neo_current_frame = fr.prev;
    return r;
    neo_current_frame = fr.prev;
}

int atexit(void (*func)())
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "atexit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(__atexit_count>=(int)(sizeof(__atexit_funcs) / sizeof(__atexit_funcs[0]))) {
                neo_current_frame = fr.prev;
        return -1;
    }
    ({ long long __neo_array_index17_0 = (long long)(__atexit_count++); if(__neo_array_index17_0 < 0 || __neo_array_index17_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } __atexit_funcs[__neo_array_index17_0] = func; });
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void __run_atexit()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__run_atexit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=__atexit_count-1    ;i>=0;i--){
        if((*({ long long __neo_array_index18_0 = (long long)(i); if(__neo_array_index18_0 < 0 || __neo_array_index18_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &__atexit_funcs[__neo_array_index18_0]; }))) {
            ((*({ long long __neo_array_index19_0 = (long long)(i); if(__neo_array_index19_0 < 0 || __neo_array_index19_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &__atexit_funcs[__neo_array_index19_0]; })))();
        }
    }
    neo_current_frame = fr.prev;
}

double strtod(const char* nptr, char** endptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtod"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    double ip;
    int any;
    double val_;
    int esign;
    int exp;
    double pow10;
    memset(&neg, 0, sizeof(neg));
    memset(&ip, 0, sizeof(ip));
    memset(&any, 0, sizeof(any));
    memset(&val_, 0, sizeof(val_));
    memset(&esign, 0, sizeof(esign));
    memset(&exp, 0, sizeof(exp));
    memset(&pow10, 0, sizeof(pow10));
    const char* s=nptr;
    while(isspace(*s)) {
        s++;
    }
    neg=0;
    if(*s==43||*s==45) {
        neg=(*s==45);
        s++;
    }
    ip=0.0;
    any=0;
    while(*s>=48&&*s<=57) {
        ip=ip*10.0+(*s-48);
        s++;
        any=1;
    }
    double  fp=0.0,  scale=1.0;
    if(*s==46) {
        s++;
        while(*s>=48&&*s<=57) {
            fp=fp*10.0+(*s-48);
            scale*=10.0;
            s++;
            any=1;
        }
    }
    val_=ip+(((scale>1.0)?(({ __typeof__(scale) __neo_div_right7 = (scale); if(__neo_div_right7 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (fp) / __neo_div_right7; })):(0.0)));
    if(*s==101||*s==69) {
        s++;
        esign=0;
        if(*s==43||*s==45) {
            esign=(*s==45);
            s++;
        }
        exp=0;
        while(*s>=48&&*s<=57) {
            exp=exp*10+(*s-48);
            s++;
        }
        pow10=1.0;
        while(exp-->0) {
            pow10*=10.0;
        }
        val_=((esign)?((({ __typeof__(pow10) __neo_div_right8 = (pow10); if(__neo_div_right8 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (val_) / __neo_div_right8; }))):((val_*pow10)));
        any=1;
    }
    if(endptr) {
        *endptr=(char*)(((any)?(s):(nptr)));
    }
        neo_current_frame = fr.prev;
    return ((neg)?(-val_):(val_));
    neo_current_frame = fr.prev;
}

unsigned long  long __minux_parse_unsigned(const char* nptr, char** endptr, int base, int* neg_out, int* any_out)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__minux_parse_unsigned"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    unsigned long  long val_;
    int any;
    int actual_base;
    int c;
    int d;
    memset(&neg, 0, sizeof(neg));
    memset(&val_, 0, sizeof(val_));
    memset(&any, 0, sizeof(any));
    memset(&actual_base, 0, sizeof(actual_base));
    memset(&c, 0, sizeof(c));
    memset(&d, 0, sizeof(d));
    const char* s=nptr;
    while(isspace(*s)) {
        s++;
    }
    neg=0;
    if(*s==43) {
        s++;
    }
    else if(*s==45) {
        neg=1;
        s++;
    }
    val_=0;
    any=0;
    actual_base=base;
    if(actual_base==0) {
        if(s[0]==48) {
            if(s[1]==120||s[1]==88) {
                actual_base=16;
                s+=2;
            }
            else {
                actual_base=8;
                s++;
                any=1;
            }
        }
        else {
            actual_base=10;
        }
    }
    else if(actual_base==16) {
        if(s[0]==48&&(s[1]==120||s[1]==88)) {
            s+=2;
        }
    }
    if(actual_base<2||actual_base>36) {
        if(endptr) {
            *endptr=(char*)nptr;
        }
        if(neg_out) {
            *neg_out=neg;
        }
        if(any_out) {
            *any_out=0;
        }
                neo_current_frame = fr.prev;
        return 0;
    }
    for(;;s++){
        c=*s;
        if(c>=48&&c<=57) {
            d=c-48;
        }
        else if(c>=97&&c<=122) {
            d=c-97+10;
        }
        else if(c>=65&&c<=90) {
            d=c-65+10;
        }
        else {
            break;
        }
        if(d>=actual_base) {
            break;
        }
        any=1;
        val_=val_*(unsigned long  long)actual_base+(unsigned long  long)d;
    }
    if(endptr) {
        *endptr=(char*)(((any)?(s):(nptr)));
    }
    if(neg_out) {
        *neg_out=neg;
    }
    if(any_out) {
        *any_out=any;
    }
        neo_current_frame = fr.prev;
    return val_;
    neo_current_frame = fr.prev;
}

unsigned long  int strtoul(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtoul"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    unsigned long  int val_;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    memset(&val_, 0, sizeof(val_));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    val_=(unsigned long  int)parsed;
    if(neg) {
        val_=(unsigned long  int)(-(long)val_);
    }
        neo_current_frame = fr.prev;
    return val_;
    neo_current_frame = fr.prev;
}

unsigned long  long strtoull(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtoull"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    if(neg) {
        parsed=(unsigned long  long)(-(long  long)parsed);
    }
        neo_current_frame = fr.prev;
    return parsed;
    neo_current_frame = fr.prev;
}

long strtol(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtol"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    long result;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    memset(&result, 0, sizeof(result));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=(long)parsed;
    if(neg) {
        result=-result;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

long long strtoll(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtoll"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    long long result;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    memset(&result, 0, sizeof(result));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=(long  long)parsed;
    if(neg) {
        result=-result;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

long atol(const char* nptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "atol"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return strtol(nptr,(char**)0,10);
    neo_current_frame = fr.prev;
}

int atoi(const char* nptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "atoi"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int)strtol(nptr,(char**)0,10);
    neo_current_frame = fr.prev;
}

int __tolower(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__tolower"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(c>=65&&c<=90) {
                neo_current_frame = fr.prev;
        return c-65+97;
    }
        neo_current_frame = fr.prev;
    return c;
    neo_current_frame = fr.prev;
}

int strncasecmp(const char* a, const char* b, unsigned long  int  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncasecmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  i  ;
    unsigned char ca;
    unsigned char cb;
    int da;
    int db;
    memset(&i, 0, sizeof(i));
    memset(&ca, 0, sizeof(ca));
    memset(&cb, 0, sizeof(cb));
    memset(&da, 0, sizeof(da));
    memset(&db, 0, sizeof(db));
    for(i=0    ;i<n;i++){
        ca=(unsigned char)a[i];
        cb=(unsigned char)b[i];
        if(ca==0||cb==0) {
                        neo_current_frame = fr.prev;
            return (int)ca-(int)cb;
        }
        da=__tolower(ca);
        db=__tolower(cb);
        if(da!=db) {
                        neo_current_frame = fr.prev;
            return da-db;
        }
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

char* strerror(int errnum)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strerror"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    switch (    errnum) {
        case 0:
                __result_obj__0 = "Success";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 1:
                __result_obj__0 = "Operation not permitted";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 2:
                __result_obj__0 = "No such file or directory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 5:
                __result_obj__0 = "I/O error";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 9:
                __result_obj__0 = "Bad file descriptor";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 12:
                __result_obj__0 = "Out of memory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 13:
                __result_obj__0 = "Permission denied";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 17:
                __result_obj__0 = "File exists";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 20:
                __result_obj__0 = "Not a directory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 21:
                __result_obj__0 = "Is a directory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 22:
                __result_obj__0 = "Invalid argument";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 32:
                __result_obj__0 = "Broken pipe";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 38:
                __result_obj__0 = "Function not implemented";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        default:
                __result_obj__0 = "Unknown error";
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

int ispunct(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "ispunct"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=0x21&&c<=0x7e)&&!isalnum(c);
    neo_current_frame = fr.prev;
}

char* strtok(char* s, const char* delim)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtok"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    const char* d;
    int isdelim;
    char* start;
    memset(&d, 0, sizeof(d));
    memset(&isdelim, 0, sizeof(isdelim));
    memset(&start, 0, sizeof(start));
    if(!s) {
        s=__strtok_save;
    }
    if(!s) {
                __result_obj__0 = (char*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    while(*s) {
        isdelim=0;
        for(d=delim        ;*d;d++){
            if(*d==*s) {
                isdelim=1;
                break;
            }
        }
        if(!isdelim) {
            break;
        }
        s++;
    }
    if(*s==0) {
        __strtok_save=(char*)0;
                __result_obj__0 = (char*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    start=s;
    while(*s) {
        for(d=delim        ;*d;d++){
            if(*d==*s) {
                *s=0;
                __strtok_save=s+1;
                                __result_obj__0 = start;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
        s++;
    }
    __strtok_save=(char*)0;
        __result_obj__0 = start;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int isxdigit(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isxdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57)||(c>=97&&c<=102)||(c>=65&&c<=70);
    neo_current_frame = fr.prev;
}

int __minux_isspace(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__minux_isspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==11||c==12;
    neo_current_frame = fr.prev;
}

int sscanf(const char* str, const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sscanf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int assigned;
    int width;
    char length;
    char conv;
    char* out;
    int n;
    int neg;
    unsigned long  long val_;
    int digits;
    unsigned long  int* p;
    unsigned long  int*  p_13  ;
    unsigned int* p_14;
    long long sval;
    long* p_15;
    long  long* p_16;
    int* p_17;
    int invert;
    int c;
    int c_18;
    char* out_19;
    int n_20;
    int in;
    char* out_21;
    int n_22;
    int i;
    memset(&ap, 0, sizeof(ap));
    memset(&assigned, 0, sizeof(assigned));
    memset(&width, 0, sizeof(width));
    memset(&length, 0, sizeof(length));
    memset(&conv, 0, sizeof(conv));
    memset(&out, 0, sizeof(out));
    memset(&n, 0, sizeof(n));
    memset(&neg, 0, sizeof(neg));
    memset(&val_, 0, sizeof(val_));
    memset(&digits, 0, sizeof(digits));
    memset(&p, 0, sizeof(p));
    memset(&p_13, 0, sizeof(p_13));
    memset(&p_14, 0, sizeof(p_14));
    memset(&sval, 0, sizeof(sval));
    memset(&p_15, 0, sizeof(p_15));
    memset(&p_16, 0, sizeof(p_16));
    memset(&p_17, 0, sizeof(p_17));
    memset(&invert, 0, sizeof(invert));
    memset(&c, 0, sizeof(c));
    memset(&c_18, 0, sizeof(c_18));
    memset(&out_19, 0, sizeof(out_19));
    memset(&n_20, 0, sizeof(n_20));
    memset(&in, 0, sizeof(in));
    memset(&out_21, 0, sizeof(out_21));
    memset(&n_22, 0, sizeof(n_22));
    memset(&i, 0, sizeof(i));
    __builtin_va_start(ap,fmt);
    const char* s=str;
    const char* f=fmt;
    assigned=0;
    while(*f) {
        if(*f!=37) {
            if(__minux_isspace((unsigned char)*f)) {
                while(__minux_isspace((unsigned char)*f)) {
                    f++;
                }
                while(*s&&__minux_isspace((unsigned char)*s)) {
                    s++;
                }
                continue;
            }
            if(*s!=*f) {
                __builtin_va_end(ap);
                                neo_current_frame = fr.prev;
                return assigned;
            }
            s++;
            f++;
            continue;
        }
        f++;
        width=0;
        while(*f>=48&&*f<=57) {
            width=width*10+(*f-48);
            f++;
        }
        length=0;
        if(*f==108||*f==122) {
            length=*f;
            f++;
            if(length==108&&*f==108) {
                f++;
            }
        }
        conv=*f++;
        if(conv==115) {
            out=__builtin_va_arg(ap,char*);
            if(!out) {
                __builtin_va_end(ap);
                                neo_current_frame = fr.prev;
                return assigned;
            }
            while(*s&&__minux_isspace((unsigned char)*s)) {
                s++;
            }
            n=0;
            while(*s&&!__minux_isspace((unsigned char)*s)&&(width==0||n<width)) {
                out[n++]=*s++;
            }
            out[n]=0;
            if(n==0) {
                __builtin_va_end(ap);
                                neo_current_frame = fr.prev;
                return assigned;
            }
            assigned++;
        }
        else if(conv==100||conv==105||conv==117) {
            while(*s&&__minux_isspace((unsigned char)*s)) {
                s++;
            }
            neg=0;
            if(*s==43||*s==45) {
                neg=(*s==45);
                s++;
            }
            val_=0;
            digits=0;
            while(*s>=48&&*s<=57&&(width==0||digits<width)) {
                val_=val_*10+(unsigned int)(*s-48);
                s++;
                digits++;
            }
            if(digits==0) {
                __builtin_va_end(ap);
                                neo_current_frame = fr.prev;
                return assigned;
            }
            if(conv==117) {
                if(length==108) {
                    p=__builtin_va_arg(ap,unsigned long  int*);
                    *p=(unsigned long  int)val_;
                }
                else if(length==122) {
                    p_13=__builtin_va_arg(ap,unsigned long  int* );
                    *p_13=(unsigned long  int )val_;
                }
                else {
                    p_14=__builtin_va_arg(ap,unsigned int*);
                    *p_14=(unsigned int)val_;
                }
            }
            else {
                sval=((neg)?(-(long  long)val_):((long  long)val_));
                if(length==108) {
                    p_15=__builtin_va_arg(ap,long*);
                    *p_15=(long)sval;
                }
                else if(length==122) {
                    p_16=__builtin_va_arg(ap,long  long*);
                    *p_16=(long  long)sval;
                }
                else {
                    p_17=__builtin_va_arg(ap,int*);
                    *p_17=(int)sval;
                }
            }
            assigned++;
        }
        else if(conv==91) {
            invert=0;
            if(*f==94) {
                invert=1;
                f++;
            }
            char set[256]={0};
            if(*f==93) {
                ({ long long __neo_array_index20_0 = (long long)((unsigned int)93); if(__neo_array_index20_0 < 0 || __neo_array_index20_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index20_0] = 1; });
                f++;
            }
            while(*f&&*f!=93) {
                if(*(f+1)==45&&*(f+2)&&*(f+2)!=93) {
                    unsigned char  a=(unsigned char)*f,  b=(unsigned char)*(f+2);
                    if(a<=b) {
                        for(c=a                        ;c<=b;c++){
                            ({ long long __neo_array_index21_0 = (long long)(c); if(__neo_array_index21_0 < 0 || __neo_array_index21_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index21_0] = 1; });
                        }
                    }
                    else {
                        for(c_18=b                        ;c_18<=a;c_18++){
                            ({ long long __neo_array_index22_0 = (long long)(c_18); if(__neo_array_index22_0 < 0 || __neo_array_index22_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index22_0] = 1; });
                        }
                    }
                    f+=3;
                }
                else {
                    ({ long long __neo_array_index23_0 = (long long)((unsigned char)*f); if(__neo_array_index23_0 < 0 || __neo_array_index23_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index23_0] = 1; });
                    f++;
                }
            }
            if(*f==93) {
                f++;
            }
            out_19=__builtin_va_arg(ap,char*);
            if(!out_19) {
                __builtin_va_end(ap);
                                neo_current_frame = fr.prev;
                return assigned;
            }
            n_20=0;
            while(*s&&(width==0||n_20<width)) {
                in=(*({ long long __neo_array_index24_0 = (long long)((unsigned char)*s); if(__neo_array_index24_0 < 0 || __neo_array_index24_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &set[__neo_array_index24_0]; }));
                if((in&&!invert)||(!in&&invert)) {
                    out_19[n_20++]=*s++;
                }
                else {
                    break;
                }
            }
            out_19[n_20]=0;
            if(n_20==0) {
                __builtin_va_end(ap);
                                neo_current_frame = fr.prev;
                return assigned;
            }
            assigned++;
        }
        else if(conv==99) {
            out_21=__builtin_va_arg(ap,char*);
            n_22=(((width==0))?(1):(width));
            i=0;
            for(;i<n_22&&*s;i++){
                *out_21++=*s++;
            }
            if(i<n_22) {
                __builtin_va_end(ap);
                                neo_current_frame = fr.prev;
                return assigned;
            }
            assigned++;
        }
        else if(conv==37) {
            if(*s!=37) {
                __builtin_va_end(ap);
                                neo_current_frame = fr.prev;
                return assigned;
            }
            s++;
        }
        else {
            __builtin_va_end(ap);
                        neo_current_frame = fr.prev;
            return assigned;
        }
        while(__minux_isspace((unsigned char)*f)) {
            while(__minux_isspace((unsigned char)*f)) {
                f++;
            }
            while(*s&&__minux_isspace((unsigned char)*s)) {
                s++;
            }
        }
    }
    __builtin_va_end(ap);
        neo_current_frame = fr.prev;
    return assigned;
    neo_current_frame = fr.prev;
}

_Bool  neo_frame_is_alive(unsigned long  int frame_id)
{
    struct neo_frame*  f  ;
    memset(&f, 0, sizeof(f));
    f=neo_current_frame;
    while(f) {
        if(f->frame_id==frame_id) {
                        return (_Bool)1;
        }
        f=f->prev;
    }
        return (_Bool)0;
}

void stackframe()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    f=neo_current_frame;
    while(f) {
        fun_name=f->fun_name;
        printf("%s\n",fun_name);
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

void stackframe2(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&it, 0, sizeof(it));
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    if(come_is_alive(mem)&&mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
        printf("allocated at %s %d #%d. type is %s.\n",it->sname,it->sline,it->id,it->class_name);
    }
    f=neo_current_frame;
    while(f) {
        fun_name=f->fun_name;
        printf("%s\n",fun_name);
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

_Bool  die(const char* msg, char* sname, int sline)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "die"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    puts(((char* )(__right_value6=charp_operator_add(((char*)(__right_value5=xsprintf("\%s \%s : ",((char* )(__right_value3=charp_to_string(sname))),((char* )(__right_value4=int_to_string(sline)))))),msg))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 228, 1));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 228, 2));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 228, 3));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 228, 4));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 228, 5));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 228, 6));
    stackframe();
    exit(4);
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

void come_memleak_checker()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_memleak_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    int n;
    _Bool  flag  ;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&n, 0, sizeof(n));
    memset(&flag, 0, sizeof(flag));
    memset(&i, 0, sizeof(i));
    it=gAllocMem;
    n=0;
    while(it) {
        n++;
        flag=(_Bool)0;
        printf("#%d ",n);
        if(it->class_name) {
            printf("%p (%s) %s %d: ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long  int )+sizeof(unsigned long  int ),it->class_name,it->sname,it->sline);
        }
        for(i=0        ;i<8;i++){
            if((*({ long long __neo_array_index25_0 = (long long)(i); if(__neo_array_index25_0 < 0 || __neo_array_index25_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &it->fun_name[__neo_array_index25_0]; }))) {
                printf("%s, ",(*({ long long __neo_array_index26_0 = (long long)(i); if(__neo_array_index26_0 < 0 || __neo_array_index26_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &it->fun_name[__neo_array_index26_0]; })));
                flag=(_Bool)1;
            }
        }
        if(flag) {
            puts("");
        }
        it=it->next;
    }
    if(n>0) {
        printf("%d memory leaks. %d alloc, %d free.\n",n,gNumAlloc,gNumFree);
    }
    neo_current_frame = fr.prev;
}

void* alloc_from_pages(unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "alloc_from_pages"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  it_prev  ;
    void* __result_obj__0;
    struct sMemHeader*  it_23  ;
    memset(&it, 0, sizeof(it));
    memset(&it_prev, 0, sizeof(it_prev));
    memset(&it_23, 0, sizeof(it_23));
    it=gFreeMem;
    it_prev=((void*)0);
    while(it) {
        if(size<=it->alloc_size) {
            if(it_prev==((void*)0)) {
                gFreeMem=((void*)0);
            }
            else {
                it_prev->free_next=it->free_next;
            }
            memset(it,0,size);
                        __result_obj__0 = it;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        it_prev=it;
        it=it->free_next;
    }
    it_23=(struct sMemHeader* )calloc(1,size);
    it_23->alloc_size=size;
        __result_obj__0 = it_23;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free_mem_of_heap_pool(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free_mem_of_heap_pool"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  prev_it  ;
    struct sMemHeader*  next_it  ;
    unsigned long  int  size  ;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&next_it, 0, sizeof(next_it));
    memset(&size, 0, sizeof(size));
    if(mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(struct sMemHeader ));
        if(it->allocated!=177783) {
                        neo_current_frame = fr.prev;
            return;
        }
        it->allocated=0;
        prev_it=it->prev;
        next_it=it->next;
        if(gAllocMem==it) {
            gAllocMem=next_it;
            if(gAllocMem) {
                gAllocMem->prev=((void*)0);
            }
        }
        else {
            if(prev_it) {
                prev_it->next=next_it;
            }
            if(next_it) {
                next_it->prev=prev_it;
            }
        }
        size=it->size;
        it->free_next=gFreeMem;
        gFreeMem=it;
        it->alive=0;
        gNumFree++;
    }
    neo_current_frame = fr.prev;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int  compiletime_size  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_alloc_mem_from_heap_pool"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int  size2  ;
    void* result;
    struct sMemHeader*  it  ;
    int n;
    struct neo_frame*  f  ;
    char* fun_name;
    void* __result_obj__0;
    memset(&size2, 0, sizeof(size2));
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    memset(&n, 0, sizeof(n));
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    size2=size+sizeof(struct sMemHeader );
    size2=(size2+7&~0x7);
    result=alloc_from_pages(size2);
    it=result;
    it->allocated=177783;
    it->compiletime_size=compiletime_size;
    it->size=size2;
    it->free_next=((void*)0);
    it->alive=1;
    n=0;
    f=neo_current_frame;
    while(f&&n<8) {
        fun_name=f->fun_name;
        ({ long long __neo_array_index27_0 = (long long)(n); if(__neo_array_index27_0 < 0 || __neo_array_index27_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } it->fun_name[__neo_array_index27_0] = fun_name; });
        n++;
        f=f->prev;
    }
    it->next=gAllocMem;
    it->prev=((void*)0);
    it->class_name=class_name;
    it->sname=sname;
    it->sline=sline;
    it->id=id;
    if(gAllocMem) {
        gAllocMem->prev=it;
    }
    gAllocMem=it;
    gNumAlloc++;
        __result_obj__0 = (char*)result+sizeof(struct sMemHeader );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* come_dynamic_typeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_dynamic_typeof"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    char* __result_obj__0;
    memset(&it, 0, sizeof(it));
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe2(mem);
        exit(2);
    }
        __result_obj__0 = (char*)it->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  int  dynamic_sizeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "dynamic_sizeof"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    unsigned long  int  size  ;
    memset(&it, 0, sizeof(it));
    memset(&size, 0, sizeof(size));
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe2(mem);
        exit(2);
    }
    size=it->compiletime_size;
        neo_current_frame = fr.prev;
    return size;
    neo_current_frame = fr.prev;
}

void* come_calloc(unsigned long  int  count  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* mem;
    unsigned long  int*  ref_count  ;
    unsigned long  int*  size2  ;
    void* __result_obj__0;
    memset(&mem, 0, sizeof(mem));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&size2, 0, sizeof(size2));
    mem=come_alloc_mem_from_heap_pool(count*size,sizeof(unsigned long  int )+sizeof(unsigned long  int )+count*size,sname,sline,id,class_name);
    ref_count=(unsigned long  int* )mem;
    *ref_count=0;
    size2=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    *size2=size*count+sizeof(unsigned long  int )+sizeof(unsigned long  int );
        __result_obj__0 = mem+sizeof(unsigned long  int )+sizeof(unsigned long  int );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool  come_is_alive(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_is_alive"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    memset(&it, 0, sizeof(it));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
        neo_current_frame = fr.prev;
    return it->alive;
    neo_current_frame = fr.prev;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    come_free_mem_of_heap_pool((char*)ref_count);
    neo_current_frame = fr.prev;
}

void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_memdup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    char* mem;
    unsigned long  int*  size_p  ;
    unsigned long  int  size  ;
    void* result;
    memset(&mem, 0, sizeof(mem));
    memset(&size_p, 0, sizeof(size_p));
    memset(&size, 0, sizeof(size));
    memset(&result, 0, sizeof(result));
    if(block==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(block)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 515, 7));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 515, 8));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 515, 9));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 515, 10));
        stackframe2(block);
        exit(3);
    }
    mem=(char*)block-sizeof(unsigned long  int )-sizeof(unsigned long  int );
    size_p=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    size=*size_p-sizeof(unsigned long  int )-sizeof(unsigned long  int );
    result=come_calloc(1,size,sname,sline,id,class_name);
    memcpy(result,block,size);
        __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_increment_ref_count(void* mem, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_increment_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 541, 11));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 541, 12));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 541, 13));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 541, 14));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    (*ref_count)++;
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_print_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe();
        exit(3);
    }
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    printf("ref_count %ld\n",*ref_count);
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe();
        exit(3);
    }
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
        neo_current_frame = fr.prev;
    return *ref_count;
    neo_current_frame = fr.prev;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool  no_decrement  , _Bool  no_free  , void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_decrement_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer)(void*);
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer, 0, sizeof(finalizer));
    if(result_obj) {
        if(mem==result_obj) {
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(mem==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 604, 15));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 604, 16));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 604, 17));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 604, 18));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    if(!no_decrement) {
        (*ref_count)--;
    }
    count=*ref_count;
    if(!no_free&&count<=0) {
        if(protocol_obj&&protocol_fun) {
            finalizer=(void (*)(void*))protocol_fun;
            finalizer(protocol_obj);
            come_free(protocol_obj);
        }
        come_free(mem);
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_call_finalizer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void (*finalizer)(void*);
    void (*finalizer_24)(void*);
    void (*finalizer_25)(void*);
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer_26)(void*);
    void (*finalizer_27)(void*);
    void (*finalizer_28)(void*);
    memset(&finalizer, 0, sizeof(finalizer));
    memset(&finalizer_24, 0, sizeof(finalizer_24));
    memset(&finalizer_25, 0, sizeof(finalizer_25));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer_26, 0, sizeof(finalizer_26));
    memset(&finalizer_27, 0, sizeof(finalizer_27));
    memset(&finalizer_28, 0, sizeof(finalizer_28));
    if(result_obj) {
        if(mem==result_obj) {
                        neo_current_frame = fr.prev;
            return;
        }
    }
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer=(void (*)(void*))protocol_fun;
                finalizer(protocol_obj);
            }
            finalizer_24=(void (*)(void*))fun;
            finalizer_24(mem);
        }
        else {
            if(protocol_obj&&protocol_fun) {
                finalizer_25=(void (*)(void*))protocol_fun;
                finalizer_25(protocol_obj);
            }
        }
    }
    else {
        if(!come_is_alive(mem)) {
            puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 661, 19));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 661, 20));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 661, 21));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 661, 22));
            stackframe2(mem);
            exit(3);
        }
        ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
        if(!no_decrement) {
            (*ref_count)--;
        }
        count=*ref_count;
        if(!no_free&&count<=0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_26=(void (*)(void*))protocol_fun;
                        finalizer_26(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(fun) {
                        finalizer_27=(void (*)(void*))fun;
                        finalizer_27(mem);
                    }
                }
                else {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_28=(void (*)(void*))protocol_fun;
                        finalizer_28(protocol_obj);
                        come_free(protocol_obj);
                    }
                }
                come_free(mem);
            }
        }
    }
    neo_current_frame = fr.prev;
}

void xassert(const char* msg, _Bool  test  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xassert"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    printf("%s...",msg);
    if(!test) {
        puts("false");
        stackframe();
        exit(2);
    }
    puts("ok");
    neo_current_frame = fr.prev;
}

void* come_null_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_null_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    if(mem) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 716, 23));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 716, 24));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 716, 25));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 716, 26));
    stackframe();
    exit(1);
    neo_current_frame = fr.prev;
}

void* come_heap_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_heap_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    if(mem) {
        if(come_is_alive(mem)) {
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else {
            puts(((char*)(__right_value3=xsprintf("heap pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 728, 27));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 728, 28));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 728, 29));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 728, 30));
            stackframe();
            exit(1);
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s \%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 734, 31));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 734, 32));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 734, 33));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 734, 34));
    stackframe();
    exit(1);
    neo_current_frame = fr.prev;
}

char*  __builtin_string(const char* str, char* sname, int sline)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "./neo-c.h", 742, 35);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 742, 36));
        return __result_obj__0;
    }
    len=strlen(str)+1;
    result=come_calloc(1,sizeof(char)*(len),sname,sline,0,"string");
    strncpy(result,str,len);
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 751, 37);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 751, 38));
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj1;
    struct buffer*  __result_obj__0  ;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./neo-c.h", 4943, 39, "char*"), "./neo-c.h", 4943, 41);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4943, 40);
    ((char*)self->buf)[0]=0;
    self->len=0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "./neo-c.h", 4947, 42);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4947, 43);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4947, 44);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj2;
    struct buffer*  __result_obj__0  ;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./neo-c.h", 4953, 45, "char*"), "./neo-c.h", 4953, 47);
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4953, 46);
    ((char*)self->buf)[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "./neo-c.h", 4959, 48);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4959, 49);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4959, 50);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self&&self->buf) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4964, 51));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj3;
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "./neo-c.h", 4970, 52);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4970, 53);
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 4973, 54, "struct buffer* "), "./neo-c.h", 4973, 55);
    result->size=self->size;
    __right_value0 = (void*)0;
    __dec_obj3=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./neo-c.h", 4976, 56, "char*"), "./neo-c.h", 4976, 58);
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4976, 57);
    result->len=self->len;
    memcpy(result->buf,self->buf,self->len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 4980, 59);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4980, 60);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4980, 61);
    return __result_obj__0;
}

_Bool  buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool  __result_obj__0  ;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        __result_obj__0 = string_equals(((char* )(__right_value0=buffer_to_string(left))),((char* )(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 4992, 62));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 4992, 63));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    ((char*)self->buf)[0]=0;
    self->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    self->len-=len;
    if(self->len>=0) {
        ((char*)self->buf)[self->len]=0;
    }
    else {
        self->len=0;
        ((char*)self->buf)[0]=0;
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj4;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5034, 64, "char*"), "./neo-c.h", 5034, 65);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5038, 66, "char*"), "./neo-c.h", 5038, 68);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5038, 67);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5044, 69));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_char(struct buffer*  self  , char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj5;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+1+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5058, 70, "char*"), "./neo-c.h", 5058, 71);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+10+1)*2;
        __right_value0 = (void*)0;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5062, 72, "char*"), "./neo-c.h", 5062, 74);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5062, 73);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5068, 75));
    }
    ((char*)self->buf)[self->len]=c;
    self->len++;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj6;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5085, 76, "char*"), "./neo-c.h", 5085, 77);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5088, 78, "char*"), "./neo-c.h", 5088, 80);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5088, 79);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5094, 81));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_format"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    __builtin_va_list  args  ;
    char* result;
    int len;
    void* __right_value0 = (void*)0;
    char*  mem  ;
    int size;
    int old_len;
    char* old_buf;
    int new_size;
    char* __dec_obj7;
    memset(&result, 0, sizeof(result));
    memset(&len, 0, sizeof(len));
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||msg==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=(char* )come_increment_ref_count(__builtin_string(result,"./neo-c.h",5156), "./neo-c.h", 5156, 82);
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5161, 83, "char*"), "./neo-c.h", 5161, 84);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5164, 85, "char*"), "./neo-c.h", 5164, 87);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5164, 86);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5170, 88));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
    free(result);
        __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5176, 89));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_nullterminated_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj8;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem)+1;
    if(self->len+size+1+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5188, 90, "char*"), "./neo-c.h", 5188, 91);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5191, 92, "char*"), "./neo-c.h", 5191, 94);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5191, 93);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5197, 95));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_int(struct buffer*  self  , int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_int"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj9;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(int);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5215, 96, "char*"), "./neo-c.h", 5215, 97);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5218, 98, "char*"), "./neo-c.h", 5218, 100);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5218, 99);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5224, 101));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_long(struct buffer*  self  , long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_long"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    long* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj10;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(long);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5241, 102, "char*"), "./neo-c.h", 5241, 103);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5244, 104, "char*"), "./neo-c.h", 5244, 106);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5244, 105);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5250, 107));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_short(struct buffer*  self  , short value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_short"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    short* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj11;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(short);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5268, 108, "char*"), "./neo-c.h", 5268, 109);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5271, 110, "char*"), "./neo-c.h", 5271, 112);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5271, 111);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5277, 113));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_alignment(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_alignment"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int len;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj12;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    len=self->len;
    len=(len+3)&~3;
    if(len>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5295, 114, "char*"), "./neo-c.h", 5295, 115);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+1+1)*2;
        __right_value0 = (void*)0;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5298, 116, "char*"), "./neo-c.h", 5298, 118);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5298, 117);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5304, 119));
    }
    for(i=self->len    ;i<len;i++){
        ((char*)self->buf)[i]=0;
    }
    self->len=len;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left->buf,right->buf);
    neo_current_frame = fr.prev;
}

struct buffer*  charp_to_buffer(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5330, 120, "struct buffer* "), "./neo-c.h", 5330, 121)), "./neo-c.h", 5330, 122);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5333, 123);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5333, 124);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5333, 125);
        return __result_obj__0;
    }
    buffer_append_str(result,self);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5338, 126);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5338, 127);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5338, 128);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5344))), "./neo-c.h", 5344, 129);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5344, 130));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5344, 131));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"./neo-c.h",5347))), "./neo-c.h", 5347, 132);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5347, 133));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5347, 134));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (unsigned char*)self->buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  chara_to_buffer(char* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5360, 135, "struct buffer* "), "./neo-c.h", 5360, 136)), "./neo-c.h", 5360, 137);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5362, 138);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5362, 139);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5362, 140);
        return __result_obj__0;
    }
    buffer_append(result,self,sizeof(char)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5365, 141);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5365, 142);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5365, 143);
    return __result_obj__0;
}

struct buffer*  charpa_to_buffer(char** self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5370, 144, "struct buffer* "), "./neo-c.h", 5370, 145)), "./neo-c.h", 5370, 146);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5372, 147);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5372, 148);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5372, 149);
        return __result_obj__0;
    }
    for(i=0    ;i<len;i++){
        buffer_append(result,self[i],strlen(self[i]));
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5377, 150);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5377, 151);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5377, 152);
    return __result_obj__0;
}

struct buffer*  shorta_to_buffer(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5382, 153, "struct buffer* "), "./neo-c.h", 5382, 154)), "./neo-c.h", 5382, 155);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5384, 156);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5384, 157);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5384, 158);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(short)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5387, 159);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5387, 160);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5387, 161);
    return __result_obj__0;
}

struct buffer*  inta_to_buffer(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5392, 162, "struct buffer* "), "./neo-c.h", 5392, 163)), "./neo-c.h", 5392, 164);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5394, 165);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5394, 166);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5394, 167);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(int)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5397, 168);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5397, 169);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5397, 170);
    return __result_obj__0;
}

struct buffer*  longa_to_buffer(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5402, 171, "struct buffer* "), "./neo-c.h", 5402, 172)), "./neo-c.h", 5402, 173);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5404, 174);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5404, 175);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5404, 176);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(long)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5407, 177);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5407, 178);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5407, 179);
    return __result_obj__0;
}

struct buffer*  floata_to_buffer(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5412, 180, "struct buffer* "), "./neo-c.h", 5412, 181)), "./neo-c.h", 5412, 182);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5414, 183);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5414, 184);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5414, 185);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(float)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5417, 186);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5417, 187);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5417, 188);
    return __result_obj__0;
}

struct buffer*  doublea_to_buffer(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5422, 189, "struct buffer* "), "./neo-c.h", 5422, 190)), "./neo-c.h", 5422, 191);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5424, 192);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5424, 193);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5424, 194);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(double)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5427, 195);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5427, 196);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5427, 197);
    return __result_obj__0;
}

char*  buffer_printable(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int len;
    void* __right_value0 = (void*)0;
    char*  result  ;
    char*  __result_obj__0  ;
    int n;
    int i;
    unsigned char c;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&n, 0, sizeof(n));
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    len=self->len;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "./neo-c.h", 5433, 198, "char*"), "./neo-c.h", 5433, 199);
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5436, 200);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5436, 201));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5436, 202));
        return __result_obj__0;
    }
    n=0;
    for(i=0    ;i<len;i++){
        c=self->buf[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else if(c>127) {
            result[n++]=63;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5459, 203);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5459, 204));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5459, 205));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1char$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1char$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "./neo-c.h", 1556, 213);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4, 215);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4, 216);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_29;
    struct list_item$1char$* litem_30;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_29, 0, sizeof(litem_29));
    memset(&litem_30, 0, sizeof(litem_30));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./neo-c.h", 1678, 207, "struct list_item$1char$*"))), "./neo-c.h", 1678, 208);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_29=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./neo-c.h", 1688, 209, "struct list_item$1char$*"))), "./neo-c.h", 1688, 210);
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        __right_value0 = (void*)0;
        litem_30=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./neo-c.h", 1698, 211, "struct list_item$1char$*"))), "./neo-c.h", 1698, 212);
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 214);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$* chara_to_list(char* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "./neo-c.h", 5484, 206, "struct list$1char$*"), "./neo-c.h", 5484, 217),len,self))), "./neo-c.h", 5484, 218);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5484, 219);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5484, 220);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1char$p* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1char$p_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "./neo-c.h", 1556, 228);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 230);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 231);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_31;
    struct list_item$1char$p* litem_32;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_31, 0, sizeof(litem_31));
    memset(&litem_32, 0, sizeof(litem_32));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./neo-c.h", 1678, 222, "struct list_item$1char$p*"))), "./neo-c.h", 1678, 223);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_31=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./neo-c.h", 1688, 224, "struct list_item$1char$p*"))), "./neo-c.h", 1688, 225);
        litem_31->prev=self->head;
        litem_31->next=((void*)0);
        litem_31->item=item;
        self->tail=litem_31;
        self->head->next=litem_31;
    }
    else {
        __right_value0 = (void*)0;
        litem_32=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./neo-c.h", 1698, 226, "struct list_item$1char$p*"))), "./neo-c.h", 1698, 227);
        litem_32->prev=self->tail;
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail->next=litem_32;
        self->tail=litem_32;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 229);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$p* charpa_to_list(char** self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./neo-c.h", 5489, 221, "struct list$1char$p*"), "./neo-c.h", 5489, 232),len,self))), "./neo-c.h", 5489, 233);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5489, 234);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5489, 235);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1short$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1short$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "./neo-c.h", 1556, 243);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 245);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 246);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_33;
    struct list_item$1short$* litem_34;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_33, 0, sizeof(litem_33));
    memset(&litem_34, 0, sizeof(litem_34));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./neo-c.h", 1678, 237, "struct list_item$1short$*"))), "./neo-c.h", 1678, 238);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_33=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./neo-c.h", 1688, 239, "struct list_item$1short$*"))), "./neo-c.h", 1688, 240);
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        litem_33->item=item;
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        __right_value0 = (void*)0;
        litem_34=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./neo-c.h", 1698, 241, "struct list_item$1short$*"))), "./neo-c.h", 1698, 242);
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 244);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1short$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1short$* shorta_to_list(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "./neo-c.h", 5494, 236, "struct list$1short$*"), "./neo-c.h", 5494, 247),len,self))), "./neo-c.h", 5494, 248);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5494, 249);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5494, 250);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1int$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1int$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1556, 258);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 260);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 261);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_35;
    struct list_item$1int$* litem_36;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_35, 0, sizeof(litem_35));
    memset(&litem_36, 0, sizeof(litem_36));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1678, 252, "struct list_item$1int$*"))), "./neo-c.h", 1678, 253);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_35=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1688, 254, "struct list_item$1int$*"))), "./neo-c.h", 1688, 255);
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        __right_value0 = (void*)0;
        litem_36=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1698, 256, "struct list_item$1int$*"))), "./neo-c.h", 1698, 257);
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 259);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1int$* inta_to_list(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 5499, 251, "struct list$1int$*"), "./neo-c.h", 5499, 262),len,self))), "./neo-c.h", 5499, 263);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5499, 264);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5499, 265);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1long$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1long$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "./neo-c.h", 1556, 273);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 275);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 276);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_37;
    struct list_item$1long$* litem_38;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_37, 0, sizeof(litem_37));
    memset(&litem_38, 0, sizeof(litem_38));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./neo-c.h", 1678, 267, "struct list_item$1long$*"))), "./neo-c.h", 1678, 268);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_37=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./neo-c.h", 1688, 269, "struct list_item$1long$*"))), "./neo-c.h", 1688, 270);
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./neo-c.h", 1698, 271, "struct list_item$1long$*"))), "./neo-c.h", 1698, 272);
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 274);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1long$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1long$* longa_to_list(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "./neo-c.h", 5504, 266, "struct list$1long$*"), "./neo-c.h", 5504, 277),len,self))), "./neo-c.h", 5504, 278);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5504, 279);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5504, 280);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1float$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1float$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "./neo-c.h", 1556, 288);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 290);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 291);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_39;
    struct list_item$1float$* litem_40;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_39, 0, sizeof(litem_39));
    memset(&litem_40, 0, sizeof(litem_40));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./neo-c.h", 1678, 282, "struct list_item$1float$*"))), "./neo-c.h", 1678, 283);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_39=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./neo-c.h", 1688, 284, "struct list_item$1float$*"))), "./neo-c.h", 1688, 285);
        litem_39->prev=self->head;
        litem_39->next=((void*)0);
        litem_39->item=item;
        self->tail=litem_39;
        self->head->next=litem_39;
    }
    else {
        __right_value0 = (void*)0;
        litem_40=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./neo-c.h", 1698, 286, "struct list_item$1float$*"))), "./neo-c.h", 1698, 287);
        litem_40->prev=self->tail;
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail->next=litem_40;
        self->tail=litem_40;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 289);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1float$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1float$* floata_to_list(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "./neo-c.h", 5509, 281, "struct list$1float$*"), "./neo-c.h", 5509, 292),len,self))), "./neo-c.h", 5509, 293);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5509, 294);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5509, 295);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1double$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1double$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "./neo-c.h", 1556, 303);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 305);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 306);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_41;
    struct list_item$1double$* litem_42;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_41, 0, sizeof(litem_41));
    memset(&litem_42, 0, sizeof(litem_42));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./neo-c.h", 1678, 297, "struct list_item$1double$*"))), "./neo-c.h", 1678, 298);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_41=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./neo-c.h", 1688, 299, "struct list_item$1double$*"))), "./neo-c.h", 1688, 300);
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        __right_value0 = (void*)0;
        litem_42=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./neo-c.h", 1698, 301, "struct list_item$1double$*"))), "./neo-c.h", 1698, 302);
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 304);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1double$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1double$* doublea_to_list(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "./neo-c.h", 5514, 296, "struct list$1double$*"), "./neo-c.h", 5514, 307),len,self))), "./neo-c.h", 5514, 308);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5514, 309);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5514, 310);
    return __result_obj__0;
}

_Bool  bool_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  char_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  short_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  int_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  long_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  size_t_equals(unsigned long  int  self  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  float_equals(float self, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  double_equals(double self, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  bool_operator_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  _Bool_operator_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  bool_operator_not_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  _Bool_operator_not_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  boolp_equals(_Bool*  self  , _Bool*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "boolp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool  string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool  string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool  charp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool  chara_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

char*  charp_operator_add(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||right==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5757))), "./neo-c.h", 5757, 311);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5757, 312));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5757, 313));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "./neo-c.h", 5761, 314, "char*"), "./neo-c.h", 5761, 315);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5766, 316);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5766, 317));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5766, 318));
    return __result_obj__0;
}

char*  string_operator_add(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||right==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5772))), "./neo-c.h", 5772, 319);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5772, 320));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5772, 321));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "./neo-c.h", 5776, 322, "char*"), "./neo-c.h", 5776, 323);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5781, 324);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5781, 325));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5781, 326));
    return __result_obj__0;
}

char*  charp_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_mult"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5787))), "./neo-c.h", 5787, 327);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5787, 328));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5787, 329));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5789, 330, "struct buffer* "), "./neo-c.h", 5789, 331)), "./neo-c.h", 5789, 332);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "./neo-c.h", 5795, 333);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 5795, 334);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5795, 335));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5795, 336));
    return __result_obj__0;
}

char*  string_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_mult"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5801))), "./neo-c.h", 5801, 337);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5801, 338));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5801, 339));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5803, 340, "struct buffer* "), "./neo-c.h", 5803, 341)), "./neo-c.h", 5803, 342);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "./neo-c.h", 5809, 343);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 5809, 344);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5809, 345));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5809, 346));
    return __result_obj__0;
}

_Bool  charpa_contained(const char* self[], unsigned long  int  len  , const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  result  ;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(_Bool)0;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return result;
    }
    for(i=0    ;i<len;i++){
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            result=(_Bool)1;
            break;
        }
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  int  shorta_length(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  inta_length(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  longa_length(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  floata_length(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  doublea_length(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int bool_get_hash_key(_Bool  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  int  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    if(value==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    const char* p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int string_get_hash_key(char* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    char* p;
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    if(value==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int voidp_get_hash_key(void* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool  bool_clone(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool  _Bool_clone(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  int  size_t_clone(unsigned long  int  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool  xisalpha(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  result  ;
    memset(&result, 0, sizeof(result));
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool  xisblank(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool  xisdigit(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool  xisspace(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool  xisalnum(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool  xisascii(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  result  ;
    memset(&result, 0, sizeof(result));
    result=(c>=32&&c<=126);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool  xispunct(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int charp_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int chara_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

char*  charp_reverse(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_reverse"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6061))), "./neo-c.h", 6061, 347);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6061, 348));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6061, 349));
        return __result_obj__0;
    }
    len=strlen(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "./neo-c.h", 6064, 350, "char*"), "./neo-c.h", 6064, 351);
    for(i=0    ;i<len;i++){
        result[i]=str[len-i-1];
    }
    result[len]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6072, 352);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6072, 353));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6072, 354));
    return __result_obj__0;
}

char*  string_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_load_range_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6078))), "./neo-c.h", 6078, 355);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6078, 356));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6078, 357));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "./neo-c.h", 6091, 358);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6091, 359));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6091, 360));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6091, 361));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6103))), "./neo-c.h", 6103, 362);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6103, 363));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6103, 364));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6107))), "./neo-c.h", 6107, 365);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6107, 366));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6107, 367));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./neo-c.h", 6110, 368, "char*"), "./neo-c.h", 6110, 369);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6115, 370);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6115, 371));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6115, 372));
    return __result_obj__0;
}

char*  charp_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_load_range_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6121))), "./neo-c.h", 6121, 373);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6121, 374));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6121, 375));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "./neo-c.h", 6134, 376);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6134, 377));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6134, 378));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6134, 379));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6146))), "./neo-c.h", 6146, 380);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6146, 381));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6146, 382));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6150))), "./neo-c.h", 6150, 383);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6150, 384));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6150, 385));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./neo-c.h", 6153, 386, "char*"), "./neo-c.h", 6153, 387);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6158, 388);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6158, 389));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6158, 390));
    return __result_obj__0;
}

char*  charp_substring(const char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_substring"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6164))), "./neo-c.h", 6164, 391);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6164, 392));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6164, 393));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "./neo-c.h", 6177, 394);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6177, 395));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6177, 396));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6177, 397));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6189))), "./neo-c.h", 6189, 398);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6189, 399));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6189, 400));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6193))), "./neo-c.h", 6193, 401);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6193, 402));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6193, 403));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./neo-c.h", 6196, 404, "char*"), "./neo-c.h", 6196, 405);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6201, 406);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6201, 407));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6201, 408));
    return __result_obj__0;
}

char*  xsprintf(const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __builtin_va_list  args  ;
    char* result;
    int len;
    char*  result2  ;
    memset(&result, 0, sizeof(result));
    memset(&len, 0, sizeof(len));
    memset(&result2, 0, sizeof(result2));
    if(msg==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6207))), "./neo-c.h", 6207, 409);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6207, 410));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6207, 411));
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6216))), "./neo-c.h", 6216, 412);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6216, 413));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6216, 414));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"./neo-c.h",6219), "./neo-c.h", 6219, 415);
    free(result);
        __result_obj__0 = (char* )come_increment_ref_count(result2, "./neo-c.h", 6223, 416);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6223, 417));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6223, 418));
    return __result_obj__0;
}

char*  charp_delete(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_delete"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6229))), "./neo-c.h", 6229, 419);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6229, 420));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6229, 421));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head>=len) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"./neo-c.h",6235))), "./neo-c.h", 6235, 422);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6235, 423));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6235, 424));
        return __result_obj__0;
    }
    if(strcmp(str,"")==0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"./neo-c.h",6239))), "./neo-c.h", 6239, 425);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6239, 426));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6239, 427));
        return __result_obj__0;
    }
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"./neo-c.h",6255))), "./neo-c.h", 6255, 428);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6255, 429));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6255, 430));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), "./neo-c.h", 6262, 431, "char*"), "./neo-c.h", 6262, 432);
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    result[len-(tail-head)]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6269, 433);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6269, 434));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6269, 435));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 437);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 440);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 441);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 439);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 438));
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj13  ;
    struct list_item$1char$ph* litem_43;
    char*  __dec_obj14  ;
    struct list_item$1char$ph* litem_44;
    char*  __dec_obj15  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_43, 0, sizeof(litem_43));
    memset(&litem_44, 0, sizeof(litem_44));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1674, 452));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1678, 453, "struct list_item$1char$ph*"))), "./neo-c.h", 1678, 454);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj13=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1682, 456);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1682, 455);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_43=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1688, 457, "struct list_item$1char$ph*"))), "./neo-c.h", 1688, 458);
        litem_43->prev=self->head;
        litem_43->next=((void*)0);
        __dec_obj14=litem_43->item,
        litem_43->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1692, 460);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1692, 459);
        self->tail=litem_43;
        self->head->next=litem_43;
    }
    else {
        __right_value0 = (void*)0;
        litem_44=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1698, 461, "struct list_item$1char$ph*"))), "./neo-c.h", 1698, 462);
        litem_44->prev=self->tail;
        litem_44->next=((void*)0);
        __dec_obj15=litem_44->item,
        litem_44->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1702, 464);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1702, 463);
        self->tail->next=litem_44;
        self->tail=litem_44;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1710, 465));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct list$1char$ph* charp_split_char(char* self, char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer*  str  ;
    int self_len;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&str, 0, sizeof(str));
    memset(&self_len, 0, sizeof(self_len));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 6275, 436, "struct list$1char$ph*"), "./neo-c.h", 6275, 442)))), "./neo-c.h", 6275, 443);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6275, 444);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6275, 445);
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 6278, 446, "struct list$1char$ph*"), "./neo-c.h", 6278, 447)), "./neo-c.h", 6278, 448);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 6280, 449, "struct buffer* "), "./neo-c.h", 6280, 450)), "./neo-c.h", 6280, 451);
    self_len=charp_length(self);
    for(i=0    ;i<self_len;i++){
        if(self[i]==c) {
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"./neo-c.h",6285), "./neo-c.h", 6285, 466));
            buffer_reset(str);
        }
        else {
            buffer_append_char(str,self[i]);
        }
    }
    if(buffer_length(str)!=0) {
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"./neo-c.h",6293), "./neo-c.h", 6293, 467));
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 6296, 468);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6296, 469);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6296, 470);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6296, 471);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "./neo-c.h", 6301, 472);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6301, 473));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6301, 474));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "./neo-c.h", 6306, 475);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6306, 476));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6306, 477));
    return __result_obj__0;
}

char*  charp_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char*  result  ;
    int n;
    int i;
    char c;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&n, 0, sizeof(n));
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6312))), "./neo-c.h", 6312, 478);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6312, 479));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6312, 480));
        return __result_obj__0;
    }
    len=charp_length(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "./neo-c.h", 6315, 481, "char*"), "./neo-c.h", 6315, 482);
    n=0;
    for(i=0    ;i<len;i++){
        c=str[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6334, 483);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6334, 484));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6334, 485));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "./neo-c.h", 6339, 486);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6339, 487));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6339, 488));
    return __result_obj__0;
}

char*  charp_sub_plain(char* self, char* str, char* replace)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub_plain"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char* p;
    char* p2;
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    memset(&p2, 0, sizeof(p2));
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6345))), "./neo-c.h", 6345, 489);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6345, 490));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6345, 491));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 6348, 492, "struct buffer* "), "./neo-c.h", 6348, 493)), "./neo-c.h", 6348, 494);
    p=self;
    while((_Bool)1) {
        p2=strstr(p,str);
        if(p2==((void*)0)) {
            p2=p;
            while(*p2) {
                p2++;
            }
            buffer_append(result,p,p2-p);
            break;
        }
        buffer_append(result,p,p2-p);
        buffer_append_str(result,replace);
        p=p2+strlen(str);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "./neo-c.h", 6370, 495);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6370, 496);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6370, 497));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6370, 498));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6379))), "./neo-c.h", 6379, 499);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6379, 500));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6379, 501));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==47) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"./neo-c.h",6393))), "./neo-c.h", 6393, 502);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6393, 503));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6393, 504));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"./neo-c.h",6396))), "./neo-c.h", 6396, 505);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6396, 506));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6396, 507));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6399))), "./neo-c.h", 6399, 508);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6399, 509));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6399, 510));
    return __result_obj__0;
}

char*  xnoextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xnoextname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  path2  ;
    char* p;
    memset(&path2, 0, sizeof(path2));
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6405))), "./neo-c.h", 6405, 511);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6405, 512));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6405, 513));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "./neo-c.h", 6407, 514);
    p=path2+strlen(path2);
    while(p>=path2) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path2) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"./neo-c.h",6421))), "./neo-c.h", 6421, 515);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 6421, 516));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6421, 517));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6421, 518));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "./neo-c.h", 6424, 519);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 6424, 520));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6424, 521));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6424, 522));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6427))), "./neo-c.h", 6427, 523);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 6427, 524));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6427, 525));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6427, 526));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6433))), "./neo-c.h", 6433, 527);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6433, 528));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6433, 529));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"./neo-c.h",6447))), "./neo-c.h", 6447, 530);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6447, 531));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6447, 532));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"./neo-c.h",6450))), "./neo-c.h", 6450, 533);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6450, 534));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6450, 535));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6453))), "./neo-c.h", 6453, 536);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6453, 537));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6453, 538));
    return __result_obj__0;
}

char*  bool_to_string(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","./neo-c.h",6462))), "./neo-c.h", 6462, 539);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6462, 540));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6462, 541));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","./neo-c.h",6465))), "./neo-c.h", 6465, 542);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6465, 543));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6465, 544));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  _Bool_to_string(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","./neo-c.h",6472))), "./neo-c.h", 6472, 545);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6472, 546));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6472, 547));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","./neo-c.h",6475))), "./neo-c.h", 6475, 548);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6475, 549));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6475, 550));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "./neo-c.h", 6481, 551);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6481, 552));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6481, 553));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "./neo-c.h", 6486, 554);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6486, 555));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6486, 556));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "./neo-c.h", 6491, 557);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6491, 558));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6491, 559));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "./neo-c.h", 6496, 560);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6496, 561));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6496, 562));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  int  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "./neo-c.h", 6501, 563);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6501, 564));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6501, 565));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "./neo-c.h", 6506, 566);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6506, 567));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6506, 568));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "./neo-c.h", 6511, 569);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6511, 570));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6511, 571));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6517))), "./neo-c.h", 6517, 572);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6517, 573));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6517, 574));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6519))), "./neo-c.h", 6519, 575);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6519, 576));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6519, 577));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6525))), "./neo-c.h", 6525, 578);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6525, 579));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6525, 580));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6527))), "./neo-c.h", 6527, 581);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6527, 582));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6527, 583));
    return __result_obj__0;
}

int bool_compare(_Bool  left  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!left&&right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int _Bool_compare(_Bool  left  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!left&&right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int char_compare(char left, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int short_compare(short left, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int int_compare(int left, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int long_compare(long left, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int size_t_compare(unsigned long  int  left  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int float_compare(float left, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int double_compare(double left, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int string_compare(char* left, char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

int charp_compare(char* left, char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

char*  charp_puts(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6710))), "./neo-c.h", 6710, 584);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6710, 585));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6710, 586));
        return __result_obj__0;
    }
    puts(self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6714))), "./neo-c.h", 6714, 587);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6714, 588));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6714, 589));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6720))), "./neo-c.h", 6720, 590);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6720, 591));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6720, 592));
        return __result_obj__0;
    }
    printf("%s",self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6724))), "./neo-c.h", 6724, 593);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6724, 594));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6724, 595));
    return __result_obj__0;
}

char*  charp_printf(char* self, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* msg2;
    __builtin_va_list  args  ;
    memset(&msg2, 0, sizeof(msg2));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6752))), "./neo-c.h", 6752, 596);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6752, 597));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6752, 598));
        return __result_obj__0;
    }
    __builtin_va_start(args,self);
    vasprintf(&msg2,self,args);
    __builtin_va_end(args);
    printf("%s",msg2);
    free(msg2);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6765))), "./neo-c.h", 6765, 599);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6765, 600));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6765, 601));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long long_printf(long self, char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<self;i++){
        block(parent,i);
    }
    neo_current_frame = fr.prev;
}

static struct Result$1__neo_FILE$p* Result$1__neo_FILE$p_None(struct Result$1__neo_FILE$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1__neo_FILE$p_None"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1__neo_FILE$p* __result_obj__0;
    self->tag=2;
        __result_obj__0 = (struct Result$1__neo_FILE$p*)come_increment_ref_count(self, "./neo-c.h", 888, 603);
    come_call_finalizer(Result$1__neo_FILE$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 604);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 605);
    return __result_obj__0;
}

static void Result$1__neo_FILE$p$p_finalize(struct Result$1__neo_FILE$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1__neo_FILE$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static struct Result$1__neo_FILE$p* Result$1__neo_FILE$p_Some(struct Result$1__neo_FILE$p* self, struct __neo_FILE*  v1  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1__neo_FILE$p_Some"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1__neo_FILE$p* __result_obj__0;
    self->tag=1;
    self->Some_value=v1;
        __result_obj__0 = (struct Result$1__neo_FILE$p*)come_increment_ref_count(self, "./neo-c.h", 888, 611);
    come_call_finalizer(Result$1__neo_FILE$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 612);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 613);
    return __result_obj__0;
}

struct Result$1__neo_FILE$p* xfopen(const char* file_name, const char* mode)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xfopen"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct __neo_FILE*  f  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct Result$1__neo_FILE$p* __result_obj__0;
    memset(&f, 0, sizeof(f));
    f=fopen(file_name,mode);
    if(f==((void*)0)) {
                __result_obj__0 = (struct Result$1__neo_FILE$p*)come_increment_ref_count(((struct Result$1__neo_FILE$p*)(__right_value1=Result$1__neo_FILE$p_None((struct Result$1__neo_FILE$p*)come_increment_ref_count((struct Result$1__neo_FILE$p*)come_calloc(1, sizeof(struct Result$1__neo_FILE$p)*(1), "./neo-c.h", 6806, 602, "struct Result$1__neo_FILE$p*"), "./neo-c.h", 6806, 606)))), "./neo-c.h", 6806, 607);
        come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6806, 608);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6806, 609);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1__neo_FILE$p*)come_increment_ref_count(((struct Result$1__neo_FILE$p*)(__right_value1=Result$1__neo_FILE$p_Some((struct Result$1__neo_FILE$p*)come_increment_ref_count((struct Result$1__neo_FILE$p*)come_calloc(1, sizeof(struct Result$1__neo_FILE$p)*(1), "./neo-c.h", 6809, 610, "struct Result$1__neo_FILE$p*"), "./neo-c.h", 6809, 614),f))), "./neo-c.h", 6809, 615);
    come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6809, 616);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6809, 617);
    return __result_obj__0;
}

static struct Result$1buffer$ph* Result$1buffer$ph_None(struct Result$1buffer$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1buffer$ph_None"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1buffer$ph* __result_obj__0;
    self->tag=2;
        __result_obj__0 = (struct Result$1buffer$ph*)come_increment_ref_count(self, "./neo-c.h", 888, 619);
    come_call_finalizer(Result$1buffer$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 621);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1buffer$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 622);
    return __result_obj__0;
}

static void Result$1buffer$ph$p_finalize(struct Result$1buffer$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1buffer$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->Some_value!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->Some_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Result$1buffer$ph$p_finalize}", 2, 620);
    }
        neo_current_frame = fr.prev;
}

static struct Result$1buffer$ph* Result$1buffer$ph_Some(struct Result$1buffer$ph* self, struct buffer*  v1  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1buffer$ph_Some"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __dec_obj16  ;
    struct Result$1buffer$ph* __result_obj__0;
    self->tag=1;
    __dec_obj16=self->Some_value,
    self->Some_value=(struct buffer* )come_increment_ref_count(v1, "./neo-c.h", 888, 638);
    come_call_finalizer(buffer_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 888, 637);
        __result_obj__0 = (struct Result$1buffer$ph*)come_increment_ref_count(self, "./neo-c.h", 888, 639);
    come_call_finalizer(Result$1buffer$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 640);
    come_call_finalizer(buffer_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 888, 641);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1buffer$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 642);
    return __result_obj__0;
}

struct Result$1buffer$ph* FILE_fread(struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fread"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct Result$1buffer$ph* __result_obj__0;
    struct buffer*  buf  ;
    int size;
    memset(&buf, 0, sizeof(buf));
    memset(&size, 0, sizeof(size));
    if(f==((void*)0)) {
                __result_obj__0 = (struct Result$1buffer$ph*)come_increment_ref_count(((struct Result$1buffer$ph*)(__right_value1=Result$1buffer$ph_None((struct Result$1buffer$ph*)come_increment_ref_count((struct Result$1buffer$ph*)come_calloc(1, sizeof(struct Result$1buffer$ph)*(1), "./neo-c.h", 6814, 618, "struct Result$1buffer$ph*"), "./neo-c.h", 6814, 623)))), "./neo-c.h", 6814, 624);
        come_call_finalizer(Result$1buffer$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6814, 625);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1buffer$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6814, 626);
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 6816, 627, "struct buffer* "), "./neo-c.h", 6816, 628)), "./neo-c.h", 6816, 629);
    while(1) {
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,8192,f);
        buffer_append(buf,buf2,size);
        if(size<8192) {
            break;
        }
    }
    if(ferror(f)) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1buffer$ph*)come_increment_ref_count(((struct Result$1buffer$ph*)(__right_value1=Result$1buffer$ph_None((struct Result$1buffer$ph*)come_increment_ref_count((struct Result$1buffer$ph*)come_calloc(1, sizeof(struct Result$1buffer$ph)*(1), "./neo-c.h", 6831, 630, "struct Result$1buffer$ph*"), "./neo-c.h", 6831, 631)))), "./neo-c.h", 6831, 632);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6831, 633);
        come_call_finalizer(Result$1buffer$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6831, 634);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1buffer$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6831, 635);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1buffer$ph*)come_increment_ref_count(((struct Result$1buffer$ph*)(__right_value1=Result$1buffer$ph_Some((struct Result$1buffer$ph*)come_increment_ref_count((struct Result$1buffer$ph*)come_calloc(1, sizeof(struct Result$1buffer$ph)*(1), "./neo-c.h", 6834, 636, "struct Result$1buffer$ph*"), "./neo-c.h", 6834, 643),(struct buffer* )come_increment_ref_count(buf, "./neo-c.h", 6834, 644)))), "./neo-c.h", 6834, 645);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6834, 646);
    come_call_finalizer(Result$1buffer$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6834, 647);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1buffer$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6834, 648);
    return __result_obj__0;
}

static struct Result$1int$* Result$1int$_None(struct Result$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1int$_None"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1int$* __result_obj__0;
    self->tag=2;
        __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(self, "./neo-c.h", 888, 650);
    come_call_finalizer(Result$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 651);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 652);
    return __result_obj__0;
}

static void Result$1int$$p_finalize(struct Result$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static struct Result$1int$* Result$1int$_Some(struct Result$1int$* self, int v1)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1int$_Some"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1int$* __result_obj__0;
    self->tag=1;
    self->Some_value=v1;
        __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(self, "./neo-c.h", 888, 663);
    come_call_finalizer(Result$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 664);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 665);
    return __result_obj__0;
}

struct Result$1int$* FILE_fwrite(struct __neo_FILE*  f  , const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fwrite"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct Result$1int$* __result_obj__0;
    int result;
    memset(&result, 0, sizeof(result));
    if(f==((void*)0)||str==((void*)0)) {
                __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_None((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6840, 649, "struct Result$1int$*"), "./neo-c.h", 6840, 653)))), "./neo-c.h", 6840, 654);
        come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6840, 655);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6840, 656);
        return __result_obj__0;
    }
    result=fwrite(str,1,strlen(str),f);
    if(result!=strlen(str)) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_None((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6846, 657, "struct Result$1int$*"), "./neo-c.h", 6846, 658)))), "./neo-c.h", 6846, 659);
        come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6846, 660);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6846, 661);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_Some((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6849, 662, "struct Result$1int$*"), "./neo-c.h", 6849, 666),result))), "./neo-c.h", 6849, 667);
    come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6849, 668);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6849, 669);
    return __result_obj__0;
}

struct Result$1int$* FILE_fclose(struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fclose"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct Result$1int$* __result_obj__0;
    int result;
    memset(&result, 0, sizeof(result));
    if(f==((void*)0)) {
                __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_None((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6855, 670, "struct Result$1int$*"), "./neo-c.h", 6855, 671)))), "./neo-c.h", 6855, 672);
        come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6855, 673);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6855, 674);
        return __result_obj__0;
    }
    result=fclose(f);
    if(result<0) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_None((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6861, 675, "struct Result$1int$*"), "./neo-c.h", 6861, 676)))), "./neo-c.h", 6861, 677);
        come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6861, 678);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6861, 679);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_Some((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6864, 680, "struct Result$1int$*"), "./neo-c.h", 6864, 681),result))), "./neo-c.h", 6864, 682);
    come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6864, 683);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6864, 684);
    return __result_obj__0;
}

struct Result$1__neo_FILE$p* FILE_fprintf(struct __neo_FILE*  f  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct Result$1__neo_FILE$p* __result_obj__0;
    __builtin_va_list  args  ;
    int result;
    memset(&result, 0, sizeof(result));
    if(f==((void*)0)||msg==((void*)0)) {
                __result_obj__0 = (struct Result$1__neo_FILE$p*)come_increment_ref_count(((struct Result$1__neo_FILE$p*)(__right_value1=Result$1__neo_FILE$p_None((struct Result$1__neo_FILE$p*)come_increment_ref_count((struct Result$1__neo_FILE$p*)come_calloc(1, sizeof(struct Result$1__neo_FILE$p)*(1), "./neo-c.h", 6870, 685, "struct Result$1__neo_FILE$p*"), "./neo-c.h", 6870, 686)))), "./neo-c.h", 6870, 687);
        come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6870, 688);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6870, 689);
        return __result_obj__0;
    }
    char msg2[1024*2*2*2];
    memset(&msg2, 0, sizeof(msg2));
    __builtin_va_start(args,msg);
    vsnprintf(msg2,1024*2*2*2,msg,args);
    __builtin_va_end(args);
    result=fprintf(f,"%s",msg2);
    if(result<0) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1__neo_FILE$p*)come_increment_ref_count(((struct Result$1__neo_FILE$p*)(__right_value1=Result$1__neo_FILE$p_None((struct Result$1__neo_FILE$p*)come_increment_ref_count((struct Result$1__neo_FILE$p*)come_calloc(1, sizeof(struct Result$1__neo_FILE$p)*(1), "./neo-c.h", 6882, 690, "struct Result$1__neo_FILE$p*"), "./neo-c.h", 6882, 691)))), "./neo-c.h", 6882, 692);
        come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6882, 693);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6882, 694);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1__neo_FILE$p*)come_increment_ref_count(((struct Result$1__neo_FILE$p*)(__right_value1=Result$1__neo_FILE$p_Some((struct Result$1__neo_FILE$p*)come_increment_ref_count((struct Result$1__neo_FILE$p*)come_calloc(1, sizeof(struct Result$1__neo_FILE$p)*(1), "./neo-c.h", 6885, 695, "struct Result$1__neo_FILE$p*"), "./neo-c.h", 6885, 696),f))), "./neo-c.h", 6885, 697);
    come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6885, 698);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1__neo_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6885, 699);
    return __result_obj__0;
}

static struct Result$1list$1char$ph$ph* Result$1list$1char$ph$ph_None(struct Result$1list$1char$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1list$1char$ph$ph_None"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1list$1char$ph$ph* __result_obj__0;
    self->tag=2;
        __result_obj__0 = (struct Result$1list$1char$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 888, 704);
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 706);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 707);
    return __result_obj__0;
}

static void Result$1list$1char$ph$ph$p_finalize(struct Result$1list$1char$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1list$1char$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->Some_value!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->Some_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Result$1list$1char$ph$ph$p_finalize}", 2, 705);
    }
        neo_current_frame = fr.prev;
}

static struct Result$1list$1char$ph$ph* Result$1list$1char$ph$ph_Some(struct Result$1list$1char$ph$ph* self, struct list$1char$ph* v1)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1list$1char$ph$ph_Some"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __dec_obj17;
    struct Result$1list$1char$ph$ph* __result_obj__0;
    self->tag=1;
    __dec_obj17=self->Some_value,
    self->Some_value=(struct list$1char$ph*)come_increment_ref_count(v1, "./neo-c.h", 2, 723);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 2, 722);
        __result_obj__0 = (struct Result$1list$1char$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 888, 724);
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 725);
    come_call_finalizer(list$1char$ph$p_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 888, 726);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 888, 727);
    return __result_obj__0;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 721);
    }
        neo_current_frame = fr.prev;
}

struct Result$1list$1char$ph$ph* FILE_readlines(struct __neo_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_readlines"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct Result$1list$1char$ph$ph* __result_obj__0;
    memset(&result, 0, sizeof(result));
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 6890, 700, "struct list$1char$ph*"), "./neo-c.h", 6890, 701)), "./neo-c.h", 6890, 702);
    if(f==((void*)0)) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1list$1char$ph$ph*)come_increment_ref_count(((struct Result$1list$1char$ph$ph*)(__right_value1=Result$1list$1char$ph$ph_None((struct Result$1list$1char$ph$ph*)come_increment_ref_count((struct Result$1list$1char$ph$ph*)come_calloc(1, sizeof(struct Result$1list$1char$ph$ph)*(1), "./neo-c.h", 6893, 703, "struct Result$1list$1char$ph$ph*"), "./neo-c.h", 6893, 708)))), "./neo-c.h", 6893, 709);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6893, 710);
        come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6893, 711);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6893, 712);
        return __result_obj__0;
    }
    while(1) {
        char buf[8192];
        memset(&buf, 0, sizeof(buf));
        if(fgets(buf,8192,f)==((void*)0)) {
            break;
        }
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(buf,"./neo-c.h",6903), "./neo-c.h", 6903, 713));
    }
    if(ferror(f)) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1list$1char$ph$ph*)come_increment_ref_count(((struct Result$1list$1char$ph$ph*)(__right_value1=Result$1list$1char$ph$ph_None((struct Result$1list$1char$ph$ph*)come_increment_ref_count((struct Result$1list$1char$ph$ph*)come_calloc(1, sizeof(struct Result$1list$1char$ph$ph)*(1), "./neo-c.h", 6907, 714, "struct Result$1list$1char$ph$ph*"), "./neo-c.h", 6907, 715)))), "./neo-c.h", 6907, 716);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6907, 717);
        come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6907, 718);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6907, 719);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1list$1char$ph$ph*)come_increment_ref_count(((struct Result$1list$1char$ph$ph*)(__right_value1=Result$1list$1char$ph$ph_Some((struct Result$1list$1char$ph$ph*)come_increment_ref_count((struct Result$1list$1char$ph$ph*)come_calloc(1, sizeof(struct Result$1list$1char$ph$ph)*(1), "./neo-c.h", 6910, 720, "struct Result$1list$1char$ph$ph*"), "./neo-c.h", 6910, 728),(struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 6910, 729)))), "./neo-c.h", 6910, 730);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6910, 731);
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6910, 732);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6910, 733);
    return __result_obj__0;
}

_Bool  xiswalpha(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  result  ;
    memset(&result, 0, sizeof(result));
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool  xiswblank(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswblank"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool  xiswdigit(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool  xiswalnum(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return xiswalpha(c)||xiswdigit(c);
    neo_current_frame = fr.prev;
}

_Bool  xiswascii(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswascii"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  result  ;
    memset(&result, 0, sizeof(result));
    result=(c>=32&&c<=126);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

int string_index(char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* head;
    memset(&head, 0, sizeof(head));
    if(str==((void*)0)||search_str==((void*)0)) {
                neo_current_frame = fr.prev;
        return default_value;
    }
    head=strstr(str,search_str);
    if(head==((void*)0)) {
                neo_current_frame = fr.prev;
        return default_value;
    }
        neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 737);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 771);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 772);
    return __result_obj__0;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 770);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 769);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 738));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 768);
    }
            neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 739);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 740);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 743);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 744);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 745):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 746):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 747));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 748));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 749));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 750));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 751));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 752));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 753));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 754));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 757);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 758);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 759);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 760);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 761);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 762));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 763);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 764);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 765);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 766):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 767);
    }
            neo_current_frame = fr.prev;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 742);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 741);
    }
            neo_current_frame = fr.prev;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 756);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 755):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 774);
    }
        neo_current_frame = fr.prev;
}

static void sClass_finalize(struct sClass* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 778));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 779);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 780));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 781));
    }
        neo_current_frame = fr.prev;
}

struct sClass* sClass_initialize(struct sClass* self, char*  name  , _Bool  number  , _Bool  union_  , _Bool  generics  , _Bool  method_generics  , _Bool  protocol_  , _Bool  struct_  , _Bool  float_  , int generics_num, int method_generics_num, _Bool  enum_  , _Bool  uniq_  , _Bool  typename  , struct sInfo*  info  , _Bool  iter_  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj18  ;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsType$ph$ph* __dec_obj19;
    struct sClass* __result_obj__0;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    self->mTypeName=typename;
    self->mUniq=uniq_;
    __dec_obj18=self->mName,
    self->mName=(char* )come_increment_ref_count(__builtin_string(name,"./common.h",95), "./common.h", 95, 735);
    __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 95, 734);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __right_value0 = (void*)0;
    __dec_obj19=self->mFields,
    self->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "./common.h", 100, 736, "struct list$1tuple2$2char$phsType$ph$ph*"), "./common.h", 100, 773)), "./common.h", 2, 776);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 2, 775);
    self->mIter=iter_;
        __result_obj__0 = (struct sClass*)come_increment_ref_count(self, "./common.h", 103, 777);
    come_call_finalizer(sClass_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 103, 782);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 103, 783));
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 103, 784);
    return __result_obj__0;
}

static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph$p_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 787);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 788);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 789);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right9 = (self->size); if(__neo_div_right9 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right9; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 790);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 791);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 792);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 793);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 794);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 795);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 796);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 797);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 798);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 799);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 800);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 801);
    return __result_obj__0;
}

static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 802);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 803);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 804);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right10 = (self->size); if(__neo_div_right10 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right10; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 805);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 806);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 807);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 808);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 809);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 810);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 811);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 812);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 813);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 814);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 815);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 816);
    return __result_obj__0;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool  by_pointer  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_insert"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct map$2char$phsClass$ph* __result_obj__0;
    _Bool  add_to_key_list  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&add_to_key_list, 0, sizeof(add_to_key_list));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4007, 822));
        come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4007, 823);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    add_to_key_list=(_Bool)0;
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right12 = (self->size); if(__neo_div_right12 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right12; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                map$2char$phsClass$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4026, 838));
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4027, 839);
                }
                else {
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4033, 840);
                    self->items[it]=(struct sClass* )come_increment_ref_count(item, "./neo-c.h", 4034, 841);
                }
                else {
                    self->items[it]=item;
                }
                self->hashes[it]=key_hash;
                add_to_key_list=(_Bool)1;
                break;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe2(self);
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            self->hashes[it]=key_hash;
            if(1) {
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4057, 842);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sClass* )come_increment_ref_count(item, "./neo-c.h", 4063, 843);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            add_to_key_list=(_Bool)1;
            break;
        }
    }
    if(add_to_key_list) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4077, 844));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4080, 845));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4080, 846);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_rehash"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sClass**  items  ;
    unsigned int* hashes;
    _Bool*  item_existance  ;
    int i;
    int len;
    int i_45;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    memset(&old_size, 0, sizeof(old_size));
    memset(&size, 0, sizeof(size));
    memset(&keys, 0, sizeof(keys));
    memset(&items, 0, sizeof(items));
    memset(&hashes, 0, sizeof(hashes));
    memset(&item_existance, 0, sizeof(item_existance));
    memset(&i, 0, sizeof(i));
    memset(&len, 0, sizeof(len));
    memset(&i_45, 0, sizeof(i_45));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&n, 0, sizeof(n));
    old_size=self->size;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3925, 824, "char** "))), "./neo-c.h", 3925, 825);
    __right_value0 = (void*)0;
    items=(struct sClass** )come_increment_ref_count(((struct sClass** )(__right_value0=(struct sClass* *)come_calloc(1, sizeof(struct sClass* )*(1*(size)), "./neo-c.h", 3926, 826, "struct sClass** "))), "./neo-c.h", 3926, 827);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3927, 828, "unsigned int*"))), "./neo-c.h", 3927, 829);
    __right_value0 = (void*)0;
    item_existance=(_Bool* )come_increment_ref_count(((_Bool* )(__right_value0=(_Bool *)come_calloc(1, sizeof(_Bool )*(1*(size)), "./neo-c.h", 3928, 830, "_Bool* "))), "./neo-c.h", 3928, 831);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(i_45=0    ;i_45<old_size;i_45++){
        if(!self->item_existance[i_45]) {
            continue;
        }
        key_hash=self->hashes[i_45];
        hash=({ __typeof__(size) __neo_div_right11 = (size); if(__neo_div_right11 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right11; });
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                if(++n>=size) {
                    n=0;
                }
                if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe2(self);
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                hashes[n]=key_hash;
                keys[n]=self->keys[i_45];
                items[n]=self->items[i_45];
                len++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3970, 832));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3971, 833));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phsClass$ph_remove_ordered_entry(struct map$2char$phsClass$ph* self, char*  key  , _Bool  by_pointer  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_remove_ordered_entry"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int pos;
    memset(&pos, 0, sizeof(pos));
    pos=map$2char$phsClass$ph_key_position(self,key,by_pointer);
    if(pos>=0) {
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsClass$ph_key_position(struct map$2char$phsClass$ph* self, char*  key  , _Bool  by_pointer  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_key_position"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
    memset(&pos, 0, sizeof(pos));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    pos=0;
    it=self->key_list->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,key))||(by_pointer&&it->item==key)) {
                        neo_current_frame = fr.prev;
            return pos;
        }
        it=it->next;
        pos++;
    }
        neo_current_frame = fr.prev;
    return -1;
        neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_delete"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_46;
    int i_47;
    struct list_item$1char$ph* prev_it_48;
    struct list_item$1char$ph* it_49;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_50;
    struct list_item$1char$ph* prev_it_51;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_46, 0, sizeof(it_46));
    memset(&i_47, 0, sizeof(i_47));
    memset(&prev_it_48, 0, sizeof(prev_it_48));
    memset(&it_49, 0, sizeof(it_49));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_50, 0, sizeof(i_50));
    memset(&prev_it_51, 0, sizeof(prev_it_51));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head>=self->len) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2001, 835);
                self->len--;
            }
            else if(i==tail) {
                self->head=it;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it=it->next;
                i++;
            }
        }
    }
    else if(tail==self->len) {
        it_46=self->head;
        i_47=0;
        while(it_46!=((void*)0)) {
            if(i_47==head) {
                self->tail=it_46->prev;
                self->tail->next=((void*)0);
            }
            if(i_47>=head) {
                prev_it_48=it_46;
                it_46=it_46->next;
                i_47++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_48, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2031, 836);
                self->len--;
            }
            else {
                it_46=it_46->next;
                i_47++;
            }
        }
    }
    else {
        it_49=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_50=0;
        while(it_49!=((void*)0)) {
            if(i_50==head) {
                head_prev_it=it_49->prev;
            }
            if(i_50==tail) {
                tail_it=it_49;
            }
            if(i_50>=head&&i_50<tail) {
                prev_it_51=it_49;
                it_49=it_49->next;
                i_50++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_51, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2064, 837);
                self->len--;
            }
            else {
                it_49=it_49->next;
                i_50++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            head_prev_it->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            tail_it->prev=head_prev_it;
        }
    }
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1923, 834);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 854);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 855);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 856);
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 858);
    }
        neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 862);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 863);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 864);
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 866);
    }
        neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1544, 874);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 875);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 876);
    return __result_obj__0;
}

static void list$1int$_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 878);
    }
        neo_current_frame = fr.prev;
}

struct sType* sType_initialize(struct sType* self, char*  name  , _Bool  heap  , struct sInfo*  info  , _Bool  unsigned_  , int pointer_num_)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int pointer_num;
    char* p;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    char*  name2  ;
    void* __right_value2 = (void*)0;
    struct sClass*  klass  ;
    struct sClass*  generics_class  ;
    struct sClass*  klass2  ;
    char*  __dec_obj20  ;
    struct sType*  __dec_obj21  ;
    struct sType*  __dec_obj22  ;
    struct list$1sType$ph* __dec_obj23;
    struct list$1sNode$ph* __dec_obj24;
    struct list$1sNode$ph* __dec_obj25;
    struct list$1int$* __dec_obj26;
    struct list$1int$* __dec_obj27;
    struct list$1sType$ph* __dec_obj28;
    struct list$1char$ph* __dec_obj29;
    char*  __dec_obj30  ;
    struct sType*  __dec_obj31  ;
    struct sNode* __dec_obj32;
    struct sNode* __dec_obj33;
    char*  __dec_obj34  ;
    char*  __dec_obj35  ;
    struct sType* __result_obj__0;
    memset(&pointer_num, 0, sizeof(pointer_num));
    memset(&p, 0, sizeof(p));
    memset(&name2, 0, sizeof(name2));
    memset(&klass, 0, sizeof(klass));
    memset(&generics_class, 0, sizeof(generics_class));
    memset(&klass2, 0, sizeof(klass2));
    pointer_num=pointer_num_;
    p=name;
    while(*p) {
        if(xisalpha(*p)||*p==95) {
            p++;
        }
        else {
            break;
        }
    }
    while(*p==42) {
        pointer_num++;
        p++;
    }
    name2=(char* )come_increment_ref_count(charp_substring(((char* )(__right_value0=__builtin_string(name,"./common.h",215))),0,-pointer_num+pointer_num_-1), "./common.h", 215, 785);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 215, 786));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    klass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(info->classes,((char* )(__right_value1=__builtin_string(name2,"./common.h",216))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 216, 817));
    __right_value0 = (void*)0;
    generics_class=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->generics_classes,name2)));
    if(klass==((void*)0)&&generics_class==((void*)0)) {
        warning_msg(info,"class not found(%s)(1)\n",name2);
    }
    if(klass) {
        self->mClass=klass;
    }
    else {
        __right_value0 = (void*)0;
        klass2=(struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "./common.h", 227, 818, "struct sClass* "), "./common.h", 227, 819);
        __right_value0 = (void*)0;
        __dec_obj20=klass2->mName,
        klass2->mName=(char* )come_increment_ref_count(__builtin_string(name,"./common.h",228), "./common.h", 228, 821);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 228, 820);
        __right_value0 = (void*)0;
        map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(name,"./common.h",230), "./common.h", 230, 847),(struct sClass* )come_increment_ref_count(klass2, "./common.h", 230, 848),(_Bool)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        self->mClass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(info->classes,((char* )(__right_value1=__builtin_string(name,"./common.h",232))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 232, 849));
        come_call_finalizer(sClass_finalize, klass2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 235, 850);
    }
    __dec_obj21=self->mNoSolvedGenericsType,
    self->mNoSolvedGenericsType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 235, 851);
    __dec_obj22=self->mOriginalLoadVarType,
    self->mOriginalLoadVarType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 236, 852);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj23=self->mGenericsTypes,
    self->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./common.h", 237, 853, "struct list$1sType$ph*"), "./common.h", 237, 857)), "./common.h", 5, 860);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 5, 859);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj24=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./common.h", 238, 861, "struct list$1sNode$ph*"), "./common.h", 238, 865)), "./common.h", 5, 868);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 5, 867);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj25=self->mVarNameArrayNum,
    self->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./common.h", 239, 869, "struct list$1sNode$ph*"), "./common.h", 239, 870)), "./common.h", 239, 872);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 239, 871);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj26=self->mArrayStatic,
    self->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./common.h", 240, 873, "struct list$1int$*"), "./common.h", 240, 877)), "./common.h", 5, 880);
    come_call_finalizer(list$1int$_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 5, 879);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj27=self->mArrayRestrict,
    self->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./common.h", 241, 881, "struct list$1int$*"), "./common.h", 241, 882)), "./common.h", 241, 884);
    come_call_finalizer(list$1int$_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 241, 883);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj28=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./common.h", 242, 885, "struct list$1sType$ph*"), "./common.h", 242, 886)), "./common.h", 242, 888);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 242, 887);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj29=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./common.h", 243, 889, "struct list$1char$ph*"), "./common.h", 243, 890)), "./common.h", 243, 892);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 243, 891);
    __right_value0 = (void*)0;
    __dec_obj30=self->mOriginalTypeName,
    self->mOriginalTypeName=(char*)come_increment_ref_count(xsprintf(""), "./common.h", 244, 894);
    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 244, 893);
    self->mVarArgs=(_Bool)0;
    __dec_obj31=self->mResultType,
    self->mResultType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 246, 895);
    self->mUnsigned=unsigned_;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mNoHeap=(_Bool)0;
    self->mPointerNum=pointer_num;
    __dec_obj32=self->mSizeNum,
    self->mSizeNum=((void*)0);
    (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0, (void*)0, "./common.h", 258, 896) :0);
    __dec_obj33=self->mTypeOfNode,
    self->mTypeOfNode=((void*)0);
    (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "./common.h", 260, 897) :0);
    __right_value0 = (void*)0;
    __dec_obj34=self->mMiddleAttribute,
    self->mMiddleAttribute=(char*)come_increment_ref_count(xsprintf(""), "./common.h", 261, 899);
    __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 261, 898);
    __right_value0 = (void*)0;
    __dec_obj35=self->mPointerAttribute,
    self->mPointerAttribute=(char*)come_increment_ref_count(xsprintf(""), "./common.h", 262, 901);
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 262, 900);
        __result_obj__0 = (struct sType*)come_increment_ref_count(self, "./common.h", 263, 902);
    come_call_finalizer(sType_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 263, 903);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 263, 904));
    (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 263, 905));
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 263, 906);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 918);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5, 925);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5, 926);
    return __result_obj__0;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 924);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 923);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 919));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 920));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 921);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 922));
    }
            neo_current_frame = fr.prev;
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 928);
    }
        neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_52  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_52,0,sizeof(struct sType* ));
        __result_obj__0 = result_52;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool  list$1sType$ph_end(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_53  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_53,0,sizeof(struct sType* ));
        __result_obj__0 = result_53;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj44  ;
    struct list_item$1sType$ph* litem_54;
    struct sType*  __dec_obj45  ;
    struct list_item$1sType$ph* litem_55;
    struct sType*  __dec_obj46  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_54, 0, sizeof(litem_54));
    memset(&litem_55, 0, sizeof(litem_55));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1674, 939);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1678, 940, "struct list_item$1sType$ph*"))), "./neo-c.h", 1678, 941);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj44=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1682, 943);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1682, 942);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_54=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1688, 944, "struct list_item$1sType$ph*"))), "./neo-c.h", 1688, 945);
        litem_54->prev=self->head;
        litem_54->next=((void*)0);
        __dec_obj45=litem_54->item,
        litem_54->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1692, 947);
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1692, 946);
        self->tail=litem_54;
        self->head->next=litem_54;
    }
    else {
        __right_value0 = (void*)0;
        litem_55=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1698, 948, "struct list_item$1sType$ph*"))), "./neo-c.h", 1698, 949);
        litem_55->prev=self->tail;
        litem_55->next=((void*)0);
        __dec_obj46=litem_55->item,
        litem_55->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1702, 951);
        come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1702, 950);
        self->tail->next=litem_55;
        self->tail=litem_55;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1710, 952);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj47  ;
    struct sType*  __dec_obj48  ;
    struct list$1sType$ph* __dec_obj52;
    struct sType*  __dec_obj53  ;
    struct sNode* __dec_obj54;
    struct sNode* __dec_obj55;
    char*  __dec_obj56  ;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    char*  __dec_obj59  ;
    char*  __dec_obj60  ;
    char*  __dec_obj61  ;
    char*  __dec_obj62  ;
    char*  __dec_obj63  ;
    struct list$1sNode$ph* __dec_obj67;
    struct list$1sNode$ph* __dec_obj68;
    struct list$1int$* __dec_obj69;
    struct list$1int$* __dec_obj70;
    struct sType*  __dec_obj71  ;
    char*  __dec_obj72  ;
    struct list$1sType$ph* __dec_obj73;
    struct list$1char$ph* __dec_obj77;
    struct sType*  __dec_obj78  ;
    struct sNode* __dec_obj79;
    struct list$1sNode$ph* __dec_obj80;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 953, "struct sType* "), "sType_clone", 5, 954);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj47=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 956);
        come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 955);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj48=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 958);
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 957);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj52=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 984);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 983);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj53=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 986);
        come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 985);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj54=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 995);
        (__dec_obj54 ? __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 994) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj55=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 997);
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 996) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj56=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 998, "char* "), "sType_clone", 14, 1000);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 999);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj57=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 1001, "char* "), "sType_clone", 15, 1003);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 1002);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj58=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 1004, "char* "), "sType_clone", 16, 1006);
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 1005);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj59=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 1007, "char* "), "sType_clone", 17, 1009);
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 1008);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj60=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 1010, "char* "), "sType_clone", 18, 1012);
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 1011);
    }
    if(self!=((void*)0)) {
        result->mNew=self->mNew;
    }
    if(self!=((void*)0)) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result->mAtomic=self->mAtomic;
    }
    if(self!=((void*)0)) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(self!=((void*)0)) {
        result->mNorecord=self->mNorecord;
    }
    if(self!=((void*)0)) {
        result->mThread=self->mThread;
    }
    if(self!=((void*)0)) {
        result->mComplex=self->mComplex;
    }
    if(self!=((void*)0)) {
        result->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result->mNoreturn=self->mNoreturn;
    }
    if(self!=((void*)0)) {
        result->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result->mWeak=self->mWeak;
    }
    if(self!=((void*)0)) {
        result->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result->mChannel=self->mChannel;
    }
    if(self!=((void*)0)) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(self!=((void*)0)) {
        result->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result->mSlice=self->mSlice;
    }
    if(self!=((void*)0)) {
        result->mOptional=self->mOptional;
    }
    if(self!=((void*)0)) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result->mTypeName=self->mTypeName;
    }
    if(self!=((void*)0)) {
        result->mAnonymous=self->mAnonymous;
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj61=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 1013, "char* "), "sType_clone", 49, 1015);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 1014);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj62=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 1016, "char* "), "sType_clone", 51, 1018);
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 1017);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj63=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 1019, "char* "), "sType_clone", 54, 1021);
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 1020);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj67=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 1047);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 1046);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj68=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 1049);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 1048);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj69=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 1065);
        come_call_finalizer(list$1int$_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 1064);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj70=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 1067);
        come_call_finalizer(list$1int$_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 1066);
    }
    if(self!=((void*)0)) {
        result->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result->mPointerParen=self->mPointerParen;
    }
    if(self!=((void*)0)) {
        result->mMinusPointerNum=self->mMinusPointerNum;
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj71=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 1069);
        come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 1068);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj72=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 1070, "char* "), "sType_clone", 67, 1072);
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 1071);
    }
    if(self!=((void*)0)) {
        result->mOriginalTypePointerNum=self->mOriginalTypePointerNum;
    }
    if(self!=((void*)0)) {
        result->mOriginalTypePointerHeap=self->mOriginalTypePointerHeap;
    }
    if(self!=((void*)0)) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj73=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 1074);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 1073);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj77=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 1102);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 1101);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj78=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 1104);
        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 1103);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj79=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 1106);
        (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 1105) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj80=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 1108);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 1107);
    }
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 1109);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* result;
    struct list_item$1sType$ph* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 959);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 960);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1572, 961, "struct list$1sType$ph*"), "./neo-c.h", 1572, 962)), "./neo-c.h", 1572, 963);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1577, 978));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1580, 979));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 980);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 981);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 982);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj49  ;
    struct list_item$1sType$ph* litem_56;
    struct sType*  __dec_obj50  ;
    struct list_item$1sType$ph* litem_57;
    struct sType*  __dec_obj51  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_56, 0, sizeof(litem_56));
    memset(&litem_57, 0, sizeof(litem_57));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1590, 964);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1593, 965, "struct list_item$1sType$ph*"))), "./neo-c.h", 1593, 966);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj49=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1597, 968);
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1597, 967);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_56=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1603, 969, "struct list_item$1sType$ph*"))), "./neo-c.h", 1603, 970);
        litem_56->prev=self->head;
        litem_56->next=((void*)0);
        __dec_obj50=litem_56->item,
        litem_56->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1607, 972);
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1607, 971);
        self->tail=litem_56;
        self->head->next=litem_56;
    }
    else {
        __right_value0 = (void*)0;
        litem_57=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1613, 973, "struct list_item$1sType$ph*"))), "./neo-c.h", 1613, 974);
        litem_57->prev=self->tail;
        litem_57->next=((void*)0);
        __dec_obj51=litem_57->item,
        litem_57->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1617, 976);
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1617, 975);
        self->tail->next=litem_57;
        self->tail=litem_57;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1625, 977);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 987);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 988):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 989, "struct sNode*"), "sNode_clone", 5, 990);
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result->kind=self->kind;
    }
    if(self!=((void*)0)) {
        result->left_value=self->left_value;
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 991);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 992):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 993):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* result;
    struct list_item$1sNode$ph* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 1022);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 1023);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1572, 1024, "struct list$1sNode$ph*"), "./neo-c.h", 1572, 1025)), "./neo-c.h", 1572, 1026);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1577, 1041));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1580, 1042));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 1043);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 1044);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 1045);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj64;
    struct list_item$1sNode$ph* litem_58;
    struct sNode* __dec_obj65;
    struct list_item$1sNode$ph* litem_59;
    struct sNode* __dec_obj66;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_58, 0, sizeof(litem_58));
    memset(&litem_59, 0, sizeof(litem_59));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1590, 1027):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1593, 1028, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1593, 1029);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj64=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1597, 1031);
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1597, 1030) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_58=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1603, 1032, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1603, 1033);
        litem_58->prev=self->head;
        litem_58->next=((void*)0);
        __dec_obj65=litem_58->item,
        litem_58->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1607, 1035);
        (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1607, 1034) :0);
        self->tail=litem_58;
        self->head->next=litem_58;
    }
    else {
        __right_value0 = (void*)0;
        litem_59=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1613, 1036, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1613, 1037);
        litem_59->prev=self->tail;
        litem_59->next=((void*)0);
        __dec_obj66=litem_59->item,
        litem_59->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1617, 1039);
        (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1617, 1038) :0);
        self->tail->next=litem_59;
        self->tail=litem_59;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1625, 1040):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$$p_clone(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* result;
    struct list_item$1int$* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 1050);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 1051);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1572, 1052, "struct list$1int$*"), "./neo-c.h", 1572, 1053)), "./neo-c.h", 1572, 1054);
    it=self->head;
    while(it!=((void*)0)) {
        if(0) {
            list$1int$_add(result,it->item);
        }
        else {
            list$1int$_add(result,it->item);
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1586, 1061);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 1062);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 1063);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_60;
    struct list_item$1int$* litem_61;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_60, 0, sizeof(litem_60));
    memset(&litem_61, 0, sizeof(litem_61));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1593, 1055, "struct list_item$1int$*"))), "./neo-c.h", 1593, 1056);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_60=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1603, 1057, "struct list_item$1int$*"))), "./neo-c.h", 1603, 1058);
        litem_60->prev=self->head;
        litem_60->next=((void*)0);
        litem_60->item=item;
        self->tail=litem_60;
        self->head->next=litem_60;
    }
    else {
        __right_value0 = (void*)0;
        litem_61=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1613, 1059, "struct list_item$1int$*"))), "./neo-c.h", 1613, 1060);
        litem_61->prev=self->tail;
        litem_61->next=((void*)0);
        litem_61->item=item;
        self->tail->next=litem_61;
        self->tail=litem_61;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list_item$1char$ph* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 1075);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 1076);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1572, 1077, "struct list$1char$ph*"), "./neo-c.h", 1572, 1078)), "./neo-c.h", 1572, 1079);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1577, 1094, "char* "), "./neo-c.h", 1577, 1095));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1580, 1096, "char* "), "./neo-c.h", 1580, 1097));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 1098);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 1099);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 1100);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj74  ;
    struct list_item$1char$ph* litem_62;
    char*  __dec_obj75  ;
    struct list_item$1char$ph* litem_63;
    char*  __dec_obj76  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_62, 0, sizeof(litem_62));
    memset(&litem_63, 0, sizeof(litem_63));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1590, 1080));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1593, 1081, "struct list_item$1char$ph*"))), "./neo-c.h", 1593, 1082);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj74=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1597, 1084);
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1597, 1083);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_62=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1603, 1085, "struct list_item$1char$ph*"))), "./neo-c.h", 1603, 1086);
        litem_62->prev=self->head;
        litem_62->next=((void*)0);
        __dec_obj75=litem_62->item,
        litem_62->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1607, 1088);
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1607, 1087);
        self->tail=litem_62;
        self->head->next=litem_62;
    }
    else {
        __right_value0 = (void*)0;
        litem_63=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1613, 1089, "struct list_item$1char$ph*"))), "./neo-c.h", 1613, 1090);
        litem_63->prev=self->tail;
        litem_63->next=((void*)0);
        __dec_obj76=litem_63->item,
        litem_63->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1617, 1092);
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1617, 1091);
        self->tail->next=litem_63;
        self->tail=litem_63;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1625, 1093));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_64  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_64,0,sizeof(char* ));
        __result_obj__0 = result_64;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool  list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_66  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_66,0,sizeof(char* ));
        __result_obj__0 = result_66;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 1132);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 1133);
    }
        neo_current_frame = fr.prev;
}

static void sFun_finalize(struct sFun* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 1147));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 1148);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 1149);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 1150);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 1151);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 1152);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 1153);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 1154);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 1155));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 1156));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 1157);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 1158);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 1159);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 1160);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 1161));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 1162));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 1163));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 1164));
    }
        neo_current_frame = fr.prev;
}

struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool  external  , _Bool  var_args  , struct sBlock*  block  , _Bool  static_  , struct sInfo*  info  , _Bool  inline_  , _Bool  uniq_  , char*  attribute  , char*  fun_attribute  , _Bool  const_fun  , char*  text_block  , char*  generics_sname  , int generics_sline, _Bool  immutable_  , char*  asm_fun  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __dec_obj36  ;
    struct sType*  __dec_obj37  ;
    struct list$1sType$ph* __dec_obj38;
    struct list$1char$ph* __dec_obj39;
    struct list$1char$ph* __dec_obj40;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sVar$ph* __dec_obj41;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj42  ;
    char*  __dec_obj43  ;
    struct list$1sType$ph* _o2_saved_3;
    struct sType*  it  ;
    struct list$1char$ph* _o2_saved_4;
    char*  it_65  ;
    struct sType*  __dec_obj81  ;
    struct buffer*  __dec_obj82  ;
    struct buffer*  __dec_obj83  ;
    struct buffer*  __dec_obj84  ;
    struct buffer*  __dec_obj85  ;
    struct sBlock*  __dec_obj86  ;
    char*  __dec_obj87  ;
    char*  __dec_obj88  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    struct sFun* __result_obj__0;
    memset(&_o2_saved_3, 0, sizeof(_o2_saved_3));
    memset(&it, 0, sizeof(it));
    memset(&_o2_saved_4, 0, sizeof(_o2_saved_4));
    memset(&it_65, 0, sizeof(it_65));
    __dec_obj36=self->mName,
    self->mName=(char* )come_increment_ref_count(name, "./common.h", 323, 908);
    __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 323, 907);
    __dec_obj37=self->mResultType,
    self->mResultType=(struct sType* )come_increment_ref_count(result_type, "./common.h", 324, 910);
    come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 324, 909);
    __dec_obj38=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types, "./common.h", 325, 912);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 325, 911);
    __dec_obj39=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names, "./common.h", 326, 914);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 326, 913);
    __dec_obj40=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "./common.h", 327, 916);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 327, 915);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    self->mInline=inline_;
    self->mUniq=uniq_;
    self->mConstFun=const_fun;
    __dec_obj41=self->mAllVar,
    self->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "./common.h", 334, 917, "struct list$1sVar$ph*"), "./common.h", 334, 927)), "./common.h", 5, 930);
    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 5, 929);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj42=self->mLambdaType,
    self->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "./common.h", 336, 931, "struct sType* "), "./common.h", 336, 932),(char*)come_increment_ref_count(xsprintf("lambda"), "./common.h", 336, 933),(_Bool)0,info,(_Bool)0,0), "./common.h", 336, 935);
    come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 336, 934);
    __dec_obj43=self->mAsmFun,
    self->mAsmFun=(char* )come_increment_ref_count(asm_fun, "./common.h", 338, 937);
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 338, 936);
    for(_o2_saved_3=(struct list$1sType$ph*)come_increment_ref_count(param_types, "./common.h", 340, 938),it=list$1sType$ph_begin(_o2_saved_3)    ;!list$1sType$ph_end(_o2_saved_3);it=list$1sType$ph_next(_o2_saved_3)){
        __right_value0 = (void*)0;
        list$1sType$ph_push_back(self->mLambdaType->mParamTypes,(struct sType* )come_increment_ref_count(sType_clone(it), "./common.h", 341, 1110));
    }
    for(_o2_saved_4=(struct list$1char$ph*)come_increment_ref_count(param_names, "./common.h", 344, 1111),it_65=list$1char$ph_begin(_o2_saved_4)    ;!list$1char$ph_end(_o2_saved_4);it_65=list$1char$ph_next(_o2_saved_4)){
        __right_value0 = (void*)0;
        list$1char$ph_push_back(self->mLambdaType->mParamNames,(char* )come_increment_ref_count((char* )come_memdup(it_65, "./common.h", 345, 1112, "char* "), "./common.h", 345, 1113));
    }
    __dec_obj81=self->mLambdaType->mResultType,
    self->mLambdaType->mResultType=(struct sType* )come_increment_ref_count(result_type, "./common.h", 348, 1115);
    come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 348, 1114);
    self->mLambdaType->mVarArgs=var_args;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj82=self->mSource,
    self->mSource=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 351, 1116, "struct buffer* "), "./common.h", 351, 1117)), "./common.h", 351, 1119);
    come_call_finalizer(buffer_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 351, 1118);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj83=self->mSourceHead,
    self->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 352, 1120, "struct buffer* "), "./common.h", 352, 1121)), "./common.h", 352, 1123);
    come_call_finalizer(buffer_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 352, 1122);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj84=self->mSourceHead2,
    self->mSourceHead2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 353, 1124, "struct buffer* "), "./common.h", 353, 1125)), "./common.h", 353, 1127);
    come_call_finalizer(buffer_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 353, 1126);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj85=self->mSourceEnd,
    self->mSourceEnd=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 354, 1128, "struct buffer* "), "./common.h", 354, 1129)), "./common.h", 354, 1131);
    come_call_finalizer(buffer_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 354, 1130);
    __dec_obj86=self->mBlock,
    self->mBlock=(struct sBlock* )come_increment_ref_count(block, "./common.h", 356, 1135);
    come_call_finalizer(sBlock_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 356, 1134);
    __dec_obj87=self->mTextBlock,
    self->mTextBlock=(char* )come_increment_ref_count(text_block, "./common.h", 357, 1137);
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 357, 1136);
    __dec_obj88=self->mTextBlockSName,
    self->mTextBlockSName=(char* )come_increment_ref_count(generics_sname, "./common.h", 359, 1139);
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 359, 1138);
    self->mTextBlockSline=generics_sline;
    if((result_type->mClass->mNumber||string_operator_equals(result_type->mClass->mName,"double")||string_operator_equals(result_type->mClass->mName,"float")||result_type->mClass->mStruct)&&result_type->mPointerNum==0) {
        self->mNoResultType=(_Bool)1;
    }
    __dec_obj89=self->mAttribute,
    self->mAttribute=(char* )come_increment_ref_count(attribute, "./common.h", 366, 1141);
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 366, 1140);
    __right_value0 = (void*)0;
    __dec_obj90=self->mMiddleAttribute,
    self->mMiddleAttribute=(char*)come_increment_ref_count(xsprintf(""), "./common.h", 367, 1143);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 367, 1142);
    __dec_obj91=self->mFunAttribute,
    self->mFunAttribute=(char* )come_increment_ref_count(fun_attribute, "./common.h", 368, 1145);
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 368, 1144);
        __result_obj__0 = (struct sFun*)come_increment_ref_count(self, "./common.h", 369, 1146);
    come_call_finalizer(sFun_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 369, 1165);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1166));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1167);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1168);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1169);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1170);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1171);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1172));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1173));
    (text_block = come_decrement_ref_count(text_block, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1174));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1175));
    (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1176));
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1177);
    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1178);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 369, 1179);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 1199);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 1200);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 1201);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 1202));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 1203);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 1204);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 1205);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 1206);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 1207));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 1208));
    }
        neo_current_frame = fr.prev;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool  var_args  , char*  block  , struct sInfo*  info  , char*  generics_sname  , int generics_sline, _Bool  const_fun  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __dec_obj92;
    struct list$1char$ph* __dec_obj93;
    char*  __dec_obj94  ;
    struct sType*  __dec_obj95  ;
    struct list$1sType$ph* __dec_obj96;
    struct list$1char$ph* __dec_obj97;
    struct list$1char$ph* __dec_obj98;
    char*  __dec_obj99  ;
    char*  __dec_obj100  ;
    struct sGenericsFun* __result_obj__0;
    __dec_obj92=self->mGenericsTypeNames,
    self->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names), "./common.h", 397, 1181);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 397, 1180);
    __right_value0 = (void*)0;
    __dec_obj93=self->mMethodGenericsTypeNames,
    self->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(method_generics_type_names), "./common.h", 398, 1183);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 398, 1182);
    __dec_obj94=self->mName,
    self->mName=(char* )come_increment_ref_count(name, "./common.h", 400, 1185);
    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 400, 1184);
    __dec_obj95=self->mResultType,
    self->mResultType=(struct sType* )come_increment_ref_count(result_type, "./common.h", 401, 1187);
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 401, 1186);
    __dec_obj96=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types, "./common.h", 402, 1189);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 402, 1188);
    __dec_obj97=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names, "./common.h", 403, 1191);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 403, 1190);
    __dec_obj98=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "./common.h", 404, 1193);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 404, 1192);
    self->mVarArgs=var_args;
    __dec_obj99=self->mBlock,
    self->mBlock=(char* )come_increment_ref_count(block, "./common.h", 407, 1195);
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 407, 1194);
    self->mSLine=info->sline;
    __right_value0 = (void*)0;
    __dec_obj100=self->mGenericsSName,
    self->mGenericsSName=(char* )come_increment_ref_count(__builtin_string(generics_sname,"./common.h",410), "./common.h", 410, 1197);
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 410, 1196);
    self->mGenericsSLine=generics_sline;
    self->mConstFun=const_fun;
        __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(self, "./common.h", 413, 1198);
    come_call_finalizer(sGenericsFun_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 413, 1209);
    come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 413, 1210);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 413, 1211));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 413, 1212);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 413, 1213);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 413, 1214);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 413, 1215);
    (block = come_decrement_ref_count(block, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 413, 1216));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 413, 1217));
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 413, 1218);
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 1220));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 1221);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 1222));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 1223));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 1224));
    }
        neo_current_frame = fr.prev;
}

struct CVALUE* CVALUE_initialize(struct CVALUE* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct CVALUE* __result_obj__0;
        __result_obj__0 = (struct CVALUE*)come_increment_ref_count(self, "./common.h", 430, 1219);
    come_call_finalizer(CVALUE_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 430, 1225);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 430, 1226);
    return __result_obj__0;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj105;
    struct map$2char$phchar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3455, 1238, "char** "))), "./neo-c.h", 3455, 1239);
    __right_value0 = (void*)0;
    self->items=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3456, 1240, "char** "))), "./neo-c.h", 3456, 1241);
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3457, 1242, "unsigned int*"))), "./neo-c.h", 3457, 1243);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool* )come_increment_ref_count(((_Bool* )(__right_value0=(_Bool *)come_calloc(1, sizeof(_Bool )*(1*(128)), "./neo-c.h", 3458, 1244, "_Bool* "))), "./neo-c.h", 3458, 1245);
    for(i=0    ;i<128;i++){
        self->hashes[i]=0;
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj105=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3469, 1246, "struct list$1char$ph*"), "./neo-c.h", 3469, 1247)), "./neo-c.h", 3469, 1249);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3469, 1248);
    self->it=0;
        __result_obj__0 = (struct map$2char$phchar$ph*)come_increment_ref_count(self, "./neo-c.h", 3473, 1250);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6, 1256);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6, 1257);
    return __result_obj__0;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_67;
    memset(&i, 0, sizeof(i));
    memset(&i_67, 0, sizeof(i_67));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3509, 1251));
            }
        }
    }
    come_free((char*)self->items);
    for(i_67=0    ;i_67<self->size;i_67++){
        if(self->item_existance[i_67]) {
            if(1) {
                (self->keys[i_67] = come_decrement_ref_count(self->keys[i_67], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3518, 1252));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3524, 1253);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 1254));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3527, 1255));
        neo_current_frame = fr.prev;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_68;
    memset(&i, 0, sizeof(i));
    memset(&i_68, 0, sizeof(i_68));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3509, 1259));
            }
        }
    }
    come_free((char*)self->items);
    for(i_68=0    ;i_68<self->size;i_68++){
        if(self->item_existance[i_68]) {
            if(1) {
                (self->keys[i_68] = come_decrement_ref_count(self->keys[i_68], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3518, 1260));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3524, 1261);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 1262));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3527, 1263));
        neo_current_frame = fr.prev;
}

static void sModule_finalize(struct sModule* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModule_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sModule_finalize}", 2, 1267);
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sModule_finalize}", 3, 1268);
    }
    if(self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0, 0, (void*)0, "sModule_finalize", 4, 1269));
    }
    if(self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0, 0, (void*)0, "sModule_finalize", 5, 1270));
    }
    if(self!=((void*)0)&&self->mHeader!=((void*)0)) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sModule_finalize}", 6, 1271);
    }
        neo_current_frame = fr.prev;
}

struct sModule* sModule_initialize(struct sModule* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModule_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  __dec_obj101  ;
    struct buffer*  __dec_obj102  ;
    char*  __dec_obj103  ;
    char*  __dec_obj104  ;
    struct map$2char$phchar$ph* __dec_obj106;
    struct sModule* __result_obj__0;
    __dec_obj101=self->mSourceHead,
    self->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 443, 1227, "struct buffer* "), "./common.h", 443, 1228)), "./common.h", 443, 1230);
    come_call_finalizer(buffer_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 443, 1229);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj102=self->mSource,
    self->mSource=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 444, 1231, "struct buffer* "), "./common.h", 444, 1232)), "./common.h", 444, 1234);
    come_call_finalizer(buffer_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 444, 1233);
    __dec_obj103=self->mLastCode,
    self->mLastCode=((void*)0);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 445, 1235);
    __dec_obj104=self->mLastCode2,
    self->mLastCode2=((void*)0);
    __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 446, 1236);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj106=self->mHeader,
    self->mHeader=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "./common.h", 447, 1237, "struct map$2char$phchar$ph*"), "./common.h", 447, 1258)), "./common.h", 6, 1265);
    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 6, 1264);
        __result_obj__0 = (struct sModule*)come_increment_ref_count(self, "./common.h", 448, 1266);
    come_call_finalizer(sModule_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 448, 1272);
    neo_current_frame = fr.prev;
    come_call_finalizer(sModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 448, 1273);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj107;
    struct map$2char$phsVar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3455, 1275, "char** "))), "./neo-c.h", 3455, 1276);
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "./neo-c.h", 3456, 1277, "struct sVar** "))), "./neo-c.h", 3456, 1278);
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3457, 1279, "unsigned int*"))), "./neo-c.h", 3457, 1280);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool* )come_increment_ref_count(((_Bool* )(__right_value0=(_Bool *)come_calloc(1, sizeof(_Bool )*(1*(128)), "./neo-c.h", 3458, 1281, "_Bool* "))), "./neo-c.h", 3458, 1282);
    for(i=0    ;i<128;i++){
        self->hashes[i]=0;
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj107=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3469, 1283, "struct list$1char$ph*"), "./neo-c.h", 3469, 1284)), "./neo-c.h", 3469, 1286);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3469, 1285);
    self->it=0;
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "./neo-c.h", 3473, 1287);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6, 1293);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6, 1294);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_69;
    memset(&i, 0, sizeof(i));
    memset(&i_69, 0, sizeof(i_69));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3509, 1288);
            }
        }
    }
    come_free((char*)self->items);
    for(i_69=0    ;i_69<self->size;i_69++){
        if(self->item_existance[i_69]) {
            if(1) {
                (self->keys[i_69] = come_decrement_ref_count(self->keys[i_69], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3518, 1289));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3524, 1290);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 1291));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3527, 1292));
        neo_current_frame = fr.prev;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_70;
    memset(&i, 0, sizeof(i));
    memset(&i_70, 0, sizeof(i_70));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3509, 1296);
            }
        }
    }
    come_free((char*)self->items);
    for(i_70=0    ;i_70<self->size;i_70++){
        if(self->item_existance[i_70]) {
            if(1) {
                (self->keys[i_70] = come_decrement_ref_count(self->keys[i_70], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3518, 1297));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3524, 1298);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 1299));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3527, 1300));
        neo_current_frame = fr.prev;
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool  global  , struct sVarTable*  parent  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* __dec_obj108;
    struct sVarTable* __result_obj__0;
    __dec_obj108=self->mVars,
    self->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./common.h", 459, 1274, "struct map$2char$phsVar$ph*"), "./common.h", 459, 1295)), "./common.h", 6, 1302);
    come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 6, 1301);
    self->mGlobal=global;
    self->mParent=parent;
        __result_obj__0 = (struct sVarTable*)come_increment_ref_count(self, "./common.h", 462, 1303);
    come_call_finalizer(sVarTable_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 462, 1304);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 462, 1305);
    return __result_obj__0;
}

void sVarTable_finalize(struct sVarTable* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self->mVars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 466, 1306);
    neo_current_frame = fr.prev;
}

struct sBlock* sBlock_initialize(struct sBlock* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* __dec_obj109;
    struct sBlock* __result_obj__0;
    __dec_obj109=self->mNodes,
    self->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./common.h", 477, 1307, "struct list$1sNode$ph*"), "./common.h", 477, 1308)), "./common.h", 477, 1310);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 477, 1309);
        __result_obj__0 = (struct sBlock*)come_increment_ref_count(self, "./common.h", 478, 1311);
    come_call_finalizer(sBlock_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 478, 1312);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 478, 1313);
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 1317));
    }
        neo_current_frame = fr.prev;
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj110  ;
    struct sNodeBase* __result_obj__0;
    self->sline=info->sline;
    __dec_obj110=self->sname,
    self->sname=(char* )come_increment_ref_count(__builtin_string(info->sname,"./common.h",669), "./common.h", 669, 1315);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 669, 1314);
    self->sline_real=info->sline_real;
        __result_obj__0 = (struct sNodeBase*)come_increment_ref_count(self, "./common.h", 671, 1316);
    come_call_finalizer(sNodeBase_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 671, 1318);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNodeBase_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 671, 1319);
    return __result_obj__0;
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sline"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self->sline;
    neo_current_frame = fr.prev;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sline_real"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self->sline_real;
    neo_current_frame = fr.prev;
}

_Bool  sNodeBase_terminated(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_terminated"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

char*  sNodeBase_sname(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(self->sname, "./common.h", 685, 1320);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 685, 1321));
    return __result_obj__0;
}

struct sNode* sNodeBase_left_value(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_left_value"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCurrentNode_finalize(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCurrentNode_finalize", 2, 1325));
    }
        neo_current_frame = fr.prev;
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCurrentNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "./common.h", 697, 1322),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 697, 1323);
        __result_obj__0 = (struct sCurrentNode*)come_increment_ref_count(self, "./common.h", 698, 1324);
    come_call_finalizer(sCurrentNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 698, 1326);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCurrentNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 698, 1327);
    return __result_obj__0;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_sline"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self->sline;
    neo_current_frame = fr.prev;
}

char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_sname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(self->sname, "./common.h", 707, 1328);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 707, 1329));
    return __result_obj__0;
}

char*  sCurrentNode_kind(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCurrentNode","./common.h",712))), "./common.h", 712, 1330);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 712, 1331));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 712, 1332));
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_71  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_71,0,sizeof(char* ));
        __result_obj__0 = result_71;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool  map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_72  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_72,0,sizeof(char* ));
        __result_obj__0 = result_72;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVar*  default_value  ;
    struct sVar*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sVar* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 1339);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 1340);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 1341);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right13 = (self->size); if(__neo_div_right13 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right13; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 1342);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 1343);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 1344);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 1345);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 1346);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 1347);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 1348);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 1349);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 1350);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 1351);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 1352);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 1353);
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVar*  default_value  ;
    struct sVar*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sVar* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 1354);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 1355);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 1356);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right14 = (self->size); if(__neo_div_right14 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right14; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 1357);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 1358);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 1359);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 1360);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 1361);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 1362);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 1363);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 1364);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 1365);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 1366);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 1367);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 1368);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __dec_obj111  ;
    struct sType*  __dec_obj112  ;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    __dec_obj111=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4606, 1373);
    __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4606, 1372);
    __dec_obj112=self->v2,
    self->v2=(struct sType* )come_increment_ref_count(v2, "./neo-c.h", 4607, 1375);
    come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 4607, 1374);
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self, "./neo-c.h", 4609, 1376);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4609, 1377);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4609, 1378));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4609, 1379);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4609, 1380);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj113;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_73;
    struct tuple2$2char$phsType$ph* __dec_obj114;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_74;
    struct tuple2$2char$phsType$ph* __dec_obj115;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_73, 0, sizeof(litem_73));
    memset(&litem_74, 0, sizeof(litem_74));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1674, 1391);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1678, 1392, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1678, 1393);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj113=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1682, 1395);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1682, 1394);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_73=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1688, 1396, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1688, 1397);
        litem_73->prev=self->head;
        litem_73->next=((void*)0);
        __dec_obj114=litem_73->item,
        litem_73->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1692, 1399);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1692, 1398);
        self->tail=litem_73;
        self->head->next=litem_73;
    }
    else {
        __right_value0 = (void*)0;
        litem_74=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1698, 1400, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1698, 1401);
        litem_74->prev=self->tail;
        litem_74->next=((void*)0);
        __dec_obj115=litem_74->item,
        litem_74->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1702, 1403);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1702, 1402);
        self->tail->next=litem_74;
        self->tail=litem_74;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1710, 1404);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsType$ph* result;
    char*  __dec_obj116  ;
    struct sType*  __dec_obj117  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count((void*)0, "tuple2$2char$phsType$ph_clone", 4, 1405);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsType$ph_clone}", 4, 1406);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 5, 1407, "struct tuple2$2char$phsType$ph*"), "tuple2$2char$phsType$ph_clone", 5, 1408);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj116=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 6, 1409, "char* "), "tuple2$2char$phsType$ph_clone", 6, 1411);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "tuple2$2char$phsType$ph_clone", 6, 1410);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj117=result->v2,
        result->v2=(struct sType* )come_increment_ref_count(sType_clone(self->v2), "tuple2$2char$phsType$ph_clone", 7, 1413);
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph_clone", 7, 1412);
    }
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result, "tuple2$2char$phsType$ph_clone", 8, 1414);
    come_call_finalizer(tuple2$2char$phsType$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsType$ph_clone}", 8, 1417);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsType$ph_clone}", 8, 1418);
    return __result_obj__0;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph_finalize", 2, 1415));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph_finalize}", 3, 1416);
    }
        neo_current_frame = fr.prev;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
                    neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj120  ;
    struct list_item$1CVALUE$ph* litem_82;
    struct CVALUE*  __dec_obj121  ;
    struct list_item$1CVALUE$ph* litem_83;
    struct CVALUE*  __dec_obj122  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_82, 0, sizeof(litem_82));
    memset(&litem_83, 0, sizeof(litem_83));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1674, 1457);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1678, 1458, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1678, 1459);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj120=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1682, 1461);
        come_call_finalizer(CVALUE_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1682, 1460);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_82=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1688, 1462, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1688, 1463);
        litem_82->prev=self->head;
        litem_82->next=((void*)0);
        __dec_obj121=litem_82->item,
        litem_82->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1692, 1465);
        come_call_finalizer(CVALUE_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1692, 1464);
        self->tail=litem_82;
        self->head->next=litem_82;
    }
    else {
        __right_value0 = (void*)0;
        litem_83=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1698, 1466, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1698, 1467);
        litem_83->prev=self->tail;
        litem_83->next=((void*)0);
        __dec_obj122=litem_83->item,
        litem_83->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1702, 1469);
        come_call_finalizer(CVALUE_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1702, 1468);
        self->tail->next=litem_83;
        self->tail=litem_83;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1710, 1470);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool  sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  class_name  ;
    void* __right_value1 = (void*)0;
    struct sClass*  current_stack  ;
    struct sVarTable*  vtable  ;
    struct map$2char$phsVar$ph* _o2_saved_5;
    char*  it  ;
    char* key;
    void* __right_value2 = (void*)0;
    struct sVar*  value  ;
    struct sType*  type2  ;
    struct tuple2$2char$phsType$ph* item;
    struct sType*  type3  ;
    struct tuple2$2char$phsType$ph* item2;
    struct sType*  type3_75  ;
    struct tuple2$2char$phsType$ph* item2_76;
    struct map$2char$phsVar$ph* _o2_saved_6;
    char*  it_77  ;
    char* key_78;
    struct sVar*  value_79  ;
    struct sType*  type2_80  ;
    struct tuple2$2char$phsType$ph* item_81;
    struct CVALUE*  come_value  ;
    char*  __dec_obj118  ;
    struct sType*  __dec_obj119  ;
    _Bool  __result_obj__0  ;
    memset(&class_name, 0, sizeof(class_name));
    memset(&current_stack, 0, sizeof(current_stack));
    memset(&vtable, 0, sizeof(vtable));
    memset(&_o2_saved_5, 0, sizeof(_o2_saved_5));
    memset(&it, 0, sizeof(it));
    memset(&key, 0, sizeof(key));
    memset(&value, 0, sizeof(value));
    memset(&type2, 0, sizeof(type2));
    memset(&item, 0, sizeof(item));
    memset(&type3, 0, sizeof(type3));
    memset(&item2, 0, sizeof(item2));
    memset(&type3_75, 0, sizeof(type3_75));
    memset(&item2_76, 0, sizeof(item2_76));
    memset(&_o2_saved_6, 0, sizeof(_o2_saved_6));
    memset(&it_77, 0, sizeof(it_77));
    memset(&key_78, 0, sizeof(key_78));
    memset(&value_79, 0, sizeof(value_79));
    memset(&type2_80, 0, sizeof(type2_80));
    memset(&item_81, 0, sizeof(item_81));
    memset(&come_value, 0, sizeof(come_value));
    info->current_stack_num++;
    class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num), "./common.h", 718, 1333);
    __right_value0 = (void*)0;
    current_stack=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "./common.h", 719, 1334, "struct sClass* "), "./common.h", 719, 1336),(char* )come_increment_ref_count(class_name, "./common.h", 719, 1335),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "./common.h", 719, 1337);
    vtable=info->lv_table;
    while(vtable) {
        for(_o2_saved_5=(struct map$2char$phsVar$ph*)come_increment_ref_count(vtable->mVars, "./common.h", 724, 1338),it=map$2char$phsVar$ph_begin(_o2_saved_5)        ;!map$2char$phsVar$ph_end(_o2_saved_5);it=map$2char$phsVar$ph_next(_o2_saved_5)){
            key=it;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            value=((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(vtable->mVars,((char* )(__right_value1=__builtin_string(key,"./common.h",726))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 726, 1369));
            __right_value0 = (void*)0;
            type2=(struct sType* )come_increment_ref_count(sType_clone(value->mType), "./common.h", 728, 1370);
            type2->mPointerNum++;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 732, 1371, "struct tuple2$2char$phsType$ph"), "./common.h", 2, 1381),(char* )come_increment_ref_count(__builtin_string(value->mCValueName,"./common.h",732), "./common.h", 2, 1382),(struct sType* )come_increment_ref_count(type2, "./common.h", 2, 1383)), "./common.h", 732, 1384);
            if(value->mCValueName!=((void*)0)) {
                if(strcmp(value->mCValueName,"__list_values")==0) {
                }
                else if(strcmp(value->mCValueName,"__map_keys")==0) {
                }
                else if(strcmp(value->mCValueName,"__map_element")==0) {
                }
                else if(strncmp(value->mCValueName,"_o2_saved_",10)==0) {
                }
                else if(string_operator_equals(value->mType->mClass->mName,"va_list")||string_operator_equals(value->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(type2->mArrayPointerType) {
                    __right_value0 = (void*)0;
                    type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "./common.h", 751, 1385);
                    type3->mPointerNum--;
                    type3->mArrayPointerNum++;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    item2=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 755, 1386, "struct tuple2$2char$phsType$ph"), "./common.h", 755, 1387),(char* )come_increment_ref_count(__builtin_string(value->mCValueName,"./common.h",755), "./common.h", 755, 1388),(struct sType* )come_increment_ref_count(type3, "./common.h", 755, 1389)), "./common.h", 755, 1390);
                    __right_value0 = (void*)0;
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2), "./common.h", 756, 1419));
                    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 768, 1420);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 768, 1421);
                }
                else if(list$1sNode$ph_length(type2->mArrayNum)>0) {
                    __right_value0 = (void*)0;
                    type3_75=(struct sType* )come_increment_ref_count(sType_clone(type2), "./common.h", 759, 1422);
                    type3_75->mPointerNum--;
                    type3_75->mArrayPointerNum++;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    item2_76=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 762, 1423, "struct tuple2$2char$phsType$ph"), "./common.h", 762, 1424),(char* )come_increment_ref_count(__builtin_string(value->mCValueName,"./common.h",762), "./common.h", 762, 1425),(struct sType* )come_increment_ref_count(type3_75, "./common.h", 762, 1426)), "./common.h", 762, 1427);
                    __right_value0 = (void*)0;
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_76), "./common.h", 763, 1428));
                    come_call_finalizer(sType_finalize, type3_75, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 768, 1429);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2_76, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 768, 1430);
                }
                else {
                    __right_value0 = (void*)0;
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item), "./common.h", 766, 1431));
                }
            }
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 771, 1432);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 771, 1433);
        }
        vtable=vtable->mParent;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 774, 1434);
    }
    output_struct(current_stack,((void*)0),info,(_Bool)0);
    map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(class_name, "./common.h", 776, 1435),(struct sClass* )come_increment_ref_count(current_stack, "./common.h", 776, 1436),(_Bool)0);
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name);
    vtable=info->lv_table;
    add_come_code(info,"({");
    while(vtable) {
        for(_o2_saved_6=(struct map$2char$phsVar$ph*)come_increment_ref_count(vtable->mVars, "./common.h", 786, 1437),it_77=map$2char$phsVar$ph_begin(_o2_saved_6)        ;!map$2char$phsVar$ph_end(_o2_saved_6);it_77=map$2char$phsVar$ph_next(_o2_saved_6)){
            key_78=it_77;
            __right_value0 = (void*)0;
            value_79=((struct sVar* )(__right_value0=map$2char$phsVar$ph_operator_load_element(vtable->mVars,key_78)));
            __right_value0 = (void*)0;
            type2_80=(struct sType* )come_increment_ref_count(sType_clone(value_79->mType), "./common.h", 790, 1438);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            item_81=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 792, 1439, "struct tuple2$2char$phsType$ph"), "./common.h", 792, 1440),(char* )come_increment_ref_count(value_79->mCValueName, "./common.h", 792, 1441),(struct sType* )come_increment_ref_count(type2_80, "./common.h", 792, 1442)), "./common.h", 792, 1443);
            if(value_79->mCValueName!=((void*)0)) {
                if(strcmp(value_79->mCValueName,"__list_values")==0) {
                }
                else if(strcmp(value_79->mCValueName,"__map_keys")==0) {
                }
                else if(strcmp(value_79->mCValueName,"__map_element")==0) {
                }
                else if(strncmp(value_79->mCValueName,"_o2_saved_",10)==0) {
                }
                else if(string_operator_equals(value_79->mType->mClass->mName,"va_list")||string_operator_equals(value_79->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(string_operator_equals(value_79->mFunName,info->come_fun->mName)) {
                        if(string_operator_equals(type2_80->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_79->mCValueName,value_79->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_79->mCValueName,value_79->mCValueName);
                        }
                    }
                    else {
                        if(string_operator_equals(type2_80->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_79->mCValueName,value_79->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_79->mCValueName,value_79->mCValueName);
                        }
                    }
                }
            }
            come_call_finalizer(sType_finalize, type2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 831, 1444);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item_81, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 831, 1445);
        }
        vtable=vtable->mParent;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 833, 1446);
    }
    add_come_code(info,"})");
    add_come_code(info,",");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "./common.h", 843, 1447, "struct CVALUE* "), "./common.h", 843, 1448)), "./common.h", 843, 1449);
    __right_value0 = (void*)0;
    __dec_obj118=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num), "./common.h", 845, 1451);
    __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 845, 1450);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj119=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "./common.h", 846, 1452, "struct sType* "), "./common.h", 846, 1453),(char* )come_increment_ref_count(class_name, "./common.h", 846, 1454),(_Bool)0,info,(_Bool)0,0), "./common.h", 846, 1456);
    come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 846, 1455);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "./common.h", 851, 1471));
        __result_obj__0 = (_Bool)1;
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 853, 1472));
    come_call_finalizer(sClass_finalize, current_stack, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 853, 1473);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 853, 1474);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNothingNode_finalize(struct sNothingNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNothingNode_finalize", 2, 1478));
    }
        neo_current_frame = fr.prev;
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNothingNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "./common.h", 1216, 1475),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 1216, 1476);
        __result_obj__0 = (struct sNothingNode*)come_increment_ref_count(self, "./common.h", 1217, 1477);
    come_call_finalizer(sNothingNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1217, 1479);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNothingNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1217, 1480);
    return __result_obj__0;
}

_Bool  sNothingNode_terminated(struct sNothingNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_terminated"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sNothingNode_kind(struct sNothingNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNothingNode","./common.h",1226))), "./common.h", 1226, 1481);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1226, 1482));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 1226, 1483));
    return __result_obj__0;
}

_Bool  sNothingNode_compile(struct sNothingNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sNullChecker_finalize(struct sNullChecker* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNullChecker_finalize", 2, 1489));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sNullChecker_finalize", 3, 1490):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj123;
    struct sNullChecker* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "./common.h", 1272, 1484),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 1272, 1485);
    __right_value0 = (void*)0;
    __dec_obj123=self->value,
    self->value=(struct sNode*)come_increment_ref_count(sNode_clone(value), "./common.h", 1274, 1487);
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0, "./common.h", 1274, 1486) :0);
        __result_obj__0 = (struct sNullChecker*)come_increment_ref_count(self, "./common.h", 1275, 1488);
    come_call_finalizer(sNullChecker_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1275, 1491);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1275, 1492):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNullChecker_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1275, 1493);
    return __result_obj__0;
}

char*  sNullChecker_kind(struct sNullChecker* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNullChecker","./common.h",1279))), "./common.h", 1279, 1494);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1279, 1495));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 1279, 1496));
    return __result_obj__0;
}

_Bool  sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* value;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type__  ;
    struct sType*  type_  ;
    struct sType*  type  ;
    struct sType*  original_type  ;
    _Bool  pointer_type  ;
    _Bool  heap_type  ;
    char*  type_name  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj124  ;
    struct sType*  __dec_obj125  ;
    char*  __dec_obj126  ;
    char*  __dec_obj127  ;
    char*  __dec_obj128  ;
    memset(&value, 0, sizeof(value));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type__, 0, sizeof(type__));
    memset(&type_, 0, sizeof(type_));
    memset(&type, 0, sizeof(type));
    memset(&original_type, 0, sizeof(original_type));
    memset(&pointer_type, 0, sizeof(pointer_type));
    memset(&heap_type, 0, sizeof(heap_type));
    memset(&type_name, 0, sizeof(type_name));
    memset(&come_value2, 0, sizeof(come_value2));
    value=(struct sNode*)come_increment_ref_count(self->value, "./common.h", 1284, 1497);
    Value=node_compile(value,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1287, 1498):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "./common.h", 1290, 1499);
    __right_value0 = (void*)0;
    type__=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "./common.h", 1292, 1500);
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(solve_generics(type__,info->generics_type,info), "./common.h", 1293, 1501);
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info), "./common.h", 1294, 1502);
    original_type=(struct sType* )come_increment_ref_count(type__->mOriginalLoadVarType, "./common.h", 1296, 1503);
    pointer_type=type->mPointerNum>0||type->mArrayPointerNum>0||type->mFunctionPointerNum>0;
    heap_type=pointer_type&&type->mHeap;
    if(original_type) {
        if(list$1sNode$ph_length(original_type->mArrayNum)==1&&type->mArrayPointerNum==1) {
            pointer_type=(_Bool)0;
        }
        if(list$1sNode$ph_length(original_type->mArrayNum)>0&&original_type->mPointerNum==0) {
            pointer_type=(_Bool)0;
        }
    }
    if(!gComeC&&pointer_type&&!info->in_refference) {
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)1,(_Bool)1,(_Bool)0,(_Bool)1), "./common.h", 1315, 1504);
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "./common.h", 1317, 1505, "struct CVALUE* "), "./common.h", 1317, 1506)), "./common.h", 1317, 1507);
        __right_value0 = (void*)0;
        __dec_obj124=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("((%s)come_null_checker(%s, \"%s\", %d, %d))",type_name,come_value->c_value,info->sname,info->sline,++info->id), "./common.h", 1319, 1509);
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1319, 1508);
        __right_value0 = (void*)0;
        __dec_obj125=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(type), "./common.h", 1320, 1511);
        come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 1320, 1510);
        come_value2->var=come_value->var;
        if(come_value->c_value_without_null_checker) {
            __dec_obj126=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_null_checker, "./common.h", 1323, 1513);
            __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1323, 1512);
        }
        else if(come_value->c_value_without_cast_object_value) {
            __dec_obj127=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_cast_object_value, "./common.h", 1326, 1515);
            __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1326, 1514);
        }
        else {
            __dec_obj128=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value, "./common.h", 1329, 1517);
            __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1329, 1516);
        }
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "./common.h", 1332, 1518));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 1338, 1519));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1520);
    }
    else {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "./common.h", 1335, 1521));
    }
        __result_obj__0 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1338, 1522):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1523);
    come_call_finalizer(sType_finalize, type__, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1524);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1525);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1526);
    come_call_finalizer(sType_finalize, original_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1527);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sHeapChecker_finalize(struct sHeapChecker* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sHeapChecker_finalize", 2, 1533));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sHeapChecker_finalize", 3, 1534):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sHeapChecker* sHeapChecker_initialize(struct sHeapChecker* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj129;
    struct sHeapChecker* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "./common.h", 1348, 1528),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 1348, 1529);
    __right_value0 = (void*)0;
    __dec_obj129=self->value,
    self->value=(struct sNode*)come_increment_ref_count(sNode_clone(value), "./common.h", 1350, 1531);
    (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0, (void*)0, "./common.h", 1350, 1530) :0);
        __result_obj__0 = (struct sHeapChecker*)come_increment_ref_count(self, "./common.h", 1351, 1532);
    come_call_finalizer(sHeapChecker_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1351, 1535);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1351, 1536):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sHeapChecker_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1351, 1537);
    return __result_obj__0;
}

char*  sHeapChecker_kind(struct sHeapChecker* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sHeapChecker","./common.h",1355))), "./common.h", 1355, 1538);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1355, 1539));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 1355, 1540));
    return __result_obj__0;
}

_Bool  sHeapChecker_compile(struct sHeapChecker* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* value;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type__  ;
    struct sType*  type_  ;
    struct sType*  type  ;
    struct sType*  original_type  ;
    _Bool  pointer_type  ;
    _Bool  heap_type  ;
    char*  type_name  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj130  ;
    struct sType*  __dec_obj131  ;
    char*  __dec_obj132  ;
    char*  __dec_obj133  ;
    char*  __dec_obj134  ;
    char*  type_name_84  ;
    struct CVALUE*  come_value2_85  ;
    char*  __dec_obj135  ;
    struct sType*  __dec_obj136  ;
    char*  __dec_obj137  ;
    char*  __dec_obj138  ;
    char*  __dec_obj139  ;
    memset(&value, 0, sizeof(value));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type__, 0, sizeof(type__));
    memset(&type_, 0, sizeof(type_));
    memset(&type, 0, sizeof(type));
    memset(&original_type, 0, sizeof(original_type));
    memset(&pointer_type, 0, sizeof(pointer_type));
    memset(&heap_type, 0, sizeof(heap_type));
    memset(&type_name, 0, sizeof(type_name));
    memset(&come_value2, 0, sizeof(come_value2));
    memset(&type_name_84, 0, sizeof(type_name_84));
    memset(&come_value2_85, 0, sizeof(come_value2_85));
    value=(struct sNode*)come_increment_ref_count(self->value, "./common.h", 1360, 1541);
    Value=node_compile(value,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1363, 1542):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "./common.h", 1366, 1543);
    __right_value0 = (void*)0;
    type__=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "./common.h", 1368, 1544);
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(solve_generics(type__,info->generics_type,info), "./common.h", 1369, 1545);
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info), "./common.h", 1370, 1546);
    original_type=(struct sType* )come_increment_ref_count(type__->mOriginalLoadVarType, "./common.h", 1372, 1547);
    pointer_type=type->mPointerNum>0||type->mArrayPointerNum>0||type->mFunctionPointerNum>0;
    heap_type=pointer_type&&type->mHeap;
    if(original_type) {
        if(original_type->mHeap) {
            heap_type=(_Bool)1;
        }
    }
    info->in_refference=(_Bool)1;
    if(!gComeC&&heap_type&&!info->in_refference) {
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)1,(_Bool)1,(_Bool)0,(_Bool)1), "./common.h", 1388, 1548);
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "./common.h", 1390, 1549, "struct CVALUE* "), "./common.h", 1390, 1550)), "./common.h", 1390, 1551);
        __right_value0 = (void*)0;
        __dec_obj130=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("((%s)come_heap_checker(%s, \"%s\", %d, %d))",type_name,come_value->c_value,info->sname,info->sline,++info->id), "./common.h", 1392, 1553);
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1392, 1552);
        __right_value0 = (void*)0;
        __dec_obj131=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(type), "./common.h", 1393, 1555);
        come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 1393, 1554);
        come_value2->var=come_value->var;
        if(come_value->c_value_without_null_checker) {
            __dec_obj132=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_null_checker, "./common.h", 1396, 1557);
            __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1396, 1556);
        }
        else if(come_value->c_value_without_cast_object_value) {
            __dec_obj133=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_cast_object_value, "./common.h", 1399, 1559);
            __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1399, 1558);
        }
        else {
            __dec_obj134=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value, "./common.h", 1402, 1561);
            __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1402, 1560);
        }
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "./common.h", 1405, 1562));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 1431, 1563));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1564);
    }
    else if(!gComeC&&pointer_type&&!info->in_refference) {
        __right_value0 = (void*)0;
        type_name_84=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)1,(_Bool)1,(_Bool)0,(_Bool)1), "./common.h", 1408, 1565);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2_85=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "./common.h", 1410, 1566, "struct CVALUE* "), "./common.h", 1410, 1567)), "./common.h", 1410, 1568);
        __right_value0 = (void*)0;
        __dec_obj135=come_value2_85->c_value,
        come_value2_85->c_value=(char* )come_increment_ref_count(xsprintf("((%s)come_null_checker(%s, \"%s\", %d, %d))",type_name_84,come_value->c_value,info->sname,info->sline,++info->id), "./common.h", 1412, 1570);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1412, 1569);
        __right_value0 = (void*)0;
        __dec_obj136=come_value2_85->type,
        come_value2_85->type=(struct sType* )come_increment_ref_count(sType_clone(type), "./common.h", 1413, 1572);
        come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 1413, 1571);
        come_value2_85->var=come_value->var;
        if(come_value->c_value_without_null_checker) {
            __dec_obj137=come_value2_85->c_value_without_null_checker,
            come_value2_85->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_null_checker, "./common.h", 1416, 1574);
            __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1416, 1573);
        }
        else if(come_value->c_value_without_cast_object_value) {
            __dec_obj138=come_value2_85->c_value_without_null_checker,
            come_value2_85->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_cast_object_value, "./common.h", 1419, 1576);
            __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1419, 1575);
        }
        else {
            __dec_obj139=come_value2_85->c_value_without_null_checker,
            come_value2_85->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value, "./common.h", 1422, 1578);
            __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1422, 1577);
        }
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2_85, "./common.h", 1425, 1579));
        (type_name_84 = come_decrement_ref_count(type_name_84, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 1431, 1580));
        come_call_finalizer(CVALUE_finalize, come_value2_85, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1581);
    }
    else {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "./common.h", 1428, 1582));
    }
        __result_obj__0 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1431, 1583):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1584);
    come_call_finalizer(sType_finalize, type__, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1585);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1586);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1587);
    come_call_finalizer(sType_finalize, original_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1588);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFunNode_finalize(struct sFunNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunNode_finalize", 2, 1594));
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_finalize}", 3, 1595);
    }
        neo_current_frame = fr.prev;
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun*  fun  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFun*  __dec_obj140  ;
    struct sFunNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "./common.h", 1577, 1589),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 1577, 1590);
    __dec_obj140=self->mFun,
    self->mFun=(struct sFun* )come_increment_ref_count(fun, "./common.h", 1579, 1592);
    come_call_finalizer(sFun_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 1579, 1591);
        __result_obj__0 = (struct sFunNode*)come_increment_ref_count(self, "./common.h", 1580, 1593);
    come_call_finalizer(sFunNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1580, 1596);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1580, 1597);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFunNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1580, 1598);
    return __result_obj__0;
}

char*  sFunNode_kind(struct sFunNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFunNode","./common.h",1584))), "./common.h", 1584, 1599);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1584, 1600));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 1584, 1601));
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 1605);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 1606);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 1607);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right15 = (self->size); if(__neo_div_right15 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right15; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 1608);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 1609);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 1610);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 1611);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 1612);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 1613);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 1614);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 1615);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 1616);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 1617);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 1618);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 1619);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 1620);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 1621);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 1622);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right16 = (self->size); if(__neo_div_right16 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right16; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 1623);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 1624);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 1625);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 1626);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 1627);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 1628);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 1629);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 1630);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 1631);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 1632);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 1633);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 1634);
    return __result_obj__0;
}

_Bool  sFunNode_compile(struct sFunNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sFun*  come_fun  ;
    int right_value_num;
    int right_value_max;
    int max_conditional;
    _Bool  unsafe_mode  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int block_level;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    memset(&come_fun, 0, sizeof(come_fun));
    memset(&right_value_num, 0, sizeof(right_value_num));
    memset(&right_value_max, 0, sizeof(right_value_max));
    memset(&max_conditional, 0, sizeof(max_conditional));
    memset(&unsafe_mode, 0, sizeof(unsafe_mode));
    memset(&block_level, 0, sizeof(block_level));
    come_fun=info->come_fun;
    info->come_fun=self->mFun;
    info->come_fun->mDefineReturnVar=(_Bool)0;
    right_value_num=info->right_value_num;
    info->right_value_num=0;
    right_value_max=info->right_value_max;
    info->right_value_max=0;
    max_conditional=info->max_conditional;
    info->max_conditional=0;
    unsafe_mode=gComeSafe;
    if(self->mFun->mBlock) {
        if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
            add_come_code_at_function_head(info,((char*)(__right_value1=xsprintf("struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = \"\%s\"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;\n",((char* )(__right_value0=string_to_string(info->come_fun->mName)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1608, 1602));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1608, 1603));
        }
        block_level=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level;
        if(!gComeC&&!info->inhibits_output_code2&&!info->come_fun->mResultType->mNorecord) {
            __right_value0 = (void*)0;
            add_come_code(info,"%s",((char* )(__right_value0=buffer_to_string(self->mFun->mSourceEnd))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1619, 1604));
            add_come_code_no_indent(info,"neo_current_frame = fr.prev;\n");
        }
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_memleak_checker"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1623, 1635));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 3, 1636);
_conditional_value_X0;})) {
            free_objects(info->gv_table,((void*)0),info,(_Bool)0);
            __right_value0 = (void*)0;
            add_come_code(info,((char* )(__right_value0=xsprintf("come_memleak_checker();\n"))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1625, 1637));
        }
    }
    gComeSafe=unsafe_mode;
    info->come_fun=come_fun;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->max_conditional=max_conditional;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

