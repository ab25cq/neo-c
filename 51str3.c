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
struct sNode* expression_node_v96(struct sInfo*  info  );
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void sType_finalize(struct sType*  self  );
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sNode* parse_tuple(struct sInfo*  info  , _Bool  named_tuple  );
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
struct sNode* parse_vector(struct sInfo*  info  );
// uniq global variable
// inline function

// body function
struct sNode* expression_node_v96(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v96"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int sline_real;
    int sline;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* exps;
    struct buffer*  value  ;
    char* head_of_last_line;
    int len;
    struct sNode* exp;
    int sline2;
    struct sNode* __result_obj__0;
    int sline_real_2;
    int sline_3;
    struct buffer*  value_4  ;
    char* p;
    int sline_5;
    int sline2_6;
    void* __right_value2 = (void*)0;
    int sline_real_7;
    char prefix;
    int sline_8;
    struct buffer*  value_9  ;
    char* p_10;
    int sline_11;
    int sline2_12;
    int sline_real_13;
    int sline_14;
    struct buffer*  value_15  ;
    char* p_16;
    int sline_17;
    int sline2_18;
    int sline_real_19;
    int sline_20;
    struct buffer*  value_21  ;
    unsigned long  int  size  ;
    char* p_22;
    int sline_23;
    int len_24;
    int sline2_25;
    int sline_real_26;
    int sline_27;
    struct buffer*  buf  ;
    _Bool  global  ;
    _Bool  ignore_case  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    struct buffer*  method_block  ;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    struct sNode* node;
    int sline_real_30;
    int sline_31;
    struct buffer*  value_32  ;
    char* p_33;
    int sline_34;
    int len_35;
    int sline2_36;
    _Bool  global_37  ;
    _Bool  ignore_case_38  ;
    struct sNode* obj_39;
    struct list$1tuple2$2char$phsNode$ph$ph* params_40;
    struct buffer*  method_block_41  ;
    int method_block_sline_42;
    struct list$1sType$ph* method_generics_types_43;
    struct sNode* node_44;
    int sline_real_45;
    char prefix_46;
    int c;
    int n;
    int n_47;
    unsigned long long int n_49;
    int sline_real_50;
    int c_51;
    int n_52;
    int n_53;
    unsigned long long int n_56;
    int sline_real_57;
    int sline_58;
    struct list$1sNode$ph* exps_59;
    struct buffer*  value_60  ;
    char* p_61;
    int sline_62;
    int len_63;
    struct sNode* exp_64;
    int sline2_65;
    int sline_real_66;
    char* p_67;
    _Bool  no_comma  ;
    struct sNode* node_68;
    char* p2;
    struct buffer*  first_element_source  ;
    struct list$1sNode$ph* list_elements;
    struct list$1sNode$ph* map_keys;
    struct list$1sNode$ph* map_elements;
    _Bool  no_comma_71  ;
    struct sNode* node2;
    _Bool  no_comma_72  ;
    struct sNode* node2_73;
    struct sNode* node3;
    _Bool  no_comma_74  ;
    struct sNode* node2_75;
    int sline_real_76;
    struct sNode* node_77;
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&sline, 0, sizeof(sline));
    memset(&exps, 0, sizeof(exps));
    memset(&value, 0, sizeof(value));
    memset(&head_of_last_line, 0, sizeof(head_of_last_line));
    memset(&len, 0, sizeof(len));
    memset(&exp, 0, sizeof(exp));
    memset(&sline2, 0, sizeof(sline2));
    memset(&sline_real_2, 0, sizeof(sline_real_2));
    memset(&sline_3, 0, sizeof(sline_3));
    memset(&value_4, 0, sizeof(value_4));
    memset(&p, 0, sizeof(p));
    memset(&sline_5, 0, sizeof(sline_5));
    memset(&sline2_6, 0, sizeof(sline2_6));
    memset(&sline_real_7, 0, sizeof(sline_real_7));
    memset(&prefix, 0, sizeof(prefix));
    memset(&sline_8, 0, sizeof(sline_8));
    memset(&value_9, 0, sizeof(value_9));
    memset(&p_10, 0, sizeof(p_10));
    memset(&sline_11, 0, sizeof(sline_11));
    memset(&sline2_12, 0, sizeof(sline2_12));
    memset(&sline_real_13, 0, sizeof(sline_real_13));
    memset(&sline_14, 0, sizeof(sline_14));
    memset(&value_15, 0, sizeof(value_15));
    memset(&p_16, 0, sizeof(p_16));
    memset(&sline_17, 0, sizeof(sline_17));
    memset(&sline2_18, 0, sizeof(sline2_18));
    memset(&sline_real_19, 0, sizeof(sline_real_19));
    memset(&sline_20, 0, sizeof(sline_20));
    memset(&value_21, 0, sizeof(value_21));
    memset(&size, 0, sizeof(size));
    memset(&p_22, 0, sizeof(p_22));
    memset(&sline_23, 0, sizeof(sline_23));
    memset(&len_24, 0, sizeof(len_24));
    memset(&sline2_25, 0, sizeof(sline2_25));
    memset(&sline_real_26, 0, sizeof(sline_real_26));
    memset(&sline_27, 0, sizeof(sline_27));
    memset(&buf, 0, sizeof(buf));
    memset(&global, 0, sizeof(global));
    memset(&ignore_case, 0, sizeof(ignore_case));
    memset(&obj, 0, sizeof(obj));
    memset(&params, 0, sizeof(params));
    memset(&method_block, 0, sizeof(method_block));
    memset(&method_block_sline, 0, sizeof(method_block_sline));
    memset(&method_generics_types, 0, sizeof(method_generics_types));
    memset(&node, 0, sizeof(node));
    memset(&sline_real_30, 0, sizeof(sline_real_30));
    memset(&sline_31, 0, sizeof(sline_31));
    memset(&value_32, 0, sizeof(value_32));
    memset(&p_33, 0, sizeof(p_33));
    memset(&sline_34, 0, sizeof(sline_34));
    memset(&len_35, 0, sizeof(len_35));
    memset(&sline2_36, 0, sizeof(sline2_36));
    memset(&global_37, 0, sizeof(global_37));
    memset(&ignore_case_38, 0, sizeof(ignore_case_38));
    memset(&obj_39, 0, sizeof(obj_39));
    memset(&params_40, 0, sizeof(params_40));
    memset(&method_block_41, 0, sizeof(method_block_41));
    memset(&method_block_sline_42, 0, sizeof(method_block_sline_42));
    memset(&method_generics_types_43, 0, sizeof(method_generics_types_43));
    memset(&node_44, 0, sizeof(node_44));
    memset(&sline_real_45, 0, sizeof(sline_real_45));
    memset(&prefix_46, 0, sizeof(prefix_46));
    memset(&c, 0, sizeof(c));
    memset(&n, 0, sizeof(n));
    memset(&n_47, 0, sizeof(n_47));
    memset(&n_49, 0, sizeof(n_49));
    memset(&sline_real_50, 0, sizeof(sline_real_50));
    memset(&c_51, 0, sizeof(c_51));
    memset(&n_52, 0, sizeof(n_52));
    memset(&n_53, 0, sizeof(n_53));
    memset(&n_56, 0, sizeof(n_56));
    memset(&sline_real_57, 0, sizeof(sline_real_57));
    memset(&sline_58, 0, sizeof(sline_58));
    memset(&exps_59, 0, sizeof(exps_59));
    memset(&value_60, 0, sizeof(value_60));
    memset(&p_61, 0, sizeof(p_61));
    memset(&sline_62, 0, sizeof(sline_62));
    memset(&len_63, 0, sizeof(len_63));
    memset(&exp_64, 0, sizeof(exp_64));
    memset(&sline2_65, 0, sizeof(sline2_65));
    memset(&sline_real_66, 0, sizeof(sline_real_66));
    memset(&p_67, 0, sizeof(p_67));
    memset(&no_comma, 0, sizeof(no_comma));
    memset(&node_68, 0, sizeof(node_68));
    memset(&p2, 0, sizeof(p2));
    memset(&first_element_source, 0, sizeof(first_element_source));
    memset(&list_elements, 0, sizeof(list_elements));
    memset(&map_keys, 0, sizeof(map_keys));
    memset(&map_elements, 0, sizeof(map_elements));
    memset(&no_comma_71, 0, sizeof(no_comma_71));
    memset(&node2, 0, sizeof(node2));
    memset(&no_comma_72, 0, sizeof(no_comma_72));
    memset(&node2_73, 0, sizeof(node2_73));
    memset(&node3, 0, sizeof(node3));
    memset(&no_comma_74, 0, sizeof(no_comma_74));
    memset(&node2_75, 0, sizeof(node2_75));
    memset(&sline_real_76, 0, sizeof(sline_real_76));
    memset(&node_77, 0, sizeof(node_77));
    if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline=info->sline;
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 14, 1, "struct list$1sNode$ph*"), "51str3.nc", 14, 7)), "51str3.nc", 14, 8);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 15, 9, "struct buffer* "), "51str3.nc", 15, 10)), "51str3.nc", 15, 11);
        head_of_last_line=((void*)0);
        while(1) {
            if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p==37) {
                buffer_append_char(value,37);
                buffer_append_char(value,37);
                info->p++;
            }
            else if(*info->p==34) {
                buffer_append_char(value,92);
                buffer_append_char(value,34);
                info->p++;
            }
            else if(*info->p==92) {
                buffer_append_char(value,92);
                info->p++;
                if(xisdigit(*info->p)) {
                    len=0;
                    while(xisdigit(*info->p)&&len<3) {
                        buffer_append_char(value,*info->p);
                        info->p++;
                        len++;
                    }
                }
                else if(*info->p==120||*info->p==88) {
                    buffer_append_char(value,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value,*info->p);
                        info->p++;
                    }
                }
                else if(*info->p==123) {
                    info->p++;
                    __right_value0 = (void*)0;
                    exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 61, 12);
                    list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(exp, "51str3.nc", 63, 27));
                    if(*info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value,"%s");
                    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 124, 28):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                sline2=info->sline;
                info->sline=sline;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p==10) {
                    buffer_append_char(value,92);
                    buffer_append_char(value,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line=info->p;
                }
                else {
                    buffer_append_char(value,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_sstring_node((char* )come_increment_ref_count(buffer_to_string(value), "51str3.nc", 150, 29),(struct list$1sNode$ph*)come_increment_ref_count(exps, "51str3.nc", 150, 30),sline,info))), "51str3.nc", 150, 31);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 150, 32);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 150, 33);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 150, 34):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 150, 35):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 36);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 37);
    }
    else if(*info->p==117&&*(info->p+1)==56&&*(info->p+2)==34) {
        sline_real_2=info->sline_real;
        info->sline_real=info->sline;
        info->p+=3;
        sline_3=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_4=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 161, 38, "struct buffer* "), "51str3.nc", 161, 39)), "51str3.nc", 161, 40);
        while(1) {
            if(*info->p==34) {
                info->p++;
                p=info->p;
                sline_5=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(*info->p==117&&*(info->p+1)==56&&*(info->p+2)==34) {
                    info->p+=3;
                }
                else {
                    info->p=p;
                    info->sline=sline_5;
                    break;
                }
            }
            else if(*info->p==92) {
                buffer_append_char(value_4,92);
                info->p++;
                if(*info->p==34) {
                    buffer_append_char(value_4,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_4,*info->p);
                    info->p++;
                }
            }
            else if(*info->p==0) {
                sline2_6=info->sline;
                info->sline=sline_3;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_6;
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_4,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_2;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=create_prefixed_string_node((char* )come_increment_ref_count(buffer_to_string(value_4), "51str3.nc", 214, 41),(char* )come_increment_ref_count(xsprintf("u8"), "51str3.nc", 214, 42),sline_3,info))), "51str3.nc", 214, 43);
        come_call_finalizer(buffer_finalize, value_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 214, 44);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 214, 45):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 214, 46):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 47);
    }
    else if((*info->p==117||*info->p==85)&&*(info->p+1)==34) {
        sline_real_7=info->sline_real;
        info->sline_real=info->sline;
        prefix=*info->p;
        info->p+=2;
        sline_8=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_9=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 226, 48, "struct buffer* "), "51str3.nc", 226, 49)), "51str3.nc", 226, 50);
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_10=info->p;
                sline_11=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(*info->p==prefix&&*(info->p+1)==34) {
                    info->p+=2;
                }
                else {
                    info->p=p_10;
                    info->sline=sline_11;
                    break;
                }
            }
            else if(*info->p==92) {
                buffer_append_char(value_9,92);
                info->p++;
                if(*info->p==34) {
                    buffer_append_char(value_9,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_9,*info->p);
                    info->p++;
                }
            }
            else if(*info->p==0) {
                sline2_12=info->sline;
                info->sline=sline_8;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_12;
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_9,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_7;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=create_prefixed_string_node((char* )come_increment_ref_count(buffer_to_string(value_9), "51str3.nc", 279, 51),(char* )come_increment_ref_count(xsprintf("%c",prefix), "51str3.nc", 279, 52),sline_8,info))), "51str3.nc", 279, 53);
        come_call_finalizer(buffer_finalize, value_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 279, 54);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 279, 55):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 279, 56):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 57);
    }
    else if(*info->p==34) {
        sline_real_13=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_14=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_15=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 289, 58, "struct buffer* "), "51str3.nc", 289, 59)), "51str3.nc", 289, 60);
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_16=info->p;
                sline_17=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_16;
                    info->sline=sline_17;
                    break;
                }
            }
            else if(*info->p==92) {
                buffer_append_char(value_15,92);
                info->p++;
                if(*info->p==34) {
                    buffer_append_char(value_15,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_15,*info->p);
                    info->p++;
                }
            }
            else if(*info->p==0) {
                sline2_18=info->sline;
                info->sline=sline_14;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_18;
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_15,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_13;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_str_node((char* )come_increment_ref_count(buffer_to_string(value_15), "51str3.nc", 342, 61),sline_14,info))), "51str3.nc", 342, 62);
        come_call_finalizer(buffer_finalize, value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 342, 63);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 342, 64):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 342, 65):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 66);
    }
    else if((*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_19=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_20=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_21=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 352, 67, "struct buffer* "), "51str3.nc", 352, 68)), "51str3.nc", 352, 69);
        size=0;
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_22=info->p;
                sline_23=info->sline;
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_22;
                    info->sline=sline_23;
                    break;
                }
            }
            else if(*info->p==92) {
                buffer_append_char(value_21,92);
                info->p++;
                if(xisdigit(*info->p)) {
                    len_24=0;
                    while(xisdigit(*info->p)&&len_24<3) {
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                        len_24++;
                    }
                    size++;
                }
                else if(*info->p==120||*info->p==88) {
                    buffer_append_char(value_21,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                    }
                    size++;
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 110:
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 116:
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 114:
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 118:
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 102:
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 97:
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 98:
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 92:
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                        size++;
                        break;
                        default:
                        buffer_append_char(value_21,*info->p);
                        info->p++;
                        size++;
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                sline2_25=info->sline;
                info->sline=sline_20;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_21,*info->p);
                info->p++;
                size++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_19;
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_buffer_node((struct buffer* )come_increment_ref_count(value_21, "51str3.nc", 479, 70),size,info))), "51str3.nc", 479, 71);
        come_call_finalizer(buffer_finalize, value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 479, 72);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 479, 73):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 479, 74):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 75);
    }
    else if(*info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_26=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_27=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 488, 76, "struct buffer* "), "51str3.nc", 488, 77)), "51str3.nc", 488, 78);
        while((_Bool)1) {
            if(*info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf,*info->p);
                info->p++;
            }
            else if(*info->p==47) {
                info->p++;
                break;
            }
            else if(*info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf,*info->p);
                info->p++;
            }
        }
        global=(_Bool)0;
        ignore_case=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(*info->p==103) {
                info->p++;
                global=(_Bool)1;
            }
            else if(*info->p==105) {
                info->p++;
                ignore_case=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        obj=(struct sNode*)come_increment_ref_count(create_str_node((char* )come_increment_ref_count(buffer_to_string(buf), "51str3.nc", 527, 79),sline_27,info), "51str3.nc", 527, 80);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "51str3.nc", 529, 81, "struct list$1tuple2$2char$phsNode$ph$ph*"), "51str3.nc", 529, 89)), "51str3.nc", 529, 90);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 531, 105, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 3, 115),(char*)come_increment_ref_count(xsprintf("self"), "51str3.nc", 3, 116),(struct sNode*)come_increment_ref_count(obj, "51str3.nc", 3, 117)), "51str3.nc", 531, 118));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 532, 121, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 532, 122),(char*)come_increment_ref_count(xsprintf("ignore_case"), "51str3.nc", 532, 123),(struct sNode*)come_increment_ref_count(((ignore_case)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 532, 119),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 532, 120),info))))), "51str3.nc", 532, 124)), "51str3.nc", 532, 125));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 532, 126):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 532, 127):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 533, 129, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 533, 130),(char*)come_increment_ref_count(xsprintf("multiline"), "51str3.nc", 533, 131),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 533, 128),info), "51str3.nc", 533, 132)), "51str3.nc", 533, 133));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 534, 136, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 534, 137),(char*)come_increment_ref_count(xsprintf("global"), "51str3.nc", 534, 138),(struct sNode*)come_increment_ref_count(((global)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 534, 134),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 534, 135),info))))), "51str3.nc", 534, 139)), "51str3.nc", 534, 140));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 534, 141):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 534, 142):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 535, 144, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 535, 145),(char*)come_increment_ref_count(xsprintf("extended"), "51str3.nc", 535, 146),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 535, 143),info), "51str3.nc", 535, 147)), "51str3.nc", 535, 148));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 536, 150, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 536, 151),(char*)come_increment_ref_count(xsprintf("dotall"), "51str3.nc", 536, 152),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 536, 149),info), "51str3.nc", 536, 153)), "51str3.nc", 536, 154));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 537, 156, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 537, 157),(char*)come_increment_ref_count(xsprintf("anchored"), "51str3.nc", 537, 158),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 537, 155),info), "51str3.nc", 537, 159)), "51str3.nc", 537, 160));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 538, 162, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 538, 163),(char*)come_increment_ref_count(xsprintf("dollar_endonly"), "51str3.nc", 538, 164),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 538, 161),info), "51str3.nc", 538, 165)), "51str3.nc", 538, 166));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 539, 168, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 539, 169),(char*)come_increment_ref_count(xsprintf("ungreedy"), "51str3.nc", 539, 170),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 539, 167),info), "51str3.nc", 539, 171)), "51str3.nc", 539, 172));
        method_block=((void*)0);
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "51str3.nc", 545, 173, "struct list$1sType$ph*"), "51str3.nc", 545, 207)), "51str3.nc", 545, 208);
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj, "51str3.nc", 547, 209),params,method_block,method_block_sline,method_generics_types,info,(_Bool)0), "51str3.nc", 547, 210);
        info->sline_real=sline_real_26;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "51str3.nc", 550, 211);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 550, 212);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 550, 213):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 550, 214);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 550, 215);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 550, 216):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 550, 217):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 218);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 219):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 220);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 221);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 222):(void*)0);
    }
    else if((*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_30=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_31=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_32=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 559, 223, "struct buffer* "), "51str3.nc", 559, 224)), "51str3.nc", 559, 225);
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_33=info->p;
                sline_34=info->sline;
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_33;
                    info->sline=sline_34;
                    break;
                }
            }
            else if(*info->p==92) {
                buffer_append_char(value_32,92);
                info->p++;
                if(xisdigit(*info->p)) {
                    len_35=0;
                    while(xisdigit(*info->p)&&len_35<3) {
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                        len_35++;
                    }
                }
                else if(*info->p==120||*info->p==88) {
                    buffer_append_char(value_32,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_32,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                sline2_36=info->sline;
                info->sline=sline_31;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_32,*info->p);
                info->p++;
            }
        }
        global_37=(_Bool)0;
        ignore_case_38=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(*info->p==103) {
                info->p++;
                global_37=(_Bool)1;
            }
            else if(*info->p==105) {
                info->p++;
                ignore_case_38=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        obj_39=(struct sNode*)come_increment_ref_count(create_str_node((char* )come_increment_ref_count(buffer_to_string(value_32), "51str3.nc", 685, 226),sline_31,info), "51str3.nc", 685, 227);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params_40=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "51str3.nc", 687, 228, "struct list$1tuple2$2char$phsNode$ph$ph*"), "51str3.nc", 687, 229)), "51str3.nc", 687, 230);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 689, 231, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 689, 232),(char*)come_increment_ref_count(xsprintf("self"), "51str3.nc", 689, 233),(struct sNode*)come_increment_ref_count(obj_39, "51str3.nc", 689, 234)), "51str3.nc", 689, 235));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 690, 238, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 690, 239),(char*)come_increment_ref_count(xsprintf("ignore_case"), "51str3.nc", 690, 240),(struct sNode*)come_increment_ref_count(((ignore_case_38)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 690, 236),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 690, 237),info))))), "51str3.nc", 690, 241)), "51str3.nc", 690, 242));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 690, 243):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 690, 244):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 691, 246, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 691, 247),(char*)come_increment_ref_count(xsprintf("multiline"), "51str3.nc", 691, 248),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 691, 245),info), "51str3.nc", 691, 249)), "51str3.nc", 691, 250));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 692, 253, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 692, 254),(char*)come_increment_ref_count(xsprintf("global"), "51str3.nc", 692, 255),(struct sNode*)come_increment_ref_count(((global_37)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 692, 251),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 692, 252),info))))), "51str3.nc", 692, 256)), "51str3.nc", 692, 257));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 692, 258):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 692, 259):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 693, 261, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 693, 262),(char*)come_increment_ref_count(xsprintf("extended"), "51str3.nc", 693, 263),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 693, 260),info), "51str3.nc", 693, 264)), "51str3.nc", 693, 265));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 694, 267, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 694, 268),(char*)come_increment_ref_count(xsprintf("dotall"), "51str3.nc", 694, 269),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 694, 266),info), "51str3.nc", 694, 270)), "51str3.nc", 694, 271));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 695, 273, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 695, 274),(char*)come_increment_ref_count(xsprintf("anchored"), "51str3.nc", 695, 275),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 695, 272),info), "51str3.nc", 695, 276)), "51str3.nc", 695, 277));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 696, 279, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 696, 280),(char*)come_increment_ref_count(xsprintf("dollar_endonly"), "51str3.nc", 696, 281),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 696, 278),info), "51str3.nc", 696, 282)), "51str3.nc", 696, 283));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 697, 285, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 697, 286),(char*)come_increment_ref_count(xsprintf("ungreedy"), "51str3.nc", 697, 287),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 697, 284),info), "51str3.nc", 697, 288)), "51str3.nc", 697, 289));
        method_block_41=((void*)0);
        method_block_sline_42=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_generics_types_43=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "51str3.nc", 703, 290, "struct list$1sType$ph*"), "51str3.nc", 703, 291)), "51str3.nc", 703, 292);
        __right_value0 = (void*)0;
        node_44=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_39, "51str3.nc", 705, 293),params_40,method_block_41,method_block_sline_42,method_generics_types_43,info,(_Bool)0), "51str3.nc", 705, 294);
        info->sline_real=sline_real_30;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_44, "51str3.nc", 708, 295);
        come_call_finalizer(buffer_finalize, value_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 708, 296);
        ((obj_39) ? obj_39 = come_decrement_ref_count(obj_39, ((struct sNode*)obj_39)->finalize, ((struct sNode*)obj_39)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 708, 297):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 708, 298);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 708, 299);
        ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 708, 300):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 708, 301):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 302);
        ((obj_39) ? obj_39 = come_decrement_ref_count(obj_39, ((struct sNode*)obj_39)->finalize, ((struct sNode*)obj_39)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 303):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 304);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 305);
        ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 306):(void*)0);
    }
    else if((*info->p==117||*info->p==85)&&*(info->p+1)==39) {
        sline_real_45=info->sline_real;
        info->sline_real=info->sline;
        prefix_46=*info->p;
        info->p+=2;
        if(*info->p==92) {
            info->p++;
            if(xisdigit(*info->p)) {
                n=0;
                while(xisdigit(*info->p)) {
                    n=n*8+*info->p-48;
                    info->p++;
                }
                c=n;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c=10;
                    info->p++;
                    break;
                    case 116:
                    c=9;
                    info->p++;
                    break;
                    case 114:
                    c=13;
                    info->p++;
                    break;
                    case 97:
                    c=7;
                    info->p++;
                    break;
                    case 102:
                    c=12;
                    info->p++;
                    break;
                    case 118:
                    c=11;
                    info->p++;
                    break;
                    case 98:
                    c=8;
                    info->p++;
                    break;
                    case 92:
                    c=92;
                    info->p++;
                    break;
                    case 48:
                    c=0;
                    info->p++;
                    if(xisdigit(*info->p)) {
                        n_47=0;
                        while(xisdigit(*info->p)) {
                            n_47=n_47*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c=n_47;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_48[128];
                        memset(&buf_48, 0, sizeof(buf_48));
                        strncpy(buf_48,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2[2];
                            memset(&buf2, 0, sizeof(buf2));
                            ({ long long __neo_array_index1_0 = (long long)(0); if(__neo_array_index1_0 < 0 || __neo_array_index1_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf2[__neo_array_index1_0] = *info->p; });
                            ({ long long __neo_array_index2_0 = (long long)(1); if(__neo_array_index2_0 < 0 || __neo_array_index2_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf2[__neo_array_index2_0] = 0; });
                            info->p++;
                            strncat(buf_48,buf2,128);
                        }
                        n_49=strtoll(buf_48,((void*)0),0);
                        c=n_49;
                    }
                    break;
                    default:
                    c=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c=*info->p;
            info->p++;
        }
        if(*info->p!=39) {
            err_msg(info,"close \' to make character value");
            exit(1);
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_45;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_prefixed_char_node(c,(char* )come_increment_ref_count(xsprintf("%c",prefix_46), "51str3.nc", 831, 307),info))), "51str3.nc", 831, 308);
            ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 831, 309):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 831, 310):(void*)0);
            return __result_obj__0;
        }
    }
    else if(*info->p==39) {
        sline_real_50=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(*info->p==92) {
            info->p++;
            if(xisdigit(*info->p)) {
                n_52=0;
                while(xisdigit(*info->p)) {
                    n_52=n_52*8+*info->p-48;
                    info->p++;
                }
                c_51=n_52;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c_51=10;
                    info->p++;
                    break;
                    case 116:
                    c_51=9;
                    info->p++;
                    break;
                    case 114:
                    c_51=13;
                    info->p++;
                    break;
                    case 97:
                    c_51=7;
                    info->p++;
                    break;
                    case 102:
                    c_51=12;
                    info->p++;
                    break;
                    case 118:
                    c_51=11;
                    info->p++;
                    break;
                    case 98:
                    c_51=8;
                    info->p++;
                    break;
                    case 92:
                    c_51=92;
                    info->p++;
                    break;
                    case 48:
                    c_51=0;
                    info->p++;
                    if(xisdigit(*info->p)) {
                        n_53=0;
                        while(xisdigit(*info->p)) {
                            n_53=n_53*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_51=n_53;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_54[128];
                        memset(&buf_54, 0, sizeof(buf_54));
                        strncpy(buf_54,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_55[2];
                            memset(&buf2_55, 0, sizeof(buf2_55));
                            buf2_55[0]=*info->p;
                            buf2_55[1]=0;
                            info->p++;
                            strncat(buf_54,buf2_55,128);
                        }
                        n_56=strtoll(buf_54,((void*)0),0);
                        c_51=n_56;
                    }
                    break;
                    default:
                    c_51=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_51=*info->p;
            info->p++;
        }
        if(*info->p!=39) {
            err_msg(info,"close \' to make character value");
            exit(1);
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_50;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_char_node(c_51,info))), "51str3.nc", 953, 311);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 953, 312):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 953, 313):(void*)0);
            return __result_obj__0;
        }
    }
    else if((*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_57=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_58=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        exps_59=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1184, 314, "struct list$1sNode$ph*"), "51str3.nc", 1184, 315)), "51str3.nc", 1184, 316);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_60=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 1185, 317, "struct buffer* "), "51str3.nc", 1185, 318)), "51str3.nc", 1185, 319);
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_61=info->p;
                sline_62=info->sline;
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_61;
                    info->sline=sline_62;
                    break;
                }
            }
            else if(*info->p==37) {
                buffer_append_char(value_60,37);
                buffer_append_char(value_60,37);
                info->p++;
            }
            else if(*info->p==92) {
                buffer_append_char(value_60,92);
                info->p++;
                if(xisdigit(*info->p)) {
                    len_63=0;
                    while(xisdigit(*info->p)&&len_63<3) {
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                        len_63++;
                    }
                }
                else if(*info->p==120||*info->p==88) {
                    buffer_append_char(value_60,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                    }
                }
                else if(*info->p==123) {
                    info->p++;
                    __right_value0 = (void*)0;
                    exp_64=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1252, 320);
                    list$1sNode$ph_add(exps_59,(struct sNode*)come_increment_ref_count(exp_64, "51str3.nc", 1254, 321));
                    if(*info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_60,"%s");
                    ((exp_64) ? exp_64 = come_decrement_ref_count(exp_64, ((struct sNode*)exp_64)->finalize, ((struct sNode*)exp_64)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1315, 322):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_60,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                sline2_65=info->sline;
                info->sline=sline_58;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_60,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_57;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_sstring_node((char* )come_increment_ref_count(buffer_to_string(value_60), "51str3.nc", 1333, 323),(struct list$1sNode$ph*)come_increment_ref_count(exps_59, "51str3.nc", 1333, 324),sline_58,info))), "51str3.nc", 1333, 325);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_59, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1333, 326);
        come_call_finalizer(buffer_finalize, value_60, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1333, 327);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1333, 328):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1333, 329):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_59, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 330);
        come_call_finalizer(buffer_finalize, value_60, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 331);
    }
    else if(*info->p==91) {
        sline_real_66=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_67=info->p;
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        node_68=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1346, 332);
        info->no_comma=no_comma;
        p2=info->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        first_element_source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 1352, 333, "struct buffer* "), "51str3.nc", 1352, 334)), "51str3.nc", 1352, 335);
        buffer_append(first_element_source,p_67,p2-p_67);
        buffer_append_char(first_element_source,0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1357, 336, "struct list$1sNode$ph*"), "51str3.nc", 1357, 337)), "51str3.nc", 1357, 338);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        map_keys=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1359, 339, "struct list$1sNode$ph*"), "51str3.nc", 1359, 340)), "51str3.nc", 1359, 341);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1360, 342, "struct list$1sNode$ph*"), "51str3.nc", 1360, 343)), "51str3.nc", 1360, 344);
        if(*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node_68, "51str3.nc", 1367, 359));
            no_comma_71=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1373, 360);
            info->no_comma=no_comma_71;
            list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node2, "51str3.nc", 1377, 361));
            if(*info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_map_node((struct list$1sNode$ph*)come_increment_ref_count(map_keys, "51str3.nc", 1383, 362),(struct list$1sNode$ph*)come_increment_ref_count(map_elements, "51str3.nc", 1383, 363),info))), "51str3.nc", 1383, 364);
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1383, 365):(void*)0);
                ((node_68) ? node_68 = come_decrement_ref_count(node_68, ((struct sNode*)node_68)->finalize, ((struct sNode*)node_68)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1383, 366):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 367);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 368);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 369);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 370);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1383, 371):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1383, 372):(void*)0);
                return __result_obj__0;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_72=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    node2_73=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1392, 373);
                    info->no_comma=no_comma_72;
                    list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node2_73, "51str3.nc", 1396, 374));
                    expected_next_character(58,info);
                    no_comma_72=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    node3=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1403, 375);
                    info->no_comma=no_comma_72;
                    list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node3, "51str3.nc", 1407, 376));
                    if(*info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_73) ? node2_73 = come_decrement_ref_count(node2_73, ((struct sNode*)node2_73)->finalize, ((struct sNode*)node2_73)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1420, 377):(void*)0);
                        ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1420, 378):(void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    ((node2_73) ? node2_73 = come_decrement_ref_count(node2_73, ((struct sNode*)node2_73)->finalize, ((struct sNode*)node2_73)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 379):(void*)0);
                    ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 380):(void*)0);
                }
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_map_node((struct list$1sNode$ph*)come_increment_ref_count(map_keys, "51str3.nc", 1428, 381),(struct list$1sNode$ph*)come_increment_ref_count(map_elements, "51str3.nc", 1428, 382),info))), "51str3.nc", 1428, 383);
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 384):(void*)0);
                ((node_68) ? node_68 = come_decrement_ref_count(node_68, ((struct sNode*)node_68)->finalize, ((struct sNode*)node_68)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 385):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 386);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 387);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 388);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 389);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1428, 390):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1428, 391):(void*)0);
                return __result_obj__0;
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1478, 392):(void*)0);
        }
        else if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_68, "51str3.nc", 1436, 393));
        }
        else if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_68, "51str3.nc", 1442, 394));
            while((_Bool)1) {
                no_comma_74=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                node2_75=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1448, 395);
                info->no_comma=no_comma_74;
                list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node2_75, "51str3.nc", 1452, 396));
                if(*info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_75) ? node2_75 = come_decrement_ref_count(node2_75, ((struct sNode*)node2_75)->finalize, ((struct sNode*)node2_75)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1465, 397):(void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                ((node2_75) ? node2_75 = come_decrement_ref_count(node2_75, ((struct sNode*)node2_75)->finalize, ((struct sNode*)node2_75)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1472, 398):(void*)0);
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(list$1sNode$ph_length(list_elements)>0) {
            info->sline_real=sline_real_66;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_list_node((struct list$1sNode$ph*)come_increment_ref_count(list_elements, "51str3.nc", 1480, 399),info))), "51str3.nc", 1480, 400);
            ((node_68) ? node_68 = come_decrement_ref_count(node_68, ((struct sNode*)node_68)->finalize, ((struct sNode*)node_68)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1480, 401):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 402);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 403);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 404);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 405);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1480, 406):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1480, 407):(void*)0);
            return __result_obj__0;
        }
        else {
            err_msg(info,"invalid vector");
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "51str3.nc", 1484, 408);
            ((node_68) ? node_68 = come_decrement_ref_count(node_68, ((struct sNode*)node_68)->finalize, ((struct sNode*)node_68)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1484, 409):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 410);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 411);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 412);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 413);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1484, 414):(void*)0);
            return __result_obj__0;
        }
        ((node_68) ? node_68 = come_decrement_ref_count(node_68, ((struct sNode*)node_68)->finalize, ((struct sNode*)node_68)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 415):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 416);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 417);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 418);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 419);
    }
    else if(*info->p==118&&*(info->p+1)==40) {
        sline_real_76=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    else {
        __right_value0 = (void*)0;
        node_77=(struct sNode*)come_increment_ref_count(expression_node_v95(info), "51str3.nc", 1495, 420);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_77, "51str3.nc", 1496, 421);
        ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1496, 422):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1496, 423):(void*)0);
        return __result_obj__0;
        ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 424):(void*)0);
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "51str3.nc", 1499, 425);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1499, 426):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 2);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1494, 5);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1494, 6);
    return __result_obj__0;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 4);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 3):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj1;
    struct list_item$1sNode$ph* litem_0;
    struct sNode* __dec_obj2;
    struct list_item$1sNode$ph* litem_1;
    struct sNode* __dec_obj3;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1590, 13):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1593, 14, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1593, 15);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1597, 17);
        (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1597, 16) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1603, 18, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1603, 19);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj2=litem_0->item,
        litem_0->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1607, 21);
        (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1607, 20) :0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1613, 22, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1613, 23);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj3=litem_1->item,
        litem_1->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1617, 25);
        (__dec_obj3 ? __dec_obj3 = come_decrement_ref_count(__dec_obj3, ((struct sNode*)__dec_obj3)->finalize, ((struct sNode*)__dec_obj3)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1617, 24) :0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1625, 26):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 82);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 87);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 88);
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 86);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 85);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 83));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 84):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj4;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_28;
    struct tuple2$2char$phsNode$ph* __dec_obj5;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_29;
    struct tuple2$2char$phsNode$ph* __dec_obj6;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_28, 0, sizeof(litem_28));
    memset(&litem_29, 0, sizeof(litem_29));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1590, 91);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1593, 92, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1593, 93);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1597, 95);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1597, 94);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_28=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1603, 96, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1603, 97);
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj5=litem_28->item,
        litem_28->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1607, 99);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1607, 98);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        __right_value0 = (void*)0;
        litem_29=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1613, 100, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1613, 101);
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj6=litem_29->item,
        litem_29->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1617, 103);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1617, 102);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1625, 104);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __dec_obj7  ;
    struct sNode* __dec_obj8;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj7=self->v1,
    self->v1=(char*)come_increment_ref_count(v1, "./neo-c.h", 4606, 107);
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4606, 106);
    __dec_obj8=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "./neo-c.h", 4607, 109);
    (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4607, 108) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "./neo-c.h", 4609, 110);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4609, 111);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4609, 112));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4609, 113):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4609, 114);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 174);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3, 205);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3, 206);
    return __result_obj__0;
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 204);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 203);
    }
            neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 175);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 176);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 177);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 178);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 179):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 180):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 181));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 182));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 183));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 184));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 185));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 186));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 187));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 188));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 189);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 190);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 192);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 193);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 194);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 195));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 196);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 199);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 200);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 201):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 202);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 191);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 198);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 197));
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj9;
    struct list_item$1sNode$ph* litem_69;
    struct sNode* __dec_obj10;
    struct list_item$1sNode$ph* litem_70;
    struct sNode* __dec_obj11;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_69, 0, sizeof(litem_69));
    memset(&litem_70, 0, sizeof(litem_70));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1674, 345):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1678, 346, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1678, 347);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj9=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1682, 349);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1682, 348) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_69=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1688, 350, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1688, 351);
        litem_69->prev=self->head;
        litem_69->next=((void*)0);
        __dec_obj10=litem_69->item,
        litem_69->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1692, 353);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1692, 352) :0);
        self->tail=litem_69;
        self->head->next=litem_69;
    }
    else {
        __right_value0 = (void*)0;
        litem_70=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1698, 354, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1698, 355);
        litem_70->prev=self->tail;
        litem_70->next=((void*)0);
        __dec_obj11=litem_70->item,
        litem_70->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1702, 357);
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1702, 356) :0);
        self->tail->next=litem_70;
        self->tail=litem_70;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1710, 358):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
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

struct sNode* parse_tuple(struct sInfo*  info  , _Bool  named_tuple  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parse_tuple"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
    char* p;
    char*  name  ;
    char*  __dec_obj12  ;
    _Bool  no_comma  ;
    struct sNode* node;
    struct sNode* __dec_obj13;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    memset(&tuple_elements, 0, sizeof(tuple_elements));
    memset(&p, 0, sizeof(p));
    memset(&name, 0, sizeof(name));
    memset(&no_comma, 0, sizeof(no_comma));
    memset(&node, 0, sizeof(node));
    tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "51str3.nc", 1504, 427, "struct list$1tuple2$2char$phsNode$ph$ph*"), "51str3.nc", 1504, 428)), "51str3.nc", 1504, 429);
    while((_Bool)1) {
        p=info->p;
        if(named_tuple) {
            __right_value0 = (void*)0;
            __dec_obj12=name,
            name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "51str3.nc", 1510, 431);
            __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "51str3.nc", 1510, 430);
            expected_next_character(58,info);
        }
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1518, 432);
        __right_value0 = (void*)0;
        __dec_obj13=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "51str3.nc", 1519, 433),info), "51str3.nc", 1519, 435);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0, (void*)0, "51str3.nc", 1519, 434) :0);
        info->no_comma=no_comma;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_push_back(tuple_elements,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 1523, 451, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 1523, 452),(char* )come_increment_ref_count((char* )come_memdup(name, "51str3.nc", 1523, 450, "char* "), "51str3.nc", 1523, 453),(struct sNode*)come_increment_ref_count(node, "51str3.nc", 1523, 454)), "51str3.nc", 1523, 455));
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "51str3.nc", 1532, 456));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1532, 457):(void*)0);
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "51str3.nc", 1540, 458));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1540, 459):(void*)0);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_tuple_node((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements, "51str3.nc", 1540, 460),info))), "51str3.nc", 1540, 461);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1540, 462);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1540, 463):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1540, 464):(void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj14;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_78;
    struct tuple2$2char$phsNode$ph* __dec_obj15;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_79;
    struct tuple2$2char$phsNode$ph* __dec_obj16;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_78, 0, sizeof(litem_78));
    memset(&litem_79, 0, sizeof(litem_79));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1674, 436);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1678, 437, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1678, 438);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj14=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1682, 440);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1682, 439);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_78=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1688, 441, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1688, 442);
        litem_78->prev=self->head;
        litem_78->next=((void*)0);
        __dec_obj15=litem_78->item,
        litem_78->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1692, 444);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1692, 443);
        self->tail=litem_78;
        self->head->next=litem_78;
    }
    else {
        __right_value0 = (void*)0;
        litem_79=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1698, 445, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1698, 446);
        litem_79->prev=self->tail;
        litem_79->next=((void*)0);
        __dec_obj16=litem_79->item,
        litem_79->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1702, 448);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1702, 447);
        self->tail->next=litem_79;
        self->tail=litem_79;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1710, 449);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_vector(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parse_vector"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    int sline_real;
    _Bool  no_comma  ;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    char* p2;
    void* __right_value1 = (void*)0;
    struct buffer*  first_element_source  ;
    struct list$1sNode$ph* list_elements;
    struct list$1sNode$ph* map_keys;
    struct list$1sNode$ph* map_elements;
    _Bool  no_comma_80  ;
    struct sNode* node2;
    struct sNode* __result_obj__0;
    memset(&p, 0, sizeof(p));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&no_comma, 0, sizeof(no_comma));
    memset(&node, 0, sizeof(node));
    memset(&p2, 0, sizeof(p2));
    memset(&first_element_source, 0, sizeof(first_element_source));
    memset(&list_elements, 0, sizeof(list_elements));
    memset(&map_keys, 0, sizeof(map_keys));
    memset(&map_elements, 0, sizeof(map_elements));
    memset(&no_comma_80, 0, sizeof(no_comma_80));
    memset(&node2, 0, sizeof(node2));
    p=info->p;
    sline_real=info->sline;
    no_comma=info->no_comma;
    info->no_comma=(_Bool)1;
    node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1552, 465);
    info->no_comma=no_comma;
    p2=info->p;
    __right_value0 = (void*)0;
    first_element_source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 1558, 466, "struct buffer* "), "51str3.nc", 1558, 467)), "51str3.nc", 1558, 468);
    buffer_append(first_element_source,p,p2-p);
    buffer_append_char(first_element_source,0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1563, 469, "struct list$1sNode$ph*"), "51str3.nc", 1563, 470)), "51str3.nc", 1563, 471);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    map_keys=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1565, 472, "struct list$1sNode$ph*"), "51str3.nc", 1565, 473)), "51str3.nc", 1565, 474);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1566, 475, "struct list$1sNode$ph*"), "51str3.nc", 1566, 476)), "51str3.nc", 1566, 477);
    if(*info->p==93) {
        info->p++;
        skip_spaces_and_lf(info);
        list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node, "51str3.nc", 1573, 478));
    }
    else if(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node, "51str3.nc", 1579, 479));
        while((_Bool)1) {
            no_comma_80=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1585, 480);
            info->no_comma=no_comma_80;
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node2, "51str3.nc", 1589, 481));
            if(*info->p==0) {
                err_msg(info,"invalid source end");
                exit(2);
            }
            else if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1602, 482):(void*)0);
                break;
            }
            else {
                err_msg(info,"invalid character(4)(%c)",*info->p);
                exit(2);
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1609, 483):(void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(5)(%c)",*info->p);
        exit(2);
    }
    if(list$1sNode$ph_length(list_elements)>0) {
        info->sline_real=sline_real;
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_vector_node((struct list$1sNode$ph*)come_increment_ref_count(list_elements, "51str3.nc", 1617, 484),info))), "51str3.nc", 1617, 485);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1617, 486):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 487);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 488);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 489);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 490);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1617, 491):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1617, 492):(void*)0);
        return __result_obj__0;
    }
    err_msg(info,"invalid vector");
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "51str3.nc", 1622, 493);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1622, 494):(void*)0);
    come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 495);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 496);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 497);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 498);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1622, 499):(void*)0);
    return __result_obj__0;
}

