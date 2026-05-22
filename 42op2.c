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

struct sNullNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sAddNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool  mQuote  ;
};

struct sSubNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool  mQuote  ;
};

struct sMultNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool  mQuote  ;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
};

struct sTypeNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
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
struct sNode* create_try_operator_node(struct sNode* node, struct sInfo*  info  );
struct sNode* post_op_v13(struct sNode* node, struct sInfo*  info  );
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
_Bool  is_ref_or_optional_type_for_operator(struct sType*  type  , struct sInfo*  info  );
_Bool  reject_ref_optional_unary_operator(const char* op_name, struct CVALUE*  value  , struct sInfo*  info  );
_Bool  reject_ref_optional_binary_operator(const char* op_name, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  );
_Bool  operator_overload_fun(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  right_value  , _Bool  break_guard  , struct sInfo*  info  );
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo*  info  );
char*  sNullNode_kind(struct sNullNode* self);
_Bool  sNullNode_compile(struct sNullNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sNullNode_finalize(struct sNullNode* self);
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sNode* create_null_node(struct sInfo*  info  );
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sAddNode_kind(struct sAddNode* self);
_Bool  sAddNode_compile(struct sAddNode* self, struct sInfo*  info  );
static struct sNode* sNode_clone(struct sNode* self);
static void sAddNode_finalize(struct sAddNode* self);
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  );
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
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
struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  );
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sSubNode_kind(struct sSubNode* self);
_Bool  sSubNode_compile(struct sSubNode* self, struct sInfo*  info  );
static void sSubNode_finalize(struct sSubNode* self);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sMultNode_kind(struct sMultNode* self);
_Bool  sMultNode_compile(struct sMultNode* self, struct sInfo*  info  );
static void sMultNode_finalize(struct sMultNode* self);
static char*  create_zero_division_checked_binary_code(struct CVALUE*  left_value  , struct CVALUE*  right_value  , const char* op, const char* message, struct sInfo*  info  );
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sDivNode_kind(struct sDivNode* self);
_Bool  sDivNode_compile(struct sDivNode* self, struct sInfo*  info  );
static void sDivNode_finalize(struct sDivNode* self);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sModNode_kind(struct sModNode* self);
_Bool  sModNode_compile(struct sModNode* self, struct sInfo*  info  );
static void sModNode_finalize(struct sModNode* self);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sLShiftNode_kind(struct sLShiftNode* self);
_Bool  sLShiftNode_compile(struct sLShiftNode* self, struct sInfo*  info  );
static void sLShiftNode_finalize(struct sLShiftNode* self);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sRShiftNode_kind(struct sRShiftNode* self);
_Bool  sRShiftNode_compile(struct sRShiftNode* self, struct sInfo*  info  );
static void sRShiftNode_finalize(struct sRShiftNode* self);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sGtEqNode_kind(struct sGtEqNode* self);
_Bool  sGtEqNode_compile(struct sGtEqNode* self, struct sInfo*  info  );
static void sGtEqNode_finalize(struct sGtEqNode* self);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sLtEqNode_kind(struct sLtEqNode* self);
_Bool  sLtEqNode_compile(struct sLtEqNode* self, struct sInfo*  info  );
static void sLtEqNode_finalize(struct sLtEqNode* self);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sLtNode_kind(struct sLtNode* self);
_Bool  sLtNode_compile(struct sLtNode* self, struct sInfo*  info  );
static void sLtNode_finalize(struct sLtNode* self);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sGtNode_kind(struct sGtNode* self);
_Bool  sGtNode_compile(struct sGtNode* self, struct sInfo*  info  );
static void sGtNode_finalize(struct sGtNode* self);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sEqNode_kind(struct sEqNode* self);
_Bool  sEqNode_compile(struct sEqNode* self, struct sInfo*  info  );
static void sEqNode_finalize(struct sEqNode* self);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sNotEqNode_kind(struct sNotEqNode* self);
_Bool  sNotEqNode_compile(struct sNotEqNode* self, struct sInfo*  info  );
static void sNotEqNode_finalize(struct sNotEqNode* self);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sEq2Node_kind(struct sEq2Node* self);
_Bool  sEq2Node_compile(struct sEq2Node* self, struct sInfo*  info  );
static void sEq2Node_finalize(struct sEq2Node* self);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool  sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo*  info  );
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sAndNode_kind(struct sAndNode* self);
_Bool  sAndNode_compile(struct sAndNode* self, struct sInfo*  info  );
static void sAndNode_finalize(struct sAndNode* self);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sXOrNode_kind(struct sXOrNode* self);
_Bool  sXOrNode_compile(struct sXOrNode* self, struct sInfo*  info  );
static void sXOrNode_finalize(struct sXOrNode* self);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sOrNode_kind(struct sOrNode* self);
_Bool  sOrNode_compile(struct sOrNode* self, struct sInfo*  info  );
static void sOrNode_finalize(struct sOrNode* self);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sAndAndNode_kind(struct sAndAndNode* self);
_Bool  sAndAndNode_compile(struct sAndAndNode* self, struct sInfo*  info  );
static void sAndAndNode_finalize(struct sAndAndNode* self);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  );
char*  sOrOrNode_kind(struct sOrOrNode* self);
_Bool  sOrOrNode_compile(struct sOrOrNode* self, struct sInfo*  info  );
static void sOrOrNode_finalize(struct sOrOrNode* self);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo*  info  );
char*  sCommaNode_kind(struct sCommaNode* self);
_Bool  sCommaNode_compile(struct sCommaNode* self, struct sInfo*  info  );
static void sCommaNode_finalize(struct sCommaNode* self);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  );
char*  sConditionalNode_kind(struct sConditionalNode* self);
_Bool  sConditionalNode_compile(struct sConditionalNode* self, struct sInfo*  info  );
static void sConditionalNode_finalize(struct sConditionalNode* self);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  );
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* mult_exp(struct sInfo*  info  );
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo*  info  );
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo*  info  );
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo*  info  );
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo*  info  );
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo*  info  );
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo*  info  );
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo*  info  );
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo*  info  );
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo*  info  );
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo*  info  );
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* comma_exp(struct sInfo*  info  );
struct sNode* conditional_exp(struct sInfo*  info  );
struct sTypeNode* sTypeNode_initialize(struct sTypeNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sTypeNode_kind(struct sTypeNode* self);
_Bool  sTypeNode_compile(struct sTypeNode* self, struct sInfo*  info  );
static void sTypeNode_finalize(struct sTypeNode* self);
struct sNode* expression_v13(struct sInfo*  info  , _Bool  type_name_exp  );
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct sTypeNode* sTypeNode_clone(struct sTypeNode* self);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo*  info  );
// uniq global variable
// inline function

// body function
_Bool  is_ref_or_optional_type_for_operator(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "is_ref_or_optional_type_for_operator"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  type2  ;
    char* class_name;
    memset(&type2, 0, sizeof(type2));
    memset(&class_name, 0, sizeof(class_name));
    if(type==((void*)0)||type->mClass==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    type2=type;
    if(type->mNoSolvedGenericsType&&type->mNoSolvedGenericsType->mClass) {
        type2=type->mNoSolvedGenericsType;
    }
    class_name=type2->mClass->mName;
        neo_current_frame = fr.prev;
    return charp_operator_equals(class_name,"ref")||charp_operator_equals(class_name,"optional")||(strlen(class_name)>=4&&memcmp(class_name,"ref$",4)==0)||(strlen(class_name)>=9&&memcmp(class_name,"optional$",9)==0);
    neo_current_frame = fr.prev;
}

_Bool  reject_ref_optional_unary_operator(const char* op_name, struct CVALUE*  value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "reject_ref_optional_unary_operator"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(value&&is_ref_or_optional_type_for_operator(value->type,info)) {
        err_msg(info,"invalid operator(%s). ref/optional type is not supported this operator",op_name);
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool  reject_ref_optional_binary_operator(const char* op_name, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "reject_ref_optional_binary_operator"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if((left_value&&is_ref_or_optional_type_for_operator(left_value->type,info))||(right_value&&is_ref_or_optional_type_for_operator(right_value->type,info))) {
        err_msg(info,"invalid operator(%s). ref/optional type is not supported this operator",op_name);
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool  operator_overload_fun(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  right_value  , _Bool  break_guard  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "operator_overload_fun"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  __result_obj__0  ;
    struct sType*  generics_type  ;
    struct sType*  type2  ;
    struct sClass*  klass  ;
    char* class_name;
    void* __right_value0 = (void*)0;
    struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1
;    char*  fun_name2  =0;
    struct sFun*  operator_fun  =0;
    struct sGenericsFun*  generics_fun  =0;
    _Bool  result  ;
    struct sRightValueObject*  right_value_object  ;
    struct sRightValueObject*  right_value_object_0  ;
    struct sNode* obj;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node;
    _Bool  Value  ;
    memset(&generics_type, 0, sizeof(generics_type));
    memset(&type2, 0, sizeof(type2));
    memset(&klass, 0, sizeof(klass));
    memset(&class_name, 0, sizeof(class_name));
    memset(&result, 0, sizeof(result));
    memset(&right_value_object, 0, sizeof(right_value_object));
    memset(&right_value_object_0, 0, sizeof(right_value_object_0));
    memset(&obj, 0, sizeof(obj));
    memset(&params, 0, sizeof(params));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    if(reject_ref_optional_binary_operator(fun_name,left_value,right_value,info)) {
                __result_obj__0 = (_Bool)1;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 47, 1):(void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 47, 2):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(type->mNoSolvedGenericsType) {
        generics_type=type->mNoSolvedGenericsType;
    }
    else {
        generics_type=type;
    }
    if(type->mNoSolvedGenericsType) {
        type2=type->mNoSolvedGenericsType;
    }
    else {
        type2=type;
    }
    klass=type2->mClass;
    class_name=klass->mName;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,type2,info,(_Bool)0)));
    fun_name2=(char* )come_increment_ref_count(multiple_assign_var1->v1, "42op2.nc", 68, 3);
    operator_fun=multiple_assign_var1->v2;
    generics_fun=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 68, 5);
    result=(_Bool)0;
    if(operator_fun&&(list$1sType$ph_length(type2->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&(left_value->type->mOriginalLoadVarType&&list$1sNode$ph_length(left_value->type->mOriginalLoadVarType->mArrayNum)>0||left_value->type->mPointerNum==right_value->type->mPointerNum))||charp_operator_equals(fun_name,"operator_mult"))) {
        {
            right_value_object=left_value->right_value_objects;
            if(right_value_object) {
                right_value_object->mFreed=(_Bool)1;
            }
        }
        {
            right_value_object_0=right_value->right_value_objects;
            if(right_value_object_0) {
                right_value_object_0->mFreed=(_Bool)1;
            }
        }
        obj=(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 88, 6);
        __right_value0 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "42op2.nc", 89, 7, "struct list$1tuple2$2char$phsNode$ph$ph*"), "42op2.nc", 89, 15)), "42op2.nc", 89, 16);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "42op2.nc", 91, 31, "struct tuple2$2char$phsNode$ph"), "42op2.nc", 3, 41),(char* )come_increment_ref_count((char* )((void*)0), "42op2.nc", 3, 42),(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 3, 43)), "42op2.nc", 91, 44));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "42op2.nc", 92, 45, "struct tuple2$2char$phsNode$ph"), "42op2.nc", 92, 46),(char* )come_increment_ref_count((char* )((void*)0), "42op2.nc", 92, 47),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 92, 48)), "42op2.nc", 92, 49));
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj, "42op2.nc", 94, 50),params,((void*)0),0,((void*)0),info,(_Bool)0), "42op2.nc", 94, 51);
        Value=node_compile(node,info);
        if(Value) {
            result=(_Bool)1;
        }
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 101, 52):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 101, 53);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 101, 54):(void*)0);
    }
        __result_obj__0 = result;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 101, 55):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 101, 56):(void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "42op2.nc", 101, 57));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2, 4));
    }
        neo_current_frame = fr.prev;
}

static int list$1sType$ph_length(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 8);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 13);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 14);
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 12);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 11);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 9));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 10):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj1;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_1;
    struct tuple2$2char$phsNode$ph* __dec_obj2;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_2;
    struct tuple2$2char$phsNode$ph* __dec_obj3;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_1, 0, sizeof(litem_1));
    memset(&litem_2, 0, sizeof(litem_2));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1590, 17);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1593, 18, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1593, 19);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1597, 21);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1597, 20);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1603, 22, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1603, 23);
        litem_1->prev=self->head;
        litem_1->next=((void*)0);
        __dec_obj2=litem_1->item,
        litem_1->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1607, 25);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1607, 24);
        self->tail=litem_1;
        self->head->next=litem_1;
    }
    else {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1613, 26, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1613, 27);
        litem_2->prev=self->tail;
        litem_2->next=((void*)0);
        __dec_obj3=litem_2->item,
        litem_2->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1617, 29);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1617, 28);
        self->tail->next=litem_2;
        self->tail=litem_2;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1625, 30);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __dec_obj4  ;
    struct sNode* __dec_obj5;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj4=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4606, 33);
    __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4606, 32);
    __dec_obj5=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "./neo-c.h", 4607, 35);
    (__dec_obj5 ? __dec_obj5 = come_decrement_ref_count(__dec_obj5, ((struct sNode*)__dec_obj5)->finalize, ((struct sNode*)__dec_obj5)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4607, 34) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "./neo-c.h", 4609, 36);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4609, 37);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4609, 38));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4609, 39):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4609, 40);
    return __result_obj__0;
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNullNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 108, 58),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 108, 60);
        __result_obj__0 = (struct sNullNode*)come_increment_ref_count(self, "42op2.nc", 111, 61);
    come_call_finalizer(sNullNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 111, 63);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNullNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 111, 64);
    return __result_obj__0;
}

char*  sNullNode_kind(struct sNullNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNullNode","42op2.nc",113))), "42op2.nc", 113, 65);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 113, 66));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 113, 67));
    return __result_obj__0;
}

_Bool  sNullNode_compile(struct sNullNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj6  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj7  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 118, 68, "struct CVALUE* "), "42op2.nc", 118, 69)), "42op2.nc", 118, 70);
    __right_value0 = (void*)0;
    __dec_obj6=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("((void*)0)"), "42op2.nc", 120, 72);
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 120, 71);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj7=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 121, 73, "struct sType* "), "42op2.nc", 121, 74),(char*)come_increment_ref_count(xsprintf("void*"), "42op2.nc", 121, 75),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 121, 109);
    come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 121, 108);
    come_value->var=((void*)0);
    come_value->mNullValue=(_Bool)1;
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 127, 129));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 129, 130);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 59));
    }
        neo_current_frame = fr.prev;
}

static void sNullNode_finalize(struct sNullNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNullNode_finalize", 2, 62));
    }
        neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 76);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 77);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 80);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 81);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 82):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 83):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 84));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 85));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 86));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 87));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 88));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 89));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 90));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 91));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 94);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 95);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 97);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 98);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 99);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 100));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 101);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 104);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 105);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 106):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 107);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 79);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 78);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 93);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 92):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 96);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 103);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 102));
    }
            neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj8  ;
    struct list_item$1CVALUE$ph* litem_3;
    struct CVALUE*  __dec_obj9  ;
    struct list_item$1CVALUE$ph* litem_4;
    struct CVALUE*  __dec_obj10  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_3, 0, sizeof(litem_3));
    memset(&litem_4, 0, sizeof(litem_4));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1674, 115);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1678, 116, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1678, 117);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj8=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1682, 119);
        come_call_finalizer(CVALUE_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1682, 118);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1688, 120, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1688, 121);
        litem_3->prev=self->head;
        litem_3->next=((void*)0);
        __dec_obj9=litem_3->item,
        litem_3->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1692, 123);
        come_call_finalizer(CVALUE_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1692, 122);
        self->tail=litem_3;
        self->head->next=litem_3;
    }
    else {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1698, 124, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1698, 125);
        litem_4->prev=self->tail;
        litem_4->next=((void*)0);
        __dec_obj10=litem_4->item,
        litem_4->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1702, 127);
        come_call_finalizer(CVALUE_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1702, 126);
        self->tail->next=litem_4;
        self->tail=litem_4;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1710, 128);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 110));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 111);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 112));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 113));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 114));
    }
            neo_current_frame = fr.prev;
}

struct sNode* create_null_node(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_null_node"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNullNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 135, 133, "struct sNode");
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), "42op2.nc", 135, 131, "struct sNullNode* "), "42op2.nc", 135, 132),info))), "42op2.nc", 135, 134);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "42op2.nc", 135, 141);
    come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 135, 142);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 135, 143):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 135, 144):(void*)0);
    return __result_obj__0;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNullNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNullNode*  result  ;
    char*  __dec_obj11  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), "sNullNode_clone", 5, 135, "struct sNullNode* "), "sNullNode_clone", 5, 136);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNullNode_clone", 7, 137, "char* "), "sNullNode_clone", 7, 139);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sNullNode_clone", 7, 138);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sNullNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNullNode_clone}", 9, 140);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj12;
    struct sNode* __dec_obj13;
    struct sAddNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 142, 145),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 142, 146);
    __right_value0 = (void*)0;
    __dec_obj12=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 144, 155);
    (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 144, 154) :0);
    __right_value0 = (void*)0;
    __dec_obj13=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 145, 157);
    (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 145, 156) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sAddNode*)come_increment_ref_count(self, "42op2.nc", 149, 158);
    come_call_finalizer(sAddNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 149, 162);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 149, 163):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 149, 164):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAddNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 149, 165);
    return __result_obj__0;
}

char*  sAddNode_kind(struct sAddNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAddNode","42op2.nc",151))), "42op2.nc", 151, 166);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 151, 167));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 151, 168));
    return __result_obj__0;
}

_Bool  sAddNode_compile(struct sAddNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_5  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    _Bool  left_is_string  ;
    _Bool  right_is_string  ;
    _Bool  left_is_arithmetic  ;
    _Bool  right_is_arithmetic  ;
    struct sType*  result_type  ;
    struct sType*  __dec_obj48  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj49  ;
    struct sType*  __dec_obj50  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_5, 0, sizeof(Value_5));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&left_is_string, 0, sizeof(left_is_string));
    memset(&right_is_string, 0, sizeof(right_is_string));
    memset(&left_is_arithmetic, 0, sizeof(left_is_arithmetic));
    memset(&right_is_arithmetic, 0, sizeof(right_is_arithmetic));
    memset(&result_type, 0, sizeof(result_type));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 157, 169);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 160, 170):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 163, 171);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 165, 172);
    Value_5=node_compile(right_node,info);
    if(!Value_5) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 168, 173):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 168, 174);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 168, 175):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 171, 176);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 173, 177);
    const char* fun_name="operator_add";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 181, 178),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 181, 179),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        left_is_string=string_operator_equals(left_value->type->mClass->mName,"char")&&left_value->type->mPointerNum==1&&(left_value->c_value&&left_value->c_value[0]==34);
        right_is_string=string_operator_equals(right_value->type->mClass->mName,"char")&&right_value->type->mPointerNum==1&&(right_value->c_value&&right_value->c_value[0]==34);
        left_is_arithmetic=left_value->type->mClass->mNumber||left_value->type->mClass->mFloat||left_value->type->mClass->mEnum;
        right_is_arithmetic=right_value->type->mClass->mNumber||right_value->type->mClass->mFloat||right_value->type->mClass->mEnum;
        if((left_is_arithmetic&&right_is_string)||(right_is_arithmetic&&left_is_string)) {
            err_msg(info,"invalid + between arithmetic type and string. use to_string() or string interpolation.");
                        __result_obj__0 = (_Bool)0;
            ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 195, 180):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 195, 181);
            ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 195, 182):(void*)0);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 195, 183);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 195, 184);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 198, 355);
        if(right_value->type->mPointerNum>0) {
            __right_value0 = (void*)0;
            __dec_obj48=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(right_value->type), "42op2.nc", 200, 357);
            come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 200, 356);
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 203, 358, "struct CVALUE* "), "42op2.nc", 203, 359)), "42op2.nc", 203, 360);
        __right_value0 = (void*)0;
        __dec_obj49=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s+%s",left_value->c_value,right_value->c_value), "42op2.nc", 205, 362);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 205, 361);
        __right_value0 = (void*)0;
        __dec_obj50=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "42op2.nc", 206, 364);
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 206, 363);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 212, 365));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 215, 366);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 215, 367);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 215, 368):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 215, 369);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 215, 370):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 215, 371);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 215, 372);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 147);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 148):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 149, "struct sNode*"), "sNode_clone", 5, 150);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 151);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 152):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 153):(void*)0);
    return __result_obj__0;
}

static void sAddNode_finalize(struct sAddNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAddNode_finalize", 2, 159));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sAddNode_finalize", 3, 160):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sAddNode_finalize", 4, 161):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj14  ;
    struct sType*  __dec_obj15  ;
    struct list$1sType$ph* __dec_obj19;
    struct sType*  __dec_obj20  ;
    struct sNode* __dec_obj21;
    struct sNode* __dec_obj22;
    char*  __dec_obj23  ;
    char*  __dec_obj24  ;
    char*  __dec_obj25  ;
    char*  __dec_obj26  ;
    char*  __dec_obj27  ;
    char*  __dec_obj28  ;
    char*  __dec_obj29  ;
    char*  __dec_obj30  ;
    struct list$1sNode$ph* __dec_obj34;
    struct list$1sNode$ph* __dec_obj35;
    struct list$1int$* __dec_obj36;
    struct list$1int$* __dec_obj37;
    struct sType*  __dec_obj38  ;
    char*  __dec_obj39  ;
    struct list$1sType$ph* __dec_obj40;
    struct list$1char$ph* __dec_obj44;
    struct sType*  __dec_obj45  ;
    struct sNode* __dec_obj46;
    struct list$1sNode$ph* __dec_obj47;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 185);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 186);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 187, "struct sType* "), "sType_clone", 5, 188);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 190);
        come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 189);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 192);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 191);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 76, 222);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 221);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 224);
        come_call_finalizer(sType_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 223);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 226);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 225) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 228);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 227) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 229, "char* "), "sType_clone", 14, 231);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 230);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 232, "char* "), "sType_clone", 15, 234);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 233);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 235, "char* "), "sType_clone", 16, 237);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 236);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 238, "char* "), "sType_clone", 17, 240);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 239);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 241, "char* "), "sType_clone", 18, 243);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 242);
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
        __dec_obj28=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 244, "char* "), "sType_clone", 49, 246);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 245);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj29=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 247, "char* "), "sType_clone", 51, 249);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 248);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj30=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 250, "char* "), "sType_clone", 54, 252);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 251);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 76, 282);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 281);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 284);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 283);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj36=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 76, 304);
        come_call_finalizer(list$1int$_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 303);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj37=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 306);
        come_call_finalizer(list$1int$_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 305);
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
        __dec_obj38=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 308);
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 307);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj39=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 309, "char* "), "sType_clone", 67, 311);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 310);
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
        __dec_obj40=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 313);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 312);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj44=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 76, 345);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 344);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj45=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 347);
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 346);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj46=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 349);
        (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 348) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj47=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 351);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 350);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 352);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 353);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 354);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 193);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 194);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1572, 195, "struct list$1sType$ph*"), "./neo-c.h", 1572, 199)), "./neo-c.h", 1572, 200);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1577, 215));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1580, 216));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 217);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 218);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 219);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 196);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 197);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 198);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj16  ;
    struct list_item$1sType$ph* litem_6;
    struct sType*  __dec_obj17  ;
    struct list_item$1sType$ph* litem_7;
    struct sType*  __dec_obj18  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_6, 0, sizeof(litem_6));
    memset(&litem_7, 0, sizeof(litem_7));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1590, 201);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1593, 202, "struct list_item$1sType$ph*"))), "./neo-c.h", 1593, 203);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj16=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1597, 205);
        come_call_finalizer(sType_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1597, 204);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1603, 206, "struct list_item$1sType$ph*"))), "./neo-c.h", 1603, 207);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj17=litem_6->item,
        litem_6->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1607, 209);
        come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1607, 208);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1613, 210, "struct list_item$1sType$ph*"))), "./neo-c.h", 1613, 211);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj18=litem_7->item,
        litem_7->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1617, 213);
        come_call_finalizer(sType_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1617, 212);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1625, 214);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 220);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 253);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 254);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1572, 255, "struct list$1sNode$ph*"), "./neo-c.h", 1572, 259)), "./neo-c.h", 1572, 260);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1577, 275));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1580, 276));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 277);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 278);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 279);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 256);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 257);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 258);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj31;
    struct list_item$1sNode$ph* litem_8;
    struct sNode* __dec_obj32;
    struct list_item$1sNode$ph* litem_9;
    struct sNode* __dec_obj33;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_8, 0, sizeof(litem_8));
    memset(&litem_9, 0, sizeof(litem_9));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1590, 261):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1593, 262, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1593, 263);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj31=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1597, 265);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1597, 264) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1603, 266, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1603, 267);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj32=litem_8->item,
        litem_8->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1607, 269);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1607, 268) :0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1613, 270, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1613, 271);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj33=litem_9->item,
        litem_9->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1617, 273);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1617, 272) :0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1625, 274):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 280);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 285);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 286);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1572, 287, "struct list$1int$*"), "./neo-c.h", 1572, 291)), "./neo-c.h", 1572, 292);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1586, 299);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 300);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 301);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1544, 288);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 289);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 290);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_10;
    struct list_item$1int$* litem_11;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_10, 0, sizeof(litem_10));
    memset(&litem_11, 0, sizeof(litem_11));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1593, 293, "struct list_item$1int$*"))), "./neo-c.h", 1593, 294);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1603, 295, "struct list_item$1int$*"))), "./neo-c.h", 1603, 296);
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        litem_10->item=item;
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1613, 297, "struct list_item$1int$*"))), "./neo-c.h", 1613, 298);
        litem_11->prev=self->tail;
        litem_11->next=((void*)0);
        litem_11->item=item;
        self->tail->next=litem_11;
        self->tail=litem_11;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 302);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 314);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 315);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1572, 316, "struct list$1char$ph*"), "./neo-c.h", 1572, 320)), "./neo-c.h", 1572, 321);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1577, 336, "char* "), "./neo-c.h", 1577, 337));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1580, 338, "char* "), "./neo-c.h", 1580, 339));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 340);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 341);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 342);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 317);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 318);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 319);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj41  ;
    struct list_item$1char$ph* litem_12;
    char*  __dec_obj42  ;
    struct list_item$1char$ph* litem_13;
    char*  __dec_obj43  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_12, 0, sizeof(litem_12));
    memset(&litem_13, 0, sizeof(litem_13));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1590, 322));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1593, 323, "struct list_item$1char$ph*"))), "./neo-c.h", 1593, 324);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj41=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1597, 326);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1597, 325);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1603, 327, "struct list_item$1char$ph*"))), "./neo-c.h", 1603, 328);
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj42=litem_12->item,
        litem_12->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1607, 330);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1607, 329);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1613, 331, "struct list_item$1char$ph*"))), "./neo-c.h", 1613, 332);
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj43=litem_13->item,
        litem_13->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1617, 334);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1617, 333);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1625, 335));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 343);
    }
            neo_current_frame = fr.prev;
}

struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "add_node"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sAddNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 221, 377, "struct sNode");
    _inf_obj_value2=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value1=sAddNode_initialize((struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), "42op2.nc", 221, 373, "struct sAddNode* "), "42op2.nc", 221, 374),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 221, 375),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 221, 376),(_Bool)1,info))), "42op2.nc", 221, 378);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sAddNode_finalize;
    _inf_value2->clone=(void*)sAddNode_clone;
    _inf_value2->compile=(void*)sAddNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sAddNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "42op2.nc", 221, 389);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 221, 390):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 221, 391):(void*)0);
    come_call_finalizer(sAddNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 221, 392);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 221, 393):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 221, 394):(void*)0);
    return __result_obj__0;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sAddNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAddNode*  result  ;
    char*  __dec_obj51  ;
    struct sNode* __dec_obj52;
    struct sNode* __dec_obj53;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), "sAddNode_clone", 5, 379, "struct sAddNode* "), "sAddNode_clone", 5, 380);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj51=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAddNode_clone", 7, 381, "char* "), "sAddNode_clone", 7, 383);
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "sAddNode_clone", 7, 382);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj52=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sAddNode_clone", 9, 385);
        (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0, (void*)0, "sAddNode_clone", 9, 384) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj53=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sAddNode_clone", 10, 387);
        (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0, (void*)0, "sAddNode_clone", 10, 386) :0);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sAddNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAddNode_clone}", 12, 388);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj54;
    struct sNode* __dec_obj55;
    struct sSubNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 228, 395),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 228, 396);
    __right_value0 = (void*)0;
    __dec_obj54=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 230, 398);
    (__dec_obj54 ? __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 230, 397) :0);
    __right_value0 = (void*)0;
    __dec_obj55=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 231, 400);
    (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 231, 399) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sSubNode*)come_increment_ref_count(self, "42op2.nc", 235, 401);
    come_call_finalizer(sSubNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 235, 405);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 235, 406):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 235, 407):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSubNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 235, 408);
    return __result_obj__0;
}

char*  sSubNode_kind(struct sSubNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSubNode","42op2.nc",237))), "42op2.nc", 237, 409);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 237, 410));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 237, 411));
    return __result_obj__0;
}

_Bool  sSubNode_compile(struct sSubNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_14  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    struct sType*  result_type  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj56  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj57  ;
    struct sType*  __dec_obj58  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_14, 0, sizeof(Value_14));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&result_type, 0, sizeof(result_type));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 243, 412);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 246, 413):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 249, 414);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 251, 415);
    Value_14=node_compile(right_node,info);
    if(!Value_14) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 254, 416):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 254, 417);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 254, 418):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 257, 419);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 259, 420);
    const char* fun_name="operator_sub";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 267, 421),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 267, 422),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 271, 423);
        if(left_value->type->mPointerNum>0&&right_value->type->mPointerNum>0) {
            __right_value0 = (void*)0;
            __dec_obj56=result_type,
            result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 273, 424, "struct sType* "), "42op2.nc", 273, 425),(char*)come_increment_ref_count(xsprintf("long"), "42op2.nc", 273, 426),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 273, 428);
            come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 273, 427);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 276, 429, "struct CVALUE* "), "42op2.nc", 276, 430)), "42op2.nc", 276, 431);
        __right_value0 = (void*)0;
        __dec_obj57=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s-%s",left_value->c_value,right_value->c_value), "42op2.nc", 278, 433);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 278, 432);
        __right_value0 = (void*)0;
        __dec_obj58=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "42op2.nc", 279, 435);
        come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 279, 434);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 285, 436));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 288, 437);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 288, 438);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 288, 439):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 288, 440);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 288, 441):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 288, 442);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 288, 443);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSubNode_finalize(struct sSubNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSubNode_finalize", 2, 402));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sSubNode_finalize", 3, 403):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sSubNode_finalize", 4, 404):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj59;
    struct sNode* __dec_obj60;
    struct sMultNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 296, 444),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 296, 445);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj59=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 299, 447);
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 299, 446) :0);
    __right_value0 = (void*)0;
    __dec_obj60=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 300, 449);
    (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 300, 448) :0);
        __result_obj__0 = (struct sMultNode*)come_increment_ref_count(self, "42op2.nc", 303, 450);
    come_call_finalizer(sMultNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 303, 454);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 303, 455):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 303, 456):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMultNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 303, 457);
    return __result_obj__0;
}

char*  sMultNode_kind(struct sMultNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMultNode","42op2.nc",305))), "42op2.nc", 305, 458);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 305, 459));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 305, 460));
    return __result_obj__0;
}

_Bool  sMultNode_compile(struct sMultNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_15  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj61  ;
    struct sType*  __dec_obj62  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_15, 0, sizeof(Value_15));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 311, 461);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 314, 462):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 317, 463);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 319, 464);
    Value_15=node_compile(right_node,info);
    if(!Value_15) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 322, 465):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 322, 466);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 322, 467):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 325, 468);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 327, 469);
    const char* fun_name="operator_mult";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 335, 470),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 335, 471),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 339, 472, "struct CVALUE* "), "42op2.nc", 339, 473)), "42op2.nc", 339, 474);
        __right_value0 = (void*)0;
        __dec_obj61=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s*%s",left_value->c_value,right_value->c_value), "42op2.nc", 341, 476);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 341, 475);
        __right_value0 = (void*)0;
        __dec_obj62=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 342, 478);
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 342, 477);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 348, 479));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 351, 480);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 351, 481):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 351, 482);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 351, 483):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 351, 484);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 351, 485);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMultNode_finalize(struct sMultNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMultNode_finalize", 2, 451));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sMultNode_finalize", 3, 452):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sMultNode_finalize", 4, 453):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static char*  create_zero_division_checked_binary_code(struct CVALUE*  left_value  , struct CVALUE*  right_value  , const char* op, const char* message, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_zero_division_checked_binary_code"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool _conditional_value_X0;
    char*  __result_obj__0  ;
    int id;
    memset(&id, 0, sizeof(id));
    if(({(_conditional_value_X0=(info->in_top_level||info->in_typedef||info->in_fun_param||info->in_typeof||info->in_offsetof||string_index(((char* )(__right_value0=__builtin_string(left_value->c_value,"42op2.nc",358))),"sizeof",-1)!=-1||string_index(((char* )(__right_value1=__builtin_string(right_value->c_value,"42op2.nc",359))),"sizeof",-1)!=-1));    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 358, 486));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 359, 487));
_conditional_value_X0;})) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%s %s %s",left_value->c_value,op,right_value->c_value))), "42op2.nc", 360, 488);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 360, 489));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 360, 490));
        return __result_obj__0;
    }
    static int n=0;
    id=++n;
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("({ __typeof__(%s) __neo_div_right%d = (%s); if(__neo_div_right%d == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts(\"%s\"); if(stackframe) stackframe(); else { puts(\"stackframe\"); puts(__func__); } exit(2); } (%s) %s __neo_div_right%d; })",right_value->c_value,id,right_value->c_value,id,message,left_value->c_value,op,id))), "42op2.nc", 365, 491);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 365, 492));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 365, 493));
    return __result_obj__0;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj63;
    struct sNode* __dec_obj64;
    struct sDivNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 372, 494),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 372, 495);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj63=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 375, 497);
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 375, 496) :0);
    __right_value0 = (void*)0;
    __dec_obj64=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 376, 499);
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 376, 498) :0);
        __result_obj__0 = (struct sDivNode*)come_increment_ref_count(self, "42op2.nc", 379, 500);
    come_call_finalizer(sDivNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 379, 504);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 379, 505):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 379, 506):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDivNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 379, 507);
    return __result_obj__0;
}

char*  sDivNode_kind(struct sDivNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDivNode","42op2.nc",381))), "42op2.nc", 381, 508);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 381, 509));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 381, 510));
    return __result_obj__0;
}

_Bool  sDivNode_compile(struct sDivNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_16  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj65  ;
    struct sType*  __dec_obj66  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_16, 0, sizeof(Value_16));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 387, 511);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 390, 512):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 393, 513);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 395, 514);
    Value_16=node_compile(right_node,info);
    if(!Value_16) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 398, 515):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 398, 516);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 398, 517):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 401, 518);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 403, 519);
    const char* fun_name="operator_div";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 411, 520),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 411, 521),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 415, 522, "struct CVALUE* "), "42op2.nc", 415, 523)), "42op2.nc", 415, 524);
        __right_value0 = (void*)0;
        __dec_obj65=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(create_zero_division_checked_binary_code(left_value,right_value,"/","division by zero",info), "42op2.nc", 417, 526);
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 417, 525);
        __right_value0 = (void*)0;
        __dec_obj66=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 418, 528);
        come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 418, 527);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 424, 529));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 427, 530);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 427, 531):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 427, 532);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 427, 533):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 427, 534);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 427, 535);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDivNode_finalize(struct sDivNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDivNode_finalize", 2, 501));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sDivNode_finalize", 3, 502):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sDivNode_finalize", 4, 503):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj67;
    struct sNode* __dec_obj68;
    struct sModNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 435, 536),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 435, 537);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj67=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 438, 539);
    (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 438, 538) :0);
    __right_value0 = (void*)0;
    __dec_obj68=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 439, 541);
    (__dec_obj68 ? __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 439, 540) :0);
        __result_obj__0 = (struct sModNode*)come_increment_ref_count(self, "42op2.nc", 442, 542);
    come_call_finalizer(sModNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 442, 546);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 442, 547):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 442, 548):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sModNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 442, 549);
    return __result_obj__0;
}

char*  sModNode_kind(struct sModNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sModNode","42op2.nc",444))), "42op2.nc", 444, 550);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 444, 551));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 444, 552));
    return __result_obj__0;
}

_Bool  sModNode_compile(struct sModNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_17  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj69  ;
    struct sType*  __dec_obj70  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_17, 0, sizeof(Value_17));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 450, 553);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 453, 554):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 456, 555);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 458, 556);
    Value_17=node_compile(right_node,info);
    if(!Value_17) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 461, 557):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 461, 558);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 461, 559):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 464, 560);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 466, 561);
    const char* fun_name="operator_mod";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 474, 562),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 474, 563),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 478, 564, "struct CVALUE* "), "42op2.nc", 478, 565)), "42op2.nc", 478, 566);
        __right_value0 = (void*)0;
        __dec_obj69=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(create_zero_division_checked_binary_code(left_value,right_value,"%","modulo by zero",info), "42op2.nc", 480, 568);
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 480, 567);
        __right_value0 = (void*)0;
        __dec_obj70=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 481, 570);
        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 481, 569);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 487, 571));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 490, 572);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 490, 573):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 490, 574);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 490, 575):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 490, 576);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 490, 577);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sModNode_finalize(struct sModNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sModNode_finalize", 2, 543));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sModNode_finalize", 3, 544):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sModNode_finalize", 4, 545):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj71;
    struct sNode* __dec_obj72;
    struct sLShiftNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 498, 578),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 498, 579);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj71=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 502, 581);
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 502, 580) :0);
    __right_value0 = (void*)0;
    __dec_obj72=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 503, 583);
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 503, 582) :0);
        __result_obj__0 = (struct sLShiftNode*)come_increment_ref_count(self, "42op2.nc", 506, 584);
    come_call_finalizer(sLShiftNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 506, 588);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 506, 589):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 506, 590):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLShiftNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 506, 591);
    return __result_obj__0;
}

char*  sLShiftNode_kind(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLShiftNode","42op2.nc",508))), "42op2.nc", 508, 592);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 508, 593));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 508, 594));
    return __result_obj__0;
}

_Bool  sLShiftNode_compile(struct sLShiftNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_18  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj73  ;
    struct sType*  __dec_obj74  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_18, 0, sizeof(Value_18));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 514, 595);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 517, 596):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 520, 597);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 522, 598);
    Value_18=node_compile(right_node,info);
    if(!Value_18) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 525, 599):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 525, 600);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 525, 601):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 528, 602);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 530, 603);
    const char* fun_name="operator_lshift";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 538, 604),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 538, 605),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 542, 606, "struct CVALUE* "), "42op2.nc", 542, 607)), "42op2.nc", 542, 608);
        __right_value0 = (void*)0;
        __dec_obj73=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s<<%s",left_value->c_value,right_value->c_value), "42op2.nc", 544, 610);
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 544, 609);
        __right_value0 = (void*)0;
        __dec_obj74=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 545, 612);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 545, 611);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 551, 613));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 554, 614);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 554, 615):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 554, 616);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 554, 617):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 554, 618);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 554, 619);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLShiftNode_finalize(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLShiftNode_finalize", 2, 585));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLShiftNode_finalize", 3, 586):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sLShiftNode_finalize", 4, 587):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj75;
    struct sNode* __dec_obj76;
    struct sRShiftNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 562, 620),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 562, 621);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj75=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 565, 623);
    (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 565, 622) :0);
    __right_value0 = (void*)0;
    __dec_obj76=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 566, 625);
    (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 566, 624) :0);
        __result_obj__0 = (struct sRShiftNode*)come_increment_ref_count(self, "42op2.nc", 569, 626);
    come_call_finalizer(sRShiftNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 569, 630);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 569, 631):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 569, 632):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sRShiftNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 569, 633);
    return __result_obj__0;
}

char*  sRShiftNode_kind(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRShiftNode","42op2.nc",571))), "42op2.nc", 571, 634);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 571, 635));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 571, 636));
    return __result_obj__0;
}

_Bool  sRShiftNode_compile(struct sRShiftNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_19  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj77  ;
    struct sType*  __dec_obj78  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_19, 0, sizeof(Value_19));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 577, 637);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 580, 638):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 583, 639);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 585, 640);
    Value_19=node_compile(right_node,info);
    if(!Value_19) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 588, 641):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 588, 642);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 588, 643):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 591, 644);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 593, 645);
    const char* fun_name="operator_rshift";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 601, 646),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 601, 647),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 605, 648, "struct CVALUE* "), "42op2.nc", 605, 649)), "42op2.nc", 605, 650);
        __right_value0 = (void*)0;
        __dec_obj77=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s>>%s",left_value->c_value,right_value->c_value), "42op2.nc", 607, 652);
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 607, 651);
        __right_value0 = (void*)0;
        __dec_obj78=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 608, 654);
        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 608, 653);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 614, 655));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 617, 656);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 617, 657):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 617, 658);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 617, 659):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 617, 660);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 617, 661);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sRShiftNode_finalize(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sRShiftNode_finalize", 2, 627));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sRShiftNode_finalize", 3, 628):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sRShiftNode_finalize", 4, 629):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj79;
    struct sNode* __dec_obj80;
    struct sGtEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 625, 662),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 625, 663);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj79=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 628, 665);
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 628, 664) :0);
    __right_value0 = (void*)0;
    __dec_obj80=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 629, 667);
    (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 629, 666) :0);
        __result_obj__0 = (struct sGtEqNode*)come_increment_ref_count(self, "42op2.nc", 632, 668);
    come_call_finalizer(sGtEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 632, 672);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 632, 673):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 632, 674):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGtEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 632, 675);
    return __result_obj__0;
}

char*  sGtEqNode_kind(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGtEqNode","42op2.nc",634))), "42op2.nc", 634, 676);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 634, 677));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 634, 678));
    return __result_obj__0;
}

_Bool  sGtEqNode_compile(struct sGtEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_20  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj81  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj82  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_20, 0, sizeof(Value_20));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 640, 679);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 643, 680):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 646, 681);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 648, 682);
    Value_20=node_compile(right_node,info);
    if(!Value_20) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 651, 683):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 651, 684);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 651, 685):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 654, 686);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 656, 687);
    const char* fun_name="operator_gteq";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 664, 688),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 664, 689),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 668, 690, "struct CVALUE* "), "42op2.nc", 668, 691)), "42op2.nc", 668, 692);
        __right_value0 = (void*)0;
        __dec_obj81=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s>=%s",left_value->c_value,right_value->c_value), "42op2.nc", 670, 694);
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 670, 693);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj82=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 671, 695, "struct sType* "), "42op2.nc", 671, 696),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 671, 697),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 671, 699);
        come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 671, 698);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 676, 700));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 679, 701);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 679, 702):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 679, 703);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 679, 704):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 679, 705);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 679, 706);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGtEqNode_finalize(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGtEqNode_finalize", 2, 669));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sGtEqNode_finalize", 3, 670):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sGtEqNode_finalize", 4, 671):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj83;
    struct sNode* __dec_obj84;
    struct sLtEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 687, 707),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 687, 708);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj83=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 690, 710);
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 690, 709) :0);
    __right_value0 = (void*)0;
    __dec_obj84=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 691, 712);
    (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 691, 711) :0);
        __result_obj__0 = (struct sLtEqNode*)come_increment_ref_count(self, "42op2.nc", 694, 713);
    come_call_finalizer(sLtEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 694, 717);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 694, 718):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 694, 719):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLtEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 694, 720);
    return __result_obj__0;
}

char*  sLtEqNode_kind(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLtEqNode","42op2.nc",696))), "42op2.nc", 696, 721);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 696, 722));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 696, 723));
    return __result_obj__0;
}

_Bool  sLtEqNode_compile(struct sLtEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_21  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj85  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj86  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_21, 0, sizeof(Value_21));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 702, 724);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 705, 725):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 708, 726);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 710, 727);
    Value_21=node_compile(right_node,info);
    if(!Value_21) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 713, 728):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 713, 729);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 713, 730):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 716, 731);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 718, 732);
    const char* fun_name="operator_lteq";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 726, 733),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 726, 734),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 730, 735, "struct CVALUE* "), "42op2.nc", 730, 736)), "42op2.nc", 730, 737);
        __right_value0 = (void*)0;
        __dec_obj85=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s<=%s",left_value->c_value,right_value->c_value), "42op2.nc", 732, 739);
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 732, 738);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj86=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 733, 740, "struct sType* "), "42op2.nc", 733, 741),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 733, 742),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 733, 744);
        come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 733, 743);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 738, 745));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 741, 746);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 741, 747):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 741, 748);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 741, 749):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 741, 750);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 741, 751);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLtEqNode_finalize(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLtEqNode_finalize", 2, 714));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLtEqNode_finalize", 3, 715):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sLtEqNode_finalize", 4, 716):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj87;
    struct sNode* __dec_obj88;
    struct sLtNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 749, 752),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 749, 753);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj87=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 752, 755);
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 752, 754) :0);
    __right_value0 = (void*)0;
    __dec_obj88=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 753, 757);
    (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 753, 756) :0);
        __result_obj__0 = (struct sLtNode*)come_increment_ref_count(self, "42op2.nc", 756, 758);
    come_call_finalizer(sLtNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 756, 762);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 756, 763):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 756, 764):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLtNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 756, 765);
    return __result_obj__0;
}

char*  sLtNode_kind(struct sLtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLtNode","42op2.nc",758))), "42op2.nc", 758, 766);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 758, 767));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 758, 768));
    return __result_obj__0;
}

_Bool  sLtNode_compile(struct sLtNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_22  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj89  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj90  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_22, 0, sizeof(Value_22));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 764, 769);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 767, 770):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 770, 771);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 772, 772);
    Value_22=node_compile(right_node,info);
    if(!Value_22) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 775, 773):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 775, 774);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 775, 775):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 778, 776);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 780, 777);
    const char* fun_name="operator_lt";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 788, 778),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 788, 779),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 792, 780, "struct CVALUE* "), "42op2.nc", 792, 781)), "42op2.nc", 792, 782);
        __right_value0 = (void*)0;
        __dec_obj89=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s<%s",left_value->c_value,right_value->c_value), "42op2.nc", 794, 784);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 794, 783);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj90=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 795, 785, "struct sType* "), "42op2.nc", 795, 786),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 795, 787),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 795, 789);
        come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 795, 788);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 800, 790));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 803, 791);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 803, 792):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 803, 793);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 803, 794):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 803, 795);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 803, 796);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLtNode_finalize(struct sLtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLtNode_finalize", 2, 759));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLtNode_finalize", 3, 760):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sLtNode_finalize", 4, 761):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj91;
    struct sNode* __dec_obj92;
    struct sGtNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 811, 797),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 811, 798);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj91=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 814, 800);
    (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 814, 799) :0);
    __right_value0 = (void*)0;
    __dec_obj92=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 815, 802);
    (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 815, 801) :0);
        __result_obj__0 = (struct sGtNode*)come_increment_ref_count(self, "42op2.nc", 818, 803);
    come_call_finalizer(sGtNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 818, 807);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 818, 808):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 818, 809):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGtNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 818, 810);
    return __result_obj__0;
}

char*  sGtNode_kind(struct sGtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGtNode","42op2.nc",820))), "42op2.nc", 820, 811);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 820, 812));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 820, 813));
    return __result_obj__0;
}

_Bool  sGtNode_compile(struct sGtNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_23  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj93  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj94  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_23, 0, sizeof(Value_23));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 826, 814);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 829, 815):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 832, 816);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 834, 817);
    Value_23=node_compile(right_node,info);
    if(!Value_23) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 837, 818):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 837, 819);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 837, 820):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 840, 821);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 842, 822);
    const char* fun_name="operator_gt";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 850, 823),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 850, 824),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 854, 825, "struct CVALUE* "), "42op2.nc", 854, 826)), "42op2.nc", 854, 827);
        __right_value0 = (void*)0;
        __dec_obj93=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s>%s",left_value->c_value,right_value->c_value), "42op2.nc", 856, 829);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 856, 828);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj94=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 857, 830, "struct sType* "), "42op2.nc", 857, 831),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 857, 832),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 857, 834);
        come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 857, 833);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 862, 835));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 865, 836);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 865, 837):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 865, 838);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 865, 839):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 865, 840);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 865, 841);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGtNode_finalize(struct sGtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGtNode_finalize", 2, 804));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sGtNode_finalize", 3, 805):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sGtNode_finalize", 4, 806):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj95;
    struct sNode* __dec_obj96;
    struct sEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 873, 842),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 873, 843);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj95=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 876, 845);
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 876, 844) :0);
    __right_value0 = (void*)0;
    __dec_obj96=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 877, 847);
    (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 877, 846) :0);
        __result_obj__0 = (struct sEqNode*)come_increment_ref_count(self, "42op2.nc", 880, 848);
    come_call_finalizer(sEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 880, 852);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 880, 853):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 880, 854):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 880, 855);
    return __result_obj__0;
}

char*  sEqNode_kind(struct sEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sEqNode","42op2.nc",882))), "42op2.nc", 882, 856);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 882, 857));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 882, 858));
    return __result_obj__0;
}

_Bool  sEqNode_compile(struct sEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_24  ;
    _Bool  __result_obj__0  ;
    struct CVALUE*  right_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj97  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj98  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_24, 0, sizeof(Value_24));
    memset(&right_value, 0, sizeof(right_value));
    memset(&come_value, 0, sizeof(come_value));
    left_node=self->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 894, 859);
    right_node=self->mRight;
    Value_24=node_compile(right_node,info);
    if(!Value_24) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 899, 860);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 902, 861);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 904, 862, "struct CVALUE* "), "42op2.nc", 904, 863)), "42op2.nc", 904, 864);
    __right_value0 = (void*)0;
    __dec_obj97=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s==%s",left_value->c_value,right_value->c_value), "42op2.nc", 906, 866);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 906, 865);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj98=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 907, 867, "struct sType* "), "42op2.nc", 907, 868),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 907, 869),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 907, 871);
    come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 907, 870);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 912, 872));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 914, 873);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 914, 874);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 914, 875);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sEqNode_finalize(struct sEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sEqNode_finalize", 2, 849));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sEqNode_finalize", 3, 850):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sEqNode_finalize", 4, 851):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj99;
    struct sNode* __dec_obj100;
    struct sNotEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 922, 876),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 922, 877);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj99=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 925, 879);
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 925, 878) :0);
    __right_value0 = (void*)0;
    __dec_obj100=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 926, 881);
    (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 926, 880) :0);
        __result_obj__0 = (struct sNotEqNode*)come_increment_ref_count(self, "42op2.nc", 929, 882);
    come_call_finalizer(sNotEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 929, 886);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 929, 887):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 929, 888):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNotEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 929, 889);
    return __result_obj__0;
}

char*  sNotEqNode_kind(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNotEqNode","42op2.nc",931))), "42op2.nc", 931, 890);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 931, 891));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 931, 892));
    return __result_obj__0;
}

_Bool  sNotEqNode_compile(struct sNotEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_25  ;
    _Bool  __result_obj__0  ;
    struct CVALUE*  right_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj101  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj102  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_25, 0, sizeof(Value_25));
    memset(&right_value, 0, sizeof(right_value));
    memset(&come_value, 0, sizeof(come_value));
    left_node=self->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 943, 893);
    right_node=self->mRight;
    Value_25=node_compile(right_node,info);
    if(!Value_25) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 948, 894);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 951, 895);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 953, 896, "struct CVALUE* "), "42op2.nc", 953, 897)), "42op2.nc", 953, 898);
    __right_value0 = (void*)0;
    __dec_obj101=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s!=%s",left_value->c_value,right_value->c_value), "42op2.nc", 955, 900);
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 955, 899);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj102=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 956, 901, "struct sType* "), "42op2.nc", 956, 902),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 956, 903),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 956, 905);
    come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 956, 904);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 961, 906));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 963, 907);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 963, 908);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 963, 909);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNotEqNode_finalize(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNotEqNode_finalize", 2, 883));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sNotEqNode_finalize", 3, 884):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sNotEqNode_finalize", 4, 885):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj103;
    struct sNode* __dec_obj104;
    struct sEq2Node* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 971, 910),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 971, 911);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj103=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 974, 913);
    (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 974, 912) :0);
    __right_value0 = (void*)0;
    __dec_obj104=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 975, 915);
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 975, 914) :0);
        __result_obj__0 = (struct sEq2Node*)come_increment_ref_count(self, "42op2.nc", 978, 916);
    come_call_finalizer(sEq2Node_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 978, 920);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 978, 921):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 978, 922):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sEq2Node_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 978, 923);
    return __result_obj__0;
}

char*  sEq2Node_kind(struct sEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sEq2Node","42op2.nc",980))), "42op2.nc", 980, 924);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 980, 925));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 980, 926));
    return __result_obj__0;
}

_Bool  sEq2Node_compile(struct sEq2Node* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_26  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj105  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj106  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_26, 0, sizeof(Value_26));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 986, 927);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 989, 928):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 992, 929);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 994, 930);
    Value_26=node_compile(right_node,info);
    if(!Value_26) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 997, 931):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 997, 932);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 997, 933):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1000, 934);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1002, 935);
    const char* fun_name="operator_equals";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1010, 936),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1010, 937),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        if(!self->mQuote&&require_explicit_method_in_low_memory_mode(type,fun_name,info)) {
                        __result_obj__0 = (_Bool)0;
            ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1015, 938):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1015, 939);
            ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1015, 940):(void*)0);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1015, 941);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1015, 942);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1018, 943, "struct CVALUE* "), "42op2.nc", 1018, 944)), "42op2.nc", 1018, 945);
        __right_value0 = (void*)0;
        __dec_obj105=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s==%s",left_value->c_value,right_value->c_value), "42op2.nc", 1020, 947);
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1020, 946);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj106=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 1021, 948, "struct sType* "), "42op2.nc", 1021, 949),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 1021, 950),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 1021, 952);
        come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1021, 951);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1026, 953));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1029, 954);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1029, 955):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1029, 956);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1029, 957):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1029, 958);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1029, 959);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sEq2Node_finalize(struct sEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sEq2Node_finalize", 2, 917));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sEq2Node_finalize", 3, 918):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sEq2Node_finalize", 4, 919):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj107;
    struct sNode* __dec_obj108;
    struct sNotEq2Node* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 1037, 960),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1037, 961);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj107=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1040, 963);
    (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1040, 962) :0);
    __right_value0 = (void*)0;
    __dec_obj108=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1041, 965);
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1041, 964) :0);
        __result_obj__0 = (struct sNotEq2Node*)come_increment_ref_count(self, "42op2.nc", 1044, 966);
    come_call_finalizer(sNotEq2Node_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1044, 970);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1044, 971):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1044, 972):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNotEq2Node_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1044, 973);
    return __result_obj__0;
}

char*  sNotEq2Node_kind(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNotEq2Node","42op2.nc",1046))), "42op2.nc", 1046, 974);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1046, 975));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1046, 976));
    return __result_obj__0;
}

_Bool  sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_27  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj109  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj110  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_27, 0, sizeof(Value_27));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1052, 977);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1055, 978):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1058, 979);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1060, 980);
    Value_27=node_compile(right_node,info);
    if(!Value_27) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1063, 981):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1063, 982);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1063, 983):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1066, 984);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1068, 985);
    const char* fun_name="operator_not_equals";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1076, 986),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1076, 987),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        if(!self->mQuote&&require_explicit_method_in_low_memory_mode(type,fun_name,info)) {
                        __result_obj__0 = (_Bool)0;
            ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1081, 988):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1081, 989);
            ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1081, 990):(void*)0);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1081, 991);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1081, 992);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1084, 993, "struct CVALUE* "), "42op2.nc", 1084, 994)), "42op2.nc", 1084, 995);
        __right_value0 = (void*)0;
        __dec_obj109=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s!=%s",left_value->c_value,right_value->c_value), "42op2.nc", 1086, 997);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1086, 996);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj110=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 1087, 998, "struct sType* "), "42op2.nc", 1087, 999),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 1087, 1000),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 1087, 1002);
        come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1087, 1001);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1092, 1003));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1095, 1004);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1095, 1005):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1095, 1006);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1095, 1007):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1095, 1008);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1095, 1009);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNotEq2Node_finalize", 2, 967));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sNotEq2Node_finalize", 3, 968):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sNotEq2Node_finalize", 4, 969):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj111;
    struct sNode* __dec_obj112;
    struct sAndNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 1103, 1010),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1103, 1011);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj111=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1106, 1013);
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1106, 1012) :0);
    __right_value0 = (void*)0;
    __dec_obj112=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1107, 1015);
    (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1107, 1014) :0);
        __result_obj__0 = (struct sAndNode*)come_increment_ref_count(self, "42op2.nc", 1110, 1016);
    come_call_finalizer(sAndNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1110, 1020);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1110, 1021):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1110, 1022):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAndNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1110, 1023);
    return __result_obj__0;
}

char*  sAndNode_kind(struct sAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAndNode","42op2.nc",1112))), "42op2.nc", 1112, 1024);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1112, 1025));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1112, 1026));
    return __result_obj__0;
}

_Bool  sAndNode_compile(struct sAndNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_28  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj113  ;
    struct sType*  __dec_obj114  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_28, 0, sizeof(Value_28));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1118, 1027);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1121, 1028):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1124, 1029);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1126, 1030);
    Value_28=node_compile(right_node,info);
    if(!Value_28) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1129, 1031):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1129, 1032);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1129, 1033):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1132, 1034);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1134, 1035);
    const char* fun_name="operator_and";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1142, 1036),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1142, 1037),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1147, 1038, "struct CVALUE* "), "42op2.nc", 1147, 1039)), "42op2.nc", 1147, 1040);
        __right_value0 = (void*)0;
        __dec_obj113=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s&%s",left_value->c_value,right_value->c_value), "42op2.nc", 1149, 1042);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1149, 1041);
        __right_value0 = (void*)0;
        __dec_obj114=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 1150, 1044);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1150, 1043);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1156, 1045));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1159, 1046);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1159, 1047):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1159, 1048);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1159, 1049):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1159, 1050);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1159, 1051);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAndNode_finalize(struct sAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAndNode_finalize", 2, 1017));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sAndNode_finalize", 3, 1018):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sAndNode_finalize", 4, 1019):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj115;
    struct sNode* __dec_obj116;
    struct sXOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 1167, 1052),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1167, 1053);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj115=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1170, 1055);
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1170, 1054) :0);
    __right_value0 = (void*)0;
    __dec_obj116=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1171, 1057);
    (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1171, 1056) :0);
        __result_obj__0 = (struct sXOrNode*)come_increment_ref_count(self, "42op2.nc", 1174, 1058);
    come_call_finalizer(sXOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1174, 1062);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1174, 1063):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1174, 1064):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sXOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1174, 1065);
    return __result_obj__0;
}

char*  sXOrNode_kind(struct sXOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sXOrNode","42op2.nc",1176))), "42op2.nc", 1176, 1066);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1176, 1067));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1176, 1068));
    return __result_obj__0;
}

_Bool  sXOrNode_compile(struct sXOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_29  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj117  ;
    struct sType*  __dec_obj118  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_29, 0, sizeof(Value_29));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1182, 1069);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1185, 1070):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1188, 1071);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1190, 1072);
    Value_29=node_compile(right_node,info);
    if(!Value_29) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1193, 1073):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1193, 1074);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1193, 1075):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1196, 1076);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1198, 1077);
    const char* fun_name="operator_xor";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1206, 1078),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1206, 1079),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1210, 1080, "struct CVALUE* "), "42op2.nc", 1210, 1081)), "42op2.nc", 1210, 1082);
        __right_value0 = (void*)0;
        __dec_obj117=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s^%s",left_value->c_value,right_value->c_value), "42op2.nc", 1212, 1084);
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1212, 1083);
        __right_value0 = (void*)0;
        __dec_obj118=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 1213, 1086);
        come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1213, 1085);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1219, 1087));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1222, 1088);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1222, 1089):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1222, 1090);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1222, 1091):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1222, 1092);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1222, 1093);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sXOrNode_finalize(struct sXOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sXOrNode_finalize", 2, 1059));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sXOrNode_finalize", 3, 1060):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sXOrNode_finalize", 4, 1061):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj119;
    struct sNode* __dec_obj120;
    struct sOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 1230, 1094),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1230, 1095);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj119=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1233, 1097);
    (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1233, 1096) :0);
    __right_value0 = (void*)0;
    __dec_obj120=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1234, 1099);
    (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1234, 1098) :0);
        __result_obj__0 = (struct sOrNode*)come_increment_ref_count(self, "42op2.nc", 1237, 1100);
    come_call_finalizer(sOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1237, 1104);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1237, 1105):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1237, 1106):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1237, 1107);
    return __result_obj__0;
}

char*  sOrNode_kind(struct sOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOrNode","42op2.nc",1239))), "42op2.nc", 1239, 1108);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1239, 1109));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1239, 1110));
    return __result_obj__0;
}

_Bool  sOrNode_compile(struct sOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_30  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj121  ;
    struct sType*  __dec_obj122  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_30, 0, sizeof(Value_30));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1245, 1111);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1248, 1112):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1251, 1113);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1253, 1114);
    Value_30=node_compile(right_node,info);
    if(!Value_30) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1256, 1115):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1256, 1116);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1256, 1117):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1259, 1118);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1261, 1119);
    const char* fun_name="operator_or";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1269, 1120),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1269, 1121),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1274, 1122, "struct CVALUE* "), "42op2.nc", 1274, 1123)), "42op2.nc", 1274, 1124);
        __right_value0 = (void*)0;
        __dec_obj121=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s|%s",left_value->c_value,right_value->c_value), "42op2.nc", 1276, 1126);
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1276, 1125);
        __right_value0 = (void*)0;
        __dec_obj122=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 1277, 1128);
        come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1277, 1127);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1283, 1129));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1286, 1130);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1286, 1131):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1286, 1132);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1286, 1133):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1286, 1134);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1286, 1135);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOrNode_finalize(struct sOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOrNode_finalize", 2, 1101));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sOrNode_finalize", 3, 1102):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sOrNode_finalize", 4, 1103):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj123;
    struct sNode* __dec_obj124;
    struct sAndAndNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 1294, 1136),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1294, 1137);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj123=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1297, 1139);
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1297, 1138) :0);
    __right_value0 = (void*)0;
    __dec_obj124=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1298, 1141);
    (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1298, 1140) :0);
        __result_obj__0 = (struct sAndAndNode*)come_increment_ref_count(self, "42op2.nc", 1301, 1142);
    come_call_finalizer(sAndAndNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1301, 1146);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1301, 1147):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1301, 1148):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAndAndNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1301, 1149);
    return __result_obj__0;
}

char*  sAndAndNode_kind(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAndAndNode","42op2.nc",1303))), "42op2.nc", 1303, 1150);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1303, 1151));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1303, 1152));
    return __result_obj__0;
}

_Bool  sAndAndNode_compile(struct sAndAndNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_31  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj125  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj126  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_31, 0, sizeof(Value_31));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1309, 1153);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1312, 1154):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1315, 1155);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1317, 1156);
    Value_31=node_compile(right_node,info);
    if(!Value_31) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1320, 1157):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1320, 1158);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1320, 1159):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1323, 1160);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1325, 1161);
    const char* fun_name="operator_andand";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1333, 1162),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1333, 1163),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1338, 1164, "struct CVALUE* "), "42op2.nc", 1338, 1165)), "42op2.nc", 1338, 1166);
        __right_value0 = (void*)0;
        __dec_obj125=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s&&%s",left_value->c_value,right_value->c_value), "42op2.nc", 1340, 1168);
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1340, 1167);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj126=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 1341, 1169, "struct sType* "), "42op2.nc", 1341, 1170),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 1341, 1171),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 1341, 1173);
        come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1341, 1172);
        come_value->var=left_value->var;
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1346, 1174));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1349, 1175);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1349, 1176):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1349, 1177);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1349, 1178):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1349, 1179);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1349, 1180);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAndAndNode_finalize(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAndAndNode_finalize", 2, 1143));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sAndAndNode_finalize", 3, 1144):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sAndAndNode_finalize", 4, 1145):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool  quote  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj127;
    struct sNode* __dec_obj128;
    struct sOrOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 1357, 1181),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1357, 1182);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj127=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1360, 1184);
    (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1360, 1183) :0);
    __right_value0 = (void*)0;
    __dec_obj128=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1361, 1186);
    (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1361, 1185) :0);
        __result_obj__0 = (struct sOrOrNode*)come_increment_ref_count(self, "42op2.nc", 1364, 1187);
    come_call_finalizer(sOrOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1364, 1191);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1364, 1192):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1364, 1193):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOrOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1364, 1194);
    return __result_obj__0;
}

char*  sOrOrNode_kind(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOrOrNode","42op2.nc",1366))), "42op2.nc", 1366, 1195);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1366, 1196));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1366, 1197));
    return __result_obj__0;
}

_Bool  sOrOrNode_compile(struct sOrOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_32  ;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool  calling_fun  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj129  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj130  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_32, 0, sizeof(Value_32));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1372, 1198);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1375, 1199):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1378, 1200);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1380, 1201);
    Value_32=node_compile(right_node,info);
    if(!Value_32) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1383, 1202):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1383, 1203);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1383, 1204):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1386, 1205);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1388, 1206);
    const char* fun_name="operator_oror";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1396, 1207),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1396, 1208),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1400, 1209, "struct CVALUE* "), "42op2.nc", 1400, 1210)), "42op2.nc", 1400, 1211);
        __right_value0 = (void*)0;
        __dec_obj129=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s||%s",left_value->c_value,right_value->c_value), "42op2.nc", 1402, 1213);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1402, 1212);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj130=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 1403, 1214, "struct sType* "), "42op2.nc", 1403, 1215),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 1403, 1216),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 1403, 1218);
        come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1403, 1217);
        come_value->var=left_value->var;
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1408, 1219));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1411, 1220);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1411, 1221):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1411, 1222);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1411, 1223):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1411, 1224);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1411, 1225);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOrOrNode_finalize(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOrOrNode_finalize", 2, 1188));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sOrOrNode_finalize", 3, 1189):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sOrOrNode_finalize", 4, 1190):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj131;
    struct sNode* __dec_obj132;
    struct sCommaNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 1419, 1226),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1419, 1227);
    __right_value0 = (void*)0;
    __dec_obj131=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1421, 1229);
    (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1421, 1228) :0);
    __right_value0 = (void*)0;
    __dec_obj132=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1422, 1231);
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1422, 1230) :0);
        __result_obj__0 = (struct sCommaNode*)come_increment_ref_count(self, "42op2.nc", 1425, 1232);
    come_call_finalizer(sCommaNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1425, 1236);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1425, 1237):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1425, 1238):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCommaNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1425, 1239);
    return __result_obj__0;
}

char*  sCommaNode_kind(struct sCommaNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCommaNode","42op2.nc",1427))), "42op2.nc", 1427, 1240);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1427, 1241));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1427, 1242));
    return __result_obj__0;
}

_Bool  sCommaNode_compile(struct sCommaNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool  Value  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool  Value_33  ;
    _Bool  __result_obj__0  ;
    struct CVALUE*  right_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj133  ;
    struct sType*  __dec_obj134  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_33, 0, sizeof(Value_33));
    memset(&right_value, 0, sizeof(right_value));
    memset(&come_value, 0, sizeof(come_value));
    left_node=self->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1439, 1243);
    right_node=self->mRight;
    Value_33=node_compile(right_node,info);
    if(!Value_33) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1444, 1244);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1447, 1245);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1449, 1246, "struct CVALUE* "), "42op2.nc", 1449, 1247)), "42op2.nc", 1449, 1248);
    __right_value0 = (void*)0;
    __dec_obj133=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s,%s",left_value->c_value,right_value->c_value), "42op2.nc", 1451, 1250);
    __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1451, 1249);
    __right_value0 = (void*)0;
    __dec_obj134=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(right_value->type), "42op2.nc", 1452, 1252);
    come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1452, 1251);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1457, 1253));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1459, 1254);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1459, 1255);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1459, 1256);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCommaNode_finalize(struct sCommaNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCommaNode_finalize", 2, 1233));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sCommaNode_finalize", 3, 1234):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sCommaNode_finalize", 4, 1235):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj135;
    struct sNode* __dec_obj136;
    struct sNode* __dec_obj137;
    struct sConditionalNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 1467, 1257),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1467, 1258);
    __right_value0 = (void*)0;
    __dec_obj135=self->mValue1,
    self->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(value1), "42op2.nc", 1469, 1260);
    (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1469, 1259) :0);
    __right_value0 = (void*)0;
    __dec_obj136=self->mValue2,
    self->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(value2), "42op2.nc", 1470, 1262);
    (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1470, 1261) :0);
    __right_value0 = (void*)0;
    __dec_obj137=self->mValue3,
    self->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(value3), "42op2.nc", 1471, 1264);
    (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1471, 1263) :0);
        __result_obj__0 = (struct sConditionalNode*)come_increment_ref_count(self, "42op2.nc", 1474, 1265);
    come_call_finalizer(sConditionalNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1474, 1270);
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1474, 1271):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1474, 1272):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1474, 1273):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sConditionalNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1474, 1274);
    return __result_obj__0;
}

char*  sConditionalNode_kind(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sConditionalNode","42op2.nc",1476))), "42op2.nc", 1476, 1275);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1476, 1276));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1476, 1277));
    return __result_obj__0;
}

_Bool  sConditionalNode_compile(struct sConditionalNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  in_conditional_operator  ;
    struct sNode* value1;
    _Bool  Value  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  value1_value  ;
    struct sNode* value2;
    _Bool  Value_34  ;
    _Bool  __result_obj__0  ;
    struct CVALUE*  value2_value  ;
    struct sNode* value3;
    _Bool  Value_35  ;
    struct CVALUE*  value3_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    memset(&in_conditional_operator, 0, sizeof(in_conditional_operator));
    memset(&value1, 0, sizeof(value1));
    memset(&Value, 0, sizeof(Value));
    memset(&value1_value, 0, sizeof(value1_value));
    memset(&value2, 0, sizeof(value2));
    memset(&Value_34, 0, sizeof(Value_34));
    memset(&value2_value, 0, sizeof(value2_value));
    memset(&value3, 0, sizeof(value3));
    memset(&Value_35, 0, sizeof(Value_35));
    memset(&value3_value, 0, sizeof(value3_value));
    memset(&come_value, 0, sizeof(come_value));
    in_conditional_operator=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1=self->mValue1;
    Value=node_compile(value1,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    value1_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1491, 1278);
    value2=self->mValue2;
    Value_34=node_compile(value2,info);
    if(!Value_34) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1496, 1279);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    value2_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1499, 1280);
    value3=self->mValue3;
    Value_35=node_compile(value3,info);
    if(!Value_35) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1504, 1281);
        come_call_finalizer(CVALUE_finalize, value2_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1504, 1282);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    value3_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1507, 1283);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1509, 1284, "struct CVALUE* "), "42op2.nc", 1509, 1285)), "42op2.nc", 1509, 1286);
    __right_value0 = (void*)0;
    __dec_obj138=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value->c_value,value2_value->c_value,value3_value->c_value), "42op2.nc", 1511, 1288);
    __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1511, 1287);
    __right_value0 = (void*)0;
    __dec_obj139=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(value2_value->type), "42op2.nc", 1512, 1290);
    come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1512, 1289);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1517, 1291));
    info->in_conditional_operator=in_conditional_operator;
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1521, 1292);
    come_call_finalizer(CVALUE_finalize, value2_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1521, 1293);
    come_call_finalizer(CVALUE_finalize, value3_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1521, 1294);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1521, 1295);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sConditionalNode_finalize(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sConditionalNode_finalize", 2, 1266));
    }
    if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
        ((self->mValue1) ? self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0,(void*)0, "sConditionalNode_finalize", 3, 1267):(void*)0);
    }
    if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
        ((self->mValue2) ? self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0,(void*)0, "sConditionalNode_finalize", 4, 1268):(void*)0);
    }
    if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
        ((self->mValue3) ? self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0,(void*)0, "sConditionalNode_finalize", 5, 1269):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "conditional_node"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sConditionalNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1528, 1301, "struct sNode");
    _inf_obj_value3=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value1=sConditionalNode_initialize((struct sConditionalNode* )come_increment_ref_count((struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), "42op2.nc", 1528, 1296, "struct sConditionalNode* "), "42op2.nc", 1528, 1297),(struct sNode*)come_increment_ref_count(value1, "42op2.nc", 1528, 1298),(struct sNode*)come_increment_ref_count(value2, "42op2.nc", 1528, 1299),(struct sNode*)come_increment_ref_count(value3, "42op2.nc", 1528, 1300),info))), "42op2.nc", 1528, 1302);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sConditionalNode_finalize;
    _inf_value3->clone=(void*)sConditionalNode_clone;
    _inf_value3->compile=(void*)sConditionalNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sConditionalNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "42op2.nc", 1528, 1315);
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1528, 1316):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1528, 1317):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1528, 1318):(void*)0);
    come_call_finalizer(sConditionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1528, 1319);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 1528, 1320):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1528, 1321):(void*)0);
    return __result_obj__0;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sConditionalNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sConditionalNode*  result  ;
    char*  __dec_obj140  ;
    struct sNode* __dec_obj141;
    struct sNode* __dec_obj142;
    struct sNode* __dec_obj143;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sConditionalNode* )come_increment_ref_count((struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), "sConditionalNode_clone", 5, 1303, "struct sConditionalNode* "), "sConditionalNode_clone", 5, 1304);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj140=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sConditionalNode_clone", 7, 1305, "char* "), "sConditionalNode_clone", 7, 1307);
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0, "sConditionalNode_clone", 7, 1306);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj141=result->mValue1,
        result->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue1), "sConditionalNode_clone", 9, 1309);
        (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0, (void*)0, "sConditionalNode_clone", 9, 1308) :0);
    }
    if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj142=result->mValue2,
        result->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue2), "sConditionalNode_clone", 10, 1311);
        (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0, (void*)0, "sConditionalNode_clone", 10, 1310) :0);
    }
    if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj143=result->mValue3,
        result->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue3), "sConditionalNode_clone", 11, 1313);
        (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0, (void*)0, "sConditionalNode_clone", 11, 1312) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sConditionalNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sConditionalNode_clone}", 12, 1314);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* mult_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "mult_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* __result_obj__0;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value4;
    struct sMultNode* _inf_obj_value4;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj147;
    int sline_real_36;
    struct sNode* right_37;
    struct sNode* _inf_value5;
    struct sDivNode* _inf_obj_value5;
    struct sNode* __dec_obj151;
    int sline_real_38;
    struct sNode* right_39;
    struct sNode* _inf_value6;
    struct sModNode* _inf_obj_value6;
    struct sNode* __dec_obj155;
    int sline_real_40;
    struct sNode* right_41;
    struct sNode* _inf_value7;
    struct sMultNode* _inf_obj_value7;
    struct sNode* __dec_obj156;
    int sline_real_42;
    struct sNode* right_43;
    struct sNode* _inf_value8;
    struct sDivNode* _inf_obj_value8;
    struct sNode* __dec_obj157;
    int sline_real_44;
    struct sNode* right_45;
    struct sNode* _inf_value9;
    struct sModNode* _inf_obj_value9;
    struct sNode* __dec_obj158;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_36, 0, sizeof(sline_real_36));
    memset(&right_37, 0, sizeof(right_37));
    memset(&sline_real_38, 0, sizeof(sline_real_38));
    memset(&right_39, 0, sizeof(right_39));
    memset(&sline_real_40, 0, sizeof(sline_real_40));
    memset(&right_41, 0, sizeof(right_41));
    memset(&sline_real_42, 0, sizeof(sline_real_42));
    memset(&right_43, 0, sizeof(right_43));
    memset(&sline_real_44, 0, sizeof(sline_real_44));
    memset(&right_45, 0, sizeof(right_45));
    node=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1533, 1322);
    parse_sharp_v5(info);
    while(*info->p) {
        if(!node->terminated(node->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                err_msg(info,"invalid )");
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "42op2.nc", 1546, 1323);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1546, 1324):(void*)0);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 1546, 1325):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1546, 1326):(void*)0);
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1548, 1327);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1552, 1332, "struct sNode");
            _inf_obj_value4=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value1=sMultNode_initialize((struct sMultNode* )come_increment_ref_count((struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), "42op2.nc", 1552, 1328, "struct sMultNode* "), "42op2.nc", 1552, 1329),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1552, 1330),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1552, 1331),(_Bool)0,info))), "42op2.nc", 1552, 1333);
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sMultNode_finalize;
            _inf_value4->clone=(void*)sMultNode_clone;
            _inf_value4->compile=(void*)sMultNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sMultNode_kind;
            _inf_value4->left_value=(void*)sNodeBase_left_value;
            __dec_obj147=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value4, "42op2.nc", 1552, 1345);
            (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1552, 1344) :0);
            come_call_finalizer(sMultNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1552, 1346);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1612, 1347):(void*)0);
        }
        else if(*info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42) {
            info->p++;
            sline_real_36=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_37=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1560, 1348);
            info->sline_real=sline_real_36;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1563, 1353, "struct sNode");
            _inf_obj_value5=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value1=sDivNode_initialize((struct sDivNode* )come_increment_ref_count((struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), "42op2.nc", 1563, 1349, "struct sDivNode* "), "42op2.nc", 1563, 1350),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1563, 1351),(struct sNode*)come_increment_ref_count(right_37, "42op2.nc", 1563, 1352),(_Bool)0,info))), "42op2.nc", 1563, 1354);
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sDivNode_finalize;
            _inf_value5->clone=(void*)sDivNode_clone;
            _inf_value5->compile=(void*)sDivNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sDivNode_kind;
            _inf_value5->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj151=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value5, "42op2.nc", 1563, 1366);
            (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1563, 1365) :0);
            come_call_finalizer(sDivNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1563, 1367);
            ((right_37) ? right_37 = come_decrement_ref_count(right_37, ((struct sNode*)right_37)->finalize, ((struct sNode*)right_37)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1612, 1368):(void*)0);
        }
        else if(*info->p==37&&*(info->p+1)!=61) {
            info->p++;
            sline_real_38=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_39=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1571, 1369);
            info->sline_real=sline_real_38;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1574, 1374, "struct sNode");
            _inf_obj_value6=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value1=sModNode_initialize((struct sModNode* )come_increment_ref_count((struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), "42op2.nc", 1574, 1370, "struct sModNode* "), "42op2.nc", 1574, 1371),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1574, 1372),(struct sNode*)come_increment_ref_count(right_39, "42op2.nc", 1574, 1373),(_Bool)0,info))), "42op2.nc", 1574, 1375);
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sModNode_finalize;
            _inf_value6->clone=(void*)sModNode_clone;
            _inf_value6->compile=(void*)sModNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sModNode_kind;
            _inf_value6->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj155=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value6, "42op2.nc", 1574, 1387);
            (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1574, 1386) :0);
            come_call_finalizer(sModNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1574, 1388);
            ((right_39) ? right_39 = come_decrement_ref_count(right_39, ((struct sNode*)right_39)->finalize, ((struct sNode*)right_39)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1612, 1389):(void*)0);
        }
        else if(!node->terminated(node->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_40=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_41=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1582, 1390);
            info->sline_real=sline_real_40;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1585, 1395, "struct sNode");
            _inf_obj_value7=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value1=sMultNode_initialize((struct sMultNode* )come_increment_ref_count((struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), "42op2.nc", 1585, 1391, "struct sMultNode* "), "42op2.nc", 1585, 1392),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1585, 1393),(struct sNode*)come_increment_ref_count(right_41, "42op2.nc", 1585, 1394),(_Bool)1,info))), "42op2.nc", 1585, 1396);
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sMultNode_finalize;
            _inf_value7->clone=(void*)sMultNode_clone;
            _inf_value7->compile=(void*)sMultNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sMultNode_kind;
            _inf_value7->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj156=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value7, "42op2.nc", 1585, 1398);
            (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1585, 1397) :0);
            come_call_finalizer(sMultNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1585, 1399);
            ((right_41) ? right_41 = come_decrement_ref_count(right_41, ((struct sNode*)right_41)->finalize, ((struct sNode*)right_41)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1612, 1400):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_42=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_43=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1593, 1401);
            info->sline_real=sline_real_42;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1596, 1406, "struct sNode");
            _inf_obj_value8=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value1=sDivNode_initialize((struct sDivNode* )come_increment_ref_count((struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), "42op2.nc", 1596, 1402, "struct sDivNode* "), "42op2.nc", 1596, 1403),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1596, 1404),(struct sNode*)come_increment_ref_count(right_43, "42op2.nc", 1596, 1405),(_Bool)1,info))), "42op2.nc", 1596, 1407);
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sDivNode_finalize;
            _inf_value8->clone=(void*)sDivNode_clone;
            _inf_value8->compile=(void*)sDivNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sDivNode_kind;
            _inf_value8->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj157=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value8, "42op2.nc", 1596, 1409);
            (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1596, 1408) :0);
            come_call_finalizer(sDivNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1596, 1410);
            ((right_43) ? right_43 = come_decrement_ref_count(right_43, ((struct sNode*)right_43)->finalize, ((struct sNode*)right_43)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1612, 1411):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_44=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_45=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1604, 1412);
            info->sline_real=sline_real_44;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1607, 1417, "struct sNode");
            _inf_obj_value9=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value1=sModNode_initialize((struct sModNode* )come_increment_ref_count((struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), "42op2.nc", 1607, 1413, "struct sModNode* "), "42op2.nc", 1607, 1414),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1607, 1415),(struct sNode*)come_increment_ref_count(right_45, "42op2.nc", 1607, 1416),(_Bool)1,info))), "42op2.nc", 1607, 1418);
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sModNode_finalize;
            _inf_value9->clone=(void*)sModNode_clone;
            _inf_value9->compile=(void*)sModNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sModNode_kind;
            _inf_value9->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj158=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value9, "42op2.nc", 1607, 1420);
            (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1607, 1419) :0);
            come_call_finalizer(sModNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1607, 1421);
            ((right_45) ? right_45 = come_decrement_ref_count(right_45, ((struct sNode*)right_45)->finalize, ((struct sNode*)right_45)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1612, 1422):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1616, 1423);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1616, 1424):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1616, 1425):(void*)0);
    return __result_obj__0;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMultNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMultNode*  result  ;
    char*  __dec_obj144  ;
    struct sNode* __dec_obj145;
    struct sNode* __dec_obj146;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMultNode* )come_increment_ref_count((struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), "sMultNode_clone", 5, 1334, "struct sMultNode* "), "sMultNode_clone", 5, 1335);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj144=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMultNode_clone", 7, 1336, "char* "), "sMultNode_clone", 7, 1338);
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0, "sMultNode_clone", 7, 1337);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj145=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sMultNode_clone", 10, 1340);
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0, "sMultNode_clone", 10, 1339) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj146=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sMultNode_clone", 11, 1342);
        (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0, (void*)0, "sMultNode_clone", 11, 1341) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sMultNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMultNode_clone}", 12, 1343);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sDivNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDivNode*  result  ;
    char*  __dec_obj148  ;
    struct sNode* __dec_obj149;
    struct sNode* __dec_obj150;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDivNode* )come_increment_ref_count((struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), "sDivNode_clone", 5, 1355, "struct sDivNode* "), "sDivNode_clone", 5, 1356);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj148=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDivNode_clone", 7, 1357, "char* "), "sDivNode_clone", 7, 1359);
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "sDivNode_clone", 7, 1358);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj149=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sDivNode_clone", 10, 1361);
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0, "sDivNode_clone", 10, 1360) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj150=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sDivNode_clone", 11, 1363);
        (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0, "sDivNode_clone", 11, 1362) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDivNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDivNode_clone}", 12, 1364);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sModNode* sModNode_clone(struct sModNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sModNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sModNode*  result  ;
    char*  __dec_obj152  ;
    struct sNode* __dec_obj153;
    struct sNode* __dec_obj154;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sModNode* )come_increment_ref_count((struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), "sModNode_clone", 5, 1376, "struct sModNode* "), "sModNode_clone", 5, 1377);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj152=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sModNode_clone", 7, 1378, "char* "), "sModNode_clone", 7, 1380);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "sModNode_clone", 7, 1379);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj153=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sModNode_clone", 10, 1382);
        (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0, "sModNode_clone", 10, 1381) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj154=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sModNode_clone", 11, 1384);
        (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0, "sModNode_clone", 11, 1383) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sModNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sModNode_clone}", 12, 1385);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* add_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "add_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value10;
    struct sAddNode* _inf_obj_value10;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj159;
    int sline_real_46;
    struct sNode* right_47;
    struct sNode* _inf_value11;
    struct sSubNode* _inf_obj_value11;
    struct sNode* __dec_obj163;
    int sline_real_48;
    struct sNode* right_49;
    struct sNode* _inf_value12;
    struct sAddNode* _inf_obj_value12;
    struct sNode* __dec_obj164;
    int sline_real_50;
    struct sNode* right_51;
    struct sNode* _inf_value13;
    struct sSubNode* _inf_obj_value13;
    struct sNode* __dec_obj165;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_46, 0, sizeof(sline_real_46));
    memset(&right_47, 0, sizeof(right_47));
    memset(&sline_real_48, 0, sizeof(sline_real_48));
    memset(&right_49, 0, sizeof(right_49));
    memset(&sline_real_50, 0, sizeof(sline_real_50));
    memset(&right_51, 0, sizeof(right_51));
    node=(struct sNode*)come_increment_ref_count(mult_exp(info), "42op2.nc", 1621, 1426);
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(mult_exp(info), "42op2.nc", 1633, 1427);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1636, 1432, "struct sNode");
            _inf_obj_value10=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value1=sAddNode_initialize((struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), "42op2.nc", 1636, 1428, "struct sAddNode* "), "42op2.nc", 1636, 1429),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1636, 1430),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1636, 1431),(_Bool)0,info))), "42op2.nc", 1636, 1433);
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sAddNode_finalize;
            _inf_value10->clone=(void*)sAddNode_clone;
            _inf_value10->compile=(void*)sAddNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sAddNode_kind;
            _inf_value10->left_value=(void*)sNodeBase_left_value;
            __dec_obj159=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value10, "42op2.nc", 1636, 1435);
            (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1636, 1434) :0);
            come_call_finalizer(sAddNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1636, 1436);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1677, 1437):(void*)0);
        }
        else if(*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            sline_real_46=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_47=(struct sNode*)come_increment_ref_count(mult_exp(info), "42op2.nc", 1645, 1438);
            info->sline_real=sline_real_46;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1648, 1443, "struct sNode");
            _inf_obj_value11=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value1=sSubNode_initialize((struct sSubNode* )come_increment_ref_count((struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), "42op2.nc", 1648, 1439, "struct sSubNode* "), "42op2.nc", 1648, 1440),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1648, 1441),(struct sNode*)come_increment_ref_count(right_47, "42op2.nc", 1648, 1442),(_Bool)0,info))), "42op2.nc", 1648, 1444);
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sSubNode_finalize;
            _inf_value11->clone=(void*)sSubNode_clone;
            _inf_value11->compile=(void*)sSubNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sSubNode_kind;
            _inf_value11->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj163=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value11, "42op2.nc", 1648, 1456);
            (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1648, 1455) :0);
            come_call_finalizer(sSubNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1648, 1457);
            ((right_47) ? right_47 = come_decrement_ref_count(right_47, ((struct sNode*)right_47)->finalize, ((struct sNode*)right_47)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1677, 1458):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
            info->p+=2;
            sline_real_48=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_49=(struct sNode*)come_increment_ref_count(mult_exp(info), "42op2.nc", 1657, 1459);
            info->sline_real=sline_real_48;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1660, 1464, "struct sNode");
            _inf_obj_value12=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value1=sAddNode_initialize((struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), "42op2.nc", 1660, 1460, "struct sAddNode* "), "42op2.nc", 1660, 1461),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1660, 1462),(struct sNode*)come_increment_ref_count(right_49, "42op2.nc", 1660, 1463),(_Bool)1,info))), "42op2.nc", 1660, 1465);
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sAddNode_finalize;
            _inf_value12->clone=(void*)sAddNode_clone;
            _inf_value12->compile=(void*)sAddNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sAddNode_kind;
            _inf_value12->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj164=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value12, "42op2.nc", 1660, 1467);
            (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1660, 1466) :0);
            come_call_finalizer(sAddNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1660, 1468);
            ((right_49) ? right_49 = come_decrement_ref_count(right_49, ((struct sNode*)right_49)->finalize, ((struct sNode*)right_49)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1677, 1469):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_50=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_51=(struct sNode*)come_increment_ref_count(mult_exp(info), "42op2.nc", 1669, 1470);
            info->sline_real=sline_real_50;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1672, 1475, "struct sNode");
            _inf_obj_value13=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value1=sSubNode_initialize((struct sSubNode* )come_increment_ref_count((struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), "42op2.nc", 1672, 1471, "struct sSubNode* "), "42op2.nc", 1672, 1472),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1672, 1473),(struct sNode*)come_increment_ref_count(right_51, "42op2.nc", 1672, 1474),(_Bool)1,info))), "42op2.nc", 1672, 1476);
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sSubNode_finalize;
            _inf_value13->clone=(void*)sSubNode_clone;
            _inf_value13->compile=(void*)sSubNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sSubNode_kind;
            _inf_value13->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj165=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value13, "42op2.nc", 1672, 1478);
            (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1672, 1477) :0);
            come_call_finalizer(sSubNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1672, 1479);
            ((right_51) ? right_51 = come_decrement_ref_count(right_51, ((struct sNode*)right_51)->finalize, ((struct sNode*)right_51)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1677, 1480):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1681, 1481);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1681, 1482):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1681, 1483):(void*)0);
    return __result_obj__0;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sSubNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSubNode*  result  ;
    char*  __dec_obj160  ;
    struct sNode* __dec_obj161;
    struct sNode* __dec_obj162;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSubNode* )come_increment_ref_count((struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), "sSubNode_clone", 5, 1445, "struct sSubNode* "), "sSubNode_clone", 5, 1446);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj160=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSubNode_clone", 7, 1447, "char* "), "sSubNode_clone", 7, 1449);
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0, "sSubNode_clone", 7, 1448);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj161=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sSubNode_clone", 9, 1451);
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0, (void*)0, "sSubNode_clone", 9, 1450) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj162=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sSubNode_clone", 10, 1453);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0, "sSubNode_clone", 10, 1452) :0);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sSubNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSubNode_clone}", 12, 1454);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* shift_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shift_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value14;
    struct sLShiftNode* _inf_obj_value14;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj169;
    int sline_real_52;
    struct sNode* right_53;
    struct sNode* _inf_value15;
    struct sRShiftNode* _inf_obj_value15;
    struct sNode* __dec_obj173;
    int sline_real_54;
    struct sNode* right_55;
    struct sNode* _inf_value16;
    struct sLShiftNode* _inf_obj_value16;
    struct sNode* __dec_obj174;
    int sline_real_56;
    struct sNode* right_57;
    struct sNode* _inf_value17;
    struct sRShiftNode* _inf_obj_value17;
    struct sNode* __dec_obj175;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_52, 0, sizeof(sline_real_52));
    memset(&right_53, 0, sizeof(right_53));
    memset(&sline_real_54, 0, sizeof(sline_real_54));
    memset(&right_55, 0, sizeof(right_55));
    memset(&sline_real_56, 0, sizeof(sline_real_56));
    memset(&right_57, 0, sizeof(right_57));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(add_exp(info), "42op2.nc", 1688, 1484);
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(add_exp(info), "42op2.nc", 1699, 1485);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1702, 1490, "struct sNode");
            _inf_obj_value14=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value1=sLShiftNode_initialize((struct sLShiftNode* )come_increment_ref_count((struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), "42op2.nc", 1702, 1486, "struct sLShiftNode* "), "42op2.nc", 1702, 1487),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1702, 1488),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1702, 1489),(_Bool)0,info))), "42op2.nc", 1702, 1491);
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLShiftNode_finalize;
            _inf_value14->clone=(void*)sLShiftNode_clone;
            _inf_value14->compile=(void*)sLShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLShiftNode_kind;
            _inf_value14->left_value=(void*)sNodeBase_left_value;
            __dec_obj169=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value14, "42op2.nc", 1702, 1503);
            (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1702, 1502) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1702, 1504);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1740, 1505):(void*)0);
        }
        else if(*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_52=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_53=(struct sNode*)come_increment_ref_count(add_exp(info), "42op2.nc", 1710, 1506);
            info->sline_real=sline_real_52;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1713, 1511, "struct sNode");
            _inf_obj_value15=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value1=sRShiftNode_initialize((struct sRShiftNode* )come_increment_ref_count((struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), "42op2.nc", 1713, 1507, "struct sRShiftNode* "), "42op2.nc", 1713, 1508),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1713, 1509),(struct sNode*)come_increment_ref_count(right_53, "42op2.nc", 1713, 1510),(_Bool)0,info))), "42op2.nc", 1713, 1512);
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sRShiftNode_finalize;
            _inf_value15->clone=(void*)sRShiftNode_clone;
            _inf_value15->compile=(void*)sRShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sRShiftNode_kind;
            _inf_value15->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj173=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value15, "42op2.nc", 1713, 1524);
            (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1713, 1523) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1713, 1525);
            ((right_53) ? right_53 = come_decrement_ref_count(right_53, ((struct sNode*)right_53)->finalize, ((struct sNode*)right_53)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1740, 1526):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
            info->p+=3;
            sline_real_54=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_55=(struct sNode*)come_increment_ref_count(add_exp(info), "42op2.nc", 1721, 1527);
            info->sline_real=sline_real_54;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1724, 1532, "struct sNode");
            _inf_obj_value16=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value1=sLShiftNode_initialize((struct sLShiftNode* )come_increment_ref_count((struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), "42op2.nc", 1724, 1528, "struct sLShiftNode* "), "42op2.nc", 1724, 1529),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1724, 1530),(struct sNode*)come_increment_ref_count(right_55, "42op2.nc", 1724, 1531),(_Bool)1,info))), "42op2.nc", 1724, 1533);
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sLShiftNode_finalize;
            _inf_value16->clone=(void*)sLShiftNode_clone;
            _inf_value16->compile=(void*)sLShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sLShiftNode_kind;
            _inf_value16->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj174=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value16, "42op2.nc", 1724, 1535);
            (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1724, 1534) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1724, 1536);
            ((right_55) ? right_55 = come_decrement_ref_count(right_55, ((struct sNode*)right_55)->finalize, ((struct sNode*)right_55)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1740, 1537):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
            info->p+=3;
            sline_real_56=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_57=(struct sNode*)come_increment_ref_count(add_exp(info), "42op2.nc", 1732, 1538);
            info->sline_real=sline_real_56;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1735, 1543, "struct sNode");
            _inf_obj_value17=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value1=sRShiftNode_initialize((struct sRShiftNode* )come_increment_ref_count((struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), "42op2.nc", 1735, 1539, "struct sRShiftNode* "), "42op2.nc", 1735, 1540),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1735, 1541),(struct sNode*)come_increment_ref_count(right_57, "42op2.nc", 1735, 1542),(_Bool)1,info))), "42op2.nc", 1735, 1544);
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sRShiftNode_finalize;
            _inf_value17->clone=(void*)sRShiftNode_clone;
            _inf_value17->compile=(void*)sRShiftNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sRShiftNode_kind;
            _inf_value17->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj175=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value17, "42op2.nc", 1735, 1546);
            (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1735, 1545) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1735, 1547);
            ((right_57) ? right_57 = come_decrement_ref_count(right_57, ((struct sNode*)right_57)->finalize, ((struct sNode*)right_57)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1740, 1548):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1744, 1549);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1744, 1550):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1744, 1551):(void*)0);
    return __result_obj__0;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sLShiftNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLShiftNode*  result  ;
    char*  __dec_obj166  ;
    struct sNode* __dec_obj167;
    struct sNode* __dec_obj168;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLShiftNode* )come_increment_ref_count((struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), "sLShiftNode_clone", 5, 1492, "struct sLShiftNode* "), "sLShiftNode_clone", 5, 1493);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj166=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLShiftNode_clone", 7, 1494, "char* "), "sLShiftNode_clone", 7, 1496);
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0, "sLShiftNode_clone", 7, 1495);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj167=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLShiftNode_clone", 10, 1498);
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0, (void*)0, "sLShiftNode_clone", 10, 1497) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj168=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sLShiftNode_clone", 11, 1500);
        (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0, "sLShiftNode_clone", 11, 1499) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLShiftNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLShiftNode_clone}", 12, 1501);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sRShiftNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRShiftNode*  result  ;
    char*  __dec_obj170  ;
    struct sNode* __dec_obj171;
    struct sNode* __dec_obj172;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sRShiftNode* )come_increment_ref_count((struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), "sRShiftNode_clone", 5, 1513, "struct sRShiftNode* "), "sRShiftNode_clone", 5, 1514);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj170=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sRShiftNode_clone", 7, 1515, "char* "), "sRShiftNode_clone", 7, 1517);
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0, "sRShiftNode_clone", 7, 1516);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj171=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sRShiftNode_clone", 10, 1519);
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0, (void*)0, "sRShiftNode_clone", 10, 1518) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj172=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sRShiftNode_clone", 11, 1521);
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0, "sRShiftNode_clone", 11, 1520) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sRShiftNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sRShiftNode_clone}", 12, 1522);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* comparison_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "comparison_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value18;
    struct sGtEqNode* _inf_obj_value18;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj179;
    int sline_real_58;
    struct sNode* right_59;
    struct sNode* _inf_value19;
    struct sLtEqNode* _inf_obj_value19;
    struct sNode* __dec_obj183;
    int sline_real_60;
    struct sNode* right_61;
    struct sNode* _inf_value20;
    struct sGtNode* _inf_obj_value20;
    struct sNode* __dec_obj187;
    int sline_real_62;
    struct sNode* right_63;
    struct sNode* _inf_value21;
    struct sLtNode* _inf_obj_value21;
    struct sNode* __dec_obj191;
    int sline_real_64;
    struct sNode* right_65;
    struct sNode* _inf_value22;
    struct sGtEqNode* _inf_obj_value22;
    struct sNode* __dec_obj192;
    int sline_real_66;
    struct sNode* right_67;
    struct sNode* _inf_value23;
    struct sLtEqNode* _inf_obj_value23;
    struct sNode* __dec_obj193;
    int sline_real_68;
    struct sNode* right_69;
    struct sNode* _inf_value24;
    struct sGtNode* _inf_obj_value24;
    struct sNode* __dec_obj194;
    int sline_real_70;
    struct sNode* right_71;
    struct sNode* _inf_value25;
    struct sLtNode* _inf_obj_value25;
    struct sNode* __dec_obj195;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_58, 0, sizeof(sline_real_58));
    memset(&right_59, 0, sizeof(right_59));
    memset(&sline_real_60, 0, sizeof(sline_real_60));
    memset(&right_61, 0, sizeof(right_61));
    memset(&sline_real_62, 0, sizeof(sline_real_62));
    memset(&right_63, 0, sizeof(right_63));
    memset(&sline_real_64, 0, sizeof(sline_real_64));
    memset(&right_65, 0, sizeof(right_65));
    memset(&sline_real_66, 0, sizeof(sline_real_66));
    memset(&right_67, 0, sizeof(right_67));
    memset(&sline_real_68, 0, sizeof(sline_real_68));
    memset(&right_69, 0, sizeof(right_69));
    memset(&sline_real_70, 0, sizeof(sline_real_70));
    memset(&right_71, 0, sizeof(right_71));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1751, 1552);
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1762, 1553);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1765, 1558, "struct sNode");
            _inf_obj_value18=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value1=sGtEqNode_initialize((struct sGtEqNode* )come_increment_ref_count((struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), "42op2.nc", 1765, 1554, "struct sGtEqNode* "), "42op2.nc", 1765, 1555),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1765, 1556),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1765, 1557),(_Bool)0,info))), "42op2.nc", 1765, 1559);
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sGtEqNode_finalize;
            _inf_value18->clone=(void*)sGtEqNode_clone;
            _inf_value18->compile=(void*)sGtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sGtEqNode_kind;
            _inf_value18->left_value=(void*)sNodeBase_left_value;
            __dec_obj179=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value18, "42op2.nc", 1765, 1571);
            (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1765, 1570) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1765, 1572);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1847, 1573):(void*)0);
        }
        else if(*info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_58=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_59=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1773, 1574);
            info->sline_real=sline_real_58;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1776, 1579, "struct sNode");
            _inf_obj_value19=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value1=sLtEqNode_initialize((struct sLtEqNode* )come_increment_ref_count((struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), "42op2.nc", 1776, 1575, "struct sLtEqNode* "), "42op2.nc", 1776, 1576),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1776, 1577),(struct sNode*)come_increment_ref_count(right_59, "42op2.nc", 1776, 1578),(_Bool)0,info))), "42op2.nc", 1776, 1580);
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sLtEqNode_finalize;
            _inf_value19->clone=(void*)sLtEqNode_clone;
            _inf_value19->compile=(void*)sLtEqNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sLtEqNode_kind;
            _inf_value19->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj183=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value19, "42op2.nc", 1776, 1592);
            (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1776, 1591) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1776, 1593);
            ((right_59) ? right_59 = come_decrement_ref_count(right_59, ((struct sNode*)right_59)->finalize, ((struct sNode*)right_59)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1847, 1594):(void*)0);
        }
        else if(*info->p==62&&*(info->p+1)!=62) {
            info->p++;
            sline_real_60=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_61=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1784, 1595);
            info->sline_real=sline_real_60;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1787, 1600, "struct sNode");
            _inf_obj_value20=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value1=sGtNode_initialize((struct sGtNode* )come_increment_ref_count((struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), "42op2.nc", 1787, 1596, "struct sGtNode* "), "42op2.nc", 1787, 1597),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1787, 1598),(struct sNode*)come_increment_ref_count(right_61, "42op2.nc", 1787, 1599),(_Bool)0,info))), "42op2.nc", 1787, 1601);
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sGtNode_finalize;
            _inf_value20->clone=(void*)sGtNode_clone;
            _inf_value20->compile=(void*)sGtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sGtNode_kind;
            _inf_value20->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj187=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value20, "42op2.nc", 1787, 1613);
            (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1787, 1612) :0);
            come_call_finalizer(sGtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1787, 1614);
            ((right_61) ? right_61 = come_decrement_ref_count(right_61, ((struct sNode*)right_61)->finalize, ((struct sNode*)right_61)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1847, 1615):(void*)0);
        }
        else if(*info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45) {
            info->p++;
            sline_real_62=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_63=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1795, 1616);
            info->sline_real=sline_real_62;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1798, 1621, "struct sNode");
            _inf_obj_value21=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "42op2.nc", 1798, 1617, "struct sLtNode* "), "42op2.nc", 1798, 1618),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1798, 1619),(struct sNode*)come_increment_ref_count(right_63, "42op2.nc", 1798, 1620),(_Bool)0,info))), "42op2.nc", 1798, 1622);
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sLtNode_finalize;
            _inf_value21->clone=(void*)sLtNode_clone;
            _inf_value21->compile=(void*)sLtNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sLtNode_kind;
            _inf_value21->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj191=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value21, "42op2.nc", 1798, 1634);
            (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1798, 1633) :0);
            come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1798, 1635);
            ((right_63) ? right_63 = come_decrement_ref_count(right_63, ((struct sNode*)right_63)->finalize, ((struct sNode*)right_63)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1847, 1636):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_64=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_65=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1806, 1637);
            info->sline_real=sline_real_64;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1809, 1642, "struct sNode");
            _inf_obj_value22=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value1=sGtEqNode_initialize((struct sGtEqNode* )come_increment_ref_count((struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), "42op2.nc", 1809, 1638, "struct sGtEqNode* "), "42op2.nc", 1809, 1639),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1809, 1640),(struct sNode*)come_increment_ref_count(right_65, "42op2.nc", 1809, 1641),(_Bool)1,info))), "42op2.nc", 1809, 1643);
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sGtEqNode_finalize;
            _inf_value22->clone=(void*)sGtEqNode_clone;
            _inf_value22->compile=(void*)sGtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sGtEqNode_kind;
            _inf_value22->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj192=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value22, "42op2.nc", 1809, 1645);
            (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1809, 1644) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1809, 1646);
            ((right_65) ? right_65 = come_decrement_ref_count(right_65, ((struct sNode*)right_65)->finalize, ((struct sNode*)right_65)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1847, 1647):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_66=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_67=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1817, 1648);
            info->sline_real=sline_real_66;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1820, 1653, "struct sNode");
            _inf_obj_value23=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value1=sLtEqNode_initialize((struct sLtEqNode* )come_increment_ref_count((struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), "42op2.nc", 1820, 1649, "struct sLtEqNode* "), "42op2.nc", 1820, 1650),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1820, 1651),(struct sNode*)come_increment_ref_count(right_67, "42op2.nc", 1820, 1652),(_Bool)1,info))), "42op2.nc", 1820, 1654);
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sLtEqNode_finalize;
            _inf_value23->clone=(void*)sLtEqNode_clone;
            _inf_value23->compile=(void*)sLtEqNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sLtEqNode_kind;
            _inf_value23->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj193=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value23, "42op2.nc", 1820, 1656);
            (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1820, 1655) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1820, 1657);
            ((right_67) ? right_67 = come_decrement_ref_count(right_67, ((struct sNode*)right_67)->finalize, ((struct sNode*)right_67)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1847, 1658):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_68=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_69=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1828, 1659);
            info->sline_real=sline_real_68;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1831, 1664, "struct sNode");
            _inf_obj_value24=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value1=sGtNode_initialize((struct sGtNode* )come_increment_ref_count((struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), "42op2.nc", 1831, 1660, "struct sGtNode* "), "42op2.nc", 1831, 1661),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1831, 1662),(struct sNode*)come_increment_ref_count(right_69, "42op2.nc", 1831, 1663),(_Bool)1,info))), "42op2.nc", 1831, 1665);
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sGtNode_finalize;
            _inf_value24->clone=(void*)sGtNode_clone;
            _inf_value24->compile=(void*)sGtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sGtNode_kind;
            _inf_value24->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj194=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value24, "42op2.nc", 1831, 1667);
            (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1831, 1666) :0);
            come_call_finalizer(sGtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1831, 1668);
            ((right_69) ? right_69 = come_decrement_ref_count(right_69, ((struct sNode*)right_69)->finalize, ((struct sNode*)right_69)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1847, 1669):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45) {
            info->p+=2;
            sline_real_70=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_71=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1839, 1670);
            info->sline_real=sline_real_70;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1842, 1675, "struct sNode");
            _inf_obj_value25=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "42op2.nc", 1842, 1671, "struct sLtNode* "), "42op2.nc", 1842, 1672),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1842, 1673),(struct sNode*)come_increment_ref_count(right_71, "42op2.nc", 1842, 1674),(_Bool)1,info))), "42op2.nc", 1842, 1676);
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sLtNode_finalize;
            _inf_value25->clone=(void*)sLtNode_clone;
            _inf_value25->compile=(void*)sLtNode_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sLtNode_kind;
            _inf_value25->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj195=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value25, "42op2.nc", 1842, 1678);
            (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1842, 1677) :0);
            come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1842, 1679);
            ((right_71) ? right_71 = come_decrement_ref_count(right_71, ((struct sNode*)right_71)->finalize, ((struct sNode*)right_71)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1847, 1680):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1851, 1681);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1851, 1682):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1851, 1683):(void*)0);
    return __result_obj__0;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sGtEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGtEqNode*  result  ;
    char*  __dec_obj176  ;
    struct sNode* __dec_obj177;
    struct sNode* __dec_obj178;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGtEqNode* )come_increment_ref_count((struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), "sGtEqNode_clone", 5, 1560, "struct sGtEqNode* "), "sGtEqNode_clone", 5, 1561);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj176=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGtEqNode_clone", 7, 1562, "char* "), "sGtEqNode_clone", 7, 1564);
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0, "sGtEqNode_clone", 7, 1563);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj177=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sGtEqNode_clone", 10, 1566);
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0, (void*)0, "sGtEqNode_clone", 10, 1565) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj178=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sGtEqNode_clone", 11, 1568);
        (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0, "sGtEqNode_clone", 11, 1567) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGtEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGtEqNode_clone}", 12, 1569);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sLtEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLtEqNode*  result  ;
    char*  __dec_obj180  ;
    struct sNode* __dec_obj181;
    struct sNode* __dec_obj182;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLtEqNode* )come_increment_ref_count((struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), "sLtEqNode_clone", 5, 1581, "struct sLtEqNode* "), "sLtEqNode_clone", 5, 1582);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj180=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLtEqNode_clone", 7, 1583, "char* "), "sLtEqNode_clone", 7, 1585);
        __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0, (void*)0, "sLtEqNode_clone", 7, 1584);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj181=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLtEqNode_clone", 10, 1587);
        (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0, "sLtEqNode_clone", 10, 1586) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj182=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sLtEqNode_clone", 11, 1589);
        (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0, "sLtEqNode_clone", 11, 1588) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLtEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLtEqNode_clone}", 12, 1590);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sGtNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGtNode*  result  ;
    char*  __dec_obj184  ;
    struct sNode* __dec_obj185;
    struct sNode* __dec_obj186;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGtNode* )come_increment_ref_count((struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), "sGtNode_clone", 5, 1602, "struct sGtNode* "), "sGtNode_clone", 5, 1603);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj184=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGtNode_clone", 7, 1604, "char* "), "sGtNode_clone", 7, 1606);
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0, (void*)0, "sGtNode_clone", 7, 1605);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj185=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sGtNode_clone", 10, 1608);
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0, (void*)0, "sGtNode_clone", 10, 1607) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj186=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sGtNode_clone", 11, 1610);
        (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0, "sGtNode_clone", 11, 1609) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGtNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGtNode_clone}", 12, 1611);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sLtNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLtNode*  result  ;
    char*  __dec_obj188  ;
    struct sNode* __dec_obj189;
    struct sNode* __dec_obj190;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "sLtNode_clone", 5, 1623, "struct sLtNode* "), "sLtNode_clone", 5, 1624);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj188=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLtNode_clone", 7, 1625, "char* "), "sLtNode_clone", 7, 1627);
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0, "sLtNode_clone", 7, 1626);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj189=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLtNode_clone", 10, 1629);
        (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0, (void*)0, "sLtNode_clone", 10, 1628) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj190=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sLtNode_clone", 11, 1631);
        (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0, (void*)0, "sLtNode_clone", 11, 1630) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLtNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLtNode_clone}", 12, 1632);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* eq_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "eq_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value26;
    struct sEq2Node* _inf_obj_value26;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj199;
    int sline_real_72;
    struct sNode* right_73;
    struct sNode* _inf_value27;
    struct sEqNode* _inf_obj_value27;
    struct sNode* __dec_obj203;
    int sline_real_74;
    struct sNode* right_75;
    struct sNode* _inf_value28;
    struct sNotEq2Node* _inf_obj_value28;
    struct sNode* __dec_obj207;
    int sline_real_76;
    struct sNode* right_77;
    struct sNode* _inf_value29;
    struct sNotEqNode* _inf_obj_value29;
    struct sNode* __dec_obj211;
    int sline_real_78;
    struct sNode* right_79;
    struct sNode* _inf_value30;
    struct sEq2Node* _inf_obj_value30;
    struct sNode* __dec_obj212;
    int sline_real_80;
    struct sNode* right_81;
    struct sNode* _inf_value31;
    struct sEqNode* _inf_obj_value31;
    struct sNode* __dec_obj213;
    int sline_real_82;
    struct sNode* right_83;
    struct sNode* _inf_value32;
    struct sNotEq2Node* _inf_obj_value32;
    struct sNode* __dec_obj214;
    int sline_real_84;
    struct sNode* right_85;
    struct sNode* _inf_value33;
    struct sNotEqNode* _inf_obj_value33;
    struct sNode* __dec_obj215;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_72, 0, sizeof(sline_real_72));
    memset(&right_73, 0, sizeof(right_73));
    memset(&sline_real_74, 0, sizeof(sline_real_74));
    memset(&right_75, 0, sizeof(right_75));
    memset(&sline_real_76, 0, sizeof(sline_real_76));
    memset(&right_77, 0, sizeof(right_77));
    memset(&sline_real_78, 0, sizeof(sline_real_78));
    memset(&right_79, 0, sizeof(right_79));
    memset(&sline_real_80, 0, sizeof(sline_real_80));
    memset(&right_81, 0, sizeof(right_81));
    memset(&sline_real_82, 0, sizeof(sline_real_82));
    memset(&right_83, 0, sizeof(right_83));
    memset(&sline_real_84, 0, sizeof(sline_real_84));
    memset(&right_85, 0, sizeof(right_85));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1858, 1684);
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1869, 1685);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1872, 1690, "struct sNode");
            _inf_obj_value26=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value1=sEq2Node_initialize((struct sEq2Node* )come_increment_ref_count((struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), "42op2.nc", 1872, 1686, "struct sEq2Node* "), "42op2.nc", 1872, 1687),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1872, 1688),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1872, 1689),(_Bool)0,info))), "42op2.nc", 1872, 1691);
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEq2Node_finalize;
            _inf_value26->clone=(void*)sEq2Node_clone;
            _inf_value26->compile=(void*)sEq2Node_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEq2Node_kind;
            _inf_value26->left_value=(void*)sNodeBase_left_value;
            __dec_obj199=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value26, "42op2.nc", 1872, 1703);
            (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1872, 1702) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1872, 1704);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1954, 1705):(void*)0);
        }
        else if(*info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_72=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_73=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1880, 1706);
            info->sline_real=sline_real_72;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1883, 1711, "struct sNode");
            _inf_obj_value27=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value1=sEqNode_initialize((struct sEqNode* )come_increment_ref_count((struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), "42op2.nc", 1883, 1707, "struct sEqNode* "), "42op2.nc", 1883, 1708),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1883, 1709),(struct sNode*)come_increment_ref_count(right_73, "42op2.nc", 1883, 1710),(_Bool)0,info))), "42op2.nc", 1883, 1712);
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sEqNode_finalize;
            _inf_value27->clone=(void*)sEqNode_clone;
            _inf_value27->compile=(void*)sEqNode_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sEqNode_kind;
            _inf_value27->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj203=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value27, "42op2.nc", 1883, 1724);
            (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1883, 1723) :0);
            come_call_finalizer(sEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1883, 1725);
            ((right_73) ? right_73 = come_decrement_ref_count(right_73, ((struct sNode*)right_73)->finalize, ((struct sNode*)right_73)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1954, 1726):(void*)0);
        }
        else if(*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_74=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_75=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1891, 1727);
            info->sline_real=sline_real_74;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1894, 1732, "struct sNode");
            _inf_obj_value28=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value1=sNotEq2Node_initialize((struct sNotEq2Node* )come_increment_ref_count((struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), "42op2.nc", 1894, 1728, "struct sNotEq2Node* "), "42op2.nc", 1894, 1729),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1894, 1730),(struct sNode*)come_increment_ref_count(right_75, "42op2.nc", 1894, 1731),(_Bool)0,info))), "42op2.nc", 1894, 1733);
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEq2Node_finalize;
            _inf_value28->clone=(void*)sNotEq2Node_clone;
            _inf_value28->compile=(void*)sNotEq2Node_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEq2Node_kind;
            _inf_value28->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj207=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value28, "42op2.nc", 1894, 1745);
            (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1894, 1744) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1894, 1746);
            ((right_75) ? right_75 = come_decrement_ref_count(right_75, ((struct sNode*)right_75)->finalize, ((struct sNode*)right_75)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1954, 1747):(void*)0);
        }
        else if(*info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_76=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_77=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1902, 1748);
            info->sline_real=sline_real_76;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1905, 1753, "struct sNode");
            _inf_obj_value29=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value1=sNotEqNode_initialize((struct sNotEqNode* )come_increment_ref_count((struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), "42op2.nc", 1905, 1749, "struct sNotEqNode* "), "42op2.nc", 1905, 1750),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1905, 1751),(struct sNode*)come_increment_ref_count(right_77, "42op2.nc", 1905, 1752),(_Bool)0,info))), "42op2.nc", 1905, 1754);
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sNotEqNode_finalize;
            _inf_value29->clone=(void*)sNotEqNode_clone;
            _inf_value29->compile=(void*)sNotEqNode_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sNotEqNode_kind;
            _inf_value29->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj211=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value29, "42op2.nc", 1905, 1766);
            (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1905, 1765) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1905, 1767);
            ((right_77) ? right_77 = come_decrement_ref_count(right_77, ((struct sNode*)right_77)->finalize, ((struct sNode*)right_77)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1954, 1768):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_78=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_79=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1913, 1769);
            info->sline_real=sline_real_78;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1916, 1774, "struct sNode");
            _inf_obj_value30=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value1=sEq2Node_initialize((struct sEq2Node* )come_increment_ref_count((struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), "42op2.nc", 1916, 1770, "struct sEq2Node* "), "42op2.nc", 1916, 1771),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1916, 1772),(struct sNode*)come_increment_ref_count(right_79, "42op2.nc", 1916, 1773),(_Bool)1,info))), "42op2.nc", 1916, 1775);
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEq2Node_finalize;
            _inf_value30->clone=(void*)sEq2Node_clone;
            _inf_value30->compile=(void*)sEq2Node_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEq2Node_kind;
            _inf_value30->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj212=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value30, "42op2.nc", 1916, 1777);
            (__dec_obj212 ? __dec_obj212 = come_decrement_ref_count(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1916, 1776) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1916, 1778);
            ((right_79) ? right_79 = come_decrement_ref_count(right_79, ((struct sNode*)right_79)->finalize, ((struct sNode*)right_79)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1954, 1779):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_80=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_81=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1924, 1780);
            info->sline_real=sline_real_80;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1927, 1785, "struct sNode");
            _inf_obj_value31=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value1=sEqNode_initialize((struct sEqNode* )come_increment_ref_count((struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), "42op2.nc", 1927, 1781, "struct sEqNode* "), "42op2.nc", 1927, 1782),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1927, 1783),(struct sNode*)come_increment_ref_count(right_81, "42op2.nc", 1927, 1784),(_Bool)1,info))), "42op2.nc", 1927, 1786);
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sEqNode_finalize;
            _inf_value31->clone=(void*)sEqNode_clone;
            _inf_value31->compile=(void*)sEqNode_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sEqNode_kind;
            _inf_value31->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj213=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value31, "42op2.nc", 1927, 1788);
            (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1927, 1787) :0);
            come_call_finalizer(sEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1927, 1789);
            ((right_81) ? right_81 = come_decrement_ref_count(right_81, ((struct sNode*)right_81)->finalize, ((struct sNode*)right_81)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1954, 1790):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_82=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_83=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1935, 1791);
            info->sline_real=sline_real_82;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1938, 1796, "struct sNode");
            _inf_obj_value32=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value1=sNotEq2Node_initialize((struct sNotEq2Node* )come_increment_ref_count((struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), "42op2.nc", 1938, 1792, "struct sNotEq2Node* "), "42op2.nc", 1938, 1793),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1938, 1794),(struct sNode*)come_increment_ref_count(right_83, "42op2.nc", 1938, 1795),(_Bool)1,info))), "42op2.nc", 1938, 1797);
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEq2Node_finalize;
            _inf_value32->clone=(void*)sNotEq2Node_clone;
            _inf_value32->compile=(void*)sNotEq2Node_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEq2Node_kind;
            _inf_value32->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj214=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value32, "42op2.nc", 1938, 1799);
            (__dec_obj214 ? __dec_obj214 = come_decrement_ref_count(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1938, 1798) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1938, 1800);
            ((right_83) ? right_83 = come_decrement_ref_count(right_83, ((struct sNode*)right_83)->finalize, ((struct sNode*)right_83)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1954, 1801):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_84=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_85=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1946, 1802);
            info->sline_real=sline_real_84;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1949, 1807, "struct sNode");
            _inf_obj_value33=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value1=sNotEqNode_initialize((struct sNotEqNode* )come_increment_ref_count((struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), "42op2.nc", 1949, 1803, "struct sNotEqNode* "), "42op2.nc", 1949, 1804),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1949, 1805),(struct sNode*)come_increment_ref_count(right_85, "42op2.nc", 1949, 1806),(_Bool)1,info))), "42op2.nc", 1949, 1808);
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sNotEqNode_finalize;
            _inf_value33->clone=(void*)sNotEqNode_clone;
            _inf_value33->compile=(void*)sNotEqNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sNotEqNode_kind;
            _inf_value33->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj215=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value33, "42op2.nc", 1949, 1810);
            (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1949, 1809) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1949, 1811);
            ((right_85) ? right_85 = come_decrement_ref_count(right_85, ((struct sNode*)right_85)->finalize, ((struct sNode*)right_85)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1954, 1812):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1958, 1813);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1958, 1814):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1958, 1815):(void*)0);
    return __result_obj__0;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sEq2Node* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sEq2Node*  result  ;
    char*  __dec_obj196  ;
    struct sNode* __dec_obj197;
    struct sNode* __dec_obj198;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sEq2Node* )come_increment_ref_count((struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), "sEq2Node_clone", 5, 1692, "struct sEq2Node* "), "sEq2Node_clone", 5, 1693);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj196=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sEq2Node_clone", 7, 1694, "char* "), "sEq2Node_clone", 7, 1696);
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0, "sEq2Node_clone", 7, 1695);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj197=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sEq2Node_clone", 10, 1698);
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0, (void*)0, "sEq2Node_clone", 10, 1697) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj198=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sEq2Node_clone", 11, 1700);
        (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0, (void*)0, "sEq2Node_clone", 11, 1699) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sEq2Node_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sEq2Node_clone}", 12, 1701);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sEqNode*  result  ;
    char*  __dec_obj200  ;
    struct sNode* __dec_obj201;
    struct sNode* __dec_obj202;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sEqNode* )come_increment_ref_count((struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), "sEqNode_clone", 5, 1713, "struct sEqNode* "), "sEqNode_clone", 5, 1714);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj200=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sEqNode_clone", 7, 1715, "char* "), "sEqNode_clone", 7, 1717);
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0, (void*)0, "sEqNode_clone", 7, 1716);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj201=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sEqNode_clone", 10, 1719);
        (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0, (void*)0, "sEqNode_clone", 10, 1718) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj202=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sEqNode_clone", 11, 1721);
        (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0, (void*)0, "sEqNode_clone", 11, 1720) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sEqNode_clone}", 12, 1722);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNotEq2Node* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNotEq2Node*  result  ;
    char*  __dec_obj204  ;
    struct sNode* __dec_obj205;
    struct sNode* __dec_obj206;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNotEq2Node* )come_increment_ref_count((struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), "sNotEq2Node_clone", 5, 1734, "struct sNotEq2Node* "), "sNotEq2Node_clone", 5, 1735);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj204=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNotEq2Node_clone", 7, 1736, "char* "), "sNotEq2Node_clone", 7, 1738);
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0, "sNotEq2Node_clone", 7, 1737);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj205=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sNotEq2Node_clone", 10, 1740);
        (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0, (void*)0, "sNotEq2Node_clone", 10, 1739) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj206=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sNotEq2Node_clone", 11, 1742);
        (__dec_obj206 ? __dec_obj206 = come_decrement_ref_count(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0, (void*)0, "sNotEq2Node_clone", 11, 1741) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sNotEq2Node_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNotEq2Node_clone}", 12, 1743);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNotEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNotEqNode*  result  ;
    char*  __dec_obj208  ;
    struct sNode* __dec_obj209;
    struct sNode* __dec_obj210;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNotEqNode* )come_increment_ref_count((struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), "sNotEqNode_clone", 5, 1755, "struct sNotEqNode* "), "sNotEqNode_clone", 5, 1756);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj208=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNotEqNode_clone", 7, 1757, "char* "), "sNotEqNode_clone", 7, 1759);
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0,0, (void*)0, "sNotEqNode_clone", 7, 1758);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj209=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sNotEqNode_clone", 10, 1761);
        (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0, (void*)0, "sNotEqNode_clone", 10, 1760) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj210=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sNotEqNode_clone", 11, 1763);
        (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0, (void*)0, "sNotEqNode_clone", 11, 1762) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sNotEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNotEqNode_clone}", 12, 1764);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* and_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "and_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value34;
    struct sAndNode* _inf_obj_value34;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj219;
    int sline_real_86;
    struct sNode* right_87;
    struct sNode* _inf_value35;
    struct sAndNode* _inf_obj_value35;
    struct sNode* __dec_obj220;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_86, 0, sizeof(sline_real_86));
    memset(&right_87, 0, sizeof(right_87));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(eq_exp(info), "42op2.nc", 1965, 1816);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(!node->terminated(node->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(eq_exp(info), "42op2.nc", 1976, 1817);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1979, 1822, "struct sNode");
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value1=sAndNode_initialize((struct sAndNode* )come_increment_ref_count((struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), "42op2.nc", 1979, 1818, "struct sAndNode* "), "42op2.nc", 1979, 1819),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1979, 1820),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1979, 1821),(_Bool)0,info))), "42op2.nc", 1979, 1823);
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            _inf_value34->left_value=(void*)sNodeBase_left_value;
            __dec_obj219=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value34, "42op2.nc", 1979, 1835);
            (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1979, 1834) :0);
            come_call_finalizer(sAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1979, 1836);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1995, 1837):(void*)0);
        }
        else if(!node->terminated(node->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_86=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_87=(struct sNode*)come_increment_ref_count(eq_exp(info), "42op2.nc", 1987, 1838);
            info->sline_real=sline_real_86;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1990, 1843, "struct sNode");
            _inf_obj_value35=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value1=sAndNode_initialize((struct sAndNode* )come_increment_ref_count((struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), "42op2.nc", 1990, 1839, "struct sAndNode* "), "42op2.nc", 1990, 1840),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1990, 1841),(struct sNode*)come_increment_ref_count(right_87, "42op2.nc", 1990, 1842),(_Bool)1,info))), "42op2.nc", 1990, 1844);
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sAndNode_finalize;
            _inf_value35->clone=(void*)sAndNode_clone;
            _inf_value35->compile=(void*)sAndNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sAndNode_kind;
            _inf_value35->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj220=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value35, "42op2.nc", 1990, 1846);
            (__dec_obj220 ? __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1990, 1845) :0);
            come_call_finalizer(sAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1990, 1847);
            ((right_87) ? right_87 = come_decrement_ref_count(right_87, ((struct sNode*)right_87)->finalize, ((struct sNode*)right_87)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1995, 1848):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1999, 1849);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1999, 1850):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1999, 1851):(void*)0);
    return __result_obj__0;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sAndNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAndNode*  result  ;
    char*  __dec_obj216  ;
    struct sNode* __dec_obj217;
    struct sNode* __dec_obj218;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAndNode* )come_increment_ref_count((struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), "sAndNode_clone", 5, 1824, "struct sAndNode* "), "sAndNode_clone", 5, 1825);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj216=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAndNode_clone", 7, 1826, "char* "), "sAndNode_clone", 7, 1828);
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0, "sAndNode_clone", 7, 1827);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj217=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sAndNode_clone", 10, 1830);
        (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0, (void*)0, "sAndNode_clone", 10, 1829) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj218=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sAndNode_clone", 11, 1832);
        (__dec_obj218 ? __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0, (void*)0, "sAndNode_clone", 11, 1831) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAndNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAndNode_clone}", 12, 1833);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* xor_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xor_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value36;
    struct sXOrNode* _inf_obj_value36;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj224;
    int sline_real_88;
    struct sNode* right_89;
    struct sNode* _inf_value37;
    struct sXOrNode* _inf_obj_value37;
    struct sNode* __dec_obj225;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_88, 0, sizeof(sline_real_88));
    memset(&right_89, 0, sizeof(right_89));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(and_exp(info), "42op2.nc", 2006, 1852);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==94&&*(info->p+1)!=61) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(and_exp(info), "42op2.nc", 2017, 1853);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2020, 1858, "struct sNode");
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value1=sXOrNode_initialize((struct sXOrNode* )come_increment_ref_count((struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), "42op2.nc", 2020, 1854, "struct sXOrNode* "), "42op2.nc", 2020, 1855),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2020, 1856),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 2020, 1857),(_Bool)0,info))), "42op2.nc", 2020, 1859);
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            _inf_value36->left_value=(void*)sNodeBase_left_value;
            __dec_obj224=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value36, "42op2.nc", 2020, 1871);
            (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2020, 1870) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2020, 1872);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2036, 1873):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_88=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_89=(struct sNode*)come_increment_ref_count(and_exp(info), "42op2.nc", 2028, 1874);
            info->sline_real=sline_real_88;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2031, 1879, "struct sNode");
            _inf_obj_value37=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value1=sXOrNode_initialize((struct sXOrNode* )come_increment_ref_count((struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), "42op2.nc", 2031, 1875, "struct sXOrNode* "), "42op2.nc", 2031, 1876),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2031, 1877),(struct sNode*)come_increment_ref_count(right_89, "42op2.nc", 2031, 1878),(_Bool)1,info))), "42op2.nc", 2031, 1880);
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sXOrNode_finalize;
            _inf_value37->clone=(void*)sXOrNode_clone;
            _inf_value37->compile=(void*)sXOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sXOrNode_kind;
            _inf_value37->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj225=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value37, "42op2.nc", 2031, 1882);
            (__dec_obj225 ? __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2031, 1881) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2031, 1883);
            ((right_89) ? right_89 = come_decrement_ref_count(right_89, ((struct sNode*)right_89)->finalize, ((struct sNode*)right_89)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2036, 1884):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2040, 1885);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2040, 1886):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2040, 1887):(void*)0);
    return __result_obj__0;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sXOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sXOrNode*  result  ;
    char*  __dec_obj221  ;
    struct sNode* __dec_obj222;
    struct sNode* __dec_obj223;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sXOrNode* )come_increment_ref_count((struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), "sXOrNode_clone", 5, 1860, "struct sXOrNode* "), "sXOrNode_clone", 5, 1861);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj221=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sXOrNode_clone", 7, 1862, "char* "), "sXOrNode_clone", 7, 1864);
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0,0, (void*)0, "sXOrNode_clone", 7, 1863);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj222=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sXOrNode_clone", 10, 1866);
        (__dec_obj222 ? __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0, (void*)0, "sXOrNode_clone", 10, 1865) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj223=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sXOrNode_clone", 11, 1868);
        (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0, (void*)0, "sXOrNode_clone", 11, 1867) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sXOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sXOrNode_clone}", 12, 1869);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* or_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "or_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value38;
    struct sOrNode* _inf_obj_value38;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj229;
    int sline_real_90;
    struct sNode* right_91;
    struct sNode* _inf_value39;
    struct sOrNode* _inf_obj_value39;
    struct sNode* __dec_obj230;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_90, 0, sizeof(sline_real_90));
    memset(&right_91, 0, sizeof(right_91));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(xor_exp(info), "42op2.nc", 2047, 1888);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(xor_exp(info), "42op2.nc", 2058, 1889);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2061, 1894, "struct sNode");
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value1=sOrNode_initialize((struct sOrNode* )come_increment_ref_count((struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), "42op2.nc", 2061, 1890, "struct sOrNode* "), "42op2.nc", 2061, 1891),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2061, 1892),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 2061, 1893),(_Bool)0,info))), "42op2.nc", 2061, 1895);
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            _inf_value38->left_value=(void*)sNodeBase_left_value;
            __dec_obj229=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value38, "42op2.nc", 2061, 1907);
            (__dec_obj229 ? __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2061, 1906) :0);
            come_call_finalizer(sOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2061, 1908);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2077, 1909):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
            info->p+=2;
            sline_real_90=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_91=(struct sNode*)come_increment_ref_count(xor_exp(info), "42op2.nc", 2069, 1910);
            info->sline_real=sline_real_90;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2072, 1915, "struct sNode");
            _inf_obj_value39=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value1=sOrNode_initialize((struct sOrNode* )come_increment_ref_count((struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), "42op2.nc", 2072, 1911, "struct sOrNode* "), "42op2.nc", 2072, 1912),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2072, 1913),(struct sNode*)come_increment_ref_count(right_91, "42op2.nc", 2072, 1914),(_Bool)1,info))), "42op2.nc", 2072, 1916);
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sOrNode_finalize;
            _inf_value39->clone=(void*)sOrNode_clone;
            _inf_value39->compile=(void*)sOrNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sOrNode_kind;
            _inf_value39->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj230=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value39, "42op2.nc", 2072, 1918);
            (__dec_obj230 ? __dec_obj230 = come_decrement_ref_count(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2072, 1917) :0);
            come_call_finalizer(sOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2072, 1919);
            ((right_91) ? right_91 = come_decrement_ref_count(right_91, ((struct sNode*)right_91)->finalize, ((struct sNode*)right_91)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2077, 1920):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2081, 1921);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2081, 1922):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2081, 1923):(void*)0);
    return __result_obj__0;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOrNode*  result  ;
    char*  __dec_obj226  ;
    struct sNode* __dec_obj227;
    struct sNode* __dec_obj228;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOrNode* )come_increment_ref_count((struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), "sOrNode_clone", 5, 1896, "struct sOrNode* "), "sOrNode_clone", 5, 1897);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj226=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOrNode_clone", 7, 1898, "char* "), "sOrNode_clone", 7, 1900);
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0,0, (void*)0, "sOrNode_clone", 7, 1899);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj227=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sOrNode_clone", 10, 1902);
        (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0, (void*)0, "sOrNode_clone", 10, 1901) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj228=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sOrNode_clone", 11, 1904);
        (__dec_obj228 ? __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0, (void*)0, "sOrNode_clone", 11, 1903) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOrNode_clone}", 12, 1905);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* andand_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "andand_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value40;
    struct sAndAndNode* _inf_obj_value40;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj234;
    int sline_real_92;
    struct sNode* right_93;
    struct sNode* _inf_value41;
    struct sAndAndNode* _inf_obj_value41;
    struct sNode* __dec_obj235;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_92, 0, sizeof(sline_real_92));
    memset(&right_93, 0, sizeof(right_93));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(or_exp(info), "42op2.nc", 2088, 1924);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(or_exp(info), "42op2.nc", 2099, 1925);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2102, 1930, "struct sNode");
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value1=sAndAndNode_initialize((struct sAndAndNode* )come_increment_ref_count((struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), "42op2.nc", 2102, 1926, "struct sAndAndNode* "), "42op2.nc", 2102, 1927),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2102, 1928),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 2102, 1929),(_Bool)0,info))), "42op2.nc", 2102, 1931);
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            _inf_value40->left_value=(void*)sNodeBase_left_value;
            __dec_obj234=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value40, "42op2.nc", 2102, 1943);
            (__dec_obj234 ? __dec_obj234 = come_decrement_ref_count(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2102, 1942) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2102, 1944);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2118, 1945):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
            info->p+=3;
            sline_real_92=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_93=(struct sNode*)come_increment_ref_count(or_exp(info), "42op2.nc", 2110, 1946);
            info->sline_real=sline_real_92;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2113, 1951, "struct sNode");
            _inf_obj_value41=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value1=sAndAndNode_initialize((struct sAndAndNode* )come_increment_ref_count((struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), "42op2.nc", 2113, 1947, "struct sAndAndNode* "), "42op2.nc", 2113, 1948),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2113, 1949),(struct sNode*)come_increment_ref_count(right_93, "42op2.nc", 2113, 1950),(_Bool)1,info))), "42op2.nc", 2113, 1952);
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sAndAndNode_finalize;
            _inf_value41->clone=(void*)sAndAndNode_clone;
            _inf_value41->compile=(void*)sAndAndNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sAndAndNode_kind;
            _inf_value41->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj235=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value41, "42op2.nc", 2113, 1954);
            (__dec_obj235 ? __dec_obj235 = come_decrement_ref_count(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2113, 1953) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2113, 1955);
            ((right_93) ? right_93 = come_decrement_ref_count(right_93, ((struct sNode*)right_93)->finalize, ((struct sNode*)right_93)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2118, 1956):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2122, 1957);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2122, 1958):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2122, 1959):(void*)0);
    return __result_obj__0;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sAndAndNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAndAndNode*  result  ;
    char*  __dec_obj231  ;
    struct sNode* __dec_obj232;
    struct sNode* __dec_obj233;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAndAndNode* )come_increment_ref_count((struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), "sAndAndNode_clone", 5, 1932, "struct sAndAndNode* "), "sAndAndNode_clone", 5, 1933);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj231=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAndAndNode_clone", 7, 1934, "char* "), "sAndAndNode_clone", 7, 1936);
        __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0,0, (void*)0, "sAndAndNode_clone", 7, 1935);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj232=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sAndAndNode_clone", 10, 1938);
        (__dec_obj232 ? __dec_obj232 = come_decrement_ref_count(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0, (void*)0, "sAndAndNode_clone", 10, 1937) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj233=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sAndAndNode_clone", 11, 1940);
        (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0, (void*)0, "sAndAndNode_clone", 11, 1939) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAndAndNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAndAndNode_clone}", 12, 1941);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* oror_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "oror_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value42;
    struct sOrOrNode* _inf_obj_value42;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj239;
    int sline_real_94;
    struct sNode* right_95;
    struct sNode* _inf_value43;
    struct sOrOrNode* _inf_obj_value43;
    struct sNode* __dec_obj240;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_94, 0, sizeof(sline_real_94));
    memset(&right_95, 0, sizeof(right_95));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(andand_exp(info), "42op2.nc", 2129, 1960);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(andand_exp(info), "42op2.nc", 2140, 1961);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2143, 1966, "struct sNode");
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value1=sOrOrNode_initialize((struct sOrOrNode* )come_increment_ref_count((struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), "42op2.nc", 2143, 1962, "struct sOrOrNode* "), "42op2.nc", 2143, 1963),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2143, 1964),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 2143, 1965),(_Bool)0,info))), "42op2.nc", 2143, 1967);
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            _inf_value42->left_value=(void*)sNodeBase_left_value;
            __dec_obj239=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value42, "42op2.nc", 2143, 1979);
            (__dec_obj239 ? __dec_obj239 = come_decrement_ref_count(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2143, 1978) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2143, 1980);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2159, 1981):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
            info->p+=3;
            sline_real_94=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_95=(struct sNode*)come_increment_ref_count(andand_exp(info), "42op2.nc", 2151, 1982);
            info->sline_real=sline_real_94;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2154, 1987, "struct sNode");
            _inf_obj_value43=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value1=sOrOrNode_initialize((struct sOrOrNode* )come_increment_ref_count((struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), "42op2.nc", 2154, 1983, "struct sOrOrNode* "), "42op2.nc", 2154, 1984),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2154, 1985),(struct sNode*)come_increment_ref_count(right_95, "42op2.nc", 2154, 1986),(_Bool)1,info))), "42op2.nc", 2154, 1988);
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sOrOrNode_finalize;
            _inf_value43->clone=(void*)sOrOrNode_clone;
            _inf_value43->compile=(void*)sOrOrNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sOrOrNode_kind;
            _inf_value43->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj240=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value43, "42op2.nc", 2154, 1990);
            (__dec_obj240 ? __dec_obj240 = come_decrement_ref_count(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2154, 1989) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2154, 1991);
            ((right_95) ? right_95 = come_decrement_ref_count(right_95, ((struct sNode*)right_95)->finalize, ((struct sNode*)right_95)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2159, 1992):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2163, 1993);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2163, 1994):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2163, 1995):(void*)0);
    return __result_obj__0;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sOrOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOrOrNode*  result  ;
    char*  __dec_obj236  ;
    struct sNode* __dec_obj237;
    struct sNode* __dec_obj238;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOrOrNode* )come_increment_ref_count((struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), "sOrOrNode_clone", 5, 1968, "struct sOrOrNode* "), "sOrOrNode_clone", 5, 1969);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj236=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOrOrNode_clone", 7, 1970, "char* "), "sOrOrNode_clone", 7, 1972);
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0, "sOrOrNode_clone", 7, 1971);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj237=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sOrOrNode_clone", 10, 1974);
        (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0, (void*)0, "sOrOrNode_clone", 10, 1973) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj238=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sOrOrNode_clone", 11, 1976);
        (__dec_obj238 ? __dec_obj238 = come_decrement_ref_count(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0, (void*)0, "sOrOrNode_clone", 11, 1975) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sOrOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOrOrNode_clone}", 12, 1977);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_comma_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value44;
    struct sCommaNode* _inf_obj_value44;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2168, 2000, "struct sNode");
    _inf_obj_value44=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value1=sCommaNode_initialize((struct sCommaNode* )come_increment_ref_count((struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), "42op2.nc", 2168, 1996, "struct sCommaNode* "), "42op2.nc", 2168, 1997),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2168, 1998),(struct sNode*)come_increment_ref_count(node2, "42op2.nc", 2168, 1999),info))), "42op2.nc", 2168, 2001);
    _inf_value44->_protocol_obj=_inf_obj_value44;
    _inf_value44->finalize=(void*)sCommaNode_finalize;
    _inf_value44->clone=(void*)sCommaNode_clone;
    _inf_value44->compile=(void*)sCommaNode_compile;
    _inf_value44->sline=(void*)sNodeBase_sline;
    _inf_value44->sline_real=(void*)sNodeBase_sline_real;
    _inf_value44->sname=(void*)sNodeBase_sname;
    _inf_value44->terminated=(void*)sNodeBase_terminated;
    _inf_value44->kind=(void*)sCommaNode_kind;
    _inf_value44->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value44)), "42op2.nc", 2168, 2012);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2168, 2013):(void*)0);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2168, 2014):(void*)0);
    come_call_finalizer(sCommaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2168, 2015);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 2168, 2016):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2168, 2017):(void*)0);
    return __result_obj__0;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sCommaNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCommaNode*  result  ;
    char*  __dec_obj241  ;
    struct sNode* __dec_obj242;
    struct sNode* __dec_obj243;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCommaNode* )come_increment_ref_count((struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), "sCommaNode_clone", 5, 2002, "struct sCommaNode* "), "sCommaNode_clone", 5, 2003);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj241=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCommaNode_clone", 7, 2004, "char* "), "sCommaNode_clone", 7, 2006);
        __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0,0, (void*)0, "sCommaNode_clone", 7, 2005);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj242=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sCommaNode_clone", 9, 2008);
        (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0, (void*)0, "sCommaNode_clone", 9, 2007) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj243=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sCommaNode_clone", 10, 2010);
        (__dec_obj243 ? __dec_obj243 = come_decrement_ref_count(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0, (void*)0, "sCommaNode_clone", 10, 2009) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sCommaNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCommaNode_clone}", 11, 2011);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* comma_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "comma_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* node2;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value45;
    struct sCommaNode* _inf_obj_value45;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj244;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&node2, 0, sizeof(node2));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(oror_exp(info), "42op2.nc", 2175, 2018);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(!info->no_comma&&*info->p==44) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(comma_exp(info), "42op2.nc", 2186, 2019);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2189, 2024, "struct sNode");
            _inf_obj_value45=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value1=sCommaNode_initialize((struct sCommaNode* )come_increment_ref_count((struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), "42op2.nc", 2189, 2020, "struct sCommaNode* "), "42op2.nc", 2189, 2021),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2189, 2022),(struct sNode*)come_increment_ref_count(node2, "42op2.nc", 2189, 2023),info))), "42op2.nc", 2189, 2025);
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sCommaNode_finalize;
            _inf_value45->clone=(void*)sCommaNode_clone;
            _inf_value45->compile=(void*)sCommaNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sCommaNode_kind;
            _inf_value45->left_value=(void*)sNodeBase_left_value;
            __dec_obj244=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value45, "42op2.nc", 2189, 2027);
            (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2189, 2026) :0);
            come_call_finalizer(sCommaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2189, 2028);
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2194, 2029):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2198, 2030);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2198, 2031):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2198, 2032):(void*)0);
    return __result_obj__0;
}

struct sNode* conditional_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "conditional_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    struct sNode* __dec_obj245;
    int sline_real;
    struct sNode* value1;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value46;
    struct sNullNode* _inf_obj_value46;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj246;
    _Bool  no_label  ;
    struct sNode* __dec_obj247;
    struct sNode* value2;
    struct sNode* _inf_value47;
    struct sConditionalNode* _inf_obj_value47;
    struct sNode* __dec_obj248;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&value1, 0, sizeof(value1));
    memset(&no_label, 0, sizeof(no_label));
    memset(&value2, 0, sizeof(value2));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(comma_exp(info), "42op2.nc", 2205, 2033);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj245=node,
            node=(struct sNode*)come_increment_ref_count(create_try_operator_node((struct sNode*)come_increment_ref_count(node, "42op2.nc", 2214, 2034),info), "42op2.nc", 2214, 2036);
            (__dec_obj245 ? __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2214, 2035) :0);
        }
        else if(*info->p==63) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            if(*info->p==58) {
                __right_value0 = (void*)0;
                _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2224, 2039, "struct sNode");
                _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), "42op2.nc", 2224, 2037, "struct sNullNode* "), "42op2.nc", 2224, 2038),info))), "42op2.nc", 2224, 2040);
                _inf_value46->_protocol_obj=_inf_obj_value46;
                _inf_value46->finalize=(void*)sNullNode_finalize;
                _inf_value46->clone=(void*)sNullNode_clone;
                _inf_value46->compile=(void*)sNullNode_compile;
                _inf_value46->sline=(void*)sNodeBase_sline;
                _inf_value46->sline_real=(void*)sNodeBase_sline_real;
                _inf_value46->sname=(void*)sNodeBase_sname;
                _inf_value46->terminated=(void*)sNodeBase_terminated;
                _inf_value46->kind=(void*)sNullNode_kind;
                _inf_value46->left_value=(void*)sNodeBase_left_value;
                __dec_obj246=value1,
                value1=(struct sNode*)come_increment_ref_count(_inf_value46, "42op2.nc", 2224, 2042);
                (__dec_obj246 ? __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2224, 2041) :0);
                come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2224, 2043);
            }
            else {
                no_label=info->no_label;
                info->no_label=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj247=value1,
                value1=(struct sNode*)come_increment_ref_count(conditional_exp(info), "42op2.nc", 2229, 2045);
                (__dec_obj247 ? __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2229, 2044) :0);
                info->no_label=no_label;
            }
            expected_next_character(58,info);
            __right_value0 = (void*)0;
            value2=(struct sNode*)come_increment_ref_count(conditional_exp(info), "42op2.nc", 2236, 2046);
            skip_spaces_and_lf(info);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2241, 2052, "struct sNode");
            _inf_obj_value47=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value1=sConditionalNode_initialize((struct sConditionalNode* )come_increment_ref_count((struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), "42op2.nc", 2241, 2047, "struct sConditionalNode* "), "42op2.nc", 2241, 2048),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2241, 2049),(struct sNode*)come_increment_ref_count(value1, "42op2.nc", 2241, 2050),(struct sNode*)come_increment_ref_count(value2, "42op2.nc", 2241, 2051),info))), "42op2.nc", 2241, 2053);
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sConditionalNode_finalize;
            _inf_value47->clone=(void*)sConditionalNode_clone;
            _inf_value47->compile=(void*)sConditionalNode_compile;
            _inf_value47->sline=(void*)sNodeBase_sline;
            _inf_value47->sline_real=(void*)sNodeBase_sline_real;
            _inf_value47->sname=(void*)sNodeBase_sname;
            _inf_value47->terminated=(void*)sNodeBase_terminated;
            _inf_value47->kind=(void*)sConditionalNode_kind;
            _inf_value47->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj248=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value47, "42op2.nc", 2241, 2055);
            (__dec_obj248 ? __dec_obj248 = come_decrement_ref_count(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2241, 2054) :0);
            come_call_finalizer(sConditionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2241, 2056);
            ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2246, 2057):(void*)0);
            ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2246, 2058):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2250, 2059);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2250, 2060):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2250, 2061):(void*)0);
    return __result_obj__0;
}

struct sTypeNode* sTypeNode_initialize(struct sTypeNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj249  ;
    struct sTypeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "42op2.nc", 2257, 2062),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2257, 2063);
    __right_value0 = (void*)0;
    __dec_obj249=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "42op2.nc", 2259, 2065);
    come_call_finalizer(sType_finalize, __dec_obj249,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 2259, 2064);
        __result_obj__0 = (struct sTypeNode*)come_increment_ref_count(self, "42op2.nc", 2262, 2066);
    come_call_finalizer(sTypeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 2262, 2069);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 2262, 2070);
    return __result_obj__0;
}

char*  sTypeNode_kind(struct sTypeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeNode","42op2.nc",2264))), "42op2.nc", 2264, 2071);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 2264, 2072));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 2264, 2073));
    return __result_obj__0;
}

_Bool  sTypeNode_compile(struct sTypeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj250  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj251  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 2269, 2074, "struct CVALUE* "), "42op2.nc", 2269, 2075)), "42op2.nc", 2269, 2076);
    __right_value0 = (void*)0;
    __dec_obj250=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(make_type_name_string(self->type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "42op2.nc", 2271, 2078);
    __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 2271, 2077);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj251=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 2272, 2079, "struct sType* "), "42op2.nc", 2272, 2080),(char*)come_increment_ref_count(xsprintf("__typename"), "42op2.nc", 2272, 2081),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 2272, 2083);
    come_call_finalizer(sType_finalize, __dec_obj251,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 2272, 2082);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 2275, 2084));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 2277, 2085);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeNode_finalize(struct sTypeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTypeNode_finalize", 2, 2067));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sTypeNode_finalize}", 3, 2068);
    }
        neo_current_frame = fr.prev;
}

struct sNode* expression_v13(struct sInfo*  info  , _Bool  type_name_exp  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "expression_v13"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* node;
    char* p;
    int sline;
    void* __right_value0 = (void*)0;
    char*  word  ;
    _Bool  fun_call  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType*  type1  =0;
    char*  name  =0;
    _Bool  err  =0;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value48;
    struct sTypeNode* _inf_obj_value48;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj254;
    struct sNode* __dec_obj255;
    struct sNode* __dec_obj256;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&word, 0, sizeof(word));
    memset(&fun_call, 0, sizeof(fun_call));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    node=((void*)0);
    skip_spaces_and_lf(info);
    if(*info->p==92) {
        info->p++;
    }
    if(type_name_exp&&(*info->p==95||xisalpha(*info->p))) {
        p=info->p;
        sline=info->sline;
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "42op2.nc", 2295, 2086);
        fun_call=*info->p==40;
        info->p=p;
        info->sline=sline;
        if(is_type_name(word,info)&&!fun_call) {
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type1=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "42op2.nc", 2303, 2087);
            name=(char* )come_increment_ref_count(multiple_assign_var2->v2, "42op2.nc", 2303, 2088);
            err=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2303, 2091);
            __right_value0 = (void*)0;
            type2_=(struct sType* )come_increment_ref_count(solve_generics(type1,info->generics_type,info), "42op2.nc", 2304, 2092);
            __right_value0 = (void*)0;
            type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "42op2.nc", 2305, 2093);
            __right_value0 = (void*)0;
            _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2307, 2096, "struct sNode");
            _inf_obj_value48=(struct sTypeNode*)come_increment_ref_count(((struct sTypeNode*)(__right_value1=sTypeNode_initialize((struct sTypeNode* )come_increment_ref_count((struct sTypeNode *)come_calloc(1, sizeof(struct sTypeNode )*(1), "42op2.nc", 2307, 2094, "struct sTypeNode* "), "42op2.nc", 2307, 2095),type2,info))), "42op2.nc", 2307, 2097);
            _inf_value48->_protocol_obj=_inf_obj_value48;
            _inf_value48->finalize=(void*)sTypeNode_finalize;
            _inf_value48->clone=(void*)sTypeNode_clone;
            _inf_value48->compile=(void*)sTypeNode_compile;
            _inf_value48->sline=(void*)sNodeBase_sline;
            _inf_value48->sline_real=(void*)sNodeBase_sline_real;
            _inf_value48->sname=(void*)sNodeBase_sname;
            _inf_value48->terminated=(void*)sNodeBase_terminated;
            _inf_value48->kind=(void*)sTypeNode_kind;
            _inf_value48->left_value=(void*)sNodeBase_left_value;
            __dec_obj254=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value48, "42op2.nc", 2307, 2107);
            (__dec_obj254 ? __dec_obj254 = come_decrement_ref_count(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2307, 2106) :0);
            come_call_finalizer(sTypeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2307, 2108);
            come_call_finalizer(sType_finalize, type1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 2312, 2109);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "42op2.nc", 2312, 2110));
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 2312, 2111);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 2312, 2112);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj255=node,
            node=(struct sNode*)come_increment_ref_count(conditional_exp(info), "42op2.nc", 2310, 2114);
            (__dec_obj255 ? __dec_obj255 = come_decrement_ref_count(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2310, 2113) :0);
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "42op2.nc", 2317, 2115));
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj256=node,
        node=(struct sNode*)come_increment_ref_count(conditional_exp(info), "42op2.nc", 2314, 2117);
        (__dec_obj256 ? __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2314, 2116) :0);
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2317, 2118);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2317, 2119):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2317, 2120):(void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 2089);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 2090));
    }
                neo_current_frame = fr.prev;
}

static struct sTypeNode* sTypeNode_clone(struct sTypeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sTypeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTypeNode*  result  ;
    char*  __dec_obj252  ;
    struct sType*  __dec_obj253  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sTypeNode* )come_increment_ref_count((struct sTypeNode *)come_calloc(1, sizeof(struct sTypeNode )*(1), "sTypeNode_clone", 5, 2098, "struct sTypeNode* "), "sTypeNode_clone", 5, 2099);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj252=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sTypeNode_clone", 7, 2100, "char* "), "sTypeNode_clone", 7, 2102);
        __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0,0, (void*)0, "sTypeNode_clone", 7, 2101);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj253=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sTypeNode_clone", 9, 2104);
        come_call_finalizer(sType_finalize, __dec_obj253,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sTypeNode_clone", 9, 2103);
    }
        __result_obj__0 = result;
    come_call_finalizer(sTypeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sTypeNode_clone}", 10, 2105);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v13"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value49;
    struct sNullNode* _inf_obj_value49;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(!gComeC&&charp_operator_equals(buf,"null")) {
                _inf_value49=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2323, 2123, "struct sNode");
        _inf_obj_value49=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), "42op2.nc", 2323, 2121, "struct sNullNode* "), "42op2.nc", 2323, 2122),info))), "42op2.nc", 2323, 2124);
        _inf_value49->_protocol_obj=_inf_obj_value49;
        _inf_value49->finalize=(void*)sNullNode_finalize;
        _inf_value49->clone=(void*)sNullNode_clone;
        _inf_value49->compile=(void*)sNullNode_compile;
        _inf_value49->sline=(void*)sNodeBase_sline;
        _inf_value49->sline_real=(void*)sNodeBase_sline_real;
        _inf_value49->sname=(void*)sNodeBase_sname;
        _inf_value49->terminated=(void*)sNodeBase_terminated;
        _inf_value49->kind=(void*)sNullNode_kind;
        _inf_value49->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value49)), "42op2.nc", 2323, 2125);
        come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2323, 2126);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 2323, 2127):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2323, 2128):(void*)0);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v12(buf,head,head_sline,info))), "42op2.nc", 2326, 2129);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 2326, 2130):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2326, 2131):(void*)0);
    return __result_obj__0;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_less"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value50;
    struct sLtNode* _inf_obj_value50;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value50=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2331, 2136, "struct sNode");
    _inf_obj_value50=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "42op2.nc", 2331, 2132, "struct sLtNode* "), "42op2.nc", 2331, 2133),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2331, 2134),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 2331, 2135),(_Bool)0,info))), "42op2.nc", 2331, 2137);
    _inf_value50->_protocol_obj=_inf_obj_value50;
    _inf_value50->finalize=(void*)sLtNode_finalize;
    _inf_value50->clone=(void*)sLtNode_clone;
    _inf_value50->compile=(void*)sLtNode_compile;
    _inf_value50->sline=(void*)sNodeBase_sline;
    _inf_value50->sline_real=(void*)sNodeBase_sline_real;
    _inf_value50->sname=(void*)sNodeBase_sname;
    _inf_value50->terminated=(void*)sNodeBase_terminated;
    _inf_value50->kind=(void*)sLtNode_kind;
    _inf_value50->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value50)), "42op2.nc", 2331, 2138);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2331, 2139):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2331, 2140):(void*)0);
    come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2331, 2141);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 2331, 2142):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2331, 2143):(void*)0);
    return __result_obj__0;
}

