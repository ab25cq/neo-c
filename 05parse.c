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
int __append_char(char** p, unsigned long  int* rem, char c);
void __append_str(char** p, unsigned long  int* rem, const char* s);
unsigned long  int  brk(unsigned long  int  size  );
long read(int fd, void* buf, unsigned long  int  count  );
long write(int fd, const void* buf, unsigned long  int  count  );
int open(const char* path, int flags, ...);
int close(int fd);
int unlink(const char* path);
void exit(int status);
void putchar(char c);
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
struct list$1char$* chara_to_list(char* self, unsigned long  int  len  );
struct list$1char$p* charpa_to_list(char** self, unsigned long  int  len  );
struct list$1short$* shorta_to_list(short* self, unsigned long  int  len  );
struct list$1int$* inta_to_list(int* self, unsigned long  int  len  );
struct list$1long$* longa_to_list(long* self, unsigned long  int  len  );
struct list$1float$* floata_to_list(float* self, unsigned long  int  len  );
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
struct Result$1__neo_FILE$p* xfopen(const char* file_name, const char* mode);
struct Result$1buffer$ph* FILE_fread(struct __neo_FILE*  f  );
struct Result$1int$* FILE_fwrite(struct __neo_FILE*  f  , const char* str);
struct Result$1int$* FILE_fclose(struct __neo_FILE*  f  );
struct Result$1__neo_FILE$p* FILE_fprintf(struct __neo_FILE*  f  , const char* msg, ...);
struct Result$1list$1char$ph$ph* FILE_readlines(struct __neo_FILE*  f  );
_Bool  xiswalpha(int  c  );
_Bool  xiswblank(int  c  );
_Bool  xiswdigit(int  c  );
_Bool  xiswalnum(int  c  );
_Bool  xiswascii(int  c  );
int string_index(char* str, const char* search_str, int default_value);
int charp_index(const char* str, const char* search_str, int default_value);
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
void add_parse_variable_to_table(char* name, struct sInfo*  info  );
struct sClass* sClass_initialize(struct sClass* self, char*  name  , _Bool  number  , _Bool  union_  , _Bool  generics  , _Bool  method_generics  , _Bool  protocol_  , _Bool  struct_  , _Bool  float_  , int generics_num, int method_generics_num, _Bool  enum_  , _Bool  uniq_  , _Bool  typename  , struct sInfo*  info  , _Bool  iter_  );
struct sType* sType_initialize(struct sType* self, char*  name  , _Bool  heap  , struct sInfo*  info  , _Bool  unsigned_  , int pointer_num_);
struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool  external  , _Bool  var_args  , struct sBlock*  block  , _Bool  static_  , struct sInfo*  info  , _Bool  inline_  , _Bool  uniq_  , char*  attribute  , char*  fun_attribute  , _Bool  const_fun  , char*  text_block  , char*  generics_sname  , int generics_sline, _Bool  immutable_  , char*  asm_fun  );
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool  var_args  , char*  block  , struct sInfo*  info  , char*  generics_sname  , int generics_sline, _Bool  const_fun  );
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool  global  , struct sVarTable*  parent  );
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo*  info  );
_Bool  sNodeBase_terminated(struct sNodeBase* self);
char*  sNodeBase_sname(struct sNodeBase* self, struct sInfo*  info  );
struct sNode* sNodeBase_left_value(struct sNodeBase* self);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  );
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_kind(struct sCurrentNode* self);
_Bool  sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  );
struct sNode* parse_iterator_it(struct sInfo*  info  );
_Bool  transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo*  info  );
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
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo*  info  );
_Bool  sNothingNode_terminated(struct sNothingNode* self);
char*  sNothingNode_kind(struct sNothingNode* self);
_Bool  sNothingNode_compile(struct sNothingNode* self, struct sInfo*  info  );
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
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool  sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
struct sHeapChecker* sHeapChecker_initialize(struct sHeapChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sHeapChecker_kind(struct sHeapChecker* self);
_Bool  sHeapChecker_compile(struct sHeapChecker* self, struct sInfo*  info  );
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
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun*  fun  , struct sInfo*  info  );
char*  sFunNode_kind(struct sFunNode* self);
_Bool  sFunNode_compile(struct sFunNode* self, struct sInfo*  info  );
char* parsecmp_tail(const char* p2, struct sInfo*  info  );
_Bool  parsecmp(const char* p2, struct sInfo*  info  );
char* parsecmp_forward(const char* p2, struct sInfo*  info  );
int match_common_attribute_keyword_len(const char* p);
static int output_compile_message(struct sInfo*  info  , const char* level, const char* msg2);
int err_msg(struct sInfo*  info  , const char* msg, ...);
int warning_msg(struct sInfo*  info  , const char* msg, ...);
int expected_next_character(char c, struct sInfo*  info  );
char*  parse_word(_Bool  digits  , struct sInfo*  info  );
static char*  map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char*  key  );
static char*  map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char*  key  );
char*  backtrace_parse_word(struct sInfo*  info  );
static _Bool  skip_comment(struct sInfo*  info  , _Bool  skip_space_after  );
static void skip_spaces_core(_Bool  skip_lf  , _Bool  parse_sharp_after  , _Bool  stop_at_line_comment  , struct sInfo*  info  );
void skip_spaces_and_lf(struct sInfo*  info  );
void skip_spaces_and_lf2(struct sInfo*  info  );
void skip_spaces_and_tabs(struct sInfo*  info  );
static _Bool  is_number_token(char* token);
static char*  pack_stack_make_entry(char*  id  , char*  pragma  );
static char*  pack_stack_entry_id(char* entry);
static char*  pack_stack_entry_pragma(char* entry);
static void apply_pack_pragma_state(char*  pragma_line  , struct sInfo*  info  );
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static int list$1char$ph_length(struct list$1char$ph* self);
static char*  list$1char$ph_item(struct list$1char$ph* self, int position, char*  default_value  );
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
void parse_sharp_v5(struct sInfo*  info  );
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  item  , _Bool  by_pointer  );
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph_remove_ordered_entry(struct map$2char$phbuffer$ph* self, char*  key  , _Bool  by_pointer  );
static int map$2char$phbuffer$ph_key_position(struct map$2char$phbuffer$ph* self, char*  key  , _Bool  by_pointer  );
void skip_paren(struct sInfo*  info  );
// uniq global variable
// inline function

// body function
char* parsecmp_tail(const char* p2, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parsecmp_tail"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    char* __result_obj__0;
    unsigned char c;
    memset(&p, 0, sizeof(p));
    memset(&c, 0, sizeof(c));
    p=info->p;
    while(*p2) {
        if(*p==0||*p!=*p2) {
                        __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        p++;
        p2++;
    }
    c=*p;
    if(!((((((unsigned char)(c))>=33&&((unsigned char)(c))<=47)||(((unsigned char)(c))>=58&&((unsigned char)(c))<=64)||(((unsigned char)(c))>=91&&((unsigned char)(c))<=96)||(((unsigned char)(c))>=123&&((unsigned char)(c))<=126))||(c)==32||(c)==9||(c)==10||(c)==0||(c)==13)&&(c)!=95)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = p;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool  parsecmp(const char* p2, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parsecmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return parsecmp_tail(p2,info)!=((void*)0);
    neo_current_frame = fr.prev;
}

char* parsecmp_forward(const char* p2, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parsecmp_forward"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* tail;
    char* __result_obj__0;
    memset(&tail, 0, sizeof(tail));
    tail=parsecmp_tail(p2,info);
    if(tail!=((void*)0)) {
        info->p=tail;
    }
        __result_obj__0 = tail;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int match_common_attribute_keyword_len(const char* p)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "match_common_attribute_keyword_len"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int len;
    memset(&len, 0, sizeof(len));
    if(p==((void*)0)||p[0]!=95||p[1]!=95) {
                neo_current_frame = fr.prev;
        return 0;
    }
    len=0;
    while((((((unsigned char)(p[len]))>=97&&((unsigned char)(p[len]))<=122)||(((unsigned char)(p[len]))>=65&&((unsigned char)(p[len]))<=90))||(((unsigned char)(p[len]))>=48&&((unsigned char)(p[len]))<=57))||p[len]==95) {
        len++;
    }
    if(len<5||!((((((unsigned char)(p[len]))>=33&&((unsigned char)(p[len]))<=47)||(((unsigned char)(p[len]))>=58&&((unsigned char)(p[len]))<=64)||(((unsigned char)(p[len]))>=91&&((unsigned char)(p[len]))<=96)||(((unsigned char)(p[len]))>=123&&((unsigned char)(p[len]))<=126))||(p[len])==32||(p[len])==9||(p[len])==10||(p[len])==0||(p[len])==13)&&(p[len])!=95)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    switch (    p[2]) {
        case 97:
        if((len==(sizeof("__aligned")-1)&&memcmp(p,"__aligned",sizeof("__aligned")-1)==0)||(len==(sizeof("__aligned_largest")-1)&&memcmp(p,"__aligned_largest",sizeof("__aligned_largest")-1)==0)||(len==(sizeof("__aligned_u64")-1)&&memcmp(p,"__aligned_u64",sizeof("__aligned_u64")-1)==0)||(len==(sizeof("__alias")-1)&&memcmp(p,"__alias",sizeof("__alias")-1)==0)||(len==(sizeof("__alloc_align")-1)&&memcmp(p,"__alloc_align",sizeof("__alloc_align")-1)==0)||(len==(sizeof("__always_inline")-1)&&memcmp(p,"__always_inline",sizeof("__always_inline")-1)==0)||(len==(sizeof("__always_unused")-1)&&memcmp(p,"__always_unused",sizeof("__always_unused")-1)==0)||(len==(sizeof("__assume_aligned")-1)&&memcmp(p,"__assume_aligned",sizeof("__assume_aligned")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 99:
        if((len==(sizeof("__cleanup")-1)&&memcmp(p,"__cleanup",sizeof("__cleanup")-1)==0)||(len==(sizeof("__cold")-1)&&memcmp(p,"__cold",sizeof("__cold")-1)==0)||(len==(sizeof("__constructor")-1)&&memcmp(p,"__constructor",sizeof("__constructor")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 100:
        if((len==(sizeof("__deprecated")-1)&&memcmp(p,"__deprecated",sizeof("__deprecated")-1)==0)||(len==(sizeof("__destructor")-1)&&memcmp(p,"__destructor",sizeof("__destructor")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 101:
        if((len==(sizeof("__error")-1)&&memcmp(p,"__error",sizeof("__error")-1)==0)||(len==(sizeof("__exit")-1)&&memcmp(p,"__exit",sizeof("__exit")-1)==0)||(len==(sizeof("__exitconst")-1)&&memcmp(p,"__exitconst",sizeof("__exitconst")-1)==0)||(len==(sizeof("__exitdata")-1)&&memcmp(p,"__exitdata",sizeof("__exitdata")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 102:
        if((len==(sizeof("__flatten")-1)&&memcmp(p,"__flatten",sizeof("__flatten")-1)==0)||(len==(sizeof("__format")-1)&&memcmp(p,"__format",sizeof("__format")-1)==0)||(len==(sizeof("__format_arg")-1)&&memcmp(p,"__format_arg",sizeof("__format_arg")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 104:
        if((len==(sizeof("__hot")-1)&&memcmp(p,"__hot",sizeof("__hot")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 105:
        if((len==(sizeof("__init")-1)&&memcmp(p,"__init",sizeof("__init")-1)==0)||(len==(sizeof("__init_rodata")-1)&&memcmp(p,"__init_rodata",sizeof("__init_rodata")-1)==0)||(len==(sizeof("__initconst")-1)&&memcmp(p,"__initconst",sizeof("__initconst")-1)==0)||(len==(sizeof("__initdata")-1)&&memcmp(p,"__initdata",sizeof("__initdata")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 108:
        if((len==(sizeof("__latent_entropy")-1)&&memcmp(p,"__latent_entropy",sizeof("__latent_entropy")-1)==0)||(len==(sizeof("__leaf")-1)&&memcmp(p,"__leaf",sizeof("__leaf")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 109:
        if((len==(sizeof("__malloc")-1)&&memcmp(p,"__malloc",sizeof("__malloc")-1)==0)||(len==(sizeof("__maybe_unused")-1)&&memcmp(p,"__maybe_unused",sizeof("__maybe_unused")-1)==0)||(len==(sizeof("__meminit")-1)&&memcmp(p,"__meminit",sizeof("__meminit")-1)==0)||(len==(sizeof("__meminitconst")-1)&&memcmp(p,"__meminitconst",sizeof("__meminitconst")-1)==0)||(len==(sizeof("__meminitdata")-1)&&memcmp(p,"__meminitdata",sizeof("__meminitdata")-1)==0)||(len==(sizeof("__must_check")-1)&&memcmp(p,"__must_check",sizeof("__must_check")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 110:
        if((len==(sizeof("__naked")-1)&&memcmp(p,"__naked",sizeof("__naked")-1)==0)||(len==(sizeof("__noclone")-1)&&memcmp(p,"__noclone",sizeof("__noclone")-1)==0)||(len==(sizeof("__no_instrument_function")-1)&&memcmp(p,"__no_instrument_function",sizeof("__no_instrument_function")-1)==0)||(len==(sizeof("__no_profile")-1)&&memcmp(p,"__no_profile",sizeof("__no_profile")-1)==0)||(len==(sizeof("__no_sanitize")-1)&&memcmp(p,"__no_sanitize",sizeof("__no_sanitize")-1)==0)||(len==(sizeof("__no_sanitize_address")-1)&&memcmp(p,"__no_sanitize_address",sizeof("__no_sanitize_address")-1)==0)||(len==(sizeof("__no_sanitize_coverage")-1)&&memcmp(p,"__no_sanitize_coverage",sizeof("__no_sanitize_coverage")-1)==0)||(len==(sizeof("__no_sanitize_thread")-1)&&memcmp(p,"__no_sanitize_thread",sizeof("__no_sanitize_thread")-1)==0)||(len==(sizeof("__noinline")-1)&&memcmp(p,"__noinline",sizeof("__noinline")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 111:
        if((len==(sizeof("__optimize")-1)&&memcmp(p,"__optimize",sizeof("__optimize")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 112:
        if((len==(sizeof("__packed")-1)&&memcmp(p,"__packed",sizeof("__packed")-1)==0)||(len==(sizeof("__percpu")-1)&&memcmp(p,"__percpu",sizeof("__percpu")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 114:
        if((len==(sizeof("__read_mostly")-1)&&memcmp(p,"__read_mostly",sizeof("__read_mostly")-1)==0)||(len==(sizeof("__ref")-1)&&memcmp(p,"__ref",sizeof("__ref")-1)==0)||(len==(sizeof("__returns_nonnull")-1)&&memcmp(p,"__returns_nonnull",sizeof("__returns_nonnull")-1)==0)||(len==(sizeof("__ro_after_init")-1)&&memcmp(p,"__ro_after_init",sizeof("__ro_after_init")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 115:
        if((len==(sizeof("__scanf")-1)&&memcmp(p,"__scanf",sizeof("__scanf")-1)==0)||(len==(sizeof("__section")-1)&&memcmp(p,"__section",sizeof("__section")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 116:
        if((len==(sizeof("__target")-1)&&memcmp(p,"__target",sizeof("__target")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 117:
        if((len==(sizeof("__unused")-1)&&memcmp(p,"__unused",sizeof("__unused")-1)==0)||(len==(sizeof("__used")-1)&&memcmp(p,"__used",sizeof("__used")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 118:
        if((len==(sizeof("__visibility")-1)&&memcmp(p,"__visibility",sizeof("__visibility")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
        case 119:
        if((len==(sizeof("__warn_unused_result")-1)&&memcmp(p,"__warn_unused_result",sizeof("__warn_unused_result")-1)==0)||(len==(sizeof("__warning")-1)&&memcmp(p,"__warning",sizeof("__warning")-1)==0)||(len==(sizeof("__weak")-1)&&memcmp(p,"__weak",sizeof("__weak")-1)==0)||(len==(sizeof("__weak_ref")-1)&&memcmp(p,"__weak_ref",sizeof("__weak_ref")-1)==0)) {
                        neo_current_frame = fr.prev;
            return len;
        }
        break;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

static int output_compile_message(struct sInfo*  info  , const char* level, const char* msg2)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "output_compile_message"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int sline_real;
    memset(&sline_real, 0, sizeof(sline_real));
    sline_real=((info->sline_real>0)?(info->sline_real):(info->sline));
    if(info->come_fun) {
        printf("%s %d(%d): [%s] %s in fun (%s)\n",info->sname,info->sline,sline_real,level,msg2,info->come_fun->mName);
    }
    else {
        printf("%s %d(%d): [%s] %s\n",info->sname,info->sline,sline_real,level,msg2);
    }
    if((info->end-info->p)>30&&(info->p-info->head)>30) {
        char mem[61];
        memset(&mem, 0, sizeof(mem));
        memcpy(mem,info->p-30,60);
        ({ long long __neo_array_index1_0 = (long long)(60); if(__neo_array_index1_0 < 0 || __neo_array_index1_0 >= (long long)(61)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mem[__neo_array_index1_0] = 0; });
        printf("%s\n",mem);
    }
    printf("\n");
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int err_msg(struct sInfo*  info  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "err_msg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    memset(&msg2, 0, sizeof(msg2));
    if(!info->no_output_come_code) {
        __builtin_va_start(args,msg);
        vasprintf(&msg2,msg,args);
        __builtin_va_end(args);
        info->err_num++;
        output_compile_message(info,"error",msg2);
        free(msg2);
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int warning_msg(struct sInfo*  info  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "warning_msg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    memset(&msg2, 0, sizeof(msg2));
    if(!info->no_output_come_code) {
        __builtin_va_start(args,msg);
        vasprintf(&msg2,msg,args);
        __builtin_va_end(args);
        info->warning_num++;
        output_compile_message(info,"warning",msg2);
        free(msg2);
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int expected_next_character(char c, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "expected_next_character"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    parse_sharp_v5(info);
    if(*info->p!=c) {
        if(!info->no_output_come_code) {
            err_msg(info,"expected next charaster is %c, but %c, caller %s %d",c,*info->p,info->caller_sname,info->caller_line);
            exit(1);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

char*  parse_word(_Bool  digits  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parse_word"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    char* head;
    char c;
    int len;
    void* __right_value0 = (void*)0;
    char* mem;
    char*  result  ;
    char*  module_param  ;
    char*  __result_obj__0  ;
    memset(&p, 0, sizeof(p));
    memset(&head, 0, sizeof(head));
    memset(&c, 0, sizeof(c));
    memset(&len, 0, sizeof(len));
    memset(&mem, 0, sizeof(mem));
    memset(&result, 0, sizeof(result));
    memset(&module_param, 0, sizeof(module_param));
    parse_sharp_v5(info);
    p=info->p;
    head=p;
    c=*p;
    if((((((unsigned char)(c))>=97&&((unsigned char)(c))<=122)||(((unsigned char)(c))>=65&&((unsigned char)(c))<=90))||(c)==95||(c)==36)||(digits&&(((unsigned char)(c))>=48&&((unsigned char)(c))<=57))) {
        do {
            p++;
        } while(((((((unsigned char)(*p))>=97&&((unsigned char)(*p))<=122)||(((unsigned char)(*p))>=65&&((unsigned char)(*p))<=90))||(((unsigned char)(*p))>=48&&((unsigned char)(*p))<=57))||(*p)==95||(*p)==36));
    }
    info->p=p;
    skip_spaces_and_lf(info);
    if(head==p) {
        err_msg(info,"unexpected character(%c), expected word character, caller %s %d",*info->p,info->caller_sname,info->caller_line);
        exit(1);
    }
    len=p-head;
    mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "05parse.nc", 327, 1, "char*"), "05parse.nc", 327, 2);
    memcpy(mem,head,len);
    mem[len]=0;
    result=(char*)come_increment_ref_count(mem, "05parse.nc", 330, 3);
    if(info->module_params) {
        __right_value0 = (void*)0;
        module_param=(char* )come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->module_params,result), "05parse.nc", 333, 34);
        if(module_param) {
                        __result_obj__0 = (char* )come_increment_ref_count(module_param, "05parse.nc", 335, 35);
            (module_param = come_decrement_ref_count(module_param, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 335, 36));
            (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 335, 37));
            (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 335, 38));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 335, 39));
            return __result_obj__0;
        }
        (module_param = come_decrement_ref_count(module_param, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 339, 40));
    }
        __result_obj__0 = (char* )come_increment_ref_count(result, "05parse.nc", 339, 41);
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 339, 42));
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 339, 43));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 339, 44));
    return __result_obj__0;
}

static char*  map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph$p_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(char* ));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 4);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4168, 5));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4168, 6));
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right1 = (self->size); if(__neo_div_right1 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right1; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (char* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 7);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4180, 8));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4180, 9));
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 10);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4187, 11));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4187, 12));
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 13);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4191, 14));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4191, 15));
            return __result_obj__0;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 16);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4195, 17));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4195, 18));
    return __result_obj__0;
}

static char*  map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(char* ));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 19);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4168, 20));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4168, 21));
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right2 = (self->size); if(__neo_div_right2 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right2; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (char* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 22);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4180, 23));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4180, 24));
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 25);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4187, 26));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4187, 27));
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 28);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4191, 29));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4191, 30));
            return __result_obj__0;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 31);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4195, 32));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4195, 33));
    return __result_obj__0;
}

char*  backtrace_parse_word(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "backtrace_parse_word"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    int sline;
    char*  buf  ;
    void* __right_value0 = (void*)0;
    char*  __dec_obj1  ;
    char*  __dec_obj2  ;
    char*  __result_obj__0  ;
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&buf, 0, sizeof(buf));
    p=info->p;
    sline=info->sline;
    if(((((unsigned char)(*info->p))>=97&&((unsigned char)(*info->p))<=122)||(((unsigned char)(*info->p))>=65&&((unsigned char)(*info->p))<=90))||*info->p==95) {
        __dec_obj1=buf,
        buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "05parse.nc", 349, 46);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 349, 45);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj2=buf,
        buf=(char* )come_increment_ref_count(__builtin_string("","05parse.nc",352), "05parse.nc", 352, 48);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 352, 47);
    }
    info->p=p;
    info->sline=sline;
        __result_obj__0 = (char* )come_increment_ref_count(buf, "05parse.nc", 358, 49);
    (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 358, 50));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 358, 51));
    return __result_obj__0;
}

static _Bool  skip_comment(struct sInfo*  info  , _Bool  skip_space_after  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "skip_comment"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    int sline;
    int sline_real;
    int nest;
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&nest, 0, sizeof(nest));
    p=info->p;
    sline=info->sline;
    sline_real=info->sline_real;
    if(*p==47&&*(p+1)==42) {
        nest=0;
        while(1) {
            if(*p==47&&*(p+1)==42) {
                p+=2;
                nest++;
            }
            else if(*p==42&&*(p+1)==47) {
                p+=2;
                nest--;
                if(nest==0) {
                    info->p=p;
                    info->sline=sline;
                    info->sline_real=sline_real;
                    if(skip_space_after) {
                        skip_spaces_and_lf2(info);
                    }
                    break;
                }
            }
            else if(*p==10) {
                p++;
                sline++;
                sline_real++;
            }
            else if(*p==13) {
                p++;
                if(*p==10) {
                    p++;
                }
                sline++;
                sline_real++;
            }
            else if(*p==0) {
                info->p=p;
                info->sline=sline;
                info->sline_real=sline_real;
                err_msg(info,"unterminated comment");
                break;
            }
            else {
                p++;
            }
        }
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(*p==47&&*(p+1)==47) {
        p+=2;
        while(1) {
            if(*p==10) {
                p++;
                sline++;
                sline_real++;
                info->p=p;
                info->sline=sline;
                info->sline_real=sline_real;
                if(skip_space_after) {
                    skip_spaces_and_lf2(info);
                }
                break;
            }
            else if(*p==13) {
                p++;
                if(*p==10) {
                    p++;
                }
                sline++;
                sline_real++;
                info->p=p;
                info->sline=sline;
                info->sline_real=sline_real;
                if(skip_space_after) {
                    skip_spaces_and_lf2(info);
                }
                break;
            }
            else if(*p==0) {
                info->p=p;
                info->sline=sline;
                info->sline_real=sline_real;
                break;
            }
            else {
                p++;
            }
        }
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

static void skip_spaces_core(_Bool  skip_lf  , _Bool  parse_sharp_after  , _Bool  stop_at_line_comment  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "skip_spaces_core"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    int sline;
    int sline_real;
    int nest;
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&nest, 0, sizeof(nest));
    p=info->p;
    sline=info->sline;
    sline_real=info->sline_real;
    while((_Bool)1) {
        if(*p==32||*p==9) {
            p++;
        }
        else if(skip_lf&&*p==13) {
            p++;
            if(*p==10) {
                p++;
            }
            sline++;
            sline_real++;
        }
        else if(skip_lf&&*p==10) {
            p++;
            sline++;
            sline_real++;
        }
        else if(*p==47&&*(p+1)==42) {
            nest=0;
            while((_Bool)1) {
                if(*p==47&&*(p+1)==42) {
                    p+=2;
                    nest++;
                }
                else if(*p==42&&*(p+1)==47) {
                    p+=2;
                    nest--;
                    if(nest==0) {
                        break;
                    }
                }
                else if(*p==10) {
                    p++;
                    sline++;
                    sline_real++;
                }
                else if(*p==13) {
                    p++;
                    if(*p==10) {
                        p++;
                    }
                    sline++;
                    sline_real++;
                }
                else if(*p==0) {
                    info->p=p;
                    info->sline=sline;
                    info->sline_real=sline_real;
                    err_msg(info,"unterminated comment");
                    break;
                }
                else {
                    p++;
                }
            }
        }
        else if(*p==47&&*(p+1)==47) {
            p+=2;
            while(*p&&*p!=10&&*p!=13) {
                p++;
            }
            if(skip_lf) {
                if(*p==10) {
                    p++;
                    sline++;
                    sline_real++;
                }
                else if(*p==13) {
                    p++;
                    if(*p==10) {
                        p++;
                    }
                    sline++;
                    sline_real++;
                }
            }
            if(stop_at_line_comment) {
                break;
            }
        }
        else {
            break;
        }
    }
    info->p=p;
    info->sline=sline;
    info->sline_real=sline_real;
    if(parse_sharp_after) {
        if(*info->p==35) {
            parse_sharp_v5(info);
        }
        else if(*info->p==95&&parsecmp("__extension__",info)) {
            parse_sharp_v5(info);
        }
    }
    neo_current_frame = fr.prev;
}

void skip_spaces_and_lf(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "skip_spaces_and_lf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    skip_spaces_core((_Bool)1,(_Bool)1,(_Bool)0,info);
    neo_current_frame = fr.prev;
}

void skip_spaces_and_lf2(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "skip_spaces_and_lf2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    skip_spaces_core((_Bool)1,(_Bool)0,(_Bool)0,info);
    neo_current_frame = fr.prev;
}

void skip_spaces_and_tabs(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "skip_spaces_and_tabs"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    skip_spaces_core((_Bool)0,(_Bool)0,(_Bool)1,info);
    neo_current_frame = fr.prev;
}

static _Bool  is_number_token(char* token)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "is_number_token"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    memset(&p, 0, sizeof(p));
    if(token==((void*)0)||*token==0) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    p=token;
    while(*p) {
        if(!(((unsigned char)(*p))>=48&&((unsigned char)(*p))<=57)) {
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        p++;
    }
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static char*  pack_stack_make_entry(char*  id  , char*  pragma  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "pack_stack_make_entry"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%s\t%s",id,pragma))), "05parse.nc", 599, 52);
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 599, 53));
    (pragma = come_decrement_ref_count(pragma, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 599, 54));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 599, 55));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 599, 56));
    return __result_obj__0;
}

static char*  pack_stack_entry_id(char* entry)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "pack_stack_entry_id"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    memset(&p, 0, sizeof(p));
    memset(&buf, 0, sizeof(buf));
    if(entry==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "05parse.nc", 605, 57);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 605, 58));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 605, 59));
        return __result_obj__0;
    }
    p=strchr(entry,9);
    if(p==((void*)0)) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "05parse.nc", 610, 60);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 610, 61));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 610, 62));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "05parse.nc", 613, 63, "struct buffer* "), "05parse.nc", 613, 64)), "05parse.nc", 613, 65);
    buffer_append(buf,entry,p-entry);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "05parse.nc", 615, 66);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "05parse.nc}", 615, 67);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 615, 68));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 615, 69));
    return __result_obj__0;
}

static char*  pack_stack_entry_pragma(char* entry)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "pack_stack_entry_pragma"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    if(entry==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "05parse.nc", 621, 70);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 621, 71));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 621, 72));
        return __result_obj__0;
    }
    p=strchr(entry,9);
    if(p==((void*)0)) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "05parse.nc", 626, 73);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 626, 74));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 626, 75));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%s",p+1))), "05parse.nc", 629, 76);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 629, 77));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "05parse.nc", 629, 78));
    return __result_obj__0;
}

static void apply_pack_pragma_state(char*  pragma_line  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "apply_pack_pragma_state"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj3;
    char*  __dec_obj4  ;
    struct buffer*  compact_buf  ;
    char* p;
    char*  compact  ;
    int lparen_pos;
    int rparen_pos;
    int compact_len;
    int i;
    char d;
    char*  __dec_obj5  ;
    struct list$1char$ph* tokens;
    int i_0;
    struct buffer*  tok  ;
    char d_1;
    int tokens_len;
    void* __right_value2 = (void*)0;
    char*  op  ;
    char*  push_id  ;
    char*  push_num  ;
    int i_4;
    char*  tok2  ;
    char*  __dec_obj9  ;
    char*  __dec_obj10  ;
    char*  __dec_obj11  ;
    char*  pop_id  ;
    char*  pop_num  ;
    int i_5;
    char*  tok2_6  ;
    char*  __dec_obj12  ;
    char*  __dec_obj13  ;
    int found;
    int pragma_pack_stack_len;
    int i_7;
    char*  stack_id  ;
    char*  __dec_obj14  ;
    int len;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    char*  __dec_obj18  ;
    memset(&compact_buf, 0, sizeof(compact_buf));
    memset(&p, 0, sizeof(p));
    memset(&compact, 0, sizeof(compact));
    memset(&lparen_pos, 0, sizeof(lparen_pos));
    memset(&rparen_pos, 0, sizeof(rparen_pos));
    memset(&compact_len, 0, sizeof(compact_len));
    memset(&i, 0, sizeof(i));
    memset(&d, 0, sizeof(d));
    memset(&tokens, 0, sizeof(tokens));
    memset(&i_0, 0, sizeof(i_0));
    memset(&tok, 0, sizeof(tok));
    memset(&d_1, 0, sizeof(d_1));
    memset(&tokens_len, 0, sizeof(tokens_len));
    memset(&op, 0, sizeof(op));
    memset(&push_id, 0, sizeof(push_id));
    memset(&push_num, 0, sizeof(push_num));
    memset(&i_4, 0, sizeof(i_4));
    memset(&tok2, 0, sizeof(tok2));
    memset(&pop_id, 0, sizeof(pop_id));
    memset(&pop_num, 0, sizeof(pop_num));
    memset(&i_5, 0, sizeof(i_5));
    memset(&tok2_6, 0, sizeof(tok2_6));
    memset(&found, 0, sizeof(found));
    memset(&pragma_pack_stack_len, 0, sizeof(pragma_pack_stack_len));
    memset(&i_7, 0, sizeof(i_7));
    memset(&stack_id, 0, sizeof(stack_id));
    memset(&len, 0, sizeof(len));
    if(info->pragma_pack_stack==((void*)0)) {
        __dec_obj3=info->pragma_pack_stack,
        info->pragma_pack_stack=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05parse.nc", 635, 79, "struct list$1char$ph*"), "05parse.nc", 635, 85)), "05parse.nc", 2, 88);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "05parse.nc", 2, 87);
    }
    if(info->pragma==((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj4=info->pragma,
        info->pragma=(char*)come_increment_ref_count(xsprintf(""), "05parse.nc", 638, 90);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 638, 89);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    compact_buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "05parse.nc", 641, 91, "struct buffer* "), "05parse.nc", 641, 92)), "05parse.nc", 641, 93);
    p=pragma_line;
    while(*p) {
        if(*p!=32&&*p!=9&&*p!=10&&*p!=13) {
            buffer_append_char(compact_buf,*p);
        }
        p++;
    }
    __right_value0 = (void*)0;
    compact=(char* )come_increment_ref_count(buffer_to_string(compact_buf), "05parse.nc", 650, 94);
    lparen_pos=-1;
    rparen_pos=-1;
    compact_len=string_length(compact);
    for(i=0    ;i<compact_len;i++){
        d=compact[i];
        if(d==40&&lparen_pos==-1) {
            lparen_pos=i;
        }
        if(d==41) {
            rparen_pos=i;
        }
    }
    if(lparen_pos==-1||rparen_pos==-1) {
                (pragma_line = come_decrement_ref_count(pragma_line, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 665, 95));
        come_call_finalizer(buffer_finalize, compact_buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "05parse.nc}", 665, 96);
        (compact = come_decrement_ref_count(compact, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 665, 97));
        neo_current_frame = fr.prev;
        return;
    }
    if(rparen_pos==lparen_pos+1) {
        __right_value0 = (void*)0;
        __dec_obj5=info->pragma,
        info->pragma=(char*)come_increment_ref_count(xsprintf(""), "05parse.nc", 672, 99);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 672, 98);
                (pragma_line = come_decrement_ref_count(pragma_line, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 673, 100));
        come_call_finalizer(buffer_finalize, compact_buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "05parse.nc}", 673, 101);
        (compact = come_decrement_ref_count(compact, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 673, 102));
        neo_current_frame = fr.prev;
        return;
    }
    if(rparen_pos<lparen_pos+1) {
                (pragma_line = come_decrement_ref_count(pragma_line, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 677, 103));
        come_call_finalizer(buffer_finalize, compact_buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "05parse.nc}", 677, 104);
        (compact = come_decrement_ref_count(compact, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 677, 105));
        neo_current_frame = fr.prev;
        return;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    tokens=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05parse.nc", 680, 106, "struct list$1char$ph*"), "05parse.nc", 680, 107)), "05parse.nc", 680, 108);
    {
        i_0=lparen_pos+1;
        while(i_0<rparen_pos) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            tok=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "05parse.nc", 684, 109, "struct buffer* "), "05parse.nc", 684, 110)), "05parse.nc", 684, 111);
            while(i_0<rparen_pos) {
                d_1=compact[i_0];
                if(d_1==44) {
                    break;
                }
                buffer_append_char(tok,d_1);
                i_0++;
            }
            __right_value0 = (void*)0;
            list$1char$ph_push_back(tokens,(char* )come_increment_ref_count(buffer_to_string(tok), "05parse.nc", 693, 126));
            if(i_0<rparen_pos&&compact[i_0]==44) {
                i_0++;
            }
            come_call_finalizer(buffer_finalize, tok, (void*)0, (void*)0, 0, 0, 0, (void*)0, "05parse.nc}", 698, 127);
        }
    }
    tokens_len=list$1char$ph_length(tokens);
    if(tokens_len==0) {
                (pragma_line = come_decrement_ref_count(pragma_line, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 701, 128));
        come_call_finalizer(buffer_finalize, compact_buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "05parse.nc}", 701, 129);
        (compact = come_decrement_ref_count(compact, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 701, 130));
        come_call_finalizer(list$1char$ph$p_finalize, tokens, (void*)0, (void*)0, 0, 0, 0, (void*)0, "05parse.nc}", 701, 131);
        neo_current_frame = fr.prev;
        return;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    op=(char* )come_increment_ref_count((char* )come_memdup(((char* )(__right_value1=list$1char$ph_item(tokens,0,((char*)(__right_value0=xsprintf("")))))), "05parse.nc", 704, 138, "char* "), "05parse.nc", 704, 139);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 704, 140));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 704, 141));
    if(string_operator_equals(op,"push")) {
        __right_value0 = (void*)0;
        push_id=(char*)come_increment_ref_count(xsprintf(""), "05parse.nc", 707, 142);
        __right_value0 = (void*)0;
        push_num=(char*)come_increment_ref_count(xsprintf(""), "05parse.nc", 708, 143);
        for(i_4=1        ;i_4<tokens_len;i_4++){
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            tok2=(char* )come_increment_ref_count((char* )come_memdup(((char* )(__right_value1=list$1char$ph_item(tokens,i_4,((char*)(__right_value0=xsprintf("")))))), "05parse.nc", 711, 144, "char* "), "05parse.nc", 711, 145);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 711, 146));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 711, 147));
            if(is_number_token(tok2)) {
                __right_value0 = (void*)0;
                __dec_obj9=push_num,
                push_num=(char* )come_increment_ref_count((char* )come_memdup(tok2, "05parse.nc", 713, 148, "char* "), "05parse.nc", 713, 150);
                __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 713, 149);
            }
            else if(string_operator_equals(push_id,"")) {
                __right_value0 = (void*)0;
                __dec_obj10=push_id,
                push_id=(char* )come_increment_ref_count((char* )come_memdup(tok2, "05parse.nc", 716, 151, "char* "), "05parse.nc", 716, 153);
                __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 716, 152);
            }
            (tok2 = come_decrement_ref_count(tok2, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 720, 154));
        }
        __right_value0 = (void*)0;
        list$1char$ph_push_back(info->pragma_pack_stack,(char* )come_increment_ref_count(pack_stack_make_entry((char* )come_increment_ref_count(push_id, "05parse.nc", 720, 155),(char* )come_increment_ref_count(info->pragma, "05parse.nc", 720, 156)), "05parse.nc", 720, 157));
        if(string_operator_not_equals(push_num,"")) {
            __dec_obj11=info->pragma,
            info->pragma=(char* )come_increment_ref_count(pragma_line, "05parse.nc", 723, 159);
            __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 723, 158);
        }
        (push_id = come_decrement_ref_count(push_id, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 773, 160));
        (push_num = come_decrement_ref_count(push_num, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 773, 161));
    }
    else if(string_operator_equals(op,"pop")) {
        __right_value0 = (void*)0;
        pop_id=(char*)come_increment_ref_count(xsprintf(""), "05parse.nc", 727, 162);
        __right_value0 = (void*)0;
        pop_num=(char*)come_increment_ref_count(xsprintf(""), "05parse.nc", 728, 163);
        for(i_5=1        ;i_5<tokens_len;i_5++){
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            tok2_6=(char* )come_increment_ref_count((char* )come_memdup(((char* )(__right_value1=list$1char$ph_item(tokens,i_5,((char*)(__right_value0=xsprintf("")))))), "05parse.nc", 731, 164, "char* "), "05parse.nc", 731, 165);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 731, 166));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 731, 167));
            if(is_number_token(tok2_6)) {
                __right_value0 = (void*)0;
                __dec_obj12=pop_num,
                pop_num=(char* )come_increment_ref_count((char* )come_memdup(tok2_6, "05parse.nc", 733, 168, "char* "), "05parse.nc", 733, 170);
                __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 733, 169);
            }
            else if(string_operator_equals(pop_id,"")) {
                __right_value0 = (void*)0;
                __dec_obj13=pop_id,
                pop_id=(char* )come_increment_ref_count((char* )come_memdup(tok2_6, "05parse.nc", 736, 171, "char* "), "05parse.nc", 736, 173);
                __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 736, 172);
            }
            (tok2_6 = come_decrement_ref_count(tok2_6, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 740, 174));
        }
        if(string_operator_not_equals(pop_id,"")) {
            found=-1;
            pragma_pack_stack_len=list$1char$ph_length(info->pragma_pack_stack);
            for(i_7=0            ;i_7<pragma_pack_stack_len;i_7++){
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                stack_id=(char* )come_increment_ref_count(pack_stack_entry_id(((char* )(__right_value1=list$1char$ph_item(info->pragma_pack_stack,i_7,((char*)(__right_value0=xsprintf(""))))))), "05parse.nc", 744, 175);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 744, 176));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 744, 177));
                if(string_operator_equals(stack_id,pop_id)) {
                    found=i_7;
                }
                (stack_id = come_decrement_ref_count(stack_id, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 749, 178));
            }
            if(found>=0) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj14=info->pragma,
                info->pragma=(char* )come_increment_ref_count(pack_stack_entry_pragma(((char* )(__right_value1=list$1char$ph_item(info->pragma_pack_stack,found,((char*)(__right_value0=xsprintf(""))))))), "05parse.nc", 750, 180);
                __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 750, 179);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 750, 181));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 750, 182));
                list$1char$ph_delete(info->pragma_pack_stack,found,pragma_pack_stack_len);
            }
        }
        else {
            len=list$1char$ph_length(info->pragma_pack_stack);
            if(len>0) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj15=info->pragma,
                info->pragma=(char* )come_increment_ref_count(pack_stack_entry_pragma(((char* )(__right_value1=list$1char$ph_item(info->pragma_pack_stack,len-1,((char*)(__right_value0=xsprintf(""))))))), "05parse.nc", 757, 188);
                __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 757, 187);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 757, 189));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "05parse.nc", 757, 190));
                list$1char$ph_delete(info->pragma_pack_stack,len-1,len);
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj16=info->pragma,
                info->pragma=(char*)come_increment_ref_count(xsprintf(""), "05parse.nc", 761, 192);
                __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 761, 191);
            }
        }
        if(string_operator_not_equals(pop_num,"")) {
            __right_value0 = (void*)0;
            __dec_obj17=info->pragma,
            info->pragma=(char* )come_increment_ref_count(xsprintf("#pragma pack(push, %s)\n",pop_num), "05parse.nc", 766, 194);
            __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 766, 193);
        }
        (pop_id = come_decrement_ref_count(pop_id, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 773, 195));
        (pop_num = come_decrement_ref_count(pop_num, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 773, 196));
    }
    else if(tokens_len==1&&is_number_token(op)) {
        __right_value0 = (void*)0;
        __dec_obj18=info->pragma,
        info->pragma=(char* )come_increment_ref_count(xsprintf("#pragma pack(push, %s)\n",op), "05parse.nc", 771, 198);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 771, 197);
    }
    (pragma_line = come_decrement_ref_count(pragma_line, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 775, 199));
    come_call_finalizer(buffer_finalize, compact_buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "05parse.nc}", 775, 200);
    (compact = come_decrement_ref_count(compact, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 775, 201));
    come_call_finalizer(list$1char$ph$p_finalize, tokens, (void*)0, (void*)0, 0, 0, 0, (void*)0, "05parse.nc}", 775, 202);
    (op = come_decrement_ref_count(op, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 775, 203));
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 80);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 769, 83);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 769, 84);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 82);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 81));
    }
            neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 86);
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj6  ;
    struct list_item$1char$ph* litem_2;
    char*  __dec_obj7  ;
    struct list_item$1char$ph* litem_3;
    char*  __dec_obj8  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_2, 0, sizeof(litem_2));
    memset(&litem_3, 0, sizeof(litem_3));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1674, 112));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1678, 113, "struct list_item$1char$ph*"))), "./neo-c.h", 1678, 114);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj6=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1682, 116);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1682, 115);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1688, 117, "struct list_item$1char$ph*"))), "./neo-c.h", 1688, 118);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj7=litem_2->item,
        litem_2->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1692, 120);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1692, 119);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1698, 121, "struct list_item$1char$ph*"))), "./neo-c.h", 1698, 122);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj8=litem_3->item,
        litem_3->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1702, 124);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1702, 123);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1710, 125));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int list$1char$ph_length(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
        neo_current_frame = fr.prev;
}

static char*  list$1char$ph_item(struct list$1char$ph* self, int position, char*  default_value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_item"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 1806, 132);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 1806, 133));
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "./neo-c.h", 1817, 134);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 1817, 135));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 1823, 136);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 1823, 137));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_delete"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_8;
    int i_9;
    struct list_item$1char$ph* prev_it_10;
    struct list_item$1char$ph* it_11;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_12;
    struct list_item$1char$ph* prev_it_13;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_8, 0, sizeof(it_8));
    memset(&i_9, 0, sizeof(i_9));
    memset(&prev_it_10, 0, sizeof(prev_it_10));
    memset(&it_11, 0, sizeof(it_11));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_12, 0, sizeof(i_12));
    memset(&prev_it_13, 0, sizeof(prev_it_13));
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2001, 184);
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
        it_8=self->head;
        i_9=0;
        while(it_8!=((void*)0)) {
            if(i_9==head) {
                self->tail=it_8->prev;
                self->tail->next=((void*)0);
            }
            if(i_9>=head) {
                prev_it_10=it_8;
                it_8=it_8->next;
                i_9++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2031, 185);
                self->len--;
            }
            else {
                it_8=it_8->next;
                i_9++;
            }
        }
    }
    else {
        it_11=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_12=0;
        while(it_11!=((void*)0)) {
            if(i_12==head) {
                head_prev_it=it_11->prev;
            }
            if(i_12==tail) {
                tail_it=it_11;
            }
            if(i_12>=head&&i_12<tail) {
                prev_it_13=it_11;
                it_11=it_11->next;
                i_12++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_13, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2064, 186);
                self->len--;
            }
            else {
                it_11=it_11->next;
                i_12++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1923, 183);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void parse_sharp_v5(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parse_sharp_v5"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* head;
    int len;
    void* __right_value0 = (void*)0;
    char* mem;
    char*  pragma_line  ;
    void* __right_value1 = (void*)0;
    int line;
    char*  fname_str  ;
    char* head_15;
    int len_16;
    char* mem_17;
    char*  __dec_obj19  ;
    char*  __dec_obj20  ;
    int line_18;
    char*  fname_str_19  ;
    char* head_20;
    int len_21;
    char* mem_22;
    char*  __dec_obj21  ;
    char*  __dec_obj22  ;
    memset(&head, 0, sizeof(head));
    memset(&len, 0, sizeof(len));
    memset(&mem, 0, sizeof(mem));
    memset(&pragma_line, 0, sizeof(pragma_line));
    memset(&line, 0, sizeof(line));
    memset(&fname_str, 0, sizeof(fname_str));
    memset(&head_15, 0, sizeof(head_15));
    memset(&len_16, 0, sizeof(len_16));
    memset(&mem_17, 0, sizeof(mem_17));
    memset(&line_18, 0, sizeof(line_18));
    memset(&fname_str_19, 0, sizeof(fname_str_19));
    memset(&head_20, 0, sizeof(head_20));
    memset(&len_21, 0, sizeof(len_21));
    memset(&mem_22, 0, sizeof(mem_22));
    while(1) {
        if(*info->p==35) {
            info->p++;
            skip_spaces_and_tabs(info);
            if(parsecmp("pragma",info)) {
                head=info->p;
                while(*info->p&&*info->p!=10) {
                    info->p++;
                }
                len=info->p-head;
                mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+2)), "05parse.nc", 789, 204, "char*"), "05parse.nc", 789, 205);
                mem[0]=35;
                memcpy(mem+1,head,len);
                if(*info->p==10) {
                    mem[len+1]=10;
                    mem[len+2-1]=0;
                    info->p++;
                    info->sline++;
                    info->sline_real++;
                }
                else {
                    mem[len+1]=0;
                }
                pragma_line=(char*)come_increment_ref_count(mem, "05parse.nc", 804, 206);
                if(string_index(pragma_line,"pack(",-1)!=-1) {
                    apply_pack_pragma_state((char* )come_increment_ref_count(pragma_line, "05parse.nc", 806, 207),info);
                }
                else if(string_index(pragma_line,"STDC",-1)!=-1&&string_index(pragma_line,"FENV_ACCESS",-1)!=-1) {
                    static int preserved_pragma_id=0;
                    __right_value0 = (void*)0;
                    map$2char$phbuffer$ph_insert(info->c_include_definition,(char* )come_increment_ref_count(xsprintf("__pragma_stdc_fenv_access%d",++preserved_pragma_id), "05parse.nc", 810, 229),(struct buffer* )come_increment_ref_count(charp_to_buffer(pragma_line), "05parse.nc", 810, 230),(_Bool)0);
                }
                skip_spaces_and_lf2(info);
                (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 948, 231));
                (pragma_line = come_decrement_ref_count(pragma_line, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 948, 232));
            }
            else if(parsecmp("line",info)) {
                info->p+=4;
                skip_spaces_and_tabs(info);
                line=0;
                fname_str=((void*)0);
                if(!(((unsigned char)(*info->p))>=48&&((unsigned char)(*info->p))<=57)) {
                    err_msg(info,"invalid #line directive");
                                        (fname_str = come_decrement_ref_count(fname_str, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 823, 233));
                    neo_current_frame = fr.prev;
                    return;
                }
                while((((unsigned char)(*info->p))>=48&&((unsigned char)(*info->p))<=57)) {
                    line=line*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_tabs(info);
                if(*info->p==34) {
                    info->p++;
                    head_15=info->p;
                    while(*info->p&&*info->p!=34) {
                        info->p++;
                    }
                    if(*info->p==0) {
                        err_msg(info,"unterminated #line file name");
                                                (fname_str = come_decrement_ref_count(fname_str, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 841, 234));
                        neo_current_frame = fr.prev;
                        return;
                    }
                    len_16=info->p-head_15;
                    __right_value0 = (void*)0;
                    mem_17=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_16+1)), "05parse.nc", 844, 235, "char*"), "05parse.nc", 844, 236);
                    memcpy(mem_17,head_15,len_16);
                    mem_17[len_16]=0;
                    __dec_obj19=fname_str,
                    fname_str=(char*)come_increment_ref_count(mem_17, "05parse.nc", 847, 238);
                    __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 847, 237);
                    info->p++;
                    while(*info->p&&*info->p!=10) {
                        info->p++;
                    }
                    if(*info->p==10) {
                        info->p++;
                        info->sline_real++;
                    }
                    (mem_17 = come_decrement_ref_count(mem_17, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 859, 239));
                }
                if(line>0) {
                    info->sline=line;
                    info->sline_real=line;
                }
                else {
                    info->sline=line;
                    info->sline_real=line;
                }
                if(fname_str&&string_length(fname_str)>0) {
                    __dec_obj20=info->sname,
                    info->sname=(char* )come_increment_ref_count(fname_str, "05parse.nc", 869, 241);
                    __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 869, 240);
                }
                skip_spaces_and_tabs(info);
                (fname_str = come_decrement_ref_count(fname_str, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 948, 242));
            }
            else if((((unsigned char)(*info->p))>=48&&((unsigned char)(*info->p))<=57)) {
                line_18=0;
                fname_str_19=((void*)0);
                while((((unsigned char)(*info->p))>=48&&((unsigned char)(*info->p))<=57)) {
                    line_18=line_18*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_tabs(info);
                if(*info->p==34) {
                    info->p++;
                    head_20=info->p;
                    while(*info->p&&*info->p!=34) {
                        info->p++;
                    }
                    if(*info->p==0) {
                        err_msg(info,"unterminated #line file name");
                                                (fname_str_19 = come_decrement_ref_count(fname_str_19, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 893, 243));
                        neo_current_frame = fr.prev;
                        return;
                    }
                    len_21=info->p-head_20;
                    __right_value0 = (void*)0;
                    mem_22=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_21+1)), "05parse.nc", 896, 244, "char*"), "05parse.nc", 896, 245);
                    memcpy(mem_22,head_20,len_21);
                    mem_22[len_21]=0;
                    __dec_obj21=fname_str_19,
                    fname_str_19=(char*)come_increment_ref_count(mem_22, "05parse.nc", 899, 247);
                    __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 899, 246);
                    info->p++;
                    while(*info->p&&*info->p!=10) {
                        info->p++;
                    }
                    if(*info->p==10) {
                        info->p++;
                        info->sline_real++;
                    }
                    (mem_22 = come_decrement_ref_count(mem_22, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 917, 248));
                }
                info->sline=line_18;
                info->sline_real=line_18;
                if(fname_str_19&&string_length(fname_str_19)>0) {
                    __dec_obj22=info->sname,
                    info->sname=(char* )come_increment_ref_count(fname_str_19, "05parse.nc", 922, 250);
                    __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "05parse.nc", 922, 249);
                }
                skip_spaces_and_tabs(info);
                (fname_str_19 = come_decrement_ref_count(fname_str_19, (void*)0, (void*)0, 0, 0, (void*)0, "05parse.nc", 948, 251));
            }
            else if(*info->p==34) {
                info->p++;
                while(*info->p&&*info->p!=34) {
                    info->p++;
                }
                if(*info->p==0) {
                    err_msg(info,"unterminated #include file name");
                                        neo_current_frame = fr.prev;
                    return;
                }
                info->p++;
                while(*info->p&&*info->p!=10) {
                    info->p++;
                }
                if(*info->p==10) {
                    info->p++;
                    info->sline_real++;
                }
            }
            skip_spaces_and_lf2(info);
        }
        else if(skip_comment(info,(_Bool)1)) {
        }
        else if(parsecmp("__extension__",info)) {
            info->p+=13;
            skip_spaces_and_lf2(info);
        }
        else {
            break;
        }
    }
    neo_current_frame = fr.prev;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  item  , _Bool  by_pointer  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_insert"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct map$2char$phbuffer$ph* __result_obj__0;
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4007, 208));
        come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4007, 209);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phbuffer$ph_rehash(self);
    }
    add_to_key_list=(_Bool)0;
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right4 = (self->size); if(__neo_div_right4 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right4; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                map$2char$phbuffer$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4026, 220));
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4027, 221);
                }
                else {
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4033, 222);
                    self->items[it]=(struct buffer* )come_increment_ref_count(item, "./neo-c.h", 4034, 223);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4057, 224);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct buffer* )come_increment_ref_count(item, "./neo-c.h", 4063, 225);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4077, 226));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4080, 227));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4080, 228);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_rehash"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct buffer**  items  ;
    unsigned int* hashes;
    _Bool*  item_existance  ;
    int i;
    int len;
    int i_14;
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
    memset(&i_14, 0, sizeof(i_14));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&n, 0, sizeof(n));
    old_size=self->size;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3925, 210, "char** "))), "./neo-c.h", 3925, 211);
    __right_value0 = (void*)0;
    items=(struct buffer** )come_increment_ref_count(((struct buffer** )(__right_value0=(struct buffer* *)come_calloc(1, sizeof(struct buffer* )*(1*(size)), "./neo-c.h", 3926, 212, "struct buffer** "))), "./neo-c.h", 3926, 213);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3927, 214, "unsigned int*"))), "./neo-c.h", 3927, 215);
    __right_value0 = (void*)0;
    item_existance=(_Bool* )come_increment_ref_count(((_Bool* )(__right_value0=(_Bool *)come_calloc(1, sizeof(_Bool )*(1*(size)), "./neo-c.h", 3928, 216, "_Bool* "))), "./neo-c.h", 3928, 217);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(i_14=0    ;i_14<old_size;i_14++){
        if(!self->item_existance[i_14]) {
            continue;
        }
        key_hash=self->hashes[i_14];
        hash=({ __typeof__(size) __neo_div_right3 = (size); if(__neo_div_right3 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right3; });
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
                keys[n]=self->keys[i_14];
                items[n]=self->items[i_14];
                len++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3970, 218));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3971, 219));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phbuffer$ph_remove_ordered_entry(struct map$2char$phbuffer$ph* self, char*  key  , _Bool  by_pointer  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_remove_ordered_entry"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int pos;
    memset(&pos, 0, sizeof(pos));
    pos=map$2char$phbuffer$ph_key_position(self,key,by_pointer);
    if(pos>=0) {
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phbuffer$ph_key_position(struct map$2char$phbuffer$ph* self, char*  key  , _Bool  by_pointer  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_key_position"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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

void skip_paren(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "skip_paren"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int nest;
    memset(&nest, 0, sizeof(nest));
    nest=0;
    while((_Bool)1) {
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest++;
        }
        else if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest--;
            if(nest==0) {
                break;
            }
        }
        else if(*info->p==0) {
            err_msg(info,"invalid the source end. require )");
            exit(1);
        }
        else {
            info->p++;
        }
    }
    neo_current_frame = fr.prev;
}

