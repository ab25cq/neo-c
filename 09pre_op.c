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

struct sRefferenceNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sParenBlockNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* paren_block;
};

struct sDerefferenceNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
    _Bool  mQuote  ;
};

struct sLogicalDenial
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sLogicalDenial2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sReverseNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sMinusNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sPlusPlusNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sMinusMinusNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sNormalBlock
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sBlock*  mBlock  ;
    _Bool  clang  ;
    _Bool  unsafe_block  ;
};

struct sComplement
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sParenNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
};

struct sCastNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  mType  ;
    struct sNode* mLeft;
};

struct sArrayInitializer
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  initializer  ;
    struct sType*  type_  ;
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
char* parsecmp_tail(const char* p2, struct sInfo*  info  );
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
struct sFun*  compile_uniq_function(struct sFun*  fun  , struct sInfo*  info  );
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char*  fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo*  info  );
struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  );
struct sNode* post_position_operator(struct sNode* node, struct sInfo*  info  );
_Bool  create_method_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sInfo*  info  );
_Bool  is_ref_or_optional_type_for_operator(struct sType*  type  , struct sInfo*  info  );
_Bool  reject_ref_optional_unary_operator(const char* op_name, struct CVALUE*  value  , struct sInfo*  info  );
_Bool  reject_ref_optional_binary_operator(const char* op_name, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  );
void caller_begin(struct sInfo*  info  );
void caller_end(struct sInfo*  info  );
void skip_paren(struct sInfo*  info  );
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
_Bool  operator_overload_fun_self(struct sType*  type  , const char* fun_name, struct sNode* node, struct CVALUE*  left_value  , struct sInfo*  info  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  );
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$$p_clone(struct list$1int$* self);
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static struct list$1int$* list$1int$_add(struct list$1int$* self, int item);
static void list$1int$_finalize(struct list$1int$* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo*  info  );
char*  sRefferenceNode_kind(struct sRefferenceNode* self);
struct sNode* sRefferenceNode_left_value(struct sRefferenceNode* self);
_Bool  sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo*  info  );
char*  sParenBlockNode_kind(struct sParenBlockNode* self);
_Bool  sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo*  info  );
static void sParenBlockNode_finalize(struct sParenBlockNode* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool  list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool  quote  , struct sInfo*  info  );
char*  sDerefferenceNode_kind(struct sDerefferenceNode* self);
struct sNode* sDerefferenceNode_left_value(struct sDerefferenceNode* self);
_Bool  sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo*  info  );
static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo*  info  );
char*  sLogicalDenial_kind(struct sLogicalDenial* self);
_Bool  sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo*  info  );
static void sLogicalDenial_finalize(struct sLogicalDenial* self);
struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo*  info  );
char*  sLogicalDenial2_kind(struct sLogicalDenial2* self);
_Bool  sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo*  info  );
static void sLogicalDenial2_finalize(struct sLogicalDenial2* self);
struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo*  info  );
char*  sReverseNode_kind(struct sReverseNode* self);
_Bool  sReverseNode_compile(struct sReverseNode* self, struct sInfo*  info  );
static void sReverseNode_finalize(struct sReverseNode* self);
struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo*  info  );
char*  sMinusNode2_kind(struct sMinusNode2* self);
_Bool  sMinusNode2_compile(struct sMinusNode2* self, struct sInfo*  info  );
static void sMinusNode2_finalize(struct sMinusNode2* self);
struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo*  info  );
char*  sPlusPlusNode2_kind(struct sPlusPlusNode2* self);
_Bool  sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo*  info  );
static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo*  info  );
char*  sMinusMinusNode2_kind(struct sMinusMinusNode2* self);
_Bool  sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo*  info  );
static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock*  block  , _Bool  clang  , _Bool  unsafe_block  , struct sInfo*  info  );
_Bool  sNormalBlock_terminated(struct sNormalBlock* self);
char*  sNormalBlock_kind(struct sNormalBlock* self);
_Bool  sNormalBlock_compile(struct sNormalBlock* self, struct sInfo*  info  );
static struct sBlock*  sBlock_clone(struct sBlock*  self  );
static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool  map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool  by_pointer  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool  by_pointer  );
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph_remove_ordered_entry(struct map$2char$phsVar$ph* self, char*  key  , _Bool  by_pointer  );
static int map$2char$phsVar$ph_key_position(struct map$2char$phsVar$ph* self, char*  key  , _Bool  by_pointer  );
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct sVar*  sVar_clone(struct sVar*  self  );
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sBlock_finalize(struct sBlock*  self  );
static void sNormalBlock_finalize(struct sNormalBlock* self);
struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo*  info  );
char*  sComplement_kind(struct sComplement* self);
_Bool  sComplement_compile(struct sComplement* self, struct sInfo*  info  );
static void sComplement_finalize(struct sComplement* self);
struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo*  info  );
char*  sParenNode_kind(struct sParenNode* self);
_Bool  sParenNode_compile(struct sParenNode* self, struct sInfo*  info  );
static void sParenNode_finalize(struct sParenNode* self);
struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType*  type  , struct sNode* left, struct sInfo*  info  );
char*  sCastNode_kind(struct sCastNode* self);
_Bool  sCastNode_compile(struct sCastNode* self, struct sInfo*  info  );
static void sCastNode_finalize(struct sCastNode* self);
struct sNode* parse_normal_block(_Bool  clang  , _Bool  unsafe_block  , struct sInfo*  info  );
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo*  info  );
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
struct sNode* cast_node(struct sType*  type  , struct sNode* node, struct sInfo*  info  );
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
struct sNode* reffence_node(struct sNode* value, struct sInfo*  info  );
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
struct sNode* reverse_node(struct sNode* value, struct sInfo*  info  );
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct sType*  type_  , char*  initializer  , struct sInfo*  info  );
char*  sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool  sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo*  info  );
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
struct sNode* create_defference_node(struct sNode* value, _Bool  quote  , struct sInfo*  info  );
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
struct sNode* pre_position_operator(struct sInfo*  info  );
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sNode* expression_node_v97(struct sInfo*  info  );
// uniq global variable
// inline function

// body function
_Bool  operator_overload_fun_self(struct sType*  type  , const char* fun_name, struct sNode* node, struct CVALUE*  left_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "operator_overload_fun_self"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  __result_obj__0  ;
    struct sType*  generics_type  ;
    struct sType*  __dec_obj1  ;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj36  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj37  ;
    struct sType*  __dec_obj38  ;
    struct sClass*  klass  ;
    char*  class_name  ;
    struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1
;    char*  fun_name2  =0;
    struct sFun*  operator_fun  =0;
    struct sGenericsFun*  generics_fun  =0;
    _Bool  result  ;
    struct sRightValueObject*  right_value_object  ;
    struct sNode* obj;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node_10;
    _Bool  Value  ;
    memset(&generics_type, 0, sizeof(generics_type));
    memset(&type_, 0, sizeof(type_));
    memset(&klass, 0, sizeof(klass));
    memset(&class_name, 0, sizeof(class_name));
    memset(&result, 0, sizeof(result));
    memset(&right_value_object, 0, sizeof(right_value_object));
    memset(&obj, 0, sizeof(obj));
    memset(&params, 0, sizeof(params));
    memset(&node_10, 0, sizeof(node_10));
    memset(&Value, 0, sizeof(Value));
    if((charp_operator_equals(fun_name,"operator_plus_plus")||charp_operator_equals(fun_name,"operator_minus_minus"))&&reject_ref_optional_unary_operator(fun_name,left_value,info)) {
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 8, 1):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(type->mNoSolvedGenericsType) {
        __dec_obj1=generics_type,
        generics_type=(struct sType* )come_increment_ref_count(type->mNoSolvedGenericsType, "09pre_op.nc", 13, 35);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 13, 34);
    }
    else {
        __dec_obj36=generics_type,
        generics_type=(struct sType* )come_increment_ref_count(sType_clone(type), "09pre_op.nc", 16, 210);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 16, 209);
    }
    if(type->mNoSolvedGenericsType) {
        __right_value0 = (void*)0;
        __dec_obj37=type_,
        type_=(struct sType* )come_increment_ref_count(sType_clone(type->mNoSolvedGenericsType), "09pre_op.nc", 21, 212);
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 21, 211);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj38=type_,
        type_=(struct sType* )come_increment_ref_count(sType_clone(type), "09pre_op.nc", 24, 214);
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 24, 213);
    }
    klass=type_->mClass;
    class_name=(char* )come_increment_ref_count(klass->mName, "09pre_op.nc", 27, 215);
    __right_value0 = (void*)0;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,type_,info,(_Bool)0)));
    fun_name2=(char* )come_increment_ref_count(multiple_assign_var1->v1, "09pre_op.nc", 29, 216);
    operator_fun=multiple_assign_var1->v2;
    generics_fun=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 29, 218);
    result=(_Bool)0;
    if(operator_fun) {
        right_value_object=left_value->right_value_objects;
        if(right_value_object) {
            right_value_object->mFreed=(_Bool)1;
        }
        obj=(struct sNode*)come_increment_ref_count(node, "09pre_op.nc", 40, 219);
        __right_value0 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "09pre_op.nc", 41, 220, "struct list$1tuple2$2char$phsNode$ph$ph*"), "09pre_op.nc", 41, 228)), "09pre_op.nc", 41, 229);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "09pre_op.nc", 43, 244, "struct tuple2$2char$phsNode$ph"), "09pre_op.nc", 3, 254),(char* )come_increment_ref_count((char* )((void*)0), "09pre_op.nc", 3, 255),(struct sNode*)come_increment_ref_count(obj, "09pre_op.nc", 3, 256)), "09pre_op.nc", 43, 257));
        __right_value0 = (void*)0;
        node_10=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj, "09pre_op.nc", 45, 258),params,((void*)0),0,((void*)0),info,(_Bool)0), "09pre_op.nc", 45, 259);
        Value=node_compile(node_10,info);
        if(Value) {
            result=(_Bool)1;
        }
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 52, 260):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 52, 261);
        ((node_10) ? node_10 = come_decrement_ref_count(node_10, ((struct sNode*)node_10)->finalize, ((struct sNode*)node_10)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 52, 262):(void*)0);
    }
        __result_obj__0 = result;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 52, 263):(void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 52, 264);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 52, 265);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 52, 266));
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 52, 267));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 2);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 3);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 6);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 7);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 8):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 9):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 10));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 11));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 12));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 13));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 14));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 15));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 16));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 17));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 20);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 21);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 23);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 24);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 25);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 26));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 27);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 30);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 31);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 32):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 33);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 5);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 4);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 19);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 18):(void*)0);
    }
            neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 22);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 29);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 28));
    }
            neo_current_frame = fr.prev;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj2  ;
    struct sType*  __dec_obj3  ;
    struct list$1sType$ph* __dec_obj7;
    struct sType*  __dec_obj8  ;
    struct sNode* __dec_obj9;
    struct sNode* __dec_obj10;
    char*  __dec_obj11  ;
    char*  __dec_obj12  ;
    char*  __dec_obj13  ;
    char*  __dec_obj14  ;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    char*  __dec_obj18  ;
    struct list$1sNode$ph* __dec_obj22;
    struct list$1sNode$ph* __dec_obj23;
    struct list$1int$* __dec_obj24;
    struct list$1int$* __dec_obj25;
    struct sType*  __dec_obj26  ;
    char*  __dec_obj27  ;
    struct list$1sType$ph* __dec_obj28;
    struct list$1char$ph* __dec_obj32;
    struct sType*  __dec_obj33  ;
    struct sNode* __dec_obj34;
    struct list$1sNode$ph* __dec_obj35;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 36, "struct sType* "), "sType_clone", 5, 37);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 39);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 38);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 41);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 40);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 76, 71);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 70);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 73);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 72);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 82);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 81) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 84);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 83) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 85, "char* "), "sType_clone", 14, 87);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 86);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 88, "char* "), "sType_clone", 15, 90);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 89);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 91, "char* "), "sType_clone", 16, 93);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 92);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 94, "char* "), "sType_clone", 17, 96);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 95);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 97, "char* "), "sType_clone", 18, 99);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 98);
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
        __dec_obj16=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 100, "char* "), "sType_clone", 49, 102);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 101);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 103, "char* "), "sType_clone", 51, 105);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 104);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 106, "char* "), "sType_clone", 54, 108);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 107);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 15, 138);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 137);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 140);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 139);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 15, 160);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 159);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 162);
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 161);
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
        __dec_obj26=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 164);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 163);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 165, "char* "), "sType_clone", 67, 167);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 166);
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
        __dec_obj28=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 169);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 168);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 15, 201);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 200);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 203);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 202);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 205);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 204) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 207);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 206);
    }
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 208);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 42);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 43);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1572, 44, "struct list$1sType$ph*"), "./neo-c.h", 1572, 48)), "./neo-c.h", 1572, 49);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1577, 64));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1580, 65));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 66);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 67);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 68);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 45);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 46);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 47);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj4  ;
    struct list_item$1sType$ph* litem_0;
    struct sType*  __dec_obj5  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj6  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1590, 50);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1593, 51, "struct list_item$1sType$ph*"))), "./neo-c.h", 1593, 52);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1597, 54);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1597, 53);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1603, 55, "struct list_item$1sType$ph*"))), "./neo-c.h", 1603, 56);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1607, 58);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1607, 57);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1613, 59, "struct list_item$1sType$ph*"))), "./neo-c.h", 1613, 60);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1617, 62);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1617, 61);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1625, 63);
    neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 69);
    }
            neo_current_frame = fr.prev;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 74);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 75):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 76, "struct sNode*"), "sNode_clone", 5, 77);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 78);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 79):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 80):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 109);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 110);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1572, 111, "struct list$1sNode$ph*"), "./neo-c.h", 1572, 115)), "./neo-c.h", 1572, 116);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1577, 131));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1580, 132));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 133);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 134);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 135);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 112);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 113);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 114);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj20;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj21;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_2, 0, sizeof(litem_2));
    memset(&litem_3, 0, sizeof(litem_3));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1590, 117):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1593, 118, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1593, 119);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj19=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1597, 121);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1597, 120) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1603, 122, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1603, 123);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj20=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1607, 125);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1607, 124) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1613, 126, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1613, 127);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj21=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1617, 129);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1617, 128) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1625, 130):(void*)0);
    neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 136);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 141);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 142);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1572, 143, "struct list$1int$*"), "./neo-c.h", 1572, 147)), "./neo-c.h", 1572, 148);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1586, 155);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 156);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 157);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1544, 144);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 145);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 146);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_4;
    struct list_item$1int$* litem_5;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_4, 0, sizeof(litem_4));
    memset(&litem_5, 0, sizeof(litem_5));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1593, 149, "struct list_item$1int$*"))), "./neo-c.h", 1593, 150);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1603, 151, "struct list_item$1int$*"))), "./neo-c.h", 1603, 152);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1613, 153, "struct list_item$1int$*"))), "./neo-c.h", 1613, 154);
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        litem_5->item=item;
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 158);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 170);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 171);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1572, 172, "struct list$1char$ph*"), "./neo-c.h", 1572, 176)), "./neo-c.h", 1572, 177);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1577, 192, "char* "), "./neo-c.h", 1577, 193));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1580, 194, "char* "), "./neo-c.h", 1580, 195));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 196);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 197);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 198);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 173);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 174);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 175);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj29  ;
    struct list_item$1char$ph* litem_6;
    char*  __dec_obj30  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj31  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_6, 0, sizeof(litem_6));
    memset(&litem_7, 0, sizeof(litem_7));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1590, 178));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1593, 179, "struct list_item$1char$ph*"))), "./neo-c.h", 1593, 180);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj29=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1597, 182);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1597, 181);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1603, 183, "struct list_item$1char$ph*"))), "./neo-c.h", 1603, 184);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj30=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1607, 186);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1607, 185);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1613, 187, "struct list_item$1char$ph*"))), "./neo-c.h", 1613, 188);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj31=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1617, 190);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1617, 189);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1625, 191));
    neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 199);
    }
            neo_current_frame = fr.prev;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2, 217));
    }
        neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 221);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 226);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 227);
    return __result_obj__0;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 225);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 224);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 222));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 223):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj39;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_8;
    struct tuple2$2char$phsNode$ph* __dec_obj40;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_9;
    struct tuple2$2char$phsNode$ph* __dec_obj41;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_8, 0, sizeof(litem_8));
    memset(&litem_9, 0, sizeof(litem_9));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1590, 230);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1593, 231, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1593, 232);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj39=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1597, 234);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1597, 233);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1603, 235, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1603, 236);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj40=litem_8->item,
        litem_8->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1607, 238);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1607, 237);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1613, 239, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1613, 240);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj41=litem_9->item,
        litem_9->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1617, 242);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1617, 241);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1625, 243);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __dec_obj42  ;
    struct sNode* __dec_obj43;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj42=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4606, 246);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4606, 245);
    __dec_obj43=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "./neo-c.h", 4607, 248);
    (__dec_obj43 ? __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4607, 247) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "./neo-c.h", 4609, 249);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4609, 250);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4609, 251));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4609, 252):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4609, 253);
    return __result_obj__0;
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj44;
    struct sRefferenceNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 59, 268),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 59, 270);
    __dec_obj44=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 61, 272);
    (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 61, 271) :0);
        __result_obj__0 = (struct sRefferenceNode*)come_increment_ref_count(self, "09pre_op.nc", 64, 273);
    come_call_finalizer(sRefferenceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 64, 276);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 64, 277):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sRefferenceNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 64, 278);
    return __result_obj__0;
}

char*  sRefferenceNode_kind(struct sRefferenceNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRefferenceNode","09pre_op.nc",66))), "09pre_op.nc", 66, 279);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 66, 280));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 66, 281));
    return __result_obj__0;
}

struct sNode* sRefferenceNode_left_value(struct sRefferenceNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_left_value"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
        __result_obj__0 = self->value;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool  sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* value;
    _Bool  in_refference  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj45  ;
    char*  __dec_obj46  ;
    char*  __dec_obj47  ;
    struct sType*  __dec_obj48  ;
    _Bool  __result_obj__0  ;
    memset(&value, 0, sizeof(value));
    memset(&in_refference, 0, sizeof(in_refference));
    memset(&left_value, 0, sizeof(left_value));
    memset(&come_value, 0, sizeof(come_value));
    if(gComeSafe) {
        err_msg(info,"Refference is not safe code");
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    value=self->value;
    in_refference=info->in_refference;
    info->in_refference=(_Bool)1;
    if(!node_compile(value,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    info->in_refference=in_refference;
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 89, 282);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 91, 283, "struct CVALUE* "), "09pre_op.nc", 91, 284)), "09pre_op.nc", 91, 285);
    if(left_value->c_value_without_null_checker) {
        __right_value0 = (void*)0;
        __dec_obj45=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("&%s",left_value->c_value_without_null_checker), "09pre_op.nc", 94, 287);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 94, 286);
    }
    else if(left_value->c_value_without_cast_object_value) {
        __right_value0 = (void*)0;
        __dec_obj46=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("&%s",left_value->c_value_without_cast_object_value), "09pre_op.nc", 97, 289);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 97, 288);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj47=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("&%s",left_value->c_value), "09pre_op.nc", 100, 291);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 100, 290);
    }
    __right_value0 = (void*)0;
    __dec_obj48=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 103, 293);
    come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 103, 292);
    come_value->type->mPointerNum++;
    come_value->var=left_value->var;
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 109, 313));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 111, 314);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 111, 315);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 269));
    }
        neo_current_frame = fr.prev;
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sRefferenceNode_finalize", 2, 274));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sRefferenceNode_finalize", 3, 275):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj49  ;
    struct list_item$1CVALUE$ph* litem_11;
    struct CVALUE*  __dec_obj50  ;
    struct list_item$1CVALUE$ph* litem_12;
    struct CVALUE*  __dec_obj51  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_11, 0, sizeof(litem_11));
    memset(&litem_12, 0, sizeof(litem_12));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1674, 299);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1678, 300, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1678, 301);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj49=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1682, 303);
        come_call_finalizer(CVALUE_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1682, 302);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1688, 304, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1688, 305);
        litem_11->prev=self->head;
        litem_11->next=((void*)0);
        __dec_obj50=litem_11->item,
        litem_11->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1692, 307);
        come_call_finalizer(CVALUE_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1692, 306);
        self->tail=litem_11;
        self->head->next=litem_11;
    }
    else {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1698, 308, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1698, 309);
        litem_12->prev=self->tail;
        litem_12->next=((void*)0);
        __dec_obj51=litem_12->item,
        litem_12->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1702, 311);
        come_call_finalizer(CVALUE_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1702, 310);
        self->tail->next=litem_12;
        self->tail=litem_12;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1710, 312);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 294));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 295);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 296));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 297));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 298));
    }
            neo_current_frame = fr.prev;
}

struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sParenBlockNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj52;
    struct sParenBlockNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 119, 316),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 119, 317);
    __dec_obj52=self->paren_block,
    self->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(paren_block, "09pre_op.nc", 121, 319);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 121, 318);
        __result_obj__0 = (struct sParenBlockNode*)come_increment_ref_count(self, "09pre_op.nc", 124, 320);
    come_call_finalizer(sParenBlockNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 124, 323);
    come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 124, 324);
    neo_current_frame = fr.prev;
    come_call_finalizer(sParenBlockNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 124, 325);
    return __result_obj__0;
}

char*  sParenBlockNode_kind(struct sParenBlockNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sParenBlockNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sParenBlockNode","09pre_op.nc",126))), "09pre_op.nc", 126, 326);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 126, 327));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 126, 328));
    return __result_obj__0;
}

_Bool  sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sParenBlockNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* paren_block;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj53  ;
    struct sType*  come_type  ;
    struct list$1sNode$ph* _o2_saved_3;
    struct sNode* it;
    _Bool  __result_obj__0  ;
    struct buffer*  __dec_obj54  ;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj55  ;
    char*  __dec_obj56  ;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    char*  __dec_obj59  ;
    struct buffer*  __dec_obj60  ;
    struct CVALUE*  come_value_15  ;
    char*  __dec_obj61  ;
    struct sType*  __dec_obj62  ;
    memset(&paren_block, 0, sizeof(paren_block));
    memset(&buf, 0, sizeof(buf));
    memset(&paren_block_buffer, 0, sizeof(paren_block_buffer));
    memset(&come_type, 0, sizeof(come_type));
    memset(&_o2_saved_3, 0, sizeof(_o2_saved_3));
    memset(&it, 0, sizeof(it));
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value_15, 0, sizeof(come_value_15));
    paren_block=(struct list$1sNode$ph*)come_increment_ref_count(self->paren_block, "09pre_op.nc", 131, 329);
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "09pre_op.nc", 133, 330, "struct buffer* "), "09pre_op.nc", 133, 331)), "09pre_op.nc", 133, 332);
    buffer_append_str(buf,"({");
    paren_block_buffer=(struct buffer* )come_increment_ref_count(info->paren_block_buffer, "09pre_op.nc", 143, 333);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj53=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "09pre_op.nc", 144, 334, "struct buffer* "), "09pre_op.nc", 144, 335)), "09pre_op.nc", 144, 337);
    come_call_finalizer(buffer_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 144, 336);
    come_type=((void*)0);
    for(_o2_saved_3=(struct list$1sNode$ph*)come_increment_ref_count(paren_block, "09pre_op.nc", 146, 338),it=list$1sNode$ph_begin(_o2_saved_3)    ;!list$1sNode$ph_end(_o2_saved_3);it=list$1sNode$ph_next(_o2_saved_3)){
        if(!node_compile(it,info)) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 148, 339);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 148, 340);
            come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 148, 341);
            come_call_finalizer(sType_finalize, come_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 148, 342);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 148, 343);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        if(buffer_length(info->paren_block_buffer)>0) {
            __right_value0 = (void*)0;
            buffer_append_str(buf,((char* )(__right_value0=buffer_to_string(info->paren_block_buffer))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 152, 344));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj54=info->paren_block_buffer,
            info->paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "09pre_op.nc", 153, 345, "struct buffer* "), "09pre_op.nc", 153, 346)), "09pre_op.nc", 153, 348);
            come_call_finalizer(buffer_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 153, 347);
        }
        if(list$1CVALUE$ph_length(info->stack)>0) {
            __right_value0 = (void*)0;
            come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 157, 349);
            if(!info->no_output_come_code) {
                if(buf) {
                    __right_value0 = (void*)0;
                    buffer_append_str(buf,((char* )(__right_value0=string_operator_add(come_value->c_value,"; "))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 161, 350));
                }
                else {
                    __right_value0 = (void*)0;
                    add_come_code(info,((char* )(__right_value0=string_operator_add(come_value->c_value,"; "))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 164, 351));
                }
            }
            __right_value0 = (void*)0;
            __dec_obj55=come_type,
            come_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "09pre_op.nc", 168, 353);
            come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 168, 352);
            __dec_obj56=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 170, 354);
            __dec_obj57=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 171, 355);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 187, 356);
        }
        else {
            if(buf) {
                if(!info->no_output_come_code) {
                    if(info->module->mLastCode) {
                        __right_value0 = (void*)0;
                        buffer_append_str(buf,((char* )(__right_value0=string_operator_add(info->module->mLastCode,"; "))));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 176, 357));
                    }
                    if(info->module->mLastCode2) {
                        __right_value0 = (void*)0;
                        buffer_append_str(buf,((char* )(__right_value0=string_operator_add(info->module->mLastCode2,"; "))));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 177, 358));
                    }
                }
                __dec_obj58=info->module->mLastCode,
                info->module->mLastCode=((void*)0);
                __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 180, 359);
                __dec_obj59=info->module->mLastCode2,
                info->module->mLastCode2=((void*)0);
                __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 181, 360);
            }
            else {
                add_last_code_to_source(info);
            }
        }
    }
    __dec_obj60=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "09pre_op.nc", 188, 362);
    come_call_finalizer(buffer_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 188, 361);
    if(buf) {
        buffer_append_str(buf,"})");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_15=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 193, 363, "struct CVALUE* "), "09pre_op.nc", 193, 364)), "09pre_op.nc", 193, 365);
        __right_value0 = (void*)0;
        __dec_obj61=come_value_15->c_value,
        come_value_15->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "09pre_op.nc", 195, 367);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 195, 366);
        __dec_obj62=come_value_15->type,
        come_value_15->type=(struct sType* )come_increment_ref_count(come_type, "09pre_op.nc", 196, 369);
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 196, 368);
        come_value_15->var=((void*)0);
        add_come_last_code(info,"%s",come_value_15->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_15, "09pre_op.nc", 201, 370));
        come_call_finalizer(CVALUE_finalize, come_value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 371);
    }
    else {
        add_come_code(info,"});");
    }
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 372);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 373);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 374);
    come_call_finalizer(sType_finalize, come_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 375);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 376);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sParenBlockNode_finalize(struct sParenBlockNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sParenBlockNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sParenBlockNode_finalize", 2, 321));
    }
    if(self!=((void*)0)&&self->paren_block!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sParenBlockNode_finalize}", 3, 322);
    }
        neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_13;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
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
    memset(&result_13,0,sizeof(struct sNode*));
        __result_obj__0 = result_13;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool  list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_14;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
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
    memset(&result_14,0,sizeof(struct sNode*));
        __result_obj__0 = result_14;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj63;
    struct sDerefferenceNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 216, 377),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 216, 378);
    __dec_obj63=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 218, 380);
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 218, 379) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sDerefferenceNode*)come_increment_ref_count(self, "09pre_op.nc", 222, 381);
    come_call_finalizer(sDerefferenceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 222, 384);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 222, 385):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDerefferenceNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 222, 386);
    return __result_obj__0;
}

char*  sDerefferenceNode_kind(struct sDerefferenceNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDerefferenceNode","09pre_op.nc",224))), "09pre_op.nc", 224, 387);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 224, 388));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 224, 389));
    return __result_obj__0;
}

struct sNode* sDerefferenceNode_left_value(struct sDerefferenceNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_left_value"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
        __result_obj__0 = self->value;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool  sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* value;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj64  ;
    struct sType*  __dec_obj65  ;
    memset(&value, 0, sizeof(value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    if(gComeSafe) {
        err_msg(info,"Derefference is not safe code");
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    value=(struct sNode*)come_increment_ref_count(self->value, "09pre_op.nc", 238, 390);
    if(!node_compile(value,info)) {
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 241, 391):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 244, 392);
    type=(struct sType* )come_increment_ref_count(left_value->type, "09pre_op.nc", 247, 393);
    const char* fun_name="operator_derefference";
    if(self->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun_self(type,fun_name,(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 256, 394),left_value,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 260, 395, "struct CVALUE* "), "09pre_op.nc", 260, 396)), "09pre_op.nc", 260, 397);
        __right_value0 = (void*)0;
        __dec_obj64=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("*%s",left_value->c_value), "09pre_op.nc", 262, 399);
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 262, 398);
        __right_value0 = (void*)0;
        __dec_obj65=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 263, 401);
        come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 263, 400);
        come_value->type->mPointerNum--;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 269, 402));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 272, 403);
    }
        __result_obj__0 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 272, 404):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 272, 405);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 272, 406);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDerefferenceNode_finalize", 2, 382));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sDerefferenceNode_finalize", 3, 383):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj66;
    struct sLogicalDenial* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 280, 407),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 280, 408);
    __dec_obj66=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 282, 410);
    (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 282, 409) :0);
        __result_obj__0 = (struct sLogicalDenial*)come_increment_ref_count(self, "09pre_op.nc", 285, 411);
    come_call_finalizer(sLogicalDenial_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 285, 414);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 285, 415):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLogicalDenial_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 285, 416);
    return __result_obj__0;
}

char*  sLogicalDenial_kind(struct sLogicalDenial* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLogicalDenial","09pre_op.nc",287))), "09pre_op.nc", 287, 417);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 287, 418));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 287, 419));
    return __result_obj__0;
}

_Bool  sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj67  ;
    struct sType*  __dec_obj68  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    if(!node_compile(self->value,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 296, 420);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 298, 421, "struct CVALUE* "), "09pre_op.nc", 298, 422)), "09pre_op.nc", 298, 423);
    __right_value0 = (void*)0;
    __dec_obj67=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("!%s",come_value->c_value), "09pre_op.nc", 300, 425);
    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 300, 424);
    __right_value0 = (void*)0;
    __dec_obj68=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "09pre_op.nc", 301, 427);
    come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 301, 426);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 304, 428));
    add_come_last_code(info,"%s",come_value2->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 308, 429);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 308, 430);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLogicalDenial_finalize", 2, 412));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sLogicalDenial_finalize", 3, 413):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial2_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj69;
    struct sLogicalDenial2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 316, 431),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 316, 432);
    __dec_obj69=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 318, 434);
    (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 318, 433) :0);
        __result_obj__0 = (struct sLogicalDenial2*)come_increment_ref_count(self, "09pre_op.nc", 321, 435);
    come_call_finalizer(sLogicalDenial2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 321, 438);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 321, 439):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLogicalDenial2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 321, 440);
    return __result_obj__0;
}

char*  sLogicalDenial2_kind(struct sLogicalDenial2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial2_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLogicalDenial2","09pre_op.nc",323))), "09pre_op.nc", 323, 441);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 323, 442));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 323, 443));
    return __result_obj__0;
}

_Bool  sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial2_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj70  ;
    struct sType*  __dec_obj71  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    if(!node_compile(self->value,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 332, 444);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 334, 445, "struct CVALUE* "), "09pre_op.nc", 334, 446)), "09pre_op.nc", 334, 447);
    __right_value0 = (void*)0;
    __dec_obj70=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("!!%s",come_value->c_value), "09pre_op.nc", 336, 449);
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 336, 448);
    __right_value0 = (void*)0;
    __dec_obj71=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "09pre_op.nc", 337, 451);
    come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 337, 450);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 340, 452));
    add_come_last_code(info,"%s",come_value2->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 344, 453);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 344, 454);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLogicalDenial2_finalize(struct sLogicalDenial2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial2_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLogicalDenial2_finalize", 2, 436));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sLogicalDenial2_finalize", 3, 437):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sReverseNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj72;
    struct sReverseNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 352, 455),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 352, 456);
    __dec_obj72=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 354, 458);
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 354, 457) :0);
        __result_obj__0 = (struct sReverseNode*)come_increment_ref_count(self, "09pre_op.nc", 357, 459);
    come_call_finalizer(sReverseNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 357, 462);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 357, 463):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sReverseNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 357, 464);
    return __result_obj__0;
}

char*  sReverseNode_kind(struct sReverseNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sReverseNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sReverseNode","09pre_op.nc",359))), "09pre_op.nc", 359, 465);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 359, 466));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 359, 467));
    return __result_obj__0;
}

_Bool  sReverseNode_compile(struct sReverseNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sReverseNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* value;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj73  ;
    struct sType*  __dec_obj74  ;
    _Bool  __result_obj__0  ;
    memset(&value, 0, sizeof(value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&come_value, 0, sizeof(come_value));
    value=self->value;
    if(!node_compile(value,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 370, 468);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 372, 469, "struct CVALUE* "), "09pre_op.nc", 372, 470)), "09pre_op.nc", 372, 471);
    __right_value0 = (void*)0;
    __dec_obj73=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("!%s",left_value->c_value), "09pre_op.nc", 374, 473);
    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 374, 472);
    __right_value0 = (void*)0;
    __dec_obj74=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 375, 475);
    come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 375, 474);
    come_value->type->mPointerNum--;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 381, 476));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 383, 477);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 383, 478);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sReverseNode_finalize(struct sReverseNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sReverseNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sReverseNode_finalize", 2, 460));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sReverseNode_finalize", 3, 461):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusNode2_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj75;
    struct sMinusNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 391, 479),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 391, 480);
    __dec_obj75=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 393, 482);
    (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 393, 481) :0);
        __result_obj__0 = (struct sMinusNode2*)come_increment_ref_count(self, "09pre_op.nc", 396, 483);
    come_call_finalizer(sMinusNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 396, 486);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 396, 487):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMinusNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 396, 488);
    return __result_obj__0;
}

char*  sMinusNode2_kind(struct sMinusNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusNode2_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMinusNode2","09pre_op.nc",398))), "09pre_op.nc", 398, 489);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 398, 490));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 398, 491));
    return __result_obj__0;
}

_Bool  sMinusNode2_compile(struct sMinusNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusNode2_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj76  ;
    struct sType*  __dec_obj77  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    if(!node_compile(self->value,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 407, 492);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 409, 493, "struct CVALUE* "), "09pre_op.nc", 409, 494)), "09pre_op.nc", 409, 495);
    __right_value0 = (void*)0;
    __dec_obj76=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("-%s",come_value->c_value), "09pre_op.nc", 411, 497);
    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 411, 496);
    __right_value0 = (void*)0;
    __dec_obj77=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "09pre_op.nc", 412, 499);
    come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 412, 498);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 415, 500));
    add_come_last_code(info,"%s",come_value2->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 419, 501);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 419, 502);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMinusNode2_finalize(struct sMinusNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusNode2_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMinusNode2_finalize", 2, 484));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sMinusNode2_finalize", 3, 485):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode2_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj78;
    struct sPlusPlusNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 427, 503),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 427, 504);
    __dec_obj78=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 429, 506);
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 429, 505) :0);
        __result_obj__0 = (struct sPlusPlusNode2*)come_increment_ref_count(self, "09pre_op.nc", 432, 507);
    come_call_finalizer(sPlusPlusNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 432, 510);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 432, 511):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sPlusPlusNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 432, 512);
    return __result_obj__0;
}

char*  sPlusPlusNode2_kind(struct sPlusPlusNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode2_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sPlusPlusNode2","09pre_op.nc",434))), "09pre_op.nc", 434, 513);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 434, 514));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 434, 515));
    return __result_obj__0;
}

_Bool  sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode2_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* value;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj79  ;
    struct sType*  __dec_obj80  ;
    memset(&value, 0, sizeof(value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value2, 0, sizeof(come_value2));
    value=(struct sNode*)come_increment_ref_count(self->value, "09pre_op.nc", 439, 516);
    if(!node_compile(value,info)) {
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 442, 517):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 445, 518);
    if(reject_ref_optional_unary_operator("operator_plus_plus",left_value,info)) {
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 448, 519):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 448, 520);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    type=(struct sType* )come_increment_ref_count(left_value->type, "09pre_op.nc", 451, 521);
    const char* fun_name="operator_plus_plus";
    calling_fun=operator_overload_fun_self(type,fun_name,(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 455, 522),left_value,info);
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 458, 523, "struct CVALUE* "), "09pre_op.nc", 458, 524)), "09pre_op.nc", 458, 525);
        __right_value0 = (void*)0;
        __dec_obj79=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("++%s",left_value->c_value), "09pre_op.nc", 460, 527);
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 460, 526);
        __right_value0 = (void*)0;
        __dec_obj80=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 461, 529);
        come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 461, 528);
        come_value2->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 464, 530));
        add_come_last_code(info,"%s",come_value2->c_value);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 469, 531);
    }
        __result_obj__0 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 469, 532):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 469, 533);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 469, 534);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode2_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sPlusPlusNode2_finalize", 2, 508));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sPlusPlusNode2_finalize", 3, 509):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode2_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj81;
    struct sMinusMinusNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 477, 535),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 477, 536);
    __dec_obj81=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 479, 538);
    (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 479, 537) :0);
        __result_obj__0 = (struct sMinusMinusNode2*)come_increment_ref_count(self, "09pre_op.nc", 482, 539);
    come_call_finalizer(sMinusMinusNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 482, 542);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 482, 543):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMinusMinusNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 482, 544);
    return __result_obj__0;
}

char*  sMinusMinusNode2_kind(struct sMinusMinusNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode2_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMinusMinusNode2","09pre_op.nc",484))), "09pre_op.nc", 484, 545);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 484, 546));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 484, 547));
    return __result_obj__0;
}

_Bool  sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode2_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* value;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj82  ;
    struct sType*  __dec_obj83  ;
    memset(&value, 0, sizeof(value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value2, 0, sizeof(come_value2));
    value=(struct sNode*)come_increment_ref_count(self->value, "09pre_op.nc", 489, 548);
    if(!node_compile(value,info)) {
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 492, 549):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 495, 550);
    if(reject_ref_optional_unary_operator("operator_minus_minus",left_value,info)) {
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 498, 551):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 498, 552);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    type=(struct sType* )come_increment_ref_count(left_value->type, "09pre_op.nc", 501, 553);
    const char* fun_name="operator_minus_minus";
    calling_fun=operator_overload_fun_self(type,fun_name,(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 505, 554),left_value,info);
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 508, 555, "struct CVALUE* "), "09pre_op.nc", 508, 556)), "09pre_op.nc", 508, 557);
        __right_value0 = (void*)0;
        __dec_obj82=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("--%s",left_value->c_value), "09pre_op.nc", 510, 559);
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 510, 558);
        __right_value0 = (void*)0;
        __dec_obj83=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 511, 561);
        come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 511, 560);
        come_value2->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 514, 562));
        add_come_last_code(info,"%s",come_value2->c_value);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 519, 563);
    }
        __result_obj__0 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 519, 564):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 519, 565);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 519, 566);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode2_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMinusMinusNode2_finalize", 2, 540));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sMinusMinusNode2_finalize", 3, 541):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock*  block  , _Bool  clang  , _Bool  unsafe_block  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sBlock*  __dec_obj96  ;
    struct sNormalBlock* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 527, 567),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 527, 568);
    __right_value0 = (void*)0;
    __dec_obj96=self->mBlock,
    self->mBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(block), "09pre_op.nc", 529, 715);
    come_call_finalizer(sBlock_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 529, 714);
    self->clang=clang;
    self->unsafe_block=unsafe_block;
        __result_obj__0 = (struct sNormalBlock*)come_increment_ref_count(self, "09pre_op.nc", 534, 716);
    come_call_finalizer(sNormalBlock_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 534, 719);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNormalBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 534, 720);
    return __result_obj__0;
}

_Bool  sNormalBlock_terminated(struct sNormalBlock* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_terminated"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sNormalBlock_kind(struct sNormalBlock* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNormalBlock","09pre_op.nc",541))), "09pre_op.nc", 541, 721);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 541, 722));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 541, 723));
    return __result_obj__0;
}

_Bool  sNormalBlock_compile(struct sNormalBlock* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sBlock*  block  ;
    _Bool  come_c  ;
    _Bool  safe  ;
    char*  __dec_obj97  ;
    char*  __dec_obj98  ;
    memset(&block, 0, sizeof(block));
    memset(&come_c, 0, sizeof(come_c));
    memset(&safe, 0, sizeof(safe));
    block=self->mBlock;
    add_come_code(info,"{\n");
    come_c=gComeC;
    if(self->clang) {
        gComeC=(_Bool)1;
    }
    safe=gComeSafe;
    if(self->unsafe_block) {
        gComeSafe=(_Bool)0;
    }
    transpile_block(block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    gComeC=come_c;
    gComeSafe=safe;
    __dec_obj97=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 562, 724);
    __dec_obj98=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 563, 725);
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj84;
    struct sVarTable*  __dec_obj95  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 569, "struct sBlock* "), "sBlock_clone", 5, 570);
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj84=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 6, 572);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 571);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj95=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 710);
        come_call_finalizer(sVarTable_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 709);
    }
    if(self!=((void*)0)) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
        __result_obj__0 = result;
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 713);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj94;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 573);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 574);
        return __result_obj__0;
    }
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 575, "struct sVarTable* "), "sVarTable_clone", 5, 576);
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj94=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 13, 705);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 13, 704);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mParent=self->mParent;
    }
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 706);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 707);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 708);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj86;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    memset(&it2, 0, sizeof(it2));
    if(self==((void*)0)) {
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 3559, 577);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 8, 587);
        return __result_obj__0;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./neo-c.h", 3562, 588, "struct map$2char$phsVar$ph*"), "./neo-c.h", 3562, 604)), "./neo-c.h", 3562, 605);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj86=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3564, 606, "struct list$1char$ph*"), "./neo-c.h", 3564, 607)), "./neo-c.h", 3564, 609);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3564, 608);
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3570, 625),(_Bool)1), "./neo-c.h", 3570, 626);
        if(1&&1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3573, 666, "char* "), "./neo-c.h", 3573, 667),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3573, 686),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3576, 687, "char* "), "./neo-c.h", 3576, 688),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3576, 689),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3579, 690),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3579, 691),(_Bool)0);
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3582, 692),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3582, 693),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3586, 694);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3586, 695);
    }
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "./neo-c.h", 3586, 696);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3586, 697);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3586, 698);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_16;
    memset(&i, 0, sizeof(i));
    memset(&i_16, 0, sizeof(i_16));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3509, 582);
            }
        }
    }
    come_free((char*)self->items);
    for(i_16=0    ;i_16<self->size;i_16++){
        if(self->item_existance[i_16]) {
            if(1) {
                (self->keys[i_16] = come_decrement_ref_count(self->keys[i_16], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3518, 583));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3524, 584);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 585));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3527, 586));
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 578));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 579));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 580);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 581));
    }
                    neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj85;
    struct map$2char$phsVar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3455, 589, "char** "))), "./neo-c.h", 3455, 590);
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "./neo-c.h", 3456, 591, "struct sVar** "))), "./neo-c.h", 3456, 592);
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3457, 593, "unsigned int*"))), "./neo-c.h", 3457, 594);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool* )come_increment_ref_count(((_Bool* )(__right_value0=(_Bool *)come_calloc(1, sizeof(_Bool )*(1*(128)), "./neo-c.h", 3458, 595, "_Bool* "))), "./neo-c.h", 3458, 596);
    for(i=0    ;i<128;i++){
        self->hashes[i]=0;
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj85=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3469, 597, "struct list$1char$ph*"), "./neo-c.h", 3469, 598)), "./neo-c.h", 3469, 600);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3469, 599);
    self->it=0;
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "./neo-c.h", 3473, 601);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3473, 602);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3473, 603);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_17  ;
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
    memset(&result_17,0,sizeof(char* ));
        __result_obj__0 = result_17;
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
    char*  result_18  ;
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
    memset(&result_18,0,sizeof(char* ));
        __result_obj__0 = result_18;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool  by_pointer  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_at"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3627, 610);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3627, 611);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3627, 612);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right1 = (self->size); if(__neo_div_right1 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right1; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 3640, 613);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3640, 614);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3640, 615);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3647, 616);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3647, 617);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3647, 618);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3651, 619);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3651, 620);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3651, 621);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3655, 622);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3655, 623);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3655, 624);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool  by_pointer  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_put"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    _Bool  add_to_key_list  ;
    unsigned int key_hash;
    unsigned int hash;
    int it;
    memset(&add_to_key_list, 0, sizeof(add_to_key_list));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4086, 627));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4086, 628);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    add_to_key_list=(_Bool)0;
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right3 = (self->size); if(__neo_div_right3 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right3; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                map$2char$phsVar$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4105, 643));
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4106, 644);
                }
                else {
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4112, 645);
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4113, 646);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4136, 647);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4142, 648);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4156, 663));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4159, 664));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4159, 665);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_rehash"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sVar**  items  ;
    unsigned int* hashes;
    _Bool*  item_existance  ;
    int i;
    int len;
    int i_19;
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
    memset(&i_19, 0, sizeof(i_19));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&n, 0, sizeof(n));
    old_size=self->size;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3925, 629, "char** "))), "./neo-c.h", 3925, 630);
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "./neo-c.h", 3926, 631, "struct sVar** "))), "./neo-c.h", 3926, 632);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3927, 633, "unsigned int*"))), "./neo-c.h", 3927, 634);
    __right_value0 = (void*)0;
    item_existance=(_Bool* )come_increment_ref_count(((_Bool* )(__right_value0=(_Bool *)come_calloc(1, sizeof(_Bool )*(1*(size)), "./neo-c.h", 3928, 635, "_Bool* "))), "./neo-c.h", 3928, 636);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(i_19=0    ;i_19<old_size;i_19++){
        if(!self->item_existance[i_19]) {
            continue;
        }
        key_hash=self->hashes[i_19];
        hash=({ __typeof__(size) __neo_div_right2 = (size); if(__neo_div_right2 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right2; });
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
                keys[n]=self->keys[i_19];
                items[n]=self->items[i_19];
                len++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3970, 637));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3971, 638));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phsVar$ph_remove_ordered_entry(struct map$2char$phsVar$ph* self, char*  key  , _Bool  by_pointer  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_remove_ordered_entry"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int pos;
    memset(&pos, 0, sizeof(pos));
    pos=map$2char$phsVar$ph_key_position(self,key,by_pointer);
    if(pos>=0) {
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsVar$ph_key_position(struct map$2char$phsVar$ph* self, char*  key  , _Bool  by_pointer  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_key_position"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    struct list_item$1char$ph* it_20;
    int i_21;
    struct list_item$1char$ph* prev_it_22;
    struct list_item$1char$ph* it_23;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_24;
    struct list_item$1char$ph* prev_it_25;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_20, 0, sizeof(it_20));
    memset(&i_21, 0, sizeof(i_21));
    memset(&prev_it_22, 0, sizeof(prev_it_22));
    memset(&it_23, 0, sizeof(it_23));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_24, 0, sizeof(i_24));
    memset(&prev_it_25, 0, sizeof(prev_it_25));
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2001, 640);
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
        it_20=self->head;
        i_21=0;
        while(it_20!=((void*)0)) {
            if(i_21==head) {
                self->tail=it_20->prev;
                self->tail->next=((void*)0);
            }
            if(i_21>=head) {
                prev_it_22=it_20;
                it_20=it_20->next;
                i_21++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_22, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2031, 641);
                self->len--;
            }
            else {
                it_20=it_20->next;
                i_21++;
            }
        }
    }
    else {
        it_23=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_24=0;
        while(it_23!=((void*)0)) {
            if(i_24==head) {
                head_prev_it=it_23->prev;
            }
            if(i_24==tail) {
                tail_it=it_23;
            }
            if(i_24>=head&&i_24<tail) {
                prev_it_25=it_23;
                it_23=it_23->next;
                i_24++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2064, 642);
                self->len--;
            }
            else {
                it_23=it_23->next;
                i_24++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1923, 639);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj87  ;
    struct list_item$1char$ph* litem_26;
    char*  __dec_obj88  ;
    struct list_item$1char$ph* litem_27;
    char*  __dec_obj89  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_26, 0, sizeof(litem_26));
    memset(&litem_27, 0, sizeof(litem_27));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1674, 649));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1678, 650, "struct list_item$1char$ph*"))), "./neo-c.h", 1678, 651);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj87=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1682, 653);
        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1682, 652);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1688, 654, "struct list_item$1char$ph*"))), "./neo-c.h", 1688, 655);
        litem_26->prev=self->head;
        litem_26->next=((void*)0);
        __dec_obj88=litem_26->item,
        litem_26->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1692, 657);
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1692, 656);
        self->tail=litem_26;
        self->head->next=litem_26;
    }
    else {
        __right_value0 = (void*)0;
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1698, 658, "struct list_item$1char$ph*"))), "./neo-c.h", 1698, 659);
        litem_27->prev=self->tail;
        litem_27->next=((void*)0);
        __dec_obj89=litem_27->item,
        litem_27->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1702, 661);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1702, 660);
        self->tail->next=litem_27;
        self->tail=litem_27;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1710, 662));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    struct sType*  __dec_obj92  ;
    char*  __dec_obj93  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 668);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 669);
        return __result_obj__0;
    }
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 670, "struct sVar* "), "sVar_clone", 5, 671);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj90=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 672, "char* "), "sVar_clone", 6, 674);
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 673);
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj91=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 675, "char* "), "sVar_clone", 7, 677);
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 676);
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj92=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 679);
        come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 678);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result->mNoFree=self->mNoFree;
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj93=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 680, "char* "), "sVar_clone", 12, 682);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 681);
    }
    if(self!=((void*)0)) {
        result->no_output_come_code=self->no_output_come_code;
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 683);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 684);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 685);
    return __result_obj__0;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_28;
    memset(&i, 0, sizeof(i));
    memset(&i_28, 0, sizeof(i_28));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3509, 699);
            }
        }
    }
    come_free((char*)self->items);
    for(i_28=0    ;i_28<self->size;i_28++){
        if(self->item_existance[i_28]) {
            if(1) {
                (self->keys[i_28] = come_decrement_ref_count(self->keys[i_28], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3518, 700));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3524, 701);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 702));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3527, 703));
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 711);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 712);
    }
        neo_current_frame = fr.prev;
}

static void sNormalBlock_finalize(struct sNormalBlock* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNormalBlock_finalize", 2, 717));
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sNormalBlock_finalize}", 3, 718);
    }
        neo_current_frame = fr.prev;
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComplement_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj99;
    struct sComplement* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 574, 726),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 574, 727);
    __dec_obj99=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 576, 729);
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 576, 728) :0);
        __result_obj__0 = (struct sComplement*)come_increment_ref_count(self, "09pre_op.nc", 579, 730);
    come_call_finalizer(sComplement_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 579, 733);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 579, 734):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComplement_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 579, 735);
    return __result_obj__0;
}

char*  sComplement_kind(struct sComplement* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComplement_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComplement","09pre_op.nc",581))), "09pre_op.nc", 581, 736);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 581, 737));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 581, 738));
    return __result_obj__0;
}

_Bool  sComplement_compile(struct sComplement* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComplement_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj100  ;
    struct sType*  __dec_obj101  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    if(!node_compile(self->value,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 590, 739);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 592, 740, "struct CVALUE* "), "09pre_op.nc", 592, 741)), "09pre_op.nc", 592, 742);
    __right_value0 = (void*)0;
    __dec_obj100=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("~%s",come_value->c_value), "09pre_op.nc", 594, 744);
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 594, 743);
    __right_value0 = (void*)0;
    __dec_obj101=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "09pre_op.nc", 595, 746);
    come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 595, 745);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 598, 747));
    add_come_last_code(info,"%s",come_value2->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 602, 748);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 602, 749);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sComplement_finalize(struct sComplement* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComplement_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sComplement_finalize", 2, 731));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sComplement_finalize", 3, 732):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sParenNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj102;
    struct sParenNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 610, 750),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 610, 751);
    __right_value0 = (void*)0;
    __dec_obj102=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "09pre_op.nc", 612, 753);
    (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 612, 752) :0);
        __result_obj__0 = (struct sParenNode*)come_increment_ref_count(self, "09pre_op.nc", 615, 754);
    come_call_finalizer(sParenNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 615, 757);
    neo_current_frame = fr.prev;
    come_call_finalizer(sParenNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 615, 758);
    return __result_obj__0;
}

char*  sParenNode_kind(struct sParenNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sParenNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sParenNode","09pre_op.nc",617))), "09pre_op.nc", 617, 759);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 617, 760));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 617, 761));
    return __result_obj__0;
}

_Bool  sParenNode_compile(struct sParenNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sParenNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj103  ;
    struct sType*  __dec_obj104  ;
    _Bool  __result_obj__0  ;
    memset(&left, 0, sizeof(left));
    memset(&left_value, 0, sizeof(left_value));
    memset(&come_value, 0, sizeof(come_value));
    left=self->mLeft;
    if(!node_compile(left,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 628, 762);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 630, 763, "struct CVALUE* "), "09pre_op.nc", 630, 764)), "09pre_op.nc", 630, 765);
    __right_value0 = (void*)0;
    __dec_obj103=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s)",left_value->c_value), "09pre_op.nc", 632, 767);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 632, 766);
    __right_value0 = (void*)0;
    __dec_obj104=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 633, 769);
    come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 633, 768);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 638, 770));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 640, 771);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 640, 772);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sParenNode_finalize(struct sParenNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sParenNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sParenNode_finalize", 2, 755));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sParenNode_finalize", 3, 756):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType*  type  , struct sNode* left, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCastNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj105  ;
    struct sNode* __dec_obj106;
    struct sCastNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 648, 773),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 648, 774);
    __right_value0 = (void*)0;
    __dec_obj105=self->mType,
    self->mType=(struct sType* )come_increment_ref_count(sType_clone(type), "09pre_op.nc", 650, 776);
    come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 650, 775);
    __right_value0 = (void*)0;
    __dec_obj106=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "09pre_op.nc", 651, 778);
    (__dec_obj106 ? __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 651, 777) :0);
        __result_obj__0 = (struct sCastNode*)come_increment_ref_count(self, "09pre_op.nc", 654, 779);
    come_call_finalizer(sCastNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 654, 783);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCastNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 654, 784);
    return __result_obj__0;
}

char*  sCastNode_kind(struct sCastNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCastNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCastNode","09pre_op.nc",656))), "09pre_op.nc", 656, 785);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 656, 786));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 656, 787));
    return __result_obj__0;
}

_Bool  sCastNode_compile(struct sCastNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCastNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  type  ;
    struct sNode* left;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    void* __right_value1 = (void*)0;
    struct sType*  type2  ;
    struct sType*  type3  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj107  ;
    struct sType*  __dec_obj108  ;
    _Bool  __result_obj__0  ;
    memset(&type, 0, sizeof(type));
    memset(&left, 0, sizeof(left));
    memset(&left_value, 0, sizeof(left_value));
    memset(&type2, 0, sizeof(type2));
    memset(&type3, 0, sizeof(type3));
    memset(&come_value, 0, sizeof(come_value));
    if(gComeSafe) {
        err_msg(info,"Cast is not safe code");
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    type=self->mType;
    left=self->mLeft;
    if(!node_compile(left,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 672, 788);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(((struct sType* )(__right_value0=sType_clone(type))),info->generics_type,info), "09pre_op.nc", 674, 789);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 674, 790);
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(solve_method_generics(type2,info), "09pre_op.nc", 676, 791);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 678, 792, "struct CVALUE* "), "09pre_op.nc", 678, 793)), "09pre_op.nc", 678, 794);
    cast_type(type3,left_value->type,left_value,info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj107=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s)%s",((char* )(__right_value0=make_type_name_string(type3,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0))),left_value->c_value), "09pre_op.nc", 682, 796);
    __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 682, 795);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 682, 797));
    __right_value0 = (void*)0;
    __dec_obj108=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type3), "09pre_op.nc", 683, 799);
    come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 683, 798);
    come_value->var=left_value->var;
    come_value->mCastValue=(_Bool)1;
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 689, 800));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 691, 801);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 691, 802);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 691, 803);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 691, 804);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCastNode_finalize(struct sCastNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCastNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCastNode_finalize", 2, 780));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sCastNode_finalize}", 3, 781);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sCastNode_finalize", 4, 782):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* parse_normal_block(_Bool  clang  , _Bool  unsafe_block  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parse_normal_block"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int sline_real;
    void* __right_value0 = (void*)0;
    struct sBlock*  block  ;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNormalBlock* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&block, 0, sizeof(block));
    sline_real=info->sline_real;
    info->sline_real=info->sline;
    block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "09pre_op.nc", 699, 805);
    info->sline_real=sline_real;
        __right_value0 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 703, 808, "struct sNode");
    _inf_obj_value1=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(__right_value1=sNormalBlock_initialize((struct sNormalBlock* )come_increment_ref_count((struct sNormalBlock *)come_calloc(1, sizeof(struct sNormalBlock )*(1), "09pre_op.nc", 703, 806, "struct sNormalBlock* "), "09pre_op.nc", 703, 807),block,clang,unsafe_block,info))), "09pre_op.nc", 703, 809);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "09pre_op.nc", 703, 818);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 703, 819);
    come_call_finalizer(sNormalBlock_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 703, 820);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 703, 821):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 703, 822):(void*)0);
    return __result_obj__0;
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNormalBlock* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNormalBlock*  result  ;
    char*  __dec_obj109  ;
    struct sBlock*  __dec_obj110  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNormalBlock* )come_increment_ref_count((struct sNormalBlock *)come_calloc(1, sizeof(struct sNormalBlock )*(1), "sNormalBlock_clone", 5, 810, "struct sNormalBlock* "), "sNormalBlock_clone", 5, 811);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj109=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNormalBlock_clone", 7, 812, "char* "), "sNormalBlock_clone", 7, 814);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "sNormalBlock_clone", 7, 813);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj110=result->mBlock,
        result->mBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mBlock), "sNormalBlock_clone", 9, 816);
        come_call_finalizer(sBlock_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sNormalBlock_clone", 9, 815);
    }
    if(self!=((void*)0)) {
        result->clang=self->clang;
    }
    if(self!=((void*)0)) {
        result->unsafe_block=self->unsafe_block;
    }
        __result_obj__0 = result;
    come_call_finalizer(sNormalBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNormalBlock_clone}", 12, 817);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "craete_logical_denial"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value2;
    struct sLogicalDenial* _inf_obj_value2;
    void* __right_value3 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 708, 826, "struct sNode");
    _inf_obj_value2=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value2=sLogicalDenial_initialize((struct sLogicalDenial* )come_increment_ref_count((struct sLogicalDenial *)come_calloc(1, sizeof(struct sLogicalDenial )*(1), "09pre_op.nc", 708, 823, "struct sLogicalDenial* "), "09pre_op.nc", 708, 824),(struct sNode*)come_increment_ref_count(sNode_clone(node), "09pre_op.nc", 708, 825),info))), "09pre_op.nc", 708, 827);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value2)), "09pre_op.nc", 708, 836);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 708, 837):(void*)0);
    come_call_finalizer(sLogicalDenial_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 708, 838);
    ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 708, 839):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 708, 840):(void*)0);
    return __result_obj__0;
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sLogicalDenial* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLogicalDenial*  result  ;
    char*  __dec_obj111  ;
    struct sNode* __dec_obj112;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLogicalDenial* )come_increment_ref_count((struct sLogicalDenial *)come_calloc(1, sizeof(struct sLogicalDenial )*(1), "sLogicalDenial_clone", 5, 828, "struct sLogicalDenial* "), "sLogicalDenial_clone", 5, 829);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj111=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLogicalDenial_clone", 7, 830, "char* "), "sLogicalDenial_clone", 7, 832);
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "sLogicalDenial_clone", 7, 831);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj112=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sLogicalDenial_clone", 9, 834);
        (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0, (void*)0, "sLogicalDenial_clone", 9, 833) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLogicalDenial_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLogicalDenial_clone}", 10, 835);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* cast_node(struct sType*  type  , struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "cast_node"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sCastNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 713, 843, "struct sNode");
    _inf_obj_value3=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value1=sCastNode_initialize((struct sCastNode* )come_increment_ref_count((struct sCastNode *)come_calloc(1, sizeof(struct sCastNode )*(1), "09pre_op.nc", 713, 841, "struct sCastNode* "), "09pre_op.nc", 713, 842),type,node,info))), "09pre_op.nc", 713, 844);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCastNode_finalize;
    _inf_value3->clone=(void*)sCastNode_clone;
    _inf_value3->compile=(void*)sCastNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCastNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "09pre_op.nc", 713, 855);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 713, 856):(void*)0);
    come_call_finalizer(sCastNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 713, 857);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 713, 858):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 713, 859):(void*)0);
    return __result_obj__0;
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCastNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sCastNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCastNode*  result  ;
    char*  __dec_obj113  ;
    struct sType*  __dec_obj114  ;
    struct sNode* __dec_obj115;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCastNode* )come_increment_ref_count((struct sCastNode *)come_calloc(1, sizeof(struct sCastNode )*(1), "sCastNode_clone", 5, 845, "struct sCastNode* "), "sCastNode_clone", 5, 846);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj113=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCastNode_clone", 7, 847, "char* "), "sCastNode_clone", 7, 849);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "sCastNode_clone", 7, 848);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj114=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sCastNode_clone", 9, 851);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sCastNode_clone", 9, 850);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj115=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sCastNode_clone", 10, 853);
        (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0, (void*)0, "sCastNode_clone", 10, 852) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sCastNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCastNode_clone}", 11, 854);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* reffence_node(struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "reffence_node"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value4;
    struct sRefferenceNode* _inf_obj_value4;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 718, 863, "struct sNode");
    _inf_obj_value4=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value1=sRefferenceNode_initialize((struct sRefferenceNode* )come_increment_ref_count((struct sRefferenceNode *)come_calloc(1, sizeof(struct sRefferenceNode )*(1), "09pre_op.nc", 718, 860, "struct sRefferenceNode* "), "09pre_op.nc", 718, 861),(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 718, 862),info))), "09pre_op.nc", 718, 864);
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sRefferenceNode_finalize;
    _inf_value4->clone=(void*)sRefferenceNode_clone;
    _inf_value4->compile=(void*)sRefferenceNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sRefferenceNode_kind;
    _inf_value4->left_value=(void*)sRefferenceNode_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)), "09pre_op.nc", 718, 873);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 718, 874):(void*)0);
    come_call_finalizer(sRefferenceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 718, 875);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 718, 876):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 718, 877):(void*)0);
    return __result_obj__0;
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sRefferenceNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRefferenceNode*  result  ;
    char*  __dec_obj116  ;
    struct sNode* __dec_obj117;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sRefferenceNode* )come_increment_ref_count((struct sRefferenceNode *)come_calloc(1, sizeof(struct sRefferenceNode )*(1), "sRefferenceNode_clone", 5, 865, "struct sRefferenceNode* "), "sRefferenceNode_clone", 5, 866);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj116=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sRefferenceNode_clone", 7, 867, "char* "), "sRefferenceNode_clone", 7, 869);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "sRefferenceNode_clone", 7, 868);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj117=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sRefferenceNode_clone", 9, 871);
        (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0, (void*)0, "sRefferenceNode_clone", 9, 870) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sRefferenceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sRefferenceNode_clone}", 10, 872);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* reverse_node(struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "reverse_node"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value5;
    struct sReverseNode* _inf_obj_value5;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 723, 881, "struct sNode");
    _inf_obj_value5=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value1=sReverseNode_initialize((struct sReverseNode* )come_increment_ref_count((struct sReverseNode *)come_calloc(1, sizeof(struct sReverseNode )*(1), "09pre_op.nc", 723, 878, "struct sReverseNode* "), "09pre_op.nc", 723, 879),(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 723, 880),info))), "09pre_op.nc", 723, 882);
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReverseNode_finalize;
    _inf_value5->clone=(void*)sReverseNode_clone;
    _inf_value5->compile=(void*)sReverseNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReverseNode_kind;
    _inf_value5->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)), "09pre_op.nc", 723, 891);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 723, 892):(void*)0);
    come_call_finalizer(sReverseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 723, 893);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 723, 894):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 723, 895):(void*)0);
    return __result_obj__0;
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sReverseNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sReverseNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sReverseNode*  result  ;
    char*  __dec_obj118  ;
    struct sNode* __dec_obj119;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sReverseNode* )come_increment_ref_count((struct sReverseNode *)come_calloc(1, sizeof(struct sReverseNode )*(1), "sReverseNode_clone", 5, 883, "struct sReverseNode* "), "sReverseNode_clone", 5, 884);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj118=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sReverseNode_clone", 7, 885, "char* "), "sReverseNode_clone", 7, 887);
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0, "sReverseNode_clone", 7, 886);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj119=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sReverseNode_clone", 9, 889);
        (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0, (void*)0, "sReverseNode_clone", 9, 888) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sReverseNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sReverseNode_clone}", 10, 890);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct sType*  type_  , char*  initializer  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sArrayInitializer_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj120  ;
    struct sType*  __dec_obj121  ;
    struct sArrayInitializer* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "09pre_op.nc", 730, 896),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 730, 897);
    __right_value0 = (void*)0;
    __dec_obj120=self->initializer,
    self->initializer=(char* )come_increment_ref_count((char* )come_memdup(initializer, "09pre_op.nc", 732, 898, "char* "), "09pre_op.nc", 732, 900);
    __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 732, 899);
    __right_value0 = (void*)0;
    __dec_obj121=self->type_,
    self->type_=(struct sType* )come_increment_ref_count(sType_clone(type_), "09pre_op.nc", 733, 902);
    come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 733, 901);
        __result_obj__0 = (struct sArrayInitializer*)come_increment_ref_count(self, "09pre_op.nc", 736, 903);
    come_call_finalizer(sArrayInitializer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 736, 907);
    (initializer = come_decrement_ref_count(initializer, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 736, 908));
    neo_current_frame = fr.prev;
    come_call_finalizer(sArrayInitializer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 736, 909);
    return __result_obj__0;
}

char*  sArrayInitializer_kind(struct sArrayInitializer* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sArrayInitializer_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sArrayInitializer","09pre_op.nc",738))), "09pre_op.nc", 738, 910);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 738, 911));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 738, 912));
    return __result_obj__0;
}

_Bool  sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sArrayInitializer_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  type_  ;
    char*  initializer  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj122  ;
    struct sType*  __dec_obj123  ;
    struct CVALUE*  come_value_29  ;
    char*  __dec_obj124  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj125  ;
    _Bool  __result_obj__0  ;
    memset(&type_, 0, sizeof(type_));
    memset(&initializer, 0, sizeof(initializer));
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value_29, 0, sizeof(come_value_29));
    type_=(struct sType* )come_increment_ref_count(self->type_, "09pre_op.nc", 743, 913);
    initializer=(char* )come_increment_ref_count(self->initializer, "09pre_op.nc", 744, 914);
    if(type_) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 747, 915, "struct CVALUE* "), "09pre_op.nc", 747, 916)), "09pre_op.nc", 747, 917);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj122=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s)%s",((char* )(__right_value0=make_type_name_string(type_,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0))),initializer), "09pre_op.nc", 749, 919);
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 749, 918);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 749, 920));
        __right_value0 = (void*)0;
        __dec_obj123=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type_), "09pre_op.nc", 751, 922);
        come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 751, 921);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 754, 923));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 767, 924);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_29=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 757, 925, "struct CVALUE* "), "09pre_op.nc", 757, 926)), "09pre_op.nc", 757, 927);
        __dec_obj124=come_value_29->c_value,
        come_value_29->c_value=(char* )come_increment_ref_count(initializer, "09pre_op.nc", 759, 929);
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 759, 928);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj125=come_value_29->type,
        come_value_29->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "09pre_op.nc", 760, 930, "struct sType* "), "09pre_op.nc", 760, 931),(char*)come_increment_ref_count(xsprintf("void"), "09pre_op.nc", 760, 932),(_Bool)0,info,(_Bool)0,0), "09pre_op.nc", 760, 934);
        come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 760, 933);
        come_value_29->type->mPointerNum++;
        come_value_29->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_29, "09pre_op.nc", 764, 935));
        come_call_finalizer(CVALUE_finalize, come_value_29, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 767, 936);
    }
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 767, 937);
    (initializer = come_decrement_ref_count(initializer, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 767, 938));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sArrayInitializer_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sArrayInitializer_finalize", 2, 904));
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        (self->initializer = come_decrement_ref_count(self->initializer, (void*)0, (void*)0, 0, 0, (void*)0, "sArrayInitializer_finalize", 3, 905));
    }
    if(self!=((void*)0)&&self->type_!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sArrayInitializer_finalize}", 4, 906);
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_defference_node(struct sNode* value, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_defference_node"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value6;
    struct sDerefferenceNode* _inf_obj_value6;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 773, 942, "struct sNode");
    _inf_obj_value6=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value1=sDerefferenceNode_initialize((struct sDerefferenceNode* )come_increment_ref_count((struct sDerefferenceNode *)come_calloc(1, sizeof(struct sDerefferenceNode )*(1), "09pre_op.nc", 773, 939, "struct sDerefferenceNode* "), "09pre_op.nc", 773, 940),(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 773, 941),quote,info))), "09pre_op.nc", 773, 943);
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sDerefferenceNode_finalize;
    _inf_value6->clone=(void*)sDerefferenceNode_clone;
    _inf_value6->compile=(void*)sDerefferenceNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sDerefferenceNode_kind;
    _inf_value6->left_value=(void*)sDerefferenceNode_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)), "09pre_op.nc", 773, 952);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 773, 953):(void*)0);
    come_call_finalizer(sDerefferenceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 773, 954);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 773, 955):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 773, 956):(void*)0);
    return __result_obj__0;
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sDerefferenceNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDerefferenceNode*  result  ;
    char*  __dec_obj126  ;
    struct sNode* __dec_obj127;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDerefferenceNode* )come_increment_ref_count((struct sDerefferenceNode *)come_calloc(1, sizeof(struct sDerefferenceNode )*(1), "sDerefferenceNode_clone", 5, 944, "struct sDerefferenceNode* "), "sDerefferenceNode_clone", 5, 945);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj126=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDerefferenceNode_clone", 7, 946, "char* "), "sDerefferenceNode_clone", 7, 948);
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "sDerefferenceNode_clone", 7, 947);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj127=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sDerefferenceNode_clone", 9, 950);
        (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0, (void*)0, "sDerefferenceNode_clone", 9, 949) :0);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sDerefferenceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDerefferenceNode_clone}", 11, 951);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* pre_position_operator(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "pre_position_operator"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  refference  ;
    char* p;
    int sline;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    _Bool  squort  ;
    _Bool  dquort  ;
    int nest;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value7;
    struct sArrayInitializer* _inf_obj_value7;
    void* __right_value3 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* node;
    struct sNode* _inf_value8;
    struct sLogicalDenial* _inf_obj_value8;
    struct sNode* node_30;
    struct sNode* _inf_value9;
    struct sLogicalDenial2* _inf_obj_value9;
    struct sNode* node_31;
    struct sNode* _inf_value10;
    struct sMinusMinusNode2* _inf_obj_value10;
    struct sNode* node_32;
    struct sNode* _inf_value11;
    struct sMinusNode2* _inf_obj_value11;
    struct sNode* node_33;
    struct sNode* _inf_value12;
    struct sPlusPlusNode2* _inf_obj_value12;
    struct sNode* node_34;
    struct sNode* _inf_value13;
    struct sComplement* _inf_obj_value13;
    _Bool  quote  ;
    _Bool  no_assign  ;
    struct sNode* value;
    struct sNode* _inf_value14;
    struct sDerefferenceNode* _inf_obj_value14;
    struct sNode* value_35;
    struct sNode* _inf_value15;
    struct sRefferenceNode* _inf_obj_value15;
    struct sNode* value_36;
    struct sNode* _inf_value16;
    struct sReverseNode* _inf_obj_value16;
    _Bool  cast_expression_flag  ;
    _Bool  struct_initializer_flag  ;
    char* p_37;
    int sline_38;
    char* p2;
    int sline2;
    char*  word  ;
    char*  __dec_obj141  ;
    _Bool  tuple_expression_flag  ;
    _Bool  named_tuple_expression_flag  ;
    struct list$1sNode$ph* paren_block;
    struct sNode* node2;
    struct sNode* _inf_value17;
    struct sParenBlockNode* _inf_obj_value17;
    struct sNode* node_39;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool  err  =0;
    struct buffer*  buf_40  ;
    _Bool  squort_41  ;
    _Bool  dquort_42  ;
    int nest_43;
    struct sNode* _inf_value18;
    struct sArrayInitializer* _inf_obj_value18;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;    struct sType*  type_44  =0;
    char*  name_45  =0;
    _Bool  err_46  =0;
    struct sNode* node_47;
    struct sNode* _inf_value19;
    struct sCastNode* _inf_obj_value19;
    struct sNode* node_48;
    _Bool  no_assign_49  ;
    _Bool  no_comma  ;
    struct sNode* __dec_obj144;
    struct sNode* __dec_obj145;
    struct sNode* _inf_value20;
    struct sParenNode* _inf_obj_value20;
    struct sNode* __dec_obj148;
    memset(&refference, 0, sizeof(refference));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&buf, 0, sizeof(buf));
    memset(&squort, 0, sizeof(squort));
    memset(&dquort, 0, sizeof(dquort));
    memset(&nest, 0, sizeof(nest));
    memset(&node, 0, sizeof(node));
    memset(&node_30, 0, sizeof(node_30));
    memset(&node_31, 0, sizeof(node_31));
    memset(&node_32, 0, sizeof(node_32));
    memset(&node_33, 0, sizeof(node_33));
    memset(&node_34, 0, sizeof(node_34));
    memset(&quote, 0, sizeof(quote));
    memset(&no_assign, 0, sizeof(no_assign));
    memset(&value, 0, sizeof(value));
    memset(&value_35, 0, sizeof(value_35));
    memset(&value_36, 0, sizeof(value_36));
    memset(&cast_expression_flag, 0, sizeof(cast_expression_flag));
    memset(&struct_initializer_flag, 0, sizeof(struct_initializer_flag));
    memset(&p_37, 0, sizeof(p_37));
    memset(&sline_38, 0, sizeof(sline_38));
    memset(&p2, 0, sizeof(p2));
    memset(&sline2, 0, sizeof(sline2));
    memset(&word, 0, sizeof(word));
    memset(&tuple_expression_flag, 0, sizeof(tuple_expression_flag));
    memset(&named_tuple_expression_flag, 0, sizeof(named_tuple_expression_flag));
    memset(&paren_block, 0, sizeof(paren_block));
    memset(&node2, 0, sizeof(node2));
    memset(&node_39, 0, sizeof(node_39));
    memset(&buf_40, 0, sizeof(buf_40));
    memset(&squort_41, 0, sizeof(squort_41));
    memset(&dquort_42, 0, sizeof(dquort_42));
    memset(&nest_43, 0, sizeof(nest_43));
    memset(&node_47, 0, sizeof(node_47));
    memset(&node_48, 0, sizeof(node_48));
    memset(&no_assign_49, 0, sizeof(no_assign_49));
    memset(&no_comma, 0, sizeof(no_comma));
    skip_spaces_and_lf(info);
    refference=(_Bool)0;
    {
        p=info->p;
        sline=info->sline;
        if(*info->p==38&&*(info->p+1)!=38) {
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==34) {
                refference=(_Bool)1;
            }
            else if(xisalpha(*info->p)||*info->p==95) {
                refference=(_Bool)1;
            }
            else if(*info->p==40||*info->p==42) {
                while(*info->p==40||*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(*info->p==38) {
                    refference=(_Bool)1;
                }
                else if(xisalpha(*info->p)||*info->p==95) {
                    refference=(_Bool)1;
                }
            }
        }
        info->p=p;
        info->sline=sline;
    }
    skip_spaces_and_lf(info);
    if(*info->p==123) {
        if(info->array_initializer) {
            buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "09pre_op.nc", 819, 957, "struct buffer* "), "09pre_op.nc", 819, 958)), "09pre_op.nc", 819, 959);
            buffer_append_char(buf,*info->p);
            info->p++;
            squort=(_Bool)0;
            dquort=(_Bool)0;
            nest=1;
            while(1) {
                if(*info->p==0) {
                    err_msg(info,"unexpected source end in array initiailizer");
                    exit(2);
                }
                else if(*info->p==92) {
                    buffer_append_char(buf,*info->p);
                    info->p++;
                    if(*info->p==10) {
                        info->sline++;
                    }
                    buffer_append_char(buf,*info->p);
                    info->p++;
                }
                else if(!squort&&*info->p==34) {
                    buffer_append_char(buf,*info->p);
                    info->p++;
                    dquort=!dquort;
                }
                else if(!dquort&&*info->p==39) {
                    buffer_append_char(buf,*info->p);
                    info->p++;
                    squort=!squort;
                }
                else if(squort||dquort) {
                    if(*info->p==10) {
                        info->sline++;
                    }
                    buffer_append_char(buf,*info->p);
                    info->p++;
                }
                else if(*info->p==123) {
                    nest++;
                    buffer_append_char(buf,*info->p);
                    info->p++;
                }
                else if(*info->p==125) {
                    nest--;
                    buffer_append_char(buf,*info->p);
                    info->p++;
                    if(nest==0) {
                        skip_spaces_and_lf(info);
                        break;
                    }
                }
                else if(*info->p==10) {
                    info->sline++;
                    buffer_append_char(buf,*info->p);
                    info->p++;
                }
                else {
                    buffer_append_char(buf,*info->p);
                    info->p++;
                }
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 883, 963, "struct sNode");
            _inf_obj_value7=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value2=sArrayInitializer_initialize((struct sArrayInitializer* )come_increment_ref_count((struct sArrayInitializer *)come_calloc(1, sizeof(struct sArrayInitializer )*(1), "09pre_op.nc", 883, 960, "struct sArrayInitializer* "), "09pre_op.nc", 883, 961),((void*)0),(char* )come_increment_ref_count(buffer_to_string(buf), "09pre_op.nc", 883, 962),info))), "09pre_op.nc", 883, 964);
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sArrayInitializer_finalize;
            _inf_value7->clone=(void*)sArrayInitializer_clone;
            _inf_value7->compile=(void*)sArrayInitializer_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sArrayInitializer_kind;
            _inf_value7->left_value=(void*)sNodeBase_left_value;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value7)), "09pre_op.nc", 883, 976);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 883, 977);
            come_call_finalizer(sArrayInitializer_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 883, 978);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 883, 979):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 883, 980):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 888, 981);
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_normal_block((_Bool)0,(_Bool)0,info))), "09pre_op.nc", 886, 982);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 886, 983):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 886, 984):(void*)0);
            return __result_obj__0;
        }
    }
    else if(*info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 893, 985);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 895, 989, "struct sNode");
        _inf_obj_value8=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value1=sLogicalDenial_initialize((struct sLogicalDenial* )come_increment_ref_count((struct sLogicalDenial *)come_calloc(1, sizeof(struct sLogicalDenial )*(1), "09pre_op.nc", 895, 986, "struct sLogicalDenial* "), "09pre_op.nc", 895, 987),(struct sNode*)come_increment_ref_count(node, "09pre_op.nc", 895, 988),info))), "09pre_op.nc", 895, 990);
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sLogicalDenial_finalize;
        _inf_value8->clone=(void*)sLogicalDenial_clone;
        _inf_value8->compile=(void*)sLogicalDenial_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sLogicalDenial_kind;
        _inf_value8->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "09pre_op.nc", 895, 991);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 895, 992):(void*)0);
        come_call_finalizer(sLogicalDenial_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 895, 993);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 895, 994):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 895, 995):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 996):(void*)0);
    }
    else if(*info->p==33&&*(info->p+1)==33) {
        info->p+=2;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_30=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 901, 997);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 903, 1001, "struct sNode");
        _inf_obj_value9=(struct sLogicalDenial2*)come_increment_ref_count(((struct sLogicalDenial2*)(__right_value1=sLogicalDenial2_initialize((struct sLogicalDenial2* )come_increment_ref_count((struct sLogicalDenial2 *)come_calloc(1, sizeof(struct sLogicalDenial2 )*(1), "09pre_op.nc", 903, 998, "struct sLogicalDenial2* "), "09pre_op.nc", 903, 999),(struct sNode*)come_increment_ref_count(node_30, "09pre_op.nc", 903, 1000),info))), "09pre_op.nc", 903, 1002);
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sLogicalDenial2_finalize;
        _inf_value9->clone=(void*)sLogicalDenial2_clone;
        _inf_value9->compile=(void*)sLogicalDenial2_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sLogicalDenial2_kind;
        _inf_value9->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "09pre_op.nc", 903, 1011);
        ((node_30) ? node_30 = come_decrement_ref_count(node_30, ((struct sNode*)node_30)->finalize, ((struct sNode*)node_30)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 903, 1012):(void*)0);
        come_call_finalizer(sLogicalDenial2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 903, 1013);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 903, 1014):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 903, 1015):(void*)0);
        return __result_obj__0;
        ((node_30) ? node_30 = come_decrement_ref_count(node_30, ((struct sNode*)node_30)->finalize, ((struct sNode*)node_30)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1016):(void*)0);
    }
    else if(*info->p==45&&*(info->p+1)==45) {
        info->p+=2;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_31=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 909, 1017);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 911, 1021, "struct sNode");
        _inf_obj_value10=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(__right_value1=sMinusMinusNode2_initialize((struct sMinusMinusNode2* )come_increment_ref_count((struct sMinusMinusNode2 *)come_calloc(1, sizeof(struct sMinusMinusNode2 )*(1), "09pre_op.nc", 911, 1018, "struct sMinusMinusNode2* "), "09pre_op.nc", 911, 1019),(struct sNode*)come_increment_ref_count(node_31, "09pre_op.nc", 911, 1020),info))), "09pre_op.nc", 911, 1022);
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sMinusMinusNode2_finalize;
        _inf_value10->clone=(void*)sMinusMinusNode2_clone;
        _inf_value10->compile=(void*)sMinusMinusNode2_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sMinusMinusNode2_kind;
        _inf_value10->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "09pre_op.nc", 911, 1031);
        ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 911, 1032):(void*)0);
        come_call_finalizer(sMinusMinusNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 911, 1033);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 911, 1034):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 911, 1035):(void*)0);
        return __result_obj__0;
        ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1036):(void*)0);
    }
    else if(*info->p==45&&!xisdigit(*(info->p+1))) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_32=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 917, 1037);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 919, 1041, "struct sNode");
        _inf_obj_value11=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(__right_value1=sMinusNode2_initialize((struct sMinusNode2* )come_increment_ref_count((struct sMinusNode2 *)come_calloc(1, sizeof(struct sMinusNode2 )*(1), "09pre_op.nc", 919, 1038, "struct sMinusNode2* "), "09pre_op.nc", 919, 1039),(struct sNode*)come_increment_ref_count(node_32, "09pre_op.nc", 919, 1040),info))), "09pre_op.nc", 919, 1042);
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sMinusNode2_finalize;
        _inf_value11->clone=(void*)sMinusNode2_clone;
        _inf_value11->compile=(void*)sMinusNode2_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sMinusNode2_kind;
        _inf_value11->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)), "09pre_op.nc", 919, 1051);
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 919, 1052):(void*)0);
        come_call_finalizer(sMinusNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 919, 1053);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 919, 1054):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 919, 1055):(void*)0);
        return __result_obj__0;
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1056):(void*)0);
    }
    else if(*info->p==43&&*(info->p+1)==43) {
        info->p+=2;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_33=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 925, 1057);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 927, 1061, "struct sNode");
        _inf_obj_value12=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(__right_value1=sPlusPlusNode2_initialize((struct sPlusPlusNode2* )come_increment_ref_count((struct sPlusPlusNode2 *)come_calloc(1, sizeof(struct sPlusPlusNode2 )*(1), "09pre_op.nc", 927, 1058, "struct sPlusPlusNode2* "), "09pre_op.nc", 927, 1059),(struct sNode*)come_increment_ref_count(node_33, "09pre_op.nc", 927, 1060),info))), "09pre_op.nc", 927, 1062);
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sPlusPlusNode2_finalize;
        _inf_value12->clone=(void*)sPlusPlusNode2_clone;
        _inf_value12->compile=(void*)sPlusPlusNode2_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sPlusPlusNode2_kind;
        _inf_value12->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "09pre_op.nc", 927, 1071);
        ((node_33) ? node_33 = come_decrement_ref_count(node_33, ((struct sNode*)node_33)->finalize, ((struct sNode*)node_33)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 927, 1072):(void*)0);
        come_call_finalizer(sPlusPlusNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 927, 1073);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 927, 1074):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 927, 1075):(void*)0);
        return __result_obj__0;
        ((node_33) ? node_33 = come_decrement_ref_count(node_33, ((struct sNode*)node_33)->finalize, ((struct sNode*)node_33)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1076):(void*)0);
    }
    else if(*info->p==126) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_34=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 933, 1077);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 935, 1081, "struct sNode");
        _inf_obj_value13=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(__right_value1=sComplement_initialize((struct sComplement* )come_increment_ref_count((struct sComplement *)come_calloc(1, sizeof(struct sComplement )*(1), "09pre_op.nc", 935, 1078, "struct sComplement* "), "09pre_op.nc", 935, 1079),(struct sNode*)come_increment_ref_count(node_34, "09pre_op.nc", 935, 1080),info))), "09pre_op.nc", 935, 1082);
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sComplement_finalize;
        _inf_value13->clone=(void*)sComplement_clone;
        _inf_value13->compile=(void*)sComplement_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sComplement_kind;
        _inf_value13->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "09pre_op.nc", 935, 1091);
        ((node_34) ? node_34 = come_decrement_ref_count(node_34, ((struct sNode*)node_34)->finalize, ((struct sNode*)node_34)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 935, 1092):(void*)0);
        come_call_finalizer(sComplement_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 935, 1093);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 935, 1094):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 935, 1095):(void*)0);
        return __result_obj__0;
        ((node_34) ? node_34 = come_decrement_ref_count(node_34, ((struct sNode*)node_34)->finalize, ((struct sNode*)node_34)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1096):(void*)0);
    }
    else if((*info->p==92&&*(info->p+1)==42)||*info->p==42) {
        if(*info->p==92) {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote=(_Bool)1;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            quote=(_Bool)0;
        }
        no_assign=info->no_assign;
        info->no_assign=(_Bool)1;
        __right_value0 = (void*)0;
        value=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 952, 1097);
        info->no_assign=no_assign;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 955, 1101, "struct sNode");
        _inf_obj_value14=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value1=sDerefferenceNode_initialize((struct sDerefferenceNode* )come_increment_ref_count((struct sDerefferenceNode *)come_calloc(1, sizeof(struct sDerefferenceNode )*(1), "09pre_op.nc", 955, 1098, "struct sDerefferenceNode* "), "09pre_op.nc", 955, 1099),(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 955, 1100),quote,info))), "09pre_op.nc", 955, 1102);
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sDerefferenceNode_finalize;
        _inf_value14->clone=(void*)sDerefferenceNode_clone;
        _inf_value14->compile=(void*)sDerefferenceNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sDerefferenceNode_kind;
        _inf_value14->left_value=(void*)sDerefferenceNode_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)), "09pre_op.nc", 955, 1103);
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 955, 1104):(void*)0);
        come_call_finalizer(sDerefferenceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 955, 1105);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 955, 1106):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 955, 1107):(void*)0);
        return __result_obj__0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1108):(void*)0);
    }
    else if(*info->p==38&&refference) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        value_35=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 961, 1109);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 963, 1113, "struct sNode");
        _inf_obj_value15=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value1=sRefferenceNode_initialize((struct sRefferenceNode* )come_increment_ref_count((struct sRefferenceNode *)come_calloc(1, sizeof(struct sRefferenceNode )*(1), "09pre_op.nc", 963, 1110, "struct sRefferenceNode* "), "09pre_op.nc", 963, 1111),(struct sNode*)come_increment_ref_count(value_35, "09pre_op.nc", 963, 1112),info))), "09pre_op.nc", 963, 1114);
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sRefferenceNode_finalize;
        _inf_value15->clone=(void*)sRefferenceNode_clone;
        _inf_value15->compile=(void*)sRefferenceNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sRefferenceNode_kind;
        _inf_value15->left_value=(void*)sRefferenceNode_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)), "09pre_op.nc", 963, 1115);
        ((value_35) ? value_35 = come_decrement_ref_count(value_35, ((struct sNode*)value_35)->finalize, ((struct sNode*)value_35)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 963, 1116):(void*)0);
        come_call_finalizer(sRefferenceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 963, 1117);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 963, 1118):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 963, 1119):(void*)0);
        return __result_obj__0;
        ((value_35) ? value_35 = come_decrement_ref_count(value_35, ((struct sNode*)value_35)->finalize, ((struct sNode*)value_35)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1120):(void*)0);
    }
    else if(*info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        value_36=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 979, 1121);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 981, 1125, "struct sNode");
        _inf_obj_value16=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value1=sReverseNode_initialize((struct sReverseNode* )come_increment_ref_count((struct sReverseNode *)come_calloc(1, sizeof(struct sReverseNode )*(1), "09pre_op.nc", 981, 1122, "struct sReverseNode* "), "09pre_op.nc", 981, 1123),(struct sNode*)come_increment_ref_count(value_36, "09pre_op.nc", 981, 1124),info))), "09pre_op.nc", 981, 1126);
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sReverseNode_finalize;
        _inf_value16->clone=(void*)sReverseNode_clone;
        _inf_value16->compile=(void*)sReverseNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sReverseNode_kind;
        _inf_value16->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)), "09pre_op.nc", 981, 1127);
        ((value_36) ? value_36 = come_decrement_ref_count(value_36, ((struct sNode*)value_36)->finalize, ((struct sNode*)value_36)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 981, 1128):(void*)0);
        come_call_finalizer(sReverseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 981, 1129);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 981, 1130):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 981, 1131):(void*)0);
        return __result_obj__0;
        ((value_36) ? value_36 = come_decrement_ref_count(value_36, ((struct sNode*)value_36)->finalize, ((struct sNode*)value_36)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1132):(void*)0);
    }
    else if(*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        cast_expression_flag=(_Bool)0;
        struct_initializer_flag=(_Bool)0;
        {
            p_37=info->p;
            sline_38=info->sline;
            skip_spaces_and_lf(info);
            p2=info->p;
            sline2=info->sline;
            __right_value0 = (void*)0;
            word=(char* )come_increment_ref_count(__builtin_string("","09pre_op.nc",999), "09pre_op.nc", 999, 1133);
            if(xisalpha(*info->p)||*info->p==95) {
                __right_value0 = (void*)0;
                __dec_obj141=word,
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "09pre_op.nc", 1001, 1135);
                __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 1001, 1134);
                if(is_type_name(word,info)) {
                    info->p=p2;
                    info->sline=sline2;
                    __right_value0 = (void*)0;
                    ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1006, 1138);
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p==123) {
                            struct_initializer_flag=(_Bool)1;
                        }
                        else {
                            cast_expression_flag=(_Bool)1;
                        }
                    }
                }
            }
            skip_spaces_and_lf(info);
            info->p=p_37;
            info->sline=sline_38;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 1028, 1139));
        }
        tuple_expression_flag=(_Bool)0;
        named_tuple_expression_flag=(_Bool)0;
        if(*info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            paren_block=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "09pre_op.nc", 1085, 1140, "struct list$1sNode$ph*"), "09pre_op.nc", 1085, 1141)), "09pre_op.nc", 1085, 1142);
            while((_Bool)1) {
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "09pre_op.nc", 1090, 1143);
                skip_spaces_and_lf(info);
                list$1sNode$ph_add(paren_block,(struct sNode*)come_increment_ref_count(node2, "09pre_op.nc", 1094, 1144));
                while(*info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(*info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1104, 1145):(void*)0);
                    break;
                }
                else if(*info->p==0) {
                    err_msg(info,"invalid source end in paren block");
                    exit(0);
                }
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1112, 1146):(void*)0);
            }
            expected_next_character(41,info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 1114, 1150, "struct sNode");
            _inf_obj_value17=(struct sParenBlockNode*)come_increment_ref_count(((struct sParenBlockNode*)(__right_value1=sParenBlockNode_initialize((struct sParenBlockNode* )come_increment_ref_count((struct sParenBlockNode *)come_calloc(1, sizeof(struct sParenBlockNode )*(1), "09pre_op.nc", 1114, 1147, "struct sParenBlockNode* "), "09pre_op.nc", 1114, 1148),(struct list$1sNode$ph*)come_increment_ref_count(paren_block, "09pre_op.nc", 1114, 1149),info))), "09pre_op.nc", 1114, 1151);
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sParenBlockNode_finalize;
            _inf_value17->clone=(void*)sParenBlockNode_clone;
            _inf_value17->compile=(void*)sParenBlockNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sParenBlockNode_kind;
            _inf_value17->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            node_39=(struct sNode*)come_increment_ref_count(_inf_value17, "09pre_op.nc", 1114, 1160);
            come_call_finalizer(sParenBlockNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1114, 1161);
            skip_spaces_and_lf(info);
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_39, "09pre_op.nc", 1118, 1162);
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1118, 1163);
            ((node_39) ? node_39 = come_decrement_ref_count(node_39, ((struct sNode*)node_39)->finalize, ((struct sNode*)node_39)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1118, 1164):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1118, 1165):(void*)0);
            return __result_obj__0;
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1253, 1166);
            ((node_39) ? node_39 = come_decrement_ref_count(node_39, ((struct sNode*)node_39)->finalize, ((struct sNode*)node_39)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1253, 1167):(void*)0);
        }
        else if(struct_initializer_flag) {
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "09pre_op.nc", 1133, 1168);
            name=(char* )come_increment_ref_count(multiple_assign_var2->v2, "09pre_op.nc", 1133, 1169);
            err=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1133, 1170);
            if(!err) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            expected_next_character(41,info);
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buf_40=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "09pre_op.nc", 1143, 1171, "struct buffer* "), "09pre_op.nc", 1143, 1172)), "09pre_op.nc", 1143, 1173);
            buffer_append_char(buf_40,*info->p);
            info->p++;
            squort_41=(_Bool)0;
            dquort_42=(_Bool)0;
            nest_43=1;
            while(1) {
                if(*info->p==0) {
                    err_msg(info,"unexpected source end in array initiailizer");
                    exit(2);
                }
                else if(*info->p==92) {
                    buffer_append_char(buf_40,*info->p);
                    info->p++;
                    if(*info->p==10) {
                        info->sline++;
                    }
                    buffer_append_char(buf_40,*info->p);
                    info->p++;
                }
                else if(!squort_41&&*info->p==34) {
                    buffer_append_char(buf_40,*info->p);
                    info->p++;
                    dquort_42=!dquort_42;
                }
                else if(!dquort_42&&*info->p==39) {
                    buffer_append_char(buf_40,*info->p);
                    info->p++;
                    squort_41=!squort_41;
                }
                else if(squort_41||dquort_42) {
                    if(*info->p==10) {
                        info->sline++;
                    }
                    buffer_append_char(buf_40,*info->p);
                    info->p++;
                }
                else if(*info->p==123) {
                    nest_43++;
                    buffer_append_char(buf_40,*info->p);
                    info->p++;
                }
                else if(*info->p==125) {
                    nest_43--;
                    buffer_append_char(buf_40,*info->p);
                    info->p++;
                    if(nest_43==0) {
                        skip_spaces_and_lf(info);
                        break;
                    }
                }
                else if(*info->p==10) {
                    info->sline++;
                    buffer_append_char(buf_40,*info->p);
                    info->p++;
                }
                else {
                    buffer_append_char(buf_40,*info->p);
                    info->p++;
                }
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 1207, 1177, "struct sNode");
            _inf_obj_value18=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value2=sArrayInitializer_initialize((struct sArrayInitializer* )come_increment_ref_count((struct sArrayInitializer *)come_calloc(1, sizeof(struct sArrayInitializer )*(1), "09pre_op.nc", 1207, 1174, "struct sArrayInitializer* "), "09pre_op.nc", 1207, 1175),type,(char* )come_increment_ref_count(buffer_to_string(buf_40), "09pre_op.nc", 1207, 1176),info))), "09pre_op.nc", 1207, 1178);
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sArrayInitializer_finalize;
            _inf_value18->clone=(void*)sArrayInitializer_clone;
            _inf_value18->compile=(void*)sArrayInitializer_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sArrayInitializer_kind;
            _inf_value18->left_value=(void*)sNodeBase_left_value;
            __right_value3 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value18)), "09pre_op.nc", 1207, 1179);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1207, 1180);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 1207, 1181));
            come_call_finalizer(buffer_finalize, buf_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1207, 1182);
            come_call_finalizer(sArrayInitializer_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1207, 1183);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 1207, 1184):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1207, 1185):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1253, 1186);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 1253, 1187));
            come_call_finalizer(buffer_finalize, buf_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1253, 1188);
        }
        else if(cast_expression_flag) {
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_44=(struct sType* )come_increment_ref_count(multiple_assign_var3->v1, "09pre_op.nc", 1211, 1189);
            name_45=(char* )come_increment_ref_count(multiple_assign_var3->v2, "09pre_op.nc", 1211, 1190);
            err_46=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1211, 1191);
            if(!err_46) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            expected_next_character(41,info);
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node_47=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 1221, 1192);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 1223, 1195, "struct sNode");
            _inf_obj_value19=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value1=sCastNode_initialize((struct sCastNode* )come_increment_ref_count((struct sCastNode *)come_calloc(1, sizeof(struct sCastNode )*(1), "09pre_op.nc", 1223, 1193, "struct sCastNode* "), "09pre_op.nc", 1223, 1194),type_44,node_47,info))), "09pre_op.nc", 1223, 1196);
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCastNode_finalize;
            _inf_value19->clone=(void*)sCastNode_clone;
            _inf_value19->compile=(void*)sCastNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCastNode_kind;
            _inf_value19->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value19)), "09pre_op.nc", 1223, 1197);
            come_call_finalizer(sType_finalize, type_44, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1223, 1198);
            (name_45 = come_decrement_ref_count(name_45, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 1223, 1199));
            ((node_47) ? node_47 = come_decrement_ref_count(node_47, ((struct sNode*)node_47)->finalize, ((struct sNode*)node_47)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1223, 1200):(void*)0);
            come_call_finalizer(sCastNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1223, 1201);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 1223, 1202):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1223, 1203):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_44, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1253, 1204);
            (name_45 = come_decrement_ref_count(name_45, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 1253, 1205));
            ((node_47) ? node_47 = come_decrement_ref_count(node_47, ((struct sNode*)node_47)->finalize, ((struct sNode*)node_47)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1253, 1206):(void*)0);
        }
        else {
            no_assign_49=info->no_assign;
            info->no_assign=(_Bool)0;
            if(gComeC&&info->in_fun_param) {
                no_comma=info->no_comma;
                info->no_comma=(_Bool)0;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                __dec_obj144=node_48,
                node_48=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "09pre_op.nc", 1234, 1208);
                (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 1234, 1207) :0);
                skip_spaces_and_lf(info);
                info->no_comma=no_comma;
            }
            else {
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                __dec_obj145=node_48,
                node_48=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "09pre_op.nc", 1240, 1210);
                (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 1240, 1209) :0);
                skip_spaces_and_lf(info);
            }
            info->no_assign=no_assign_49;
            expected_next_character(41,info);
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 1249, 1213, "struct sNode");
            _inf_obj_value20=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(__right_value1=sParenNode_initialize((struct sParenNode* )come_increment_ref_count((struct sParenNode *)come_calloc(1, sizeof(struct sParenNode )*(1), "09pre_op.nc", 1249, 1211, "struct sParenNode* "), "09pre_op.nc", 1249, 1212),node_48,info))), "09pre_op.nc", 1249, 1214);
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sParenNode_finalize;
            _inf_value20->clone=(void*)sParenNode_clone;
            _inf_value20->compile=(void*)sParenNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sParenNode_kind;
            _inf_value20->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj148=node_48,
            node_48=(struct sNode*)come_increment_ref_count(_inf_value20, "09pre_op.nc", 1249, 1224);
            (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 1249, 1223) :0);
            come_call_finalizer(sParenNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1249, 1225);
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_48, "09pre_op.nc", 1251, 1226);
            ((node_48) ? node_48 = come_decrement_ref_count(node_48, ((struct sNode*)node_48)->finalize, ((struct sNode*)node_48)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1251, 1227):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1251, 1228):(void*)0);
            return __result_obj__0;
            ((node_48) ? node_48 = come_decrement_ref_count(node_48, ((struct sNode*)node_48)->finalize, ((struct sNode*)node_48)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1253, 1229):(void*)0);
        }
    }
    else {
                __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "09pre_op.nc", 1255, 1230);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1255, 1231):(void*)0);
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sArrayInitializer_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sArrayInitializer* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sArrayInitializer*  result  ;
    char*  __dec_obj128  ;
    char*  __dec_obj129  ;
    struct sType*  __dec_obj130  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sArrayInitializer* )come_increment_ref_count((struct sArrayInitializer *)come_calloc(1, sizeof(struct sArrayInitializer )*(1), "sArrayInitializer_clone", 5, 965, "struct sArrayInitializer* "), "sArrayInitializer_clone", 5, 966);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj128=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sArrayInitializer_clone", 7, 967, "char* "), "sArrayInitializer_clone", 7, 969);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "sArrayInitializer_clone", 7, 968);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj129=result->initializer,
        result->initializer=(char* )come_increment_ref_count((char* )come_memdup(self->initializer, "sArrayInitializer_clone", 9, 970, "char* "), "sArrayInitializer_clone", 9, 972);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "sArrayInitializer_clone", 9, 971);
    }
    if(self!=((void*)0)&&self->type_!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj130=result->type_,
        result->type_=(struct sType* )come_increment_ref_count(sType_clone(self->type_), "sArrayInitializer_clone", 10, 974);
        come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sArrayInitializer_clone", 10, 973);
    }
        __result_obj__0 = result;
    come_call_finalizer(sArrayInitializer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sArrayInitializer_clone}", 11, 975);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial2_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sLogicalDenial2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLogicalDenial2*  result  ;
    char*  __dec_obj131  ;
    struct sNode* __dec_obj132;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLogicalDenial2* )come_increment_ref_count((struct sLogicalDenial2 *)come_calloc(1, sizeof(struct sLogicalDenial2 )*(1), "sLogicalDenial2_clone", 5, 1003, "struct sLogicalDenial2* "), "sLogicalDenial2_clone", 5, 1004);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj131=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLogicalDenial2_clone", 7, 1005, "char* "), "sLogicalDenial2_clone", 7, 1007);
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0, "sLogicalDenial2_clone", 7, 1006);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj132=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sLogicalDenial2_clone", 9, 1009);
        (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0, (void*)0, "sLogicalDenial2_clone", 9, 1008) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLogicalDenial2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLogicalDenial2_clone}", 10, 1010);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode2_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMinusMinusNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMinusMinusNode2*  result  ;
    char*  __dec_obj133  ;
    struct sNode* __dec_obj134;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMinusMinusNode2* )come_increment_ref_count((struct sMinusMinusNode2 *)come_calloc(1, sizeof(struct sMinusMinusNode2 )*(1), "sMinusMinusNode2_clone", 5, 1023, "struct sMinusMinusNode2* "), "sMinusMinusNode2_clone", 5, 1024);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj133=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMinusMinusNode2_clone", 7, 1025, "char* "), "sMinusMinusNode2_clone", 7, 1027);
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "sMinusMinusNode2_clone", 7, 1026);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj134=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sMinusMinusNode2_clone", 9, 1029);
        (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0, (void*)0, "sMinusMinusNode2_clone", 9, 1028) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sMinusMinusNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMinusMinusNode2_clone}", 10, 1030);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusNode2_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMinusNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMinusNode2*  result  ;
    char*  __dec_obj135  ;
    struct sNode* __dec_obj136;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMinusNode2* )come_increment_ref_count((struct sMinusNode2 *)come_calloc(1, sizeof(struct sMinusNode2 )*(1), "sMinusNode2_clone", 5, 1043, "struct sMinusNode2* "), "sMinusNode2_clone", 5, 1044);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj135=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMinusNode2_clone", 7, 1045, "char* "), "sMinusNode2_clone", 7, 1047);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "sMinusNode2_clone", 7, 1046);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj136=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sMinusNode2_clone", 9, 1049);
        (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0, "sMinusNode2_clone", 9, 1048) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sMinusNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMinusNode2_clone}", 10, 1050);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode2_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sPlusPlusNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sPlusPlusNode2*  result  ;
    char*  __dec_obj137  ;
    struct sNode* __dec_obj138;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sPlusPlusNode2* )come_increment_ref_count((struct sPlusPlusNode2 *)come_calloc(1, sizeof(struct sPlusPlusNode2 )*(1), "sPlusPlusNode2_clone", 5, 1063, "struct sPlusPlusNode2* "), "sPlusPlusNode2_clone", 5, 1064);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj137=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sPlusPlusNode2_clone", 7, 1065, "char* "), "sPlusPlusNode2_clone", 7, 1067);
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0, "sPlusPlusNode2_clone", 7, 1066);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj138=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sPlusPlusNode2_clone", 9, 1069);
        (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0, (void*)0, "sPlusPlusNode2_clone", 9, 1068) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sPlusPlusNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sPlusPlusNode2_clone}", 10, 1070);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComplement* sComplement_clone(struct sComplement* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComplement_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sComplement* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComplement*  result  ;
    char*  __dec_obj139  ;
    struct sNode* __dec_obj140;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComplement* )come_increment_ref_count((struct sComplement *)come_calloc(1, sizeof(struct sComplement )*(1), "sComplement_clone", 5, 1083, "struct sComplement* "), "sComplement_clone", 5, 1084);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj139=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComplement_clone", 7, 1085, "char* "), "sComplement_clone", 7, 1087);
        __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0, "sComplement_clone", 7, 1086);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj140=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sComplement_clone", 9, 1089);
        (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0, (void*)0, "sComplement_clone", 9, 1088) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sComplement_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sComplement_clone}", 10, 1090);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 1136);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 1137));
    }
                        neo_current_frame = fr.prev;
}

static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sParenBlockNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sParenBlockNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sParenBlockNode*  result  ;
    char*  __dec_obj142  ;
    struct list$1sNode$ph* __dec_obj143;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sParenBlockNode* )come_increment_ref_count((struct sParenBlockNode *)come_calloc(1, sizeof(struct sParenBlockNode )*(1), "sParenBlockNode_clone", 5, 1152, "struct sParenBlockNode* "), "sParenBlockNode_clone", 5, 1153);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj142=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sParenBlockNode_clone", 7, 1154, "char* "), "sParenBlockNode_clone", 7, 1156);
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "sParenBlockNode_clone", 7, 1155);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->paren_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj143=result->paren_block,
        result->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->paren_block), "sParenBlockNode_clone", 9, 1158);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sParenBlockNode_clone", 9, 1157);
    }
        __result_obj__0 = result;
    come_call_finalizer(sParenBlockNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sParenBlockNode_clone}", 10, 1159);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sParenNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sParenNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sParenNode*  result  ;
    char*  __dec_obj146  ;
    struct sNode* __dec_obj147;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sParenNode* )come_increment_ref_count((struct sParenNode *)come_calloc(1, sizeof(struct sParenNode )*(1), "sParenNode_clone", 5, 1215, "struct sParenNode* "), "sParenNode_clone", 5, 1216);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj146=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sParenNode_clone", 7, 1217, "char* "), "sParenNode_clone", 7, 1219);
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0, "sParenNode_clone", 7, 1218);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj147=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sParenNode_clone", 9, 1221);
        (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0, (void*)0, "sParenNode_clone", 9, 1220) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sParenNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sParenNode_clone}", 10, 1222);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* expression_node_v97(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v97"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    node=(struct sNode*)come_increment_ref_count(pre_position_operator(info), "09pre_op.nc", 1261, 1232);
    if(node==((void*)0)) {
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=expression_node_v96(info))), "09pre_op.nc", 1264, 1233);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1264, 1234):(void*)0);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 1264, 1235):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1264, 1236):(void*)0);
        return __result_obj__0;
    }
    else {
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "09pre_op.nc", 1267, 1237);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1267, 1238):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1267, 1239):(void*)0);
        return __result_obj__0;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1270, 1240):(void*)0);
    neo_current_frame = fr.prev;
}

