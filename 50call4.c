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

typedef unsigned int nfds_t;

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

struct pollfd
{
    int fd;
    short events;
    short revents;
};

struct sReturnNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sCSourceNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  contents  ;
};

struct sInlineAssembler
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  source  ;
    _Bool  volatile_  ;
};

struct sLineNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sSNameNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sFuncNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCallerFuncNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCallerLineNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCallerSNameNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sComeCallNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct buffer*  come_block  ;
    int come_block_sline;
};

struct sComeJoinNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct list_item$1sBlock$ph
{
    struct sBlock*  item  ;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sComePollNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock*  else_block  ;
    int time_out;
};

struct sVarArgTypeName
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sInnerAttribute
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  attr  ;
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
struct sNode* expression_node_v99(struct sInfo*  info  );
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
int poll(struct pollfd*    , unsigned int    , int ) ;
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, struct sInfo*  info  );
char*  sReturnNode_kind(struct sReturnNode* self);
_Bool  sReturnNode_compile(struct sReturnNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType*  sType_clone(struct sType*  self  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static struct sVar*  list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool  list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar*  list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  );
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sCSourceNode* sCSourceNode_initialize(struct sCSourceNode* self, char*  contents  , struct sInfo*  info  );
char*  sCSourceNode_kind(struct sCSourceNode* self);
_Bool  sCSourceNode_compile(struct sCSourceNode* self, struct sInfo*  info  );
static void sCSourceNode_finalize(struct sCSourceNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char*  source  , _Bool  volatile_  , struct sInfo*  info  );
char*  sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool  sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo*  info  );
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo*  info  );
char*  sLineNode_kind(struct sLineNode* self);
_Bool  sLineNode_compile(struct sLineNode* self, struct sInfo*  info  );
static void sLineNode_finalize(struct sLineNode* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo*  info  );
char*  sSNameNode_kind(struct sSNameNode* self);
_Bool  sSNameNode_compile(struct sSNameNode* self, struct sInfo*  info  );
static void sSNameNode_finalize(struct sSNameNode* self);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo*  info  );
char*  sFuncNode_kind(struct sFuncNode* self);
_Bool  sFuncNode_compile(struct sFuncNode* self, struct sInfo*  info  );
static void sFuncNode_finalize(struct sFuncNode* self);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo*  info  );
char*  sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool  sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo*  info  );
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo*  info  );
_Bool  sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo*  info  );
char*  sCallerLineNode_kind(struct sCallerLineNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo*  info  );
_Bool  sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo*  info  );
char*  sCallerSNameNode_kind(struct sCallerSNameNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer*  come_block  , int come_block_sline, struct sInfo*  info  );
char*  sComeCallNode_kind(struct sComeCallNode* self);
_Bool  sComeCallNode_terminated(struct sComeCallNode* self);
_Bool  sComeCallNode_compile(struct sComeCallNode* self, struct sInfo*  info  );
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sType*  map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char*  key  , struct sType*  default_value  , _Bool  by_pointer  );
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool  list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo*  info  );
char*  sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool  sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool  sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo*  info  );
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock*  else_block  , int time_out, struct sInfo*  info  );
char*  sComePollNode_kind(struct sComePollNode* self);
_Bool  sComePollNode_terminated(struct sComePollNode* self);
_Bool  sComePollNode_compile(struct sComePollNode* self, struct sInfo*  info  );
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool  list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sBlock*  list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock*  list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType*  type  , struct sInfo*  info  );
char*  sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool  sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo*  info  );
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char*  attr  , struct sInfo*  info  );
char*  sInnerAttribute_kind(struct sInnerAttribute* self);
_Bool  sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo*  info  );
static void sInnerAttribute_finalize(struct sInnerAttribute* self);
struct sNode* expression_node_v1(struct sInfo*  info  );
char*  parse_inner_attribute(struct sInfo*  info  );
struct sNode* expression_node_v98(struct sInfo*  info  );
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self);
static struct sCSourceNode* sCSourceNode_clone(struct sCSourceNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock*  item  );
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock*  sBlock_clone(struct sBlock*  self  );
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
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
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
// uniq global variable
// inline function

// body function
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj1;
    struct sReturnNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 11, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 11, 3);
    __dec_obj1=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "50call4.nc", 13, 5);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0, "50call4.nc", 13, 4) :0);
        __result_obj__0 = (struct sReturnNode*)come_increment_ref_count(self, "50call4.nc", 16, 6);
    come_call_finalizer(sReturnNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 16, 9);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 16, 10):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sReturnNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 16, 11);
    return __result_obj__0;
}

char*  sReturnNode_kind(struct sReturnNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sReturnNode","50call4.nc",18))), "50call4.nc", 18, 12);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 18, 13));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 18, 14));
    return __result_obj__0;
}

_Bool  sReturnNode_compile(struct sReturnNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sFun*  come_fun  ;
    void* __right_value0 = (void*)0;
    struct sType*  result_type  ;
    struct sType*  result_type2_  ;
    struct sType*  result_type2  ;
    struct sType*  result_type3  ;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    struct CVALUE*  come_value  ;
    struct sType*  come_value_type_  ;
    struct sType*  come_value_type  ;
    struct sType*  __dec_obj36  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  type_name  ;
    struct list$1sVar$ph* _o2_saved_3;
    struct sVar*  it  ;
    struct list$1sVar$ph* __dec_obj37;
    _Bool _conditional_value_X0;
    struct sFun*  come_fun_10  ;
    struct list$1sVar$ph* _o2_saved_4;
    struct sVar*  it_11  ;
    struct list$1sVar$ph* __dec_obj38;
    memset(&come_fun, 0, sizeof(come_fun));
    memset(&result_type, 0, sizeof(result_type));
    memset(&result_type2_, 0, sizeof(result_type2_));
    memset(&result_type2, 0, sizeof(result_type2));
    memset(&result_type3, 0, sizeof(result_type3));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value_type_, 0, sizeof(come_value_type_));
    memset(&come_value_type, 0, sizeof(come_value_type));
    memset(&type_name, 0, sizeof(type_name));
    memset(&_o2_saved_3, 0, sizeof(_o2_saved_3));
    memset(&it, 0, sizeof(it));
    memset(&come_fun_10, 0, sizeof(come_fun_10));
    memset(&_o2_saved_4, 0, sizeof(_o2_saved_4));
    memset(&it_11, 0, sizeof(it_11));
    if(self->value) {
        come_fun=info->come_fun;
        add_come_code(info,((char* )(__right_value0=buffer_to_string(info->come_fun->mSourceEnd))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 26, 15));
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(come_fun->mResultType), "50call4.nc", 28, 225);
        __right_value0 = (void*)0;
        result_type2_=(struct sType* )come_increment_ref_count(solve_generics(result_type,info->generics_type,info), "50call4.nc", 30, 226);
        __right_value0 = (void*)0;
        result_type2=(struct sType* )come_increment_ref_count(solve_method_generics(result_type2_,info), "50call4.nc", 31, 227);
        if(result_type2->mNoSolvedGenericsType) {
            result_type3=result_type2->mNoSolvedGenericsType;
        }
        else {
            result_type3=result_type2;
        }
        Value=node_compile(self->value,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 42, 228);
            come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 42, 229);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 42, 230);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 45, 231);
        __right_value0 = (void*)0;
        come_value_type_=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "50call4.nc", 47, 232);
        __right_value0 = (void*)0;
        come_value_type=(struct sType* )come_increment_ref_count(solve_method_generics(come_value_type_,info), "50call4.nc", 48, 233);
        __right_value0 = (void*)0;
        __dec_obj36=info->function_result_type,
        info->function_result_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "50call4.nc", 50, 235);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 50, 234);
        check_assign_type("result type",result_type2,come_value_type,come_value,info);
        if(gComeC) {
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else if(string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun->mBlock,info,come_value->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
                add_come_code(info,"neo_current_frame = fr.prev;\n");
            }
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else {
            if(!info->come_fun->mDefineReturnVar) {
                info->come_fun->mDefineReturnVar=(_Bool)1;
                __right_value0 = (void*)0;
                add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value2=make_define_var(result_type2,((char*)(__right_value1=xsprintf("__result_obj__\%s",((char* )(__right_value0=int_to_string(000)))))),info,(_Bool)0,(_Bool)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 67, 236));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 67, 237));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 67, 238));
            }
            if(!info->come_fun->mNoResultType) {
                if(result_type2->mHeap) {
                    __right_value0 = (void*)0;
                    type_name=(char* )come_increment_ref_count(make_type_name_string(result_type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "50call4.nc", 72, 239);
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s, \"%%s\", %%d, %%d);\n",((char* )(__right_value0=int_to_string(000)))))),type_name,come_value->c_value,info->sname,info->sline,++info->id);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 73, 240));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 73, 241));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 78, 242));
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char* )(__right_value0=int_to_string(000)))))),come_value->c_value);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 76, 243));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 76, 244));
                }
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char* )(__right_value0=int_to_string(000)))))),come_value->c_value);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 80, 245));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 80, 246));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun->mBlock,info,come_value->var,(_Bool)0,come_value->mLoadField);
            free_right_value_objects(info);
            if(info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(info->match_it_var) {
                    for(_o2_saved_3=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var, "50call4.nc", 91, 247),it=list$1sVar$ph_begin(_o2_saved_3)                    ;!list$1sVar$ph_end(_o2_saved_3);it=list$1sVar$ph_next(_o2_saved_3)){
                        free_object(it->mType,it->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    }
                    __dec_obj37=info->match_it_var,
                    info->match_it_var=((void*)0);
                    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 15, 254);
                    come_call_finalizer(list$1sVar$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 5, 256);
                }
            }
            if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
                add_come_code(info,"neo_current_frame = fr.prev;\n");
            }
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_memleak_checker"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 102, 307));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 5, 308);
_conditional_value_X0;})) {
                free_objects(info->gv_table,((void*)0),info,(_Bool)0);
                __right_value0 = (void*)0;
                add_come_code(info,((char* )(__right_value0=xsprintf("come_memleak_checker();\n"))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 104, 309));
            }
            if(result_type2->mHeap) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                free_object(result_type2,((char*)(__right_value1=xsprintf("__result_obj__\%s",((char* )(__right_value0=int_to_string(000)))))),(_Bool)0,(_Bool)1,info,(_Bool)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 108, 310));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 108, 311));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            add_come_code(info,((char*)(__right_value1=xsprintf("return __result_obj__\%s;\n",((char* )(__right_value0=int_to_string(000)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 111, 312));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 111, 313));
        }
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 314);
        come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 315);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 316);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 322);
        come_call_finalizer(sType_finalize, come_value_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 323);
        come_call_finalizer(sType_finalize, come_value_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 324);
    }
    else {
        come_fun_10=info->come_fun;
        __right_value0 = (void*)0;
        add_come_code(info,((char* )(__right_value0=buffer_to_string(info->come_fun->mSourceEnd))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 117, 325));
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_10->mBlock,info,((void*)0),(_Bool)0,(_Bool)0);
        free_right_value_objects(info);
        if(info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(info->match_it_var) {
                for(_o2_saved_4=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var, "50call4.nc", 127, 326),it_11=list$1sVar$ph_begin(_o2_saved_4)                ;!list$1sVar$ph_end(_o2_saved_4);it_11=list$1sVar$ph_next(_o2_saved_4)){
                    free_object(it_11->mType,it_11->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                }
                __dec_obj38=info->match_it_var,
                info->match_it_var=((void*)0);
                come_call_finalizer(list$1sVar$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 130, 327);
                come_call_finalizer(list$1sVar$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 132, 328);
            }
        }
        if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
            add_come_code(info,"neo_current_frame = fr.prev;\n");
        }
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info,(_Bool)0);
            __right_value0 = (void*)0;
            add_come_code(info,((char* )(__right_value0=xsprintf("come_memleak_checker();\n"))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 140, 329));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 2));
    }
        neo_current_frame = fr.prev;
}

static void sReturnNode_finalize(struct sReturnNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sReturnNode_finalize", 2, 7));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sReturnNode_finalize", 3, 8):(void*)0);
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
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 16);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 49);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 50, "struct sType* "), "sType_clone", 5, 51);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 53);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 52);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 55);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 54);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 2, 85);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 2, 84);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 87);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 86);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 96);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 95) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 98);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 97) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 99, "char* "), "sType_clone", 14, 101);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 100);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 102, "char* "), "sType_clone", 15, 104);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 103);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 105, "char* "), "sType_clone", 16, 107);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 106);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 108, "char* "), "sType_clone", 17, 110);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 109);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 111, "char* "), "sType_clone", 18, 113);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 112);
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
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 114, "char* "), "sType_clone", 49, 116);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 115);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 117, "char* "), "sType_clone", 51, 119);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 118);
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
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 120, "char* "), "sType_clone", 54, 122);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 121);
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
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 15, 152);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 151);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 154);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 153);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 15, 174);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 173);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 176);
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 175);
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
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 178);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 177);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 179, "char* "), "sType_clone", 67, 181);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 180);
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
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 183);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 182);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 15, 215);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 214);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 217);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 216);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 219);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 218) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 221);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 220);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 222);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 223);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 224);
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 17);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 18);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 21);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 22);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 23):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 24):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 25));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 26));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 27));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 28));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 29));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 30));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 31));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 32));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 35);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 36);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 38);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 39);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 40);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 41));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 42);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 45);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 46);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 47):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 48);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 20);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 19);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 34);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 33):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 37);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 44);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 43));
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 56);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 57);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1572, 58, "struct list$1sType$ph*"), "./neo-c.h", 1572, 62)), "./neo-c.h", 1572, 63);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1577, 78));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1580, 79));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 80);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 81);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 82);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 59);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 60);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 61);
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
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1590, 64);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1593, 65, "struct list_item$1sType$ph*"))), "./neo-c.h", 1593, 66);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1597, 68);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1597, 67);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1603, 69, "struct list_item$1sType$ph*"))), "./neo-c.h", 1603, 70);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1607, 72);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1607, 71);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1613, 73, "struct list_item$1sType$ph*"))), "./neo-c.h", 1613, 74);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1617, 76);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1617, 75);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1625, 77);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 83);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 88);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 89):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 90, "struct sNode*"), "sNode_clone", 5, 91);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 92);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 93):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 94):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 123);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 124);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1572, 125, "struct list$1sNode$ph*"), "./neo-c.h", 1572, 129)), "./neo-c.h", 1572, 130);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1577, 145));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1580, 146));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 147);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 148);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 149);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 126);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 127);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 128);
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
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1590, 131):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1593, 132, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1593, 133);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj19=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1597, 135);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1597, 134) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1603, 136, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1603, 137);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj20=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1607, 139);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1607, 138) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1613, 140, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1613, 141);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj21=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1617, 143);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1617, 142) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1625, 144):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 150);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 155);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 156);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1572, 157, "struct list$1int$*"), "./neo-c.h", 1572, 161)), "./neo-c.h", 1572, 162);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1586, 169);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 170);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 171);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1544, 158);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 159);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 160);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1593, 163, "struct list_item$1int$*"))), "./neo-c.h", 1593, 164);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1603, 165, "struct list_item$1int$*"))), "./neo-c.h", 1603, 166);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1613, 167, "struct list_item$1int$*"))), "./neo-c.h", 1613, 168);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 172);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 184);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 185);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1572, 186, "struct list$1char$ph*"), "./neo-c.h", 1572, 190)), "./neo-c.h", 1572, 191);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1577, 206, "char* "), "./neo-c.h", 1577, 207));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1580, 208, "char* "), "./neo-c.h", 1580, 209));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 210);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 211);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 212);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 187);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 188);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 189);
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
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1590, 192));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1593, 193, "struct list_item$1char$ph*"))), "./neo-c.h", 1593, 194);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj29=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1597, 196);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1597, 195);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1603, 197, "struct list_item$1char$ph*"))), "./neo-c.h", 1603, 198);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj30=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1607, 200);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1607, 199);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1613, 201, "struct list_item$1char$ph*"))), "./neo-c.h", 1613, 202);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj31=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1617, 204);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1617, 203);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1625, 205));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 213);
    }
            neo_current_frame = fr.prev;
}

static struct sVar*  list$1sVar$ph_begin(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVar*  result  ;
    struct sVar*  __result_obj__0  ;
    struct sVar*  result_8  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sVar* ));
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
    memset(&result_8,0,sizeof(struct sVar* ));
        __result_obj__0 = result_8;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool  list$1sVar$ph_end(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
                        neo_current_frame = fr.prev;
}

static struct sVar*  list$1sVar$ph_next(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_next"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVar*  result  ;
    struct sVar*  __result_obj__0  ;
    struct sVar*  result_9  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sVar* ));
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
    memset(&result_9,0,sizeof(struct sVar* ));
        __result_obj__0 = result_9;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 253);
    }
                        neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 252);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 248));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 249));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 250);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 251));
    }
            neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 255);
    }
                        neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 257);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 278);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 279);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right1 = (self->size); if(__neo_div_right1 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right1; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 280);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 281);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 282);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 283);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 284);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 285);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 286);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 287);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 288);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 289);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 290);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 291);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 258));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 259);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 260);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 261);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 262);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 263);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 264);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 267);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 268));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 269));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 270);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 271);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 272);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 273);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 274));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 275));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 276));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 277));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 265);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 266);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 292);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 293);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 294);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right2 = (self->size); if(__neo_div_right2 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right2; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 295);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 296);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 297);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 298);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 299);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 300);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 301);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 302);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 303);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 304);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 305);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 306);
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 317));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 318);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 319));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 320));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 321));
    }
            neo_current_frame = fr.prev;
}

struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_return_node"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int sline_real;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sReturnNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* result;
    struct sNode* __result_obj__0;
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&result, 0, sizeof(result));
    sline_real=info->sline_real;
    info->sline_real=info->sline;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 157, 333, "struct sNode");
    _inf_obj_value1=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode* )come_increment_ref_count((struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), "50call4.nc", 157, 330, "struct sReturnNode* "), "50call4.nc", 157, 331),(struct sNode*)come_increment_ref_count(value, "50call4.nc", 157, 332),info))), "50call4.nc", 157, 334);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sReturnNode_finalize;
    _inf_value1->clone=(void*)sReturnNode_clone;
    _inf_value1->compile=(void*)sReturnNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sReturnNode_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    result=(struct sNode*)come_increment_ref_count(_inf_value1, "50call4.nc", 157, 343);
    come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 157, 344);
    info->sline_real=sline_real;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "50call4.nc", 161, 345);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 161, 346):(void*)0);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 161, 347):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 161, 348):(void*)0);
    return __result_obj__0;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sReturnNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sReturnNode*  result  ;
    char*  __dec_obj39  ;
    struct sNode* __dec_obj40;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sReturnNode* )come_increment_ref_count((struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), "sReturnNode_clone", 5, 335, "struct sReturnNode* "), "sReturnNode_clone", 5, 336);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj39=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sReturnNode_clone", 7, 337, "char* "), "sReturnNode_clone", 7, 339);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "sReturnNode_clone", 7, 338);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj40=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sReturnNode_clone", 9, 341);
        (__dec_obj40 ? __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0, (void*)0, "sReturnNode_clone", 9, 340) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sReturnNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sReturnNode_clone}", 10, 342);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sCSourceNode* sCSourceNode_initialize(struct sCSourceNode* self, char*  contents  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj41  ;
    struct sCSourceNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 168, 349),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 168, 350);
    __dec_obj41=self->contents,
    self->contents=(char* )come_increment_ref_count(contents, "50call4.nc", 170, 352);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 170, 351);
        __result_obj__0 = (struct sCSourceNode*)come_increment_ref_count(self, "50call4.nc", 173, 353);
    come_call_finalizer(sCSourceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 173, 356);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 173, 357));
    neo_current_frame = fr.prev;
    come_call_finalizer(sCSourceNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 173, 358);
    return __result_obj__0;
}

char*  sCSourceNode_kind(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCSourceNode","50call4.nc",175))), "50call4.nc", 175, 359);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 175, 360));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 175, 361));
    return __result_obj__0;
}

_Bool  sCSourceNode_compile(struct sCSourceNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    add_come_last_code(info,"%s",((char* )(__right_value0=string_operator_load_range_element(self->contents,1,-2))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 180, 362));
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sCSourceNode_finalize(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCSourceNode_finalize", 2, 354));
    }
    if(self!=((void*)0)&&self->contents!=((void*)0)) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0, 0, (void*)0, "sCSourceNode_finalize", 3, 355));
    }
        neo_current_frame = fr.prev;
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char*  source  , _Bool  volatile_  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj42  ;
    struct sInlineAssembler* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 190, 363),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 190, 364);
    __dec_obj42=self->source,
    self->source=(char* )come_increment_ref_count(source, "50call4.nc", 192, 366);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 192, 365);
    self->volatile_=volatile_;
        __result_obj__0 = (struct sInlineAssembler*)come_increment_ref_count(self, "50call4.nc", 196, 367);
    come_call_finalizer(sInlineAssembler_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 196, 370);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 196, 371));
    neo_current_frame = fr.prev;
    come_call_finalizer(sInlineAssembler_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 196, 372);
    return __result_obj__0;
}

char*  sInlineAssembler_kind(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sInlineAssembler","50call4.nc",198))), "50call4.nc", 198, 373);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 198, 374));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 198, 375));
    return __result_obj__0;
}

_Bool  sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  source  ;
    _Bool  volatile_  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj43  ;
    struct sType*  __dec_obj44  ;
    _Bool  __result_obj__0  ;
    memset(&source, 0, sizeof(source));
    memset(&volatile_, 0, sizeof(volatile_));
    memset(&come_value, 0, sizeof(come_value));
    source=(char* )come_increment_ref_count(self->source, "50call4.nc", 203, 376);
    volatile_=self->volatile_;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 206, 377, "struct CVALUE* "), "50call4.nc", 206, 378)), "50call4.nc", 206, 379);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj43=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf(" __asm \%s \%s",((char* )(__right_value0=charp_to_string(((volatile_)?("volatile"):(""))))),((char* )(__right_value1=string_to_string(source)))), "50call4.nc", 208, 381);
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 208, 380);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 208, 382));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 208, 383));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __dec_obj44=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 210, 384, "struct sType* "), "50call4.nc", 210, 385),(char*)come_increment_ref_count(xsprintf("void"), "50call4.nc", 210, 386),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 210, 388);
    come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 210, 387);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 213, 403));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 217, 404));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 217, 405);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sInlineAssembler_finalize", 2, 368));
    }
    if(self!=((void*)0)&&self->source!=((void*)0)) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0, 0, (void*)0, "sInlineAssembler_finalize", 3, 369));
    }
        neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj45  ;
    struct list_item$1CVALUE$ph* litem_12;
    struct CVALUE*  __dec_obj46  ;
    struct list_item$1CVALUE$ph* litem_13;
    struct CVALUE*  __dec_obj47  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_12, 0, sizeof(litem_12));
    memset(&litem_13, 0, sizeof(litem_13));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1674, 389);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1678, 390, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1678, 391);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj45=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1682, 393);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1682, 392);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1688, 394, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1688, 395);
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj46=litem_12->item,
        litem_12->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1692, 397);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1692, 396);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1698, 398, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1698, 399);
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj47=litem_13->item,
        litem_13->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1702, 401);
        come_call_finalizer(CVALUE_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1702, 400);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1710, 402);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sLineNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 225, 406),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 225, 407);
        __result_obj__0 = (struct sLineNode*)come_increment_ref_count(self, "50call4.nc", 228, 408);
    come_call_finalizer(sLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 228, 410);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLineNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 228, 411);
    return __result_obj__0;
}

char*  sLineNode_kind(struct sLineNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLineNode","50call4.nc",230))), "50call4.nc", 230, 412);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 230, 413));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 230, 414));
    return __result_obj__0;
}

_Bool  sLineNode_compile(struct sLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj48  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj49  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 235, 415, "struct CVALUE* "), "50call4.nc", 235, 416)), "50call4.nc", 235, 417);
    __right_value0 = (void*)0;
    __dec_obj48=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%d",info->sline), "50call4.nc", 237, 419);
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 237, 418);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj49=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 238, 420, "struct sType* "), "50call4.nc", 238, 421),(char*)come_increment_ref_count(xsprintf("int"), "50call4.nc", 238, 422),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 238, 424);
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 238, 423);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 241, 425));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 245, 426);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLineNode_finalize(struct sLineNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLineNode_finalize", 2, 409));
    }
        neo_current_frame = fr.prev;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sSNameNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 253, 427),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 253, 428);
        __result_obj__0 = (struct sSNameNode*)come_increment_ref_count(self, "50call4.nc", 256, 429);
    come_call_finalizer(sSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 256, 431);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSNameNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 256, 432);
    return __result_obj__0;
}

char*  sSNameNode_kind(struct sSNameNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSNameNode","50call4.nc",258))), "50call4.nc", 258, 433);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 258, 434));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 258, 435));
    return __result_obj__0;
}

_Bool  sSNameNode_compile(struct sSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj50  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj51  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 263, 436, "struct CVALUE* "), "50call4.nc", 263, 437)), "50call4.nc", 263, 438);
    __right_value0 = (void*)0;
    __dec_obj50=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->sname), "50call4.nc", 265, 440);
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 265, 439);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj51=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 266, 441, "struct sType* "), "50call4.nc", 266, 442),(char*)come_increment_ref_count(xsprintf("char*"), "50call4.nc", 266, 443),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 266, 445);
    come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 266, 444);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 269, 446));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 273, 447);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSNameNode_finalize(struct sSNameNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSNameNode_finalize", 2, 430));
    }
        neo_current_frame = fr.prev;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFuncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 281, 448),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 281, 449);
        __result_obj__0 = (struct sFuncNode*)come_increment_ref_count(self, "50call4.nc", 284, 450);
    come_call_finalizer(sFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 284, 452);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFuncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 284, 453);
    return __result_obj__0;
}

char*  sFuncNode_kind(struct sFuncNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFuncNode","50call4.nc",286))), "50call4.nc", 286, 454);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 286, 455));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 286, 456));
    return __result_obj__0;
}

_Bool  sFuncNode_compile(struct sFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj52  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj53  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 291, 457, "struct CVALUE* "), "50call4.nc", 291, 458)), "50call4.nc", 291, 459);
    __right_value0 = (void*)0;
    __dec_obj52=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName), "50call4.nc", 293, 461);
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 293, 460);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj53=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 294, 462, "struct sType* "), "50call4.nc", 294, 463),(char*)come_increment_ref_count(xsprintf("char*"), "50call4.nc", 294, 464),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 294, 466);
    come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 294, 465);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 297, 467));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 301, 468);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFuncNode_finalize(struct sFuncNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFuncNode_finalize", 2, 451));
    }
        neo_current_frame = fr.prev;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerFuncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 309, 469),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 309, 470);
        __result_obj__0 = (struct sCallerFuncNode*)come_increment_ref_count(self, "50call4.nc", 312, 471);
    come_call_finalizer(sCallerFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 312, 473);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerFuncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 312, 474);
    return __result_obj__0;
}

char*  sCallerFuncNode_kind(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerFuncNode","50call4.nc",314))), "50call4.nc", 314, 475);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 314, 476));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 314, 477));
    return __result_obj__0;
}

_Bool  sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj54  ;
    char*  __dec_obj55  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj56  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 319, 478, "struct CVALUE* "), "50call4.nc", 319, 479)), "50call4.nc", 319, 480);
    if(info->caller_fun) {
        __right_value0 = (void*)0;
        __dec_obj54=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName), "50call4.nc", 322, 482);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 322, 481);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj55=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"\""), "50call4.nc", 325, 484);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 325, 483);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj56=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 327, 485, "struct sType* "), "50call4.nc", 327, 486),(char*)come_increment_ref_count(xsprintf("char*"), "50call4.nc", 327, 487),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 327, 489);
    come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 327, 488);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 330, 490));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 334, 491);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCallerFuncNode_finalize", 2, 472));
    }
        neo_current_frame = fr.prev;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerLineNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 342, 492),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 342, 493);
        __result_obj__0 = (struct sCallerLineNode*)come_increment_ref_count(self, "50call4.nc", 345, 494);
    come_call_finalizer(sCallerLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 345, 496);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerLineNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 345, 497);
    return __result_obj__0;
}

_Bool  sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj57  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj58  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 347, 498, "struct CVALUE* "), "50call4.nc", 347, 499)), "50call4.nc", 347, 500);
    __right_value0 = (void*)0;
    __dec_obj57=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%d",info->caller_line), "50call4.nc", 349, 502);
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 349, 501);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj58=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 350, 503, "struct sType* "), "50call4.nc", 350, 504),(char*)come_increment_ref_count(xsprintf("int"), "50call4.nc", 350, 505),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 350, 507);
    come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 350, 506);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 353, 508));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 357, 509);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  sCallerLineNode_kind(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerLineNode","50call4.nc",362))), "50call4.nc", 362, 510);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 362, 511));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 362, 512));
    return __result_obj__0;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCallerLineNode_finalize", 2, 495));
    }
        neo_current_frame = fr.prev;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerSNameNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 370, 513),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 370, 514);
        __result_obj__0 = (struct sCallerSNameNode*)come_increment_ref_count(self, "50call4.nc", 373, 515);
    come_call_finalizer(sCallerSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 373, 517);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerSNameNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 373, 518);
    return __result_obj__0;
}

_Bool  sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj59  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj60  ;
    _Bool  __result_obj__0  ;
    memset(&come_value, 0, sizeof(come_value));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 375, 519, "struct CVALUE* "), "50call4.nc", 375, 520)), "50call4.nc", 375, 521);
    __right_value0 = (void*)0;
    __dec_obj59=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname), "50call4.nc", 377, 523);
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 377, 522);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj60=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 378, 524, "struct sType* "), "50call4.nc", 378, 525),(char*)come_increment_ref_count(xsprintf("char*"), "50call4.nc", 378, 526),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 378, 528);
    come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 378, 527);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 381, 529));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 385, 530);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  sCallerSNameNode_kind(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerSNameNode","50call4.nc",390))), "50call4.nc", 390, 531);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 390, 532));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 390, 533));
    return __result_obj__0;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCallerSNameNode_finalize", 2, 516));
    }
        neo_current_frame = fr.prev;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer*  come_block  , int come_block_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __dec_obj61  ;
    struct sComeCallNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 397, 534),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 397, 535);
    __dec_obj61=self->come_block,
    self->come_block=(struct buffer* )come_increment_ref_count(come_block, "50call4.nc", 399, 537);
    come_call_finalizer(buffer_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 399, 536);
    self->come_block_sline=come_block_sline;
        __result_obj__0 = (struct sComeCallNode*)come_increment_ref_count(self, "50call4.nc", 403, 538);
    come_call_finalizer(sComeCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 403, 541);
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 403, 542);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComeCallNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 403, 543);
    return __result_obj__0;
}

char*  sComeCallNode_kind(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComeCallNode","50call4.nc",405))), "50call4.nc", 405, 544);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 405, 545));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 405, 546));
    return __result_obj__0;
}

_Bool  sComeCallNode_terminated(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_terminated"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

_Bool  sComeCallNode_compile(struct sComeCallNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int come_block_sline;
    struct buffer*  come_block  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* come_params;
    char*  var_name  ;
    void* __right_value2 = (void*)0;
    struct sType*  type_  ;
    _Bool  __result_obj__0  ;
    struct sNode* var_node;
    _Bool  Value  ;
    struct CVALUE*  thread_var_value  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj62  ;
    struct sType*  __dec_obj63  ;
    struct sNode* null_node;
    _Bool  Value_14  ;
    struct CVALUE*  __dec_obj64  ;
    struct sType*  type__15  ;
    struct sType*  __dec_obj65  ;
    struct sNode* _inf_value2;
    struct sCurrentNode* _inf_obj_value2;
    struct sNode* current_stack_frame_node;
    _Bool  Value_16  ;
    struct CVALUE*  current_stack_frame_value  ;
    char*  fun_name  ;
    struct buffer*  come_block2  ;
    char*  class_name  ;
    struct sClass*  current_stack_frame_struct  ;
    struct buffer*  source3  ;
    char* p;
    char* head;
    int sline;
    struct buffer*  __dec_obj67  ;
    struct sNode* node;
    _Bool  in_method_block  ;
    _Bool  Value_17  ;
    struct buffer*  __dec_obj68  ;
    struct CVALUE*  fun_value  ;
    char*  __dec_obj69  ;
    struct sType*  __dec_obj70  ;
    struct buffer*  buf  ;
    char*  fun_name_20  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_5;
    struct CVALUE*  it  ;
    struct CVALUE*  come_value_23  ;
    char*  __dec_obj74  ;
    struct sType*  type  ;
    struct sType*  __dec_obj75  ;
    memset(&come_block_sline, 0, sizeof(come_block_sline));
    memset(&come_block, 0, sizeof(come_block));
    memset(&come_params, 0, sizeof(come_params));
    memset(&var_name, 0, sizeof(var_name));
    memset(&type_, 0, sizeof(type_));
    memset(&var_node, 0, sizeof(var_node));
    memset(&Value, 0, sizeof(Value));
    memset(&thread_var_value, 0, sizeof(thread_var_value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&null_node, 0, sizeof(null_node));
    memset(&Value_14, 0, sizeof(Value_14));
    memset(&type__15, 0, sizeof(type__15));
    memset(&current_stack_frame_node, 0, sizeof(current_stack_frame_node));
    memset(&Value_16, 0, sizeof(Value_16));
    memset(&current_stack_frame_value, 0, sizeof(current_stack_frame_value));
    memset(&fun_name, 0, sizeof(fun_name));
    memset(&come_block2, 0, sizeof(come_block2));
    memset(&class_name, 0, sizeof(class_name));
    memset(&current_stack_frame_struct, 0, sizeof(current_stack_frame_struct));
    memset(&source3, 0, sizeof(source3));
    memset(&p, 0, sizeof(p));
    memset(&head, 0, sizeof(head));
    memset(&sline, 0, sizeof(sline));
    memset(&node, 0, sizeof(node));
    memset(&in_method_block, 0, sizeof(in_method_block));
    memset(&Value_17, 0, sizeof(Value_17));
    memset(&fun_value, 0, sizeof(fun_value));
    memset(&buf, 0, sizeof(buf));
    memset(&fun_name_20, 0, sizeof(fun_name_20));
    memset(&j, 0, sizeof(j));
    memset(&_o2_saved_5, 0, sizeof(_o2_saved_5));
    memset(&it, 0, sizeof(it));
    memset(&come_value_23, 0, sizeof(come_value_23));
    memset(&type, 0, sizeof(type));
    come_block_sline=self->come_block_sline;
    come_block=(struct buffer* )come_increment_ref_count(self->come_block, "50call4.nc", 416, 547);
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "50call4.nc", 418, 548, "struct list$1CVALUE$ph*"), "50call4.nc", 418, 554)), "50call4.nc", 418, 555);
    static int thread_num=0;
    thread_num++;
    __right_value0 = (void*)0;
    var_name=(char* )come_increment_ref_count(xsprintf("__thread_info%d",thread_num), "50call4.nc", 423, 556);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value1=map$2char$phsType$ph_at(info->types,((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0),(_Bool)0)))), "50call4.nc", 425, 572);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 425, 573));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 425, 574);
    if(type_==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 429, 575);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 429, 576);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 429, 577));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 429, 578);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    var_node=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name, "50call4.nc", 432, 579),((void*)0),((void*)0),type_,(_Bool)1,((void*)0),info,(_Bool)0), "50call4.nc", 432, 580);
    Value=node_compile(var_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 435, 581);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 435, 582);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 435, 583));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 435, 584);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 435, 585):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    thread_var_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 438, 586);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 440, 587, "struct CVALUE* "), "50call4.nc", 440, 588)), "50call4.nc", 440, 589);
    __right_value0 = (void*)0;
    __dec_obj62=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("&%s",thread_var_value->c_value), "50call4.nc", 441, 591);
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 441, 590);
    __dec_obj63=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(thread_var_value->type, "50call4.nc", 442, 593);
    come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 442, 592);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 445, 594));
    __right_value0 = (void*)0;
    null_node=(struct sNode*)come_increment_ref_count(create_null_node(info), "50call4.nc", 447, 595);
    Value_14=node_compile(null_node,info);
    if(!Value_14) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 450, 596);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 450, 597);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 450, 598));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 450, 599);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 450, 600):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 450, 601);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 450, 602);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 450, 603):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __dec_obj64=come_value,
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 453, 605);
    come_call_finalizer(CVALUE_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 453, 604);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 455, 606);
    __right_value0 = (void*)0;
    type__15=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "50call4.nc", 455, 607);
    __right_value0 = (void*)0;
    __dec_obj65=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__15,info), "50call4.nc", 456, 609);
    come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 456, 608);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 458, 610));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 460, 613, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "50call4.nc", 460, 611, "struct sCurrentNode* "), "50call4.nc", 460, 612),info))), "50call4.nc", 460, 614);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode_finalize;
    _inf_value2->clone=(void*)sCurrentNode_clone;
    _inf_value2->compile=(void*)sCurrentNode_compile;
    _inf_value2->sline=(void*)sCurrentNode_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __right_value2 = (void*)0;
    current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value2, "50call4.nc", 460, 622);
    come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 460, 623);
    Value_16=node_compile(current_stack_frame_node,info);
    if(!Value_16) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 463, 624);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 463, 625);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 463, 626));
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 463, 627):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 463, 628);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 463, 629);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 463, 630):(void*)0);
        come_call_finalizer(sType_finalize, type__15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 463, 631);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 463, 632):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    current_stack_frame_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 466, 633);
    __right_value0 = (void*)0;
    fun_name=(char* )come_increment_ref_count(xsprintf("__thread_fun%d",thread_num), "50call4.nc", 468, 634);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_block2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 470, 635, "struct buffer* "), "50call4.nc", 470, 636)), "50call4.nc", 470, 637);
    __right_value0 = (void*)0;
    class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num), "50call4.nc", 472, 638);
    buffer_append_format(come_block2,"void* %s(%s* parent)\n",fun_name,class_name);
    __right_value0 = (void*)0;
    buffer_append_str(come_block2,((char* )(__right_value0=buffer_to_string(come_block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 476, 639));
    current_stack_frame_struct=info->current_stack_frame_struct;
    __right_value0 = (void*)0;
    info->current_stack_frame_struct=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
    source3=(struct buffer* )come_increment_ref_count(info->source, "50call4.nc", 481, 678);
    p=info->p;
    head=info->head;
    sline=info->sline;
    __dec_obj67=info->source,
    info->source=(struct buffer* )come_increment_ref_count(come_block2, "50call4.nc", 486, 680);
    come_call_finalizer(buffer_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 486, 679);
    if(info->p==((void*)0)) {
        info->p=info->source->buf;
    }
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline;
    __right_value0 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(parse_function(info), "50call4.nc", 494, 681);
    in_method_block=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_17=node_compile(node,info);
    if(!Value_17) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 499, 682);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 499, 683);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 499, 684));
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 499, 685):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 499, 686);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 499, 687);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 499, 688):(void*)0);
        come_call_finalizer(sType_finalize, type__15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 499, 689);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 499, 690):(void*)0);
        come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 499, 691);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 499, 692));
        come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 499, 693);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 499, 694));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 499, 695);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 499, 696):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    info->in_method_block=in_method_block;
    __dec_obj68=info->source,
    info->source=(struct buffer* )come_increment_ref_count(source3, "50call4.nc", 503, 698);
    come_call_finalizer(buffer_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 503, 697);
    if(info->p==((void*)0)) {
        info->p=info->source->buf;
    }
    info->p=info->source->buf;
    info->p=p;
    info->head=head;
    info->sline=sline;
    info->current_stack_frame_struct=current_stack_frame_struct;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 514, 699, "struct CVALUE* "), "50call4.nc", 514, 700)), "50call4.nc", 514, 701);
    __right_value0 = (void*)0;
    __dec_obj69=fun_value->c_value,
    fun_value->c_value=(char* )come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name), "50call4.nc", 516, 703);
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 516, 702);
    __dec_obj70=come_value->type,
    come_value->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 517, 704);
    come_value->var=((void*)0);
    list$1CVALUE$ph_add(come_params,(struct CVALUE* )come_increment_ref_count(fun_value, "50call4.nc", 520, 719));
    list$1CVALUE$ph_add(come_params,(struct CVALUE* )come_increment_ref_count(current_stack_frame_value, "50call4.nc", 522, 720));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 524, 721, "struct buffer* "), "50call4.nc", 524, 722)), "50call4.nc", 524, 723);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 526, 724));
    __right_value0 = (void*)0;
    fun_name_20=(char*)come_increment_ref_count(xsprintf("pthread_create"), "50call4.nc", 526, 725);
    buffer_append_str(buf,"(");
    buffer_append_str(buf,fun_name_20);
    buffer_append_str(buf,"(");
    j=0;
    for(_o2_saved_5=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "50call4.nc", 533, 726),it=list$1CVALUE$ph_begin(_o2_saved_5)    ;!list$1CVALUE$ph_end(_o2_saved_5);it=list$1CVALUE$ph_next(_o2_saved_5)){
        buffer_append_str(buf,it->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    buffer_append_str(buf,")");
    buffer_append_str(buf,", ");
    buffer_append_str(buf,thread_var_value->c_value);
    buffer_append_str(buf,")");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 547, 727);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_23=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 547, 728, "struct CVALUE* "), "50call4.nc", 547, 729)), "50call4.nc", 547, 730);
    __right_value0 = (void*)0;
    __dec_obj74=come_value_23->c_value,
    come_value_23->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "50call4.nc", 548, 732);
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 548, 731);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value1=map$2char$phsType$ph_at(info->types,((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0),(_Bool)0)))), "50call4.nc", 550, 733);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 550, 734));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 550, 735);
    if(type==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
    }
    __dec_obj75=come_value_23->type,
    come_value_23->type=(struct sType* )come_increment_ref_count(type, "50call4.nc", 554, 737);
    come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 554, 736);
    come_value_23->var=((void*)0);
    add_come_last_code(info,"%s",come_value_23->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_23, "50call4.nc", 559, 738));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 739);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 740);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 561, 741));
    ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 561, 742):(void*)0);
    come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 743);
    ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 561, 744):(void*)0);
    come_call_finalizer(sType_finalize, type__15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 745);
    ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 561, 746):(void*)0);
    come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 747);
    come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 748);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 561, 749));
    come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 750);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 561, 751):(void*)0);
    come_call_finalizer(CVALUE_finalize, fun_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 752);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 753);
    (fun_name_20 = come_decrement_ref_count(fun_name_20, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 561, 754));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 755);
    come_call_finalizer(CVALUE_finalize, come_value_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 756);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 561, 757);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sComeCallNode_finalize(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sComeCallNode_finalize", 2, 539));
    }
    if(self!=((void*)0)&&self->come_block!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComeCallNode_finalize}", 3, 540);
    }
        neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1CVALUE$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 549);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3, 552);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3, 553);
    return __result_obj__0;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1CVALUE$ph* it;
    struct list_item$1CVALUE$ph* prev_it;
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 551);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 550);
    }
            neo_current_frame = fr.prev;
}

static struct sType*  map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char*  key  , struct sType*  default_value  , _Bool  by_pointer  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_at"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 3627, 557);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3627, 558);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3627, 559);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right3 = (self->size); if(__neo_div_right3 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right3; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "./neo-c.h", 3640, 560);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3640, 561);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3640, 562);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 3647, 563);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3647, 564);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3647, 565);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 3651, 566);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3651, 567);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3651, 568);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 3655, 569);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3655, 570);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3655, 571);
    return __result_obj__0;
}

static void sCurrentNode_finalize(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCurrentNode_finalize", 2, 615));
    }
        neo_current_frame = fr.prev;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sCurrentNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCurrentNode*  result  ;
    char*  __dec_obj66  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "sCurrentNode_clone", 5, 616, "struct sCurrentNode* "), "sCurrentNode_clone", 5, 617);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj66=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCurrentNode_clone", 7, 618, "char* "), "sCurrentNode_clone", 7, 620);
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "sCurrentNode_clone", 7, 619);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCurrentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCurrentNode_clone}", 9, 621);
    neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 640);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 649);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 650);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right4 = (self->size); if(__neo_div_right4 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right4; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 651);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 652);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 653);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 654);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 655);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 656);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 657);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 658);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 659);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 660);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 661);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 662);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 641));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 5, 646);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 647));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 648));
    }
            neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 645);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 644);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 642));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 643);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 663);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 664);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 665);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right5 = (self->size); if(__neo_div_right5 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right5; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 666);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 667);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 668);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 669);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 670);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 671);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 672);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 673);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 674);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 675);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 676);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 677);
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj71  ;
    struct list_item$1CVALUE$ph* litem_18;
    struct CVALUE*  __dec_obj72  ;
    struct list_item$1CVALUE$ph* litem_19;
    struct CVALUE*  __dec_obj73  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_18, 0, sizeof(litem_18));
    memset(&litem_19, 0, sizeof(litem_19));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1590, 705);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1593, 706, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1593, 707);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj71=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1597, 709);
        come_call_finalizer(CVALUE_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1597, 708);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1603, 710, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1603, 711);
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        __dec_obj72=litem_18->item,
        litem_18->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1607, 713);
        come_call_finalizer(CVALUE_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1607, 712);
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1613, 714, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1613, 715);
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        __dec_obj73=litem_19->item,
        litem_19->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1617, 717);
        come_call_finalizer(CVALUE_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1617, 716);
        self->tail->next=litem_19;
        self->tail=litem_19;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1625, 718);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_21  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_21,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_21;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool  list$1CVALUE$ph_end(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_next"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_22  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_22,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_22;
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

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj76;
    struct sComeJoinNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 568, 758),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 568, 759);
    __dec_obj76=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "50call4.nc", 570, 761);
    (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0, (void*)0, "50call4.nc", 570, 760) :0);
        __result_obj__0 = (struct sComeJoinNode*)come_increment_ref_count(self, "50call4.nc", 573, 762);
    come_call_finalizer(sComeJoinNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 573, 765);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 573, 766):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComeJoinNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 573, 767);
    return __result_obj__0;
}

char*  sComeJoinNode_kind(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComeJoinNode","50call4.nc",575))), "50call4.nc", 575, 768);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 575, 769));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 575, 770));
    return __result_obj__0;
}

_Bool  sComeJoinNode_terminated(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_terminated"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool  sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* node;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct CVALUE*  come_value_24  ;
    char*  __dec_obj77  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj78  ;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&buf, 0, sizeof(buf));
    memset(&come_value_24, 0, sizeof(come_value_24));
    node=(struct sNode*)come_increment_ref_count(self->node, "50call4.nc", 585, 771);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 588, 772):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 591, 773);
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 593, 774, "struct buffer* "), "50call4.nc", 593, 775)), "50call4.nc", 593, 776);
    buffer_append_str(buf,"pthread_join(");
    buffer_append_str(buf,come_value->c_value);
    buffer_append_str(buf,", 0)");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 598, 777);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_24=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 598, 778, "struct CVALUE* "), "50call4.nc", 598, 779)), "50call4.nc", 598, 780);
    __right_value0 = (void*)0;
    __dec_obj77=come_value_24->c_value,
    come_value_24->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "50call4.nc", 599, 782);
    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 599, 781);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj78=come_value_24->type,
    come_value_24->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 600, 783, "struct sType* "), "50call4.nc", 600, 784),(char*)come_increment_ref_count(xsprintf("void"), "50call4.nc", 600, 785),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 600, 787);
    come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 600, 786);
    come_value_24->var=((void*)0);
    add_come_last_code(info,"%s",come_value_24->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_24, "50call4.nc", 605, 788));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 607, 789):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 607, 790);
    come_call_finalizer(CVALUE_finalize, come_value_24, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 607, 791);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sComeJoinNode_finalize", 2, 763));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sComeJoinNode_finalize", 3, 764):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock*  else_block  , int time_out, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj79;
    struct list$1sBlock$ph* __dec_obj80;
    struct sBlock*  __dec_obj81  ;
    struct sComePollNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 615, 792),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 615, 793);
    __dec_obj79=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars, "50call4.nc", 617, 795);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 617, 794);
    __dec_obj80=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks, "50call4.nc", 661, 799);
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 661, 798);
    __dec_obj81=self->else_block,
    self->else_block=(struct sBlock* )come_increment_ref_count(else_block, "50call4.nc", 619, 801);
    come_call_finalizer(sBlock_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 619, 800);
    self->time_out=time_out;
        __result_obj__0 = (struct sComePollNode*)come_increment_ref_count(self, "50call4.nc", 623, 802);
    come_call_finalizer(sComePollNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 623, 808);
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 623, 809);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 623, 810);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 623, 811);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComePollNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 623, 812);
    return __result_obj__0;
}

char*  sComePollNode_kind(struct sComePollNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComePollNode","50call4.nc",625))), "50call4.nc", 625, 813);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 625, 814));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 625, 815));
    return __result_obj__0;
}

_Bool  sComePollNode_terminated(struct sComePollNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_terminated"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

_Bool  sComePollNode_compile(struct sComePollNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    int time_out;
    int n;
    struct list$1sNode$ph* _o2_saved_6;
    struct sNode* it;
    _Bool  Value  ;
    _Bool  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    int n_27;
    struct list$1sNode$ph* _o2_saved_7;
    struct sNode* it_28;
    memset(&vars, 0, sizeof(vars));
    memset(&blocks, 0, sizeof(blocks));
    memset(&time_out, 0, sizeof(time_out));
    memset(&n, 0, sizeof(n));
    memset(&_o2_saved_6, 0, sizeof(_o2_saved_6));
    memset(&it, 0, sizeof(it));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&n_27, 0, sizeof(n_27));
    memset(&_o2_saved_7, 0, sizeof(_o2_saved_7));
    memset(&it_28, 0, sizeof(it_28));
    vars=(struct list$1sNode$ph*)come_increment_ref_count(self->vars, "50call4.nc", 635, 816);
    blocks=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks, "50call4.nc", 636, 817);
    time_out=self->time_out;
    static int var_num=0;
    var_num++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num,list$1sNode$ph_length(vars));
    n=0;
    for(_o2_saved_6=(struct list$1sNode$ph*)come_increment_ref_count(self->vars, "50call4.nc", 645, 818),it=list$1sNode$ph_begin(_o2_saved_6)    ;!list$1sNode$ph_end(_o2_saved_6);it=list$1sNode$ph_next(_o2_saved_6)){
        Value=node_compile(it,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 647, 819);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 647, 820);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 647, 821);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 650, 822);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num,n,come_value->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num,n,0x0001);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 657, 823);
    }
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num,var_num,list$1sNode$ph_length(vars),time_out);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num);
    n_27=0;
    for(_o2_saved_7=(struct list$1sNode$ph*)come_increment_ref_count(self->vars, "50call4.nc", 661, 824),it_28=list$1sNode$ph_begin(_o2_saved_7)    ;!list$1sNode$ph_end(_o2_saved_7);it_28=list$1sNode$ph_next(_o2_saved_7)){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num,n_27,0x0001);
        __right_value0 = (void*)0;
        transpile_block(((struct sBlock* )(__right_value0=list$1sBlock$ph_operator_load_element(blocks,n_27))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer(sBlock_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 5, 843);
        add_come_code(info,"}\n");
        n_27++;
    }
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 676, 844);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 676, 845);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 676, 846);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 676, 847);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sBlock$ph* it;
    struct list_item$1sBlock$ph* prev_it;
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
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 797);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sBlock$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sBlock$ph$p_finalize}", 2, 796);
    }
            neo_current_frame = fr.prev;
}

static void sComePollNode_finalize(struct sComePollNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sComePollNode_finalize", 2, 803));
    }
    if(self!=((void*)0)&&self->vars!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_finalize}", 3, 804);
    }
    if(self!=((void*)0)&&self->blocks!=((void*)0)) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_finalize}", 5, 806);
    }
    if(self!=((void*)0)&&self->else_block!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_finalize}", 5, 807);
    }
        neo_current_frame = fr.prev;
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sBlock$ph* it;
    struct list_item$1sBlock$ph* prev_it;
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
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1565, 805);
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

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_25;
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
    memset(&result_25,0,sizeof(struct sNode*));
        __result_obj__0 = result_25;
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
    struct sNode* result_26;
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
    memset(&result_26,0,sizeof(struct sNode*));
        __result_obj__0 = result_26;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sBlock*  list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sBlock*  default_value  ;
    struct sBlock*  __result_obj__0  ;
    struct list_item$1sBlock$ph* it;
    int i;
    struct sBlock*  default_value_29  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sBlock* ));
                __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value, "./neo-c.h", 2217, 825);
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2217, 826);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2217, 827);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2220, 828);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sBlock* )come_increment_ref_count(it->item, "./neo-c.h", 2228, 829);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2228, 830);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_29,0,sizeof(struct sBlock* ));
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value_29, "./neo-c.h", 2236, 831);
    come_call_finalizer(sBlock_finalize, default_value_29, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2236, 832);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2236, 833);
    return __result_obj__0;
}

static struct sBlock*  list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sBlock*  default_value  ;
    struct sBlock*  __result_obj__0  ;
    struct list_item$1sBlock$ph* it;
    int i;
    struct sBlock*  default_value_30  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sBlock* ));
                __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value, "./neo-c.h", 2217, 834);
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2217, 835);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2217, 836);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2220, 837);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sBlock* )come_increment_ref_count(it->item, "./neo-c.h", 2228, 838);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2228, 839);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_30,0,sizeof(struct sBlock* ));
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value_30, "./neo-c.h", 2236, 840);
    come_call_finalizer(sBlock_finalize, default_value_30, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2236, 841);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2236, 842);
    return __result_obj__0;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj82  ;
    struct sVarArgTypeName* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 685, 848),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 685, 849);
    __right_value0 = (void*)0;
    __dec_obj82=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "50call4.nc", 687, 851);
    come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 687, 850);
        __result_obj__0 = (struct sVarArgTypeName*)come_increment_ref_count(self, "50call4.nc", 690, 852);
    come_call_finalizer(sVarArgTypeName_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 690, 855);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarArgTypeName_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 690, 856);
    return __result_obj__0;
}

char*  sVarArgTypeName_kind(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sVarArgTypeName","50call4.nc",692))), "50call4.nc", 692, 857);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 692, 858));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 692, 859));
    return __result_obj__0;
}

_Bool  sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj83  ;
    struct sType*  __dec_obj84  ;
    _Bool  __result_obj__0  ;
    memset(&type, 0, sizeof(type));
    memset(&come_value, 0, sizeof(come_value));
    type=(struct sType* )come_increment_ref_count(self->type, "50call4.nc", 697, 860);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 699, 861, "struct CVALUE* "), "50call4.nc", 699, 862)), "50call4.nc", 699, 863);
    __right_value0 = (void*)0;
    __dec_obj83=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "50call4.nc", 701, 865);
    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 701, 864);
    __dec_obj84=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(type, "50call4.nc", 702, 867);
    come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 702, 866);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 705, 868));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 707, 869);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 707, 870);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sVarArgTypeName_finalize", 2, 853));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarArgTypeName_finalize}", 3, 854);
    }
        neo_current_frame = fr.prev;
}

struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char*  attr  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj85  ;
    struct sInnerAttribute* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "50call4.nc", 715, 871),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 715, 872);
    __dec_obj85=self->attr,
    self->attr=(char* )come_increment_ref_count(attr, "50call4.nc", 717, 874);
    __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 717, 873);
        __result_obj__0 = (struct sInnerAttribute*)come_increment_ref_count(self, "50call4.nc", 720, 875);
    come_call_finalizer(sInnerAttribute_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 720, 878);
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 720, 879));
    neo_current_frame = fr.prev;
    come_call_finalizer(sInnerAttribute_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 720, 880);
    return __result_obj__0;
}

char*  sInnerAttribute_kind(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sInnerAttribute","50call4.nc",722))), "50call4.nc", 722, 881);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 722, 882));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 722, 883));
    return __result_obj__0;
}

_Bool  sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  attr  ;
    _Bool  __result_obj__0  ;
    memset(&attr, 0, sizeof(attr));
    attr=(char* )come_increment_ref_count(self->attr, "50call4.nc", 727, 884);
    add_come_code(info,"__attribute__%s",attr);
        __result_obj__0 = (_Bool)1;
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 731, 885));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sInnerAttribute_finalize(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sInnerAttribute_finalize", 2, 876));
    }
    if(self!=((void*)0)&&self->attr!=((void*)0)) {
        (self->attr = come_decrement_ref_count(self->attr, (void*)0, (void*)0, 0, 0, (void*)0, "sInnerAttribute_finalize", 3, 877));
    }
        neo_current_frame = fr.prev;
}

struct sNode* expression_node_v1(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v1"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p);
    exit(3);
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "50call4.nc", 741, 886);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 741, 887):(void*)0);
    return __result_obj__0;
}

char*  parse_inner_attribute(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parse_inner_attribute"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* head;
    _Bool  in_dquort  ;
    int brace_num;
    char* tail;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __result_obj__0  ;
    memset(&head, 0, sizeof(head));
    memset(&in_dquort, 0, sizeof(in_dquort));
    memset(&brace_num, 0, sizeof(brace_num));
    memset(&tail, 0, sizeof(tail));
    memset(&buf, 0, sizeof(buf));
    head=info->p;
    if(*info->p==40) {
        in_dquort=(_Bool)0;
        brace_num=0;
        while(*info->p) {
            if(*info->p==34) {
                info->p++;
                in_dquort=!in_dquort;
            }
            else if(in_dquort) {
                info->p++;
            }
            else if(*info->p==40) {
                info->p++;
                brace_num++;
            }
            else if(*info->p==41) {
                info->p++;
                brace_num--;
                if(brace_num==0) {
                    break;
                }
            }
            else {
                info->p++;
            }
        }
    }
    skip_spaces_and_lf(info);
    tail=info->p;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 779, 888, "struct buffer* "), "50call4.nc", 779, 889)), "50call4.nc", 779, 890);
    buffer_append(buf,head,tail-head);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "50call4.nc", 782, 891);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 782, 892);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 782, 893));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 782, 894));
    return __result_obj__0;
}

struct sNode* expression_node_v98(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v98"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* value;
    struct sNode* __dec_obj86;
    int nest;
    struct sNode* node;
    struct sNode* node_31;
    struct sNode* node_32;
    char* head;
    int head_sline;
    int sline_real;
    char*  buf  ;
    _Bool  is_type_name_  ;
    _Bool  is_special_word  ;
    _Bool  is_portable_symbol  ;
    _Bool  define_function_pointer_flag  ;
    _Bool  lambda_flag  ;
    char*  word2  ;
    _Bool  fun_name_with_type_name  ;
    _Bool  no_output_come_code  ;
    _Bool  flag  ;
    char*  word2_33  ;
    _Bool  call_method_generics_fun_call  ;
    char*  __dec_obj87  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    _Bool _conditional_value_X0;
    int nest_34;
    _Bool  inline_asm  ;
    char*  __dec_obj88  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    struct sNode* node_35;
    _Bool  no_comma  ;
    struct sNode* exp;
    struct sNode* exp2;
    char*  attr  ;
    struct sNode* _inf_value3;
    struct sInnerAttribute* _inf_obj_value3;
    char*  block_text  ;
    char*  contents  ;
    struct sNode* _inf_value4;
    struct sCSourceNode* _inf_obj_value4;
    struct sNode* node_36;
    struct sNode* node_37;
    struct buffer*  come_block  ;
    int come_block_sline;
    char* head_38;
    char* tail;
    struct buffer*  __dec_obj95  ;
    int len;
    char* mem;
    char* head_39;
    _Bool  no_output_come_code_40  ;
    char* tail_41;
    struct buffer*  __dec_obj96  ;
    int len_42;
    char* mem_43;
    struct sNode* _inf_value5;
    struct sComeCallNode* _inf_obj_value5;
    struct sNode* node_44;
    struct sNode* node_45;
    struct sNode* _inf_value6;
    struct sComeJoinNode* _inf_obj_value6;
    int time_out;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock*  else_block  ;
    struct sBlock*  __dec_obj101  ;
    struct sNode* var_name;
    struct sBlock*  block  ;
    struct sNode* _inf_value7;
    struct sComePollNode* _inf_obj_value7;
    struct sNode* _inf_value8;
    struct sFuncNode* _inf_obj_value8;
    struct sNode* _inf_value9;
    struct sLineNode* _inf_obj_value9;
    struct sNode* _inf_value10;
    struct sSNameNode* _inf_obj_value10;
    struct sNode* _inf_value11;
    struct sCallerFuncNode* _inf_obj_value11;
    struct sNode* _inf_value12;
    struct sCallerLineNode* _inf_obj_value12;
    struct sNode* _inf_value13;
    struct sCallerSNameNode* _inf_obj_value13;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var1
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool  err  =0;
    struct sNode* _inf_value14;
    struct sVarArgTypeName* _inf_obj_value14;
    struct sNode* node_61;
    _Bool  volatile_  ;
    struct buffer*  buf2  ;
    char*  word  ;
    _Bool  dquort  ;
    int i;
    struct sNode* exp_62;
    _Bool  Value  ;
    struct CVALUE*  come_value  ;
    int i_63;
    int i_64;
    int i_65;
    struct sNode* _inf_value15;
    struct sInlineAssembler* _inf_obj_value15;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType*  type_66  =0;
    char*  name_67  =0;
    _Bool  err_68  =0;
    char*  base_fun_name  ;
    char*  fun_name  ;
    struct sNode* node_69;
    struct buffer*  fun_name_70  ;
    char*  buf2_71  ;
    struct sNode* node_72;
    struct sNode* node_73;
    struct sNode* node_74;
    struct sNode* node_75;
    memset(&value, 0, sizeof(value));
    memset(&nest, 0, sizeof(nest));
    memset(&node, 0, sizeof(node));
    memset(&node_31, 0, sizeof(node_31));
    memset(&node_32, 0, sizeof(node_32));
    memset(&head, 0, sizeof(head));
    memset(&head_sline, 0, sizeof(head_sline));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&buf, 0, sizeof(buf));
    memset(&is_type_name_, 0, sizeof(is_type_name_));
    memset(&is_special_word, 0, sizeof(is_special_word));
    memset(&is_portable_symbol, 0, sizeof(is_portable_symbol));
    memset(&define_function_pointer_flag, 0, sizeof(define_function_pointer_flag));
    memset(&lambda_flag, 0, sizeof(lambda_flag));
    memset(&word2, 0, sizeof(word2));
    memset(&fun_name_with_type_name, 0, sizeof(fun_name_with_type_name));
    memset(&no_output_come_code, 0, sizeof(no_output_come_code));
    memset(&flag, 0, sizeof(flag));
    memset(&word2_33, 0, sizeof(word2_33));
    memset(&call_method_generics_fun_call, 0, sizeof(call_method_generics_fun_call));
    memset(&nest_34, 0, sizeof(nest_34));
    memset(&inline_asm, 0, sizeof(inline_asm));
    memset(&node_35, 0, sizeof(node_35));
    memset(&no_comma, 0, sizeof(no_comma));
    memset(&exp, 0, sizeof(exp));
    memset(&exp2, 0, sizeof(exp2));
    memset(&attr, 0, sizeof(attr));
    memset(&block_text, 0, sizeof(block_text));
    memset(&contents, 0, sizeof(contents));
    memset(&node_36, 0, sizeof(node_36));
    memset(&node_37, 0, sizeof(node_37));
    memset(&come_block, 0, sizeof(come_block));
    memset(&come_block_sline, 0, sizeof(come_block_sline));
    memset(&head_38, 0, sizeof(head_38));
    memset(&tail, 0, sizeof(tail));
    memset(&len, 0, sizeof(len));
    memset(&mem, 0, sizeof(mem));
    memset(&head_39, 0, sizeof(head_39));
    memset(&no_output_come_code_40, 0, sizeof(no_output_come_code_40));
    memset(&tail_41, 0, sizeof(tail_41));
    memset(&len_42, 0, sizeof(len_42));
    memset(&mem_43, 0, sizeof(mem_43));
    memset(&node_44, 0, sizeof(node_44));
    memset(&node_45, 0, sizeof(node_45));
    memset(&time_out, 0, sizeof(time_out));
    memset(&vars, 0, sizeof(vars));
    memset(&blocks, 0, sizeof(blocks));
    memset(&else_block, 0, sizeof(else_block));
    memset(&var_name, 0, sizeof(var_name));
    memset(&block, 0, sizeof(block));
    memset(&node_61, 0, sizeof(node_61));
    memset(&volatile_, 0, sizeof(volatile_));
    memset(&buf2, 0, sizeof(buf2));
    memset(&word, 0, sizeof(word));
    memset(&dquort, 0, sizeof(dquort));
    memset(&i, 0, sizeof(i));
    memset(&exp_62, 0, sizeof(exp_62));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&i_63, 0, sizeof(i_63));
    memset(&i_64, 0, sizeof(i_64));
    memset(&i_65, 0, sizeof(i_65));
    memset(&base_fun_name, 0, sizeof(base_fun_name));
    memset(&fun_name, 0, sizeof(fun_name));
    memset(&node_69, 0, sizeof(node_69));
    memset(&fun_name_70, 0, sizeof(fun_name_70));
    memset(&buf2_71, 0, sizeof(buf2_71));
    memset(&node_72, 0, sizeof(node_72));
    memset(&node_73, 0, sizeof(node_73));
    memset(&node_74, 0, sizeof(node_74));
    memset(&node_75, 0, sizeof(node_75));
    skip_spaces_and_lf(info);
    if(parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(*info->p==59) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_return_node(((void*)0),info))), "50call4.nc", 794, 895);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 794, 896):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 794, 897):(void*)0);
            return __result_obj__0;
        }
        else {
            __right_value0 = (void*)0;
            value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 797, 898);
            __right_value0 = (void*)0;
            __dec_obj86=value,
            value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value, "50call4.nc", 798, 899),info), "50call4.nc", 798, 901);
            (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0, (void*)0, "50call4.nc", 798, 900) :0);
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_return_node((struct sNode*)come_increment_ref_count(value, "50call4.nc", 800, 902),info))), "50call4.nc", 800, 903);
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 800, 904):(void*)0);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 800, 905):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 800, 906):(void*)0);
            return __result_obj__0;
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 802, 907):(void*)0);
        }
    }
    else if(*info->p==47&&*(info->p+1)==42) {
        nest=0;
        while(1) {
            if(*info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest++;
            }
            else if(*info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest--;
                if(nest==0) {
                    break;
                }
            }
            else if(*info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else if(*info->p==47&&*(info->p+1)==47) {
        info->p+=2;
        while(1) {
            if(*info->p==10) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p==0) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(!gComeC&&*info->p==116&&*(info->p+1)==40) {
        info->p+=2;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(parse_tuple(info,(_Bool)0), "50call4.nc", 848, 908);
        skip_spaces_and_lf(info);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "50call4.nc", 852, 909);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 852, 910):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 852, 911):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1351, 912):(void*)0);
    }
    else if(!gComeC&&*info->p==118&&*(info->p+1)==91) {
        info->p+=2;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_31=(struct sNode*)come_increment_ref_count(parse_vector(info), "50call4.nc", 858, 913);
        skip_spaces_and_lf(info);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_31, "50call4.nc", 862, 914);
        ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 862, 915):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 862, 916):(void*)0);
        return __result_obj__0;
        ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1351, 917):(void*)0);
    }
    else if(!gComeC&&(info->end-info->p)>=strlen("`it")&&memcmp(info->p,"`it",strlen("`it"))==0) {
        __right_value0 = (void*)0;
        node_32=(struct sNode*)come_increment_ref_count(parse_iterator_it(info), "50call4.nc", 866, 918);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_32, "50call4.nc", 868, 919);
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 868, 920):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 868, 921):(void*)0);
        return __result_obj__0;
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1351, 922):(void*)0);
    }
    else if((xisalpha(*info->p)||*info->p==95)&&!(((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==98||*info->p==66||*info->p==104||*info->p==72||*info->p==117||*info->p==85)&&*(info->p+1)==34)||((*info->p==76||*info->p==117||*info->p==85)&&*(info->p+1)==39)||(*info->p==117&&*(info->p+1)==56&&*(info->p+2)==34))) {
        head=info->p;
        head_sline=info->sline;
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        __right_value0 = (void*)0;
        buf=(char* )come_increment_ref_count(backtrace_parse_word(info), "50call4.nc", 876, 923);
        is_type_name_=is_type_name(buf,info);
        const char* is_special_word_array[25]={ "if", "while", "for", "switch", "return", "sizeof", "offsetof", "isheap", "ispointer", "__typeof__"
                                    , "dynamic_typeof", "typeof", "gc_inc", "gc_dec", "gc_dec_nofree", "case", "_Alignof"
                                    , "_Alignas", "__alignof__", "_Atomic", "borrow", "dupe", "clone", "__builtin_offsetof", "_Generic" };
        is_special_word=charpa_contained(is_special_word_array,25,buf);
        is_portable_symbol=is_portable_libc_symbol(buf);
        define_function_pointer_flag=(_Bool)0;
        if(!is_special_word&&*info->p==40&&*(info->p+1)!=42) {
            __right_value0 = (void*)0;
            ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 889, 926);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag=(_Bool)1;
                }
            }
            info->p=head;
            info->sline=head_sline;
        }
        lambda_flag=(_Bool)0;
        if(!is_special_word&&is_type_name_) {
            info->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 913, 927);
            __right_value0 = (void*)0;
            word2=(char* )come_increment_ref_count(backtrace_parse_word(info), "50call4.nc", 914, 928);
            if(string_operator_equals(word2,"lambda")) {
                lambda_flag=(_Bool)1;
            }
            info->p=head;
            info->sline=head_sline;
            (word2 = come_decrement_ref_count(word2, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 924, 929));
        }
        fun_name_with_type_name=(_Bool)0;
        if(!is_special_word) {
            info->p=head;
            info->sline=head_sline;
            no_output_come_code=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            flag=(_Bool)0;
            while(xisalpha(*info->p)||*info->p==95) {
                flag=(_Bool)1;
                __right_value0 = (void*)0;
                word2_33=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 936, 930);
                (word2_33 = come_decrement_ref_count(word2_33, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 938, 931));
            }
            while(*info->p==42||*info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            while(*info->p==91&&*(info->p+1)==93) {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            if(flag&&*info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name=(_Bool)1;
                }
            }
            info->no_output_come_code=no_output_come_code;
            info->p=head;
            info->sline=head_sline;
        }
        call_method_generics_fun_call=(_Bool)0;
        if(!is_special_word) {
            info->p=head;
            info->sline=head_sline;
            if(xisalpha(*info->p)||*info->p==95) {
                __right_value0 = (void*)0;
                __dec_obj87=buf,
                buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 967, 933);
                __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 967, 932);
            }
            if(__right_value0 = (void*)0,
({(_conditional_value_X0=(!is_type_name(buf,info)&&((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char* )(__right_value1=__builtin_string(buf,"50call4.nc",970))))))==((void*)0)&&((struct sVar* )(__right_value5=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char* )(__right_value4=__builtin_string(buf,"50call4.nc",970))))))==((void*)0)&&*info->p==60));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 970, 964));
            come_call_finalizer(sVar_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 3, 965);
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 970, 966));
            come_call_finalizer(sVar_finalize, __right_value5, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 970, 967);
_conditional_value_X0;})) {
                nest_34=0;
                while(*info->p) {
                    if(*info->p==60) {
                        info->p++;
                        nest_34++;
                    }
                    else if(*info->p==62) {
                        info->p++;
                        if(nest_34==0) {
                            break;
                        }
                    }
                    else if(*info->p==10||*info->p==59) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(*info->p==40) {
                    call_method_generics_fun_call=(_Bool)1;
                }
            }
            info->p=head;
            info->sline=head_sline;
        }
        inline_asm=(_Bool)0;
        if(!is_special_word) {
            info->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            __dec_obj88=buf,
            buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1007, 969);
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 1007, 968);
            if(string_operator_equals(buf,"asm")||string_operator_equals(buf,"__asm")||string_operator_equals(buf,"__asm__")) {
                if(*info->p==40) {
                    inline_asm=(_Bool)1;
                }
                else if(xisalpha(*info->p)||*info->p==95) {
                    __right_value0 = (void*)0;
                    __dec_obj89=buf,
                    buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1014, 971);
                    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 1014, 970);
                    if(*info->p==40) {
                        inline_asm=(_Bool)1;
                    }
                }
            }
            info->p=head;
            info->sline=head_sline;
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __dec_obj90=buf,
        buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1026, 973);
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 1026, 972);
        skip_spaces_and_lf(info);
        if(lambda_flag) {
            info->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            node_35=(struct sNode*)come_increment_ref_count(parse_function(info), "50call4.nc", 1033, 974);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_35, "50call4.nc", 1035, 975);
            ((node_35) ? node_35 = come_decrement_ref_count(node_35, ((struct sNode*)node_35)->finalize, ((struct sNode*)node_35)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1035, 976):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1035, 977));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1035, 978):(void*)0);
            return __result_obj__0;
            ((node_35) ? node_35 = come_decrement_ref_count(node_35, ((struct sNode*)node_35)->finalize, ((struct sNode*)node_35)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 979):(void*)0);
        }
        else if((string_operator_equals(buf,"_Static_assert")||string_operator_equals(buf,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 1043, 980);
            info->no_comma=no_comma;
            expected_next_character(44,info);
            __right_value0 = (void*)0;
            exp2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 1047, 981);
            expected_next_character(41,info);
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=static_assert_node((struct sNode*)come_increment_ref_count(exp, "50call4.nc", 1050, 982),(struct sNode*)come_increment_ref_count(exp2, "50call4.nc", 1050, 983),info))), "50call4.nc", 1050, 984);
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1050, 985):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1050, 986):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1050, 987));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1050, 988):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1050, 989):(void*)0);
            return __result_obj__0;
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 990):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 991):(void*)0);
        }
        else if(string_operator_equals(buf,"__attribute__")&&*info->p==40) {
            __right_value0 = (void*)0;
            attr=(char* )come_increment_ref_count(parse_inner_attribute(info), "50call4.nc", 1054, 992);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1055, 996, "struct sNode");
            _inf_obj_value3=(struct sInnerAttribute*)come_increment_ref_count(((struct sInnerAttribute*)(__right_value1=sInnerAttribute_initialize((struct sInnerAttribute* )come_increment_ref_count((struct sInnerAttribute *)come_calloc(1, sizeof(struct sInnerAttribute )*(1), "50call4.nc", 1055, 993, "struct sInnerAttribute* "), "50call4.nc", 1055, 994),(char* )come_increment_ref_count(attr, "50call4.nc", 1055, 995),info))), "50call4.nc", 1055, 997);
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sInnerAttribute_finalize;
            _inf_value3->clone=(void*)sInnerAttribute_clone;
            _inf_value3->compile=(void*)sInnerAttribute_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sInnerAttribute_kind;
            _inf_value3->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "50call4.nc", 1055, 1007);
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1055, 1008));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1055, 1009));
            come_call_finalizer(sInnerAttribute_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1055, 1010);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1055, 1011):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1055, 1012):(void*)0);
            return __result_obj__0;
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1346, 1013));
        }
        else if(string_operator_equals(buf,"__c__")&&*info->p==123) {
            __right_value0 = (void*)0;
            block_text=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "50call4.nc", 1059, 1014);
            contents=(char* )come_increment_ref_count(block_text, "50call4.nc", 1060, 1015);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1061, 1019, "struct sNode");
            _inf_obj_value4=(struct sCSourceNode*)come_increment_ref_count(((struct sCSourceNode*)(__right_value1=sCSourceNode_initialize((struct sCSourceNode* )come_increment_ref_count((struct sCSourceNode *)come_calloc(1, sizeof(struct sCSourceNode )*(1), "50call4.nc", 1061, 1016, "struct sCSourceNode* "), "50call4.nc", 1061, 1017),(char* )come_increment_ref_count(contents, "50call4.nc", 1061, 1018),info))), "50call4.nc", 1061, 1020);
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sCSourceNode_finalize;
            _inf_value4->clone=(void*)sCSourceNode_clone;
            _inf_value4->compile=(void*)sCSourceNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sCSourceNode_kind;
            _inf_value4->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)), "50call4.nc", 1061, 1030);
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1061, 1031));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1061, 1032));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1061, 1033));
            come_call_finalizer(sCSourceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1061, 1034);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1061, 1035):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1061, 1036):(void*)0);
            return __result_obj__0;
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1346, 1037));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1346, 1038));
        }
        else if(string_operator_equals(buf,"extern")) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_function(info))), "50call4.nc", 1064, 1039);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1064, 1040));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1064, 1041):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1064, 1042):(void*)0);
            return __result_obj__0;
        }
        else if(!gComeC&&(string_operator_equals(buf,"string")||string_operator_equals(buf,"wstring"))&&*info->p==40) {
            __right_value0 = (void*)0;
            node_36=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0), "50call4.nc", 1067, 1043);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_36, "50call4.nc", 1069, 1044);
            ((node_36) ? node_36 = come_decrement_ref_count(node_36, ((struct sNode*)node_36)->finalize, ((struct sNode*)node_36)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1069, 1045):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1069, 1046));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1069, 1047):(void*)0);
            return __result_obj__0;
            ((node_36) ? node_36 = come_decrement_ref_count(node_36, ((struct sNode*)node_36)->finalize, ((struct sNode*)node_36)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 1048):(void*)0);
        }
        else if(is_special_word) {
            __right_value0 = (void*)0;
            node_37=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info), "50call4.nc", 1072, 1049);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_37, "50call4.nc", 1074, 1050);
            ((node_37) ? node_37 = come_decrement_ref_count(node_37, ((struct sNode*)node_37)->finalize, ((struct sNode*)node_37)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1074, 1051):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1074, 1052));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1074, 1053):(void*)0);
            return __result_obj__0;
            ((node_37) ? node_37 = come_decrement_ref_count(node_37, ((struct sNode*)node_37)->finalize, ((struct sNode*)node_37)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 1054):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(buf,"come")) {
            come_block=((void*)0);
            come_block_sline=0;
            if(*info->p==123) {
                head_38=info->p;
                come_block_sline=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 1083, 1055));
                tail=info->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj95=come_block,
                come_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 1085, 1056, "struct buffer* "), "50call4.nc", 1085, 1057)), "50call4.nc", 1085, 1059);
                come_call_finalizer(buffer_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 1085, 1058);
                len=tail-head_38;
                __right_value0 = (void*)0;
                mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "50call4.nc", 1087, 1060, "char*"), "50call4.nc", 1087, 1061);
                memcpy(mem,head_38,len);
                mem[len]=0;
                buffer_append_str(come_block,mem);
                buffer_append_str(come_block,"\n");
                (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1113, 1062));
            }
            else {
                head_39=info->p;
                come_block_sline=info->sline;
                no_output_come_code_40=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                __right_value0 = (void*)0;
                ((struct sNode*)(__right_value0=expression_v13(info,(_Bool)0)));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1098, 1063):(void*)0);
                info->no_output_come_code=no_output_come_code_40;
                tail_41=info->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj96=come_block,
                come_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 1101, 1064, "struct buffer* "), "50call4.nc", 1101, 1065)), "50call4.nc", 1101, 1067);
                come_call_finalizer(buffer_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 1101, 1066);
                len_42=tail_41-head_39;
                __right_value0 = (void*)0;
                mem_43=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_42+1)), "50call4.nc", 1103, 1068, "char*"), "50call4.nc", 1103, 1069);
                memcpy(mem_43,head_39,len_42);
                mem_43[len_42]=0;
                buffer_append_str(come_block,"{");
                buffer_append_str(come_block,mem_43);
                buffer_append_str(come_block,"; }");
                buffer_append_str(come_block,"return (void*)0;\n}");
                buffer_append_str(come_block,"\n");
                (mem_43 = come_decrement_ref_count(mem_43, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1113, 1070));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1113, 1074, "struct sNode");
            _inf_obj_value5=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value1=sComeCallNode_initialize((struct sComeCallNode* )come_increment_ref_count((struct sComeCallNode *)come_calloc(1, sizeof(struct sComeCallNode )*(1), "50call4.nc", 1113, 1071, "struct sComeCallNode* "), "50call4.nc", 1113, 1072),(struct buffer* )come_increment_ref_count(come_block, "50call4.nc", 1113, 1073),come_block_sline,info))), "50call4.nc", 1113, 1075);
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sComeCallNode_finalize;
            _inf_value5->clone=(void*)sComeCallNode_clone;
            _inf_value5->compile=(void*)sComeCallNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sComeCallNode_terminated;
            _inf_value5->kind=(void*)sComeCallNode_kind;
            _inf_value5->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            node_44=(struct sNode*)come_increment_ref_count(_inf_value5, "50call4.nc", 1113, 1084);
            come_call_finalizer(sComeCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1113, 1085);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_44, "50call4.nc", 1115, 1086);
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1115, 1087);
            ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1115, 1088):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1115, 1089));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1115, 1090):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1346, 1091);
            ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 1092):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(buf,"come_join")&&*info->p==40) {
            expected_next_character(40,info);
            __right_value0 = (void*)0;
            node_45=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 1119, 1093);
            expected_next_character(41,info);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1122, 1097, "struct sNode");
            _inf_obj_value6=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value1=sComeJoinNode_initialize((struct sComeJoinNode* )come_increment_ref_count((struct sComeJoinNode *)come_calloc(1, sizeof(struct sComeJoinNode )*(1), "50call4.nc", 1122, 1094, "struct sComeJoinNode* "), "50call4.nc", 1122, 1095),(struct sNode*)come_increment_ref_count(node_45, "50call4.nc", 1122, 1096),info))), "50call4.nc", 1122, 1098);
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sComeJoinNode_finalize;
            _inf_value6->clone=(void*)sComeJoinNode_clone;
            _inf_value6->compile=(void*)sComeJoinNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sComeJoinNode_terminated;
            _inf_value6->kind=(void*)sComeJoinNode_kind;
            _inf_value6->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)), "50call4.nc", 1122, 1107);
            ((node_45) ? node_45 = come_decrement_ref_count(node_45, ((struct sNode*)node_45)->finalize, ((struct sNode*)node_45)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1122, 1108):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1122, 1109));
            come_call_finalizer(sComeJoinNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1122, 1110);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1122, 1111):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1122, 1112):(void*)0);
            return __result_obj__0;
            ((node_45) ? node_45 = come_decrement_ref_count(node_45, ((struct sNode*)node_45)->finalize, ((struct sNode*)node_45)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 1113):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(buf,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out=1;
            if(*info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out=time_out*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "50call4.nc", 1138, 1114, "struct list$1sNode$ph*"), "50call4.nc", 1138, 1115)), "50call4.nc", 1138, 1116);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "50call4.nc", 1139, 1117, "struct list$1sBlock$ph*"), "50call4.nc", 1139, 1121)), "50call4.nc", 1139, 1122);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "50call4.nc", 1140, 1123, "struct sBlock* "), "50call4.nc", 1140, 1124)), "50call4.nc", 1140, 1125);
            while(1) {
                if(((info->end-info->p)>=strlen("else"))&&memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __right_value0 = (void*)0;
                    __dec_obj101=else_block,
                    else_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "50call4.nc", 1145, 1127);
                    come_call_finalizer(sBlock_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 1145, 1126);
                    if(*info->p==125) {
                        break;
                    }
                }
                else {
                    __right_value0 = (void*)0;
                    var_name=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 1151, 1128);
                    __right_value0 = (void*)0;
                    block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "50call4.nc", 1152, 1129);
                    list$1sNode$ph_add(vars,(struct sNode*)come_increment_ref_count(var_name, "50call4.nc", 1153, 1130));
                    list$1sBlock$ph_add(blocks,(struct sBlock* )come_increment_ref_count(block, "50call4.nc", 1154, 1145));
                    if(*info->p==125) {
                        ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1156, 1146):(void*)0);
                        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1156, 1147);
                        break;
                    }
                    ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1159, 1148):(void*)0);
                    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1159, 1149);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1163, 1155, "struct sNode");
            _inf_obj_value7=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value1=sComePollNode_initialize((struct sComePollNode* )come_increment_ref_count((struct sComePollNode *)come_calloc(1, sizeof(struct sComePollNode )*(1), "50call4.nc", 1163, 1150, "struct sComePollNode* "), "50call4.nc", 1163, 1151),(struct list$1sNode$ph*)come_increment_ref_count(vars, "50call4.nc", 1163, 1152),(struct list$1sBlock$ph*)come_increment_ref_count(blocks, "50call4.nc", 1163, 1153),(struct sBlock* )come_increment_ref_count(else_block, "50call4.nc", 1163, 1154),time_out,info))), "50call4.nc", 1163, 1156);
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sComePollNode_finalize;
            _inf_value7->clone=(void*)sComePollNode_clone;
            _inf_value7->compile=(void*)sComePollNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sComePollNode_terminated;
            _inf_value7->kind=(void*)sComePollNode_kind;
            _inf_value7->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)), "50call4.nc", 1163, 1332);
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1163, 1333);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1163, 1334);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1163, 1335);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1163, 1336));
            come_call_finalizer(sComePollNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1163, 1337);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1163, 1338):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1163, 1339):(void*)0);
            return __result_obj__0;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1346, 1340);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1346, 1341);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1346, 1342);
        }
        else if(string_operator_equals(buf,"__func__")||string_operator_equals(buf,"__FUNCTION__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1168, 1345, "struct sNode");
            _inf_obj_value8=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value1=sFuncNode_initialize((struct sFuncNode* )come_increment_ref_count((struct sFuncNode *)come_calloc(1, sizeof(struct sFuncNode )*(1), "50call4.nc", 1168, 1343, "struct sFuncNode* "), "50call4.nc", 1168, 1344),info))), "50call4.nc", 1168, 1346);
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFuncNode_finalize;
            _inf_value8->clone=(void*)sFuncNode_clone;
            _inf_value8->compile=(void*)sFuncNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFuncNode_kind;
            _inf_value8->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "50call4.nc", 1168, 1353);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1168, 1354));
            come_call_finalizer(sFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1168, 1355);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1168, 1356):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1168, 1357):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__line__")||string_operator_equals(buf,"__LINE__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1172, 1360, "struct sNode");
            _inf_obj_value9=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value1=sLineNode_initialize((struct sLineNode* )come_increment_ref_count((struct sLineNode *)come_calloc(1, sizeof(struct sLineNode )*(1), "50call4.nc", 1172, 1358, "struct sLineNode* "), "50call4.nc", 1172, 1359),info))), "50call4.nc", 1172, 1361);
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sLineNode_finalize;
            _inf_value9->clone=(void*)sLineNode_clone;
            _inf_value9->compile=(void*)sLineNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sLineNode_kind;
            _inf_value9->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "50call4.nc", 1172, 1368);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1172, 1369));
            come_call_finalizer(sLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1172, 1370);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1172, 1371):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1172, 1372):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__sname__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1176, 1375, "struct sNode");
            _inf_obj_value10=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value1=sSNameNode_initialize((struct sSNameNode* )come_increment_ref_count((struct sSNameNode *)come_calloc(1, sizeof(struct sSNameNode )*(1), "50call4.nc", 1176, 1373, "struct sSNameNode* "), "50call4.nc", 1176, 1374),info))), "50call4.nc", 1176, 1376);
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSNameNode_finalize;
            _inf_value10->clone=(void*)sSNameNode_clone;
            _inf_value10->compile=(void*)sSNameNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSNameNode_kind;
            _inf_value10->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "50call4.nc", 1176, 1383);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1176, 1384));
            come_call_finalizer(sSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1176, 1385);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1176, 1386):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1176, 1387):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__caller_func__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1180, 1390, "struct sNode");
            _inf_obj_value11=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value1=sCallerFuncNode_initialize((struct sCallerFuncNode* )come_increment_ref_count((struct sCallerFuncNode *)come_calloc(1, sizeof(struct sCallerFuncNode )*(1), "50call4.nc", 1180, 1388, "struct sCallerFuncNode* "), "50call4.nc", 1180, 1389),info))), "50call4.nc", 1180, 1391);
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value11->clone=(void*)sCallerFuncNode_clone;
            _inf_value11->compile=(void*)sCallerFuncNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sCallerFuncNode_kind;
            _inf_value11->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)), "50call4.nc", 1180, 1398);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1180, 1399));
            come_call_finalizer(sCallerFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1180, 1400);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1180, 1401):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1180, 1402):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__caller_line__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1184, 1405, "struct sNode");
            _inf_obj_value12=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value1=sCallerLineNode_initialize((struct sCallerLineNode* )come_increment_ref_count((struct sCallerLineNode *)come_calloc(1, sizeof(struct sCallerLineNode )*(1), "50call4.nc", 1184, 1403, "struct sCallerLineNode* "), "50call4.nc", 1184, 1404),info))), "50call4.nc", 1184, 1406);
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sCallerLineNode_finalize;
            _inf_value12->clone=(void*)sCallerLineNode_clone;
            _inf_value12->compile=(void*)sCallerLineNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sCallerLineNode_kind;
            _inf_value12->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "50call4.nc", 1184, 1413);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1184, 1414));
            come_call_finalizer(sCallerLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1184, 1415);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1184, 1416):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1184, 1417):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__caller_sname__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1188, 1420, "struct sNode");
            _inf_obj_value13=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value1=sCallerSNameNode_initialize((struct sCallerSNameNode* )come_increment_ref_count((struct sCallerSNameNode *)come_calloc(1, sizeof(struct sCallerSNameNode )*(1), "50call4.nc", 1188, 1418, "struct sCallerSNameNode* "), "50call4.nc", 1188, 1419),info))), "50call4.nc", 1188, 1421);
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value13->clone=(void*)sCallerSNameNode_clone;
            _inf_value13->compile=(void*)sCallerSNameNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sCallerSNameNode_kind;
            _inf_value13->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "50call4.nc", 1188, 1428);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1188, 1429));
            come_call_finalizer(sCallerSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1188, 1430);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1188, 1431):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1188, 1432):(void*)0);
            return __result_obj__0;
        }
        else if(info->va_arg&&is_type_name(buf,info)) {
            info->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            multiple_assign_var1=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type=(struct sType* )come_increment_ref_count(multiple_assign_var1->v1, "50call4.nc", 1193, 1433);
            name=(char* )come_increment_ref_count(multiple_assign_var1->v2, "50call4.nc", 1193, 1434);
            err=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1193, 1435);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1195, 1438, "struct sNode");
            _inf_obj_value14=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value1=sVarArgTypeName_initialize((struct sVarArgTypeName* )come_increment_ref_count((struct sVarArgTypeName *)come_calloc(1, sizeof(struct sVarArgTypeName )*(1), "50call4.nc", 1195, 1436, "struct sVarArgTypeName* "), "50call4.nc", 1195, 1437),type,info))), "50call4.nc", 1195, 1439);
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value14->clone=(void*)sVarArgTypeName_clone;
            _inf_value14->compile=(void*)sVarArgTypeName_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sVarArgTypeName_kind;
            _inf_value14->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)), "50call4.nc", 1195, 1448);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1195, 1449);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1195, 1450));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1195, 1451));
            come_call_finalizer(sVarArgTypeName_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1195, 1452);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1195, 1453):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1195, 1454):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1346, 1455);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1346, 1456));
        }
        else if(string_operator_equals(buf,"sizeof")||string_operator_equals(buf,"_Alignof")||string_operator_equals(buf,"_Alignas")||string_operator_equals(buf,"__alignof__")||string_operator_equals(buf,"offsetof")||string_operator_equals(buf,"__builtin_offsetof")||string_operator_equals(buf,"_Generic")) {
            __right_value0 = (void*)0;
            node_61=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info), "50call4.nc", 1198, 1457);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_61, "50call4.nc", 1200, 1458);
            ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1200, 1459):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1200, 1460));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1200, 1461):(void*)0);
            return __result_obj__0;
            ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 1462):(void*)0);
        }
        else if(inline_asm) {
            volatile_=(_Bool)0;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buf2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 1204, 1463, "struct buffer* "), "50call4.nc", 1204, 1464)), "50call4.nc", 1204, 1465);
            if(*info->p!=40) {
                __right_value0 = (void*)0;
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1207, 1466);
                if(string_operator_equals(word,"volatile")) {
                    volatile_=(_Bool)1;
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1213, 1467));
            }
            expected_next_character(40,info);
            buffer_append_str(buf2,"(\n");
            dquort=(_Bool)0;
            while((_Bool)1) {
                if(dquort) {
                    if(*info->p==92) {
                        buffer_append_char(buf2,*info->p);
                        info->p++;
                        if(*info->p==0) {
                            err_msg(info,"invalid source end");
                                                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "50call4.nc", 1224, 1468);
                            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1224, 1469);
                            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1224, 1470));
                            neo_current_frame = fr.prev;
                            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1224, 1471):(void*)0);
                            return __result_obj__0;
                        }
                        buffer_append_char(buf2,*info->p);
                        info->p++;
                    }
                    else if(*info->p==34) {
                        buffer_append_char(buf2,*info->p);
                        info->p++;
                        buffer_append_char(buf2,10);
                        skip_spaces_and_lf(info);
                        dquort=(_Bool)0;
                    }
                    else {
                        buffer_append_char(buf2,*info->p);
                        info->p++;
                    }
                }
                else if(*info->p==34) {
                    dquort=(_Bool)1;
                    for(i=0                    ;i<info->block_level+1;i++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,*info->p);
                    info->p++;
                }
                else if(*info->p==40) {
                    buffer_append_char(buf2,40);
                    info->p++;
                    __right_value0 = (void*)0;
                    exp_62=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 1252, 1472);
                    Value=node_compile(exp_62,info);
                    if(!Value) {
                                                __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "50call4.nc", 1254, 1473);
                        ((exp_62) ? exp_62 = come_decrement_ref_count(exp_62, ((struct sNode*)exp_62)->finalize, ((struct sNode*)exp_62)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1254, 1474):(void*)0);
                        come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1254, 1475);
                        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1254, 1476));
                        neo_current_frame = fr.prev;
                        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1254, 1477):(void*)0);
                        return __result_obj__0;
                    }
                    __right_value0 = (void*)0;
                    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 1256, 1478);
                    buffer_append_str(buf2,come_value->c_value);
                    expected_next_character(41,info);
                    buffer_append_char(buf2,41);
                    ((exp_62) ? exp_62 = come_decrement_ref_count(exp_62, ((struct sNode*)exp_62)->finalize, ((struct sNode*)exp_62)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1300, 1479):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1300, 1480);
                }
                else if(*info->p==41) {
                    for(i_63=0                    ;i_63<info->block_level;i_63++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2,*info->p);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==58) {
                    for(i_64=0                    ;i_64<info->block_level+1;i_64++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,*info->p);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==44) {
                    for(i_65=0                    ;i_65<info->block_level+1;i_65++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,*info->p);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    err_msg(info,"unexpected character(%c)",*info->p);
                    exit(2);
                }
            }
            skip_spaces_and_lf(info);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1304, 1484, "struct sNode");
            _inf_obj_value15=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value2=sInlineAssembler_initialize((struct sInlineAssembler* )come_increment_ref_count((struct sInlineAssembler *)come_calloc(1, sizeof(struct sInlineAssembler )*(1), "50call4.nc", 1304, 1481, "struct sInlineAssembler* "), "50call4.nc", 1304, 1482),(char* )come_increment_ref_count(buffer_to_string(buf2), "50call4.nc", 1304, 1483),volatile_,info))), "50call4.nc", 1304, 1485);
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sInlineAssembler_finalize;
            _inf_value15->clone=(void*)sInlineAssembler_clone;
            _inf_value15->compile=(void*)sInlineAssembler_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sInlineAssembler_kind;
            _inf_value15->left_value=(void*)sNodeBase_left_value;
            __right_value3 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value15)), "50call4.nc", 1304, 1495);
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1304, 1496);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1304, 1497));
            come_call_finalizer(sInlineAssembler_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1304, 1498);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1304, 1499):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1304, 1500):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1346, 1501);
        }
        else if(fun_name_with_type_name) {
            info->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_66=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "50call4.nc", 1309, 1502);
            name_67=(char* )come_increment_ref_count(multiple_assign_var2->v2, "50call4.nc", 1309, 1503);
            err_68=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1309, 1504);
            expected_next_character(58,info);
            expected_next_character(58,info);
            __right_value0 = (void*)0;
            base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1312, 1505);
            __right_value0 = (void*)0;
            fun_name=(char* )come_increment_ref_count(create_method_name(type_66,(_Bool)0,base_fun_name,info,(_Bool)1), "50call4.nc", 1313, 1506);
            __right_value0 = (void*)0;
            node_69=(struct sNode*)come_increment_ref_count(parse_function_call(fun_name,info,(_Bool)0), "50call4.nc", 1314, 1507);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_69, "50call4.nc", 1316, 1508);
            come_call_finalizer(sType_finalize, type_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1316, 1509);
            (name_67 = come_decrement_ref_count(name_67, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1316, 1510));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1316, 1511));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1316, 1512));
            ((node_69) ? node_69 = come_decrement_ref_count(node_69, ((struct sNode*)node_69)->finalize, ((struct sNode*)node_69)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1316, 1513):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1316, 1514));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1316, 1515):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1346, 1516);
            (name_67 = come_decrement_ref_count(name_67, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1346, 1517));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1346, 1518));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1346, 1519));
            ((node_69) ? node_69 = come_decrement_ref_count(node_69, ((struct sNode*)node_69)->finalize, ((struct sNode*)node_69)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 1520):(void*)0);
        }
        else if(*info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun_name_70=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 1321, 1521, "struct buffer* "), "50call4.nc", 1321, 1522)), "50call4.nc", 1321, 1523);
            buffer_append_str(fun_name_70,buf);
            buffer_append_str(fun_name_70,"_");
            __right_value0 = (void*)0;
            buf2_71=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1324, 1524);
            buffer_append_str(fun_name_70,buf2_71);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            node_72=(struct sNode*)come_increment_ref_count(parse_function_call(((char* )(__right_value0=buffer_to_string(fun_name_70))),info,(_Bool)0), "50call4.nc", 1326, 1525);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 1326, 1526));
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_72, "50call4.nc", 1328, 1527);
            come_call_finalizer(buffer_finalize, fun_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1328, 1528);
            (buf2_71 = come_decrement_ref_count(buf2_71, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1328, 1529));
            ((node_72) ? node_72 = come_decrement_ref_count(node_72, ((struct sNode*)node_72)->finalize, ((struct sNode*)node_72)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1328, 1530):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1328, 1531));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1328, 1532):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, fun_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1346, 1533);
            (buf2_71 = come_decrement_ref_count(buf2_71, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1346, 1534));
            ((node_72) ? node_72 = come_decrement_ref_count(node_72, ((struct sNode*)node_72)->finalize, ((struct sNode*)node_72)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 1535):(void*)0);
        }
        else if(call_method_generics_fun_call) {
            __right_value0 = (void*)0;
            node_73=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0), "50call4.nc", 1331, 1536);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_73, "50call4.nc", 1333, 1537);
            ((node_73) ? node_73 = come_decrement_ref_count(node_73, ((struct sNode*)node_73)->finalize, ((struct sNode*)node_73)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1333, 1538):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1333, 1539));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1333, 1540):(void*)0);
            return __result_obj__0;
            ((node_73) ? node_73 = come_decrement_ref_count(node_73, ((struct sNode*)node_73)->finalize, ((struct sNode*)node_73)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 1541):(void*)0);
        }
        else if(!is_special_word&&*info->p==40&&!is_type_name_||(is_portable_symbol&&*info->p==40)) {
            __right_value0 = (void*)0;
            node_74=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0), "50call4.nc", 1337, 1542);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_74, "50call4.nc", 1339, 1543);
            ((node_74) ? node_74 = come_decrement_ref_count(node_74, ((struct sNode*)node_74)->finalize, ((struct sNode*)node_74)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1339, 1544):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1339, 1545));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1339, 1546):(void*)0);
            return __result_obj__0;
            ((node_74) ? node_74 = come_decrement_ref_count(node_74, ((struct sNode*)node_74)->finalize, ((struct sNode*)node_74)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 1547):(void*)0);
        }
        else {
            __right_value0 = (void*)0;
            node_75=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info), "50call4.nc", 1342, 1548);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_75, "50call4.nc", 1344, 1549);
            ((node_75) ? node_75 = come_decrement_ref_count(node_75, ((struct sNode*)node_75)->finalize, ((struct sNode*)node_75)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1344, 1550):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1344, 1551));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1344, 1552):(void*)0);
            return __result_obj__0;
            ((node_75) ? node_75 = come_decrement_ref_count(node_75, ((struct sNode*)node_75)->finalize, ((struct sNode*)node_75)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1346, 1553):(void*)0);
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1351, 1554));
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=expression_node_v97(info))), "50call4.nc", 1348, 1555);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1348, 1556):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1348, 1557):(void*)0);
        return __result_obj__0;
    }
    err_msg(info,"unexpected operator(%c)",*info->p);
    exit(2);
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "50call4.nc", 1354, 1558);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1354, 1559):(void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 924);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 925));
    }
                neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 934);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 935);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 936);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right6 = (self->size); if(__neo_div_right6 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right6; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 937);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 938);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 939);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 940);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 941);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 942);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 943);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 944);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 945);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 946);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 947);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 948);
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
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4168, 949);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 950);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4168, 951);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right7 = (self->size); if(__neo_div_right7 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right7; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 4180, 952);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4180, 953);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4180, 954);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4187, 955);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 956);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4187, 957);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4191, 958);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 959);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4191, 960);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4195, 961);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 962);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4195, 963);
    return __result_obj__0;
}

static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sInnerAttribute* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sInnerAttribute*  result  ;
    char*  __dec_obj91  ;
    char*  __dec_obj92  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sInnerAttribute* )come_increment_ref_count((struct sInnerAttribute *)come_calloc(1, sizeof(struct sInnerAttribute )*(1), "sInnerAttribute_clone", 5, 998, "struct sInnerAttribute* "), "sInnerAttribute_clone", 5, 999);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj91=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sInnerAttribute_clone", 7, 1000, "char* "), "sInnerAttribute_clone", 7, 1002);
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "sInnerAttribute_clone", 7, 1001);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->attr!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj92=result->attr,
        result->attr=(char* )come_increment_ref_count((char* )come_memdup(self->attr, "sInnerAttribute_clone", 9, 1003, "char* "), "sInnerAttribute_clone", 9, 1005);
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0, "sInnerAttribute_clone", 9, 1004);
    }
        __result_obj__0 = result;
    come_call_finalizer(sInnerAttribute_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sInnerAttribute_clone}", 10, 1006);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCSourceNode* sCSourceNode_clone(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sCSourceNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCSourceNode*  result  ;
    char*  __dec_obj93  ;
    char*  __dec_obj94  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCSourceNode* )come_increment_ref_count((struct sCSourceNode *)come_calloc(1, sizeof(struct sCSourceNode )*(1), "sCSourceNode_clone", 5, 1021, "struct sCSourceNode* "), "sCSourceNode_clone", 5, 1022);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj93=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCSourceNode_clone", 7, 1023, "char* "), "sCSourceNode_clone", 7, 1025);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "sCSourceNode_clone", 7, 1024);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->contents!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj94=result->contents,
        result->contents=(char* )come_increment_ref_count((char* )come_memdup(self->contents, "sCSourceNode_clone", 9, 1026, "char* "), "sCSourceNode_clone", 9, 1028);
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "sCSourceNode_clone", 9, 1027);
    }
        __result_obj__0 = result;
    come_call_finalizer(sCSourceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCSourceNode_clone}", 10, 1029);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sComeCallNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComeCallNode*  result  ;
    char*  __dec_obj97  ;
    struct buffer*  __dec_obj98  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComeCallNode* )come_increment_ref_count((struct sComeCallNode *)come_calloc(1, sizeof(struct sComeCallNode )*(1), "sComeCallNode_clone", 5, 1076, "struct sComeCallNode* "), "sComeCallNode_clone", 5, 1077);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj97=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComeCallNode_clone", 7, 1078, "char* "), "sComeCallNode_clone", 7, 1080);
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "sComeCallNode_clone", 7, 1079);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->come_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj98=result->come_block,
        result->come_block=(struct buffer* )come_increment_ref_count(buffer_clone(self->come_block), "sComeCallNode_clone", 9, 1082);
        come_call_finalizer(buffer_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComeCallNode_clone", 9, 1081);
    }
    if(self!=((void*)0)) {
        result->come_block_sline=self->come_block_sline;
    }
        __result_obj__0 = result;
    come_call_finalizer(sComeCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sComeCallNode_clone}", 11, 1083);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sComeJoinNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComeJoinNode*  result  ;
    char*  __dec_obj99  ;
    struct sNode* __dec_obj100;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComeJoinNode* )come_increment_ref_count((struct sComeJoinNode *)come_calloc(1, sizeof(struct sComeJoinNode )*(1), "sComeJoinNode_clone", 5, 1099, "struct sComeJoinNode* "), "sComeJoinNode_clone", 5, 1100);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj99=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComeJoinNode_clone", 7, 1101, "char* "), "sComeJoinNode_clone", 7, 1103);
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "sComeJoinNode_clone", 7, 1102);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj100=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sComeJoinNode_clone", 9, 1105);
        (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0, (void*)0, "sComeJoinNode_clone", 9, 1104) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sComeJoinNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sComeJoinNode_clone}", 10, 1106);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(self, "./neo-c.h", 1544, 1118);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 1119);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1544, 1120);
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sBlock$ph* litem;
    struct sBlock*  __dec_obj102  ;
    struct list_item$1sBlock$ph* litem_46;
    struct sBlock*  __dec_obj103  ;
    struct list_item$1sBlock$ph* litem_47;
    struct sBlock*  __dec_obj104  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_46, 0, sizeof(litem_46));
    memset(&litem_47, 0, sizeof(litem_47));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1590, 1131);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1593, 1132, "struct list_item$1sBlock$ph*"))), "./neo-c.h", 1593, 1133);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj102=litem->item,
        litem->item=(struct sBlock* )come_increment_ref_count(item, "./neo-c.h", 1597, 1135);
        come_call_finalizer(sBlock_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1597, 1134);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_46=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1603, 1136, "struct list_item$1sBlock$ph*"))), "./neo-c.h", 1603, 1137);
        litem_46->prev=self->head;
        litem_46->next=((void*)0);
        __dec_obj103=litem_46->item,
        litem_46->item=(struct sBlock* )come_increment_ref_count(item, "./neo-c.h", 1607, 1139);
        come_call_finalizer(sBlock_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1607, 1138);
        self->tail=litem_46;
        self->head->next=litem_46;
    }
    else {
        __right_value0 = (void*)0;
        litem_47=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1613, 1140, "struct list_item$1sBlock$ph*"))), "./neo-c.h", 1613, 1141);
        litem_47->prev=self->tail;
        litem_47->next=((void*)0);
        __dec_obj104=litem_47->item,
        litem_47->item=(struct sBlock* )come_increment_ref_count(item, "./neo-c.h", 1617, 1143);
        come_call_finalizer(sBlock_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1617, 1142);
        self->tail->next=litem_47;
        self->tail=litem_47;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1625, 1144);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sComePollNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComePollNode*  result  ;
    char*  __dec_obj105  ;
    struct list$1sNode$ph* __dec_obj106;
    struct list$1sBlock$ph* __dec_obj119;
    struct sBlock*  __dec_obj120  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComePollNode* )come_increment_ref_count((struct sComePollNode *)come_calloc(1, sizeof(struct sComePollNode )*(1), "sComePollNode_clone", 5, 1157, "struct sComePollNode* "), "sComePollNode_clone", 5, 1158);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj105=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComePollNode_clone", 7, 1159, "char* "), "sComePollNode_clone", 7, 1161);
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "sComePollNode_clone", 7, 1160);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->vars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj106=result->vars,
        result->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars), "sComePollNode_clone", 9, 1163);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_clone", 9, 1162);
    }
    if(self!=((void*)0)&&self->blocks!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj119=result->blocks,
        result->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks), "sComePollNode_clone", 10, 1328);
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_clone", 10, 1327);
    }
    if(self!=((void*)0)&&self->else_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj120=result->else_block,
        result->else_block=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->else_block), "sComePollNode_clone", 11, 1330);
        come_call_finalizer(sBlock_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_clone", 11, 1329);
    }
    if(self!=((void*)0)) {
        result->time_out=self->time_out;
    }
        __result_obj__0 = result;
    come_call_finalizer(sComePollNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sComePollNode_clone}", 13, 1331);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sBlock$ph* result;
    struct list_item$1sBlock$ph* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 1164);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 1165);
        return __result_obj__0;
    }
    result=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "./neo-c.h", 1572, 1166, "struct list$1sBlock$ph*"), "./neo-c.h", 1572, 1167)), "./neo-c.h", 1572, 1168);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock* )come_increment_ref_count(sBlock_clone(it->item), "./neo-c.h", 1577, 1322));
        }
        else {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock* )come_increment_ref_count(sBlock_clone(it->item), "./neo-c.h", 1580, 1323));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 1324);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 1325);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 1326);
    return __result_obj__0;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj107;
    struct sVarTable*  __dec_obj118  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 1169);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 1170);
        return __result_obj__0;
    }
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 1171, "struct sBlock* "), "sBlock_clone", 5, 1172);
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj107=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes), "sBlock_clone", 6, 1184);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 1183);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj118=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 1318);
        come_call_finalizer(sVarTable_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 1317);
    }
    if(self!=((void*)0)) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 1319);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 1320);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 1321);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* result;
    struct list_item$1sNode$ph* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1570, 1173);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1570, 1174);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1572, 1175, "struct list$1sNode$ph*"), "./neo-c.h", 1572, 1176)), "./neo-c.h", 1572, 1177);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1577, 1178));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1580, 1179));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1586, 1180);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 1181);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1586, 1182);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj117;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 1185);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 1186);
        return __result_obj__0;
    }
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 1187, "struct sVarTable* "), "sVarTable_clone", 5, 1188);
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj117=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars), "sVarTable_clone", 13, 1313);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 13, 1312);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mParent=self->mParent;
    }
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 1314);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 1315);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 1316);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj109;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    memset(&it2, 0, sizeof(it2));
    if(self==((void*)0)) {
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 3559, 1189);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 8, 1195);
        return __result_obj__0;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./neo-c.h", 3562, 1196, "struct map$2char$phsVar$ph*"), "./neo-c.h", 3562, 1212)), "./neo-c.h", 3562, 1213);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj109=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3564, 1214, "struct list$1char$ph*"), "./neo-c.h", 3564, 1215)), "./neo-c.h", 3564, 1217);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3564, 1216);
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3570, 1233),(_Bool)1), "./neo-c.h", 3570, 1234);
        if(1&&1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3573, 1274, "char* "), "./neo-c.h", 3573, 1275),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3573, 1294),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3576, 1295, "char* "), "./neo-c.h", 3576, 1296),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3576, 1297),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3579, 1298),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3579, 1299),(_Bool)0);
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3582, 1300),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3582, 1301),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3586, 1302);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3586, 1303);
    }
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "./neo-c.h", 3586, 1304);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3586, 1305);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3586, 1306);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_48;
    memset(&i, 0, sizeof(i));
    memset(&i_48, 0, sizeof(i_48));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3509, 1190);
            }
        }
    }
    come_free((char*)self->items);
    for(i_48=0    ;i_48<self->size;i_48++){
        if(self->item_existance[i_48]) {
            if(1) {
                (self->keys[i_48] = come_decrement_ref_count(self->keys[i_48], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3518, 1191));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3524, 1192);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 1193));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3527, 1194));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj108;
    struct map$2char$phsVar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3455, 1197, "char** "))), "./neo-c.h", 3455, 1198);
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "./neo-c.h", 3456, 1199, "struct sVar** "))), "./neo-c.h", 3456, 1200);
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3457, 1201, "unsigned int*"))), "./neo-c.h", 3457, 1202);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool* )come_increment_ref_count(((_Bool* )(__right_value0=(_Bool *)come_calloc(1, sizeof(_Bool )*(1*(128)), "./neo-c.h", 3458, 1203, "_Bool* "))), "./neo-c.h", 3458, 1204);
    for(i=0    ;i<128;i++){
        self->hashes[i]=0;
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj108=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3469, 1205, "struct list$1char$ph*"), "./neo-c.h", 3469, 1206)), "./neo-c.h", 3469, 1208);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3469, 1207);
    self->it=0;
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "./neo-c.h", 3473, 1209);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3473, 1210);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3473, 1211);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_49  ;
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
    memset(&result_49,0,sizeof(char* ));
        __result_obj__0 = result_49;
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
    char*  result_50  ;
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
    memset(&result_50,0,sizeof(char* ));
        __result_obj__0 = result_50;
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
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3627, 1218);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3627, 1219);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3627, 1220);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right8 = (self->size); if(__neo_div_right8 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right8; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 3640, 1221);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3640, 1222);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3640, 1223);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3647, 1224);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3647, 1225);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3647, 1226);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3651, 1227);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3651, 1228);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3651, 1229);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3655, 1230);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3655, 1231);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3655, 1232);
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4086, 1235));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4086, 1236);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    add_to_key_list=(_Bool)0;
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right10 = (self->size); if(__neo_div_right10 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right10; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                map$2char$phsVar$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4105, 1251));
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4106, 1252);
                }
                else {
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4112, 1253);
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4113, 1254);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4136, 1255);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4142, 1256);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4156, 1271));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4159, 1272));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4159, 1273);
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
    int i_51;
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
    memset(&i_51, 0, sizeof(i_51));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&n, 0, sizeof(n));
    old_size=self->size;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3925, 1237, "char** "))), "./neo-c.h", 3925, 1238);
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "./neo-c.h", 3926, 1239, "struct sVar** "))), "./neo-c.h", 3926, 1240);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3927, 1241, "unsigned int*"))), "./neo-c.h", 3927, 1242);
    __right_value0 = (void*)0;
    item_existance=(_Bool* )come_increment_ref_count(((_Bool* )(__right_value0=(_Bool *)come_calloc(1, sizeof(_Bool )*(1*(size)), "./neo-c.h", 3928, 1243, "_Bool* "))), "./neo-c.h", 3928, 1244);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(i_51=0    ;i_51<old_size;i_51++){
        if(!self->item_existance[i_51]) {
            continue;
        }
        key_hash=self->hashes[i_51];
        hash=({ __typeof__(size) __neo_div_right9 = (size); if(__neo_div_right9 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right9; });
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
                keys[n]=self->keys[i_51];
                items[n]=self->items[i_51];
                len++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3970, 1245));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3971, 1246));
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
    struct list_item$1char$ph* it_52;
    int i_53;
    struct list_item$1char$ph* prev_it_54;
    struct list_item$1char$ph* it_55;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_56;
    struct list_item$1char$ph* prev_it_57;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_52, 0, sizeof(it_52));
    memset(&i_53, 0, sizeof(i_53));
    memset(&prev_it_54, 0, sizeof(prev_it_54));
    memset(&it_55, 0, sizeof(it_55));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_56, 0, sizeof(i_56));
    memset(&prev_it_57, 0, sizeof(prev_it_57));
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2001, 1248);
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
        it_52=self->head;
        i_53=0;
        while(it_52!=((void*)0)) {
            if(i_53==head) {
                self->tail=it_52->prev;
                self->tail->next=((void*)0);
            }
            if(i_53>=head) {
                prev_it_54=it_52;
                it_52=it_52->next;
                i_53++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_54, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2031, 1249);
                self->len--;
            }
            else {
                it_52=it_52->next;
                i_53++;
            }
        }
    }
    else {
        it_55=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_56=0;
        while(it_55!=((void*)0)) {
            if(i_56==head) {
                head_prev_it=it_55->prev;
            }
            if(i_56==tail) {
                tail_it=it_55;
            }
            if(i_56>=head&&i_56<tail) {
                prev_it_57=it_55;
                it_55=it_55->next;
                i_56++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2064, 1250);
                self->len--;
            }
            else {
                it_55=it_55->next;
                i_56++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1923, 1247);
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
    char*  __dec_obj110  ;
    struct list_item$1char$ph* litem_58;
    char*  __dec_obj111  ;
    struct list_item$1char$ph* litem_59;
    char*  __dec_obj112  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_58, 0, sizeof(litem_58));
    memset(&litem_59, 0, sizeof(litem_59));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1674, 1257));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1678, 1258, "struct list_item$1char$ph*"))), "./neo-c.h", 1678, 1259);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj110=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1682, 1261);
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1682, 1260);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_58=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1688, 1262, "struct list_item$1char$ph*"))), "./neo-c.h", 1688, 1263);
        litem_58->prev=self->head;
        litem_58->next=((void*)0);
        __dec_obj111=litem_58->item,
        litem_58->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1692, 1265);
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1692, 1264);
        self->tail=litem_58;
        self->head->next=litem_58;
    }
    else {
        __right_value0 = (void*)0;
        litem_59=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1698, 1266, "struct list_item$1char$ph*"))), "./neo-c.h", 1698, 1267);
        litem_59->prev=self->tail;
        litem_59->next=((void*)0);
        __dec_obj112=litem_59->item,
        litem_59->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1702, 1269);
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1702, 1268);
        self->tail->next=litem_59;
        self->tail=litem_59;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1710, 1270));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj113  ;
    char*  __dec_obj114  ;
    struct sType*  __dec_obj115  ;
    char*  __dec_obj116  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 1276);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 1277);
        return __result_obj__0;
    }
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 1278, "struct sVar* "), "sVar_clone", 5, 1279);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj113=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 1280, "char* "), "sVar_clone", 6, 1282);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 1281);
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj114=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 1283, "char* "), "sVar_clone", 7, 1285);
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 1284);
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj115=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 1287);
        come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 1286);
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
        __dec_obj116=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 1288, "char* "), "sVar_clone", 12, 1290);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 1289);
    }
    if(self!=((void*)0)) {
        result->no_output_come_code=self->no_output_come_code;
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 1291);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 1292);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 1293);
    return __result_obj__0;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_60;
    memset(&i, 0, sizeof(i));
    memset(&i_60, 0, sizeof(i_60));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3509, 1307);
            }
        }
    }
    come_free((char*)self->items);
    for(i_60=0    ;i_60<self->size;i_60++){
        if(self->item_existance[i_60]) {
            if(1) {
                (self->keys[i_60] = come_decrement_ref_count(self->keys[i_60], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3518, 1308));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3524, 1309);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 1310));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3527, 1311));
            neo_current_frame = fr.prev;
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sFuncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFuncNode*  result  ;
    char*  __dec_obj121  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFuncNode* )come_increment_ref_count((struct sFuncNode *)come_calloc(1, sizeof(struct sFuncNode )*(1), "sFuncNode_clone", 5, 1347, "struct sFuncNode* "), "sFuncNode_clone", 5, 1348);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj121=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFuncNode_clone", 7, 1349, "char* "), "sFuncNode_clone", 7, 1351);
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "sFuncNode_clone", 7, 1350);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFuncNode_clone}", 9, 1352);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sLineNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLineNode*  result  ;
    char*  __dec_obj122  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLineNode* )come_increment_ref_count((struct sLineNode *)come_calloc(1, sizeof(struct sLineNode )*(1), "sLineNode_clone", 5, 1362, "struct sLineNode* "), "sLineNode_clone", 5, 1363);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj122=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLineNode_clone", 7, 1364, "char* "), "sLineNode_clone", 7, 1366);
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0, "sLineNode_clone", 7, 1365);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLineNode_clone}", 9, 1367);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sSNameNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSNameNode*  result  ;
    char*  __dec_obj123  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSNameNode* )come_increment_ref_count((struct sSNameNode *)come_calloc(1, sizeof(struct sSNameNode )*(1), "sSNameNode_clone", 5, 1377, "struct sSNameNode* "), "sSNameNode_clone", 5, 1378);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj123=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSNameNode_clone", 7, 1379, "char* "), "sSNameNode_clone", 7, 1381);
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "sSNameNode_clone", 7, 1380);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSNameNode_clone}", 9, 1382);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sCallerFuncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerFuncNode*  result  ;
    char*  __dec_obj124  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerFuncNode* )come_increment_ref_count((struct sCallerFuncNode *)come_calloc(1, sizeof(struct sCallerFuncNode )*(1), "sCallerFuncNode_clone", 5, 1392, "struct sCallerFuncNode* "), "sCallerFuncNode_clone", 5, 1393);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj124=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCallerFuncNode_clone", 7, 1394, "char* "), "sCallerFuncNode_clone", 7, 1396);
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0, "sCallerFuncNode_clone", 7, 1395);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCallerFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCallerFuncNode_clone}", 9, 1397);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sCallerLineNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerLineNode*  result  ;
    char*  __dec_obj125  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerLineNode* )come_increment_ref_count((struct sCallerLineNode *)come_calloc(1, sizeof(struct sCallerLineNode )*(1), "sCallerLineNode_clone", 5, 1407, "struct sCallerLineNode* "), "sCallerLineNode_clone", 5, 1408);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj125=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCallerLineNode_clone", 7, 1409, "char* "), "sCallerLineNode_clone", 7, 1411);
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "sCallerLineNode_clone", 7, 1410);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCallerLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCallerLineNode_clone}", 9, 1412);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sCallerSNameNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerSNameNode*  result  ;
    char*  __dec_obj126  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerSNameNode* )come_increment_ref_count((struct sCallerSNameNode *)come_calloc(1, sizeof(struct sCallerSNameNode )*(1), "sCallerSNameNode_clone", 5, 1422, "struct sCallerSNameNode* "), "sCallerSNameNode_clone", 5, 1423);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj126=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCallerSNameNode_clone", 7, 1424, "char* "), "sCallerSNameNode_clone", 7, 1426);
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "sCallerSNameNode_clone", 7, 1425);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCallerSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCallerSNameNode_clone}", 9, 1427);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVarArgTypeName* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sVarArgTypeName*  result  ;
    char*  __dec_obj127  ;
    struct sType*  __dec_obj128  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sVarArgTypeName* )come_increment_ref_count((struct sVarArgTypeName *)come_calloc(1, sizeof(struct sVarArgTypeName )*(1), "sVarArgTypeName_clone", 5, 1440, "struct sVarArgTypeName* "), "sVarArgTypeName_clone", 5, 1441);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj127=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sVarArgTypeName_clone", 7, 1442, "char* "), "sVarArgTypeName_clone", 7, 1444);
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "sVarArgTypeName_clone", 7, 1443);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj128=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sVarArgTypeName_clone", 9, 1446);
        come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarArgTypeName_clone", 9, 1445);
    }
        __result_obj__0 = result;
    come_call_finalizer(sVarArgTypeName_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarArgTypeName_clone}", 10, 1447);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sInlineAssembler* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sInlineAssembler*  result  ;
    char*  __dec_obj129  ;
    char*  __dec_obj130  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sInlineAssembler* )come_increment_ref_count((struct sInlineAssembler *)come_calloc(1, sizeof(struct sInlineAssembler )*(1), "sInlineAssembler_clone", 5, 1486, "struct sInlineAssembler* "), "sInlineAssembler_clone", 5, 1487);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj129=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sInlineAssembler_clone", 7, 1488, "char* "), "sInlineAssembler_clone", 7, 1490);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "sInlineAssembler_clone", 7, 1489);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->source!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj130=result->source,
        result->source=(char* )come_increment_ref_count((char* )come_memdup(self->source, "sInlineAssembler_clone", 9, 1491, "char* "), "sInlineAssembler_clone", 9, 1493);
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "sInlineAssembler_clone", 9, 1492);
    }
    if(self!=((void*)0)) {
        result->volatile_=self->volatile_;
    }
        __result_obj__0 = result;
    come_call_finalizer(sInlineAssembler_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sInlineAssembler_clone}", 11, 1494);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

